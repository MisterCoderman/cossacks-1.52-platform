#include "recomp.h"

/* FUN_10009d90 @ 0x11b99d90 (23 bytes, 9 insns) */
void f_11b99d90(void) {
  FTRACE(0x11b99d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b99d90 push ebp */
  push32((uint32_t)(EBP));
  /* 11b99d91 mov ebp, esp */
  EBP = (ESP);
  /* 11b99d93 add esp, -0x20 */
  { uint32_t _a=(ESP),_b=(0xffffffe0u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b99d96 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11b99d99 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b99d9c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11b99d9f mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b99da2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b99da5 jmp 0x11b99db0 */
  jmp_ind(0x11b99db0u); return;
}

/* __startOneArgErrorHandling @ 0x11b99da7 (60 bytes, 23 insns) */
void f_11b99da7(void) {
  FTRACE(0x11b99da7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b99da7 push ebp */
  push32((uint32_t)(EBP));
  /* 11b99da8 mov ebp, esp */
  EBP = (ESP);
  /* 11b99daa add esp, -0x20 */
  { uint32_t _a=(ESP),_b=(0xffffffe0u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b99dad mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11b99db0 fstp qword ptr [ebp - 8] */
  wf64((uint32_t)(EBP + -0x8), FPU_ST(0));
  (void)fpu_pop();
  /* 11b99db3 mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 11b99db6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b99db9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b99dbc mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11b99dbf mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11b99dc2 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11b99dc5 lea ecx, [ebp - 0x20] */
  ECX = ((uint32_t)(EBP + -0x20));
  /* 11b99dc8 push eax */
  push32((uint32_t)(EAX));
  /* 11b99dc9 push ecx */
  push32((uint32_t)(ECX));
  /* 11b99dca push edx */
  push32((uint32_t)(EDX));
  /* 11b99dcb call 0x11ba0970 */
  push32(0x11b99dd0u); f_11ba0970();
  /* 11b99dd0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b99dd3 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 11b99dd6 cmp word ptr [ebp + 8], 0x27f */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11b99ddc je 0x11b99de1 */
  if (C.zf) goto L_11b99de1;
  /* 11b99dde fldcw word ptr [ebp + 8] */
  C.fcw = r16((uint32_t)(EBP + 0x8));
L_11b99de1:;
  /* 11b99de1 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b99de2 ret  */
  ESPCHK(0x11b99da7u, _esp0);
  ESP += 4; return;
}

/* __setdefaultprecision @ 0x11b99df0 (23 bytes, 8 insns) */
void f_11b99df0(void) {
  FTRACE(0x11b99df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b99df0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b99df1 mov ebp, esp */
  EBP = (ESP);
  /* 11b99df3 push 0x30000 */
  push32((uint32_t)(0x30000u));
  /* 11b99df8 push 0x10000 */
  push32((uint32_t)(0x10000u));
  /* 11b99dfd call 0x11ba0b80 */
  push32(0x11b99e02u); f_11ba0b80();
  /* 11b99e02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b99e05 pop ebp */
  EBP = (pop32());
  /* 11b99e06 ret  */
  ESPCHK(0x11b99df0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009e10 @ 0x11b99e10 (94 bytes, 30 insns) */
void f_11b99e10(void) {
  FTRACE(0x11b99e10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b99e10 push ebp */
  push32((uint32_t)(EBP));
  /* 11b99e11 mov ebp, esp */
  EBP = (ESP);
  /* 11b99e13 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b99e16 push ebx */
  push32((uint32_t)(EBX));
  /* 11b99e17 push esi */
  push32((uint32_t)(ESI));
  /* 11b99e18 push edi */
  push32((uint32_t)(EDI));
  /* 11b99e19 mov dword ptr [ebp - 0x18], 0x80000000 */
  w32((uint32_t)(EBP + -0x18), (0x80000000u));
  /* 11b99e20 mov dword ptr [ebp - 0x14], 0x4147ffff */
  w32((uint32_t)(EBP + -0x14), (0x4147ffffu));
  /* 11b99e27 mov dword ptr [ebp - 8], 0xc0000000 */
  w32((uint32_t)(EBP + -0x8), (0xc0000000u));
  /* 11b99e2e mov dword ptr [ebp - 4], 0x4150017e */
  w32((uint32_t)(EBP + -0x4), (0x4150017eu));
  /* 11b99e35 fld qword ptr [ebp - 8] */
  fpu_push(rf64((uint32_t)(EBP + -0x8)));
  /* 11b99e38 fdiv qword ptr [ebp - 0x18] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(EBP + -0x18)));
  /* 11b99e3b fmul qword ptr [ebp - 0x18] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x18)));
  /* 11b99e3e fsubr qword ptr [ebp - 8] */
  FPU_ST(0) = (rf64((uint32_t)(EBP + -0x8))) - FPU_ST(0);
  /* 11b99e41 fstp qword ptr [ebp - 0x10] */
  wf64((uint32_t)(EBP + -0x10), FPU_ST(0));
  (void)fpu_pop();
  /* 11b99e44 fld qword ptr [ebp - 0x10] */
  fpu_push(rf64((uint32_t)(EBP + -0x10)));
  /* 11b99e47 fcomp qword ptr [0x11bc86e8] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11bc86e8)));
  (void)fpu_pop();
  /* 11b99e4d fnstsw ax */
  AX = fpu_status();
  /* 11b99e4f test ah, 0x41 */
  { uint32_t _r=(AH)&(0x41u); fl_logic(_r,8); }
  /* 11b99e52 jne 0x11b99e5d */
  if (!C.zf) goto L_11b99e5d;
  /* 11b99e54 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 11b99e5b jmp 0x11b99e64 */
  goto L_11b99e64;
L_11b99e5d:;
  /* 11b99e5d mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
L_11b99e64:;
  /* 11b99e64 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b99e67 pop edi */
  EDI = (pop32());
  /* 11b99e68 pop esi */
  ESI = (pop32());
  /* 11b99e69 pop ebx */
  EBX = (pop32());
  /* 11b99e6a mov esp, ebp */
  ESP = (EBP);
  /* 11b99e6c pop ebp */
  EBP = (pop32());
  /* 11b99e6d ret  */
  ESPCHK(0x11b99e10u, _esp0);
  ESP += 4; return;
}

/* __ms_p5_mp_test_fdiv @ 0x11b99e70 (66 bytes, 22 insns) */
void f_11b99e70(void) {
  FTRACE(0x11b99e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b99e70 push ebp */
  push32((uint32_t)(EBP));
  /* 11b99e71 mov ebp, esp */
  EBP = (ESP);
  /* 11b99e73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b99e76 push 0x11bc870c */
  push32((uint32_t)(0x11bc870cu));
  /* 11b99e7b call dword ptr [0x11bd041c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd041c))), 0x11b99e81u);
  /* 11b99e81 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b99e84 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b99e88 je 0x11b99ea9 */
  if (C.zf) goto L_11b99ea9;
  /* 11b99e8a push 0x11bc86f0 */
  push32((uint32_t)(0x11bc86f0u));
  /* 11b99e8f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b99e92 push eax */
  push32((uint32_t)(EAX));
  /* 11b99e93 call dword ptr [0x11bd030c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd030c))), 0x11b99e99u);
  /* 11b99e99 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b99e9c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b99ea0 je 0x11b99ea9 */
  if (C.zf) goto L_11b99ea9;
  /* 11b99ea2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b99ea4 call dword ptr [ebp - 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x8))), 0x11b99ea7u);
  /* 11b99ea7 jmp 0x11b99eae */
  goto L_11b99eae;
L_11b99ea9:;
  /* 11b99ea9 call 0x11b99e10 */
  push32(0x11b99eaeu); f_11b99e10();
L_11b99eae:;
  /* 11b99eae mov esp, ebp */
  ESP = (EBP);
  /* 11b99eb0 pop ebp */
  EBP = (pop32());
  /* 11b99eb1 ret  */
  ESPCHK(0x11b99e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10009ec0 @ 0x11b99ec0 (168 bytes, 59 insns) */
void f_11b99ec0(void) {
  FTRACE(0x11b99ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b99ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b99ec1 mov ebp, esp */
  EBP = (ESP);
  /* 11b99ec3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b99ec6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b99ec9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b99ecc push ecx */
  push32((uint32_t)(ECX));
  /* 11b99ecd call 0x11ba1060 */
  push32(0x11b99ed2u); f_11ba1060();
  /* 11b99ed2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b99ed5 cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b99ed8 je 0x11b99f20 */
  if (C.zf) goto L_11b99f20;
L_11b99eda:;
  /* 11b99eda mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b99edd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b99ee0 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11b99ee3 cmp dword ptr [0x11bcc000], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11bcc000))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b99eea jle 0x11b99f02 */
  if ((C.zf||C.sf!=C.of)) goto L_11b99f02;
  /* 11b99eec push 4 */
  push32((uint32_t)(0x4u));
  /* 11b99eee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b99ef1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b99ef4 push ecx */
  push32((uint32_t)(ECX));
  /* 11b99ef5 call 0x11ba0f90 */
  push32(0x11b99efau); f_11ba0f90();
  /* 11b99efa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b99efd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b99f00 jmp 0x11b99f1a */
  goto L_11b99f1a;
L_11b99f02:;
  /* 11b99f02 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b99f05 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11b99f08 mov ecx, dword ptr [0x11bcc00c] */
  ECX = (r32((uint32_t)(0x11bcc00c)));
  /* 11b99f0e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b99f10 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11b99f14 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11b99f17 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11b99f1a:;
  /* 11b99f1a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b99f1e jne 0x11b99eda */
  if (!C.zf) goto L_11b99eda;
L_11b99f20:;
  /* 11b99f20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b99f23 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11b99f25 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11b99f28 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b99f2b mov al, byte ptr [0x11bcc004] */
  AL = (r8((uint32_t)(0x11bcc004)));
  /* 11b99f30 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11b99f32 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b99f35 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b99f38 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11b99f3b:;
  /* 11b99f3b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b99f3e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11b99f40 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 11b99f43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b99f46 mov dl, byte ptr [ebp - 8] */
  DL = (r8((uint32_t)(EBP + -0x8)));
  /* 11b99f49 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11b99f4b mov al, byte ptr [ebp - 4] */
  AL = (r8((uint32_t)(EBP + -0x4)));
  /* 11b99f4e mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11b99f51 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b99f54 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11b99f57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b99f5a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b99f5d mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11b99f60 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b99f62 jne 0x11b99f3b */
  if (!C.zf) goto L_11b99f3b;
  /* 11b99f64 mov esp, ebp */
  ESP = (EBP);
  /* 11b99f66 pop ebp */
  EBP = (pop32());
  /* 11b99f67 ret  */
  ESPCHK(0x11b99ec0u, _esp0);
  ESP += 4; return;
}

/* __cropzeros @ 0x11b99f70 (215 bytes, 78 insns) */
void f_11b99f70(void) {
  FTRACE(0x11b99f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b99f70 push ebp */
  push32((uint32_t)(EBP));
  /* 11b99f71 mov ebp, esp */
  EBP = (ESP);
  /* 11b99f73 push ecx */
  push32((uint32_t)(ECX));
L_11b99f74:;
  /* 11b99f74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b99f77 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b99f7a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b99f7c je 0x11b99f9a */
  if (C.zf) goto L_11b99f9a;
  /* 11b99f7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b99f81 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11b99f84 movsx ecx, byte ptr [0x11bcc004] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11bcc004))));
  /* 11b99f8b cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b99f8d je 0x11b99f9a */
  if (C.zf) goto L_11b99f9a;
  /* 11b99f8f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b99f92 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b99f95 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11b99f98 jmp 0x11b99f74 */
  goto L_11b99f74;
L_11b99f9a:;
  /* 11b99f9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b99f9d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b99fa0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b99fa3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b99fa6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11b99fa9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b99fab je 0x11b9a043 */
  if (C.zf) goto L_11b9a043;
L_11b99fb1:;
  /* 11b99fb1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b99fb4 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b99fb7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b99fb9 je 0x11b99fdc */
  if (C.zf) goto L_11b99fdc;
  /* 11b99fbb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b99fbe movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11b99fc1 cmp eax, 0x65 */
  { uint32_t _a=(EAX),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b99fc4 je 0x11b99fdc */
  if (C.zf) goto L_11b99fdc;
  /* 11b99fc6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b99fc9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11b99fcc cmp edx, 0x45 */
  { uint32_t _a=(EDX),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b99fcf je 0x11b99fdc */
  if (C.zf) goto L_11b99fdc;
  /* 11b99fd1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b99fd4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b99fd7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11b99fda jmp 0x11b99fb1 */
  goto L_11b99fb1;
L_11b99fdc:;
  /* 11b99fdc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b99fdf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b99fe2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b99fe5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b99fe8 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11b99feb:;
  /* 11b99feb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b99fee movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b99ff1 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b99ff4 jne 0x11b9a001 */
  if (!C.zf) goto L_11b9a001;
  /* 11b99ff6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b99ff9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b99ffc mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11b99fff jmp 0x11b99feb */
  goto L_11b99feb;
L_11b9a001:;
  /* 11b9a001 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9a004 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b9a007 movsx edx, byte ptr [0x11bcc004] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11bcc004))));
  /* 11b9a00e cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a010 jne 0x11b9a01b */
  if (!C.zf) goto L_11b9a01b;
  /* 11b9a012 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9a015 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9a018 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11b9a01b:;
  /* 11b9a01b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9a01e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a021 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11b9a024 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9a027 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a02a mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11b9a02c mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11b9a02e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9a031 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11b9a034 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a037 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a03a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b9a03d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9a03f je 0x11b9a043 */
  if (C.zf) goto L_11b9a043;
  /* 11b9a041 jmp 0x11b9a01b */
  goto L_11b9a01b;
L_11b9a043:;
  /* 11b9a043 mov esp, ebp */
  ESP = (EBP);
  /* 11b9a045 pop ebp */
  EBP = (pop32());
  /* 11b9a046 ret  */
  ESPCHK(0x11b99f70u, _esp0);
  ESP += 4; return;
}

/* __positive @ 0x11b9a050 (45 bytes, 16 insns) */
void f_11b9a050(void) {
  FTRACE(0x11b9a050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9a050 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9a051 mov ebp, esp */
  EBP = (ESP);
  /* 11b9a053 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9a054 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9a057 fld qword ptr [eax] */
  fpu_push(rf64((uint32_t)(EAX)));
  /* 11b9a059 fcomp qword ptr [0x11bc8718] */
  fpu_cmp(FPU_ST(0), rf64((uint32_t)(0x11bc8718)));
  (void)fpu_pop();
  /* 11b9a05f fnstsw ax */
  AX = fpu_status();
  /* 11b9a061 test ah, 1 */
  { uint32_t _r=(AH)&(0x1u); fl_logic(_r,8); }
  /* 11b9a064 jne 0x11b9a06f */
  if (!C.zf) goto L_11b9a06f;
  /* 11b9a066 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11b9a06d jmp 0x11b9a076 */
  goto L_11b9a076;
L_11b9a06f:;
  /* 11b9a06f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11b9a076:;
  /* 11b9a076 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a079 mov esp, ebp */
  ESP = (EBP);
  /* 11b9a07b pop ebp */
  EBP = (pop32());
  /* 11b9a07c ret  */
  ESPCHK(0x11b9a050u, _esp0);
  ESP += 4; return;
}

/* __fassign @ 0x11b9a080 (72 bytes, 29 insns) */
void f_11b9a080(void) {
  FTRACE(0x11b9a080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9a080 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9a081 mov ebp, esp */
  EBP = (ESP);
  /* 11b9a083 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9a086 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a08a je 0x11b9a0ac */
  if (C.zf) goto L_11b9a0ac;
  /* 11b9a08c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9a08f push eax */
  push32((uint32_t)(EAX));
  /* 11b9a090 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11b9a093 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9a094 call 0x11ba1950 */
  push32(0x11b9a099u); f_11ba1950();
  /* 11b9a099 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a09c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9a09f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9a0a2 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11b9a0a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a0a7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11b9a0aa jmp 0x11b9a0c4 */
  goto L_11b9a0c4;
L_11b9a0ac:;
  /* 11b9a0ac mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9a0af push edx */
  push32((uint32_t)(EDX));
  /* 11b9a0b0 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11b9a0b3 push eax */
  push32((uint32_t)(EAX));
  /* 11b9a0b4 call 0x11ba19d0 */
  push32(0x11b9a0b9u); f_11ba19d0();
  /* 11b9a0b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a0bc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9a0bf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9a0c2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
L_11b9a0c4:;
  /* 11b9a0c4 mov esp, ebp */
  ESP = (EBP);
  /* 11b9a0c6 pop ebp */
  EBP = (pop32());
  /* 11b9a0c7 ret  */
  ESPCHK(0x11b9a080u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a0d0 @ 0x11b9a0d0 (118 bytes, 49 insns) */
void f_11b9a0d0(void) {
  FTRACE(0x11b9a0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9a0d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9a0d1 mov ebp, esp */
  EBP = (ESP);
  /* 11b9a0d3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9a0d6 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11b9a0d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b9a0dc lea ecx, [ebp - 0x2c] */
  ECX = ((uint32_t)(EBP + -0x2c));
  /* 11b9a0df push ecx */
  push32((uint32_t)(ECX));
  /* 11b9a0e0 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11b9a0e3 push edx */
  push32((uint32_t)(EDX));
  /* 11b9a0e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9a0e7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b9a0ea push ecx */
  push32((uint32_t)(ECX));
  /* 11b9a0eb mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11b9a0ed push edx */
  push32((uint32_t)(EDX));
  /* 11b9a0ee call 0x11ba1b10 */
  push32(0x11b9a0f3u); f_11ba1b10();
  /* 11b9a0f3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a0f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a0f9 push eax */
  push32((uint32_t)(EAX));
  /* 11b9a0fa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9a0fd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a100 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9a101 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a104 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9a106 cmp dword ptr [edx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a109 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11b9a10c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9a10f add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a111 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b9a113 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a117 setg dl */
  DL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 11b9a11a add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a11c push ecx */
  push32((uint32_t)(ECX));
  /* 11b9a11d call 0x11ba1a10 */
  push32(0x11b9a122u); f_11ba1a10();
  /* 11b9a122 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a125 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9a127 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a12a push eax */
  push32((uint32_t)(EAX));
  /* 11b9a12b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9a12e push ecx */
  push32((uint32_t)(ECX));
  /* 11b9a12f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9a132 push edx */
  push32((uint32_t)(EDX));
  /* 11b9a133 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9a136 push eax */
  push32((uint32_t)(EAX));
  /* 11b9a137 call 0x11b9a150 */
  push32(0x11b9a13cu); f_11b9a150();
  /* 11b9a13c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a13f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9a142 mov esp, ebp */
  ESP = (EBP);
  /* 11b9a144 pop ebp */
  EBP = (pop32());
  /* 11b9a145 ret  */
  ESPCHK(0x11b9a0d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a150 @ 0x11b9a150 (358 bytes, 128 insns) */
void f_11b9a150(void) {
  FTRACE(0x11b9a150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9a150 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9a151 mov ebp, esp */
  EBP = (ESP);
  /* 11b9a153 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9a156 movsx eax, byte ptr [ebp + 0x18] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x18))));
  /* 11b9a15a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9a15c je 0x11b9a187 */
  if (C.zf) goto L_11b9a187;
  /* 11b9a15e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9a161 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b9a163 cmp dword ptr [ecx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a166 sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11b9a169 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9a16c add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a16e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b9a171 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b9a173 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a177 setg cl */
  CL = (((!C.zf&&C.sf==C.of)) ? 1u : 0u);
  /* 11b9a17a push ecx */
  push32((uint32_t)(ECX));
  /* 11b9a17b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a17e push edx */
  push32((uint32_t)(EDX));
  /* 11b9a17f call 0x11b9a5c0 */
  push32(0x11b9a184u); f_11b9a5c0();
  /* 11b9a184 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9a187:;
  /* 11b9a187 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9a18a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b9a18d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9a190 cmp dword ptr [ecx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a193 jne 0x11b9a1a4 */
  if (!C.zf) goto L_11b9a1a4;
  /* 11b9a195 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a198 mov byte ptr [edx], 0x2d */
  w8((uint32_t)(EDX), (0x2du));
  /* 11b9a19b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a19e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a1a1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b9a1a4:;
  /* 11b9a1a4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a1a8 jle 0x11b9a1c8 */
  if ((C.zf||C.sf!=C.of)) goto L_11b9a1c8;
  /* 11b9a1aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a1ad mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a1b0 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11b9a1b3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11b9a1b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a1b8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a1bb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b9a1be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a1c1 mov al, byte ptr [0x11bcc004] */
  AL = (r8((uint32_t)(0x11bcc004)));
  /* 11b9a1c6 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
L_11b9a1c8:;
  /* 11b9a1c8 push 0x11bc8720 */
  push32((uint32_t)(0x11bc8720u));
  /* 11b9a1cd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a1d0 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a1d3 movsx edx, byte ptr [ebp + 0x18] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x18))));
  /* 11b9a1d7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b9a1d9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9a1db inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11b9a1dc add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a1de push ecx */
  push32((uint32_t)(ECX));
  /* 11b9a1df call 0x11ba0000 */
  push32(0x11b9a1e4u); f_11ba0000();
  /* 11b9a1e4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a1e7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b9a1ea cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a1ee je 0x11b9a1f6 */
  if (C.zf) goto L_11b9a1f6;
  /* 11b9a1f0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a1f3 mov byte ptr [eax], 0x45 */
  w8((uint32_t)(EAX), (0x45u));
L_11b9a1f6:;
  /* 11b9a1f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a1f9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a1fc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b9a1ff mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9a202 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11b9a205 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b9a208 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a20b je 0x11b9a2af */
  if (C.zf) goto L_11b9a2af;
  /* 11b9a211 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9a214 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b9a217 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9a21a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b9a21d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a221 jge 0x11b9a231 */
  if ((C.sf==C.of)) goto L_11b9a231;
  /* 11b9a223 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9a226 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b9a228 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b9a22b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a22e mov byte ptr [edx], 0x2d */
  w8((uint32_t)(EDX), (0x2du));
L_11b9a231:;
  /* 11b9a231 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a234 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a237 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b9a23a cmp dword ptr [ebp - 8], 0x64 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a23e jl 0x11b9a265 */
  if ((C.sf!=C.of)) goto L_11b9a265;
  /* 11b9a240 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9a243 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b9a244 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11b9a249 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b9a24b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a24e mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11b9a250 add cl, al */
  { uint32_t _a=(CL),_b=(AL),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11b9a252 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a255 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11b9a257 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9a25a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b9a25b mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11b9a260 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b9a262 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11b9a265:;
  /* 11b9a265 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a268 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a26b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b9a26e cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a272 jl 0x11b9a299 */
  if ((C.sf!=C.of)) goto L_11b9a299;
  /* 11b9a274 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9a277 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b9a278 mov ecx, 0xa */
  ECX = (0xau);
  /* 11b9a27d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b9a27f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a282 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11b9a284 add cl, al */
  { uint32_t _a=(CL),_b=(AL),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11b9a286 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a289 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11b9a28b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9a28e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b9a28f mov ecx, 0xa */
  ECX = (0xau);
  /* 11b9a294 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b9a296 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11b9a299:;
  /* 11b9a299 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a29c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a29f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b9a2a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a2a5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11b9a2a7 add cl, byte ptr [ebp - 8] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EBP + -0x8))),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11b9a2aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a2ad mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
L_11b9a2af:;
  /* 11b9a2af mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9a2b2 mov esp, ebp */
  ESP = (EBP);
  /* 11b9a2b4 pop ebp */
  EBP = (pop32());
  /* 11b9a2b5 ret  */
  ESPCHK(0x11b9a150u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2c0 @ 0x11b9a2c0 (106 bytes, 44 insns) */
void f_11b9a2c0(void) {
  FTRACE(0x11b9a2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9a2c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9a2c1 mov ebp, esp */
  EBP = (ESP);
  /* 11b9a2c3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9a2c6 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11b9a2c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b9a2cc lea ecx, [ebp - 0x2c] */
  ECX = ((uint32_t)(EBP + -0x2c));
  /* 11b9a2cf push ecx */
  push32((uint32_t)(ECX));
  /* 11b9a2d0 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11b9a2d3 push edx */
  push32((uint32_t)(EDX));
  /* 11b9a2d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9a2d7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b9a2da push ecx */
  push32((uint32_t)(ECX));
  /* 11b9a2db mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11b9a2dd push edx */
  push32((uint32_t)(EDX));
  /* 11b9a2de call 0x11ba1b10 */
  push32(0x11b9a2e3u); f_11ba1b10();
  /* 11b9a2e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a2e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a2e9 push eax */
  push32((uint32_t)(EAX));
  /* 11b9a2ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a2ed mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9a2f0 add edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a2f3 push edx */
  push32((uint32_t)(EDX));
  /* 11b9a2f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a2f7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b9a2f9 cmp dword ptr [eax], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a2fc sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11b9a2ff mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9a302 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a304 push edx */
  push32((uint32_t)(EDX));
  /* 11b9a305 call 0x11ba1a10 */
  push32(0x11b9a30au); f_11ba1a10();
  /* 11b9a30a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a30d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9a30f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a312 push eax */
  push32((uint32_t)(EAX));
  /* 11b9a313 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9a316 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9a317 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9a31a push edx */
  push32((uint32_t)(EDX));
  /* 11b9a31b call 0x11b9a330 */
  push32(0x11b9a320u); f_11b9a330();
  /* 11b9a320 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a323 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9a326 mov esp, ebp */
  ESP = (EBP);
  /* 11b9a328 pop ebp */
  EBP = (pop32());
  /* 11b9a329 ret  */
  ESPCHK(0x11b9a2c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a330 @ 0x11b9a330 (317 bytes, 113 insns) */
void f_11b9a330(void) {
  FTRACE(0x11b9a330u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9a330 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9a331 mov ebp, esp */
  EBP = (ESP);
  /* 11b9a333 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9a336 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9a339 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b9a33c sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9a33f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b9a342 movsx edx, byte ptr [ebp + 0x14] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x14))));
  /* 11b9a346 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9a348 je 0x11b9a383 */
  if (C.zf) goto L_11b9a383;
  /* 11b9a34a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9a34d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b9a34f cmp dword ptr [eax], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a352 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11b9a355 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9a358 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a35a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b9a35d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9a360 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a363 jne 0x11b9a383 */
  if (!C.zf) goto L_11b9a383;
  /* 11b9a365 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a368 add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a36b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b9a36e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9a371 mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 11b9a374 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9a377 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a37a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b9a37d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9a380 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_11b9a383:;
  /* 11b9a383 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9a386 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b9a389 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9a38c cmp dword ptr [eax], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a38f jne 0x11b9a3a0 */
  if (!C.zf) goto L_11b9a3a0;
  /* 11b9a391 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a394 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11b9a397 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a39a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a39d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11b9a3a0:;
  /* 11b9a3a0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9a3a3 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a3a7 jg 0x11b9a3c8 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b9a3c8;
  /* 11b9a3a9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b9a3ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a3ae push ecx */
  push32((uint32_t)(ECX));
  /* 11b9a3af call 0x11b9a5c0 */
  push32(0x11b9a3b4u); f_11b9a5c0();
  /* 11b9a3b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a3b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a3ba mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 11b9a3bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a3c0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a3c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b9a3c6 jmp 0x11b9a3d4 */
  goto L_11b9a3d4;
L_11b9a3c8:;
  /* 11b9a3c8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9a3cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a3ce add edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a3d1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11b9a3d4:;
  /* 11b9a3d4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a3d8 jle 0x11b9a466 */
  if ((C.zf||C.sf!=C.of)) goto L_11b9a466;
  /* 11b9a3de push 1 */
  push32((uint32_t)(0x1u));
  /* 11b9a3e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a3e3 push eax */
  push32((uint32_t)(EAX));
  /* 11b9a3e4 call 0x11b9a5c0 */
  push32(0x11b9a3e9u); f_11b9a5c0();
  /* 11b9a3e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a3ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a3ef mov dl, byte ptr [0x11bcc004] */
  DL = (r8((uint32_t)(0x11bcc004)));
  /* 11b9a3f5 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11b9a3f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a3fa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a3fd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b9a400 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9a403 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a407 jge 0x11b9a466 */
  if ((C.sf==C.of)) goto L_11b9a466;
  /* 11b9a409 movsx edx, byte ptr [ebp + 0x14] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x14))));
  /* 11b9a40d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9a40f je 0x11b9a41e */
  if (C.zf) goto L_11b9a41e;
  /* 11b9a411 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9a414 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b9a417 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b9a419 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11b9a41c jmp 0x11b9a444 */
  goto L_11b9a444;
L_11b9a41e:;
  /* 11b9a41e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9a421 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b9a424 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b9a426 cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a429 jge 0x11b9a433 */
  if ((C.sf==C.of)) goto L_11b9a433;
  /* 11b9a42b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9a42e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11b9a431 jmp 0x11b9a43e */
  goto L_11b9a43e;
L_11b9a433:;
  /* 11b9a433 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9a436 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b9a439 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b9a43b mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11b9a43e:;
  /* 11b9a43e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b9a441 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11b9a444:;
  /* 11b9a444 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9a447 push edx */
  push32((uint32_t)(EDX));
  /* 11b9a448 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a44b push eax */
  push32((uint32_t)(EAX));
  /* 11b9a44c call 0x11b9a5c0 */
  push32(0x11b9a451u); f_11b9a5c0();
  /* 11b9a451 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a454 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9a457 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9a458 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11b9a45a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a45d push edx */
  push32((uint32_t)(EDX));
  /* 11b9a45e call 0x11ba1d00 */
  push32(0x11b9a463u); f_11ba1d00();
  /* 11b9a463 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9a466:;
  /* 11b9a466 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9a469 mov esp, ebp */
  ESP = (EBP);
  /* 11b9a46b pop ebp */
  EBP = (pop32());
  /* 11b9a46c ret  */
  ESPCHK(0x11b9a330u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a470 @ 0x11b9a470 (229 bytes, 89 insns) */
void f_11b9a470(void) {
  FTRACE(0x11b9a470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9a470 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9a471 mov ebp, esp */
  EBP = (ESP);
  /* 11b9a473 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9a476 mov byte ptr [ebp - 0x30], 0 */
  w8((uint32_t)(EBP + -0x30), (0x0u));
  /* 11b9a47a lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11b9a47d mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 11b9a480 lea ecx, [ebp - 0x2c] */
  ECX = ((uint32_t)(EBP + -0x2c));
  /* 11b9a483 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9a484 lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11b9a487 push edx */
  push32((uint32_t)(EDX));
  /* 11b9a488 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9a48b mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b9a48e push ecx */
  push32((uint32_t)(ECX));
  /* 11b9a48f mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11b9a491 push edx */
  push32((uint32_t)(EDX));
  /* 11b9a492 call 0x11ba1b10 */
  push32(0x11b9a497u); f_11ba1b10();
  /* 11b9a497 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a49a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b9a49d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b9a4a0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9a4a3 mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
  /* 11b9a4a6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b9a4a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9a4ab cmp dword ptr [edx], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a4ae sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11b9a4b1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9a4b4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a4b6 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b9a4b9 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b9a4bc push edx */
  push32((uint32_t)(EDX));
  /* 11b9a4bd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9a4c0 push eax */
  push32((uint32_t)(EAX));
  /* 11b9a4c1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a4c4 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9a4c5 call 0x11ba1a10 */
  push32(0x11b9a4cau); f_11ba1a10();
  /* 11b9a4ca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a4cd mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b9a4d0 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b9a4d3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9a4d6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b9a4d8 cmp dword ptr [ebp - 0x34], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x34))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a4db setl cl */
  CL = (((C.sf!=C.of)) ? 1u : 0u);
  /* 11b9a4de mov byte ptr [ebp - 0x30], cl */
  w8((uint32_t)(EBP + -0x30), (CL));
  /* 11b9a4e1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b9a4e4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b9a4e7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9a4ea mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
  /* 11b9a4ed cmp dword ptr [ebp - 0x34], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x34))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a4f1 jl 0x11b9a4fb */
  if ((C.sf!=C.of)) goto L_11b9a4fb;
  /* 11b9a4f3 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11b9a4f6 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a4f9 jl 0x11b9a517 */
  if ((C.sf!=C.of)) goto L_11b9a517;
L_11b9a4fb:;
  /* 11b9a4fb push 1 */
  push32((uint32_t)(0x1u));
  /* 11b9a4fd mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b9a500 push edx */
  push32((uint32_t)(EDX));
  /* 11b9a501 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9a504 push eax */
  push32((uint32_t)(EAX));
  /* 11b9a505 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9a508 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9a509 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9a50c push edx */
  push32((uint32_t)(EDX));
  /* 11b9a50d call 0x11b9a150 */
  push32(0x11b9a512u); f_11b9a150();
  /* 11b9a512 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a515 jmp 0x11b9a551 */
  goto L_11b9a551;
L_11b9a517:;
  /* 11b9a517 movsx eax, byte ptr [ebp - 0x30] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x30))));
  /* 11b9a51b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9a51d je 0x11b9a53b */
  if (C.zf) goto L_11b9a53b;
L_11b9a51f:;
  /* 11b9a51f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a522 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11b9a525 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a528 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a52b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b9a52e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9a530 je 0x11b9a534 */
  if (C.zf) goto L_11b9a534;
  /* 11b9a532 jmp 0x11b9a51f */
  goto L_11b9a51f;
L_11b9a534:;
  /* 11b9a534 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a537 mov byte ptr [ecx - 2], 0 */
  w8((uint32_t)(ECX + -0x2), (0x0u));
L_11b9a53b:;
  /* 11b9a53b push 1 */
  push32((uint32_t)(0x1u));
  /* 11b9a53d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b9a540 push edx */
  push32((uint32_t)(EDX));
  /* 11b9a541 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9a544 push eax */
  push32((uint32_t)(EAX));
  /* 11b9a545 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9a548 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9a549 call 0x11b9a330 */
  push32(0x11b9a54eu); f_11b9a330();
  /* 11b9a54e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9a551:;
  /* 11b9a551 mov esp, ebp */
  ESP = (EBP);
  /* 11b9a553 pop ebp */
  EBP = (pop32());
  /* 11b9a554 ret  */
  ESPCHK(0x11b9a470u, _esp0);
  ESP += 4; return;
}

/* __cfltcvt @ 0x11b9a560 (95 bytes, 40 insns) */
void f_11b9a560(void) {
  FTRACE(0x11b9a560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9a560 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9a561 mov ebp, esp */
  EBP = (ESP);
  /* 11b9a563 cmp dword ptr [ebp + 0x10], 0x65 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a567 je 0x11b9a56f */
  if (C.zf) goto L_11b9a56f;
  /* 11b9a569 cmp dword ptr [ebp + 0x10], 0x45 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a56d jne 0x11b9a589 */
  if (!C.zf) goto L_11b9a589;
L_11b9a56f:;
  /* 11b9a56f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9a572 push eax */
  push32((uint32_t)(EAX));
  /* 11b9a573 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9a576 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9a577 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9a57a push edx */
  push32((uint32_t)(EDX));
  /* 11b9a57b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9a57e push eax */
  push32((uint32_t)(EAX));
  /* 11b9a57f call 0x11b9a0d0 */
  push32(0x11b9a584u); f_11b9a0d0();
  /* 11b9a584 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a587 jmp 0x11b9a5bd */
  goto L_11b9a5bd;
L_11b9a589:;
  /* 11b9a589 cmp dword ptr [ebp + 0x10], 0x66 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a58d jne 0x11b9a5a5 */
  if (!C.zf) goto L_11b9a5a5;
  /* 11b9a58f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9a592 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9a593 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9a596 push edx */
  push32((uint32_t)(EDX));
  /* 11b9a597 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9a59a push eax */
  push32((uint32_t)(EAX));
  /* 11b9a59b call 0x11b9a2c0 */
  push32(0x11b9a5a0u); f_11b9a2c0();
  /* 11b9a5a0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a5a3 jmp 0x11b9a5bd */
  goto L_11b9a5bd;
L_11b9a5a5:;
  /* 11b9a5a5 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9a5a8 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9a5a9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9a5ac push edx */
  push32((uint32_t)(EDX));
  /* 11b9a5ad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9a5b0 push eax */
  push32((uint32_t)(EAX));
  /* 11b9a5b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9a5b4 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9a5b5 call 0x11b9a470 */
  push32(0x11b9a5bau); f_11b9a470();
  /* 11b9a5ba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9a5bd:;
  /* 11b9a5bd pop ebp */
  EBP = (pop32());
  /* 11b9a5be ret  */
  ESPCHK(0x11b9a560u, _esp0);
  ESP += 4; return;
}

/* __shift @ 0x11b9a5c0 (46 bytes, 19 insns) */
void f_11b9a5c0(void) {
  FTRACE(0x11b9a5c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9a5c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9a5c1 mov ebp, esp */
  EBP = (ESP);
  /* 11b9a5c3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a5c7 je 0x11b9a5ec */
  if (C.zf) goto L_11b9a5ec;
  /* 11b9a5c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9a5cc push eax */
  push32((uint32_t)(EAX));
  /* 11b9a5cd call 0x11b9fe80 */
  push32(0x11b9a5d2u); f_11b9fe80();
  /* 11b9a5d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a5d5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a5d8 push eax */
  push32((uint32_t)(EAX));
  /* 11b9a5d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9a5dc push ecx */
  push32((uint32_t)(ECX));
  /* 11b9a5dd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9a5e0 add edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a5e3 push edx */
  push32((uint32_t)(EDX));
  /* 11b9a5e4 call 0x11ba1d60 */
  push32(0x11b9a5e9u); f_11ba1d60();
  /* 11b9a5e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9a5ec:;
  /* 11b9a5ec pop ebp */
  EBP = (pop32());
  /* 11b9a5ed ret  */
  ESPCHK(0x11b9a5c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5f0 @ 0x11b9a5f0 (55 bytes, 16 insns) */
void f_11b9a5f0(void) {
  FTRACE(0x11b9a5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9a5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9a5f1 mov ebp, esp */
  EBP = (ESP);
  /* 11b9a5f3 mov eax, dword ptr [0x11bcbe8c] */
  EAX = (r32((uint32_t)(0x11bcbe8c)));
  /* 11b9a5f8 push eax */
  push32((uint32_t)(EAX));
  /* 11b9a5f9 call dword ptr [0x11bd0420] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0420))), 0x11b9a5ffu);
  /* 11b9a5ff mov ecx, dword ptr [0x11bcbe7c] */
  ECX = (r32((uint32_t)(0x11bcbe7c)));
  /* 11b9a605 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9a606 call dword ptr [0x11bd0420] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0420))), 0x11b9a60cu);
  /* 11b9a60c mov edx, dword ptr [0x11bcbe6c] */
  EDX = (r32((uint32_t)(0x11bcbe6c)));
  /* 11b9a612 push edx */
  push32((uint32_t)(EDX));
  /* 11b9a613 call dword ptr [0x11bd0420] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0420))), 0x11b9a619u);
  /* 11b9a619 mov eax, dword ptr [0x11bcbe4c] */
  EAX = (r32((uint32_t)(0x11bcbe4c)));
  /* 11b9a61e push eax */
  push32((uint32_t)(EAX));
  /* 11b9a61f call dword ptr [0x11bd0420] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0420))), 0x11b9a625u);
  /* 11b9a625 pop ebp */
  EBP = (pop32());
  /* 11b9a626 ret  */
  ESPCHK(0x11b9a5f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a630 @ 0x11b9a630 (159 bytes, 47 insns) */
void f_11b9a630(void) {
  FTRACE(0x11b9a630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9a630 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9a631 mov ebp, esp */
  EBP = (ESP);
  /* 11b9a633 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9a634 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b9a63b jmp 0x11b9a646 */
  goto L_11b9a646;
L_11b9a63d:;
  /* 11b9a63d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a640 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a643 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b9a646:;
  /* 11b9a646 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a64a jge 0x11b9a699 */
  if ((C.sf==C.of)) goto L_11b9a699;
  /* 11b9a64c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a64f cmp dword ptr [ecx*4 + 0x11bcbe48], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11bcbe48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a657 je 0x11b9a697 */
  if (C.zf) goto L_11b9a697;
  /* 11b9a659 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a65d je 0x11b9a697 */
  if (C.zf) goto L_11b9a697;
  /* 11b9a65f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a663 je 0x11b9a697 */
  if (C.zf) goto L_11b9a697;
  /* 11b9a665 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a669 je 0x11b9a697 */
  if (C.zf) goto L_11b9a697;
  /* 11b9a66b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a66f je 0x11b9a697 */
  if (C.zf) goto L_11b9a697;
  /* 11b9a671 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a674 mov eax, dword ptr [edx*4 + 0x11bcbe48] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11bcbe48)));
  /* 11b9a67b push eax */
  push32((uint32_t)(EAX));
  /* 11b9a67c call dword ptr [0x11bd0424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0424))), 0x11b9a682u);
  /* 11b9a682 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b9a684 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a687 mov edx, dword ptr [ecx*4 + 0x11bcbe48] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11bcbe48)));
  /* 11b9a68e push edx */
  push32((uint32_t)(EDX));
  /* 11b9a68f call 0x11b9b260 */
  push32(0x11b9a694u); f_11b9b260();
  /* 11b9a694 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9a697:;
  /* 11b9a697 jmp 0x11b9a63d */
  goto L_11b9a63d;
L_11b9a699:;
  /* 11b9a699 mov eax, dword ptr [0x11bcbe6c] */
  EAX = (r32((uint32_t)(0x11bcbe6c)));
  /* 11b9a69e push eax */
  push32((uint32_t)(EAX));
  /* 11b9a69f call dword ptr [0x11bd0424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0424))), 0x11b9a6a5u);
  /* 11b9a6a5 mov ecx, dword ptr [0x11bcbe7c] */
  ECX = (r32((uint32_t)(0x11bcbe7c)));
  /* 11b9a6ab push ecx */
  push32((uint32_t)(ECX));
  /* 11b9a6ac call dword ptr [0x11bd0424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0424))), 0x11b9a6b2u);
  /* 11b9a6b2 mov edx, dword ptr [0x11bcbe8c] */
  EDX = (r32((uint32_t)(0x11bcbe8c)));
  /* 11b9a6b8 push edx */
  push32((uint32_t)(EDX));
  /* 11b9a6b9 call dword ptr [0x11bd0424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0424))), 0x11b9a6bfu);
  /* 11b9a6bf mov eax, dword ptr [0x11bcbe4c] */
  EAX = (r32((uint32_t)(0x11bcbe4c)));
  /* 11b9a6c4 push eax */
  push32((uint32_t)(EAX));
  /* 11b9a6c5 call dword ptr [0x11bd0424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0424))), 0x11b9a6cbu);
  /* 11b9a6cb mov esp, ebp */
  ESP = (EBP);
  /* 11b9a6cd pop ebp */
  EBP = (pop32());
  /* 11b9a6ce ret  */
  ESPCHK(0x11b9a630u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a6d0 @ 0x11b9a6d0 (151 bytes, 46 insns) */
void f_11b9a6d0(void) {
  FTRACE(0x11b9a6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9a6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9a6d1 mov ebp, esp */
  EBP = (ESP);
  /* 11b9a6d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9a6d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9a6d7 cmp dword ptr [eax*4 + 0x11bcbe48], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11bcbe48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a6df jne 0x11b9a752 */
  if (!C.zf) goto L_11b9a752;
  /* 11b9a6e1 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 11b9a6e6 push 0x11bc8728 */
  push32((uint32_t)(0x11bc8728u));
  /* 11b9a6eb push 2 */
  push32((uint32_t)(0x2u));
  /* 11b9a6ed push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11b9a6ef call 0x11b9a7d0 */
  push32(0x11b9a6f4u); f_11b9a7d0();
  /* 11b9a6f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a6f7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b9a6fa cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a6fe jne 0x11b9a70a */
  if (!C.zf) goto L_11b9a70a;
  /* 11b9a700 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11b9a702 call 0x11b99240 */
  push32(0x11b9a707u); f_11b99240();
  /* 11b9a707 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9a70a:;
  /* 11b9a70a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11b9a70c call 0x11b9a6d0 */
  push32(0x11b9a711u); f_11b9a6d0();
  /* 11b9a711 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a714 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9a717 cmp dword ptr [ecx*4 + 0x11bcbe48], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11bcbe48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a71f jne 0x11b9a73a */
  if (!C.zf) goto L_11b9a73a;
  /* 11b9a721 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a724 push edx */
  push32((uint32_t)(EDX));
  /* 11b9a725 call dword ptr [0x11bd0420] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0420))), 0x11b9a72bu);
  /* 11b9a72b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9a72e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a731 mov dword ptr [eax*4 + 0x11bcbe48], ecx */
  w32((uint32_t)(EAX*4 + 0x11bcbe48), (ECX));
  /* 11b9a738 jmp 0x11b9a748 */
  goto L_11b9a748;
L_11b9a73a:;
  /* 11b9a73a push 2 */
  push32((uint32_t)(0x2u));
  /* 11b9a73c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a73f push edx */
  push32((uint32_t)(EDX));
  /* 11b9a740 call 0x11b9b260 */
  push32(0x11b9a745u); f_11b9b260();
  /* 11b9a745 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9a748:;
  /* 11b9a748 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11b9a74a call 0x11b9a770 */
  push32(0x11b9a74fu); f_11b9a770();
  /* 11b9a74f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9a752:;
  /* 11b9a752 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9a755 mov ecx, dword ptr [eax*4 + 0x11bcbe48] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11bcbe48)));
  /* 11b9a75c push ecx */
  push32((uint32_t)(ECX));
  /* 11b9a75d call dword ptr [0x11bd0410] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0410))), 0x11b9a763u);
  /* 11b9a763 mov esp, ebp */
  ESP = (EBP);
  /* 11b9a765 pop ebp */
  EBP = (pop32());
  /* 11b9a766 ret  */
  ESPCHK(0x11b9a6d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a770 @ 0x11b9a770 (22 bytes, 8 insns) */
void f_11b9a770(void) {
  FTRACE(0x11b9a770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9a770 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9a771 mov ebp, esp */
  EBP = (ESP);
  /* 11b9a773 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9a776 mov ecx, dword ptr [eax*4 + 0x11bcbe48] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11bcbe48)));
  /* 11b9a77d push ecx */
  push32((uint32_t)(ECX));
  /* 11b9a77e call dword ptr [0x11bd0428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0428))), 0x11b9a784u);
  /* 11b9a784 pop ebp */
  EBP = (pop32());
  /* 11b9a785 ret  */
  ESPCHK(0x11b9a770u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a790 @ 0x11b9a790 (26 bytes, 10 insns) */
void f_11b9a790(void) {
  FTRACE(0x11b9a790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9a790 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9a791 mov ebp, esp */
  EBP = (ESP);
  /* 11b9a793 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9a796 push eax */
  push32((uint32_t)(EAX));
  /* 11b9a797 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9a799 call dword ptr [0x11bd0430] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0430))), 0x11b9a79fu);
  /* 11b9a79f push 0xff */
  push32((uint32_t)(0xffu));
  /* 11b9a7a4 call dword ptr [0x11bd042c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd042c))), 0x11b9a7aau);
  /* 11b9a7aa pop ebp */
  EBP = (pop32());
  /* 11b9a7ab ret  */
  ESPCHK(0x11b9a790u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7b0 @ 0x11b9a7b0 (29 bytes, 13 insns) */
void f_11b9a7b0(void) {
  FTRACE(0x11b9a7b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9a7b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9a7b1 mov ebp, esp */
  EBP = (ESP);
  /* 11b9a7b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9a7b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9a7b7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b9a7b9 mov eax, dword ptr [0x11bce550] */
  EAX = (r32((uint32_t)(0x11bce550)));
  /* 11b9a7be push eax */
  push32((uint32_t)(EAX));
  /* 11b9a7bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9a7c2 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9a7c3 call 0x11b9a820 */
  push32(0x11b9a7c8u); f_11b9a820();
  /* 11b9a7c8 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a7cb pop ebp */
  EBP = (pop32());
  /* 11b9a7cc ret  */
  ESPCHK(0x11b9a7b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7d0 @ 0x11b9a7d0 (35 bytes, 16 insns) */
void f_11b9a7d0(void) {
  FTRACE(0x11b9a7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9a7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9a7d1 mov ebp, esp */
  EBP = (ESP);
  /* 11b9a7d3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9a7d6 push eax */
  push32((uint32_t)(EAX));
  /* 11b9a7d7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9a7da push ecx */
  push32((uint32_t)(ECX));
  /* 11b9a7db mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9a7de push edx */
  push32((uint32_t)(EDX));
  /* 11b9a7df mov eax, dword ptr [0x11bce550] */
  EAX = (r32((uint32_t)(0x11bce550)));
  /* 11b9a7e4 push eax */
  push32((uint32_t)(EAX));
  /* 11b9a7e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9a7e8 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9a7e9 call 0x11b9a820 */
  push32(0x11b9a7eeu); f_11b9a820();
  /* 11b9a7ee add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a7f1 pop ebp */
  EBP = (pop32());
  /* 11b9a7f2 ret  */
  ESPCHK(0x11b9a7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a800 @ 0x11b9a800 (27 bytes, 13 insns) */
void f_11b9a800(void) {
  FTRACE(0x11b9a800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9a800 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9a801 mov ebp, esp */
  EBP = (ESP);
  /* 11b9a803 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9a805 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9a807 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b9a809 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9a80c push eax */
  push32((uint32_t)(EAX));
  /* 11b9a80d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9a810 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9a811 call 0x11b9a820 */
  push32(0x11b9a816u); f_11b9a820();
  /* 11b9a816 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a819 pop ebp */
  EBP = (pop32());
  /* 11b9a81a ret  */
  ESPCHK(0x11b9a800u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a820 @ 0x11b9a820 (94 bytes, 38 insns) */
void f_11b9a820(void) {
  FTRACE(0x11b9a820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9a820 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9a821 mov ebp, esp */
  EBP = (ESP);
  /* 11b9a823 push ecx */
  push32((uint32_t)(ECX));
L_11b9a824:;
  /* 11b9a824 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b9a826 call 0x11b9a6d0 */
  push32(0x11b9a82bu); f_11b9a6d0();
  /* 11b9a82b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a82e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9a831 push eax */
  push32((uint32_t)(EAX));
  /* 11b9a832 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9a835 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9a836 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9a839 push edx */
  push32((uint32_t)(EDX));
  /* 11b9a83a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9a83d push eax */
  push32((uint32_t)(EAX));
  /* 11b9a83e call 0x11b9a8a0 */
  push32(0x11b9a843u); f_11b9a8a0();
  /* 11b9a843 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a846 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b9a849 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b9a84b call 0x11b9a770 */
  push32(0x11b9a850u); f_11b9a770();
  /* 11b9a850 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a853 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a857 jne 0x11b9a85f */
  if (!C.zf) goto L_11b9a85f;
  /* 11b9a859 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a85d jne 0x11b9a864 */
  if (!C.zf) goto L_11b9a864;
L_11b9a85f:;
  /* 11b9a85f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9a862 jmp 0x11b9a87a */
  goto L_11b9a87a;
L_11b9a864:;
  /* 11b9a864 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9a867 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9a868 call 0x11ba20f0 */
  push32(0x11b9a86du); f_11ba20f0();
  /* 11b9a86d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a870 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9a872 jne 0x11b9a878 */
  if (!C.zf) goto L_11b9a878;
  /* 11b9a874 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9a876 jmp 0x11b9a87a */
  goto L_11b9a87a;
L_11b9a878:;
  /* 11b9a878 jmp 0x11b9a824 */
  goto L_11b9a824;
L_11b9a87a:;
  /* 11b9a87a mov esp, ebp */
  ESP = (EBP);
  /* 11b9a87c pop ebp */
  EBP = (pop32());
  /* 11b9a87d ret  */
  ESPCHK(0x11b9a820u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a880 @ 0x11b9a880 (23 bytes, 11 insns) */
void f_11b9a880(void) {
  FTRACE(0x11b9a880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9a880 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9a881 mov ebp, esp */
  EBP = (ESP);
  /* 11b9a883 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9a885 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9a887 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b9a889 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9a88c push eax */
  push32((uint32_t)(EAX));
  /* 11b9a88d call 0x11b9a8a0 */
  push32(0x11b9a892u); f_11b9a8a0();
  /* 11b9a892 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a895 pop ebp */
  EBP = (pop32());
  /* 11b9a896 ret  */
  ESPCHK(0x11b9a880u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a8a0 @ 0x11b9a8a0 (787 bytes, 254 insns) */
void f_11b9a8a0(void) {
  FTRACE(0x11b9a8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9a8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9a8a1 mov ebp, esp */
  EBP = (ESP);
  /* 11b9a8a3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9a8a6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b9a8a7 push esi */
  push32((uint32_t)(ESI));
  /* 11b9a8a8 push edi */
  push32((uint32_t)(EDI));
  /* 11b9a8a9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11b9a8b0 mov eax, dword ptr [0x11bcbf08] */
  EAX = (r32((uint32_t)(0x11bcbf08)));
  /* 11b9a8b5 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11b9a8b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9a8ba je 0x11b9a8ec */
  if (C.zf) goto L_11b9a8ec;
L_11b9a8bc:;
  /* 11b9a8bc call 0x11b9b970 */
  push32(0x11b9a8c1u); f_11b9b970();
  /* 11b9a8c1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9a8c3 jne 0x11b9a8e6 */
  if (!C.zf) goto L_11b9a8e6;
  /* 11b9a8c5 push 0x11bc8818 */
  push32((uint32_t)(0x11bc8818u));
  /* 11b9a8ca push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9a8cc push 0x141 */
  push32((uint32_t)(0x141u));
  /* 11b9a8d1 push 0x11bc880c */
  push32((uint32_t)(0x11bc880cu));
  /* 11b9a8d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b9a8d8 call 0x11b99390 */
  push32(0x11b9a8ddu); f_11b99390();
  /* 11b9a8dd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a8e0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a8e3 jne 0x11b9a8e6 */
  if (!C.zf) goto L_11b9a8e6;
  /* 11b9a8e5 int3  */
  x86_unimpl("int3 @ 0x11b9a8e5");
L_11b9a8e6:;
  /* 11b9a8e6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b9a8e8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b9a8ea jne 0x11b9a8bc */
  if (!C.zf) goto L_11b9a8bc;
L_11b9a8ec:;
  /* 11b9a8ec mov edx, dword ptr [0x11bcbf0c] */
  EDX = (r32((uint32_t)(0x11bcbf0c)));
  /* 11b9a8f2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11b9a8f5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9a8f8 cmp eax, dword ptr [0x11bcbf10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11bcbf10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a8fe jne 0x11b9a901 */
  if (!C.zf) goto L_11b9a901;
  /* 11b9a900 int3  */
  x86_unimpl("int3 @ 0x11b9a900");
L_11b9a901:;
  /* 11b9a901 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9a904 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9a905 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9a908 push edx */
  push32((uint32_t)(EDX));
  /* 11b9a909 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9a90c push eax */
  push32((uint32_t)(EAX));
  /* 11b9a90d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9a910 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9a911 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9a914 push edx */
  push32((uint32_t)(EDX));
  /* 11b9a915 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9a917 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b9a919 call dword ptr [0x11bcc250] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bcc250))), 0x11b9a91fu);
  /* 11b9a91f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a922 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9a924 jne 0x11b9a984 */
  if (!C.zf) goto L_11b9a984;
  /* 11b9a926 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a92a je 0x11b9a957 */
  if (C.zf) goto L_11b9a957;
L_11b9a92c:;
  /* 11b9a92c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9a92f push eax */
  push32((uint32_t)(EAX));
  /* 11b9a930 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9a933 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9a934 push 0x11bc87d4 */
  push32((uint32_t)(0x11bc87d4u));
  /* 11b9a939 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9a93b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9a93d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9a93f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9a941 call 0x11b99390 */
  push32(0x11b9a946u); f_11b99390();
  /* 11b9a946 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a949 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a94c jne 0x11b9a94f */
  if (!C.zf) goto L_11b9a94f;
  /* 11b9a94e int3  */
  x86_unimpl("int3 @ 0x11b9a94e");
L_11b9a94f:;
  /* 11b9a94f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b9a951 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9a953 jne 0x11b9a92c */
  if (!C.zf) goto L_11b9a92c;
  /* 11b9a955 jmp 0x11b9a97d */
  goto L_11b9a97d;
L_11b9a957:;
  /* 11b9a957 push 0x11bc87b0 */
  push32((uint32_t)(0x11bc87b0u));
  /* 11b9a95c push 0x11bc87ac */
  push32((uint32_t)(0x11bc87acu));
  /* 11b9a961 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9a963 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9a965 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9a967 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9a969 call 0x11b99390 */
  push32(0x11b9a96eu); f_11b99390();
  /* 11b9a96e add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a971 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a974 jne 0x11b9a977 */
  if (!C.zf) goto L_11b9a977;
  /* 11b9a976 int3  */
  x86_unimpl("int3 @ 0x11b9a976");
L_11b9a977:;
  /* 11b9a977 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9a979 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9a97b jne 0x11b9a957 */
  if (!C.zf) goto L_11b9a957;
L_11b9a97d:;
  /* 11b9a97d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9a97f jmp 0x11b9abac */
  goto L_11b9abac;
L_11b9a984:;
  /* 11b9a984 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9a987 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b9a98d cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a990 je 0x11b9a9a6 */
  if (C.zf) goto L_11b9a9a6;
  /* 11b9a992 mov edx, dword ptr [0x11bcbf08] */
  EDX = (r32((uint32_t)(0x11bcbf08)));
  /* 11b9a998 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11b9a99b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9a99d jne 0x11b9a9a6 */
  if (!C.zf) goto L_11b9a9a6;
  /* 11b9a99f mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_11b9a9a6:;
  /* 11b9a9a6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a9aa ja 0x11b9a9b7 */
  if ((!C.cf&&!C.zf)) goto L_11b9a9b7;
  /* 11b9a9ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9a9af add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a9b2 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a9b5 jbe 0x11b9a9e3 */
  if ((C.cf||C.zf)) goto L_11b9a9e3;
L_11b9a9b7:;
  /* 11b9a9b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9a9ba push ecx */
  push32((uint32_t)(ECX));
  /* 11b9a9bb push 0x11bc8788 */
  push32((uint32_t)(0x11bc8788u));
  /* 11b9a9c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9a9c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9a9c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9a9c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b9a9c8 call 0x11b99390 */
  push32(0x11b9a9cdu); f_11b99390();
  /* 11b9a9cd add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9a9d0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a9d3 jne 0x11b9a9d6 */
  if (!C.zf) goto L_11b9a9d6;
  /* 11b9a9d5 int3  */
  x86_unimpl("int3 @ 0x11b9a9d5");
L_11b9a9d6:;
  /* 11b9a9d6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b9a9d8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9a9da jne 0x11b9a9b7 */
  if (!C.zf) goto L_11b9a9b7;
  /* 11b9a9dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9a9de jmp 0x11b9abac */
  goto L_11b9abac;
L_11b9a9e3:;
  /* 11b9a9e3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9a9e6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b9a9eb cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a9ee je 0x11b9aa30 */
  if (C.zf) goto L_11b9aa30;
  /* 11b9a9f0 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9a9f4 je 0x11b9aa30 */
  if (C.zf) goto L_11b9aa30;
  /* 11b9a9f6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9a9f9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b9a9ff cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9aa02 je 0x11b9aa30 */
  if (C.zf) goto L_11b9aa30;
  /* 11b9aa04 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9aa08 je 0x11b9aa30 */
  if (C.zf) goto L_11b9aa30;
L_11b9aa0a:;
  /* 11b9aa0a push 0x11bc8754 */
  push32((uint32_t)(0x11bc8754u));
  /* 11b9aa0f push 0x11bc87ac */
  push32((uint32_t)(0x11bc87acu));
  /* 11b9aa14 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9aa16 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9aa18 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9aa1a push 1 */
  push32((uint32_t)(0x1u));
  /* 11b9aa1c call 0x11b99390 */
  push32(0x11b9aa21u); f_11b99390();
  /* 11b9aa21 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9aa24 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9aa27 jne 0x11b9aa2a */
  if (!C.zf) goto L_11b9aa2a;
  /* 11b9aa29 int3  */
  x86_unimpl("int3 @ 0x11b9aa29");
L_11b9aa2a:;
  /* 11b9aa2a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b9aa2c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9aa2e jne 0x11b9aa0a */
  if (!C.zf) goto L_11b9aa0a;
L_11b9aa30:;
  /* 11b9aa30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9aa33 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9aa36 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11b9aa39 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b9aa3c push ecx */
  push32((uint32_t)(ECX));
  /* 11b9aa3d call 0x11ba21a0 */
  push32(0x11b9aa42u); f_11ba21a0();
  /* 11b9aa42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9aa45 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b9aa48 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9aa4c jne 0x11b9aa55 */
  if (!C.zf) goto L_11b9aa55;
  /* 11b9aa4e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9aa50 jmp 0x11b9abac */
  goto L_11b9abac;
L_11b9aa55:;
  /* 11b9aa55 mov edx, dword ptr [0x11bcbf0c] */
  EDX = (r32((uint32_t)(0x11bcbf0c)));
  /* 11b9aa5b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9aa5e mov dword ptr [0x11bcbf0c], edx */
  w32((uint32_t)(0x11bcbf0c), (EDX));
  /* 11b9aa64 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9aa68 je 0x11b9aab3 */
  if (C.zf) goto L_11b9aab3;
  /* 11b9aa6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9aa6d mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11b9aa73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9aa76 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11b9aa7d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9aa80 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11b9aa87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9aa8a mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 11b9aa91 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9aa94 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9aa97 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 11b9aa9a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9aa9d mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 11b9aaa4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9aaa7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 11b9aaae jmp 0x11b9ab53 */
  goto L_11b9ab53;
L_11b9aab3:;
  /* 11b9aab3 mov edx, dword ptr [0x11bce3cc] */
  EDX = (r32((uint32_t)(0x11bce3cc)));
  /* 11b9aab9 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9aabc mov dword ptr [0x11bce3cc], edx */
  w32((uint32_t)(0x11bce3cc), (EDX));
  /* 11b9aac2 mov eax, dword ptr [0x11bce3d4] */
  EAX = (r32((uint32_t)(0x11bce3d4)));
  /* 11b9aac7 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9aaca mov dword ptr [0x11bce3d4], eax */
  w32((uint32_t)(0x11bce3d4), (EAX));
  /* 11b9aacf mov ecx, dword ptr [0x11bce3d4] */
  ECX = (r32((uint32_t)(0x11bce3d4)));
  /* 11b9aad5 cmp ecx, dword ptr [0x11bce3d8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11bce3d8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9aadb jbe 0x11b9aae9 */
  if ((C.cf||C.zf)) goto L_11b9aae9;
  /* 11b9aadd mov edx, dword ptr [0x11bce3d4] */
  EDX = (r32((uint32_t)(0x11bce3d4)));
  /* 11b9aae3 mov dword ptr [0x11bce3d8], edx */
  w32((uint32_t)(0x11bce3d8), (EDX));
L_11b9aae9:;
  /* 11b9aae9 cmp dword ptr [0x11bce3d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce3d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9aaf0 je 0x11b9aaff */
  if (C.zf) goto L_11b9aaff;
  /* 11b9aaf2 mov eax, dword ptr [0x11bce3d0] */
  EAX = (r32((uint32_t)(0x11bce3d0)));
  /* 11b9aaf7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9aafa mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11b9aafd jmp 0x11b9ab08 */
  goto L_11b9ab08;
L_11b9aaff:;
  /* 11b9aaff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9ab02 mov dword ptr [0x11bce3c8], edx */
  w32((uint32_t)(0x11bce3c8), (EDX));
L_11b9ab08:;
  /* 11b9ab08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9ab0b mov ecx, dword ptr [0x11bce3d0] */
  ECX = (r32((uint32_t)(0x11bce3d0)));
  /* 11b9ab11 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11b9ab13 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9ab16 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 11b9ab1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9ab20 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9ab23 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11b9ab26 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9ab29 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9ab2c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 11b9ab2f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9ab32 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9ab35 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 11b9ab38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9ab3b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9ab3e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 11b9ab41 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9ab44 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9ab47 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 11b9ab4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9ab4d mov dword ptr [0x11bce3d0], ecx */
  w32((uint32_t)(0x11bce3d0), (ECX));
L_11b9ab53:;
  /* 11b9ab53 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b9ab55 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b9ab57 mov dl, byte ptr [0x11bcbf14] */
  DL = (r8((uint32_t)(0x11bcbf14)));
  /* 11b9ab5d push edx */
  push32((uint32_t)(EDX));
  /* 11b9ab5e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9ab61 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ab64 push eax */
  push32((uint32_t)(EAX));
  /* 11b9ab65 call 0x11ba1d00 */
  push32(0x11b9ab6au); f_11ba1d00();
  /* 11b9ab6a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ab6d push 4 */
  push32((uint32_t)(0x4u));
  /* 11b9ab6f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b9ab71 mov cl, byte ptr [0x11bcbf14] */
  CL = (r8((uint32_t)(0x11bcbf14)));
  /* 11b9ab77 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9ab78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9ab7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9ab7e lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 11b9ab82 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9ab83 call 0x11ba1d00 */
  push32(0x11b9ab88u); f_11ba1d00();
  /* 11b9ab88 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ab8b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9ab8e push edx */
  push32((uint32_t)(EDX));
  /* 11b9ab8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9ab91 mov al, byte ptr [0x11bcbf16] */
  AL = (r8((uint32_t)(0x11bcbf16)));
  /* 11b9ab96 push eax */
  push32((uint32_t)(EAX));
  /* 11b9ab97 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9ab9a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ab9d push ecx */
  push32((uint32_t)(ECX));
  /* 11b9ab9e call 0x11ba1d00 */
  push32(0x11b9aba3u); f_11ba1d00();
  /* 11b9aba3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9aba6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9aba9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11b9abac:;
  /* 11b9abac pop edi */
  EDI = (pop32());
  /* 11b9abad pop esi */
  ESI = (pop32());
  /* 11b9abae pop ebx */
  EBX = (pop32());
  /* 11b9abaf mov esp, ebp */
  ESP = (EBP);
  /* 11b9abb1 pop ebp */
  EBP = (pop32());
  /* 11b9abb2 ret  */
  ESPCHK(0x11b9a8a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000abc0 @ 0x11b9abc0 (27 bytes, 13 insns) */
void f_11b9abc0(void) {
  FTRACE(0x11b9abc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9abc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9abc1 mov ebp, esp */
  EBP = (ESP);
  /* 11b9abc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9abc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9abc7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b9abc9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9abcc push eax */
  push32((uint32_t)(EAX));
  /* 11b9abcd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9abd0 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9abd1 call 0x11b9abe0 */
  push32(0x11b9abd6u); f_11b9abe0();
  /* 11b9abd6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9abd9 pop ebp */
  EBP = (pop32());
  /* 11b9abda ret  */
  ESPCHK(0x11b9abc0u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x11b9abe0 (96 bytes, 37 insns) */
void f_11b9abe0(void) {
  FTRACE(0x11b9abe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9abe0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9abe1 mov ebp, esp */
  EBP = (ESP);
  /* 11b9abe3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9abe6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9abe9 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b9abed mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11b9abf0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9abf3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9abf4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9abf7 push edx */
  push32((uint32_t)(EDX));
  /* 11b9abf8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9abfb push eax */
  push32((uint32_t)(EAX));
  /* 11b9abfc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9abff push ecx */
  push32((uint32_t)(ECX));
  /* 11b9ac00 call 0x11b9a7d0 */
  push32(0x11b9ac05u); f_11b9a7d0();
  /* 11b9ac05 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ac08 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b9ac0b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9ac0f je 0x11b9ac39 */
  if (C.zf) goto L_11b9ac39;
  /* 11b9ac11 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9ac14 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11b9ac17 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9ac1a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ac1d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b9ac20:;
  /* 11b9ac20 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9ac23 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9ac26 jae 0x11b9ac39 */
  if (!C.cf) goto L_11b9ac39;
  /* 11b9ac28 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9ac2b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11b9ac2e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9ac31 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ac34 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b9ac37 jmp 0x11b9ac20 */
  goto L_11b9ac20;
L_11b9ac39:;
  /* 11b9ac39 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9ac3c mov esp, ebp */
  ESP = (EBP);
  /* 11b9ac3e pop ebp */
  EBP = (pop32());
  /* 11b9ac3f ret  */
  ESPCHK(0x11b9abe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac40 @ 0x11b9ac40 (27 bytes, 13 insns) */
void f_11b9ac40(void) {
  FTRACE(0x11b9ac40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9ac40 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9ac41 mov ebp, esp */
  EBP = (ESP);
  /* 11b9ac43 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9ac45 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9ac47 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b9ac49 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9ac4c push eax */
  push32((uint32_t)(EAX));
  /* 11b9ac4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9ac50 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9ac51 call 0x11b9ac60 */
  push32(0x11b9ac56u); f_11b9ac60();
  /* 11b9ac56 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ac59 pop ebp */
  EBP = (pop32());
  /* 11b9ac5a ret  */
  ESPCHK(0x11b9ac40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac60 @ 0x11b9ac60 (64 bytes, 27 insns) */
void f_11b9ac60(void) {
  FTRACE(0x11b9ac60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9ac60 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9ac61 mov ebp, esp */
  EBP = (ESP);
  /* 11b9ac63 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9ac64 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b9ac66 call 0x11b9a6d0 */
  push32(0x11b9ac6bu); f_11b9a6d0();
  /* 11b9ac6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ac6e push 1 */
  push32((uint32_t)(0x1u));
  /* 11b9ac70 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9ac73 push eax */
  push32((uint32_t)(EAX));
  /* 11b9ac74 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9ac77 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9ac78 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9ac7b push edx */
  push32((uint32_t)(EDX));
  /* 11b9ac7c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9ac7f push eax */
  push32((uint32_t)(EAX));
  /* 11b9ac80 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9ac83 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9ac84 call 0x11b9aca0 */
  push32(0x11b9ac89u); f_11b9aca0();
  /* 11b9ac89 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ac8c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b9ac8f push 9 */
  push32((uint32_t)(0x9u));
  /* 11b9ac91 call 0x11b9a770 */
  push32(0x11b9ac96u); f_11b9a770();
  /* 11b9ac96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ac99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9ac9c mov esp, ebp */
  ESP = (EBP);
  /* 11b9ac9e pop ebp */
  EBP = (pop32());
  /* 11b9ac9f ret  */
  ESPCHK(0x11b9ac60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aca0 @ 0x11b9aca0 (1297 bytes, 431 insns) */
void f_11b9aca0(void) {
  FTRACE(0x11b9aca0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9aca0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9aca1 mov ebp, esp */
  EBP = (ESP);
  /* 11b9aca3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9aca6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b9aca7 push esi */
  push32((uint32_t)(ESI));
  /* 11b9aca8 push edi */
  push32((uint32_t)(EDI));
  /* 11b9aca9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11b9acb0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9acb4 jne 0x11b9acd3 */
  if (!C.zf) goto L_11b9acd3;
  /* 11b9acb6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9acb9 push eax */
  push32((uint32_t)(EAX));
  /* 11b9acba mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9acbd push ecx */
  push32((uint32_t)(ECX));
  /* 11b9acbe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9acc1 push edx */
  push32((uint32_t)(EDX));
  /* 11b9acc2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9acc5 push eax */
  push32((uint32_t)(EAX));
  /* 11b9acc6 call 0x11b9a7d0 */
  push32(0x11b9accbu); f_11b9a7d0();
  /* 11b9accb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9acce jmp 0x11b9b1aa */
  goto L_11b9b1aa;
L_11b9acd3:;
  /* 11b9acd3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9acd7 je 0x11b9acf6 */
  if (C.zf) goto L_11b9acf6;
  /* 11b9acd9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9acdd jne 0x11b9acf6 */
  if (!C.zf) goto L_11b9acf6;
  /* 11b9acdf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9ace2 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9ace3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9ace6 push edx */
  push32((uint32_t)(EDX));
  /* 11b9ace7 call 0x11b9b260 */
  push32(0x11b9acecu); f_11b9b260();
  /* 11b9acec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9acef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9acf1 jmp 0x11b9b1aa */
  goto L_11b9b1aa;
L_11b9acf6:;
  /* 11b9acf6 mov eax, dword ptr [0x11bcbf08] */
  EAX = (r32((uint32_t)(0x11bcbf08)));
  /* 11b9acfb and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11b9acfe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9ad00 je 0x11b9ad32 */
  if (C.zf) goto L_11b9ad32;
L_11b9ad02:;
  /* 11b9ad02 call 0x11b9b970 */
  push32(0x11b9ad07u); f_11b9b970();
  /* 11b9ad07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9ad09 jne 0x11b9ad2c */
  if (!C.zf) goto L_11b9ad2c;
  /* 11b9ad0b push 0x11bc8818 */
  push32((uint32_t)(0x11bc8818u));
  /* 11b9ad10 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9ad12 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 11b9ad17 push 0x11bc880c */
  push32((uint32_t)(0x11bc880cu));
  /* 11b9ad1c push 2 */
  push32((uint32_t)(0x2u));
  /* 11b9ad1e call 0x11b99390 */
  push32(0x11b9ad23u); f_11b99390();
  /* 11b9ad23 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ad26 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9ad29 jne 0x11b9ad2c */
  if (!C.zf) goto L_11b9ad2c;
  /* 11b9ad2b int3  */
  x86_unimpl("int3 @ 0x11b9ad2b");
L_11b9ad2c:;
  /* 11b9ad2c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b9ad2e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b9ad30 jne 0x11b9ad02 */
  if (!C.zf) goto L_11b9ad02;
L_11b9ad32:;
  /* 11b9ad32 mov edx, dword ptr [0x11bcbf0c] */
  EDX = (r32((uint32_t)(0x11bcbf0c)));
  /* 11b9ad38 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11b9ad3b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b9ad3e cmp eax, dword ptr [0x11bcbf10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11bcbf10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9ad44 jne 0x11b9ad47 */
  if (!C.zf) goto L_11b9ad47;
  /* 11b9ad46 int3  */
  x86_unimpl("int3 @ 0x11b9ad46");
L_11b9ad47:;
  /* 11b9ad47 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9ad4a push ecx */
  push32((uint32_t)(ECX));
  /* 11b9ad4b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9ad4e push edx */
  push32((uint32_t)(EDX));
  /* 11b9ad4f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b9ad52 push eax */
  push32((uint32_t)(EAX));
  /* 11b9ad53 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9ad56 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9ad57 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9ad5a push edx */
  push32((uint32_t)(EDX));
  /* 11b9ad5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9ad5e push eax */
  push32((uint32_t)(EAX));
  /* 11b9ad5f push 2 */
  push32((uint32_t)(0x2u));
  /* 11b9ad61 call dword ptr [0x11bcc250] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bcc250))), 0x11b9ad67u);
  /* 11b9ad67 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ad6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9ad6c jne 0x11b9adcc */
  if (!C.zf) goto L_11b9adcc;
  /* 11b9ad6e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9ad72 je 0x11b9ad9f */
  if (C.zf) goto L_11b9ad9f;
L_11b9ad74:;
  /* 11b9ad74 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9ad77 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9ad78 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9ad7b push edx */
  push32((uint32_t)(EDX));
  /* 11b9ad7c push 0x11bc8994 */
  push32((uint32_t)(0x11bc8994u));
  /* 11b9ad81 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9ad83 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9ad85 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9ad87 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9ad89 call 0x11b99390 */
  push32(0x11b9ad8eu); f_11b99390();
  /* 11b9ad8e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ad91 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9ad94 jne 0x11b9ad97 */
  if (!C.zf) goto L_11b9ad97;
  /* 11b9ad96 int3  */
  x86_unimpl("int3 @ 0x11b9ad96");
L_11b9ad97:;
  /* 11b9ad97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9ad99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9ad9b jne 0x11b9ad74 */
  if (!C.zf) goto L_11b9ad74;
  /* 11b9ad9d jmp 0x11b9adc5 */
  goto L_11b9adc5;
L_11b9ad9f:;
  /* 11b9ad9f push 0x11bc8970 */
  push32((uint32_t)(0x11bc8970u));
  /* 11b9ada4 push 0x11bc87ac */
  push32((uint32_t)(0x11bc87acu));
  /* 11b9ada9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9adab push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9adad push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9adaf push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9adb1 call 0x11b99390 */
  push32(0x11b9adb6u); f_11b99390();
  /* 11b9adb6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9adb9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9adbc jne 0x11b9adbf */
  if (!C.zf) goto L_11b9adbf;
  /* 11b9adbe int3  */
  x86_unimpl("int3 @ 0x11b9adbe");
L_11b9adbf:;
  /* 11b9adbf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b9adc1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b9adc3 jne 0x11b9ad9f */
  if (!C.zf) goto L_11b9ad9f;
L_11b9adc5:;
  /* 11b9adc5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9adc7 jmp 0x11b9b1aa */
  goto L_11b9b1aa;
L_11b9adcc:;
  /* 11b9adcc cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9add0 jbe 0x11b9adfe */
  if ((C.cf||C.zf)) goto L_11b9adfe;
L_11b9add2:;
  /* 11b9add2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9add5 push edx */
  push32((uint32_t)(EDX));
  /* 11b9add6 push 0x11bc8940 */
  push32((uint32_t)(0x11bc8940u));
  /* 11b9addb push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9addd push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9addf push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9ade1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b9ade3 call 0x11b99390 */
  push32(0x11b9ade8u); f_11b99390();
  /* 11b9ade8 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9adeb cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9adee jne 0x11b9adf1 */
  if (!C.zf) goto L_11b9adf1;
  /* 11b9adf0 int3  */
  x86_unimpl("int3 @ 0x11b9adf0");
L_11b9adf1:;
  /* 11b9adf1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9adf3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9adf5 jne 0x11b9add2 */
  if (!C.zf) goto L_11b9add2;
  /* 11b9adf7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9adf9 jmp 0x11b9b1aa */
  goto L_11b9b1aa;
L_11b9adfe:;
  /* 11b9adfe cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9ae02 je 0x11b9ae46 */
  if (C.zf) goto L_11b9ae46;
  /* 11b9ae04 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9ae07 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b9ae0d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9ae10 je 0x11b9ae46 */
  if (C.zf) goto L_11b9ae46;
  /* 11b9ae12 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9ae15 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b9ae1b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9ae1e je 0x11b9ae46 */
  if (C.zf) goto L_11b9ae46;
L_11b9ae20:;
  /* 11b9ae20 push 0x11bc8754 */
  push32((uint32_t)(0x11bc8754u));
  /* 11b9ae25 push 0x11bc87ac */
  push32((uint32_t)(0x11bc87acu));
  /* 11b9ae2a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9ae2c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9ae2e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9ae30 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b9ae32 call 0x11b99390 */
  push32(0x11b9ae37u); f_11b99390();
  /* 11b9ae37 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ae3a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9ae3d jne 0x11b9ae40 */
  if (!C.zf) goto L_11b9ae40;
  /* 11b9ae3f int3  */
  x86_unimpl("int3 @ 0x11b9ae3f");
L_11b9ae40:;
  /* 11b9ae40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9ae42 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9ae44 jne 0x11b9ae20 */
  if (!C.zf) goto L_11b9ae20;
L_11b9ae46:;
  /* 11b9ae46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9ae49 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9ae4a call 0x11b9bdd0 */
  push32(0x11b9ae4fu); f_11b9bdd0();
  /* 11b9ae4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ae52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9ae54 jne 0x11b9ae77 */
  if (!C.zf) goto L_11b9ae77;
  /* 11b9ae56 push 0x11bc891c */
  push32((uint32_t)(0x11bc891cu));
  /* 11b9ae5b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9ae5d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 11b9ae62 push 0x11bc880c */
  push32((uint32_t)(0x11bc880cu));
  /* 11b9ae67 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b9ae69 call 0x11b99390 */
  push32(0x11b9ae6eu); f_11b99390();
  /* 11b9ae6e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ae71 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9ae74 jne 0x11b9ae77 */
  if (!C.zf) goto L_11b9ae77;
  /* 11b9ae76 int3  */
  x86_unimpl("int3 @ 0x11b9ae76");
L_11b9ae77:;
  /* 11b9ae77 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b9ae79 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9ae7b jne 0x11b9ae46 */
  if (!C.zf) goto L_11b9ae46;
  /* 11b9ae7d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9ae80 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9ae83 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b9ae86 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9ae89 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9ae8d jne 0x11b9ae96 */
  if (!C.zf) goto L_11b9ae96;
  /* 11b9ae8f mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_11b9ae96:;
  /* 11b9ae96 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9ae9a je 0x11b9aeda */
  if (C.zf) goto L_11b9aeda;
L_11b9ae9c:;
  /* 11b9ae9c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9ae9f cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9aea6 jne 0x11b9aeb1 */
  if (!C.zf) goto L_11b9aeb1;
  /* 11b9aea8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9aeab cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9aeaf je 0x11b9aed2 */
  if (C.zf) goto L_11b9aed2;
L_11b9aeb1:;
  /* 11b9aeb1 push 0x11bc88d4 */
  push32((uint32_t)(0x11bc88d4u));
  /* 11b9aeb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9aeb8 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 11b9aebd push 0x11bc880c */
  push32((uint32_t)(0x11bc880cu));
  /* 11b9aec2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b9aec4 call 0x11b99390 */
  push32(0x11b9aec9u); f_11b99390();
  /* 11b9aec9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9aecc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9aecf jne 0x11b9aed2 */
  if (!C.zf) goto L_11b9aed2;
  /* 11b9aed1 int3  */
  x86_unimpl("int3 @ 0x11b9aed1");
L_11b9aed2:;
  /* 11b9aed2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b9aed4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b9aed6 jne 0x11b9ae9c */
  if (!C.zf) goto L_11b9ae9c;
  /* 11b9aed8 jmp 0x11b9af3e */
  goto L_11b9af3e;
L_11b9aeda:;
  /* 11b9aeda mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9aedd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11b9aee0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b9aee5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9aee8 jne 0x11b9aeff */
  if (!C.zf) goto L_11b9aeff;
  /* 11b9aeea mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9aeed and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b9aef3 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9aef6 jne 0x11b9aeff */
  if (!C.zf) goto L_11b9aeff;
  /* 11b9aef8 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_11b9aeff:;
  /* 11b9aeff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9af02 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11b9af05 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b9af0a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9af0d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b9af13 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9af15 je 0x11b9af38 */
  if (C.zf) goto L_11b9af38;
  /* 11b9af17 push 0x11bc8898 */
  push32((uint32_t)(0x11bc8898u));
  /* 11b9af1c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9af1e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 11b9af23 push 0x11bc880c */
  push32((uint32_t)(0x11bc880cu));
  /* 11b9af28 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b9af2a call 0x11b99390 */
  push32(0x11b9af2fu); f_11b99390();
  /* 11b9af2f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9af32 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9af35 jne 0x11b9af38 */
  if (!C.zf) goto L_11b9af38;
  /* 11b9af37 int3  */
  x86_unimpl("int3 @ 0x11b9af37");
L_11b9af38:;
  /* 11b9af38 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b9af3a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9af3c jne 0x11b9aeff */
  if (!C.zf) goto L_11b9aeff;
L_11b9af3e:;
  /* 11b9af3e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9af42 je 0x11b9af69 */
  if (C.zf) goto L_11b9af69;
  /* 11b9af44 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9af47 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9af4a push eax */
  push32((uint32_t)(EAX));
  /* 11b9af4b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9af4e push ecx */
  push32((uint32_t)(ECX));
  /* 11b9af4f call 0x11ba22d0 */
  push32(0x11b9af54u); f_11ba22d0();
  /* 11b9af54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9af57 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b9af5a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9af5e jne 0x11b9af67 */
  if (!C.zf) goto L_11b9af67;
  /* 11b9af60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9af62 jmp 0x11b9b1aa */
  goto L_11b9b1aa;
L_11b9af67:;
  /* 11b9af67 jmp 0x11b9af8c */
  goto L_11b9af8c;
L_11b9af69:;
  /* 11b9af69 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9af6c add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9af6f push edx */
  push32((uint32_t)(EDX));
  /* 11b9af70 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9af73 push eax */
  push32((uint32_t)(EAX));
  /* 11b9af74 call 0x11ba2220 */
  push32(0x11b9af79u); f_11ba2220();
  /* 11b9af79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9af7c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b9af7f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9af83 jne 0x11b9af8c */
  if (!C.zf) goto L_11b9af8c;
  /* 11b9af85 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9af87 jmp 0x11b9b1aa */
  goto L_11b9b1aa;
L_11b9af8c:;
  /* 11b9af8c mov ecx, dword ptr [0x11bcbf0c] */
  ECX = (r32((uint32_t)(0x11bcbf0c)));
  /* 11b9af92 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9af95 mov dword ptr [0x11bcbf0c], ecx */
  w32((uint32_t)(0x11bcbf0c), (ECX));
  /* 11b9af9b cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9af9f jne 0x11b9aff7 */
  if (!C.zf) goto L_11b9aff7;
  /* 11b9afa1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9afa4 mov eax, dword ptr [0x11bce3cc] */
  EAX = (r32((uint32_t)(0x11bce3cc)));
  /* 11b9afa9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9afac mov dword ptr [0x11bce3cc], eax */
  w32((uint32_t)(0x11bce3cc), (EAX));
  /* 11b9afb1 mov ecx, dword ptr [0x11bce3cc] */
  ECX = (r32((uint32_t)(0x11bce3cc)));
  /* 11b9afb7 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9afba mov dword ptr [0x11bce3cc], ecx */
  w32((uint32_t)(0x11bce3cc), (ECX));
  /* 11b9afc0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9afc3 mov eax, dword ptr [0x11bce3d4] */
  EAX = (r32((uint32_t)(0x11bce3d4)));
  /* 11b9afc8 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9afcb mov dword ptr [0x11bce3d4], eax */
  w32((uint32_t)(0x11bce3d4), (EAX));
  /* 11b9afd0 mov ecx, dword ptr [0x11bce3d4] */
  ECX = (r32((uint32_t)(0x11bce3d4)));
  /* 11b9afd6 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9afd9 mov dword ptr [0x11bce3d4], ecx */
  w32((uint32_t)(0x11bce3d4), (ECX));
  /* 11b9afdf mov edx, dword ptr [0x11bce3d4] */
  EDX = (r32((uint32_t)(0x11bce3d4)));
  /* 11b9afe5 cmp edx, dword ptr [0x11bce3d8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11bce3d8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9afeb jbe 0x11b9aff7 */
  if ((C.cf||C.zf)) goto L_11b9aff7;
  /* 11b9afed mov eax, dword ptr [0x11bce3d4] */
  EAX = (r32((uint32_t)(0x11bce3d4)));
  /* 11b9aff2 mov dword ptr [0x11bce3d8], eax */
  w32((uint32_t)(0x11bce3d8), (EAX));
L_11b9aff7:;
  /* 11b9aff7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9affa add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9affd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b9b000 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9b003 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9b006 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b009 jbe 0x11b9b02f */
  if ((C.cf||C.zf)) goto L_11b9b02f;
  /* 11b9b00b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9b00e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9b011 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9b014 push edx */
  push32((uint32_t)(EDX));
  /* 11b9b015 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9b017 mov al, byte ptr [0x11bcbf16] */
  AL = (r8((uint32_t)(0x11bcbf16)));
  /* 11b9b01c push eax */
  push32((uint32_t)(EAX));
  /* 11b9b01d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9b020 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9b023 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b026 push edx */
  push32((uint32_t)(EDX));
  /* 11b9b027 call 0x11ba1d00 */
  push32(0x11b9b02cu); f_11ba1d00();
  /* 11b9b02c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9b02f:;
  /* 11b9b02f push 4 */
  push32((uint32_t)(0x4u));
  /* 11b9b031 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9b033 mov al, byte ptr [0x11bcbf14] */
  AL = (r8((uint32_t)(0x11bcbf14)));
  /* 11b9b038 push eax */
  push32((uint32_t)(EAX));
  /* 11b9b039 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9b03c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b03f push ecx */
  push32((uint32_t)(ECX));
  /* 11b9b040 call 0x11ba1d00 */
  push32(0x11b9b045u); f_11ba1d00();
  /* 11b9b045 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b048 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b04c jne 0x11b9b069 */
  if (!C.zf) goto L_11b9b069;
  /* 11b9b04e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9b051 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9b054 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11b9b057 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9b05a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9b05d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 11b9b060 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9b063 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b9b066 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_11b9b069:;
  /* 11b9b069 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9b06c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9b06f mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_11b9b072:;
  /* 11b9b072 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b076 jne 0x11b9b0a7 */
  if (!C.zf) goto L_11b9b0a7;
  /* 11b9b078 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b07c jne 0x11b9b086 */
  if (!C.zf) goto L_11b9b086;
  /* 11b9b07e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9b081 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b084 je 0x11b9b0a7 */
  if (C.zf) goto L_11b9b0a7;
L_11b9b086:;
  /* 11b9b086 push 0x11bc8864 */
  push32((uint32_t)(0x11bc8864u));
  /* 11b9b08b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9b08d push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 11b9b092 push 0x11bc880c */
  push32((uint32_t)(0x11bc880cu));
  /* 11b9b097 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b9b099 call 0x11b99390 */
  push32(0x11b9b09eu); f_11b99390();
  /* 11b9b09e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b0a1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b0a4 jne 0x11b9b0a7 */
  if (!C.zf) goto L_11b9b0a7;
  /* 11b9b0a6 int3  */
  x86_unimpl("int3 @ 0x11b9b0a6");
L_11b9b0a7:;
  /* 11b9b0a7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b9b0a9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9b0ab jne 0x11b9b072 */
  if (!C.zf) goto L_11b9b072;
  /* 11b9b0ad mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9b0b0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b0b3 je 0x11b9b0bb */
  if (C.zf) goto L_11b9b0bb;
  /* 11b9b0b5 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b0b9 je 0x11b9b0c3 */
  if (C.zf) goto L_11b9b0c3;
L_11b9b0bb:;
  /* 11b9b0bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9b0be jmp 0x11b9b1aa */
  goto L_11b9b1aa;
L_11b9b0c3:;
  /* 11b9b0c3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9b0c6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b0c9 je 0x11b9b0db */
  if (C.zf) goto L_11b9b0db;
  /* 11b9b0cb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9b0ce mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b9b0d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9b0d3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b9b0d6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11b9b0d9 jmp 0x11b9b117 */
  goto L_11b9b117;
L_11b9b0db:;
  /* 11b9b0db mov eax, dword ptr [0x11bce3c8] */
  EAX = (r32((uint32_t)(0x11bce3c8)));
  /* 11b9b0e0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b0e3 je 0x11b9b106 */
  if (C.zf) goto L_11b9b106;
  /* 11b9b0e5 push 0x11bc8848 */
  push32((uint32_t)(0x11bc8848u));
  /* 11b9b0ea push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9b0ec push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 11b9b0f1 push 0x11bc880c */
  push32((uint32_t)(0x11bc880cu));
  /* 11b9b0f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b9b0f8 call 0x11b99390 */
  push32(0x11b9b0fdu); f_11b99390();
  /* 11b9b0fd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b100 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b103 jne 0x11b9b106 */
  if (!C.zf) goto L_11b9b106;
  /* 11b9b105 int3  */
  x86_unimpl("int3 @ 0x11b9b105");
L_11b9b106:;
  /* 11b9b106 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b9b108 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b9b10a jne 0x11b9b0db */
  if (!C.zf) goto L_11b9b0db;
  /* 11b9b10c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9b10f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b9b112 mov dword ptr [0x11bce3c8], eax */
  w32((uint32_t)(0x11bce3c8), (EAX));
L_11b9b117:;
  /* 11b9b117 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9b11a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b11e je 0x11b9b12f */
  if (C.zf) goto L_11b9b12f;
  /* 11b9b120 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9b123 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b9b126 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9b129 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b9b12b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11b9b12d jmp 0x11b9b16a */
  goto L_11b9b16a;
L_11b9b12f:;
  /* 11b9b12f mov eax, dword ptr [0x11bce3d0] */
  EAX = (r32((uint32_t)(0x11bce3d0)));
  /* 11b9b134 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b137 je 0x11b9b15a */
  if (C.zf) goto L_11b9b15a;
  /* 11b9b139 push 0x11bc882c */
  push32((uint32_t)(0x11bc882cu));
  /* 11b9b13e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9b140 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 11b9b145 push 0x11bc880c */
  push32((uint32_t)(0x11bc880cu));
  /* 11b9b14a push 2 */
  push32((uint32_t)(0x2u));
  /* 11b9b14c call 0x11b99390 */
  push32(0x11b9b151u); f_11b99390();
  /* 11b9b151 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b154 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b157 jne 0x11b9b15a */
  if (!C.zf) goto L_11b9b15a;
  /* 11b9b159 int3  */
  x86_unimpl("int3 @ 0x11b9b159");
L_11b9b15a:;
  /* 11b9b15a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b9b15c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b9b15e jne 0x11b9b12f */
  if (!C.zf) goto L_11b9b12f;
  /* 11b9b160 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9b163 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b9b165 mov dword ptr [0x11bce3d0], eax */
  w32((uint32_t)(0x11bce3d0), (EAX));
L_11b9b16a:;
  /* 11b9b16a cmp dword ptr [0x11bce3d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce3d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b171 je 0x11b9b181 */
  if (C.zf) goto L_11b9b181;
  /* 11b9b173 mov ecx, dword ptr [0x11bce3d0] */
  ECX = (r32((uint32_t)(0x11bce3d0)));
  /* 11b9b179 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9b17c mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11b9b17f jmp 0x11b9b189 */
  goto L_11b9b189;
L_11b9b181:;
  /* 11b9b181 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9b184 mov dword ptr [0x11bce3c8], eax */
  w32((uint32_t)(0x11bce3c8), (EAX));
L_11b9b189:;
  /* 11b9b189 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9b18c mov edx, dword ptr [0x11bce3d0] */
  EDX = (r32((uint32_t)(0x11bce3d0)));
  /* 11b9b192 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11b9b194 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9b197 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11b9b19e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9b1a1 mov dword ptr [0x11bce3d0], ecx */
  w32((uint32_t)(0x11bce3d0), (ECX));
  /* 11b9b1a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11b9b1aa:;
  /* 11b9b1aa pop edi */
  EDI = (pop32());
  /* 11b9b1ab pop esi */
  ESI = (pop32());
  /* 11b9b1ac pop ebx */
  EBX = (pop32());
  /* 11b9b1ad mov esp, ebp */
  ESP = (EBP);
  /* 11b9b1af pop ebp */
  EBP = (pop32());
  /* 11b9b1b0 ret  */
  ESPCHK(0x11b9aca0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b1c0 @ 0x11b9b1c0 (27 bytes, 13 insns) */
void f_11b9b1c0(void) {
  FTRACE(0x11b9b1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9b1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9b1c1 mov ebp, esp */
  EBP = (ESP);
  /* 11b9b1c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9b1c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9b1c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b9b1c9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9b1cc push eax */
  push32((uint32_t)(EAX));
  /* 11b9b1cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9b1d0 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9b1d1 call 0x11b9b1e0 */
  push32(0x11b9b1d6u); f_11b9b1e0();
  /* 11b9b1d6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b1d9 pop ebp */
  EBP = (pop32());
  /* 11b9b1da ret  */
  ESPCHK(0x11b9b1c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b1e0 @ 0x11b9b1e0 (64 bytes, 27 insns) */
void f_11b9b1e0(void) {
  FTRACE(0x11b9b1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9b1e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9b1e1 mov ebp, esp */
  EBP = (ESP);
  /* 11b9b1e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9b1e4 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b9b1e6 call 0x11b9a6d0 */
  push32(0x11b9b1ebu); f_11b9a6d0();
  /* 11b9b1eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b1ee push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9b1f0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9b1f3 push eax */
  push32((uint32_t)(EAX));
  /* 11b9b1f4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9b1f7 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9b1f8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9b1fb push edx */
  push32((uint32_t)(EDX));
  /* 11b9b1fc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9b1ff push eax */
  push32((uint32_t)(EAX));
  /* 11b9b200 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9b203 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9b204 call 0x11b9aca0 */
  push32(0x11b9b209u); f_11b9aca0();
  /* 11b9b209 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b20c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b9b20f push 9 */
  push32((uint32_t)(0x9u));
  /* 11b9b211 call 0x11b9a770 */
  push32(0x11b9b216u); f_11b9a770();
  /* 11b9b216 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b219 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9b21c mov esp, ebp */
  ESP = (EBP);
  /* 11b9b21e pop ebp */
  EBP = (pop32());
  /* 11b9b21f ret  */
  ESPCHK(0x11b9b1e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b220 @ 0x11b9b220 (19 bytes, 9 insns) */
void f_11b9b220(void) {
  FTRACE(0x11b9b220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9b220 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9b221 mov ebp, esp */
  EBP = (ESP);
  /* 11b9b223 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b9b225 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9b228 push eax */
  push32((uint32_t)(EAX));
  /* 11b9b229 call 0x11b9b260 */
  push32(0x11b9b22eu); f_11b9b260();
  /* 11b9b22e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b231 pop ebp */
  EBP = (pop32());
  /* 11b9b232 ret  */
  ESPCHK(0x11b9b220u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b240 @ 0x11b9b240 (19 bytes, 9 insns) */
void f_11b9b240(void) {
  FTRACE(0x11b9b240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9b240 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9b241 mov ebp, esp */
  EBP = (ESP);
  /* 11b9b243 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b9b245 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9b248 push eax */
  push32((uint32_t)(EAX));
  /* 11b9b249 call 0x11b9b290 */
  push32(0x11b9b24eu); f_11b9b290();
  /* 11b9b24e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b251 pop ebp */
  EBP = (pop32());
  /* 11b9b252 ret  */
  ESPCHK(0x11b9b240u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b260 @ 0x11b9b260 (41 bytes, 16 insns) */
void f_11b9b260(void) {
  FTRACE(0x11b9b260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9b260 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9b261 mov ebp, esp */
  EBP = (ESP);
  /* 11b9b263 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b9b265 call 0x11b9a6d0 */
  push32(0x11b9b26au); f_11b9a6d0();
  /* 11b9b26a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b26d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9b270 push eax */
  push32((uint32_t)(EAX));
  /* 11b9b271 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9b274 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9b275 call 0x11b9b290 */
  push32(0x11b9b27au); f_11b9b290();
  /* 11b9b27a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b27d push 9 */
  push32((uint32_t)(0x9u));
  /* 11b9b27f call 0x11b9a770 */
  push32(0x11b9b284u); f_11b9a770();
  /* 11b9b284 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b287 pop ebp */
  EBP = (pop32());
  /* 11b9b288 ret  */
  ESPCHK(0x11b9b260u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b290 @ 0x11b9b290 (1004 bytes, 342 insns) */
void f_11b9b290(void) {
  FTRACE(0x11b9b290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9b290 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9b291 mov ebp, esp */
  EBP = (ESP);
  /* 11b9b293 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9b294 push ebx */
  push32((uint32_t)(EBX));
  /* 11b9b295 push esi */
  push32((uint32_t)(ESI));
  /* 11b9b296 push edi */
  push32((uint32_t)(EDI));
  /* 11b9b297 mov eax, dword ptr [0x11bcbf08] */
  EAX = (r32((uint32_t)(0x11bcbf08)));
  /* 11b9b29c and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11b9b29f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9b2a1 je 0x11b9b2d3 */
  if (C.zf) goto L_11b9b2d3;
L_11b9b2a3:;
  /* 11b9b2a3 call 0x11b9b970 */
  push32(0x11b9b2a8u); f_11b9b970();
  /* 11b9b2a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9b2aa jne 0x11b9b2cd */
  if (!C.zf) goto L_11b9b2cd;
  /* 11b9b2ac push 0x11bc8818 */
  push32((uint32_t)(0x11bc8818u));
  /* 11b9b2b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9b2b3 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 11b9b2b8 push 0x11bc880c */
  push32((uint32_t)(0x11bc880cu));
  /* 11b9b2bd push 2 */
  push32((uint32_t)(0x2u));
  /* 11b9b2bf call 0x11b99390 */
  push32(0x11b9b2c4u); f_11b99390();
  /* 11b9b2c4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b2c7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b2ca jne 0x11b9b2cd */
  if (!C.zf) goto L_11b9b2cd;
  /* 11b9b2cc int3  */
  x86_unimpl("int3 @ 0x11b9b2cc");
L_11b9b2cd:;
  /* 11b9b2cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b9b2cf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b9b2d1 jne 0x11b9b2a3 */
  if (!C.zf) goto L_11b9b2a3;
L_11b9b2d3:;
  /* 11b9b2d3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b2d7 jne 0x11b9b2de */
  if (!C.zf) goto L_11b9b2de;
  /* 11b9b2d9 jmp 0x11b9b675 */
  goto L_11b9b675;
L_11b9b2de:;
  /* 11b9b2de push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9b2e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9b2e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9b2e4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9b2e7 push edx */
  push32((uint32_t)(EDX));
  /* 11b9b2e8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9b2ea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9b2ed push eax */
  push32((uint32_t)(EAX));
  /* 11b9b2ee push 3 */
  push32((uint32_t)(0x3u));
  /* 11b9b2f0 call dword ptr [0x11bcc250] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bcc250))), 0x11b9b2f6u);
  /* 11b9b2f6 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b2f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9b2fb jne 0x11b9b328 */
  if (!C.zf) goto L_11b9b328;
L_11b9b2fd:;
  /* 11b9b2fd push 0x11bc8ab4 */
  push32((uint32_t)(0x11bc8ab4u));
  /* 11b9b302 push 0x11bc87ac */
  push32((uint32_t)(0x11bc87acu));
  /* 11b9b307 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9b309 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9b30b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9b30d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9b30f call 0x11b99390 */
  push32(0x11b9b314u); f_11b99390();
  /* 11b9b314 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b317 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b31a jne 0x11b9b31d */
  if (!C.zf) goto L_11b9b31d;
  /* 11b9b31c int3  */
  x86_unimpl("int3 @ 0x11b9b31c");
L_11b9b31d:;
  /* 11b9b31d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b9b31f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b9b321 jne 0x11b9b2fd */
  if (!C.zf) goto L_11b9b2fd;
  /* 11b9b323 jmp 0x11b9b675 */
  goto L_11b9b675;
L_11b9b328:;
  /* 11b9b328 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9b32b push edx */
  push32((uint32_t)(EDX));
  /* 11b9b32c call 0x11b9bdd0 */
  push32(0x11b9b331u); f_11b9bdd0();
  /* 11b9b331 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b334 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9b336 jne 0x11b9b359 */
  if (!C.zf) goto L_11b9b359;
  /* 11b9b338 push 0x11bc891c */
  push32((uint32_t)(0x11bc891cu));
  /* 11b9b33d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9b33f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 11b9b344 push 0x11bc880c */
  push32((uint32_t)(0x11bc880cu));
  /* 11b9b349 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b9b34b call 0x11b99390 */
  push32(0x11b9b350u); f_11b99390();
  /* 11b9b350 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b353 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b356 jne 0x11b9b359 */
  if (!C.zf) goto L_11b9b359;
  /* 11b9b358 int3  */
  x86_unimpl("int3 @ 0x11b9b358");
L_11b9b359:;
  /* 11b9b359 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9b35b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9b35d jne 0x11b9b328 */
  if (!C.zf) goto L_11b9b328;
  /* 11b9b35f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9b362 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9b365 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11b9b368:;
  /* 11b9b368 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9b36b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11b9b36e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b9b373 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b376 je 0x11b9b3bb */
  if (C.zf) goto L_11b9b3bb;
  /* 11b9b378 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9b37b cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b37f je 0x11b9b3bb */
  if (C.zf) goto L_11b9b3bb;
  /* 11b9b381 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9b384 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11b9b387 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b9b38c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b38f je 0x11b9b3bb */
  if (C.zf) goto L_11b9b3bb;
  /* 11b9b391 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9b394 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b398 je 0x11b9b3bb */
  if (C.zf) goto L_11b9b3bb;
  /* 11b9b39a push 0x11bc8408 */
  push32((uint32_t)(0x11bc8408u));
  /* 11b9b39f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9b3a1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 11b9b3a6 push 0x11bc880c */
  push32((uint32_t)(0x11bc880cu));
  /* 11b9b3ab push 2 */
  push32((uint32_t)(0x2u));
  /* 11b9b3ad call 0x11b99390 */
  push32(0x11b9b3b2u); f_11b99390();
  /* 11b9b3b2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b3b5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b3b8 jne 0x11b9b3bb */
  if (!C.zf) goto L_11b9b3bb;
  /* 11b9b3ba int3  */
  x86_unimpl("int3 @ 0x11b9b3ba");
L_11b9b3bb:;
  /* 11b9b3bb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b9b3bd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9b3bf jne 0x11b9b368 */
  if (!C.zf) goto L_11b9b368;
  /* 11b9b3c1 mov eax, dword ptr [0x11bcbf08] */
  EAX = (r32((uint32_t)(0x11bcbf08)));
  /* 11b9b3c6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11b9b3c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9b3cb jne 0x11b9b496 */
  if (!C.zf) goto L_11b9b496;
  /* 11b9b3d1 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b9b3d3 mov cl, byte ptr [0x11bcbf14] */
  CL = (r8((uint32_t)(0x11bcbf14)));
  /* 11b9b3d9 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9b3da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9b3dd add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b3e0 push edx */
  push32((uint32_t)(EDX));
  /* 11b9b3e1 call 0x11b9b8e0 */
  push32(0x11b9b3e6u); f_11b9b8e0();
  /* 11b9b3e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b3e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9b3eb jne 0x11b9b430 */
  if (!C.zf) goto L_11b9b430;
L_11b9b3ed:;
  /* 11b9b3ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9b3f0 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b3f3 push eax */
  push32((uint32_t)(EAX));
  /* 11b9b3f4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9b3f7 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11b9b3fa push edx */
  push32((uint32_t)(EDX));
  /* 11b9b3fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9b3fe mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11b9b401 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b9b407 mov edx, dword ptr [ecx*4 + 0x11bcbf18] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11bcbf18)));
  /* 11b9b40e push edx */
  push32((uint32_t)(EDX));
  /* 11b9b40f push 0x11bc8a88 */
  push32((uint32_t)(0x11bc8a88u));
  /* 11b9b414 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9b416 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9b418 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9b41a push 1 */
  push32((uint32_t)(0x1u));
  /* 11b9b41c call 0x11b99390 */
  push32(0x11b9b421u); f_11b99390();
  /* 11b9b421 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b424 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b427 jne 0x11b9b42a */
  if (!C.zf) goto L_11b9b42a;
  /* 11b9b429 int3  */
  x86_unimpl("int3 @ 0x11b9b429");
L_11b9b42a:;
  /* 11b9b42a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9b42c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9b42e jne 0x11b9b3ed */
  if (!C.zf) goto L_11b9b3ed;
L_11b9b430:;
  /* 11b9b430 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b9b432 mov cl, byte ptr [0x11bcbf14] */
  CL = (r8((uint32_t)(0x11bcbf14)));
  /* 11b9b438 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9b439 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9b43c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11b9b43f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9b442 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 11b9b446 push edx */
  push32((uint32_t)(EDX));
  /* 11b9b447 call 0x11b9b8e0 */
  push32(0x11b9b44cu); f_11b9b8e0();
  /* 11b9b44c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b44f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9b451 jne 0x11b9b496 */
  if (!C.zf) goto L_11b9b496;
L_11b9b453:;
  /* 11b9b453 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9b456 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b459 push eax */
  push32((uint32_t)(EAX));
  /* 11b9b45a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9b45d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11b9b460 push edx */
  push32((uint32_t)(EDX));
  /* 11b9b461 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9b464 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11b9b467 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b9b46d mov edx, dword ptr [ecx*4 + 0x11bcbf18] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11bcbf18)));
  /* 11b9b474 push edx */
  push32((uint32_t)(EDX));
  /* 11b9b475 push 0x11bc8a5c */
  push32((uint32_t)(0x11bc8a5cu));
  /* 11b9b47a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9b47c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9b47e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9b480 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b9b482 call 0x11b99390 */
  push32(0x11b9b487u); f_11b99390();
  /* 11b9b487 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b48a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b48d jne 0x11b9b490 */
  if (!C.zf) goto L_11b9b490;
  /* 11b9b48f int3  */
  x86_unimpl("int3 @ 0x11b9b48f");
L_11b9b490:;
  /* 11b9b490 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9b492 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9b494 jne 0x11b9b453 */
  if (!C.zf) goto L_11b9b453;
L_11b9b496:;
  /* 11b9b496 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9b499 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b49d jne 0x11b9b50b */
  if (!C.zf) goto L_11b9b50b;
L_11b9b49f:;
  /* 11b9b49f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9b4a2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b4a9 jne 0x11b9b4b4 */
  if (!C.zf) goto L_11b9b4b4;
  /* 11b9b4ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9b4ae cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b4b2 je 0x11b9b4d5 */
  if (C.zf) goto L_11b9b4d5;
L_11b9b4b4:;
  /* 11b9b4b4 push 0x11bc8a1c */
  push32((uint32_t)(0x11bc8a1cu));
  /* 11b9b4b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9b4bb push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 11b9b4c0 push 0x11bc880c */
  push32((uint32_t)(0x11bc880cu));
  /* 11b9b4c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b9b4c7 call 0x11b99390 */
  push32(0x11b9b4ccu); f_11b99390();
  /* 11b9b4cc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b4cf cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b4d2 jne 0x11b9b4d5 */
  if (!C.zf) goto L_11b9b4d5;
  /* 11b9b4d4 int3  */
  x86_unimpl("int3 @ 0x11b9b4d4");
L_11b9b4d5:;
  /* 11b9b4d5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b9b4d7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b9b4d9 jne 0x11b9b49f */
  if (!C.zf) goto L_11b9b49f;
  /* 11b9b4db mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9b4de mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11b9b4e1 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b4e4 push eax */
  push32((uint32_t)(EAX));
  /* 11b9b4e5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b9b4e7 mov cl, byte ptr [0x11bcbf15] */
  CL = (r8((uint32_t)(0x11bcbf15)));
  /* 11b9b4ed push ecx */
  push32((uint32_t)(ECX));
  /* 11b9b4ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9b4f1 push edx */
  push32((uint32_t)(EDX));
  /* 11b9b4f2 call 0x11ba1d00 */
  push32(0x11b9b4f7u); f_11ba1d00();
  /* 11b9b4f7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b4fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9b4fd push eax */
  push32((uint32_t)(EAX));
  /* 11b9b4fe call 0x11ba24c0 */
  push32(0x11b9b503u); f_11ba24c0();
  /* 11b9b503 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b506 jmp 0x11b9b675 */
  goto L_11b9b675;
L_11b9b50b:;
  /* 11b9b50b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9b50e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b512 jne 0x11b9b521 */
  if (!C.zf) goto L_11b9b521;
  /* 11b9b514 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b518 jne 0x11b9b521 */
  if (!C.zf) goto L_11b9b521;
  /* 11b9b51a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_11b9b521:;
  /* 11b9b521 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9b524 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11b9b527 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b52a je 0x11b9b54d */
  if (C.zf) goto L_11b9b54d;
  /* 11b9b52c push 0x11bc89fc */
  push32((uint32_t)(0x11bc89fcu));
  /* 11b9b531 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9b533 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 11b9b538 push 0x11bc880c */
  push32((uint32_t)(0x11bc880cu));
  /* 11b9b53d push 2 */
  push32((uint32_t)(0x2u));
  /* 11b9b53f call 0x11b99390 */
  push32(0x11b9b544u); f_11b99390();
  /* 11b9b544 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b547 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b54a jne 0x11b9b54d */
  if (!C.zf) goto L_11b9b54d;
  /* 11b9b54c int3  */
  x86_unimpl("int3 @ 0x11b9b54c");
L_11b9b54d:;
  /* 11b9b54d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b9b54f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b9b551 jne 0x11b9b521 */
  if (!C.zf) goto L_11b9b521;
  /* 11b9b553 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9b556 mov eax, dword ptr [0x11bce3d4] */
  EAX = (r32((uint32_t)(0x11bce3d4)));
  /* 11b9b55b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9b55e mov dword ptr [0x11bce3d4], eax */
  w32((uint32_t)(0x11bce3d4), (EAX));
  /* 11b9b563 mov ecx, dword ptr [0x11bcbf08] */
  ECX = (r32((uint32_t)(0x11bcbf08)));
  /* 11b9b569 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11b9b56c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b9b56e jne 0x11b9b64c */
  if (!C.zf) goto L_11b9b64c;
  /* 11b9b574 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9b577 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b57a je 0x11b9b58c */
  if (C.zf) goto L_11b9b58c;
  /* 11b9b57c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9b57f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b9b581 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9b584 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b9b587 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11b9b58a jmp 0x11b9b5ca */
  goto L_11b9b5ca;
L_11b9b58c:;
  /* 11b9b58c mov ecx, dword ptr [0x11bce3c8] */
  ECX = (r32((uint32_t)(0x11bce3c8)));
  /* 11b9b592 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b595 je 0x11b9b5b8 */
  if (C.zf) goto L_11b9b5b8;
  /* 11b9b597 push 0x11bc89e4 */
  push32((uint32_t)(0x11bc89e4u));
  /* 11b9b59c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9b59e push 0x42a */
  push32((uint32_t)(0x42au));
  /* 11b9b5a3 push 0x11bc880c */
  push32((uint32_t)(0x11bc880cu));
  /* 11b9b5a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b9b5aa call 0x11b99390 */
  push32(0x11b9b5afu); f_11b99390();
  /* 11b9b5af add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b5b2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b5b5 jne 0x11b9b5b8 */
  if (!C.zf) goto L_11b9b5b8;
  /* 11b9b5b7 int3  */
  x86_unimpl("int3 @ 0x11b9b5b7");
L_11b9b5b8:;
  /* 11b9b5b8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b9b5ba test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9b5bc jne 0x11b9b58c */
  if (!C.zf) goto L_11b9b58c;
  /* 11b9b5be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9b5c1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b9b5c4 mov dword ptr [0x11bce3c8], ecx */
  w32((uint32_t)(0x11bce3c8), (ECX));
L_11b9b5ca:;
  /* 11b9b5ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9b5cd cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b5d1 je 0x11b9b5e2 */
  if (C.zf) goto L_11b9b5e2;
  /* 11b9b5d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9b5d6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b9b5d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9b5dc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b9b5de mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11b9b5e0 jmp 0x11b9b61f */
  goto L_11b9b61f;
L_11b9b5e2:;
  /* 11b9b5e2 mov ecx, dword ptr [0x11bce3d0] */
  ECX = (r32((uint32_t)(0x11bce3d0)));
  /* 11b9b5e8 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b5eb je 0x11b9b60e */
  if (C.zf) goto L_11b9b60e;
  /* 11b9b5ed push 0x11bc89cc */
  push32((uint32_t)(0x11bc89ccu));
  /* 11b9b5f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9b5f4 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 11b9b5f9 push 0x11bc880c */
  push32((uint32_t)(0x11bc880cu));
  /* 11b9b5fe push 2 */
  push32((uint32_t)(0x2u));
  /* 11b9b600 call 0x11b99390 */
  push32(0x11b9b605u); f_11b99390();
  /* 11b9b605 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b608 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b60b jne 0x11b9b60e */
  if (!C.zf) goto L_11b9b60e;
  /* 11b9b60d int3  */
  x86_unimpl("int3 @ 0x11b9b60d");
L_11b9b60e:;
  /* 11b9b60e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b9b610 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9b612 jne 0x11b9b5e2 */
  if (!C.zf) goto L_11b9b5e2;
  /* 11b9b614 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9b617 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b9b619 mov dword ptr [0x11bce3d0], ecx */
  w32((uint32_t)(0x11bce3d0), (ECX));
L_11b9b61f:;
  /* 11b9b61f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9b622 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11b9b625 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b628 push eax */
  push32((uint32_t)(EAX));
  /* 11b9b629 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b9b62b mov cl, byte ptr [0x11bcbf15] */
  CL = (r8((uint32_t)(0x11bcbf15)));
  /* 11b9b631 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9b632 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9b635 push edx */
  push32((uint32_t)(EDX));
  /* 11b9b636 call 0x11ba1d00 */
  push32(0x11b9b63bu); f_11ba1d00();
  /* 11b9b63b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b63e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9b641 push eax */
  push32((uint32_t)(EAX));
  /* 11b9b642 call 0x11ba24c0 */
  push32(0x11b9b647u); f_11ba24c0();
  /* 11b9b647 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b64a jmp 0x11b9b675 */
  goto L_11b9b675;
L_11b9b64c:;
  /* 11b9b64c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9b64f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 11b9b656 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9b659 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11b9b65c push eax */
  push32((uint32_t)(EAX));
  /* 11b9b65d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b9b65f mov cl, byte ptr [0x11bcbf15] */
  CL = (r8((uint32_t)(0x11bcbf15)));
  /* 11b9b665 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9b666 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9b669 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b66c push edx */
  push32((uint32_t)(EDX));
  /* 11b9b66d call 0x11ba1d00 */
  push32(0x11b9b672u); f_11ba1d00();
  /* 11b9b672 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9b675:;
  /* 11b9b675 pop edi */
  EDI = (pop32());
  /* 11b9b676 pop esi */
  ESI = (pop32());
  /* 11b9b677 pop ebx */
  EBX = (pop32());
  /* 11b9b678 mov esp, ebp */
  ESP = (EBP);
  /* 11b9b67a pop ebp */
  EBP = (pop32());
  /* 11b9b67b ret  */
  ESPCHK(0x11b9b290u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b680 @ 0x11b9b680 (19 bytes, 9 insns) */
void f_11b9b680(void) {
  FTRACE(0x11b9b680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9b680 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9b681 mov ebp, esp */
  EBP = (ESP);
  /* 11b9b683 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b9b685 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9b688 push eax */
  push32((uint32_t)(EAX));
  /* 11b9b689 call 0x11b9b6a0 */
  push32(0x11b9b68eu); f_11b9b6a0();
  /* 11b9b68e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b691 pop ebp */
  EBP = (pop32());
  /* 11b9b692 ret  */
  ESPCHK(0x11b9b680u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b6a0 @ 0x11b9b6a0 (342 bytes, 119 insns) */
void f_11b9b6a0(void) {
  FTRACE(0x11b9b6a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9b6a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9b6a1 mov ebp, esp */
  EBP = (ESP);
  /* 11b9b6a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9b6a6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b9b6a7 push esi */
  push32((uint32_t)(ESI));
  /* 11b9b6a8 push edi */
  push32((uint32_t)(EDI));
  /* 11b9b6a9 mov eax, dword ptr [0x11bcbf08] */
  EAX = (r32((uint32_t)(0x11bcbf08)));
  /* 11b9b6ae and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11b9b6b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9b6b3 je 0x11b9b6e5 */
  if (C.zf) goto L_11b9b6e5;
L_11b9b6b5:;
  /* 11b9b6b5 call 0x11b9b970 */
  push32(0x11b9b6bau); f_11b9b970();
  /* 11b9b6ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9b6bc jne 0x11b9b6df */
  if (!C.zf) goto L_11b9b6df;
  /* 11b9b6be push 0x11bc8818 */
  push32((uint32_t)(0x11bc8818u));
  /* 11b9b6c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9b6c5 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 11b9b6ca push 0x11bc880c */
  push32((uint32_t)(0x11bc880cu));
  /* 11b9b6cf push 2 */
  push32((uint32_t)(0x2u));
  /* 11b9b6d1 call 0x11b99390 */
  push32(0x11b9b6d6u); f_11b99390();
  /* 11b9b6d6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b6d9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b6dc jne 0x11b9b6df */
  if (!C.zf) goto L_11b9b6df;
  /* 11b9b6de int3  */
  x86_unimpl("int3 @ 0x11b9b6de");
L_11b9b6df:;
  /* 11b9b6df xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b9b6e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b9b6e3 jne 0x11b9b6b5 */
  if (!C.zf) goto L_11b9b6b5;
L_11b9b6e5:;
  /* 11b9b6e5 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b9b6e7 call 0x11b9a6d0 */
  push32(0x11b9b6ecu); f_11b9a6d0();
  /* 11b9b6ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9b6ef:;
  /* 11b9b6ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9b6f2 push edx */
  push32((uint32_t)(EDX));
  /* 11b9b6f3 call 0x11b9bdd0 */
  push32(0x11b9b6f8u); f_11b9bdd0();
  /* 11b9b6f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b6fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9b6fd jne 0x11b9b720 */
  if (!C.zf) goto L_11b9b720;
  /* 11b9b6ff push 0x11bc891c */
  push32((uint32_t)(0x11bc891cu));
  /* 11b9b704 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9b706 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 11b9b70b push 0x11bc880c */
  push32((uint32_t)(0x11bc880cu));
  /* 11b9b710 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b9b712 call 0x11b99390 */
  push32(0x11b9b717u); f_11b99390();
  /* 11b9b717 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b71a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b71d jne 0x11b9b720 */
  if (!C.zf) goto L_11b9b720;
  /* 11b9b71f int3  */
  x86_unimpl("int3 @ 0x11b9b71f");
L_11b9b720:;
  /* 11b9b720 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9b722 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9b724 jne 0x11b9b6ef */
  if (!C.zf) goto L_11b9b6ef;
  /* 11b9b726 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9b729 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9b72c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11b9b72f:;
  /* 11b9b72f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9b732 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11b9b735 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b9b73a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b73d je 0x11b9b782 */
  if (C.zf) goto L_11b9b782;
  /* 11b9b73f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9b742 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b746 je 0x11b9b782 */
  if (C.zf) goto L_11b9b782;
  /* 11b9b748 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9b74b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11b9b74e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b9b753 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b756 je 0x11b9b782 */
  if (C.zf) goto L_11b9b782;
  /* 11b9b758 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9b75b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b75f je 0x11b9b782 */
  if (C.zf) goto L_11b9b782;
  /* 11b9b761 push 0x11bc8408 */
  push32((uint32_t)(0x11bc8408u));
  /* 11b9b766 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9b768 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 11b9b76d push 0x11bc880c */
  push32((uint32_t)(0x11bc880cu));
  /* 11b9b772 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b9b774 call 0x11b99390 */
  push32(0x11b9b779u); f_11b99390();
  /* 11b9b779 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b77c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b77f jne 0x11b9b782 */
  if (!C.zf) goto L_11b9b782;
  /* 11b9b781 int3  */
  x86_unimpl("int3 @ 0x11b9b781");
L_11b9b782:;
  /* 11b9b782 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b9b784 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9b786 jne 0x11b9b72f */
  if (!C.zf) goto L_11b9b72f;
  /* 11b9b788 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9b78b cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b78f jne 0x11b9b79e */
  if (!C.zf) goto L_11b9b79e;
  /* 11b9b791 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b795 jne 0x11b9b79e */
  if (!C.zf) goto L_11b9b79e;
  /* 11b9b797 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_11b9b79e:;
  /* 11b9b79e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9b7a1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b7a5 je 0x11b9b7d9 */
  if (C.zf) goto L_11b9b7d9;
L_11b9b7a7:;
  /* 11b9b7a7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9b7aa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11b9b7ad cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b7b0 je 0x11b9b7d3 */
  if (C.zf) goto L_11b9b7d3;
  /* 11b9b7b2 push 0x11bc89fc */
  push32((uint32_t)(0x11bc89fcu));
  /* 11b9b7b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9b7b9 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 11b9b7be push 0x11bc880c */
  push32((uint32_t)(0x11bc880cu));
  /* 11b9b7c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b9b7c5 call 0x11b99390 */
  push32(0x11b9b7cau); f_11b99390();
  /* 11b9b7ca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b7cd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b7d0 jne 0x11b9b7d3 */
  if (!C.zf) goto L_11b9b7d3;
  /* 11b9b7d2 int3  */
  x86_unimpl("int3 @ 0x11b9b7d2");
L_11b9b7d3:;
  /* 11b9b7d3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b9b7d5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b9b7d7 jne 0x11b9b7a7 */
  if (!C.zf) goto L_11b9b7a7;
L_11b9b7d9:;
  /* 11b9b7d9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9b7dc mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11b9b7df mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b9b7e2 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b9b7e4 call 0x11b9a770 */
  push32(0x11b9b7e9u); f_11b9a770();
  /* 11b9b7e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b7ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9b7ef pop edi */
  EDI = (pop32());
  /* 11b9b7f0 pop esi */
  ESI = (pop32());
  /* 11b9b7f1 pop ebx */
  EBX = (pop32());
  /* 11b9b7f2 mov esp, ebp */
  ESP = (EBP);
  /* 11b9b7f4 pop ebp */
  EBP = (pop32());
  /* 11b9b7f5 ret  */
  ESPCHK(0x11b9b6a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b800 @ 0x11b9b800 (28 bytes, 11 insns) */
void f_11b9b800(void) {
  FTRACE(0x11b9b800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9b800 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9b801 mov ebp, esp */
  EBP = (ESP);
  /* 11b9b803 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9b804 mov eax, dword ptr [0x11bcbf10] */
  EAX = (r32((uint32_t)(0x11bcbf10)));
  /* 11b9b809 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b9b80c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9b80f mov dword ptr [0x11bcbf10], ecx */
  w32((uint32_t)(0x11bcbf10), (ECX));
  /* 11b9b815 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9b818 mov esp, ebp */
  ESP = (EBP);
  /* 11b9b81a pop ebp */
  EBP = (pop32());
  /* 11b9b81b ret  */
  ESPCHK(0x11b9b800u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b820 @ 0x11b9b820 (157 bytes, 59 insns) */
void f_11b9b820(void) {
  FTRACE(0x11b9b820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9b820 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9b821 mov ebp, esp */
  EBP = (ESP);
  /* 11b9b823 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9b824 push ebx */
  push32((uint32_t)(EBX));
  /* 11b9b825 push esi */
  push32((uint32_t)(ESI));
  /* 11b9b826 push edi */
  push32((uint32_t)(EDI));
  /* 11b9b827 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b9b829 call 0x11b9a6d0 */
  push32(0x11b9b82eu); f_11b9a6d0();
  /* 11b9b82e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b831 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9b834 push eax */
  push32((uint32_t)(EAX));
  /* 11b9b835 call 0x11b9bdd0 */
  push32(0x11b9b83au); f_11b9bdd0();
  /* 11b9b83a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b83d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9b83f je 0x11b9b8ac */
  if (C.zf) goto L_11b9b8ac;
  /* 11b9b841 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9b844 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9b847 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11b9b84a:;
  /* 11b9b84a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9b84d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11b9b850 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b9b855 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b858 je 0x11b9b89d */
  if (C.zf) goto L_11b9b89d;
  /* 11b9b85a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9b85d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b861 je 0x11b9b89d */
  if (C.zf) goto L_11b9b89d;
  /* 11b9b863 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9b866 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11b9b869 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b9b86e cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b871 je 0x11b9b89d */
  if (C.zf) goto L_11b9b89d;
  /* 11b9b873 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9b876 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b87a je 0x11b9b89d */
  if (C.zf) goto L_11b9b89d;
  /* 11b9b87c push 0x11bc8408 */
  push32((uint32_t)(0x11bc8408u));
  /* 11b9b881 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9b883 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 11b9b888 push 0x11bc880c */
  push32((uint32_t)(0x11bc880cu));
  /* 11b9b88d push 2 */
  push32((uint32_t)(0x2u));
  /* 11b9b88f call 0x11b99390 */
  push32(0x11b9b894u); f_11b99390();
  /* 11b9b894 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b897 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b89a jne 0x11b9b89d */
  if (!C.zf) goto L_11b9b89d;
  /* 11b9b89c int3  */
  x86_unimpl("int3 @ 0x11b9b89c");
L_11b9b89d:;
  /* 11b9b89d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b9b89f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9b8a1 jne 0x11b9b84a */
  if (!C.zf) goto L_11b9b84a;
  /* 11b9b8a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9b8a6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9b8a9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_11b9b8ac:;
  /* 11b9b8ac push 9 */
  push32((uint32_t)(0x9u));
  /* 11b9b8ae call 0x11b9a770 */
  push32(0x11b9b8b3u); f_11b9a770();
  /* 11b9b8b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b8b6 pop edi */
  EDI = (pop32());
  /* 11b9b8b7 pop esi */
  ESI = (pop32());
  /* 11b9b8b8 pop ebx */
  EBX = (pop32());
  /* 11b9b8b9 mov esp, ebp */
  ESP = (EBP);
  /* 11b9b8bb pop ebp */
  EBP = (pop32());
  /* 11b9b8bc ret  */
  ESPCHK(0x11b9b820u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8c0 @ 0x11b9b8c0 (28 bytes, 11 insns) */
void f_11b9b8c0(void) {
  FTRACE(0x11b9b8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9b8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9b8c1 mov ebp, esp */
  EBP = (ESP);
  /* 11b9b8c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9b8c4 mov eax, dword ptr [0x11bcc250] */
  EAX = (r32((uint32_t)(0x11bcc250)));
  /* 11b9b8c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b9b8cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9b8cf mov dword ptr [0x11bcc250], ecx */
  w32((uint32_t)(0x11bcc250), (ECX));
  /* 11b9b8d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9b8d8 mov esp, ebp */
  ESP = (EBP);
  /* 11b9b8da pop ebp */
  EBP = (pop32());
  /* 11b9b8db ret  */
  ESPCHK(0x11b9b8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8e0 @ 0x11b9b8e0 (136 bytes, 55 insns) */
void f_11b9b8e0(void) {
  FTRACE(0x11b9b8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9b8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9b8e1 mov ebp, esp */
  EBP = (ESP);
  /* 11b9b8e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9b8e4 push ebx */
  push32((uint32_t)(EBX));
  /* 11b9b8e5 push esi */
  push32((uint32_t)(ESI));
  /* 11b9b8e6 push edi */
  push32((uint32_t)(EDI));
  /* 11b9b8e7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_11b9b8ee:;
  /* 11b9b8ee mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9b8f1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9b8f4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9b8f7 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11b9b8fa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9b8fc je 0x11b9b95e */
  if (C.zf) goto L_11b9b95e;
  /* 11b9b8fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9b901 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9b903 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11b9b905 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9b908 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b9b90e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9b911 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b914 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11b9b917 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b919 je 0x11b9b95c */
  if (C.zf) goto L_11b9b95c;
L_11b9b91b:;
  /* 11b9b91b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9b91e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b9b923 push eax */
  push32((uint32_t)(EAX));
  /* 11b9b924 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9b927 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b9b929 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 11b9b92c push edx */
  push32((uint32_t)(EDX));
  /* 11b9b92d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9b930 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9b933 push eax */
  push32((uint32_t)(EAX));
  /* 11b9b934 push 0x11bc8ad0 */
  push32((uint32_t)(0x11bc8ad0u));
  /* 11b9b939 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9b93b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9b93d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9b93f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9b941 call 0x11b99390 */
  push32(0x11b9b946u); f_11b99390();
  /* 11b9b946 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b949 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b94c jne 0x11b9b94f */
  if (!C.zf) goto L_11b9b94f;
  /* 11b9b94e int3  */
  x86_unimpl("int3 @ 0x11b9b94e");
L_11b9b94f:;
  /* 11b9b94f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b9b951 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b9b953 jne 0x11b9b91b */
  if (!C.zf) goto L_11b9b91b;
  /* 11b9b955 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11b9b95c:;
  /* 11b9b95c jmp 0x11b9b8ee */
  goto L_11b9b8ee;
L_11b9b95e:;
  /* 11b9b95e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9b961 pop edi */
  EDI = (pop32());
  /* 11b9b962 pop esi */
  ESI = (pop32());
  /* 11b9b963 pop ebx */
  EBX = (pop32());
  /* 11b9b964 mov esp, ebp */
  ESP = (EBP);
  /* 11b9b966 pop ebp */
  EBP = (pop32());
  /* 11b9b967 ret  */
  ESPCHK(0x11b9b8e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b970 @ 0x11b9b970 (863 bytes, 299 insns) [1 switch table(s)] */
void f_11b9b970(void) {
  FTRACE(0x11b9b970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9b970 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9b971 mov ebp, esp */
  EBP = (ESP);
  /* 11b9b973 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9b976 push ebx */
  push32((uint32_t)(EBX));
  /* 11b9b977 push esi */
  push32((uint32_t)(ESI));
  /* 11b9b978 push edi */
  push32((uint32_t)(EDI));
  /* 11b9b979 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11b9b980 mov eax, dword ptr [0x11bcbf08] */
  EAX = (r32((uint32_t)(0x11bcbf08)));
  /* 11b9b985 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11b9b988 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9b98a jne 0x11b9b996 */
  if (!C.zf) goto L_11b9b996;
  /* 11b9b98c mov eax, 1 */
  EAX = (0x1u);
  /* 11b9b991 jmp 0x11b9bcc8 */
  goto L_11b9bcc8;
L_11b9b996:;
  /* 11b9b996 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b9b998 call 0x11b9a6d0 */
  push32(0x11b9b99du); f_11b9a6d0();
  /* 11b9b99d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b9a0 call 0x11ba2530 */
  push32(0x11b9b9a5u); f_11ba2530();
  /* 11b9b9a5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b9b9a8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b9ac je 0x11b9bab9 */
  if (C.zf) goto L_11b9bab9;
  /* 11b9b9b2 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b9b6 je 0x11b9bab9 */
  if (C.zf) goto L_11b9bab9;
  /* 11b9b9bc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9b9bf mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11b9b9c2 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b9b9c5 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b9c8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11b9b9cb cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b9cf ja 0x11b9ba82 */
  if ((!C.cf&&!C.zf)) goto L_11b9ba82;
  /* 11b9b9d5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b9b9d8 jmp dword ptr [eax*4 + 0x11b9bccf] */
  switch (EAX) {
    case 0: goto L_11b9ba5a;
    case 1: goto L_11b9ba32;
    case 2: goto L_11b9ba0a;
    case 3: goto L_11b9b9df;
    default: x86_unimpl("switch@0x11b9b9d8 out of table"); return;
  }
L_11b9b9df:;
  /* 11b9b9df push 0x11bc8c24 */
  push32((uint32_t)(0x11bc8c24u));
  /* 11b9b9e4 push 0x11bc87ac */
  push32((uint32_t)(0x11bc87acu));
  /* 11b9b9e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9b9eb push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9b9ed push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9b9ef push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9b9f1 call 0x11b99390 */
  push32(0x11b9b9f6u); f_11b99390();
  /* 11b9b9f6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9b9f9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9b9fc jne 0x11b9b9ff */
  if (!C.zf) goto L_11b9b9ff;
  /* 11b9b9fe int3  */
  x86_unimpl("int3 @ 0x11b9b9fe");
L_11b9b9ff:;
  /* 11b9b9ff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b9ba01 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b9ba03 jne 0x11b9b9df */
  if (!C.zf) goto L_11b9b9df;
  /* 11b9ba05 jmp 0x11b9baa8 */
  goto L_11b9baa8;
L_11b9ba0a:;
  /* 11b9ba0a push 0x11bc8c00 */
  push32((uint32_t)(0x11bc8c00u));
  /* 11b9ba0f push 0x11bc87ac */
  push32((uint32_t)(0x11bc87acu));
  /* 11b9ba14 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9ba16 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9ba18 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9ba1a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9ba1c call 0x11b99390 */
  push32(0x11b9ba21u); f_11b99390();
  /* 11b9ba21 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ba24 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9ba27 jne 0x11b9ba2a */
  if (!C.zf) goto L_11b9ba2a;
  /* 11b9ba29 int3  */
  x86_unimpl("int3 @ 0x11b9ba29");
L_11b9ba2a:;
  /* 11b9ba2a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b9ba2c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9ba2e jne 0x11b9ba0a */
  if (!C.zf) goto L_11b9ba0a;
  /* 11b9ba30 jmp 0x11b9baa8 */
  goto L_11b9baa8;
L_11b9ba32:;
  /* 11b9ba32 push 0x11bc8bdc */
  push32((uint32_t)(0x11bc8bdcu));
  /* 11b9ba37 push 0x11bc87ac */
  push32((uint32_t)(0x11bc87acu));
  /* 11b9ba3c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9ba3e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9ba40 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9ba42 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9ba44 call 0x11b99390 */
  push32(0x11b9ba49u); f_11b99390();
  /* 11b9ba49 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ba4c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9ba4f jne 0x11b9ba52 */
  if (!C.zf) goto L_11b9ba52;
  /* 11b9ba51 int3  */
  x86_unimpl("int3 @ 0x11b9ba51");
L_11b9ba52:;
  /* 11b9ba52 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9ba54 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9ba56 jne 0x11b9ba32 */
  if (!C.zf) goto L_11b9ba32;
  /* 11b9ba58 jmp 0x11b9baa8 */
  goto L_11b9baa8;
L_11b9ba5a:;
  /* 11b9ba5a push 0x11bc8bb8 */
  push32((uint32_t)(0x11bc8bb8u));
  /* 11b9ba5f push 0x11bc87ac */
  push32((uint32_t)(0x11bc87acu));
  /* 11b9ba64 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9ba66 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9ba68 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9ba6a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9ba6c call 0x11b99390 */
  push32(0x11b9ba71u); f_11b99390();
  /* 11b9ba71 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ba74 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9ba77 jne 0x11b9ba7a */
  if (!C.zf) goto L_11b9ba7a;
  /* 11b9ba79 int3  */
  x86_unimpl("int3 @ 0x11b9ba79");
L_11b9ba7a:;
  /* 11b9ba7a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b9ba7c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b9ba7e jne 0x11b9ba5a */
  if (!C.zf) goto L_11b9ba5a;
  /* 11b9ba80 jmp 0x11b9baa8 */
  goto L_11b9baa8;
L_11b9ba82:;
  /* 11b9ba82 push 0x11bc8b8c */
  push32((uint32_t)(0x11bc8b8cu));
  /* 11b9ba87 push 0x11bc87ac */
  push32((uint32_t)(0x11bc87acu));
  /* 11b9ba8c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9ba8e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9ba90 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9ba92 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9ba94 call 0x11b99390 */
  push32(0x11b9ba99u); f_11b99390();
  /* 11b9ba99 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ba9c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9ba9f jne 0x11b9baa2 */
  if (!C.zf) goto L_11b9baa2;
  /* 11b9baa1 int3  */
  x86_unimpl("int3 @ 0x11b9baa1");
L_11b9baa2:;
  /* 11b9baa2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b9baa4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9baa6 jne 0x11b9ba82 */
  if (!C.zf) goto L_11b9ba82;
L_11b9baa8:;
  /* 11b9baa8 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b9baaa call 0x11b9a770 */
  push32(0x11b9baafu); f_11b9a770();
  /* 11b9baaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9bab2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9bab4 jmp 0x11b9bcc8 */
  goto L_11b9bcc8;
L_11b9bab9:;
  /* 11b9bab9 mov eax, dword ptr [0x11bce3d0] */
  EAX = (r32((uint32_t)(0x11bce3d0)));
  /* 11b9babe mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b9bac1 jmp 0x11b9bacb */
  goto L_11b9bacb;
L_11b9bac3:;
  /* 11b9bac3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9bac6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b9bac8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11b9bacb:;
  /* 11b9bacb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9bacf je 0x11b9bcbb */
  if (C.zf) goto L_11b9bcbb;
  /* 11b9bad5 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11b9badc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9badf mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11b9bae2 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b9bae8 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9baeb je 0x11b9bb10 */
  if (C.zf) goto L_11b9bb10;
  /* 11b9baed mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9baf0 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9baf4 je 0x11b9bb10 */
  if (C.zf) goto L_11b9bb10;
  /* 11b9baf6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9baf9 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11b9bafc and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b9bb02 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9bb05 je 0x11b9bb10 */
  if (C.zf) goto L_11b9bb10;
  /* 11b9bb07 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9bb0a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9bb0e jne 0x11b9bb28 */
  if (!C.zf) goto L_11b9bb28;
L_11b9bb10:;
  /* 11b9bb10 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9bb13 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11b9bb16 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b9bb1c mov edx, dword ptr [ecx*4 + 0x11bcbf18] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11bcbf18)));
  /* 11b9bb23 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11b9bb26 jmp 0x11b9bb2f */
  goto L_11b9bb2f;
L_11b9bb28:;
  /* 11b9bb28 mov dword ptr [ebp - 0x14], 0x11bc8b84 */
  w32((uint32_t)(EBP + -0x14), (0x11bc8b84u));
L_11b9bb2f:;
  /* 11b9bb2f push 4 */
  push32((uint32_t)(0x4u));
  /* 11b9bb31 mov al, byte ptr [0x11bcbf14] */
  AL = (r8((uint32_t)(0x11bcbf14)));
  /* 11b9bb36 push eax */
  push32((uint32_t)(EAX));
  /* 11b9bb37 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9bb3a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9bb3d push ecx */
  push32((uint32_t)(ECX));
  /* 11b9bb3e call 0x11b9b8e0 */
  push32(0x11b9bb43u); f_11b9b8e0();
  /* 11b9bb43 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9bb46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9bb48 jne 0x11b9bb84 */
  if (!C.zf) goto L_11b9bb84;
L_11b9bb4a:;
  /* 11b9bb4a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9bb4d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9bb50 push edx */
  push32((uint32_t)(EDX));
  /* 11b9bb51 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9bb54 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11b9bb57 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9bb58 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b9bb5b push edx */
  push32((uint32_t)(EDX));
  /* 11b9bb5c push 0x11bc8a88 */
  push32((uint32_t)(0x11bc8a88u));
  /* 11b9bb61 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9bb63 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9bb65 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9bb67 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9bb69 call 0x11b99390 */
  push32(0x11b9bb6eu); f_11b99390();
  /* 11b9bb6e add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9bb71 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9bb74 jne 0x11b9bb77 */
  if (!C.zf) goto L_11b9bb77;
  /* 11b9bb76 int3  */
  x86_unimpl("int3 @ 0x11b9bb76");
L_11b9bb77:;
  /* 11b9bb77 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9bb79 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9bb7b jne 0x11b9bb4a */
  if (!C.zf) goto L_11b9bb4a;
  /* 11b9bb7d mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11b9bb84:;
  /* 11b9bb84 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b9bb86 mov cl, byte ptr [0x11bcbf14] */
  CL = (r8((uint32_t)(0x11bcbf14)));
  /* 11b9bb8c push ecx */
  push32((uint32_t)(ECX));
  /* 11b9bb8d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9bb90 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11b9bb93 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9bb96 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 11b9bb9a push edx */
  push32((uint32_t)(EDX));
  /* 11b9bb9b call 0x11b9b8e0 */
  push32(0x11b9bba0u); f_11b9b8e0();
  /* 11b9bba0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9bba3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9bba5 jne 0x11b9bbe1 */
  if (!C.zf) goto L_11b9bbe1;
L_11b9bba7:;
  /* 11b9bba7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9bbaa add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9bbad push eax */
  push32((uint32_t)(EAX));
  /* 11b9bbae mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9bbb1 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11b9bbb4 push edx */
  push32((uint32_t)(EDX));
  /* 11b9bbb5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b9bbb8 push eax */
  push32((uint32_t)(EAX));
  /* 11b9bbb9 push 0x11bc8a5c */
  push32((uint32_t)(0x11bc8a5cu));
  /* 11b9bbbe push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9bbc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9bbc2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9bbc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9bbc6 call 0x11b99390 */
  push32(0x11b9bbcbu); f_11b99390();
  /* 11b9bbcb add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9bbce cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9bbd1 jne 0x11b9bbd4 */
  if (!C.zf) goto L_11b9bbd4;
  /* 11b9bbd3 int3  */
  x86_unimpl("int3 @ 0x11b9bbd3");
L_11b9bbd4:;
  /* 11b9bbd4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b9bbd6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b9bbd8 jne 0x11b9bba7 */
  if (!C.zf) goto L_11b9bba7;
  /* 11b9bbda mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11b9bbe1:;
  /* 11b9bbe1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9bbe4 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9bbe8 jne 0x11b9bc3a */
  if (!C.zf) goto L_11b9bc3a;
  /* 11b9bbea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9bbed mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11b9bbf0 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9bbf1 mov dl, byte ptr [0x11bcbf15] */
  DL = (r8((uint32_t)(0x11bcbf15)));
  /* 11b9bbf7 push edx */
  push32((uint32_t)(EDX));
  /* 11b9bbf8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9bbfb add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9bbfe push eax */
  push32((uint32_t)(EAX));
  /* 11b9bbff call 0x11b9b8e0 */
  push32(0x11b9bc04u); f_11b9b8e0();
  /* 11b9bc04 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9bc07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9bc09 jne 0x11b9bc3a */
  if (!C.zf) goto L_11b9bc3a;
L_11b9bc0b:;
  /* 11b9bc0b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9bc0e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9bc11 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9bc12 push 0x11bc8b58 */
  push32((uint32_t)(0x11bc8b58u));
  /* 11b9bc17 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9bc19 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9bc1b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9bc1d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9bc1f call 0x11b99390 */
  push32(0x11b9bc24u); f_11b99390();
  /* 11b9bc24 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9bc27 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9bc2a jne 0x11b9bc2d */
  if (!C.zf) goto L_11b9bc2d;
  /* 11b9bc2c int3  */
  x86_unimpl("int3 @ 0x11b9bc2c");
L_11b9bc2d:;
  /* 11b9bc2d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b9bc2f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9bc31 jne 0x11b9bc0b */
  if (!C.zf) goto L_11b9bc0b;
  /* 11b9bc33 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11b9bc3a:;
  /* 11b9bc3a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9bc3e jne 0x11b9bcb6 */
  if (!C.zf) goto L_11b9bcb6;
  /* 11b9bc40 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9bc43 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9bc47 je 0x11b9bc7c */
  if (C.zf) goto L_11b9bc7c;
L_11b9bc49:;
  /* 11b9bc49 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9bc4c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11b9bc4f push edx */
  push32((uint32_t)(EDX));
  /* 11b9bc50 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9bc53 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11b9bc56 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9bc57 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b9bc5a push edx */
  push32((uint32_t)(EDX));
  /* 11b9bc5b push 0x11bc8b38 */
  push32((uint32_t)(0x11bc8b38u));
  /* 11b9bc60 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9bc62 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9bc64 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9bc66 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9bc68 call 0x11b99390 */
  push32(0x11b9bc6du); f_11b99390();
  /* 11b9bc6d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9bc70 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9bc73 jne 0x11b9bc76 */
  if (!C.zf) goto L_11b9bc76;
  /* 11b9bc75 int3  */
  x86_unimpl("int3 @ 0x11b9bc75");
L_11b9bc76:;
  /* 11b9bc76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9bc78 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9bc7a jne 0x11b9bc49 */
  if (!C.zf) goto L_11b9bc49;
L_11b9bc7c:;
  /* 11b9bc7c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9bc7f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11b9bc82 push edx */
  push32((uint32_t)(EDX));
  /* 11b9bc83 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9bc86 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9bc89 push eax */
  push32((uint32_t)(EAX));
  /* 11b9bc8a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b9bc8d push ecx */
  push32((uint32_t)(ECX));
  /* 11b9bc8e push 0x11bc8b0c */
  push32((uint32_t)(0x11bc8b0cu));
  /* 11b9bc93 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9bc95 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9bc97 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9bc99 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9bc9b call 0x11b99390 */
  push32(0x11b9bca0u); f_11b99390();
  /* 11b9bca0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9bca3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9bca6 jne 0x11b9bca9 */
  if (!C.zf) goto L_11b9bca9;
  /* 11b9bca8 int3  */
  x86_unimpl("int3 @ 0x11b9bca8");
L_11b9bca9:;
  /* 11b9bca9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b9bcab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9bcad jne 0x11b9bc7c */
  if (!C.zf) goto L_11b9bc7c;
  /* 11b9bcaf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11b9bcb6:;
  /* 11b9bcb6 jmp 0x11b9bac3 */
  goto L_11b9bac3;
L_11b9bcbb:;
  /* 11b9bcbb push 9 */
  push32((uint32_t)(0x9u));
  /* 11b9bcbd call 0x11b9a770 */
  push32(0x11b9bcc2u); f_11b9a770();
  /* 11b9bcc2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9bcc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11b9bcc8:;
  /* 11b9bcc8 pop edi */
  EDI = (pop32());
  /* 11b9bcc9 pop esi */
  ESI = (pop32());
  /* 11b9bcca pop ebx */
  EBX = (pop32());
  /* 11b9bccb mov esp, ebp */
  ESP = (EBP);
  /* 11b9bccd pop ebp */
  EBP = (pop32());
  /* 11b9bcce ret  */
  ESPCHK(0x11b9b970u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bce0 @ 0x11b9bce0 (34 bytes, 13 insns) */
void f_11b9bce0(void) {
  FTRACE(0x11b9bce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9bce0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9bce1 mov ebp, esp */
  EBP = (ESP);
  /* 11b9bce3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9bce4 mov eax, dword ptr [0x11bcbf08] */
  EAX = (r32((uint32_t)(0x11bcbf08)));
  /* 11b9bce9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b9bcec cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9bcf0 je 0x11b9bcfb */
  if (C.zf) goto L_11b9bcfb;
  /* 11b9bcf2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9bcf5 mov dword ptr [0x11bcbf08], ecx */
  w32((uint32_t)(0x11bcbf08), (ECX));
L_11b9bcfb:;
  /* 11b9bcfb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9bcfe mov esp, ebp */
  ESP = (EBP);
  /* 11b9bd00 pop ebp */
  EBP = (pop32());
  /* 11b9bd01 ret  */
  ESPCHK(0x11b9bce0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd10 @ 0x11b9bd10 (103 bytes, 38 insns) */
void f_11b9bd10(void) {
  FTRACE(0x11b9bd10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9bd10 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9bd11 mov ebp, esp */
  EBP = (ESP);
  /* 11b9bd13 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9bd14 mov eax, dword ptr [0x11bcbf08] */
  EAX = (r32((uint32_t)(0x11bcbf08)));
  /* 11b9bd19 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11b9bd1c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9bd1e jne 0x11b9bd22 */
  if (!C.zf) goto L_11b9bd22;
  /* 11b9bd20 jmp 0x11b9bd73 */
  goto L_11b9bd73;
L_11b9bd22:;
  /* 11b9bd22 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b9bd24 call 0x11b9a6d0 */
  push32(0x11b9bd29u); f_11b9a6d0();
  /* 11b9bd29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9bd2c mov ecx, dword ptr [0x11bce3d0] */
  ECX = (r32((uint32_t)(0x11bce3d0)));
  /* 11b9bd32 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b9bd35 jmp 0x11b9bd3f */
  goto L_11b9bd3f;
L_11b9bd37:;
  /* 11b9bd37 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9bd3a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b9bd3c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b9bd3f:;
  /* 11b9bd3f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9bd43 je 0x11b9bd69 */
  if (C.zf) goto L_11b9bd69;
  /* 11b9bd45 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9bd48 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11b9bd4b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b9bd51 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9bd54 jne 0x11b9bd67 */
  if (!C.zf) goto L_11b9bd67;
  /* 11b9bd56 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9bd59 push eax */
  push32((uint32_t)(EAX));
  /* 11b9bd5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9bd5d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9bd60 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9bd61 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x11b9bd64u);
  /* 11b9bd64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9bd67:;
  /* 11b9bd67 jmp 0x11b9bd37 */
  goto L_11b9bd37;
L_11b9bd69:;
  /* 11b9bd69 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b9bd6b call 0x11b9a770 */
  push32(0x11b9bd70u); f_11b9a770();
  /* 11b9bd70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9bd73:;
  /* 11b9bd73 mov esp, ebp */
  ESP = (EBP);
  /* 11b9bd75 pop ebp */
  EBP = (pop32());
  /* 11b9bd76 ret  */
  ESPCHK(0x11b9bd10u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x11b9bd80 (75 bytes, 28 insns) */
void f_11b9bd80(void) {
  FTRACE(0x11b9bd80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9bd80 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9bd81 mov ebp, esp */
  EBP = (ESP);
  /* 11b9bd83 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9bd84 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9bd88 je 0x11b9bdbd */
  if (C.zf) goto L_11b9bdbd;
  /* 11b9bd8a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9bd8d push eax */
  push32((uint32_t)(EAX));
  /* 11b9bd8e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9bd91 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9bd92 call dword ptr [0x11bd0438] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0438))), 0x11b9bd98u);
  /* 11b9bd98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9bd9a jne 0x11b9bdbd */
  if (!C.zf) goto L_11b9bdbd;
  /* 11b9bd9c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9bda0 je 0x11b9bdb4 */
  if (C.zf) goto L_11b9bdb4;
  /* 11b9bda2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9bda5 push edx */
  push32((uint32_t)(EDX));
  /* 11b9bda6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9bda9 push eax */
  push32((uint32_t)(EAX));
  /* 11b9bdaa call dword ptr [0x11bd0434] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0434))), 0x11b9bdb0u);
  /* 11b9bdb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9bdb2 jne 0x11b9bdbd */
  if (!C.zf) goto L_11b9bdbd;
L_11b9bdb4:;
  /* 11b9bdb4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11b9bdbb jmp 0x11b9bdc4 */
  goto L_11b9bdc4;
L_11b9bdbd:;
  /* 11b9bdbd mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11b9bdc4:;
  /* 11b9bdc4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9bdc7 mov esp, ebp */
  ESP = (EBP);
  /* 11b9bdc9 pop ebp */
  EBP = (pop32());
  /* 11b9bdca ret  */
  ESPCHK(0x11b9bd80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bdd0 @ 0x11b9bdd0 (134 bytes, 50 insns) */
void f_11b9bdd0(void) {
  FTRACE(0x11b9bdd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9bdd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9bdd1 mov ebp, esp */
  EBP = (ESP);
  /* 11b9bdd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9bdd4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9bdd8 jne 0x11b9bdde */
  if (!C.zf) goto L_11b9bdde;
  /* 11b9bdda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9bddc jmp 0x11b9be52 */
  goto L_11b9be52;
L_11b9bdde:;
  /* 11b9bdde push 1 */
  push32((uint32_t)(0x1u));
  /* 11b9bde0 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11b9bde2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9bde5 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9bde8 push eax */
  push32((uint32_t)(EAX));
  /* 11b9bde9 call 0x11b9bd80 */
  push32(0x11b9bdeeu); f_11b9bd80();
  /* 11b9bdee add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9bdf1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9bdf3 jne 0x11b9bdf9 */
  if (!C.zf) goto L_11b9bdf9;
  /* 11b9bdf5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9bdf7 jmp 0x11b9be52 */
  goto L_11b9be52;
L_11b9bdf9:;
  /* 11b9bdf9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9bdfc sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9bdff push ecx */
  push32((uint32_t)(ECX));
  /* 11b9be00 call 0x11ba2650 */
  push32(0x11b9be05u); f_11ba2650();
  /* 11b9be05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9be08 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b9be0b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9be0f je 0x11b9be26 */
  if (C.zf) goto L_11b9be26;
  /* 11b9be11 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9be14 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9be17 push edx */
  push32((uint32_t)(EDX));
  /* 11b9be18 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9be1b push eax */
  push32((uint32_t)(EAX));
  /* 11b9be1c call 0x11ba26b0 */
  push32(0x11b9be21u); f_11ba26b0();
  /* 11b9be21 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9be24 jmp 0x11b9be52 */
  goto L_11b9be52;
L_11b9be26:;
  /* 11b9be26 mov ecx, dword ptr [0x11bce3e0] */
  ECX = (r32((uint32_t)(0x11bce3e0)));
  /* 11b9be2c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11b9be32 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b9be34 je 0x11b9be3d */
  if (C.zf) goto L_11b9be3d;
  /* 11b9be36 mov eax, 1 */
  EAX = (0x1u);
  /* 11b9be3b jmp 0x11b9be52 */
  goto L_11b9be52;
L_11b9be3d:;
  /* 11b9be3d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9be40 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9be43 push edx */
  push32((uint32_t)(EDX));
  /* 11b9be44 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9be46 mov eax, dword ptr [0x11bcfd28] */
  EAX = (r32((uint32_t)(0x11bcfd28)));
  /* 11b9be4b push eax */
  push32((uint32_t)(EAX));
  /* 11b9be4c call dword ptr [0x11bd043c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd043c))), 0x11b9be52u);
L_11b9be52:;
  /* 11b9be52 mov esp, ebp */
  ESP = (EBP);
  /* 11b9be54 pop ebp */
  EBP = (pop32());
  /* 11b9be55 ret  */
  ESPCHK(0x11b9bdd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be60 @ 0x11b9be60 (227 bytes, 80 insns) */
void f_11b9be60(void) {
  FTRACE(0x11b9be60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9be60 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9be61 mov ebp, esp */
  EBP = (ESP);
  /* 11b9be63 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9be64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9be67 push eax */
  push32((uint32_t)(EAX));
  /* 11b9be68 call 0x11b9bdd0 */
  push32(0x11b9be6du); f_11b9bdd0();
  /* 11b9be6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9be70 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9be72 jne 0x11b9be7b */
  if (!C.zf) goto L_11b9be7b;
  /* 11b9be74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9be76 jmp 0x11b9bf3f */
  goto L_11b9bf3f;
L_11b9be7b:;
  /* 11b9be7b push 9 */
  push32((uint32_t)(0x9u));
  /* 11b9be7d call 0x11b9a6d0 */
  push32(0x11b9be82u); f_11b9a6d0();
  /* 11b9be82 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9be85 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9be88 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9be8b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b9be8e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9be91 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11b9be94 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b9be99 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9be9c je 0x11b9bec0 */
  if (C.zf) goto L_11b9bec0;
  /* 11b9be9e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9bea1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9bea5 je 0x11b9bec0 */
  if (C.zf) goto L_11b9bec0;
  /* 11b9bea7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9beaa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11b9bead and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b9beb2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9beb5 je 0x11b9bec0 */
  if (C.zf) goto L_11b9bec0;
  /* 11b9beb7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9beba cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9bebe jne 0x11b9bf33 */
  if (!C.zf) goto L_11b9bf33;
L_11b9bec0:;
  /* 11b9bec0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b9bec2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9bec5 push edx */
  push32((uint32_t)(EDX));
  /* 11b9bec6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9bec9 push eax */
  push32((uint32_t)(EAX));
  /* 11b9beca call 0x11b9bd80 */
  push32(0x11b9becfu); f_11b9bd80();
  /* 11b9becf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9bed2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9bed4 je 0x11b9bf33 */
  if (C.zf) goto L_11b9bf33;
  /* 11b9bed6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9bed9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11b9bedc cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9bedf jne 0x11b9bf33 */
  if (!C.zf) goto L_11b9bf33;
  /* 11b9bee1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9bee4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11b9bee7 cmp ecx, dword ptr [0x11bcbf0c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11bcbf0c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9beed jg 0x11b9bf33 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b9bf33;
  /* 11b9beef cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9bef3 je 0x11b9bf00 */
  if (C.zf) goto L_11b9bf00;
  /* 11b9bef5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9bef8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9befb mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11b9befe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11b9bf00:;
  /* 11b9bf00 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9bf04 je 0x11b9bf11 */
  if (C.zf) goto L_11b9bf11;
  /* 11b9bf06 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9bf09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9bf0c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11b9bf0f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11b9bf11:;
  /* 11b9bf11 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9bf15 je 0x11b9bf22 */
  if (C.zf) goto L_11b9bf22;
  /* 11b9bf17 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9bf1a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9bf1d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11b9bf20 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11b9bf22:;
  /* 11b9bf22 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b9bf24 call 0x11b9a770 */
  push32(0x11b9bf29u); f_11b9a770();
  /* 11b9bf29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9bf2c mov eax, 1 */
  EAX = (0x1u);
  /* 11b9bf31 jmp 0x11b9bf3f */
  goto L_11b9bf3f;
L_11b9bf33:;
  /* 11b9bf33 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b9bf35 call 0x11b9a770 */
  push32(0x11b9bf3au); f_11b9a770();
  /* 11b9bf3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9bf3d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b9bf3f:;
  /* 11b9bf3f mov esp, ebp */
  ESP = (EBP);
  /* 11b9bf41 pop ebp */
  EBP = (pop32());
  /* 11b9bf42 ret  */
  ESPCHK(0x11b9be60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf50 @ 0x11b9bf50 (28 bytes, 11 insns) */
void f_11b9bf50(void) {
  FTRACE(0x11b9bf50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9bf50 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9bf51 mov ebp, esp */
  EBP = (ESP);
  /* 11b9bf53 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9bf54 mov eax, dword ptr [0x11bcfe9c] */
  EAX = (r32((uint32_t)(0x11bcfe9c)));
  /* 11b9bf59 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b9bf5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9bf5f mov dword ptr [0x11bcfe9c], ecx */
  w32((uint32_t)(0x11bcfe9c), (ECX));
  /* 11b9bf65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9bf68 mov esp, ebp */
  ESP = (EBP);
  /* 11b9bf6a pop ebp */
  EBP = (pop32());
  /* 11b9bf6b ret  */
  ESPCHK(0x11b9bf50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf70 @ 0x11b9bf70 (362 bytes, 116 insns) */
void f_11b9bf70(void) {
  FTRACE(0x11b9bf70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9bf70 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9bf71 mov ebp, esp */
  EBP = (ESP);
  /* 11b9bf73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9bf76 push ebx */
  push32((uint32_t)(EBX));
  /* 11b9bf77 push esi */
  push32((uint32_t)(ESI));
  /* 11b9bf78 push edi */
  push32((uint32_t)(EDI));
  /* 11b9bf79 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9bf7d jne 0x11b9bfaa */
  if (!C.zf) goto L_11b9bfaa;
L_11b9bf7f:;
  /* 11b9bf7f push 0x11bc8c6c */
  push32((uint32_t)(0x11bc8c6cu));
  /* 11b9bf84 push 0x11bc87ac */
  push32((uint32_t)(0x11bc87acu));
  /* 11b9bf89 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9bf8b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9bf8d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9bf8f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9bf91 call 0x11b99390 */
  push32(0x11b9bf96u); f_11b99390();
  /* 11b9bf96 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9bf99 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9bf9c jne 0x11b9bf9f */
  if (!C.zf) goto L_11b9bf9f;
  /* 11b9bf9e int3  */
  x86_unimpl("int3 @ 0x11b9bf9e");
L_11b9bf9f:;
  /* 11b9bf9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9bfa1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9bfa3 jne 0x11b9bf7f */
  if (!C.zf) goto L_11b9bf7f;
  /* 11b9bfa5 jmp 0x11b9c0d3 */
  goto L_11b9c0d3;
L_11b9bfaa:;
  /* 11b9bfaa push 9 */
  push32((uint32_t)(0x9u));
  /* 11b9bfac call 0x11b9a6d0 */
  push32(0x11b9bfb1u); f_11b9a6d0();
  /* 11b9bfb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9bfb4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9bfb7 mov edx, dword ptr [0x11bce3d0] */
  EDX = (r32((uint32_t)(0x11bce3d0)));
  /* 11b9bfbd mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11b9bfbf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b9bfc6 jmp 0x11b9bfd1 */
  goto L_11b9bfd1;
L_11b9bfc8:;
  /* 11b9bfc8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9bfcb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9bfce mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b9bfd1:;
  /* 11b9bfd1 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9bfd5 jge 0x11b9bff5 */
  if ((C.sf==C.of)) goto L_11b9bff5;
  /* 11b9bfd7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9bfda mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9bfdd mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 11b9bfe5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9bfe8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9bfeb mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 11b9bff3 jmp 0x11b9bfc8 */
  goto L_11b9bfc8;
L_11b9bff5:;
  /* 11b9bff5 mov edx, dword ptr [0x11bce3d0] */
  EDX = (r32((uint32_t)(0x11bce3d0)));
  /* 11b9bffb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11b9bffe jmp 0x11b9c008 */
  goto L_11b9c008;
L_11b9c000:;
  /* 11b9c000 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9c003 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b9c005 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11b9c008:;
  /* 11b9c008 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c00c je 0x11b9c0b1 */
  if (C.zf) goto L_11b9c0b1;
  /* 11b9c012 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9c015 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11b9c018 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b9c01d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9c01f jl 0x11b9c087 */
  if ((C.sf!=C.of)) goto L_11b9c087;
  /* 11b9c021 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9c024 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11b9c027 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b9c02d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c030 jge 0x11b9c087 */
  if ((C.sf==C.of)) goto L_11b9c087;
  /* 11b9c032 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9c035 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11b9c038 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b9c03e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9c041 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 11b9c045 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9c048 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9c04b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11b9c04e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b9c054 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9c057 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 11b9c05b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9c05e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11b9c061 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b9c066 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9c069 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 11b9c06d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9c070 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9c073 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9c076 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11b9c079 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b9c07e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9c081 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 11b9c085 jmp 0x11b9c0ac */
  goto L_11b9c0ac;
L_11b9c087:;
  /* 11b9c087 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9c08a push edx */
  push32((uint32_t)(EDX));
  /* 11b9c08b push 0x11bc8c48 */
  push32((uint32_t)(0x11bc8c48u));
  /* 11b9c090 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c092 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c094 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c096 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c098 call 0x11b99390 */
  push32(0x11b9c09du); f_11b99390();
  /* 11b9c09d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9c0a0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c0a3 jne 0x11b9c0a6 */
  if (!C.zf) goto L_11b9c0a6;
  /* 11b9c0a5 int3  */
  x86_unimpl("int3 @ 0x11b9c0a5");
L_11b9c0a6:;
  /* 11b9c0a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9c0a8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9c0aa jne 0x11b9c087 */
  if (!C.zf) goto L_11b9c087;
L_11b9c0ac:;
  /* 11b9c0ac jmp 0x11b9c000 */
  goto L_11b9c000;
L_11b9c0b1:;
  /* 11b9c0b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9c0b4 mov edx, dword ptr [0x11bce3d8] */
  EDX = (r32((uint32_t)(0x11bce3d8)));
  /* 11b9c0ba mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 11b9c0bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9c0c0 mov ecx, dword ptr [0x11bce3cc] */
  ECX = (r32((uint32_t)(0x11bce3cc)));
  /* 11b9c0c6 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 11b9c0c9 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b9c0cb call 0x11b9a770 */
  push32(0x11b9c0d0u); f_11b9a770();
  /* 11b9c0d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9c0d3:;
  /* 11b9c0d3 pop edi */
  EDI = (pop32());
  /* 11b9c0d4 pop esi */
  ESI = (pop32());
  /* 11b9c0d5 pop ebx */
  EBX = (pop32());
  /* 11b9c0d6 mov esp, ebp */
  ESP = (EBP);
  /* 11b9c0d8 pop ebp */
  EBP = (pop32());
  /* 11b9c0d9 ret  */
  ESPCHK(0x11b9bf70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0e0 @ 0x11b9c0e0 (291 bytes, 95 insns) */
void f_11b9c0e0(void) {
  FTRACE(0x11b9c0e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9c0e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9c0e1 mov ebp, esp */
  EBP = (ESP);
  /* 11b9c0e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9c0e6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b9c0e7 push esi */
  push32((uint32_t)(ESI));
  /* 11b9c0e8 push edi */
  push32((uint32_t)(EDI));
  /* 11b9c0e9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11b9c0f0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c0f4 je 0x11b9c102 */
  if (C.zf) goto L_11b9c102;
  /* 11b9c0f6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c0fa je 0x11b9c102 */
  if (C.zf) goto L_11b9c102;
  /* 11b9c0fc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c100 jne 0x11b9c130 */
  if (!C.zf) goto L_11b9c130;
L_11b9c102:;
  /* 11b9c102 push 0x11bc8c94 */
  push32((uint32_t)(0x11bc8c94u));
  /* 11b9c107 push 0x11bc87ac */
  push32((uint32_t)(0x11bc87acu));
  /* 11b9c10c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c10e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c110 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c112 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c114 call 0x11b99390 */
  push32(0x11b9c119u); f_11b99390();
  /* 11b9c119 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9c11c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c11f jne 0x11b9c122 */
  if (!C.zf) goto L_11b9c122;
  /* 11b9c121 int3  */
  x86_unimpl("int3 @ 0x11b9c121");
L_11b9c122:;
  /* 11b9c122 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9c124 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9c126 jne 0x11b9c102 */
  if (!C.zf) goto L_11b9c102;
  /* 11b9c128 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9c12b jmp 0x11b9c1fc */
  goto L_11b9c1fc;
L_11b9c130:;
  /* 11b9c130 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b9c137 jmp 0x11b9c142 */
  goto L_11b9c142;
L_11b9c139:;
  /* 11b9c139 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9c13c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9c13f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11b9c142:;
  /* 11b9c142 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c146 jge 0x11b9c1cc */
  if ((C.sf==C.of)) goto L_11b9c1cc;
  /* 11b9c14c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9c14f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9c152 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9c155 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9c158 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 11b9c15c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9c160 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9c163 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9c166 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 11b9c16a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9c16d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9c170 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9c173 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9c176 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 11b9c17a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9c17e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9c181 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9c184 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 11b9c188 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9c18b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9c18e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c193 jne 0x11b9c1a2 */
  if (!C.zf) goto L_11b9c1a2;
  /* 11b9c195 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9c198 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9c19b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c1a0 je 0x11b9c1c7 */
  if (C.zf) goto L_11b9c1c7;
L_11b9c1a2:;
  /* 11b9c1a2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c1a6 je 0x11b9c1c7 */
  if (C.zf) goto L_11b9c1c7;
  /* 11b9c1a8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c1ac jne 0x11b9c1c0 */
  if (!C.zf) goto L_11b9c1c0;
  /* 11b9c1ae cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c1b2 jne 0x11b9c1c7 */
  if (!C.zf) goto L_11b9c1c7;
  /* 11b9c1b4 mov eax, dword ptr [0x11bcbf08] */
  EAX = (r32((uint32_t)(0x11bcbf08)));
  /* 11b9c1b9 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11b9c1bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9c1be je 0x11b9c1c7 */
  if (C.zf) goto L_11b9c1c7;
L_11b9c1c0:;
  /* 11b9c1c0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11b9c1c7:;
  /* 11b9c1c7 jmp 0x11b9c139 */
  goto L_11b9c139;
L_11b9c1cc:;
  /* 11b9c1cc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9c1cf mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9c1d2 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11b9c1d5 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9c1d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9c1db mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 11b9c1de mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9c1e1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9c1e4 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 11b9c1e7 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9c1ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9c1ed mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 11b9c1f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9c1f3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11b9c1f9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11b9c1fc:;
  /* 11b9c1fc pop edi */
  EDI = (pop32());
  /* 11b9c1fd pop esi */
  ESI = (pop32());
  /* 11b9c1fe pop ebx */
  EBX = (pop32());
  /* 11b9c1ff mov esp, ebp */
  ESP = (EBP);
  /* 11b9c201 pop ebp */
  EBP = (pop32());
  /* 11b9c202 ret  */
  ESPCHK(0x11b9c0e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c210 @ 0x11b9c210 (697 bytes, 253 insns) */
void f_11b9c210(void) {
  FTRACE(0x11b9c210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9c210 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9c211 mov ebp, esp */
  EBP = (ESP);
  /* 11b9c213 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9c216 push ebx */
  push32((uint32_t)(EBX));
  /* 11b9c217 push esi */
  push32((uint32_t)(ESI));
  /* 11b9c218 push edi */
  push32((uint32_t)(EDI));
  /* 11b9c219 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11b9c220 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b9c222 call 0x11b9a6d0 */
  push32(0x11b9c227u); f_11b9a6d0();
  /* 11b9c227 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9c22a:;
  /* 11b9c22a push 0x11bc8d8c */
  push32((uint32_t)(0x11bc8d8cu));
  /* 11b9c22f push 0x11bc87ac */
  push32((uint32_t)(0x11bc87acu));
  /* 11b9c234 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c236 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c238 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c23a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c23c call 0x11b99390 */
  push32(0x11b9c241u); f_11b99390();
  /* 11b9c241 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9c244 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c247 jne 0x11b9c24a */
  if (!C.zf) goto L_11b9c24a;
  /* 11b9c249 int3  */
  x86_unimpl("int3 @ 0x11b9c249");
L_11b9c24a:;
  /* 11b9c24a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9c24c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9c24e jne 0x11b9c22a */
  if (!C.zf) goto L_11b9c22a;
  /* 11b9c250 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c254 je 0x11b9c25e */
  if (C.zf) goto L_11b9c25e;
  /* 11b9c256 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9c259 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b9c25b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11b9c25e:;
  /* 11b9c25e mov eax, dword ptr [0x11bce3d0] */
  EAX = (r32((uint32_t)(0x11bce3d0)));
  /* 11b9c263 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b9c266 jmp 0x11b9c270 */
  goto L_11b9c270;
L_11b9c268:;
  /* 11b9c268 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9c26b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b9c26d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11b9c270:;
  /* 11b9c270 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c274 je 0x11b9c492 */
  if (C.zf) goto L_11b9c492;
  /* 11b9c27a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9c27d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c280 je 0x11b9c492 */
  if (C.zf) goto L_11b9c492;
  /* 11b9c286 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9c289 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11b9c28c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b9c292 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c295 je 0x11b9c2c4 */
  if (C.zf) goto L_11b9c2c4;
  /* 11b9c297 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9c29a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11b9c29d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b9c2a3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b9c2a5 je 0x11b9c2c4 */
  if (C.zf) goto L_11b9c2c4;
  /* 11b9c2a7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9c2aa mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11b9c2ad and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b9c2b2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c2b5 jne 0x11b9c2c9 */
  if (!C.zf) goto L_11b9c2c9;
  /* 11b9c2b7 mov ecx, dword ptr [0x11bcbf08] */
  ECX = (r32((uint32_t)(0x11bcbf08)));
  /* 11b9c2bd and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11b9c2c0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b9c2c2 jne 0x11b9c2c9 */
  if (!C.zf) goto L_11b9c2c9;
L_11b9c2c4:;
  /* 11b9c2c4 jmp 0x11b9c48d */
  goto L_11b9c48d;
L_11b9c2c9:;
  /* 11b9c2c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9c2cc cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c2d0 je 0x11b9c342 */
  if (C.zf) goto L_11b9c342;
  /* 11b9c2d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c2d4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b9c2d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9c2d9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11b9c2dc push ecx */
  push32((uint32_t)(ECX));
  /* 11b9c2dd call 0x11b9bd80 */
  push32(0x11b9c2e2u); f_11b9bd80();
  /* 11b9c2e2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9c2e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9c2e7 jne 0x11b9c313 */
  if (!C.zf) goto L_11b9c313;
L_11b9c2e9:;
  /* 11b9c2e9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9c2ec mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11b9c2ef push eax */
  push32((uint32_t)(EAX));
  /* 11b9c2f0 push 0x11bc8d78 */
  push32((uint32_t)(0x11bc8d78u));
  /* 11b9c2f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c2f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c2f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c2fb push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c2fd call 0x11b99390 */
  push32(0x11b9c302u); f_11b99390();
  /* 11b9c302 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9c305 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c308 jne 0x11b9c30b */
  if (!C.zf) goto L_11b9c30b;
  /* 11b9c30a int3  */
  x86_unimpl("int3 @ 0x11b9c30a");
L_11b9c30b:;
  /* 11b9c30b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b9c30d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b9c30f jne 0x11b9c2e9 */
  if (!C.zf) goto L_11b9c2e9;
  /* 11b9c311 jmp 0x11b9c342 */
  goto L_11b9c342;
L_11b9c313:;
  /* 11b9c313 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9c316 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11b9c319 push eax */
  push32((uint32_t)(EAX));
  /* 11b9c31a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9c31d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11b9c320 push edx */
  push32((uint32_t)(EDX));
  /* 11b9c321 push 0x11bc8d6c */
  push32((uint32_t)(0x11bc8d6cu));
  /* 11b9c326 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c328 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c32a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c32c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c32e call 0x11b99390 */
  push32(0x11b9c333u); f_11b99390();
  /* 11b9c333 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9c336 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c339 jne 0x11b9c33c */
  if (!C.zf) goto L_11b9c33c;
  /* 11b9c33b int3  */
  x86_unimpl("int3 @ 0x11b9c33b");
L_11b9c33c:;
  /* 11b9c33c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9c33e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9c340 jne 0x11b9c313 */
  if (!C.zf) goto L_11b9c313;
L_11b9c342:;
  /* 11b9c342 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9c345 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11b9c348 push edx */
  push32((uint32_t)(EDX));
  /* 11b9c349 push 0x11bc8d64 */
  push32((uint32_t)(0x11bc8d64u));
  /* 11b9c34e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c350 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c352 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c354 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c356 call 0x11b99390 */
  push32(0x11b9c35bu); f_11b99390();
  /* 11b9c35b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9c35e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c361 jne 0x11b9c364 */
  if (!C.zf) goto L_11b9c364;
  /* 11b9c363 int3  */
  x86_unimpl("int3 @ 0x11b9c363");
L_11b9c364:;
  /* 11b9c364 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9c366 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9c368 jne 0x11b9c342 */
  if (!C.zf) goto L_11b9c342;
  /* 11b9c36a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9c36d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11b9c370 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b9c376 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c379 jne 0x11b9c3ec */
  if (!C.zf) goto L_11b9c3ec;
L_11b9c37b:;
  /* 11b9c37b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9c37e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11b9c381 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9c382 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9c385 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11b9c388 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11b9c38b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b9c390 push eax */
  push32((uint32_t)(EAX));
  /* 11b9c391 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9c394 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9c397 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9c398 push 0x11bc8d30 */
  push32((uint32_t)(0x11bc8d30u));
  /* 11b9c39d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c39f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c3a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c3a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c3a5 call 0x11b99390 */
  push32(0x11b9c3aau); f_11b99390();
  /* 11b9c3aa add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9c3ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c3b0 jne 0x11b9c3b3 */
  if (!C.zf) goto L_11b9c3b3;
  /* 11b9c3b2 int3  */
  x86_unimpl("int3 @ 0x11b9c3b2");
L_11b9c3b3:;
  /* 11b9c3b3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b9c3b5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9c3b7 jne 0x11b9c37b */
  if (!C.zf) goto L_11b9c37b;
  /* 11b9c3b9 cmp dword ptr [0x11bcfe9c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bcfe9c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c3c0 je 0x11b9c3db */
  if (C.zf) goto L_11b9c3db;
  /* 11b9c3c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9c3c5 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11b9c3c8 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9c3c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9c3cc add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9c3cf push edx */
  push32((uint32_t)(EDX));
  /* 11b9c3d0 call dword ptr [0x11bcfe9c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bcfe9c))), 0x11b9c3d6u);
  /* 11b9c3d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9c3d9 jmp 0x11b9c3e7 */
  goto L_11b9c3e7;
L_11b9c3db:;
  /* 11b9c3db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9c3de push eax */
  push32((uint32_t)(EAX));
  /* 11b9c3df call 0x11b9c4d0 */
  push32(0x11b9c3e4u); f_11b9c4d0();
  /* 11b9c3e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9c3e7:;
  /* 11b9c3e7 jmp 0x11b9c48d */
  goto L_11b9c48d;
L_11b9c3ec:;
  /* 11b9c3ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9c3ef cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c3f3 jne 0x11b9c432 */
  if (!C.zf) goto L_11b9c432;
L_11b9c3f5:;
  /* 11b9c3f5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9c3f8 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11b9c3fb push eax */
  push32((uint32_t)(EAX));
  /* 11b9c3fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9c3ff add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9c402 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9c403 push 0x11bc8d08 */
  push32((uint32_t)(0x11bc8d08u));
  /* 11b9c408 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c40a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c40c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c40e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c410 call 0x11b99390 */
  push32(0x11b9c415u); f_11b99390();
  /* 11b9c415 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9c418 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c41b jne 0x11b9c41e */
  if (!C.zf) goto L_11b9c41e;
  /* 11b9c41d int3  */
  x86_unimpl("int3 @ 0x11b9c41d");
L_11b9c41e:;
  /* 11b9c41e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b9c420 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9c422 jne 0x11b9c3f5 */
  if (!C.zf) goto L_11b9c3f5;
  /* 11b9c424 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9c427 push eax */
  push32((uint32_t)(EAX));
  /* 11b9c428 call 0x11b9c4d0 */
  push32(0x11b9c42du); f_11b9c4d0();
  /* 11b9c42d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9c430 jmp 0x11b9c48d */
  goto L_11b9c48d;
L_11b9c432:;
  /* 11b9c432 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9c435 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11b9c438 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b9c43e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c441 jne 0x11b9c48d */
  if (!C.zf) goto L_11b9c48d;
L_11b9c443:;
  /* 11b9c443 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9c446 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11b9c449 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9c44a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9c44d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11b9c450 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11b9c453 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b9c458 push eax */
  push32((uint32_t)(EAX));
  /* 11b9c459 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9c45c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9c45f push ecx */
  push32((uint32_t)(ECX));
  /* 11b9c460 push 0x11bc8cd4 */
  push32((uint32_t)(0x11bc8cd4u));
  /* 11b9c465 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c467 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c469 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c46b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c46d call 0x11b99390 */
  push32(0x11b9c472u); f_11b99390();
  /* 11b9c472 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9c475 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c478 jne 0x11b9c47b */
  if (!C.zf) goto L_11b9c47b;
  /* 11b9c47a int3  */
  x86_unimpl("int3 @ 0x11b9c47a");
L_11b9c47b:;
  /* 11b9c47b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b9c47d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9c47f jne 0x11b9c443 */
  if (!C.zf) goto L_11b9c443;
  /* 11b9c481 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9c484 push eax */
  push32((uint32_t)(EAX));
  /* 11b9c485 call 0x11b9c4d0 */
  push32(0x11b9c48au); f_11b9c4d0();
  /* 11b9c48a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9c48d:;
  /* 11b9c48d jmp 0x11b9c268 */
  goto L_11b9c268;
L_11b9c492:;
  /* 11b9c492 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b9c494 call 0x11b9a770 */
  push32(0x11b9c499u); f_11b9a770();
  /* 11b9c499 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9c49c:;
  /* 11b9c49c push 0x11bc8cbc */
  push32((uint32_t)(0x11bc8cbcu));
  /* 11b9c4a1 push 0x11bc87ac */
  push32((uint32_t)(0x11bc87acu));
  /* 11b9c4a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c4a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c4aa push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c4ac push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c4ae call 0x11b99390 */
  push32(0x11b9c4b3u); f_11b99390();
  /* 11b9c4b3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9c4b6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c4b9 jne 0x11b9c4bc */
  if (!C.zf) goto L_11b9c4bc;
  /* 11b9c4bb int3  */
  x86_unimpl("int3 @ 0x11b9c4bb");
L_11b9c4bc:;
  /* 11b9c4bc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b9c4be test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b9c4c0 jne 0x11b9c49c */
  if (!C.zf) goto L_11b9c49c;
  /* 11b9c4c2 pop edi */
  EDI = (pop32());
  /* 11b9c4c3 pop esi */
  ESI = (pop32());
  /* 11b9c4c4 pop ebx */
  EBX = (pop32());
  /* 11b9c4c5 mov esp, ebp */
  ESP = (EBP);
  /* 11b9c4c7 pop ebp */
  EBP = (pop32());
  /* 11b9c4c8 ret  */
  ESPCHK(0x11b9c210u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c4d0 @ 0x11b9c4d0 (276 bytes, 89 insns) */
void f_11b9c4d0(void) {
  FTRACE(0x11b9c4d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9c4d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9c4d1 mov ebp, esp */
  EBP = (ESP);
  /* 11b9c4d3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9c4d6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b9c4d7 push esi */
  push32((uint32_t)(ESI));
  /* 11b9c4d8 push edi */
  push32((uint32_t)(EDI));
  /* 11b9c4d9 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 11b9c4e0 jmp 0x11b9c4eb */
  goto L_11b9c4eb;
L_11b9c4e2:;
  /* 11b9c4e2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11b9c4e5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9c4e8 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_11b9c4eb:;
  /* 11b9c4eb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9c4ee cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c4f2 jge 0x11b9c4ff */
  if ((C.sf==C.of)) goto L_11b9c4ff;
  /* 11b9c4f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9c4f7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11b9c4fa mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 11b9c4fd jmp 0x11b9c506 */
  goto L_11b9c506;
L_11b9c4ff:;
  /* 11b9c4ff mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_11b9c506:;
  /* 11b9c506 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11b9c509 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c50c jge 0x11b9c5ac */
  if ((C.sf==C.of)) goto L_11b9c5ac;
  /* 11b9c512 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9c515 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9c518 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 11b9c51b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 11b9c51e cmp dword ptr [0x11bcc000], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11bcc000))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c525 jle 0x11b9c543 */
  if ((C.zf||C.sf!=C.of)) goto L_11b9c543;
  /* 11b9c527 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 11b9c52c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b9c52f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b9c535 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9c536 call 0x11ba0f90 */
  push32(0x11b9c53bu); f_11ba0f90();
  /* 11b9c53b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9c53e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 11b9c541 jmp 0x11b9c560 */
  goto L_11b9c560;
L_11b9c543:;
  /* 11b9c543 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b9c546 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b9c54c mov eax, dword ptr [0x11bcc00c] */
  EAX = (r32((uint32_t)(0x11bcc00c)));
  /* 11b9c551 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b9c553 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11b9c557 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 11b9c55d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_11b9c560:;
  /* 11b9c560 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c564 je 0x11b9c574 */
  if (C.zf) goto L_11b9c574;
  /* 11b9c566 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b9c569 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b9c56f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 11b9c572 jmp 0x11b9c57b */
  goto L_11b9c57b;
L_11b9c574:;
  /* 11b9c574 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_11b9c57b:;
  /* 11b9c57b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11b9c57e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 11b9c581 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 11b9c585 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b9c588 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b9c58e push edx */
  push32((uint32_t)(EDX));
  /* 11b9c58f push 0x11bc8db0 */
  push32((uint32_t)(0x11bc8db0u));
  /* 11b9c594 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11b9c597 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b9c59a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 11b9c59e push ecx */
  push32((uint32_t)(ECX));
  /* 11b9c59f call 0x11b98f00 */
  push32(0x11b9c5a4u); f_11b98f00();
  /* 11b9c5a4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9c5a7 jmp 0x11b9c4e2 */
  goto L_11b9c4e2;
L_11b9c5ac:;
  /* 11b9c5ac mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11b9c5af mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_11b9c5b4:;
  /* 11b9c5b4 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 11b9c5b7 push eax */
  push32((uint32_t)(EAX));
  /* 11b9c5b8 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 11b9c5bb push ecx */
  push32((uint32_t)(ECX));
  /* 11b9c5bc push 0x11bc8da0 */
  push32((uint32_t)(0x11bc8da0u));
  /* 11b9c5c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c5c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c5c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c5c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c5c9 call 0x11b99390 */
  push32(0x11b9c5ceu); f_11b99390();
  /* 11b9c5ce add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9c5d1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c5d4 jne 0x11b9c5d7 */
  if (!C.zf) goto L_11b9c5d7;
  /* 11b9c5d6 int3  */
  x86_unimpl("int3 @ 0x11b9c5d6");
L_11b9c5d7:;
  /* 11b9c5d7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b9c5d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9c5db jne 0x11b9c5b4 */
  if (!C.zf) goto L_11b9c5b4;
  /* 11b9c5dd pop edi */
  EDI = (pop32());
  /* 11b9c5de pop esi */
  ESI = (pop32());
  /* 11b9c5df pop ebx */
  EBX = (pop32());
  /* 11b9c5e0 mov esp, ebp */
  ESP = (EBP);
  /* 11b9c5e2 pop ebp */
  EBP = (pop32());
  /* 11b9c5e3 ret  */
  ESPCHK(0x11b9c4d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c5f0 @ 0x11b9c5f0 (116 bytes, 46 insns) */
void f_11b9c5f0(void) {
  FTRACE(0x11b9c5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9c5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9c5f1 mov ebp, esp */
  EBP = (ESP);
  /* 11b9c5f3 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9c5f6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b9c5f7 push esi */
  push32((uint32_t)(ESI));
  /* 11b9c5f8 push edi */
  push32((uint32_t)(EDI));
  /* 11b9c5f9 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 11b9c5fc push eax */
  push32((uint32_t)(EAX));
  /* 11b9c5fd call 0x11b9bf70 */
  push32(0x11b9c602u); f_11b9bf70();
  /* 11b9c602 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9c605 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c609 jne 0x11b9c624 */
  if (!C.zf) goto L_11b9c624;
  /* 11b9c60b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c60f jne 0x11b9c624 */
  if (!C.zf) goto L_11b9c624;
  /* 11b9c611 mov ecx, dword ptr [0x11bcbf08] */
  ECX = (r32((uint32_t)(0x11bcbf08)));
  /* 11b9c617 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11b9c61a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b9c61c je 0x11b9c65b */
  if (C.zf) goto L_11b9c65b;
  /* 11b9c61e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c622 je 0x11b9c65b */
  if (C.zf) goto L_11b9c65b;
L_11b9c624:;
  /* 11b9c624 push 0x11bc8db8 */
  push32((uint32_t)(0x11bc8db8u));
  /* 11b9c629 push 0x11bc87ac */
  push32((uint32_t)(0x11bc87acu));
  /* 11b9c62e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c630 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c632 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c634 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c636 call 0x11b99390 */
  push32(0x11b9c63bu); f_11b99390();
  /* 11b9c63b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9c63e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c641 jne 0x11b9c644 */
  if (!C.zf) goto L_11b9c644;
  /* 11b9c643 int3  */
  x86_unimpl("int3 @ 0x11b9c643");
L_11b9c644:;
  /* 11b9c644 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b9c646 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9c648 jne 0x11b9c624 */
  if (!C.zf) goto L_11b9c624;
  /* 11b9c64a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c64c call 0x11b9c210 */
  push32(0x11b9c651u); f_11b9c210();
  /* 11b9c651 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9c654 mov eax, 1 */
  EAX = (0x1u);
  /* 11b9c659 jmp 0x11b9c65d */
  goto L_11b9c65d;
L_11b9c65b:;
  /* 11b9c65b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b9c65d:;
  /* 11b9c65d pop edi */
  EDI = (pop32());
  /* 11b9c65e pop esi */
  ESI = (pop32());
  /* 11b9c65f pop ebx */
  EBX = (pop32());
  /* 11b9c660 mov esp, ebp */
  ESP = (EBP);
  /* 11b9c662 pop ebp */
  EBP = (pop32());
  /* 11b9c663 ret  */
  ESPCHK(0x11b9c5f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c670 @ 0x11b9c670 (197 bytes, 79 insns) */
void f_11b9c670(void) {
  FTRACE(0x11b9c670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9c670 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9c671 mov ebp, esp */
  EBP = (ESP);
  /* 11b9c673 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9c674 push ebx */
  push32((uint32_t)(EBX));
  /* 11b9c675 push esi */
  push32((uint32_t)(ESI));
  /* 11b9c676 push edi */
  push32((uint32_t)(EDI));
  /* 11b9c677 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c67b jne 0x11b9c682 */
  if (!C.zf) goto L_11b9c682;
  /* 11b9c67d jmp 0x11b9c72e */
  goto L_11b9c72e;
L_11b9c682:;
  /* 11b9c682 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b9c689 jmp 0x11b9c694 */
  goto L_11b9c694;
L_11b9c68b:;
  /* 11b9c68b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9c68e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9c691 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b9c694:;
  /* 11b9c694 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c698 jge 0x11b9c6de */
  if ((C.sf==C.of)) goto L_11b9c6de;
L_11b9c69a:;
  /* 11b9c69a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9c69d mov edx, dword ptr [ecx*4 + 0x11bcbf18] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11bcbf18)));
  /* 11b9c6a4 push edx */
  push32((uint32_t)(EDX));
  /* 11b9c6a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9c6a8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9c6ab mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 11b9c6af push edx */
  push32((uint32_t)(EDX));
  /* 11b9c6b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9c6b3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9c6b6 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 11b9c6ba push edx */
  push32((uint32_t)(EDX));
  /* 11b9c6bb push 0x11bc8e14 */
  push32((uint32_t)(0x11bc8e14u));
  /* 11b9c6c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c6c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c6c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c6c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c6c8 call 0x11b99390 */
  push32(0x11b9c6cdu); f_11b99390();
  /* 11b9c6cd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9c6d0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c6d3 jne 0x11b9c6d6 */
  if (!C.zf) goto L_11b9c6d6;
  /* 11b9c6d5 int3  */
  x86_unimpl("int3 @ 0x11b9c6d5");
L_11b9c6d6:;
  /* 11b9c6d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9c6d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9c6da jne 0x11b9c69a */
  if (!C.zf) goto L_11b9c69a;
  /* 11b9c6dc jmp 0x11b9c68b */
  goto L_11b9c68b;
L_11b9c6de:;
  /* 11b9c6de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9c6e1 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11b9c6e4 push edx */
  push32((uint32_t)(EDX));
  /* 11b9c6e5 push 0x11bc8df0 */
  push32((uint32_t)(0x11bc8df0u));
  /* 11b9c6ea push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c6ec push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c6ee push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c6f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c6f2 call 0x11b99390 */
  push32(0x11b9c6f7u); f_11b99390();
  /* 11b9c6f7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9c6fa cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c6fd jne 0x11b9c700 */
  if (!C.zf) goto L_11b9c700;
  /* 11b9c6ff int3  */
  x86_unimpl("int3 @ 0x11b9c6ff");
L_11b9c700:;
  /* 11b9c700 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9c702 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9c704 jne 0x11b9c6de */
  if (!C.zf) goto L_11b9c6de;
L_11b9c706:;
  /* 11b9c706 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9c709 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 11b9c70c push edx */
  push32((uint32_t)(EDX));
  /* 11b9c70d push 0x11bc8dd0 */
  push32((uint32_t)(0x11bc8dd0u));
  /* 11b9c712 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c714 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c716 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c718 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9c71a call 0x11b99390 */
  push32(0x11b9c71fu); f_11b99390();
  /* 11b9c71f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9c722 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c725 jne 0x11b9c728 */
  if (!C.zf) goto L_11b9c728;
  /* 11b9c727 int3  */
  x86_unimpl("int3 @ 0x11b9c727");
L_11b9c728:;
  /* 11b9c728 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9c72a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9c72c jne 0x11b9c706 */
  if (!C.zf) goto L_11b9c706;
L_11b9c72e:;
  /* 11b9c72e pop edi */
  EDI = (pop32());
  /* 11b9c72f pop esi */
  ESI = (pop32());
  /* 11b9c730 pop ebx */
  EBX = (pop32());
  /* 11b9c731 mov esp, ebp */
  ESP = (EBP);
  /* 11b9c733 pop ebp */
  EBP = (pop32());
  /* 11b9c734 ret  */
  ESPCHK(0x11b9c670u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c740 @ 0x11b9c740 (239 bytes, 88 insns) */
void f_11b9c740(void) {
  FTRACE(0x11b9c740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9c740 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9c741 mov ebp, esp */
  EBP = (ESP);
  /* 11b9c743 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9c746 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9c749 cmp dword ptr [eax], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c74f jne 0x11b9c75a */
  if (!C.zf) goto L_11b9c75a;
  /* 11b9c751 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11b9c758 jmp 0x11b9c762 */
  goto L_11b9c762;
L_11b9c75a:;
  /* 11b9c75a call 0x11b9d750 */
  push32(0x11b9c75fu); f_11b9d750();
  /* 11b9c75f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11b9c762:;
  /* 11b9c762 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9c765 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b9c768 and edx, 0x66 */
  { uint32_t _r=(EDX)&(0x66u); EDX = (_r); fl_logic(_r,32); }
  /* 11b9c76b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9c76d je 0x11b9c79e */
  if (C.zf) goto L_11b9c79e;
  /* 11b9c76f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9c772 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c776 je 0x11b9c794 */
  if (C.zf) goto L_11b9c794;
  /* 11b9c778 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c77c jne 0x11b9c794 */
  if (!C.zf) goto L_11b9c794;
  /* 11b9c77e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11b9c780 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9c783 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9c784 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9c787 push edx */
  push32((uint32_t)(EDX));
  /* 11b9c788 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9c78b push eax */
  push32((uint32_t)(EAX));
  /* 11b9c78c call 0x11b9ccb0 */
  push32(0x11b9c791u); f_11b9ccb0();
  /* 11b9c791 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9c794:;
  /* 11b9c794 mov eax, 1 */
  EAX = (0x1u);
  /* 11b9c799 jmp 0x11b9c82b */
  goto L_11b9c82b;
L_11b9c79e:;
  /* 11b9c79e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9c7a1 cmp dword ptr [ecx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c7a5 je 0x11b9c826 */
  if (C.zf) goto L_11b9c826;
  /* 11b9c7a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9c7aa cmp dword ptr [edx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c7b0 jne 0x11b9c7fe */
  if (!C.zf) goto L_11b9c7fe;
  /* 11b9c7b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9c7b5 cmp dword ptr [eax + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c7bc jbe 0x11b9c7fe */
  if ((C.cf||C.zf)) goto L_11b9c7fe;
  /* 11b9c7be mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9c7c1 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11b9c7c4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11b9c7c7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b9c7ca cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c7ce je 0x11b9c7fe */
  if (C.zf) goto L_11b9c7fe;
  /* 11b9c7d0 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 11b9c7d3 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b9c7d9 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9c7da mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11b9c7dd push edx */
  push32((uint32_t)(EDX));
  /* 11b9c7de mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b9c7e1 push eax */
  push32((uint32_t)(EAX));
  /* 11b9c7e2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9c7e5 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9c7e6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9c7e9 push edx */
  push32((uint32_t)(EDX));
  /* 11b9c7ea mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9c7ed push eax */
  push32((uint32_t)(EAX));
  /* 11b9c7ee mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9c7f1 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9c7f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9c7f5 push edx */
  push32((uint32_t)(EDX));
  /* 11b9c7f6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11b9c7f9u);
  /* 11b9c7f9 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9c7fc jmp 0x11b9c82b */
  goto L_11b9c82b;
L_11b9c7fe:;
  /* 11b9c7fe mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11b9c801 push eax */
  push32((uint32_t)(EAX));
  /* 11b9c802 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b9c805 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9c806 mov dl, byte ptr [ebp + 0x24] */
  DL = (r8((uint32_t)(EBP + 0x24)));
  /* 11b9c809 push edx */
  push32((uint32_t)(EDX));
  /* 11b9c80a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9c80d push eax */
  push32((uint32_t)(EAX));
  /* 11b9c80e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9c811 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9c812 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9c815 push edx */
  push32((uint32_t)(EDX));
  /* 11b9c816 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9c819 push eax */
  push32((uint32_t)(EAX));
  /* 11b9c81a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9c81d push ecx */
  push32((uint32_t)(ECX));
  /* 11b9c81e call 0x11b9c830 */
  push32(0x11b9c823u); f_11b9c830();
  /* 11b9c823 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9c826:;
  /* 11b9c826 mov eax, 1 */
  EAX = (0x1u);
L_11b9c82b:;
  /* 11b9c82b mov esp, ebp */
  ESP = (EBP);
  /* 11b9c82d pop ebp */
  EBP = (pop32());
  /* 11b9c82e ret  */
  ESPCHK(0x11b9c740u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c830 @ 0x11b9c830 (672 bytes, 222 insns) */
void f_11b9c830(void) {
  FTRACE(0x11b9c830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9c830 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9c831 mov ebp, esp */
  EBP = (ESP);
  /* 11b9c833 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9c836 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11b9c83a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9c83d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11b9c840 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b9c843 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c847 jl 0x11b9c85d */
  if ((C.sf!=C.of)) goto L_11b9c85d;
  /* 11b9c849 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9c84c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9c84f cmp eax, dword ptr [edx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c852 jge 0x11b9c85d */
  if ((C.sf==C.of)) goto L_11b9c85d;
  /* 11b9c854 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 11b9c85b jmp 0x11b9c865 */
  goto L_11b9c865;
L_11b9c85d:;
  /* 11b9c85d call 0x11b9d750 */
  push32(0x11b9c862u); f_11b9d750();
  /* 11b9c862 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
L_11b9c865:;
  /* 11b9c865 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9c868 cmp dword ptr [ecx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c86e jne 0x11b9c925 */
  if (!C.zf) goto L_11b9c925;
  /* 11b9c874 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9c877 cmp dword ptr [edx + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c87b jne 0x11b9c925 */
  if (!C.zf) goto L_11b9c925;
  /* 11b9c881 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9c884 cmp dword ptr [eax + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c88b jne 0x11b9c925 */
  if (!C.zf) goto L_11b9c925;
  /* 11b9c891 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9c894 cmp dword ptr [ecx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c898 jne 0x11b9c925 */
  if (!C.zf) goto L_11b9c925;
  /* 11b9c89e call 0x11b9d4d0 */
  push32(0x11b9c8a3u); f_11b9d4d0();
  /* 11b9c8a3 cmp dword ptr [eax + 0x6c], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c8a7 jne 0x11b9c8ae */
  if (!C.zf) goto L_11b9c8ae;
  /* 11b9c8a9 jmp 0x11b9cacc */
  goto L_11b9cacc;
L_11b9c8ae:;
  /* 11b9c8ae call 0x11b9d4d0 */
  push32(0x11b9c8b3u); f_11b9d4d0();
  /* 11b9c8b3 mov edx, dword ptr [eax + 0x6c] */
  EDX = (r32((uint32_t)(EAX + 0x6c)));
  /* 11b9c8b6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11b9c8b9 call 0x11b9d4d0 */
  push32(0x11b9c8beu); f_11b9d4d0();
  /* 11b9c8be mov eax, dword ptr [eax + 0x70] */
  EAX = (r32((uint32_t)(EAX + 0x70)));
  /* 11b9c8c1 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11b9c8c4 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
  /* 11b9c8c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b9c8ca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9c8cd push ecx */
  push32((uint32_t)(ECX));
  /* 11b9c8ce call 0x11ba4300 */
  push32(0x11b9c8d3u); f_11ba4300();
  /* 11b9c8d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9c8d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9c8d8 je 0x11b9c8e3 */
  if (C.zf) goto L_11b9c8e3;
  /* 11b9c8da mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11b9c8e1 jmp 0x11b9c8eb */
  goto L_11b9c8eb;
L_11b9c8e3:;
  /* 11b9c8e3 call 0x11b9d750 */
  push32(0x11b9c8e8u); f_11b9d750();
  /* 11b9c8e8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_11b9c8eb:;
  /* 11b9c8eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9c8ee cmp dword ptr [edx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c8f4 jne 0x11b9c91e */
  if (!C.zf) goto L_11b9c91e;
  /* 11b9c8f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9c8f9 cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c8fd jne 0x11b9c91e */
  if (!C.zf) goto L_11b9c91e;
  /* 11b9c8ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9c902 cmp dword ptr [ecx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c909 jne 0x11b9c91e */
  if (!C.zf) goto L_11b9c91e;
  /* 11b9c90b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9c90e cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c912 jne 0x11b9c91e */
  if (!C.zf) goto L_11b9c91e;
  /* 11b9c914 call 0x11b9d750 */
  push32(0x11b9c919u); f_11b9d750();
  /* 11b9c919 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11b9c91c jmp 0x11b9c925 */
  goto L_11b9c925;
L_11b9c91e:;
  /* 11b9c91e mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_11b9c925:;
  /* 11b9c925 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9c928 cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c92e jne 0x11b9ca8c */
  if (!C.zf) goto L_11b9ca8c;
  /* 11b9c934 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9c937 cmp dword ptr [ecx + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c93b jne 0x11b9ca8c */
  if (!C.zf) goto L_11b9ca8c;
  /* 11b9c941 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9c944 cmp dword ptr [edx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c94b jne 0x11b9ca8c */
  if (!C.zf) goto L_11b9ca8c;
  /* 11b9c951 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11b9c954 push eax */
  push32((uint32_t)(EAX));
  /* 11b9c955 lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 11b9c958 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9c959 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9c95c push edx */
  push32((uint32_t)(EDX));
  /* 11b9c95d mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11b9c960 push eax */
  push32((uint32_t)(EAX));
  /* 11b9c961 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9c964 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9c965 call 0x11b98a70 */
  push32(0x11b9c96au); f_11b98a70();
  /* 11b9c96a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9c96d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11b9c970 jmp 0x11b9c984 */
  goto L_11b9c984;
L_11b9c972:;
  /* 11b9c972 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b9c975 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9c978 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11b9c97b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b9c97e add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9c981 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11b9c984:;
  /* 11b9c984 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b9c987 cmp ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c98a jae 0x11b9ca6f */
  if (!C.cf) goto L_11b9ca6f;
  /* 11b9c990 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b9c993 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b9c995 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c998 jg 0x11b9c9a5 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b9c9a5;
  /* 11b9c99a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b9c99d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9c9a0 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c9a3 jle 0x11b9c9a7 */
  if ((C.zf||C.sf!=C.of)) goto L_11b9c9a7;
L_11b9c9a5:;
  /* 11b9c9a5 jmp 0x11b9c972 */
  goto L_11b9c972;
L_11b9c9a7:;
  /* 11b9c9a7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b9c9aa mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11b9c9ad mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 11b9c9b0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b9c9b3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11b9c9b6 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11b9c9b9 jmp 0x11b9c9cd */
  goto L_11b9c9cd;
L_11b9c9bb:;
  /* 11b9c9bb mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b9c9be sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9c9c1 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11b9c9c4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b9c9c7 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9c9ca mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_11b9c9cd:;
  /* 11b9c9cd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9c9d1 jle 0x11b9ca6a */
  if ((C.zf||C.sf!=C.of)) goto L_11b9ca6a;
  /* 11b9c9d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9c9da mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11b9c9dd mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11b9c9e0 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9c9e3 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11b9c9e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9c9e9 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11b9c9ec mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11b9c9ef mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b9c9f1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11b9c9f4 jmp 0x11b9ca08 */
  goto L_11b9ca08;
L_11b9c9f6:;
  /* 11b9c9f6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b9c9f9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9c9fc mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11b9c9ff mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b9ca02 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ca05 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_11b9ca08:;
  /* 11b9ca08 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9ca0c jle 0x11b9ca65 */
  if ((C.zf||C.sf!=C.of)) goto L_11b9ca65;
  /* 11b9ca0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9ca11 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11b9ca14 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9ca15 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b9ca18 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b9ca1a push eax */
  push32((uint32_t)(EAX));
  /* 11b9ca1b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b9ca1e push ecx */
  push32((uint32_t)(ECX));
  /* 11b9ca1f call 0x11b9cbf0 */
  push32(0x11b9ca24u); f_11b9cbf0();
  /* 11b9ca24 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ca27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9ca29 jne 0x11b9ca2d */
  if (!C.zf) goto L_11b9ca2d;
  /* 11b9ca2b jmp 0x11b9c9f6 */
  goto L_11b9c9f6;
L_11b9ca2d:;
  /* 11b9ca2d mov dl, byte ptr [ebp - 8] */
  DL = (r8((uint32_t)(EBP + -0x8)));
  /* 11b9ca30 push edx */
  push32((uint32_t)(EDX));
  /* 11b9ca31 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11b9ca34 push eax */
  push32((uint32_t)(EAX));
  /* 11b9ca35 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11b9ca38 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9ca39 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b9ca3c push edx */
  push32((uint32_t)(EDX));
  /* 11b9ca3d mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b9ca40 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b9ca42 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9ca43 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b9ca46 push edx */
  push32((uint32_t)(EDX));
  /* 11b9ca47 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9ca4a push eax */
  push32((uint32_t)(EAX));
  /* 11b9ca4b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9ca4e push ecx */
  push32((uint32_t)(ECX));
  /* 11b9ca4f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9ca52 push edx */
  push32((uint32_t)(EDX));
  /* 11b9ca53 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9ca56 push eax */
  push32((uint32_t)(EAX));
  /* 11b9ca57 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9ca5a push ecx */
  push32((uint32_t)(ECX));
  /* 11b9ca5b call 0x11b9cde0 */
  push32(0x11b9ca60u); f_11b9cde0();
  /* 11b9ca60 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ca63 jmp 0x11b9caca */
  goto L_11b9caca;
L_11b9ca65:;
  /* 11b9ca65 jmp 0x11b9c9bb */
  goto L_11b9c9bb;
L_11b9ca6a:;
  /* 11b9ca6a jmp 0x11b9c972 */
  goto L_11b9c972;
L_11b9ca6f:;
  /* 11b9ca6f mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b9ca72 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b9ca78 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9ca7a je 0x11b9ca8a */
  if (C.zf) goto L_11b9ca8a;
  /* 11b9ca7c push 1 */
  push32((uint32_t)(0x1u));
  /* 11b9ca7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9ca81 push eax */
  push32((uint32_t)(EAX));
  /* 11b9ca82 call 0x11b9d2c0 */
  push32(0x11b9ca87u); f_11b9d2c0();
  /* 11b9ca87 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9ca8a:;
  /* 11b9ca8a jmp 0x11b9cac8 */
  goto L_11b9cac8;
L_11b9ca8c:;
  /* 11b9ca8c mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b9ca8f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b9ca95 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b9ca97 jne 0x11b9cac3 */
  if (!C.zf) goto L_11b9cac3;
  /* 11b9ca99 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 11b9ca9c push edx */
  push32((uint32_t)(EDX));
  /* 11b9ca9d mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11b9caa0 push eax */
  push32((uint32_t)(EAX));
  /* 11b9caa1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9caa4 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9caa5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9caa8 push edx */
  push32((uint32_t)(EDX));
  /* 11b9caa9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9caac push eax */
  push32((uint32_t)(EAX));
  /* 11b9caad mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9cab0 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9cab1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9cab4 push edx */
  push32((uint32_t)(EDX));
  /* 11b9cab5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9cab8 push eax */
  push32((uint32_t)(EAX));
  /* 11b9cab9 call 0x11b9cad0 */
  push32(0x11b9cabeu); f_11b9cad0();
  /* 11b9cabe add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9cac1 jmp 0x11b9cac8 */
  goto L_11b9cac8;
L_11b9cac3:;
  /* 11b9cac3 call 0x11b9d6a0 */
  push32(0x11b9cac8u); f_11b9d6a0();
L_11b9cac8:;
  /* 11b9cac8 jmp 0x11b9cacc */
  goto L_11b9cacc;
L_11b9caca:;
  /* 11b9caca jmp 0x11b9ca6a */
  goto L_11b9ca6a;
L_11b9cacc:;
  /* 11b9cacc mov esp, ebp */
  ESP = (EBP);
  /* 11b9cace pop ebp */
  EBP = (pop32());
  /* 11b9cacf ret  */
  ESPCHK(0x11b9c830u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cad0 @ 0x11b9cad0 (277 bytes, 107 insns) */
void f_11b9cad0(void) {
  FTRACE(0x11b9cad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9cad0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9cad1 mov ebp, esp */
  EBP = (ESP);
  /* 11b9cad3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9cad6 call 0x11b9d4d0 */
  push32(0x11b9cadbu); f_11b9d4d0();
  /* 11b9cadb cmp dword ptr [eax + 0x68], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9cadf je 0x11b9cb0e */
  if (C.zf) goto L_11b9cb0e;
  /* 11b9cae1 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11b9cae4 push eax */
  push32((uint32_t)(EAX));
  /* 11b9cae5 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11b9cae8 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9cae9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9caec push edx */
  push32((uint32_t)(EDX));
  /* 11b9caed mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9caf0 push eax */
  push32((uint32_t)(EAX));
  /* 11b9caf1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9caf4 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9caf5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9caf8 push edx */
  push32((uint32_t)(EDX));
  /* 11b9caf9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9cafc push eax */
  push32((uint32_t)(EAX));
  /* 11b9cafd call 0x11b98910 */
  push32(0x11b9cb02u); f_11b98910();
  /* 11b9cb02 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9cb05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9cb07 je 0x11b9cb0e */
  if (C.zf) goto L_11b9cb0e;
  /* 11b9cb09 jmp 0x11b9cbe1 */
  goto L_11b9cbe1;
L_11b9cb0e:;
  /* 11b9cb0e lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11b9cb11 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9cb12 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11b9cb15 push edx */
  push32((uint32_t)(EDX));
  /* 11b9cb16 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b9cb19 push eax */
  push32((uint32_t)(EAX));
  /* 11b9cb1a mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11b9cb1d push ecx */
  push32((uint32_t)(ECX));
  /* 11b9cb1e mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9cb21 push edx */
  push32((uint32_t)(EDX));
  /* 11b9cb22 call 0x11b98a70 */
  push32(0x11b9cb27u); f_11b98a70();
  /* 11b9cb27 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9cb2a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b9cb2d jmp 0x11b9cb41 */
  goto L_11b9cb41;
L_11b9cb2f:;
  /* 11b9cb2f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9cb32 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9cb35 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b9cb38 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9cb3b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9cb3e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11b9cb41:;
  /* 11b9cb41 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9cb44 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9cb47 jae 0x11b9cbe1 */
  if (!C.cf) goto L_11b9cbe1;
  /* 11b9cb4d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9cb50 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b9cb53 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9cb55 jl 0x11b9cb99 */
  if ((C.sf!=C.of)) goto L_11b9cb99;
  /* 11b9cb57 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9cb5a mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b9cb5d cmp eax, dword ptr [edx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9cb60 jg 0x11b9cb99 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b9cb99;
  /* 11b9cb62 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9cb65 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11b9cb68 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9cb6b shl edx, 4 */
  EDX = (sh_shl((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11b9cb6e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9cb71 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11b9cb74 cmp dword ptr [ecx + edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + EDX*1 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9cb79 je 0x11b9cb9b */
  if (C.zf) goto L_11b9cb9b;
  /* 11b9cb7b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9cb7e mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11b9cb81 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9cb84 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11b9cb87 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9cb8a mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11b9cb8d mov eax, dword ptr [edx + eax + 4] */
  EAX = (r32((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 11b9cb91 movsx ecx, byte ptr [eax + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x8))));
  /* 11b9cb95 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b9cb97 je 0x11b9cb9b */
  if (C.zf) goto L_11b9cb9b;
L_11b9cb99:;
  /* 11b9cb99 jmp 0x11b9cb2f */
  goto L_11b9cb2f;
L_11b9cb9b:;
  /* 11b9cb9b push 1 */
  push32((uint32_t)(0x1u));
  /* 11b9cb9d mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 11b9cba0 push edx */
  push32((uint32_t)(EDX));
  /* 11b9cba1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11b9cba4 push eax */
  push32((uint32_t)(EAX));
  /* 11b9cba5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9cba8 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9cba9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9cbab mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9cbae mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11b9cbb1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9cbb4 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11b9cbb7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9cbba mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11b9cbbd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9cbbf push edx */
  push32((uint32_t)(EDX));
  /* 11b9cbc0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9cbc3 push eax */
  push32((uint32_t)(EAX));
  /* 11b9cbc4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9cbc7 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9cbc8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9cbcb push edx */
  push32((uint32_t)(EDX));
  /* 11b9cbcc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9cbcf push eax */
  push32((uint32_t)(EAX));
  /* 11b9cbd0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9cbd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9cbd4 call 0x11b9cde0 */
  push32(0x11b9cbd9u); f_11b9cde0();
  /* 11b9cbd9 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9cbdc jmp 0x11b9cb2f */
  goto L_11b9cb2f;
L_11b9cbe1:;
  /* 11b9cbe1 mov esp, ebp */
  ESP = (EBP);
  /* 11b9cbe3 pop ebp */
  EBP = (pop32());
  /* 11b9cbe4 ret  */
  ESPCHK(0x11b9cad0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cbf0 @ 0x11b9cbf0 (182 bytes, 69 insns) */
void f_11b9cbf0(void) {
  FTRACE(0x11b9cbf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9cbf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9cbf1 mov ebp, esp */
  EBP = (ESP);
  /* 11b9cbf3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9cbf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9cbf7 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9cbfb je 0x11b9cc0b */
  if (C.zf) goto L_11b9cc0b;
  /* 11b9cbfd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9cc00 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b9cc03 movsx eax, byte ptr [edx + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x8))));
  /* 11b9cc07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9cc09 jne 0x11b9cc15 */
  if (!C.zf) goto L_11b9cc15;
L_11b9cc0b:;
  /* 11b9cc0b mov eax, 1 */
  EAX = (0x1u);
  /* 11b9cc10 jmp 0x11b9cca2 */
  goto L_11b9cca2;
L_11b9cc15:;
  /* 11b9cc15 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9cc18 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9cc1b mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b9cc1e cmp eax, dword ptr [edx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9cc21 je 0x11b9cc47 */
  if (C.zf) goto L_11b9cc47;
  /* 11b9cc23 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9cc26 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b9cc29 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9cc2c push edx */
  push32((uint32_t)(EDX));
  /* 11b9cc2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9cc30 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b9cc33 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9cc36 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9cc37 call 0x11ba4390 */
  push32(0x11b9cc3cu); f_11ba4390();
  /* 11b9cc3c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9cc3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9cc41 je 0x11b9cc47 */
  if (C.zf) goto L_11b9cc47;
  /* 11b9cc43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9cc45 jmp 0x11b9cca2 */
  goto L_11b9cca2;
L_11b9cc47:;
  /* 11b9cc47 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9cc4a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b9cc4c and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 11b9cc4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9cc51 je 0x11b9cc5f */
  if (C.zf) goto L_11b9cc5f;
  /* 11b9cc53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9cc56 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b9cc58 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11b9cc5b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9cc5d je 0x11b9cc98 */
  if (C.zf) goto L_11b9cc98;
L_11b9cc5f:;
  /* 11b9cc5f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9cc62 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b9cc64 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11b9cc67 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b9cc69 je 0x11b9cc77 */
  if (C.zf) goto L_11b9cc77;
  /* 11b9cc6b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9cc6e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b9cc70 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11b9cc73 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9cc75 je 0x11b9cc98 */
  if (C.zf) goto L_11b9cc98;
L_11b9cc77:;
  /* 11b9cc77 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9cc7a mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b9cc7c and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11b9cc7f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9cc81 je 0x11b9cc8f */
  if (C.zf) goto L_11b9cc8f;
  /* 11b9cc83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9cc86 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b9cc88 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11b9cc8b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b9cc8d je 0x11b9cc98 */
  if (C.zf) goto L_11b9cc98;
L_11b9cc8f:;
  /* 11b9cc8f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11b9cc96 jmp 0x11b9cc9f */
  goto L_11b9cc9f;
L_11b9cc98:;
  /* 11b9cc98 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11b9cc9f:;
  /* 11b9cc9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11b9cca2:;
  /* 11b9cca2 mov esp, ebp */
  ESP = (EBP);
  /* 11b9cca4 pop ebp */
  EBP = (pop32());
  /* 11b9cca5 ret  */
  ESPCHK(0x11b9cbf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ccb0 @ 0x11b9ccb0 (224 bytes, 77 insns) */
void f_11b9ccb0(void) {
  FTRACE(0x11b9ccb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9ccb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9ccb1 mov ebp, esp */
  EBP = (ESP);
  /* 11b9ccb3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11b9ccb5 push 0x11bc8e38 */
  push32((uint32_t)(0x11bc8e38u));
  /* 11b9ccba push 0x11ba441c */
  push32((uint32_t)(0x11ba441cu));
  /* 11b9ccbf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11b9ccc5 push eax */
  push32((uint32_t)(EAX));
  /* 11b9ccc6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11b9cccd add esp, -0x14 */
  { uint32_t _a=(ESP),_b=(0xffffffecu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ccd0 push ebx */
  push32((uint32_t)(EBX));
  /* 11b9ccd1 push esi */
  push32((uint32_t)(ESI));
  /* 11b9ccd2 push edi */
  push32((uint32_t)(EDI));
  /* 11b9ccd3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11b9ccd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9ccd9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11b9ccdc mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
L_11b9ccdf:;
  /* 11b9ccdf mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b9cce2 cmp edx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9cce5 je 0x11b9cd74 */
  if (C.zf) goto L_11b9cd74;
  /* 11b9cceb cmp dword ptr [ebp - 0x1c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9ccef jle 0x11b9cd05 */
  if ((C.zf||C.sf!=C.of)) goto L_11b9cd05;
  /* 11b9ccf1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9ccf4 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b9ccf7 cmp ecx, dword ptr [eax + 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9ccfa jge 0x11b9cd05 */
  if ((C.sf==C.of)) goto L_11b9cd05;
  /* 11b9ccfc mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11b9cd03 jmp 0x11b9cd0d */
  goto L_11b9cd0d;
L_11b9cd05:;
  /* 11b9cd05 call 0x11b9d750 */
  push32(0x11b9cd0au); f_11b9d750();
  /* 11b9cd0a mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11b9cd0d:;
  /* 11b9cd0d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b9cd14 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9cd17 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11b9cd1a mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b9cd1d cmp dword ptr [eax + ecx*8 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + ECX*8 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9cd22 je 0x11b9cd40 */
  if (C.zf) goto L_11b9cd40;
  /* 11b9cd24 push 0x103 */
  push32((uint32_t)(0x103u));
  /* 11b9cd29 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9cd2c push edx */
  push32((uint32_t)(EDX));
  /* 11b9cd2d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9cd30 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11b9cd33 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b9cd36 mov eax, dword ptr [ecx + edx*8 + 4] */
  EAX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 11b9cd3a push eax */
  push32((uint32_t)(EAX));
  /* 11b9cd3b call 0x11b9d3a0 */
  push32(0x11b9cd40u); f_11b9d3a0();
L_11b9cd40:;
  /* 11b9cd40 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11b9cd47 jmp 0x11b9cd60 */
  goto L_11b9cd60;
  /* 11b9cd49 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b9cd4c push ecx */
  push32((uint32_t)(ECX));
  /* 11b9cd4d call 0x11b9cdb0 */
  push32(0x11b9cd52u); f_11b9cdb0();
  /* 11b9cd52 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9cd55 ret  */
  ESPCHK(0x11b9ccb0u, _esp0);
  ESP += 4; return;
  /* 11b9cd56 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11b9cd59 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11b9cd60:;
  /* 11b9cd60 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9cd63 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11b9cd66 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b9cd69 mov edx, dword ptr [eax + ecx*8] */
  EDX = (r32((uint32_t)(EAX + ECX*8)));
  /* 11b9cd6c mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11b9cd6f jmp 0x11b9ccdf */
  goto L_11b9ccdf;
L_11b9cd74:;
  /* 11b9cd74 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b9cd77 cmp eax, dword ptr [ebp + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9cd7a jne 0x11b9cd85 */
  if (!C.zf) goto L_11b9cd85;
  /* 11b9cd7c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11b9cd83 jmp 0x11b9cd8d */
  goto L_11b9cd8d;
L_11b9cd85:;
  /* 11b9cd85 call 0x11b9d750 */
  push32(0x11b9cd8au); f_11b9d750();
  /* 11b9cd8a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11b9cd8d:;
  /* 11b9cd8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9cd90 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b9cd93 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11b9cd96 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b9cd99 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11b9cda0 pop edi */
  EDI = (pop32());
  /* 11b9cda1 pop esi */
  ESI = (pop32());
  /* 11b9cda2 pop ebx */
  EBX = (pop32());
  /* 11b9cda3 mov esp, ebp */
  ESP = (EBP);
  /* 11b9cda5 pop ebp */
  EBP = (pop32());
  /* 11b9cda6 ret  */
  ESPCHK(0x11b9ccb0u, _esp0);
  ESP += 4; return;
}

/* ArrayUnwindFilter @ 0x11b9cdb0 (44 bytes, 17 insns) */
void f_11b9cdb0(void) {
  FTRACE(0x11b9cdb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9cdb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9cdb1 mov ebp, esp */
  EBP = (ESP);
  /* 11b9cdb3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9cdb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9cdb9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b9cdbb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b9cdbe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9cdc1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b9cdc3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b9cdc6 cmp dword ptr [ebp - 8], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9cdcd je 0x11b9cdd1 */
  if (C.zf) goto L_11b9cdd1;
  /* 11b9cdcf jmp 0x11b9cdd6 */
  goto L_11b9cdd6;
L_11b9cdd1:;
  /* 11b9cdd1 call 0x11b9d6a0 */
  push32(0x11b9cdd6u); f_11b9d6a0();
L_11b9cdd6:;
  /* 11b9cdd6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9cdd8 mov esp, ebp */
  ESP = (EBP);
  /* 11b9cdda pop ebp */
  EBP = (pop32());
  /* 11b9cddb ret  */
  ESPCHK(0x11b9cdb0u, _esp0);
  ESP += 4; return;
}

/* CatchIt @ 0x11b9cde0 (183 bytes, 73 insns) */
void f_11b9cde0(void) {
  FTRACE(0x11b9cde0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9cde0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9cde1 mov ebp, esp */
  EBP = (ESP);
  /* 11b9cde3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9cde6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9cde9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b9cdec cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9cdf0 je 0x11b9ce0a */
  if (C.zf) goto L_11b9ce0a;
  /* 11b9cdf2 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11b9cdf5 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9cdf6 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b9cdf9 push edx */
  push32((uint32_t)(EDX));
  /* 11b9cdfa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9cdfd push eax */
  push32((uint32_t)(EAX));
  /* 11b9cdfe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9ce01 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9ce02 call 0x11b9d040 */
  push32(0x11b9ce07u); f_11b9d040();
  /* 11b9ce07 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9ce0a:;
  /* 11b9ce0a cmp dword ptr [ebp + 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9ce0e jne 0x11b9ce1f */
  if (!C.zf) goto L_11b9ce1f;
  /* 11b9ce10 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9ce13 push edx */
  push32((uint32_t)(EDX));
  /* 11b9ce14 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9ce17 push eax */
  push32((uint32_t)(EAX));
  /* 11b9ce18 call 0x11b98790 */
  push32(0x11b9ce1du); f_11b98790();
  /* 11b9ce1d jmp 0x11b9ce2c */
  goto L_11b9ce2c;
L_11b9ce1f:;
  /* 11b9ce1f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9ce22 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9ce23 mov edx, dword ptr [ebp + 0x2c] */
  EDX = (r32((uint32_t)(EBP + 0x2c)));
  /* 11b9ce26 push edx */
  push32((uint32_t)(EDX));
  /* 11b9ce27 call 0x11b98790 */
  push32(0x11b9ce2cu); f_11b98790();
L_11b9ce2c:;
  /* 11b9ce2c mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 11b9ce2f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b9ce31 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9ce32 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9ce35 push edx */
  push32((uint32_t)(EDX));
  /* 11b9ce36 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9ce39 push eax */
  push32((uint32_t)(EAX));
  /* 11b9ce3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9ce3d push ecx */
  push32((uint32_t)(ECX));
  /* 11b9ce3e call 0x11b9ccb0 */
  push32(0x11b9ce43u); f_11b9ccb0();
  /* 11b9ce43 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ce46 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 11b9ce49 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b9ce4c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ce4f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9ce52 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11b9ce55 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11b9ce5a mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 11b9ce5d push edx */
  push32((uint32_t)(EDX));
  /* 11b9ce5e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b9ce61 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11b9ce64 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9ce65 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9ce68 push edx */
  push32((uint32_t)(EDX));
  /* 11b9ce69 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9ce6c push eax */
  push32((uint32_t)(EAX));
  /* 11b9ce6d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9ce70 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9ce71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9ce74 push edx */
  push32((uint32_t)(EDX));
  /* 11b9ce75 call 0x11b9cea0 */
  push32(0x11b9ce7au); f_11b9cea0();
  /* 11b9ce7a add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ce7d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b9ce80 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9ce84 je 0x11b9ce93 */
  if (C.zf) goto L_11b9ce93;
  /* 11b9ce86 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9ce89 push eax */
  push32((uint32_t)(EAX));
  /* 11b9ce8a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9ce8d push ecx */
  push32((uint32_t)(ECX));
  /* 11b9ce8e call 0x11b98720 */
  push32(0x11b9ce93u); f_11b98720();
L_11b9ce93:;
  /* 11b9ce93 mov esp, ebp */
  ESP = (EBP);
  /* 11b9ce95 pop ebp */
  EBP = (pop32());
  /* 11b9ce96 ret  */
  ESPCHK(0x11b9cde0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cea0 @ 0x11b9cea0 (172 bytes, 66 insns) */
void f_11b9cea0(void) {
  FTRACE(0x11b9cea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9cea0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9cea1 mov ebp, esp */
  EBP = (ESP);
  /* 11b9cea3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11b9cea5 push 0x11bc8e48 */
  push32((uint32_t)(0x11bc8e48u));
  /* 11b9ceaa push 0x11ba441c */
  push32((uint32_t)(0x11ba441cu));
  /* 11b9ceaf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11b9ceb5 push eax */
  push32((uint32_t)(EAX));
  /* 11b9ceb6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11b9cebd add esp, -0x20 */
  { uint32_t _a=(ESP),_b=(0xffffffe0u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9cec0 push ebx */
  push32((uint32_t)(EBX));
  /* 11b9cec1 push esi */
  push32((uint32_t)(ESI));
  /* 11b9cec2 push edi */
  push32((uint32_t)(EDI));
  /* 11b9cec3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11b9cec6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9cec9 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11b9cecc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11b9ced3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9ced6 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11b9ced9 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11b9cedc call 0x11b9d4d0 */
  push32(0x11b9cee1u); f_11b9d4d0();
  /* 11b9cee1 mov eax, dword ptr [eax + 0x6c] */
  EAX = (r32((uint32_t)(EAX + 0x6c)));
  /* 11b9cee4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11b9cee7 call 0x11b9d4d0 */
  push32(0x11b9ceecu); f_11b9d4d0();
  /* 11b9ceec mov ecx, dword ptr [eax + 0x70] */
  ECX = (r32((uint32_t)(EAX + 0x70)));
  /* 11b9ceef mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11b9cef2 call 0x11b9d4d0 */
  push32(0x11b9cef7u); f_11b9d4d0();
  /* 11b9cef7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9cefa mov dword ptr [eax + 0x6c], edx */
  w32((uint32_t)(EAX + 0x6c), (EDX));
  /* 11b9cefd call 0x11b9d4d0 */
  push32(0x11b9cf02u); f_11b9d4d0();
  /* 11b9cf02 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9cf05 mov dword ptr [eax + 0x70], ecx */
  w32((uint32_t)(EAX + 0x70), (ECX));
  /* 11b9cf08 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b9cf0f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11b9cf16 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11b9cf19 push edx */
  push32((uint32_t)(EDX));
  /* 11b9cf1a mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b9cf1d push eax */
  push32((uint32_t)(EAX));
  /* 11b9cf1e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9cf21 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9cf22 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9cf25 push edx */
  push32((uint32_t)(EDX));
  /* 11b9cf26 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9cf29 push eax */
  push32((uint32_t)(EAX));
  /* 11b9cf2a call 0x11b98860 */
  push32(0x11b9cf2fu); f_11b98860();
  /* 11b9cf2f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9cf32 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11b9cf35 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b9cf3c jmp 0x11b9cf6f */
  goto L_11b9cf6f;
  /* 11b9cf3e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b9cf41 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9cf42 call 0x11b9cff0 */
  push32(0x11b9cf47u); f_11b9cff0();
  /* 11b9cf47 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9cf4a ret  */
  ESPCHK(0x11b9cea0u, _esp0);
  ESP += 4; return;
  /* 11b9cf4b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11b9cf4e mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11b9cf55 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11b9cf57 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
  /* 11b9cf5e lea edx, [ebp - 0x10] */
  EDX = ((uint32_t)(EBP + -0x10));
  /* 11b9cf61 push edx */
  push32((uint32_t)(EDX));
  /* 11b9cf62 call 0x11b98b42 */
  push32(0x11b9cf67u); f_11b98b42();
  /* 11b9cf67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9cf6a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b9cf6d jmp 0x11b9cfde */
  jmp_ind(0x11b9cfdeu); return;
L_11b9cf6f:;
  /* 11b9cf6f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11b9cf76 call 0x11b9cf7d */
  push32(0x11b9cf7bu); f_11b9cf7d();
  /* 11b9cf7b jmp 0x11b9cfdb */
  f_11b9cfdb(); return;
}

/* FUN_1000cf7d @ 0x11b9cf7d (94 bytes, 29 insns) */
void f_11b9cf7d(void) {
  FTRACE(0x11b9cf7du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9cf7d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9cf80 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b9cf83 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 11b9cf86 call 0x11b9d4d0 */
  push32(0x11b9cf8bu); f_11b9d4d0();
  /* 11b9cf8b mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b9cf8e mov dword ptr [eax + 0x6c], edx */
  w32((uint32_t)(EAX + 0x6c), (EDX));
  /* 11b9cf91 call 0x11b9d4d0 */
  push32(0x11b9cf96u); f_11b9d4d0();
  /* 11b9cf96 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b9cf99 mov dword ptr [eax + 0x70], ecx */
  w32((uint32_t)(EAX + 0x70), (ECX));
  /* 11b9cf9c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9cf9f cmp dword ptr [edx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9cfa5 jne 0x11b9cfda */
  if (!C.zf) goto L_11b9cfda;
  /* 11b9cfa7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9cfaa cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9cfae jne 0x11b9cfda */
  if (!C.zf) goto L_11b9cfda;
  /* 11b9cfb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9cfb3 cmp dword ptr [ecx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9cfba jne 0x11b9cfda */
  if (!C.zf) goto L_11b9cfda;
  /* 11b9cfbc cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9cfc0 jne 0x11b9cfda */
  if (!C.zf) goto L_11b9cfda;
  /* 11b9cfc2 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9cfc6 je 0x11b9cfda */
  if (C.zf) goto L_11b9cfda;
  /* 11b9cfc8 call 0x11b98baa */
  push32(0x11b9cfcdu); f_11b98baa();
  /* 11b9cfcd push eax */
  push32((uint32_t)(EAX));
  /* 11b9cfce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9cfd1 push edx */
  push32((uint32_t)(EDX));
  /* 11b9cfd2 call 0x11b9d2c0 */
  push32(0x11b9cfd7u); f_11b9d2c0();
  /* 11b9cfd7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9cfda:;
  /* 11b9cfda ret  */
  ESPCHK(0x11b9cf7du, _esp0);
  ESP += 4; return;
}

/* FUN_1000cfdb @ 0x11b9cfdb (20 bytes, 9 insns) */
void f_11b9cfdb(void) {
  FTRACE(0x11b9cfdbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9cfdb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b9cfde mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b9cfe1 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11b9cfe8 pop edi */
  EDI = (pop32());
  /* 11b9cfe9 pop esi */
  ESI = (pop32());
  /* 11b9cfea pop ebx */
  EBX = (pop32());
  /* 11b9cfeb mov esp, ebp */
  ESP = (EBP);
  /* 11b9cfed pop ebp */
  EBP = (pop32());
  /* 11b9cfee ret  */
  ESPCHK(0x11b9cfdbu, _esp0);
  ESP += 4; return;
}

/* FUN_1000cff0 @ 0x11b9cff0 (66 bytes, 24 insns) */
void f_11b9cff0(void) {
  FTRACE(0x11b9cff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9cff0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9cff1 mov ebp, esp */
  EBP = (ESP);
  /* 11b9cff3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9cff4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9cff7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b9cff9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b9cffc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9cfff cmp dword ptr [edx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9d005 jne 0x11b9d02c */
  if (!C.zf) goto L_11b9d02c;
  /* 11b9d007 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9d00a cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9d00e jne 0x11b9d02c */
  if (!C.zf) goto L_11b9d02c;
  /* 11b9d010 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9d013 cmp dword ptr [ecx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9d01a jne 0x11b9d02c */
  if (!C.zf) goto L_11b9d02c;
  /* 11b9d01c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9d01f cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9d023 jne 0x11b9d02c */
  if (!C.zf) goto L_11b9d02c;
  /* 11b9d025 mov eax, 1 */
  EAX = (0x1u);
  /* 11b9d02a jmp 0x11b9d02e */
  goto L_11b9d02e;
L_11b9d02c:;
  /* 11b9d02c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b9d02e:;
  /* 11b9d02e mov esp, ebp */
  ESP = (EBP);
  /* 11b9d030 pop ebp */
  EBP = (pop32());
  /* 11b9d031 ret  */
  ESPCHK(0x11b9cff0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d040 @ 0x11b9d040 (621 bytes, 229 insns) */
void f_11b9d040(void) {
  FTRACE(0x11b9d040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9d040 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9d041 mov ebp, esp */
  EBP = (ESP);
  /* 11b9d043 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11b9d045 push 0x11bc8e60 */
  push32((uint32_t)(0x11bc8e60u));
  /* 11b9d04a push 0x11ba441c */
  push32((uint32_t)(0x11ba441cu));
  /* 11b9d04f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11b9d055 push eax */
  push32((uint32_t)(EAX));
  /* 11b9d056 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11b9d05d add esp, -0xc */
  { uint32_t _a=(ESP),_b=(0xfffffff4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9d060 push ebx */
  push32((uint32_t)(EBX));
  /* 11b9d061 push esi */
  push32((uint32_t)(ESI));
  /* 11b9d062 push edi */
  push32((uint32_t)(EDI));
  /* 11b9d063 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11b9d066 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9d069 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9d06d je 0x11b9d086 */
  if (C.zf) goto L_11b9d086;
  /* 11b9d06f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9d072 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b9d075 movsx eax, byte ptr [edx + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x8))));
  /* 11b9d079 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9d07b je 0x11b9d086 */
  if (C.zf) goto L_11b9d086;
  /* 11b9d07d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9d080 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9d084 jne 0x11b9d08b */
  if (!C.zf) goto L_11b9d08b;
L_11b9d086:;
  /* 11b9d086 jmp 0x11b9d2aa */
  goto L_11b9d2aa;
L_11b9d08b:;
  /* 11b9d08b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9d08e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11b9d091 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9d094 lea edx, [ecx + eax + 0xc] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0xc));
  /* 11b9d098 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11b9d09b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b9d0a2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9d0a5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b9d0a7 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11b9d0aa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b9d0ac je 0x11b9d106 */
  if (C.zf) goto L_11b9d106;
  /* 11b9d0ae push 1 */
  push32((uint32_t)(0x1u));
  /* 11b9d0b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9d0b3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11b9d0b6 push eax */
  push32((uint32_t)(EAX));
  /* 11b9d0b7 call 0x11ba4300 */
  push32(0x11b9d0bcu); f_11ba4300();
  /* 11b9d0bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9d0bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9d0c1 je 0x11b9d0fc */
  if (C.zf) goto L_11b9d0fc;
  /* 11b9d0c3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b9d0c5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b9d0c8 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9d0c9 call 0x11ba4330 */
  push32(0x11b9d0ceu); f_11ba4330();
  /* 11b9d0ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9d0d1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9d0d3 je 0x11b9d0fc */
  if (C.zf) goto L_11b9d0fc;
  /* 11b9d0d5 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b9d0d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9d0db mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11b9d0de mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11b9d0e0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9d0e3 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9d0e6 push edx */
  push32((uint32_t)(EDX));
  /* 11b9d0e7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b9d0ea mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b9d0ec push ecx */
  push32((uint32_t)(ECX));
  /* 11b9d0ed call 0x11b9d350 */
  push32(0x11b9d0f2u); f_11b9d350();
  /* 11b9d0f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9d0f5 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b9d0f8 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11b9d0fa jmp 0x11b9d101 */
  goto L_11b9d101;
L_11b9d0fc:;
  /* 11b9d0fc call 0x11b9d750 */
  push32(0x11b9d101u); f_11b9d750();
L_11b9d101:;
  /* 11b9d101 jmp 0x11b9d293 */
  goto L_11b9d293;
L_11b9d106:;
  /* 11b9d106 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9d109 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b9d10b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11b9d10e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b9d110 je 0x11b9d18a */
  if (C.zf) goto L_11b9d18a;
  /* 11b9d112 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b9d114 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9d117 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11b9d11a push eax */
  push32((uint32_t)(EAX));
  /* 11b9d11b call 0x11ba4300 */
  push32(0x11b9d120u); f_11ba4300();
  /* 11b9d120 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9d123 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9d125 je 0x11b9d180 */
  if (C.zf) goto L_11b9d180;
  /* 11b9d127 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b9d129 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b9d12c push ecx */
  push32((uint32_t)(ECX));
  /* 11b9d12d call 0x11ba4330 */
  push32(0x11b9d132u); f_11ba4330();
  /* 11b9d132 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9d135 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9d137 je 0x11b9d180 */
  if (C.zf) goto L_11b9d180;
  /* 11b9d139 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9d13c mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11b9d13f push eax */
  push32((uint32_t)(EAX));
  /* 11b9d140 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9d143 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11b9d146 push edx */
  push32((uint32_t)(EDX));
  /* 11b9d147 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b9d14a push eax */
  push32((uint32_t)(EAX));
  /* 11b9d14b call 0x11ba1d60 */
  push32(0x11b9d150u); f_11ba1d60();
  /* 11b9d150 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9d153 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9d156 cmp dword ptr [ecx + 0x14], 4 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9d15a jne 0x11b9d17e */
  if (!C.zf) goto L_11b9d17e;
  /* 11b9d15c mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b9d15f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9d162 je 0x11b9d17e */
  if (C.zf) goto L_11b9d17e;
  /* 11b9d164 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9d167 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9d16a push eax */
  push32((uint32_t)(EAX));
  /* 11b9d16b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b9d16e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b9d170 push edx */
  push32((uint32_t)(EDX));
  /* 11b9d171 call 0x11b9d350 */
  push32(0x11b9d176u); f_11b9d350();
  /* 11b9d176 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9d179 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b9d17c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11b9d17e:;
  /* 11b9d17e jmp 0x11b9d185 */
  goto L_11b9d185;
L_11b9d180:;
  /* 11b9d180 call 0x11b9d750 */
  push32(0x11b9d185u); f_11b9d750();
L_11b9d185:;
  /* 11b9d185 jmp 0x11b9d293 */
  goto L_11b9d293;
L_11b9d18a:;
  /* 11b9d18a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9d18d cmp dword ptr [edx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9d191 jne 0x11b9d1f0 */
  if (!C.zf) goto L_11b9d1f0;
  /* 11b9d193 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b9d195 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9d198 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11b9d19b push ecx */
  push32((uint32_t)(ECX));
  /* 11b9d19c call 0x11ba4300 */
  push32(0x11b9d1a1u); f_11ba4300();
  /* 11b9d1a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9d1a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9d1a6 je 0x11b9d1e6 */
  if (C.zf) goto L_11b9d1e6;
  /* 11b9d1a8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b9d1aa mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b9d1ad push edx */
  push32((uint32_t)(EDX));
  /* 11b9d1ae call 0x11ba4330 */
  push32(0x11b9d1b3u); f_11ba4330();
  /* 11b9d1b3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9d1b6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9d1b8 je 0x11b9d1e6 */
  if (C.zf) goto L_11b9d1e6;
  /* 11b9d1ba mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9d1bd mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11b9d1c0 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9d1c1 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9d1c4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9d1c7 push edx */
  push32((uint32_t)(EDX));
  /* 11b9d1c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9d1cb mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11b9d1ce push ecx */
  push32((uint32_t)(ECX));
  /* 11b9d1cf call 0x11b9d350 */
  push32(0x11b9d1d4u); f_11b9d350();
  /* 11b9d1d4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9d1d7 push eax */
  push32((uint32_t)(EAX));
  /* 11b9d1d8 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b9d1db push edx */
  push32((uint32_t)(EDX));
  /* 11b9d1dc call 0x11ba1d60 */
  push32(0x11b9d1e1u); f_11ba1d60();
  /* 11b9d1e1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9d1e4 jmp 0x11b9d1eb */
  goto L_11b9d1eb;
L_11b9d1e6:;
  /* 11b9d1e6 call 0x11b9d750 */
  push32(0x11b9d1ebu); f_11b9d750();
L_11b9d1eb:;
  /* 11b9d1eb jmp 0x11b9d293 */
  goto L_11b9d293;
L_11b9d1f0:;
  /* 11b9d1f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b9d1f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9d1f5 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11b9d1f8 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9d1f9 call 0x11ba4300 */
  push32(0x11b9d1feu); f_11ba4300();
  /* 11b9d1fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9d201 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9d203 je 0x11b9d28e */
  if (C.zf) goto L_11b9d28e;
  /* 11b9d209 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b9d20b mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b9d20e push edx */
  push32((uint32_t)(EDX));
  /* 11b9d20f call 0x11ba4330 */
  push32(0x11b9d214u); f_11ba4330();
  /* 11b9d214 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9d217 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9d219 je 0x11b9d28e */
  if (C.zf) goto L_11b9d28e;
  /* 11b9d21b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9d21e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11b9d221 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9d222 call 0x11ba4360 */
  push32(0x11b9d227u); f_11ba4360();
  /* 11b9d227 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9d22a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9d22c je 0x11b9d28e */
  if (C.zf) goto L_11b9d28e;
  /* 11b9d22e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9d231 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b9d233 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11b9d236 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9d238 je 0x11b9d265 */
  if (C.zf) goto L_11b9d265;
  /* 11b9d23a push 1 */
  push32((uint32_t)(0x1u));
  /* 11b9d23c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9d23f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9d242 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9d243 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9d246 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11b9d249 push eax */
  push32((uint32_t)(EAX));
  /* 11b9d24a call 0x11b9d350 */
  push32(0x11b9d24fu); f_11b9d350();
  /* 11b9d24f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9d252 push eax */
  push32((uint32_t)(EAX));
  /* 11b9d253 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9d256 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11b9d259 push edx */
  push32((uint32_t)(EDX));
  /* 11b9d25a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b9d25d push eax */
  push32((uint32_t)(EAX));
  /* 11b9d25e call 0x11b98780 */
  push32(0x11b9d263u); f_11b98780();
  /* 11b9d263 jmp 0x11b9d28c */
  goto L_11b9d28c;
L_11b9d265:;
  /* 11b9d265 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9d268 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9d26b push ecx */
  push32((uint32_t)(ECX));
  /* 11b9d26c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9d26f mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11b9d272 push eax */
  push32((uint32_t)(EAX));
  /* 11b9d273 call 0x11b9d350 */
  push32(0x11b9d278u); f_11b9d350();
  /* 11b9d278 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9d27b push eax */
  push32((uint32_t)(EAX));
  /* 11b9d27c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9d27f mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11b9d282 push edx */
  push32((uint32_t)(EDX));
  /* 11b9d283 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b9d286 push eax */
  push32((uint32_t)(EAX));
  /* 11b9d287 call 0x11b98770 */
  push32(0x11b9d28cu); f_11b98770();
L_11b9d28c:;
  /* 11b9d28c jmp 0x11b9d293 */
  goto L_11b9d293;
L_11b9d28e:;
  /* 11b9d28e call 0x11b9d750 */
  push32(0x11b9d293u); f_11b9d750();
L_11b9d293:;
  /* 11b9d293 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11b9d29a jmp 0x11b9d2aa */
  goto L_11b9d2aa;
  /* 11b9d29c mov eax, 1 */
  EAX = (0x1u);
  /* 11b9d2a1 ret  */
  ESPCHK(0x11b9d040u, _esp0);
  ESP += 4; return;
  /* 11b9d2a2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11b9d2a5 call 0x11b9d6a0 */
  push32(0x11b9d2aau); f_11b9d6a0();
L_11b9d2aa:;
  /* 11b9d2aa mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b9d2ad mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11b9d2b4 pop edi */
  EDI = (pop32());
  /* 11b9d2b5 pop esi */
  ESI = (pop32());
  /* 11b9d2b6 pop ebx */
  EBX = (pop32());
  /* 11b9d2b7 mov esp, ebp */
  ESP = (EBP);
  /* 11b9d2b9 pop ebp */
  EBP = (pop32());
  /* 11b9d2ba ret  */
  ESPCHK(0x11b9d040u, _esp0);
  ESP += 4; return;
}

/* ___DestructExceptionObject @ 0x11b9d2c0 (111 bytes, 46 insns) */
void f_11b9d2c0(void) {
  FTRACE(0x11b9d2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9d2c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9d2c1 mov ebp, esp */
  EBP = (ESP);
  /* 11b9d2c3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11b9d2c5 push 0x11bc8e70 */
  push32((uint32_t)(0x11bc8e70u));
  /* 11b9d2ca push 0x11ba441c */
  push32((uint32_t)(0x11ba441cu));
  /* 11b9d2cf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11b9d2d5 push eax */
  push32((uint32_t)(EAX));
  /* 11b9d2d6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11b9d2dd sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9d2e0 push ebx */
  push32((uint32_t)(EBX));
  /* 11b9d2e1 push esi */
  push32((uint32_t)(ESI));
  /* 11b9d2e2 push edi */
  push32((uint32_t)(EDI));
  /* 11b9d2e3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11b9d2e6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9d2ea je 0x11b9d335 */
  if (C.zf) goto L_11b9d335;
  /* 11b9d2ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9d2ef mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11b9d2f2 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9d2f6 je 0x11b9d335 */
  if (C.zf) goto L_11b9d335;
  /* 11b9d2f8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b9d2ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9d302 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11b9d305 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b9d308 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9d309 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9d30c mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11b9d30f push eax */
  push32((uint32_t)(EAX));
  /* 11b9d310 call 0x11b98760 */
  push32(0x11b9d315u); f_11b98760();
  /* 11b9d315 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11b9d31c jmp 0x11b9d335 */
  goto L_11b9d335;
  /* 11b9d31e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9d321 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b9d326 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b9d328 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9d32a neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b9d32c ret  */
  ESPCHK(0x11b9d2c0u, _esp0);
  ESP += 4; return;
  /* 11b9d32d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11b9d330 call 0x11b9d6a0 */
  push32(0x11b9d335u); f_11b9d6a0();
L_11b9d335:;
  /* 11b9d335 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b9d338 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11b9d33f pop edi */
  EDI = (pop32());
  /* 11b9d340 pop esi */
  ESI = (pop32());
  /* 11b9d341 pop ebx */
  EBX = (pop32());
  /* 11b9d342 mov esp, ebp */
  ESP = (EBP);
  /* 11b9d344 pop ebp */
  EBP = (pop32());
  /* 11b9d345 ret  */
  ESPCHK(0x11b9d2c0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:___AdjustPointer @ 0x11b9d350 (70 bytes, 27 insns) */
void f_11b9d350(void) {
  FTRACE(0x11b9d350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9d350 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9d351 mov ebp, esp */
  EBP = (ESP);
  /* 11b9d353 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9d354 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9d357 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9d35a add ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9d35c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b9d35f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9d362 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9d366 jl 0x11b9d38f */
  if ((C.sf!=C.of)) goto L_11b9d38f;
  /* 11b9d368 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9d36b mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b9d36e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9d371 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 11b9d374 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9d377 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11b9d37a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9d37d add ecx, dword ptr [eax + edx] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*1))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9d380 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b9d383 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9d386 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9d389 add eax, dword ptr [edx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9d38c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b9d38f:;
  /* 11b9d38f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9d392 mov esp, ebp */
  ESP = (EBP);
  /* 11b9d394 pop ebp */
  EBP = (pop32());
  /* 11b9d395 ret  */
  ESPCHK(0x11b9d350u, _esp0);
  ESP += 4; return;
}

/* __CallSettingFrame@12 @ 0x11b9d3a0 (76 bytes, 34 insns) */
void f_11b9d3a0(void) {
  FTRACE(0x11b9d3a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9d3a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9d3a1 mov ebp, esp */
  EBP = (ESP);
  /* 11b9d3a3 sub esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9d3a6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b9d3a7 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9d3a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9d3ab add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9d3ae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b9d3b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9d3b4 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9d3b5 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11b9d3b8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9d3bb mov ebp, dword ptr [ebp - 4] */
  EBP = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9d3be call 0x11b98bcd */
  push32(0x11b9d3c3u); f_11b98bcd();
  /* 11b9d3c3 push esi */
  push32((uint32_t)(ESI));
  /* 11b9d3c4 push edi */
  push32((uint32_t)(EDI));
  /* 11b9d3c5 call eax */
  call_ind((uint32_t)(EAX), 0x11b9d3c7u);
  /* 11b9d3c7 pop edi */
  EDI = (pop32());
  /* 11b9d3c8 pop esi */
  ESI = (pop32());
  /* 11b9d3c9 mov ebx, ebp */
  EBX = (EBP);
  /* 11b9d3cb pop ebp */
  EBP = (pop32());
  /* 11b9d3cc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9d3cf push ebp */
  push32((uint32_t)(EBP));
  /* 11b9d3d0 mov ebp, ebx */
  EBP = (EBX);
  /* 11b9d3d2 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9d3d8 jne 0x11b9d3df */
  if (!C.zf) goto L_11b9d3df;
  /* 11b9d3da mov ecx, 2 */
  ECX = (0x2u);
L_11b9d3df:;
  /* 11b9d3df push ecx */
  push32((uint32_t)(ECX));
  /* 11b9d3e0 call 0x11b98bcd */
  push32(0x11b9d3e5u); f_11b98bcd();
  /* 11b9d3e5 pop ebp */
  EBP = (pop32());
  /* 11b9d3e6 pop ecx */
  ECX = (pop32());
  /* 11b9d3e7 pop ebx */
  EBX = (pop32());
  /* 11b9d3e8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b9d3e9 ret 0xc */
  ESPCHK(0x11b9d3a0u, _esp0);
  ESP += 16; return;
}

/* FUN_1000d3f0 @ 0x11b9d3f0 (130 bytes, 42 insns) */
void f_11b9d3f0(void) {
  FTRACE(0x11b9d3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9d3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9d3f1 mov ebp, esp */
  EBP = (ESP);
  /* 11b9d3f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9d3f4 call 0x11b9a5f0 */
  push32(0x11b9d3f9u); f_11b9a5f0();
  /* 11b9d3f9 call dword ptr [0x11bd03d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03d8))), 0x11b9d3ffu);
  /* 11b9d3ff mov dword ptr [0x11bcbf30], eax */
  w32((uint32_t)(0x11bcbf30), (EAX));
  /* 11b9d404 cmp dword ptr [0x11bcbf30], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11bcbf30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9d40b jne 0x11b9d411 */
  if (!C.zf) goto L_11b9d411;
  /* 11b9d40d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9d40f jmp 0x11b9d46e */
  goto L_11b9d46e;
L_11b9d411:;
  /* 11b9d411 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 11b9d413 push 0x11bc8e7c */
  push32((uint32_t)(0x11bc8e7cu));
  /* 11b9d418 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b9d41a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11b9d41c push 1 */
  push32((uint32_t)(0x1u));
  /* 11b9d41e call 0x11b9abe0 */
  push32(0x11b9d423u); f_11b9abe0();
  /* 11b9d423 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9d426 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b9d429 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9d42d je 0x11b9d444 */
  if (C.zf) goto L_11b9d444;
  /* 11b9d42f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9d432 push eax */
  push32((uint32_t)(EAX));
  /* 11b9d433 mov ecx, dword ptr [0x11bcbf30] */
  ECX = (r32((uint32_t)(0x11bcbf30)));
  /* 11b9d439 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9d43a call dword ptr [0x11bd03dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03dc))), 0x11b9d440u);
  /* 11b9d440 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9d442 jne 0x11b9d448 */
  if (!C.zf) goto L_11b9d448;
L_11b9d444:;
  /* 11b9d444 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9d446 jmp 0x11b9d46e */
  goto L_11b9d46e;
L_11b9d448:;
  /* 11b9d448 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9d44b push edx */
  push32((uint32_t)(EDX));
  /* 11b9d44c call 0x11b9d4b0 */
  push32(0x11b9d451u); f_11b9d4b0();
  /* 11b9d451 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9d454 call dword ptr [0x11bd040c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd040c))), 0x11b9d45au);
  /* 11b9d45a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9d45d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11b9d45f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9d462 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 11b9d469 mov eax, 1 */
  EAX = (0x1u);
L_11b9d46e:;
  /* 11b9d46e mov esp, ebp */
  ESP = (EBP);
  /* 11b9d470 pop ebp */
  EBP = (pop32());
  /* 11b9d471 ret  */
  ESPCHK(0x11b9d3f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d480 @ 0x11b9d480 (41 bytes, 11 insns) */
void f_11b9d480(void) {
  FTRACE(0x11b9d480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9d480 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9d481 mov ebp, esp */
  EBP = (ESP);
  /* 11b9d483 call 0x11b9a630 */
  push32(0x11b9d488u); f_11b9a630();
  /* 11b9d488 cmp dword ptr [0x11bcbf30], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11bcbf30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9d48f je 0x11b9d4a7 */
  if (C.zf) goto L_11b9d4a7;
  /* 11b9d491 mov eax, dword ptr [0x11bcbf30] */
  EAX = (r32((uint32_t)(0x11bcbf30)));
  /* 11b9d496 push eax */
  push32((uint32_t)(EAX));
  /* 11b9d497 call dword ptr [0x11bd03d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03d4))), 0x11b9d49du);
  /* 11b9d49d mov dword ptr [0x11bcbf30], 0xffffffff */
  w32((uint32_t)(0x11bcbf30), (0xffffffffu));
L_11b9d4a7:;
  /* 11b9d4a7 pop ebp */
  EBP = (pop32());
  /* 11b9d4a8 ret  */
  ESPCHK(0x11b9d480u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d4b0 @ 0x11b9d4b0 (25 bytes, 8 insns) */
void f_11b9d4b0(void) {
  FTRACE(0x11b9d4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9d4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9d4b1 mov ebp, esp */
  EBP = (ESP);
  /* 11b9d4b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9d4b6 mov dword ptr [eax + 0x50], 0x11bcc260 */
  w32((uint32_t)(EAX + 0x50), (0x11bcc260u));
  /* 11b9d4bd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9d4c0 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 11b9d4c7 pop ebp */
  EBP = (pop32());
  /* 11b9d4c8 ret  */
  ESPCHK(0x11b9d4b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d4d0 @ 0x11b9d4d0 (152 bytes, 48 insns) */
void f_11b9d4d0(void) {
  FTRACE(0x11b9d4d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9d4d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9d4d1 mov ebp, esp */
  EBP = (ESP);
  /* 11b9d4d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9d4d6 call dword ptr [0x11bd03c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03c8))), 0x11b9d4dcu);
  /* 11b9d4dc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b9d4df mov eax, dword ptr [0x11bcbf30] */
  EAX = (r32((uint32_t)(0x11bcbf30)));
  /* 11b9d4e4 push eax */
  push32((uint32_t)(EAX));
  /* 11b9d4e5 call dword ptr [0x11bd03cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03cc))), 0x11b9d4ebu);
  /* 11b9d4eb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b9d4ee cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9d4f2 jne 0x11b9d557 */
  if (!C.zf) goto L_11b9d557;
  /* 11b9d4f4 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 11b9d4f9 push 0x11bc8e7c */
  push32((uint32_t)(0x11bc8e7cu));
  /* 11b9d4fe push 2 */
  push32((uint32_t)(0x2u));
  /* 11b9d500 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 11b9d502 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b9d504 call 0x11b9abe0 */
  push32(0x11b9d509u); f_11b9abe0();
  /* 11b9d509 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9d50c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b9d50f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9d513 je 0x11b9d54d */
  if (C.zf) goto L_11b9d54d;
  /* 11b9d515 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9d518 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9d519 mov edx, dword ptr [0x11bcbf30] */
  EDX = (r32((uint32_t)(0x11bcbf30)));
  /* 11b9d51f push edx */
  push32((uint32_t)(EDX));
  /* 11b9d520 call dword ptr [0x11bd03dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03dc))), 0x11b9d526u);
  /* 11b9d526 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9d528 je 0x11b9d54d */
  if (C.zf) goto L_11b9d54d;
  /* 11b9d52a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9d52d push eax */
  push32((uint32_t)(EAX));
  /* 11b9d52e call 0x11b9d4b0 */
  push32(0x11b9d533u); f_11b9d4b0();
  /* 11b9d533 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9d536 call dword ptr [0x11bd040c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd040c))), 0x11b9d53cu);
  /* 11b9d53c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9d53f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11b9d541 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9d544 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 11b9d54b jmp 0x11b9d557 */
  goto L_11b9d557;
L_11b9d54d:;
  /* 11b9d54d push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11b9d54f call 0x11b99240 */
  push32(0x11b9d554u); f_11b99240();
  /* 11b9d554 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9d557:;
  /* 11b9d557 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9d55a push eax */
  push32((uint32_t)(EAX));
  /* 11b9d55b call dword ptr [0x11bd03d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03d0))), 0x11b9d561u);
  /* 11b9d561 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9d564 mov esp, ebp */
  ESP = (EBP);
  /* 11b9d566 pop ebp */
  EBP = (pop32());
  /* 11b9d567 ret  */
  ESPCHK(0x11b9d4d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d570 @ 0x11b9d570 (263 bytes, 86 insns) */
void f_11b9d570(void) {
  FTRACE(0x11b9d570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9d570 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9d571 mov ebp, esp */
  EBP = (ESP);
  /* 11b9d573 cmp dword ptr [0x11bcbf30], -1 */
  { uint32_t _a=(r32((uint32_t)(0x11bcbf30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9d57a je 0x11b9d675 */
  if (C.zf) goto L_11b9d675;
  /* 11b9d580 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9d584 jne 0x11b9d595 */
  if (!C.zf) goto L_11b9d595;
  /* 11b9d586 mov eax, dword ptr [0x11bcbf30] */
  EAX = (r32((uint32_t)(0x11bcbf30)));
  /* 11b9d58b push eax */
  push32((uint32_t)(EAX));
  /* 11b9d58c call dword ptr [0x11bd03cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03cc))), 0x11b9d592u);
  /* 11b9d592 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11b9d595:;
  /* 11b9d595 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9d599 je 0x11b9d666 */
  if (C.zf) goto L_11b9d666;
  /* 11b9d59f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9d5a2 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9d5a6 je 0x11b9d5b9 */
  if (C.zf) goto L_11b9d5b9;
  /* 11b9d5a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b9d5aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9d5ad mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 11b9d5b0 push eax */
  push32((uint32_t)(EAX));
  /* 11b9d5b1 call 0x11b9b260 */
  push32(0x11b9d5b6u); f_11b9b260();
  /* 11b9d5b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9d5b9:;
  /* 11b9d5b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9d5bc cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9d5c0 je 0x11b9d5d3 */
  if (C.zf) goto L_11b9d5d3;
  /* 11b9d5c2 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b9d5c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9d5c7 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 11b9d5ca push eax */
  push32((uint32_t)(EAX));
  /* 11b9d5cb call 0x11b9b260 */
  push32(0x11b9d5d0u); f_11b9b260();
  /* 11b9d5d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9d5d3:;
  /* 11b9d5d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9d5d6 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9d5da je 0x11b9d5ed */
  if (C.zf) goto L_11b9d5ed;
  /* 11b9d5dc push 2 */
  push32((uint32_t)(0x2u));
  /* 11b9d5de mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9d5e1 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 11b9d5e4 push eax */
  push32((uint32_t)(EAX));
  /* 11b9d5e5 call 0x11b9b260 */
  push32(0x11b9d5eau); f_11b9b260();
  /* 11b9d5ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9d5ed:;
  /* 11b9d5ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9d5f0 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9d5f4 je 0x11b9d607 */
  if (C.zf) goto L_11b9d607;
  /* 11b9d5f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b9d5f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9d5fb mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 11b9d5fe push eax */
  push32((uint32_t)(EAX));
  /* 11b9d5ff call 0x11b9b260 */
  push32(0x11b9d604u); f_11b9b260();
  /* 11b9d604 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9d607:;
  /* 11b9d607 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9d60a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9d60e je 0x11b9d621 */
  if (C.zf) goto L_11b9d621;
  /* 11b9d610 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b9d612 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9d615 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 11b9d618 push eax */
  push32((uint32_t)(EAX));
  /* 11b9d619 call 0x11b9b260 */
  push32(0x11b9d61eu); f_11b9b260();
  /* 11b9d61e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9d621:;
  /* 11b9d621 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9d624 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9d628 je 0x11b9d63b */
  if (C.zf) goto L_11b9d63b;
  /* 11b9d62a push 2 */
  push32((uint32_t)(0x2u));
  /* 11b9d62c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9d62f mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 11b9d632 push eax */
  push32((uint32_t)(EAX));
  /* 11b9d633 call 0x11b9b260 */
  push32(0x11b9d638u); f_11b9b260();
  /* 11b9d638 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9d63b:;
  /* 11b9d63b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9d63e cmp dword ptr [ecx + 0x50], 0x11bcc260 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x11bcc260u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9d645 je 0x11b9d658 */
  if (C.zf) goto L_11b9d658;
  /* 11b9d647 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b9d649 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9d64c mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 11b9d64f push eax */
  push32((uint32_t)(EAX));
  /* 11b9d650 call 0x11b9b260 */
  push32(0x11b9d655u); f_11b9b260();
  /* 11b9d655 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9d658:;
  /* 11b9d658 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b9d65a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9d65d push ecx */
  push32((uint32_t)(ECX));
  /* 11b9d65e call 0x11b9b260 */
  push32(0x11b9d663u); f_11b9b260();
  /* 11b9d663 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9d666:;
  /* 11b9d666 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9d668 mov edx, dword ptr [0x11bcbf30] */
  EDX = (r32((uint32_t)(0x11bcbf30)));
  /* 11b9d66e push edx */
  push32((uint32_t)(EDX));
  /* 11b9d66f call dword ptr [0x11bd03dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03dc))), 0x11b9d675u);
L_11b9d675:;
  /* 11b9d675 pop ebp */
  EBP = (pop32());
  /* 11b9d676 ret  */
  ESPCHK(0x11b9d570u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d680 @ 0x11b9d680 (11 bytes, 5 insns) */
void f_11b9d680(void) {
  FTRACE(0x11b9d680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9d680 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9d681 mov ebp, esp */
  EBP = (ESP);
  /* 11b9d683 call dword ptr [0x11bd040c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd040c))), 0x11b9d689u);
  /* 11b9d689 pop ebp */
  EBP = (pop32());
  /* 11b9d68a ret  */
  ESPCHK(0x11b9d680u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d690 @ 0x11b9d690 (11 bytes, 5 insns) */
void f_11b9d690(void) {
  FTRACE(0x11b9d690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9d690 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9d691 mov ebp, esp */
  EBP = (ESP);
  /* 11b9d693 call dword ptr [0x11bd03c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03c4))), 0x11b9d699u);
  /* 11b9d699 pop ebp */
  EBP = (pop32());
  /* 11b9d69a ret  */
  ESPCHK(0x11b9d690u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d6a0 @ 0x11b9d6a0 (92 bytes, 29 insns) */
void f_11b9d6a0(void) {
  FTRACE(0x11b9d6a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9d6a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9d6a1 mov ebp, esp */
  EBP = (ESP);
  /* 11b9d6a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11b9d6a5 push 0x11bc8e88 */
  push32((uint32_t)(0x11bc8e88u));
  /* 11b9d6aa push 0x11ba441c */
  push32((uint32_t)(0x11ba441cu));
  /* 11b9d6af mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11b9d6b5 push eax */
  push32((uint32_t)(EAX));
  /* 11b9d6b6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11b9d6bd sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9d6c0 push ebx */
  push32((uint32_t)(EBX));
  /* 11b9d6c1 push esi */
  push32((uint32_t)(ESI));
  /* 11b9d6c2 push edi */
  push32((uint32_t)(EDI));
  /* 11b9d6c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11b9d6c6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b9d6cd call 0x11b9d4d0 */
  push32(0x11b9d6d2u); f_11b9d4d0();
  /* 11b9d6d2 cmp dword ptr [eax + 0x60], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9d6d6 je 0x11b9d700 */
  if (C.zf) goto L_11b9d700;
  /* 11b9d6d8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11b9d6df call 0x11b9d4d0 */
  push32(0x11b9d6e4u); f_11b9d4d0();
  /* 11b9d6e4 call dword ptr [eax + 0x60] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x60))), 0x11b9d6e7u);
  /* 11b9d6e7 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b9d6ee jmp 0x11b9d700 */
  goto L_11b9d700;
  /* 11b9d6f0 mov eax, 1 */
  EAX = (0x1u);
  /* 11b9d6f5 ret  */
  ESPCHK(0x11b9d6a0u, _esp0);
  ESP += 4; return;
  /* 11b9d6f6 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11b9d6f9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11b9d700:;
  /* 11b9d700 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11b9d707 call 0x11b9d70e */
  push32(0x11b9d70cu); f_11b9d70e();
  /* 11b9d70c jmp 0x11b9d714 */
  jmp_ind(0x11b9d714u); return;
}

/* _abort @ 0x11b9d70e (5 bytes, 2 insns) */
void f_11b9d70e(void) {
  FTRACE(0x11b9d70eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9d70e call 0x11ba4720 */
  push32(0x11b9d713u); f_11ba4720();
  /* 11b9d713 ret  */
  ESPCHK(0x11b9d70eu, _esp0);
  ESP += 4; return;
}

/* FUN_1000d730 @ 0x11b9d730 (29 bytes, 10 insns) */
void f_11b9d730(void) {
  FTRACE(0x11b9d730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9d730 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9d731 mov ebp, esp */
  EBP = (ESP);
  /* 11b9d733 call 0x11b9d4d0 */
  push32(0x11b9d738u); f_11b9d4d0();
  /* 11b9d738 cmp dword ptr [eax + 0x64], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9d73c je 0x11b9d746 */
  if (C.zf) goto L_11b9d746;
  /* 11b9d73e call 0x11b9d4d0 */
  push32(0x11b9d743u); f_11b9d4d0();
  /* 11b9d743 call dword ptr [eax + 0x64] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x64))), 0x11b9d746u);
L_11b9d746:;
  /* 11b9d746 call 0x11b9d6a0 */
  push32(0x11b9d74bu); f_11b9d6a0();
  /* 11b9d74b pop ebp */
  EBP = (pop32());
  /* 11b9d74c ret  */
  ESPCHK(0x11b9d730u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d750 @ 0x11b9d750 (90 bytes, 27 insns) */
void f_11b9d750(void) {
  FTRACE(0x11b9d750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9d750 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9d751 mov ebp, esp */
  EBP = (ESP);
  /* 11b9d753 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11b9d755 push 0x11bc8ea0 */
  push32((uint32_t)(0x11bc8ea0u));
  /* 11b9d75a push 0x11ba441c */
  push32((uint32_t)(0x11ba441cu));
  /* 11b9d75f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11b9d765 push eax */
  push32((uint32_t)(EAX));
  /* 11b9d766 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11b9d76d sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9d770 push ebx */
  push32((uint32_t)(EBX));
  /* 11b9d771 push esi */
  push32((uint32_t)(ESI));
  /* 11b9d772 push edi */
  push32((uint32_t)(EDI));
  /* 11b9d773 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11b9d776 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b9d77d cmp dword ptr [0x11bcbf34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bcbf34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9d784 je 0x11b9d7ac */
  if (C.zf) goto L_11b9d7ac;
  /* 11b9d786 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11b9d78d call dword ptr [0x11bcbf34] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bcbf34))), 0x11b9d793u);
  /* 11b9d793 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b9d79a jmp 0x11b9d7ac */
  goto L_11b9d7ac;
  /* 11b9d79c mov eax, 1 */
  EAX = (0x1u);
  /* 11b9d7a1 ret  */
  ESPCHK(0x11b9d750u, _esp0);
  ESP += 4; return;
  /* 11b9d7a2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11b9d7a5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11b9d7ac:;
  /* 11b9d7ac mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11b9d7b3 call 0x11b9d7ba */
  push32(0x11b9d7b8u); f_11b9d7ba();
  /* 11b9d7b8 jmp 0x11b9d7c0 */
  f_11b9d7c0(); return;
}

/* FUN_1000d7ba @ 0x11b9d7ba (6 bytes, 2 insns) */
void f_11b9d7ba(void) {
  FTRACE(0x11b9d7bau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9d7ba call 0x11b9d6a0 */
  push32(0x11b9d7bfu); f_11b9d6a0();
  /* 11b9d7bf ret  */
  ESPCHK(0x11b9d7bau, _esp0);
  ESP += 4; return;
}

/* FUN_1000d7c0 @ 0x11b9d7c0 (17 bytes, 8 insns) */
void f_11b9d7c0(void) {
  FTRACE(0x11b9d7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9d7c0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b9d7c3 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11b9d7ca pop edi */
  EDI = (pop32());
  /* 11b9d7cb pop esi */
  ESI = (pop32());
  /* 11b9d7cc pop ebx */
  EBX = (pop32());
  /* 11b9d7cd mov esp, ebp */
  ESP = (EBP);
  /* 11b9d7cf pop ebp */
  EBP = (pop32());
  /* 11b9d7d0 ret  */
  ESPCHK(0x11b9d7c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d7e0 @ 0x11b9d7e0 (56 bytes, 15 insns) */
void f_11b9d7e0(void) {
  FTRACE(0x11b9d7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9d7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9d7e1 mov ebp, esp */
  EBP = (ESP);
  /* 11b9d7e3 cmp dword ptr [0x11bcbdb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bcbdb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9d7ea je 0x11b9d7f2 */
  if (C.zf) goto L_11b9d7f2;
  /* 11b9d7ec call dword ptr [0x11bcbdb0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bcbdb0))), 0x11b9d7f2u);
L_11b9d7f2:;
  /* 11b9d7f2 push 0x11bcb640 */
  push32((uint32_t)(0x11bcb640u));
  /* 11b9d7f7 push 0x11bcb328 */
  push32((uint32_t)(0x11bcb328u));
  /* 11b9d7fc call 0x11b9d9b0 */
  push32(0x11b9d801u); f_11b9d9b0();
  /* 11b9d801 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9d804 push 0x11bcb224 */
  push32((uint32_t)(0x11bcb224u));
  /* 11b9d809 push 0x11bcb000 */
  push32((uint32_t)(0x11bcb000u));
  /* 11b9d80e call 0x11b9d9b0 */
  push32(0x11b9d813u); f_11b9d9b0();
  /* 11b9d813 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9d816 pop ebp */
  EBP = (pop32());
  /* 11b9d817 ret  */
  ESPCHK(0x11b9d7e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d820 @ 0x11b9d820 (21 bytes, 10 insns) */
void f_11b9d820(void) {
  FTRACE(0x11b9d820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9d820 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9d821 mov ebp, esp */
  EBP = (ESP);
  /* 11b9d823 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9d825 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9d827 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9d82a push eax */
  push32((uint32_t)(EAX));
  /* 11b9d82b call 0x11b9d8a0 */
  push32(0x11b9d830u); f_11b9d8a0();
  /* 11b9d830 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9d833 pop ebp */
  EBP = (pop32());
  /* 11b9d834 ret  */
  ESPCHK(0x11b9d820u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x11b9d840 (21 bytes, 10 insns) */
void f_11b9d840(void) {
  FTRACE(0x11b9d840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9d840 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9d841 mov ebp, esp */
  EBP = (ESP);
  /* 11b9d843 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9d845 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b9d847 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9d84a push eax */
  push32((uint32_t)(EAX));
  /* 11b9d84b call 0x11b9d8a0 */
  push32(0x11b9d850u); f_11b9d8a0();
  /* 11b9d850 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9d853 pop ebp */
  EBP = (pop32());
  /* 11b9d854 ret  */
  ESPCHK(0x11b9d840u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d860 @ 0x11b9d860 (19 bytes, 9 insns) */
void f_11b9d860(void) {
  FTRACE(0x11b9d860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9d860 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9d861 mov ebp, esp */
  EBP = (ESP);
  /* 11b9d863 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b9d865 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9d867 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9d869 call 0x11b9d8a0 */
  push32(0x11b9d86eu); f_11b9d8a0();
  /* 11b9d86e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9d871 pop ebp */
  EBP = (pop32());
  /* 11b9d872 ret  */
  ESPCHK(0x11b9d860u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d880 @ 0x11b9d880 (19 bytes, 9 insns) */
void f_11b9d880(void) {
  FTRACE(0x11b9d880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9d880 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9d881 mov ebp, esp */
  EBP = (ESP);
  /* 11b9d883 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b9d885 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b9d887 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9d889 call 0x11b9d8a0 */
  push32(0x11b9d88eu); f_11b9d8a0();
  /* 11b9d88e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9d891 pop ebp */
  EBP = (pop32());
  /* 11b9d892 ret  */
  ESPCHK(0x11b9d880u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8a0 @ 0x11b9d8a0 (227 bytes, 61 insns) */
void f_11b9d8a0(void) {
  FTRACE(0x11b9d8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9d8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9d8a1 mov ebp, esp */
  EBP = (ESP);
  /* 11b9d8a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9d8a4 call 0x11b9d990 */
  push32(0x11b9d8a9u); f_11b9d990();
  /* 11b9d8a9 cmp dword ptr [0x11bce41c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11bce41c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9d8b0 jne 0x11b9d8c3 */
  if (!C.zf) goto L_11b9d8c3;
  /* 11b9d8b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9d8b5 push eax */
  push32((uint32_t)(EAX));
  /* 11b9d8b6 call dword ptr [0x11bd03bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03bc))), 0x11b9d8bcu);
  /* 11b9d8bc push eax */
  push32((uint32_t)(EAX));
  /* 11b9d8bd call dword ptr [0x11bd03c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03c0))), 0x11b9d8c3u);
L_11b9d8c3:;
  /* 11b9d8c3 mov dword ptr [0x11bce418], 1 */
  w32((uint32_t)(0x11bce418), (0x1u));
  /* 11b9d8cd mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 11b9d8d0 mov byte ptr [0x11bce414], cl */
  w8((uint32_t)(0x11bce414), (CL));
  /* 11b9d8d6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9d8da jne 0x11b9d923 */
  if (!C.zf) goto L_11b9d923;
  /* 11b9d8dc cmp dword ptr [0x11bcfe98], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bcfe98))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9d8e3 je 0x11b9d911 */
  if (C.zf) goto L_11b9d911;
  /* 11b9d8e5 mov edx, dword ptr [0x11bcfe94] */
  EDX = (r32((uint32_t)(0x11bcfe94)));
  /* 11b9d8eb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11b9d8ee:;
  /* 11b9d8ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9d8f1 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9d8f4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b9d8f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9d8fa cmp ecx, dword ptr [0x11bcfe98] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11bcfe98))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9d900 jb 0x11b9d911 */
  if (C.cf) goto L_11b9d911;
  /* 11b9d902 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9d905 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9d908 je 0x11b9d90f */
  if (C.zf) goto L_11b9d90f;
  /* 11b9d90a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9d90d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x11b9d90fu);
L_11b9d90f:;
  /* 11b9d90f jmp 0x11b9d8ee */
  goto L_11b9d8ee;
L_11b9d911:;
  /* 11b9d911 push 0x11bcb94c */
  push32((uint32_t)(0x11bcb94cu));
  /* 11b9d916 push 0x11bcb744 */
  push32((uint32_t)(0x11bcb744u));
  /* 11b9d91b call 0x11b9d9b0 */
  push32(0x11b9d920u); f_11b9d9b0();
  /* 11b9d920 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9d923:;
  /* 11b9d923 push 0x11bcbc58 */
  push32((uint32_t)(0x11bcbc58u));
  /* 11b9d928 push 0x11bcba50 */
  push32((uint32_t)(0x11bcba50u));
  /* 11b9d92d call 0x11b9d9b0 */
  push32(0x11b9d932u); f_11b9d9b0();
  /* 11b9d932 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9d935 cmp dword ptr [0x11bce420], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce420))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9d93c jne 0x11b9d95e */
  if (!C.zf) goto L_11b9d95e;
  /* 11b9d93e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11b9d940 call 0x11b9bce0 */
  push32(0x11b9d945u); f_11b9bce0();
  /* 11b9d945 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9d948 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11b9d94b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9d94d je 0x11b9d95e */
  if (C.zf) goto L_11b9d95e;
  /* 11b9d94f mov dword ptr [0x11bce420], 1 */
  w32((uint32_t)(0x11bce420), (0x1u));
  /* 11b9d959 call 0x11b9c5f0 */
  push32(0x11b9d95eu); f_11b9c5f0();
L_11b9d95e:;
  /* 11b9d95e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9d962 je 0x11b9d96b */
  if (C.zf) goto L_11b9d96b;
  /* 11b9d964 call 0x11b9d9a0 */
  push32(0x11b9d969u); f_11b9d9a0();
  /* 11b9d969 jmp 0x11b9d97f */
  goto L_11b9d97f;
L_11b9d96b:;
  /* 11b9d96b mov dword ptr [0x11bce41c], 1 */
  w32((uint32_t)(0x11bce41c), (0x1u));
  /* 11b9d975 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9d978 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9d979 call dword ptr [0x11bd042c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd042c))), 0x11b9d97fu);
L_11b9d97f:;
  /* 11b9d97f mov esp, ebp */
  ESP = (EBP);
  /* 11b9d981 pop ebp */
  EBP = (pop32());
  /* 11b9d982 ret  */
  ESPCHK(0x11b9d8a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d990 @ 0x11b9d990 (15 bytes, 7 insns) */
void f_11b9d990(void) {
  FTRACE(0x11b9d990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9d990 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9d991 mov ebp, esp */
  EBP = (ESP);
  /* 11b9d993 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11b9d995 call 0x11b9a6d0 */
  push32(0x11b9d99au); f_11b9a6d0();
  /* 11b9d99a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9d99d pop ebp */
  EBP = (pop32());
  /* 11b9d99e ret  */
  ESPCHK(0x11b9d990u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d9a0 @ 0x11b9d9a0 (15 bytes, 7 insns) */
void f_11b9d9a0(void) {
  FTRACE(0x11b9d9a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9d9a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9d9a1 mov ebp, esp */
  EBP = (ESP);
  /* 11b9d9a3 push 0xd */
  push32((uint32_t)(0xdu));
  /* 11b9d9a5 call 0x11b9a770 */
  push32(0x11b9d9aau); f_11b9a770();
  /* 11b9d9aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9d9ad pop ebp */
  EBP = (pop32());
  /* 11b9d9ae ret  */
  ESPCHK(0x11b9d9a0u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x11b9d9b0 (37 bytes, 16 insns) */
void f_11b9d9b0(void) {
  FTRACE(0x11b9d9b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9d9b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9d9b1 mov ebp, esp */
  EBP = (ESP);
L_11b9d9b3:;
  /* 11b9d9b3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9d9b6 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9d9b9 jae 0x11b9d9d3 */
  if (!C.cf) goto L_11b9d9d3;
  /* 11b9d9bb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9d9be cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9d9c1 je 0x11b9d9c8 */
  if (C.zf) goto L_11b9d9c8;
  /* 11b9d9c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9d9c6 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x11b9d9c8u);
L_11b9d9c8:;
  /* 11b9d9c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9d9cb add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9d9ce mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11b9d9d1 jmp 0x11b9d9b3 */
  goto L_11b9d9b3;
L_11b9d9d3:;
  /* 11b9d9d3 pop ebp */
  EBP = (pop32());
  /* 11b9d9d4 ret  */
  ESPCHK(0x11b9d9b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d9e0 @ 0x11b9d9e0 (238 bytes, 75 insns) */
void f_11b9d9e0(void) {
  FTRACE(0x11b9d9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9d9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9d9e1 mov ebp, esp */
  EBP = (ESP);
  /* 11b9d9e3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9d9e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9d9e9 sub eax, 0x76c */
  { uint32_t _a=(EAX),_b=(0x76cu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9d9ee mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11b9d9f1 cmp dword ptr [ebp + 8], 0x46 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9d9f5 jl 0x11b9da00 */
  if ((C.sf!=C.of)) goto L_11b9da00;
  /* 11b9d9f7 cmp dword ptr [ebp + 8], 0x8a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9d9fe jle 0x11b9da08 */
  if ((C.zf||C.sf!=C.of)) goto L_11b9da08;
L_11b9da00:;
  /* 11b9da00 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b9da03 jmp 0x11b9daca */
  goto L_11b9daca;
L_11b9da08:;
  /* 11b9da08 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9da0b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9da0e add edx, dword ptr [ecx*4 + 0x11bcc3cc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*4 + 0x11bcc3cc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9da15 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 11b9da18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9da1b and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11b9da1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9da20 jne 0x11b9da31 */
  if (!C.zf) goto L_11b9da31;
  /* 11b9da22 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9da26 jle 0x11b9da31 */
  if ((C.zf||C.sf!=C.of)) goto L_11b9da31;
  /* 11b9da28 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b9da2b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9da2e mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_11b9da31:;
  /* 11b9da31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9da34 sub edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9da37 imul edx, edx, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x16du); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b9da3d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9da40 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9da43 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11b9da46 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b9da49 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9da4b lea edx, [eax + ecx - 0x11] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x11));
  /* 11b9da4f imul edx, edx, 0x18 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x18u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b9da52 add edx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9da55 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b9da58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9da5b imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b9da5e add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9da61 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b9da64 add eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9da67 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b9da6a call 0x11ba4740 */
  push32(0x11b9da6fu); f_11ba4740();
  /* 11b9da6f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9da72 add ecx, dword ptr [0x11bcc2e8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11bcc2e8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9da78 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b9da7b mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b9da7e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11b9da81 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9da84 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11b9da87 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9da8a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9da8d mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11b9da90 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9da93 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11b9da96 cmp dword ptr [ebp + 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9da9a je 0x11b9dabb */
  if (C.zf) goto L_11b9dabb;
  /* 11b9da9c cmp dword ptr [ebp + 0x20], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9daa0 jne 0x11b9dac7 */
  if (!C.zf) goto L_11b9dac7;
  /* 11b9daa2 cmp dword ptr [0x11bcc2ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bcc2ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9daa9 je 0x11b9dac7 */
  if (C.zf) goto L_11b9dac7;
  /* 11b9daab lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11b9daae push eax */
  push32((uint32_t)(EAX));
  /* 11b9daaf call 0x11ba4b50 */
  push32(0x11b9dab4u); f_11ba4b50();
  /* 11b9dab4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9dab7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9dab9 je 0x11b9dac7 */
  if (C.zf) goto L_11b9dac7;
L_11b9dabb:;
  /* 11b9dabb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9dabe add ecx, dword ptr [0x11bcc2f0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11bcc2f0))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9dac4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11b9dac7:;
  /* 11b9dac7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11b9daca:;
  /* 11b9daca mov esp, ebp */
  ESP = (EBP);
  /* 11b9dacc pop ebp */
  EBP = (pop32());
  /* 11b9dacd ret  */
  ESPCHK(0x11b9d9e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dad0 @ 0x11b9dad0 (628 bytes, 214 insns) */
void f_11b9dad0(void) {
  FTRACE(0x11b9dad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9dad0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9dad1 mov ebp, esp */
  EBP = (ESP);
  /* 11b9dad3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9dad6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b9dad7 push esi */
  push32((uint32_t)(ESI));
  /* 11b9dad8 push edi */
  push32((uint32_t)(EDI));
L_11b9dad9:;
  /* 11b9dad9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9dadd jne 0x11b9dafd */
  if (!C.zf) goto L_11b9dafd;
  /* 11b9dadf push 0x11bc8f04 */
  push32((uint32_t)(0x11bc8f04u));
  /* 11b9dae4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9dae6 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 11b9dae8 push 0x11bc8ef8 */
  push32((uint32_t)(0x11bc8ef8u));
  /* 11b9daed push 2 */
  push32((uint32_t)(0x2u));
  /* 11b9daef call 0x11b99390 */
  push32(0x11b9daf4u); f_11b99390();
  /* 11b9daf4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9daf7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9dafa jne 0x11b9dafd */
  if (!C.zf) goto L_11b9dafd;
  /* 11b9dafc int3  */
  x86_unimpl("int3 @ 0x11b9dafc");
L_11b9dafd:;
  /* 11b9dafd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9daff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9db01 jne 0x11b9dad9 */
  if (!C.zf) goto L_11b9dad9;
  /* 11b9db03 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9db06 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b9db09 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9db0c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11b9db0f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11b9db12 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9db15 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11b9db18 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 11b9db1e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9db20 je 0x11b9db2f */
  if (C.zf) goto L_11b9db2f;
  /* 11b9db22 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9db25 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11b9db28 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 11b9db2b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b9db2d je 0x11b9db45 */
  if (C.zf) goto L_11b9db45;
L_11b9db2f:;
  /* 11b9db2f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9db32 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11b9db35 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11b9db37 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9db3a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 11b9db3d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b9db40 jmp 0x11b9dd3d */
  goto L_11b9dd3d;
L_11b9db45:;
  /* 11b9db45 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9db48 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11b9db4b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11b9db4e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9db50 je 0x11b9db9c */
  if (C.zf) goto L_11b9db9c;
  /* 11b9db52 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9db55 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11b9db5c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9db5f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11b9db62 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11b9db65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9db67 je 0x11b9db85 */
  if (C.zf) goto L_11b9db85;
  /* 11b9db69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9db6c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9db6f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11b9db72 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11b9db74 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9db77 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11b9db7a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 11b9db7d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9db80 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11b9db83 jmp 0x11b9db9c */
  goto L_11b9db9c;
L_11b9db85:;
  /* 11b9db85 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9db88 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11b9db8b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11b9db8e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9db91 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11b9db94 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b9db97 jmp 0x11b9dd3d */
  goto L_11b9dd3d;
L_11b9db9c:;
  /* 11b9db9c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9db9f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11b9dba2 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11b9dba5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9dba8 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11b9dbab mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9dbae mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11b9dbb1 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 11b9dbb4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9dbb7 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11b9dbba mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9dbbd mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11b9dbc4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b9dbcb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9dbce mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11b9dbd1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9dbd4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11b9dbd7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 11b9dbdd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b9dbdf jne 0x11b9dc0f */
  if (!C.zf) goto L_11b9dc0f;
  /* 11b9dbe1 cmp dword ptr [ebp - 8], 0x11bcc428 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x11bcc428u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9dbe8 je 0x11b9dbf3 */
  if (C.zf) goto L_11b9dbf3;
  /* 11b9dbea cmp dword ptr [ebp - 8], 0x11bcc448 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x11bcc448u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9dbf1 jne 0x11b9dc03 */
  if (!C.zf) goto L_11b9dc03;
L_11b9dbf3:;
  /* 11b9dbf3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b9dbf6 push edx */
  push32((uint32_t)(EDX));
  /* 11b9dbf7 call 0x11ba55b0 */
  push32(0x11b9dbfcu); f_11ba55b0();
  /* 11b9dbfc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9dbff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9dc01 jne 0x11b9dc0f */
  if (!C.zf) goto L_11b9dc0f;
L_11b9dc03:;
  /* 11b9dc03 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9dc06 push eax */
  push32((uint32_t)(EAX));
  /* 11b9dc07 call 0x11ba54e0 */
  push32(0x11b9dc0cu); f_11ba54e0();
  /* 11b9dc0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9dc0f:;
  /* 11b9dc0f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9dc12 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11b9dc15 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 11b9dc1b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9dc1d je 0x11b9dcfb */
  if (C.zf) goto L_11b9dcfb;
L_11b9dc23:;
  /* 11b9dc23 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9dc26 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9dc29 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11b9dc2b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9dc2e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9dc30 jge 0x11b9dc53 */
  if ((C.sf==C.of)) goto L_11b9dc53;
  /* 11b9dc32 push 0x11bc8eb8 */
  push32((uint32_t)(0x11bc8eb8u));
  /* 11b9dc37 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9dc39 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11b9dc3e push 0x11bc8ef8 */
  push32((uint32_t)(0x11bc8ef8u));
  /* 11b9dc43 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b9dc45 call 0x11b99390 */
  push32(0x11b9dc4au); f_11b99390();
  /* 11b9dc4a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9dc4d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9dc50 jne 0x11b9dc53 */
  if (!C.zf) goto L_11b9dc53;
  /* 11b9dc52 int3  */
  x86_unimpl("int3 @ 0x11b9dc52");
L_11b9dc53:;
  /* 11b9dc53 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9dc55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9dc57 jne 0x11b9dc23 */
  if (!C.zf) goto L_11b9dc23;
  /* 11b9dc59 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9dc5c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9dc5f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11b9dc61 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9dc64 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b9dc67 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9dc6a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11b9dc6d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9dc70 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9dc73 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11b9dc75 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9dc78 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11b9dc7b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9dc7e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9dc81 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11b9dc84 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9dc88 jle 0x11b9dca6 */
  if ((C.zf||C.sf!=C.of)) goto L_11b9dca6;
  /* 11b9dc8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9dc8d push ecx */
  push32((uint32_t)(ECX));
  /* 11b9dc8e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9dc91 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11b9dc94 push eax */
  push32((uint32_t)(EAX));
  /* 11b9dc95 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b9dc98 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9dc99 call 0x11ba51d0 */
  push32(0x11b9dc9eu); f_11ba51d0();
  /* 11b9dc9e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9dca1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b9dca4 jmp 0x11b9dcee */
  goto L_11b9dcee;
L_11b9dca6:;
  /* 11b9dca6 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9dcaa je 0x11b9dcc9 */
  if (C.zf) goto L_11b9dcc9;
  /* 11b9dcac mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b9dcaf sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11b9dcb2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b9dcb5 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11b9dcb8 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b9dcbb mov ecx, dword ptr [edx*4 + 0x11bcfd40] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11bcfd40)));
  /* 11b9dcc2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9dcc4 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11b9dcc7 jmp 0x11b9dcd0 */
  goto L_11b9dcd0;
L_11b9dcc9:;
  /* 11b9dcc9 mov dword ptr [ebp - 0x14], 0x11bcbf40 */
  w32((uint32_t)(EBP + -0x14), (0x11bcbf40u));
L_11b9dcd0:;
  /* 11b9dcd0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b9dcd3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 11b9dcd7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11b9dcda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9dcdc je 0x11b9dcee */
  if (C.zf) goto L_11b9dcee;
  /* 11b9dcde push 2 */
  push32((uint32_t)(0x2u));
  /* 11b9dce0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9dce2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b9dce5 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9dce6 call 0x11ba5080 */
  push32(0x11b9dcebu); f_11ba5080();
  /* 11b9dceb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9dcee:;
  /* 11b9dcee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9dcf1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11b9dcf4 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 11b9dcf7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11b9dcf9 jmp 0x11b9dd19 */
  goto L_11b9dd19;
L_11b9dcfb:;
  /* 11b9dcfb mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11b9dd02 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9dd05 push edx */
  push32((uint32_t)(EDX));
  /* 11b9dd06 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11b9dd09 push eax */
  push32((uint32_t)(EAX));
  /* 11b9dd0a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b9dd0d push ecx */
  push32((uint32_t)(ECX));
  /* 11b9dd0e call 0x11ba51d0 */
  push32(0x11b9dd13u); f_11ba51d0();
  /* 11b9dd13 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9dd16 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11b9dd19:;
  /* 11b9dd19 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9dd1c cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9dd1f je 0x11b9dd35 */
  if (C.zf) goto L_11b9dd35;
  /* 11b9dd21 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9dd24 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11b9dd27 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11b9dd2a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9dd2d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11b9dd30 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b9dd33 jmp 0x11b9dd3d */
  goto L_11b9dd3d;
L_11b9dd35:;
  /* 11b9dd35 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9dd38 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_11b9dd3d:;
  /* 11b9dd3d pop edi */
  EDI = (pop32());
  /* 11b9dd3e pop esi */
  ESI = (pop32());
  /* 11b9dd3f pop ebx */
  EBX = (pop32());
  /* 11b9dd40 mov esp, ebp */
  ESP = (EBP);
  /* 11b9dd42 pop ebp */
  EBP = (pop32());
  /* 11b9dd43 ret  */
  ESPCHK(0x11b9dad0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dd50 @ 0x11b9dd50 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_11b9dd50(void) {
  FTRACE(0x11b9dd50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9dd50 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9dd51 mov ebp, esp */
  EBP = (ESP);
  /* 11b9dd53 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9dd59 push ebx */
  push32((uint32_t)(EBX));
  /* 11b9dd5a push esi */
  push32((uint32_t)(ESI));
  /* 11b9dd5b push edi */
  push32((uint32_t)(EDI));
  /* 11b9dd5c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11b9dd63 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 11b9dd6d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_11b9dd74:;
  /* 11b9dd74 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9dd77 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11b9dd79 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 11b9dd7c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11b9dd80 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9dd83 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9dd86 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11b9dd89 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9dd8b je 0x11b9e967 */
  if (C.zf) goto L_11b9e967;
  /* 11b9dd91 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9dd98 jl 0x11b9e967 */
  if ((C.sf!=C.of)) goto L_11b9e967;
  /* 11b9dd9e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11b9dda2 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9dda5 jl 0x11b9ddc6 */
  if ((C.sf!=C.of)) goto L_11b9ddc6;
  /* 11b9dda7 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11b9ddab cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9ddae jg 0x11b9ddc6 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b9ddc6;
  /* 11b9ddb0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11b9ddb4 movsx ecx, byte ptr [eax + 0x11bc8ef0] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x11bc8ef0))));
  /* 11b9ddbb and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 11b9ddbe mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 11b9ddc4 jmp 0x11b9ddd0 */
  goto L_11b9ddd0;
L_11b9ddc6:;
  /* 11b9ddc6 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_11b9ddd0:;
  /* 11b9ddd0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 11b9ddd6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11b9ddd9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9dddc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b9dddf movsx edx, byte ptr [ecx + eax*8 + 0x11bc8f10] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x11bc8f10))));
  /* 11b9dde7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11b9ddea mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11b9dded mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b9ddf0 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 11b9ddf6 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9ddfd ja 0x11b9e962 */
  if ((!C.cf&&!C.zf)) goto L_11b9e962;
  /* 11b9de03 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 11b9de09 jmp dword ptr [ecx*4 + 0x11b9e974] */
  switch (ECX) {
    case 0: goto L_11b9de10;
    case 1: goto L_11b9deaa;
    case 2: goto L_11b9deec;
    case 3: goto L_11b9df5b;
    case 4: goto L_11b9dfb3;
    case 5: goto L_11b9dfc2;
    case 6: goto L_11b9e00e;
    case 7: goto L_11b9e0a1;
    case 8: goto L_11b9df38;
    case 9: goto L_11b9df43;
    case 10: goto L_11b9df2e;
    case 11: goto L_11b9df23;
    case 12: goto L_11b9df4e;
    case 13: goto L_11b9df56;
    default: x86_unimpl("switch@0x11b9de09 out of table"); return;
  }
L_11b9de10:;
  /* 11b9de10 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11b9de17 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b9de1a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b9de20 mov eax, dword ptr [0x11bcc00c] */
  EAX = (r32((uint32_t)(0x11bcc00c)));
  /* 11b9de25 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b9de27 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11b9de2b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11b9de31 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b9de33 je 0x11b9de8d */
  if (C.zf) goto L_11b9de8d;
  /* 11b9de35 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 11b9de3b push edx */
  push32((uint32_t)(EDX));
  /* 11b9de3c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9de3f push eax */
  push32((uint32_t)(EAX));
  /* 11b9de40 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11b9de44 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9de45 call 0x11b9ea80 */
  push32(0x11b9de4au); f_11b9ea80();
  /* 11b9de4a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9de4d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9de50 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11b9de52 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 11b9de55 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9de58 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9de5b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11b9de5e:;
  /* 11b9de5e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11b9de62 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9de64 jne 0x11b9de87 */
  if (!C.zf) goto L_11b9de87;
  /* 11b9de66 push 0x11bc8f90 */
  push32((uint32_t)(0x11bc8f90u));
  /* 11b9de6b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9de6d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 11b9de72 push 0x11bc8f84 */
  push32((uint32_t)(0x11bc8f84u));
  /* 11b9de77 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b9de79 call 0x11b99390 */
  push32(0x11b9de7eu); f_11b99390();
  /* 11b9de7e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9de81 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9de84 jne 0x11b9de87 */
  if (!C.zf) goto L_11b9de87;
  /* 11b9de86 int3  */
  x86_unimpl("int3 @ 0x11b9de86");
L_11b9de87:;
  /* 11b9de87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9de89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9de8b jne 0x11b9de5e */
  if (!C.zf) goto L_11b9de5e;
L_11b9de8d:;
  /* 11b9de8d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 11b9de93 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9de94 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9de97 push edx */
  push32((uint32_t)(EDX));
  /* 11b9de98 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11b9de9c push eax */
  push32((uint32_t)(EAX));
  /* 11b9de9d call 0x11b9ea80 */
  push32(0x11b9dea2u); f_11b9ea80();
  /* 11b9dea2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9dea5 jmp 0x11b9e962 */
  goto L_11b9e962;
L_11b9deaa:;
  /* 11b9deaa mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11b9deb1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9deb4 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 11b9deba mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 11b9dec0 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 11b9dec6 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 11b9decc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11b9decf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b9ded6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 11b9dee0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11b9dee7 jmp 0x11b9e962 */
  goto L_11b9e962;
L_11b9deec:;
  /* 11b9deec movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11b9def0 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 11b9def6 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 11b9defc sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9deff mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 11b9df05 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9df0c ja 0x11b9df56 */
  if ((!C.cf&&!C.zf)) goto L_11b9df56;
  /* 11b9df0e mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 11b9df14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9df16 mov al, byte ptr [ecx + 0x11b9e9ac] */
  AL = (r8((uint32_t)(ECX + 0x11b9e9ac)));
  /* 11b9df1c jmp dword ptr [eax*4 + 0x11b9e994] */
  switch (EAX) {
    case 0: goto L_11b9df38;
    case 1: goto L_11b9df43;
    case 2: goto L_11b9df2e;
    case 3: goto L_11b9df23;
    case 4: goto L_11b9df4e;
    case 5: goto L_11b9df56;
    default: x86_unimpl("switch@0x11b9df1c out of table"); return;
  }
L_11b9df23:;
  /* 11b9df23 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9df26 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11b9df29 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b9df2c jmp 0x11b9df56 */
  goto L_11b9df56;
L_11b9df2e:;
  /* 11b9df2e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9df31 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11b9df33 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b9df36 jmp 0x11b9df56 */
  goto L_11b9df56;
L_11b9df38:;
  /* 11b9df38 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9df3b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11b9df3e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b9df41 jmp 0x11b9df56 */
  goto L_11b9df56;
L_11b9df43:;
  /* 11b9df43 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9df46 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 11b9df49 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b9df4c jmp 0x11b9df56 */
  goto L_11b9df56;
L_11b9df4e:;
  /* 11b9df4e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9df51 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 11b9df53 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b9df56:;
  /* 11b9df56 jmp 0x11b9e962 */
  goto L_11b9e962;
L_11b9df5b:;
  /* 11b9df5b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11b9df5f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9df62 jne 0x11b9df97 */
  if (!C.zf) goto L_11b9df97;
  /* 11b9df64 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11b9df67 push edx */
  push32((uint32_t)(EDX));
  /* 11b9df68 call 0x11b9eb90 */
  push32(0x11b9df6du); f_11b9eb90();
  /* 11b9df6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9df70 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 11b9df76 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9df7d jge 0x11b9df95 */
  if ((C.sf==C.of)) goto L_11b9df95;
  /* 11b9df7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9df82 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11b9df84 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b9df87 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 11b9df8d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b9df8f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_11b9df95:;
  /* 11b9df95 jmp 0x11b9dfae */
  goto L_11b9dfae;
L_11b9df97:;
  /* 11b9df97 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 11b9df9d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b9dfa0 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11b9dfa4 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 11b9dfa8 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_11b9dfae:;
  /* 11b9dfae jmp 0x11b9e962 */
  goto L_11b9e962;
L_11b9dfb3:;
  /* 11b9dfb3 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 11b9dfbd jmp 0x11b9e962 */
  goto L_11b9e962;
L_11b9dfc2:;
  /* 11b9dfc2 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11b9dfc6 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9dfc9 jne 0x11b9dff2 */
  if (!C.zf) goto L_11b9dff2;
  /* 11b9dfcb lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11b9dfce push eax */
  push32((uint32_t)(EAX));
  /* 11b9dfcf call 0x11b9eb90 */
  push32(0x11b9dfd4u); f_11b9eb90();
  /* 11b9dfd4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9dfd7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 11b9dfdd cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9dfe4 jge 0x11b9dff0 */
  if ((C.sf==C.of)) goto L_11b9dff0;
  /* 11b9dfe6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_11b9dff0:;
  /* 11b9dff0 jmp 0x11b9e009 */
  goto L_11b9e009;
L_11b9dff2:;
  /* 11b9dff2 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 11b9dff8 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b9dffb movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11b9dfff lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11b9e003 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_11b9e009:;
  /* 11b9e009 jmp 0x11b9e962 */
  goto L_11b9e962;
L_11b9e00e:;
  /* 11b9e00e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11b9e012 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 11b9e018 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 11b9e01e sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9e021 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 11b9e027 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9e02e ja 0x11b9e09c */
  if ((!C.cf&&!C.zf)) goto L_11b9e09c;
  /* 11b9e030 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 11b9e036 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9e038 mov al, byte ptr [ecx + 0x11b9e9d1] */
  AL = (r8((uint32_t)(ECX + 0x11b9e9d1)));
  /* 11b9e03e jmp dword ptr [eax*4 + 0x11b9e9bd] */
  switch (EAX) {
    case 0: goto L_11b9e050;
    case 1: goto L_11b9e089;
    case 2: goto L_11b9e045;
    case 3: goto L_11b9e093;
    case 4: goto L_11b9e09c;
    default: x86_unimpl("switch@0x11b9e03e out of table"); return;
  }
L_11b9e045:;
  /* 11b9e045 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9e048 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 11b9e04b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b9e04e jmp 0x11b9e09c */
  goto L_11b9e09c;
L_11b9e050:;
  /* 11b9e050 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9e053 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b9e056 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9e059 jne 0x11b9e07b */
  if (!C.zf) goto L_11b9e07b;
  /* 11b9e05b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9e05e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11b9e062 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9e065 jne 0x11b9e07b */
  if (!C.zf) goto L_11b9e07b;
  /* 11b9e067 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9e06a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9e06d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11b9e070 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9e073 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11b9e076 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b9e079 jmp 0x11b9e087 */
  goto L_11b9e087;
L_11b9e07b:;
  /* 11b9e07b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11b9e082 jmp 0x11b9de10 */
  goto L_11b9de10;
L_11b9e087:;
  /* 11b9e087 jmp 0x11b9e09c */
  goto L_11b9e09c;
L_11b9e089:;
  /* 11b9e089 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9e08c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11b9e08e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b9e091 jmp 0x11b9e09c */
  goto L_11b9e09c;
L_11b9e093:;
  /* 11b9e093 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9e096 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11b9e099 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11b9e09c:;
  /* 11b9e09c jmp 0x11b9e962 */
  goto L_11b9e962;
L_11b9e0a1:;
  /* 11b9e0a1 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11b9e0a5 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 11b9e0ab mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 11b9e0b1 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9e0b4 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 11b9e0ba cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9e0c1 ja 0x11b9e787 */
  if ((!C.cf&&!C.zf)) goto L_11b9e787;
  /* 11b9e0c7 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 11b9e0cd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b9e0cf mov cl, byte ptr [edx + 0x11b9ea3c] */
  CL = (r8((uint32_t)(EDX + 0x11b9ea3c)));
  /* 11b9e0d5 jmp dword ptr [ecx*4 + 0x11b9ea00] */
  switch (ECX) {
    case 0: goto L_11b9e0dc;
    case 1: goto L_11b9e370;
    case 2: goto L_11b9e200;
    case 3: goto L_11b9e4a9;
    case 4: goto L_11b9e16b;
    case 5: goto L_11b9e0f1;
    case 6: goto L_11b9e47b;
    case 7: goto L_11b9e380;
    case 8: goto L_11b9e325;
    case 9: goto L_11b9e4f5;
    case 10: goto L_11b9e49f;
    case 11: goto L_11b9e216;
    case 12: goto L_11b9e493;
    case 13: goto L_11b9e4b5;
    case 14: goto L_11b9e787;
    default: x86_unimpl("switch@0x11b9e0d5 out of table"); return;
  }
L_11b9e0dc:;
  /* 11b9e0dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9e0df and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 11b9e0e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9e0e6 jne 0x11b9e0f1 */
  if (!C.zf) goto L_11b9e0f1;
  /* 11b9e0e8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9e0eb or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11b9e0ee mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11b9e0f1:;
  /* 11b9e0f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9e0f4 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 11b9e0fa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9e0fc je 0x11b9e137 */
  if (C.zf) goto L_11b9e137;
  /* 11b9e0fe lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11b9e101 push eax */
  push32((uint32_t)(EAX));
  /* 11b9e102 call 0x11b9ebd0 */
  push32(0x11b9e107u); f_11b9ebd0();
  /* 11b9e107 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9e10a mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 11b9e10e mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 11b9e112 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9e113 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 11b9e119 push edx */
  push32((uint32_t)(EDX));
  /* 11b9e11a call 0x11ba5820 */
  push32(0x11b9e11fu); f_11ba5820();
  /* 11b9e11f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9e122 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11b9e125 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9e129 jge 0x11b9e135 */
  if ((C.sf==C.of)) goto L_11b9e135;
  /* 11b9e12b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_11b9e135:;
  /* 11b9e135 jmp 0x11b9e15d */
  goto L_11b9e15d;
L_11b9e137:;
  /* 11b9e137 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11b9e13a push eax */
  push32((uint32_t)(EAX));
  /* 11b9e13b call 0x11b9eb90 */
  push32(0x11b9e140u); f_11b9eb90();
  /* 11b9e140 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9e143 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 11b9e14a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 11b9e150 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 11b9e156 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_11b9e15d:;
  /* 11b9e15d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 11b9e163 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11b9e166 jmp 0x11b9e787 */
  goto L_11b9e787;
L_11b9e16b:;
  /* 11b9e16b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11b9e16e push eax */
  push32((uint32_t)(EAX));
  /* 11b9e16f call 0x11b9eb90 */
  push32(0x11b9e174u); f_11b9eb90();
  /* 11b9e174 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9e177 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 11b9e17d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9e184 je 0x11b9e192 */
  if (C.zf) goto L_11b9e192;
  /* 11b9e186 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11b9e18c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9e190 jne 0x11b9e1ac */
  if (!C.zf) goto L_11b9e1ac;
L_11b9e192:;
  /* 11b9e192 mov edx, dword ptr [0x11bcbf38] */
  EDX = (r32((uint32_t)(0x11bcbf38)));
  /* 11b9e198 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11b9e19b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b9e19e push eax */
  push32((uint32_t)(EAX));
  /* 11b9e19f call 0x11b9fe80 */
  push32(0x11b9e1a4u); f_11b9fe80();
  /* 11b9e1a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9e1a7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11b9e1aa jmp 0x11b9e1fb */
  goto L_11b9e1fb;
L_11b9e1ac:;
  /* 11b9e1ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9e1af and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 11b9e1b5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b9e1b7 je 0x11b9e1dc */
  if (C.zf) goto L_11b9e1dc;
  /* 11b9e1b9 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11b9e1bf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b9e1c2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11b9e1c5 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11b9e1cb movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 11b9e1ce shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11b9e1d0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11b9e1d3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 11b9e1da jmp 0x11b9e1fb */
  goto L_11b9e1fb;
L_11b9e1dc:;
  /* 11b9e1dc mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11b9e1e3 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11b9e1e9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b9e1ec mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11b9e1ef mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11b9e1f5 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 11b9e1f8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11b9e1fb:;
  /* 11b9e1fb jmp 0x11b9e787 */
  goto L_11b9e787;
L_11b9e200:;
  /* 11b9e200 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9e203 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 11b9e209 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b9e20b jne 0x11b9e216 */
  if (!C.zf) goto L_11b9e216;
  /* 11b9e20d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9e210 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11b9e213 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11b9e216:;
  /* 11b9e216 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9e21d jne 0x11b9e22b */
  if (!C.zf) goto L_11b9e22b;
  /* 11b9e21f mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 11b9e229 jmp 0x11b9e237 */
  goto L_11b9e237;
L_11b9e22b:;
  /* 11b9e22b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 11b9e231 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_11b9e237:;
  /* 11b9e237 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 11b9e23d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 11b9e243 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11b9e246 push edx */
  push32((uint32_t)(EDX));
  /* 11b9e247 call 0x11b9eb90 */
  push32(0x11b9e24cu); f_11b9eb90();
  /* 11b9e24c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9e24f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11b9e252 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9e255 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 11b9e25a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9e25c je 0x11b9e2c6 */
  if (C.zf) goto L_11b9e2c6;
  /* 11b9e25e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9e262 jne 0x11b9e26d */
  if (!C.zf) goto L_11b9e26d;
  /* 11b9e264 mov ecx, dword ptr [0x11bcbf3c] */
  ECX = (r32((uint32_t)(0x11bcbf3c)));
  /* 11b9e26a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11b9e26d:;
  /* 11b9e26d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 11b9e274 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b9e277 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_11b9e27d:;
  /* 11b9e27d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 11b9e283 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 11b9e289 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9e28c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 11b9e292 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9e294 je 0x11b9e2b6 */
  if (C.zf) goto L_11b9e2b6;
  /* 11b9e296 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 11b9e29c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9e29e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11b9e2a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9e2a3 je 0x11b9e2b6 */
  if (C.zf) goto L_11b9e2b6;
  /* 11b9e2a5 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 11b9e2ab add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9e2ae mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 11b9e2b4 jmp 0x11b9e27d */
  goto L_11b9e27d;
L_11b9e2b6:;
  /* 11b9e2b6 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 11b9e2bc sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9e2bf sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11b9e2c1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11b9e2c4 jmp 0x11b9e320 */
  goto L_11b9e320;
L_11b9e2c6:;
  /* 11b9e2c6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9e2ca jne 0x11b9e2d4 */
  if (!C.zf) goto L_11b9e2d4;
  /* 11b9e2cc mov eax, dword ptr [0x11bcbf38] */
  EAX = (r32((uint32_t)(0x11bcbf38)));
  /* 11b9e2d1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11b9e2d4:;
  /* 11b9e2d4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b9e2d7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_11b9e2dd:;
  /* 11b9e2dd mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 11b9e2e3 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 11b9e2e9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9e2ec mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 11b9e2f2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9e2f4 je 0x11b9e314 */
  if (C.zf) goto L_11b9e314;
  /* 11b9e2f6 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 11b9e2fc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11b9e2ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9e301 je 0x11b9e314 */
  if (C.zf) goto L_11b9e314;
  /* 11b9e303 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 11b9e309 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9e30c mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 11b9e312 jmp 0x11b9e2dd */
  goto L_11b9e2dd;
L_11b9e314:;
  /* 11b9e314 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 11b9e31a sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9e31d mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_11b9e320:;
  /* 11b9e320 jmp 0x11b9e787 */
  goto L_11b9e787;
L_11b9e325:;
  /* 11b9e325 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11b9e328 push edx */
  push32((uint32_t)(EDX));
  /* 11b9e329 call 0x11b9eb90 */
  push32(0x11b9e32eu); f_11b9eb90();
  /* 11b9e32e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9e331 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 11b9e337 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9e33a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11b9e33d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9e33f je 0x11b9e353 */
  if (C.zf) goto L_11b9e353;
  /* 11b9e341 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 11b9e347 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 11b9e34e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 11b9e351 jmp 0x11b9e361 */
  goto L_11b9e361;
L_11b9e353:;
  /* 11b9e353 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 11b9e359 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 11b9e35f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_11b9e361:;
  /* 11b9e361 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 11b9e36b jmp 0x11b9e787 */
  goto L_11b9e787;
L_11b9e370:;
  /* 11b9e370 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11b9e377 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 11b9e37a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 11b9e37d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_11b9e380:;
  /* 11b9e380 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9e383 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 11b9e385 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b9e388 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 11b9e38e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11b9e391 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9e398 jge 0x11b9e3a6 */
  if ((C.sf==C.of)) goto L_11b9e3a6;
  /* 11b9e39a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 11b9e3a4 jmp 0x11b9e3c2 */
  goto L_11b9e3c2;
L_11b9e3a6:;
  /* 11b9e3a6 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9e3ad jne 0x11b9e3c2 */
  if (!C.zf) goto L_11b9e3c2;
  /* 11b9e3af movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11b9e3b3 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9e3b6 jne 0x11b9e3c2 */
  if (!C.zf) goto L_11b9e3c2;
  /* 11b9e3b8 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_11b9e3c2:;
  /* 11b9e3c2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9e3c5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9e3c8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11b9e3cb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9e3ce sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9e3d1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b9e3d3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b9e3d6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 11b9e3dc mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 11b9e3e2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9e3e5 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9e3e6 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 11b9e3ec push edx */
  push32((uint32_t)(EDX));
  /* 11b9e3ed movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11b9e3f1 push eax */
  push32((uint32_t)(EAX));
  /* 11b9e3f2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b9e3f5 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9e3f6 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 11b9e3fc push edx */
  push32((uint32_t)(EDX));
  /* 11b9e3fd call dword ptr [0x11bcbe30] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bcbe30))), 0x11b9e403u);
  /* 11b9e403 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9e406 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9e409 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11b9e40e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9e410 je 0x11b9e428 */
  if (C.zf) goto L_11b9e428;
  /* 11b9e412 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9e419 jne 0x11b9e428 */
  if (!C.zf) goto L_11b9e428;
  /* 11b9e41b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b9e41e push ecx */
  push32((uint32_t)(ECX));
  /* 11b9e41f call dword ptr [0x11bcbe3c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bcbe3c))), 0x11b9e425u);
  /* 11b9e425 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9e428:;
  /* 11b9e428 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11b9e42c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9e42f jne 0x11b9e44a */
  if (!C.zf) goto L_11b9e44a;
  /* 11b9e431 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9e434 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11b9e439 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9e43b jne 0x11b9e44a */
  if (!C.zf) goto L_11b9e44a;
  /* 11b9e43d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b9e440 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9e441 call dword ptr [0x11bcbe34] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bcbe34))), 0x11b9e447u);
  /* 11b9e447 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9e44a:;
  /* 11b9e44a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b9e44d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11b9e450 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9e453 jne 0x11b9e467 */
  if (!C.zf) goto L_11b9e467;
  /* 11b9e455 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9e458 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11b9e45b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b9e45e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b9e461 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9e464 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11b9e467:;
  /* 11b9e467 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b9e46a push eax */
  push32((uint32_t)(EAX));
  /* 11b9e46b call 0x11b9fe80 */
  push32(0x11b9e470u); f_11b9fe80();
  /* 11b9e470 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9e473 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11b9e476 jmp 0x11b9e787 */
  goto L_11b9e787;
L_11b9e47b:;
  /* 11b9e47b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9e47e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 11b9e481 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b9e484 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 11b9e48e jmp 0x11b9e515 */
  goto L_11b9e515;
L_11b9e493:;
  /* 11b9e493 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 11b9e49d jmp 0x11b9e515 */
  goto L_11b9e515;
L_11b9e49f:;
  /* 11b9e49f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_11b9e4a9:;
  /* 11b9e4a9 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 11b9e4b3 jmp 0x11b9e4bf */
  goto L_11b9e4bf;
L_11b9e4b5:;
  /* 11b9e4b5 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_11b9e4bf:;
  /* 11b9e4bf mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 11b9e4c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9e4cc and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 11b9e4d2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9e4d4 je 0x11b9e4f3 */
  if (C.zf) goto L_11b9e4f3;
  /* 11b9e4d6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 11b9e4dd mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 11b9e4e3 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9e4e6 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 11b9e4ec mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_11b9e4f3:;
  /* 11b9e4f3 jmp 0x11b9e515 */
  goto L_11b9e515;
L_11b9e4f5:;
  /* 11b9e4f5 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 11b9e4ff mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9e502 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 11b9e508 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b9e50a je 0x11b9e515 */
  if (C.zf) goto L_11b9e515;
  /* 11b9e50c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9e50f or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11b9e512 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11b9e515:;
  /* 11b9e515 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9e518 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11b9e51d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9e51f je 0x11b9e53e */
  if (C.zf) goto L_11b9e53e;
  /* 11b9e521 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11b9e524 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9e525 call 0x11b9ebb0 */
  push32(0x11b9e52au); f_11b9ebb0();
  /* 11b9e52a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9e52d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11b9e533 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 11b9e539 jmp 0x11b9e5cf */
  goto L_11b9e5cf;
L_11b9e53e:;
  /* 11b9e53e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9e541 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11b9e544 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9e546 je 0x11b9e590 */
  if (C.zf) goto L_11b9e590;
  /* 11b9e548 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9e54b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11b9e54e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9e550 je 0x11b9e570 */
  if (C.zf) goto L_11b9e570;
  /* 11b9e552 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11b9e555 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9e556 call 0x11b9eb90 */
  push32(0x11b9e55bu); f_11b9eb90();
  /* 11b9e55b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9e55e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 11b9e561 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b9e562 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11b9e568 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 11b9e56e jmp 0x11b9e58e */
  goto L_11b9e58e;
L_11b9e570:;
  /* 11b9e570 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11b9e573 push edx */
  push32((uint32_t)(EDX));
  /* 11b9e574 call 0x11b9eb90 */
  push32(0x11b9e579u); f_11b9eb90();
  /* 11b9e579 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9e57c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b9e581 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b9e582 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11b9e588 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_11b9e58e:;
  /* 11b9e58e jmp 0x11b9e5cf */
  goto L_11b9e5cf;
L_11b9e590:;
  /* 11b9e590 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9e593 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11b9e596 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9e598 je 0x11b9e5b5 */
  if (C.zf) goto L_11b9e5b5;
  /* 11b9e59a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11b9e59d push ecx */
  push32((uint32_t)(ECX));
  /* 11b9e59e call 0x11b9eb90 */
  push32(0x11b9e5a3u); f_11b9eb90();
  /* 11b9e5a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9e5a6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b9e5a7 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11b9e5ad mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 11b9e5b3 jmp 0x11b9e5cf */
  goto L_11b9e5cf;
L_11b9e5b5:;
  /* 11b9e5b5 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11b9e5b8 push edx */
  push32((uint32_t)(EDX));
  /* 11b9e5b9 call 0x11b9eb90 */
  push32(0x11b9e5beu); f_11b9eb90();
  /* 11b9e5be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9e5c1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b9e5c3 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11b9e5c9 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_11b9e5cf:;
  /* 11b9e5cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9e5d2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 11b9e5d5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9e5d7 je 0x11b9e617 */
  if (C.zf) goto L_11b9e617;
  /* 11b9e5d9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9e5e0 jg 0x11b9e617 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b9e617;
  /* 11b9e5e2 jl 0x11b9e5ed */
  if ((C.sf!=C.of)) goto L_11b9e5ed;
  /* 11b9e5e4 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9e5eb jae 0x11b9e617 */
  if (!C.cf) goto L_11b9e617;
L_11b9e5ed:;
  /* 11b9e5ed mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 11b9e5f3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b9e5f5 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 11b9e5fb adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9e5fe neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b9e600 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11b9e606 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 11b9e60c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9e60f or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11b9e612 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b9e615 jmp 0x11b9e62f */
  goto L_11b9e62f;
L_11b9e617:;
  /* 11b9e617 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 11b9e61d mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11b9e623 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 11b9e629 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_11b9e62f:;
  /* 11b9e62f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9e632 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11b9e638 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9e63a jne 0x11b9e657 */
  if (!C.zf) goto L_11b9e657;
  /* 11b9e63c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11b9e642 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 11b9e648 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 11b9e64b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11b9e651 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_11b9e657:;
  /* 11b9e657 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9e65e jge 0x11b9e66c */
  if ((C.sf==C.of)) goto L_11b9e66c;
  /* 11b9e660 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 11b9e66a jmp 0x11b9e675 */
  goto L_11b9e675;
L_11b9e66c:;
  /* 11b9e66c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9e66f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 11b9e672 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11b9e675:;
  /* 11b9e675 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11b9e67b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 11b9e681 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9e683 jne 0x11b9e68c */
  if (!C.zf) goto L_11b9e68c;
  /* 11b9e685 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11b9e68c:;
  /* 11b9e68c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 11b9e68f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11b9e692:;
  /* 11b9e692 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 11b9e698 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 11b9e69e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9e6a1 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 11b9e6a7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9e6a9 jg 0x11b9e6bf */
  if ((!C.zf&&C.sf==C.of)) goto L_11b9e6bf;
  /* 11b9e6ab mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11b9e6b1 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 11b9e6b7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b9e6b9 je 0x11b9e740 */
  if (C.zf) goto L_11b9e740;
L_11b9e6bf:;
  /* 11b9e6bf mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 11b9e6c5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b9e6c6 push edx */
  push32((uint32_t)(EDX));
  /* 11b9e6c7 push eax */
  push32((uint32_t)(EAX));
  /* 11b9e6c8 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 11b9e6ce push edx */
  push32((uint32_t)(EDX));
  /* 11b9e6cf mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11b9e6d5 push eax */
  push32((uint32_t)(EAX));
  /* 11b9e6d6 call 0x11ba59b0 */
  push32(0x11b9e6dbu); f_11ba59b0();
  /* 11b9e6db add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9e6de mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 11b9e6e4 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 11b9e6ea cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b9e6eb push edx */
  push32((uint32_t)(EDX));
  /* 11b9e6ec push eax */
  push32((uint32_t)(EAX));
  /* 11b9e6ed mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 11b9e6f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9e6f4 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11b9e6fa push edx */
  push32((uint32_t)(EDX));
  /* 11b9e6fb call 0x11ba5940 */
  push32(0x11b9e700u); f_11ba5940();
  /* 11b9e700 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11b9e706 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 11b9e70c cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9e713 jle 0x11b9e727 */
  if ((C.zf||C.sf!=C.of)) goto L_11b9e727;
  /* 11b9e715 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 11b9e71b add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9e721 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_11b9e727:;
  /* 11b9e727 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b9e72a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 11b9e730 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11b9e732 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b9e735 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9e738 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11b9e73b jmp 0x11b9e692 */
  goto L_11b9e692;
L_11b9e740:;
  /* 11b9e740 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 11b9e743 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9e746 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11b9e749 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b9e74c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9e74f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11b9e752 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9e755 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 11b9e75a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9e75c je 0x11b9e787 */
  if (C.zf) goto L_11b9e787;
  /* 11b9e75e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b9e761 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11b9e764 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9e767 jne 0x11b9e76f */
  if (!C.zf) goto L_11b9e76f;
  /* 11b9e769 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9e76d jne 0x11b9e787 */
  if (!C.zf) goto L_11b9e787;
L_11b9e76f:;
  /* 11b9e76f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b9e772 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9e775 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11b9e778 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b9e77b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 11b9e77e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b9e781 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9e784 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_11b9e787:;
  /* 11b9e787 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9e78e jne 0x11b9e962 */
  if (!C.zf) goto L_11b9e962;
  /* 11b9e794 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9e797 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11b9e79a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9e79c je 0x11b9e7ed */
  if (C.zf) goto L_11b9e7ed;
  /* 11b9e79e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9e7a1 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 11b9e7a7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b9e7a9 je 0x11b9e7bb */
  if (C.zf) goto L_11b9e7bb;
  /* 11b9e7ab mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 11b9e7b2 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11b9e7b9 jmp 0x11b9e7ed */
  goto L_11b9e7ed;
L_11b9e7bb:;
  /* 11b9e7bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9e7be and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11b9e7c1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9e7c3 je 0x11b9e7d5 */
  if (C.zf) goto L_11b9e7d5;
  /* 11b9e7c5 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 11b9e7cc mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11b9e7d3 jmp 0x11b9e7ed */
  goto L_11b9e7ed;
L_11b9e7d5:;
  /* 11b9e7d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9e7d8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 11b9e7db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9e7dd je 0x11b9e7ed */
  if (C.zf) goto L_11b9e7ed;
  /* 11b9e7df mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 11b9e7e6 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_11b9e7ed:;
  /* 11b9e7ed mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 11b9e7f3 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9e7f6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9e7f9 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 11b9e7ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9e802 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 11b9e805 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9e807 jne 0x11b9e825 */
  if (!C.zf) goto L_11b9e825;
  /* 11b9e809 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11b9e80f push eax */
  push32((uint32_t)(EAX));
  /* 11b9e810 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9e813 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9e814 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11b9e81a push edx */
  push32((uint32_t)(EDX));
  /* 11b9e81b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11b9e81d call 0x11b9eb00 */
  push32(0x11b9e822u); f_11b9eb00();
  /* 11b9e822 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9e825:;
  /* 11b9e825 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11b9e82b push eax */
  push32((uint32_t)(EAX));
  /* 11b9e82c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9e82f push ecx */
  push32((uint32_t)(ECX));
  /* 11b9e830 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b9e833 push edx */
  push32((uint32_t)(EDX));
  /* 11b9e834 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 11b9e83a push eax */
  push32((uint32_t)(EAX));
  /* 11b9e83b call 0x11b9eb40 */
  push32(0x11b9e840u); f_11b9eb40();
  /* 11b9e840 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9e843 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9e846 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11b9e849 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b9e84b je 0x11b9e873 */
  if (C.zf) goto L_11b9e873;
  /* 11b9e84d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9e850 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11b9e853 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9e855 jne 0x11b9e873 */
  if (!C.zf) goto L_11b9e873;
  /* 11b9e857 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11b9e85d push eax */
  push32((uint32_t)(EAX));
  /* 11b9e85e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9e861 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9e862 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11b9e868 push edx */
  push32((uint32_t)(EDX));
  /* 11b9e869 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11b9e86b call 0x11b9eb00 */
  push32(0x11b9e870u); f_11b9eb00();
  /* 11b9e870 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9e873:;
  /* 11b9e873 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9e877 je 0x11b9e921 */
  if (C.zf) goto L_11b9e921;
  /* 11b9e87d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9e881 jle 0x11b9e921 */
  if ((C.zf||C.sf!=C.of)) goto L_11b9e921;
  /* 11b9e887 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b9e88a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 11b9e890 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b9e893 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_11b9e899:;
  /* 11b9e899 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 11b9e89f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 11b9e8a5 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9e8a8 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 11b9e8ae test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9e8b0 je 0x11b9e91f */
  if (C.zf) goto L_11b9e91f;
  /* 11b9e8b2 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 11b9e8b8 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11b9e8bb mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 11b9e8c2 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 11b9e8c9 push eax */
  push32((uint32_t)(EAX));
  /* 11b9e8ca lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 11b9e8d0 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9e8d1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 11b9e8d7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9e8da mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 11b9e8e0 call 0x11ba5820 */
  push32(0x11b9e8e5u); f_11ba5820();
  /* 11b9e8e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9e8e8 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 11b9e8ee cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9e8f5 jg 0x11b9e8f9 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b9e8f9;
  /* 11b9e8f7 jmp 0x11b9e91f */
  goto L_11b9e91f;
L_11b9e8f9:;
  /* 11b9e8f9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11b9e8ff push eax */
  push32((uint32_t)(EAX));
  /* 11b9e900 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9e903 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9e904 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 11b9e90a push edx */
  push32((uint32_t)(EDX));
  /* 11b9e90b lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 11b9e911 push eax */
  push32((uint32_t)(EAX));
  /* 11b9e912 call 0x11b9eb40 */
  push32(0x11b9e917u); f_11b9eb40();
  /* 11b9e917 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9e91a jmp 0x11b9e899 */
  goto L_11b9e899;
L_11b9e91f:;
  /* 11b9e91f jmp 0x11b9e93c */
  goto L_11b9e93c;
L_11b9e921:;
  /* 11b9e921 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 11b9e927 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9e928 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9e92b push edx */
  push32((uint32_t)(EDX));
  /* 11b9e92c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b9e92f push eax */
  push32((uint32_t)(EAX));
  /* 11b9e930 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b9e933 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9e934 call 0x11b9eb40 */
  push32(0x11b9e939u); f_11b9eb40();
  /* 11b9e939 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9e93c:;
  /* 11b9e93c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9e93f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11b9e942 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9e944 je 0x11b9e962 */
  if (C.zf) goto L_11b9e962;
  /* 11b9e946 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11b9e94c push eax */
  push32((uint32_t)(EAX));
  /* 11b9e94d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9e950 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9e951 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11b9e957 push edx */
  push32((uint32_t)(EDX));
  /* 11b9e958 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11b9e95a call 0x11b9eb00 */
  push32(0x11b9e95fu); f_11b9eb00();
  /* 11b9e95f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9e962:;
  /* 11b9e962 jmp 0x11b9dd74 */
  goto L_11b9dd74;
L_11b9e967:;
  /* 11b9e967 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 11b9e96d pop edi */
  EDI = (pop32());
  /* 11b9e96e pop esi */
  ESI = (pop32());
  /* 11b9e96f pop ebx */
  EBX = (pop32());
  /* 11b9e970 mov esp, ebp */
  ESP = (EBP);
  /* 11b9e972 pop ebp */
  EBP = (pop32());
  /* 11b9e973 ret  */
  ESPCHK(0x11b9dd50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ea80 @ 0x11b9ea80 (119 bytes, 44 insns) */
void f_11b9ea80(void) {
  FTRACE(0x11b9ea80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9ea80 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9ea81 mov ebp, esp */
  EBP = (ESP);
  /* 11b9ea83 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9ea84 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9ea87 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b9ea8a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9ea8d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9ea90 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11b9ea93 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9ea96 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9ea9a jl 0x11b9eac2 */
  if ((C.sf!=C.of)) goto L_11b9eac2;
  /* 11b9ea9c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9ea9f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b9eaa1 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11b9eaa4 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11b9eaa6 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 11b9eaaa and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b9eab0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b9eab3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9eab6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b9eab8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9eabb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9eabe mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11b9eac0 jmp 0x11b9ead5 */
  goto L_11b9ead5;
L_11b9eac2:;
  /* 11b9eac2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9eac5 push edx */
  push32((uint32_t)(EDX));
  /* 11b9eac6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9eac9 push eax */
  push32((uint32_t)(EAX));
  /* 11b9eaca call 0x11b9dad0 */
  push32(0x11b9eacfu); f_11b9dad0();
  /* 11b9eacf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ead2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b9ead5:;
  /* 11b9ead5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9ead9 jne 0x11b9eae6 */
  if (!C.zf) goto L_11b9eae6;
  /* 11b9eadb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9eade mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11b9eae4 jmp 0x11b9eaf3 */
  goto L_11b9eaf3;
L_11b9eae6:;
  /* 11b9eae6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9eae9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b9eaeb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9eaee mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9eaf1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11b9eaf3:;
  /* 11b9eaf3 mov esp, ebp */
  ESP = (EBP);
  /* 11b9eaf5 pop ebp */
  EBP = (pop32());
  /* 11b9eaf6 ret  */
  ESPCHK(0x11b9ea80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb00 @ 0x11b9eb00 (53 bytes, 23 insns) */
void f_11b9eb00(void) {
  FTRACE(0x11b9eb00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9eb00 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9eb01 mov ebp, esp */
  EBP = (ESP);
L_11b9eb03:;
  /* 11b9eb03 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9eb06 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9eb09 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9eb0c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11b9eb0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9eb11 jle 0x11b9eb33 */
  if ((C.zf||C.sf!=C.of)) goto L_11b9eb33;
  /* 11b9eb13 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9eb16 push edx */
  push32((uint32_t)(EDX));
  /* 11b9eb17 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9eb1a push eax */
  push32((uint32_t)(EAX));
  /* 11b9eb1b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9eb1e push ecx */
  push32((uint32_t)(ECX));
  /* 11b9eb1f call 0x11b9ea80 */
  push32(0x11b9eb24u); f_11b9ea80();
  /* 11b9eb24 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9eb27 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9eb2a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9eb2d jne 0x11b9eb31 */
  if (!C.zf) goto L_11b9eb31;
  /* 11b9eb2f jmp 0x11b9eb33 */
  goto L_11b9eb33;
L_11b9eb31:;
  /* 11b9eb31 jmp 0x11b9eb03 */
  goto L_11b9eb03;
L_11b9eb33:;
  /* 11b9eb33 pop ebp */
  EBP = (pop32());
  /* 11b9eb34 ret  */
  ESPCHK(0x11b9eb00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb40 @ 0x11b9eb40 (74 bytes, 31 insns) */
void f_11b9eb40(void) {
  FTRACE(0x11b9eb40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9eb40 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9eb41 mov ebp, esp */
  EBP = (ESP);
  /* 11b9eb43 push ecx */
  push32((uint32_t)(ECX));
L_11b9eb44:;
  /* 11b9eb44 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9eb47 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9eb4a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9eb4d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11b9eb50 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9eb52 jle 0x11b9eb86 */
  if ((C.zf||C.sf!=C.of)) goto L_11b9eb86;
  /* 11b9eb54 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9eb57 push edx */
  push32((uint32_t)(EDX));
  /* 11b9eb58 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9eb5b push eax */
  push32((uint32_t)(EAX));
  /* 11b9eb5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9eb5f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11b9eb62 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b9eb65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9eb68 push eax */
  push32((uint32_t)(EAX));
  /* 11b9eb69 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9eb6c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9eb6f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11b9eb72 call 0x11b9ea80 */
  push32(0x11b9eb77u); f_11b9ea80();
  /* 11b9eb77 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9eb7a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9eb7d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9eb80 jne 0x11b9eb84 */
  if (!C.zf) goto L_11b9eb84;
  /* 11b9eb82 jmp 0x11b9eb86 */
  goto L_11b9eb86;
L_11b9eb84:;
  /* 11b9eb84 jmp 0x11b9eb44 */
  goto L_11b9eb44;
L_11b9eb86:;
  /* 11b9eb86 mov esp, ebp */
  ESP = (EBP);
  /* 11b9eb88 pop ebp */
  EBP = (pop32());
  /* 11b9eb89 ret  */
  ESPCHK(0x11b9eb40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb90 @ 0x11b9eb90 (26 bytes, 12 insns) */
void f_11b9eb90(void) {
  FTRACE(0x11b9eb90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9eb90 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9eb91 mov ebp, esp */
  EBP = (ESP);
  /* 11b9eb93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9eb96 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b9eb98 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9eb9b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9eb9e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11b9eba0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9eba3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b9eba5 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11b9eba8 pop ebp */
  EBP = (pop32());
  /* 11b9eba9 ret  */
  ESPCHK(0x11b9eb90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ebb0 @ 0x11b9ebb0 (31 bytes, 14 insns) */
void f_11b9ebb0(void) {
  FTRACE(0x11b9ebb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9ebb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9ebb1 mov ebp, esp */
  EBP = (ESP);
  /* 11b9ebb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9ebb6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b9ebb8 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ebbb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9ebbe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11b9ebc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9ebc3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b9ebc5 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9ebc8 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11b9ebca mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b9ebcd pop ebp */
  EBP = (pop32());
  /* 11b9ebce ret  */
  ESPCHK(0x11b9ebb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ebd0 @ 0x11b9ebd0 (27 bytes, 12 insns) */
void f_11b9ebd0(void) {
  FTRACE(0x11b9ebd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9ebd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9ebd1 mov ebp, esp */
  EBP = (ESP);
  /* 11b9ebd3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9ebd6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b9ebd8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ebdb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9ebde mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11b9ebe0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9ebe3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b9ebe5 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 11b9ebe9 pop ebp */
  EBP = (pop32());
  /* 11b9ebea ret  */
  ESPCHK(0x11b9ebd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ebf0 @ 0x11b9ebf0 (804 bytes, 236 insns) */
void f_11b9ebf0(void) {
  FTRACE(0x11b9ebf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9ebf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9ebf1 mov ebp, esp */
  EBP = (ESP);
  /* 11b9ebf3 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9ebf6 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 11b9ebfb push 0x11bc8fa0 */
  push32((uint32_t)(0x11bc8fa0u));
  /* 11b9ec00 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b9ec02 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11b9ec07 call 0x11b9a7d0 */
  push32(0x11b9ec0cu); f_11b9a7d0();
  /* 11b9ec0c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ec0f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 11b9ec12 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9ec16 jne 0x11b9ec22 */
  if (!C.zf) goto L_11b9ec22;
  /* 11b9ec18 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11b9ec1a call 0x11b99240 */
  push32(0x11b9ec1fu); f_11b99240();
  /* 11b9ec1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9ec22:;
  /* 11b9ec22 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b9ec25 mov dword ptr [0x11bcfd40], eax */
  w32((uint32_t)(0x11bcfd40), (EAX));
  /* 11b9ec2a mov dword ptr [0x11bcfe7c], 0x20 */
  w32((uint32_t)(0x11bcfe7c), (0x20u));
  /* 11b9ec34 jmp 0x11b9ec3f */
  goto L_11b9ec3f;
L_11b9ec36:;
  /* 11b9ec36 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b9ec39 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ec3c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_11b9ec3f:;
  /* 11b9ec3f mov edx, dword ptr [0x11bcfd40] */
  EDX = (r32((uint32_t)(0x11bcfd40)));
  /* 11b9ec45 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ec4b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9ec4e jae 0x11b9ec73 */
  if (!C.cf) goto L_11b9ec73;
  /* 11b9ec50 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b9ec53 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11b9ec57 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b9ec5a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11b9ec60 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b9ec63 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11b9ec67 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b9ec6a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11b9ec71 jmp 0x11b9ec36 */
  goto L_11b9ec36;
L_11b9ec73:;
  /* 11b9ec73 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 11b9ec76 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9ec77 call dword ptr [0x11bd03b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03b0))), 0x11b9ec7du);
  /* 11b9ec7d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 11b9ec80 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b9ec86 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9ec88 je 0x11b9ee15 */
  if (C.zf) goto L_11b9ee15;
  /* 11b9ec8e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9ec92 je 0x11b9ee15 */
  if (C.zf) goto L_11b9ee15;
  /* 11b9ec98 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b9ec9b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b9ec9d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 11b9eca0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b9eca3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9eca6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b9eca9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9ecac add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ecaf mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 11b9ecb2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9ecb9 jge 0x11b9ecc3 */
  if ((C.sf==C.of)) goto L_11b9ecc3;
  /* 11b9ecbb mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 11b9ecbe mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 11b9ecc1 jmp 0x11b9ecca */
  goto L_11b9ecca;
L_11b9ecc3:;
  /* 11b9ecc3 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_11b9ecca:;
  /* 11b9ecca mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11b9eccd mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 11b9ecd0 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 11b9ecd7 jmp 0x11b9ece2 */
  goto L_11b9ece2;
L_11b9ecd9:;
  /* 11b9ecd9 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11b9ecdc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ecdf mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_11b9ece2:;
  /* 11b9ece2 mov ecx, dword ptr [0x11bcfe7c] */
  ECX = (r32((uint32_t)(0x11bcfe7c)));
  /* 11b9ece8 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9eceb jge 0x11b9ed82 */
  if ((C.sf==C.of)) goto L_11b9ed82;
  /* 11b9ecf1 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 11b9ecf6 push 0x11bc8fa0 */
  push32((uint32_t)(0x11bc8fa0u));
  /* 11b9ecfb push 2 */
  push32((uint32_t)(0x2u));
  /* 11b9ecfd push 0x480 */
  push32((uint32_t)(0x480u));
  /* 11b9ed02 call 0x11b9a7d0 */
  push32(0x11b9ed07u); f_11b9a7d0();
  /* 11b9ed07 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ed0a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 11b9ed0d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9ed11 jne 0x11b9ed1e */
  if (!C.zf) goto L_11b9ed1e;
  /* 11b9ed13 mov edx, dword ptr [0x11bcfe7c] */
  EDX = (r32((uint32_t)(0x11bcfe7c)));
  /* 11b9ed19 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 11b9ed1c jmp 0x11b9ed82 */
  goto L_11b9ed82;
L_11b9ed1e:;
  /* 11b9ed1e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11b9ed21 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b9ed24 mov dword ptr [eax*4 + 0x11bcfd40], ecx */
  w32((uint32_t)(EAX*4 + 0x11bcfd40), (ECX));
  /* 11b9ed2b mov edx, dword ptr [0x11bcfe7c] */
  EDX = (r32((uint32_t)(0x11bcfe7c)));
  /* 11b9ed31 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ed34 mov dword ptr [0x11bcfe7c], edx */
  w32((uint32_t)(0x11bcfe7c), (EDX));
  /* 11b9ed3a jmp 0x11b9ed45 */
  goto L_11b9ed45;
L_11b9ed3c:;
  /* 11b9ed3c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b9ed3f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ed42 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_11b9ed45:;
  /* 11b9ed45 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 11b9ed48 mov edx, dword ptr [ecx*4 + 0x11bcfd40] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11bcfd40)));
  /* 11b9ed4f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ed55 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9ed58 jae 0x11b9ed7d */
  if (!C.cf) goto L_11b9ed7d;
  /* 11b9ed5a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b9ed5d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 11b9ed61 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b9ed64 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11b9ed6a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b9ed6d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 11b9ed71 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b9ed74 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11b9ed7b jmp 0x11b9ed3c */
  goto L_11b9ed3c;
L_11b9ed7d:;
  /* 11b9ed7d jmp 0x11b9ecd9 */
  goto L_11b9ecd9;
L_11b9ed82:;
  /* 11b9ed82 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11b9ed89 jmp 0x11b9eda6 */
  goto L_11b9eda6;
L_11b9ed8b:;
  /* 11b9ed8b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11b9ed8e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ed91 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 11b9ed94 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9ed97 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ed9a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b9ed9d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 11b9eda0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9eda3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_11b9eda6:;
  /* 11b9eda6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11b9eda9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9edac jge 0x11b9ee15 */
  if ((C.sf==C.of)) goto L_11b9ee15;
  /* 11b9edae mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 11b9edb1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9edb4 je 0x11b9ee10 */
  if (C.zf) goto L_11b9ee10;
  /* 11b9edb6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9edb9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b9edbc and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11b9edbf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b9edc1 je 0x11b9ee10 */
  if (C.zf) goto L_11b9ee10;
  /* 11b9edc3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9edc6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11b9edc9 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 11b9edcc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9edce jne 0x11b9ede0 */
  if (!C.zf) goto L_11b9ede0;
  /* 11b9edd0 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11b9edd3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b9edd5 push edx */
  push32((uint32_t)(EDX));
  /* 11b9edd6 call dword ptr [0x11bd03b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03b4))), 0x11b9eddcu);
  /* 11b9eddc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9edde je 0x11b9ee10 */
  if (C.zf) goto L_11b9ee10;
L_11b9ede0:;
  /* 11b9ede0 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 11b9ede3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11b9ede6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11b9ede9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11b9edec imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b9edef mov edx, dword ptr [eax*4 + 0x11bcfd40] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11bcfd40)));
  /* 11b9edf6 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9edf8 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 11b9edfb mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b9edfe mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11b9ee01 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b9ee03 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11b9ee05 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b9ee08 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9ee0b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b9ee0d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_11b9ee10:;
  /* 11b9ee10 jmp 0x11b9ed8b */
  goto L_11b9ed8b;
L_11b9ee15:;
  /* 11b9ee15 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11b9ee1c jmp 0x11b9ee27 */
  goto L_11b9ee27;
L_11b9ee1e:;
  /* 11b9ee1e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 11b9ee21 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ee24 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_11b9ee27:;
  /* 11b9ee27 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9ee2b jge 0x11b9ef04 */
  if ((C.sf==C.of)) goto L_11b9ef04;
  /* 11b9ee31 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 11b9ee34 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b9ee37 mov edx, dword ptr [0x11bcfd40] */
  EDX = (r32((uint32_t)(0x11bcfd40)));
  /* 11b9ee3d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ee3f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 11b9ee42 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b9ee45 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9ee48 jne 0x11b9eef0 */
  if (!C.zf) goto L_11b9eef0;
  /* 11b9ee4e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b9ee51 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 11b9ee55 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9ee59 jne 0x11b9ee64 */
  if (!C.zf) goto L_11b9ee64;
  /* 11b9ee5b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 11b9ee62 jmp 0x11b9ee74 */
  goto L_11b9ee74;
L_11b9ee64:;
  /* 11b9ee64 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 11b9ee67 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9ee6a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b9ee6c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9ee6e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ee71 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_11b9ee74:;
  /* 11b9ee74 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11b9ee77 push eax */
  push32((uint32_t)(EAX));
  /* 11b9ee78 call dword ptr [0x11bd03fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03fc))), 0x11b9ee7eu);
  /* 11b9ee7e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 11b9ee81 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9ee85 je 0x11b9eedf */
  if (C.zf) goto L_11b9eedf;
  /* 11b9ee87 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11b9ee8a push ecx */
  push32((uint32_t)(ECX));
  /* 11b9ee8b call dword ptr [0x11bd03b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03b4))), 0x11b9ee91u);
  /* 11b9ee91 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 11b9ee94 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9ee98 je 0x11b9eedf */
  if (C.zf) goto L_11b9eedf;
  /* 11b9ee9a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b9ee9d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11b9eea0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11b9eea2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 11b9eea5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b9eeab cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9eeae jne 0x11b9eec0 */
  if (!C.zf) goto L_11b9eec0;
  /* 11b9eeb0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b9eeb3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11b9eeb6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 11b9eeb8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b9eebb mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 11b9eebe jmp 0x11b9eedd */
  goto L_11b9eedd;
L_11b9eec0:;
  /* 11b9eec0 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 11b9eec3 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b9eec9 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9eecc jne 0x11b9eedd */
  if (!C.zf) goto L_11b9eedd;
  /* 11b9eece mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b9eed1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11b9eed4 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 11b9eed7 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b9eeda mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_11b9eedd:;
  /* 11b9eedd jmp 0x11b9eeee */
  goto L_11b9eeee;
L_11b9eedf:;
  /* 11b9eedf mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b9eee2 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11b9eee5 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 11b9eee8 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b9eeeb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_11b9eeee:;
  /* 11b9eeee jmp 0x11b9eeff */
  goto L_11b9eeff;
L_11b9eef0:;
  /* 11b9eef0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b9eef3 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11b9eef6 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 11b9eef9 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b9eefc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_11b9eeff:;
  /* 11b9eeff jmp 0x11b9ee1e */
  goto L_11b9ee1e;
L_11b9ef04:;
  /* 11b9ef04 mov eax, dword ptr [0x11bcfe7c] */
  EAX = (r32((uint32_t)(0x11bcfe7c)));
  /* 11b9ef09 push eax */
  push32((uint32_t)(EAX));
  /* 11b9ef0a call dword ptr [0x11bd03b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03b8))), 0x11b9ef10u);
  /* 11b9ef10 mov esp, ebp */
  ESP = (EBP);
  /* 11b9ef12 pop ebp */
  EBP = (pop32());
  /* 11b9ef13 ret  */
  ESPCHK(0x11b9ebf0u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x11b9ef20 (155 bytes, 45 insns) */
void f_11b9ef20(void) {
  FTRACE(0x11b9ef20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9ef20 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9ef21 mov ebp, esp */
  EBP = (ESP);
  /* 11b9ef23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9ef26 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11b9ef2d jmp 0x11b9ef38 */
  goto L_11b9ef38;
L_11b9ef2f:;
  /* 11b9ef2f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9ef32 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ef35 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11b9ef38:;
  /* 11b9ef38 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9ef3c jge 0x11b9efb7 */
  if ((C.sf==C.of)) goto L_11b9efb7;
  /* 11b9ef3e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9ef41 cmp dword ptr [ecx*4 + 0x11bcfd40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11bcfd40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9ef49 je 0x11b9efb2 */
  if (C.zf) goto L_11b9efb2;
  /* 11b9ef4b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9ef4e mov eax, dword ptr [edx*4 + 0x11bcfd40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11bcfd40)));
  /* 11b9ef55 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b9ef58 jmp 0x11b9ef63 */
  goto L_11b9ef63;
L_11b9ef5a:;
  /* 11b9ef5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9ef5d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ef60 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11b9ef63:;
  /* 11b9ef63 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9ef66 mov eax, dword ptr [edx*4 + 0x11bcfd40] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11bcfd40)));
  /* 11b9ef6d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ef72 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9ef75 jae 0x11b9ef8f */
  if (!C.cf) goto L_11b9ef8f;
  /* 11b9ef77 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9ef7a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9ef7e je 0x11b9ef8d */
  if (C.zf) goto L_11b9ef8d;
  /* 11b9ef80 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9ef83 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9ef86 push edx */
  push32((uint32_t)(EDX));
  /* 11b9ef87 call dword ptr [0x11bd0424] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0424))), 0x11b9ef8du);
L_11b9ef8d:;
  /* 11b9ef8d jmp 0x11b9ef5a */
  goto L_11b9ef5a;
L_11b9ef8f:;
  /* 11b9ef8f push 2 */
  push32((uint32_t)(0x2u));
  /* 11b9ef91 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9ef94 mov ecx, dword ptr [eax*4 + 0x11bcfd40] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11bcfd40)));
  /* 11b9ef9b push ecx */
  push32((uint32_t)(ECX));
  /* 11b9ef9c call 0x11b9b260 */
  push32(0x11b9efa1u); f_11b9b260();
  /* 11b9efa1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9efa4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9efa7 mov dword ptr [edx*4 + 0x11bcfd40], 0 */
  w32((uint32_t)(EDX*4 + 0x11bcfd40), (0x0u));
L_11b9efb2:;
  /* 11b9efb2 jmp 0x11b9ef2f */
  goto L_11b9ef2f;
L_11b9efb7:;
  /* 11b9efb7 mov esp, ebp */
  ESP = (EBP);
  /* 11b9efb9 pop ebp */
  EBP = (pop32());
  /* 11b9efba ret  */
  ESPCHK(0x11b9ef20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000efc0 @ 0x11b9efc0 (329 bytes, 102 insns) */
void f_11b9efc0(void) {
  FTRACE(0x11b9efc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9efc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9efc1 mov ebp, esp */
  EBP = (ESP);
  /* 11b9efc3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9efc6 cmp dword ptr [0x11bcfe90], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bcfe90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9efcd jne 0x11b9efd4 */
  if (!C.zf) goto L_11b9efd4;
  /* 11b9efcf call 0x11ba6210 */
  push32(0x11b9efd4u); f_11ba6210();
L_11b9efd4:;
  /* 11b9efd4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11b9efdb mov eax, dword ptr [0x11bce354] */
  EAX = (r32((uint32_t)(0x11bce354)));
  /* 11b9efe0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b9efe3:;
  /* 11b9efe3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9efe6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11b9efe9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9efeb je 0x11b9f019 */
  if (C.zf) goto L_11b9f019;
  /* 11b9efed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9eff0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b9eff3 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9eff6 je 0x11b9f001 */
  if (C.zf) goto L_11b9f001;
  /* 11b9eff8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9effb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9effe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11b9f001:;
  /* 11b9f001 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9f004 push eax */
  push32((uint32_t)(EAX));
  /* 11b9f005 call 0x11b9fe80 */
  push32(0x11b9f00au); f_11b9fe80();
  /* 11b9f00a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f00d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9f010 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11b9f014 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b9f017 jmp 0x11b9efe3 */
  goto L_11b9efe3;
L_11b9f019:;
  /* 11b9f019 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 11b9f01b push 0x11bc8fac */
  push32((uint32_t)(0x11bc8facu));
  /* 11b9f020 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b9f022 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9f025 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 11b9f02c push ecx */
  push32((uint32_t)(ECX));
  /* 11b9f02d call 0x11b9a7d0 */
  push32(0x11b9f032u); f_11b9a7d0();
  /* 11b9f032 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f035 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b9f038 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9f03b mov dword ptr [0x11bce3fc], edx */
  w32((uint32_t)(0x11bce3fc), (EDX));
  /* 11b9f041 cmp dword ptr [0x11bce3fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce3fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f048 jne 0x11b9f054 */
  if (!C.zf) goto L_11b9f054;
  /* 11b9f04a push 9 */
  push32((uint32_t)(0x9u));
  /* 11b9f04c call 0x11b99240 */
  push32(0x11b9f051u); f_11b99240();
  /* 11b9f051 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9f054:;
  /* 11b9f054 mov eax, dword ptr [0x11bce354] */
  EAX = (r32((uint32_t)(0x11bce354)));
  /* 11b9f059 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b9f05c jmp 0x11b9f067 */
  goto L_11b9f067;
L_11b9f05e:;
  /* 11b9f05e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9f061 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f064 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11b9f067:;
  /* 11b9f067 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9f06a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11b9f06d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9f06f je 0x11b9f0d7 */
  if (C.zf) goto L_11b9f0d7;
  /* 11b9f071 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9f074 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9f075 call 0x11b9fe80 */
  push32(0x11b9f07au); f_11b9fe80();
  /* 11b9f07a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f07d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f080 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11b9f083 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9f086 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11b9f089 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f08c je 0x11b9f0d5 */
  if (C.zf) goto L_11b9f0d5;
  /* 11b9f08e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 11b9f090 push 0x11bc8fac */
  push32((uint32_t)(0x11bc8facu));
  /* 11b9f095 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b9f097 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b9f09a push ecx */
  push32((uint32_t)(ECX));
  /* 11b9f09b call 0x11b9a7d0 */
  push32(0x11b9f0a0u); f_11b9a7d0();
  /* 11b9f0a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f0a3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9f0a6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11b9f0a8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9f0ab cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f0ae jne 0x11b9f0ba */
  if (!C.zf) goto L_11b9f0ba;
  /* 11b9f0b0 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b9f0b2 call 0x11b99240 */
  push32(0x11b9f0b7u); f_11b99240();
  /* 11b9f0b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9f0ba:;
  /* 11b9f0ba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9f0bd push ecx */
  push32((uint32_t)(ECX));
  /* 11b9f0be mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9f0c1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b9f0c3 push eax */
  push32((uint32_t)(EAX));
  /* 11b9f0c4 call 0x11ba0000 */
  push32(0x11b9f0c9u); f_11ba0000();
  /* 11b9f0c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f0cc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9f0cf add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f0d2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11b9f0d5:;
  /* 11b9f0d5 jmp 0x11b9f05e */
  goto L_11b9f05e;
L_11b9f0d7:;
  /* 11b9f0d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b9f0d9 mov edx, dword ptr [0x11bce354] */
  EDX = (r32((uint32_t)(0x11bce354)));
  /* 11b9f0df push edx */
  push32((uint32_t)(EDX));
  /* 11b9f0e0 call 0x11b9b260 */
  push32(0x11b9f0e5u); f_11b9b260();
  /* 11b9f0e5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f0e8 mov dword ptr [0x11bce354], 0 */
  w32((uint32_t)(0x11bce354), (0x0u));
  /* 11b9f0f2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9f0f5 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11b9f0fb mov dword ptr [0x11bcfe80], 1 */
  w32((uint32_t)(0x11bcfe80), (0x1u));
  /* 11b9f105 mov esp, ebp */
  ESP = (EBP);
  /* 11b9f107 pop ebp */
  EBP = (pop32());
  /* 11b9f108 ret  */
  ESPCHK(0x11b9efc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f110 @ 0x11b9f110 (216 bytes, 69 insns) */
void f_11b9f110(void) {
  FTRACE(0x11b9f110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9f110 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9f111 mov ebp, esp */
  EBP = (ESP);
  /* 11b9f113 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9f116 cmp dword ptr [0x11bcfe90], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bcfe90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f11d jne 0x11b9f124 */
  if (!C.zf) goto L_11b9f124;
  /* 11b9f11f call 0x11ba6210 */
  push32(0x11b9f124u); f_11ba6210();
L_11b9f124:;
  /* 11b9f124 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11b9f129 push 0x11bce424 */
  push32((uint32_t)(0x11bce424u));
  /* 11b9f12e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9f130 call dword ptr [0x11bd0418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0418))), 0x11b9f136u);
  /* 11b9f136 mov dword ptr [0x11bce40c], 0x11bce424 */
  w32((uint32_t)(0x11bce40c), (0x11bce424u));
  /* 11b9f140 mov eax, dword ptr [0x11bcfeb4] */
  EAX = (r32((uint32_t)(0x11bcfeb4)));
  /* 11b9f145 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b9f148 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b9f14a jne 0x11b9f157 */
  if (!C.zf) goto L_11b9f157;
  /* 11b9f14c mov edx, dword ptr [0x11bce40c] */
  EDX = (r32((uint32_t)(0x11bce40c)));
  /* 11b9f152 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11b9f155 jmp 0x11b9f15f */
  goto L_11b9f15f;
L_11b9f157:;
  /* 11b9f157 mov eax, dword ptr [0x11bcfeb4] */
  EAX = (r32((uint32_t)(0x11bcfeb4)));
  /* 11b9f15c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11b9f15f:;
  /* 11b9f15f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b9f162 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11b9f165 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 11b9f168 push edx */
  push32((uint32_t)(EDX));
  /* 11b9f169 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11b9f16c push eax */
  push32((uint32_t)(EAX));
  /* 11b9f16d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9f16f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9f171 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b9f174 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9f175 call 0x11b9f1f0 */
  push32(0x11b9f17au); f_11b9f1f0();
  /* 11b9f17a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f17d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11b9f182 push 0x11bc8fb8 */
  push32((uint32_t)(0x11bc8fb8u));
  /* 11b9f187 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b9f189 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9f18c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9f18f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 11b9f192 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9f193 call 0x11b9a7d0 */
  push32(0x11b9f198u); f_11b9a7d0();
  /* 11b9f198 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f19b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b9f19e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f1a2 jne 0x11b9f1ae */
  if (!C.zf) goto L_11b9f1ae;
  /* 11b9f1a4 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b9f1a6 call 0x11b99240 */
  push32(0x11b9f1abu); f_11b99240();
  /* 11b9f1ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9f1ae:;
  /* 11b9f1ae lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 11b9f1b1 push edx */
  push32((uint32_t)(EDX));
  /* 11b9f1b2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11b9f1b5 push eax */
  push32((uint32_t)(EAX));
  /* 11b9f1b6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9f1b9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9f1bc lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 11b9f1bf push eax */
  push32((uint32_t)(EAX));
  /* 11b9f1c0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9f1c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9f1c4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b9f1c7 push edx */
  push32((uint32_t)(EDX));
  /* 11b9f1c8 call 0x11b9f1f0 */
  push32(0x11b9f1cdu); f_11b9f1f0();
  /* 11b9f1cd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f1d0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9f1d3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9f1d6 mov dword ptr [0x11bce3f0], eax */
  w32((uint32_t)(0x11bce3f0), (EAX));
  /* 11b9f1db mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9f1de mov dword ptr [0x11bce3f4], ecx */
  w32((uint32_t)(0x11bce3f4), (ECX));
  /* 11b9f1e4 mov esp, ebp */
  ESP = (EBP);
  /* 11b9f1e6 pop ebp */
  EBP = (pop32());
  /* 11b9f1e7 ret  */
  ESPCHK(0x11b9f110u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f1f0 @ 0x11b9f1f0 (1060 bytes, 360 insns) */
void f_11b9f1f0(void) {
  FTRACE(0x11b9f1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9f1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9f1f1 mov ebp, esp */
  EBP = (ESP);
  /* 11b9f1f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9f1f6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9f1f9 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11b9f1ff mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9f202 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 11b9f208 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9f20b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b9f20e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f212 je 0x11b9f225 */
  if (C.zf) goto L_11b9f225;
  /* 11b9f214 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9f217 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9f21a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11b9f21c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9f21f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f222 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_11b9f225:;
  /* 11b9f225 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9f228 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b9f22b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f22e jne 0x11b9f2fd */
  if (!C.zf) goto L_11b9f2fd;
L_11b9f234:;
  /* 11b9f234 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9f237 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f23a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b9f23d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9f240 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b9f243 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f246 je 0x11b9f2c2 */
  if (C.zf) goto L_11b9f2c2;
  /* 11b9f248 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9f24b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11b9f24e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9f250 je 0x11b9f2c2 */
  if (C.zf) goto L_11b9f2c2;
  /* 11b9f252 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9f255 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b9f257 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b9f259 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9f25b mov al, byte ptr [edx + 0x11bce8a1] */
  AL = (r8((uint32_t)(EDX + 0x11bce8a1)));
  /* 11b9f261 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11b9f264 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9f266 je 0x11b9f297 */
  if (C.zf) goto L_11b9f297;
  /* 11b9f268 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9f26b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b9f26d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f270 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9f273 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11b9f275 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f279 je 0x11b9f297 */
  if (C.zf) goto L_11b9f297;
  /* 11b9f27b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9f27e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9f281 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11b9f283 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11b9f285 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9f288 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f28b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11b9f28e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9f291 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f294 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11b9f297:;
  /* 11b9f297 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9f29a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b9f29c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f29f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9f2a2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11b9f2a4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f2a8 je 0x11b9f2bd */
  if (C.zf) goto L_11b9f2bd;
  /* 11b9f2aa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9f2ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9f2b0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b9f2b2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11b9f2b4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9f2b7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f2ba mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11b9f2bd:;
  /* 11b9f2bd jmp 0x11b9f234 */
  goto L_11b9f234;
L_11b9f2c2:;
  /* 11b9f2c2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9f2c5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b9f2c7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f2ca mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9f2cd mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11b9f2cf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f2d3 je 0x11b9f2e4 */
  if (C.zf) goto L_11b9f2e4;
  /* 11b9f2d5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9f2d8 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11b9f2db mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9f2de add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f2e1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_11b9f2e4:;
  /* 11b9f2e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9f2e7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b9f2ea cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f2ed jne 0x11b9f2f8 */
  if (!C.zf) goto L_11b9f2f8;
  /* 11b9f2ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9f2f2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f2f5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11b9f2f8:;
  /* 11b9f2f8 jmp 0x11b9f3cc */
  goto L_11b9f3cc;
L_11b9f2fd:;
  /* 11b9f2fd mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9f300 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b9f302 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f305 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9f308 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11b9f30a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f30e je 0x11b9f323 */
  if (C.zf) goto L_11b9f323;
  /* 11b9f310 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9f313 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9f316 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b9f318 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11b9f31a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9f31d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f320 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11b9f323:;
  /* 11b9f323 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9f326 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b9f328 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 11b9f32b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9f32e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f331 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b9f334 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9f337 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b9f33d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b9f33f mov dl, byte ptr [ecx + 0x11bce8a1] */
  DL = (r8((uint32_t)(ECX + 0x11bce8a1)));
  /* 11b9f345 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11b9f348 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9f34a je 0x11b9f37b */
  if (C.zf) goto L_11b9f37b;
  /* 11b9f34c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9f34f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b9f351 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f354 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9f357 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11b9f359 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f35d je 0x11b9f372 */
  if (C.zf) goto L_11b9f372;
  /* 11b9f35f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9f362 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9f365 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b9f367 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11b9f369 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9f36c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f36f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11b9f372:;
  /* 11b9f372 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9f375 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f378 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11b9f37b:;
  /* 11b9f37b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9f37e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b9f384 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f387 je 0x11b9f3a7 */
  if (C.zf) goto L_11b9f3a7;
  /* 11b9f389 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9f38c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b9f391 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9f393 je 0x11b9f3a7 */
  if (C.zf) goto L_11b9f3a7;
  /* 11b9f395 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9f398 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b9f39e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f3a1 jne 0x11b9f2fd */
  if (!C.zf) goto L_11b9f2fd;
L_11b9f3a7:;
  /* 11b9f3a7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9f3aa and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b9f3b0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9f3b2 jne 0x11b9f3bf */
  if (!C.zf) goto L_11b9f3bf;
  /* 11b9f3b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9f3b7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9f3ba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b9f3bd jmp 0x11b9f3cc */
  goto L_11b9f3cc;
L_11b9f3bf:;
  /* 11b9f3bf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f3c3 je 0x11b9f3cc */
  if (C.zf) goto L_11b9f3cc;
  /* 11b9f3c5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9f3c8 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_11b9f3cc:;
  /* 11b9f3cc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11b9f3d3:;
  /* 11b9f3d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9f3d6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11b9f3d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9f3db je 0x11b9f3fe */
  if (C.zf) goto L_11b9f3fe;
L_11b9f3dd:;
  /* 11b9f3dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9f3e0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11b9f3e3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f3e6 je 0x11b9f3f3 */
  if (C.zf) goto L_11b9f3f3;
  /* 11b9f3e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9f3eb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b9f3ee cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f3f1 jne 0x11b9f3fe */
  if (!C.zf) goto L_11b9f3fe;
L_11b9f3f3:;
  /* 11b9f3f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9f3f6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f3f9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b9f3fc jmp 0x11b9f3dd */
  goto L_11b9f3dd;
L_11b9f3fe:;
  /* 11b9f3fe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9f401 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b9f404 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b9f406 jne 0x11b9f40d */
  if (!C.zf) goto L_11b9f40d;
  /* 11b9f408 jmp 0x11b9f5eb */
  goto L_11b9f5eb;
L_11b9f40d:;
  /* 11b9f40d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f411 je 0x11b9f424 */
  if (C.zf) goto L_11b9f424;
  /* 11b9f413 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9f416 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9f419 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11b9f41b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9f41e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f421 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11b9f424:;
  /* 11b9f424 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9f427 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b9f429 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f42c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9f42f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11b9f431:;
  /* 11b9f431 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11b9f438 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11b9f43f:;
  /* 11b9f43f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9f442 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11b9f445 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f448 jne 0x11b9f45e */
  if (!C.zf) goto L_11b9f45e;
  /* 11b9f44a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9f44d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f450 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b9f453 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b9f456 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f459 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11b9f45c jmp 0x11b9f43f */
  goto L_11b9f43f;
L_11b9f45e:;
  /* 11b9f45e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9f461 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b9f464 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f467 jne 0x11b9f4ba */
  if (!C.zf) goto L_11b9f4ba;
  /* 11b9f469 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b9f46c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b9f46e mov ecx, 2 */
  ECX = (0x2u);
  /* 11b9f473 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b9f475 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9f477 jne 0x11b9f4b2 */
  if (!C.zf) goto L_11b9f4b2;
  /* 11b9f479 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f47d je 0x11b9f49f */
  if (C.zf) goto L_11b9f49f;
  /* 11b9f47f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9f482 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11b9f486 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f489 jne 0x11b9f496 */
  if (!C.zf) goto L_11b9f496;
  /* 11b9f48b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9f48e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f491 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b9f494 jmp 0x11b9f49d */
  goto L_11b9f49d;
L_11b9f496:;
  /* 11b9f496 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11b9f49d:;
  /* 11b9f49d jmp 0x11b9f4a6 */
  goto L_11b9f4a6;
L_11b9f49f:;
  /* 11b9f49f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11b9f4a6:;
  /* 11b9f4a6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b9f4a8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f4ac sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11b9f4af mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11b9f4b2:;
  /* 11b9f4b2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b9f4b5 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11b9f4b7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11b9f4ba:;
  /* 11b9f4ba mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b9f4bd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b9f4c0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9f4c3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11b9f4c6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b9f4c8 je 0x11b9f4ee */
  if (C.zf) goto L_11b9f4ee;
  /* 11b9f4ca cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f4ce je 0x11b9f4df */
  if (C.zf) goto L_11b9f4df;
  /* 11b9f4d0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9f4d3 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 11b9f4d6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9f4d9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f4dc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_11b9f4df:;
  /* 11b9f4df mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9f4e2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b9f4e4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f4e7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9f4ea mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11b9f4ec jmp 0x11b9f4ba */
  goto L_11b9f4ba;
L_11b9f4ee:;
  /* 11b9f4ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9f4f1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11b9f4f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9f4f6 je 0x11b9f514 */
  if (C.zf) goto L_11b9f514;
  /* 11b9f4f8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f4fc jne 0x11b9f519 */
  if (!C.zf) goto L_11b9f519;
  /* 11b9f4fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9f501 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11b9f504 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f507 je 0x11b9f514 */
  if (C.zf) goto L_11b9f514;
  /* 11b9f509 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9f50c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b9f50f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f512 jne 0x11b9f519 */
  if (!C.zf) goto L_11b9f519;
L_11b9f514:;
  /* 11b9f514 jmp 0x11b9f5c4 */
  goto L_11b9f5c4;
L_11b9f519:;
  /* 11b9f519 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f51d je 0x11b9f5b6 */
  if (C.zf) goto L_11b9f5b6;
  /* 11b9f523 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f527 je 0x11b9f57d */
  if (C.zf) goto L_11b9f57d;
  /* 11b9f529 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9f52c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9f52e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11b9f530 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b9f532 mov cl, byte ptr [eax + 0x11bce8a1] */
  CL = (r8((uint32_t)(EAX + 0x11bce8a1)));
  /* 11b9f538 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11b9f53b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b9f53d je 0x11b9f568 */
  if (C.zf) goto L_11b9f568;
  /* 11b9f53f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9f542 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9f545 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11b9f547 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11b9f549 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9f54c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f54f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 11b9f552 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9f555 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f558 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b9f55b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9f55e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b9f560 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f563 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9f566 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11b9f568:;
  /* 11b9f568 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9f56b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9f56e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11b9f570 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11b9f572 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9f575 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f578 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11b9f57b jmp 0x11b9f5a9 */
  goto L_11b9f5a9;
L_11b9f57d:;
  /* 11b9f57d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9f580 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9f582 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11b9f584 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b9f586 mov cl, byte ptr [eax + 0x11bce8a1] */
  CL = (r8((uint32_t)(EAX + 0x11bce8a1)));
  /* 11b9f58c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11b9f58f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b9f591 je 0x11b9f5a9 */
  if (C.zf) goto L_11b9f5a9;
  /* 11b9f593 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9f596 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f599 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b9f59c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9f59f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b9f5a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f5a4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9f5a7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11b9f5a9:;
  /* 11b9f5a9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9f5ac mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b9f5ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f5b1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9f5b4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11b9f5b6:;
  /* 11b9f5b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9f5b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f5bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b9f5bf jmp 0x11b9f431 */
  goto L_11b9f431;
L_11b9f5c4:;
  /* 11b9f5c4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f5c8 je 0x11b9f5d9 */
  if (C.zf) goto L_11b9f5d9;
  /* 11b9f5ca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9f5cd mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11b9f5d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9f5d3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f5d6 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_11b9f5d9:;
  /* 11b9f5d9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9f5dc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b9f5de add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f5e1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b9f5e4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11b9f5e6 jmp 0x11b9f3d3 */
  goto L_11b9f3d3;
L_11b9f5eb:;
  /* 11b9f5eb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f5ef je 0x11b9f603 */
  if (C.zf) goto L_11b9f603;
  /* 11b9f5f1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9f5f4 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11b9f5fa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9f5fd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f600 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11b9f603:;
  /* 11b9f603 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9f606 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b9f608 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f60b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9f60e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11b9f610 mov esp, ebp */
  ESP = (EBP);
  /* 11b9f612 pop ebp */
  EBP = (pop32());
  /* 11b9f613 ret  */
  ESPCHK(0x11b9f1f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f620 @ 0x11b9f620 (537 bytes, 173 insns) */
void f_11b9f620(void) {
  FTRACE(0x11b9f620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9f620 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9f621 mov ebp, esp */
  EBP = (ESP);
  /* 11b9f623 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9f626 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11b9f62d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11b9f634 cmp dword ptr [0x11bce528], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce528))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f63b jne 0x11b9f67a */
  if (!C.zf) goto L_11b9f67a;
  /* 11b9f63d call dword ptr [0x11bd039c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd039c))), 0x11b9f643u);
  /* 11b9f643 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11b9f646 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f64a je 0x11b9f658 */
  if (C.zf) goto L_11b9f658;
  /* 11b9f64c mov dword ptr [0x11bce528], 1 */
  w32((uint32_t)(0x11bce528), (0x1u));
  /* 11b9f656 jmp 0x11b9f67a */
  goto L_11b9f67a;
L_11b9f658:;
  /* 11b9f658 call dword ptr [0x11bd03a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03a0))), 0x11b9f65eu);
  /* 11b9f65e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11b9f661 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f665 je 0x11b9f673 */
  if (C.zf) goto L_11b9f673;
  /* 11b9f667 mov dword ptr [0x11bce528], 2 */
  w32((uint32_t)(0x11bce528), (0x2u));
  /* 11b9f671 jmp 0x11b9f67a */
  goto L_11b9f67a;
L_11b9f673:;
  /* 11b9f673 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9f675 jmp 0x11b9f835 */
  goto L_11b9f835;
L_11b9f67a:;
  /* 11b9f67a cmp dword ptr [0x11bce528], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11bce528))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f681 jne 0x11b9f77e */
  if (!C.zf) goto L_11b9f77e;
  /* 11b9f687 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f68b jne 0x11b9f6a3 */
  if (!C.zf) goto L_11b9f6a3;
  /* 11b9f68d call dword ptr [0x11bd039c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd039c))), 0x11b9f693u);
  /* 11b9f693 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11b9f696 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f69a jne 0x11b9f6a3 */
  if (!C.zf) goto L_11b9f6a3;
  /* 11b9f69c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9f69e jmp 0x11b9f835 */
  goto L_11b9f835;
L_11b9f6a3:;
  /* 11b9f6a3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b9f6a6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11b9f6a9:;
  /* 11b9f6a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9f6ac xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b9f6ae mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11b9f6b1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9f6b3 je 0x11b9f6d5 */
  if (C.zf) goto L_11b9f6d5;
  /* 11b9f6b5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9f6b8 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f6bb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b9f6be mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9f6c1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b9f6c3 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11b9f6c6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9f6c8 jne 0x11b9f6d3 */
  if (!C.zf) goto L_11b9f6d3;
  /* 11b9f6ca mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9f6cd add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f6d0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11b9f6d3:;
  /* 11b9f6d3 jmp 0x11b9f6a9 */
  goto L_11b9f6a9;
L_11b9f6d5:;
  /* 11b9f6d5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9f6d8 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9f6db sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11b9f6dd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f6e0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b9f6e3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9f6e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9f6e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9f6e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9f6eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9f6ee push edx */
  push32((uint32_t)(EDX));
  /* 11b9f6ef mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b9f6f2 push eax */
  push32((uint32_t)(EAX));
  /* 11b9f6f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9f6f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9f6f7 call dword ptr [0x11bd03a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03a4))), 0x11b9f6fdu);
  /* 11b9f6fd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11b9f700 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f704 je 0x11b9f724 */
  if (C.zf) goto L_11b9f724;
  /* 11b9f706 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11b9f708 push 0x11bc8fc4 */
  push32((uint32_t)(0x11bc8fc4u));
  /* 11b9f70d push 2 */
  push32((uint32_t)(0x2u));
  /* 11b9f70f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b9f712 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9f713 call 0x11b9a7d0 */
  push32(0x11b9f718u); f_11b9a7d0();
  /* 11b9f718 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f71b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11b9f71e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f722 jne 0x11b9f735 */
  if (!C.zf) goto L_11b9f735;
L_11b9f724:;
  /* 11b9f724 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b9f727 push edx */
  push32((uint32_t)(EDX));
  /* 11b9f728 call dword ptr [0x11bd03a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03a8))), 0x11b9f72eu);
  /* 11b9f72e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9f730 jmp 0x11b9f835 */
  goto L_11b9f835;
L_11b9f735:;
  /* 11b9f735 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9f737 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9f739 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b9f73c push eax */
  push32((uint32_t)(EAX));
  /* 11b9f73d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b9f740 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9f741 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9f744 push edx */
  push32((uint32_t)(EDX));
  /* 11b9f745 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b9f748 push eax */
  push32((uint32_t)(EAX));
  /* 11b9f749 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9f74b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9f74d call dword ptr [0x11bd03a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03a4))), 0x11b9f753u);
  /* 11b9f753 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9f755 jne 0x11b9f76c */
  if (!C.zf) goto L_11b9f76c;
  /* 11b9f757 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b9f759 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b9f75c push ecx */
  push32((uint32_t)(ECX));
  /* 11b9f75d call 0x11b9b260 */
  push32(0x11b9f762u); f_11b9b260();
  /* 11b9f762 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f765 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_11b9f76c:;
  /* 11b9f76c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b9f76f push edx */
  push32((uint32_t)(EDX));
  /* 11b9f770 call dword ptr [0x11bd03a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03a8))), 0x11b9f776u);
  /* 11b9f776 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b9f779 jmp 0x11b9f835 */
  goto L_11b9f835;
L_11b9f77e:;
  /* 11b9f77e cmp dword ptr [0x11bce528], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11bce528))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f785 jne 0x11b9f833 */
  if (!C.zf) goto L_11b9f833;
  /* 11b9f78b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f78f jne 0x11b9f7a7 */
  if (!C.zf) goto L_11b9f7a7;
  /* 11b9f791 call dword ptr [0x11bd03a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03a0))), 0x11b9f797u);
  /* 11b9f797 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11b9f79a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f79e jne 0x11b9f7a7 */
  if (!C.zf) goto L_11b9f7a7;
  /* 11b9f7a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9f7a2 jmp 0x11b9f835 */
  goto L_11b9f835;
L_11b9f7a7:;
  /* 11b9f7a7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b9f7aa mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11b9f7ad:;
  /* 11b9f7ad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9f7b0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11b9f7b3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9f7b5 je 0x11b9f7d5 */
  if (C.zf) goto L_11b9f7d5;
  /* 11b9f7b7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9f7ba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f7bd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b9f7c0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9f7c3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11b9f7c6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b9f7c8 jne 0x11b9f7d3 */
  if (!C.zf) goto L_11b9f7d3;
  /* 11b9f7ca mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9f7cd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f7d0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11b9f7d3:;
  /* 11b9f7d3 jmp 0x11b9f7ad */
  goto L_11b9f7ad;
L_11b9f7d5:;
  /* 11b9f7d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9f7d8 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9f7db add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f7de mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11b9f7e1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 11b9f7e6 push 0x11bc8fc4 */
  push32((uint32_t)(0x11bc8fc4u));
  /* 11b9f7eb push 2 */
  push32((uint32_t)(0x2u));
  /* 11b9f7ed mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b9f7f0 push edx */
  push32((uint32_t)(EDX));
  /* 11b9f7f1 call 0x11b9a7d0 */
  push32(0x11b9f7f6u); f_11b9a7d0();
  /* 11b9f7f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f7f9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b9f7fc cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f800 jne 0x11b9f810 */
  if (!C.zf) goto L_11b9f810;
  /* 11b9f802 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b9f805 push eax */
  push32((uint32_t)(EAX));
  /* 11b9f806 call dword ptr [0x11bd03ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03ac))), 0x11b9f80cu);
  /* 11b9f80c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9f80e jmp 0x11b9f835 */
  goto L_11b9f835;
L_11b9f810:;
  /* 11b9f810 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b9f813 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9f814 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b9f817 push edx */
  push32((uint32_t)(EDX));
  /* 11b9f818 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9f81b push eax */
  push32((uint32_t)(EAX));
  /* 11b9f81c call 0x11ba6240 */
  push32(0x11b9f821u); f_11ba6240();
  /* 11b9f821 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f824 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b9f827 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9f828 call dword ptr [0x11bd03ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03ac))), 0x11b9f82eu);
  /* 11b9f82e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9f831 jmp 0x11b9f835 */
  goto L_11b9f835;
L_11b9f833:;
  /* 11b9f833 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b9f835:;
  /* 11b9f835 mov esp, ebp */
  ESP = (EBP);
  /* 11b9f837 pop ebp */
  EBP = (pop32());
  /* 11b9f838 ret  */
  ESPCHK(0x11b9f620u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f840 @ 0x11b9f840 (77 bytes, 25 insns) */
void f_11b9f840(void) {
  FTRACE(0x11b9f840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9f840 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9f841 mov ebp, esp */
  EBP = (ESP);
  /* 11b9f843 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9f845 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11b9f84a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9f84c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f850 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11b9f853 push eax */
  push32((uint32_t)(EAX));
  /* 11b9f854 call dword ptr [0x11bd0394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0394))), 0x11b9f85au);
  /* 11b9f85a mov dword ptr [0x11bcfd28], eax */
  w32((uint32_t)(0x11bcfd28), (EAX));
  /* 11b9f85f cmp dword ptr [0x11bcfd28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bcfd28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f866 jne 0x11b9f86c */
  if (!C.zf) goto L_11b9f86c;
  /* 11b9f868 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9f86a jmp 0x11b9f88b */
  goto L_11b9f88b;
L_11b9f86c:;
  /* 11b9f86c call 0x11ba25f0 */
  push32(0x11b9f871u); f_11ba25f0();
  /* 11b9f871 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9f873 jne 0x11b9f886 */
  if (!C.zf) goto L_11b9f886;
  /* 11b9f875 mov ecx, dword ptr [0x11bcfd28] */
  ECX = (r32((uint32_t)(0x11bcfd28)));
  /* 11b9f87b push ecx */
  push32((uint32_t)(ECX));
  /* 11b9f87c call dword ptr [0x11bd0398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0398))), 0x11b9f882u);
  /* 11b9f882 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b9f884 jmp 0x11b9f88b */
  goto L_11b9f88b;
L_11b9f886:;
  /* 11b9f886 mov eax, 1 */
  EAX = (0x1u);
L_11b9f88b:;
  /* 11b9f88b pop ebp */
  EBP = (pop32());
  /* 11b9f88c ret  */
  ESPCHK(0x11b9f840u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f890 @ 0x11b9f890 (156 bytes, 48 insns) */
void f_11b9f890(void) {
  FTRACE(0x11b9f890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9f890 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9f891 mov ebp, esp */
  EBP = (ESP);
  /* 11b9f893 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9f896 mov eax, dword ptr [0x11bcfd24] */
  EAX = (r32((uint32_t)(0x11bcfd24)));
  /* 11b9f89b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b9f89e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b9f8a5 jmp 0x11b9f8b0 */
  goto L_11b9f8b0;
L_11b9f8a7:;
  /* 11b9f8a7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9f8aa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f8ad mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11b9f8b0:;
  /* 11b9f8b0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9f8b3 cmp edx, dword ptr [0x11bcfd20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11bcfd20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f8b9 jge 0x11b9f906 */
  if ((C.sf==C.of)) goto L_11b9f906;
  /* 11b9f8bb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11b9f8c0 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11b9f8c5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9f8c8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11b9f8cb push ecx */
  push32((uint32_t)(ECX));
  /* 11b9f8cc call dword ptr [0x11bd038c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd038c))), 0x11b9f8d2u);
  /* 11b9f8d2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11b9f8d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9f8d9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9f8dc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11b9f8df push eax */
  push32((uint32_t)(EAX));
  /* 11b9f8e0 call dword ptr [0x11bd038c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd038c))), 0x11b9f8e6u);
  /* 11b9f8e6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9f8e9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11b9f8ec push edx */
  push32((uint32_t)(EDX));
  /* 11b9f8ed push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9f8ef mov eax, dword ptr [0x11bcfd28] */
  EAX = (r32((uint32_t)(0x11bcfd28)));
  /* 11b9f8f4 push eax */
  push32((uint32_t)(EAX));
  /* 11b9f8f5 call dword ptr [0x11bd0390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0390))), 0x11b9f8fbu);
  /* 11b9f8fb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9f8fe add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f901 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b9f904 jmp 0x11b9f8a7 */
  goto L_11b9f8a7;
L_11b9f906:;
  /* 11b9f906 mov edx, dword ptr [0x11bcfd24] */
  EDX = (r32((uint32_t)(0x11bcfd24)));
  /* 11b9f90c push edx */
  push32((uint32_t)(EDX));
  /* 11b9f90d push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9f90f mov eax, dword ptr [0x11bcfd28] */
  EAX = (r32((uint32_t)(0x11bcfd28)));
  /* 11b9f914 push eax */
  push32((uint32_t)(EAX));
  /* 11b9f915 call dword ptr [0x11bd0390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0390))), 0x11b9f91bu);
  /* 11b9f91b mov ecx, dword ptr [0x11bcfd28] */
  ECX = (r32((uint32_t)(0x11bcfd28)));
  /* 11b9f921 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9f922 call dword ptr [0x11bd0398] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0398))), 0x11b9f928u);
  /* 11b9f928 mov esp, ebp */
  ESP = (EBP);
  /* 11b9f92a pop ebp */
  EBP = (pop32());
  /* 11b9f92b ret  */
  ESPCHK(0x11b9f890u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x11b9f930 (73 bytes, 19 insns) */
void f_11b9f930(void) {
  FTRACE(0x11b9f930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9f930 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9f931 mov ebp, esp */
  EBP = (ESP);
  /* 11b9f933 cmp dword ptr [0x11bce35c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11bce35c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f93a je 0x11b9f94e */
  if (C.zf) goto L_11b9f94e;
  /* 11b9f93c cmp dword ptr [0x11bce35c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce35c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f943 jne 0x11b9f977 */
  if (!C.zf) goto L_11b9f977;
  /* 11b9f945 cmp dword ptr [0x11bce360], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11bce360))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f94c jne 0x11b9f977 */
  if (!C.zf) goto L_11b9f977;
L_11b9f94e:;
  /* 11b9f94e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11b9f953 call 0x11b9f980 */
  push32(0x11b9f958u); f_11b9f980();
  /* 11b9f958 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f95b cmp dword ptr [0x11bce52c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce52c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f962 je 0x11b9f96a */
  if (C.zf) goto L_11b9f96a;
  /* 11b9f964 call dword ptr [0x11bce52c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bce52c))), 0x11b9f96au);
L_11b9f96a:;
  /* 11b9f96a push 0xff */
  push32((uint32_t)(0xffu));
  /* 11b9f96f call 0x11b9f980 */
  push32(0x11b9f974u); f_11b9f980();
  /* 11b9f974 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9f977:;
  /* 11b9f977 pop ebp */
  EBP = (pop32());
  /* 11b9f978 ret  */
  ESPCHK(0x11b9f930u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f980 @ 0x11b9f980 (447 bytes, 131 insns) */
void f_11b9f980(void) {
  FTRACE(0x11b9f980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9f980 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9f981 mov ebp, esp */
  EBP = (ESP);
  /* 11b9f983 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9f989 push ebx */
  push32((uint32_t)(EBX));
  /* 11b9f98a push esi */
  push32((uint32_t)(ESI));
  /* 11b9f98b push edi */
  push32((uint32_t)(EDI));
  /* 11b9f98c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11b9f993 jmp 0x11b9f99e */
  goto L_11b9f99e;
L_11b9f995:;
  /* 11b9f995 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9f998 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f99b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11b9f99e:;
  /* 11b9f99e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f9a2 jae 0x11b9f9b7 */
  if (!C.cf) goto L_11b9f9b7;
  /* 11b9f9a4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9f9a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9f9aa cmp edx, dword ptr [ecx*8 + 0x11bcbf68] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x11bcbf68))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f9b1 jne 0x11b9f9b5 */
  if (!C.zf) goto L_11b9f9b5;
  /* 11b9f9b3 jmp 0x11b9f9b7 */
  goto L_11b9f9b7;
L_11b9f9b5:;
  /* 11b9f9b5 jmp 0x11b9f995 */
  goto L_11b9f995;
L_11b9f9b7:;
  /* 11b9f9b7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9f9ba mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9f9bd cmp ecx, dword ptr [eax*8 + 0x11bcbf68] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11bcbf68))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f9c4 jne 0x11b9fb38 */
  if (!C.zf) goto L_11b9fb38;
  /* 11b9f9ca cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f9d1 je 0x11b9f9f4 */
  if (C.zf) goto L_11b9f9f4;
  /* 11b9f9d3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9f9d6 mov eax, dword ptr [edx*8 + 0x11bcbf6c] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11bcbf6c)));
  /* 11b9f9dd push eax */
  push32((uint32_t)(EAX));
  /* 11b9f9de push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9f9e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9f9e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9f9e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b9f9e6 call 0x11b99390 */
  push32(0x11b9f9ebu); f_11b99390();
  /* 11b9f9eb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9f9ee cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f9f1 jne 0x11b9f9f4 */
  if (!C.zf) goto L_11b9f9f4;
  /* 11b9f9f3 int3  */
  x86_unimpl("int3 @ 0x11b9f9f3");
L_11b9f9f4:;
  /* 11b9f9f4 cmp dword ptr [0x11bce35c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11bce35c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9f9fb je 0x11b9fa0f */
  if (C.zf) goto L_11b9fa0f;
  /* 11b9f9fd cmp dword ptr [0x11bce35c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11bce35c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9fa04 jne 0x11b9fa48 */
  if (!C.zf) goto L_11b9fa48;
  /* 11b9fa06 cmp dword ptr [0x11bce360], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11bce360))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9fa0d jne 0x11b9fa48 */
  if (!C.zf) goto L_11b9fa48;
L_11b9fa0f:;
  /* 11b9fa0f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9fa11 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11b9fa14 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9fa15 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9fa18 mov eax, dword ptr [edx*8 + 0x11bcbf6c] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11bcbf6c)));
  /* 11b9fa1f push eax */
  push32((uint32_t)(EAX));
  /* 11b9fa20 call 0x11b9fe80 */
  push32(0x11b9fa25u); f_11b9fe80();
  /* 11b9fa25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9fa28 push eax */
  push32((uint32_t)(EAX));
  /* 11b9fa29 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9fa2c mov edx, dword ptr [ecx*8 + 0x11bcbf6c] */
  EDX = (r32((uint32_t)(ECX*8 + 0x11bcbf6c)));
  /* 11b9fa33 push edx */
  push32((uint32_t)(EDX));
  /* 11b9fa34 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11b9fa36 call dword ptr [0x11bd03fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd03fc))), 0x11b9fa3cu);
  /* 11b9fa3c push eax */
  push32((uint32_t)(EAX));
  /* 11b9fa3d call dword ptr [0x11bd0400] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0400))), 0x11b9fa43u);
  /* 11b9fa43 jmp 0x11b9fb38 */
  goto L_11b9fb38;
L_11b9fa48:;
  /* 11b9fa48 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9fa4f je 0x11b9fb38 */
  if (C.zf) goto L_11b9fb38;
  /* 11b9fa55 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11b9fa5a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 11b9fa60 push eax */
  push32((uint32_t)(EAX));
  /* 11b9fa61 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9fa63 call dword ptr [0x11bd0418] */
  call_ind((uint32_t)(r32((uint32_t)(0x11bd0418))), 0x11b9fa69u);
  /* 11b9fa69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b9fa6b jne 0x11b9fa81 */
  if (!C.zf) goto L_11b9fa81;
  /* 11b9fa6d push 0x11bc8660 */
  push32((uint32_t)(0x11bc8660u));
  /* 11b9fa72 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 11b9fa78 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9fa79 call 0x11ba0000 */
  push32(0x11b9fa7eu); f_11ba0000();
  /* 11b9fa7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9fa81:;
  /* 11b9fa81 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 11b9fa87 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11b9fa8a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9fa8d push eax */
  push32((uint32_t)(EAX));
  /* 11b9fa8e call 0x11b9fe80 */
  push32(0x11b9fa93u); f_11b9fe80();
  /* 11b9fa93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9fa96 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9fa99 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9fa9c jbe 0x11b9faca */
  if ((C.cf||C.zf)) goto L_11b9faca;
  /* 11b9fa9e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 11b9faa4 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9faa5 call 0x11b9fe80 */
  push32(0x11b9faaau); f_11b9fe80();
  /* 11b9faaa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9faad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9fab0 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 11b9fab4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b9fab7 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b9fab9 push 0x11bc865c */
  push32((uint32_t)(0x11bc865cu));
  /* 11b9fabe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9fac1 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9fac2 call 0x11ba0870 */
  push32(0x11b9fac7u); f_11ba0870();
  /* 11b9fac7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9faca:;
  /* 11b9faca push 0x11bc9280 */
  push32((uint32_t)(0x11bc9280u));
  /* 11b9facf lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11b9fad5 push edx */
  push32((uint32_t)(EDX));
  /* 11b9fad6 call 0x11ba0000 */
  push32(0x11b9fadbu); f_11ba0000();
  /* 11b9fadb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9fade mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9fae1 push eax */
  push32((uint32_t)(EAX));
  /* 11b9fae2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 11b9fae8 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9fae9 call 0x11ba0010 */
  push32(0x11b9faeeu); f_11ba0010();
  /* 11b9faee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9faf1 push 0x11bc85d4 */
  push32((uint32_t)(0x11bc85d4u));
  /* 11b9faf6 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11b9fafc push edx */
  push32((uint32_t)(EDX));
  /* 11b9fafd call 0x11ba0010 */
  push32(0x11b9fb02u); f_11ba0010();
  /* 11b9fb02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9fb05 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9fb08 mov ecx, dword ptr [eax*8 + 0x11bcbf6c] */
  ECX = (r32((uint32_t)(EAX*8 + 0x11bcbf6c)));
  /* 11b9fb0f push ecx */
  push32((uint32_t)(ECX));
  /* 11b9fb10 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11b9fb16 push edx */
  push32((uint32_t)(EDX));
  /* 11b9fb17 call 0x11ba0010 */
  push32(0x11b9fb1cu); f_11ba0010();
  /* 11b9fb1c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9fb1f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11b9fb24 push 0x11bc9258 */
  push32((uint32_t)(0x11bc9258u));
  /* 11b9fb29 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 11b9fb2f push eax */
  push32((uint32_t)(EAX));
  /* 11b9fb30 call 0x11ba07b0 */
  push32(0x11b9fb35u); f_11ba07b0();
  /* 11b9fb35 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9fb38:;
  /* 11b9fb38 pop edi */
  EDI = (pop32());
  /* 11b9fb39 pop esi */
  ESI = (pop32());
  /* 11b9fb3a pop ebx */
  EBX = (pop32());
  /* 11b9fb3b mov esp, ebp */
  ESP = (EBP);
  /* 11b9fb3d pop ebp */
  EBP = (pop32());
  /* 11b9fb3e ret  */
  ESPCHK(0x11b9f980u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x11b9fb40 (80 bytes, 27 insns) */
void f_11b9fb40(void) {
  FTRACE(0x11b9fb40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9fb40 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9fb41 mov ebp, esp */
  EBP = (ESP);
  /* 11b9fb43 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9fb44 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b9fb4b jmp 0x11b9fb56 */
  goto L_11b9fb56;
L_11b9fb4d:;
  /* 11b9fb4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9fb50 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9fb53 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b9fb56:;
  /* 11b9fb56 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9fb5a jae 0x11b9fb6f */
  if (!C.cf) goto L_11b9fb6f;
  /* 11b9fb5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9fb5f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9fb62 cmp edx, dword ptr [ecx*8 + 0x11bcbf68] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x11bcbf68))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9fb69 jne 0x11b9fb6d */
  if (!C.zf) goto L_11b9fb6d;
  /* 11b9fb6b jmp 0x11b9fb6f */
  goto L_11b9fb6f;
L_11b9fb6d:;
  /* 11b9fb6d jmp 0x11b9fb4d */
  goto L_11b9fb4d;
L_11b9fb6f:;
  /* 11b9fb6f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9fb72 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9fb75 cmp ecx, dword ptr [eax*8 + 0x11bcbf68] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11bcbf68))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9fb7c jne 0x11b9fb8a */
  if (!C.zf) goto L_11b9fb8a;
  /* 11b9fb7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9fb81 mov eax, dword ptr [edx*8 + 0x11bcbf6c] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11bcbf6c)));
  /* 11b9fb88 jmp 0x11b9fb8c */
  goto L_11b9fb8c;
L_11b9fb8a:;
  /* 11b9fb8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b9fb8c:;
  /* 11b9fb8c mov esp, ebp */
  ESP = (EBP);
  /* 11b9fb8e pop ebp */
  EBP = (pop32());
  /* 11b9fb8f ret  */
  ESPCHK(0x11b9fb40u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x11b9fb90 (66 bytes, 28 insns) */
void f_11b9fb90(void) {
  FTRACE(0x11b9fb90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9fb90 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9fb91 mov ebp, esp */
  EBP = (ESP);
  /* 11b9fb93 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9fb97 jne 0x11b9fbb7 */
  if (!C.zf) goto L_11b9fbb7;
  /* 11b9fb99 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9fb9d jge 0x11b9fbb7 */
  if ((C.sf==C.of)) goto L_11b9fbb7;
  /* 11b9fb9f push 1 */
  push32((uint32_t)(0x1u));
  /* 11b9fba1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9fba4 push eax */
  push32((uint32_t)(EAX));
  /* 11b9fba5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9fba8 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9fba9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9fbac push edx */
  push32((uint32_t)(EDX));
  /* 11b9fbad call 0x11b9fbe0 */
  push32(0x11b9fbb2u); f_11b9fbe0();
  /* 11b9fbb2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9fbb5 jmp 0x11b9fbcd */
  goto L_11b9fbcd;
L_11b9fbb7:;
  /* 11b9fbb7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9fbb9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9fbbc push eax */
  push32((uint32_t)(EAX));
  /* 11b9fbbd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9fbc0 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9fbc1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9fbc4 push edx */
  push32((uint32_t)(EDX));
  /* 11b9fbc5 call 0x11b9fbe0 */
  push32(0x11b9fbcau); f_11b9fbe0();
  /* 11b9fbca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b9fbcd:;
  /* 11b9fbcd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9fbd0 pop ebp */
  EBP = (pop32());
  /* 11b9fbd1 ret  */
  ESPCHK(0x11b9fb90u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x11b9fbe0 (194 bytes, 71 insns) */
void f_11b9fbe0(void) {
  FTRACE(0x11b9fbe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9fbe0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9fbe1 mov ebp, esp */
  EBP = (ESP);
  /* 11b9fbe3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9fbe6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9fbe9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b9fbec cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9fbf0 je 0x11b9fc09 */
  if (C.zf) goto L_11b9fc09;
  /* 11b9fbf2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9fbf5 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11b9fbf8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9fbfb add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9fbfe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b9fc01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9fc04 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b9fc06 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11b9fc09:;
  /* 11b9fc09 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9fc0c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11b9fc0f:;
  /* 11b9fc0f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9fc12 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b9fc14 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b9fc17 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11b9fc1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9fc1d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b9fc1f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b9fc22 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11b9fc25 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9fc29 jbe 0x11b9fc41 */
  if ((C.cf||C.zf)) goto L_11b9fc41;
  /* 11b9fc2b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9fc2e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9fc31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9fc34 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11b9fc36 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9fc39 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9fc3c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b9fc3f jmp 0x11b9fc55 */
  goto L_11b9fc55;
L_11b9fc41:;
  /* 11b9fc41 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9fc44 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9fc47 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9fc4a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11b9fc4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9fc4f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9fc52 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11b9fc55:;
  /* 11b9fc55 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9fc59 ja 0x11b9fc0f */
  if ((!C.cf&&!C.zf)) goto L_11b9fc0f;
  /* 11b9fc5b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9fc5e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11b9fc61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9fc64 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9fc67 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b9fc6a:;
  /* 11b9fc6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9fc6d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b9fc6f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 11b9fc72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9fc75 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9fc78 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b9fc7a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11b9fc7c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9fc7f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 11b9fc82 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11b9fc84 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9fc87 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9fc8a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b9fc8d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9fc90 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9fc93 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b9fc96 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9fc99 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9fc9c jb 0x11b9fc6a */
  if (C.cf) goto L_11b9fc6a;
  /* 11b9fc9e mov esp, ebp */
  ESP = (EBP);
  /* 11b9fca0 pop ebp */
  EBP = (pop32());
  /* 11b9fca1 ret  */
  ESPCHK(0x11b9fbe0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x11b9fcb0 (63 bytes, 24 insns) */
void f_11b9fcb0(void) {
  FTRACE(0x11b9fcb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9fcb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9fcb1 mov ebp, esp */
  EBP = (ESP);
  /* 11b9fcb3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9fcb4 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9fcb8 jne 0x11b9fcc9 */
  if (!C.zf) goto L_11b9fcc9;
  /* 11b9fcba cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9fcbe jge 0x11b9fcc9 */
  if ((C.sf==C.of)) goto L_11b9fcc9;
  /* 11b9fcc0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11b9fcc7 jmp 0x11b9fcd0 */
  goto L_11b9fcd0;
L_11b9fcc9:;
  /* 11b9fcc9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11b9fcd0:;
  /* 11b9fcd0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9fcd3 push eax */
  push32((uint32_t)(EAX));
  /* 11b9fcd4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9fcd7 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9fcd8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9fcdb push edx */
  push32((uint32_t)(EDX));
  /* 11b9fcdc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9fcdf push eax */
  push32((uint32_t)(EAX));
  /* 11b9fce0 call 0x11b9fbe0 */
  push32(0x11b9fce5u); f_11b9fbe0();
  /* 11b9fce5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9fce8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9fceb mov esp, ebp */
  ESP = (EBP);
  /* 11b9fced pop ebp */
  EBP = (pop32());
  /* 11b9fcee ret  */
  ESPCHK(0x11b9fcb0u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x11b9fcf0 (30 bytes, 14 insns) */
void f_11b9fcf0(void) {
  FTRACE(0x11b9fcf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9fcf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9fcf1 mov ebp, esp */
  EBP = (ESP);
  /* 11b9fcf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b9fcf5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9fcf8 push eax */
  push32((uint32_t)(EAX));
  /* 11b9fcf9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9fcfc push ecx */
  push32((uint32_t)(ECX));
  /* 11b9fcfd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9fd00 push edx */
  push32((uint32_t)(EDX));
  /* 11b9fd01 call 0x11b9fbe0 */
  push32(0x11b9fd06u); f_11b9fbe0();
  /* 11b9fd06 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9fd09 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9fd0c pop ebp */
  EBP = (pop32());
  /* 11b9fd0d ret  */
  ESPCHK(0x11b9fcf0u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x11b9fd10 (72 bytes, 28 insns) */
void f_11b9fd10(void) {
  FTRACE(0x11b9fd10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9fd10 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9fd11 mov ebp, esp */
  EBP = (ESP);
  /* 11b9fd13 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9fd14 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9fd18 jne 0x11b9fd31 */
  if (!C.zf) goto L_11b9fd31;
  /* 11b9fd1a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9fd1e jg 0x11b9fd31 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b9fd31;
  /* 11b9fd20 jl 0x11b9fd28 */
  if ((C.sf!=C.of)) goto L_11b9fd28;
  /* 11b9fd22 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9fd26 jae 0x11b9fd31 */
  if (!C.cf) goto L_11b9fd31;
L_11b9fd28:;
  /* 11b9fd28 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11b9fd2f jmp 0x11b9fd38 */
  goto L_11b9fd38;
L_11b9fd31:;
  /* 11b9fd31 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11b9fd38:;
  /* 11b9fd38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9fd3b push eax */
  push32((uint32_t)(EAX));
  /* 11b9fd3c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9fd3f push ecx */
  push32((uint32_t)(ECX));
  /* 11b9fd40 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9fd43 push edx */
  push32((uint32_t)(EDX));
  /* 11b9fd44 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9fd47 push eax */
  push32((uint32_t)(EAX));
  /* 11b9fd48 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9fd4b push ecx */
  push32((uint32_t)(ECX));
  /* 11b9fd4c call 0x11b9fd60 */
  push32(0x11b9fd51u); f_11b9fd60();
  /* 11b9fd51 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9fd54 mov esp, ebp */
  ESP = (EBP);
  /* 11b9fd56 pop ebp */
  EBP = (pop32());
  /* 11b9fd57 ret  */
  ESPCHK(0x11b9fd10u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x11b9fd60 (242 bytes, 91 insns) */
void f_11b9fd60(void) {
  FTRACE(0x11b9fd60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b9fd60 push ebp */
  push32((uint32_t)(EBP));
  /* 11b9fd61 mov ebp, esp */
  EBP = (ESP);
  /* 11b9fd63 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9fd66 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b9fd69 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b9fd6c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9fd70 je 0x11b9fd94 */
  if (C.zf) goto L_11b9fd94;
  /* 11b9fd72 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9fd75 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11b9fd78 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9fd7b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9fd7e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b9fd81 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9fd84 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b9fd86 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9fd89 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9fd8c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b9fd8e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11b9fd91 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11b9fd94:;
  /* 11b9fd94 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9fd97 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11b9fd9a:;
  /* 11b9fd9a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9fd9d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b9fd9f push ecx */
  push32((uint32_t)(ECX));
  /* 11b9fda0 push eax */
  push32((uint32_t)(EAX));
  /* 11b9fda1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9fda4 push edx */
  push32((uint32_t)(EDX));
  /* 11b9fda5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9fda8 push eax */
  push32((uint32_t)(EAX));
  /* 11b9fda9 call 0x11ba59b0 */
  push32(0x11b9fdaeu); f_11ba59b0();
  /* 11b9fdae mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b9fdb1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b9fdb4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b9fdb6 push edx */
  push32((uint32_t)(EDX));
  /* 11b9fdb7 push ecx */
  push32((uint32_t)(ECX));
  /* 11b9fdb8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b9fdbb push eax */
  push32((uint32_t)(EAX));
  /* 11b9fdbc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b9fdbf push ecx */
  push32((uint32_t)(ECX));
  /* 11b9fdc0 call 0x11ba5940 */
  push32(0x11b9fdc5u); f_11ba5940();
  /* 11b9fdc5 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11b9fdc8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11b9fdcb cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9fdcf jbe 0x11b9fde7 */
  if ((C.cf||C.zf)) goto L_11b9fde7;
  /* 11b9fdd1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9fdd4 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9fdd7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9fdda mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11b9fddc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9fddf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9fde2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b9fde5 jmp 0x11b9fdfb */
  goto L_11b9fdfb;
L_11b9fde7:;
  /* 11b9fde7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b9fdea add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9fded mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9fdf0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11b9fdf2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9fdf5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9fdf8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11b9fdfb:;
  /* 11b9fdfb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9fdff ja 0x11b9fd9a */
  if ((!C.cf&&!C.zf)) goto L_11b9fd9a;
  /* 11b9fe01 jb 0x11b9fe09 */
  if (C.cf) goto L_11b9fe09;
  /* 11b9fe03 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9fe07 ja 0x11b9fd9a */
  if ((!C.cf&&!C.zf)) goto L_11b9fd9a;
L_11b9fe09:;
  /* 11b9fe09 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9fe0c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11b9fe0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9fe12 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9fe15 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b9fe18:;
  /* 11b9fe18 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9fe1b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b9fe1d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 11b9fe20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9fe23 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9fe26 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b9fe28 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11b9fe2a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9fe2d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 11b9fe30 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11b9fe32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b9fe35 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b9fe38 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b9fe3b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9fe3e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b9fe41 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b9fe44 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b9fe47 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b9fe4a jb 0x11b9fe18 */
  if (C.cf) goto L_11b9fe18;
  /* 11b9fe4c mov esp, ebp */
  ESP = (EBP);
  /* 11b9fe4e pop ebp */
  EBP = (pop32());
  /* 11b9fe4f ret 0x14 */
  ESPCHK(0x11b9fd60u, _esp0);
  ESP += 24; return;
}

