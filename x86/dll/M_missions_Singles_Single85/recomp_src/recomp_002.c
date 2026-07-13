#include "recomp.h"

/* FUN_10016ed0 @ 0x11e56ed0 (62 bytes, 35 insns) */
void f_11e56ed0(void) {
  FTRACE(0x11e56ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e56ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e56ed1 mov ebp, esp */
  EBP = (ESP);
  /* 11e56ed3 push esi */
  push32((uint32_t)(ESI));
  /* 11e56ed4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e56ed6 push eax */
  push32((uint32_t)(EAX));
  /* 11e56ed7 push eax */
  push32((uint32_t)(EAX));
  /* 11e56ed8 push eax */
  push32((uint32_t)(EAX));
  /* 11e56ed9 push eax */
  push32((uint32_t)(EAX));
  /* 11e56eda push eax */
  push32((uint32_t)(EAX));
  /* 11e56edb push eax */
  push32((uint32_t)(EAX));
  /* 11e56edc push eax */
  push32((uint32_t)(EAX));
  /* 11e56edd push eax */
  push32((uint32_t)(EAX));
  /* 11e56ede mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e56ee1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11e56ee4:;
  /* 11e56ee4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e56ee6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11e56ee8 je 0x11e56ef1 */
  if (C.zf) goto L_11e56ef1;
  /* 11e56eea inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11e56eeb bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11e56eeb");
  /* 11e56eef jmp 0x11e56ee4 */
  goto L_11e56ee4;
L_11e56ef1:;
  /* 11e56ef1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11e56ef4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e56ef7 nop  */
  /* nop */
L_11e56ef8:;
  /* 11e56ef8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11e56ef9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e56efb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11e56efd je 0x11e56f06 */
  if (C.zf) goto L_11e56f06;
  /* 11e56eff inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e56f00 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11e56f00");
  /* 11e56f04 jae 0x11e56ef8 */
  if (!C.cf) goto L_11e56ef8;
L_11e56f06:;
  /* 11e56f06 mov eax, ecx */
  EAX = (ECX);
  /* 11e56f08 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56f0b pop esi */
  ESI = (pop32());
  /* 11e56f0c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e56f0d ret  */
  ESPCHK(0x11e56ed0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x11e56f10 (56 bytes, 31 insns) */
void f_11e56f10(void) {
  FTRACE(0x11e56f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e56f10 push ebp */
  push32((uint32_t)(EBP));
  /* 11e56f11 mov ebp, esp */
  EBP = (ESP);
  /* 11e56f13 push edi */
  push32((uint32_t)(EDI));
  /* 11e56f14 push esi */
  push32((uint32_t)(ESI));
  /* 11e56f15 push ebx */
  push32((uint32_t)(EBX));
  /* 11e56f16 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e56f19 jecxz 0x11e56f41 */
  x86_unimpl("jecxz @ 0x11e56f19");
  /* 11e56f1b mov ebx, ecx */
  EBX = (ECX);
  /* 11e56f1d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11e56f20 mov esi, edi */
  ESI = (EDI);
  /* 11e56f22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e56f24 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 11e56f26 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e56f28 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56f2a mov edi, esi */
  EDI = (ESI);
  /* 11e56f2c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11e56f2f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 11e56f31 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 11e56f34 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e56f36 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e56f39 ja 0x11e56f3f */
  if ((!C.cf&&!C.zf)) goto L_11e56f3f;
  /* 11e56f3b je 0x11e56f41 */
  if (C.zf) goto L_11e56f41;
  /* 11e56f3d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11e56f3e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_11e56f3f:;
  /* 11e56f3f not ecx */
  ECX = (~(ECX));
L_11e56f41:;
  /* 11e56f41 mov eax, ecx */
  EAX = (ECX);
  /* 11e56f43 pop ebx */
  EBX = (pop32());
  /* 11e56f44 pop esi */
  ESI = (pop32());
  /* 11e56f45 pop edi */
  EDI = (pop32());
  /* 11e56f46 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e56f47 ret  */
  ESPCHK(0x11e56f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10016f50 @ 0x11e56f50 (58 bytes, 32 insns) */
void f_11e56f50(void) {
  FTRACE(0x11e56f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e56f50 push ebp */
  push32((uint32_t)(EBP));
  /* 11e56f51 mov ebp, esp */
  EBP = (ESP);
  /* 11e56f53 push esi */
  push32((uint32_t)(ESI));
  /* 11e56f54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e56f56 push eax */
  push32((uint32_t)(EAX));
  /* 11e56f57 push eax */
  push32((uint32_t)(EAX));
  /* 11e56f58 push eax */
  push32((uint32_t)(EAX));
  /* 11e56f59 push eax */
  push32((uint32_t)(EAX));
  /* 11e56f5a push eax */
  push32((uint32_t)(EAX));
  /* 11e56f5b push eax */
  push32((uint32_t)(EAX));
  /* 11e56f5c push eax */
  push32((uint32_t)(EAX));
  /* 11e56f5d push eax */
  push32((uint32_t)(EAX));
  /* 11e56f5e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e56f61 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11e56f64:;
  /* 11e56f64 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e56f66 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11e56f68 je 0x11e56f71 */
  if (C.zf) goto L_11e56f71;
  /* 11e56f6a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11e56f6b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11e56f6b");
  /* 11e56f6f jmp 0x11e56f64 */
  goto L_11e56f64;
L_11e56f71:;
  /* 11e56f71 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_11e56f74:;
  /* 11e56f74 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e56f76 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11e56f78 je 0x11e56f84 */
  if (C.zf) goto L_11e56f84;
  /* 11e56f7a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e56f7b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11e56f7b");
  /* 11e56f7f jae 0x11e56f74 */
  if (!C.cf) goto L_11e56f74;
  /* 11e56f81 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_11e56f84:;
  /* 11e56f84 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e56f87 pop esi */
  ESI = (pop32());
  /* 11e56f88 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e56f89 ret  */
  ESPCHK(0x11e56f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10016f90 @ 0x11e56f90 (512 bytes, 147 insns) */
void f_11e56f90(void) {
  FTRACE(0x11e56f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e56f90 push ebp */
  push32((uint32_t)(EBP));
  /* 11e56f91 mov ebp, esp */
  EBP = (ESP);
  /* 11e56f93 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e56f96 cmp dword ptr [0x11e76c3c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76c3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e56f9d jne 0x11e56fc2 */
  if (!C.zf) goto L_11e56fc2;
  /* 11e56f9f call 0x11e57a60 */
  push32(0x11e56fa4u); f_11e57a60();
  /* 11e56fa4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e56fa6 je 0x11e56fb2 */
  if (C.zf) goto L_11e56fb2;
  /* 11e56fa8 mov eax, dword ptr [0x11e792f0] */
  EAX = (r32((uint32_t)(0x11e792f0)));
  /* 11e56fad mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e56fb0 jmp 0x11e56fb9 */
  goto L_11e56fb9;
L_11e56fb2:;
  /* 11e56fb2 mov dword ptr [ebp - 8], 0x11e57ab0 */
  w32((uint32_t)(EBP + -0x8), (0x11e57ab0u));
L_11e56fb9:;
  /* 11e56fb9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e56fbc mov dword ptr [0x11e76c3c], ecx */
  w32((uint32_t)(0x11e76c3c), (ECX));
L_11e56fc2:;
  /* 11e56fc2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e56fc6 jne 0x11e56fd2 */
  if (!C.zf) goto L_11e56fd2;
  /* 11e56fc8 call 0x11e578b0 */
  push32(0x11e56fcdu); f_11e578b0();
  /* 11e56fcd jmp 0x11e5709e */
  goto L_11e5709e;
L_11e56fd2:;
  /* 11e56fd2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e56fd5 mov dword ptr [0x11e76c2c], edx */
  w32((uint32_t)(0x11e76c2c), (EDX));
  /* 11e56fdb cmp dword ptr [0x11e76c2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76c2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e56fe2 je 0x11e57004 */
  if (C.zf) goto L_11e57004;
  /* 11e56fe4 mov eax, dword ptr [0x11e76c2c] */
  EAX = (r32((uint32_t)(0x11e76c2c)));
  /* 11e56fe9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e56fec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e56fee je 0x11e57004 */
  if (C.zf) goto L_11e57004;
  /* 11e56ff0 push 0x11e76c2c */
  push32((uint32_t)(0x11e76c2cu));
  /* 11e56ff5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11e56ff7 push 0x11e75bb0 */
  push32((uint32_t)(0x11e75bb0u));
  /* 11e56ffc call 0x11e57190 */
  push32(0x11e57001u); f_11e57190();
  /* 11e57001 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e57004:;
  /* 11e57004 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e57007 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5700a mov dword ptr [0x11e76c30], edx */
  w32((uint32_t)(0x11e76c30), (EDX));
  /* 11e57010 cmp dword ptr [0x11e76c30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76c30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57017 je 0x11e57039 */
  if (C.zf) goto L_11e57039;
  /* 11e57019 mov eax, dword ptr [0x11e76c30] */
  EAX = (r32((uint32_t)(0x11e76c30)));
  /* 11e5701e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e57021 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e57023 je 0x11e57039 */
  if (C.zf) goto L_11e57039;
  /* 11e57025 push 0x11e76c30 */
  push32((uint32_t)(0x11e76c30u));
  /* 11e5702a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11e5702c push 0x11e75af8 */
  push32((uint32_t)(0x11e75af8u));
  /* 11e57031 call 0x11e57190 */
  push32(0x11e57036u); f_11e57190();
  /* 11e57036 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e57039:;
  /* 11e57039 mov dword ptr [0x11e76c34], 0 */
  w32((uint32_t)(0x11e76c34), (0x0u));
  /* 11e57043 cmp dword ptr [0x11e76c2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76c2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5704a je 0x11e5707d */
  if (C.zf) goto L_11e5707d;
  /* 11e5704c mov edx, dword ptr [0x11e76c2c] */
  EDX = (r32((uint32_t)(0x11e76c2c)));
  /* 11e57052 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11e57055 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e57057 je 0x11e5707d */
  if (C.zf) goto L_11e5707d;
  /* 11e57059 cmp dword ptr [0x11e76c30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76c30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57060 je 0x11e57076 */
  if (C.zf) goto L_11e57076;
  /* 11e57062 mov ecx, dword ptr [0x11e76c30] */
  ECX = (r32((uint32_t)(0x11e76c30)));
  /* 11e57068 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11e5706b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e5706d je 0x11e57076 */
  if (C.zf) goto L_11e57076;
  /* 11e5706f call 0x11e57220 */
  push32(0x11e57074u); f_11e57220();
  /* 11e57074 jmp 0x11e5707b */
  goto L_11e5707b;
L_11e57076:;
  /* 11e57076 call 0x11e57610 */
  push32(0x11e5707bu); f_11e57610();
L_11e5707b:;
  /* 11e5707b jmp 0x11e5709e */
  goto L_11e5709e;
L_11e5707d:;
  /* 11e5707d cmp dword ptr [0x11e76c30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76c30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57084 je 0x11e57099 */
  if (C.zf) goto L_11e57099;
  /* 11e57086 mov eax, dword ptr [0x11e76c30] */
  EAX = (r32((uint32_t)(0x11e76c30)));
  /* 11e5708b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e5708e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e57090 je 0x11e57099 */
  if (C.zf) goto L_11e57099;
  /* 11e57092 call 0x11e577b0 */
  push32(0x11e57097u); f_11e577b0();
  /* 11e57097 jmp 0x11e5709e */
  goto L_11e5709e;
L_11e57099:;
  /* 11e57099 call 0x11e578b0 */
  push32(0x11e5709eu); f_11e578b0();
L_11e5709e:;
  /* 11e5709e cmp dword ptr [0x11e76c34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76c34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e570a5 jne 0x11e570ae */
  if (!C.zf) goto L_11e570ae;
  /* 11e570a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e570a9 jmp 0x11e5718c */
  goto L_11e5718c;
L_11e570ae:;
  /* 11e570ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e570b1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e570b7 push edx */
  push32((uint32_t)(EDX));
  /* 11e570b8 call 0x11e578e0 */
  push32(0x11e570bdu); f_11e578e0();
  /* 11e570bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e570c0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e570c3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e570c7 je 0x11e570dc */
  if (C.zf) goto L_11e570dc;
  /* 11e570c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e570cc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e570d1 push eax */
  push32((uint32_t)(EAX));
  /* 11e570d2 call dword ptr [0x11e792e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e792e8))), 0x11e570d8u);
  /* 11e570d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e570da jne 0x11e570e3 */
  if (!C.zf) goto L_11e570e3;
L_11e570dc:;
  /* 11e570dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e570de jmp 0x11e5718c */
  goto L_11e5718c;
L_11e570e3:;
  /* 11e570e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e570e5 mov ecx, dword ptr [0x11e76c1c] */
  ECX = (r32((uint32_t)(0x11e76c1c)));
  /* 11e570eb push ecx */
  push32((uint32_t)(ECX));
  /* 11e570ec call dword ptr [0x11e792ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e792ec))), 0x11e570f2u);
  /* 11e570f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e570f4 jne 0x11e570fd */
  if (!C.zf) goto L_11e570fd;
  /* 11e570f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e570f8 jmp 0x11e5718c */
  goto L_11e5718c;
L_11e570fd:;
  /* 11e570fd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57101 je 0x11e57128 */
  if (C.zf) goto L_11e57128;
  /* 11e57103 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e57106 mov ax, word ptr [0x11e76c1c] */
  AX = (r16((uint32_t)(0x11e76c1c)));
  /* 11e5710c mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11e5710f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e57112 mov dx, word ptr [0x11e76c38] */
  DX = (r16((uint32_t)(0x11e76c38)));
  /* 11e57119 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 11e5711d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e57120 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11e57124 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_11e57128:;
  /* 11e57128 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5712c je 0x11e57187 */
  if (C.zf) goto L_11e57187;
  /* 11e5712e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11e57130 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e57133 push edx */
  push32((uint32_t)(EDX));
  /* 11e57134 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 11e57139 mov eax, dword ptr [0x11e76c1c] */
  EAX = (r32((uint32_t)(0x11e76c1c)));
  /* 11e5713e push eax */
  push32((uint32_t)(EAX));
  /* 11e5713f call dword ptr [0x11e76c3c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e76c3c))), 0x11e57145u);
  /* 11e57145 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e57147 jne 0x11e5714d */
  if (!C.zf) goto L_11e5714d;
  /* 11e57149 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e5714b jmp 0x11e5718c */
  goto L_11e5718c;
L_11e5714d:;
  /* 11e5714d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11e5714f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e57152 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57155 push ecx */
  push32((uint32_t)(ECX));
  /* 11e57156 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 11e5715b mov edx, dword ptr [0x11e76c38] */
  EDX = (r32((uint32_t)(0x11e76c38)));
  /* 11e57161 push edx */
  push32((uint32_t)(EDX));
  /* 11e57162 call dword ptr [0x11e76c3c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e76c3c))), 0x11e57168u);
  /* 11e57168 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e5716a jne 0x11e57170 */
  if (!C.zf) goto L_11e57170;
  /* 11e5716c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e5716e jmp 0x11e5718c */
  goto L_11e5718c;
L_11e57170:;
  /* 11e57170 push 0xa */
  push32((uint32_t)(0xau));
  /* 11e57172 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e57175 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5717a push eax */
  push32((uint32_t)(EAX));
  /* 11e5717b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e5717e push ecx */
  push32((uint32_t)(ECX));
  /* 11e5717f call 0x11e4d2b0 */
  push32(0x11e57184u); f_11e4d2b0();
  /* 11e57184 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e57187:;
  /* 11e57187 mov eax, 1 */
  EAX = (0x1u);
L_11e5718c:;
  /* 11e5718c mov esp, ebp */
  ESP = (EBP);
  /* 11e5718e pop ebp */
  EBP = (pop32());
  /* 11e5718f ret  */
  ESPCHK(0x11e56f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10017190 @ 0x11e57190 (130 bytes, 47 insns) */
void f_11e57190(void) {
  FTRACE(0x11e57190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e57190 push ebp */
  push32((uint32_t)(EBP));
  /* 11e57191 mov ebp, esp */
  EBP = (ESP);
  /* 11e57193 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e57196 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11e5719d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11e571a4:;
  /* 11e571a4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e571a7 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e571aa jg 0x11e5720e */
  if ((!C.zf&&C.sf==C.of)) goto L_11e5720e;
  /* 11e571ac cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e571b0 je 0x11e5720e */
  if (C.zf) goto L_11e5720e;
  /* 11e571b2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e571b5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e571b8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e571b9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e571bb sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11e571bd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e571c0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e571c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e571c6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 11e571c9 push eax */
  push32((uint32_t)(EAX));
  /* 11e571ca mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e571cd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e571cf push edx */
  push32((uint32_t)(EDX));
  /* 11e571d0 call 0x11e59950 */
  push32(0x11e571d5u); f_11e59950();
  /* 11e571d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e571d8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e571db cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e571df jne 0x11e571f2 */
  if (!C.zf) goto L_11e571f2;
  /* 11e571e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e571e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e571e7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 11e571eb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e571ee mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11e571f0 jmp 0x11e5720c */
  goto L_11e5720c;
L_11e571f2:;
  /* 11e571f2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e571f6 jge 0x11e57203 */
  if ((C.sf==C.of)) goto L_11e57203;
  /* 11e571f8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e571fb sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e571fe mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11e57201 jmp 0x11e5720c */
  goto L_11e5720c;
L_11e57203:;
  /* 11e57203 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e57206 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57209 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11e5720c:;
  /* 11e5720c jmp 0x11e571a4 */
  goto L_11e571a4;
L_11e5720e:;
  /* 11e5720e mov esp, ebp */
  ESP = (EBP);
  /* 11e57210 pop ebp */
  EBP = (pop32());
  /* 11e57211 ret  */
  ESPCHK(0x11e57190u, _esp0);
  ESP += 4; return;
}

/* FUN_10017220 @ 0x11e57220 (186 bytes, 50 insns) */
void f_11e57220(void) {
  FTRACE(0x11e57220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e57220 push ebp */
  push32((uint32_t)(EBP));
  /* 11e57221 mov ebp, esp */
  EBP = (ESP);
  /* 11e57223 push ecx */
  push32((uint32_t)(ECX));
  /* 11e57224 mov eax, dword ptr [0x11e76c2c] */
  EAX = (r32((uint32_t)(0x11e76c2c)));
  /* 11e57229 push eax */
  push32((uint32_t)(EAX));
  /* 11e5722a call 0x11e4d5a0 */
  push32(0x11e5722fu); f_11e4d5a0();
  /* 11e5722f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57232 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e57234 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57237 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11e5723a mov dword ptr [0x11e76c28], ecx */
  w32((uint32_t)(0x11e76c28), (ECX));
  /* 11e57240 mov edx, dword ptr [0x11e76c30] */
  EDX = (r32((uint32_t)(0x11e76c30)));
  /* 11e57246 push edx */
  push32((uint32_t)(EDX));
  /* 11e57247 call 0x11e4d5a0 */
  push32(0x11e5724cu); f_11e4d5a0();
  /* 11e5724c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5724f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e57251 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57254 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11e57257 mov dword ptr [0x11e76c20], ecx */
  w32((uint32_t)(0x11e76c20), (ECX));
  /* 11e5725d mov dword ptr [0x11e76c1c], 0 */
  w32((uint32_t)(0x11e76c1c), (0x0u));
  /* 11e57267 cmp dword ptr [0x11e76c28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76c28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5726e je 0x11e57279 */
  if (C.zf) goto L_11e57279;
  /* 11e57270 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11e57277 jmp 0x11e5728b */
  goto L_11e5728b;
L_11e57279:;
  /* 11e57279 mov edx, dword ptr [0x11e76c2c] */
  EDX = (r32((uint32_t)(0x11e76c2c)));
  /* 11e5727f push edx */
  push32((uint32_t)(EDX));
  /* 11e57280 call 0x11e57cc0 */
  push32(0x11e57285u); f_11e57cc0();
  /* 11e57285 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57288 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e5728b:;
  /* 11e5728b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e5728e mov dword ptr [0x11e76c24], eax */
  w32((uint32_t)(0x11e76c24), (EAX));
  /* 11e57293 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e57295 push 0x11e572e0 */
  push32((uint32_t)(0x11e572e0u));
  /* 11e5729a call dword ptr [0x11e792e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e792e0))), 0x11e572a0u);
  /* 11e572a0 mov ecx, dword ptr [0x11e76c34] */
  ECX = (r32((uint32_t)(0x11e76c34)));
  /* 11e572a6 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 11e572ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e572ae je 0x11e572cc */
  if (C.zf) goto L_11e572cc;
  /* 11e572b0 mov edx, dword ptr [0x11e76c34] */
  EDX = (r32((uint32_t)(0x11e76c34)));
  /* 11e572b6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 11e572bc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e572be je 0x11e572cc */
  if (C.zf) goto L_11e572cc;
  /* 11e572c0 mov eax, dword ptr [0x11e76c34] */
  EAX = (r32((uint32_t)(0x11e76c34)));
  /* 11e572c5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 11e572c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e572ca jne 0x11e572d6 */
  if (!C.zf) goto L_11e572d6;
L_11e572cc:;
  /* 11e572cc mov dword ptr [0x11e76c34], 0 */
  w32((uint32_t)(0x11e76c34), (0x0u));
L_11e572d6:;
  /* 11e572d6 mov esp, ebp */
  ESP = (EBP);
  /* 11e572d8 pop ebp */
  EBP = (pop32());
  /* 11e572d9 ret  */
  ESPCHK(0x11e57220u, _esp0);
  ESP += 4; return;
}

/* FUN_100172e0 @ 0x11e572e0 (804 bytes, 220 insns) */
void f_11e572e0(void) {
  FTRACE(0x11e572e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e572e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e572e1 mov ebp, esp */
  EBP = (ESP);
  /* 11e572e3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e572e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e572e9 push eax */
  push32((uint32_t)(EAX));
  /* 11e572ea call 0x11e57c40 */
  push32(0x11e572efu); f_11e57c40();
  /* 11e572ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e572f2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11e572f5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11e572f7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11e572fa push ecx */
  push32((uint32_t)(ECX));
  /* 11e572fb mov edx, dword ptr [0x11e76c20] */
  EDX = (r32((uint32_t)(0x11e76c20)));
  /* 11e57301 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e57303 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e57305 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 11e5730b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57311 push edx */
  push32((uint32_t)(EDX));
  /* 11e57312 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11e57315 push eax */
  push32((uint32_t)(EAX));
  /* 11e57316 call dword ptr [0x11e76c3c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e76c3c))), 0x11e5731cu);
  /* 11e5731c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e5731e jne 0x11e57334 */
  if (!C.zf) goto L_11e57334;
  /* 11e57320 mov dword ptr [0x11e76c34], 0 */
  w32((uint32_t)(0x11e76c34), (0x0u));
  /* 11e5732a mov eax, 1 */
  EAX = (0x1u);
  /* 11e5732f jmp 0x11e575fe */
  goto L_11e575fe;
L_11e57334:;
  /* 11e57334 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11e57337 push ecx */
  push32((uint32_t)(ECX));
  /* 11e57338 mov edx, dword ptr [0x11e76c30] */
  EDX = (r32((uint32_t)(0x11e76c30)));
  /* 11e5733e push edx */
  push32((uint32_t)(EDX));
  /* 11e5733f call 0x11e59950 */
  push32(0x11e57344u); f_11e59950();
  /* 11e57344 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57347 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e57349 jne 0x11e5746f */
  if (!C.zf) goto L_11e5746f;
  /* 11e5734f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11e57351 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11e57354 push eax */
  push32((uint32_t)(EAX));
  /* 11e57355 mov ecx, dword ptr [0x11e76c28] */
  ECX = (r32((uint32_t)(0x11e76c28)));
  /* 11e5735b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e5735d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e5735f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 11e57365 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5736b push ecx */
  push32((uint32_t)(ECX));
  /* 11e5736c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11e5736f push edx */
  push32((uint32_t)(EDX));
  /* 11e57370 call dword ptr [0x11e76c3c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e76c3c))), 0x11e57376u);
  /* 11e57376 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e57378 jne 0x11e5738e */
  if (!C.zf) goto L_11e5738e;
  /* 11e5737a mov dword ptr [0x11e76c34], 0 */
  w32((uint32_t)(0x11e76c34), (0x0u));
  /* 11e57384 mov eax, 1 */
  EAX = (0x1u);
  /* 11e57389 jmp 0x11e575fe */
  goto L_11e575fe;
L_11e5738e:;
  /* 11e5738e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11e57391 push eax */
  push32((uint32_t)(EAX));
  /* 11e57392 mov ecx, dword ptr [0x11e76c2c] */
  ECX = (r32((uint32_t)(0x11e76c2c)));
  /* 11e57398 push ecx */
  push32((uint32_t)(ECX));
  /* 11e57399 call 0x11e59950 */
  push32(0x11e5739eu); f_11e59950();
  /* 11e5739e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e573a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e573a3 jne 0x11e573d0 */
  if (!C.zf) goto L_11e573d0;
  /* 11e573a5 mov edx, dword ptr [0x11e76c34] */
  EDX = (r32((uint32_t)(0x11e76c34)));
  /* 11e573ab or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 11e573b1 mov dword ptr [0x11e76c34], edx */
  w32((uint32_t)(0x11e76c34), (EDX));
  /* 11e573b7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11e573ba mov dword ptr [0x11e76c38], eax */
  w32((uint32_t)(0x11e76c38), (EAX));
  /* 11e573bf mov ecx, dword ptr [0x11e76c38] */
  ECX = (r32((uint32_t)(0x11e76c38)));
  /* 11e573c5 mov dword ptr [0x11e76c1c], ecx */
  w32((uint32_t)(0x11e76c1c), (ECX));
  /* 11e573cb jmp 0x11e5746f */
  goto L_11e5746f;
L_11e573d0:;
  /* 11e573d0 mov edx, dword ptr [0x11e76c34] */
  EDX = (r32((uint32_t)(0x11e76c34)));
  /* 11e573d6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11e573d9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e573db jne 0x11e5746f */
  if (!C.zf) goto L_11e5746f;
  /* 11e573e1 cmp dword ptr [0x11e76c24], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76c24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e573e8 je 0x11e5743d */
  if (C.zf) goto L_11e5743d;
  /* 11e573ea mov eax, dword ptr [0x11e76c24] */
  EAX = (r32((uint32_t)(0x11e76c24)));
  /* 11e573ef push eax */
  push32((uint32_t)(EAX));
  /* 11e573f0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11e573f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e573f4 mov edx, dword ptr [0x11e76c2c] */
  EDX = (r32((uint32_t)(0x11e76c2c)));
  /* 11e573fa push edx */
  push32((uint32_t)(EDX));
  /* 11e573fb call 0x11e59a20 */
  push32(0x11e57400u); f_11e59a20();
  /* 11e57400 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57403 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e57405 jne 0x11e5743d */
  if (!C.zf) goto L_11e5743d;
  /* 11e57407 mov eax, dword ptr [0x11e76c34] */
  EAX = (r32((uint32_t)(0x11e76c34)));
  /* 11e5740c or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11e5740e mov dword ptr [0x11e76c34], eax */
  w32((uint32_t)(0x11e76c34), (EAX));
  /* 11e57413 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11e57416 mov dword ptr [0x11e76c38], ecx */
  w32((uint32_t)(0x11e76c38), (ECX));
  /* 11e5741c mov edx, dword ptr [0x11e76c2c] */
  EDX = (r32((uint32_t)(0x11e76c2c)));
  /* 11e57422 push edx */
  push32((uint32_t)(EDX));
  /* 11e57423 call 0x11e4d5a0 */
  push32(0x11e57428u); f_11e4d5a0();
  /* 11e57428 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5742b cmp eax, dword ptr [0x11e76c24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11e76c24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57431 jne 0x11e5743b */
  if (!C.zf) goto L_11e5743b;
  /* 11e57433 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11e57436 mov dword ptr [0x11e76c1c], eax */
  w32((uint32_t)(0x11e76c1c), (EAX));
L_11e5743b:;
  /* 11e5743b jmp 0x11e5746f */
  goto L_11e5746f;
L_11e5743d:;
  /* 11e5743d mov ecx, dword ptr [0x11e76c34] */
  ECX = (r32((uint32_t)(0x11e76c34)));
  /* 11e57443 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11e57446 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e57448 jne 0x11e5746f */
  if (!C.zf) goto L_11e5746f;
  /* 11e5744a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11e5744d push edx */
  push32((uint32_t)(EDX));
  /* 11e5744e call 0x11e57980 */
  push32(0x11e57453u); f_11e57980();
  /* 11e57453 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57456 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e57458 je 0x11e5746f */
  if (C.zf) goto L_11e5746f;
  /* 11e5745a mov eax, dword ptr [0x11e76c34] */
  EAX = (r32((uint32_t)(0x11e76c34)));
  /* 11e5745f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11e57461 mov dword ptr [0x11e76c34], eax */
  w32((uint32_t)(0x11e76c34), (EAX));
  /* 11e57466 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11e57469 mov dword ptr [0x11e76c38], ecx */
  w32((uint32_t)(0x11e76c38), (ECX));
L_11e5746f:;
  /* 11e5746f mov edx, dword ptr [0x11e76c34] */
  EDX = (r32((uint32_t)(0x11e76c34)));
  /* 11e57475 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 11e5747b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57481 je 0x11e575f1 */
  if (C.zf) goto L_11e575f1;
  /* 11e57487 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11e57489 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11e5748c push eax */
  push32((uint32_t)(EAX));
  /* 11e5748d mov ecx, dword ptr [0x11e76c28] */
  ECX = (r32((uint32_t)(0x11e76c28)));
  /* 11e57493 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e57495 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e57497 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 11e5749d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e574a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e574a4 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11e574a7 push edx */
  push32((uint32_t)(EDX));
  /* 11e574a8 call dword ptr [0x11e76c3c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e76c3c))), 0x11e574aeu);
  /* 11e574ae test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e574b0 jne 0x11e574c6 */
  if (!C.zf) goto L_11e574c6;
  /* 11e574b2 mov dword ptr [0x11e76c34], 0 */
  w32((uint32_t)(0x11e76c34), (0x0u));
  /* 11e574bc mov eax, 1 */
  EAX = (0x1u);
  /* 11e574c1 jmp 0x11e575fe */
  goto L_11e575fe;
L_11e574c6:;
  /* 11e574c6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11e574c9 push eax */
  push32((uint32_t)(EAX));
  /* 11e574ca mov ecx, dword ptr [0x11e76c2c] */
  ECX = (r32((uint32_t)(0x11e76c2c)));
  /* 11e574d0 push ecx */
  push32((uint32_t)(ECX));
  /* 11e574d1 call 0x11e59950 */
  push32(0x11e574d6u); f_11e59950();
  /* 11e574d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e574d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e574db jne 0x11e57590 */
  if (!C.zf) goto L_11e57590;
  /* 11e574e1 mov edx, dword ptr [0x11e76c34] */
  EDX = (r32((uint32_t)(0x11e76c34)));
  /* 11e574e7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11e574ea mov dword ptr [0x11e76c34], edx */
  w32((uint32_t)(0x11e76c34), (EDX));
  /* 11e574f0 cmp dword ptr [0x11e76c28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76c28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e574f7 je 0x11e5751a */
  if (C.zf) goto L_11e5751a;
  /* 11e574f9 mov eax, dword ptr [0x11e76c34] */
  EAX = (r32((uint32_t)(0x11e76c34)));
  /* 11e574fe or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11e57501 mov dword ptr [0x11e76c34], eax */
  w32((uint32_t)(0x11e76c34), (EAX));
  /* 11e57506 cmp dword ptr [0x11e76c1c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76c1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5750d jne 0x11e57518 */
  if (!C.zf) goto L_11e57518;
  /* 11e5750f mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11e57512 mov dword ptr [0x11e76c1c], ecx */
  w32((uint32_t)(0x11e76c1c), (ECX));
L_11e57518:;
  /* 11e57518 jmp 0x11e5758e */
  goto L_11e5758e;
L_11e5751a:;
  /* 11e5751a cmp dword ptr [0x11e76c24], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76c24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57521 je 0x11e5756f */
  if (C.zf) goto L_11e5756f;
  /* 11e57523 mov edx, dword ptr [0x11e76c2c] */
  EDX = (r32((uint32_t)(0x11e76c2c)));
  /* 11e57529 push edx */
  push32((uint32_t)(EDX));
  /* 11e5752a call 0x11e4d5a0 */
  push32(0x11e5752fu); f_11e4d5a0();
  /* 11e5752f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57532 cmp eax, dword ptr [0x11e76c24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11e76c24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57538 jne 0x11e5756f */
  if (!C.zf) goto L_11e5756f;
  /* 11e5753a push 1 */
  push32((uint32_t)(0x1u));
  /* 11e5753c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11e5753f push eax */
  push32((uint32_t)(EAX));
  /* 11e57540 call 0x11e579d0 */
  push32(0x11e57545u); f_11e579d0();
  /* 11e57545 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57548 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e5754a je 0x11e5756d */
  if (C.zf) goto L_11e5756d;
  /* 11e5754c mov ecx, dword ptr [0x11e76c34] */
  ECX = (r32((uint32_t)(0x11e76c34)));
  /* 11e57552 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11e57555 mov dword ptr [0x11e76c34], ecx */
  w32((uint32_t)(0x11e76c34), (ECX));
  /* 11e5755b cmp dword ptr [0x11e76c1c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76c1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57562 jne 0x11e5756d */
  if (!C.zf) goto L_11e5756d;
  /* 11e57564 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11e57567 mov dword ptr [0x11e76c1c], edx */
  w32((uint32_t)(0x11e76c1c), (EDX));
L_11e5756d:;
  /* 11e5756d jmp 0x11e5758e */
  goto L_11e5758e;
L_11e5756f:;
  /* 11e5756f mov eax, dword ptr [0x11e76c34] */
  EAX = (r32((uint32_t)(0x11e76c34)));
  /* 11e57574 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11e57577 mov dword ptr [0x11e76c34], eax */
  w32((uint32_t)(0x11e76c34), (EAX));
  /* 11e5757c cmp dword ptr [0x11e76c1c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76c1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57583 jne 0x11e5758e */
  if (!C.zf) goto L_11e5758e;
  /* 11e57585 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11e57588 mov dword ptr [0x11e76c1c], ecx */
  w32((uint32_t)(0x11e76c1c), (ECX));
L_11e5758e:;
  /* 11e5758e jmp 0x11e575f1 */
  goto L_11e575f1;
L_11e57590:;
  /* 11e57590 cmp dword ptr [0x11e76c28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76c28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57597 jne 0x11e575f1 */
  if (!C.zf) goto L_11e575f1;
  /* 11e57599 cmp dword ptr [0x11e76c24], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76c24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e575a0 je 0x11e575f1 */
  if (C.zf) goto L_11e575f1;
  /* 11e575a2 mov edx, dword ptr [0x11e76c24] */
  EDX = (r32((uint32_t)(0x11e76c24)));
  /* 11e575a8 push edx */
  push32((uint32_t)(EDX));
  /* 11e575a9 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 11e575ac push eax */
  push32((uint32_t)(EAX));
  /* 11e575ad mov ecx, dword ptr [0x11e76c2c] */
  ECX = (r32((uint32_t)(0x11e76c2c)));
  /* 11e575b3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e575b4 call 0x11e59a20 */
  push32(0x11e575b9u); f_11e59a20();
  /* 11e575b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e575bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e575be jne 0x11e575f1 */
  if (!C.zf) goto L_11e575f1;
  /* 11e575c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e575c2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11e575c5 push edx */
  push32((uint32_t)(EDX));
  /* 11e575c6 call 0x11e579d0 */
  push32(0x11e575cbu); f_11e579d0();
  /* 11e575cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e575ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e575d0 je 0x11e575f1 */
  if (C.zf) goto L_11e575f1;
  /* 11e575d2 mov eax, dword ptr [0x11e76c34] */
  EAX = (r32((uint32_t)(0x11e76c34)));
  /* 11e575d7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11e575da mov dword ptr [0x11e76c34], eax */
  w32((uint32_t)(0x11e76c34), (EAX));
  /* 11e575df cmp dword ptr [0x11e76c1c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76c1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e575e6 jne 0x11e575f1 */
  if (!C.zf) goto L_11e575f1;
  /* 11e575e8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11e575eb mov dword ptr [0x11e76c1c], ecx */
  w32((uint32_t)(0x11e76c1c), (ECX));
L_11e575f1:;
  /* 11e575f1 mov eax, dword ptr [0x11e76c34] */
  EAX = (r32((uint32_t)(0x11e76c34)));
  /* 11e575f6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11e575f9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e575fb sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e575fd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11e575fe:;
  /* 11e575fe mov esp, ebp */
  ESP = (EBP);
  /* 11e57600 pop ebp */
  EBP = (pop32());
  /* 11e57601 ret 4 */
  ESPCHK(0x11e572e0u, _esp0);
  ESP += 8; return;
}

/* FUN_10017610 @ 0x11e57610 (116 bytes, 33 insns) */
void f_11e57610(void) {
  FTRACE(0x11e57610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e57610 push ebp */
  push32((uint32_t)(EBP));
  /* 11e57611 mov ebp, esp */
  EBP = (ESP);
  /* 11e57613 push ecx */
  push32((uint32_t)(ECX));
  /* 11e57614 mov eax, dword ptr [0x11e76c2c] */
  EAX = (r32((uint32_t)(0x11e76c2c)));
  /* 11e57619 push eax */
  push32((uint32_t)(EAX));
  /* 11e5761a call 0x11e4d5a0 */
  push32(0x11e5761fu); f_11e4d5a0();
  /* 11e5761f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57622 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e57624 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57627 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11e5762a mov dword ptr [0x11e76c28], ecx */
  w32((uint32_t)(0x11e76c28), (ECX));
  /* 11e57630 cmp dword ptr [0x11e76c28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76c28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57637 je 0x11e57642 */
  if (C.zf) goto L_11e57642;
  /* 11e57639 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11e57640 jmp 0x11e57654 */
  goto L_11e57654;
L_11e57642:;
  /* 11e57642 mov edx, dword ptr [0x11e76c2c] */
  EDX = (r32((uint32_t)(0x11e76c2c)));
  /* 11e57648 push edx */
  push32((uint32_t)(EDX));
  /* 11e57649 call 0x11e57cc0 */
  push32(0x11e5764eu); f_11e57cc0();
  /* 11e5764e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57651 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e57654:;
  /* 11e57654 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e57657 mov dword ptr [0x11e76c24], eax */
  w32((uint32_t)(0x11e76c24), (EAX));
  /* 11e5765c push 1 */
  push32((uint32_t)(0x1u));
  /* 11e5765e push 0x11e57690 */
  push32((uint32_t)(0x11e57690u));
  /* 11e57663 call dword ptr [0x11e792e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e792e0))), 0x11e57669u);
  /* 11e57669 mov ecx, dword ptr [0x11e76c34] */
  ECX = (r32((uint32_t)(0x11e76c34)));
  /* 11e5766f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11e57672 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e57674 jne 0x11e57680 */
  if (!C.zf) goto L_11e57680;
  /* 11e57676 mov dword ptr [0x11e76c34], 0 */
  w32((uint32_t)(0x11e76c34), (0x0u));
L_11e57680:;
  /* 11e57680 mov esp, ebp */
  ESP = (EBP);
  /* 11e57682 pop ebp */
  EBP = (pop32());
  /* 11e57683 ret  */
  ESPCHK(0x11e57610u, _esp0);
  ESP += 4; return;
}

/* FUN_10017690 @ 0x11e57690 (287 bytes, 86 insns) */
void f_11e57690(void) {
  FTRACE(0x11e57690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e57690 push ebp */
  push32((uint32_t)(EBP));
  /* 11e57691 mov ebp, esp */
  EBP = (ESP);
  /* 11e57693 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e57696 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e57699 push eax */
  push32((uint32_t)(EAX));
  /* 11e5769a call 0x11e57c40 */
  push32(0x11e5769fu); f_11e57c40();
  /* 11e5769f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e576a2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11e576a5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11e576a7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11e576aa push ecx */
  push32((uint32_t)(ECX));
  /* 11e576ab mov edx, dword ptr [0x11e76c28] */
  EDX = (r32((uint32_t)(0x11e76c28)));
  /* 11e576b1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e576b3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e576b5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 11e576bb add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e576c1 push edx */
  push32((uint32_t)(EDX));
  /* 11e576c2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11e576c5 push eax */
  push32((uint32_t)(EAX));
  /* 11e576c6 call dword ptr [0x11e76c3c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e76c3c))), 0x11e576ccu);
  /* 11e576cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e576ce jne 0x11e576e4 */
  if (!C.zf) goto L_11e576e4;
  /* 11e576d0 mov dword ptr [0x11e76c34], 0 */
  w32((uint32_t)(0x11e76c34), (0x0u));
  /* 11e576da mov eax, 1 */
  EAX = (0x1u);
  /* 11e576df jmp 0x11e577a9 */
  goto L_11e577a9;
L_11e576e4:;
  /* 11e576e4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11e576e7 push ecx */
  push32((uint32_t)(ECX));
  /* 11e576e8 mov edx, dword ptr [0x11e76c2c] */
  EDX = (r32((uint32_t)(0x11e76c2c)));
  /* 11e576ee push edx */
  push32((uint32_t)(EDX));
  /* 11e576ef call 0x11e59950 */
  push32(0x11e576f4u); f_11e59950();
  /* 11e576f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e576f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e576f9 jne 0x11e57739 */
  if (!C.zf) goto L_11e57739;
  /* 11e576fb cmp dword ptr [0x11e76c28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76c28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57702 jne 0x11e57716 */
  if (!C.zf) goto L_11e57716;
  /* 11e57704 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e57706 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11e57709 push eax */
  push32((uint32_t)(EAX));
  /* 11e5770a call 0x11e579d0 */
  push32(0x11e5770fu); f_11e579d0();
  /* 11e5770f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57712 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e57714 je 0x11e57737 */
  if (C.zf) goto L_11e57737;
L_11e57716:;
  /* 11e57716 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11e57719 mov dword ptr [0x11e76c38], ecx */
  w32((uint32_t)(0x11e76c38), (ECX));
  /* 11e5771f mov edx, dword ptr [0x11e76c38] */
  EDX = (r32((uint32_t)(0x11e76c38)));
  /* 11e57725 mov dword ptr [0x11e76c1c], edx */
  w32((uint32_t)(0x11e76c1c), (EDX));
  /* 11e5772b mov eax, dword ptr [0x11e76c34] */
  EAX = (r32((uint32_t)(0x11e76c34)));
  /* 11e57730 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11e57732 mov dword ptr [0x11e76c34], eax */
  w32((uint32_t)(0x11e76c34), (EAX));
L_11e57737:;
  /* 11e57737 jmp 0x11e5779c */
  goto L_11e5779c;
L_11e57739:;
  /* 11e57739 cmp dword ptr [0x11e76c28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76c28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57740 jne 0x11e5779c */
  if (!C.zf) goto L_11e5779c;
  /* 11e57742 cmp dword ptr [0x11e76c24], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76c24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57749 je 0x11e5779c */
  if (C.zf) goto L_11e5779c;
  /* 11e5774b mov ecx, dword ptr [0x11e76c24] */
  ECX = (r32((uint32_t)(0x11e76c24)));
  /* 11e57751 push ecx */
  push32((uint32_t)(ECX));
  /* 11e57752 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 11e57755 push edx */
  push32((uint32_t)(EDX));
  /* 11e57756 mov eax, dword ptr [0x11e76c2c] */
  EAX = (r32((uint32_t)(0x11e76c2c)));
  /* 11e5775b push eax */
  push32((uint32_t)(EAX));
  /* 11e5775c call 0x11e59a20 */
  push32(0x11e57761u); f_11e59a20();
  /* 11e57761 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57764 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e57766 jne 0x11e5779c */
  if (!C.zf) goto L_11e5779c;
  /* 11e57768 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e5776a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11e5776d push ecx */
  push32((uint32_t)(ECX));
  /* 11e5776e call 0x11e579d0 */
  push32(0x11e57773u); f_11e579d0();
  /* 11e57773 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57776 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e57778 je 0x11e5779c */
  if (C.zf) goto L_11e5779c;
  /* 11e5777a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11e5777d mov dword ptr [0x11e76c38], edx */
  w32((uint32_t)(0x11e76c38), (EDX));
  /* 11e57783 mov eax, dword ptr [0x11e76c38] */
  EAX = (r32((uint32_t)(0x11e76c38)));
  /* 11e57788 mov dword ptr [0x11e76c1c], eax */
  w32((uint32_t)(0x11e76c1c), (EAX));
  /* 11e5778d mov ecx, dword ptr [0x11e76c34] */
  ECX = (r32((uint32_t)(0x11e76c34)));
  /* 11e57793 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11e57796 mov dword ptr [0x11e76c34], ecx */
  w32((uint32_t)(0x11e76c34), (ECX));
L_11e5779c:;
  /* 11e5779c mov eax, dword ptr [0x11e76c34] */
  EAX = (r32((uint32_t)(0x11e76c34)));
  /* 11e577a1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11e577a4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e577a6 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e577a8 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11e577a9:;
  /* 11e577a9 mov esp, ebp */
  ESP = (EBP);
  /* 11e577ab pop ebp */
  EBP = (pop32());
  /* 11e577ac ret 4 */
  ESPCHK(0x11e57690u, _esp0);
  ESP += 8; return;
}

/* FUN_100177b0 @ 0x11e577b0 (69 bytes, 20 insns) */
void f_11e577b0(void) {
  FTRACE(0x11e577b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e577b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e577b1 mov ebp, esp */
  EBP = (ESP);
  /* 11e577b3 mov eax, dword ptr [0x11e76c30] */
  EAX = (r32((uint32_t)(0x11e76c30)));
  /* 11e577b8 push eax */
  push32((uint32_t)(EAX));
  /* 11e577b9 call 0x11e4d5a0 */
  push32(0x11e577beu); f_11e4d5a0();
  /* 11e577be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e577c1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e577c3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e577c6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 11e577c9 mov dword ptr [0x11e76c20], ecx */
  w32((uint32_t)(0x11e76c20), (ECX));
  /* 11e577cf push 1 */
  push32((uint32_t)(0x1u));
  /* 11e577d1 push 0x11e57800 */
  push32((uint32_t)(0x11e57800u));
  /* 11e577d6 call dword ptr [0x11e792e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e792e0))), 0x11e577dcu);
  /* 11e577dc mov edx, dword ptr [0x11e76c34] */
  EDX = (r32((uint32_t)(0x11e76c34)));
  /* 11e577e2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11e577e5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e577e7 jne 0x11e577f3 */
  if (!C.zf) goto L_11e577f3;
  /* 11e577e9 mov dword ptr [0x11e76c34], 0 */
  w32((uint32_t)(0x11e76c34), (0x0u));
L_11e577f3:;
  /* 11e577f3 pop ebp */
  EBP = (pop32());
  /* 11e577f4 ret  */
  ESPCHK(0x11e577b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017800 @ 0x11e57800 (172 bytes, 54 insns) */
void f_11e57800(void) {
  FTRACE(0x11e57800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e57800 push ebp */
  push32((uint32_t)(EBP));
  /* 11e57801 mov ebp, esp */
  EBP = (ESP);
  /* 11e57803 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e57806 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e57809 push eax */
  push32((uint32_t)(EAX));
  /* 11e5780a call 0x11e57c40 */
  push32(0x11e5780fu); f_11e57c40();
  /* 11e5780f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57812 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 11e57815 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11e57817 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11e5781a push ecx */
  push32((uint32_t)(ECX));
  /* 11e5781b mov edx, dword ptr [0x11e76c20] */
  EDX = (r32((uint32_t)(0x11e76c20)));
  /* 11e57821 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e57823 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e57825 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 11e5782b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57831 push edx */
  push32((uint32_t)(EDX));
  /* 11e57832 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11e57835 push eax */
  push32((uint32_t)(EAX));
  /* 11e57836 call dword ptr [0x11e76c3c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e76c3c))), 0x11e5783cu);
  /* 11e5783c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e5783e jne 0x11e57851 */
  if (!C.zf) goto L_11e57851;
  /* 11e57840 mov dword ptr [0x11e76c34], 0 */
  w32((uint32_t)(0x11e76c34), (0x0u));
  /* 11e5784a mov eax, 1 */
  EAX = (0x1u);
  /* 11e5784f jmp 0x11e578a6 */
  goto L_11e578a6;
L_11e57851:;
  /* 11e57851 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 11e57854 push ecx */
  push32((uint32_t)(ECX));
  /* 11e57855 mov edx, dword ptr [0x11e76c30] */
  EDX = (r32((uint32_t)(0x11e76c30)));
  /* 11e5785b push edx */
  push32((uint32_t)(EDX));
  /* 11e5785c call 0x11e59950 */
  push32(0x11e57861u); f_11e59950();
  /* 11e57861 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57864 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e57866 jne 0x11e57899 */
  if (!C.zf) goto L_11e57899;
  /* 11e57868 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11e5786b push eax */
  push32((uint32_t)(EAX));
  /* 11e5786c call 0x11e57980 */
  push32(0x11e57871u); f_11e57980();
  /* 11e57871 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57874 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e57876 je 0x11e57899 */
  if (C.zf) goto L_11e57899;
  /* 11e57878 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11e5787b mov dword ptr [0x11e76c38], ecx */
  w32((uint32_t)(0x11e76c38), (ECX));
  /* 11e57881 mov edx, dword ptr [0x11e76c38] */
  EDX = (r32((uint32_t)(0x11e76c38)));
  /* 11e57887 mov dword ptr [0x11e76c1c], edx */
  w32((uint32_t)(0x11e76c1c), (EDX));
  /* 11e5788d mov eax, dword ptr [0x11e76c34] */
  EAX = (r32((uint32_t)(0x11e76c34)));
  /* 11e57892 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11e57894 mov dword ptr [0x11e76c34], eax */
  w32((uint32_t)(0x11e76c34), (EAX));
L_11e57899:;
  /* 11e57899 mov eax, dword ptr [0x11e76c34] */
  EAX = (r32((uint32_t)(0x11e76c34)));
  /* 11e5789e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11e578a1 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e578a3 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e578a5 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11e578a6:;
  /* 11e578a6 mov esp, ebp */
  ESP = (EBP);
  /* 11e578a8 pop ebp */
  EBP = (pop32());
  /* 11e578a9 ret 4 */
  ESPCHK(0x11e57800u, _esp0);
  ESP += 8; return;
}

/* FUN_100178b0 @ 0x11e578b0 (43 bytes, 11 insns) */
void f_11e578b0(void) {
  FTRACE(0x11e578b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e578b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e578b1 mov ebp, esp */
  EBP = (ESP);
  /* 11e578b3 mov eax, dword ptr [0x11e76c34] */
  EAX = (r32((uint32_t)(0x11e76c34)));
  /* 11e578b8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 11e578bd mov dword ptr [0x11e76c34], eax */
  w32((uint32_t)(0x11e76c34), (EAX));
  /* 11e578c2 call dword ptr [0x11e792dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e792dc))), 0x11e578c8u);
  /* 11e578c8 mov dword ptr [0x11e76c38], eax */
  w32((uint32_t)(0x11e76c38), (EAX));
  /* 11e578cd mov ecx, dword ptr [0x11e76c38] */
  ECX = (r32((uint32_t)(0x11e76c38)));
  /* 11e578d3 mov dword ptr [0x11e76c1c], ecx */
  w32((uint32_t)(0x11e76c1c), (ECX));
  /* 11e578d9 pop ebp */
  EBP = (pop32());
  /* 11e578da ret  */
  ESPCHK(0x11e578b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100178e0 @ 0x11e578e0 (155 bytes, 57 insns) */
void f_11e578e0(void) {
  FTRACE(0x11e578e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e578e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e578e1 mov ebp, esp */
  EBP = (ESP);
  /* 11e578e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e578e6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e578ea je 0x11e5790b */
  if (C.zf) goto L_11e5790b;
  /* 11e578ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e578ef movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e578f2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e578f4 je 0x11e5790b */
  if (C.zf) goto L_11e5790b;
  /* 11e578f6 push 0x11e727c4 */
  push32((uint32_t)(0x11e727c4u));
  /* 11e578fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e578fe push edx */
  push32((uint32_t)(EDX));
  /* 11e578ff call 0x11e51200 */
  push32(0x11e57904u); f_11e51200();
  /* 11e57904 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57907 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e57909 jne 0x11e57933 */
  if (!C.zf) goto L_11e57933;
L_11e5790b:;
  /* 11e5790b push 8 */
  push32((uint32_t)(0x8u));
  /* 11e5790d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11e57910 push eax */
  push32((uint32_t)(EAX));
  /* 11e57911 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 11e57916 mov ecx, dword ptr [0x11e76c38] */
  ECX = (r32((uint32_t)(0x11e76c38)));
  /* 11e5791c push ecx */
  push32((uint32_t)(ECX));
  /* 11e5791d call dword ptr [0x11e76c3c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e76c3c))), 0x11e57923u);
  /* 11e57923 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e57925 jne 0x11e5792b */
  if (!C.zf) goto L_11e5792b;
  /* 11e57927 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e57929 jmp 0x11e57977 */
  goto L_11e57977;
L_11e5792b:;
  /* 11e5792b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 11e5792e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11e57931 jmp 0x11e5796b */
  goto L_11e5796b;
L_11e57933:;
  /* 11e57933 push 0x11e727c0 */
  push32((uint32_t)(0x11e727c0u));
  /* 11e57938 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5793b push eax */
  push32((uint32_t)(EAX));
  /* 11e5793c call 0x11e51200 */
  push32(0x11e57941u); f_11e51200();
  /* 11e57941 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57944 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e57946 jne 0x11e5796b */
  if (!C.zf) goto L_11e5796b;
  /* 11e57948 push 8 */
  push32((uint32_t)(0x8u));
  /* 11e5794a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11e5794d push ecx */
  push32((uint32_t)(ECX));
  /* 11e5794e push 0xb */
  push32((uint32_t)(0xbu));
  /* 11e57950 mov edx, dword ptr [0x11e76c38] */
  EDX = (r32((uint32_t)(0x11e76c38)));
  /* 11e57956 push edx */
  push32((uint32_t)(EDX));
  /* 11e57957 call dword ptr [0x11e76c3c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e76c3c))), 0x11e5795du);
  /* 11e5795d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e5795f jne 0x11e57965 */
  if (!C.zf) goto L_11e57965;
  /* 11e57961 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e57963 jmp 0x11e57977 */
  goto L_11e57977;
L_11e57965:;
  /* 11e57965 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11e57968 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11e5796b:;
  /* 11e5796b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5796e push ecx */
  push32((uint32_t)(ECX));
  /* 11e5796f call 0x11e50fb0 */
  push32(0x11e57974u); f_11e50fb0();
  /* 11e57974 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e57977:;
  /* 11e57977 mov esp, ebp */
  ESP = (EBP);
  /* 11e57979 pop ebp */
  EBP = (pop32());
  /* 11e5797a ret  */
  ESPCHK(0x11e578e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017980 @ 0x11e57980 (79 bytes, 26 insns) */
void f_11e57980(void) {
  FTRACE(0x11e57980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e57980 push ebp */
  push32((uint32_t)(EBP));
  /* 11e57981 mov ebp, esp */
  EBP = (ESP);
  /* 11e57983 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e57986 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 11e5798a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11e5798e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11e57995 jmp 0x11e579a0 */
  goto L_11e579a0;
L_11e57997:;
  /* 11e57997 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e5799a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5799d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11e579a0:;
  /* 11e579a0 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e579a4 jae 0x11e579c6 */
  if (!C.cf) goto L_11e579c6;
  /* 11e579a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e579a9 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e579af mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e579b2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e579b4 mov cx, word ptr [eax*2 + 0x11e75ae4] */
  CX = (r16((uint32_t)(EAX*2 + 0x11e75ae4)));
  /* 11e579bc cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e579be jne 0x11e579c4 */
  if (!C.zf) goto L_11e579c4;
  /* 11e579c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e579c2 jmp 0x11e579cb */
  goto L_11e579cb;
L_11e579c4:;
  /* 11e579c4 jmp 0x11e57997 */
  goto L_11e57997;
L_11e579c6:;
  /* 11e579c6 mov eax, 1 */
  EAX = (0x1u);
L_11e579cb:;
  /* 11e579cb mov esp, ebp */
  ESP = (EBP);
  /* 11e579cd pop ebp */
  EBP = (pop32());
  /* 11e579ce ret  */
  ESPCHK(0x11e57980u, _esp0);
  ESP += 4; return;
}

/* FUN_100179d0 @ 0x11e579d0 (135 bytes, 48 insns) */
void f_11e579d0(void) {
  FTRACE(0x11e579d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e579d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e579d1 mov ebp, esp */
  EBP = (ESP);
  /* 11e579d3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e579d6 push esi */
  push32((uint32_t)(ESI));
  /* 11e579d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e579da and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e579df and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e579e4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e579e9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 11e579ec and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e579f1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e579f4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 11e579f6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 11e579f9 push ecx */
  push32((uint32_t)(ECX));
  /* 11e579fa push 1 */
  push32((uint32_t)(0x1u));
  /* 11e579fc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e579ff push edx */
  push32((uint32_t)(EDX));
  /* 11e57a00 call dword ptr [0x11e76c3c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e76c3c))), 0x11e57a06u);
  /* 11e57a06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e57a08 jne 0x11e57a0e */
  if (!C.zf) goto L_11e57a0e;
  /* 11e57a0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e57a0c jmp 0x11e57a52 */
  goto L_11e57a52;
L_11e57a0e:;
  /* 11e57a0e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 11e57a11 push eax */
  push32((uint32_t)(EAX));
  /* 11e57a12 call 0x11e57c40 */
  push32(0x11e57a17u); f_11e57c40();
  /* 11e57a17 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57a1a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57a1d je 0x11e57a4d */
  if (C.zf) goto L_11e57a4d;
  /* 11e57a1f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57a23 je 0x11e57a4d */
  if (C.zf) goto L_11e57a4d;
  /* 11e57a25 mov ecx, dword ptr [0x11e76c2c] */
  ECX = (r32((uint32_t)(0x11e76c2c)));
  /* 11e57a2b push ecx */
  push32((uint32_t)(ECX));
  /* 11e57a2c call 0x11e57cc0 */
  push32(0x11e57a31u); f_11e57cc0();
  /* 11e57a31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57a34 mov esi, eax */
  ESI = (EAX);
  /* 11e57a36 mov edx, dword ptr [0x11e76c2c] */
  EDX = (r32((uint32_t)(0x11e76c2c)));
  /* 11e57a3c push edx */
  push32((uint32_t)(EDX));
  /* 11e57a3d call 0x11e4d5a0 */
  push32(0x11e57a42u); f_11e4d5a0();
  /* 11e57a42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57a45 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57a47 jne 0x11e57a4d */
  if (!C.zf) goto L_11e57a4d;
  /* 11e57a49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e57a4b jmp 0x11e57a52 */
  goto L_11e57a52;
L_11e57a4d:;
  /* 11e57a4d mov eax, 1 */
  EAX = (0x1u);
L_11e57a52:;
  /* 11e57a52 pop esi */
  ESI = (pop32());
  /* 11e57a53 mov esp, ebp */
  ESP = (EBP);
  /* 11e57a55 pop ebp */
  EBP = (pop32());
  /* 11e57a56 ret  */
  ESPCHK(0x11e579d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10017a60 @ 0x11e57a60 (77 bytes, 18 insns) */
void f_11e57a60(void) {
  FTRACE(0x11e57a60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e57a60 push ebp */
  push32((uint32_t)(EBP));
  /* 11e57a61 mov ebp, esp */
  EBP = (ESP);
  /* 11e57a63 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e57a69 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 11e57a73 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 11e57a79 push eax */
  push32((uint32_t)(EAX));
  /* 11e57a7a call dword ptr [0x11e792e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e792e4))), 0x11e57a80u);
  /* 11e57a80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e57a82 je 0x11e57a99 */
  if (C.zf) goto L_11e57a99;
  /* 11e57a84 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57a8b jne 0x11e57a99 */
  if (!C.zf) goto L_11e57a99;
  /* 11e57a8d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 11e57a97 jmp 0x11e57aa3 */
  goto L_11e57aa3;
L_11e57a99:;
  /* 11e57a99 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_11e57aa3:;
  /* 11e57aa3 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11e57aa9 mov esp, ebp */
  ESP = (EBP);
  /* 11e57aab pop ebp */
  EBP = (pop32());
  /* 11e57aac ret  */
  ESPCHK(0x11e57a60u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x11e57ab0 (388 bytes, 118 insns) */
void f_11e57ab0(void) {
  FTRACE(0x11e57ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e57ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e57ab1 mov ebp, esp */
  EBP = (ESP);
  /* 11e57ab3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e57ab6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11e57abd mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 11e57ac4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11e57acb:;
  /* 11e57acb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e57ace cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57ad1 jg 0x11e57c18 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e57c18;
  /* 11e57ad7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e57ada add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57add cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e57ade sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e57ae0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11e57ae2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e57ae5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e57ae8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e57aeb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e57aee cmp edx, dword ptr [ecx + 0x11e75640] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x11e75640))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57af4 jne 0x11e57bee */
  if (!C.zf) goto L_11e57bee;
  /* 11e57afa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e57afd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11e57b00 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57b04 ja 0x11e57b27 */
  if ((!C.cf&&!C.zf)) goto L_11e57b27;
  /* 11e57b06 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57b0a je 0x11e57b99 */
  if (C.zf) goto L_11e57b99;
  /* 11e57b10 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57b14 je 0x11e57b44 */
  if (C.zf) goto L_11e57b44;
  /* 11e57b16 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57b1a je 0x11e57b66 */
  if (C.zf) goto L_11e57b66;
  /* 11e57b1c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57b20 je 0x11e57b88 */
  if (C.zf) goto L_11e57b88;
  /* 11e57b22 jmp 0x11e57bb8 */
  goto L_11e57bb8;
L_11e57b27:;
  /* 11e57b27 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57b2e je 0x11e57b55 */
  if (C.zf) goto L_11e57b55;
  /* 11e57b30 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57b37 je 0x11e57b77 */
  if (C.zf) goto L_11e57b77;
  /* 11e57b39 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57b40 je 0x11e57baa */
  if (C.zf) goto L_11e57baa;
  /* 11e57b42 jmp 0x11e57bb8 */
  goto L_11e57bb8;
L_11e57b44:;
  /* 11e57b44 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e57b47 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e57b4a add ecx, 0x11e75644 */
  { uint32_t _a=(ECX),_b=(0x11e75644u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57b50 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e57b53 jmp 0x11e57bb8 */
  goto L_11e57bb8;
L_11e57b55:;
  /* 11e57b55 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e57b58 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e57b5b mov eax, dword ptr [edx + 0x11e7564c] */
  EAX = (r32((uint32_t)(EDX + 0x11e7564c)));
  /* 11e57b61 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e57b64 jmp 0x11e57bb8 */
  goto L_11e57bb8;
L_11e57b66:;
  /* 11e57b66 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e57b69 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e57b6c add ecx, 0x11e75650 */
  { uint32_t _a=(ECX),_b=(0x11e75650u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57b72 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e57b75 jmp 0x11e57bb8 */
  goto L_11e57bb8;
L_11e57b77:;
  /* 11e57b77 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e57b7a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e57b7d mov eax, dword ptr [edx + 0x11e75654] */
  EAX = (r32((uint32_t)(EDX + 0x11e75654)));
  /* 11e57b83 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e57b86 jmp 0x11e57bb8 */
  goto L_11e57bb8;
L_11e57b88:;
  /* 11e57b88 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e57b8b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e57b8e add ecx, 0x11e75658 */
  { uint32_t _a=(ECX),_b=(0x11e75658u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57b94 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e57b97 jmp 0x11e57bb8 */
  goto L_11e57bb8;
L_11e57b99:;
  /* 11e57b99 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e57b9c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e57b9f add edx, 0x11e7565c */
  { uint32_t _a=(EDX),_b=(0x11e7565cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57ba5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11e57ba8 jmp 0x11e57bb8 */
  goto L_11e57bb8;
L_11e57baa:;
  /* 11e57baa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e57bad imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e57bb0 add eax, 0x11e75664 */
  { uint32_t _a=(EAX),_b=(0x11e75664u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57bb5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11e57bb8:;
  /* 11e57bb8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57bbc je 0x11e57bc4 */
  if (C.zf) goto L_11e57bc4;
  /* 11e57bbe cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57bc2 jge 0x11e57bc6 */
  if ((C.sf==C.of)) goto L_11e57bc6;
L_11e57bc4:;
  /* 11e57bc4 jmp 0x11e57c18 */
  goto L_11e57c18;
L_11e57bc6:;
  /* 11e57bc6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e57bc9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e57bcc push ecx */
  push32((uint32_t)(ECX));
  /* 11e57bcd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e57bd0 push edx */
  push32((uint32_t)(EDX));
  /* 11e57bd1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e57bd4 push eax */
  push32((uint32_t)(EAX));
  /* 11e57bd5 call 0x11e4df90 */
  push32(0x11e57bdau); f_11e4df90();
  /* 11e57bda add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57bdd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e57be0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57be3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 11e57be7 mov eax, 1 */
  EAX = (0x1u);
  /* 11e57bec jmp 0x11e57c2e */
  goto L_11e57c2e;
L_11e57bee:;
  /* 11e57bee mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e57bf1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e57bf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e57bf7 cmp eax, dword ptr [edx + 0x11e75640] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x11e75640))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57bfd jae 0x11e57c0a */
  if (!C.cf) goto L_11e57c0a;
  /* 11e57bff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e57c02 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e57c05 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e57c08 jmp 0x11e57c13 */
  goto L_11e57c13;
L_11e57c0a:;
  /* 11e57c0a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e57c0d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57c10 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11e57c13:;
  /* 11e57c13 jmp 0x11e57acb */
  goto L_11e57acb;
L_11e57c18:;
  /* 11e57c18 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e57c1b push eax */
  push32((uint32_t)(EAX));
  /* 11e57c1c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e57c1f push ecx */
  push32((uint32_t)(ECX));
  /* 11e57c20 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e57c23 push edx */
  push32((uint32_t)(EDX));
  /* 11e57c24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e57c27 push eax */
  push32((uint32_t)(EAX));
  /* 11e57c28 call dword ptr [0x11e792f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e792f0))), 0x11e57c2eu);
L_11e57c2e:;
  /* 11e57c2e mov esp, ebp */
  ESP = (EBP);
  /* 11e57c30 pop ebp */
  EBP = (pop32());
  /* 11e57c31 ret 0x10 */
  ESPCHK(0x11e57ab0u, _esp0);
  ESP += 20; return;
}

/* FUN_10017c40 @ 0x11e57c40 (118 bytes, 42 insns) */
void f_11e57c40(void) {
  FTRACE(0x11e57c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e57c40 push ebp */
  push32((uint32_t)(EBP));
  /* 11e57c41 mov ebp, esp */
  EBP = (ESP);
  /* 11e57c43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e57c46 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11e57c4d:;
  /* 11e57c4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e57c50 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11e57c52 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11e57c55 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11e57c59 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e57c5c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57c5f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11e57c62 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e57c64 je 0x11e57caf */
  if (C.zf) goto L_11e57caf;
  /* 11e57c66 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11e57c6a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57c6d jl 0x11e57c82 */
  if ((C.sf!=C.of)) goto L_11e57c82;
  /* 11e57c6f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11e57c73 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57c76 jg 0x11e57c82 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e57c82;
  /* 11e57c78 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11e57c7b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11e57c7d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11e57c80 jmp 0x11e57c9c */
  goto L_11e57c9c;
L_11e57c82:;
  /* 11e57c82 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11e57c86 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57c89 jl 0x11e57c9c */
  if ((C.sf!=C.of)) goto L_11e57c9c;
  /* 11e57c8b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11e57c8f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57c92 jg 0x11e57c9c */
  if ((!C.zf&&C.sf==C.of)) goto L_11e57c9c;
  /* 11e57c94 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11e57c97 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11e57c99 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_11e57c9c:;
  /* 11e57c9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e57c9f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11e57ca2 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11e57ca6 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11e57caa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e57cad jmp 0x11e57c4d */
  goto L_11e57c4d;
L_11e57caf:;
  /* 11e57caf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e57cb2 mov esp, ebp */
  ESP = (EBP);
  /* 11e57cb4 pop ebp */
  EBP = (pop32());
  /* 11e57cb5 ret  */
  ESPCHK(0x11e57c40u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x11e57cc0 (101 bytes, 36 insns) */
void f_11e57cc0(void) {
  FTRACE(0x11e57cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e57cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e57cc1 mov ebp, esp */
  EBP = (ESP);
  /* 11e57cc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e57cc6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11e57ccd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e57cd0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11e57cd2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 11e57cd5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e57cd8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57cdb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11e57cde:;
  /* 11e57cde movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11e57ce2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57ce5 jl 0x11e57cf0 */
  if ((C.sf!=C.of)) goto L_11e57cf0;
  /* 11e57ce7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11e57ceb cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57cee jle 0x11e57d02 */
  if ((C.zf||C.sf!=C.of)) goto L_11e57d02;
L_11e57cf0:;
  /* 11e57cf0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11e57cf4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57cf7 jl 0x11e57d1e */
  if ((C.sf!=C.of)) goto L_11e57d1e;
  /* 11e57cf9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11e57cfd cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57d00 jg 0x11e57d1e */
  if ((!C.zf&&C.sf==C.of)) goto L_11e57d1e;
L_11e57d02:;
  /* 11e57d02 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e57d05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57d08 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e57d0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e57d0e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e57d10 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 11e57d13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e57d16 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57d19 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11e57d1c jmp 0x11e57cde */
  goto L_11e57cde;
L_11e57d1e:;
  /* 11e57d1e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e57d21 mov esp, ebp */
  ESP = (EBP);
  /* 11e57d23 pop ebp */
  EBP = (pop32());
  /* 11e57d24 ret  */
  ESPCHK(0x11e57cc0u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x11e57d40 (193 bytes, 91 insns) */
void f_11e57d40(void) {
  FTRACE(0x11e57d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e57d40 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e57d42 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11e57d46 push ebx */
  push32((uint32_t)(EBX));
  /* 11e57d47 mov ebx, eax */
  EBX = (EAX);
  /* 11e57d49 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11e57d4c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 11e57d50 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11e57d56 je 0x11e57d6b */
  if (C.zf) goto L_11e57d6b;
L_11e57d58:;
  /* 11e57d58 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 11e57d5a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11e57d5b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e57d5d je 0x11e57d30 */
  if (C.zf) { jmp_ind(0x11e57d30u); return; }
  /* 11e57d5f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 11e57d61 je 0x11e57db4 */
  if (C.zf) goto L_11e57db4;
  /* 11e57d63 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11e57d69 jne 0x11e57d58 */
  if (!C.zf) goto L_11e57d58;
L_11e57d6b:;
  /* 11e57d6b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 11e57d6d push edi */
  push32((uint32_t)(EDI));
  /* 11e57d6e mov eax, ebx */
  EAX = (EBX);
  /* 11e57d70 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 11e57d73 push esi */
  push32((uint32_t)(ESI));
  /* 11e57d74 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_11e57d76:;
  /* 11e57d76 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 11e57d78 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 11e57d7d mov eax, ecx */
  EAX = (ECX);
  /* 11e57d7f mov esi, edi */
  ESI = (EDI);
  /* 11e57d81 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 11e57d83 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57d85 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57d87 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e57d8a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e57d8d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 11e57d8f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11e57d91 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57d94 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 11e57d9a jne 0x11e57db8 */
  if (!C.zf) goto L_11e57db8;
  /* 11e57d9c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11e57da1 je 0x11e57d76 */
  if (C.zf) goto L_11e57d76;
  /* 11e57da3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 11e57da8 jne 0x11e57db2 */
  if (!C.zf) goto L_11e57db2;
  /* 11e57daa and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 11e57db0 jne 0x11e57d76 */
  if (!C.zf) goto L_11e57d76;
L_11e57db2:;
  /* 11e57db2 pop esi */
  ESI = (pop32());
  /* 11e57db3 pop edi */
  EDI = (pop32());
L_11e57db4:;
  /* 11e57db4 pop ebx */
  EBX = (pop32());
  /* 11e57db5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e57db7 ret  */
  ESPCHK(0x11e57d40u, _esp0);
  ESP += 4; return;
L_11e57db8:;
  /* 11e57db8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11e57dbb cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e57dbd je 0x11e57df5 */
  if (C.zf) goto L_11e57df5;
  /* 11e57dbf test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e57dc1 je 0x11e57db2 */
  if (C.zf) goto L_11e57db2;
  /* 11e57dc3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e57dc5 je 0x11e57dee */
  if (C.zf) goto L_11e57dee;
  /* 11e57dc7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11e57dc9 je 0x11e57db2 */
  if (C.zf) goto L_11e57db2;
  /* 11e57dcb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11e57dce cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e57dd0 je 0x11e57de7 */
  if (C.zf) goto L_11e57de7;
  /* 11e57dd2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11e57dd4 je 0x11e57db2 */
  if (C.zf) goto L_11e57db2;
  /* 11e57dd6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e57dd8 je 0x11e57de0 */
  if (C.zf) goto L_11e57de0;
  /* 11e57dda test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11e57ddc je 0x11e57db2 */
  if (C.zf) goto L_11e57db2;
  /* 11e57dde jmp 0x11e57d76 */
  goto L_11e57d76;
L_11e57de0:;
  /* 11e57de0 pop esi */
  ESI = (pop32());
  /* 11e57de1 pop edi */
  EDI = (pop32());
  /* 11e57de2 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 11e57de5 pop ebx */
  EBX = (pop32());
  /* 11e57de6 ret  */
  ESPCHK(0x11e57d40u, _esp0);
  ESP += 4; return;
L_11e57de7:;
  /* 11e57de7 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 11e57dea pop esi */
  ESI = (pop32());
  /* 11e57deb pop edi */
  EDI = (pop32());
  /* 11e57dec pop ebx */
  EBX = (pop32());
  /* 11e57ded ret  */
  ESPCHK(0x11e57d40u, _esp0);
  ESP += 4; return;
L_11e57dee:;
  /* 11e57dee lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 11e57df1 pop esi */
  ESI = (pop32());
  /* 11e57df2 pop edi */
  EDI = (pop32());
  /* 11e57df3 pop ebx */
  EBX = (pop32());
  /* 11e57df4 ret  */
  ESPCHK(0x11e57d40u, _esp0);
  ESP += 4; return;
L_11e57df5:;
  /* 11e57df5 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 11e57df8 pop esi */
  ESI = (pop32());
  /* 11e57df9 pop edi */
  EDI = (pop32());
  /* 11e57dfa pop ebx */
  EBX = (pop32());
  /* 11e57dfb ret  */
  ESPCHK(0x11e57d40u, _esp0);
  ESP += 4; return;
  /* 11e57dfc int3  */
  x86_unimpl("int3 @ 0x11e57dfc");
  /* 11e57dfd int3  */
  x86_unimpl("int3 @ 0x11e57dfd");
  /* 11e57dfe int3  */
  x86_unimpl("int3 @ 0x11e57dfe");
  /* 11e57dff int3  */
  x86_unimpl("int3 @ 0x11e57dff");
  /* 11e57e00 push ebp */
  push32((uint32_t)(EBP));
}

/* FUN_10017e00 @ 0x11e57e00 (122 bytes, 39 insns) */
void f_11e57e00(void) {
  FTRACE(0x11e57e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e57e00 push ebp */
  push32((uint32_t)(EBP));
  /* 11e57e01 mov ebp, esp */
  EBP = (ESP);
  /* 11e57e03 push ecx */
  push32((uint32_t)(ECX));
  /* 11e57e04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e57e07 cmp eax, dword ptr [0x11e783fc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11e783fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57e0d jae 0x11e57e31 */
  if (!C.cf) goto L_11e57e31;
  /* 11e57e0f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e57e12 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11e57e15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e57e18 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11e57e1b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e57e1e mov eax, dword ptr [ecx*4 + 0x11e782c0] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11e782c0)));
  /* 11e57e25 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11e57e2a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11e57e2d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e57e2f jne 0x11e57e4c */
  if (!C.zf) goto L_11e57e4c;
L_11e57e31:;
  /* 11e57e31 call 0x11e52640 */
  push32(0x11e57e36u); f_11e52640();
  /* 11e57e36 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11e57e3c call 0x11e52650 */
  push32(0x11e57e41u); f_11e52650();
  /* 11e57e41 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11e57e47 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e57e4a jmp 0x11e57e76 */
  goto L_11e57e76;
L_11e57e4c:;
  /* 11e57e4c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e57e4f push edx */
  push32((uint32_t)(EDX));
  /* 11e57e50 call 0x11e54840 */
  push32(0x11e57e55u); f_11e54840();
  /* 11e57e55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57e58 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e57e5b push eax */
  push32((uint32_t)(EAX));
  /* 11e57e5c call 0x11e57e80 */
  push32(0x11e57e61u); f_11e57e80();
  /* 11e57e61 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57e64 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e57e67 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e57e6a push ecx */
  push32((uint32_t)(ECX));
  /* 11e57e6b call 0x11e548d0 */
  push32(0x11e57e70u); f_11e548d0();
  /* 11e57e70 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57e73 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11e57e76:;
  /* 11e57e76 mov esp, ebp */
  ESP = (EBP);
  /* 11e57e78 pop ebp */
  EBP = (pop32());
  /* 11e57e79 ret  */
  ESPCHK(0x11e57e00u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x11e57e80 (170 bytes, 59 insns) */
void f_11e57e80(void) {
  FTRACE(0x11e57e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e57e80 push ebp */
  push32((uint32_t)(EBP));
  /* 11e57e81 mov ebp, esp */
  EBP = (ESP);
  /* 11e57e83 push ecx */
  push32((uint32_t)(ECX));
  /* 11e57e84 push esi */
  push32((uint32_t)(ESI));
  /* 11e57e85 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e57e88 push eax */
  push32((uint32_t)(EAX));
  /* 11e57e89 call 0x11e546c0 */
  push32(0x11e57e8eu); f_11e546c0();
  /* 11e57e8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57e91 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57e94 je 0x11e57ed3 */
  if (C.zf) goto L_11e57ed3;
  /* 11e57e96 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57e9a je 0x11e57ea2 */
  if (C.zf) goto L_11e57ea2;
  /* 11e57e9c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57ea0 jne 0x11e57ebc */
  if (!C.zf) goto L_11e57ebc;
L_11e57ea2:;
  /* 11e57ea2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e57ea4 call 0x11e546c0 */
  push32(0x11e57ea9u); f_11e546c0();
  /* 11e57ea9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57eac mov esi, eax */
  ESI = (EAX);
  /* 11e57eae push 2 */
  push32((uint32_t)(0x2u));
  /* 11e57eb0 call 0x11e546c0 */
  push32(0x11e57eb5u); f_11e546c0();
  /* 11e57eb5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57eb8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57eba je 0x11e57ed3 */
  if (C.zf) goto L_11e57ed3;
L_11e57ebc:;
  /* 11e57ebc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e57ebf push ecx */
  push32((uint32_t)(ECX));
  /* 11e57ec0 call 0x11e546c0 */
  push32(0x11e57ec5u); f_11e546c0();
  /* 11e57ec5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57ec8 push eax */
  push32((uint32_t)(EAX));
  /* 11e57ec9 call dword ptr [0x11e792d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e792d8))), 0x11e57ecfu);
  /* 11e57ecf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e57ed1 je 0x11e57edc */
  if (C.zf) goto L_11e57edc;
L_11e57ed3:;
  /* 11e57ed3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e57eda jmp 0x11e57ee5 */
  goto L_11e57ee5;
L_11e57edc:;
  /* 11e57edc call dword ptr [0x11e793ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e793ac))), 0x11e57ee2u);
  /* 11e57ee2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11e57ee5:;
  /* 11e57ee5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e57ee8 push edx */
  push32((uint32_t)(EDX));
  /* 11e57ee9 call 0x11e545e0 */
  push32(0x11e57eeeu); f_11e545e0();
  /* 11e57eee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57ef1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e57ef4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11e57ef7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e57efa and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11e57efd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e57f00 mov edx, dword ptr [eax*4 + 0x11e782c0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11e782c0)));
  /* 11e57f07 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 11e57f0c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57f10 je 0x11e57f23 */
  if (C.zf) goto L_11e57f23;
  /* 11e57f12 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e57f15 push eax */
  push32((uint32_t)(EAX));
  /* 11e57f16 call 0x11e525a0 */
  push32(0x11e57f1bu); f_11e525a0();
  /* 11e57f1b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57f1e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e57f21 jmp 0x11e57f25 */
  goto L_11e57f25;
L_11e57f23:;
  /* 11e57f23 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e57f25:;
  /* 11e57f25 pop esi */
  ESI = (pop32());
  /* 11e57f26 mov esp, ebp */
  ESP = (EBP);
  /* 11e57f28 pop ebp */
  EBP = (pop32());
  /* 11e57f29 ret  */
  ESPCHK(0x11e57e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10017f30 @ 0x11e57f30 (146 bytes, 52 insns) */
void f_11e57f30(void) {
  FTRACE(0x11e57f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e57f30 push ebp */
  push32((uint32_t)(EBP));
  /* 11e57f31 mov ebp, esp */
  EBP = (ESP);
  /* 11e57f33 push ebx */
  push32((uint32_t)(EBX));
  /* 11e57f34 push esi */
  push32((uint32_t)(ESI));
  /* 11e57f35 push edi */
  push32((uint32_t)(EDI));
L_11e57f36:;
  /* 11e57f36 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57f3a jne 0x11e57f5a */
  if (!C.zf) goto L_11e57f5a;
  /* 11e57f3c push 0x11e72100 */
  push32((uint32_t)(0x11e72100u));
  /* 11e57f41 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e57f43 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11e57f45 push 0x11e727c8 */
  push32((uint32_t)(0x11e727c8u));
  /* 11e57f4a push 2 */
  push32((uint32_t)(0x2u));
  /* 11e57f4c call 0x11e48dc0 */
  push32(0x11e57f51u); f_11e48dc0();
  /* 11e57f51 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57f54 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57f57 jne 0x11e57f5a */
  if (!C.zf) goto L_11e57f5a;
  /* 11e57f59 int3  */
  x86_unimpl("int3 @ 0x11e57f59");
L_11e57f5a:;
  /* 11e57f5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e57f5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e57f5e jne 0x11e57f36 */
  if (!C.zf) goto L_11e57f36;
  /* 11e57f60 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e57f63 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11e57f66 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 11e57f6c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e57f6e je 0x11e57fbd */
  if (C.zf) goto L_11e57fbd;
  /* 11e57f70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e57f73 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11e57f76 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11e57f79 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e57f7b je 0x11e57fbd */
  if (C.zf) goto L_11e57fbd;
  /* 11e57f7d push 2 */
  push32((uint32_t)(0x2u));
  /* 11e57f7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e57f82 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11e57f85 push eax */
  push32((uint32_t)(EAX));
  /* 11e57f86 call 0x11e4a4e0 */
  push32(0x11e57f8bu); f_11e4a4e0();
  /* 11e57f8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57f8e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e57f91 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11e57f94 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 11e57f9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e57f9d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11e57fa0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e57fa3 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11e57fa9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e57fac mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11e57fb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e57fb6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_11e57fbd:;
  /* 11e57fbd pop edi */
  EDI = (pop32());
  /* 11e57fbe pop esi */
  ESI = (pop32());
  /* 11e57fbf pop ebx */
  EBX = (pop32());
  /* 11e57fc0 pop ebp */
  EBP = (pop32());
  /* 11e57fc1 ret  */
  ESPCHK(0x11e57f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10017fd0 @ 0x11e57fd0 (289 bytes, 97 insns) */
void f_11e57fd0(void) {
  FTRACE(0x11e57fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e57fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e57fd1 mov ebp, esp */
  EBP = (ESP);
  /* 11e57fd3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e57fd6 push esi */
  push32((uint32_t)(ESI));
  /* 11e57fd7 mov eax, dword ptr [0x11e75dc0] */
  EAX = (r32((uint32_t)(0x11e75dc0)));
  /* 11e57fdc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e57fdf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11e57fe6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11e57fed jmp 0x11e57ff8 */
  goto L_11e57ff8;
L_11e57fef:;
  /* 11e57fef mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e57ff2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e57ff5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11e57ff8:;
  /* 11e57ff8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e57ffc jae 0x11e58031 */
  if (!C.cf) goto L_11e58031;
  /* 11e57ffe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e58001 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e58004 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11e58007 push ecx */
  push32((uint32_t)(ECX));
  /* 11e58008 call 0x11e4d5a0 */
  push32(0x11e5800du); f_11e4d5a0();
  /* 11e5800d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58010 mov esi, eax */
  ESI = (EAX);
  /* 11e58012 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e58015 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e58018 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 11e5801c push ecx */
  push32((uint32_t)(ECX));
  /* 11e5801d call 0x11e4d5a0 */
  push32(0x11e58022u); f_11e4d5a0();
  /* 11e58022 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58025 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58028 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11e5802c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11e5802f jmp 0x11e57fef */
  goto L_11e57fef;
L_11e58031:;
  /* 11e58031 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e58034 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58037 push eax */
  push32((uint32_t)(EAX));
  /* 11e58038 call 0x11e49a30 */
  push32(0x11e5803du); f_11e49a30();
  /* 11e5803d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58040 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e58043 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e58047 je 0x11e580e9 */
  if (C.zf) goto L_11e580e9;
  /* 11e5804d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e58050 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11e58053 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11e5805a jmp 0x11e58065 */
  goto L_11e58065;
L_11e5805c:;
  /* 11e5805c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e5805f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58062 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11e58065:;
  /* 11e58065 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e58069 jae 0x11e580da */
  if (!C.cf) goto L_11e580da;
  /* 11e5806b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e5806e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11e58071 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e58074 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58077 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11e5807a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e5807d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e58080 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11e58083 push ecx */
  push32((uint32_t)(ECX));
  /* 11e58084 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e58087 push edx */
  push32((uint32_t)(EDX));
  /* 11e58088 call 0x11e4d720 */
  push32(0x11e5808du); f_11e4d720();
  /* 11e5808d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58090 push eax */
  push32((uint32_t)(EAX));
  /* 11e58091 call 0x11e4d5a0 */
  push32(0x11e58096u); f_11e4d5a0();
  /* 11e58096 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58099 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e5809c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5809e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11e580a1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e580a4 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11e580a7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e580aa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e580ad mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11e580b0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e580b3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e580b6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 11e580ba push eax */
  push32((uint32_t)(EAX));
  /* 11e580bb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e580be push ecx */
  push32((uint32_t)(ECX));
  /* 11e580bf call 0x11e4d720 */
  push32(0x11e580c4u); f_11e4d720();
  /* 11e580c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e580c7 push eax */
  push32((uint32_t)(EAX));
  /* 11e580c8 call 0x11e4d5a0 */
  push32(0x11e580cdu); f_11e4d5a0();
  /* 11e580cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e580d0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e580d3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e580d5 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11e580d8 jmp 0x11e5805c */
  goto L_11e5805c;
L_11e580da:;
  /* 11e580da mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e580dd mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11e580e0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e580e3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e580e6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11e580e9:;
  /* 11e580e9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e580ec pop esi */
  ESI = (pop32());
  /* 11e580ed mov esp, ebp */
  ESP = (EBP);
  /* 11e580ef pop ebp */
  EBP = (pop32());
  /* 11e580f0 ret  */
  ESPCHK(0x11e57fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018100 @ 0x11e58100 (291 bytes, 97 insns) */
void f_11e58100(void) {
  FTRACE(0x11e58100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e58100 push ebp */
  push32((uint32_t)(EBP));
  /* 11e58101 mov ebp, esp */
  EBP = (ESP);
  /* 11e58103 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e58106 push esi */
  push32((uint32_t)(ESI));
  /* 11e58107 mov eax, dword ptr [0x11e75dc0] */
  EAX = (r32((uint32_t)(0x11e75dc0)));
  /* 11e5810c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e5810f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11e58116 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11e5811d jmp 0x11e58128 */
  goto L_11e58128;
L_11e5811f:;
  /* 11e5811f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e58122 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58125 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11e58128:;
  /* 11e58128 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5812c jae 0x11e58162 */
  if (!C.cf) goto L_11e58162;
  /* 11e5812e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e58131 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e58134 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11e58138 push ecx */
  push32((uint32_t)(ECX));
  /* 11e58139 call 0x11e4d5a0 */
  push32(0x11e5813eu); f_11e4d5a0();
  /* 11e5813e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58141 mov esi, eax */
  ESI = (EAX);
  /* 11e58143 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e58146 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e58149 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 11e5814d push ecx */
  push32((uint32_t)(ECX));
  /* 11e5814e call 0x11e4d5a0 */
  push32(0x11e58153u); f_11e4d5a0();
  /* 11e58153 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58156 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58159 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11e5815d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11e58160 jmp 0x11e5811f */
  goto L_11e5811f;
L_11e58162:;
  /* 11e58162 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e58165 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58168 push eax */
  push32((uint32_t)(EAX));
  /* 11e58169 call 0x11e49a30 */
  push32(0x11e5816eu); f_11e49a30();
  /* 11e5816e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58171 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e58174 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e58178 je 0x11e5821b */
  if (C.zf) goto L_11e5821b;
  /* 11e5817e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e58181 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11e58184 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11e5818b jmp 0x11e58196 */
  goto L_11e58196;
L_11e5818d:;
  /* 11e5818d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e58190 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58193 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11e58196:;
  /* 11e58196 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5819a jae 0x11e5820c */
  if (!C.cf) goto L_11e5820c;
  /* 11e5819c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e5819f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 11e581a2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e581a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e581a8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11e581ab mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e581ae mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e581b1 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 11e581b5 push ecx */
  push32((uint32_t)(ECX));
  /* 11e581b6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e581b9 push edx */
  push32((uint32_t)(EDX));
  /* 11e581ba call 0x11e4d720 */
  push32(0x11e581bfu); f_11e4d720();
  /* 11e581bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e581c2 push eax */
  push32((uint32_t)(EAX));
  /* 11e581c3 call 0x11e4d5a0 */
  push32(0x11e581c8u); f_11e4d5a0();
  /* 11e581c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e581cb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e581ce add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e581d0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11e581d3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e581d6 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 11e581d9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e581dc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e581df mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11e581e2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e581e5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e581e8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11e581ec push eax */
  push32((uint32_t)(EAX));
  /* 11e581ed mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e581f0 push ecx */
  push32((uint32_t)(ECX));
  /* 11e581f1 call 0x11e4d720 */
  push32(0x11e581f6u); f_11e4d720();
  /* 11e581f6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e581f9 push eax */
  push32((uint32_t)(EAX));
  /* 11e581fa call 0x11e4d5a0 */
  push32(0x11e581ffu); f_11e4d5a0();
  /* 11e581ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58202 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e58205 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58207 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11e5820a jmp 0x11e5818d */
  goto L_11e5818d;
L_11e5820c:;
  /* 11e5820c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e5820f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11e58212 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e58215 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58218 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11e5821b:;
  /* 11e5821b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e5821e pop esi */
  ESI = (pop32());
  /* 11e5821f mov esp, ebp */
  ESP = (EBP);
  /* 11e58221 pop ebp */
  EBP = (pop32());
  /* 11e58222 ret  */
  ESPCHK(0x11e58100u, _esp0);
  ESP += 4; return;
}

/* FUN_10018230 @ 0x11e58230 (878 bytes, 273 insns) */
void f_11e58230(void) {
  FTRACE(0x11e58230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e58230 push ebp */
  push32((uint32_t)(EBP));
  /* 11e58231 mov ebp, esp */
  EBP = (ESP);
  /* 11e58233 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e58236 push esi */
  push32((uint32_t)(ESI));
  /* 11e58237 mov eax, dword ptr [0x11e75dc0] */
  EAX = (r32((uint32_t)(0x11e75dc0)));
  /* 11e5823c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e5823f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11e58246 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11e5824d jmp 0x11e58258 */
  goto L_11e58258;
L_11e5824f:;
  /* 11e5824f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e58252 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58255 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11e58258:;
  /* 11e58258 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5825c jae 0x11e58291 */
  if (!C.cf) goto L_11e58291;
  /* 11e5825e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e58261 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e58264 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 11e58267 push ecx */
  push32((uint32_t)(ECX));
  /* 11e58268 call 0x11e4d5a0 */
  push32(0x11e5826du); f_11e4d5a0();
  /* 11e5826d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58270 mov esi, eax */
  ESI = (EAX);
  /* 11e58272 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e58275 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e58278 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 11e5827c push ecx */
  push32((uint32_t)(ECX));
  /* 11e5827d call 0x11e4d5a0 */
  push32(0x11e58282u); f_11e4d5a0();
  /* 11e58282 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58285 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58288 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11e5828c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11e5828f jmp 0x11e5824f */
  goto L_11e5824f;
L_11e58291:;
  /* 11e58291 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11e58298 jmp 0x11e582a3 */
  goto L_11e582a3;
L_11e5829a:;
  /* 11e5829a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e5829d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e582a0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11e582a3:;
  /* 11e582a3 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e582a7 jae 0x11e582dd */
  if (!C.cf) goto L_11e582dd;
  /* 11e582a9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e582ac mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e582af mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11e582b3 push eax */
  push32((uint32_t)(EAX));
  /* 11e582b4 call 0x11e4d5a0 */
  push32(0x11e582b9u); f_11e4d5a0();
  /* 11e582b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e582bc mov esi, eax */
  ESI = (EAX);
  /* 11e582be mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e582c1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e582c4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11e582c8 push eax */
  push32((uint32_t)(EAX));
  /* 11e582c9 call 0x11e4d5a0 */
  push32(0x11e582ceu); f_11e4d5a0();
  /* 11e582ce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e582d1 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e582d4 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11e582d8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e582db jmp 0x11e5829a */
  goto L_11e5829a;
L_11e582dd:;
  /* 11e582dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e582e0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11e582e6 push eax */
  push32((uint32_t)(EAX));
  /* 11e582e7 call 0x11e4d5a0 */
  push32(0x11e582ecu); f_11e4d5a0();
  /* 11e582ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e582ef mov esi, eax */
  ESI = (EAX);
  /* 11e582f1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e582f4 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 11e582fa push edx */
  push32((uint32_t)(EDX));
  /* 11e582fb call 0x11e4d5a0 */
  push32(0x11e58300u); f_11e4d5a0();
  /* 11e58300 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58303 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58306 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 11e5830a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e5830d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e58310 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11e58316 push edx */
  push32((uint32_t)(EDX));
  /* 11e58317 call 0x11e4d5a0 */
  push32(0x11e5831cu); f_11e4d5a0();
  /* 11e5831c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5831f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e58322 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11e58326 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11e58329 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e5832c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 11e58332 push ecx */
  push32((uint32_t)(ECX));
  /* 11e58333 call 0x11e4d5a0 */
  push32(0x11e58338u); f_11e4d5a0();
  /* 11e58338 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5833b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e5833e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11e58342 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e58345 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e58348 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 11e5834e push edx */
  push32((uint32_t)(EDX));
  /* 11e5834f call 0x11e4d5a0 */
  push32(0x11e58354u); f_11e4d5a0();
  /* 11e58354 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58357 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e5835a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11e5835e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11e58361 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e58364 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58369 push eax */
  push32((uint32_t)(EAX));
  /* 11e5836a call 0x11e49a30 */
  push32(0x11e5836fu); f_11e49a30();
  /* 11e5836f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58372 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e58375 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e58379 je 0x11e58596 */
  if (C.zf) goto L_11e58596;
  /* 11e5837f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e58382 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11e58385 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e58388 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5838e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11e58391 push 0xac */
  push32((uint32_t)(0xacu));
  /* 11e58396 mov eax, dword ptr [0x11e75dc0] */
  EAX = (r32((uint32_t)(0x11e75dc0)));
  /* 11e5839b push eax */
  push32((uint32_t)(EAX));
  /* 11e5839c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e5839f push ecx */
  push32((uint32_t)(ECX));
  /* 11e583a0 call 0x11e50c70 */
  push32(0x11e583a5u); f_11e50c70();
  /* 11e583a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e583a8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11e583af jmp 0x11e583ba */
  goto L_11e583ba;
L_11e583b1:;
  /* 11e583b1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e583b4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e583b7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11e583ba:;
  /* 11e583ba cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e583be jae 0x11e5842e */
  if (!C.cf) goto L_11e5842e;
  /* 11e583c0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e583c3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e583c6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e583c9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11e583cc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e583cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e583d2 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11e583d5 push edx */
  push32((uint32_t)(EDX));
  /* 11e583d6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e583d9 push eax */
  push32((uint32_t)(EAX));
  /* 11e583da call 0x11e4d720 */
  push32(0x11e583dfu); f_11e4d720();
  /* 11e583df add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e583e2 push eax */
  push32((uint32_t)(EAX));
  /* 11e583e3 call 0x11e4d5a0 */
  push32(0x11e583e8u); f_11e4d5a0();
  /* 11e583e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e583eb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e583ee lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11e583f2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11e583f5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e583f8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e583fb mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e583fe mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 11e58402 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e58405 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e58408 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 11e5840c push edx */
  push32((uint32_t)(EDX));
  /* 11e5840d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e58410 push eax */
  push32((uint32_t)(EAX));
  /* 11e58411 call 0x11e4d720 */
  push32(0x11e58416u); f_11e4d720();
  /* 11e58416 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58419 push eax */
  push32((uint32_t)(EAX));
  /* 11e5841a call 0x11e4d5a0 */
  push32(0x11e5841fu); f_11e4d5a0();
  /* 11e5841f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58422 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e58425 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11e58429 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11e5842c jmp 0x11e583b1 */
  goto L_11e583b1;
L_11e5842e:;
  /* 11e5842e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11e58435 jmp 0x11e58440 */
  goto L_11e58440;
L_11e58437:;
  /* 11e58437 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e5843a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5843d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11e58440:;
  /* 11e58440 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e58444 jae 0x11e584b6 */
  if (!C.cf) goto L_11e584b6;
  /* 11e58446 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e58449 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e5844c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e5844f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 11e58453 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e58456 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e58459 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11e5845d push eax */
  push32((uint32_t)(EAX));
  /* 11e5845e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e58461 push ecx */
  push32((uint32_t)(ECX));
  /* 11e58462 call 0x11e4d720 */
  push32(0x11e58467u); f_11e4d720();
  /* 11e58467 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5846a push eax */
  push32((uint32_t)(EAX));
  /* 11e5846b call 0x11e4d5a0 */
  push32(0x11e58470u); f_11e4d5a0();
  /* 11e58470 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58473 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e58476 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11e5847a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11e5847d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e58480 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e58483 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e58486 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 11e5848a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e5848d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e58490 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11e58494 push eax */
  push32((uint32_t)(EAX));
  /* 11e58495 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e58498 push ecx */
  push32((uint32_t)(ECX));
  /* 11e58499 call 0x11e4d720 */
  push32(0x11e5849eu); f_11e4d720();
  /* 11e5849e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e584a1 push eax */
  push32((uint32_t)(EAX));
  /* 11e584a2 call 0x11e4d5a0 */
  push32(0x11e584a7u); f_11e4d5a0();
  /* 11e584a7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e584aa mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e584ad lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11e584b1 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11e584b4 jmp 0x11e58437 */
  goto L_11e58437;
L_11e584b6:;
  /* 11e584b6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e584b9 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e584bc mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 11e584c2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e584c5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 11e584cb push ecx */
  push32((uint32_t)(ECX));
  /* 11e584cc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e584cf push edx */
  push32((uint32_t)(EDX));
  /* 11e584d0 call 0x11e4d720 */
  push32(0x11e584d5u); f_11e4d720();
  /* 11e584d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e584d8 push eax */
  push32((uint32_t)(EAX));
  /* 11e584d9 call 0x11e4d5a0 */
  push32(0x11e584deu); f_11e4d5a0();
  /* 11e584de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e584e1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e584e4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11e584e8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11e584eb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e584ee mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e584f1 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 11e584f7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e584fa mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 11e58500 push eax */
  push32((uint32_t)(EAX));
  /* 11e58501 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e58504 push ecx */
  push32((uint32_t)(ECX));
  /* 11e58505 call 0x11e4d720 */
  push32(0x11e5850au); f_11e4d720();
  /* 11e5850a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5850d push eax */
  push32((uint32_t)(EAX));
  /* 11e5850e call 0x11e4d5a0 */
  push32(0x11e58513u); f_11e4d5a0();
  /* 11e58513 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58516 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e58519 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11e5851d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11e58520 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e58523 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e58526 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 11e5852c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e5852f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 11e58535 push ecx */
  push32((uint32_t)(ECX));
  /* 11e58536 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e58539 push edx */
  push32((uint32_t)(EDX));
  /* 11e5853a call 0x11e4d720 */
  push32(0x11e5853fu); f_11e4d720();
  /* 11e5853f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58542 push eax */
  push32((uint32_t)(EAX));
  /* 11e58543 call 0x11e4d5a0 */
  push32(0x11e58548u); f_11e4d5a0();
  /* 11e58548 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5854b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e5854e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11e58552 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11e58555 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e58558 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e5855b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 11e58561 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e58564 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 11e5856a push eax */
  push32((uint32_t)(EAX));
  /* 11e5856b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e5856e push ecx */
  push32((uint32_t)(ECX));
  /* 11e5856f call 0x11e4d720 */
  push32(0x11e58574u); f_11e4d720();
  /* 11e58574 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58577 push eax */
  push32((uint32_t)(EAX));
  /* 11e58578 call 0x11e4d5a0 */
  push32(0x11e5857du); f_11e4d5a0();
  /* 11e5857d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58580 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e58583 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 11e58587 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11e5858a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e5858d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e58590 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_11e58596:;
  /* 11e58596 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e58599 pop esi */
  ESI = (pop32());
  /* 11e5859a mov esp, ebp */
  ESP = (EBP);
  /* 11e5859c pop ebp */
  EBP = (pop32());
  /* 11e5859d ret  */
  ESPCHK(0x11e58230u, _esp0);
  ESP += 4; return;
}

/* FUN_100185a0 @ 0x11e585a0 (31 bytes, 15 insns) */
void f_11e585a0(void) {
  FTRACE(0x11e585a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e585a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e585a1 mov ebp, esp */
  EBP = (ESP);
  /* 11e585a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e585a5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e585a8 push eax */
  push32((uint32_t)(EAX));
  /* 11e585a9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e585ac push ecx */
  push32((uint32_t)(ECX));
  /* 11e585ad mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e585b0 push edx */
  push32((uint32_t)(EDX));
  /* 11e585b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e585b4 push eax */
  push32((uint32_t)(EAX));
  /* 11e585b5 call 0x11e585c0 */
  push32(0x11e585bau); f_11e585c0();
  /* 11e585ba add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e585bd pop ebp */
  EBP = (pop32());
  /* 11e585be ret  */
  ESPCHK(0x11e585a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100185c0 @ 0x11e585c0 (393 bytes, 123 insns) */
void f_11e585c0(void) {
  FTRACE(0x11e585c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e585c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e585c1 mov ebp, esp */
  EBP = (ESP);
  /* 11e585c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e585c6 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e585ca jne 0x11e585d6 */
  if (!C.zf) goto L_11e585d6;
  /* 11e585cc mov eax, dword ptr [0x11e75dc0] */
  EAX = (r32((uint32_t)(0x11e75dc0)));
  /* 11e585d1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11e585d4 jmp 0x11e585dc */
  goto L_11e585dc;
L_11e585d6:;
  /* 11e585d6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e585d9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11e585dc:;
  /* 11e585dc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e585df mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e585e2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e585e5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e585e8 push 0x11e76c7c */
  push32((uint32_t)(0x11e76c7cu));
  /* 11e585ed call dword ptr [0x11e793d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e793d0))), 0x11e585f3u);
  /* 11e585f3 cmp dword ptr [0x11e76c6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76c6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e585fa je 0x11e5861a */
  if (C.zf) goto L_11e5861a;
  /* 11e585fc push 0x11e76c7c */
  push32((uint32_t)(0x11e76c7cu));
  /* 11e58601 call dword ptr [0x11e793c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e793c0))), 0x11e58607u);
  /* 11e58607 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11e58609 call 0x11e4c670 */
  push32(0x11e5860eu); f_11e4c670();
  /* 11e5860e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58611 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11e58618 jmp 0x11e58621 */
  goto L_11e58621;
L_11e5861a:;
  /* 11e5861a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11e58621:;
  /* 11e58621 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e58625 jbe 0x11e58712 */
  if ((C.cf||C.zf)) goto L_11e58712;
  /* 11e5862b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e5862e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11e58630 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 11e58633 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e58637 je 0x11e58641 */
  if (C.zf) goto L_11e58641;
  /* 11e58639 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e5863d je 0x11e58646 */
  if (C.zf) goto L_11e58646;
  /* 11e5863f jmp 0x11e586a0 */
  goto L_11e586a0;
L_11e58641:;
  /* 11e58641 jmp 0x11e58712 */
  goto L_11e58712;
L_11e58646:;
  /* 11e58646 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e58649 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5864c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11e5864f mov dword ptr [0x11e76c58], 0 */
  w32((uint32_t)(0x11e76c58), (0x0u));
  /* 11e58659 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e5865c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11e5865f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e58662 jne 0x11e58677 */
  if (!C.zf) goto L_11e58677;
  /* 11e58664 mov dword ptr [0x11e76c58], 1 */
  w32((uint32_t)(0x11e76c58), (0x1u));
  /* 11e5866e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e58671 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58674 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11e58677:;
  /* 11e58677 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e5867a push ecx */
  push32((uint32_t)(ECX));
  /* 11e5867b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11e5867e push edx */
  push32((uint32_t)(EDX));
  /* 11e5867f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11e58682 push eax */
  push32((uint32_t)(EAX));
  /* 11e58683 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e58686 push ecx */
  push32((uint32_t)(ECX));
  /* 11e58687 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e5868a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e5868c push eax */
  push32((uint32_t)(EAX));
  /* 11e5868d call 0x11e58750 */
  push32(0x11e58692u); f_11e58750();
  /* 11e58692 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58695 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e58698 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5869b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11e5869e jmp 0x11e5870d */
  goto L_11e5870d;
L_11e586a0:;
  /* 11e586a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e586a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e586a5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e586a7 mov ecx, dword ptr [0x11e74db8] */
  ECX = (r32((uint32_t)(0x11e74db8)));
  /* 11e586ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e586af mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11e586b3 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11e586b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e586bb je 0x11e586e8 */
  if (C.zf) goto L_11e586e8;
  /* 11e586bd cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e586c1 jbe 0x11e586e8 */
  if ((C.cf||C.zf)) goto L_11e586e8;
  /* 11e586c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e586c6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e586c9 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11e586cb mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11e586cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e586d0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e586d3 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11e586d6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e586d9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e586dc mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11e586df mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e586e2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e586e5 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11e586e8:;
  /* 11e586e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e586eb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e586ee mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11e586f0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11e586f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e586f5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e586f8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11e586fb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e586fe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58701 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11e58704 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e58707 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e5870a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11e5870d:;
  /* 11e5870d jmp 0x11e58621 */
  goto L_11e58621;
L_11e58712:;
  /* 11e58712 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e58716 je 0x11e58724 */
  if (C.zf) goto L_11e58724;
  /* 11e58718 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11e5871a call 0x11e4c710 */
  push32(0x11e5871fu); f_11e4c710();
  /* 11e5871f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58722 jmp 0x11e5872f */
  goto L_11e5872f;
L_11e58724:;
  /* 11e58724 push 0x11e76c7c */
  push32((uint32_t)(0x11e76c7cu));
  /* 11e58729 call dword ptr [0x11e793c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e793c0))), 0x11e5872fu);
L_11e5872f:;
  /* 11e5872f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e58733 jbe 0x11e58743 */
  if ((C.cf||C.zf)) goto L_11e58743;
  /* 11e58735 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e58738 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11e5873b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e5873e sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e58741 jmp 0x11e58745 */
  goto L_11e58745;
L_11e58743:;
  /* 11e58743 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e58745:;
  /* 11e58745 mov esp, ebp */
  ESP = (EBP);
  /* 11e58747 pop ebp */
  EBP = (pop32());
  /* 11e58748 ret  */
  ESPCHK(0x11e585c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10018750 @ 0x11e58750 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_11e58750(void) {
  FTRACE(0x11e58750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e58750 push ebp */
  push32((uint32_t)(EBP));
  /* 11e58751 mov ebp, esp */
  EBP = (ESP);
  /* 11e58753 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e58756 push esi */
  push32((uint32_t)(ESI));
  /* 11e58757 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 11e5875b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e5875e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e58761 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e58764 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e58767 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5876b ja 0x11e58cb8 */
  if ((!C.cf&&!C.zf)) goto L_11e58cb8;
  /* 11e58771 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e58774 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e58776 mov dl, byte ptr [eax + 0x11e58d19] */
  DL = (r8((uint32_t)(EAX + 0x11e58d19)));
  /* 11e5877c jmp dword ptr [edx*4 + 0x11e58cbd] */
  switch (EDX) {
    case 0: goto L_11e58c96;
    case 1: goto L_11e587a5;
    case 2: goto L_11e587eb;
    case 3: goto L_11e58938;
    case 4: goto L_11e58960;
    case 5: goto L_11e589ff;
    case 6: goto L_11e58a6b;
    case 7: goto L_11e58a94;
    case 8: goto L_11e58ad5;
    case 9: goto L_11e58bb7;
    case 10: goto L_11e58c1e;
    case 11: goto L_11e58c6b;
    case 12: goto L_11e58783;
    case 13: goto L_11e587c8;
    case 14: goto L_11e5880e;
    case 15: goto L_11e5890e;
    case 16: goto L_11e589a5;
    case 17: goto L_11e589d2;
    case 18: goto L_11e58a27;
    case 19: goto L_11e58aab;
    case 20: goto L_11e58b59;
    case 21: goto L_11e58be8;
    case 22: goto L_11e58cb8;
    default: x86_unimpl("switch@0x11e5877c out of table"); return;
  }
L_11e58783:;
  /* 11e58783 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e58786 push ecx */
  push32((uint32_t)(ECX));
  /* 11e58787 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e5878a push edx */
  push32((uint32_t)(EDX));
  /* 11e5878b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e5878e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11e58791 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e58794 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11e58797 push eax */
  push32((uint32_t)(EAX));
  /* 11e58798 call 0x11e58d70 */
  push32(0x11e5879du); f_11e58d70();
  /* 11e5879d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e587a0 jmp 0x11e58cb8 */
  goto L_11e58cb8;
L_11e587a5:;
  /* 11e587a5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e587a8 push ecx */
  push32((uint32_t)(ECX));
  /* 11e587a9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e587ac push edx */
  push32((uint32_t)(EDX));
  /* 11e587ad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e587b0 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11e587b3 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e587b6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 11e587ba push eax */
  push32((uint32_t)(EAX));
  /* 11e587bb call 0x11e58d70 */
  push32(0x11e587c0u); f_11e58d70();
  /* 11e587c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e587c3 jmp 0x11e58cb8 */
  goto L_11e58cb8;
L_11e587c8:;
  /* 11e587c8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e587cb push ecx */
  push32((uint32_t)(ECX));
  /* 11e587cc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e587cf push edx */
  push32((uint32_t)(EDX));
  /* 11e587d0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e587d3 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11e587d6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e587d9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 11e587dd push eax */
  push32((uint32_t)(EAX));
  /* 11e587de call 0x11e58d70 */
  push32(0x11e587e3u); f_11e58d70();
  /* 11e587e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e587e6 jmp 0x11e58cb8 */
  goto L_11e58cb8;
L_11e587eb:;
  /* 11e587eb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e587ee push ecx */
  push32((uint32_t)(ECX));
  /* 11e587ef mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e587f2 push edx */
  push32((uint32_t)(EDX));
  /* 11e587f3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e587f6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11e587f9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e587fc mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 11e58800 push eax */
  push32((uint32_t)(EAX));
  /* 11e58801 call 0x11e58d70 */
  push32(0x11e58806u); f_11e58d70();
  /* 11e58806 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58809 jmp 0x11e58cb8 */
  goto L_11e58cb8;
L_11e5880e:;
  /* 11e5880e cmp dword ptr [0x11e76c58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76c58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e58815 je 0x11e58896 */
  if (C.zf) goto L_11e58896;
  /* 11e58817 mov dword ptr [0x11e76c58], 0 */
  w32((uint32_t)(0x11e76c58), (0x0u));
  /* 11e58821 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e58824 push ecx */
  push32((uint32_t)(ECX));
  /* 11e58825 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e58828 push edx */
  push32((uint32_t)(EDX));
  /* 11e58829 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e5882c push eax */
  push32((uint32_t)(EAX));
  /* 11e5882d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e58830 push ecx */
  push32((uint32_t)(ECX));
  /* 11e58831 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e58834 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 11e5883a push eax */
  push32((uint32_t)(EAX));
  /* 11e5883b call 0x11e58f20 */
  push32(0x11e58840u); f_11e58f20();
  /* 11e58840 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58843 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e58846 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e58849 jne 0x11e58850 */
  if (!C.zf) goto L_11e58850;
  /* 11e5884b jmp 0x11e58cb8 */
  goto L_11e58cb8;
L_11e58850:;
  /* 11e58850 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e58853 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e58855 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11e58858 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e5885b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e5885d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58860 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e58863 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11e58865 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e58868 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e5886a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e5886d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e58870 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11e58872 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e58875 push ecx */
  push32((uint32_t)(ECX));
  /* 11e58876 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e58879 push edx */
  push32((uint32_t)(EDX));
  /* 11e5887a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e5887d push eax */
  push32((uint32_t)(EAX));
  /* 11e5887e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e58881 push ecx */
  push32((uint32_t)(ECX));
  /* 11e58882 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e58885 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11e5888b push eax */
  push32((uint32_t)(EAX));
  /* 11e5888c call 0x11e58f20 */
  push32(0x11e58891u); f_11e58f20();
  /* 11e58891 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58894 jmp 0x11e58909 */
  goto L_11e58909;
L_11e58896:;
  /* 11e58896 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e58899 push ecx */
  push32((uint32_t)(ECX));
  /* 11e5889a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e5889d push edx */
  push32((uint32_t)(EDX));
  /* 11e5889e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e588a1 push eax */
  push32((uint32_t)(EAX));
  /* 11e588a2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e588a5 push ecx */
  push32((uint32_t)(ECX));
  /* 11e588a6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e588a9 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 11e588af push eax */
  push32((uint32_t)(EAX));
  /* 11e588b0 call 0x11e58f20 */
  push32(0x11e588b5u); f_11e58f20();
  /* 11e588b5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e588b8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e588bb cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e588be jne 0x11e588c5 */
  if (!C.zf) goto L_11e588c5;
  /* 11e588c0 jmp 0x11e58cb8 */
  goto L_11e58cb8;
L_11e588c5:;
  /* 11e588c5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e588c8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e588ca mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 11e588cd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e588d0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e588d2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e588d5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e588d8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11e588da mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e588dd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e588df sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e588e2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e588e5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11e588e7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e588ea push ecx */
  push32((uint32_t)(ECX));
  /* 11e588eb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e588ee push edx */
  push32((uint32_t)(EDX));
  /* 11e588ef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e588f2 push eax */
  push32((uint32_t)(EAX));
  /* 11e588f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e588f6 push ecx */
  push32((uint32_t)(ECX));
  /* 11e588f7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e588fa mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 11e58900 push eax */
  push32((uint32_t)(EAX));
  /* 11e58901 call 0x11e58f20 */
  push32(0x11e58906u); f_11e58f20();
  /* 11e58906 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e58909:;
  /* 11e58909 jmp 0x11e58cb8 */
  goto L_11e58cb8;
L_11e5890e:;
  /* 11e5890e mov ecx, dword ptr [0x11e76c58] */
  ECX = (r32((uint32_t)(0x11e76c58)));
  /* 11e58914 mov dword ptr [0x11e76c68], ecx */
  w32((uint32_t)(0x11e76c68), (ECX));
  /* 11e5891a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e5891d push edx */
  push32((uint32_t)(EDX));
  /* 11e5891e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e58921 push eax */
  push32((uint32_t)(EAX));
  /* 11e58922 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e58924 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e58927 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11e5892a push edx */
  push32((uint32_t)(EDX));
  /* 11e5892b call 0x11e58dc0 */
  push32(0x11e58930u); f_11e58dc0();
  /* 11e58930 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58933 jmp 0x11e58cb8 */
  goto L_11e58cb8;
L_11e58938:;
  /* 11e58938 mov eax, dword ptr [0x11e76c58] */
  EAX = (r32((uint32_t)(0x11e76c58)));
  /* 11e5893d mov dword ptr [0x11e76c68], eax */
  w32((uint32_t)(0x11e76c68), (EAX));
  /* 11e58942 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e58945 push ecx */
  push32((uint32_t)(ECX));
  /* 11e58946 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e58949 push edx */
  push32((uint32_t)(EDX));
  /* 11e5894a push 2 */
  push32((uint32_t)(0x2u));
  /* 11e5894c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e5894f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11e58952 push ecx */
  push32((uint32_t)(ECX));
  /* 11e58953 call 0x11e58dc0 */
  push32(0x11e58958u); f_11e58dc0();
  /* 11e58958 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5895b jmp 0x11e58cb8 */
  goto L_11e58cb8;
L_11e58960:;
  /* 11e58960 mov edx, dword ptr [0x11e76c58] */
  EDX = (r32((uint32_t)(0x11e76c58)));
  /* 11e58966 mov dword ptr [0x11e76c68], edx */
  w32((uint32_t)(0x11e76c68), (EDX));
  /* 11e5896c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e5896f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 11e58972 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e58973 mov ecx, 0xc */
  ECX = (0xcu);
  /* 11e58978 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e5897a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e5897d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e58981 jne 0x11e5898a */
  if (!C.zf) goto L_11e5898a;
  /* 11e58983 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_11e5898a:;
  /* 11e5898a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e5898d push edx */
  push32((uint32_t)(EDX));
  /* 11e5898e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e58991 push eax */
  push32((uint32_t)(EAX));
  /* 11e58992 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e58994 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e58997 push ecx */
  push32((uint32_t)(ECX));
  /* 11e58998 call 0x11e58dc0 */
  push32(0x11e5899du); f_11e58dc0();
  /* 11e5899d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e589a0 jmp 0x11e58cb8 */
  goto L_11e58cb8;
L_11e589a5:;
  /* 11e589a5 mov edx, dword ptr [0x11e76c58] */
  EDX = (r32((uint32_t)(0x11e76c58)));
  /* 11e589ab mov dword ptr [0x11e76c68], edx */
  w32((uint32_t)(0x11e76c68), (EDX));
  /* 11e589b1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e589b4 push eax */
  push32((uint32_t)(EAX));
  /* 11e589b5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e589b8 push ecx */
  push32((uint32_t)(ECX));
  /* 11e589b9 push 3 */
  push32((uint32_t)(0x3u));
  /* 11e589bb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e589be mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11e589c1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e589c4 push eax */
  push32((uint32_t)(EAX));
  /* 11e589c5 call 0x11e58dc0 */
  push32(0x11e589cau); f_11e58dc0();
  /* 11e589ca add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e589cd jmp 0x11e58cb8 */
  goto L_11e58cb8;
L_11e589d2:;
  /* 11e589d2 mov ecx, dword ptr [0x11e76c58] */
  ECX = (r32((uint32_t)(0x11e76c58)));
  /* 11e589d8 mov dword ptr [0x11e76c68], ecx */
  w32((uint32_t)(0x11e76c68), (ECX));
  /* 11e589de mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e589e1 push edx */
  push32((uint32_t)(EDX));
  /* 11e589e2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e589e5 push eax */
  push32((uint32_t)(EAX));
  /* 11e589e6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e589e8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e589eb mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11e589ee add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e589f1 push edx */
  push32((uint32_t)(EDX));
  /* 11e589f2 call 0x11e58dc0 */
  push32(0x11e589f7u); f_11e58dc0();
  /* 11e589f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e589fa jmp 0x11e58cb8 */
  goto L_11e58cb8;
L_11e589ff:;
  /* 11e589ff mov eax, dword ptr [0x11e76c58] */
  EAX = (r32((uint32_t)(0x11e76c58)));
  /* 11e58a04 mov dword ptr [0x11e76c68], eax */
  w32((uint32_t)(0x11e76c68), (EAX));
  /* 11e58a09 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e58a0c push ecx */
  push32((uint32_t)(ECX));
  /* 11e58a0d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e58a10 push edx */
  push32((uint32_t)(EDX));
  /* 11e58a11 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e58a13 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e58a16 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11e58a19 push ecx */
  push32((uint32_t)(ECX));
  /* 11e58a1a call 0x11e58dc0 */
  push32(0x11e58a1fu); f_11e58dc0();
  /* 11e58a1f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58a22 jmp 0x11e58cb8 */
  goto L_11e58cb8;
L_11e58a27:;
  /* 11e58a27 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e58a2a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e58a2e jg 0x11e58a4c */
  if ((!C.zf&&C.sf==C.of)) goto L_11e58a4c;
  /* 11e58a30 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e58a33 push eax */
  push32((uint32_t)(EAX));
  /* 11e58a34 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e58a37 push ecx */
  push32((uint32_t)(ECX));
  /* 11e58a38 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e58a3b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 11e58a41 push eax */
  push32((uint32_t)(EAX));
  /* 11e58a42 call 0x11e58d70 */
  push32(0x11e58a47u); f_11e58d70();
  /* 11e58a47 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58a4a jmp 0x11e58a66 */
  goto L_11e58a66;
L_11e58a4c:;
  /* 11e58a4c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e58a4f push ecx */
  push32((uint32_t)(ECX));
  /* 11e58a50 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e58a53 push edx */
  push32((uint32_t)(EDX));
  /* 11e58a54 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e58a57 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 11e58a5d push ecx */
  push32((uint32_t)(ECX));
  /* 11e58a5e call 0x11e58d70 */
  push32(0x11e58a63u); f_11e58d70();
  /* 11e58a63 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e58a66:;
  /* 11e58a66 jmp 0x11e58cb8 */
  goto L_11e58cb8;
L_11e58a6b:;
  /* 11e58a6b mov edx, dword ptr [0x11e76c58] */
  EDX = (r32((uint32_t)(0x11e76c58)));
  /* 11e58a71 mov dword ptr [0x11e76c68], edx */
  w32((uint32_t)(0x11e76c68), (EDX));
  /* 11e58a77 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e58a7a push eax */
  push32((uint32_t)(EAX));
  /* 11e58a7b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e58a7e push ecx */
  push32((uint32_t)(ECX));
  /* 11e58a7f push 2 */
  push32((uint32_t)(0x2u));
  /* 11e58a81 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e58a84 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e58a86 push eax */
  push32((uint32_t)(EAX));
  /* 11e58a87 call 0x11e58dc0 */
  push32(0x11e58a8cu); f_11e58dc0();
  /* 11e58a8c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58a8f jmp 0x11e58cb8 */
  goto L_11e58cb8;
L_11e58a94:;
  /* 11e58a94 mov ecx, dword ptr [0x11e76c58] */
  ECX = (r32((uint32_t)(0x11e76c58)));
  /* 11e58a9a mov dword ptr [0x11e76c68], ecx */
  w32((uint32_t)(0x11e76c68), (ECX));
  /* 11e58aa0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e58aa3 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11e58aa6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e58aa9 jmp 0x11e58afd */
  goto L_11e58afd;
L_11e58aab:;
  /* 11e58aab mov ecx, dword ptr [0x11e76c58] */
  ECX = (r32((uint32_t)(0x11e76c58)));
  /* 11e58ab1 mov dword ptr [0x11e76c68], ecx */
  w32((uint32_t)(0x11e76c68), (ECX));
  /* 11e58ab7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e58aba push edx */
  push32((uint32_t)(EDX));
  /* 11e58abb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e58abe push eax */
  push32((uint32_t)(EAX));
  /* 11e58abf push 1 */
  push32((uint32_t)(0x1u));
  /* 11e58ac1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e58ac4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11e58ac7 push edx */
  push32((uint32_t)(EDX));
  /* 11e58ac8 call 0x11e58dc0 */
  push32(0x11e58acdu); f_11e58dc0();
  /* 11e58acd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58ad0 jmp 0x11e58cb8 */
  goto L_11e58cb8;
L_11e58ad5:;
  /* 11e58ad5 mov eax, dword ptr [0x11e76c58] */
  EAX = (r32((uint32_t)(0x11e76c58)));
  /* 11e58ada mov dword ptr [0x11e76c68], eax */
  w32((uint32_t)(0x11e76c68), (EAX));
  /* 11e58adf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e58ae2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e58ae6 jne 0x11e58af1 */
  if (!C.zf) goto L_11e58af1;
  /* 11e58ae8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 11e58aef jmp 0x11e58afd */
  goto L_11e58afd;
L_11e58af1:;
  /* 11e58af1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e58af4 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 11e58af7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e58afa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11e58afd:;
  /* 11e58afd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e58b00 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11e58b03 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e58b06 jge 0x11e58b11 */
  if ((C.sf==C.of)) goto L_11e58b11;
  /* 11e58b08 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e58b0f jmp 0x11e58b3e */
  goto L_11e58b3e;
L_11e58b11:;
  /* 11e58b11 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e58b14 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11e58b17 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e58b18 mov ecx, 7 */
  ECX = (0x7u);
  /* 11e58b1d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e58b1f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e58b22 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e58b25 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 11e58b28 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e58b29 mov ecx, 7 */
  ECX = (0x7u);
  /* 11e58b2e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e58b30 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e58b33 jl 0x11e58b3e */
  if ((C.sf!=C.of)) goto L_11e58b3e;
  /* 11e58b35 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e58b38 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58b3b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11e58b3e:;
  /* 11e58b3e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e58b41 push eax */
  push32((uint32_t)(EAX));
  /* 11e58b42 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e58b45 push ecx */
  push32((uint32_t)(ECX));
  /* 11e58b46 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e58b48 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e58b4b push edx */
  push32((uint32_t)(EDX));
  /* 11e58b4c call 0x11e58dc0 */
  push32(0x11e58b51u); f_11e58dc0();
  /* 11e58b51 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58b54 jmp 0x11e58cb8 */
  goto L_11e58cb8;
L_11e58b59:;
  /* 11e58b59 cmp dword ptr [0x11e76c58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76c58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e58b60 je 0x11e58b90 */
  if (C.zf) goto L_11e58b90;
  /* 11e58b62 mov dword ptr [0x11e76c58], 0 */
  w32((uint32_t)(0x11e76c58), (0x0u));
  /* 11e58b6c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e58b6f push eax */
  push32((uint32_t)(EAX));
  /* 11e58b70 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e58b73 push ecx */
  push32((uint32_t)(ECX));
  /* 11e58b74 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e58b77 push edx */
  push32((uint32_t)(EDX));
  /* 11e58b78 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e58b7b push eax */
  push32((uint32_t)(EAX));
  /* 11e58b7c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e58b7f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 11e58b85 push edx */
  push32((uint32_t)(EDX));
  /* 11e58b86 call 0x11e58f20 */
  push32(0x11e58b8bu); f_11e58f20();
  /* 11e58b8b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58b8e jmp 0x11e58bb2 */
  goto L_11e58bb2;
L_11e58b90:;
  /* 11e58b90 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e58b93 push eax */
  push32((uint32_t)(EAX));
  /* 11e58b94 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e58b97 push ecx */
  push32((uint32_t)(ECX));
  /* 11e58b98 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e58b9b push edx */
  push32((uint32_t)(EDX));
  /* 11e58b9c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e58b9f push eax */
  push32((uint32_t)(EAX));
  /* 11e58ba0 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e58ba3 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 11e58ba9 push edx */
  push32((uint32_t)(EDX));
  /* 11e58baa call 0x11e58f20 */
  push32(0x11e58bafu); f_11e58f20();
  /* 11e58baf add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e58bb2:;
  /* 11e58bb2 jmp 0x11e58cb8 */
  goto L_11e58cb8;
L_11e58bb7:;
  /* 11e58bb7 mov dword ptr [0x11e76c58], 0 */
  w32((uint32_t)(0x11e76c58), (0x0u));
  /* 11e58bc1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e58bc4 push eax */
  push32((uint32_t)(EAX));
  /* 11e58bc5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e58bc8 push ecx */
  push32((uint32_t)(ECX));
  /* 11e58bc9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e58bcc push edx */
  push32((uint32_t)(EDX));
  /* 11e58bcd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e58bd0 push eax */
  push32((uint32_t)(EAX));
  /* 11e58bd1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e58bd4 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 11e58bda push edx */
  push32((uint32_t)(EDX));
  /* 11e58bdb call 0x11e58f20 */
  push32(0x11e58be0u); f_11e58f20();
  /* 11e58be0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58be3 jmp 0x11e58cb8 */
  goto L_11e58cb8;
L_11e58be8:;
  /* 11e58be8 mov eax, dword ptr [0x11e76c58] */
  EAX = (r32((uint32_t)(0x11e76c58)));
  /* 11e58bed mov dword ptr [0x11e76c68], eax */
  w32((uint32_t)(0x11e76c68), (EAX));
  /* 11e58bf2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e58bf5 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11e58bf8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e58bf9 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11e58bfe idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e58c00 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e58c03 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e58c06 push edx */
  push32((uint32_t)(EDX));
  /* 11e58c07 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e58c0a push eax */
  push32((uint32_t)(EAX));
  /* 11e58c0b push 2 */
  push32((uint32_t)(0x2u));
  /* 11e58c0d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e58c10 push ecx */
  push32((uint32_t)(ECX));
  /* 11e58c11 call 0x11e58dc0 */
  push32(0x11e58c16u); f_11e58dc0();
  /* 11e58c16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58c19 jmp 0x11e58cb8 */
  goto L_11e58cb8;
L_11e58c1e:;
  /* 11e58c1e mov edx, dword ptr [0x11e76c58] */
  EDX = (r32((uint32_t)(0x11e76c58)));
  /* 11e58c24 mov dword ptr [0x11e76c68], edx */
  w32((uint32_t)(0x11e76c68), (EDX));
  /* 11e58c2a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e58c2d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 11e58c30 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e58c31 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 11e58c36 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e58c38 mov ecx, eax */
  ECX = (EAX);
  /* 11e58c3a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58c3d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e58c40 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e58c43 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11e58c46 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e58c47 mov esi, 0x64 */
  ESI = (0x64u);
  /* 11e58c4c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e58c4e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58c50 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e58c53 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e58c56 push eax */
  push32((uint32_t)(EAX));
  /* 11e58c57 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e58c5a push ecx */
  push32((uint32_t)(ECX));
  /* 11e58c5b push 4 */
  push32((uint32_t)(0x4u));
  /* 11e58c5d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e58c60 push edx */
  push32((uint32_t)(EDX));
  /* 11e58c61 call 0x11e58dc0 */
  push32(0x11e58c66u); f_11e58dc0();
  /* 11e58c66 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58c69 jmp 0x11e58cb8 */
  goto L_11e58cb8;
L_11e58c6b:;
  /* 11e58c6b call 0x11e4c970 */
  push32(0x11e58c70u); f_11e4c970();
  /* 11e58c70 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e58c73 push eax */
  push32((uint32_t)(EAX));
  /* 11e58c74 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e58c77 push ecx */
  push32((uint32_t)(ECX));
  /* 11e58c78 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e58c7b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e58c7d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e58c81 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 11e58c84 mov ecx, dword ptr [eax*4 + 0x11e74d14] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11e74d14)));
  /* 11e58c8b push ecx */
  push32((uint32_t)(ECX));
  /* 11e58c8c call 0x11e58d70 */
  push32(0x11e58c91u); f_11e58d70();
  /* 11e58c91 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58c94 jmp 0x11e58cb8 */
  goto L_11e58cb8;
L_11e58c96:;
  /* 11e58c96 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e58c99 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e58c9b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 11e58c9e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e58ca1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e58ca3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58ca6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e58ca9 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11e58cab mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e58cae mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e58cb0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e58cb3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e58cb6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11e58cb8:;
  /* 11e58cb8 pop esi */
  ESI = (pop32());
  /* 11e58cb9 mov esp, ebp */
  ESP = (EBP);
  /* 11e58cbb pop ebp */
  EBP = (pop32());
  /* 11e58cbc ret  */
  ESPCHK(0x11e58750u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x11e58d70 (72 bytes, 30 insns) */
void f_11e58d70(void) {
  FTRACE(0x11e58d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e58d70 push ebp */
  push32((uint32_t)(EBP));
  /* 11e58d71 mov ebp, esp */
  EBP = (ESP);
L_11e58d73:;
  /* 11e58d73 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e58d76 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e58d79 je 0x11e58db6 */
  if (C.zf) goto L_11e58db6;
  /* 11e58d7b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e58d7e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11e58d81 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e58d83 je 0x11e58db6 */
  if (C.zf) goto L_11e58db6;
  /* 11e58d85 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e58d88 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e58d8a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e58d8d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e58d8f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11e58d91 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e58d94 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e58d96 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58d99 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e58d9c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11e58d9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e58da1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58da4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11e58da7 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e58daa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e58dac sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e58daf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e58db2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11e58db4 jmp 0x11e58d73 */
  goto L_11e58d73;
L_11e58db6:;
  /* 11e58db6 pop ebp */
  EBP = (pop32());
  /* 11e58db7 ret  */
  ESPCHK(0x11e58d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10018dc0 @ 0x11e58dc0 (173 bytes, 64 insns) */
void f_11e58dc0(void) {
  FTRACE(0x11e58dc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e58dc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e58dc1 mov ebp, esp */
  EBP = (ESP);
  /* 11e58dc3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e58dc4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e58dcb cmp dword ptr [0x11e76c68], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76c68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e58dd2 je 0x11e58dea */
  if (C.zf) goto L_11e58dea;
  /* 11e58dd4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e58dd7 push eax */
  push32((uint32_t)(EAX));
  /* 11e58dd8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e58ddb push ecx */
  push32((uint32_t)(ECX));
  /* 11e58ddc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e58ddf push edx */
  push32((uint32_t)(EDX));
  /* 11e58de0 call 0x11e58e70 */
  push32(0x11e58de5u); f_11e58e70();
  /* 11e58de5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58de8 jmp 0x11e58e69 */
  goto L_11e58e69;
L_11e58dea:;
  /* 11e58dea mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e58ded mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e58df0 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e58df2 jae 0x11e58e60 */
  if (!C.cf) goto L_11e58e60;
  /* 11e58df4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e58df7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e58dfa mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11e58dfd jmp 0x11e58e08 */
  goto L_11e58e08;
L_11e58dff:;
  /* 11e58dff mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e58e02 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e58e05 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_11e58e08:;
  /* 11e58e08 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e58e0b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58e0e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e58e10 je 0x11e58e44 */
  if (C.zf) goto L_11e58e44;
  /* 11e58e12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e58e15 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e58e16 mov ecx, 0xa */
  ECX = (0xau);
  /* 11e58e1b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e58e1d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58e20 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e58e23 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e58e25 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e58e28 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 11e58e2b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e58e2e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e58e2f mov ecx, 0xa */
  ECX = (0xau);
  /* 11e58e34 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e58e36 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11e58e39 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e58e3c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58e3f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e58e42 jmp 0x11e58dff */
  goto L_11e58dff;
L_11e58e44:;
  /* 11e58e44 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e58e47 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e58e49 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58e4c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e58e4f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11e58e51 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e58e54 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e58e56 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e58e59 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e58e5c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11e58e5e jmp 0x11e58e69 */
  goto L_11e58e69;
L_11e58e60:;
  /* 11e58e60 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e58e63 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11e58e69:;
  /* 11e58e69 mov esp, ebp */
  ESP = (EBP);
  /* 11e58e6b pop ebp */
  EBP = (pop32());
  /* 11e58e6c ret  */
  ESPCHK(0x11e58dc0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x11e58e70 (172 bytes, 65 insns) */
void f_11e58e70(void) {
  FTRACE(0x11e58e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e58e70 push ebp */
  push32((uint32_t)(EBP));
  /* 11e58e71 mov ebp, esp */
  EBP = (ESP);
  /* 11e58e73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e58e76 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e58e79 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e58e7b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e58e7e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e58e81 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e58e84 jbe 0x11e58ecb */
  if ((C.cf||C.zf)) goto L_11e58ecb;
L_11e58e86:;
  /* 11e58e86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e58e89 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e58e8a mov ecx, 0xa */
  ECX = (0xau);
  /* 11e58e8f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e58e91 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58e94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e58e97 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11e58e99 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e58e9c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58e9f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e58ea2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e58ea5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e58ea7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e58eaa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e58ead mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11e58eaf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e58eb2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11e58eb3 mov ecx, 0xa */
  ECX = (0xau);
  /* 11e58eb8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11e58eba mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11e58ebd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e58ec1 jle 0x11e58ecb */
  if ((C.zf||C.sf!=C.of)) goto L_11e58ecb;
  /* 11e58ec3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e58ec6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e58ec9 ja 0x11e58e86 */
  if ((!C.cf&&!C.zf)) goto L_11e58e86;
L_11e58ecb:;
  /* 11e58ecb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e58ece mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e58ed0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e58ed3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e58ed6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e58ed9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11e58edb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e58ede sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e58ee1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11e58ee4:;
  /* 11e58ee4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e58ee7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e58ee9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 11e58eec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e58eef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e58ef2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e58ef4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11e58ef6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e58ef9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e58efc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e58eff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e58f02 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 11e58f05 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11e58f07 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e58f0a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58f0d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11e58f10 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e58f13 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e58f16 jb 0x11e58ee4 */
  if (C.cf) goto L_11e58ee4;
  /* 11e58f18 mov esp, ebp */
  ESP = (EBP);
  /* 11e58f1a pop ebp */
  EBP = (pop32());
  /* 11e58f1b ret  */
  ESPCHK(0x11e58e70u, _esp0);
  ESP += 4; return;
}

/* FUN_10018f20 @ 0x11e58f20 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_11e58f20(void) {
  FTRACE(0x11e58f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e58f20 push ebp */
  push32((uint32_t)(EBP));
  /* 11e58f21 mov ebp, esp */
  EBP = (ESP);
  /* 11e58f23 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11e58f26:;
  /* 11e58f26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e58f29 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e58f2c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e58f2e je 0x11e5939c */
  if (C.zf) goto L_11e5939c;
  /* 11e58f34 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e58f37 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e58f3a je 0x11e5939c */
  if (C.zf) goto L_11e5939c;
  /* 11e58f40 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 11e58f44 mov dword ptr [0x11e76c68], 0 */
  w32((uint32_t)(0x11e76c68), (0x0u));
  /* 11e58f4e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11e58f55 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e58f58 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e58f5b jmp 0x11e58f66 */
  goto L_11e58f66;
L_11e58f5d:;
  /* 11e58f5d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e58f60 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58f63 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11e58f66:;
  /* 11e58f66 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e58f69 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11e58f6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e58f6f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11e58f72 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e58f75 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e58f78 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11e58f7b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e58f7d jne 0x11e58f81 */
  if (!C.zf) goto L_11e58f81;
  /* 11e58f7f jmp 0x11e58f5d */
  goto L_11e58f5d;
L_11e58f81:;
  /* 11e58f81 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e58f84 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e58f87 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e58f8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e58f8d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e58f90 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11e58f93 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e58f96 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e58f99 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11e58f9c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e58fa0 ja 0x11e592f0 */
  if ((!C.cf&&!C.zf)) goto L_11e592f0;
  /* 11e58fa6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11e58fa9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e58fab mov al, byte ptr [ecx + 0x11e593cc] */
  AL = (r8((uint32_t)(ECX + 0x11e593cc)));
  /* 11e58fb1 jmp dword ptr [eax*4 + 0x11e593a0] */
  switch (EAX) {
    case 0: goto L_11e5920f;
    case 1: goto L_11e590f3;
    case 2: goto L_11e5907e;
    case 3: goto L_11e58fb8;
    case 4: goto L_11e58ff6;
    case 5: goto L_11e59057;
    case 6: goto L_11e590a5;
    case 7: goto L_11e590cc;
    case 8: goto L_11e5913a;
    case 9: goto L_11e59034;
    case 10: goto L_11e592f0;
    default: x86_unimpl("switch@0x11e58fb1 out of table"); return;
  }
L_11e58fb8:;
  /* 11e58fb8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e58fbb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11e58fbe mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e58fc1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e58fc4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11e58fc7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e58fcb ja 0x11e58ff1 */
  if ((!C.cf&&!C.zf)) goto L_11e58ff1;
  /* 11e58fcd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11e58fd0 jmp dword ptr [ecx*4 + 0x11e5941f] */
  switch (ECX) {
    case 0: goto L_11e58fd7;
    case 1: goto L_11e58fe1;
    case 2: goto L_11e58fe7;
    case 3: goto L_11e58fed;
    case 4: goto L_11e59015;
    case 5: goto L_11e5901f;
    case 6: goto L_11e59025;
    case 7: goto L_11e5902b;
    default: x86_unimpl("switch@0x11e58fd0 out of table"); return;
  }
L_11e58fd7:;
  /* 11e58fd7 mov dword ptr [0x11e76c68], 1 */
  w32((uint32_t)(0x11e76c68), (0x1u));
L_11e58fe1:;
  /* 11e58fe1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 11e58fe5 jmp 0x11e58ff1 */
  goto L_11e58ff1;
L_11e58fe7:;
  /* 11e58fe7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 11e58feb jmp 0x11e58ff1 */
  goto L_11e58ff1;
L_11e58fed:;
  /* 11e58fed mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_11e58ff1:;
  /* 11e58ff1 jmp 0x11e592f0 */
  goto L_11e592f0;
L_11e58ff6:;
  /* 11e58ff6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e58ff9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11e58ffc mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e58fff sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e59002 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11e59005 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e59009 ja 0x11e5902f */
  if ((!C.cf&&!C.zf)) goto L_11e5902f;
  /* 11e5900b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e5900e jmp dword ptr [ecx*4 + 0x11e5942f] */
  switch (ECX) {
    case 0: goto L_11e59015;
    case 1: goto L_11e5901f;
    case 2: goto L_11e59025;
    case 3: goto L_11e5902b;
    default: x86_unimpl("switch@0x11e5900e out of table"); return;
  }
L_11e59015:;
  /* 11e59015 mov dword ptr [0x11e76c68], 1 */
  w32((uint32_t)(0x11e76c68), (0x1u));
L_11e5901f:;
  /* 11e5901f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 11e59023 jmp 0x11e5902f */
  goto L_11e5902f;
L_11e59025:;
  /* 11e59025 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 11e59029 jmp 0x11e5902f */
  goto L_11e5902f;
L_11e5902b:;
  /* 11e5902b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_11e5902f:;
  /* 11e5902f jmp 0x11e592f0 */
  goto L_11e592f0;
L_11e59034:;
  /* 11e59034 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e59037 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11e5903a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5903e je 0x11e59048 */
  if (C.zf) goto L_11e59048;
  /* 11e59040 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e59044 je 0x11e5904e */
  if (C.zf) goto L_11e5904e;
  /* 11e59046 jmp 0x11e59052 */
  goto L_11e59052;
L_11e59048:;
  /* 11e59048 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 11e5904c jmp 0x11e59052 */
  goto L_11e59052;
L_11e5904e:;
  /* 11e5904e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_11e59052:;
  /* 11e59052 jmp 0x11e592f0 */
  goto L_11e592f0;
L_11e59057:;
  /* 11e59057 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e5905a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11e5905d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e59061 je 0x11e5906b */
  if (C.zf) goto L_11e5906b;
  /* 11e59063 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e59067 je 0x11e59075 */
  if (C.zf) goto L_11e59075;
  /* 11e59069 jmp 0x11e59079 */
  goto L_11e59079;
L_11e5906b:;
  /* 11e5906b mov dword ptr [0x11e76c68], 1 */
  w32((uint32_t)(0x11e76c68), (0x1u));
L_11e59075:;
  /* 11e59075 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_11e59079:;
  /* 11e59079 jmp 0x11e592f0 */
  goto L_11e592f0;
L_11e5907e:;
  /* 11e5907e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e59081 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11e59084 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e59088 je 0x11e59092 */
  if (C.zf) goto L_11e59092;
  /* 11e5908a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5908e je 0x11e5909c */
  if (C.zf) goto L_11e5909c;
  /* 11e59090 jmp 0x11e590a0 */
  goto L_11e590a0;
L_11e59092:;
  /* 11e59092 mov dword ptr [0x11e76c68], 1 */
  w32((uint32_t)(0x11e76c68), (0x1u));
L_11e5909c:;
  /* 11e5909c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_11e590a0:;
  /* 11e590a0 jmp 0x11e592f0 */
  goto L_11e592f0;
L_11e590a5:;
  /* 11e590a5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e590a8 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 11e590ab cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e590af je 0x11e590b9 */
  if (C.zf) goto L_11e590b9;
  /* 11e590b1 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e590b5 je 0x11e590c3 */
  if (C.zf) goto L_11e590c3;
  /* 11e590b7 jmp 0x11e590c7 */
  goto L_11e590c7;
L_11e590b9:;
  /* 11e590b9 mov dword ptr [0x11e76c68], 1 */
  w32((uint32_t)(0x11e76c68), (0x1u));
L_11e590c3:;
  /* 11e590c3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_11e590c7:;
  /* 11e590c7 jmp 0x11e592f0 */
  goto L_11e592f0;
L_11e590cc:;
  /* 11e590cc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e590cf mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11e590d2 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e590d6 je 0x11e590e0 */
  if (C.zf) goto L_11e590e0;
  /* 11e590d8 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e590dc je 0x11e590ea */
  if (C.zf) goto L_11e590ea;
  /* 11e590de jmp 0x11e590ee */
  goto L_11e590ee;
L_11e590e0:;
  /* 11e590e0 mov dword ptr [0x11e76c68], 1 */
  w32((uint32_t)(0x11e76c68), (0x1u));
L_11e590ea:;
  /* 11e590ea mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_11e590ee:;
  /* 11e590ee jmp 0x11e592f0 */
  goto L_11e592f0;
L_11e590f3:;
  /* 11e590f3 push 0x11e728fc */
  push32((uint32_t)(0x11e728fcu));
  /* 11e590f8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e590fb push ecx */
  push32((uint32_t)(ECX));
  /* 11e590fc call 0x11e59950 */
  push32(0x11e59101u); f_11e59950();
  /* 11e59101 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e59104 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e59106 jne 0x11e59113 */
  if (!C.zf) goto L_11e59113;
  /* 11e59108 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5910b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5910e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11e59111 jmp 0x11e59131 */
  goto L_11e59131;
L_11e59113:;
  /* 11e59113 push 0x11e728f8 */
  push32((uint32_t)(0x11e728f8u));
  /* 11e59118 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5911b push eax */
  push32((uint32_t)(EAX));
  /* 11e5911c call 0x11e59950 */
  push32(0x11e59121u); f_11e59950();
  /* 11e59121 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e59124 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e59126 jne 0x11e59131 */
  if (!C.zf) goto L_11e59131;
  /* 11e59128 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5912b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5912e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11e59131:;
  /* 11e59131 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 11e59135 jmp 0x11e592f0 */
  goto L_11e592f0;
L_11e5913a:;
  /* 11e5913a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e5913d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e59141 jg 0x11e59151 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e59151;
  /* 11e59143 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e59146 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 11e5914c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11e5914f jmp 0x11e5915d */
  goto L_11e5915d;
L_11e59151:;
  /* 11e59151 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e59154 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 11e5915a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11e5915d:;
  /* 11e5915d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e59161 jle 0x11e59204 */
  if ((C.zf||C.sf!=C.of)) goto L_11e59204;
  /* 11e59167 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e5916a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5916d jbe 0x11e59204 */
  if ((C.cf||C.zf)) goto L_11e59204;
  /* 11e59173 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e59176 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e59178 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e5917a mov ecx, dword ptr [0x11e74db8] */
  ECX = (r32((uint32_t)(0x11e74db8)));
  /* 11e59180 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e59182 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11e59186 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11e5918c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e5918e je 0x11e591c7 */
  if (C.zf) goto L_11e591c7;
  /* 11e59190 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e59193 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e59196 jbe 0x11e591c7 */
  if ((C.cf||C.zf)) goto L_11e591c7;
  /* 11e59198 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e5919b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e5919d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e591a0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11e591a2 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11e591a4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e591a7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e591a9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e591ac mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e591af mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11e591b1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e591b4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e591b7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11e591ba mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e591bd mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e591bf sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e591c2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e591c5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11e591c7:;
  /* 11e591c7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e591ca mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e591cc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e591cf mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e591d1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11e591d3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e591d6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e591d8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e591db mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e591de mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11e591e0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e591e3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e591e6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11e591e9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e591ec mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e591ee sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e591f1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e591f4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11e591f6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e591f9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e591fc mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11e591ff jmp 0x11e5915d */
  goto L_11e5915d;
L_11e59204:;
  /* 11e59204 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e59207 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11e5920a jmp 0x11e58f26 */
  goto L_11e58f26;
L_11e5920f:;
  /* 11e5920f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e59212 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11e59215 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e59217 je 0x11e592e2 */
  if (C.zf) goto L_11e592e2;
  /* 11e5921d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e59220 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e59223 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_11e59226:;
  /* 11e59226 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e59229 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e5922c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e5922e je 0x11e592e0 */
  if (C.zf) goto L_11e592e0;
  /* 11e59234 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e59237 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5923a je 0x11e592e0 */
  if (C.zf) goto L_11e592e0;
  /* 11e59240 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e59243 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e59246 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e59249 jne 0x11e59259 */
  if (!C.zf) goto L_11e59259;
  /* 11e5924b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5924e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e59251 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11e59254 jmp 0x11e592e0 */
  goto L_11e592e0;
L_11e59259:;
  /* 11e59259 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5925c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e5925e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11e59260 mov edx, dword ptr [0x11e74db8] */
  EDX = (r32((uint32_t)(0x11e74db8)));
  /* 11e59266 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e59268 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11e5926c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11e59271 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e59273 je 0x11e592ac */
  if (C.zf) goto L_11e592ac;
  /* 11e59275 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e59278 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5927b jbe 0x11e592ac */
  if ((C.cf||C.zf)) goto L_11e592ac;
  /* 11e5927d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e59280 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e59282 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e59285 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11e59287 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11e59289 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e5928c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e5928e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e59291 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e59294 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11e59296 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e59299 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5929c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11e5929f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e592a2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e592a4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e592a7 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e592aa mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11e592ac:;
  /* 11e592ac mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e592af mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e592b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e592b4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11e592b6 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11e592b8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e592bb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e592bd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e592c0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e592c3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11e592c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e592c8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e592cb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11e592ce mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e592d1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e592d3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e592d6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e592d9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11e592db jmp 0x11e59226 */
  goto L_11e59226;
L_11e592e0:;
  /* 11e592e0 jmp 0x11e592eb */
  goto L_11e592eb;
L_11e592e2:;
  /* 11e592e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e592e5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e592e8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11e592eb:;
  /* 11e592eb jmp 0x11e58f26 */
  goto L_11e58f26;
L_11e592f0:;
  /* 11e592f0 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11e592f4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e592f6 je 0x11e5931c */
  if (C.zf) goto L_11e5931c;
  /* 11e592f8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e592fb push edx */
  push32((uint32_t)(EDX));
  /* 11e592fc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e592ff push eax */
  push32((uint32_t)(EAX));
  /* 11e59300 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e59303 push ecx */
  push32((uint32_t)(ECX));
  /* 11e59304 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e59307 push edx */
  push32((uint32_t)(EDX));
  /* 11e59308 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 11e5930b push eax */
  push32((uint32_t)(EAX));
  /* 11e5930c call 0x11e58750 */
  push32(0x11e59311u); f_11e58750();
  /* 11e59311 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e59314 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e59317 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11e5931a jmp 0x11e59397 */
  goto L_11e59397;
L_11e5931c:;
  /* 11e5931c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5931f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e59321 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e59323 mov ecx, dword ptr [0x11e74db8] */
  ECX = (r32((uint32_t)(0x11e74db8)));
  /* 11e59329 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e5932b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11e5932f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11e59335 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11e59337 je 0x11e59368 */
  if (C.zf) goto L_11e59368;
  /* 11e59339 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e5933c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e5933e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e59341 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11e59343 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11e59345 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e59348 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e5934a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5934d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e59350 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11e59352 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e59355 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e59358 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11e5935b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e5935e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e59360 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e59363 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e59366 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11e59368:;
  /* 11e59368 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e5936b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11e5936d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e59370 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11e59372 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11e59374 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e59377 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e59379 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5937c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e5937f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11e59381 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e59384 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e59387 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11e5938a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e5938d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11e5938f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e59392 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e59395 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11e59397:;
  /* 11e59397 jmp 0x11e58f26 */
  goto L_11e58f26;
L_11e5939c:;
  /* 11e5939c mov esp, ebp */
  ESP = (EBP);
  /* 11e5939e pop ebp */
  EBP = (pop32());
  /* 11e5939f ret  */
  ESPCHK(0x11e58f20u, _esp0);
  ESP += 4; return;
}

/* FUN_10019440 @ 0x11e59440 (650 bytes, 178 insns) */
void f_11e59440(void) {
  FTRACE(0x11e59440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e59440 push ebp */
  push32((uint32_t)(EBP));
  /* 11e59441 mov ebp, esp */
  EBP = (ESP);
  /* 11e59443 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e59449 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5944d jne 0x11e595a9 */
  if (!C.zf) goto L_11e595a9;
  /* 11e59453 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e59456 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 11e5945c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 11e59462 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11e59465 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e5946c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 11e59476 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e59478 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11e5947e push edx */
  push32((uint32_t)(EDX));
  /* 11e5947f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e59482 push eax */
  push32((uint32_t)(EAX));
  /* 11e59483 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e59486 push ecx */
  push32((uint32_t)(ECX));
  /* 11e59487 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e5948a push edx */
  push32((uint32_t)(EDX));
  /* 11e5948b call 0x11e59cd0 */
  push32(0x11e59490u); f_11e59cd0();
  /* 11e59490 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e59493 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e59496 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5949a jne 0x11e5952f */
  if (!C.zf) goto L_11e5952f;
  /* 11e594a0 call dword ptr [0x11e793ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e793ac))), 0x11e594a6u);
  /* 11e594a6 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e594a9 je 0x11e594b0 */
  if (C.zf) goto L_11e594b0;
  /* 11e594ab jmp 0x11e5958d */
  goto L_11e5958d;
L_11e594b0:;
  /* 11e594b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e594b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e594b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e594b6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e594b9 push eax */
  push32((uint32_t)(EAX));
  /* 11e594ba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e594bd push ecx */
  push32((uint32_t)(ECX));
  /* 11e594be call 0x11e59cd0 */
  push32(0x11e594c3u); f_11e59cd0();
  /* 11e594c3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e594c6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 11e594cc cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e594d3 jne 0x11e594da */
  if (!C.zf) goto L_11e594da;
  /* 11e594d5 jmp 0x11e5958d */
  goto L_11e5958d;
L_11e594da:;
  /* 11e594da push 0x58 */
  push32((uint32_t)(0x58u));
  /* 11e594dc push 0x11e72904 */
  push32((uint32_t)(0x11e72904u));
  /* 11e594e1 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e594e3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11e594e9 push edx */
  push32((uint32_t)(EDX));
  /* 11e594ea call 0x11e49a50 */
  push32(0x11e594efu); f_11e49a50();
  /* 11e594ef add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e594f2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11e594f5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e594f9 jne 0x11e59500 */
  if (!C.zf) goto L_11e59500;
  /* 11e594fb jmp 0x11e5958d */
  goto L_11e5958d;
L_11e59500:;
  /* 11e59500 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11e59507 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e59509 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 11e5950f push eax */
  push32((uint32_t)(EAX));
  /* 11e59510 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e59513 push ecx */
  push32((uint32_t)(ECX));
  /* 11e59514 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e59517 push edx */
  push32((uint32_t)(EDX));
  /* 11e59518 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e5951b push eax */
  push32((uint32_t)(EAX));
  /* 11e5951c call 0x11e59cd0 */
  push32(0x11e59521u); f_11e59cd0();
  /* 11e59521 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e59524 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11e59527 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5952b jne 0x11e5952f */
  if (!C.zf) goto L_11e5952f;
  /* 11e5952d jmp 0x11e5958d */
  goto L_11e5958d;
L_11e5952f:;
  /* 11e5952f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 11e59531 push 0x11e72904 */
  push32((uint32_t)(0x11e72904u));
  /* 11e59536 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e59538 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e5953b push ecx */
  push32((uint32_t)(ECX));
  /* 11e5953c call 0x11e49a50 */
  push32(0x11e59541u); f_11e49a50();
  /* 11e59541 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e59544 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 11e5954a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11e5954c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11e59552 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e59555 jne 0x11e59559 */
  if (!C.zf) goto L_11e59559;
  /* 11e59557 jmp 0x11e5958d */
  goto L_11e5958d;
L_11e59559:;
  /* 11e59559 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11e5955c push ecx */
  push32((uint32_t)(ECX));
  /* 11e5955d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e59560 push edx */
  push32((uint32_t)(EDX));
  /* 11e59561 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 11e59567 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11e59569 push ecx */
  push32((uint32_t)(ECX));
  /* 11e5956a call 0x11e4df90 */
  push32(0x11e5956fu); f_11e4df90();
  /* 11e5956f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e59572 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e59576 je 0x11e59586 */
  if (C.zf) goto L_11e59586;
  /* 11e59578 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e5957a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e5957d push edx */
  push32((uint32_t)(EDX));
  /* 11e5957e call 0x11e4a4e0 */
  push32(0x11e59583u); f_11e4a4e0();
  /* 11e59583 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e59586:;
  /* 11e59586 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e59588 jmp 0x11e596c6 */
  goto L_11e596c6;
L_11e5958d:;
  /* 11e5958d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e59591 je 0x11e595a1 */
  if (C.zf) goto L_11e595a1;
  /* 11e59593 push 2 */
  push32((uint32_t)(0x2u));
  /* 11e59595 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e59598 push eax */
  push32((uint32_t)(EAX));
  /* 11e59599 call 0x11e4a4e0 */
  push32(0x11e5959eu); f_11e4a4e0();
  /* 11e5959e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e595a1:;
  /* 11e595a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e595a4 jmp 0x11e596c6 */
  goto L_11e596c6;
L_11e595a9:;
  /* 11e595a9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e595ad jne 0x11e596c3 */
  if (!C.zf) goto L_11e596c3;
  /* 11e595b3 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 11e595bd mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e595c0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11e595c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e595c8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11e595ce push edx */
  push32((uint32_t)(EDX));
  /* 11e595cf push 0x11e76c40 */
  push32((uint32_t)(0x11e76c40u));
  /* 11e595d4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e595d7 push eax */
  push32((uint32_t)(EAX));
  /* 11e595d8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e595db push ecx */
  push32((uint32_t)(ECX));
  /* 11e595dc call 0x11e59b30 */
  push32(0x11e595e1u); f_11e59b30();
  /* 11e595e1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e595e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e595e6 jne 0x11e595f0 */
  if (!C.zf) goto L_11e595f0;
  /* 11e595e8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e595eb jmp 0x11e596c6 */
  goto L_11e596c6;
L_11e595f0:;
  /* 11e595f0 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11e595f6 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11e595f9 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 11e59603 jmp 0x11e59614 */
  goto L_11e59614;
L_11e59605:;
  /* 11e59605 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11e5960b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5960e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_11e59614:;
  /* 11e59614 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5961b jge 0x11e596bf */
  if ((C.sf==C.of)) goto L_11e596bf;
  /* 11e59621 cmp dword ptr [0x11e74fc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e74fc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e59628 jle 0x11e5965b */
  if ((C.zf||C.sf!=C.of)) goto L_11e5965b;
  /* 11e5962a push 4 */
  push32((uint32_t)(0x4u));
  /* 11e5962c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11e59632 mov dl, byte ptr [ecx*2 + 0x11e76c40] */
  DL = (r8((uint32_t)(ECX*2 + 0x11e76c40)));
  /* 11e59639 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 11e5963f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11e59645 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e5964a push eax */
  push32((uint32_t)(EAX));
  /* 11e5964b call 0x11e503a0 */
  push32(0x11e59650u); f_11e503a0();
  /* 11e59650 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e59653 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 11e59659 jmp 0x11e5968e */
  goto L_11e5968e;
L_11e5965b:;
  /* 11e5965b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11e59661 mov dl, byte ptr [ecx*2 + 0x11e76c40] */
  DL = (r8((uint32_t)(ECX*2 + 0x11e76c40)));
  /* 11e59668 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 11e5966e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 11e59674 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e59679 mov ecx, dword ptr [0x11e74db8] */
  ECX = (r32((uint32_t)(0x11e74db8)));
  /* 11e5967f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e59681 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11e59685 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11e59688 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_11e5968e:;
  /* 11e5968e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e59695 je 0x11e596b8 */
  if (C.zf) goto L_11e596b8;
  /* 11e59697 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11e5969d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11e596a0 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11e596a3 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 11e596aa lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11e596ae mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11e596b4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11e596b6 jmp 0x11e596ba */
  goto L_11e596ba;
L_11e596b8:;
  /* 11e596b8 jmp 0x11e596bf */
  goto L_11e596bf;
L_11e596ba:;
  /* 11e596ba jmp 0x11e59605 */
  goto L_11e59605;
L_11e596bf:;
  /* 11e596bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e596c1 jmp 0x11e596c6 */
  goto L_11e596c6;
L_11e596c3:;
  /* 11e596c3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11e596c6:;
  /* 11e596c6 mov esp, ebp */
  ESP = (EBP);
  /* 11e596c8 pop ebp */
  EBP = (pop32());
  /* 11e596c9 ret  */
  ESPCHK(0x11e59440u, _esp0);
  ESP += 4; return;
}

/* FUN_100196d0 @ 0x11e596d0 (10 bytes, 5 insns) */
void f_11e596d0(void) {
  FTRACE(0x11e596d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e596d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e596d1 mov ebp, esp */
  EBP = (ESP);
  /* 11e596d3 mov eax, dword ptr [0x11e75eb0] */
  EAX = (r32((uint32_t)(0x11e75eb0)));
  /* 11e596d8 pop ebp */
  EBP = (pop32());
  /* 11e596d9 ret  */
  ESPCHK(0x11e596d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100196e0 @ 0x11e596e0 (575 bytes, 196 insns) */
void f_11e596e0(void) {
  FTRACE(0x11e596e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e596e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e596e1 mov ebp, esp */
  EBP = (ESP);
  /* 11e596e3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11e596e5 push 0x11e72910 */
  push32((uint32_t)(0x11e72910u));
  /* 11e596ea push 0x11e539b8 */
  push32((uint32_t)(0x11e539b8u));
  /* 11e596ef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11e596f5 push eax */
  push32((uint32_t)(EAX));
  /* 11e596f6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11e596fd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e59700 push ebx */
  push32((uint32_t)(EBX));
  /* 11e59701 push esi */
  push32((uint32_t)(ESI));
  /* 11e59702 push edi */
  push32((uint32_t)(EDI));
  /* 11e59703 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11e59706 cmp dword ptr [0x11e76c4c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76c4c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5970d jne 0x11e5975e */
  if (!C.zf) goto L_11e5975e;
  /* 11e5970f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11e59712 push eax */
  push32((uint32_t)(EAX));
  /* 11e59713 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e59715 push 0x11e71fc8 */
  push32((uint32_t)(0x11e71fc8u));
  /* 11e5971a push 1 */
  push32((uint32_t)(0x1u));
  /* 11e5971c call dword ptr [0x11e79318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e79318))), 0x11e59722u);
  /* 11e59722 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e59724 je 0x11e59732 */
  if (C.zf) goto L_11e59732;
  /* 11e59726 mov dword ptr [0x11e76c4c], 1 */
  w32((uint32_t)(0x11e76c4c), (0x1u));
  /* 11e59730 jmp 0x11e5975e */
  goto L_11e5975e;
L_11e59732:;
  /* 11e59732 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 11e59735 push ecx */
  push32((uint32_t)(ECX));
  /* 11e59736 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e59738 push 0x11e71fc4 */
  push32((uint32_t)(0x11e71fc4u));
  /* 11e5973d push 1 */
  push32((uint32_t)(0x1u));
  /* 11e5973f push 0 */
  push32((uint32_t)(0x0u));
  /* 11e59741 call dword ptr [0x11e7931c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e7931c))), 0x11e59747u);
  /* 11e59747 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e59749 je 0x11e59757 */
  if (C.zf) goto L_11e59757;
  /* 11e5974b mov dword ptr [0x11e76c4c], 2 */
  w32((uint32_t)(0x11e76c4c), (0x2u));
  /* 11e59755 jmp 0x11e5975e */
  goto L_11e5975e;
L_11e59757:;
  /* 11e59757 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e59759 jmp 0x11e59939 */
  goto L_11e59939;
L_11e5975e:;
  /* 11e5975e cmp dword ptr [0x11e76c4c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e76c4c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e59765 jne 0x11e59782 */
  if (!C.zf) goto L_11e59782;
  /* 11e59767 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e5976a push edx */
  push32((uint32_t)(EDX));
  /* 11e5976b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e5976e push eax */
  push32((uint32_t)(EAX));
  /* 11e5976f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e59772 push ecx */
  push32((uint32_t)(ECX));
  /* 11e59773 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e59776 push edx */
  push32((uint32_t)(EDX));
  /* 11e59777 call dword ptr [0x11e79318] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e79318))), 0x11e5977du);
  /* 11e5977d jmp 0x11e59939 */
  goto L_11e59939;
L_11e59782:;
  /* 11e59782 cmp dword ptr [0x11e76c4c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11e76c4c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e59789 jne 0x11e59937 */
  if (!C.zf) goto L_11e59937;
  /* 11e5978f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e59793 jne 0x11e5979d */
  if (!C.zf) goto L_11e5979d;
  /* 11e59795 mov eax, dword ptr [0x11e76bb8] */
  EAX = (r32((uint32_t)(0x11e76bb8)));
  /* 11e5979a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_11e5979d:;
  /* 11e5979d push 0 */
  push32((uint32_t)(0x0u));
  /* 11e5979f push 0 */
  push32((uint32_t)(0x0u));
  /* 11e597a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e597a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e597a5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e597a8 push ecx */
  push32((uint32_t)(ECX));
  /* 11e597a9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e597ac push edx */
  push32((uint32_t)(EDX));
  /* 11e597ad push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11e597b2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e597b5 push eax */
  push32((uint32_t)(EAX));
  /* 11e597b6 call dword ptr [0x11e7936c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e7936c))), 0x11e597bcu);
  /* 11e597bc mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11e597bf cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e597c3 jne 0x11e597cc */
  if (!C.zf) goto L_11e597cc;
  /* 11e597c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e597c7 jmp 0x11e59939 */
  goto L_11e59939;
L_11e597cc:;
  /* 11e597cc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e597d3 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e597d6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e597d9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11e597db call 0x11e4d910 */
  push32(0x11e597e0u); f_11e4d910();
  /* 11e597e0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11e597e3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11e597e6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11e597e9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11e597ec mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e597ef push edx */
  push32((uint32_t)(EDX));
  /* 11e597f0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e597f2 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e597f5 push eax */
  push32((uint32_t)(EAX));
  /* 11e597f6 call 0x11e4e100 */
  push32(0x11e597fbu); f_11e4e100();
  /* 11e597fb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e597fe mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11e59805 jmp 0x11e5981e */
  goto L_11e5981e;
  /* 11e59807 mov eax, 1 */
  EAX = (0x1u);
  /* 11e5980c ret  */
  ESPCHK(0x11e596e0u, _esp0);
  ESP += 4; return;
  /* 11e5980d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11e59810 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 11e59817 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11e5981e:;
  /* 11e5981e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e59822 jne 0x11e5982b */
  if (!C.zf) goto L_11e5982b;
  /* 11e59824 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e59826 jmp 0x11e59939 */
  goto L_11e59939;
L_11e5982b:;
  /* 11e5982b push 0 */
  push32((uint32_t)(0x0u));
  /* 11e5982d push 0 */
  push32((uint32_t)(0x0u));
  /* 11e5982f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e59832 push ecx */
  push32((uint32_t)(ECX));
  /* 11e59833 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e59836 push edx */
  push32((uint32_t)(EDX));
  /* 11e59837 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e5983a push eax */
  push32((uint32_t)(EAX));
  /* 11e5983b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e5983e push ecx */
  push32((uint32_t)(ECX));
  /* 11e5983f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11e59844 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e59847 push edx */
  push32((uint32_t)(EDX));
  /* 11e59848 call dword ptr [0x11e7936c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e7936c))), 0x11e5984eu);
  /* 11e5984e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e59850 jne 0x11e59859 */
  if (!C.zf) goto L_11e59859;
  /* 11e59852 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e59854 jmp 0x11e59939 */
  goto L_11e59939;
L_11e59859:;
  /* 11e59859 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11e59860 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e59863 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 11e59867 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5986a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11e5986c call 0x11e4d910 */
  push32(0x11e59871u); f_11e4d910();
  /* 11e59871 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 11e59874 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11e59877 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11e5987a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11e5987d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11e59884 jmp 0x11e5989d */
  goto L_11e5989d;
  /* 11e59886 mov eax, 1 */
  EAX = (0x1u);
  /* 11e5988b ret  */
  ESPCHK(0x11e596e0u, _esp0);
  ESP += 4; return;
  /* 11e5988c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11e5988f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11e59896 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11e5989d:;
  /* 11e5989d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e598a1 jne 0x11e598aa */
  if (!C.zf) goto L_11e598aa;
  /* 11e598a3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e598a5 jmp 0x11e59939 */
  goto L_11e59939;
L_11e598aa:;
  /* 11e598aa cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e598ae jne 0x11e598b9 */
  if (!C.zf) goto L_11e598b9;
  /* 11e598b0 mov edx, dword ptr [0x11e76ba8] */
  EDX = (r32((uint32_t)(0x11e76ba8)));
  /* 11e598b6 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_11e598b9:;
  /* 11e598b9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e598bc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e598bf mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 11e598c5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e598c8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e598cb mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 11e598d2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e598d5 push ecx */
  push32((uint32_t)(ECX));
  /* 11e598d6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e598d9 push edx */
  push32((uint32_t)(EDX));
  /* 11e598da mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11e598dd push eax */
  push32((uint32_t)(EAX));
  /* 11e598de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e598e1 push ecx */
  push32((uint32_t)(ECX));
  /* 11e598e2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11e598e5 push edx */
  push32((uint32_t)(EDX));
  /* 11e598e6 call dword ptr [0x11e7931c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e7931c))), 0x11e598ecu);
  /* 11e598ec mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11e598ef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e598f2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e598f5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e598f7 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 11e598fc cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e59902 je 0x11e59918 */
  if (C.zf) goto L_11e59918;
  /* 11e59904 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e59907 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e5990a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11e5990c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11e59910 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e59916 je 0x11e5991c */
  if (C.zf) goto L_11e5991c;
L_11e59918:;
  /* 11e59918 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e5991a jmp 0x11e59939 */
  goto L_11e59939;
L_11e5991c:;
  /* 11e5991c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e5991f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11e59921 push eax */
  push32((uint32_t)(EAX));
  /* 11e59922 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e59925 push ecx */
  push32((uint32_t)(ECX));
  /* 11e59926 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e59929 push edx */
  push32((uint32_t)(EDX));
  /* 11e5992a call 0x11e52660 */
  push32(0x11e5992fu); f_11e52660();
  /* 11e5992f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e59932 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e59935 jmp 0x11e59939 */
  goto L_11e59939;
L_11e59937:;
  /* 11e59937 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e59939:;
  /* 11e59939 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 11e5993c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e5993f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11e59946 pop edi */
  EDI = (pop32());
  /* 11e59947 pop esi */
  ESI = (pop32());
  /* 11e59948 pop ebx */
  EBX = (pop32());
  /* 11e59949 mov esp, ebp */
  ESP = (EBP);
  /* 11e5994b pop ebp */
  EBP = (pop32());
  /* 11e5994c ret  */
  ESPCHK(0x11e596e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019950 @ 0x11e59950 (208 bytes, 85 insns) */
void f_11e59950(void) {
  FTRACE(0x11e59950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e59950 push ebp */
  push32((uint32_t)(EBP));
  /* 11e59951 mov ebp, esp */
  EBP = (ESP);
  /* 11e59953 push edi */
  push32((uint32_t)(EDI));
  /* 11e59954 push esi */
  push32((uint32_t)(ESI));
  /* 11e59955 push ebx */
  push32((uint32_t)(EBX));
  /* 11e59956 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11e59959 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5995c lea eax, [0x11e76ba0] */
  EAX = ((uint32_t)(0x11e76ba0));
  /* 11e59962 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e59966 jne 0x11e599a3 */
  if (!C.zf) goto L_11e599a3;
  /* 11e59968 mov al, 0xff */
  AL = (0xffu);
  /* 11e5996a mov edi, edi */
  EDI = (EDI);
L_11e5996c:;
  /* 11e5996c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11e5996e je 0x11e5999e */
  if (C.zf) goto L_11e5999e;
  /* 11e59970 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e59972 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e59973 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 11e59975 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11e59976 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e59978 je 0x11e5996c */
  if (C.zf) goto L_11e5996c;
  /* 11e5997a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e5997c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e5997e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e59980 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11e59983 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11e59985 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11e59987 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 11e59989 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e5998b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e5998d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e5998f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11e59992 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11e59994 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11e59996 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e59998 je 0x11e5996c */
  if (C.zf) goto L_11e5996c;
  /* 11e5999a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11e5999c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_11e5999e:;
  /* 11e5999e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11e599a1 jmp 0x11e59a1b */
  goto L_11e59a1b;
L_11e599a3:;
  /* 11e599a3 lock inc dword ptr [0x11e76c7c] */
  x86_unimpl("lock inc @ 0x11e599a3");
  /* 11e599aa cmp dword ptr [0x11e76c6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76c6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e599b1 jg 0x11e599b7 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e599b7;
  /* 11e599b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e599b5 jmp 0x11e599cc */
  goto L_11e599cc;
L_11e599b7:;
  /* 11e599b7 lock dec dword ptr [0x11e76c7c] */
  x86_unimpl("lock dec @ 0x11e599b7");
  /* 11e599be push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11e599c0 call 0x11e4c670 */
  push32(0x11e599c5u); f_11e4c670();
  /* 11e599c5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_11e599cc:;
  /* 11e599cc mov eax, 0xff */
  EAX = (0xffu);
  /* 11e599d1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11e599d3 nop  */
  /* nop */
L_11e599d4:;
  /* 11e599d4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11e599d6 je 0x11e599ff */
  if (C.zf) goto L_11e599ff;
  /* 11e599d8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e599da inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e599db mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11e599dd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11e599de cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e599e0 je 0x11e599d4 */
  if (C.zf) goto L_11e599d4;
  /* 11e599e2 push eax */
  push32((uint32_t)(EAX));
  /* 11e599e3 push ebx */
  push32((uint32_t)(EBX));
  /* 11e599e4 call 0x11e59f30 */
  push32(0x11e599e9u); f_11e59f30();
  /* 11e599e9 mov ebx, eax */
  EBX = (EAX);
  /* 11e599eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e599ee call 0x11e59f30 */
  push32(0x11e599f3u); f_11e59f30();
  /* 11e599f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e599f6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e599f8 je 0x11e599d4 */
  if (C.zf) goto L_11e599d4;
  /* 11e599fa sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e599fc sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11e599ff:;
  /* 11e599ff mov ebx, eax */
  EBX = (EAX);
  /* 11e59a01 pop eax */
  EAX = (pop32());
  /* 11e59a02 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e59a04 jne 0x11e59a0f */
  if (!C.zf) goto L_11e59a0f;
  /* 11e59a06 lock dec dword ptr [0x11e76c7c] */
  x86_unimpl("lock dec @ 0x11e59a06");
  /* 11e59a0d jmp 0x11e59a19 */
  goto L_11e59a19;
L_11e59a0f:;
  /* 11e59a0f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11e59a11 call 0x11e4c710 */
  push32(0x11e59a16u); f_11e4c710();
  /* 11e59a16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11e59a19:;
  /* 11e59a19 mov eax, ebx */
  EAX = (EBX);
L_11e59a1b:;
  /* 11e59a1b pop ebx */
  EBX = (pop32());
  /* 11e59a1c pop esi */
  ESI = (pop32());
  /* 11e59a1d pop edi */
  EDI = (pop32());
  /* 11e59a1e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e59a1f ret  */
  ESPCHK(0x11e59950u, _esp0);
  ESP += 4; return;
}

/* FUN_10019a20 @ 0x11e59a20 (257 bytes, 103 insns) */
void f_11e59a20(void) {
  FTRACE(0x11e59a20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e59a20 push ebp */
  push32((uint32_t)(EBP));
  /* 11e59a21 mov ebp, esp */
  EBP = (ESP);
  /* 11e59a23 push edi */
  push32((uint32_t)(EDI));
  /* 11e59a24 push esi */
  push32((uint32_t)(ESI));
  /* 11e59a25 push ebx */
  push32((uint32_t)(EBX));
  /* 11e59a26 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e59a29 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e59a2b je 0x11e59b1a */
  if (C.zf) goto L_11e59b1a;
  /* 11e59a31 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11e59a34 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11e59a37 lea eax, [0x11e76ba0] */
  EAX = ((uint32_t)(0x11e76ba0));
  /* 11e59a3d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e59a41 jne 0x11e59a91 */
  if (!C.zf) goto L_11e59a91;
  /* 11e59a43 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 11e59a45 mov bl, 0x5a */
  BL = (0x5au);
  /* 11e59a47 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 11e59a49 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11e59a4c:;
  /* 11e59a4c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 11e59a4e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11e59a50 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11e59a52 je 0x11e59a75 */
  if (C.zf) goto L_11e59a75;
  /* 11e59a54 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11e59a56 je 0x11e59a75 */
  if (C.zf) goto L_11e59a75;
  /* 11e59a58 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e59a59 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11e59a5a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e59a5c jb 0x11e59a64 */
  if (C.cf) goto L_11e59a64;
  /* 11e59a5e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e59a60 ja 0x11e59a64 */
  if ((!C.cf&&!C.zf)) goto L_11e59a64;
  /* 11e59a62 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_11e59a64:;
  /* 11e59a64 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e59a66 jb 0x11e59a6e */
  if (C.cf) goto L_11e59a6e;
  /* 11e59a68 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e59a6a ja 0x11e59a6e */
  if ((!C.cf&&!C.zf)) goto L_11e59a6e;
  /* 11e59a6c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_11e59a6e:;
  /* 11e59a6e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e59a70 jne 0x11e59a7f */
  if (!C.zf) goto L_11e59a7f;
  /* 11e59a72 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11e59a73 jne 0x11e59a4c */
  if (!C.zf) goto L_11e59a4c;
L_11e59a75:;
  /* 11e59a75 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e59a77 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11e59a79 je 0x11e59b1a */
  if (C.zf) goto L_11e59b1a;
L_11e59a7f:;
  /* 11e59a7f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11e59a84 jb 0x11e59b1a */
  if (C.cf) goto L_11e59b1a;
  /* 11e59a8a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11e59a8c jmp 0x11e59b1a */
  goto L_11e59b1a;
L_11e59a91:;
  /* 11e59a91 lock inc dword ptr [0x11e76c7c] */
  x86_unimpl("lock inc @ 0x11e59a91");
  /* 11e59a98 cmp dword ptr [0x11e76c6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76c6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e59a9f jg 0x11e59aa5 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e59aa5;
  /* 11e59aa1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e59aa3 jmp 0x11e59abe */
  goto L_11e59abe;
L_11e59aa5:;
  /* 11e59aa5 lock dec dword ptr [0x11e76c7c] */
  x86_unimpl("lock dec @ 0x11e59aa5");
  /* 11e59aac mov ebx, ecx */
  EBX = (ECX);
  /* 11e59aae push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11e59ab0 call 0x11e4c670 */
  push32(0x11e59ab5u); f_11e4c670();
  /* 11e59ab5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 11e59abc mov ecx, ebx */
  ECX = (EBX);
L_11e59abe:;
  /* 11e59abe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e59ac0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11e59ac2 mov edi, edi */
  EDI = (EDI);
L_11e59ac4:;
  /* 11e59ac4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11e59ac6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e59ac8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11e59aca je 0x11e59aef */
  if (C.zf) goto L_11e59aef;
  /* 11e59acc or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11e59ace je 0x11e59aef */
  if (C.zf) goto L_11e59aef;
  /* 11e59ad0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11e59ad1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11e59ad2 push ecx */
  push32((uint32_t)(ECX));
  /* 11e59ad3 push eax */
  push32((uint32_t)(EAX));
  /* 11e59ad4 push ebx */
  push32((uint32_t)(EBX));
  /* 11e59ad5 call 0x11e59f30 */
  push32(0x11e59adau); f_11e59f30();
  /* 11e59ada mov ebx, eax */
  EBX = (EAX);
  /* 11e59adc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e59adf call 0x11e59f30 */
  push32(0x11e59ae4u); f_11e59f30();
  /* 11e59ae4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e59ae7 pop ecx */
  ECX = (pop32());
  /* 11e59ae8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e59aea jne 0x11e59af5 */
  if (!C.zf) goto L_11e59af5;
  /* 11e59aec dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11e59aed jne 0x11e59ac4 */
  if (!C.zf) goto L_11e59ac4;
L_11e59aef:;
  /* 11e59aef xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e59af1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e59af3 je 0x11e59afe */
  if (C.zf) goto L_11e59afe;
L_11e59af5:;
  /* 11e59af5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11e59afa jb 0x11e59afe */
  if (C.cf) goto L_11e59afe;
  /* 11e59afc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_11e59afe:;
  /* 11e59afe pop eax */
  EAX = (pop32());
  /* 11e59aff or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e59b01 jne 0x11e59b0c */
  if (!C.zf) goto L_11e59b0c;
  /* 11e59b03 lock dec dword ptr [0x11e76c7c] */
  x86_unimpl("lock dec @ 0x11e59b03");
  /* 11e59b0a jmp 0x11e59b1a */
  goto L_11e59b1a;
L_11e59b0c:;
  /* 11e59b0c mov ebx, ecx */
  EBX = (ECX);
  /* 11e59b0e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11e59b10 call 0x11e4c710 */
  push32(0x11e59b15u); f_11e4c710();
  /* 11e59b15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e59b18 mov ecx, ebx */
  ECX = (EBX);
L_11e59b1a:;
  /* 11e59b1a mov eax, ecx */
  EAX = (ECX);
  /* 11e59b1c pop ebx */
  EBX = (pop32());
  /* 11e59b1d pop esi */
  ESI = (pop32());
  /* 11e59b1e pop edi */
  EDI = (pop32());
  /* 11e59b1f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11e59b20 ret  */
  ESPCHK(0x11e59a20u, _esp0);
  ESP += 4; return;
}

/* FUN_10019b30 @ 0x11e59b30 (382 bytes, 135 insns) */
void f_11e59b30(void) {
  FTRACE(0x11e59b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e59b30 push ebp */
  push32((uint32_t)(EBP));
  /* 11e59b31 mov ebp, esp */
  EBP = (ESP);
  /* 11e59b33 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11e59b35 push 0x11e72928 */
  push32((uint32_t)(0x11e72928u));
  /* 11e59b3a push 0x11e539b8 */
  push32((uint32_t)(0x11e539b8u));
  /* 11e59b3f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11e59b45 push eax */
  push32((uint32_t)(EAX));
  /* 11e59b46 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11e59b4d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e59b50 push ebx */
  push32((uint32_t)(EBX));
  /* 11e59b51 push esi */
  push32((uint32_t)(ESI));
  /* 11e59b52 push edi */
  push32((uint32_t)(EDI));
  /* 11e59b53 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11e59b56 cmp dword ptr [0x11e76c50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76c50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e59b5d jne 0x11e59ba2 */
  if (!C.zf) goto L_11e59ba2;
  /* 11e59b5f push 0 */
  push32((uint32_t)(0x0u));
  /* 11e59b61 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e59b63 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e59b65 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e59b67 call dword ptr [0x11e792d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e792d4))), 0x11e59b6du);
  /* 11e59b6d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e59b6f je 0x11e59b7d */
  if (C.zf) goto L_11e59b7d;
  /* 11e59b71 mov dword ptr [0x11e76c50], 1 */
  w32((uint32_t)(0x11e76c50), (0x1u));
  /* 11e59b7b jmp 0x11e59ba2 */
  goto L_11e59ba2;
L_11e59b7d:;
  /* 11e59b7d push 0 */
  push32((uint32_t)(0x0u));
  /* 11e59b7f push 0 */
  push32((uint32_t)(0x0u));
  /* 11e59b81 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e59b83 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e59b85 call dword ptr [0x11e792f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e792f0))), 0x11e59b8bu);
  /* 11e59b8b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e59b8d je 0x11e59b9b */
  if (C.zf) goto L_11e59b9b;
  /* 11e59b8f mov dword ptr [0x11e76c50], 2 */
  w32((uint32_t)(0x11e76c50), (0x2u));
  /* 11e59b99 jmp 0x11e59ba2 */
  goto L_11e59ba2;
L_11e59b9b:;
  /* 11e59b9b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e59b9d jmp 0x11e59cb1 */
  goto L_11e59cb1;
L_11e59ba2:;
  /* 11e59ba2 cmp dword ptr [0x11e76c50], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e76c50))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e59ba9 jne 0x11e59bc6 */
  if (!C.zf) goto L_11e59bc6;
  /* 11e59bab mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e59bae push eax */
  push32((uint32_t)(EAX));
  /* 11e59baf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e59bb2 push ecx */
  push32((uint32_t)(ECX));
  /* 11e59bb3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e59bb6 push edx */
  push32((uint32_t)(EDX));
  /* 11e59bb7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e59bba push eax */
  push32((uint32_t)(EAX));
  /* 11e59bbb call dword ptr [0x11e792d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e792d4))), 0x11e59bc1u);
  /* 11e59bc1 jmp 0x11e59cb1 */
  goto L_11e59cb1;
L_11e59bc6:;
  /* 11e59bc6 cmp dword ptr [0x11e76c50], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11e76c50))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e59bcd jne 0x11e59caf */
  if (!C.zf) goto L_11e59caf;
  /* 11e59bd3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e59bd7 jne 0x11e59be2 */
  if (!C.zf) goto L_11e59be2;
  /* 11e59bd9 mov ecx, dword ptr [0x11e76bb8] */
  ECX = (r32((uint32_t)(0x11e76bb8)));
  /* 11e59bdf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11e59be2:;
  /* 11e59be2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e59be4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e59be6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e59be9 push edx */
  push32((uint32_t)(EDX));
  /* 11e59bea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e59bed push eax */
  push32((uint32_t)(EAX));
  /* 11e59bee call dword ptr [0x11e792f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e792f0))), 0x11e59bf4u);
  /* 11e59bf4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11e59bf7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e59bfb jne 0x11e59c04 */
  if (!C.zf) goto L_11e59c04;
  /* 11e59bfd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e59bff jmp 0x11e59cb1 */
  goto L_11e59cb1;
L_11e59c04:;
  /* 11e59c04 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e59c0b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e59c0e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e59c11 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11e59c13 call 0x11e4d910 */
  push32(0x11e59c18u); f_11e4d910();
  /* 11e59c18 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 11e59c1b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11e59c1e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e59c21 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11e59c24 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11e59c2b jmp 0x11e59c44 */
  goto L_11e59c44;
  /* 11e59c2d mov eax, 1 */
  EAX = (0x1u);
  /* 11e59c32 ret  */
  ESPCHK(0x11e59b30u, _esp0);
  ESP += 4; return;
  /* 11e59c33 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11e59c36 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11e59c3d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11e59c44:;
  /* 11e59c44 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e59c48 jne 0x11e59c4e */
  if (!C.zf) goto L_11e59c4e;
  /* 11e59c4a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e59c4c jmp 0x11e59cb1 */
  goto L_11e59cb1;
L_11e59c4e:;
  /* 11e59c4e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e59c51 push edx */
  push32((uint32_t)(EDX));
  /* 11e59c52 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e59c55 push eax */
  push32((uint32_t)(EAX));
  /* 11e59c56 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e59c59 push ecx */
  push32((uint32_t)(ECX));
  /* 11e59c5a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e59c5d push edx */
  push32((uint32_t)(EDX));
  /* 11e59c5e call dword ptr [0x11e792f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e792f0))), 0x11e59c64u);
  /* 11e59c64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e59c66 jne 0x11e59c6c */
  if (!C.zf) goto L_11e59c6c;
  /* 11e59c68 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e59c6a jmp 0x11e59cb1 */
  goto L_11e59cb1;
L_11e59c6c:;
  /* 11e59c6c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e59c70 jne 0x11e59c8d */
  if (!C.zf) goto L_11e59c8d;
  /* 11e59c72 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e59c74 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e59c76 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11e59c78 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e59c7b push eax */
  push32((uint32_t)(EAX));
  /* 11e59c7c push 1 */
  push32((uint32_t)(0x1u));
  /* 11e59c7e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e59c81 push ecx */
  push32((uint32_t)(ECX));
  /* 11e59c82 call dword ptr [0x11e7932c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e7932c))), 0x11e59c88u);
  /* 11e59c88 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11e59c8b jmp 0x11e59caa */
  goto L_11e59caa;
L_11e59c8d:;
  /* 11e59c8d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e59c90 push edx */
  push32((uint32_t)(EDX));
  /* 11e59c91 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e59c94 push eax */
  push32((uint32_t)(EAX));
  /* 11e59c95 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11e59c97 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e59c9a push ecx */
  push32((uint32_t)(ECX));
  /* 11e59c9b push 1 */
  push32((uint32_t)(0x1u));
  /* 11e59c9d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e59ca0 push edx */
  push32((uint32_t)(EDX));
  /* 11e59ca1 call dword ptr [0x11e7932c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e7932c))), 0x11e59ca7u);
  /* 11e59ca7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11e59caa:;
  /* 11e59caa mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e59cad jmp 0x11e59cb1 */
  goto L_11e59cb1;
L_11e59caf:;
  /* 11e59caf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e59cb1:;
  /* 11e59cb1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11e59cb4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e59cb7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11e59cbe pop edi */
  EDI = (pop32());
  /* 11e59cbf pop esi */
  ESI = (pop32());
  /* 11e59cc0 pop ebx */
  EBX = (pop32());
  /* 11e59cc1 mov esp, ebp */
  ESP = (EBP);
  /* 11e59cc3 pop ebp */
  EBP = (pop32());
  /* 11e59cc4 ret  */
  ESPCHK(0x11e59b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10019cd0 @ 0x11e59cd0 (398 bytes, 140 insns) */
void f_11e59cd0(void) {
  FTRACE(0x11e59cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e59cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11e59cd1 mov ebp, esp */
  EBP = (ESP);
  /* 11e59cd3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11e59cd5 push 0x11e72938 */
  push32((uint32_t)(0x11e72938u));
  /* 11e59cda push 0x11e539b8 */
  push32((uint32_t)(0x11e539b8u));
  /* 11e59cdf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11e59ce5 push eax */
  push32((uint32_t)(EAX));
  /* 11e59ce6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11e59ced add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e59cf0 push ebx */
  push32((uint32_t)(EBX));
  /* 11e59cf1 push esi */
  push32((uint32_t)(ESI));
  /* 11e59cf2 push edi */
  push32((uint32_t)(EDI));
  /* 11e59cf3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11e59cf6 cmp dword ptr [0x11e76c54], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76c54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e59cfd jne 0x11e59d42 */
  if (!C.zf) goto L_11e59d42;
  /* 11e59cff push 0 */
  push32((uint32_t)(0x0u));
  /* 11e59d01 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e59d03 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e59d05 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e59d07 call dword ptr [0x11e792d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e792d4))), 0x11e59d0du);
  /* 11e59d0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e59d0f je 0x11e59d1d */
  if (C.zf) goto L_11e59d1d;
  /* 11e59d11 mov dword ptr [0x11e76c54], 1 */
  w32((uint32_t)(0x11e76c54), (0x1u));
  /* 11e59d1b jmp 0x11e59d42 */
  goto L_11e59d42;
L_11e59d1d:;
  /* 11e59d1d push 0 */
  push32((uint32_t)(0x0u));
  /* 11e59d1f push 0 */
  push32((uint32_t)(0x0u));
  /* 11e59d21 push 1 */
  push32((uint32_t)(0x1u));
  /* 11e59d23 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e59d25 call dword ptr [0x11e792f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e792f0))), 0x11e59d2bu);
  /* 11e59d2b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e59d2d je 0x11e59d3b */
  if (C.zf) goto L_11e59d3b;
  /* 11e59d2f mov dword ptr [0x11e76c54], 2 */
  w32((uint32_t)(0x11e76c54), (0x2u));
  /* 11e59d39 jmp 0x11e59d42 */
  goto L_11e59d42;
L_11e59d3b:;
  /* 11e59d3b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e59d3d jmp 0x11e59e61 */
  goto L_11e59e61;
L_11e59d42:;
  /* 11e59d42 cmp dword ptr [0x11e76c54], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11e76c54))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e59d49 jne 0x11e59d66 */
  if (!C.zf) goto L_11e59d66;
  /* 11e59d4b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e59d4e push eax */
  push32((uint32_t)(EAX));
  /* 11e59d4f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e59d52 push ecx */
  push32((uint32_t)(ECX));
  /* 11e59d53 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e59d56 push edx */
  push32((uint32_t)(EDX));
  /* 11e59d57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e59d5a push eax */
  push32((uint32_t)(EAX));
  /* 11e59d5b call dword ptr [0x11e792f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e792f0))), 0x11e59d61u);
  /* 11e59d61 jmp 0x11e59e61 */
  goto L_11e59e61;
L_11e59d66:;
  /* 11e59d66 cmp dword ptr [0x11e76c54], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e76c54))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e59d6d jne 0x11e59e5f */
  if (!C.zf) goto L_11e59e5f;
  /* 11e59d73 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e59d77 jne 0x11e59d82 */
  if (!C.zf) goto L_11e59d82;
  /* 11e59d79 mov ecx, dword ptr [0x11e76bb8] */
  ECX = (r32((uint32_t)(0x11e76bb8)));
  /* 11e59d7f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_11e59d82:;
  /* 11e59d82 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e59d84 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e59d86 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e59d89 push edx */
  push32((uint32_t)(EDX));
  /* 11e59d8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e59d8d push eax */
  push32((uint32_t)(EAX));
  /* 11e59d8e call dword ptr [0x11e792d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e792d4))), 0x11e59d94u);
  /* 11e59d94 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11e59d97 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e59d9b jne 0x11e59da4 */
  if (!C.zf) goto L_11e59da4;
  /* 11e59d9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e59d9f jmp 0x11e59e61 */
  goto L_11e59e61;
L_11e59da4:;
  /* 11e59da4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11e59dab mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e59dae shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11e59db0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e59db3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11e59db5 call 0x11e4d910 */
  push32(0x11e59dbau); f_11e4d910();
  /* 11e59dba mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 11e59dbd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11e59dc0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11e59dc3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11e59dc6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11e59dcd jmp 0x11e59de6 */
  goto L_11e59de6;
  /* 11e59dcf mov eax, 1 */
  EAX = (0x1u);
  /* 11e59dd4 ret  */
  ESPCHK(0x11e59cd0u, _esp0);
  ESP += 4; return;
  /* 11e59dd5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11e59dd8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11e59ddf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11e59de6:;
  /* 11e59de6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e59dea jne 0x11e59df0 */
  if (!C.zf) goto L_11e59df0;
  /* 11e59dec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e59dee jmp 0x11e59e61 */
  goto L_11e59e61;
L_11e59df0:;
  /* 11e59df0 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11e59df3 push edx */
  push32((uint32_t)(EDX));
  /* 11e59df4 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e59df7 push eax */
  push32((uint32_t)(EAX));
  /* 11e59df8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11e59dfb push ecx */
  push32((uint32_t)(ECX));
  /* 11e59dfc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e59dff push edx */
  push32((uint32_t)(EDX));
  /* 11e59e00 call dword ptr [0x11e792d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e792d4))), 0x11e59e06u);
  /* 11e59e06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11e59e08 jne 0x11e59e0e */
  if (!C.zf) goto L_11e59e0e;
  /* 11e59e0a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11e59e0c jmp 0x11e59e61 */
  goto L_11e59e61;
L_11e59e0e:;
  /* 11e59e0e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e59e12 jne 0x11e59e36 */
  if (!C.zf) goto L_11e59e36;
  /* 11e59e14 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e59e16 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e59e18 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e59e1a push 0 */
  push32((uint32_t)(0x0u));
  /* 11e59e1c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11e59e1e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e59e21 push eax */
  push32((uint32_t)(EAX));
  /* 11e59e22 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11e59e27 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e59e2a push ecx */
  push32((uint32_t)(ECX));
  /* 11e59e2b call dword ptr [0x11e7936c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e7936c))), 0x11e59e31u);
  /* 11e59e31 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11e59e34 jmp 0x11e59e5a */
  goto L_11e59e5a;
L_11e59e36:;
  /* 11e59e36 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e59e38 push 0 */
  push32((uint32_t)(0x0u));
  /* 11e59e3a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11e59e3d push edx */
  push32((uint32_t)(EDX));
  /* 11e59e3e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11e59e41 push eax */
  push32((uint32_t)(EAX));
  /* 11e59e42 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11e59e44 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11e59e47 push ecx */
  push32((uint32_t)(ECX));
  /* 11e59e48 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11e59e4d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11e59e50 push edx */
  push32((uint32_t)(EDX));
  /* 11e59e51 call dword ptr [0x11e7936c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e7936c))), 0x11e59e57u);
  /* 11e59e57 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11e59e5a:;
  /* 11e59e5a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11e59e5d jmp 0x11e59e61 */
  goto L_11e59e61;
L_11e59e5f:;
  /* 11e59e5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11e59e61:;
  /* 11e59e61 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 11e59e64 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11e59e67 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11e59e6e pop edi */
  EDI = (pop32());
  /* 11e59e6f pop esi */
  ESI = (pop32());
  /* 11e59e70 pop ebx */
  EBX = (pop32());
  /* 11e59e71 mov esp, ebp */
  ESP = (EBP);
  /* 11e59e73 pop ebp */
  EBP = (pop32());
  /* 11e59e74 ret  */
  ESPCHK(0x11e59cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019e80 @ 0x11e59e80 (11 bytes, 6 insns) */
void f_11e59e80(void) {
  FTRACE(0x11e59e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e59e80 push ebp */
  push32((uint32_t)(EBP));
  /* 11e59e81 mov ebp, esp */
  EBP = (ESP);
  /* 11e59e83 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e59e86 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e59e89 pop ebp */
  EBP = (pop32());
  /* 11e59e8a ret  */
  ESPCHK(0x11e59e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10019e90 @ 0x11e59e90 (147 bytes, 43 insns) */
void f_11e59e90(void) {
  FTRACE(0x11e59e90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e59e90 push ebp */
  push32((uint32_t)(EBP));
  /* 11e59e91 mov ebp, esp */
  EBP = (ESP);
  /* 11e59e93 push ecx */
  push32((uint32_t)(ECX));
  /* 11e59e94 cmp dword ptr [0x11e76ba8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76ba8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e59e9b jne 0x11e59eb7 */
  if (!C.zf) goto L_11e59eb7;
  /* 11e59e9d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e59ea1 jl 0x11e59eb2 */
  if ((C.sf!=C.of)) goto L_11e59eb2;
  /* 11e59ea3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e59ea7 jg 0x11e59eb2 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e59eb2;
  /* 11e59ea9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e59eac add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e59eaf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11e59eb2:;
  /* 11e59eb2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e59eb5 jmp 0x11e59f1f */
  goto L_11e59f1f;
L_11e59eb7:;
  /* 11e59eb7 push 0x11e76c7c */
  push32((uint32_t)(0x11e76c7cu));
  /* 11e59ebc call dword ptr [0x11e793d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e793d0))), 0x11e59ec2u);
  /* 11e59ec2 cmp dword ptr [0x11e76c6c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76c6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e59ec9 je 0x11e59ee9 */
  if (C.zf) goto L_11e59ee9;
  /* 11e59ecb push 0x11e76c7c */
  push32((uint32_t)(0x11e76c7cu));
  /* 11e59ed0 call dword ptr [0x11e793c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e793c0))), 0x11e59ed6u);
  /* 11e59ed6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11e59ed8 call 0x11e4c670 */
  push32(0x11e59eddu); f_11e4c670();
  /* 11e59edd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e59ee0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11e59ee7 jmp 0x11e59ef0 */
  goto L_11e59ef0;
L_11e59ee9:;
  /* 11e59ee9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11e59ef0:;
  /* 11e59ef0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e59ef3 push ecx */
  push32((uint32_t)(ECX));
  /* 11e59ef4 call 0x11e59f30 */
  push32(0x11e59ef9u); f_11e59f30();
  /* 11e59ef9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e59efc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11e59eff cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e59f03 je 0x11e59f11 */
  if (C.zf) goto L_11e59f11;
  /* 11e59f05 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11e59f07 call 0x11e4c710 */
  push32(0x11e59f0cu); f_11e4c710();
  /* 11e59f0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e59f0f jmp 0x11e59f1c */
  goto L_11e59f1c;
L_11e59f11:;
  /* 11e59f11 push 0x11e76c7c */
  push32((uint32_t)(0x11e76c7cu));
  /* 11e59f16 call dword ptr [0x11e793c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11e793c0))), 0x11e59f1cu);
L_11e59f1c:;
  /* 11e59f1c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11e59f1f:;
  /* 11e59f1f mov esp, ebp */
  ESP = (EBP);
  /* 11e59f21 pop ebp */
  EBP = (pop32());
  /* 11e59f22 ret  */
  ESPCHK(0x11e59e90u, _esp0);
  ESP += 4; return;
}

/* FUN_10019f30 @ 0x11e59f30 (299 bytes, 91 insns) */
void f_11e59f30(void) {
  FTRACE(0x11e59f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e59f30 push ebp */
  push32((uint32_t)(EBP));
  /* 11e59f31 mov ebp, esp */
  EBP = (ESP);
  /* 11e59f33 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11e59f36 cmp dword ptr [0x11e76ba8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11e76ba8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e59f3d jne 0x11e59f5c */
  if (!C.zf) goto L_11e59f5c;
  /* 11e59f3f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e59f43 jl 0x11e59f54 */
  if ((C.sf!=C.of)) goto L_11e59f54;
  /* 11e59f45 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e59f49 jg 0x11e59f54 */
  if ((!C.zf&&C.sf==C.of)) goto L_11e59f54;
  /* 11e59f4b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e59f4e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11e59f51 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11e59f54:;
  /* 11e59f54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e59f57 jmp 0x11e5a057 */
  goto L_11e5a057;
L_11e59f5c:;
  /* 11e59f5c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e59f63 jge 0x11e59fa3 */
  if ((C.sf==C.of)) goto L_11e59fa3;
  /* 11e59f65 cmp dword ptr [0x11e74fc4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11e74fc4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e59f6c jle 0x11e59f81 */
  if ((C.zf||C.sf!=C.of)) goto L_11e59f81;
  /* 11e59f6e push 1 */
  push32((uint32_t)(0x1u));
  /* 11e59f70 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e59f73 push ecx */
  push32((uint32_t)(ECX));
  /* 11e59f74 call 0x11e503a0 */
  push32(0x11e59f79u); f_11e503a0();
  /* 11e59f79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e59f7c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11e59f7f jmp 0x11e59f95 */
  goto L_11e59f95;
L_11e59f81:;
  /* 11e59f81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e59f84 mov eax, dword ptr [0x11e74db8] */
  EAX = (r32((uint32_t)(0x11e74db8)));
  /* 11e59f89 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e59f8b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11e59f8f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11e59f92 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11e59f95:;
  /* 11e59f95 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e59f99 jne 0x11e59fa3 */
  if (!C.zf) goto L_11e59fa3;
  /* 11e59f9b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e59f9e jmp 0x11e5a057 */
  goto L_11e5a057;
L_11e59fa3:;
  /* 11e59fa3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e59fa6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11e59fa9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e59faf and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e59fb5 mov eax, dword ptr [0x11e74db8] */
  EAX = (r32((uint32_t)(0x11e74db8)));
  /* 11e59fba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11e59fbc mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11e59fc0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11e59fc6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11e59fc8 je 0x11e59fec */
  if (C.zf) goto L_11e59fec;
  /* 11e59fca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e59fcd sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11e59fd0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11e59fd6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 11e59fd9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11e59fdc mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 11e59fdf mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 11e59fe3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11e59fea jmp 0x11e59ffd */
  goto L_11e59ffd;
L_11e59fec:;
  /* 11e59fec mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 11e59fef mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11e59ff2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 11e59ff6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_11e59ffd:;
  /* 11e59ffd push 1 */
  push32((uint32_t)(0x1u));
  /* 11e59fff push 0 */
  push32((uint32_t)(0x0u));
  /* 11e5a001 push 3 */
  push32((uint32_t)(0x3u));
  /* 11e5a003 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11e5a006 push edx */
  push32((uint32_t)(EDX));
  /* 11e5a007 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11e5a00a push eax */
  push32((uint32_t)(EAX));
  /* 11e5a00b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11e5a00e push ecx */
  push32((uint32_t)(ECX));
  /* 11e5a00f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11e5a014 mov edx, dword ptr [0x11e76ba8] */
  EDX = (r32((uint32_t)(0x11e76ba8)));
  /* 11e5a01a push edx */
  push32((uint32_t)(EDX));
  /* 11e5a01b call 0x11e52b60 */
  push32(0x11e5a020u); f_11e52b60();
  /* 11e5a020 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11e5a023 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11e5a026 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5a02a jne 0x11e5a031 */
  if (!C.zf) goto L_11e5a031;
  /* 11e5a02c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11e5a02f jmp 0x11e5a057 */
  goto L_11e5a057;
L_11e5a031:;
  /* 11e5a031 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11e5a035 jne 0x11e5a041 */
  if (!C.zf) goto L_11e5a041;
  /* 11e5a037 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e5a03a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e5a03f jmp 0x11e5a057 */
  goto L_11e5a057;
L_11e5a041:;
  /* 11e5a041 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11e5a044 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11e5a049 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 11e5a04c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11e5a052 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11e5a055 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11e5a057:;
  /* 11e5a057 mov esp, ebp */
  ESP = (EBP);
  /* 11e5a059 pop ebp */
  EBP = (pop32());
  /* 11e5a05a ret  */
  ESPCHK(0x11e59f30u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x11e5a1be (6 bytes, 1 insns) */
void f_11e5a1be(void) {
  FTRACE(0x11e5a1beu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11e5a1be jmp dword ptr [0x11e79314] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11e79314)))); return;
}

