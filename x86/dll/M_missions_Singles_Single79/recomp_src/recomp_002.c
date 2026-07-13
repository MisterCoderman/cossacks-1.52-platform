#include "recomp.h"

/* FUN_10009f5f @ 0x11d19f5f (219 bytes, 90 insns) */
void f_11d19f5f(void) {
  FTRACE(0x11d19f5fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d19f5f push ebx */
  push32((uint32_t)(EBX));
  /* 11d19f60 push esi */
  push32((uint32_t)(ESI));
  /* 11d19f61 mov esi, ecx */
  ESI = (ECX);
  /* 11d19f63 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d19f66 push edi */
  push32((uint32_t)(EDI));
  /* 11d19f67 mov ecx, dword ptr [esi + 0x4c] */
  ECX = (r32((uint32_t)(ESI + 0x4c)));
  /* 11d19f6a cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d19f6c je 0x11d1a036 */
  if (C.zf) goto L_11d1a036;
  /* 11d19f72 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11d19f74 cmp dword ptr [esi + 8], ebx */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d19f77 jne 0x11d1a034 */
  if (!C.zf) goto L_11d1a034;
  /* 11d19f7d mov edi, dword ptr [esi + 0x1c] */
  EDI = (r32((uint32_t)(ESI + 0x1c)));
  /* 11d19f80 mov eax, dword ptr [esi + 0x18] */
  EAX = (r32((uint32_t)(ESI + 0x18)));
  /* 11d19f83 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d19f85 jb 0x11d19f8b */
  if (C.cf) goto L_11d19f8b;
  /* 11d19f87 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d19f89 jmp 0x11d19f8d */
  goto L_11d19f8d;
L_11d19f8b:;
  /* 11d19f8b xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11d19f8d:;
  /* 11d19f8d cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d19f8f je 0x11d19fc0 */
  if (C.zf) goto L_11d19fc0;
  /* 11d19f91 push edi */
  push32((uint32_t)(EDI));
  /* 11d19f92 push eax */
  push32((uint32_t)(EAX));
  /* 11d19f93 push ecx */
  push32((uint32_t)(ECX));
  /* 11d19f94 call 0x11d171a5 */
  push32(0x11d19f99u); f_11d171a5();
  /* 11d19f99 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d19f9c cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d19f9e je 0x11d19fc0 */
  if (C.zf) goto L_11d19fc0;
  /* 11d19fa0 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d19fa2 jle 0x11d1a020 */
  if ((C.zf||C.sf!=C.of)) goto L_11d1a020;
  /* 11d19fa4 cmp dword ptr [esi + 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d19fa7 je 0x11d19fac */
  if (C.zf) goto L_11d19fac;
  /* 11d19fa9 sub dword ptr [esi + 0x1c], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x1c))),_b=(EAX),_r=_a-_b; w32((uint32_t)(ESI + 0x1c), (_r)); fl_sub(_a,_b,_r,32); }
L_11d19fac:;
  /* 11d19fac mov esi, dword ptr [esi + 0x18] */
  ESI = (r32((uint32_t)(ESI + 0x18)));
  /* 11d19faf sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d19fb1 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d19fb3 push edi */
  push32((uint32_t)(EDI));
  /* 11d19fb4 push eax */
  push32((uint32_t)(EAX));
  /* 11d19fb5 push esi */
  push32((uint32_t)(ESI));
  /* 11d19fb6 call 0x11d152a0 */
  push32(0x11d19fbbu); f_11d152a0();
  /* 11d19fbb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d19fbe jmp 0x11d1a020 */
  goto L_11d1a020;
L_11d19fc0:;
  /* 11d19fc0 mov ecx, esi */
  ECX = (ESI);
  /* 11d19fc2 mov dword ptr [esi + 0x18], ebx */
  w32((uint32_t)(ESI + 0x18), (EBX));
  /* 11d19fc5 mov dword ptr [esi + 0x1c], ebx */
  w32((uint32_t)(ESI + 0x1c), (EBX));
  /* 11d19fc8 mov dword ptr [esi + 0x20], ebx */
  w32((uint32_t)(ESI + 0x20), (EBX));
  /* 11d19fcb call 0x11d19f0b */
  push32(0x11d19fd0u); f_11d19f0b();
  /* 11d19fd0 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d19fd2 jle 0x11d1a027 */
  if ((C.zf||C.sf!=C.of)) goto L_11d1a027;
  /* 11d19fd4 mov edx, dword ptr [esi + 0x4c] */
  EDX = (r32((uint32_t)(ESI + 0x4c)));
  /* 11d19fd7 mov edi, edx */
  EDI = (EDX);
  /* 11d19fd9 mov ecx, edx */
  ECX = (EDX);
  /* 11d19fdb sar edi, 5 */
  EDI = (sh_sar((uint32_t)(EDI), (0x5u)&0x1f, 32));
  /* 11d19fde and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11d19fe1 mov edi, dword ptr [edi*4 + 0x11d38840] */
  EDI = (r32((uint32_t)(EDI*4 + 0x11d38840)));
  /* 11d19fe8 lea ecx, [ecx + ecx*8] */
  ECX = ((uint32_t)(ECX + ECX*8));
  /* 11d19feb mov bl, byte ptr [edi + ecx*4 + 4] */
  BL = (r8((uint32_t)(EDI + ECX*4 + 0x4)));
  /* 11d19fef test bl, 0x80 */
  { uint32_t _r=(BL)&(0x80u); fl_logic(_r,8); }
  /* 11d19ff2 je 0x11d1a00d */
  if (C.zf) goto L_11d1a00d;
  /* 11d19ff4 mov ecx, dword ptr [esi + 0x28] */
  ECX = (r32((uint32_t)(ESI + 0x28)));
  /* 11d19ff7 mov edi, dword ptr [esi + 0x2c] */
  EDI = (r32((uint32_t)(ESI + 0x2c)));
L_11d19ffa:;
  /* 11d19ffa cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d19ffc jae 0x11d1a007 */
  if (!C.cf) goto L_11d1a007;
  /* 11d19ffe cmp byte ptr [ecx], 0xa */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d1a001 jne 0x11d1a004 */
  if (!C.zf) goto L_11d1a004;
  /* 11d1a003 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11d1a004:;
  /* 11d1a004 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11d1a005 jmp 0x11d19ffa */
  goto L_11d19ffa;
L_11d1a007:;
  /* 11d1a007 test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 11d1a00a je 0x11d1a00d */
  if (C.zf) goto L_11d1a00d;
  /* 11d1a00c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11d1a00d:;
  /* 11d1a00d neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d1a00f push 1 */
  push32((uint32_t)(0x1u));
  /* 11d1a011 push eax */
  push32((uint32_t)(EAX));
  /* 11d1a012 push edx */
  push32((uint32_t)(EDX));
  /* 11d1a013 call 0x11d170cd */
  push32(0x11d1a018u); f_11d170cd();
  /* 11d1a018 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1a01b cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1a01e jne 0x11d1a025 */
  if (!C.zf) goto L_11d1a025;
L_11d1a020:;
  /* 11d1a020 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d1a023 jmp 0x11d1a036 */
  goto L_11d1a036;
L_11d1a025:;
  /* 11d1a025 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11d1a027:;
  /* 11d1a027 or dword ptr [esi + 0xc], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0xffffffffu); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 11d1a02b mov dword ptr [esi + 0x24], ebx */
  w32((uint32_t)(ESI + 0x24), (EBX));
  /* 11d1a02e mov dword ptr [esi + 0x28], ebx */
  w32((uint32_t)(ESI + 0x28), (EBX));
  /* 11d1a031 mov dword ptr [esi + 0x2c], ebx */
  w32((uint32_t)(ESI + 0x2c), (EBX));
L_11d1a034:;
  /* 11d1a034 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d1a036:;
  /* 11d1a036 pop edi */
  EDI = (pop32());
  /* 11d1a037 pop esi */
  ESI = (pop32());
  /* 11d1a038 pop ebx */
  EBX = (pop32());
  /* 11d1a039 ret  */
  ESPCHK(0x11d19f5fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a03a @ 0x11d1a03a (100 bytes, 41 insns) */
void f_11d1a03a(void) {
  FTRACE(0x11d1a03au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1a03a push esi */
  push32((uint32_t)(ESI));
  /* 11d1a03b mov esi, ecx */
  ESI = (ECX);
  /* 11d1a03d cmp dword ptr [esi + 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1a041 je 0x11d1a04d */
  if (C.zf) goto L_11d1a04d;
  /* 11d1a043 cmp dword ptr [esi + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1a047 je 0x11d1a04d */
  if (C.zf) goto L_11d1a04d;
  /* 11d1a049 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d1a04b jmp 0x11d1a09a */
  goto L_11d1a09a;
L_11d1a04d:;
  /* 11d1a04d push ebx */
  push32((uint32_t)(EBX));
  /* 11d1a04e push edi */
  push32((uint32_t)(EDI));
  /* 11d1a04f mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11d1a053 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11d1a055 je 0x11d1a08f */
  if (C.zf) goto L_11d1a08f;
  /* 11d1a057 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11d1a05b test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11d1a05d jle 0x11d1a08f */
  if ((C.zf||C.sf!=C.of)) goto L_11d1a08f;
  /* 11d1a05f cmp dword ptr [esi + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1a063 jge 0x11d1a06f */
  if ((C.sf==C.of)) goto L_11d1a06f;
  /* 11d1a065 lea eax, [esi + 0x34] */
  EAX = ((uint32_t)(ESI + 0x34));
  /* 11d1a068 push eax */
  push32((uint32_t)(EAX));
  /* 11d1a069 call 0x11d1a0b4 */
  push32(0x11d1a06eu); f_11d1a0b4();
  /* 11d1a06e pop ecx */
  ECX = (pop32());
L_11d1a06f:;
  /* 11d1a06f lea eax, [edi + ebx] */
  EAX = ((uint32_t)(EDI + EBX*1));
  /* 11d1a072 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d1a074 push eax */
  push32((uint32_t)(EAX));
  /* 11d1a075 push edi */
  push32((uint32_t)(EDI));
  /* 11d1a076 mov ecx, esi */
  ECX = (ESI);
  /* 11d1a078 call 0x11d1a44c */
  push32(0x11d1a07du); f_11d1a44c();
  /* 11d1a07d cmp dword ptr [esi + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1a081 jge 0x11d1a096 */
  if ((C.sf==C.of)) goto L_11d1a096;
  /* 11d1a083 lea eax, [esi + 0x34] */
  EAX = ((uint32_t)(ESI + 0x34));
  /* 11d1a086 push eax */
  push32((uint32_t)(EAX));
  /* 11d1a087 call 0x11d1a0bf */
  push32(0x11d1a08cu); f_11d1a0bf();
  /* 11d1a08c pop ecx */
  ECX = (pop32());
  /* 11d1a08d jmp 0x11d1a096 */
  goto L_11d1a096;
L_11d1a08f:;
  /* 11d1a08f mov dword ptr [esi + 8], 1 */
  w32((uint32_t)(ESI + 0x8), (0x1u));
L_11d1a096:;
  /* 11d1a096 pop edi */
  EDI = (pop32());
  /* 11d1a097 mov eax, esi */
  EAX = (ESI);
  /* 11d1a099 pop ebx */
  EBX = (pop32());
L_11d1a09a:;
  /* 11d1a09a pop esi */
  ESI = (pop32());
  /* 11d1a09b ret 8 */
  ESPCHK(0x11d1a03au, _esp0);
  ESP += 12; return;
}

/* FUN_1000a09e @ 0x11d1a09e (11 bytes, 3 insns) */
void f_11d1a09e(void) {
  FTRACE(0x11d1a09eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1a09e push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11d1a0a2 call dword ptr [0x11d1c068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c068))), 0x11d1a0a8u);
  /* 11d1a0a8 ret  */
  ESPCHK(0x11d1a09eu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a0a9 @ 0x11d1a0a9 (11 bytes, 3 insns) */
void f_11d1a0a9(void) {
  FTRACE(0x11d1a0a9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1a0a9 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11d1a0ad call dword ptr [0x11d1c09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c09c))), 0x11d1a0b3u);
  /* 11d1a0b3 ret  */
  ESPCHK(0x11d1a0a9u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a0b4 @ 0x11d1a0b4 (11 bytes, 3 insns) */
void f_11d1a0b4(void) {
  FTRACE(0x11d1a0b4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1a0b4 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11d1a0b8 call dword ptr [0x11d1c05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c05c))), 0x11d1a0beu);
  /* 11d1a0be ret  */
  ESPCHK(0x11d1a0b4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a0bf @ 0x11d1a0bf (11 bytes, 3 insns) */
void f_11d1a0bf(void) {
  FTRACE(0x11d1a0bfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1a0bf push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11d1a0c3 call dword ptr [0x11d1c058] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c058))), 0x11d1a0c9u);
  /* 11d1a0c9 ret  */
  ESPCHK(0x11d1a0bfu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a0f5 @ 0x11d1a0f5 (118 bytes, 38 insns) */
void f_11d1a0f5(void) {
  FTRACE(0x11d1a0f5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1a0f5 mov eax, 0x11d1b536 */
  EAX = (0x11d1b536u);
  /* 11d1a0fa call 0x11d1a83c */
  push32(0x11d1a0ffu); f_11d1a83c();
  /* 11d1a0ff push ecx */
  push32((uint32_t)(ECX));
  /* 11d1a100 push ecx */
  push32((uint32_t)(ECX));
  /* 11d1a101 push esi */
  push32((uint32_t)(ESI));
  /* 11d1a102 push edi */
  push32((uint32_t)(EDI));
  /* 11d1a103 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11d1a105 mov esi, ecx */
  ESI = (ECX);
  /* 11d1a107 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1a10a mov dword ptr [ebp - 0x14], esi */
  w32((uint32_t)(EBP + -0x14), (ESI));
  /* 11d1a10d mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 11d1a110 je 0x11d1a12a */
  if (C.zf) goto L_11d1a12a;
  /* 11d1a112 lea ecx, [esi + 0xc] */
  ECX = ((uint32_t)(ESI + 0xc));
  /* 11d1a115 mov dword ptr [esi], 0x11d1c8b8 */
  w32((uint32_t)(ESI), (0x11d1c8b8u));
  /* 11d1a11b call 0x11d19b18 */
  push32(0x11d1a120u); f_11d19b18();
  /* 11d1a120 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11d1a127 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
L_11d1a12a:;
  /* 11d1a12a mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11d1a12c push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11d1a12f mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d1a132 mov dword ptr [eax + esi], 0x11d1c8b4 */
  w32((uint32_t)(EAX + ESI*1), (0x11d1c8b4u));
  /* 11d1a139 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11d1a13b mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d1a13e add ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1a140 call 0x11d19bdc */
  push32(0x11d1a145u); f_11d19bdc();
  /* 11d1a145 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11d1a147 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d1a14a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d1a14d or dword ptr [eax + esi + 0x24], 1 */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*1 + 0x24)))|(0x1u); w32((uint32_t)(EAX + ESI*1 + 0x24), (_r)); fl_logic(_r,32); }
  /* 11d1a152 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
  /* 11d1a155 mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 11d1a158 lea eax, [eax + esi + 0x24] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x24));
  /* 11d1a15c pop edi */
  EDI = (pop32());
  /* 11d1a15d mov eax, esi */
  EAX = (ESI);
  /* 11d1a15f pop esi */
  ESI = (pop32());
  /* 11d1a160 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11d1a167 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d1a168 ret 8 */
  ESPCHK(0x11d1a0f5u, _esp0);
  ESP += 12; return;
}

/* FUN_1000a16b @ 0x11d1a16b (15 bytes, 4 insns) */
void f_11d1a16b(void) {
  FTRACE(0x11d1a16bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1a16b mov eax, dword ptr [ecx - 0xc] */
  EAX = (r32((uint32_t)(ECX + -0xc)));
  /* 11d1a16e mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d1a171 mov dword ptr [eax + ecx - 0xc], 0x11d1c8b4 */
  w32((uint32_t)(EAX + ECX*1 + -0xc), (0x11d1c8b4u));
  /* 11d1a179 ret  */
  ESPCHK(0x11d1a16bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a17a @ 0x11d1a17a (37 bytes, 14 insns) */
void f_11d1a17a(void) {
  FTRACE(0x11d1a17au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1a17a mov eax, dword ptr [ecx + 0x28] */
  EAX = (r32((uint32_t)(ECX + 0x28)));
  /* 11d1a17d cmp dword ptr [ecx + 0x24], eax */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1a180 jae 0x11d1a191 */
  if (!C.cf) goto L_11d1a191;
  /* 11d1a182 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11d1a183 mov dword ptr [ecx + 0x28], eax */
  w32((uint32_t)(ECX + 0x28), (EAX));
  /* 11d1a186 mov cl, byte ptr [esp + 4] */
  CL = (r8((uint32_t)(ESP + 0x4)));
  /* 11d1a18a mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11d1a18c movsx eax, cl */
  EAX = ((uint32_t)(int32_t)(int8_t)(CL));
  /* 11d1a18f jmp 0x11d1a19c */
  goto L_11d1a19c;
L_11d1a191:;
  /* 11d1a191 movsx edx, byte ptr [esp + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESP + 0x4))));
  /* 11d1a196 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11d1a198 push edx */
  push32((uint32_t)(EDX));
  /* 11d1a199 call dword ptr [eax + 0x24] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x24))), 0x11d1a19cu);
L_11d1a19c:;
  /* 11d1a19c ret 4 */
  ESPCHK(0x11d1a17au, _esp0);
  ESP += 8; return;
}

/* FUN_1000a1ca @ 0x11d1a1ca (101 bytes, 30 insns) */
void f_11d1a1ca(void) {
  FTRACE(0x11d1a1cau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1a1ca mov eax, 0x11d1b55a */
  EAX = (0x11d1b55au);
  /* 11d1a1cf call 0x11d1a83c */
  push32(0x11d1a1d4u); f_11d1a83c();
  /* 11d1a1d4 push ecx */
  push32((uint32_t)(ECX));
  /* 11d1a1d5 push ecx */
  push32((uint32_t)(ECX));
  /* 11d1a1d6 and dword ptr [ebp - 0x10], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))&(0x0u); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 11d1a1da cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1a1de push esi */
  push32((uint32_t)(ESI));
  /* 11d1a1df mov esi, ecx */
  ESI = (ECX);
  /* 11d1a1e1 mov dword ptr [ebp - 0x14], esi */
  w32((uint32_t)(EBP + -0x14), (ESI));
  /* 11d1a1e4 je 0x11d1a1ff */
  if (C.zf) goto L_11d1a1ff;
  /* 11d1a1e6 lea ecx, [esi + 8] */
  ECX = ((uint32_t)(ESI + 0x8));
  /* 11d1a1e9 mov dword ptr [esi], 0x11d1c8c8 */
  w32((uint32_t)(ESI), (0x11d1c8c8u));
  /* 11d1a1ef call 0x11d19b18 */
  push32(0x11d1a1f4u); f_11d19b18();
  /* 11d1a1f4 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11d1a1fb and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_11d1a1ff:;
  /* 11d1a1ff mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11d1a201 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11d1a204 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d1a207 mov dword ptr [eax + esi], 0x11d1c8c4 */
  w32((uint32_t)(EAX + ESI*1), (0x11d1c8c4u));
  /* 11d1a20e mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11d1a210 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d1a213 add ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1a215 call 0x11d19bdc */
  push32(0x11d1a21au); f_11d19bdc();
  /* 11d1a21a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d1a21d and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11d1a221 mov eax, esi */
  EAX = (ESI);
  /* 11d1a223 pop esi */
  ESI = (pop32());
  /* 11d1a224 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11d1a22b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d1a22c ret 8 */
  ESPCHK(0x11d1a1cau, _esp0);
  ESP += 12; return;
}

/* FUN_1000a22f @ 0x11d1a22f (15 bytes, 4 insns) */
void f_11d1a22f(void) {
  FTRACE(0x11d1a22fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1a22f mov eax, dword ptr [ecx - 8] */
  EAX = (r32((uint32_t)(ECX + -0x8)));
  /* 11d1a232 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d1a235 mov dword ptr [eax + ecx - 8], 0x11d1c8c4 */
  w32((uint32_t)(EAX + ECX*1 + -0x8), (0x11d1c8c4u));
  /* 11d1a23d ret  */
  ESPCHK(0x11d1a22fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a23e @ 0x11d1a23e (63 bytes, 23 insns) */
void f_11d1a23e(void) {
  FTRACE(0x11d1a23eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1a23e push esi */
  push32((uint32_t)(ESI));
  /* 11d1a23f mov esi, ecx */
  ESI = (ECX);
  /* 11d1a241 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d1a243 or dword ptr [esi + 0xc], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0xffffffffu); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 11d1a247 or dword ptr [esi + 0x30], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x30)))|(0xffffffffu); w32((uint32_t)(ESI + 0x30), (_r)); fl_logic(_r,32); }
  /* 11d1a24b mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 11d1a24e mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 11d1a251 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 11d1a254 mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 11d1a257 mov dword ptr [esi + 0x18], eax */
  w32((uint32_t)(ESI + 0x18), (EAX));
  /* 11d1a25a mov dword ptr [esi + 0x1c], eax */
  w32((uint32_t)(ESI + 0x1c), (EAX));
  /* 11d1a25d mov dword ptr [esi + 0x20], eax */
  w32((uint32_t)(ESI + 0x20), (EAX));
  /* 11d1a260 mov dword ptr [esi + 0x24], eax */
  w32((uint32_t)(ESI + 0x24), (EAX));
  /* 11d1a263 mov dword ptr [esi + 0x28], eax */
  w32((uint32_t)(ESI + 0x28), (EAX));
  /* 11d1a266 mov dword ptr [esi + 0x2c], eax */
  w32((uint32_t)(ESI + 0x2c), (EAX));
  /* 11d1a269 lea eax, [esi + 0x34] */
  EAX = ((uint32_t)(ESI + 0x34));
  /* 11d1a26c mov dword ptr [esi], 0x11d1c8d4 */
  w32((uint32_t)(ESI), (0x11d1c8d4u));
  /* 11d1a272 push eax */
  push32((uint32_t)(EAX));
  /* 11d1a273 call 0x11d1a09e */
  push32(0x11d1a278u); f_11d1a09e();
  /* 11d1a278 pop ecx */
  ECX = (pop32());
  /* 11d1a279 mov eax, esi */
  EAX = (ESI);
  /* 11d1a27b pop esi */
  ESI = (pop32());
  /* 11d1a27c ret  */
  ESPCHK(0x11d1a23eu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a27d @ 0x11d1a27d (28 bytes, 11 insns) */
void f_11d1a27d(void) {
  FTRACE(0x11d1a27du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1a27d push esi */
  push32((uint32_t)(ESI));
  /* 11d1a27e mov esi, ecx */
  ESI = (ECX);
  /* 11d1a280 call 0x11d1a299 */
  push32(0x11d1a285u); f_11d1a299();
  /* 11d1a285 test byte ptr [esp + 8], 1 */
  { uint32_t _r=(r8((uint32_t)(ESP + 0x8)))&(0x1u); fl_logic(_r,8); }
  /* 11d1a28a je 0x11d1a293 */
  if (C.zf) goto L_11d1a293;
  /* 11d1a28c push esi */
  push32((uint32_t)(ESI));
  /* 11d1a28d call 0x11d1a4f0 */
  push32(0x11d1a292u); f_11d1a4f0();
  /* 11d1a292 pop ecx */
  ECX = (pop32());
L_11d1a293:;
  /* 11d1a293 mov eax, esi */
  EAX = (ESI);
  /* 11d1a295 pop esi */
  ESI = (pop32());
  /* 11d1a296 ret 4 */
  ESPCHK(0x11d1a27du, _esp0);
  ESP += 8; return;
}

/* FUN_1000a299 @ 0x11d1a299 (48 bytes, 19 insns) */
void f_11d1a299(void) {
  FTRACE(0x11d1a299u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1a299 push esi */
  push32((uint32_t)(ESI));
  /* 11d1a29a mov esi, ecx */
  ESI = (ECX);
  /* 11d1a29c lea eax, [esi + 0x34] */
  EAX = ((uint32_t)(ESI + 0x34));
  /* 11d1a29f mov dword ptr [esi], 0x11d1c8d4 */
  w32((uint32_t)(ESI), (0x11d1c8d4u));
  /* 11d1a2a5 push eax */
  push32((uint32_t)(EAX));
  /* 11d1a2a6 call 0x11d1a0a9 */
  push32(0x11d1a2abu); f_11d1a0a9();
  /* 11d1a2ab pop ecx */
  ECX = (pop32());
  /* 11d1a2ac mov ecx, esi */
  ECX = (ESI);
  /* 11d1a2ae call 0x11d1a3ea */
  push32(0x11d1a2b3u); f_11d1a3ea();
  /* 11d1a2b3 cmp dword ptr [esi + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1a2b7 je 0x11d1a2c7 */
  if (C.zf) goto L_11d1a2c7;
  /* 11d1a2b9 mov esi, dword ptr [esi + 0x10] */
  ESI = (r32((uint32_t)(ESI + 0x10)));
  /* 11d1a2bc test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11d1a2be je 0x11d1a2c7 */
  if (C.zf) goto L_11d1a2c7;
  /* 11d1a2c0 push esi */
  push32((uint32_t)(ESI));
  /* 11d1a2c1 call 0x11d1a4f0 */
  push32(0x11d1a2c6u); f_11d1a4f0();
  /* 11d1a2c6 pop ecx */
  ECX = (pop32());
L_11d1a2c7:;
  /* 11d1a2c7 pop esi */
  ESI = (pop32());
  /* 11d1a2c8 ret  */
  ESPCHK(0x11d1a299u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2fd @ 0x11d1a2fd (86 bytes, 42 insns) */
void f_11d1a2fd(void) {
  FTRACE(0x11d1a2fdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1a2fd push ebp */
  push32((uint32_t)(EBP));
  /* 11d1a2fe mov ebp, esp */
  EBP = (ESP);
  /* 11d1a300 push ecx */
  push32((uint32_t)(ECX));
  /* 11d1a301 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11d1a305 push ebx */
  push32((uint32_t)(EBX));
  /* 11d1a306 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d1a309 push esi */
  push32((uint32_t)(ESI));
  /* 11d1a30a mov eax, ebx */
  EAX = (EBX);
  /* 11d1a30c dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11d1a30d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1a30f push edi */
  push32((uint32_t)(EDI));
  /* 11d1a310 mov esi, ecx */
  ESI = (ECX);
  /* 11d1a312 je 0x11d1a349 */
  if (C.zf) goto L_11d1a349;
  /* 11d1a314 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
L_11d1a317:;
  /* 11d1a317 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1a31b jne 0x11d1a32e */
  if (!C.zf) goto L_11d1a32e;
  /* 11d1a31d mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 11d1a320 cmp eax, dword ptr [esi + 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1a323 jae 0x11d1a32e */
  if (!C.cf) goto L_11d1a32e;
  /* 11d1a325 mov cl, byte ptr [edi] */
  CL = (r8((uint32_t)(EDI)));
  /* 11d1a327 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11d1a329 inc dword ptr [esi + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x1c)))+1; w32((uint32_t)(ESI + 0x1c), (_r)); fl_inc(_r,32); }
  /* 11d1a32c jmp 0x11d1a33e */
  goto L_11d1a33e;
L_11d1a32e:;
  /* 11d1a32e movzx ecx, byte ptr [edi] */
  ECX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11d1a331 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11d1a333 push ecx */
  push32((uint32_t)(ECX));
  /* 11d1a334 mov ecx, esi */
  ECX = (ESI);
  /* 11d1a336 call dword ptr [eax + 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x1c))), 0x11d1a339u);
  /* 11d1a339 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1a33c je 0x11d1a349 */
  if (C.zf) goto L_11d1a349;
L_11d1a33e:;
  /* 11d1a33e inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d1a33f inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11d1a342 mov eax, ebx */
  EAX = (EBX);
  /* 11d1a344 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11d1a345 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1a347 jne 0x11d1a317 */
  if (!C.zf) goto L_11d1a317;
L_11d1a349:;
  /* 11d1a349 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d1a34c pop edi */
  EDI = (pop32());
  /* 11d1a34d pop esi */
  ESI = (pop32());
  /* 11d1a34e pop ebx */
  EBX = (pop32());
  /* 11d1a34f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d1a350 ret 8 */
  ESPCHK(0x11d1a2fdu, _esp0);
  ESP += 12; return;
}

/* FUN_1000a353 @ 0x11d1a353 (151 bytes, 67 insns) */
void f_11d1a353(void) {
  FTRACE(0x11d1a353u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1a353 push ebp */
  push32((uint32_t)(EBP));
  /* 11d1a354 mov ebp, esp */
  EBP = (ESP);
  /* 11d1a356 push ecx */
  push32((uint32_t)(ECX));
  /* 11d1a357 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11d1a35b push ebx */
  push32((uint32_t)(EBX));
  /* 11d1a35c push esi */
  push32((uint32_t)(ESI));
  /* 11d1a35d mov esi, ecx */
  ESI = (ECX);
  /* 11d1a35f push edi */
  push32((uint32_t)(EDI));
  /* 11d1a360 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1a364 je 0x11d1a3ab */
  if (C.zf) goto L_11d1a3ab;
  /* 11d1a366 cmp dword ptr [esi + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1a36a jne 0x11d1a374 */
  if (!C.zf) goto L_11d1a374;
  /* 11d1a36c mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11d1a36e call dword ptr [eax + 0x20] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x20))), 0x11d1a371u);
  /* 11d1a371 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_11d1a374:;
  /* 11d1a374 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d1a377 mov eax, ebx */
  EAX = (EBX);
  /* 11d1a379 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11d1a37a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1a37c je 0x11d1a3a1 */
  if (C.zf) goto L_11d1a3a1;
  /* 11d1a37e mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
L_11d1a381:;
  /* 11d1a381 cmp dword ptr [esi + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1a385 je 0x11d1a3a1 */
  if (C.zf) goto L_11d1a3a1;
  /* 11d1a387 mov al, byte ptr [esi + 0xc] */
  AL = (r8((uint32_t)(ESI + 0xc)));
  /* 11d1a38a mov ecx, esi */
  ECX = (ESI);
  /* 11d1a38c mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11d1a38e mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11d1a390 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11d1a391 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11d1a394 call dword ptr [eax + 0x20] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x20))), 0x11d1a397u);
  /* 11d1a397 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11d1a39a mov eax, ebx */
  EAX = (EBX);
  /* 11d1a39c dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11d1a39d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1a39f jne 0x11d1a381 */
  if (!C.zf) goto L_11d1a381;
L_11d1a3a1:;
  /* 11d1a3a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d1a3a4 pop edi */
  EDI = (pop32());
  /* 11d1a3a5 pop esi */
  ESI = (pop32());
  /* 11d1a3a6 pop ebx */
  EBX = (pop32());
  /* 11d1a3a7 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d1a3a8 ret 8 */
  ESPCHK(0x11d1a353u, _esp0);
  ESP += 12; return;
L_11d1a3ab:;
  /* 11d1a3ab mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
L_11d1a3ae:;
  /* 11d1a3ae test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11d1a3b0 je 0x11d1a3a1 */
  if (C.zf) goto L_11d1a3a1;
  /* 11d1a3b2 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11d1a3b4 mov ecx, esi */
  ECX = (ESI);
  /* 11d1a3b6 call dword ptr [eax + 0x20] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x20))), 0x11d1a3b9u);
  /* 11d1a3b9 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1a3bc je 0x11d1a3a1 */
  if (C.zf) goto L_11d1a3a1;
  /* 11d1a3be mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 11d1a3c1 mov edi, dword ptr [esi + 0x2c] */
  EDI = (r32((uint32_t)(ESI + 0x2c)));
  /* 11d1a3c4 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d1a3c6 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1a3c8 jl 0x11d1a3cc */
  if ((C.sf!=C.of)) goto L_11d1a3cc;
  /* 11d1a3ca mov edi, ebx */
  EDI = (EBX);
L_11d1a3cc:;
  /* 11d1a3cc test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11d1a3ce jle 0x11d1a3ae */
  if ((C.zf||C.sf!=C.of)) goto L_11d1a3ae;
  /* 11d1a3d0 push edi */
  push32((uint32_t)(EDI));
  /* 11d1a3d1 push eax */
  push32((uint32_t)(EAX));
  /* 11d1a3d2 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11d1a3d5 call 0x11d169a0 */
  push32(0x11d1a3dau); f_11d169a0();
  /* 11d1a3da add dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11d1a3dd add dword ptr [esi + 0x28], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x28))),_b=(EDI),_r=_a+_b; w32((uint32_t)(ESI + 0x28), (_r)); fl_add(_a,_b,_r,32); }
  /* 11d1a3e0 add dword ptr [ebp - 4], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDI),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11d1a3e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1a3e6 sub ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d1a3e8 jmp 0x11d1a3ae */
  goto L_11d1a3ae;
}

/* FUN_1000a3ea @ 0x11d1a3ea (23 bytes, 10 insns) */
void f_11d1a3ea(void) {
  FTRACE(0x11d1a3eau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1a3ea mov eax, dword ptr [ecx + 0x28] */
  EAX = (r32((uint32_t)(ECX + 0x28)));
  /* 11d1a3ed cmp eax, dword ptr [ecx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1a3f0 jb 0x11d1a3fd */
  if (C.cf) goto L_11d1a3fd;
  /* 11d1a3f2 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11d1a3f5 cmp eax, dword ptr [ecx + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1a3f8 ja 0x11d1a3fd */
  if ((!C.cf&&!C.zf)) goto L_11d1a3fd;
  /* 11d1a3fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d1a3fc ret  */
  ESPCHK(0x11d1a3eau, _esp0);
  ESP += 4; return;
L_11d1a3fd:;
  /* 11d1a3fd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d1a400 ret  */
  ESPCHK(0x11d1a3eau, _esp0);
  ESP += 4; return;
}

/* FUN_1000a401 @ 0x11d1a401 (30 bytes, 14 insns) */
void f_11d1a401(void) {
  FTRACE(0x11d1a401u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1a401 cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1a405 jne 0x11d1a41c */
  if (!C.zf) goto L_11d1a41c;
  /* 11d1a407 cmp dword ptr [ecx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1a40b jne 0x11d1a41c */
  if (!C.zf) goto L_11d1a41c;
  /* 11d1a40d mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11d1a40f call dword ptr [eax + 0x28] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x28))), 0x11d1a412u);
  /* 11d1a412 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11d1a413 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11d1a415 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d1a417 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 11d1a41a dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11d1a41b ret  */
  ESPCHK(0x11d1a401u, _esp0);
  ESP += 4; return;
L_11d1a41c:;
  /* 11d1a41c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d1a41e ret  */
  ESPCHK(0x11d1a401u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a41f @ 0x11d1a41f (45 bytes, 20 insns) */
void f_11d1a41f(void) {
  FTRACE(0x11d1a41fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1a41f push esi */
  push32((uint32_t)(ESI));
  /* 11d1a420 mov esi, ecx */
  ESI = (ECX);
  /* 11d1a422 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11d1a427 call 0x11d1a547 */
  push32(0x11d1a42cu); f_11d1a547();
  /* 11d1a42c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1a42e pop ecx */
  ECX = (pop32());
  /* 11d1a42f jne 0x11d1a436 */
  if (!C.zf) goto L_11d1a436;
  /* 11d1a431 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d1a434 pop esi */
  ESI = (pop32());
  /* 11d1a435 ret  */
  ESPCHK(0x11d1a41fu, _esp0);
  ESP += 4; return;
L_11d1a436:;
  /* 11d1a436 lea ecx, [eax + 0x200] */
  ECX = ((uint32_t)(EAX + 0x200));
  /* 11d1a43c push 1 */
  push32((uint32_t)(0x1u));
  /* 11d1a43e push ecx */
  push32((uint32_t)(ECX));
  /* 11d1a43f push eax */
  push32((uint32_t)(EAX));
  /* 11d1a440 mov ecx, esi */
  ECX = (ESI);
  /* 11d1a442 call 0x11d1a44c */
  push32(0x11d1a447u); f_11d1a44c();
  /* 11d1a447 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d1a449 pop eax */
  EAX = (pop32());
  /* 11d1a44a pop esi */
  ESI = (pop32());
  /* 11d1a44b ret  */
  ESPCHK(0x11d1a41fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a44c @ 0x11d1a44c (48 bytes, 18 insns) */
void f_11d1a44c(void) {
  FTRACE(0x11d1a44cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1a44c push esi */
  push32((uint32_t)(ESI));
  /* 11d1a44d mov esi, ecx */
  ESI = (ECX);
  /* 11d1a44f cmp dword ptr [esi + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1a453 je 0x11d1a463 */
  if (C.zf) goto L_11d1a463;
  /* 11d1a455 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11d1a458 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1a45a je 0x11d1a463 */
  if (C.zf) goto L_11d1a463;
  /* 11d1a45c push eax */
  push32((uint32_t)(EAX));
  /* 11d1a45d call 0x11d1a4f0 */
  push32(0x11d1a462u); f_11d1a4f0();
  /* 11d1a462 pop ecx */
  ECX = (pop32());
L_11d1a463:;
  /* 11d1a463 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d1a467 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 11d1a46a mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11d1a46e mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 11d1a471 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11d1a475 mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 11d1a478 pop esi */
  ESI = (pop32());
  /* 11d1a479 ret 0xc */
  ESPCHK(0x11d1a44cu, _esp0);
  ESP += 16; return;
}

/* FUN_1000a494 @ 0x11d1a494 (92 bytes, 40 insns) */
void f_11d1a494(void) {
  FTRACE(0x11d1a494u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1a494 push esi */
  push32((uint32_t)(ESI));
  /* 11d1a495 mov esi, ecx */
  ESI = (ECX);
  /* 11d1a497 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 11d1a49a cmp eax, dword ptr [esi + 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1a49d jae 0x11d1a4aa */
  if (!C.cf) goto L_11d1a4aa;
  /* 11d1a49f push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11d1a4a3 call 0x11d1a17a */
  push32(0x11d1a4a8u); f_11d1a17a();
  /* 11d1a4a8 jmp 0x11d1a4ec */
  goto L_11d1a4ec;
L_11d1a4aa:;
  /* 11d1a4aa mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11d1a4ac push 1 */
  push32((uint32_t)(0x1u));
  /* 11d1a4ae push 1 */
  push32((uint32_t)(0x1u));
  /* 11d1a4b0 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d1a4b2 mov ecx, esi */
  ECX = (ESI);
  /* 11d1a4b4 call dword ptr [eax + 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0xc))), 0x11d1a4b7u);
  /* 11d1a4b7 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1a4ba jne 0x11d1a4c0 */
  if (!C.zf) goto L_11d1a4c0;
  /* 11d1a4bc or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d1a4be jmp 0x11d1a4ec */
  goto L_11d1a4ec;
L_11d1a4c0:;
  /* 11d1a4c0 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1a4c4 push ebx */
  push32((uint32_t)(EBX));
  /* 11d1a4c5 mov ebx, dword ptr [esp + 0xc] */
  EBX = (r32((uint32_t)(ESP + 0xc)));
  /* 11d1a4c9 jne 0x11d1a4e9 */
  if (!C.zf) goto L_11d1a4e9;
  /* 11d1a4cb mov eax, dword ptr [esi + 0x2c] */
  EAX = (r32((uint32_t)(ESI + 0x2c)));
  /* 11d1a4ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1a4d0 je 0x11d1a4e9 */
  if (C.zf) goto L_11d1a4e9;
  /* 11d1a4d2 mov ecx, dword ptr [esi + 0x28] */
  ECX = (r32((uint32_t)(ESI + 0x28)));
  /* 11d1a4d5 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d1a4d7 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11d1a4d8 push eax */
  push32((uint32_t)(EAX));
  /* 11d1a4d9 push ecx */
  push32((uint32_t)(ECX));
  /* 11d1a4da inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11d1a4db push ecx */
  push32((uint32_t)(ECX));
  /* 11d1a4dc call 0x11d152a0 */
  push32(0x11d1a4e1u); f_11d152a0();
  /* 11d1a4e1 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 11d1a4e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1a4e7 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
L_11d1a4e9:;
  /* 11d1a4e9 mov eax, ebx */
  EAX = (EBX);
  /* 11d1a4eb pop ebx */
  EBX = (pop32());
L_11d1a4ec:;
  /* 11d1a4ec pop esi */
  ESI = (pop32());
  /* 11d1a4ed ret 4 */
  ESPCHK(0x11d1a494u, _esp0);
  ESP += 8; return;
}

/* FUN_1000a4f0 @ 0x11d1a4f0 (11 bytes, 4 insns) */
void f_11d1a4f0(void) {
  FTRACE(0x11d1a4f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1a4f0 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11d1a4f4 call 0x11d16cd5 */
  push32(0x11d1a4f9u); f_11d16cd5();
  /* 11d1a4f9 pop ecx */
  ECX = (pop32());
  /* 11d1a4fa ret  */
  ESPCHK(0x11d1a4f0u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x11d1a4fc (6 bytes, 1 insns) */
void f_11d1a4fc(void) {
  FTRACE(0x11d1a4fcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1a4fc jmp dword ptr [0x11d1c054] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11d1c054)))); return;
}

/* FUN_1000a502 @ 0x11d1a502 (41 bytes, 17 insns) */
void f_11d1a502(void) {
  FTRACE(0x11d1a502u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1a502 push esi */
  push32((uint32_t)(ESI));
  /* 11d1a503 mov esi, ecx */
  ESI = (ECX);
  /* 11d1a505 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11d1a507 mov dword ptr [esi], 0x11d1c904 */
  w32((uint32_t)(ESI), (0x11d1c904u));
  /* 11d1a50d call 0x11d156f9 */
  push32(0x11d1a512u); f_11d156f9();
  /* 11d1a512 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 11d1a515 pop ecx */
  ECX = (pop32());
  /* 11d1a516 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11d1a518 je 0x11d1a521 */
  if (C.zf) goto L_11d1a521;
  /* 11d1a51a push esi */
  push32((uint32_t)(ESI));
  /* 11d1a51b call 0x11d16cd5 */
  push32(0x11d1a520u); f_11d16cd5();
  /* 11d1a520 pop ecx */
  ECX = (pop32());
L_11d1a521:;
  /* 11d1a521 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11d1a523 call 0x11d1575a */
  push32(0x11d1a528u); f_11d1575a();
  /* 11d1a528 pop ecx */
  ECX = (pop32());
  /* 11d1a529 pop esi */
  ESI = (pop32());
  /* 11d1a52a ret  */
  ESPCHK(0x11d1a502u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a52b @ 0x11d1a52b (28 bytes, 11 insns) */
void f_11d1a52b(void) {
  FTRACE(0x11d1a52bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1a52b push esi */
  push32((uint32_t)(ESI));
  /* 11d1a52c mov esi, ecx */
  ESI = (ECX);
  /* 11d1a52e call 0x11d1a502 */
  push32(0x11d1a533u); f_11d1a502();
  /* 11d1a533 test byte ptr [esp + 8], 1 */
  { uint32_t _r=(r8((uint32_t)(ESP + 0x8)))&(0x1u); fl_logic(_r,8); }
  /* 11d1a538 je 0x11d1a541 */
  if (C.zf) goto L_11d1a541;
  /* 11d1a53a push esi */
  push32((uint32_t)(ESI));
  /* 11d1a53b call 0x11d1a4f0 */
  push32(0x11d1a540u); f_11d1a4f0();
  /* 11d1a540 pop ecx */
  ECX = (pop32());
L_11d1a541:;
  /* 11d1a541 mov eax, esi */
  EAX = (ESI);
  /* 11d1a543 pop esi */
  ESI = (pop32());
  /* 11d1a544 ret 4 */
  ESPCHK(0x11d1a52bu, _esp0);
  ESP += 8; return;
}

/* operator_new @ 0x11d1a547 (14 bytes, 6 insns) */
void f_11d1a547(void) {
  FTRACE(0x11d1a547u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1a547 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d1a549 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11d1a54d call 0x11d13bc2 */
  push32(0x11d1a552u); f_11d13bc2();
  /* 11d1a552 pop ecx */
  ECX = (pop32());
  /* 11d1a553 pop ecx */
  ECX = (pop32());
  /* 11d1a554 ret  */
  ESPCHK(0x11d1a547u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a555 @ 0x11d1a555 (45 bytes, 17 insns) */
void f_11d1a555(void) {
  FTRACE(0x11d1a555u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1a555 push ebp */
  push32((uint32_t)(EBP));
  /* 11d1a556 mov ebp, esp */
  EBP = (ESP);
  /* 11d1a558 push ecx */
  push32((uint32_t)(ECX));
  /* 11d1a559 push ebx */
  push32((uint32_t)(EBX));
  /* 11d1a55a push esi */
  push32((uint32_t)(ESI));
  /* 11d1a55b push edi */
  push32((uint32_t)(EDI));
  /* 11d1a55c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d1a55f add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1a562 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d1a565 mov ebx, dword ptr fs:[0] */
  EBX = (r32((uint32_t)(0x0)));
  /* 11d1a56c mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11d1a56e mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 11d1a574 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d1a577 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d1a57a mov esp, dword ptr [ebx - 4] */
  ESP = (r32((uint32_t)(EBX + -0x4)));
  /* 11d1a57d mov ebp, dword ptr [ebp - 4] */
  EBP = (r32((uint32_t)(EBP + -0x4)));
  /* 11d1a580 jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_1000a589 @ 0x11d1a589 (7 bytes, 4 insns) */
void f_11d1a589(void) {
  FTRACE(0x11d1a589u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1a589 pop eax */
  EAX = (pop32());
  /* 11d1a58a pop ecx */
  ECX = (pop32());
  /* 11d1a58b xchg dword ptr [esp], eax */
  { uint32_t _t=(r32((uint32_t)(ESP))); w32((uint32_t)(ESP), (EAX)); EAX = (_t); }
  /* 11d1a58e jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_1000a590 @ 0x11d1a590 (7 bytes, 4 insns) */
void f_11d1a590(void) {
  FTRACE(0x11d1a590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1a590 pop eax */
  EAX = (pop32());
  /* 11d1a591 pop ecx */
  ECX = (pop32());
  /* 11d1a592 xchg dword ptr [esp], eax */
  { uint32_t _t=(r32((uint32_t)(ESP))); w32((uint32_t)(ESP), (EAX)); EAX = (_t); }
  /* 11d1a595 jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_1000a597 @ 0x11d1a597 (79 bytes, 29 insns) */
void f_11d1a597(void) {
  FTRACE(0x11d1a597u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1a597 push ebp */
  push32((uint32_t)(EBP));
  /* 11d1a598 mov ebp, esp */
  EBP = (ESP);
  /* 11d1a59a push ecx */
  push32((uint32_t)(ECX));
  /* 11d1a59b push ecx */
  push32((uint32_t)(ECX));
  /* 11d1a59c push ebx */
  push32((uint32_t)(EBX));
  /* 11d1a59d push esi */
  push32((uint32_t)(ESI));
  /* 11d1a59e push edi */
  push32((uint32_t)(EDI));
  /* 11d1a59f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11d1a5a5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d1a5a8 mov dword ptr [ebp - 4], 0x11d1a5bf */
  w32((uint32_t)(EBP + -0x4), (0x11d1a5bfu));
  /* 11d1a5af push 0 */
  push32((uint32_t)(0x0u));
  /* 11d1a5b1 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11d1a5b4 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11d1a5b7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11d1a5ba call 0x11d1a4fc */
  push32(0x11d1a5bfu); f_11d1a4fc();
  /* 11d1a5bf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d1a5c2 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d1a5c5 and al, 0xfd */
  { uint32_t _r=(AL)&(0xfdu); AL = (_r); fl_logic(_r,8); }
  /* 11d1a5c7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d1a5ca mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11d1a5cd mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11d1a5d3 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d1a5d6 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 11d1a5d8 mov dword ptr fs:[0], ebx */
  w32((uint32_t)(0x0), (EBX));
  /* 11d1a5df pop edi */
  EDI = (pop32());
  /* 11d1a5e0 pop esi */
  ESI = (pop32());
  /* 11d1a5e1 pop ebx */
  EBX = (pop32());
  /* 11d1a5e2 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d1a5e3 ret 8 */
  ESPCHK(0x11d1a597u, _esp0);
  ESP += 12; return;
}

/* FUN_1000a5e6 @ 0x11d1a5e6 (54 bytes, 27 insns) */
void f_11d1a5e6(void) {
  FTRACE(0x11d1a5e6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1a5e6 push ebp */
  push32((uint32_t)(EBP));
  /* 11d1a5e7 mov ebp, esp */
  EBP = (ESP);
  /* 11d1a5e9 sub esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d1a5ec push ebx */
  push32((uint32_t)(EBX));
  /* 11d1a5ed push esi */
  push32((uint32_t)(ESI));
  /* 11d1a5ee push edi */
  push32((uint32_t)(EDI));
  /* 11d1a5ef cld  */
  C.df=0;
  /* 11d1a5f0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d1a5f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d1a5f5 push eax */
  push32((uint32_t)(EAX));
  /* 11d1a5f6 push eax */
  push32((uint32_t)(EAX));
  /* 11d1a5f7 push eax */
  push32((uint32_t)(EAX));
  /* 11d1a5f8 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11d1a5fb push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11d1a5fe push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11d1a601 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11d1a604 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11d1a607 call 0x11d1aaa2 */
  push32(0x11d1a60cu); f_11d1aaa2();
  /* 11d1a60c add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1a60f mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
  /* 11d1a612 pop edi */
  EDI = (pop32());
  /* 11d1a613 pop esi */
  ESI = (pop32());
  /* 11d1a614 pop ebx */
  EBX = (pop32());
  /* 11d1a615 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d1a618 mov esp, ebp */
  ESP = (EBP);
  /* 11d1a61a pop ebp */
  EBP = (pop32());
  /* 11d1a61b ret  */
  ESPCHK(0x11d1a5e6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a61c @ 0x11d1a61c (84 bytes, 26 insns) */
void f_11d1a61c(void) {
  FTRACE(0x11d1a61cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1a61c push ebp */
  push32((uint32_t)(EBP));
  /* 11d1a61d mov ebp, esp */
  EBP = (ESP);
  /* 11d1a61f sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d1a622 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d1a625 and dword ptr [ebp - 0x14], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x14)))&(0x0u); w32((uint32_t)(EBP + -0x14), (_r)); fl_logic(_r,32); }
  /* 11d1a629 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d1a62c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d1a62f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d1a632 mov dword ptr [ebp - 0x10], 0x11d1a670 */
  w32((uint32_t)(EBP + -0x10), (0x11d1a670u));
  /* 11d1a639 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11d1a63a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d1a63d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d1a640 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11d1a646 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11d1a649 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11d1a64f mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 11d1a655 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11d1a658 push ecx */
  push32((uint32_t)(ECX));
  /* 11d1a659 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11d1a65c call 0x11d1b2c0 */
  push32(0x11d1a661u); f_11d1b2c0();
  /* 11d1a661 mov ecx, eax */
  ECX = (EAX);
  /* 11d1a663 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d1a666 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 11d1a66c mov eax, ecx */
  EAX = (ECX);
  /* 11d1a66e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d1a66f ret  */
  ESPCHK(0x11d1a61cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a670 @ 0x11d1a670 (37 bytes, 16 insns) */
void f_11d1a670(void) {
  FTRACE(0x11d1a670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1a670 push ebp */
  push32((uint32_t)(EBP));
  /* 11d1a671 mov ebp, esp */
  EBP = (ESP);
  /* 11d1a673 cld  */
  C.df=0;
  /* 11d1a674 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d1a677 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d1a679 push eax */
  push32((uint32_t)(EAX));
  /* 11d1a67a push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 11d1a67d push dword ptr [eax + 8] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x8))));
  /* 11d1a680 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d1a682 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11d1a685 push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 11d1a688 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11d1a68b call 0x11d1aaa2 */
  push32(0x11d1a690u); f_11d1aaa2();
  /* 11d1a690 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1a693 pop ebp */
  EBP = (pop32());
  /* 11d1a694 ret  */
  ESPCHK(0x11d1a670u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a695 @ 0x11d1a695 (182 bytes, 57 insns) */
void f_11d1a695(void) {
  FTRACE(0x11d1a695u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1a695 push ebp */
  push32((uint32_t)(EBP));
  /* 11d1a696 mov ebp, esp */
  EBP = (ESP);
  /* 11d1a698 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d1a69b push ebx */
  push32((uint32_t)(EBX));
  /* 11d1a69c push esi */
  push32((uint32_t)(ESI));
  /* 11d1a69d push edi */
  push32((uint32_t)(EDI));
  /* 11d1a69e and dword ptr [ebp - 0x28], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x28)))&(0x0u); w32((uint32_t)(EBP + -0x28), (_r)); fl_logic(_r,32); }
  /* 11d1a6a2 mov dword ptr [ebp - 0x24], 0x11d1a74b */
  w32((uint32_t)(EBP + -0x24), (0x11d1a74bu));
  /* 11d1a6a9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d1a6ac mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11d1a6af mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d1a6b2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11d1a6b5 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11d1a6b8 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11d1a6bb mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11d1a6be mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11d1a6c1 and dword ptr [ebp - 0x10], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))&(0x0u); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 11d1a6c5 and dword ptr [ebp - 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))&(0x0u); w32((uint32_t)(EBP + -0xc), (_r)); fl_logic(_r,32); }
  /* 11d1a6c9 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11d1a6cd and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11d1a6d1 mov dword ptr [ebp - 0x10], 0x11d1a71d */
  w32((uint32_t)(EBP + -0x10), (0x11d1a71du));
  /* 11d1a6d8 mov dword ptr [ebp - 0xc], esp */
  w32((uint32_t)(EBP + -0xc), (ESP));
  /* 11d1a6db mov dword ptr [ebp - 8], ebp */
  w32((uint32_t)(EBP + -0x8), (EBP));
  /* 11d1a6de mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11d1a6e4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11d1a6e7 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11d1a6ed mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 11d1a6f3 mov dword ptr [ebp - 0x34], 1 */
  w32((uint32_t)(EBP + -0x34), (0x1u));
  /* 11d1a6fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d1a6fd mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11d1a700 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d1a703 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11d1a706 lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 11d1a709 push eax */
  push32((uint32_t)(EAX));
  /* 11d1a70a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d1a70d push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 11d1a70f call 0x11d13d6f */
  push32(0x11d1a714u); f_11d13d6f();
  /* 11d1a714 call dword ptr [eax + 0x68] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x68))), 0x11d1a717u);
  /* 11d1a717 pop ecx */
  ECX = (pop32());
  /* 11d1a718 pop ecx */
  ECX = (pop32());
  /* 11d1a719 and dword ptr [ebp - 0x34], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x34)))&(0x0u); w32((uint32_t)(EBP + -0x34), (_r)); fl_logic(_r,32); }
  /* 11d1a71d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1a721 je 0x11d1a73a */
  if (C.zf) goto L_11d1a73a;
  /* 11d1a723 mov ebx, dword ptr fs:[0] */
  EBX = (r32((uint32_t)(0x0)));
  /* 11d1a72a mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11d1a72c mov ebx, dword ptr [ebp - 0x28] */
  EBX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d1a72f mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 11d1a731 mov dword ptr fs:[0], ebx */
  w32((uint32_t)(0x0), (EBX));
  /* 11d1a738 jmp 0x11d1a743 */
  goto L_11d1a743;
L_11d1a73a:;
  /* 11d1a73a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d1a73d mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
L_11d1a743:;
  /* 11d1a743 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11d1a746 pop edi */
  EDI = (pop32());
  /* 11d1a747 pop esi */
  ESI = (pop32());
  /* 11d1a748 pop ebx */
  EBX = (pop32());
  /* 11d1a749 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d1a74a ret  */
  ESPCHK(0x11d1a695u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a74b @ 0x11d1a74b (114 bytes, 47 insns) */
void f_11d1a74b(void) {
  FTRACE(0x11d1a74bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1a74b push ebp */
  push32((uint32_t)(EBP));
  /* 11d1a74c mov ebp, esp */
  EBP = (ESP);
  /* 11d1a74e push ebx */
  push32((uint32_t)(EBX));
  /* 11d1a74f push esi */
  push32((uint32_t)(ESI));
  /* 11d1a750 push edi */
  push32((uint32_t)(EDI));
  /* 11d1a751 cld  */
  C.df=0;
  /* 11d1a752 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d1a755 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11d1a758 and eax, 0x66 */
  { uint32_t _r=(EAX)&(0x66u); EAX = (_r); fl_logic(_r,32); }
  /* 11d1a75b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1a75d je 0x11d1a76e */
  if (C.zf) goto L_11d1a76e;
  /* 11d1a75f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d1a762 mov dword ptr [eax + 0x24], 1 */
  w32((uint32_t)(EAX + 0x24), (0x1u));
  /* 11d1a769 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d1a76b pop eax */
  EAX = (pop32());
  /* 11d1a76c jmp 0x11d1a7bb */
  goto L_11d1a7bb;
L_11d1a76e:;
  /* 11d1a76e push 1 */
  push32((uint32_t)(0x1u));
  /* 11d1a770 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d1a773 push dword ptr [eax + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x14))));
  /* 11d1a776 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d1a779 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 11d1a77c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d1a77f push dword ptr [eax + 8] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x8))));
  /* 11d1a782 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d1a784 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11d1a787 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d1a78a push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 11d1a78d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11d1a790 call 0x11d1aaa2 */
  push32(0x11d1a795u); f_11d1aaa2();
  /* 11d1a795 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1a798 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d1a79b cmp dword ptr [eax + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1a79f jne 0x11d1a7ac */
  if (!C.zf) goto L_11d1a7ac;
  /* 11d1a7a1 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11d1a7a4 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11d1a7a7 call 0x11d1a597 */
  push32(0x11d1a7acu); f_11d1a597();
L_11d1a7ac:;
  /* 11d1a7ac mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d1a7af mov esp, dword ptr [ebx + 0x1c] */
  ESP = (r32((uint32_t)(EBX + 0x1c)));
  /* 11d1a7b2 mov ebp, dword ptr [ebx + 0x20] */
  EBP = (r32((uint32_t)(EBX + 0x20)));
  /* 11d1a7b5 jmp dword ptr [ebx + 0x18] */
  jmp_ind((uint32_t)(r32((uint32_t)(EBX + 0x18)))); return;
  /* 11d1a7b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d1a7ba pop eax */
  EAX = (pop32());
L_11d1a7bb:;
  /* 11d1a7bb pop edi */
  EDI = (pop32());
  /* 11d1a7bc pop esi */
  ESI = (pop32());
  /* 11d1a7bd pop ebx */
  EBX = (pop32());
  /* 11d1a7be pop ebp */
  EBP = (pop32());
  /* 11d1a7bf ret  */
  ESPCHK(0x11d1a74bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a7c0 @ 0x11d1a7c0 (123 bytes, 51 insns) */
void f_11d1a7c0(void) {
  FTRACE(0x11d1a7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1a7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d1a7c1 mov ebp, esp */
  EBP = (ESP);
  /* 11d1a7c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d1a7c4 push ebx */
  push32((uint32_t)(EBX));
  /* 11d1a7c5 push esi */
  push32((uint32_t)(ESI));
  /* 11d1a7c6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1a7ca push edi */
  push32((uint32_t)(EDI));
  /* 11d1a7cb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11d1a7ce mov esi, dword ptr [edi + 0xc] */
  ESI = (r32((uint32_t)(EDI + 0xc)));
  /* 11d1a7d1 mov ebx, dword ptr [edi + 0x10] */
  EBX = (r32((uint32_t)(EDI + 0x10)));
  /* 11d1a7d4 mov eax, esi */
  EAX = (ESI);
  /* 11d1a7d6 mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 11d1a7d9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d1a7dc jl 0x11d1a817 */
  if ((C.sf!=C.of)) goto L_11d1a817;
L_11d1a7de:;
  /* 11d1a7de cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1a7e1 jne 0x11d1a7e8 */
  if (!C.zf) goto L_11d1a7e8;
  /* 11d1a7e3 call 0x11d1b36d */
  push32(0x11d1a7e8u); f_11d1b36d();
L_11d1a7e8:;
  /* 11d1a7e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d1a7eb dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11d1a7ec lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 11d1a7ef cmp dword ptr [ebx + eax*4 + 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBX + EAX*4 + 0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1a7f3 lea eax, [ebx + eax*4] */
  EAX = ((uint32_t)(EBX + EAX*4));
  /* 11d1a7f6 jge 0x11d1a7fd */
  if ((C.sf==C.of)) goto L_11d1a7fd;
  /* 11d1a7f8 cmp ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1a7fb jle 0x11d1a802 */
  if ((C.zf||C.sf!=C.of)) goto L_11d1a802;
L_11d1a7fd:;
  /* 11d1a7fd cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1a800 jne 0x11d1a80e */
  if (!C.zf) goto L_11d1a80e;
L_11d1a802:;
  /* 11d1a802 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d1a805 dec dword ptr [ebp + 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))-1; w32((uint32_t)(EBP + 0xc), (_r)); fl_dec(_r,32); }
  /* 11d1a808 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d1a80b mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
L_11d1a80e:;
  /* 11d1a80e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1a812 jge 0x11d1a7de */
  if ((C.sf==C.of)) goto L_11d1a7de;
  /* 11d1a814 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11d1a817:;
  /* 11d1a817 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d1a81a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11d1a81b mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
  /* 11d1a81d mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d1a820 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11d1a822 cmp eax, dword ptr [edi + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDI + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1a825 ja 0x11d1a82b */
  if ((!C.cf&&!C.zf)) goto L_11d1a82b;
  /* 11d1a827 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1a829 jbe 0x11d1a830 */
  if ((C.cf||C.zf)) goto L_11d1a830;
L_11d1a82b:;
  /* 11d1a82b call 0x11d1b36d */
  push32(0x11d1a830u); f_11d1b36d();
L_11d1a830:;
  /* 11d1a830 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 11d1a833 pop edi */
  EDI = (pop32());
  /* 11d1a834 pop esi */
  ESI = (pop32());
  /* 11d1a835 lea eax, [ebx + eax*4] */
  EAX = ((uint32_t)(EBX + EAX*4));
  /* 11d1a838 pop ebx */
  EBX = (pop32());
  /* 11d1a839 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d1a83a ret  */
  ESPCHK(0x11d1a7c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a83c @ 0x11d1a83c (31 bytes, 10 insns) */
void f_11d1a83c(void) {
  FTRACE(0x11d1a83cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1a83c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d1a83e push eax */
  push32((uint32_t)(EAX));
  /* 11d1a83f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11d1a845 push eax */
  push32((uint32_t)(EAX));
  /* 11d1a846 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11d1a84a mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11d1a851 mov dword ptr [esp + 0xc], ebp */
  w32((uint32_t)(ESP + 0xc), (EBP));
  /* 11d1a855 lea ebp, [esp + 0xc] */
  EBP = ((uint32_t)(ESP + 0xc));
  /* 11d1a859 push eax */
  push32((uint32_t)(EAX));
  /* 11d1a85a ret  */
  ESPCHK(0x11d1a83cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a85b @ 0x11d1a85b (101 bytes, 34 insns) */
void f_11d1a85b(void) {
  FTRACE(0x11d1a85bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1a85b push esi */
  push32((uint32_t)(ESI));
  /* 11d1a85c mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11d1a860 cmp esi, dword ptr [0x11d38940] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11d38940))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1a866 jae 0x11d1a8a8 */
  if (!C.cf) goto L_11d1a8a8;
  /* 11d1a868 mov ecx, esi */
  ECX = (ESI);
  /* 11d1a86a mov eax, esi */
  EAX = (ESI);
  /* 11d1a86c sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11d1a86f and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11d1a872 mov ecx, dword ptr [ecx*4 + 0x11d38840] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11d38840)));
  /* 11d1a879 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11d1a87c test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11d1a881 je 0x11d1a8a8 */
  if (C.zf) goto L_11d1a8a8;
  /* 11d1a883 push edi */
  push32((uint32_t)(EDI));
  /* 11d1a884 push esi */
  push32((uint32_t)(ESI));
  /* 11d1a885 call 0x11d18ef0 */
  push32(0x11d1a88au); f_11d18ef0();
  /* 11d1a88a push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11d1a88e push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11d1a892 push esi */
  push32((uint32_t)(ESI));
  /* 11d1a893 call 0x11d1a8c0 */
  push32(0x11d1a898u); f_11d1a8c0();
  /* 11d1a898 push esi */
  push32((uint32_t)(ESI));
  /* 11d1a899 mov edi, eax */
  EDI = (EAX);
  /* 11d1a89b call 0x11d18f4f */
  push32(0x11d1a8a0u); f_11d18f4f();
  /* 11d1a8a0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1a8a3 mov eax, edi */
  EAX = (EDI);
  /* 11d1a8a5 pop edi */
  EDI = (pop32());
  /* 11d1a8a6 pop esi */
  ESI = (pop32());
  /* 11d1a8a7 ret  */
  ESPCHK(0x11d1a85bu, _esp0);
  ESP += 4; return;
L_11d1a8a8:;
  /* 11d1a8a8 call 0x11d18e1d */
  push32(0x11d1a8adu); f_11d18e1d();
  /* 11d1a8ad mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11d1a8b3 call 0x11d18e26 */
  push32(0x11d1a8b8u); f_11d18e26();
  /* 11d1a8b8 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11d1a8bb or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d1a8be pop esi */
  ESI = (pop32());
  /* 11d1a8bf ret  */
  ESPCHK(0x11d1a85bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a8c0 @ 0x11d1a8c0 (473 bytes, 170 insns) */
void f_11d1a8c0(void) {
  FTRACE(0x11d1a8c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1a8c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d1a8c1 mov ebp, esp */
  EBP = (ESP);
  /* 11d1a8c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d1a8c6 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11d1a8ca cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1a8ce push ebx */
  push32((uint32_t)(EBX));
  /* 11d1a8cf mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d1a8d2 push esi */
  push32((uint32_t)(ESI));
  /* 11d1a8d3 push edi */
  push32((uint32_t)(EDI));
  /* 11d1a8d4 mov edx, ebx */
  EDX = (EBX);
  /* 11d1a8d6 je 0x11d1aa92 */
  if (C.zf) goto L_11d1aa92;
  /* 11d1a8dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d1a8df mov ecx, eax */
  ECX = (EAX);
  /* 11d1a8e1 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11d1a8e4 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11d1a8e7 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 11d1a8ea mov eax, dword ptr [ecx*4 + 0x11d38840] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11d38840)));
  /* 11d1a8f1 lea edi, [ecx*4 + 0x11d38840] */
  EDI = ((uint32_t)(ECX*4 + 0x11d38840));
  /* 11d1a8f8 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11d1a8fb add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1a8fd mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11d1a900 test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 11d1a903 jne 0x11d1aa92 */
  if (!C.zf) goto L_11d1aa92;
  /* 11d1a909 test cl, 0x48 */
  { uint32_t _r=(CL)&(0x48u); fl_logic(_r,8); }
  /* 11d1a90c je 0x11d1a92b */
  if (C.zf) goto L_11d1a92b;
  /* 11d1a90e mov al, byte ptr [eax + 5] */
  AL = (r8((uint32_t)(EAX + 0x5)));
  /* 11d1a911 cmp al, 0xa */
  { uint32_t _a=(AL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d1a913 je 0x11d1a92b */
  if (C.zf) goto L_11d1a92b;
  /* 11d1a915 dec dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))-1; w32((uint32_t)(EBP + 0x10), (_r)); fl_dec(_r,32); }
  /* 11d1a918 mov byte ptr [ebx], al */
  w8((uint32_t)(EBX), (AL));
  /* 11d1a91a mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11d1a91c lea edx, [ebx + 1] */
  EDX = ((uint32_t)(EBX + 0x1));
  /* 11d1a91f mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11d1a926 mov byte ptr [eax + esi + 5], 0xa */
  w8((uint32_t)(EAX + ESI*1 + 0x5), (0xau));
L_11d1a92b:;
  /* 11d1a92b lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11d1a92e push 0 */
  push32((uint32_t)(0x0u));
  /* 11d1a930 push eax */
  push32((uint32_t)(EAX));
  /* 11d1a931 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11d1a933 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11d1a936 push edx */
  push32((uint32_t)(EDX));
  /* 11d1a937 push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 11d1a93a call dword ptr [0x11d1c014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c014))), 0x11d1a940u);
  /* 11d1a940 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1a942 jne 0x11d1a97d */
  if (!C.zf) goto L_11d1a97d;
  /* 11d1a944 call dword ptr [0x11d1c0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c0b4))), 0x11d1a94au);
  /* 11d1a94a push 5 */
  push32((uint32_t)(0x5u));
  /* 11d1a94c pop esi */
  ESI = (pop32());
  /* 11d1a94d cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1a94f jne 0x11d1a965 */
  if (!C.zf) goto L_11d1a965;
  /* 11d1a951 call 0x11d18e1d */
  push32(0x11d1a956u); f_11d18e1d();
  /* 11d1a956 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11d1a95c call 0x11d18e26 */
  push32(0x11d1a961u); f_11d18e26();
  /* 11d1a961 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 11d1a963 jmp 0x11d1a975 */
  goto L_11d1a975;
L_11d1a965:;
  /* 11d1a965 cmp eax, 0x6d */
  { uint32_t _a=(EAX),_b=(0x6du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1a968 je 0x11d1aa92 */
  if (C.zf) goto L_11d1aa92;
  /* 11d1a96e push eax */
  push32((uint32_t)(EAX));
  /* 11d1a96f call 0x11d18daa */
  push32(0x11d1a974u); f_11d18daa();
  /* 11d1a974 pop ecx */
  ECX = (pop32());
L_11d1a975:;
  /* 11d1a975 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11d1a978 jmp 0x11d1aa94 */
  goto L_11d1aa94;
L_11d1a97d:;
  /* 11d1a97d mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11d1a97f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11d1a982 add dword ptr [ebp - 8], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11d1a985 lea ecx, [eax + esi + 4] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x4));
  /* 11d1a989 mov al, byte ptr [eax + esi + 4] */
  AL = (r8((uint32_t)(EAX + ESI*1 + 0x4)));
  /* 11d1a98d test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 11d1a98f je 0x11d1aa8d */
  if (C.zf) goto L_11d1aa8d;
  /* 11d1a995 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d1a997 je 0x11d1a9a2 */
  if (C.zf) goto L_11d1a9a2;
  /* 11d1a999 cmp byte ptr [ebx], 0xa */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d1a99c jne 0x11d1a9a2 */
  if (!C.zf) goto L_11d1a9a2;
  /* 11d1a99e or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11d1a9a0 jmp 0x11d1a9a4 */
  goto L_11d1a9a4;
L_11d1a9a2:;
  /* 11d1a9a2 and al, 0xfb */
  { uint32_t _r=(AL)&(0xfbu); AL = (_r); fl_logic(_r,8); }
L_11d1a9a4:;
  /* 11d1a9a4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11d1a9a6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d1a9a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d1a9ac mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11d1a9af add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1a9b1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1a9b3 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11d1a9b6 jae 0x11d1aa87 */
  if (!C.cf) goto L_11d1aa87;
L_11d1a9bc:;
  /* 11d1a9bc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d1a9bf mov al, byte ptr [eax] */
  AL = (r8((uint32_t)(EAX)));
  /* 11d1a9c1 cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d1a9c3 je 0x11d1aa77 */
  if (C.zf) goto L_11d1aa77;
  /* 11d1a9c9 cmp al, 0xd */
  { uint32_t _a=(AL),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d1a9cb je 0x11d1a9d8 */
  if (C.zf) goto L_11d1a9d8;
  /* 11d1a9cd mov byte ptr [ebx], al */
  w8((uint32_t)(EBX), (AL));
  /* 11d1a9cf inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11d1a9d0 inc dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))+1; w32((uint32_t)(EBP + 0x10), (_r)); fl_inc(_r,32); }
  /* 11d1a9d3 jmp 0x11d1aa69 */
  goto L_11d1aa69;
L_11d1a9d8:;
  /* 11d1a9d8 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11d1a9d9 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1a9dc jae 0x11d1a9f6 */
  if (!C.cf) goto L_11d1a9f6;
  /* 11d1a9de mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d1a9e1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11d1a9e2 cmp byte ptr [eax], 0xa */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d1a9e5 jne 0x11d1a9ed */
  if (!C.zf) goto L_11d1a9ed;
  /* 11d1a9e7 add dword ptr [ebp + 0x10], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + 0x10), (_r)); fl_add(_a,_b,_r,32); }
  /* 11d1a9eb jmp 0x11d1aa4b */
  goto L_11d1aa4b;
L_11d1a9ed:;
  /* 11d1a9ed mov byte ptr [ebx], 0xd */
  w8((uint32_t)(EBX), (0xdu));
  /* 11d1a9f0 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11d1a9f1 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11d1a9f4 jmp 0x11d1aa69 */
  goto L_11d1aa69;
L_11d1a9f6:;
  /* 11d1a9f6 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11d1a9f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d1a9fb push eax */
  push32((uint32_t)(EAX));
  /* 11d1a9fc inc dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))+1; w32((uint32_t)(EBP + 0x10), (_r)); fl_inc(_r,32); }
  /* 11d1a9ff lea eax, [ebp - 1] */
  EAX = ((uint32_t)(EBP + -0x1));
  /* 11d1aa02 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d1aa04 push eax */
  push32((uint32_t)(EAX));
  /* 11d1aa05 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11d1aa07 push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 11d1aa0a call dword ptr [0x11d1c014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c014))), 0x11d1aa10u);
  /* 11d1aa10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1aa12 jne 0x11d1aa1e */
  if (!C.zf) goto L_11d1aa1e;
  /* 11d1aa14 call dword ptr [0x11d1c0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c0b4))), 0x11d1aa1au);
  /* 11d1aa1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1aa1c jne 0x11d1aa65 */
  if (!C.zf) goto L_11d1aa65;
L_11d1aa1e:;
  /* 11d1aa1e cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1aa22 je 0x11d1aa65 */
  if (C.zf) goto L_11d1aa65;
  /* 11d1aa24 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11d1aa26 test byte ptr [eax + esi + 4], 0x48 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x48u); fl_logic(_r,8); }
  /* 11d1aa2b je 0x11d1aa40 */
  if (C.zf) goto L_11d1aa40;
  /* 11d1aa2d mov al, byte ptr [ebp - 1] */
  AL = (r8((uint32_t)(EBP + -0x1)));
  /* 11d1aa30 cmp al, 0xa */
  { uint32_t _a=(AL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d1aa32 je 0x11d1aa4b */
  if (C.zf) goto L_11d1aa4b;
  /* 11d1aa34 mov byte ptr [ebx], 0xd */
  w8((uint32_t)(EBX), (0xdu));
  /* 11d1aa37 mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 11d1aa39 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11d1aa3a mov byte ptr [ecx + esi + 5], al */
  w8((uint32_t)(ECX + ESI*1 + 0x5), (AL));
  /* 11d1aa3e jmp 0x11d1aa69 */
  goto L_11d1aa69;
L_11d1aa40:;
  /* 11d1aa40 cmp ebx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1aa43 jne 0x11d1aa50 */
  if (!C.zf) goto L_11d1aa50;
  /* 11d1aa45 cmp byte ptr [ebp - 1], 0xa */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x1))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d1aa49 jne 0x11d1aa50 */
  if (!C.zf) goto L_11d1aa50;
L_11d1aa4b:;
  /* 11d1aa4b mov byte ptr [ebx], 0xa */
  w8((uint32_t)(EBX), (0xau));
  /* 11d1aa4e jmp 0x11d1aa68 */
  goto L_11d1aa68;
L_11d1aa50:;
  /* 11d1aa50 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d1aa52 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d1aa54 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11d1aa57 call 0x11d17132 */
  push32(0x11d1aa5cu); f_11d17132();
  /* 11d1aa5c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1aa5f cmp byte ptr [ebp - 1], 0xa */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x1))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d1aa63 je 0x11d1aa69 */
  if (C.zf) goto L_11d1aa69;
L_11d1aa65:;
  /* 11d1aa65 mov byte ptr [ebx], 0xd */
  w8((uint32_t)(EBX), (0xdu));
L_11d1aa68:;
  /* 11d1aa68 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_11d1aa69:;
  /* 11d1aa69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d1aa6c cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1aa6f jb 0x11d1a9bc */
  if (C.cf) goto L_11d1a9bc;
  /* 11d1aa75 jmp 0x11d1aa87 */
  goto L_11d1aa87;
L_11d1aa77:;
  /* 11d1aa77 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11d1aa79 lea esi, [eax + esi + 4] */
  ESI = ((uint32_t)(EAX + ESI*1 + 0x4));
  /* 11d1aa7d mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11d1aa7f test al, 0x40 */
  { uint32_t _r=(AL)&(0x40u); fl_logic(_r,8); }
  /* 11d1aa81 jne 0x11d1aa87 */
  if (!C.zf) goto L_11d1aa87;
  /* 11d1aa83 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11d1aa85 mov byte ptr [esi], al */
  w8((uint32_t)(ESI), (AL));
L_11d1aa87:;
  /* 11d1aa87 sub ebx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d1aa8a mov dword ptr [ebp - 8], ebx */
  w32((uint32_t)(EBP + -0x8), (EBX));
L_11d1aa8d:;
  /* 11d1aa8d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11d1aa90 jmp 0x11d1aa94 */
  goto L_11d1aa94;
L_11d1aa92:;
  /* 11d1aa92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d1aa94:;
  /* 11d1aa94 pop edi */
  EDI = (pop32());
  /* 11d1aa95 pop esi */
  ESI = (pop32());
  /* 11d1aa96 pop ebx */
  EBX = (pop32());
  /* 11d1aa97 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d1aa98 ret  */
  ESPCHK(0x11d1a8c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aaa2 @ 0x11d1aaa2 (155 bytes, 61 insns) */
void f_11d1aaa2(void) {
  FTRACE(0x11d1aaa2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1aaa2 push ebp */
  push32((uint32_t)(EBP));
  /* 11d1aaa3 mov ebp, esp */
  EBP = (ESP);
  /* 11d1aaa5 push esi */
  push32((uint32_t)(ESI));
  /* 11d1aaa6 mov esi, dword ptr [ebp + 0x18] */
  ESI = (r32((uint32_t)(EBP + 0x18)));
  /* 11d1aaa9 push edi */
  push32((uint32_t)(EDI));
  /* 11d1aaaa mov edi, 0x19930520 */
  EDI = (0x19930520u);
  /* 11d1aaaf cmp dword ptr [esi], edi */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1aab1 je 0x11d1aab8 */
  if (C.zf) goto L_11d1aab8;
  /* 11d1aab3 call 0x11d1b36d */
  push32(0x11d1aab8u); f_11d1b36d();
L_11d1aab8:;
  /* 11d1aab8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d1aabb test byte ptr [eax + 4], 0x66 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x66u); fl_logic(_r,8); }
  /* 11d1aabf je 0x11d1aae0 */
  if (C.zf) goto L_11d1aae0;
  /* 11d1aac1 cmp dword ptr [esi + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1aac5 je 0x11d1ab36 */
  if (C.zf) goto L_11d1ab36;
  /* 11d1aac7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1aacb jne 0x11d1ab36 */
  if (!C.zf) goto L_11d1ab36;
  /* 11d1aacd push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d1aacf push esi */
  push32((uint32_t)(ESI));
  /* 11d1aad0 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11d1aad3 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11d1aad6 call 0x11d1adf7 */
  push32(0x11d1aadbu); f_11d1adf7();
  /* 11d1aadb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1aade jmp 0x11d1ab36 */
  goto L_11d1ab36;
L_11d1aae0:;
  /* 11d1aae0 cmp dword ptr [esi + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1aae4 je 0x11d1ab36 */
  if (C.zf) goto L_11d1ab36;
  /* 11d1aae6 cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1aaec jne 0x11d1ab1a */
  if (!C.zf) goto L_11d1ab1a;
  /* 11d1aaee cmp dword ptr [eax + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1aaf1 jbe 0x11d1ab1a */
  if ((C.cf||C.zf)) goto L_11d1ab1a;
  /* 11d1aaf3 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11d1aaf6 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 11d1aaf9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d1aafb je 0x11d1ab1a */
  if (C.zf) goto L_11d1ab1a;
  /* 11d1aafd movzx edx, byte ptr [ebp + 0x24] */
  EDX = ((uint32_t)(r8((uint32_t)(EBP + 0x24))));
  /* 11d1ab01 push edx */
  push32((uint32_t)(EDX));
  /* 11d1ab02 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11d1ab05 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11d1ab08 push esi */
  push32((uint32_t)(ESI));
  /* 11d1ab09 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11d1ab0c push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11d1ab0f push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11d1ab12 push eax */
  push32((uint32_t)(EAX));
  /* 11d1ab13 call ecx */
  call_ind((uint32_t)(ECX), 0x11d1ab15u);
  /* 11d1ab15 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1ab18 jmp 0x11d1ab39 */
  goto L_11d1ab39;
L_11d1ab1a:;
  /* 11d1ab1a push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11d1ab1d push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11d1ab20 push dword ptr [ebp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x24))));
  /* 11d1ab23 push esi */
  push32((uint32_t)(ESI));
  /* 11d1ab24 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11d1ab27 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11d1ab2a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11d1ab2d push eax */
  push32((uint32_t)(EAX));
  /* 11d1ab2e call 0x11d1ab3d */
  push32(0x11d1ab33u); f_11d1ab3d();
  /* 11d1ab33 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d1ab36:;
  /* 11d1ab36 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d1ab38 pop eax */
  EAX = (pop32());
L_11d1ab39:;
  /* 11d1ab39 pop edi */
  EDI = (pop32());
  /* 11d1ab3a pop esi */
  ESI = (pop32());
  /* 11d1ab3b pop ebp */
  EBP = (pop32());
  /* 11d1ab3c ret  */
  ESPCHK(0x11d1aaa2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab3d @ 0x11d1ab3d (435 bytes, 149 insns) */
void f_11d1ab3d(void) {
  FTRACE(0x11d1ab3du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1ab3d push ebp */
  push32((uint32_t)(EBP));
  /* 11d1ab3e mov ebp, esp */
  EBP = (ESP);
  /* 11d1ab40 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d1ab43 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d1ab46 and byte ptr [ebp - 0x14], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x14)))&(0x0u); w8((uint32_t)(EBP + -0x14), (_r)); fl_logic(_r,8); }
  /* 11d1ab4a mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 11d1ab4d cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1ab50 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11d1ab53 jl 0x11d1ab5d */
  if ((C.sf!=C.of)) goto L_11d1ab5d;
  /* 11d1ab55 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d1ab58 cmp eax, dword ptr [ecx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1ab5b jl 0x11d1ab62 */
  if ((C.sf!=C.of)) goto L_11d1ab62;
L_11d1ab5d:;
  /* 11d1ab5d call 0x11d1b36d */
  push32(0x11d1ab62u); f_11d1b36d();
L_11d1ab62:;
  /* 11d1ab62 push ebx */
  push32((uint32_t)(EBX));
  /* 11d1ab63 push esi */
  push32((uint32_t)(ESI));
  /* 11d1ab64 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11d1ab67 mov ebx, 0xe06d7363 */
  EBX = (0xe06d7363u);
  /* 11d1ab6c push edi */
  push32((uint32_t)(EDI));
  /* 11d1ab6d mov edi, 0x19930520 */
  EDI = (0x19930520u);
  /* 11d1ab72 cmp dword ptr [esi], ebx */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1ab74 jne 0x11d1acc5 */
  if (!C.zf) goto L_11d1acc5;
  /* 11d1ab7a cmp dword ptr [esi + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1ab7e jne 0x11d1abe2 */
  if (!C.zf) goto L_11d1abe2;
  /* 11d1ab80 cmp dword ptr [esi + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1ab83 jne 0x11d1abe2 */
  if (!C.zf) goto L_11d1abe2;
  /* 11d1ab85 cmp dword ptr [esi + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1ab89 jne 0x11d1abe2 */
  if (!C.zf) goto L_11d1abe2;
  /* 11d1ab8b call 0x11d13d6f */
  push32(0x11d1ab90u); f_11d13d6f();
  /* 11d1ab90 cmp dword ptr [eax + 0x6c], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1ab94 je 0x11d1acc0 */
  if (C.zf) goto L_11d1acc0;
  /* 11d1ab9a call 0x11d13d6f */
  push32(0x11d1ab9fu); f_11d13d6f();
  /* 11d1ab9f mov esi, dword ptr [eax + 0x6c] */
  ESI = (r32((uint32_t)(EAX + 0x6c)));
  /* 11d1aba2 call 0x11d13d6f */
  push32(0x11d1aba7u); f_11d13d6f();
  /* 11d1aba7 mov eax, dword ptr [eax + 0x70] */
  EAX = (r32((uint32_t)(EAX + 0x70)));
  /* 11d1abaa push 1 */
  push32((uint32_t)(0x1u));
  /* 11d1abac push esi */
  push32((uint32_t)(ESI));
  /* 11d1abad mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11d1abb0 mov byte ptr [ebp - 0x14], 1 */
  w8((uint32_t)(EBP + -0x14), (0x1u));
  /* 11d1abb4 call 0x11d1b427 */
  push32(0x11d1abb9u); f_11d1b427();
  /* 11d1abb9 pop ecx */
  ECX = (pop32());
  /* 11d1abba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1abbc pop ecx */
  ECX = (pop32());
  /* 11d1abbd jne 0x11d1abc4 */
  if (!C.zf) goto L_11d1abc4;
  /* 11d1abbf call 0x11d1b36d */
  push32(0x11d1abc4u); f_11d1b36d();
L_11d1abc4:;
  /* 11d1abc4 cmp dword ptr [esi], ebx */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1abc6 jne 0x11d1acc5 */
  if (!C.zf) goto L_11d1acc5;
  /* 11d1abcc cmp dword ptr [esi + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1abd0 jne 0x11d1abe2 */
  if (!C.zf) goto L_11d1abe2;
  /* 11d1abd2 cmp dword ptr [esi + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1abd5 jne 0x11d1abe2 */
  if (!C.zf) goto L_11d1abe2;
  /* 11d1abd7 cmp dword ptr [esi + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1abdb jne 0x11d1abe2 */
  if (!C.zf) goto L_11d1abe2;
  /* 11d1abdd call 0x11d1b36d */
  push32(0x11d1abe2u); f_11d1b36d();
L_11d1abe2:;
  /* 11d1abe2 cmp dword ptr [esi], ebx */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1abe4 jne 0x11d1acc5 */
  if (!C.zf) goto L_11d1acc5;
  /* 11d1abea cmp dword ptr [esi + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1abee jne 0x11d1acc5 */
  if (!C.zf) goto L_11d1acc5;
  /* 11d1abf4 cmp dword ptr [esi + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1abf7 jne 0x11d1acc5 */
  if (!C.zf) goto L_11d1acc5;
  /* 11d1abfd mov edi, dword ptr [ebp - 0x10] */
  EDI = (r32((uint32_t)(EBP + -0x10)));
  /* 11d1ac00 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11d1ac03 push eax */
  push32((uint32_t)(EAX));
  /* 11d1ac04 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11d1ac07 push eax */
  push32((uint32_t)(EAX));
  /* 11d1ac08 push edi */
  push32((uint32_t)(EDI));
  /* 11d1ac09 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11d1ac0c push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11d1ac0f call 0x11d1a7c0 */
  push32(0x11d1ac14u); f_11d1a7c0();
  /* 11d1ac14 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1ac17 mov ebx, eax */
  EBX = (EAX);
L_11d1ac19:;
  /* 11d1ac19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d1ac1c cmp eax, dword ptr [ebp - 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1ac1f jae 0x11d1acb0 */
  if (!C.cf) goto L_11d1acb0;
  /* 11d1ac25 cmp dword ptr [ebx], edi */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1ac27 jg 0x11d1aca5 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d1aca5;
  /* 11d1ac29 cmp edi, dword ptr [ebx + 4] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EBX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1ac2c jg 0x11d1aca5 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d1aca5;
  /* 11d1ac2e mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11d1ac31 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11d1ac34 mov eax, dword ptr [ebx + 0xc] */
  EAX = (r32((uint32_t)(EBX + 0xc)));
  /* 11d1ac37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1ac39 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11d1ac3c jle 0x11d1aca2 */
  if ((C.zf||C.sf!=C.of)) goto L_11d1aca2;
L_11d1ac3e:;
  /* 11d1ac3e mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 11d1ac41 mov eax, dword ptr [eax + 0xc] */
  EAX = (r32((uint32_t)(EAX + 0xc)));
  /* 11d1ac44 lea edi, [eax + 4] */
  EDI = ((uint32_t)(EAX + 0x4));
  /* 11d1ac47 mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 11d1ac49 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1ac4b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11d1ac4e jle 0x11d1ac6f */
  if ((C.zf||C.sf!=C.of)) goto L_11d1ac6f;
L_11d1ac50:;
  /* 11d1ac50 push dword ptr [esi + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x1c))));
  /* 11d1ac53 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 11d1ac55 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11d1ac58 call 0x11d1ad9a */
  push32(0x11d1ac5du); f_11d1ad9a();
  /* 11d1ac5d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1ac60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1ac62 jne 0x11d1ac7e */
  if (!C.zf) goto L_11d1ac7e;
  /* 11d1ac64 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 11d1ac67 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1ac6a cmp dword ptr [ebp - 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1ac6d jg 0x11d1ac50 */
  if ((!C.zf&&C.sf==C.of)) goto L_11d1ac50;
L_11d1ac6f:;
  /* 11d1ac6f dec dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))-1; w32((uint32_t)(EBP + -0xc), (_r)); fl_dec(_r,32); }
  /* 11d1ac72 add dword ptr [ebp + 8], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11d1ac76 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1ac7a jg 0x11d1ac3e */
  if ((!C.zf&&C.sf==C.of)) goto L_11d1ac3e;
  /* 11d1ac7c jmp 0x11d1aca2 */
  goto L_11d1aca2;
L_11d1ac7e:;
  /* 11d1ac7e push dword ptr [ebp - 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x14))));
  /* 11d1ac81 push dword ptr [ebp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x24))));
  /* 11d1ac84 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11d1ac87 push ebx */
  push32((uint32_t)(EBX));
  /* 11d1ac88 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 11d1ac8a push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11d1ac8d push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11d1ac90 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11d1ac93 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11d1ac96 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11d1ac99 push esi */
  push32((uint32_t)(ESI));
  /* 11d1ac9a call 0x11d1aeab */
  push32(0x11d1ac9fu); f_11d1aeab();
  /* 11d1ac9f add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d1aca2:;
  /* 11d1aca2 mov edi, dword ptr [ebp - 0x10] */
  EDI = (r32((uint32_t)(EBP + -0x10)));
L_11d1aca5:;
  /* 11d1aca5 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11d1aca8 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1acab jmp 0x11d1ac19 */
  goto L_11d1ac19;
L_11d1acb0:;
  /* 11d1acb0 cmp byte ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d1acb4 je 0x11d1acc0 */
  if (C.zf) goto L_11d1acc0;
  /* 11d1acb6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d1acb8 push esi */
  push32((uint32_t)(ESI));
  /* 11d1acb9 call 0x11d1b22f */
  push32(0x11d1acbeu); f_11d1b22f();
  /* 11d1acbe pop ecx */
  ECX = (pop32());
  /* 11d1acbf pop ecx */
  ECX = (pop32());
L_11d1acc0:;
  /* 11d1acc0 pop edi */
  EDI = (pop32());
  /* 11d1acc1 pop esi */
  ESI = (pop32());
  /* 11d1acc2 pop ebx */
  EBX = (pop32());
  /* 11d1acc3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d1acc4 ret  */
  ESPCHK(0x11d1ab3du, _esp0);
  ESP += 4; return;
L_11d1acc5:;
  /* 11d1acc5 cmp byte ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d1acc9 jne 0x11d1aceb */
  if (!C.zf) goto L_11d1aceb;
  /* 11d1accb push dword ptr [ebp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x24))));
  /* 11d1acce push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11d1acd1 push dword ptr [ebp - 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x10))));
  /* 11d1acd4 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11d1acd7 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11d1acda push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11d1acdd push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11d1ace0 push esi */
  push32((uint32_t)(ESI));
  /* 11d1ace1 call 0x11d1acf0 */
  push32(0x11d1ace6u); f_11d1acf0();
  /* 11d1ace6 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1ace9 jmp 0x11d1acc0 */
  goto L_11d1acc0;
L_11d1aceb:;
  /* 11d1aceb jmp 0x11d1b30c */
  f_11d1b30c(); return;
}

/* FUN_1000acf0 @ 0x11d1acf0 (170 bytes, 68 insns) */
void f_11d1acf0(void) {
  FTRACE(0x11d1acf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1acf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d1acf1 mov ebp, esp */
  EBP = (ESP);
  /* 11d1acf3 push ecx */
  push32((uint32_t)(ECX));
  /* 11d1acf4 push ecx */
  push32((uint32_t)(ECX));
  /* 11d1acf5 push esi */
  push32((uint32_t)(ESI));
  /* 11d1acf6 push edi */
  push32((uint32_t)(EDI));
  /* 11d1acf7 call 0x11d13d6f */
  push32(0x11d1acfcu); f_11d13d6f();
  /* 11d1acfc cmp dword ptr [eax + 0x68], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1ad00 je 0x11d1ad23 */
  if (C.zf) goto L_11d1ad23;
  /* 11d1ad02 push dword ptr [ebp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x24))));
  /* 11d1ad05 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11d1ad08 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11d1ad0b push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11d1ad0e push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11d1ad11 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11d1ad14 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11d1ad17 call 0x11d1a695 */
  push32(0x11d1ad1cu); f_11d1a695();
  /* 11d1ad1c add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1ad1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1ad21 jne 0x11d1ad96 */
  if (!C.zf) goto L_11d1ad96;
L_11d1ad23:;
  /* 11d1ad23 mov edi, dword ptr [ebp + 0x1c] */
  EDI = (r32((uint32_t)(EBP + 0x1c)));
  /* 11d1ad26 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11d1ad29 push eax */
  push32((uint32_t)(EAX));
  /* 11d1ad2a lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11d1ad2d push eax */
  push32((uint32_t)(EAX));
  /* 11d1ad2e push edi */
  push32((uint32_t)(EDI));
  /* 11d1ad2f push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11d1ad32 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11d1ad35 call 0x11d1a7c0 */
  push32(0x11d1ad3au); f_11d1a7c0();
  /* 11d1ad3a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1ad3d mov esi, eax */
  ESI = (EAX);
L_11d1ad3f:;
  /* 11d1ad3f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11d1ad42 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1ad45 jae 0x11d1ad96 */
  if (!C.cf) goto L_11d1ad96;
  /* 11d1ad47 cmp edi, dword ptr [esi] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ESI))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1ad49 jl 0x11d1ad8e */
  if ((C.sf!=C.of)) goto L_11d1ad8e;
  /* 11d1ad4b cmp edi, dword ptr [esi + 4] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ESI + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1ad4e jg 0x11d1ad8e */
  if ((!C.zf&&C.sf==C.of)) goto L_11d1ad8e;
  /* 11d1ad50 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11d1ad53 mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 11d1ad56 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11d1ad59 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1ad5b mov ecx, dword ptr [eax - 0xc] */
  ECX = (r32((uint32_t)(EAX + -0xc)));
  /* 11d1ad5e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d1ad60 je 0x11d1ad68 */
  if (C.zf) goto L_11d1ad68;
  /* 11d1ad62 cmp byte ptr [ecx + 8], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d1ad66 jne 0x11d1ad8e */
  if (!C.zf) goto L_11d1ad8e;
L_11d1ad68:;
  /* 11d1ad68 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d1ad6a add eax, -0x10 */
  { uint32_t _a=(EAX),_b=(0xfffffff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1ad6d push dword ptr [ebp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x24))));
  /* 11d1ad70 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11d1ad73 push esi */
  push32((uint32_t)(ESI));
  /* 11d1ad74 push 0 */
  push32((uint32_t)(0x0u));
  /* 11d1ad76 push eax */
  push32((uint32_t)(EAX));
  /* 11d1ad77 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11d1ad7a push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11d1ad7d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11d1ad80 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11d1ad83 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11d1ad86 call 0x11d1aeab */
  push32(0x11d1ad8bu); f_11d1aeab();
  /* 11d1ad8b add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d1ad8e:;
  /* 11d1ad8e inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11d1ad91 add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1ad94 jmp 0x11d1ad3f */
  goto L_11d1ad3f;
L_11d1ad96:;
  /* 11d1ad96 pop edi */
  EDI = (pop32());
  /* 11d1ad97 pop esi */
  ESI = (pop32());
  /* 11d1ad98 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d1ad99 ret  */
  ESPCHK(0x11d1acf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ad9a @ 0x11d1ad9a (93 bytes, 42 insns) */
void f_11d1ad9a(void) {
  FTRACE(0x11d1ad9au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1ad9a push esi */
  push32((uint32_t)(ESI));
  /* 11d1ad9b push edi */
  push32((uint32_t)(EDI));
  /* 11d1ad9c mov edi, dword ptr [esp + 0xc] */
  EDI = (r32((uint32_t)(ESP + 0xc)));
  /* 11d1ada0 mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 11d1ada3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1ada5 je 0x11d1adf1 */
  if (C.zf) goto L_11d1adf1;
  /* 11d1ada7 cmp byte ptr [eax + 8], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d1adab lea edx, [eax + 8] */
  EDX = ((uint32_t)(EAX + 0x8));
  /* 11d1adae je 0x11d1adf1 */
  if (C.zf) goto L_11d1adf1;
  /* 11d1adb0 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11d1adb4 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11d1adb7 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1adb9 je 0x11d1adcb */
  if (C.zf) goto L_11d1adcb;
  /* 11d1adbb add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1adbe push ecx */
  push32((uint32_t)(ECX));
  /* 11d1adbf push edx */
  push32((uint32_t)(EDX));
  /* 11d1adc0 call 0x11d19270 */
  push32(0x11d1adc5u); f_11d19270();
  /* 11d1adc5 pop ecx */
  ECX = (pop32());
  /* 11d1adc6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1adc8 pop ecx */
  ECX = (pop32());
  /* 11d1adc9 jne 0x11d1aded */
  if (!C.zf) goto L_11d1aded;
L_11d1adcb:;
  /* 11d1adcb test byte ptr [esi], 2 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x2u); fl_logic(_r,8); }
  /* 11d1adce je 0x11d1add5 */
  if (C.zf) goto L_11d1add5;
  /* 11d1add0 test byte ptr [edi], 8 */
  { uint32_t _r=(r8((uint32_t)(EDI)))&(0x8u); fl_logic(_r,8); }
  /* 11d1add3 je 0x11d1aded */
  if (C.zf) goto L_11d1aded;
L_11d1add5:;
  /* 11d1add5 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11d1add9 mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 11d1addb test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11d1addd je 0x11d1ade4 */
  if (C.zf) goto L_11d1ade4;
  /* 11d1addf test byte ptr [edi], 1 */
  { uint32_t _r=(r8((uint32_t)(EDI)))&(0x1u); fl_logic(_r,8); }
  /* 11d1ade2 je 0x11d1aded */
  if (C.zf) goto L_11d1aded;
L_11d1ade4:;
  /* 11d1ade4 test al, 2 */
  { uint32_t _r=(AL)&(0x2u); fl_logic(_r,8); }
  /* 11d1ade6 je 0x11d1adf1 */
  if (C.zf) goto L_11d1adf1;
  /* 11d1ade8 test byte ptr [edi], 2 */
  { uint32_t _r=(r8((uint32_t)(EDI)))&(0x2u); fl_logic(_r,8); }
  /* 11d1adeb jne 0x11d1adf1 */
  if (!C.zf) goto L_11d1adf1;
L_11d1aded:;
  /* 11d1aded xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11d1adef jmp 0x11d1adf4 */
  goto L_11d1adf4;
L_11d1adf1:;
  /* 11d1adf1 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d1adf3 pop eax */
  EAX = (pop32());
L_11d1adf4:;
  /* 11d1adf4 pop edi */
  EDI = (pop32());
  /* 11d1adf5 pop esi */
  ESI = (pop32());
  /* 11d1adf6 ret  */
  ESPCHK(0x11d1ad9au, _esp0);
  ESP += 4; return;
}

/* FUN_1000adf7 @ 0x11d1adf7 (132 bytes, 56 insns) */
void f_11d1adf7(void) {
  FTRACE(0x11d1adf7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1adf7 push ebp */
  push32((uint32_t)(EBP));
  /* 11d1adf8 mov ebp, esp */
  EBP = (ESP);
  /* 11d1adfa push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d1adfc push 0x11d1c908 */
  push32((uint32_t)(0x11d1c908u));
  /* 11d1ae01 push 0x11d16eb8 */
  push32((uint32_t)(0x11d16eb8u));
  /* 11d1ae06 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11d1ae0c push eax */
  push32((uint32_t)(EAX));
  /* 11d1ae0d mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11d1ae14 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d1ae17 push ebx */
  push32((uint32_t)(EBX));
  /* 11d1ae18 push esi */
  push32((uint32_t)(ESI));
  /* 11d1ae19 push edi */
  push32((uint32_t)(EDI));
  /* 11d1ae1a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11d1ae1d mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d1ae20 mov esi, dword ptr [ebx + 8] */
  ESI = (r32((uint32_t)(EBX + 0x8)));
  /* 11d1ae23 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 11d1ae26 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
L_11d1ae29:;
  /* 11d1ae29 cmp esi, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1ae2c je 0x11d1ae83 */
  if (C.zf) goto L_11d1ae83;
  /* 11d1ae2e cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1ae31 jle 0x11d1ae38 */
  if ((C.zf||C.sf!=C.of)) goto L_11d1ae38;
  /* 11d1ae33 cmp esi, dword ptr [edi + 4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1ae36 jl 0x11d1ae3d */
  if ((C.sf!=C.of)) goto L_11d1ae3d;
L_11d1ae38:;
  /* 11d1ae38 call 0x11d1b36d */
  push32(0x11d1ae3du); f_11d1b36d();
L_11d1ae3d:;
  /* 11d1ae3d and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11d1ae41 mov eax, dword ptr [edi + 8] */
  EAX = (r32((uint32_t)(EDI + 0x8)));
  /* 11d1ae44 mov eax, dword ptr [eax + esi*8 + 4] */
  EAX = (r32((uint32_t)(EAX + ESI*8 + 0x4)));
  /* 11d1ae48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1ae4a je 0x11d1ae58 */
  if (C.zf) goto L_11d1ae58;
  /* 11d1ae4c push 0x103 */
  push32((uint32_t)(0x103u));
  /* 11d1ae51 push ebx */
  push32((uint32_t)(EBX));
  /* 11d1ae52 push eax */
  push32((uint32_t)(EAX));
  /* 11d1ae53 call 0x11d1b2c0 */
  push32(0x11d1ae58u); f_11d1b2c0();
L_11d1ae58:;
  /* 11d1ae58 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11d1ae5c jmp 0x11d1ae78 */
  goto L_11d1ae78;
  /* 11d1ae5e push dword ptr [ebp - 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x14))));
  /* 11d1ae61 call 0x11d1ae95 */
  call_ind(0x11d1ae95u, 0x11d1ae66u);
  /* 11d1ae66 pop ecx */
  ECX = (pop32());
  /* 11d1ae67 ret  */
  ESPCHK(0x11d1adf7u, _esp0);
  ESP += 4; return;
  /* 11d1ae68 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11d1ae6b or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11d1ae6f mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11d1ae72 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d1ae75 mov esi, dword ptr [ebp - 0x1c] */
  ESI = (r32((uint32_t)(EBP + -0x1c)));
L_11d1ae78:;
  /* 11d1ae78 mov eax, dword ptr [edi + 8] */
  EAX = (r32((uint32_t)(EDI + 0x8)));
  /* 11d1ae7b mov esi, dword ptr [eax + esi*8] */
  ESI = (r32((uint32_t)(EAX + ESI*8)));
  /* 11d1ae7e mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 11d1ae81 jmp 0x11d1ae29 */
  goto L_11d1ae29;
L_11d1ae83:;
  /* 11d1ae83 mov dword ptr [ebx + 8], esi */
  w32((uint32_t)(EBX + 0x8), (ESI));
  /* 11d1ae86 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d1ae89 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11d1ae90 pop edi */
  EDI = (pop32());
  /* 11d1ae91 pop esi */
  ESI = (pop32());
  /* 11d1ae92 pop ebx */
  EBX = (pop32());
  /* 11d1ae93 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d1ae94 ret  */
  ESPCHK(0x11d1adf7u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aeab @ 0x11d1aeab (123 bytes, 50 insns) */
void f_11d1aeab(void) {
  FTRACE(0x11d1aeabu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1aeab push ebp */
  push32((uint32_t)(EBP));
  /* 11d1aeac mov ebp, esp */
  EBP = (ESP);
  /* 11d1aeae cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1aeb2 push ebx */
  push32((uint32_t)(EBX));
  /* 11d1aeb3 mov ebx, dword ptr [ebp + 0x1c] */
  EBX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11d1aeb6 push esi */
  push32((uint32_t)(ESI));
  /* 11d1aeb7 push edi */
  push32((uint32_t)(EDI));
  /* 11d1aeb8 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11d1aebb je 0x11d1aecd */
  if (C.zf) goto L_11d1aecd;
  /* 11d1aebd push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11d1aec0 push ebx */
  push32((uint32_t)(EBX));
  /* 11d1aec1 push edi */
  push32((uint32_t)(EDI));
  /* 11d1aec2 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11d1aec5 call 0x11d1b06b */
  push32(0x11d1aecau); f_11d1b06b();
  /* 11d1aeca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11d1aecd:;
  /* 11d1aecd cmp dword ptr [ebp + 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1aed1 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11d1aed4 jne 0x11d1aed9 */
  if (!C.zf) goto L_11d1aed9;
  /* 11d1aed6 push edi */
  push32((uint32_t)(EDI));
  /* 11d1aed7 jmp 0x11d1aedc */
  goto L_11d1aedc;
L_11d1aed9:;
  /* 11d1aed9 push dword ptr [ebp + 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x2c))));
L_11d1aedc:;
  /* 11d1aedc call 0x11d1a597 */
  push32(0x11d1aee1u); f_11d1a597();
  /* 11d1aee1 mov esi, dword ptr [ebp + 0x24] */
  ESI = (r32((uint32_t)(EBP + 0x24)));
  /* 11d1aee4 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11d1aee6 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11d1aee9 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11d1aeec push edi */
  push32((uint32_t)(EDI));
  /* 11d1aeed call 0x11d1adf7 */
  push32(0x11d1aef2u); f_11d1adf7();
  /* 11d1aef2 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11d1aef5 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11d1aefa push dword ptr [ebp + 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x28))));
  /* 11d1aefd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11d1aefe mov dword ptr [edi + 8], eax */
  w32((uint32_t)(EDI + 0x8), (EAX));
  /* 11d1af01 push dword ptr [ebx + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0xc))));
  /* 11d1af04 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11d1af07 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11d1af0a push edi */
  push32((uint32_t)(EDI));
  /* 11d1af0b push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11d1af0e call 0x11d1af26 */
  push32(0x11d1af13u); f_11d1af26();
  /* 11d1af13 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1af16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1af18 je 0x11d1af21 */
  if (C.zf) goto L_11d1af21;
  /* 11d1af1a push edi */
  push32((uint32_t)(EDI));
  /* 11d1af1b push eax */
  push32((uint32_t)(EAX));
  /* 11d1af1c call 0x11d1a555 */
  push32(0x11d1af21u); f_11d1a555();
L_11d1af21:;
  /* 11d1af21 pop edi */
  EDI = (pop32());
  /* 11d1af22 pop esi */
  ESI = (pop32());
  /* 11d1af23 pop ebx */
  EBX = (pop32());
  /* 11d1af24 pop ebp */
  EBP = (pop32());
  /* 11d1af25 ret  */
  ESPCHK(0x11d1aeabu, _esp0);
  ESP += 4; return;
}

/* FUN_1000af26 @ 0x11d1af26 (165 bytes, 52 insns) */
void f_11d1af26(void) {
  FTRACE(0x11d1af26u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1af26 push ebp */
  push32((uint32_t)(EBP));
  /* 11d1af27 mov ebp, esp */
  EBP = (ESP);
  /* 11d1af29 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d1af2b push 0x11d1c918 */
  push32((uint32_t)(0x11d1c918u));
  /* 11d1af30 push 0x11d16eb8 */
  push32((uint32_t)(0x11d16eb8u));
  /* 11d1af35 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11d1af3b push eax */
  push32((uint32_t)(EAX));
  /* 11d1af3c mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11d1af43 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d1af46 push ebx */
  push32((uint32_t)(EBX));
  /* 11d1af47 push esi */
  push32((uint32_t)(ESI));
  /* 11d1af48 push edi */
  push32((uint32_t)(EDI));
  /* 11d1af49 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11d1af4c mov ebx, dword ptr [ebp + 0x18] */
  EBX = (r32((uint32_t)(EBP + 0x18)));
  /* 11d1af4f mov dword ptr [ebp - 0x2c], ebx */
  w32((uint32_t)(EBP + -0x2c), (EBX));
  /* 11d1af52 and dword ptr [ebp - 0x24], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x24)))&(0x0u); w32((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,32); }
  /* 11d1af56 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11d1af59 mov eax, dword ptr [esi - 4] */
  EAX = (r32((uint32_t)(ESI + -0x4)));
  /* 11d1af5c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11d1af5f call 0x11d13d6f */
  push32(0x11d1af64u); f_11d13d6f();
  /* 11d1af64 mov eax, dword ptr [eax + 0x6c] */
  EAX = (r32((uint32_t)(EAX + 0x6c)));
  /* 11d1af67 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11d1af6a call 0x11d13d6f */
  push32(0x11d1af6fu); f_11d13d6f();
  /* 11d1af6f mov eax, dword ptr [eax + 0x70] */
  EAX = (r32((uint32_t)(EAX + 0x70)));
  /* 11d1af72 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11d1af75 call 0x11d13d6f */
  push32(0x11d1af7au); f_11d13d6f();
  /* 11d1af7a mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11d1af7d mov dword ptr [eax + 0x6c], edi */
  w32((uint32_t)(EAX + 0x6c), (EDI));
  /* 11d1af80 call 0x11d13d6f */
  push32(0x11d1af85u); f_11d13d6f();
  /* 11d1af85 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d1af88 mov dword ptr [eax + 0x70], ecx */
  w32((uint32_t)(EAX + 0x70), (ECX));
  /* 11d1af8b and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11d1af8f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11d1af96 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11d1af99 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11d1af9c push ebx */
  push32((uint32_t)(EBX));
  /* 11d1af9d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11d1afa0 push esi */
  push32((uint32_t)(ESI));
  /* 11d1afa1 call 0x11d1a61c */
  push32(0x11d1afa6u); f_11d1a61c();
  /* 11d1afa6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1afa9 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11d1afac and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11d1afb0 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11d1afb4 call 0x11d1aff3 */
  push32(0x11d1afb9u); f_11d1aff3();
  /* 11d1afb9 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11d1afbc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d1afbf mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11d1afc6 pop edi */
  EDI = (pop32());
  /* 11d1afc7 pop esi */
  ESI = (pop32());
  /* 11d1afc8 pop ebx */
  EBX = (pop32());
  /* 11d1afc9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d1afca ret  */
  ESPCHK(0x11d1af26u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aff3 @ 0x11d1aff3 (78 bytes, 25 insns) */
void f_11d1aff3(void) {
  FTRACE(0x11d1aff3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1aff3 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11d1aff6 mov dword ptr [esi - 4], eax */
  w32((uint32_t)(ESI + -0x4), (EAX));
  /* 11d1aff9 call 0x11d13d6f */
  push32(0x11d1affeu); f_11d13d6f();
  /* 11d1affe mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11d1b001 mov dword ptr [eax + 0x6c], ecx */
  w32((uint32_t)(EAX + 0x6c), (ECX));
  /* 11d1b004 call 0x11d13d6f */
  push32(0x11d1b009u); f_11d13d6f();
  /* 11d1b009 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11d1b00c mov dword ptr [eax + 0x70], ecx */
  w32((uint32_t)(EAX + 0x70), (ECX));
  /* 11d1b00f cmp dword ptr [edi], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1b015 jne 0x11d1b040 */
  if (!C.zf) goto L_11d1b040;
  /* 11d1b017 cmp dword ptr [edi + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1b01b jne 0x11d1b040 */
  if (!C.zf) goto L_11d1b040;
  /* 11d1b01d cmp dword ptr [edi + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1b024 jne 0x11d1b040 */
  if (!C.zf) goto L_11d1b040;
  /* 11d1b026 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1b02a jne 0x11d1b040 */
  if (!C.zf) goto L_11d1b040;
  /* 11d1b02c cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1b030 je 0x11d1b040 */
  if (C.zf) goto L_11d1b040;
  /* 11d1b032 call 0x11d16e6a */
  push32(0x11d1b037u); f_11d16e6a();
  /* 11d1b037 push eax */
  push32((uint32_t)(EAX));
  /* 11d1b038 push edi */
  push32((uint32_t)(EDI));
  /* 11d1b039 call 0x11d1b22f */
  push32(0x11d1b03eu); f_11d1b22f();
  /* 11d1b03e pop ecx */
  ECX = (pop32());
  /* 11d1b03f pop ecx */
  ECX = (pop32());
L_11d1b040:;
  /* 11d1b040 ret  */
  ESPCHK(0x11d1aff3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b06b @ 0x11d1b06b (440 bytes, 164 insns) */
void f_11d1b06b(void) {
  FTRACE(0x11d1b06bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1b06b push ebp */
  push32((uint32_t)(EBP));
  /* 11d1b06c mov ebp, esp */
  EBP = (ESP);
  /* 11d1b06e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d1b070 push 0x11d1c930 */
  push32((uint32_t)(0x11d1c930u));
  /* 11d1b075 push 0x11d16eb8 */
  push32((uint32_t)(0x11d16eb8u));
  /* 11d1b07a mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11d1b080 push eax */
  push32((uint32_t)(EAX));
  /* 11d1b081 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11d1b088 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d1b08b push ebx */
  push32((uint32_t)(EBX));
  /* 11d1b08c push esi */
  push32((uint32_t)(ESI));
  /* 11d1b08d push edi */
  push32((uint32_t)(EDI));
  /* 11d1b08e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11d1b091 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d1b094 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d1b097 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1b099 je 0x11d1b214 */
  if (C.zf) goto L_11d1b214;
  /* 11d1b09f cmp byte ptr [eax + 8], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11d1b0a3 je 0x11d1b214 */
  if (C.zf) goto L_11d1b214;
  /* 11d1b0a9 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 11d1b0ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1b0ae je 0x11d1b214 */
  if (C.zf) goto L_11d1b214;
  /* 11d1b0b4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d1b0b7 lea edi, [eax + edx + 0xc] */
  EDI = ((uint32_t)(EAX + EDX*1 + 0xc));
  /* 11d1b0bb and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11d1b0bf test byte ptr [ecx], 8 */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(0x8u); fl_logic(_r,8); }
  /* 11d1b0c2 je 0x11d1b108 */
  if (C.zf) goto L_11d1b108;
  /* 11d1b0c4 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11d1b0c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d1b0c9 push dword ptr [esi + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x18))));
  /* 11d1b0cc call 0x11d1b427 */
  push32(0x11d1b0d1u); f_11d1b427();
  /* 11d1b0d1 pop ecx */
  ECX = (pop32());
  /* 11d1b0d2 pop ecx */
  ECX = (pop32());
  /* 11d1b0d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1b0d5 je 0x11d1b20b */
  if (C.zf) goto L_11d1b20b;
  /* 11d1b0db push 1 */
  push32((uint32_t)(0x1u));
  /* 11d1b0dd push edi */
  push32((uint32_t)(EDI));
  /* 11d1b0de call 0x11d1b443 */
  push32(0x11d1b0e3u); f_11d1b443();
  /* 11d1b0e3 pop ecx */
  ECX = (pop32());
  /* 11d1b0e4 pop ecx */
  ECX = (pop32());
  /* 11d1b0e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1b0e7 je 0x11d1b20b */
  if (C.zf) goto L_11d1b20b;
  /* 11d1b0ed mov eax, dword ptr [esi + 0x18] */
  EAX = (r32((uint32_t)(ESI + 0x18)));
  /* 11d1b0f0 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11d1b0f2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11d1b0f5 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1b0f8 push ecx */
  push32((uint32_t)(ECX));
L_11d1b0f9:;
  /* 11d1b0f9 push eax */
  push32((uint32_t)(EAX));
  /* 11d1b0fa call 0x11d1b296 */
  push32(0x11d1b0ffu); f_11d1b296();
  /* 11d1b0ff pop ecx */
  ECX = (pop32());
  /* 11d1b100 pop ecx */
  ECX = (pop32());
  /* 11d1b101 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11d1b103 jmp 0x11d1b210 */
  goto L_11d1b210;
L_11d1b108:;
  /* 11d1b108 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 11d1b10b test byte ptr [esi], 1 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x1u); fl_logic(_r,8); }
  /* 11d1b10e je 0x11d1b162 */
  if (C.zf) goto L_11d1b162;
  /* 11d1b110 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d1b113 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d1b115 push dword ptr [ebx + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0x18))));
  /* 11d1b118 call 0x11d1b427 */
  push32(0x11d1b11du); f_11d1b427();
  /* 11d1b11d pop ecx */
  ECX = (pop32());
  /* 11d1b11e pop ecx */
  ECX = (pop32());
  /* 11d1b11f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1b121 je 0x11d1b20b */
  if (C.zf) goto L_11d1b20b;
  /* 11d1b127 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d1b129 push edi */
  push32((uint32_t)(EDI));
  /* 11d1b12a call 0x11d1b443 */
  push32(0x11d1b12fu); f_11d1b443();
  /* 11d1b12f pop ecx */
  ECX = (pop32());
  /* 11d1b130 pop ecx */
  ECX = (pop32());
  /* 11d1b131 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1b133 je 0x11d1b20b */
  if (C.zf) goto L_11d1b20b;
  /* 11d1b139 push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 11d1b13c push dword ptr [ebx + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0x18))));
  /* 11d1b13f push edi */
  push32((uint32_t)(EDI));
  /* 11d1b140 call 0x11d152a0 */
  push32(0x11d1b145u); f_11d152a0();
  /* 11d1b145 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1b148 cmp dword ptr [esi + 0x14], 4 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x14))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1b14c jne 0x11d1b210 */
  if (!C.zf) goto L_11d1b210;
  /* 11d1b152 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11d1b154 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1b156 je 0x11d1b210 */
  if (C.zf) goto L_11d1b210;
  /* 11d1b15c add esi, 8 */
  { uint32_t _a=(ESI),_b=(0x8u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1b15f push esi */
  push32((uint32_t)(ESI));
  /* 11d1b160 jmp 0x11d1b0f9 */
  goto L_11d1b0f9;
L_11d1b162:;
  /* 11d1b162 cmp dword ptr [esi + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1b166 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d1b169 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d1b16b push dword ptr [ebx + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0x18))));
  /* 11d1b16e jne 0x11d1b1aa */
  if (!C.zf) goto L_11d1b1aa;
  /* 11d1b170 call 0x11d1b427 */
  push32(0x11d1b175u); f_11d1b427();
  /* 11d1b175 pop ecx */
  ECX = (pop32());
  /* 11d1b176 pop ecx */
  ECX = (pop32());
  /* 11d1b177 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1b179 je 0x11d1b20b */
  if (C.zf) goto L_11d1b20b;
  /* 11d1b17f push 1 */
  push32((uint32_t)(0x1u));
  /* 11d1b181 push edi */
  push32((uint32_t)(EDI));
  /* 11d1b182 call 0x11d1b443 */
  push32(0x11d1b187u); f_11d1b443();
  /* 11d1b187 pop ecx */
  ECX = (pop32());
  /* 11d1b188 pop ecx */
  ECX = (pop32());
  /* 11d1b189 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1b18b je 0x11d1b20b */
  if (C.zf) goto L_11d1b20b;
  /* 11d1b18d push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 11d1b190 add esi, 8 */
  { uint32_t _a=(ESI),_b=(0x8u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1b193 push esi */
  push32((uint32_t)(ESI));
  /* 11d1b194 push dword ptr [ebx + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0x18))));
  /* 11d1b197 call 0x11d1b296 */
  push32(0x11d1b19cu); f_11d1b296();
  /* 11d1b19c pop ecx */
  ECX = (pop32());
  /* 11d1b19d pop ecx */
  ECX = (pop32());
  /* 11d1b19e push eax */
  push32((uint32_t)(EAX));
  /* 11d1b19f push edi */
  push32((uint32_t)(EDI));
  /* 11d1b1a0 call 0x11d152a0 */
  push32(0x11d1b1a5u); f_11d152a0();
  /* 11d1b1a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1b1a8 jmp 0x11d1b210 */
  goto L_11d1b210;
L_11d1b1aa:;
  /* 11d1b1aa call 0x11d1b427 */
  push32(0x11d1b1afu); f_11d1b427();
  /* 11d1b1af pop ecx */
  ECX = (pop32());
  /* 11d1b1b0 pop ecx */
  ECX = (pop32());
  /* 11d1b1b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1b1b3 je 0x11d1b20b */
  if (C.zf) goto L_11d1b20b;
  /* 11d1b1b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d1b1b7 push edi */
  push32((uint32_t)(EDI));
  /* 11d1b1b8 call 0x11d1b443 */
  push32(0x11d1b1bdu); f_11d1b443();
  /* 11d1b1bd pop ecx */
  ECX = (pop32());
  /* 11d1b1be pop ecx */
  ECX = (pop32());
  /* 11d1b1bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1b1c1 je 0x11d1b20b */
  if (C.zf) goto L_11d1b20b;
  /* 11d1b1c3 push dword ptr [esi + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x18))));
  /* 11d1b1c6 call 0x11d1b45f */
  push32(0x11d1b1cbu); f_11d1b45f();
  /* 11d1b1cb pop ecx */
  ECX = (pop32());
  /* 11d1b1cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1b1ce je 0x11d1b20b */
  if (C.zf) goto L_11d1b20b;
  /* 11d1b1d0 test byte ptr [esi], 4 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x4u); fl_logic(_r,8); }
  /* 11d1b1d3 je 0x11d1b1f1 */
  if (C.zf) goto L_11d1b1f1;
  /* 11d1b1d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d1b1d7 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 11d1b1da push eax */
  push32((uint32_t)(EAX));
  /* 11d1b1db push dword ptr [ebx + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0x18))));
  /* 11d1b1de call 0x11d1b296 */
  push32(0x11d1b1e3u); f_11d1b296();
  /* 11d1b1e3 pop ecx */
  ECX = (pop32());
  /* 11d1b1e4 pop ecx */
  ECX = (pop32());
  /* 11d1b1e5 push eax */
  push32((uint32_t)(EAX));
  /* 11d1b1e6 push dword ptr [esi + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x18))));
  /* 11d1b1e9 push edi */
  push32((uint32_t)(EDI));
  /* 11d1b1ea call 0x11d1a590 */
  push32(0x11d1b1efu); f_11d1a590();
  /* 11d1b1ef jmp 0x11d1b210 */
  goto L_11d1b210;
L_11d1b1f1:;
  /* 11d1b1f1 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 11d1b1f4 push eax */
  push32((uint32_t)(EAX));
  /* 11d1b1f5 push dword ptr [ebx + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0x18))));
  /* 11d1b1f8 call 0x11d1b296 */
  push32(0x11d1b1fdu); f_11d1b296();
  /* 11d1b1fd pop ecx */
  ECX = (pop32());
  /* 11d1b1fe pop ecx */
  ECX = (pop32());
  /* 11d1b1ff push eax */
  push32((uint32_t)(EAX));
  /* 11d1b200 push dword ptr [esi + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x18))));
  /* 11d1b203 push edi */
  push32((uint32_t)(EDI));
  /* 11d1b204 call 0x11d1a589 */
  push32(0x11d1b209u); f_11d1a589();
  /* 11d1b209 jmp 0x11d1b210 */
  goto L_11d1b210;
L_11d1b20b:;
  /* 11d1b20b call 0x11d1b36d */
  push32(0x11d1b210u); f_11d1b36d();
L_11d1b210:;
  /* 11d1b210 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_11d1b214:;
  /* 11d1b214 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d1b217 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11d1b21e pop edi */
  EDI = (pop32());
  /* 11d1b21f pop esi */
  ESI = (pop32());
  /* 11d1b220 pop ebx */
  EBX = (pop32());
  /* 11d1b221 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d1b222 ret  */
  ESPCHK(0x11d1b06bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000b22f @ 0x11d1b22f (86 bytes, 33 insns) */
void f_11d1b22f(void) {
  FTRACE(0x11d1b22fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1b22f push ebp */
  push32((uint32_t)(EBP));
  /* 11d1b230 mov ebp, esp */
  EBP = (ESP);
  /* 11d1b232 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d1b234 push 0x11d1c940 */
  push32((uint32_t)(0x11d1c940u));
  /* 11d1b239 push 0x11d16eb8 */
  push32((uint32_t)(0x11d16eb8u));
  /* 11d1b23e mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11d1b244 push eax */
  push32((uint32_t)(EAX));
  /* 11d1b245 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11d1b24c push ecx */
  push32((uint32_t)(ECX));
  /* 11d1b24d push ecx */
  push32((uint32_t)(ECX));
  /* 11d1b24e push ebx */
  push32((uint32_t)(EBX));
  /* 11d1b24f push esi */
  push32((uint32_t)(ESI));
  /* 11d1b250 push edi */
  push32((uint32_t)(EDI));
  /* 11d1b251 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11d1b254 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d1b257 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1b259 je 0x11d1b276 */
  if (C.zf) goto L_11d1b276;
  /* 11d1b25b mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11d1b25e mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d1b261 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11d1b263 je 0x11d1b276 */
  if (C.zf) goto L_11d1b276;
  /* 11d1b265 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11d1b269 push ecx */
  push32((uint32_t)(ECX));
  /* 11d1b26a push dword ptr [eax + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x18))));
  /* 11d1b26d call 0x11d1a589 */
  push32(0x11d1b272u); f_11d1a589();
  /* 11d1b272 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_11d1b276:;
  /* 11d1b276 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d1b279 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11d1b280 pop edi */
  EDI = (pop32());
  /* 11d1b281 pop esi */
  ESI = (pop32());
  /* 11d1b282 pop ebx */
  EBX = (pop32());
  /* 11d1b283 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d1b284 ret  */
  ESPCHK(0x11d1b22fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000b296 @ 0x11d1b296 (35 bytes, 15 insns) */
void f_11d1b296(void) {
  FTRACE(0x11d1b296u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1b296 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11d1b29a push esi */
  push32((uint32_t)(ESI));
  /* 11d1b29b mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11d1b29f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11d1b2a1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11d1b2a4 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1b2a6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11d1b2a8 jl 0x11d1b2b7 */
  if ((C.sf!=C.of)) goto L_11d1b2b7;
  /* 11d1b2aa mov esi, dword ptr [edx + esi] */
  ESI = (r32((uint32_t)(EDX + ESI*1)));
  /* 11d1b2ad mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 11d1b2b0 mov ecx, dword ptr [esi + ecx] */
  ECX = (r32((uint32_t)(ESI + ECX*1)));
  /* 11d1b2b3 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1b2b5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11d1b2b7:;
  /* 11d1b2b7 pop esi */
  ESI = (pop32());
  /* 11d1b2b8 ret  */
  ESPCHK(0x11d1b296u, _esp0);
  ESP += 4; return;
}

/* __CallSettingFrame@12 @ 0x11d1b2c0 (76 bytes, 34 insns) */
void f_11d1b2c0(void) {
  FTRACE(0x11d1b2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1b2c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11d1b2c1 mov ebp, esp */
  EBP = (ESP);
  /* 11d1b2c3 sub esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d1b2c6 push ebx */
  push32((uint32_t)(EBX));
  /* 11d1b2c7 push ecx */
  push32((uint32_t)(ECX));
  /* 11d1b2c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11d1b2cb add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1b2ce mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11d1b2d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11d1b2d4 push ebp */
  push32((uint32_t)(EBP));
  /* 11d1b2d5 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11d1b2d8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d1b2db mov ebp, dword ptr [ebp - 4] */
  EBP = (r32((uint32_t)(EBP + -0x4)));
  /* 11d1b2de call 0x11d16e8d */
  push32(0x11d1b2e3u); f_11d16e8d();
  /* 11d1b2e3 push esi */
  push32((uint32_t)(ESI));
  /* 11d1b2e4 push edi */
  push32((uint32_t)(EDI));
  /* 11d1b2e5 call eax */
  call_ind((uint32_t)(EAX), 0x11d1b2e7u);
  /* 11d1b2e7 pop edi */
  EDI = (pop32());
  /* 11d1b2e8 pop esi */
  ESI = (pop32());
  /* 11d1b2e9 mov ebx, ebp */
  EBX = (EBP);
  /* 11d1b2eb pop ebp */
  EBP = (pop32());
  /* 11d1b2ec mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11d1b2ef push ebp */
  push32((uint32_t)(EBP));
  /* 11d1b2f0 mov ebp, ebx */
  EBP = (EBX);
  /* 11d1b2f2 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1b2f8 jne 0x11d1b2ff */
  if (!C.zf) goto L_11d1b2ff;
  /* 11d1b2fa mov ecx, 2 */
  ECX = (0x2u);
L_11d1b2ff:;
  /* 11d1b2ff push ecx */
  push32((uint32_t)(ECX));
  /* 11d1b300 call 0x11d16e8d */
  push32(0x11d1b305u); f_11d16e8d();
  /* 11d1b305 pop ebp */
  EBP = (pop32());
  /* 11d1b306 pop ecx */
  ECX = (pop32());
  /* 11d1b307 pop ebx */
  EBX = (pop32());
  /* 11d1b308 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11d1b309 ret 0xc */
  ESPCHK(0x11d1b2c0u, _esp0);
  ESP += 16; return;
}

/* FUN_1000b30c @ 0x11d1b30c (86 bytes, 32 insns) */
void f_11d1b30c(void) {
  FTRACE(0x11d1b30cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1b30c push ebp */
  push32((uint32_t)(EBP));
  /* 11d1b30d mov ebp, esp */
  EBP = (ESP);
  /* 11d1b30f push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d1b311 push 0x11d1c950 */
  push32((uint32_t)(0x11d1c950u));
  /* 11d1b316 push 0x11d16eb8 */
  push32((uint32_t)(0x11d16eb8u));
  /* 11d1b31b mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11d1b321 push eax */
  push32((uint32_t)(EAX));
  /* 11d1b322 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11d1b329 push ecx */
  push32((uint32_t)(ECX));
  /* 11d1b32a push ecx */
  push32((uint32_t)(ECX));
  /* 11d1b32b push ebx */
  push32((uint32_t)(EBX));
  /* 11d1b32c push esi */
  push32((uint32_t)(ESI));
  /* 11d1b32d push edi */
  push32((uint32_t)(EDI));
  /* 11d1b32e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11d1b331 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11d1b333 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 11d1b336 call 0x11d13d6f */
  push32(0x11d1b33bu); f_11d13d6f();
  /* 11d1b33b cmp dword ptr [eax + 0x60], esi */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x60))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1b33e je 0x11d1b35f */
  if (C.zf) goto L_11d1b35f;
  /* 11d1b340 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11d1b347 call 0x11d13d6f */
  push32(0x11d1b34cu); f_11d13d6f();
  /* 11d1b34c call dword ptr [eax + 0x60] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x60))), 0x11d1b34fu);
  /* 11d1b34f mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 11d1b352 jmp 0x11d1b35f */
  goto L_11d1b35f;
  /* 11d1b354 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d1b356 pop eax */
  EAX = (pop32());
  /* 11d1b357 ret  */
  ESPCHK(0x11d1b30cu, _esp0);
  ESP += 4; return;
  /* 11d1b358 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11d1b35b and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_11d1b35f:;
  /* 11d1b35f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11d1b363 call 0x11d1b368 */
  call_ind(0x11d1b368u, 0x11d1b368u);
  /* 11d1b368 jmp 0x11d1b477 */
  f_11d1b477(); return;
}

/* FUN_1000b36d @ 0x11d1b36d (79 bytes, 29 insns) */
void f_11d1b36d(void) {
  FTRACE(0x11d1b36du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1b36d push ebp */
  push32((uint32_t)(EBP));
  /* 11d1b36e mov ebp, esp */
  EBP = (ESP);
  /* 11d1b370 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11d1b372 push 0x11d1c968 */
  push32((uint32_t)(0x11d1c968u));
  /* 11d1b377 push 0x11d16eb8 */
  push32((uint32_t)(0x11d16eb8u));
  /* 11d1b37c mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11d1b382 push eax */
  push32((uint32_t)(EAX));
  /* 11d1b383 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11d1b38a push ecx */
  push32((uint32_t)(ECX));
  /* 11d1b38b push ecx */
  push32((uint32_t)(ECX));
  /* 11d1b38c push ebx */
  push32((uint32_t)(EBX));
  /* 11d1b38d push esi */
  push32((uint32_t)(ESI));
  /* 11d1b38e push edi */
  push32((uint32_t)(EDI));
  /* 11d1b38f mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11d1b392 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11d1b396 mov eax, dword ptr [0x11d21490] */
  EAX = (r32((uint32_t)(0x11d21490)));
  /* 11d1b39b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1b39d je 0x11d1b3b5 */
  if (C.zf) goto L_11d1b3b5;
  /* 11d1b39f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11d1b3a6 call eax */
  call_ind((uint32_t)(EAX), 0x11d1b3a8u);
  /* 11d1b3a8 jmp 0x11d1b3b1 */
  goto L_11d1b3b1;
  /* 11d1b3aa push 1 */
  push32((uint32_t)(0x1u));
  /* 11d1b3ac pop eax */
  EAX = (pop32());
  /* 11d1b3ad ret  */
  ESPCHK(0x11d1b36du, _esp0);
  ESP += 4; return;
  /* 11d1b3ae mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
L_11d1b3b1:;
  /* 11d1b3b1 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_11d1b3b5:;
  /* 11d1b3b5 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11d1b3b9 call 0x11d1b3be */
  call_ind(0x11d1b3beu, 0x11d1b3beu);
  /* 11d1b3be jmp 0x11d1b30c */
  f_11d1b30c(); return;
}

/* FUN_1000b3c3 @ 0x11d1b3c3 (70 bytes, 24 insns) */
void f_11d1b3c3(void) {
  FTRACE(0x11d1b3c3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1b3c3 push esi */
  push32((uint32_t)(ESI));
  /* 11d1b3c4 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11d1b3c8 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11d1b3ca cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1b3d0 jne 0x11d1b3e6 */
  if (!C.zf) goto L_11d1b3e6;
  /* 11d1b3d2 cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1b3d6 jne 0x11d1b3e6 */
  if (!C.zf) goto L_11d1b3e6;
  /* 11d1b3d8 cmp dword ptr [eax + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11d1b3df jne 0x11d1b3e6 */
  if (!C.zf) goto L_11d1b3e6;
  /* 11d1b3e1 jmp 0x11d1b30c */
  f_11d1b30c(); return;
L_11d1b3e6:;
  /* 11d1b3e6 mov eax, dword ptr [0x11d375a8] */
  EAX = (r32((uint32_t)(0x11d375a8)));
  /* 11d1b3eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1b3ed je 0x11d1b403 */
  if (C.zf) goto L_11d1b403;
  /* 11d1b3ef push eax */
  push32((uint32_t)(EAX));
  /* 11d1b3f0 call 0x11d1b45f */
  push32(0x11d1b3f5u); f_11d1b45f();
  /* 11d1b3f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1b3f7 pop ecx */
  ECX = (pop32());
  /* 11d1b3f8 je 0x11d1b403 */
  if (C.zf) goto L_11d1b403;
  /* 11d1b3fa push esi */
  push32((uint32_t)(ESI));
  /* 11d1b3fb call dword ptr [0x11d375a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d375a8))), 0x11d1b401u);
  /* 11d1b401 jmp 0x11d1b405 */
  goto L_11d1b405;
L_11d1b403:;
  /* 11d1b403 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11d1b405:;
  /* 11d1b405 pop esi */
  ESI = (pop32());
  /* 11d1b406 ret 4 */
  ESPCHK(0x11d1b3c3u, _esp0);
  ESP += 8; return;
}

/* FUN_1000b427 @ 0x11d1b427 (28 bytes, 12 insns) */
void f_11d1b427(void) {
  FTRACE(0x11d1b427u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1b427 push esi */
  push32((uint32_t)(ESI));
  /* 11d1b428 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d1b42a pop esi */
  ESI = (pop32());
  /* 11d1b42b push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11d1b42f push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11d1b433 call dword ptr [0x11d1c008] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c008))), 0x11d1b439u);
  /* 11d1b439 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1b43b je 0x11d1b43f */
  if (C.zf) goto L_11d1b43f;
  /* 11d1b43d xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11d1b43f:;
  /* 11d1b43f mov eax, esi */
  EAX = (ESI);
  /* 11d1b441 pop esi */
  ESI = (pop32());
  /* 11d1b442 ret  */
  ESPCHK(0x11d1b427u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b443 @ 0x11d1b443 (28 bytes, 12 insns) */
void f_11d1b443(void) {
  FTRACE(0x11d1b443u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1b443 push esi */
  push32((uint32_t)(ESI));
  /* 11d1b444 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d1b446 pop esi */
  ESI = (pop32());
  /* 11d1b447 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11d1b44b push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11d1b44f call dword ptr [0x11d1c04c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c04c))), 0x11d1b455u);
  /* 11d1b455 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1b457 je 0x11d1b45b */
  if (C.zf) goto L_11d1b45b;
  /* 11d1b459 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11d1b45b:;
  /* 11d1b45b mov eax, esi */
  EAX = (ESI);
  /* 11d1b45d pop esi */
  ESI = (pop32());
  /* 11d1b45e ret  */
  ESPCHK(0x11d1b443u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b45f @ 0x11d1b45f (24 bytes, 11 insns) */
void f_11d1b45f(void) {
  FTRACE(0x11d1b45fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1b45f push esi */
  push32((uint32_t)(ESI));
  /* 11d1b460 push 1 */
  push32((uint32_t)(0x1u));
  /* 11d1b462 pop esi */
  ESI = (pop32());
  /* 11d1b463 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11d1b467 call dword ptr [0x11d1c010] */
  call_ind((uint32_t)(r32((uint32_t)(0x11d1c010))), 0x11d1b46du);
  /* 11d1b46d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1b46f je 0x11d1b473 */
  if (C.zf) goto L_11d1b473;
  /* 11d1b471 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11d1b473:;
  /* 11d1b473 mov eax, esi */
  EAX = (ESI);
  /* 11d1b475 pop esi */
  ESI = (pop32());
  /* 11d1b476 ret  */
  ESPCHK(0x11d1b45fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000b477 @ 0x11d1b477 (23 bytes, 10 insns) */
void f_11d1b477(void) {
  FTRACE(0x11d1b477u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1b477 push 0xa */
  push32((uint32_t)(0xau));
  /* 11d1b479 call 0x11d14771 */
  push32(0x11d1b47eu); f_11d14771();
  /* 11d1b47e push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11d1b480 call 0x11d17f4e */
  push32(0x11d1b485u); f_11d17f4e();
  /* 11d1b485 pop ecx */
  ECX = (pop32());
  /* 11d1b486 pop ecx */
  ECX = (pop32());
  /* 11d1b487 push 3 */
  push32((uint32_t)(0x3u));
  /* 11d1b489 call 0x11d136a2 */
  push32(0x11d1b48eu); f_11d136a2();
  /* 11d1b48e int3  */
  x86_unimpl("int3 @ 0x11d1b48e");
  /* 11d1b48f int3  */
  x86_unimpl("int3 @ 0x11d1b48f");
}

/* Unwind@1000b490 @ 0x11d1b490 (26 bytes, 8 insns) */
void f_11d1b490(void) {
  FTRACE(0x11d1b490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1b490 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d1b493 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11d1b496 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1b498 je 0x11d1b4a9 */
  if (C.zf) goto L_11d1b4a9;
  /* 11d1b49e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d1b4a1 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1b4a4 jmp 0x11d19b92 */
  f_11d19b92(); return;
L_11d1b4a9:;
  /* 11d1b4a9 ret  */
  ESPCHK(0x11d1b490u, _esp0);
  ESP += 4; return;
}

/* Unwind@1000b4aa @ 0x11d1b4aa (10 bytes, 4 insns) */
void f_11d1b4aa(void) {
  FTRACE(0x11d1b4aau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1b4aa push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11d1b4ad call 0x11d1a4f0 */
  push32(0x11d1b4b2u); f_11d1a4f0();
  /* 11d1b4b2 pop ecx */
  ECX = (pop32());
  /* 11d1b4b3 ret  */
  ESPCHK(0x11d1b4aau, _esp0);
  ESP += 4; return;
}

/* Unwind@1000b4c0 @ 0x11d1b4c0 (26 bytes, 8 insns) */
void f_11d1b4c0(void) {
  FTRACE(0x11d1b4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1b4c0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d1b4c3 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11d1b4c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1b4c8 je 0x11d1b4d9 */
  if (C.zf) goto L_11d1b4d9;
  /* 11d1b4ce mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d1b4d1 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1b4d4 jmp 0x11d19b92 */
  f_11d19b92(); return;
L_11d1b4d9:;
  /* 11d1b4d9 ret  */
  ESPCHK(0x11d1b4c0u, _esp0);
  ESP += 4; return;
}

/* Unwind@1000b4da @ 0x11d1b4da (11 bytes, 3 insns) */
void f_11d1b4da(void) {
  FTRACE(0x11d1b4dau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1b4da mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d1b4dd add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1b4e0 jmp 0x11d1a16b */
  f_11d1a16b(); return;
}

/* Unwind@1000b4f0 @ 0x11d1b4f0 (11 bytes, 3 insns) */
void f_11d1b4f0(void) {
  FTRACE(0x11d1b4f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1b4f0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d1b4f3 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11d1b4f6 jmp 0x11d1a16b */
  f_11d1a16b(); return;
}

/* Unwind@1000b508 @ 0x11d1b508 (8 bytes, 2 insns) */
void f_11d1b508(void) {
  FTRACE(0x11d1b508u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1b508 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d1b50b jmp 0x11d1a299 */
  f_11d1a299(); return;
}

/* Unwind@1000b51c @ 0x11d1b51c (26 bytes, 8 insns) */
void f_11d1b51c(void) {
  FTRACE(0x11d1b51cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1b51c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d1b51f and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11d1b522 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1b524 je 0x11d1b535 */
  if (C.zf) goto L_11d1b535;
  /* 11d1b52a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d1b52d add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1b530 jmp 0x11d19b92 */
  f_11d19b92(); return;
L_11d1b535:;
  /* 11d1b535 ret  */
  ESPCHK(0x11d1b51cu, _esp0);
  ESP += 4; return;
}

/* Unwind@1000b540 @ 0x11d1b540 (26 bytes, 8 insns) */
void f_11d1b540(void) {
  FTRACE(0x11d1b540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11d1b540 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11d1b543 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11d1b546 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11d1b548 je 0x11d1b559 */
  if (C.zf) goto L_11d1b559;
  /* 11d1b54e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11d1b551 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11d1b554 jmp 0x11d19b92 */
  f_11d19b92(); return;
L_11d1b559:;
  /* 11d1b559 ret  */
  ESPCHK(0x11d1b540u, _esp0);
  ESP += 4; return;
}

