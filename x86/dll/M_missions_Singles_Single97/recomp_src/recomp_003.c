#include "recomp.h"

/* FUN_1000f8a0 @ 0x120af8a0 (130 bytes, 42 insns) */
void f_120af8a0(void) {
  FTRACE(0x120af8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120af8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 120af8a1 mov ebp, esp */
  EBP = (ESP);
  /* 120af8a3 push ecx */
  push32((uint32_t)(ECX));
  /* 120af8a4 call 0x120acaa0 */
  push32(0x120af8a9u); f_120acaa0();
  /* 120af8a9 call dword ptr [0x120e33f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33f8))), 0x120af8afu);
  /* 120af8af mov dword ptr [0x120def50], eax */
  w32((uint32_t)(0x120def50), (EAX));
  /* 120af8b4 cmp dword ptr [0x120def50], -1 */
  { uint32_t _a=(r32((uint32_t)(0x120def50))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120af8bb jne 0x120af8c1 */
  if (!C.zf) goto L_120af8c1;
  /* 120af8bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120af8bf jmp 0x120af91e */
  goto L_120af91e;
L_120af8c1:;
  /* 120af8c1 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 120af8c3 push 0x120dbdfc */
  push32((uint32_t)(0x120dbdfcu));
  /* 120af8c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 120af8ca push 0x74 */
  push32((uint32_t)(0x74u));
  /* 120af8cc push 1 */
  push32((uint32_t)(0x1u));
  /* 120af8ce call 0x120ad090 */
  push32(0x120af8d3u); f_120ad090();
  /* 120af8d3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120af8d6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120af8d9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120af8dd je 0x120af8f4 */
  if (C.zf) goto L_120af8f4;
  /* 120af8df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120af8e2 push eax */
  push32((uint32_t)(EAX));
  /* 120af8e3 mov ecx, dword ptr [0x120def50] */
  ECX = (r32((uint32_t)(0x120def50)));
  /* 120af8e9 push ecx */
  push32((uint32_t)(ECX));
  /* 120af8ea call dword ptr [0x120e33fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33fc))), 0x120af8f0u);
  /* 120af8f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120af8f2 jne 0x120af8f8 */
  if (!C.zf) goto L_120af8f8;
L_120af8f4:;
  /* 120af8f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120af8f6 jmp 0x120af91e */
  goto L_120af91e;
L_120af8f8:;
  /* 120af8f8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120af8fb push edx */
  push32((uint32_t)(EDX));
  /* 120af8fc call 0x120af960 */
  push32(0x120af901u); f_120af960();
  /* 120af901 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120af904 call dword ptr [0x120e3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3400))), 0x120af90au);
  /* 120af90a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120af90d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 120af90f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120af912 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 120af919 mov eax, 1 */
  EAX = (0x1u);
L_120af91e:;
  /* 120af91e mov esp, ebp */
  ESP = (EBP);
  /* 120af920 pop ebp */
  EBP = (pop32());
  /* 120af921 ret  */
  ESPCHK(0x120af8a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f930 @ 0x120af930 (41 bytes, 11 insns) */
void f_120af930(void) {
  FTRACE(0x120af930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120af930 push ebp */
  push32((uint32_t)(EBP));
  /* 120af931 mov ebp, esp */
  EBP = (ESP);
  /* 120af933 call 0x120acae0 */
  push32(0x120af938u); f_120acae0();
  /* 120af938 cmp dword ptr [0x120def50], -1 */
  { uint32_t _a=(r32((uint32_t)(0x120def50))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120af93f je 0x120af957 */
  if (C.zf) goto L_120af957;
  /* 120af941 mov eax, dword ptr [0x120def50] */
  EAX = (r32((uint32_t)(0x120def50)));
  /* 120af946 push eax */
  push32((uint32_t)(EAX));
  /* 120af947 call dword ptr [0x120e33f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33f4))), 0x120af94du);
  /* 120af94d mov dword ptr [0x120def50], 0xffffffff */
  w32((uint32_t)(0x120def50), (0xffffffffu));
L_120af957:;
  /* 120af957 pop ebp */
  EBP = (pop32());
  /* 120af958 ret  */
  ESPCHK(0x120af930u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f960 @ 0x120af960 (25 bytes, 8 insns) */
void f_120af960(void) {
  FTRACE(0x120af960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120af960 push ebp */
  push32((uint32_t)(EBP));
  /* 120af961 mov ebp, esp */
  EBP = (ESP);
  /* 120af963 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120af966 mov dword ptr [eax + 0x50], 0x120df270 */
  w32((uint32_t)(EAX + 0x50), (0x120df270u));
  /* 120af96d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120af970 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 120af977 pop ebp */
  EBP = (pop32());
  /* 120af978 ret  */
  ESPCHK(0x120af960u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f980 @ 0x120af980 (152 bytes, 48 insns) */
void f_120af980(void) {
  FTRACE(0x120af980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120af980 push ebp */
  push32((uint32_t)(EBP));
  /* 120af981 mov ebp, esp */
  EBP = (ESP);
  /* 120af983 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120af986 call dword ptr [0x120e33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33e8))), 0x120af98cu);
  /* 120af98c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120af98f mov eax, dword ptr [0x120def50] */
  EAX = (r32((uint32_t)(0x120def50)));
  /* 120af994 push eax */
  push32((uint32_t)(EAX));
  /* 120af995 call dword ptr [0x120e33ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33ec))), 0x120af99bu);
  /* 120af99b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120af99e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120af9a2 jne 0x120afa07 */
  if (!C.zf) goto L_120afa07;
  /* 120af9a4 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 120af9a9 push 0x120dbdfc */
  push32((uint32_t)(0x120dbdfcu));
  /* 120af9ae push 2 */
  push32((uint32_t)(0x2u));
  /* 120af9b0 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 120af9b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 120af9b4 call 0x120ad090 */
  push32(0x120af9b9u); f_120ad090();
  /* 120af9b9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120af9bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120af9bf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120af9c3 je 0x120af9fd */
  if (C.zf) goto L_120af9fd;
  /* 120af9c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120af9c8 push ecx */
  push32((uint32_t)(ECX));
  /* 120af9c9 mov edx, dword ptr [0x120def50] */
  EDX = (r32((uint32_t)(0x120def50)));
  /* 120af9cf push edx */
  push32((uint32_t)(EDX));
  /* 120af9d0 call dword ptr [0x120e33fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33fc))), 0x120af9d6u);
  /* 120af9d6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120af9d8 je 0x120af9fd */
  if (C.zf) goto L_120af9fd;
  /* 120af9da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120af9dd push eax */
  push32((uint32_t)(EAX));
  /* 120af9de call 0x120af960 */
  push32(0x120af9e3u); f_120af960();
  /* 120af9e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120af9e6 call dword ptr [0x120e3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3400))), 0x120af9ecu);
  /* 120af9ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120af9ef mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 120af9f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120af9f4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 120af9fb jmp 0x120afa07 */
  goto L_120afa07;
L_120af9fd:;
  /* 120af9fd push 0x10 */
  push32((uint32_t)(0x10u));
  /* 120af9ff call 0x120ab6f0 */
  push32(0x120afa04u); f_120ab6f0();
  /* 120afa04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120afa07:;
  /* 120afa07 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120afa0a push eax */
  push32((uint32_t)(EAX));
  /* 120afa0b call dword ptr [0x120e33f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33f0))), 0x120afa11u);
  /* 120afa11 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120afa14 mov esp, ebp */
  ESP = (EBP);
  /* 120afa16 pop ebp */
  EBP = (pop32());
  /* 120afa17 ret  */
  ESPCHK(0x120af980u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fa20 @ 0x120afa20 (263 bytes, 86 insns) */
void f_120afa20(void) {
  FTRACE(0x120afa20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120afa20 push ebp */
  push32((uint32_t)(EBP));
  /* 120afa21 mov ebp, esp */
  EBP = (ESP);
  /* 120afa23 cmp dword ptr [0x120def50], -1 */
  { uint32_t _a=(r32((uint32_t)(0x120def50))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120afa2a je 0x120afb25 */
  if (C.zf) goto L_120afb25;
  /* 120afa30 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120afa34 jne 0x120afa45 */
  if (!C.zf) goto L_120afa45;
  /* 120afa36 mov eax, dword ptr [0x120def50] */
  EAX = (r32((uint32_t)(0x120def50)));
  /* 120afa3b push eax */
  push32((uint32_t)(EAX));
  /* 120afa3c call dword ptr [0x120e33ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33ec))), 0x120afa42u);
  /* 120afa42 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_120afa45:;
  /* 120afa45 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120afa49 je 0x120afb16 */
  if (C.zf) goto L_120afb16;
  /* 120afa4f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120afa52 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120afa56 je 0x120afa69 */
  if (C.zf) goto L_120afa69;
  /* 120afa58 push 2 */
  push32((uint32_t)(0x2u));
  /* 120afa5a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120afa5d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 120afa60 push eax */
  push32((uint32_t)(EAX));
  /* 120afa61 call 0x120ad710 */
  push32(0x120afa66u); f_120ad710();
  /* 120afa66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120afa69:;
  /* 120afa69 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120afa6c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120afa70 je 0x120afa83 */
  if (C.zf) goto L_120afa83;
  /* 120afa72 push 2 */
  push32((uint32_t)(0x2u));
  /* 120afa74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120afa77 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 120afa7a push eax */
  push32((uint32_t)(EAX));
  /* 120afa7b call 0x120ad710 */
  push32(0x120afa80u); f_120ad710();
  /* 120afa80 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120afa83:;
  /* 120afa83 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120afa86 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120afa8a je 0x120afa9d */
  if (C.zf) goto L_120afa9d;
  /* 120afa8c push 2 */
  push32((uint32_t)(0x2u));
  /* 120afa8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120afa91 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 120afa94 push eax */
  push32((uint32_t)(EAX));
  /* 120afa95 call 0x120ad710 */
  push32(0x120afa9au); f_120ad710();
  /* 120afa9a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120afa9d:;
  /* 120afa9d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120afaa0 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120afaa4 je 0x120afab7 */
  if (C.zf) goto L_120afab7;
  /* 120afaa6 push 2 */
  push32((uint32_t)(0x2u));
  /* 120afaa8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120afaab mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 120afaae push eax */
  push32((uint32_t)(EAX));
  /* 120afaaf call 0x120ad710 */
  push32(0x120afab4u); f_120ad710();
  /* 120afab4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120afab7:;
  /* 120afab7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120afaba cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120afabe je 0x120afad1 */
  if (C.zf) goto L_120afad1;
  /* 120afac0 push 2 */
  push32((uint32_t)(0x2u));
  /* 120afac2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120afac5 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 120afac8 push eax */
  push32((uint32_t)(EAX));
  /* 120afac9 call 0x120ad710 */
  push32(0x120afaceu); f_120ad710();
  /* 120aface add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120afad1:;
  /* 120afad1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120afad4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120afad8 je 0x120afaeb */
  if (C.zf) goto L_120afaeb;
  /* 120afada push 2 */
  push32((uint32_t)(0x2u));
  /* 120afadc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120afadf mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 120afae2 push eax */
  push32((uint32_t)(EAX));
  /* 120afae3 call 0x120ad710 */
  push32(0x120afae8u); f_120ad710();
  /* 120afae8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120afaeb:;
  /* 120afaeb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120afaee cmp dword ptr [ecx + 0x50], 0x120df270 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x120df270u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120afaf5 je 0x120afb08 */
  if (C.zf) goto L_120afb08;
  /* 120afaf7 push 2 */
  push32((uint32_t)(0x2u));
  /* 120afaf9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120afafc mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 120afaff push eax */
  push32((uint32_t)(EAX));
  /* 120afb00 call 0x120ad710 */
  push32(0x120afb05u); f_120ad710();
  /* 120afb05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120afb08:;
  /* 120afb08 push 2 */
  push32((uint32_t)(0x2u));
  /* 120afb0a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120afb0d push ecx */
  push32((uint32_t)(ECX));
  /* 120afb0e call 0x120ad710 */
  push32(0x120afb13u); f_120ad710();
  /* 120afb13 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120afb16:;
  /* 120afb16 push 0 */
  push32((uint32_t)(0x0u));
  /* 120afb18 mov edx, dword ptr [0x120def50] */
  EDX = (r32((uint32_t)(0x120def50)));
  /* 120afb1e push edx */
  push32((uint32_t)(EDX));
  /* 120afb1f call dword ptr [0x120e33fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33fc))), 0x120afb25u);
L_120afb25:;
  /* 120afb25 pop ebp */
  EBP = (pop32());
  /* 120afb26 ret  */
  ESPCHK(0x120afa20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb30 @ 0x120afb30 (11 bytes, 5 insns) */
void f_120afb30(void) {
  FTRACE(0x120afb30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120afb30 push ebp */
  push32((uint32_t)(EBP));
  /* 120afb31 mov ebp, esp */
  EBP = (ESP);
  /* 120afb33 call dword ptr [0x120e3400] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3400))), 0x120afb39u);
  /* 120afb39 pop ebp */
  EBP = (pop32());
  /* 120afb3a ret  */
  ESPCHK(0x120afb30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb40 @ 0x120afb40 (11 bytes, 5 insns) */
void f_120afb40(void) {
  FTRACE(0x120afb40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120afb40 push ebp */
  push32((uint32_t)(EBP));
  /* 120afb41 mov ebp, esp */
  EBP = (ESP);
  /* 120afb43 call dword ptr [0x120e33e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33e4))), 0x120afb49u);
  /* 120afb49 pop ebp */
  EBP = (pop32());
  /* 120afb4a ret  */
  ESPCHK(0x120afb40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb50 @ 0x120afb50 (92 bytes, 29 insns) */
void f_120afb50(void) {
  FTRACE(0x120afb50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120afb50 push ebp */
  push32((uint32_t)(EBP));
  /* 120afb51 mov ebp, esp */
  EBP = (ESP);
  /* 120afb53 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 120afb55 push 0x120dbe08 */
  push32((uint32_t)(0x120dbe08u));
  /* 120afb5a push 0x120b58ac */
  push32((uint32_t)(0x120b58acu));
  /* 120afb5f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 120afb65 push eax */
  push32((uint32_t)(EAX));
  /* 120afb66 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 120afb6d sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120afb70 push ebx */
  push32((uint32_t)(EBX));
  /* 120afb71 push esi */
  push32((uint32_t)(ESI));
  /* 120afb72 push edi */
  push32((uint32_t)(EDI));
  /* 120afb73 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 120afb76 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120afb7d call 0x120af980 */
  push32(0x120afb82u); f_120af980();
  /* 120afb82 cmp dword ptr [eax + 0x60], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120afb86 je 0x120afbb0 */
  if (C.zf) goto L_120afbb0;
  /* 120afb88 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 120afb8f call 0x120af980 */
  push32(0x120afb94u); f_120af980();
  /* 120afb94 call dword ptr [eax + 0x60] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x60))), 0x120afb97u);
  /* 120afb97 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120afb9e jmp 0x120afbb0 */
  goto L_120afbb0;
  /* 120afba0 mov eax, 1 */
  EAX = (0x1u);
  /* 120afba5 ret  */
  ESPCHK(0x120afb50u, _esp0);
  ESP += 4; return;
  /* 120afba6 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 120afba9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_120afbb0:;
  /* 120afbb0 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 120afbb7 call 0x120afbbe */
  push32(0x120afbbcu); f_120afbbe();
  /* 120afbbc jmp 0x120afbc4 */
  jmp_ind(0x120afbc4u); return;
}

/* _abort @ 0x120afbbe (5 bytes, 2 insns) */
void f_120afbbe(void) {
  FTRACE(0x120afbbeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120afbbe call 0x120b5bb0 */
  push32(0x120afbc3u); f_120b5bb0();
  /* 120afbc3 ret  */
  ESPCHK(0x120afbbeu, _esp0);
  ESP += 4; return;
}

/* FUN_1000fbe0 @ 0x120afbe0 (29 bytes, 10 insns) */
void f_120afbe0(void) {
  FTRACE(0x120afbe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120afbe0 push ebp */
  push32((uint32_t)(EBP));
  /* 120afbe1 mov ebp, esp */
  EBP = (ESP);
  /* 120afbe3 call 0x120af980 */
  push32(0x120afbe8u); f_120af980();
  /* 120afbe8 cmp dword ptr [eax + 0x64], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120afbec je 0x120afbf6 */
  if (C.zf) goto L_120afbf6;
  /* 120afbee call 0x120af980 */
  push32(0x120afbf3u); f_120af980();
  /* 120afbf3 call dword ptr [eax + 0x64] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x64))), 0x120afbf6u);
L_120afbf6:;
  /* 120afbf6 call 0x120afb50 */
  push32(0x120afbfbu); f_120afb50();
  /* 120afbfb pop ebp */
  EBP = (pop32());
  /* 120afbfc ret  */
  ESPCHK(0x120afbe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc00 @ 0x120afc00 (90 bytes, 27 insns) */
void f_120afc00(void) {
  FTRACE(0x120afc00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120afc00 push ebp */
  push32((uint32_t)(EBP));
  /* 120afc01 mov ebp, esp */
  EBP = (ESP);
  /* 120afc03 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 120afc05 push 0x120dbe20 */
  push32((uint32_t)(0x120dbe20u));
  /* 120afc0a push 0x120b58ac */
  push32((uint32_t)(0x120b58acu));
  /* 120afc0f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 120afc15 push eax */
  push32((uint32_t)(EAX));
  /* 120afc16 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 120afc1d sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120afc20 push ebx */
  push32((uint32_t)(EBX));
  /* 120afc21 push esi */
  push32((uint32_t)(ESI));
  /* 120afc22 push edi */
  push32((uint32_t)(EDI));
  /* 120afc23 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 120afc26 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120afc2d cmp dword ptr [0x120def54], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120def54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120afc34 je 0x120afc5c */
  if (C.zf) goto L_120afc5c;
  /* 120afc36 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 120afc3d call dword ptr [0x120def54] */
  call_ind((uint32_t)(r32((uint32_t)(0x120def54))), 0x120afc43u);
  /* 120afc43 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120afc4a jmp 0x120afc5c */
  goto L_120afc5c;
  /* 120afc4c mov eax, 1 */
  EAX = (0x1u);
  /* 120afc51 ret  */
  ESPCHK(0x120afc00u, _esp0);
  ESP += 4; return;
  /* 120afc52 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 120afc55 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_120afc5c:;
  /* 120afc5c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 120afc63 call 0x120afc6a */
  push32(0x120afc68u); f_120afc6a();
  /* 120afc68 jmp 0x120afc70 */
  f_120afc70(); return;
}

/* FUN_1000fc6a @ 0x120afc6a (6 bytes, 2 insns) */
void f_120afc6a(void) {
  FTRACE(0x120afc6au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120afc6a call 0x120afb50 */
  push32(0x120afc6fu); f_120afb50();
  /* 120afc6f ret  */
  ESPCHK(0x120afc6au, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc70 @ 0x120afc70 (17 bytes, 8 insns) */
void f_120afc70(void) {
  FTRACE(0x120afc70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120afc70 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120afc73 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 120afc7a pop edi */
  EDI = (pop32());
  /* 120afc7b pop esi */
  ESI = (pop32());
  /* 120afc7c pop ebx */
  EBX = (pop32());
  /* 120afc7d mov esp, ebp */
  ESP = (EBP);
  /* 120afc7f pop ebp */
  EBP = (pop32());
  /* 120afc80 ret  */
  ESPCHK(0x120afc70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc90 @ 0x120afc90 (56 bytes, 15 insns) */
void f_120afc90(void) {
  FTRACE(0x120afc90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120afc90 push ebp */
  push32((uint32_t)(EBP));
  /* 120afc91 mov ebp, esp */
  EBP = (ESP);
  /* 120afc93 cmp dword ptr [0x120dedd0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120dedd0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120afc9a je 0x120afca2 */
  if (C.zf) goto L_120afca2;
  /* 120afc9c call dword ptr [0x120dedd0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120dedd0))), 0x120afca2u);
L_120afca2:;
  /* 120afca2 push 0x120de630 */
  push32((uint32_t)(0x120de630u));
  /* 120afca7 push 0x120de318 */
  push32((uint32_t)(0x120de318u));
  /* 120afcac call 0x120afe60 */
  push32(0x120afcb1u); f_120afe60();
  /* 120afcb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120afcb4 push 0x120de214 */
  push32((uint32_t)(0x120de214u));
  /* 120afcb9 push 0x120de000 */
  push32((uint32_t)(0x120de000u));
  /* 120afcbe call 0x120afe60 */
  push32(0x120afcc3u); f_120afe60();
  /* 120afcc3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120afcc6 pop ebp */
  EBP = (pop32());
  /* 120afcc7 ret  */
  ESPCHK(0x120afc90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fcd0 @ 0x120afcd0 (21 bytes, 10 insns) */
void f_120afcd0(void) {
  FTRACE(0x120afcd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120afcd0 push ebp */
  push32((uint32_t)(EBP));
  /* 120afcd1 mov ebp, esp */
  EBP = (ESP);
  /* 120afcd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 120afcd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 120afcd7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120afcda push eax */
  push32((uint32_t)(EAX));
  /* 120afcdb call 0x120afd50 */
  push32(0x120afce0u); f_120afd50();
  /* 120afce0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120afce3 pop ebp */
  EBP = (pop32());
  /* 120afce4 ret  */
  ESPCHK(0x120afcd0u, _esp0);
  ESP += 4; return;
}

/* __exit @ 0x120afcf0 (21 bytes, 10 insns) */
void f_120afcf0(void) {
  FTRACE(0x120afcf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120afcf0 push ebp */
  push32((uint32_t)(EBP));
  /* 120afcf1 mov ebp, esp */
  EBP = (ESP);
  /* 120afcf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 120afcf5 push 1 */
  push32((uint32_t)(0x1u));
  /* 120afcf7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120afcfa push eax */
  push32((uint32_t)(EAX));
  /* 120afcfb call 0x120afd50 */
  push32(0x120afd00u); f_120afd50();
  /* 120afd00 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120afd03 pop ebp */
  EBP = (pop32());
  /* 120afd04 ret  */
  ESPCHK(0x120afcf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd10 @ 0x120afd10 (19 bytes, 9 insns) */
void f_120afd10(void) {
  FTRACE(0x120afd10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120afd10 push ebp */
  push32((uint32_t)(EBP));
  /* 120afd11 mov ebp, esp */
  EBP = (ESP);
  /* 120afd13 push 1 */
  push32((uint32_t)(0x1u));
  /* 120afd15 push 0 */
  push32((uint32_t)(0x0u));
  /* 120afd17 push 0 */
  push32((uint32_t)(0x0u));
  /* 120afd19 call 0x120afd50 */
  push32(0x120afd1eu); f_120afd50();
  /* 120afd1e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120afd21 pop ebp */
  EBP = (pop32());
  /* 120afd22 ret  */
  ESPCHK(0x120afd10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd30 @ 0x120afd30 (19 bytes, 9 insns) */
void f_120afd30(void) {
  FTRACE(0x120afd30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120afd30 push ebp */
  push32((uint32_t)(EBP));
  /* 120afd31 mov ebp, esp */
  EBP = (ESP);
  /* 120afd33 push 1 */
  push32((uint32_t)(0x1u));
  /* 120afd35 push 1 */
  push32((uint32_t)(0x1u));
  /* 120afd37 push 0 */
  push32((uint32_t)(0x0u));
  /* 120afd39 call 0x120afd50 */
  push32(0x120afd3eu); f_120afd50();
  /* 120afd3e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120afd41 pop ebp */
  EBP = (pop32());
  /* 120afd42 ret  */
  ESPCHK(0x120afd30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd50 @ 0x120afd50 (227 bytes, 61 insns) */
void f_120afd50(void) {
  FTRACE(0x120afd50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120afd50 push ebp */
  push32((uint32_t)(EBP));
  /* 120afd51 mov ebp, esp */
  EBP = (ESP);
  /* 120afd53 push ecx */
  push32((uint32_t)(ECX));
  /* 120afd54 call 0x120afe40 */
  push32(0x120afd59u); f_120afe40();
  /* 120afd59 cmp dword ptr [0x120e11c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120e11c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120afd60 jne 0x120afd73 */
  if (!C.zf) goto L_120afd73;
  /* 120afd62 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120afd65 push eax */
  push32((uint32_t)(EAX));
  /* 120afd66 call dword ptr [0x120e33dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33dc))), 0x120afd6cu);
  /* 120afd6c push eax */
  push32((uint32_t)(EAX));
  /* 120afd6d call dword ptr [0x120e33e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33e0))), 0x120afd73u);
L_120afd73:;
  /* 120afd73 mov dword ptr [0x120e11c0], 1 */
  w32((uint32_t)(0x120e11c0), (0x1u));
  /* 120afd7d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 120afd80 mov byte ptr [0x120e11bc], cl */
  w8((uint32_t)(0x120e11bc), (CL));
  /* 120afd86 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120afd8a jne 0x120afdd3 */
  if (!C.zf) goto L_120afdd3;
  /* 120afd8c cmp dword ptr [0x120e2c18], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e2c18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120afd93 je 0x120afdc1 */
  if (C.zf) goto L_120afdc1;
  /* 120afd95 mov edx, dword ptr [0x120e2c14] */
  EDX = (r32((uint32_t)(0x120e2c14)));
  /* 120afd9b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_120afd9e:;
  /* 120afd9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120afda1 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120afda4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120afda7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120afdaa cmp ecx, dword ptr [0x120e2c18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x120e2c18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120afdb0 jb 0x120afdc1 */
  if (C.cf) goto L_120afdc1;
  /* 120afdb2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120afdb5 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120afdb8 je 0x120afdbf */
  if (C.zf) goto L_120afdbf;
  /* 120afdba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120afdbd call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x120afdbfu);
L_120afdbf:;
  /* 120afdbf jmp 0x120afd9e */
  goto L_120afd9e;
L_120afdc1:;
  /* 120afdc1 push 0x120de93c */
  push32((uint32_t)(0x120de93cu));
  /* 120afdc6 push 0x120de734 */
  push32((uint32_t)(0x120de734u));
  /* 120afdcb call 0x120afe60 */
  push32(0x120afdd0u); f_120afe60();
  /* 120afdd0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120afdd3:;
  /* 120afdd3 push 0x120dec48 */
  push32((uint32_t)(0x120dec48u));
  /* 120afdd8 push 0x120dea40 */
  push32((uint32_t)(0x120dea40u));
  /* 120afddd call 0x120afe60 */
  push32(0x120afde2u); f_120afe60();
  /* 120afde2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120afde5 cmp dword ptr [0x120e11c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e11c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120afdec jne 0x120afe0e */
  if (!C.zf) goto L_120afe0e;
  /* 120afdee push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 120afdf0 call 0x120ae190 */
  push32(0x120afdf5u); f_120ae190();
  /* 120afdf5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120afdf8 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 120afdfb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120afdfd je 0x120afe0e */
  if (C.zf) goto L_120afe0e;
  /* 120afdff mov dword ptr [0x120e11c8], 1 */
  w32((uint32_t)(0x120e11c8), (0x1u));
  /* 120afe09 call 0x120aeaa0 */
  push32(0x120afe0eu); f_120aeaa0();
L_120afe0e:;
  /* 120afe0e cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120afe12 je 0x120afe1b */
  if (C.zf) goto L_120afe1b;
  /* 120afe14 call 0x120afe50 */
  push32(0x120afe19u); f_120afe50();
  /* 120afe19 jmp 0x120afe2f */
  goto L_120afe2f;
L_120afe1b:;
  /* 120afe1b mov dword ptr [0x120e11c4], 1 */
  w32((uint32_t)(0x120e11c4), (0x1u));
  /* 120afe25 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120afe28 push ecx */
  push32((uint32_t)(ECX));
  /* 120afe29 call dword ptr [0x120e3414] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3414))), 0x120afe2fu);
L_120afe2f:;
  /* 120afe2f mov esp, ebp */
  ESP = (EBP);
  /* 120afe31 pop ebp */
  EBP = (pop32());
  /* 120afe32 ret  */
  ESPCHK(0x120afd50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe40 @ 0x120afe40 (15 bytes, 7 insns) */
void f_120afe40(void) {
  FTRACE(0x120afe40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120afe40 push ebp */
  push32((uint32_t)(EBP));
  /* 120afe41 mov ebp, esp */
  EBP = (ESP);
  /* 120afe43 push 0xd */
  push32((uint32_t)(0xdu));
  /* 120afe45 call 0x120acb80 */
  push32(0x120afe4au); f_120acb80();
  /* 120afe4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120afe4d pop ebp */
  EBP = (pop32());
  /* 120afe4e ret  */
  ESPCHK(0x120afe40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe50 @ 0x120afe50 (15 bytes, 7 insns) */
void f_120afe50(void) {
  FTRACE(0x120afe50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120afe50 push ebp */
  push32((uint32_t)(EBP));
  /* 120afe51 mov ebp, esp */
  EBP = (ESP);
  /* 120afe53 push 0xd */
  push32((uint32_t)(0xdu));
  /* 120afe55 call 0x120acc20 */
  push32(0x120afe5au); f_120acc20();
  /* 120afe5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120afe5d pop ebp */
  EBP = (pop32());
  /* 120afe5e ret  */
  ESPCHK(0x120afe50u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x120afe60 (37 bytes, 16 insns) */
void f_120afe60(void) {
  FTRACE(0x120afe60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120afe60 push ebp */
  push32((uint32_t)(EBP));
  /* 120afe61 mov ebp, esp */
  EBP = (ESP);
L_120afe63:;
  /* 120afe63 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120afe66 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120afe69 jae 0x120afe83 */
  if (!C.cf) goto L_120afe83;
  /* 120afe6b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120afe6e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120afe71 je 0x120afe78 */
  if (C.zf) goto L_120afe78;
  /* 120afe73 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120afe76 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x120afe78u);
L_120afe78:;
  /* 120afe78 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120afe7b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120afe7e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 120afe81 jmp 0x120afe63 */
  goto L_120afe63;
L_120afe83:;
  /* 120afe83 pop ebp */
  EBP = (pop32());
  /* 120afe84 ret  */
  ESPCHK(0x120afe60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fe90 @ 0x120afe90 (238 bytes, 75 insns) */
void f_120afe90(void) {
  FTRACE(0x120afe90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120afe90 push ebp */
  push32((uint32_t)(EBP));
  /* 120afe91 mov ebp, esp */
  EBP = (ESP);
  /* 120afe93 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120afe96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120afe99 sub eax, 0x76c */
  { uint32_t _a=(EAX),_b=(0x76cu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120afe9e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 120afea1 cmp dword ptr [ebp + 8], 0x46 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120afea5 jl 0x120afeb0 */
  if ((C.sf!=C.of)) goto L_120afeb0;
  /* 120afea7 cmp dword ptr [ebp + 8], 0x8a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120afeae jle 0x120afeb8 */
  if ((C.zf||C.sf!=C.of)) goto L_120afeb8;
L_120afeb0:;
  /* 120afeb0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120afeb3 jmp 0x120aff7a */
  goto L_120aff7a;
L_120afeb8:;
  /* 120afeb8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120afebb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120afebe add edx, dword ptr [ecx*4 + 0x120df3dc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*4 + 0x120df3dc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120afec5 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 120afec8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120afecb and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 120afece test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120afed0 jne 0x120afee1 */
  if (!C.zf) goto L_120afee1;
  /* 120afed2 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120afed6 jle 0x120afee1 */
  if ((C.zf||C.sf!=C.of)) goto L_120afee1;
  /* 120afed8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120afedb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120afede mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_120afee1:;
  /* 120afee1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120afee4 sub edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120afee7 imul edx, edx, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x16du); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120afeed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120afef0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120afef3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 120afef6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120afef9 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120afefb lea edx, [eax + ecx - 0x11] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x11));
  /* 120afeff imul edx, edx, 0x18 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x18u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120aff02 add edx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120aff05 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120aff08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120aff0b imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120aff0e add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120aff11 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120aff14 add eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120aff17 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120aff1a call 0x120b5bd0 */
  push32(0x120aff1fu); f_120b5bd0();
  /* 120aff1f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120aff22 add ecx, dword ptr [0x120df2f8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x120df2f8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120aff28 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120aff2b mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120aff2e mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 120aff31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120aff34 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 120aff37 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120aff3a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120aff3d mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 120aff40 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120aff43 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 120aff46 cmp dword ptr [ebp + 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aff4a je 0x120aff6b */
  if (C.zf) goto L_120aff6b;
  /* 120aff4c cmp dword ptr [ebp + 0x20], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aff50 jne 0x120aff77 */
  if (!C.zf) goto L_120aff77;
  /* 120aff52 cmp dword ptr [0x120df2fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120df2fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120aff59 je 0x120aff77 */
  if (C.zf) goto L_120aff77;
  /* 120aff5b lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 120aff5e push eax */
  push32((uint32_t)(EAX));
  /* 120aff5f call 0x120b5fe0 */
  push32(0x120aff64u); f_120b5fe0();
  /* 120aff64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aff67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120aff69 je 0x120aff77 */
  if (C.zf) goto L_120aff77;
L_120aff6b:;
  /* 120aff6b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120aff6e add ecx, dword ptr [0x120df300] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x120df300))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120aff74 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_120aff77:;
  /* 120aff77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_120aff7a:;
  /* 120aff7a mov esp, ebp */
  ESP = (EBP);
  /* 120aff7c pop ebp */
  EBP = (pop32());
  /* 120aff7d ret  */
  ESPCHK(0x120afe90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ff80 @ 0x120aff80 (804 bytes, 236 insns) */
void f_120aff80(void) {
  FTRACE(0x120aff80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120aff80 push ebp */
  push32((uint32_t)(EBP));
  /* 120aff81 mov ebp, esp */
  EBP = (ESP);
  /* 120aff83 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120aff86 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 120aff8b push 0x120dbe38 */
  push32((uint32_t)(0x120dbe38u));
  /* 120aff90 push 2 */
  push32((uint32_t)(0x2u));
  /* 120aff92 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 120aff97 call 0x120acc80 */
  push32(0x120aff9cu); f_120acc80();
  /* 120aff9c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120aff9f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 120affa2 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120affa6 jne 0x120affb2 */
  if (!C.zf) goto L_120affb2;
  /* 120affa8 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 120affaa call 0x120ab6f0 */
  push32(0x120affafu); f_120ab6f0();
  /* 120affaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120affb2:;
  /* 120affb2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 120affb5 mov dword ptr [0x120e2ac0], eax */
  w32((uint32_t)(0x120e2ac0), (EAX));
  /* 120affba mov dword ptr [0x120e2bfc], 0x20 */
  w32((uint32_t)(0x120e2bfc), (0x20u));
  /* 120affc4 jmp 0x120affcf */
  goto L_120affcf;
L_120affc6:;
  /* 120affc6 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 120affc9 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120affcc mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_120affcf:;
  /* 120affcf mov edx, dword ptr [0x120e2ac0] */
  EDX = (r32((uint32_t)(0x120e2ac0)));
  /* 120affd5 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120affdb cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120affde jae 0x120b0003 */
  if (!C.cf) goto L_120b0003;
  /* 120affe0 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 120affe3 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 120affe7 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 120affea mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 120afff0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 120afff3 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 120afff7 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 120afffa mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 120b0001 jmp 0x120affc6 */
  goto L_120affc6;
L_120b0003:;
  /* 120b0003 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 120b0006 push ecx */
  push32((uint32_t)(ECX));
  /* 120b0007 call dword ptr [0x120e33d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33d0))), 0x120b000du);
  /* 120b000d mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 120b0010 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120b0016 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b0018 je 0x120b01a5 */
  if (C.zf) goto L_120b01a5;
  /* 120b001e cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0022 je 0x120b01a5 */
  if (C.zf) goto L_120b01a5;
  /* 120b0028 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b002b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120b002d mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 120b0030 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b0033 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0036 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120b0039 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b003c add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b003f mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 120b0042 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0049 jge 0x120b0053 */
  if ((C.sf==C.of)) goto L_120b0053;
  /* 120b004b mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 120b004e mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 120b0051 jmp 0x120b005a */
  goto L_120b005a;
L_120b0053:;
  /* 120b0053 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_120b005a:;
  /* 120b005a mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 120b005d mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 120b0060 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 120b0067 jmp 0x120b0072 */
  goto L_120b0072;
L_120b0069:;
  /* 120b0069 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 120b006c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b006f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_120b0072:;
  /* 120b0072 mov ecx, dword ptr [0x120e2bfc] */
  ECX = (r32((uint32_t)(0x120e2bfc)));
  /* 120b0078 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b007b jge 0x120b0112 */
  if ((C.sf==C.of)) goto L_120b0112;
  /* 120b0081 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 120b0086 push 0x120dbe38 */
  push32((uint32_t)(0x120dbe38u));
  /* 120b008b push 2 */
  push32((uint32_t)(0x2u));
  /* 120b008d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 120b0092 call 0x120acc80 */
  push32(0x120b0097u); f_120acc80();
  /* 120b0097 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b009a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 120b009d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b00a1 jne 0x120b00ae */
  if (!C.zf) goto L_120b00ae;
  /* 120b00a3 mov edx, dword ptr [0x120e2bfc] */
  EDX = (r32((uint32_t)(0x120e2bfc)));
  /* 120b00a9 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 120b00ac jmp 0x120b0112 */
  goto L_120b0112;
L_120b00ae:;
  /* 120b00ae mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 120b00b1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 120b00b4 mov dword ptr [eax*4 + 0x120e2ac0], ecx */
  w32((uint32_t)(EAX*4 + 0x120e2ac0), (ECX));
  /* 120b00bb mov edx, dword ptr [0x120e2bfc] */
  EDX = (r32((uint32_t)(0x120e2bfc)));
  /* 120b00c1 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b00c4 mov dword ptr [0x120e2bfc], edx */
  w32((uint32_t)(0x120e2bfc), (EDX));
  /* 120b00ca jmp 0x120b00d5 */
  goto L_120b00d5;
L_120b00cc:;
  /* 120b00cc mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 120b00cf add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b00d2 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_120b00d5:;
  /* 120b00d5 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 120b00d8 mov edx, dword ptr [ecx*4 + 0x120e2ac0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x120e2ac0)));
  /* 120b00df add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b00e5 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b00e8 jae 0x120b010d */
  if (!C.cf) goto L_120b010d;
  /* 120b00ea mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 120b00ed mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 120b00f1 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 120b00f4 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 120b00fa mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 120b00fd mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 120b0101 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 120b0104 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 120b010b jmp 0x120b00cc */
  goto L_120b00cc;
L_120b010d:;
  /* 120b010d jmp 0x120b0069 */
  goto L_120b0069;
L_120b0112:;
  /* 120b0112 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 120b0119 jmp 0x120b0136 */
  goto L_120b0136;
L_120b011b:;
  /* 120b011b mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 120b011e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0121 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 120b0124 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b0127 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b012a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120b012d mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 120b0130 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0133 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_120b0136:;
  /* 120b0136 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 120b0139 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b013c jge 0x120b01a5 */
  if ((C.sf==C.of)) goto L_120b01a5;
  /* 120b013e mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 120b0141 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0144 je 0x120b01a0 */
  if (C.zf) goto L_120b01a0;
  /* 120b0146 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b0149 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120b014c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 120b014f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b0151 je 0x120b01a0 */
  if (C.zf) goto L_120b01a0;
  /* 120b0153 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b0156 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 120b0159 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 120b015c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b015e jne 0x120b0170 */
  if (!C.zf) goto L_120b0170;
  /* 120b0160 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 120b0163 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120b0165 push edx */
  push32((uint32_t)(EDX));
  /* 120b0166 call dword ptr [0x120e33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33d4))), 0x120b016cu);
  /* 120b016c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b016e je 0x120b01a0 */
  if (C.zf) goto L_120b01a0;
L_120b0170:;
  /* 120b0170 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 120b0173 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 120b0176 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 120b0179 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 120b017c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b017f mov edx, dword ptr [eax*4 + 0x120e2ac0] */
  EDX = (r32((uint32_t)(EAX*4 + 0x120e2ac0)));
  /* 120b0186 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0188 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 120b018b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 120b018e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 120b0191 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120b0193 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 120b0195 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 120b0198 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b019b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 120b019d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_120b01a0:;
  /* 120b01a0 jmp 0x120b011b */
  goto L_120b011b;
L_120b01a5:;
  /* 120b01a5 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 120b01ac jmp 0x120b01b7 */
  goto L_120b01b7;
L_120b01ae:;
  /* 120b01ae mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 120b01b1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b01b4 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_120b01b7:;
  /* 120b01b7 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b01bb jge 0x120b0294 */
  if ((C.sf==C.of)) goto L_120b0294;
  /* 120b01c1 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 120b01c4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b01c7 mov edx, dword ptr [0x120e2ac0] */
  EDX = (r32((uint32_t)(0x120e2ac0)));
  /* 120b01cd add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b01cf mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 120b01d2 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 120b01d5 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b01d8 jne 0x120b0280 */
  if (!C.zf) goto L_120b0280;
  /* 120b01de mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 120b01e1 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 120b01e5 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b01e9 jne 0x120b01f4 */
  if (!C.zf) goto L_120b01f4;
  /* 120b01eb mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 120b01f2 jmp 0x120b0204 */
  goto L_120b0204;
L_120b01f4:;
  /* 120b01f4 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 120b01f7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b01fa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 120b01fc sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b01fe add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0201 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_120b0204:;
  /* 120b0204 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 120b0207 push eax */
  push32((uint32_t)(EAX));
  /* 120b0208 call dword ptr [0x120e3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3434))), 0x120b020eu);
  /* 120b020e mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 120b0211 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0215 je 0x120b026f */
  if (C.zf) goto L_120b026f;
  /* 120b0217 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 120b021a push ecx */
  push32((uint32_t)(ECX));
  /* 120b021b call dword ptr [0x120e33d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33d4))), 0x120b0221u);
  /* 120b0221 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 120b0224 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0228 je 0x120b026f */
  if (C.zf) goto L_120b026f;
  /* 120b022a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 120b022d mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 120b0230 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 120b0232 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 120b0235 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 120b023b cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b023e jne 0x120b0250 */
  if (!C.zf) goto L_120b0250;
  /* 120b0240 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 120b0243 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 120b0246 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 120b0248 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 120b024b mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 120b024e jmp 0x120b026d */
  goto L_120b026d;
L_120b0250:;
  /* 120b0250 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 120b0253 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 120b0259 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b025c jne 0x120b026d */
  if (!C.zf) goto L_120b026d;
  /* 120b025e mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 120b0261 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 120b0264 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 120b0267 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 120b026a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_120b026d:;
  /* 120b026d jmp 0x120b027e */
  goto L_120b027e;
L_120b026f:;
  /* 120b026f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 120b0272 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 120b0275 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 120b0278 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 120b027b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_120b027e:;
  /* 120b027e jmp 0x120b028f */
  goto L_120b028f;
L_120b0280:;
  /* 120b0280 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 120b0283 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 120b0286 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 120b0289 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 120b028c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_120b028f:;
  /* 120b028f jmp 0x120b01ae */
  goto L_120b01ae;
L_120b0294:;
  /* 120b0294 mov eax, dword ptr [0x120e2bfc] */
  EAX = (r32((uint32_t)(0x120e2bfc)));
  /* 120b0299 push eax */
  push32((uint32_t)(EAX));
  /* 120b029a call dword ptr [0x120e33d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33d8))), 0x120b02a0u);
  /* 120b02a0 mov esp, ebp */
  ESP = (EBP);
  /* 120b02a2 pop ebp */
  EBP = (pop32());
  /* 120b02a3 ret  */
  ESPCHK(0x120aff80u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x120b02b0 (155 bytes, 45 insns) */
void f_120b02b0(void) {
  FTRACE(0x120b02b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b02b0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b02b1 mov ebp, esp */
  EBP = (ESP);
  /* 120b02b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b02b6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 120b02bd jmp 0x120b02c8 */
  goto L_120b02c8;
L_120b02bf:;
  /* 120b02bf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b02c2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b02c5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_120b02c8:;
  /* 120b02c8 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b02cc jge 0x120b0347 */
  if ((C.sf==C.of)) goto L_120b0347;
  /* 120b02ce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b02d1 cmp dword ptr [ecx*4 + 0x120e2ac0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x120e2ac0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b02d9 je 0x120b0342 */
  if (C.zf) goto L_120b0342;
  /* 120b02db mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b02de mov eax, dword ptr [edx*4 + 0x120e2ac0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x120e2ac0)));
  /* 120b02e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120b02e8 jmp 0x120b02f3 */
  goto L_120b02f3;
L_120b02ea:;
  /* 120b02ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b02ed add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b02f0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_120b02f3:;
  /* 120b02f3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b02f6 mov eax, dword ptr [edx*4 + 0x120e2ac0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x120e2ac0)));
  /* 120b02fd add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0302 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0305 jae 0x120b031f */
  if (!C.cf) goto L_120b031f;
  /* 120b0307 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b030a cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b030e je 0x120b031d */
  if (C.zf) goto L_120b031d;
  /* 120b0310 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b0313 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0316 push edx */
  push32((uint32_t)(EDX));
  /* 120b0317 call dword ptr [0x120e3458] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3458))), 0x120b031du);
L_120b031d:;
  /* 120b031d jmp 0x120b02ea */
  goto L_120b02ea;
L_120b031f:;
  /* 120b031f push 2 */
  push32((uint32_t)(0x2u));
  /* 120b0321 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b0324 mov ecx, dword ptr [eax*4 + 0x120e2ac0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x120e2ac0)));
  /* 120b032b push ecx */
  push32((uint32_t)(ECX));
  /* 120b032c call 0x120ad710 */
  push32(0x120b0331u); f_120ad710();
  /* 120b0331 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0334 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b0337 mov dword ptr [edx*4 + 0x120e2ac0], 0 */
  w32((uint32_t)(EDX*4 + 0x120e2ac0), (0x0u));
L_120b0342:;
  /* 120b0342 jmp 0x120b02bf */
  goto L_120b02bf;
L_120b0347:;
  /* 120b0347 mov esp, ebp */
  ESP = (EBP);
  /* 120b0349 pop ebp */
  EBP = (pop32());
  /* 120b034a ret  */
  ESPCHK(0x120b02b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010350 @ 0x120b0350 (329 bytes, 102 insns) */
void f_120b0350(void) {
  FTRACE(0x120b0350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b0350 push ebp */
  push32((uint32_t)(EBP));
  /* 120b0351 mov ebp, esp */
  EBP = (ESP);
  /* 120b0353 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b0356 cmp dword ptr [0x120e2c10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e2c10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b035d jne 0x120b0364 */
  if (!C.zf) goto L_120b0364;
  /* 120b035f call 0x120b6cf0 */
  push32(0x120b0364u); f_120b6cf0();
L_120b0364:;
  /* 120b0364 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 120b036b mov eax, dword ptr [0x120e10fc] */
  EAX = (r32((uint32_t)(0x120e10fc)));
  /* 120b0370 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120b0373:;
  /* 120b0373 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b0376 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 120b0379 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b037b je 0x120b03a9 */
  if (C.zf) goto L_120b03a9;
  /* 120b037d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b0380 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120b0383 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0386 je 0x120b0391 */
  if (C.zf) goto L_120b0391;
  /* 120b0388 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b038b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b038e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_120b0391:;
  /* 120b0391 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b0394 push eax */
  push32((uint32_t)(EAX));
  /* 120b0395 call 0x120b1210 */
  push32(0x120b039au); f_120b1210();
  /* 120b039a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b039d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b03a0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 120b03a4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120b03a7 jmp 0x120b0373 */
  goto L_120b0373;
L_120b03a9:;
  /* 120b03a9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 120b03ab push 0x120dbe44 */
  push32((uint32_t)(0x120dbe44u));
  /* 120b03b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 120b03b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b03b5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 120b03bc push ecx */
  push32((uint32_t)(ECX));
  /* 120b03bd call 0x120acc80 */
  push32(0x120b03c2u); f_120acc80();
  /* 120b03c2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b03c5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120b03c8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b03cb mov dword ptr [0x120e11a4], edx */
  w32((uint32_t)(0x120e11a4), (EDX));
  /* 120b03d1 cmp dword ptr [0x120e11a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e11a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b03d8 jne 0x120b03e4 */
  if (!C.zf) goto L_120b03e4;
  /* 120b03da push 9 */
  push32((uint32_t)(0x9u));
  /* 120b03dc call 0x120ab6f0 */
  push32(0x120b03e1u); f_120ab6f0();
  /* 120b03e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120b03e4:;
  /* 120b03e4 mov eax, dword ptr [0x120e10fc] */
  EAX = (r32((uint32_t)(0x120e10fc)));
  /* 120b03e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120b03ec jmp 0x120b03f7 */
  goto L_120b03f7;
L_120b03ee:;
  /* 120b03ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b03f1 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b03f4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_120b03f7:;
  /* 120b03f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b03fa movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 120b03fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b03ff je 0x120b0467 */
  if (C.zf) goto L_120b0467;
  /* 120b0401 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b0404 push ecx */
  push32((uint32_t)(ECX));
  /* 120b0405 call 0x120b1210 */
  push32(0x120b040au); f_120b1210();
  /* 120b040a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b040d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0410 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 120b0413 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b0416 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 120b0419 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b041c je 0x120b0465 */
  if (C.zf) goto L_120b0465;
  /* 120b041e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 120b0420 push 0x120dbe44 */
  push32((uint32_t)(0x120dbe44u));
  /* 120b0425 push 2 */
  push32((uint32_t)(0x2u));
  /* 120b0427 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b042a push ecx */
  push32((uint32_t)(ECX));
  /* 120b042b call 0x120acc80 */
  push32(0x120b0430u); f_120acc80();
  /* 120b0430 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0433 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b0436 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 120b0438 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b043b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b043e jne 0x120b044a */
  if (!C.zf) goto L_120b044a;
  /* 120b0440 push 9 */
  push32((uint32_t)(0x9u));
  /* 120b0442 call 0x120ab6f0 */
  push32(0x120b0447u); f_120ab6f0();
  /* 120b0447 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120b044a:;
  /* 120b044a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b044d push ecx */
  push32((uint32_t)(ECX));
  /* 120b044e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b0451 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120b0453 push eax */
  push32((uint32_t)(EAX));
  /* 120b0454 call 0x120b1390 */
  push32(0x120b0459u); f_120b1390();
  /* 120b0459 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b045c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b045f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0462 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_120b0465:;
  /* 120b0465 jmp 0x120b03ee */
  goto L_120b03ee;
L_120b0467:;
  /* 120b0467 push 2 */
  push32((uint32_t)(0x2u));
  /* 120b0469 mov edx, dword ptr [0x120e10fc] */
  EDX = (r32((uint32_t)(0x120e10fc)));
  /* 120b046f push edx */
  push32((uint32_t)(EDX));
  /* 120b0470 call 0x120ad710 */
  push32(0x120b0475u); f_120ad710();
  /* 120b0475 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0478 mov dword ptr [0x120e10fc], 0 */
  w32((uint32_t)(0x120e10fc), (0x0u));
  /* 120b0482 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b0485 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 120b048b mov dword ptr [0x120e2c00], 1 */
  w32((uint32_t)(0x120e2c00), (0x1u));
  /* 120b0495 mov esp, ebp */
  ESP = (EBP);
  /* 120b0497 pop ebp */
  EBP = (pop32());
  /* 120b0498 ret  */
  ESPCHK(0x120b0350u, _esp0);
  ESP += 4; return;
}

/* FUN_100104a0 @ 0x120b04a0 (216 bytes, 69 insns) */
void f_120b04a0(void) {
  FTRACE(0x120b04a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b04a0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b04a1 mov ebp, esp */
  EBP = (ESP);
  /* 120b04a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b04a6 cmp dword ptr [0x120e2c10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e2c10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b04ad jne 0x120b04b4 */
  if (!C.zf) goto L_120b04b4;
  /* 120b04af call 0x120b6cf0 */
  push32(0x120b04b4u); f_120b6cf0();
L_120b04b4:;
  /* 120b04b4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 120b04b9 push 0x120e11cc */
  push32((uint32_t)(0x120e11ccu));
  /* 120b04be push 0 */
  push32((uint32_t)(0x0u));
  /* 120b04c0 call dword ptr [0x120e343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e343c))), 0x120b04c6u);
  /* 120b04c6 mov dword ptr [0x120e11b4], 0x120e11cc */
  w32((uint32_t)(0x120e11b4), (0x120e11ccu));
  /* 120b04d0 mov eax, dword ptr [0x120e2c34] */
  EAX = (r32((uint32_t)(0x120e2c34)));
  /* 120b04d5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120b04d8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b04da jne 0x120b04e7 */
  if (!C.zf) goto L_120b04e7;
  /* 120b04dc mov edx, dword ptr [0x120e11b4] */
  EDX = (r32((uint32_t)(0x120e11b4)));
  /* 120b04e2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 120b04e5 jmp 0x120b04ef */
  goto L_120b04ef;
L_120b04e7:;
  /* 120b04e7 mov eax, dword ptr [0x120e2c34] */
  EAX = (r32((uint32_t)(0x120e2c34)));
  /* 120b04ec mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_120b04ef:;
  /* 120b04ef mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b04f2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 120b04f5 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 120b04f8 push edx */
  push32((uint32_t)(EDX));
  /* 120b04f9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 120b04fc push eax */
  push32((uint32_t)(EAX));
  /* 120b04fd push 0 */
  push32((uint32_t)(0x0u));
  /* 120b04ff push 0 */
  push32((uint32_t)(0x0u));
  /* 120b0501 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b0504 push ecx */
  push32((uint32_t)(ECX));
  /* 120b0505 call 0x120b0580 */
  push32(0x120b050au); f_120b0580();
  /* 120b050a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b050d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 120b0512 push 0x120dbe50 */
  push32((uint32_t)(0x120dbe50u));
  /* 120b0517 push 2 */
  push32((uint32_t)(0x2u));
  /* 120b0519 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b051c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b051f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 120b0522 push ecx */
  push32((uint32_t)(ECX));
  /* 120b0523 call 0x120acc80 */
  push32(0x120b0528u); f_120acc80();
  /* 120b0528 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b052b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120b052e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0532 jne 0x120b053e */
  if (!C.zf) goto L_120b053e;
  /* 120b0534 push 8 */
  push32((uint32_t)(0x8u));
  /* 120b0536 call 0x120ab6f0 */
  push32(0x120b053bu); f_120ab6f0();
  /* 120b053b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120b053e:;
  /* 120b053e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 120b0541 push edx */
  push32((uint32_t)(EDX));
  /* 120b0542 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 120b0545 push eax */
  push32((uint32_t)(EAX));
  /* 120b0546 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b0549 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b054c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 120b054f push eax */
  push32((uint32_t)(EAX));
  /* 120b0550 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b0553 push ecx */
  push32((uint32_t)(ECX));
  /* 120b0554 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b0557 push edx */
  push32((uint32_t)(EDX));
  /* 120b0558 call 0x120b0580 */
  push32(0x120b055du); f_120b0580();
  /* 120b055d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0560 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b0563 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b0566 mov dword ptr [0x120e1198], eax */
  w32((uint32_t)(0x120e1198), (EAX));
  /* 120b056b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b056e mov dword ptr [0x120e119c], ecx */
  w32((uint32_t)(0x120e119c), (ECX));
  /* 120b0574 mov esp, ebp */
  ESP = (EBP);
  /* 120b0576 pop ebp */
  EBP = (pop32());
  /* 120b0577 ret  */
  ESPCHK(0x120b04a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010580 @ 0x120b0580 (1060 bytes, 360 insns) */
void f_120b0580(void) {
  FTRACE(0x120b0580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b0580 push ebp */
  push32((uint32_t)(EBP));
  /* 120b0581 mov ebp, esp */
  EBP = (ESP);
  /* 120b0583 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b0586 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120b0589 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 120b058f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120b0592 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 120b0598 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b059b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120b059e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b05a2 je 0x120b05b5 */
  if (C.zf) goto L_120b05b5;
  /* 120b05a4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b05a7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b05aa mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 120b05ac mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b05af add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b05b2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_120b05b5:;
  /* 120b05b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b05b8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120b05bb cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b05be jne 0x120b068d */
  if (!C.zf) goto L_120b068d;
L_120b05c4:;
  /* 120b05c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b05c7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b05ca mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120b05cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b05d0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120b05d3 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b05d6 je 0x120b0652 */
  if (C.zf) goto L_120b0652;
  /* 120b05d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b05db movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 120b05de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b05e0 je 0x120b0652 */
  if (C.zf) goto L_120b0652;
  /* 120b05e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b05e5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120b05e7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 120b05e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b05eb mov al, byte ptr [edx + 0x120e2981] */
  AL = (r8((uint32_t)(EDX + 0x120e2981)));
  /* 120b05f1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 120b05f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b05f6 je 0x120b0627 */
  if (C.zf) goto L_120b0627;
  /* 120b05f8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 120b05fb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120b05fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0600 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120b0603 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 120b0605 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0609 je 0x120b0627 */
  if (C.zf) goto L_120b0627;
  /* 120b060b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b060e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b0611 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 120b0613 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 120b0615 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b0618 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b061b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 120b061e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b0621 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0624 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_120b0627:;
  /* 120b0627 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120b062a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120b062c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b062f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120b0632 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 120b0634 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0638 je 0x120b064d */
  if (C.zf) goto L_120b064d;
  /* 120b063a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b063d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b0640 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 120b0642 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 120b0644 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b0647 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b064a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_120b064d:;
  /* 120b064d jmp 0x120b05c4 */
  goto L_120b05c4;
L_120b0652:;
  /* 120b0652 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 120b0655 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120b0657 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b065a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120b065d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 120b065f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0663 je 0x120b0674 */
  if (C.zf) goto L_120b0674;
  /* 120b0665 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b0668 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 120b066b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b066e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0671 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_120b0674:;
  /* 120b0674 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b0677 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120b067a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b067d jne 0x120b0688 */
  if (!C.zf) goto L_120b0688;
  /* 120b067f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b0682 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0685 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_120b0688:;
  /* 120b0688 jmp 0x120b075c */
  goto L_120b075c;
L_120b068d:;
  /* 120b068d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120b0690 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120b0692 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0695 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120b0698 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 120b069a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b069e je 0x120b06b3 */
  if (C.zf) goto L_120b06b3;
  /* 120b06a0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b06a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b06a6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 120b06a8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 120b06aa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b06ad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b06b0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_120b06b3:;
  /* 120b06b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b06b6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 120b06b8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 120b06bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b06be add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b06c1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120b06c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b06c7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 120b06cd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120b06cf mov dl, byte ptr [ecx + 0x120e2981] */
  DL = (r8((uint32_t)(ECX + 0x120e2981)));
  /* 120b06d5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 120b06d8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b06da je 0x120b070b */
  if (C.zf) goto L_120b070b;
  /* 120b06dc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120b06df mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120b06e1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b06e4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120b06e7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 120b06e9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b06ed je 0x120b0702 */
  if (C.zf) goto L_120b0702;
  /* 120b06ef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b06f2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b06f5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 120b06f7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 120b06f9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b06fc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b06ff mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_120b0702:;
  /* 120b0702 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b0705 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0708 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_120b070b:;
  /* 120b070b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b070e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 120b0714 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0717 je 0x120b0737 */
  if (C.zf) goto L_120b0737;
  /* 120b0719 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b071c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120b0721 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b0723 je 0x120b0737 */
  if (C.zf) goto L_120b0737;
  /* 120b0725 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b0728 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 120b072e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0731 jne 0x120b068d */
  if (!C.zf) goto L_120b068d;
L_120b0737:;
  /* 120b0737 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b073a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 120b0740 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b0742 jne 0x120b074f */
  if (!C.zf) goto L_120b074f;
  /* 120b0744 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b0747 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b074a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120b074d jmp 0x120b075c */
  goto L_120b075c;
L_120b074f:;
  /* 120b074f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0753 je 0x120b075c */
  if (C.zf) goto L_120b075c;
  /* 120b0755 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b0758 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_120b075c:;
  /* 120b075c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_120b0763:;
  /* 120b0763 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b0766 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 120b0769 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b076b je 0x120b078e */
  if (C.zf) goto L_120b078e;
L_120b076d:;
  /* 120b076d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b0770 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 120b0773 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0776 je 0x120b0783 */
  if (C.zf) goto L_120b0783;
  /* 120b0778 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b077b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120b077e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0781 jne 0x120b078e */
  if (!C.zf) goto L_120b078e;
L_120b0783:;
  /* 120b0783 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b0786 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0789 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120b078c jmp 0x120b076d */
  goto L_120b076d;
L_120b078e:;
  /* 120b078e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b0791 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120b0794 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b0796 jne 0x120b079d */
  if (!C.zf) goto L_120b079d;
  /* 120b0798 jmp 0x120b097b */
  goto L_120b097b;
L_120b079d:;
  /* 120b079d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b07a1 je 0x120b07b4 */
  if (C.zf) goto L_120b07b4;
  /* 120b07a3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b07a6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b07a9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 120b07ab mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b07ae add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b07b1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_120b07b4:;
  /* 120b07b4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120b07b7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120b07b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b07bc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120b07bf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_120b07c1:;
  /* 120b07c1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 120b07c8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_120b07cf:;
  /* 120b07cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b07d2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 120b07d5 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b07d8 jne 0x120b07ee */
  if (!C.zf) goto L_120b07ee;
  /* 120b07da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b07dd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b07e0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120b07e3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b07e6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b07e9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 120b07ec jmp 0x120b07cf */
  goto L_120b07cf;
L_120b07ee:;
  /* 120b07ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b07f1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120b07f4 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b07f7 jne 0x120b084a */
  if (!C.zf) goto L_120b084a;
  /* 120b07f9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b07fc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120b07fe mov ecx, 2 */
  ECX = (0x2u);
  /* 120b0803 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120b0805 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b0807 jne 0x120b0842 */
  if (!C.zf) goto L_120b0842;
  /* 120b0809 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b080d je 0x120b082f */
  if (C.zf) goto L_120b082f;
  /* 120b080f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b0812 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 120b0816 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0819 jne 0x120b0826 */
  if (!C.zf) goto L_120b0826;
  /* 120b081b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b081e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0821 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120b0824 jmp 0x120b082d */
  goto L_120b082d;
L_120b0826:;
  /* 120b0826 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_120b082d:;
  /* 120b082d jmp 0x120b0836 */
  goto L_120b0836;
L_120b082f:;
  /* 120b082f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_120b0836:;
  /* 120b0836 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120b0838 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b083c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 120b083f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_120b0842:;
  /* 120b0842 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b0845 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 120b0847 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_120b084a:;
  /* 120b084a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b084d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b0850 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b0853 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 120b0856 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b0858 je 0x120b087e */
  if (C.zf) goto L_120b087e;
  /* 120b085a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b085e je 0x120b086f */
  if (C.zf) goto L_120b086f;
  /* 120b0860 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b0863 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 120b0866 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b0869 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b086c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_120b086f:;
  /* 120b086f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120b0872 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120b0874 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0877 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 120b087a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 120b087c jmp 0x120b084a */
  goto L_120b084a;
L_120b087e:;
  /* 120b087e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b0881 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 120b0884 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b0886 je 0x120b08a4 */
  if (C.zf) goto L_120b08a4;
  /* 120b0888 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b088c jne 0x120b08a9 */
  if (!C.zf) goto L_120b08a9;
  /* 120b088e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b0891 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 120b0894 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0897 je 0x120b08a4 */
  if (C.zf) goto L_120b08a4;
  /* 120b0899 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b089c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120b089f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b08a2 jne 0x120b08a9 */
  if (!C.zf) goto L_120b08a9;
L_120b08a4:;
  /* 120b08a4 jmp 0x120b0954 */
  goto L_120b0954;
L_120b08a9:;
  /* 120b08a9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b08ad je 0x120b0946 */
  if (C.zf) goto L_120b0946;
  /* 120b08b3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b08b7 je 0x120b090d */
  if (C.zf) goto L_120b090d;
  /* 120b08b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b08bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b08be mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 120b08c0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120b08c2 mov cl, byte ptr [eax + 0x120e2981] */
  CL = (r8((uint32_t)(EAX + 0x120e2981)));
  /* 120b08c8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 120b08cb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b08cd je 0x120b08f8 */
  if (C.zf) goto L_120b08f8;
  /* 120b08cf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b08d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b08d5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 120b08d7 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 120b08d9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b08dc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b08df mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 120b08e2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b08e5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b08e8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120b08eb mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 120b08ee mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120b08f0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b08f3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120b08f6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_120b08f8:;
  /* 120b08f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b08fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b08fe mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 120b0900 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 120b0902 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b0905 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0908 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 120b090b jmp 0x120b0939 */
  goto L_120b0939;
L_120b090d:;
  /* 120b090d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b0910 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b0912 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 120b0914 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120b0916 mov cl, byte ptr [eax + 0x120e2981] */
  CL = (r8((uint32_t)(EAX + 0x120e2981)));
  /* 120b091c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 120b091f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b0921 je 0x120b0939 */
  if (C.zf) goto L_120b0939;
  /* 120b0923 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b0926 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0929 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120b092c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120b092f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120b0931 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0934 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120b0937 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_120b0939:;
  /* 120b0939 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120b093c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120b093e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0941 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120b0944 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_120b0946:;
  /* 120b0946 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b0949 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b094c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120b094f jmp 0x120b07c1 */
  goto L_120b07c1;
L_120b0954:;
  /* 120b0954 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0958 je 0x120b0969 */
  if (C.zf) goto L_120b0969;
  /* 120b095a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b095d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 120b0960 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b0963 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0966 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_120b0969:;
  /* 120b0969 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 120b096c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120b096e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0971 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 120b0974 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 120b0976 jmp 0x120b0763 */
  goto L_120b0763;
L_120b097b:;
  /* 120b097b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b097f je 0x120b0993 */
  if (C.zf) goto L_120b0993;
  /* 120b0981 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b0984 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 120b098a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b098d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0990 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_120b0993:;
  /* 120b0993 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120b0996 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120b0998 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b099b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120b099e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 120b09a0 mov esp, ebp */
  ESP = (EBP);
  /* 120b09a2 pop ebp */
  EBP = (pop32());
  /* 120b09a3 ret  */
  ESPCHK(0x120b0580u, _esp0);
  ESP += 4; return;
}

/* FUN_100109b0 @ 0x120b09b0 (537 bytes, 173 insns) */
void f_120b09b0(void) {
  FTRACE(0x120b09b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b09b0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b09b1 mov ebp, esp */
  EBP = (ESP);
  /* 120b09b3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b09b6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 120b09bd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 120b09c4 cmp dword ptr [0x120e12d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e12d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b09cb jne 0x120b0a0a */
  if (!C.zf) goto L_120b0a0a;
  /* 120b09cd call dword ptr [0x120e33bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33bc))), 0x120b09d3u);
  /* 120b09d3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 120b09d6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b09da je 0x120b09e8 */
  if (C.zf) goto L_120b09e8;
  /* 120b09dc mov dword ptr [0x120e12d0], 1 */
  w32((uint32_t)(0x120e12d0), (0x1u));
  /* 120b09e6 jmp 0x120b0a0a */
  goto L_120b0a0a;
L_120b09e8:;
  /* 120b09e8 call dword ptr [0x120e33c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33c0))), 0x120b09eeu);
  /* 120b09ee mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 120b09f1 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b09f5 je 0x120b0a03 */
  if (C.zf) goto L_120b0a03;
  /* 120b09f7 mov dword ptr [0x120e12d0], 2 */
  w32((uint32_t)(0x120e12d0), (0x2u));
  /* 120b0a01 jmp 0x120b0a0a */
  goto L_120b0a0a;
L_120b0a03:;
  /* 120b0a03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b0a05 jmp 0x120b0bc5 */
  goto L_120b0bc5;
L_120b0a0a:;
  /* 120b0a0a cmp dword ptr [0x120e12d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120e12d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0a11 jne 0x120b0b0e */
  if (!C.zf) goto L_120b0b0e;
  /* 120b0a17 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0a1b jne 0x120b0a33 */
  if (!C.zf) goto L_120b0a33;
  /* 120b0a1d call dword ptr [0x120e33bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33bc))), 0x120b0a23u);
  /* 120b0a23 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 120b0a26 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0a2a jne 0x120b0a33 */
  if (!C.zf) goto L_120b0a33;
  /* 120b0a2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b0a2e jmp 0x120b0bc5 */
  goto L_120b0bc5;
L_120b0a33:;
  /* 120b0a33 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b0a36 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_120b0a39:;
  /* 120b0a39 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b0a3c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120b0a3e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 120b0a41 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b0a43 je 0x120b0a65 */
  if (C.zf) goto L_120b0a65;
  /* 120b0a45 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b0a48 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0a4b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120b0a4e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b0a51 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120b0a53 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 120b0a56 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b0a58 jne 0x120b0a63 */
  if (!C.zf) goto L_120b0a63;
  /* 120b0a5a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b0a5d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0a60 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_120b0a63:;
  /* 120b0a63 jmp 0x120b0a39 */
  goto L_120b0a39;
L_120b0a65:;
  /* 120b0a65 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b0a68 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b0a6b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 120b0a6d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0a70 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120b0a73 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b0a75 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b0a77 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b0a79 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b0a7b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b0a7e push edx */
  push32((uint32_t)(EDX));
  /* 120b0a7f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b0a82 push eax */
  push32((uint32_t)(EAX));
  /* 120b0a83 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b0a85 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b0a87 call dword ptr [0x120e33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33c4))), 0x120b0a8du);
  /* 120b0a8d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 120b0a90 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0a94 je 0x120b0ab4 */
  if (C.zf) goto L_120b0ab4;
  /* 120b0a96 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 120b0a98 push 0x120dbe5c */
  push32((uint32_t)(0x120dbe5cu));
  /* 120b0a9d push 2 */
  push32((uint32_t)(0x2u));
  /* 120b0a9f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b0aa2 push ecx */
  push32((uint32_t)(ECX));
  /* 120b0aa3 call 0x120acc80 */
  push32(0x120b0aa8u); f_120acc80();
  /* 120b0aa8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0aab mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 120b0aae cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0ab2 jne 0x120b0ac5 */
  if (!C.zf) goto L_120b0ac5;
L_120b0ab4:;
  /* 120b0ab4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b0ab7 push edx */
  push32((uint32_t)(EDX));
  /* 120b0ab8 call dword ptr [0x120e33c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33c8))), 0x120b0abeu);
  /* 120b0abe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b0ac0 jmp 0x120b0bc5 */
  goto L_120b0bc5;
L_120b0ac5:;
  /* 120b0ac5 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b0ac7 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b0ac9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b0acc push eax */
  push32((uint32_t)(EAX));
  /* 120b0acd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b0ad0 push ecx */
  push32((uint32_t)(ECX));
  /* 120b0ad1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b0ad4 push edx */
  push32((uint32_t)(EDX));
  /* 120b0ad5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b0ad8 push eax */
  push32((uint32_t)(EAX));
  /* 120b0ad9 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b0adb push 0 */
  push32((uint32_t)(0x0u));
  /* 120b0add call dword ptr [0x120e33c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33c4))), 0x120b0ae3u);
  /* 120b0ae3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b0ae5 jne 0x120b0afc */
  if (!C.zf) goto L_120b0afc;
  /* 120b0ae7 push 2 */
  push32((uint32_t)(0x2u));
  /* 120b0ae9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b0aec push ecx */
  push32((uint32_t)(ECX));
  /* 120b0aed call 0x120ad710 */
  push32(0x120b0af2u); f_120ad710();
  /* 120b0af2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0af5 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_120b0afc:;
  /* 120b0afc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b0aff push edx */
  push32((uint32_t)(EDX));
  /* 120b0b00 call dword ptr [0x120e33c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33c8))), 0x120b0b06u);
  /* 120b0b06 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b0b09 jmp 0x120b0bc5 */
  goto L_120b0bc5;
L_120b0b0e:;
  /* 120b0b0e cmp dword ptr [0x120e12d0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x120e12d0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0b15 jne 0x120b0bc3 */
  if (!C.zf) goto L_120b0bc3;
  /* 120b0b1b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0b1f jne 0x120b0b37 */
  if (!C.zf) goto L_120b0b37;
  /* 120b0b21 call dword ptr [0x120e33c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33c0))), 0x120b0b27u);
  /* 120b0b27 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 120b0b2a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0b2e jne 0x120b0b37 */
  if (!C.zf) goto L_120b0b37;
  /* 120b0b30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b0b32 jmp 0x120b0bc5 */
  goto L_120b0bc5;
L_120b0b37:;
  /* 120b0b37 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b0b3a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_120b0b3d:;
  /* 120b0b3d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b0b40 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 120b0b43 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b0b45 je 0x120b0b65 */
  if (C.zf) goto L_120b0b65;
  /* 120b0b47 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b0b4a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0b4d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120b0b50 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b0b53 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 120b0b56 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b0b58 jne 0x120b0b63 */
  if (!C.zf) goto L_120b0b63;
  /* 120b0b5a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b0b5d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0b60 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_120b0b63:;
  /* 120b0b63 jmp 0x120b0b3d */
  goto L_120b0b3d;
L_120b0b65:;
  /* 120b0b65 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b0b68 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b0b6b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0b6e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 120b0b71 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 120b0b76 push 0x120dbe5c */
  push32((uint32_t)(0x120dbe5cu));
  /* 120b0b7b push 2 */
  push32((uint32_t)(0x2u));
  /* 120b0b7d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b0b80 push edx */
  push32((uint32_t)(EDX));
  /* 120b0b81 call 0x120acc80 */
  push32(0x120b0b86u); f_120acc80();
  /* 120b0b86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0b89 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120b0b8c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0b90 jne 0x120b0ba0 */
  if (!C.zf) goto L_120b0ba0;
  /* 120b0b92 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b0b95 push eax */
  push32((uint32_t)(EAX));
  /* 120b0b96 call dword ptr [0x120e33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33cc))), 0x120b0b9cu);
  /* 120b0b9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b0b9e jmp 0x120b0bc5 */
  goto L_120b0bc5;
L_120b0ba0:;
  /* 120b0ba0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b0ba3 push ecx */
  push32((uint32_t)(ECX));
  /* 120b0ba4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b0ba7 push edx */
  push32((uint32_t)(EDX));
  /* 120b0ba8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b0bab push eax */
  push32((uint32_t)(EAX));
  /* 120b0bac call 0x120b6d20 */
  push32(0x120b0bb1u); f_120b6d20();
  /* 120b0bb1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0bb4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b0bb7 push ecx */
  push32((uint32_t)(ECX));
  /* 120b0bb8 call dword ptr [0x120e33cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33cc))), 0x120b0bbeu);
  /* 120b0bbe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b0bc1 jmp 0x120b0bc5 */
  goto L_120b0bc5;
L_120b0bc3:;
  /* 120b0bc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120b0bc5:;
  /* 120b0bc5 mov esp, ebp */
  ESP = (EBP);
  /* 120b0bc7 pop ebp */
  EBP = (pop32());
  /* 120b0bc8 ret  */
  ESPCHK(0x120b09b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010bd0 @ 0x120b0bd0 (77 bytes, 25 insns) */
void f_120b0bd0(void) {
  FTRACE(0x120b0bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b0bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b0bd1 mov ebp, esp */
  EBP = (ESP);
  /* 120b0bd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b0bd5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 120b0bda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b0bdc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0be0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 120b0be3 push eax */
  push32((uint32_t)(EAX));
  /* 120b0be4 call dword ptr [0x120e33b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33b4))), 0x120b0beau);
  /* 120b0bea mov dword ptr [0x120e2aac], eax */
  w32((uint32_t)(0x120e2aac), (EAX));
  /* 120b0bef cmp dword ptr [0x120e2aac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e2aac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0bf6 jne 0x120b0bfc */
  if (!C.zf) goto L_120b0bfc;
  /* 120b0bf8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b0bfa jmp 0x120b0c1b */
  goto L_120b0c1b;
L_120b0bfc:;
  /* 120b0bfc call 0x120b3980 */
  push32(0x120b0c01u); f_120b3980();
  /* 120b0c01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b0c03 jne 0x120b0c16 */
  if (!C.zf) goto L_120b0c16;
  /* 120b0c05 mov ecx, dword ptr [0x120e2aac] */
  ECX = (r32((uint32_t)(0x120e2aac)));
  /* 120b0c0b push ecx */
  push32((uint32_t)(ECX));
  /* 120b0c0c call dword ptr [0x120e33b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33b8))), 0x120b0c12u);
  /* 120b0c12 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b0c14 jmp 0x120b0c1b */
  goto L_120b0c1b;
L_120b0c16:;
  /* 120b0c16 mov eax, 1 */
  EAX = (0x1u);
L_120b0c1b:;
  /* 120b0c1b pop ebp */
  EBP = (pop32());
  /* 120b0c1c ret  */
  ESPCHK(0x120b0bd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010c20 @ 0x120b0c20 (156 bytes, 48 insns) */
void f_120b0c20(void) {
  FTRACE(0x120b0c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b0c20 push ebp */
  push32((uint32_t)(EBP));
  /* 120b0c21 mov ebp, esp */
  EBP = (ESP);
  /* 120b0c23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b0c26 mov eax, dword ptr [0x120e2aa8] */
  EAX = (r32((uint32_t)(0x120e2aa8)));
  /* 120b0c2b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120b0c2e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120b0c35 jmp 0x120b0c40 */
  goto L_120b0c40;
L_120b0c37:;
  /* 120b0c37 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b0c3a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0c3d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_120b0c40:;
  /* 120b0c40 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b0c43 cmp edx, dword ptr [0x120e2aa4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x120e2aa4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0c49 jge 0x120b0c96 */
  if ((C.sf==C.of)) goto L_120b0c96;
  /* 120b0c4b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 120b0c50 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 120b0c55 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b0c58 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 120b0c5b push ecx */
  push32((uint32_t)(ECX));
  /* 120b0c5c call dword ptr [0x120e33ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33ac))), 0x120b0c62u);
  /* 120b0c62 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 120b0c67 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b0c69 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b0c6c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 120b0c6f push eax */
  push32((uint32_t)(EAX));
  /* 120b0c70 call dword ptr [0x120e33ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33ac))), 0x120b0c76u);
  /* 120b0c76 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b0c79 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 120b0c7c push edx */
  push32((uint32_t)(EDX));
  /* 120b0c7d push 0 */
  push32((uint32_t)(0x0u));
  /* 120b0c7f mov eax, dword ptr [0x120e2aac] */
  EAX = (r32((uint32_t)(0x120e2aac)));
  /* 120b0c84 push eax */
  push32((uint32_t)(EAX));
  /* 120b0c85 call dword ptr [0x120e33b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33b0))), 0x120b0c8bu);
  /* 120b0c8b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b0c8e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0c91 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120b0c94 jmp 0x120b0c37 */
  goto L_120b0c37;
L_120b0c96:;
  /* 120b0c96 mov edx, dword ptr [0x120e2aa8] */
  EDX = (r32((uint32_t)(0x120e2aa8)));
  /* 120b0c9c push edx */
  push32((uint32_t)(EDX));
  /* 120b0c9d push 0 */
  push32((uint32_t)(0x0u));
  /* 120b0c9f mov eax, dword ptr [0x120e2aac] */
  EAX = (r32((uint32_t)(0x120e2aac)));
  /* 120b0ca4 push eax */
  push32((uint32_t)(EAX));
  /* 120b0ca5 call dword ptr [0x120e33b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33b0))), 0x120b0cabu);
  /* 120b0cab mov ecx, dword ptr [0x120e2aac] */
  ECX = (r32((uint32_t)(0x120e2aac)));
  /* 120b0cb1 push ecx */
  push32((uint32_t)(ECX));
  /* 120b0cb2 call dword ptr [0x120e33b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33b8))), 0x120b0cb8u);
  /* 120b0cb8 mov esp, ebp */
  ESP = (EBP);
  /* 120b0cba pop ebp */
  EBP = (pop32());
  /* 120b0cbb ret  */
  ESPCHK(0x120b0c20u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x120b0cc0 (73 bytes, 19 insns) */
void f_120b0cc0(void) {
  FTRACE(0x120b0cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b0cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b0cc1 mov ebp, esp */
  EBP = (ESP);
  /* 120b0cc3 cmp dword ptr [0x120e1104], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120e1104))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0cca je 0x120b0cde */
  if (C.zf) goto L_120b0cde;
  /* 120b0ccc cmp dword ptr [0x120e1104], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e1104))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0cd3 jne 0x120b0d07 */
  if (!C.zf) goto L_120b0d07;
  /* 120b0cd5 cmp dword ptr [0x120e1108], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120e1108))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0cdc jne 0x120b0d07 */
  if (!C.zf) goto L_120b0d07;
L_120b0cde:;
  /* 120b0cde push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 120b0ce3 call 0x120b0d10 */
  push32(0x120b0ce8u); f_120b0d10();
  /* 120b0ce8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0ceb cmp dword ptr [0x120e12d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e12d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0cf2 je 0x120b0cfa */
  if (C.zf) goto L_120b0cfa;
  /* 120b0cf4 call dword ptr [0x120e12d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e12d4))), 0x120b0cfau);
L_120b0cfa:;
  /* 120b0cfa push 0xff */
  push32((uint32_t)(0xffu));
  /* 120b0cff call 0x120b0d10 */
  push32(0x120b0d04u); f_120b0d10();
  /* 120b0d04 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120b0d07:;
  /* 120b0d07 pop ebp */
  EBP = (pop32());
  /* 120b0d08 ret  */
  ESPCHK(0x120b0cc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010d10 @ 0x120b0d10 (447 bytes, 131 insns) */
void f_120b0d10(void) {
  FTRACE(0x120b0d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b0d10 push ebp */
  push32((uint32_t)(EBP));
  /* 120b0d11 mov ebp, esp */
  EBP = (ESP);
  /* 120b0d13 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b0d19 push ebx */
  push32((uint32_t)(EBX));
  /* 120b0d1a push esi */
  push32((uint32_t)(ESI));
  /* 120b0d1b push edi */
  push32((uint32_t)(EDI));
  /* 120b0d1c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 120b0d23 jmp 0x120b0d2e */
  goto L_120b0d2e;
L_120b0d25:;
  /* 120b0d25 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b0d28 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0d2b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_120b0d2e:;
  /* 120b0d2e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0d32 jae 0x120b0d47 */
  if (!C.cf) goto L_120b0d47;
  /* 120b0d34 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b0d37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b0d3a cmp edx, dword ptr [ecx*8 + 0x120def80] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x120def80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0d41 jne 0x120b0d45 */
  if (!C.zf) goto L_120b0d45;
  /* 120b0d43 jmp 0x120b0d47 */
  goto L_120b0d47;
L_120b0d45:;
  /* 120b0d45 jmp 0x120b0d25 */
  goto L_120b0d25;
L_120b0d47:;
  /* 120b0d47 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b0d4a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b0d4d cmp ecx, dword ptr [eax*8 + 0x120def80] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x120def80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0d54 jne 0x120b0ec8 */
  if (!C.zf) goto L_120b0ec8;
  /* 120b0d5a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0d61 je 0x120b0d84 */
  if (C.zf) goto L_120b0d84;
  /* 120b0d63 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b0d66 mov eax, dword ptr [edx*8 + 0x120def84] */
  EAX = (r32((uint32_t)(EDX*8 + 0x120def84)));
  /* 120b0d6d push eax */
  push32((uint32_t)(EAX));
  /* 120b0d6e push 0 */
  push32((uint32_t)(0x0u));
  /* 120b0d70 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b0d72 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b0d74 push 1 */
  push32((uint32_t)(0x1u));
  /* 120b0d76 call 0x120ab840 */
  push32(0x120b0d7bu); f_120ab840();
  /* 120b0d7b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0d7e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0d81 jne 0x120b0d84 */
  if (!C.zf) goto L_120b0d84;
  /* 120b0d83 int3  */
  x86_unimpl("int3 @ 0x120b0d83");
L_120b0d84:;
  /* 120b0d84 cmp dword ptr [0x120e1104], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120e1104))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0d8b je 0x120b0d9f */
  if (C.zf) goto L_120b0d9f;
  /* 120b0d8d cmp dword ptr [0x120e1104], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e1104))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0d94 jne 0x120b0dd8 */
  if (!C.zf) goto L_120b0dd8;
  /* 120b0d96 cmp dword ptr [0x120e1108], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120e1108))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0d9d jne 0x120b0dd8 */
  if (!C.zf) goto L_120b0dd8;
L_120b0d9f:;
  /* 120b0d9f push 0 */
  push32((uint32_t)(0x0u));
  /* 120b0da1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 120b0da4 push ecx */
  push32((uint32_t)(ECX));
  /* 120b0da5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b0da8 mov eax, dword ptr [edx*8 + 0x120def84] */
  EAX = (r32((uint32_t)(EDX*8 + 0x120def84)));
  /* 120b0daf push eax */
  push32((uint32_t)(EAX));
  /* 120b0db0 call 0x120b1210 */
  push32(0x120b0db5u); f_120b1210();
  /* 120b0db5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0db8 push eax */
  push32((uint32_t)(EAX));
  /* 120b0db9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b0dbc mov edx, dword ptr [ecx*8 + 0x120def84] */
  EDX = (r32((uint32_t)(ECX*8 + 0x120def84)));
  /* 120b0dc3 push edx */
  push32((uint32_t)(EDX));
  /* 120b0dc4 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 120b0dc6 call dword ptr [0x120e3434] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3434))), 0x120b0dccu);
  /* 120b0dcc push eax */
  push32((uint32_t)(EAX));
  /* 120b0dcd call dword ptr [0x120e332c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e332c))), 0x120b0dd3u);
  /* 120b0dd3 jmp 0x120b0ec8 */
  goto L_120b0ec8;
L_120b0dd8:;
  /* 120b0dd8 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0ddf je 0x120b0ec8 */
  if (C.zf) goto L_120b0ec8;
  /* 120b0de5 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 120b0dea lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 120b0df0 push eax */
  push32((uint32_t)(EAX));
  /* 120b0df1 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b0df3 call dword ptr [0x120e343c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e343c))), 0x120b0df9u);
  /* 120b0df9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b0dfb jne 0x120b0e11 */
  if (!C.zf) goto L_120b0e11;
  /* 120b0dfd push 0x120db5e4 */
  push32((uint32_t)(0x120db5e4u));
  /* 120b0e02 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 120b0e08 push ecx */
  push32((uint32_t)(ECX));
  /* 120b0e09 call 0x120b1390 */
  push32(0x120b0e0eu); f_120b1390();
  /* 120b0e0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120b0e11:;
  /* 120b0e11 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 120b0e17 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 120b0e1a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b0e1d push eax */
  push32((uint32_t)(EAX));
  /* 120b0e1e call 0x120b1210 */
  push32(0x120b0e23u); f_120b1210();
  /* 120b0e23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0e26 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0e29 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0e2c jbe 0x120b0e5a */
  if ((C.cf||C.zf)) goto L_120b0e5a;
  /* 120b0e2e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 120b0e34 push ecx */
  push32((uint32_t)(ECX));
  /* 120b0e35 call 0x120b1210 */
  push32(0x120b0e3au); f_120b1210();
  /* 120b0e3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0e3d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b0e40 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 120b0e44 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120b0e47 push 3 */
  push32((uint32_t)(0x3u));
  /* 120b0e49 push 0x120db5e0 */
  push32((uint32_t)(0x120db5e0u));
  /* 120b0e4e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b0e51 push ecx */
  push32((uint32_t)(ECX));
  /* 120b0e52 call 0x120b1c00 */
  push32(0x120b0e57u); f_120b1c00();
  /* 120b0e57 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120b0e5a:;
  /* 120b0e5a push 0x120dc118 */
  push32((uint32_t)(0x120dc118u));
  /* 120b0e5f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 120b0e65 push edx */
  push32((uint32_t)(EDX));
  /* 120b0e66 call 0x120b1390 */
  push32(0x120b0e6bu); f_120b1390();
  /* 120b0e6b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0e6e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b0e71 push eax */
  push32((uint32_t)(EAX));
  /* 120b0e72 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 120b0e78 push ecx */
  push32((uint32_t)(ECX));
  /* 120b0e79 call 0x120b13a0 */
  push32(0x120b0e7eu); f_120b13a0();
  /* 120b0e7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0e81 push 0x120db558 */
  push32((uint32_t)(0x120db558u));
  /* 120b0e86 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 120b0e8c push edx */
  push32((uint32_t)(EDX));
  /* 120b0e8d call 0x120b13a0 */
  push32(0x120b0e92u); f_120b13a0();
  /* 120b0e92 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0e95 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b0e98 mov ecx, dword ptr [eax*8 + 0x120def84] */
  ECX = (r32((uint32_t)(EAX*8 + 0x120def84)));
  /* 120b0e9f push ecx */
  push32((uint32_t)(ECX));
  /* 120b0ea0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 120b0ea6 push edx */
  push32((uint32_t)(EDX));
  /* 120b0ea7 call 0x120b13a0 */
  push32(0x120b0eacu); f_120b13a0();
  /* 120b0eac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0eaf push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 120b0eb4 push 0x120dc0f0 */
  push32((uint32_t)(0x120dc0f0u));
  /* 120b0eb9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 120b0ebf push eax */
  push32((uint32_t)(EAX));
  /* 120b0ec0 call 0x120b1b40 */
  push32(0x120b0ec5u); f_120b1b40();
  /* 120b0ec5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120b0ec8:;
  /* 120b0ec8 pop edi */
  EDI = (pop32());
  /* 120b0ec9 pop esi */
  ESI = (pop32());
  /* 120b0eca pop ebx */
  EBX = (pop32());
  /* 120b0ecb mov esp, ebp */
  ESP = (EBP);
  /* 120b0ecd pop ebp */
  EBP = (pop32());
  /* 120b0ece ret  */
  ESPCHK(0x120b0d10u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x120b0ed0 (80 bytes, 27 insns) */
void f_120b0ed0(void) {
  FTRACE(0x120b0ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b0ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b0ed1 mov ebp, esp */
  EBP = (ESP);
  /* 120b0ed3 push ecx */
  push32((uint32_t)(ECX));
  /* 120b0ed4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120b0edb jmp 0x120b0ee6 */
  goto L_120b0ee6;
L_120b0edd:;
  /* 120b0edd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b0ee0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0ee3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120b0ee6:;
  /* 120b0ee6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0eea jae 0x120b0eff */
  if (!C.cf) goto L_120b0eff;
  /* 120b0eec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b0eef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b0ef2 cmp edx, dword ptr [ecx*8 + 0x120def80] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x120def80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0ef9 jne 0x120b0efd */
  if (!C.zf) goto L_120b0efd;
  /* 120b0efb jmp 0x120b0eff */
  goto L_120b0eff;
L_120b0efd:;
  /* 120b0efd jmp 0x120b0edd */
  goto L_120b0edd;
L_120b0eff:;
  /* 120b0eff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b0f02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b0f05 cmp ecx, dword ptr [eax*8 + 0x120def80] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x120def80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0f0c jne 0x120b0f1a */
  if (!C.zf) goto L_120b0f1a;
  /* 120b0f0e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b0f11 mov eax, dword ptr [edx*8 + 0x120def84] */
  EAX = (r32((uint32_t)(EDX*8 + 0x120def84)));
  /* 120b0f18 jmp 0x120b0f1c */
  goto L_120b0f1c;
L_120b0f1a:;
  /* 120b0f1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120b0f1c:;
  /* 120b0f1c mov esp, ebp */
  ESP = (EBP);
  /* 120b0f1e pop ebp */
  EBP = (pop32());
  /* 120b0f1f ret  */
  ESPCHK(0x120b0ed0u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x120b0f20 (66 bytes, 28 insns) */
void f_120b0f20(void) {
  FTRACE(0x120b0f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b0f20 push ebp */
  push32((uint32_t)(EBP));
  /* 120b0f21 mov ebp, esp */
  EBP = (ESP);
  /* 120b0f23 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0f27 jne 0x120b0f47 */
  if (!C.zf) goto L_120b0f47;
  /* 120b0f29 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0f2d jge 0x120b0f47 */
  if ((C.sf==C.of)) goto L_120b0f47;
  /* 120b0f2f push 1 */
  push32((uint32_t)(0x1u));
  /* 120b0f31 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b0f34 push eax */
  push32((uint32_t)(EAX));
  /* 120b0f35 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b0f38 push ecx */
  push32((uint32_t)(ECX));
  /* 120b0f39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b0f3c push edx */
  push32((uint32_t)(EDX));
  /* 120b0f3d call 0x120b0f70 */
  push32(0x120b0f42u); f_120b0f70();
  /* 120b0f42 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0f45 jmp 0x120b0f5d */
  goto L_120b0f5d;
L_120b0f47:;
  /* 120b0f47 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b0f49 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b0f4c push eax */
  push32((uint32_t)(EAX));
  /* 120b0f4d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b0f50 push ecx */
  push32((uint32_t)(ECX));
  /* 120b0f51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b0f54 push edx */
  push32((uint32_t)(EDX));
  /* 120b0f55 call 0x120b0f70 */
  push32(0x120b0f5au); f_120b0f70();
  /* 120b0f5a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120b0f5d:;
  /* 120b0f5d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b0f60 pop ebp */
  EBP = (pop32());
  /* 120b0f61 ret  */
  ESPCHK(0x120b0f20u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x120b0f70 (194 bytes, 71 insns) */
void f_120b0f70(void) {
  FTRACE(0x120b0f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b0f70 push ebp */
  push32((uint32_t)(EBP));
  /* 120b0f71 mov ebp, esp */
  EBP = (ESP);
  /* 120b0f73 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b0f76 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b0f79 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120b0f7c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0f80 je 0x120b0f99 */
  if (C.zf) goto L_120b0f99;
  /* 120b0f82 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b0f85 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 120b0f88 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b0f8b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0f8e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120b0f91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b0f94 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 120b0f96 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_120b0f99:;
  /* 120b0f99 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b0f9c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_120b0f9f:;
  /* 120b0f9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b0fa2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120b0fa4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120b0fa7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 120b0faa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b0fad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120b0faf div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 120b0fb2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 120b0fb5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0fb9 jbe 0x120b0fd1 */
  if ((C.cf||C.zf)) goto L_120b0fd1;
  /* 120b0fbb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b0fbe add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0fc1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b0fc4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 120b0fc6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b0fc9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0fcc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120b0fcf jmp 0x120b0fe5 */
  goto L_120b0fe5;
L_120b0fd1:;
  /* 120b0fd1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b0fd4 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0fd7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b0fda mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 120b0fdc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b0fdf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b0fe2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_120b0fe5:;
  /* 120b0fe5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b0fe9 ja 0x120b0f9f */
  if ((!C.cf&&!C.zf)) goto L_120b0f9f;
  /* 120b0feb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b0fee mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 120b0ff1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b0ff4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b0ff7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120b0ffa:;
  /* 120b0ffa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b0ffd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 120b0fff mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 120b1002 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b1005 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b1008 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 120b100a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 120b100c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b100f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 120b1012 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 120b1014 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b1017 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b101a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120b101d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b1020 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b1023 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120b1026 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b1029 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b102c jb 0x120b0ffa */
  if (C.cf) goto L_120b0ffa;
  /* 120b102e mov esp, ebp */
  ESP = (EBP);
  /* 120b1030 pop ebp */
  EBP = (pop32());
  /* 120b1031 ret  */
  ESPCHK(0x120b0f70u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x120b1040 (63 bytes, 24 insns) */
void f_120b1040(void) {
  FTRACE(0x120b1040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b1040 push ebp */
  push32((uint32_t)(EBP));
  /* 120b1041 mov ebp, esp */
  EBP = (ESP);
  /* 120b1043 push ecx */
  push32((uint32_t)(ECX));
  /* 120b1044 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b1048 jne 0x120b1059 */
  if (!C.zf) goto L_120b1059;
  /* 120b104a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b104e jge 0x120b1059 */
  if ((C.sf==C.of)) goto L_120b1059;
  /* 120b1050 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 120b1057 jmp 0x120b1060 */
  goto L_120b1060;
L_120b1059:;
  /* 120b1059 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_120b1060:;
  /* 120b1060 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b1063 push eax */
  push32((uint32_t)(EAX));
  /* 120b1064 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b1067 push ecx */
  push32((uint32_t)(ECX));
  /* 120b1068 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b106b push edx */
  push32((uint32_t)(EDX));
  /* 120b106c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b106f push eax */
  push32((uint32_t)(EAX));
  /* 120b1070 call 0x120b0f70 */
  push32(0x120b1075u); f_120b0f70();
  /* 120b1075 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b1078 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b107b mov esp, ebp */
  ESP = (EBP);
  /* 120b107d pop ebp */
  EBP = (pop32());
  /* 120b107e ret  */
  ESPCHK(0x120b1040u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x120b1080 (30 bytes, 14 insns) */
void f_120b1080(void) {
  FTRACE(0x120b1080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b1080 push ebp */
  push32((uint32_t)(EBP));
  /* 120b1081 mov ebp, esp */
  EBP = (ESP);
  /* 120b1083 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b1085 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b1088 push eax */
  push32((uint32_t)(EAX));
  /* 120b1089 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b108c push ecx */
  push32((uint32_t)(ECX));
  /* 120b108d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b1090 push edx */
  push32((uint32_t)(EDX));
  /* 120b1091 call 0x120b0f70 */
  push32(0x120b1096u); f_120b0f70();
  /* 120b1096 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b1099 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b109c pop ebp */
  EBP = (pop32());
  /* 120b109d ret  */
  ESPCHK(0x120b1080u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x120b10a0 (72 bytes, 28 insns) */
void f_120b10a0(void) {
  FTRACE(0x120b10a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b10a0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b10a1 mov ebp, esp */
  EBP = (ESP);
  /* 120b10a3 push ecx */
  push32((uint32_t)(ECX));
  /* 120b10a4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b10a8 jne 0x120b10c1 */
  if (!C.zf) goto L_120b10c1;
  /* 120b10aa cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b10ae jg 0x120b10c1 */
  if ((!C.zf&&C.sf==C.of)) goto L_120b10c1;
  /* 120b10b0 jl 0x120b10b8 */
  if ((C.sf!=C.of)) goto L_120b10b8;
  /* 120b10b2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b10b6 jae 0x120b10c1 */
  if (!C.cf) goto L_120b10c1;
L_120b10b8:;
  /* 120b10b8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 120b10bf jmp 0x120b10c8 */
  goto L_120b10c8;
L_120b10c1:;
  /* 120b10c1 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_120b10c8:;
  /* 120b10c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b10cb push eax */
  push32((uint32_t)(EAX));
  /* 120b10cc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120b10cf push ecx */
  push32((uint32_t)(ECX));
  /* 120b10d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b10d3 push edx */
  push32((uint32_t)(EDX));
  /* 120b10d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b10d7 push eax */
  push32((uint32_t)(EAX));
  /* 120b10d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b10db push ecx */
  push32((uint32_t)(ECX));
  /* 120b10dc call 0x120b10f0 */
  push32(0x120b10e1u); f_120b10f0();
  /* 120b10e1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b10e4 mov esp, ebp */
  ESP = (EBP);
  /* 120b10e6 pop ebp */
  EBP = (pop32());
  /* 120b10e7 ret  */
  ESPCHK(0x120b10a0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x120b10f0 (242 bytes, 91 insns) */
void f_120b10f0(void) {
  FTRACE(0x120b10f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b10f0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b10f1 mov ebp, esp */
  EBP = (ESP);
  /* 120b10f3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b10f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b10f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120b10fc cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b1100 je 0x120b1124 */
  if (C.zf) goto L_120b1124;
  /* 120b1102 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b1105 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 120b1108 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b110b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b110e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120b1111 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b1114 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 120b1116 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b1119 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b111c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 120b111e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 120b1121 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_120b1124:;
  /* 120b1124 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b1127 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_120b112a:;
  /* 120b112a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120b112d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120b112f push ecx */
  push32((uint32_t)(ECX));
  /* 120b1130 push eax */
  push32((uint32_t)(EAX));
  /* 120b1131 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b1134 push edx */
  push32((uint32_t)(EDX));
  /* 120b1135 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b1138 push eax */
  push32((uint32_t)(EAX));
  /* 120b1139 call 0x120b70d0 */
  push32(0x120b113eu); f_120b70d0();
  /* 120b113e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120b1141 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120b1144 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120b1146 push edx */
  push32((uint32_t)(EDX));
  /* 120b1147 push ecx */
  push32((uint32_t)(ECX));
  /* 120b1148 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b114b push eax */
  push32((uint32_t)(EAX));
  /* 120b114c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b114f push ecx */
  push32((uint32_t)(ECX));
  /* 120b1150 call 0x120b7060 */
  push32(0x120b1155u); f_120b7060();
  /* 120b1155 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 120b1158 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 120b115b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b115f jbe 0x120b1177 */
  if ((C.cf||C.zf)) goto L_120b1177;
  /* 120b1161 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b1164 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b1167 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b116a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 120b116c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b116f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b1172 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120b1175 jmp 0x120b118b */
  goto L_120b118b;
L_120b1177:;
  /* 120b1177 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b117a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b117d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b1180 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 120b1182 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b1185 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b1188 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_120b118b:;
  /* 120b118b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b118f ja 0x120b112a */
  if ((!C.cf&&!C.zf)) goto L_120b112a;
  /* 120b1191 jb 0x120b1199 */
  if (C.cf) goto L_120b1199;
  /* 120b1193 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b1197 ja 0x120b112a */
  if ((!C.cf&&!C.zf)) goto L_120b112a;
L_120b1199:;
  /* 120b1199 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b119c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 120b119f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b11a2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b11a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120b11a8:;
  /* 120b11a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b11ab mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 120b11ad mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 120b11b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b11b3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b11b6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 120b11b8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 120b11ba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b11bd mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 120b11c0 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 120b11c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b11c5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b11c8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120b11cb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b11ce add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b11d1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120b11d4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b11d7 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b11da jb 0x120b11a8 */
  if (C.cf) goto L_120b11a8;
  /* 120b11dc mov esp, ebp */
  ESP = (EBP);
  /* 120b11de pop ebp */
  EBP = (pop32());
  /* 120b11df ret 0x14 */
  ESPCHK(0x120b10f0u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x120b11f0 (31 bytes, 15 insns) */
void f_120b11f0(void) {
  FTRACE(0x120b11f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b11f0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b11f1 mov ebp, esp */
  EBP = (ESP);
  /* 120b11f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b11f5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 120b11f8 push eax */
  push32((uint32_t)(EAX));
  /* 120b11f9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b11fc push ecx */
  push32((uint32_t)(ECX));
  /* 120b11fd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b1200 push edx */
  push32((uint32_t)(EDX));
  /* 120b1201 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b1204 push eax */
  push32((uint32_t)(EAX));
  /* 120b1205 call 0x120b10f0 */
  push32(0x120b120au); f_120b10f0();
  /* 120b120a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b120d pop ebp */
  EBP = (pop32());
  /* 120b120e ret  */
  ESPCHK(0x120b11f0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x120b1210 (123 bytes, 44 insns) */
void f_120b1210(void) {
  FTRACE(0x120b1210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b1210 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 120b1214 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 120b121a je 0x120b1230 */
  if (C.zf) goto L_120b1230;
L_120b121c:;
  /* 120b121c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 120b121e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 120b121f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120b1221 je 0x120b1263 */
  if (C.zf) goto L_120b1263;
  /* 120b1223 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 120b1229 jne 0x120b121c */
  if (!C.zf) goto L_120b121c;
  /* 120b122b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_120b1230:;
  /* 120b1230 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 120b1232 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 120b1237 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b1239 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120b123c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 120b123e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b1241 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 120b1246 je 0x120b1230 */
  if (C.zf) goto L_120b1230;
  /* 120b1248 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 120b124b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120b124d je 0x120b1281 */
  if (C.zf) goto L_120b1281;
  /* 120b124f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 120b1251 je 0x120b1277 */
  if (C.zf) goto L_120b1277;
  /* 120b1253 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 120b1258 je 0x120b126d */
  if (C.zf) goto L_120b126d;
  /* 120b125a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 120b125f je 0x120b1263 */
  if (C.zf) goto L_120b1263;
  /* 120b1261 jmp 0x120b1230 */
  goto L_120b1230;
L_120b1263:;
  /* 120b1263 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 120b1266 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 120b126a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b126c ret  */
  ESPCHK(0x120b1210u, _esp0);
  ESP += 4; return;
L_120b126d:;
  /* 120b126d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 120b1270 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 120b1274 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b1276 ret  */
  ESPCHK(0x120b1210u, _esp0);
  ESP += 4; return;
L_120b1277:;
  /* 120b1277 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 120b127a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 120b127e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b1280 ret  */
  ESPCHK(0x120b1210u, _esp0);
  ESP += 4; return;
L_120b1281:;
  /* 120b1281 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 120b1284 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 120b1288 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b128a ret  */
  ESPCHK(0x120b1210u, _esp0);
  ESP += 4; return;
}

/* FUN_10011290 @ 0x120b1290 (249 bytes, 93 insns) */
void f_120b1290(void) {
  FTRACE(0x120b1290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b1290 push ebp */
  push32((uint32_t)(EBP));
  /* 120b1291 mov ebp, esp */
  EBP = (ESP);
  /* 120b1293 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b1296 push ebx */
  push32((uint32_t)(EBX));
  /* 120b1297 push esi */
  push32((uint32_t)(ESI));
  /* 120b1298 push edi */
  push32((uint32_t)(EDI));
  /* 120b1299 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 120b129c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 120b129f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 120b12a2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_120b12a5:;
  /* 120b12a5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b12a9 jne 0x120b12c9 */
  if (!C.zf) goto L_120b12c9;
  /* 120b12ab push 0x120dc150 */
  push32((uint32_t)(0x120dc150u));
  /* 120b12b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b12b2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 120b12b4 push 0x120dc144 */
  push32((uint32_t)(0x120dc144u));
  /* 120b12b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 120b12bb call 0x120ab840 */
  push32(0x120b12c0u); f_120ab840();
  /* 120b12c0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b12c3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b12c6 jne 0x120b12c9 */
  if (!C.zf) goto L_120b12c9;
  /* 120b12c8 int3  */
  x86_unimpl("int3 @ 0x120b12c8");
L_120b12c9:;
  /* 120b12c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120b12cb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b12cd jne 0x120b12a5 */
  if (!C.zf) goto L_120b12a5;
L_120b12cf:;
  /* 120b12cf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b12d3 jne 0x120b12f3 */
  if (!C.zf) goto L_120b12f3;
  /* 120b12d5 push 0x120dc134 */
  push32((uint32_t)(0x120dc134u));
  /* 120b12da push 0 */
  push32((uint32_t)(0x0u));
  /* 120b12dc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 120b12de push 0x120dc144 */
  push32((uint32_t)(0x120dc144u));
  /* 120b12e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 120b12e5 call 0x120ab840 */
  push32(0x120b12eau); f_120ab840();
  /* 120b12ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b12ed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b12f0 jne 0x120b12f3 */
  if (!C.zf) goto L_120b12f3;
  /* 120b12f2 int3  */
  x86_unimpl("int3 @ 0x120b12f2");
L_120b12f3:;
  /* 120b12f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b12f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b12f7 jne 0x120b12cf */
  if (!C.zf) goto L_120b12cf;
  /* 120b12f9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b12fc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 120b1303 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b1306 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b1309 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 120b130c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b130f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b1312 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 120b1314 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b1317 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b131a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 120b131d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120b1320 push edx */
  push32((uint32_t)(EDX));
  /* 120b1321 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b1324 push eax */
  push32((uint32_t)(EAX));
  /* 120b1325 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b1328 push ecx */
  push32((uint32_t)(ECX));
  /* 120b1329 call 0x120b73d0 */
  push32(0x120b132eu); f_120b73d0();
  /* 120b132e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b1331 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 120b1334 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b1337 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 120b133a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b133d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b1340 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 120b1343 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b1346 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b134a jl 0x120b136e */
  if ((C.sf!=C.of)) goto L_120b136e;
  /* 120b134c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b134f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120b1351 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 120b1354 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120b1356 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 120b135c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 120b135f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b1362 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120b1364 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b1367 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b136a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 120b136c jmp 0x120b137f */
  goto L_120b137f;
L_120b136e:;
  /* 120b136e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b1371 push eax */
  push32((uint32_t)(EAX));
  /* 120b1372 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b1374 call 0x120b7150 */
  push32(0x120b1379u); f_120b7150();
  /* 120b1379 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b137c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_120b137f:;
  /* 120b137f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 120b1382 pop edi */
  EDI = (pop32());
  /* 120b1383 pop esi */
  ESI = (pop32());
  /* 120b1384 pop ebx */
  EBX = (pop32());
  /* 120b1385 mov esp, ebp */
  ESP = (EBP);
  /* 120b1387 pop ebp */
  EBP = (pop32());
  /* 120b1388 ret  */
  ESPCHK(0x120b1290u, _esp0);
  ESP += 4; return;
}

/* FUN_10011390 @ 0x120b1390 (7 bytes, 3 insns) */
void f_120b1390(void) {
  FTRACE(0x120b1390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b1390 push edi */
  push32((uint32_t)(EDI));
  /* 120b1391 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 120b1395 jmp 0x120b1401 */
  jmp_ind(0x120b1401u); return;
}

/* FUN_100113a0 @ 0x120b13a0 (224 bytes, 84 insns) */
void f_120b13a0(void) {
  FTRACE(0x120b13a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b13a0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 120b13a4 push edi */
  push32((uint32_t)(EDI));
  /* 120b13a5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 120b13ab je 0x120b13bc */
  if (C.zf) goto L_120b13bc;
L_120b13ad:;
  /* 120b13ad mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 120b13af inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 120b13b0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120b13b2 je 0x120b13ef */
  if (C.zf) goto L_120b13ef;
  /* 120b13b4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 120b13ba jne 0x120b13ad */
  if (!C.zf) goto L_120b13ad;
L_120b13bc:;
  /* 120b13bc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 120b13be mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 120b13c3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b13c5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120b13c8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 120b13ca add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b13cd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 120b13d2 je 0x120b13bc */
  if (C.zf) goto L_120b13bc;
  /* 120b13d4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 120b13d7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120b13d9 je 0x120b13fe */
  if (C.zf) goto L_120b13fe;
  /* 120b13db test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 120b13dd je 0x120b13f9 */
  if (C.zf) goto L_120b13f9;
  /* 120b13df test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 120b13e4 je 0x120b13f4 */
  if (C.zf) goto L_120b13f4;
  /* 120b13e6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 120b13eb je 0x120b13ef */
  if (C.zf) goto L_120b13ef;
  /* 120b13ed jmp 0x120b13bc */
  goto L_120b13bc;
L_120b13ef:;
  /* 120b13ef lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 120b13f2 jmp 0x120b1401 */
  goto L_120b1401;
L_120b13f4:;
  /* 120b13f4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 120b13f7 jmp 0x120b1401 */
  goto L_120b1401;
L_120b13f9:;
  /* 120b13f9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 120b13fc jmp 0x120b1401 */
  goto L_120b1401;
L_120b13fe:;
  /* 120b13fe lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_120b1401:;
  /* 120b1401 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 120b1405 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 120b140b je 0x120b1426 */
  if (C.zf) goto L_120b1426;
L_120b140d:;
  /* 120b140d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 120b140f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 120b1410 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 120b1412 je 0x120b1478 */
  if (C.zf) goto L_120b1478;
  /* 120b1414 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 120b1416 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 120b1417 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 120b141d jne 0x120b140d */
  if (!C.zf) goto L_120b140d;
  /* 120b141f jmp 0x120b1426 */
  goto L_120b1426;
L_120b1421:;
  /* 120b1421 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 120b1423 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_120b1426:;
  /* 120b1426 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 120b142b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 120b142d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b142f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120b1432 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 120b1434 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120b1436 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b1439 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 120b143e je 0x120b1421 */
  if (C.zf) goto L_120b1421;
  /* 120b1440 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 120b1442 je 0x120b1478 */
  if (C.zf) goto L_120b1478;
  /* 120b1444 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 120b1446 je 0x120b146f */
  if (C.zf) goto L_120b146f;
  /* 120b1448 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 120b144e je 0x120b1462 */
  if (C.zf) goto L_120b1462;
  /* 120b1450 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 120b1456 je 0x120b145a */
  if (C.zf) goto L_120b145a;
  /* 120b1458 jmp 0x120b1421 */
  goto L_120b1421;
L_120b145a:;
  /* 120b145a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 120b145c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 120b1460 pop edi */
  EDI = (pop32());
  /* 120b1461 ret  */
  ESPCHK(0x120b13a0u, _esp0);
  ESP += 4; return;
L_120b1462:;
  /* 120b1462 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 120b1465 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 120b1469 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 120b146d pop edi */
  EDI = (pop32());
  /* 120b146e ret  */
  ESPCHK(0x120b13a0u, _esp0);
  ESP += 4; return;
L_120b146f:;
  /* 120b146f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 120b1472 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 120b1476 pop edi */
  EDI = (pop32());
  /* 120b1477 ret  */
  ESPCHK(0x120b13a0u, _esp0);
  ESP += 4; return;
L_120b1478:;
  /* 120b1478 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 120b147a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 120b147e pop edi */
  EDI = (pop32());
  /* 120b147f ret  */
  ESPCHK(0x120b13a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011480 @ 0x120b1480 (243 bytes, 91 insns) */
void f_120b1480(void) {
  FTRACE(0x120b1480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b1480 push ebp */
  push32((uint32_t)(EBP));
  /* 120b1481 mov ebp, esp */
  EBP = (ESP);
  /* 120b1483 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b1486 push ebx */
  push32((uint32_t)(EBX));
  /* 120b1487 push esi */
  push32((uint32_t)(ESI));
  /* 120b1488 push edi */
  push32((uint32_t)(EDI));
  /* 120b1489 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 120b148c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_120b148f:;
  /* 120b148f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b1493 jne 0x120b14b3 */
  if (!C.zf) goto L_120b14b3;
  /* 120b1495 push 0x120dc150 */
  push32((uint32_t)(0x120dc150u));
  /* 120b149a push 0 */
  push32((uint32_t)(0x0u));
  /* 120b149c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 120b149e push 0x120dc160 */
  push32((uint32_t)(0x120dc160u));
  /* 120b14a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 120b14a5 call 0x120ab840 */
  push32(0x120b14aau); f_120ab840();
  /* 120b14aa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b14ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b14b0 jne 0x120b14b3 */
  if (!C.zf) goto L_120b14b3;
  /* 120b14b2 int3  */
  x86_unimpl("int3 @ 0x120b14b2");
L_120b14b3:;
  /* 120b14b3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120b14b5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b14b7 jne 0x120b148f */
  if (!C.zf) goto L_120b148f;
L_120b14b9:;
  /* 120b14b9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b14bd jne 0x120b14dd */
  if (!C.zf) goto L_120b14dd;
  /* 120b14bf push 0x120dc134 */
  push32((uint32_t)(0x120dc134u));
  /* 120b14c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b14c6 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 120b14c8 push 0x120dc160 */
  push32((uint32_t)(0x120dc160u));
  /* 120b14cd push 2 */
  push32((uint32_t)(0x2u));
  /* 120b14cf call 0x120ab840 */
  push32(0x120b14d4u); f_120ab840();
  /* 120b14d4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b14d7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b14da jne 0x120b14dd */
  if (!C.zf) goto L_120b14dd;
  /* 120b14dc int3  */
  x86_unimpl("int3 @ 0x120b14dc");
L_120b14dd:;
  /* 120b14dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120b14df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b14e1 jne 0x120b14b9 */
  if (!C.zf) goto L_120b14b9;
  /* 120b14e3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b14e6 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 120b14ed mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b14f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b14f3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 120b14f6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b14f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b14fc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 120b14fe mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b1501 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b1504 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 120b1507 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120b150a push ecx */
  push32((uint32_t)(ECX));
  /* 120b150b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b150e push edx */
  push32((uint32_t)(EDX));
  /* 120b150f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b1512 push eax */
  push32((uint32_t)(EAX));
  /* 120b1513 call 0x120b73d0 */
  push32(0x120b1518u); f_120b73d0();
  /* 120b1518 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b151b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 120b151e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b1521 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 120b1524 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b1527 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b152a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 120b152d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b1530 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b1534 jl 0x120b1558 */
  if ((C.sf!=C.of)) goto L_120b1558;
  /* 120b1536 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b1539 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120b153b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 120b153e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120b1540 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 120b1546 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 120b1549 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b154c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120b154e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b1551 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b1554 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 120b1556 jmp 0x120b1569 */
  goto L_120b1569;
L_120b1558:;
  /* 120b1558 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b155b push edx */
  push32((uint32_t)(EDX));
  /* 120b155c push 0 */
  push32((uint32_t)(0x0u));
  /* 120b155e call 0x120b7150 */
  push32(0x120b1563u); f_120b7150();
  /* 120b1563 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b1566 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_120b1569:;
  /* 120b1569 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 120b156c pop edi */
  EDI = (pop32());
  /* 120b156d pop esi */
  ESI = (pop32());
  /* 120b156e pop ebx */
  EBX = (pop32());
  /* 120b156f mov esp, ebp */
  ESP = (EBP);
  /* 120b1571 pop ebp */
  EBP = (pop32());
  /* 120b1572 ret  */
  ESPCHK(0x120b1480u, _esp0);
  ESP += 4; return;
}

/* FUN_10011580 @ 0x120b1580 (47 bytes, 17 insns) */
void f_120b1580(void) {
  FTRACE(0x120b1580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b1580 push ecx */
  push32((uint32_t)(ECX));
  /* 120b1581 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b1586 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 120b158a jb 0x120b15a0 */
  if (C.cf) goto L_120b15a0;
L_120b158c:;
  /* 120b158c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b1592 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b1597 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 120b1599 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b159e jae 0x120b158c */
  if (!C.cf) goto L_120b158c;
L_120b15a0:;
  /* 120b15a0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b15a2 mov eax, esp */
  EAX = (ESP);
  /* 120b15a4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 120b15a6 mov esp, ecx */
  ESP = (ECX);
  /* 120b15a8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120b15aa mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 120b15ad push eax */
  push32((uint32_t)(EAX));
  /* 120b15ae ret  */
  ESPCHK(0x120b1580u, _esp0);
  ESP += 4; return;
}

/* FUN_100115b0 @ 0x120b15b0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_120b15b0(void) {
  FTRACE(0x120b15b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b15b0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b15b1 mov ebp, esp */
  EBP = (ESP);
  /* 120b15b3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b15b6 push esi */
  push32((uint32_t)(ESI));
  /* 120b15b7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b15bb je 0x120b15c3 */
  if (C.zf) goto L_120b15c3;
  /* 120b15bd cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b15c1 jne 0x120b15c8 */
  if (!C.zf) goto L_120b15c8;
L_120b15c3:;
  /* 120b15c3 jmp 0x120b1798 */
  goto L_120b1798;
L_120b15c8:;
  /* 120b15c8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b15cc je 0x120b15e4 */
  if (C.zf) goto L_120b15e4;
  /* 120b15ce cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b15d2 je 0x120b15e4 */
  if (C.zf) goto L_120b15e4;
  /* 120b15d4 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b15d8 je 0x120b15e4 */
  if (C.zf) goto L_120b15e4;
  /* 120b15da cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b15de jne 0x120b16c1 */
  if (!C.zf) goto L_120b16c1;
L_120b15e4:;
  /* 120b15e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 120b15e6 call 0x120acb80 */
  push32(0x120b15ebu); f_120acb80();
  /* 120b15eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b15ee cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b15f2 je 0x120b15fa */
  if (C.zf) goto L_120b15fa;
  /* 120b15f4 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b15f8 jne 0x120b163f */
  if (!C.zf) goto L_120b163f;
L_120b15fa:;
  /* 120b15fa cmp dword ptr [0x120e12e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e12e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b1601 jne 0x120b163f */
  if (!C.zf) goto L_120b163f;
  /* 120b1603 push 1 */
  push32((uint32_t)(0x1u));
  /* 120b1605 push 0x120b17e0 */
  push32((uint32_t)(0x120b17e0u));
  /* 120b160a call dword ptr [0x120e33a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33a8))), 0x120b1610u);
  /* 120b1610 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b1613 jne 0x120b1621 */
  if (!C.zf) goto L_120b1621;
  /* 120b1615 mov dword ptr [0x120e12e8], 1 */
  w32((uint32_t)(0x120e12e8), (0x1u));
  /* 120b161f jmp 0x120b163f */
  goto L_120b163f;
L_120b1621:;
  /* 120b1621 call dword ptr [0x120e33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33e8))), 0x120b1627u);
  /* 120b1627 mov esi, eax */
  ESI = (EAX);
  /* 120b1629 call 0x120b8320 */
  push32(0x120b162eu); f_120b8320();
  /* 120b162e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 120b1630 push 1 */
  push32((uint32_t)(0x1u));
  /* 120b1632 call 0x120acc20 */
  push32(0x120b1637u); f_120acc20();
  /* 120b1637 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b163a jmp 0x120b1798 */
  goto L_120b1798;
L_120b163f:;
  /* 120b163f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b1642 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 120b1645 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b1648 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b164b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 120b164e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b1652 ja 0x120b16b2 */
  if ((!C.cf&&!C.zf)) goto L_120b16b2;
  /* 120b1654 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b1657 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120b1659 mov dl, byte ptr [eax + 0x120b17bf] */
  DL = (r8((uint32_t)(EAX + 0x120b17bf)));
  /* 120b165f jmp dword ptr [edx*4 + 0x120b17ab] */
  switch (EDX) {
    case 0: goto L_120b1666;
    case 1: goto L_120b16a0;
    case 2: goto L_120b167a;
    case 3: goto L_120b168d;
    case 4: goto L_120b16b2;
    default: x86_unimpl("switch@0x120b165f out of table"); return;
  }
L_120b1666:;
  /* 120b1666 mov ecx, dword ptr [0x120e12d8] */
  ECX = (r32((uint32_t)(0x120e12d8)));
  /* 120b166c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120b166f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b1672 mov dword ptr [0x120e12d8], edx */
  w32((uint32_t)(0x120e12d8), (EDX));
  /* 120b1678 jmp 0x120b16b2 */
  goto L_120b16b2;
L_120b167a:;
  /* 120b167a mov eax, dword ptr [0x120e12dc] */
  EAX = (r32((uint32_t)(0x120e12dc)));
  /* 120b167f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120b1682 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b1685 mov dword ptr [0x120e12dc], ecx */
  w32((uint32_t)(0x120e12dc), (ECX));
  /* 120b168b jmp 0x120b16b2 */
  goto L_120b16b2;
L_120b168d:;
  /* 120b168d mov edx, dword ptr [0x120e12e0] */
  EDX = (r32((uint32_t)(0x120e12e0)));
  /* 120b1693 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 120b1696 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b1699 mov dword ptr [0x120e12e0], eax */
  w32((uint32_t)(0x120e12e0), (EAX));
  /* 120b169e jmp 0x120b16b2 */
  goto L_120b16b2;
L_120b16a0:;
  /* 120b16a0 mov ecx, dword ptr [0x120e12e4] */
  ECX = (r32((uint32_t)(0x120e12e4)));
  /* 120b16a6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120b16a9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b16ac mov dword ptr [0x120e12e4], edx */
  w32((uint32_t)(0x120e12e4), (EDX));
L_120b16b2:;
  /* 120b16b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 120b16b4 call 0x120acc20 */
  push32(0x120b16b9u); f_120acc20();
  /* 120b16b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b16bc jmp 0x120b1793 */
  goto L_120b1793;
L_120b16c1:;
  /* 120b16c1 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b16c5 je 0x120b16d8 */
  if (C.zf) goto L_120b16d8;
  /* 120b16c7 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b16cb je 0x120b16d8 */
  if (C.zf) goto L_120b16d8;
  /* 120b16cd cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b16d1 je 0x120b16d8 */
  if (C.zf) goto L_120b16d8;
  /* 120b16d3 jmp 0x120b1798 */
  goto L_120b1798;
L_120b16d8:;
  /* 120b16d8 call 0x120af980 */
  push32(0x120b16ddu); f_120af980();
  /* 120b16dd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120b16e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b16e3 cmp dword ptr [eax + 0x50], 0x120df270 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x120df270u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b16ea jne 0x120b1735 */
  if (!C.zf) goto L_120b1735;
  /* 120b16ec push 0x133 */
  push32((uint32_t)(0x133u));
  /* 120b16f1 push 0x120dc16c */
  push32((uint32_t)(0x120dc16cu));
  /* 120b16f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 120b16f8 mov ecx, dword ptr [0x120df2f0] */
  ECX = (r32((uint32_t)(0x120df2f0)));
  /* 120b16fe push ecx */
  push32((uint32_t)(ECX));
  /* 120b16ff call 0x120acc80 */
  push32(0x120b1704u); f_120acc80();
  /* 120b1704 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b1707 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b170a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 120b170d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b1710 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b1714 je 0x120b1733 */
  if (C.zf) goto L_120b1733;
  /* 120b1716 mov ecx, dword ptr [0x120df2f0] */
  ECX = (r32((uint32_t)(0x120df2f0)));
  /* 120b171c push ecx */
  push32((uint32_t)(ECX));
  /* 120b171d push 0x120df270 */
  push32((uint32_t)(0x120df270u));
  /* 120b1722 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b1725 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 120b1728 push eax */
  push32((uint32_t)(EAX));
  /* 120b1729 call 0x120b6d20 */
  push32(0x120b172eu); f_120b6d20();
  /* 120b172e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b1731 jmp 0x120b1735 */
  goto L_120b1735;
L_120b1733:;
  /* 120b1733 jmp 0x120b1798 */
  goto L_120b1798;
L_120b1735:;
  /* 120b1735 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b1738 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 120b173b push edx */
  push32((uint32_t)(EDX));
  /* 120b173c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b173f push eax */
  push32((uint32_t)(EAX));
  /* 120b1740 call 0x120b1ac0 */
  push32(0x120b1745u); f_120b1ac0();
  /* 120b1745 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b1748 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120b174b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b174f jne 0x120b1753 */
  if (!C.zf) goto L_120b1753;
  /* 120b1751 jmp 0x120b1798 */
  goto L_120b1798;
L_120b1753:;
  /* 120b1753 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b1756 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 120b1759 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_120b175c:;
  /* 120b175c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b175f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 120b1762 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b1765 jne 0x120b1793 */
  if (!C.zf) goto L_120b1793;
  /* 120b1767 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b176a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b176d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 120b1770 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b1773 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b1776 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120b1779 mov edx, dword ptr [0x120df2f4] */
  EDX = (r32((uint32_t)(0x120df2f4)));
  /* 120b177f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b1782 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b1785 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 120b1788 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b178a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b178d jb 0x120b1791 */
  if (C.cf) goto L_120b1791;
  /* 120b178f jmp 0x120b1793 */
  goto L_120b1793;
L_120b1791:;
  /* 120b1791 jmp 0x120b175c */
  goto L_120b175c;
L_120b1793:;
  /* 120b1793 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b1796 jmp 0x120b17a6 */
  goto L_120b17a6;
L_120b1798:;
  /* 120b1798 call 0x120b8310 */
  push32(0x120b179du); f_120b8310();
  /* 120b179d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 120b17a3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_120b17a6:;
  /* 120b17a6 pop esi */
  ESI = (pop32());
  /* 120b17a7 mov esp, ebp */
  ESP = (EBP);
  /* 120b17a9 pop ebp */
  EBP = (pop32());
  /* 120b17aa ret  */
  ESPCHK(0x120b15b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100117e0 @ 0x120b17e0 (146 bytes, 45 insns) */
void f_120b17e0(void) {
  FTRACE(0x120b17e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b17e0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b17e1 mov ebp, esp */
  EBP = (ESP);
  /* 120b17e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b17e6 push 1 */
  push32((uint32_t)(0x1u));
  /* 120b17e8 call 0x120acb80 */
  push32(0x120b17edu); f_120acb80();
  /* 120b17ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b17f0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b17f4 jne 0x120b180e */
  if (!C.zf) goto L_120b180e;
  /* 120b17f6 mov dword ptr [ebp - 8], 0x120e12d8 */
  w32((uint32_t)(EBP + -0x8), (0x120e12d8u));
  /* 120b17fd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b1800 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120b1802 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120b1805 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 120b180c jmp 0x120b1824 */
  goto L_120b1824;
L_120b180e:;
  /* 120b180e mov dword ptr [ebp - 8], 0x120e12dc */
  w32((uint32_t)(EBP + -0x8), (0x120e12dcu));
  /* 120b1815 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b1818 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120b181a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120b181d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_120b1824:;
  /* 120b1824 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b1828 jne 0x120b1838 */
  if (!C.zf) goto L_120b1838;
  /* 120b182a push 1 */
  push32((uint32_t)(0x1u));
  /* 120b182c call 0x120acc20 */
  push32(0x120b1831u); f_120acc20();
  /* 120b1831 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b1834 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b1836 jmp 0x120b186c */
  goto L_120b186c;
L_120b1838:;
  /* 120b1838 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b183c je 0x120b185d */
  if (C.zf) goto L_120b185d;
  /* 120b183e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b1841 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 120b1847 push 1 */
  push32((uint32_t)(0x1u));
  /* 120b1849 call 0x120acc20 */
  push32(0x120b184eu); f_120acc20();
  /* 120b184e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b1851 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b1854 push edx */
  push32((uint32_t)(EDX));
  /* 120b1855 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x120b1858u);
  /* 120b1858 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b185b jmp 0x120b1867 */
  goto L_120b1867;
L_120b185d:;
  /* 120b185d push 1 */
  push32((uint32_t)(0x1u));
  /* 120b185f call 0x120acc20 */
  push32(0x120b1864u); f_120acc20();
  /* 120b1864 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120b1867:;
  /* 120b1867 mov eax, 1 */
  EAX = (0x1u);
L_120b186c:;
  /* 120b186c mov esp, ebp */
  ESP = (EBP);
  /* 120b186e pop ebp */
  EBP = (pop32());
  /* 120b186f ret 4 */
  ESPCHK(0x120b17e0u, _esp0);
  ESP += 8; return;
}

/* FUN_10011880 @ 0x120b1880 (522 bytes, 162 insns) [1 switch table(s)] */
void f_120b1880(void) {
  FTRACE(0x120b1880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b1880 push ebp */
  push32((uint32_t)(EBP));
  /* 120b1881 mov ebp, esp */
  EBP = (ESP);
  /* 120b1883 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b1886 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 120b188d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b1890 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 120b1893 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b1896 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b1899 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 120b189c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b18a0 ja 0x120b194e */
  if ((!C.cf&&!C.zf)) goto L_120b194e;
  /* 120b18a6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b18a9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120b18ab mov dl, byte ptr [eax + 0x120b1aa2] */
  DL = (r8((uint32_t)(EAX + 0x120b1aa2)));
  /* 120b18b1 jmp dword ptr [edx*4 + 0x120b1a8a] */
  switch (EDX) {
    case 0: goto L_120b18b8;
    case 1: goto L_120b1923;
    case 2: goto L_120b1909;
    case 3: goto L_120b18d5;
    case 4: goto L_120b18ef;
    case 5: goto L_120b194e;
    default: x86_unimpl("switch@0x120b18b1 out of table"); return;
  }
L_120b18b8:;
  /* 120b18b8 mov dword ptr [ebp - 0x18], 0x120e12d8 */
  w32((uint32_t)(EBP + -0x18), (0x120e12d8u));
  /* 120b18bf mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b18c2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120b18c4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 120b18c7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b18ca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b18cd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120b18d0 jmp 0x120b1956 */
  goto L_120b1956;
L_120b18d5:;
  /* 120b18d5 mov dword ptr [ebp - 0x18], 0x120e12dc */
  w32((uint32_t)(EBP + -0x18), (0x120e12dcu));
  /* 120b18dc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b18df mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120b18e1 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 120b18e4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b18e7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b18ea mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120b18ed jmp 0x120b1956 */
  goto L_120b1956;
L_120b18ef:;
  /* 120b18ef mov dword ptr [ebp - 0x18], 0x120e12e0 */
  w32((uint32_t)(EBP + -0x18), (0x120e12e0u));
  /* 120b18f6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b18f9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120b18fb mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 120b18fe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b1901 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b1904 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120b1907 jmp 0x120b1956 */
  goto L_120b1956;
L_120b1909:;
  /* 120b1909 mov dword ptr [ebp - 0x18], 0x120e12e4 */
  w32((uint32_t)(EBP + -0x18), (0x120e12e4u));
  /* 120b1910 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b1913 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120b1915 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 120b1918 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b191b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b191e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120b1921 jmp 0x120b1956 */
  goto L_120b1956;
L_120b1923:;
  /* 120b1923 call 0x120af980 */
  push32(0x120b1928u); f_120af980();
  /* 120b1928 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120b192b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b192e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 120b1931 push edx */
  push32((uint32_t)(EDX));
  /* 120b1932 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b1935 push eax */
  push32((uint32_t)(EAX));
  /* 120b1936 call 0x120b1ac0 */
  push32(0x120b193bu); f_120b1ac0();
  /* 120b193b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b193e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b1941 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 120b1944 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b1947 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120b1949 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 120b194c jmp 0x120b1956 */
  goto L_120b1956;
L_120b194e:;
  /* 120b194e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120b1951 jmp 0x120b1a86 */
  goto L_120b1a86;
L_120b1956:;
  /* 120b1956 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b195a je 0x120b1966 */
  if (C.zf) goto L_120b1966;
  /* 120b195c push 1 */
  push32((uint32_t)(0x1u));
  /* 120b195e call 0x120acb80 */
  push32(0x120b1963u); f_120acb80();
  /* 120b1963 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120b1966:;
  /* 120b1966 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b196a jne 0x120b1983 */
  if (!C.zf) goto L_120b1983;
  /* 120b196c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b1970 je 0x120b197c */
  if (C.zf) goto L_120b197c;
  /* 120b1972 push 1 */
  push32((uint32_t)(0x1u));
  /* 120b1974 call 0x120acc20 */
  push32(0x120b1979u); f_120acc20();
  /* 120b1979 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120b197c:;
  /* 120b197c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b197e jmp 0x120b1a86 */
  goto L_120b1a86;
L_120b1983:;
  /* 120b1983 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b1987 jne 0x120b19a0 */
  if (!C.zf) goto L_120b19a0;
  /* 120b1989 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b198d je 0x120b1999 */
  if (C.zf) goto L_120b1999;
  /* 120b198f push 1 */
  push32((uint32_t)(0x1u));
  /* 120b1991 call 0x120acc20 */
  push32(0x120b1996u); f_120acc20();
  /* 120b1996 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120b1999:;
  /* 120b1999 push 3 */
  push32((uint32_t)(0x3u));
  /* 120b199b call 0x120afcf0 */
  push32(0x120b19a0u); f_120afcf0();
L_120b19a0:;
  /* 120b19a0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b19a4 je 0x120b19b2 */
  if (C.zf) goto L_120b19b2;
  /* 120b19a6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b19aa je 0x120b19b2 */
  if (C.zf) goto L_120b19b2;
  /* 120b19ac cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b19b0 jne 0x120b19de */
  if (!C.zf) goto L_120b19de;
L_120b19b2:;
  /* 120b19b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b19b5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 120b19b8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 120b19bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b19be mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 120b19c5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b19c9 jne 0x120b19de */
  if (!C.zf) goto L_120b19de;
  /* 120b19cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b19ce mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 120b19d1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120b19d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b19d7 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_120b19de:;
  /* 120b19de cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b19e2 jne 0x120b1a20 */
  if (!C.zf) goto L_120b1a20;
  /* 120b19e4 mov eax, dword ptr [0x120df2e8] */
  EAX = (r32((uint32_t)(0x120df2e8)));
  /* 120b19e9 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 120b19ec jmp 0x120b19f7 */
  goto L_120b19f7;
L_120b19ee:;
  /* 120b19ee mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b19f1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b19f4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_120b19f7:;
  /* 120b19f7 mov edx, dword ptr [0x120df2e8] */
  EDX = (r32((uint32_t)(0x120df2e8)));
  /* 120b19fd add edx, dword ptr [0x120df2ec] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x120df2ec))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b1a03 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b1a06 jge 0x120b1a1e */
  if ((C.sf==C.of)) goto L_120b1a1e;
  /* 120b1a08 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b1a0b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b1a0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b1a11 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 120b1a14 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 120b1a1c jmp 0x120b19ee */
  goto L_120b19ee;
L_120b1a1e:;
  /* 120b1a1e jmp 0x120b1a29 */
  goto L_120b1a29;
L_120b1a20:;
  /* 120b1a20 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b1a23 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_120b1a29:;
  /* 120b1a29 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b1a2d je 0x120b1a39 */
  if (C.zf) goto L_120b1a39;
  /* 120b1a2f push 1 */
  push32((uint32_t)(0x1u));
  /* 120b1a31 call 0x120acc20 */
  push32(0x120b1a36u); f_120acc20();
  /* 120b1a36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120b1a39:;
  /* 120b1a39 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b1a3d jne 0x120b1a50 */
  if (!C.zf) goto L_120b1a50;
  /* 120b1a3f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b1a42 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 120b1a45 push edx */
  push32((uint32_t)(EDX));
  /* 120b1a46 push 8 */
  push32((uint32_t)(0x8u));
  /* 120b1a48 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x120b1a4bu);
  /* 120b1a4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b1a4e jmp 0x120b1a5a */
  goto L_120b1a5a;
L_120b1a50:;
  /* 120b1a50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b1a53 push eax */
  push32((uint32_t)(EAX));
  /* 120b1a54 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x120b1a57u);
  /* 120b1a57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120b1a5a:;
  /* 120b1a5a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b1a5e je 0x120b1a6c */
  if (C.zf) goto L_120b1a6c;
  /* 120b1a60 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b1a64 je 0x120b1a6c */
  if (C.zf) goto L_120b1a6c;
  /* 120b1a66 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b1a6a jne 0x120b1a84 */
  if (!C.zf) goto L_120b1a84;
L_120b1a6c:;
  /* 120b1a6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b1a6f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b1a72 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 120b1a75 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b1a79 jne 0x120b1a84 */
  if (!C.zf) goto L_120b1a84;
  /* 120b1a7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b1a7e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b1a81 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_120b1a84:;
  /* 120b1a84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120b1a86:;
  /* 120b1a86 mov esp, ebp */
  ESP = (EBP);
  /* 120b1a88 pop ebp */
  EBP = (pop32());
  /* 120b1a89 ret  */
  ESPCHK(0x120b1880u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ac0 @ 0x120b1ac0 (91 bytes, 35 insns) */
void f_120b1ac0(void) {
  FTRACE(0x120b1ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b1ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b1ac1 mov ebp, esp */
  EBP = (ESP);
  /* 120b1ac3 push ecx */
  push32((uint32_t)(ECX));
  /* 120b1ac4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b1ac7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120b1aca:;
  /* 120b1aca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b1acd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 120b1ad0 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b1ad3 je 0x120b1af3 */
  if (C.zf) goto L_120b1af3;
  /* 120b1ad5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b1ad8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b1adb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120b1ade mov ecx, dword ptr [0x120df2f4] */
  ECX = (r32((uint32_t)(0x120df2f4)));
  /* 120b1ae4 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b1ae7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b1aea add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b1aec cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b1aef jae 0x120b1af3 */
  if (!C.cf) goto L_120b1af3;
  /* 120b1af1 jmp 0x120b1aca */
  goto L_120b1aca;
L_120b1af3:;
  /* 120b1af3 mov eax, dword ptr [0x120df2f4] */
  EAX = (r32((uint32_t)(0x120df2f4)));
  /* 120b1af8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b1afb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b1afe add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b1b00 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b1b03 jae 0x120b1b15 */
  if (!C.cf) goto L_120b1b15;
  /* 120b1b05 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b1b08 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 120b1b0b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b1b0e jne 0x120b1b15 */
  if (!C.zf) goto L_120b1b15;
  /* 120b1b10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b1b13 jmp 0x120b1b17 */
  goto L_120b1b17;
L_120b1b15:;
  /* 120b1b15 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120b1b17:;
  /* 120b1b17 mov esp, ebp */
  ESP = (EBP);
  /* 120b1b19 pop ebp */
  EBP = (pop32());
  /* 120b1b1a ret  */
  ESPCHK(0x120b1ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b20 @ 0x120b1b20 (13 bytes, 6 insns) */
void f_120b1b20(void) {
  FTRACE(0x120b1b20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b1b20 push ebp */
  push32((uint32_t)(EBP));
  /* 120b1b21 mov ebp, esp */
  EBP = (ESP);
  /* 120b1b23 call 0x120af980 */
  push32(0x120b1b28u); f_120af980();
  /* 120b1b28 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b1b2b pop ebp */
  EBP = (pop32());
  /* 120b1b2c ret  */
  ESPCHK(0x120b1b20u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b30 @ 0x120b1b30 (13 bytes, 6 insns) */
void f_120b1b30(void) {
  FTRACE(0x120b1b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b1b30 push ebp */
  push32((uint32_t)(EBP));
  /* 120b1b31 mov ebp, esp */
  EBP = (ESP);
  /* 120b1b33 call 0x120af980 */
  push32(0x120b1b38u); f_120af980();
  /* 120b1b38 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b1b3b pop ebp */
  EBP = (pop32());
  /* 120b1b3c ret  */
  ESPCHK(0x120b1b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b40 @ 0x120b1b40 (187 bytes, 54 insns) */
void f_120b1b40(void) {
  FTRACE(0x120b1b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b1b40 push ebp */
  push32((uint32_t)(EBP));
  /* 120b1b41 mov ebp, esp */
  EBP = (ESP);
  /* 120b1b43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b1b46 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120b1b4d cmp dword ptr [0x120e12ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e12ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b1b54 jne 0x120b1bb3 */
  if (!C.zf) goto L_120b1bb3;
  /* 120b1b56 push 0x120db4b8 */
  push32((uint32_t)(0x120db4b8u));
  /* 120b1b5b call dword ptr [0x120e3448] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3448))), 0x120b1b61u);
  /* 120b1b61 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120b1b64 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b1b68 je 0x120b1b87 */
  if (C.zf) goto L_120b1b87;
  /* 120b1b6a push 0x120dc19c */
  push32((uint32_t)(0x120dc19cu));
  /* 120b1b6f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b1b72 push eax */
  push32((uint32_t)(EAX));
  /* 120b1b73 call dword ptr [0x120e3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3444))), 0x120b1b79u);
  /* 120b1b79 mov dword ptr [0x120e12ec], eax */
  w32((uint32_t)(0x120e12ec), (EAX));
  /* 120b1b7e cmp dword ptr [0x120e12ec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e12ec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b1b85 jne 0x120b1b8b */
  if (!C.zf) goto L_120b1b8b;
L_120b1b87:;
  /* 120b1b87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b1b89 jmp 0x120b1bf7 */
  goto L_120b1bf7;
L_120b1b8b:;
  /* 120b1b8b push 0x120dc18c */
  push32((uint32_t)(0x120dc18cu));
  /* 120b1b90 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b1b93 push ecx */
  push32((uint32_t)(ECX));
  /* 120b1b94 call dword ptr [0x120e3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3444))), 0x120b1b9au);
  /* 120b1b9a mov dword ptr [0x120e12f0], eax */
  w32((uint32_t)(0x120e12f0), (EAX));
  /* 120b1b9f push 0x120dc178 */
  push32((uint32_t)(0x120dc178u));
  /* 120b1ba4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b1ba7 push edx */
  push32((uint32_t)(EDX));
  /* 120b1ba8 call dword ptr [0x120e3444] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3444))), 0x120b1baeu);
  /* 120b1bae mov dword ptr [0x120e12f4], eax */
  w32((uint32_t)(0x120e12f4), (EAX));
L_120b1bb3:;
  /* 120b1bb3 cmp dword ptr [0x120e12f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e12f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b1bba je 0x120b1bc5 */
  if (C.zf) goto L_120b1bc5;
  /* 120b1bbc call dword ptr [0x120e12f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e12f0))), 0x120b1bc2u);
  /* 120b1bc2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120b1bc5:;
  /* 120b1bc5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b1bc9 je 0x120b1be1 */
  if (C.zf) goto L_120b1be1;
  /* 120b1bcb cmp dword ptr [0x120e12f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e12f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b1bd2 je 0x120b1be1 */
  if (C.zf) goto L_120b1be1;
  /* 120b1bd4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b1bd7 push eax */
  push32((uint32_t)(EAX));
  /* 120b1bd8 call dword ptr [0x120e12f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e12f4))), 0x120b1bdeu);
  /* 120b1bde mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120b1be1:;
  /* 120b1be1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b1be4 push ecx */
  push32((uint32_t)(ECX));
  /* 120b1be5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b1be8 push edx */
  push32((uint32_t)(EDX));
  /* 120b1be9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b1bec push eax */
  push32((uint32_t)(EAX));
  /* 120b1bed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b1bf0 push ecx */
  push32((uint32_t)(ECX));
  /* 120b1bf1 call dword ptr [0x120e12ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e12ec))), 0x120b1bf7u);
L_120b1bf7:;
  /* 120b1bf7 mov esp, ebp */
  ESP = (EBP);
  /* 120b1bf9 pop ebp */
  EBP = (pop32());
  /* 120b1bfa ret  */
  ESPCHK(0x120b1b40u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x120b1c00 (254 bytes, 109 insns) */
void f_120b1c00(void) {
  FTRACE(0x120b1c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b1c00 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 120b1c04 push edi */
  push32((uint32_t)(EDI));
  /* 120b1c05 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b1c07 je 0x120b1c83 */
  if (C.zf) goto L_120b1c83;
  /* 120b1c09 push esi */
  push32((uint32_t)(ESI));
  /* 120b1c0a push ebx */
  push32((uint32_t)(EBX));
  /* 120b1c0b mov ebx, ecx */
  EBX = (ECX);
  /* 120b1c0d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 120b1c11 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 120b1c17 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 120b1c1b jne 0x120b1c24 */
  if (!C.zf) goto L_120b1c24;
  /* 120b1c1d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 120b1c20 jne 0x120b1c91 */
  if (!C.zf) goto L_120b1c91;
  /* 120b1c22 jmp 0x120b1c45 */
  goto L_120b1c45;
L_120b1c24:;
  /* 120b1c24 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120b1c26 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120b1c27 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 120b1c29 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 120b1c2a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 120b1c2b je 0x120b1c52 */
  if (C.zf) goto L_120b1c52;
  /* 120b1c2d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120b1c2f je 0x120b1c5a */
  if (C.zf) goto L_120b1c5a;
  /* 120b1c31 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 120b1c37 jne 0x120b1c24 */
  if (!C.zf) goto L_120b1c24;
  /* 120b1c39 mov ebx, ecx */
  EBX = (ECX);
  /* 120b1c3b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 120b1c3e jne 0x120b1c91 */
  if (!C.zf) goto L_120b1c91;
L_120b1c40:;
  /* 120b1c40 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 120b1c43 je 0x120b1c52 */
  if (C.zf) goto L_120b1c52;
L_120b1c45:;
  /* 120b1c45 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120b1c47 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120b1c48 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 120b1c4a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 120b1c4b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 120b1c4d je 0x120b1c7e */
  if (C.zf) goto L_120b1c7e;
  /* 120b1c4f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 120b1c50 jne 0x120b1c45 */
  if (!C.zf) goto L_120b1c45;
L_120b1c52:;
  /* 120b1c52 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 120b1c56 pop ebx */
  EBX = (pop32());
  /* 120b1c57 pop esi */
  ESI = (pop32());
  /* 120b1c58 pop edi */
  EDI = (pop32());
  /* 120b1c59 ret  */
  ESPCHK(0x120b1c00u, _esp0);
  ESP += 4; return;
L_120b1c5a:;
  /* 120b1c5a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 120b1c60 je 0x120b1c74 */
  if (C.zf) goto L_120b1c74;
L_120b1c62:;
  /* 120b1c62 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 120b1c64 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 120b1c65 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 120b1c66 je 0x120b1cf6 */
  if (C.zf) goto L_120b1cf6;
  /* 120b1c6c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 120b1c72 jne 0x120b1c62 */
  if (!C.zf) goto L_120b1c62;
L_120b1c74:;
  /* 120b1c74 mov ebx, ecx */
  EBX = (ECX);
  /* 120b1c76 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 120b1c79 jne 0x120b1ce7 */
  if (!C.zf) goto L_120b1ce7;
L_120b1c7b:;
  /* 120b1c7b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 120b1c7d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_120b1c7e:;
  /* 120b1c7e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 120b1c7f jne 0x120b1c7b */
  if (!C.zf) goto L_120b1c7b;
  /* 120b1c81 pop ebx */
  EBX = (pop32());
  /* 120b1c82 pop esi */
  ESI = (pop32());
L_120b1c83:;
  /* 120b1c83 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 120b1c87 pop edi */
  EDI = (pop32());
  /* 120b1c88 ret  */
  ESPCHK(0x120b1c00u, _esp0);
  ESP += 4; return;
L_120b1c89:;
  /* 120b1c89 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 120b1c8b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 120b1c8e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 120b1c8f je 0x120b1c40 */
  if (C.zf) goto L_120b1c40;
L_120b1c91:;
  /* 120b1c91 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 120b1c96 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 120b1c98 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b1c9a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120b1c9d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 120b1c9f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 120b1ca1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120b1ca4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 120b1ca9 je 0x120b1c89 */
  if (C.zf) goto L_120b1c89;
  /* 120b1cab test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 120b1cad je 0x120b1cdb */
  if (C.zf) goto L_120b1cdb;
  /* 120b1caf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 120b1cb1 je 0x120b1cd1 */
  if (C.zf) goto L_120b1cd1;
  /* 120b1cb3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 120b1cb9 je 0x120b1cc7 */
  if (C.zf) goto L_120b1cc7;
  /* 120b1cbb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 120b1cc1 jne 0x120b1c89 */
  if (!C.zf) goto L_120b1c89;
  /* 120b1cc3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 120b1cc5 jmp 0x120b1cdf */
  goto L_120b1cdf;
L_120b1cc7:;
  /* 120b1cc7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120b1ccd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 120b1ccf jmp 0x120b1cdf */
  goto L_120b1cdf;
L_120b1cd1:;
  /* 120b1cd1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 120b1cd7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 120b1cd9 jmp 0x120b1cdf */
  goto L_120b1cdf;
L_120b1cdb:;
  /* 120b1cdb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120b1cdd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_120b1cdf:;
  /* 120b1cdf add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 120b1ce2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b1ce4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 120b1ce5 je 0x120b1cf1 */
  if (C.zf) goto L_120b1cf1;
L_120b1ce7:;
  /* 120b1ce7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120b1ce9:;
  /* 120b1ce9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 120b1ceb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 120b1cee dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 120b1cef jne 0x120b1ce9 */
  if (!C.zf) goto L_120b1ce9;
L_120b1cf1:;
  /* 120b1cf1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 120b1cf4 jne 0x120b1c7b */
  if (!C.zf) goto L_120b1c7b;
L_120b1cf6:;
  /* 120b1cf6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 120b1cfa pop ebx */
  EBX = (pop32());
  /* 120b1cfb pop esi */
  ESI = (pop32());
  /* 120b1cfc pop edi */
  EDI = (pop32());
  /* 120b1cfd ret  */
  ESPCHK(0x120b1c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d00 @ 0x120b1d00 (348 bytes, 114 insns) [1 switch table(s)] */
void f_120b1d00(void) {
  FTRACE(0x120b1d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b1d00 push ebp */
  push32((uint32_t)(EBP));
  /* 120b1d01 mov ebp, esp */
  EBP = (ESP);
  /* 120b1d03 sub esp, 0x70 */
  { uint32_t _a=(ESP),_b=(0x70u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b1d06 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b1d09 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120b1d0b mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 120b1d0e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 120b1d11 lea edx, [ebp - 0x10] */
  EDX = ((uint32_t)(EBP + -0x10));
  /* 120b1d14 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 120b1d17 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b1d1a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120b1d1c mov dword ptr [ebp - 0x6c], ecx */
  w32((uint32_t)(EBP + -0x6c), (ECX));
  /* 120b1d1f mov edx, dword ptr [ebp - 0x6c] */
  EDX = (r32((uint32_t)(EBP + -0x6c)));
  /* 120b1d22 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b1d25 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
  /* 120b1d28 cmp dword ptr [ebp - 0x6c], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x6c))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b1d2c ja 0x120b1d6e */
  if ((!C.cf&&!C.zf)) goto L_120b1d6e;
  /* 120b1d2e mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 120b1d31 jmp dword ptr [eax*4 + 0x120b1e5c] */
  switch (EAX) {
    case 0: goto L_120b1d38;
    case 1: goto L_120b1d53;
    case 2: goto L_120b1d41;
    case 3: goto L_120b1d4a;
    case 4: goto L_120b1d38;
    case 5: goto L_120b1d6e;
    case 6: goto L_120b1d65;
    case 7: goto L_120b1d5c;
    default: x86_unimpl("switch@0x120b1d31 out of table"); return;
  }
L_120b1d38:;
  /* 120b1d38 mov dword ptr [ebp - 4], 8 */
  w32((uint32_t)(EBP + -0x4), (0x8u));
  /* 120b1d3f jmp 0x120b1d75 */
  goto L_120b1d75;
L_120b1d41:;
  /* 120b1d41 mov dword ptr [ebp - 4], 0x11 */
  w32((uint32_t)(EBP + -0x4), (0x11u));
  /* 120b1d48 jmp 0x120b1d75 */
  goto L_120b1d75;
L_120b1d4a:;
  /* 120b1d4a mov dword ptr [ebp - 4], 0x12 */
  w32((uint32_t)(EBP + -0x4), (0x12u));
  /* 120b1d51 jmp 0x120b1d75 */
  goto L_120b1d75;
L_120b1d53:;
  /* 120b1d53 mov dword ptr [ebp - 4], 4 */
  w32((uint32_t)(EBP + -0x4), (0x4u));
  /* 120b1d5a jmp 0x120b1d75 */
  goto L_120b1d75;
L_120b1d5c:;
  /* 120b1d5c mov dword ptr [ebp - 4], 0x10 */
  w32((uint32_t)(EBP + -0x4), (0x10u));
  /* 120b1d63 jmp 0x120b1d75 */
  goto L_120b1d75;
L_120b1d65:;
  /* 120b1d65 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b1d68 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
L_120b1d6e:;
  /* 120b1d6e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_120b1d75:;
  /* 120b1d75 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b1d79 je 0x120b1e0a */
  if (C.zf) goto L_120b1e0a;
  /* 120b1d7f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b1d82 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120b1d84 push eax */
  push32((uint32_t)(EAX));
  /* 120b1d85 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b1d88 add ecx, 0x18 */
  { uint32_t _a=(ECX),_b=(0x18u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b1d8b push ecx */
  push32((uint32_t)(ECX));
  /* 120b1d8c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b1d8f push edx */
  push32((uint32_t)(EDX));
  /* 120b1d90 call 0x120b8a60 */
  push32(0x120b1d95u); f_120b8a60();
  /* 120b1d95 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b1d98 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b1d9a jne 0x120b1e0a */
  if (!C.zf) goto L_120b1e0a;
  /* 120b1d9c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b1d9f mov dword ptr [ebp - 0x70], eax */
  w32((uint32_t)(EBP + -0x70), (EAX));
  /* 120b1da2 cmp dword ptr [ebp - 0x70], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b1da6 je 0x120b1db6 */
  if (C.zf) goto L_120b1db6;
  /* 120b1da8 cmp dword ptr [ebp - 0x70], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b1dac je 0x120b1db6 */
  if (C.zf) goto L_120b1db6;
  /* 120b1dae cmp dword ptr [ebp - 0x70], 0x1d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x1du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b1db2 je 0x120b1db6 */
  if (C.zf) goto L_120b1db6;
  /* 120b1db4 jmp 0x120b1ddc */
  goto L_120b1ddc;
L_120b1db6:;
  /* 120b1db6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b1db9 or ecx, 1 */
  { uint32_t _r=(ECX)|(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 120b1dbc mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 120b1dbf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b1dc2 and edx, 0xffffffe1 */
  { uint32_t _r=(EDX)&(0xffffffe1u); EDX = (_r); fl_logic(_r,32); }
  /* 120b1dc5 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 120b1dc8 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 120b1dcb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b1dce mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 120b1dd1 mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
  /* 120b1dd4 mov edx, dword ptr [eax + 0x14] */
  EDX = (r32((uint32_t)(EAX + 0x14)));
  /* 120b1dd7 mov dword ptr [ebp - 0x3c], edx */
  w32((uint32_t)(EBP + -0x3c), (EDX));
  /* 120b1dda jmp 0x120b1de4 */
  goto L_120b1de4;
L_120b1ddc:;
  /* 120b1ddc mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b1ddf and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 120b1de1 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_120b1de4:;
  /* 120b1de4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b1de7 add ecx, 0x18 */
  { uint32_t _a=(ECX),_b=(0x18u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b1dea push ecx */
  push32((uint32_t)(ECX));
  /* 120b1deb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b1dee add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b1df1 push edx */
  push32((uint32_t)(EDX));
  /* 120b1df2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b1df5 push eax */
  push32((uint32_t)(EAX));
  /* 120b1df6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b1df9 push ecx */
  push32((uint32_t)(ECX));
  /* 120b1dfa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b1dfd push edx */
  push32((uint32_t)(EDX));
  /* 120b1dfe lea eax, [ebp - 0x68] */
  EAX = ((uint32_t)(EBP + -0x68));
  /* 120b1e01 push eax */
  push32((uint32_t)(EAX));
  /* 120b1e02 call 0x120b8590 */
  push32(0x120b1e07u); f_120b8590();
  /* 120b1e07 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120b1e0a:;
  /* 120b1e0a push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 120b1e0f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b1e12 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120b1e14 push edx */
  push32((uint32_t)(EDX));
  /* 120b1e15 call 0x120b8fd0 */
  push32(0x120b1e1au); f_120b8fd0();
  /* 120b1e1a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b1e1d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 120b1e24 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b1e27 cmp dword ptr [eax], 8 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b1e2a je 0x120b1e44 */
  if (C.zf) goto L_120b1e44;
  /* 120b1e2c cmp dword ptr [0x120df758], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120df758))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b1e33 jne 0x120b1e44 */
  if (!C.zf) goto L_120b1e44;
  /* 120b1e35 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b1e38 push ecx */
  push32((uint32_t)(ECX));
  /* 120b1e39 call 0x120b8f80 */
  push32(0x120b1e3eu); f_120b8f80();
  /* 120b1e3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b1e41 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_120b1e44:;
  /* 120b1e44 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b1e48 jne 0x120b1e58 */
  if (!C.zf) goto L_120b1e58;
  /* 120b1e4a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b1e4d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120b1e4f push eax */
  push32((uint32_t)(EAX));
  /* 120b1e50 call 0x120b8e80 */
  push32(0x120b1e55u); f_120b8e80();
  /* 120b1e55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120b1e58:;
  /* 120b1e58 mov esp, ebp */
  ESP = (EBP);
  /* 120b1e5a pop ebp */
  EBP = (pop32());
  /* 120b1e5b ret  */
  ESPCHK(0x120b1d00u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e80 @ 0x120b1e80 (31 bytes, 18 insns) */
void f_120b1e80(void) {
  FTRACE(0x120b1e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b1e80 push ebp */
  push32((uint32_t)(EBP));
  /* 120b1e81 mov ebp, esp */
  EBP = (ESP);
  /* 120b1e83 push ecx */
  push32((uint32_t)(ECX));
  /* 120b1e84 push ebx */
  push32((uint32_t)(EBX));
  /* 120b1e85 push esi */
  push32((uint32_t)(ESI));
  /* 120b1e86 push edi */
  push32((uint32_t)(EDI));
  /* 120b1e87 wait  */
  /* wait (no observable integer/reg state) */
  /* 120b1e88 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 120b1e8b mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 120b1e8f push eax */
  push32((uint32_t)(EAX));
  /* 120b1e90 call 0x120b2270 */
  push32(0x120b1e95u); f_120b2270();
  /* 120b1e95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b1e98 pop edi */
  EDI = (pop32());
  /* 120b1e99 pop esi */
  ESI = (pop32());
  /* 120b1e9a pop ebx */
  EBX = (pop32());
  /* 120b1e9b mov esp, ebp */
  ESP = (EBP);
  /* 120b1e9d pop ebp */
  EBP = (pop32());
  /* 120b1e9e ret  */
  ESPCHK(0x120b1e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ea0 @ 0x120b1ea0 (32 bytes, 18 insns) */
void f_120b1ea0(void) {
  FTRACE(0x120b1ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b1ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b1ea1 mov ebp, esp */
  EBP = (ESP);
  /* 120b1ea3 push ecx */
  push32((uint32_t)(ECX));
  /* 120b1ea4 push ebx */
  push32((uint32_t)(EBX));
  /* 120b1ea5 push esi */
  push32((uint32_t)(ESI));
  /* 120b1ea6 push edi */
  push32((uint32_t)(EDI));
  /* 120b1ea7 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 120b1eaa fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 120b1eac mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 120b1eb0 push eax */
  push32((uint32_t)(EAX));
  /* 120b1eb1 call 0x120b2270 */
  push32(0x120b1eb6u); f_120b2270();
  /* 120b1eb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b1eb9 pop edi */
  EDI = (pop32());
  /* 120b1eba pop esi */
  ESI = (pop32());
  /* 120b1ebb pop ebx */
  EBX = (pop32());
  /* 120b1ebc mov esp, ebp */
  ESP = (EBP);
  /* 120b1ebe pop ebp */
  EBP = (pop32());
  /* 120b1ebf ret  */
  ESPCHK(0x120b1ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011ec0 @ 0x120b1ec0 (79 bytes, 34 insns) */
void f_120b1ec0(void) {
  FTRACE(0x120b1ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b1ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b1ec1 mov ebp, esp */
  EBP = (ESP);
  /* 120b1ec3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b1ec6 push ebx */
  push32((uint32_t)(EBX));
  /* 120b1ec7 push esi */
  push32((uint32_t)(ESI));
  /* 120b1ec8 push edi */
  push32((uint32_t)(EDI));
  /* 120b1ec9 wait  */
  /* wait (no observable integer/reg state) */
  /* 120b1eca fnstcw word ptr [ebp - 0x10] */
  w16((uint32_t)(EBP + -0x10), C.fcw);
  /* 120b1ecd mov ax, word ptr [ebp - 0x10] */
  AX = (r16((uint32_t)(EBP + -0x10)));
  /* 120b1ed1 push eax */
  push32((uint32_t)(EAX));
  /* 120b1ed2 call 0x120b1f90 */
  push32(0x120b1ed7u); f_120b1f90();
  /* 120b1ed7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b1eda mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120b1edd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b1ee0 and ecx, dword ptr [ebp + 0xc] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + 0xc))); ECX = (_r); fl_logic(_r,32); }
  /* 120b1ee3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b1ee6 not edx */
  EDX = (~(EDX));
  /* 120b1ee8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b1eeb and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 120b1eed or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120b1eef mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120b1ef2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b1ef5 push ecx */
  push32((uint32_t)(ECX));
  /* 120b1ef6 call 0x120b2110 */
  push32(0x120b1efbu); f_120b2110();
  /* 120b1efb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b1efe mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 120b1f02 fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 120b1f05 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b1f08 pop edi */
  EDI = (pop32());
  /* 120b1f09 pop esi */
  ESI = (pop32());
  /* 120b1f0a pop ebx */
  EBX = (pop32());
  /* 120b1f0b mov esp, ebp */
  ESP = (EBP);
  /* 120b1f0d pop ebp */
  EBP = (pop32());
  /* 120b1f0e ret  */
  ESPCHK(0x120b1ec0u, _esp0);
  ESP += 4; return;
}

/* __controlfp @ 0x120b1f10 (26 bytes, 11 insns) */
void f_120b1f10(void) {
  FTRACE(0x120b1f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b1f10 push ebp */
  push32((uint32_t)(EBP));
  /* 120b1f11 mov ebp, esp */
  EBP = (ESP);
  /* 120b1f13 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b1f16 and eax, 0xfff7ffff */
  { uint32_t _r=(EAX)&(0xfff7ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120b1f1b push eax */
  push32((uint32_t)(EAX));
  /* 120b1f1c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b1f1f push ecx */
  push32((uint32_t)(ECX));
  /* 120b1f20 call 0x120b1ec0 */
  push32(0x120b1f25u); f_120b1ec0();
  /* 120b1f25 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b1f28 pop ebp */
  EBP = (pop32());
  /* 120b1f29 ret  */
  ESPCHK(0x120b1f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f30 @ 0x120b1f30 (88 bytes, 33 insns) */
void f_120b1f30(void) {
  FTRACE(0x120b1f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b1f30 push ebp */
  push32((uint32_t)(EBP));
  /* 120b1f31 mov ebp, esp */
  EBP = (ESP);
  /* 120b1f33 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b1f36 push ebx */
  push32((uint32_t)(EBX));
  /* 120b1f37 push esi */
  push32((uint32_t)(ESI));
  /* 120b1f38 push edi */
  push32((uint32_t)(EDI));
  /* 120b1f39 call 0x120b1b30 */
  push32(0x120b1f3eu); f_120b1b30();
  /* 120b1f3e mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 120b1f40 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120b1f43 fninit  */
  C.fptop=0; C.fcw=0x037f; C.fsw_c0=C.fsw_c1=C.fsw_c2=C.fsw_c3=0;
  /* 120b1f45 call 0x120ac2a0 */
  push32(0x120b1f4au); f_120ac2a0();
  /* 120b1f4a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b1f4e je 0x120b1f81 */
  if (C.zf) goto L_120b1f81;
  /* 120b1f50 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b1f53 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 120b1f56 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120b1f58 and eax, 0x10008 */
  { uint32_t _r=(EAX)&(0x10008u); EAX = (_r); fl_logic(_r,32); }
  /* 120b1f5d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b1f5f je 0x120b1f81 */
  if (C.zf) goto L_120b1f81;
  /* 120b1f61 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b1f64 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 120b1f67 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b1f6a mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 120b1f6d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b1f70 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 120b1f77 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b1f7a mov dword ptr [ecx + 8], 0xffff */
  w32((uint32_t)(ECX + 0x8), (0xffffu));
L_120b1f81:;
  /* 120b1f81 pop edi */
  EDI = (pop32());
  /* 120b1f82 pop esi */
  ESI = (pop32());
  /* 120b1f83 pop ebx */
  EBX = (pop32());
  /* 120b1f84 mov esp, ebp */
  ESP = (EBP);
  /* 120b1f86 pop ebp */
  EBP = (pop32());
  /* 120b1f87 ret  */
  ESPCHK(0x120b1f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f90 @ 0x120b1f90 (377 bytes, 115 insns) */
void f_120b1f90(void) {
  FTRACE(0x120b1f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b1f90 push ebp */
  push32((uint32_t)(EBP));
  /* 120b1f91 mov ebp, esp */
  EBP = (ESP);
  /* 120b1f93 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b1f96 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120b1f9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b1fa0 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120b1fa5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 120b1fa8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b1faa je 0x120b1fb5 */
  if (C.zf) goto L_120b1fb5;
  /* 120b1fac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b1faf or ecx, 0x10 */
  { uint32_t _r=(ECX)|(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 120b1fb2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_120b1fb5:;
  /* 120b1fb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b1fb8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120b1fbe and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 120b1fc1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b1fc3 je 0x120b1fcd */
  if (C.zf) goto L_120b1fcd;
  /* 120b1fc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b1fc8 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 120b1fca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120b1fcd:;
  /* 120b1fcd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b1fd0 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 120b1fd6 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 120b1fd9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b1fdb je 0x120b1fe6 */
  if (C.zf) goto L_120b1fe6;
  /* 120b1fdd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b1fe0 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 120b1fe3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_120b1fe6:;
  /* 120b1fe6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b1fe9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120b1fee and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 120b1ff1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b1ff3 je 0x120b1ffe */
  if (C.zf) goto L_120b1ffe;
  /* 120b1ff5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b1ff8 or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 120b1ffb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_120b1ffe:;
  /* 120b1ffe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b2001 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120b2007 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 120b200a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b200c je 0x120b2016 */
  if (C.zf) goto L_120b2016;
  /* 120b200e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b2011 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 120b2013 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120b2016:;
  /* 120b2016 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b2019 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 120b201f and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 120b2022 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b2024 je 0x120b2032 */
  if (C.zf) goto L_120b2032;
  /* 120b2026 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b2029 or edx, 0x80000 */
  { uint32_t _r=(EDX)|(0x80000u); EDX = (_r); fl_logic(_r,32); }
  /* 120b202f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_120b2032:;
  /* 120b2032 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b2035 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120b203a and eax, 0xc00 */
  { uint32_t _r=(EAX)&(0xc00u); EAX = (_r); fl_logic(_r,32); }
  /* 120b203f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120b2042 cmp dword ptr [ebp - 8], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b2049 jg 0x120b2065 */
  if ((!C.zf&&C.sf==C.of)) goto L_120b2065;
  /* 120b204b cmp dword ptr [ebp - 8], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b2052 je 0x120b2078 */
  if (C.zf) goto L_120b2078;
  /* 120b2054 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b2058 je 0x120b2070 */
  if (C.zf) goto L_120b2070;
  /* 120b205a cmp dword ptr [ebp - 8], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b2061 je 0x120b2083 */
  if (C.zf) goto L_120b2083;
  /* 120b2063 jmp 0x120b2097 */
  goto L_120b2097;
L_120b2065:;
  /* 120b2065 cmp dword ptr [ebp - 8], 0xc00 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b206c je 0x120b208e */
  if (C.zf) goto L_120b208e;
  /* 120b206e jmp 0x120b2097 */
  goto L_120b2097;
L_120b2070:;
  /* 120b2070 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b2073 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120b2076 jmp 0x120b2097 */
  goto L_120b2097;
L_120b2078:;
  /* 120b2078 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b207b or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 120b207e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120b2081 jmp 0x120b2097 */
  goto L_120b2097;
L_120b2083:;
  /* 120b2083 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b2086 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 120b2089 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120b208c jmp 0x120b2097 */
  goto L_120b2097;
L_120b208e:;
  /* 120b208e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b2091 or ch, 3 */
  { uint32_t _r=(C.c.b.h)|(0x3u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 120b2094 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_120b2097:;
  /* 120b2097 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b209a and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120b20a0 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 120b20a6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 120b20a9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b20ad je 0x120b20d9 */
  if (C.zf) goto L_120b20d9;
  /* 120b20af cmp dword ptr [ebp - 0xc], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b20b6 je 0x120b20cb */
  if (C.zf) goto L_120b20cb;
  /* 120b20b8 cmp dword ptr [ebp - 0xc], 0x300 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b20bf je 0x120b20c3 */
  if (C.zf) goto L_120b20c3;
  /* 120b20c1 jmp 0x120b20e5 */
  goto L_120b20e5;
L_120b20c3:;
  /* 120b20c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b20c6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120b20c9 jmp 0x120b20e5 */
  goto L_120b20e5;
L_120b20cb:;
  /* 120b20cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b20ce or ecx, 0x10000 */
  { uint32_t _r=(ECX)|(0x10000u); ECX = (_r); fl_logic(_r,32); }
  /* 120b20d4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120b20d7 jmp 0x120b20e5 */
  goto L_120b20e5;
L_120b20d9:;
  /* 120b20d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b20dc or edx, 0x20000 */
  { uint32_t _r=(EDX)|(0x20000u); EDX = (_r); fl_logic(_r,32); }
  /* 120b20e2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_120b20e5:;
  /* 120b20e5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b20e8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120b20ed and eax, 0x1000 */
  { uint32_t _r=(EAX)&(0x1000u); EAX = (_r); fl_logic(_r,32); }
  /* 120b20f2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b20f4 je 0x120b2102 */
  if (C.zf) goto L_120b2102;
  /* 120b20f6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b20f9 or ecx, 0x40000 */
  { uint32_t _r=(ECX)|(0x40000u); ECX = (_r); fl_logic(_r,32); }
  /* 120b20ff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_120b2102:;
  /* 120b2102 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b2105 mov esp, ebp */
  ESP = (EBP);
  /* 120b2107 pop ebp */
  EBP = (pop32());
  /* 120b2108 ret  */
  ESPCHK(0x120b1f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10012110 @ 0x120b2110 (346 bytes, 106 insns) */
void f_120b2110(void) {
  FTRACE(0x120b2110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b2110 push ebp */
  push32((uint32_t)(EBP));
  /* 120b2111 mov ebp, esp */
  EBP = (ESP);
  /* 120b2113 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b2116 mov word ptr [ebp - 4], 0 */
  w16((uint32_t)(EBP + -0x4), (0x0u));
  /* 120b211c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b211f and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 120b2122 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b2124 je 0x120b2131 */
  if (C.zf) goto L_120b2131;
  /* 120b2126 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 120b212a or cl, 1 */
  { uint32_t _r=(CL)|(0x1u); CL = (_r); fl_logic(_r,8); }
  /* 120b212d mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_120b2131:;
  /* 120b2131 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b2134 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 120b2137 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b2139 je 0x120b2145 */
  if (C.zf) goto L_120b2145;
  /* 120b213b mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 120b213f or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 120b2141 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
L_120b2145:;
  /* 120b2145 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b2148 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 120b214b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b214d je 0x120b215a */
  if (C.zf) goto L_120b215a;
  /* 120b214f mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 120b2153 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 120b2156 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_120b215a:;
  /* 120b215a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b215d and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 120b2160 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b2162 je 0x120b216f */
  if (C.zf) goto L_120b216f;
  /* 120b2164 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 120b2168 or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 120b216b mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_120b216f:;
  /* 120b216f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b2172 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 120b2175 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b2177 je 0x120b2183 */
  if (C.zf) goto L_120b2183;
  /* 120b2179 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 120b217d or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 120b217f mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
L_120b2183:;
  /* 120b2183 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b2186 and ecx, 0x80000 */
  { uint32_t _r=(ECX)&(0x80000u); ECX = (_r); fl_logic(_r,32); }
  /* 120b218c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b218e je 0x120b219b */
  if (C.zf) goto L_120b219b;
  /* 120b2190 mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 120b2194 or dl, 2 */
  { uint32_t _r=(DL)|(0x2u); DL = (_r); fl_logic(_r,8); }
  /* 120b2197 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_120b219b:;
  /* 120b219b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b219e and eax, 0x300 */
  { uint32_t _r=(EAX)&(0x300u); EAX = (_r); fl_logic(_r,32); }
  /* 120b21a3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120b21a6 cmp dword ptr [ebp - 8], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b21ad ja 0x120b21c9 */
  if ((!C.cf&&!C.zf)) goto L_120b21c9;
  /* 120b21af cmp dword ptr [ebp - 8], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b21b6 je 0x120b21de */
  if (C.zf) goto L_120b21de;
  /* 120b21b8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b21bc je 0x120b21d4 */
  if (C.zf) goto L_120b21d4;
  /* 120b21be cmp dword ptr [ebp - 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b21c5 je 0x120b21eb */
  if (C.zf) goto L_120b21eb;
  /* 120b21c7 jmp 0x120b2203 */
  goto L_120b2203;
L_120b21c9:;
  /* 120b21c9 cmp dword ptr [ebp - 8], 0x300 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b21d0 je 0x120b21f8 */
  if (C.zf) goto L_120b21f8;
  /* 120b21d2 jmp 0x120b2203 */
  goto L_120b2203;
L_120b21d4:;
  /* 120b21d4 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 120b21d8 mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 120b21dc jmp 0x120b2203 */
  goto L_120b2203;
L_120b21de:;
  /* 120b21de mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 120b21e2 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 120b21e5 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
  /* 120b21e9 jmp 0x120b2203 */
  goto L_120b2203;
L_120b21eb:;
  /* 120b21eb mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 120b21ef or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 120b21f2 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 120b21f6 jmp 0x120b2203 */
  goto L_120b2203;
L_120b21f8:;
  /* 120b21f8 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 120b21fc or ch, 0xc */
  { uint32_t _r=(C.c.b.h)|(0xcu); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 120b21ff mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_120b2203:;
  /* 120b2203 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b2206 and edx, 0x30000 */
  { uint32_t _r=(EDX)&(0x30000u); EDX = (_r); fl_logic(_r,32); }
  /* 120b220c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 120b220f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b2213 je 0x120b2229 */
  if (C.zf) goto L_120b2229;
  /* 120b2215 cmp dword ptr [ebp - 0xc], 0x10000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x10000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b221c je 0x120b2236 */
  if (C.zf) goto L_120b2236;
  /* 120b221e cmp dword ptr [ebp - 0xc], 0x20000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b2225 je 0x120b2243 */
  if (C.zf) goto L_120b2243;
  /* 120b2227 jmp 0x120b224b */
  goto L_120b224b;
L_120b2229:;
  /* 120b2229 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 120b222d or ah, 3 */
  { uint32_t _r=(AH)|(0x3u); AH = (_r); fl_logic(_r,8); }
  /* 120b2230 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 120b2234 jmp 0x120b224b */
  goto L_120b224b;
L_120b2236:;
  /* 120b2236 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 120b223a or ch, 2 */
  { uint32_t _r=(C.c.b.h)|(0x2u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 120b223d mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 120b2241 jmp 0x120b224b */
  goto L_120b224b;
L_120b2243:;
  /* 120b2243 mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 120b2247 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_120b224b:;
  /* 120b224b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b224e and eax, 0x40000 */
  { uint32_t _r=(EAX)&(0x40000u); EAX = (_r); fl_logic(_r,32); }
  /* 120b2253 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b2255 je 0x120b2262 */
  if (C.zf) goto L_120b2262;
  /* 120b2257 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 120b225b or ch, 0x10 */
  { uint32_t _r=(C.c.b.h)|(0x10u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 120b225e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_120b2262:;
  /* 120b2262 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 120b2266 mov esp, ebp */
  ESP = (EBP);
  /* 120b2268 pop ebp */
  EBP = (pop32());
  /* 120b2269 ret  */
  ESPCHK(0x120b2110u, _esp0);
  ESP += 4; return;
}

/* FUN_10012270 @ 0x120b2270 (167 bytes, 56 insns) */
void f_120b2270(void) {
  FTRACE(0x120b2270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b2270 push ebp */
  push32((uint32_t)(EBP));
  /* 120b2271 mov ebp, esp */
  EBP = (ESP);
  /* 120b2273 push ecx */
  push32((uint32_t)(ECX));
  /* 120b2274 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120b227b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b227e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120b2283 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 120b2286 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b2288 je 0x120b2293 */
  if (C.zf) goto L_120b2293;
  /* 120b228a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b228d or ecx, 0x10 */
  { uint32_t _r=(ECX)|(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 120b2290 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_120b2293:;
  /* 120b2293 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b2296 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120b229c and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 120b229f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b22a1 je 0x120b22ab */
  if (C.zf) goto L_120b22ab;
  /* 120b22a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b22a6 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 120b22a8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120b22ab:;
  /* 120b22ab mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b22ae and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 120b22b4 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 120b22b7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b22b9 je 0x120b22c4 */
  if (C.zf) goto L_120b22c4;
  /* 120b22bb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b22be or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 120b22c1 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_120b22c4:;
  /* 120b22c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b22c7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120b22cc and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 120b22cf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b22d1 je 0x120b22dc */
  if (C.zf) goto L_120b22dc;
  /* 120b22d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b22d6 or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 120b22d9 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_120b22dc:;
  /* 120b22dc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b22df and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120b22e5 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 120b22e8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b22ea je 0x120b22f4 */
  if (C.zf) goto L_120b22f4;
  /* 120b22ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b22ef or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 120b22f1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120b22f4:;
  /* 120b22f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b22f7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 120b22fd and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 120b2300 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b2302 je 0x120b2310 */
  if (C.zf) goto L_120b2310;
  /* 120b2304 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b2307 or edx, 0x80000 */
  { uint32_t _r=(EDX)|(0x80000u); EDX = (_r); fl_logic(_r,32); }
  /* 120b230d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_120b2310:;
  /* 120b2310 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b2313 mov esp, ebp */
  ESP = (EBP);
  /* 120b2315 pop ebp */
  EBP = (pop32());
  /* 120b2316 ret  */
  ESPCHK(0x120b2270u, _esp0);
  ESP += 4; return;
}

/* FUN_10012320 @ 0x120b2320 (183 bytes, 58 insns) */
void f_120b2320(void) {
  FTRACE(0x120b2320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b2320 push ebp */
  push32((uint32_t)(EBP));
  /* 120b2321 mov ebp, esp */
  EBP = (ESP);
  /* 120b2323 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b2326 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b2329 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b232c cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b2331 ja 0x120b234a */
  if ((!C.cf&&!C.zf)) goto L_120b234a;
  /* 120b2333 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b2336 mov edx, dword ptr [0x120df01c] */
  EDX = (r32((uint32_t)(0x120df01c)));
  /* 120b233c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b233e mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 120b2342 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 120b2345 jmp 0x120b23d3 */
  goto L_120b23d3;
L_120b234a:;
  /* 120b234a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b234d sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 120b2350 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 120b2356 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 120b235c mov edx, dword ptr [0x120df01c] */
  EDX = (r32((uint32_t)(0x120df01c)));
  /* 120b2362 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b2364 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 120b2368 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 120b236d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b236f je 0x120b2393 */
  if (C.zf) goto L_120b2393;
  /* 120b2371 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b2374 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 120b2377 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 120b237d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 120b2380 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 120b2383 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 120b2386 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 120b238a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 120b2391 jmp 0x120b23a4 */
  goto L_120b23a4;
L_120b2393:;
  /* 120b2393 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 120b2396 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 120b2399 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 120b239d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_120b23a4:;
  /* 120b23a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 120b23a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b23a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b23aa lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 120b23ad push ecx */
  push32((uint32_t)(ECX));
  /* 120b23ae mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b23b1 push edx */
  push32((uint32_t)(EDX));
  /* 120b23b2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 120b23b5 push eax */
  push32((uint32_t)(EAX));
  /* 120b23b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 120b23b8 call 0x120b9090 */
  push32(0x120b23bdu); f_120b9090();
  /* 120b23bd add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b23c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b23c2 jne 0x120b23c8 */
  if (!C.zf) goto L_120b23c8;
  /* 120b23c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b23c6 jmp 0x120b23d3 */
  goto L_120b23d3;
L_120b23c8:;
  /* 120b23c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b23cb and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120b23d0 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_120b23d3:;
  /* 120b23d3 mov esp, ebp */
  ESP = (EBP);
  /* 120b23d5 pop ebp */
  EBP = (pop32());
  /* 120b23d6 ret  */
  ESPCHK(0x120b2320u, _esp0);
  ESP += 4; return;
}

/* FUN_100123e0 @ 0x120b23e0 (11 bytes, 6 insns) */
void f_120b23e0(void) {
  FTRACE(0x120b23e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b23e0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b23e1 mov ebp, esp */
  EBP = (ESP);
  /* 120b23e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b23e6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b23e9 pop ebp */
  EBP = (pop32());
  /* 120b23ea ret  */
  ESPCHK(0x120b23e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100123f0 @ 0x120b23f0 (147 bytes, 43 insns) */
void f_120b23f0(void) {
  FTRACE(0x120b23f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b23f0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b23f1 mov ebp, esp */
  EBP = (ESP);
  /* 120b23f3 push ecx */
  push32((uint32_t)(ECX));
  /* 120b23f4 cmp dword ptr [0x120e13e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e13e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b23fb jne 0x120b2417 */
  if (!C.zf) goto L_120b2417;
  /* 120b23fd cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b2401 jl 0x120b2412 */
  if ((C.sf!=C.of)) goto L_120b2412;
  /* 120b2403 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b2407 jg 0x120b2412 */
  if ((!C.zf&&C.sf==C.of)) goto L_120b2412;
  /* 120b2409 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b240c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b240f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_120b2412:;
  /* 120b2412 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b2415 jmp 0x120b247f */
  goto L_120b247f;
L_120b2417:;
  /* 120b2417 push 0x120e27f4 */
  push32((uint32_t)(0x120e27f4u));
  /* 120b241c call dword ptr [0x120e344c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e344c))), 0x120b2422u);
  /* 120b2422 cmp dword ptr [0x120e27e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e27e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b2429 je 0x120b2449 */
  if (C.zf) goto L_120b2449;
  /* 120b242b push 0x120e27f4 */
  push32((uint32_t)(0x120e27f4u));
  /* 120b2430 call dword ptr [0x120e3328] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3328))), 0x120b2436u);
  /* 120b2436 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 120b2438 call 0x120acb80 */
  push32(0x120b243du); f_120acb80();
  /* 120b243d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b2440 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 120b2447 jmp 0x120b2450 */
  goto L_120b2450;
L_120b2449:;
  /* 120b2449 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_120b2450:;
  /* 120b2450 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b2453 push ecx */
  push32((uint32_t)(ECX));
  /* 120b2454 call 0x120b2490 */
  push32(0x120b2459u); f_120b2490();
  /* 120b2459 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b245c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 120b245f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b2463 je 0x120b2471 */
  if (C.zf) goto L_120b2471;
  /* 120b2465 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 120b2467 call 0x120acc20 */
  push32(0x120b246cu); f_120acc20();
  /* 120b246c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b246f jmp 0x120b247c */
  goto L_120b247c;
L_120b2471:;
  /* 120b2471 push 0x120e27f4 */
  push32((uint32_t)(0x120e27f4u));
  /* 120b2476 call dword ptr [0x120e3328] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3328))), 0x120b247cu);
L_120b247c:;
  /* 120b247c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_120b247f:;
  /* 120b247f mov esp, ebp */
  ESP = (EBP);
  /* 120b2481 pop ebp */
  EBP = (pop32());
  /* 120b2482 ret  */
  ESPCHK(0x120b23f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012490 @ 0x120b2490 (299 bytes, 91 insns) */
void f_120b2490(void) {
  FTRACE(0x120b2490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b2490 push ebp */
  push32((uint32_t)(EBP));
  /* 120b2491 mov ebp, esp */
  EBP = (ESP);
  /* 120b2493 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b2496 cmp dword ptr [0x120e13e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e13e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b249d jne 0x120b24bc */
  if (!C.zf) goto L_120b24bc;
  /* 120b249f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b24a3 jl 0x120b24b4 */
  if ((C.sf!=C.of)) goto L_120b24b4;
  /* 120b24a5 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b24a9 jg 0x120b24b4 */
  if ((!C.zf&&C.sf==C.of)) goto L_120b24b4;
  /* 120b24ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b24ae add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b24b1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_120b24b4:;
  /* 120b24b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b24b7 jmp 0x120b25b7 */
  goto L_120b25b7;
L_120b24bc:;
  /* 120b24bc cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b24c3 jge 0x120b2503 */
  if ((C.sf==C.of)) goto L_120b2503;
  /* 120b24c5 cmp dword ptr [0x120df010], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120df010))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b24cc jle 0x120b24e1 */
  if ((C.zf||C.sf!=C.of)) goto L_120b24e1;
  /* 120b24ce push 1 */
  push32((uint32_t)(0x1u));
  /* 120b24d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b24d3 push ecx */
  push32((uint32_t)(ECX));
  /* 120b24d4 call 0x120b2320 */
  push32(0x120b24d9u); f_120b2320();
  /* 120b24d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b24dc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 120b24df jmp 0x120b24f5 */
  goto L_120b24f5;
L_120b24e1:;
  /* 120b24e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b24e4 mov eax, dword ptr [0x120df01c] */
  EAX = (r32((uint32_t)(0x120df01c)));
  /* 120b24e9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120b24eb mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 120b24ef and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 120b24f2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_120b24f5:;
  /* 120b24f5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b24f9 jne 0x120b2503 */
  if (!C.zf) goto L_120b2503;
  /* 120b24fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b24fe jmp 0x120b25b7 */
  goto L_120b25b7;
L_120b2503:;
  /* 120b2503 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b2506 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 120b2509 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 120b250f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 120b2515 mov eax, dword ptr [0x120df01c] */
  EAX = (r32((uint32_t)(0x120df01c)));
  /* 120b251a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120b251c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 120b2520 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 120b2526 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b2528 je 0x120b254c */
  if (C.zf) goto L_120b254c;
  /* 120b252a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b252d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 120b2530 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 120b2536 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 120b2539 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 120b253c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 120b253f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 120b2543 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 120b254a jmp 0x120b255d */
  goto L_120b255d;
L_120b254c:;
  /* 120b254c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 120b254f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 120b2552 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 120b2556 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_120b255d:;
  /* 120b255d push 1 */
  push32((uint32_t)(0x1u));
  /* 120b255f push 0 */
  push32((uint32_t)(0x0u));
  /* 120b2561 push 3 */
  push32((uint32_t)(0x3u));
  /* 120b2563 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 120b2566 push edx */
  push32((uint32_t)(EDX));
  /* 120b2567 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b256a push eax */
  push32((uint32_t)(EAX));
  /* 120b256b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 120b256e push ecx */
  push32((uint32_t)(ECX));
  /* 120b256f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 120b2574 mov edx, dword ptr [0x120e13e0] */
  EDX = (r32((uint32_t)(0x120e13e0)));
  /* 120b257a push edx */
  push32((uint32_t)(EDX));
  /* 120b257b call 0x120b9ca0 */
  push32(0x120b2580u); f_120b9ca0();
  /* 120b2580 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b2583 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120b2586 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b258a jne 0x120b2591 */
  if (!C.zf) goto L_120b2591;
  /* 120b258c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b258f jmp 0x120b25b7 */
  goto L_120b25b7;
L_120b2591:;
  /* 120b2591 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b2595 jne 0x120b25a1 */
  if (!C.zf) goto L_120b25a1;
  /* 120b2597 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b259a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120b259f jmp 0x120b25b7 */
  goto L_120b25b7;
L_120b25a1:;
  /* 120b25a1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b25a4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 120b25a9 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 120b25ac and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 120b25b2 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 120b25b5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_120b25b7:;
  /* 120b25b7 mov esp, ebp */
  ESP = (EBP);
  /* 120b25b9 pop ebp */
  EBP = (pop32());
  /* 120b25ba ret  */
  ESPCHK(0x120b2490u, _esp0);
  ESP += 4; return;
}

/* FUN_100125c0 @ 0x120b25c0 (132 bytes, 51 insns) */
void f_120b25c0(void) {
  FTRACE(0x120b25c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b25c0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b25c1 mov ebp, esp */
  EBP = (ESP);
  /* 120b25c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b25c6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b25c9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120b25ca and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 120b25cd add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b25cf sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 120b25d2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120b25d5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b25d8 and eax, 0x8000001f */
  { uint32_t _r=(EAX)&(0x8000001fu); EAX = (_r); fl_logic(_r,32); }
  /* 120b25dd jns 0x120b25e4 */
  if (!C.sf) goto L_120b25e4;
  /* 120b25df dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 120b25e0 or eax, 0xffffffe0 */
  { uint32_t _r=(EAX)|(0xffffffe0u); EAX = (_r); fl_logic(_r,32); }
  /* 120b25e3 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_120b25e4:;
  /* 120b25e4 mov ecx, 0x1f */
  ECX = (0x1fu);
  /* 120b25e9 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b25eb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120b25ee or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120b25f1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b25f4 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 120b25f6 not edx */
  EDX = (~(EDX));
  /* 120b25f8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 120b25fb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b25fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b2601 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 120b2604 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 120b2607 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b2609 je 0x120b260f */
  if (C.zf) goto L_120b260f;
  /* 120b260b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b260d jmp 0x120b2640 */
  goto L_120b2640;
L_120b260f:;
  /* 120b260f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b2612 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b2615 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120b2618 jmp 0x120b2623 */
  goto L_120b2623;
L_120b261a:;
  /* 120b261a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b261d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b2620 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_120b2623:;
  /* 120b2623 cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b2627 jge 0x120b263b */
  if ((C.sf==C.of)) goto L_120b263b;
  /* 120b2629 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b262c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b262f cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b2633 je 0x120b2639 */
  if (C.zf) goto L_120b2639;
  /* 120b2635 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b2637 jmp 0x120b2640 */
  goto L_120b2640;
L_120b2639:;
  /* 120b2639 jmp 0x120b261a */
  goto L_120b261a;
L_120b263b:;
  /* 120b263b mov eax, 1 */
  EAX = (0x1u);
L_120b2640:;
  /* 120b2640 mov esp, ebp */
  ESP = (EBP);
  /* 120b2642 pop ebp */
  EBP = (pop32());
  /* 120b2643 ret  */
  ESPCHK(0x120b25c0u, _esp0);
  ESP += 4; return;
}

/* __IncMan @ 0x120b2650 (168 bytes, 63 insns) */
void f_120b2650(void) {
  FTRACE(0x120b2650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b2650 push ebp */
  push32((uint32_t)(EBP));
  /* 120b2651 mov ebp, esp */
  EBP = (ESP);
  /* 120b2653 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b2656 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b2659 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120b265a and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 120b265d add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b265f sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 120b2662 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120b2665 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b2668 and eax, 0x8000001f */
  { uint32_t _r=(EAX)&(0x8000001fu); EAX = (_r); fl_logic(_r,32); }
  /* 120b266d jns 0x120b2674 */
  if (!C.sf) goto L_120b2674;
  /* 120b266f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 120b2670 or eax, 0xffffffe0 */
  { uint32_t _r=(EAX)|(0xffffffe0u); EAX = (_r); fl_logic(_r,32); }
  /* 120b2673 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_120b2674:;
  /* 120b2674 mov ecx, 0x1f */
  ECX = (0x1fu);
  /* 120b2679 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b267b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120b267e mov edx, 1 */
  EDX = (0x1u);
  /* 120b2683 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b2686 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 120b2688 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 120b268b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b268e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b2691 lea edx, [ecx + eax*4] */
  EDX = ((uint32_t)(ECX + EAX*4));
  /* 120b2694 push edx */
  push32((uint32_t)(EDX));
  /* 120b2695 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b2698 push eax */
  push32((uint32_t)(EAX));
  /* 120b2699 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b269c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b269f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 120b26a2 push eax */
  push32((uint32_t)(EAX));
  /* 120b26a3 call 0x120ba000 */
  push32(0x120b26a8u); f_120ba000();
  /* 120b26a8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b26ab mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 120b26ae mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b26b1 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b26b4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120b26b7 jmp 0x120b26c2 */
  goto L_120b26c2;
L_120b26b9:;
  /* 120b26b9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b26bc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b26bf mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_120b26c2:;
  /* 120b26c2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b26c6 jl 0x120b26f1 */
  if ((C.sf!=C.of)) goto L_120b26f1;
  /* 120b26c8 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b26cc je 0x120b26f1 */
  if (C.zf) goto L_120b26f1;
  /* 120b26ce mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b26d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b26d4 lea edx, [ecx + eax*4] */
  EDX = ((uint32_t)(ECX + EAX*4));
  /* 120b26d7 push edx */
  push32((uint32_t)(EDX));
  /* 120b26d8 push 1 */
  push32((uint32_t)(0x1u));
  /* 120b26da mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b26dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b26e0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 120b26e3 push edx */
  push32((uint32_t)(EDX));
  /* 120b26e4 call 0x120ba000 */
  push32(0x120b26e9u); f_120ba000();
  /* 120b26e9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b26ec mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 120b26ef jmp 0x120b26b9 */
  goto L_120b26b9;
L_120b26f1:;
  /* 120b26f1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b26f4 mov esp, ebp */
  ESP = (EBP);
  /* 120b26f6 pop ebp */
  EBP = (pop32());
  /* 120b26f7 ret  */
  ESPCHK(0x120b2650u, _esp0);
  ESP += 4; return;
}

/* FUN_10012700 @ 0x120b2700 (219 bytes, 78 insns) */
void f_120b2700(void) {
  FTRACE(0x120b2700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b2700 push ebp */
  push32((uint32_t)(EBP));
  /* 120b2701 mov ebp, esp */
  EBP = (ESP);
  /* 120b2703 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b2706 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 120b270d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b2710 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b2713 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120b2716 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b2719 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b271c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120b271f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b2722 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120b2723 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 120b2726 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b2728 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 120b272b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 120b272e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b2731 and edx, 0x8000001f */
  { uint32_t _r=(EDX)&(0x8000001fu); EDX = (_r); fl_logic(_r,32); }
  /* 120b2737 jns 0x120b273e */
  if (!C.sf) goto L_120b273e;
  /* 120b2739 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 120b273a or edx, 0xffffffe0 */
  { uint32_t _r=(EDX)|(0xffffffe0u); EDX = (_r); fl_logic(_r,32); }
  /* 120b273d inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
L_120b273e:;
  /* 120b273e mov eax, 0x1f */
  EAX = (0x1fu);
  /* 120b2743 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b2745 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120b2748 mov edx, 1 */
  EDX = (0x1u);
  /* 120b274d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b2750 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 120b2752 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 120b2755 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b2758 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b275b mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 120b275e and edx, dword ptr [ebp - 0x1c] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x1c))); EDX = (_r); fl_logic(_r,32); }
  /* 120b2761 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b2763 je 0x120b278f */
  if (C.zf) goto L_120b278f;
  /* 120b2765 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b2768 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b276b push eax */
  push32((uint32_t)(EAX));
  /* 120b276c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b276f push ecx */
  push32((uint32_t)(ECX));
  /* 120b2770 call 0x120b25c0 */
  push32(0x120b2775u); f_120b25c0();
  /* 120b2775 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b2778 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b277a jne 0x120b278f */
  if (!C.zf) goto L_120b278f;
  /* 120b277c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b277f push edx */
  push32((uint32_t)(EDX));
  /* 120b2780 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b2783 push eax */
  push32((uint32_t)(EAX));
  /* 120b2784 call 0x120b2650 */
  push32(0x120b2789u); f_120b2650();
  /* 120b2789 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b278c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_120b278f:;
  /* 120b278f or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120b2792 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b2795 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 120b2797 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b279a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b279d mov eax, dword ptr [ecx + eax*4] */
  EAX = (r32((uint32_t)(ECX + EAX*4)));
  /* 120b27a0 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 120b27a2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b27a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b27a8 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 120b27ab mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b27ae add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b27b1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 120b27b4 jmp 0x120b27bf */
  goto L_120b27bf;
L_120b27b6:;
  /* 120b27b6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b27b9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b27bc mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_120b27bf:;
  /* 120b27bf cmp dword ptr [ebp - 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b27c3 jge 0x120b27d4 */
  if ((C.sf==C.of)) goto L_120b27d4;
  /* 120b27c5 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b27c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b27cb mov dword ptr [eax + edx*4], 0 */
  w32((uint32_t)(EAX + EDX*4), (0x0u));
  /* 120b27d2 jmp 0x120b27b6 */
  goto L_120b27b6;
L_120b27d4:;
  /* 120b27d4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b27d7 mov esp, ebp */
  ESP = (EBP);
  /* 120b27d9 pop ebp */
  EBP = (pop32());
  /* 120b27da ret  */
  ESPCHK(0x120b2700u, _esp0);
  ESP += 4; return;
}

/* __CopyMan @ 0x120b27e0 (76 bytes, 28 insns) */
void f_120b27e0(void) {
  FTRACE(0x120b27e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b27e0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b27e1 mov ebp, esp */
  EBP = (ESP);
  /* 120b27e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b27e6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b27e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120b27ec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b27ef mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120b27f2 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 120b27f9 jmp 0x120b2804 */
  goto L_120b2804;
L_120b27fb:;
  /* 120b27fb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b27fe add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b2801 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_120b2804:;
  /* 120b2804 cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b2808 jge 0x120b2828 */
  if ((C.sf==C.of)) goto L_120b2828;
  /* 120b280a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b280d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b2810 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120b2812 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 120b2814 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b2817 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b281a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120b281d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b2820 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b2823 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120b2826 jmp 0x120b27fb */
  goto L_120b27fb;
L_120b2828:;
  /* 120b2828 mov esp, ebp */
  ESP = (EBP);
  /* 120b282a pop ebp */
  EBP = (pop32());
  /* 120b282b ret  */
  ESPCHK(0x120b27e0u, _esp0);
  ESP += 4; return;
}

/* __FillZeroMan @ 0x120b2830 (47 bytes, 17 insns) */
void f_120b2830(void) {
  FTRACE(0x120b2830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b2830 push ebp */
  push32((uint32_t)(EBP));
  /* 120b2831 mov ebp, esp */
  EBP = (ESP);
  /* 120b2833 push ecx */
  push32((uint32_t)(ECX));
  /* 120b2834 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120b283b jmp 0x120b2846 */
  goto L_120b2846;
L_120b283d:;
  /* 120b283d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b2840 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b2843 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120b2846:;
  /* 120b2846 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b284a jge 0x120b285b */
  if ((C.sf==C.of)) goto L_120b285b;
  /* 120b284c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b284f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b2852 mov dword ptr [edx + ecx*4], 0 */
  w32((uint32_t)(EDX + ECX*4), (0x0u));
  /* 120b2859 jmp 0x120b283d */
  goto L_120b283d;
L_120b285b:;
  /* 120b285b mov esp, ebp */
  ESP = (EBP);
  /* 120b285d pop ebp */
  EBP = (pop32());
  /* 120b285e ret  */
  ESPCHK(0x120b2830u, _esp0);
  ESP += 4; return;
}

/* __IsZeroMan @ 0x120b2860 (55 bytes, 21 insns) */
void f_120b2860(void) {
  FTRACE(0x120b2860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b2860 push ebp */
  push32((uint32_t)(EBP));
  /* 120b2861 mov ebp, esp */
  EBP = (ESP);
  /* 120b2863 push ecx */
  push32((uint32_t)(ECX));
  /* 120b2864 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120b286b jmp 0x120b2876 */
  goto L_120b2876;
L_120b286d:;
  /* 120b286d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b2870 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b2873 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_120b2876:;
  /* 120b2876 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b287a jge 0x120b288e */
  if ((C.sf==C.of)) goto L_120b288e;
  /* 120b287c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b287f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b2882 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b2886 je 0x120b288c */
  if (C.zf) goto L_120b288c;
  /* 120b2888 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b288a jmp 0x120b2893 */
  goto L_120b2893;
L_120b288c:;
  /* 120b288c jmp 0x120b286d */
  goto L_120b286d;
L_120b288e:;
  /* 120b288e mov eax, 1 */
  EAX = (0x1u);
L_120b2893:;
  /* 120b2893 mov esp, ebp */
  ESP = (EBP);
  /* 120b2895 pop ebp */
  EBP = (pop32());
  /* 120b2896 ret  */
  ESPCHK(0x120b2860u, _esp0);
  ESP += 4; return;
}

/* __ShrMan @ 0x120b28a0 (236 bytes, 82 insns) */
void f_120b28a0(void) {
  FTRACE(0x120b28a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b28a0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b28a1 mov ebp, esp */
  EBP = (ESP);
  /* 120b28a3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b28a6 push esi */
  push32((uint32_t)(ESI));
  /* 120b28a7 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b28aa cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 120b28ab and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 120b28ae add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b28b0 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 120b28b3 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 120b28b6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b28b9 and eax, 0x8000001f */
  { uint32_t _r=(EAX)&(0x8000001fu); EAX = (_r); fl_logic(_r,32); }
  /* 120b28be jns 0x120b28c5 */
  if (!C.sf) goto L_120b28c5;
  /* 120b28c0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 120b28c1 or eax, 0xffffffe0 */
  { uint32_t _r=(EAX)|(0xffffffe0u); EAX = (_r); fl_logic(_r,32); }
  /* 120b28c4 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_120b28c5:;
  /* 120b28c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120b28c8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120b28cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b28ce shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 120b28d0 not edx */
  EDX = (~(EDX));
  /* 120b28d2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 120b28d5 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 120b28dc mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 120b28e3 jmp 0x120b28ee */
  goto L_120b28ee;
L_120b28e5:;
  /* 120b28e5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b28e8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b28eb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_120b28ee:;
  /* 120b28ee cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b28f2 jge 0x120b2941 */
  if ((C.sf==C.of)) goto L_120b2941;
  /* 120b28f4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b28f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b28fa mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 120b28fd and eax, dword ptr [ebp - 0x14] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + -0x14))); EAX = (_r); fl_logic(_r,32); }
  /* 120b2900 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 120b2903 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b2906 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b2909 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 120b290c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b290f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 120b2911 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b2914 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b2917 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 120b291a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b291d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b2920 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 120b2923 or edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 120b2926 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b2929 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b292c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 120b292f mov ecx, 0x20 */
  ECX = (0x20u);
  /* 120b2934 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b2937 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b293a shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 120b293c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 120b293f jmp 0x120b28e5 */
  goto L_120b28e5;
L_120b2941:;
  /* 120b2941 mov dword ptr [ebp - 0xc], 2 */
  w32((uint32_t)(EBP + -0xc), (0x2u));
  /* 120b2948 jmp 0x120b2953 */
  goto L_120b2953;
L_120b294a:;
  /* 120b294a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b294d sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b2950 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_120b2953:;
  /* 120b2953 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b2957 jl 0x120b2987 */
  if ((C.sf!=C.of)) goto L_120b2987;
  /* 120b2959 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b295c cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b295f jl 0x120b2978 */
  if ((C.sf!=C.of)) goto L_120b2978;
  /* 120b2961 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b2964 sub edx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b2967 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b296a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b296d mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 120b2970 mov edx, dword ptr [esi + edx*4] */
  EDX = (r32((uint32_t)(ESI + EDX*4)));
  /* 120b2973 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 120b2976 jmp 0x120b2985 */
  goto L_120b2985;
L_120b2978:;
  /* 120b2978 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b297b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b297e mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_120b2985:;
  /* 120b2985 jmp 0x120b294a */
  goto L_120b294a;
L_120b2987:;
  /* 120b2987 pop esi */
  ESI = (pop32());
  /* 120b2988 mov esp, ebp */
  ESP = (EBP);
  /* 120b298a pop ebp */
  EBP = (pop32());
  /* 120b298b ret  */
  ESPCHK(0x120b28a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012990 @ 0x120b2990 (578 bytes, 188 insns) */
void f_120b2990(void) {
  FTRACE(0x120b2990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b2990 push ebp */
  push32((uint32_t)(EBP));
  /* 120b2991 mov ebp, esp */
  EBP = (ESP);
  /* 120b2993 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b2996 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b2999 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120b299b mov cx, word ptr [eax + 0xa] */
  CX = (r16((uint32_t)(EAX + 0xa)));
  /* 120b299f and ecx, 0x7fff */
  { uint32_t _r=(ECX)&(0x7fffu); ECX = (_r); fl_logic(_r,32); }
  /* 120b29a5 sub ecx, 0x3fff */
  { uint32_t _a=(ECX),_b=(0x3fffu),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b29ab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120b29ae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b29b1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b29b3 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 120b29b7 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 120b29bc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 120b29bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b29c2 mov edx, dword ptr [ecx + 6] */
  EDX = (r32((uint32_t)(ECX + 0x6)));
  /* 120b29c5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 120b29c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b29cb mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 120b29ce mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 120b29d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b29d4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b29d6 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 120b29d9 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 120b29dc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 120b29df cmp dword ptr [ebp - 4], 0xffffc001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffc001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b29e6 jne 0x120b2a20 */
  if (!C.zf) goto L_120b2a20;
  /* 120b29e8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 120b29ef lea ecx, [ebp - 0x18] */
  ECX = ((uint32_t)(EBP + -0x18));
  /* 120b29f2 push ecx */
  push32((uint32_t)(ECX));
  /* 120b29f3 call 0x120b2860 */
  push32(0x120b29f8u); f_120b2860();
  /* 120b29f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b29fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b29fd je 0x120b2a08 */
  if (C.zf) goto L_120b2a08;
  /* 120b29ff mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 120b2a06 jmp 0x120b2a1b */
  goto L_120b2a1b;
L_120b2a08:;
  /* 120b2a08 lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 120b2a0b push edx */
  push32((uint32_t)(EDX));
  /* 120b2a0c call 0x120b2830 */
  push32(0x120b2a11u); f_120b2830();
  /* 120b2a11 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b2a14 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
L_120b2a1b:;
  /* 120b2a1b jmp 0x120b2b6c */
  goto L_120b2b6c;
L_120b2a20:;
  /* 120b2a20 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 120b2a23 push eax */
  push32((uint32_t)(EAX));
  /* 120b2a24 lea ecx, [ebp - 0x30] */
  ECX = ((uint32_t)(EBP + -0x30));
  /* 120b2a27 push ecx */
  push32((uint32_t)(ECX));
  /* 120b2a28 call 0x120b27e0 */
  push32(0x120b2a2du); f_120b27e0();
  /* 120b2a2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b2a30 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b2a33 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 120b2a36 push eax */
  push32((uint32_t)(EAX));
  /* 120b2a37 lea ecx, [ebp - 0x18] */
  ECX = ((uint32_t)(EBP + -0x18));
  /* 120b2a3a push ecx */
  push32((uint32_t)(ECX));
  /* 120b2a3b call 0x120b2700 */
  push32(0x120b2a40u); f_120b2700();
  /* 120b2a40 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b2a43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b2a45 je 0x120b2a50 */
  if (C.zf) goto L_120b2a50;
  /* 120b2a47 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b2a4a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b2a4d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_120b2a50:;
  /* 120b2a50 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b2a53 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b2a56 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 120b2a59 sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b2a5c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b2a5f jge 0x120b2a80 */
  if ((C.sf==C.of)) goto L_120b2a80;
  /* 120b2a61 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 120b2a64 push eax */
  push32((uint32_t)(EAX));
  /* 120b2a65 call 0x120b2830 */
  push32(0x120b2a6au); f_120b2830();
  /* 120b2a6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b2a6d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 120b2a74 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 120b2a7b jmp 0x120b2b6c */
  goto L_120b2b6c;
L_120b2a80:;
  /* 120b2a80 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b2a83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b2a86 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b2a89 jg 0x120b2af0 */
  if ((!C.zf&&C.sf==C.of)) goto L_120b2af0;
  /* 120b2a8b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b2a8e mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 120b2a91 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b2a94 mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
  /* 120b2a97 lea edx, [ebp - 0x30] */
  EDX = ((uint32_t)(EBP + -0x30));
  /* 120b2a9a push edx */
  push32((uint32_t)(EDX));
  /* 120b2a9b lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 120b2a9e push eax */
  push32((uint32_t)(EAX));
  /* 120b2a9f call 0x120b27e0 */
  push32(0x120b2aa4u); f_120b27e0();
  /* 120b2aa4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b2aa7 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 120b2aaa push ecx */
  push32((uint32_t)(ECX));
  /* 120b2aab lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 120b2aae push edx */
  push32((uint32_t)(EDX));
  /* 120b2aaf call 0x120b28a0 */
  push32(0x120b2ab4u); f_120b28a0();
  /* 120b2ab4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b2ab7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b2aba mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 120b2abd push ecx */
  push32((uint32_t)(ECX));
  /* 120b2abe lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 120b2ac1 push edx */
  push32((uint32_t)(EDX));
  /* 120b2ac2 call 0x120b2700 */
  push32(0x120b2ac7u); f_120b2700();
  /* 120b2ac7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b2aca mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b2acd mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 120b2ad0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b2ad3 push ecx */
  push32((uint32_t)(ECX));
  /* 120b2ad4 lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 120b2ad7 push edx */
  push32((uint32_t)(EDX));
  /* 120b2ad8 call 0x120b28a0 */
  push32(0x120b2addu); f_120b28a0();
  /* 120b2add add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b2ae0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 120b2ae7 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 120b2aee jmp 0x120b2b6c */
  goto L_120b2b6c;
L_120b2af0:;
  /* 120b2af0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b2af3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b2af6 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b2af8 jl 0x120b2b3b */
  if ((C.sf!=C.of)) goto L_120b2b3b;
  /* 120b2afa lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 120b2afd push edx */
  push32((uint32_t)(EDX));
  /* 120b2afe call 0x120b2830 */
  push32(0x120b2b03u); f_120b2830();
  /* 120b2b03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b2b06 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b2b09 or eax, 0x80000000 */
  { uint32_t _r=(EAX)|(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 120b2b0e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 120b2b11 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b2b14 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 120b2b17 push edx */
  push32((uint32_t)(EDX));
  /* 120b2b18 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 120b2b1b push eax */
  push32((uint32_t)(EAX));
  /* 120b2b1c call 0x120b28a0 */
  push32(0x120b2b21u); f_120b28a0();
  /* 120b2b21 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b2b24 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b2b27 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120b2b29 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b2b2c add edx, dword ptr [eax + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b2b2f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 120b2b32 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 120b2b39 jmp 0x120b2b6c */
  goto L_120b2b6c;
L_120b2b3b:;
  /* 120b2b3b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b2b3e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b2b41 add edx, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b2b44 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 120b2b47 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b2b4a and eax, 0x7fffffff */
  { uint32_t _r=(EAX)&(0x7fffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120b2b4f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 120b2b52 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b2b55 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 120b2b58 push edx */
  push32((uint32_t)(EDX));
  /* 120b2b59 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 120b2b5c push eax */
  push32((uint32_t)(EAX));
  /* 120b2b5d call 0x120b28a0 */
  push32(0x120b2b62u); f_120b28a0();
  /* 120b2b62 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b2b65 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
L_120b2b6c:;
  /* 120b2b6c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b2b6f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 120b2b72 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b2b75 mov eax, 0x20 */
  EAX = (0x20u);
  /* 120b2b7a sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b2b7c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120b2b7f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b2b82 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b2b85 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 120b2b87 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b2b8a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 120b2b8c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b2b8f neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 120b2b91 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b2b93 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 120b2b99 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 120b2b9b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 120b2b9e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b2ba1 cmp dword ptr [edx + 0x10], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b2ba5 jne 0x120b2bba */
  if (!C.zf) goto L_120b2bba;
  /* 120b2ba7 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b2baa mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b2bad mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 120b2bb0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b2bb3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b2bb6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 120b2bb8 jmp 0x120b2bcb */
  goto L_120b2bcb;
L_120b2bba:;
  /* 120b2bba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b2bbd cmp dword ptr [ecx + 0x10], 0x20 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b2bc1 jne 0x120b2bcb */
  if (!C.zf) goto L_120b2bcb;
  /* 120b2bc3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b2bc6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b2bc9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
L_120b2bcb:;
  /* 120b2bcb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120b2bce mov esp, ebp */
  ESP = (EBP);
  /* 120b2bd0 pop ebp */
  EBP = (pop32());
  /* 120b2bd1 ret  */
  ESPCHK(0x120b2990u, _esp0);
  ESP += 4; return;
}

/* FUN_10012be0 @ 0x120b2be0 (26 bytes, 11 insns) */
void f_120b2be0(void) {
  FTRACE(0x120b2be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b2be0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b2be1 mov ebp, esp */
  EBP = (ESP);
  /* 120b2be3 push 0x120df228 */
  push32((uint32_t)(0x120df228u));
  /* 120b2be8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b2beb push eax */
  push32((uint32_t)(EAX));
  /* 120b2bec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b2bef push ecx */
  push32((uint32_t)(ECX));
  /* 120b2bf0 call 0x120b2990 */
  push32(0x120b2bf5u); f_120b2990();
  /* 120b2bf5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b2bf8 pop ebp */
  EBP = (pop32());
  /* 120b2bf9 ret  */
  ESPCHK(0x120b2be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c00 @ 0x120b2c00 (26 bytes, 11 insns) */
void f_120b2c00(void) {
  FTRACE(0x120b2c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b2c00 push ebp */
  push32((uint32_t)(EBP));
  /* 120b2c01 mov ebp, esp */
  EBP = (ESP);
  /* 120b2c03 push 0x120df240 */
  push32((uint32_t)(0x120df240u));
  /* 120b2c08 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b2c0b push eax */
  push32((uint32_t)(EAX));
  /* 120b2c0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b2c0f push ecx */
  push32((uint32_t)(ECX));
  /* 120b2c10 call 0x120b2990 */
  push32(0x120b2c15u); f_120b2990();
  /* 120b2c15 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b2c18 pop ebp */
  EBP = (pop32());
  /* 120b2c19 ret  */
  ESPCHK(0x120b2c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10012c20 @ 0x120b2c20 (191 bytes, 58 insns) */
void f_120b2c20(void) {
  FTRACE(0x120b2c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b2c20 push ebp */
  push32((uint32_t)(EBP));
  /* 120b2c21 mov ebp, esp */
  EBP = (ESP);
  /* 120b2c23 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b2c26 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 120b2c2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b2c30 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120b2c32 mov cx, word ptr [eax + 0xa] */
  CX = (r16((uint32_t)(EAX + 0xa)));
  /* 120b2c36 and ecx, 0x7fff */
  { uint32_t _r=(ECX)&(0x7fffu); ECX = (_r); fl_logic(_r,32); }
  /* 120b2c3c mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 120b2c40 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b2c43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b2c45 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 120b2c49 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 120b2c4e mov word ptr [ebp - 0x18], ax */
  w16((uint32_t)(EBP + -0x18), (AX));
  /* 120b2c52 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b2c55 mov edx, dword ptr [ecx + 6] */
  EDX = (r32((uint32_t)(ECX + 0x6)));
  /* 120b2c58 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 120b2c5b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b2c5e mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 120b2c61 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120b2c64 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b2c67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b2c69 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 120b2c6c shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 120b2c6f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120b2c72 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 120b2c74 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 120b2c77 push ecx */
  push32((uint32_t)(ECX));
  /* 120b2c78 call 0x120b2700 */
  push32(0x120b2c7du); f_120b2700();
  /* 120b2c7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b2c80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b2c82 je 0x120b2c97 */
  if (C.zf) goto L_120b2c97;
  /* 120b2c84 mov dword ptr [ebp - 0x10], 0x80000000 */
  w32((uint32_t)(EBP + -0x10), (0x80000000u));
  /* 120b2c8b mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 120b2c8f add dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a+_b; DX = (_r); fl_add(_a,_b,_r,16); }
  /* 120b2c93 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_120b2c97:;
  /* 120b2c97 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b2c9a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120b2c9f cmp eax, 0x7fff */
  { uint32_t _a=(EAX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b2ca4 jne 0x120b2cad */
  if (!C.zf) goto L_120b2cad;
  /* 120b2ca6 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_120b2cad:;
  /* 120b2cad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b2cb0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b2cb3 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 120b2cb6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b2cb9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b2cbc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 120b2cbe mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b2cc1 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120b2cc7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b2cca and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120b2ccf or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 120b2cd1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b2cd4 mov word ptr [ecx + 8], dx */
  w16((uint32_t)(ECX + 0x8), (DX));
  /* 120b2cd8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b2cdb mov esp, ebp */
  ESP = (EBP);
  /* 120b2cdd pop ebp */
  EBP = (pop32());
  /* 120b2cde ret  */
  ESPCHK(0x120b2c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ce0 @ 0x120b2ce0 (54 bytes, 24 insns) */
void f_120b2ce0(void) {
  FTRACE(0x120b2ce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b2ce0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b2ce1 mov ebp, esp */
  EBP = (ESP);
  /* 120b2ce3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b2ce6 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b2ce8 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b2cea push 0 */
  push32((uint32_t)(0x0u));
  /* 120b2cec push 0 */
  push32((uint32_t)(0x0u));
  /* 120b2cee mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b2cf1 push eax */
  push32((uint32_t)(EAX));
  /* 120b2cf2 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 120b2cf5 push ecx */
  push32((uint32_t)(ECX));
  /* 120b2cf6 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 120b2cf9 push edx */
  push32((uint32_t)(EDX));
  /* 120b2cfa call 0x120ba300 */
  push32(0x120b2cffu); f_120ba300();
  /* 120b2cff add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b2d02 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b2d05 push eax */
  push32((uint32_t)(EAX));
  /* 120b2d06 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 120b2d09 push ecx */
  push32((uint32_t)(ECX));
  /* 120b2d0a call 0x120b2be0 */
  push32(0x120b2d0fu); f_120b2be0();
  /* 120b2d0f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b2d12 mov esp, ebp */
  ESP = (EBP);
  /* 120b2d14 pop ebp */
  EBP = (pop32());
  /* 120b2d15 ret  */
  ESPCHK(0x120b2ce0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d20 @ 0x120b2d20 (54 bytes, 24 insns) */
void f_120b2d20(void) {
  FTRACE(0x120b2d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b2d20 push ebp */
  push32((uint32_t)(EBP));
  /* 120b2d21 mov ebp, esp */
  EBP = (ESP);
  /* 120b2d23 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b2d26 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b2d28 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b2d2a push 0 */
  push32((uint32_t)(0x0u));
  /* 120b2d2c push 1 */
  push32((uint32_t)(0x1u));
  /* 120b2d2e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b2d31 push eax */
  push32((uint32_t)(EAX));
  /* 120b2d32 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 120b2d35 push ecx */
  push32((uint32_t)(ECX));
  /* 120b2d36 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 120b2d39 push edx */
  push32((uint32_t)(EDX));
  /* 120b2d3a call 0x120ba300 */
  push32(0x120b2d3fu); f_120ba300();
  /* 120b2d3f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b2d42 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b2d45 push eax */
  push32((uint32_t)(EAX));
  /* 120b2d46 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 120b2d49 push ecx */
  push32((uint32_t)(ECX));
  /* 120b2d4a call 0x120b2c20 */
  push32(0x120b2d4fu); f_120b2c20();
  /* 120b2d4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b2d52 mov esp, ebp */
  ESP = (EBP);
  /* 120b2d54 pop ebp */
  EBP = (pop32());
  /* 120b2d55 ret  */
  ESPCHK(0x120b2d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10012d60 @ 0x120b2d60 (54 bytes, 24 insns) */
void f_120b2d60(void) {
  FTRACE(0x120b2d60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b2d60 push ebp */
  push32((uint32_t)(EBP));
  /* 120b2d61 mov ebp, esp */
  EBP = (ESP);
  /* 120b2d63 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b2d66 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b2d68 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b2d6a push 0 */
  push32((uint32_t)(0x0u));
  /* 120b2d6c push 0 */
  push32((uint32_t)(0x0u));
  /* 120b2d6e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b2d71 push eax */
  push32((uint32_t)(EAX));
  /* 120b2d72 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 120b2d75 push ecx */
  push32((uint32_t)(ECX));
  /* 120b2d76 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 120b2d79 push edx */
  push32((uint32_t)(EDX));
  /* 120b2d7a call 0x120ba300 */
  push32(0x120b2d7fu); f_120ba300();
  /* 120b2d7f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b2d82 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b2d85 push eax */
  push32((uint32_t)(EAX));
  /* 120b2d86 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 120b2d89 push ecx */
  push32((uint32_t)(ECX));
  /* 120b2d8a call 0x120b2c00 */
  push32(0x120b2d8fu); f_120b2c00();
  /* 120b2d8f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b2d92 mov esp, ebp */
  ESP = (EBP);
  /* 120b2d94 pop ebp */
  EBP = (pop32());
  /* 120b2d95 ret  */
  ESPCHK(0x120b2d60u, _esp0);
  ESP += 4; return;
}

/* FUN_10012da0 @ 0x120b2da0 (250 bytes, 90 insns) */
void f_120b2da0(void) {
  FTRACE(0x120b2da0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b2da0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b2da1 mov ebp, esp */
  EBP = (ESP);
  /* 120b2da3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b2da6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b2da9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120b2dac mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b2daf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 120b2db2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 120b2db5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b2db8 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 120b2dbb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b2dbe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b2dc1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_120b2dc4:;
  /* 120b2dc4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b2dc8 jle 0x120b2e0b */
  if ((C.zf||C.sf!=C.of)) goto L_120b2e0b;
  /* 120b2dca mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b2dcd movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 120b2dd0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b2dd2 je 0x120b2de8 */
  if (C.zf) goto L_120b2de8;
  /* 120b2dd4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b2dd7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 120b2dda mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 120b2ddd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b2de0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b2de3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120b2de6 jmp 0x120b2def */
  goto L_120b2def;
L_120b2de8:;
  /* 120b2de8 mov dword ptr [ebp - 0xc], 0x30 */
  w32((uint32_t)(EBP + -0xc), (0x30u));
L_120b2def:;
  /* 120b2def mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b2df2 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 120b2df5 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 120b2df7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b2dfa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b2dfd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120b2e00 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b2e03 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b2e06 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 120b2e09 jmp 0x120b2dc4 */
  goto L_120b2dc4;
L_120b2e0b:;
  /* 120b2e0b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b2e0e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 120b2e11 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b2e15 jl 0x120b2e54 */
  if ((C.sf!=C.of)) goto L_120b2e54;
  /* 120b2e17 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b2e1a movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120b2e1d cmp ecx, 0x35 */
  { uint32_t _a=(ECX),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b2e20 jl 0x120b2e54 */
  if ((C.sf!=C.of)) goto L_120b2e54;
  /* 120b2e22 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b2e25 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b2e28 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_120b2e2b:;
  /* 120b2e2b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b2e2e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 120b2e31 cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b2e34 jne 0x120b2e47 */
  if (!C.zf) goto L_120b2e47;
  /* 120b2e36 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b2e39 mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 120b2e3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b2e3f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b2e42 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120b2e45 jmp 0x120b2e2b */
  goto L_120b2e2b;
L_120b2e47:;
  /* 120b2e47 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b2e4a mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 120b2e4c add dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 120b2e4f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b2e52 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
L_120b2e54:;
  /* 120b2e54 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b2e57 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 120b2e5a cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b2e5d jne 0x120b2e70 */
  if (!C.zf) goto L_120b2e70;
  /* 120b2e5f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b2e62 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 120b2e65 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b2e68 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b2e6b mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 120b2e6e jmp 0x120b2e96 */
  goto L_120b2e96;
L_120b2e70:;
  /* 120b2e70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b2e73 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b2e76 push eax */
  push32((uint32_t)(EAX));
  /* 120b2e77 call 0x120b1210 */
  push32(0x120b2e7cu); f_120b1210();
  /* 120b2e7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b2e7f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b2e82 push eax */
  push32((uint32_t)(EAX));
  /* 120b2e83 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b2e86 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b2e89 push ecx */
  push32((uint32_t)(ECX));
  /* 120b2e8a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b2e8d push edx */
  push32((uint32_t)(EDX));
  /* 120b2e8e call 0x120b30f0 */
  push32(0x120b2e93u); f_120b30f0();
  /* 120b2e93 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120b2e96:;
  /* 120b2e96 mov esp, ebp */
  ESP = (EBP);
  /* 120b2e98 pop ebp */
  EBP = (pop32());
  /* 120b2e99 ret  */
  ESPCHK(0x120b2da0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ea0 @ 0x120b2ea0 (119 bytes, 44 insns) */
void f_120b2ea0(void) {
  FTRACE(0x120b2ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b2ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b2ea1 mov ebp, esp */
  EBP = (ESP);
  /* 120b2ea3 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b2ea6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 120b2ea9 push eax */
  push32((uint32_t)(EAX));
  /* 120b2eaa lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 120b2ead push ecx */
  push32((uint32_t)(ECX));
  /* 120b2eae call 0x120b2f20 */
  push32(0x120b2eb3u); f_120b2f20();
  /* 120b2eb3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b2eb6 lea edx, [ebp - 0x28] */
  EDX = ((uint32_t)(EBP + -0x28));
  /* 120b2eb9 push edx */
  push32((uint32_t)(EDX));
  /* 120b2eba push 0 */
  push32((uint32_t)(0x0u));
  /* 120b2ebc push 0x11 */
  push32((uint32_t)(0x11u));
  /* 120b2ebe sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b2ec1 mov eax, esp */
  EAX = (ESP);
  /* 120b2ec3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b2ec6 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 120b2ec8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b2ecb mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 120b2ece mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 120b2ed2 mov word ptr [eax + 8], cx */
  w16((uint32_t)(EAX + 0x8), (CX));
  /* 120b2ed6 call 0x120bae80 */
  push32(0x120b2edbu); f_120bae80();
  /* 120b2edb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b2ede mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b2ee1 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 120b2ee4 movsx eax, byte ptr [ebp - 0x26] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x26))));
  /* 120b2ee8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b2eeb mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 120b2eed movsx edx, word ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x28))));
  /* 120b2ef1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b2ef4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 120b2ef7 lea ecx, [ebp - 0x24] */
  ECX = ((uint32_t)(EBP + -0x24));
  /* 120b2efa push ecx */
  push32((uint32_t)(ECX));
  /* 120b2efb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 120b2efe push edx */
  push32((uint32_t)(EDX));
  /* 120b2eff call 0x120b1390 */
  push32(0x120b2f04u); f_120b1390();
  /* 120b2f04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b2f07 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b2f0a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 120b2f0d mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 120b2f10 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b2f13 mov esp, ebp */
  ESP = (EBP);
  /* 120b2f15 pop ebp */
  EBP = (pop32());
  /* 120b2f16 ret  */
  ESPCHK(0x120b2ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f20 @ 0x120b2f20 (354 bytes, 104 insns) */
void f_120b2f20(void) {
  FTRACE(0x120b2f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b2f20 push ebp */
  push32((uint32_t)(EBP));
  /* 120b2f21 mov ebp, esp */
  EBP = (ESP);
  /* 120b2f23 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b2f26 mov dword ptr [ebp - 0xc], 0x80000000 */
  w32((uint32_t)(EBP + -0xc), (0x80000000u));
  /* 120b2f2d mov word ptr [ebp - 4], 0 */
  w16((uint32_t)(EBP + -0x4), (0x0u));
  /* 120b2f33 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b2f36 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120b2f38 mov cx, word ptr [eax + 6] */
  CX = (r16((uint32_t)(EAX + 0x6)));
  /* 120b2f3c and ecx, 0x7ff0 */
  { uint32_t _r=(ECX)&(0x7ff0u); ECX = (_r); fl_logic(_r,32); }
  /* 120b2f42 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 120b2f45 mov word ptr [ebp - 0x14], cx */
  w16((uint32_t)(EBP + -0x14), (CX));
  /* 120b2f49 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b2f4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b2f4e mov ax, word ptr [edx + 6] */
  AX = (r16((uint32_t)(EDX + 0x6)));
  /* 120b2f52 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 120b2f57 mov word ptr [ebp - 0x18], ax */
  w16((uint32_t)(EBP + -0x18), (AX));
  /* 120b2f5b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b2f5e mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 120b2f61 and edx, 0xfffff */
  { uint32_t _r=(EDX)&(0xfffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120b2f67 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 120b2f6a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b2f6d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120b2f6f mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 120b2f72 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b2f75 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120b2f7b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 120b2f7e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b2f82 je 0x120b2f97 */
  if (C.zf) goto L_120b2f97;
  /* 120b2f84 cmp dword ptr [ebp - 0x1c], 0x7ff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x7ffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b2f8b je 0x120b2f8f */
  if (C.zf) goto L_120b2f8f;
  /* 120b2f8d jmp 0x120b2fda */
  goto L_120b2fda;
L_120b2f8f:;
  /* 120b2f8f mov word ptr [ebp - 4], 0x7fff */
  w16((uint32_t)(EBP + -0x4), (0x7fffu));
  /* 120b2f95 jmp 0x120b2ff5 */
  goto L_120b2ff5;
L_120b2f97:;
  /* 120b2f97 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b2f9b jne 0x120b2fc4 */
  if (!C.zf) goto L_120b2fc4;
  /* 120b2f9d cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b2fa1 jne 0x120b2fc4 */
  if (!C.zf) goto L_120b2fc4;
  /* 120b2fa3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b2fa6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 120b2fad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b2fb0 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 120b2fb6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b2fb9 mov word ptr [edx + 8], 0 */
  w16((uint32_t)(EDX + 0x8), (0x0u));
  /* 120b2fbf jmp 0x120b307e */
  goto L_120b307e;
L_120b2fc4:;
  /* 120b2fc4 movsx eax, word ptr [ebp - 0x14] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x14))));
  /* 120b2fc8 add eax, 0x3c01 */
  { uint32_t _a=(EAX),_b=(0x3c01u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b2fcd mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 120b2fd1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 120b2fd8 jmp 0x120b2ff5 */
  goto L_120b2ff5;
L_120b2fda:;
  /* 120b2fda mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 120b2fde sub cx, 0x3ff */
  { uint32_t _a=(CX),_b=(0x3ffu),_r=_a-_b; CX = (_r); fl_sub(_a,_b,_r,16); }
  /* 120b2fe3 mov word ptr [ebp - 0x14], cx */
  w16((uint32_t)(EBP + -0x14), (CX));
  /* 120b2fe7 movsx edx, word ptr [ebp - 0x14] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x14))));
  /* 120b2feb add edx, 0x3fff */
  { uint32_t _a=(EDX),_b=(0x3fffu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b2ff1 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_120b2ff5:;
  /* 120b2ff5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b2ff8 shl eax, 0xb */
  EAX = (sh_shl((uint32_t)(EAX), (0xbu)&0x1f, 32));
  /* 120b2ffb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b2ffe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120b3000 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b3003 shr edx, 0x15 */
  EDX = (sh_shr((uint32_t)(EDX), (0x15u)&0x1f, 32));
  /* 120b3006 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 120b3008 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b300b mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 120b300e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b3011 shl ecx, 0xb */
  ECX = (sh_shl((uint32_t)(ECX), (0xbu)&0x1f, 32));
  /* 120b3014 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b3017 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_120b3019:;
  /* 120b3019 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b301c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 120b301f and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 120b3025 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b3027 jne 0x120b3064 */
  if (!C.zf) goto L_120b3064;
  /* 120b3029 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b302c mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 120b302f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 120b3031 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b3034 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120b3036 and edx, 0x80000000 */
  { uint32_t _r=(EDX)&(0x80000000u); EDX = (_r); fl_logic(_r,32); }
  /* 120b303c neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 120b303e sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b3040 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 120b3042 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 120b3044 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b3047 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 120b304a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b304d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120b304f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 120b3051 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b3054 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 120b3056 mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 120b305a sub dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 120b305e mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
  /* 120b3062 jmp 0x120b3019 */
  goto L_120b3019;
L_120b3064:;
  /* 120b3064 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b3067 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120b306c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b306f and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 120b3075 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 120b3077 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b307a mov word ptr [edx + 8], ax */
  w16((uint32_t)(EDX + 0x8), (AX));
L_120b307e:;
  /* 120b307e mov esp, ebp */
  ESP = (EBP);
  /* 120b3080 pop ebp */
  EBP = (pop32());
  /* 120b3081 ret  */
  ESPCHK(0x120b2f20u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x120b3090 (88 bytes, 40 insns) */
void f_120b3090(void) {
  FTRACE(0x120b3090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b3090 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 120b3094 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 120b3098 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b309a je 0x120b30e3 */
  if (C.zf) goto L_120b30e3;
  /* 120b309c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b309e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 120b30a2 push edi */
  push32((uint32_t)(EDI));
  /* 120b30a3 mov edi, ecx */
  EDI = (ECX);
  /* 120b30a5 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b30a8 jb 0x120b30d7 */
  if (C.cf) goto L_120b30d7;
  /* 120b30aa neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 120b30ac and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 120b30af je 0x120b30b9 */
  if (C.zf) goto L_120b30b9;
  /* 120b30b1 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_120b30b3:;
  /* 120b30b3 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 120b30b5 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 120b30b6 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 120b30b7 jne 0x120b30b3 */
  if (!C.zf) goto L_120b30b3;
L_120b30b9:;
  /* 120b30b9 mov ecx, eax */
  ECX = (EAX);
  /* 120b30bb shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 120b30be add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b30c0 mov ecx, eax */
  ECX = (EAX);
  /* 120b30c2 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 120b30c5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b30c7 mov ecx, edx */
  ECX = (EDX);
  /* 120b30c9 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 120b30cc shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 120b30cf je 0x120b30d7 */
  if (C.zf) goto L_120b30d7;
  /* 120b30d1 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 120b30d3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b30d5 je 0x120b30dd */
  if (C.zf) goto L_120b30dd;
L_120b30d7:;
  /* 120b30d7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 120b30d9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 120b30da dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 120b30db jne 0x120b30d7 */
  if (!C.zf) goto L_120b30d7;
L_120b30dd:;
  /* 120b30dd mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 120b30e1 pop edi */
  EDI = (pop32());
  /* 120b30e2 ret  */
  ESPCHK(0x120b3090u, _esp0);
  ESP += 4; return;
L_120b30e3:;
  /* 120b30e3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 120b30e7 ret  */
  ESPCHK(0x120b3090u, _esp0);
  ESP += 4; return;
}

/* FUN_100130f0 @ 0x120b30f0 (664 bytes, 260 insns) [15 switch table(s)] */
void f_120b30f0(void) {
  FTRACE(0x120b30f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b30f0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b30f1 mov ebp, esp */
  EBP = (ESP);
  /* 120b30f3 push edi */
  push32((uint32_t)(EDI));
  /* 120b30f4 push esi */
  push32((uint32_t)(ESI));
  /* 120b30f5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 120b30f8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b30fb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 120b30fe mov eax, ecx */
  EAX = (ECX);
  /* 120b3100 mov edx, ecx */
  EDX = (ECX);
  /* 120b3102 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b3104 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b3106 jbe 0x120b3110 */
  if ((C.cf||C.zf)) goto L_120b3110;
  /* 120b3108 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b310a jb 0x120b3288 */
  if (C.cf) goto L_120b3288;
L_120b3110:;
  /* 120b3110 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 120b3116 jne 0x120b312c */
  if (!C.zf) goto L_120b312c;
  /* 120b3118 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 120b311b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 120b311e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b3121 jb 0x120b314c */
  if (C.cf) goto L_120b314c;
  /* 120b3123 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 120b3125 jmp dword ptr [edx*4 + 0x120b3238] */
  switch (EDX) {
    case 0: goto L_120b3248;
    case 1: goto L_120b3250;
    case 2: goto L_120b325c;
    case 3: goto L_120b3270;
    default: x86_unimpl("switch@0x120b3125 out of table"); return;
  }
L_120b312c:;
  /* 120b312c mov eax, edi */
  EAX = (EDI);
  /* 120b312e mov edx, 3 */
  EDX = (0x3u);
  /* 120b3133 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b3136 jb 0x120b3144 */
  if (C.cf) goto L_120b3144;
  /* 120b3138 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 120b313b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b313d jmp dword ptr [eax*4 + 0x120b3150] */
  switch (EAX) {
    case 1: goto L_120b3160;
    case 2: goto L_120b318c;
    case 3: goto L_120b31b0;
    default: x86_unimpl("switch@0x120b313d out of table"); return;
  }
L_120b3144:;
  /* 120b3144 jmp dword ptr [ecx*4 + 0x120b3248] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x120b3248)))); return;
  /* 120b314b nop  */
  /* nop */
L_120b314c:;
  /* 120b314c jmp dword ptr [ecx*4 + 0x120b31cc] */
  switch (ECX) {
    case 0: goto L_120b322f;
    case 1: goto L_120b321c;
    case 2: goto L_120b3214;
    case 3: goto L_120b320c;
    case 4: goto L_120b3204;
    case 5: goto L_120b31fc;
    case 6: goto L_120b31f4;
    case 7: goto L_120b31ec;
    default: x86_unimpl("switch@0x120b314c out of table"); return;
  }
  /* 120b3153 nop  */
  /* nop */
L_120b3160:;
  /* 120b3160 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 120b3162 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120b3164 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 120b3166 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 120b3169 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 120b316c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 120b316f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 120b3172 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 120b3175 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120b3178 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 120b317b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b317e jb 0x120b314c */
  if (C.cf) goto L_120b314c;
  /* 120b3180 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 120b3182 jmp dword ptr [edx*4 + 0x120b3238] */
  switch (EDX) {
    case 0: goto L_120b3248;
    case 1: goto L_120b3250;
    case 2: goto L_120b325c;
    case 3: goto L_120b3270;
    default: x86_unimpl("switch@0x120b3182 out of table"); return;
  }
  /* 120b3189 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_120b318c:;
  /* 120b318c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 120b318e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120b3190 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 120b3192 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 120b3195 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 120b3198 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 120b319b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120b319e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 120b31a1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b31a4 jb 0x120b314c */
  if (C.cf) goto L_120b314c;
  /* 120b31a6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 120b31a8 jmp dword ptr [edx*4 + 0x120b3238] */
  switch (EDX) {
    case 0: goto L_120b3248;
    case 1: goto L_120b3250;
    case 2: goto L_120b325c;
    case 3: goto L_120b3270;
    default: x86_unimpl("switch@0x120b31a8 out of table"); return;
  }
  /* 120b31af nop  */
  /* nop */
L_120b31b0:;
  /* 120b31b0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 120b31b2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120b31b4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 120b31b6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 120b31b7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 120b31ba inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 120b31bb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b31be jb 0x120b314c */
  if (C.cf) goto L_120b314c;
  /* 120b31c0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 120b31c2 jmp dword ptr [edx*4 + 0x120b3238] */
  switch (EDX) {
    case 0: goto L_120b3248;
    case 1: goto L_120b3250;
    case 2: goto L_120b325c;
    case 3: goto L_120b3270;
    default: x86_unimpl("switch@0x120b31c2 out of table"); return;
  }
  /* 120b31c9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_120b31ec:;
  /* 120b31ec mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 120b31f0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_120b31f4:;
  /* 120b31f4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 120b31f8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_120b31fc:;
  /* 120b31fc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 120b3200 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_120b3204:;
  /* 120b3204 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 120b3208 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_120b320c:;
  /* 120b320c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 120b3210 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_120b3214:;
  /* 120b3214 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 120b3218 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_120b321c:;
  /* 120b321c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 120b3220 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 120b3224 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 120b322b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120b322d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_120b322f:;
  /* 120b322f jmp dword ptr [edx*4 + 0x120b3238] */
  switch (EDX) {
    case 0: goto L_120b3248;
    case 1: goto L_120b3250;
    case 2: goto L_120b325c;
    case 3: goto L_120b3270;
    default: x86_unimpl("switch@0x120b322f out of table"); return;
  }
  /* 120b3236 mov edi, edi */
  EDI = (EDI);
L_120b3248:;
  /* 120b3248 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b324b pop esi */
  ESI = (pop32());
  /* 120b324c pop edi */
  EDI = (pop32());
  /* 120b324d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120b324e ret  */
  ESPCHK(0x120b30f0u, _esp0);
  ESP += 4; return;
  /* 120b324f nop  */
  /* nop */
L_120b3250:;
  /* 120b3250 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120b3252 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 120b3254 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b3257 pop esi */
  ESI = (pop32());
  /* 120b3258 pop edi */
  EDI = (pop32());
  /* 120b3259 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120b325a ret  */
  ESPCHK(0x120b30f0u, _esp0);
  ESP += 4; return;
  /* 120b325b nop  */
  /* nop */
L_120b325c:;
  /* 120b325c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120b325e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 120b3260 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 120b3263 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 120b3266 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b3269 pop esi */
  ESI = (pop32());
  /* 120b326a pop edi */
  EDI = (pop32());
  /* 120b326b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120b326c ret  */
  ESPCHK(0x120b30f0u, _esp0);
  ESP += 4; return;
  /* 120b326d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_120b3270:;
  /* 120b3270 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 120b3272 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 120b3274 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 120b3277 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 120b327a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 120b327d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 120b3280 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b3283 pop esi */
  ESI = (pop32());
  /* 120b3284 pop edi */
  EDI = (pop32());
  /* 120b3285 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120b3286 ret  */
  ESPCHK(0x120b30f0u, _esp0);
  ESP += 4; return;
  /* 120b3287 nop  */
  /* nop */
L_120b3288:;
  /* 120b3288 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 120b328c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 120b3290 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 120b3296 jne 0x120b32bc */
  if (!C.zf) goto L_120b32bc;
  /* 120b3298 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 120b329b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 120b329e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b32a1 jb 0x120b32b0 */
  if (C.cf) goto L_120b32b0;
  /* 120b32a3 std  */
  C.df=1;
  /* 120b32a4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 120b32a6 cld  */
  C.df=0;
  /* 120b32a7 jmp dword ptr [edx*4 + 0x120b33d0] */
  switch (EDX) {
    case 0: goto L_120b33e0;
    case 1: goto L_120b33e8;
    case 2: goto L_120b33f8;
    case 3: goto L_120b340c;
    default: x86_unimpl("switch@0x120b32a7 out of table"); return;
  }
  /* 120b32ae mov edi, edi */
  EDI = (EDI);
L_120b32b0:;
  /* 120b32b0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 120b32b2 jmp dword ptr [ecx*4 + 0x120b3380] */
  switch (ECX) {
    case 0: goto L_120b33c7;
    default: x86_unimpl("switch@0x120b32b2 out of table"); return;
  }
  /* 120b32b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_120b32bc:;
  /* 120b32bc mov eax, edi */
  EAX = (EDI);
  /* 120b32be mov edx, 3 */
  EDX = (0x3u);
  /* 120b32c3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b32c6 jb 0x120b32d4 */
  if (C.cf) goto L_120b32d4;
  /* 120b32c8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 120b32cb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b32cd jmp dword ptr [eax*4 + 0x120b32d8] */
  switch (EAX) {
    case 1: goto L_120b32e8;
    case 2: goto L_120b3308;
    case 3: goto L_120b3330;
    default: x86_unimpl("switch@0x120b32cd out of table"); return;
  }
L_120b32d4:;
  /* 120b32d4 jmp dword ptr [ecx*4 + 0x120b33d0] */
  switch (ECX) {
    case 0: goto L_120b33e0;
    case 1: goto L_120b33e8;
    case 2: goto L_120b33f8;
    case 3: goto L_120b340c;
    default: x86_unimpl("switch@0x120b32d4 out of table"); return;
  }
  /* 120b32db nop  */
  /* nop */
L_120b32e8:;
  /* 120b32e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 120b32eb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 120b32ed mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 120b32f0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 120b32f1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 120b32f4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 120b32f5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b32f8 jb 0x120b32b0 */
  if (C.cf) goto L_120b32b0;
  /* 120b32fa std  */
  C.df=1;
  /* 120b32fb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 120b32fd cld  */
  C.df=0;
  /* 120b32fe jmp dword ptr [edx*4 + 0x120b33d0] */
  switch (EDX) {
    case 0: goto L_120b33e0;
    case 1: goto L_120b33e8;
    case 2: goto L_120b33f8;
    case 3: goto L_120b340c;
    default: x86_unimpl("switch@0x120b32fe out of table"); return;
  }
  /* 120b3305 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_120b3308:;
  /* 120b3308 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 120b330b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 120b330d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 120b3310 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 120b3313 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 120b3316 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 120b3319 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b331c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b331f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b3322 jb 0x120b32b0 */
  if (C.cf) goto L_120b32b0;
  /* 120b3324 std  */
  C.df=1;
  /* 120b3325 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 120b3327 cld  */
  C.df=0;
  /* 120b3328 jmp dword ptr [edx*4 + 0x120b33d0] */
  switch (EDX) {
    case 0: goto L_120b33e0;
    case 1: goto L_120b33e8;
    case 2: goto L_120b33f8;
    case 3: goto L_120b340c;
    default: x86_unimpl("switch@0x120b3328 out of table"); return;
  }
  /* 120b332f nop  */
  /* nop */
L_120b3330:;
  /* 120b3330 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 120b3333 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 120b3335 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 120b3338 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 120b333b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 120b333e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 120b3341 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 120b3344 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 120b3347 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b334a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b334d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b3350 jb 0x120b32b0 */
  if (C.cf) goto L_120b32b0;
  /* 120b3356 std  */
  C.df=1;
  /* 120b3357 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 120b3359 cld  */
  C.df=0;
  /* 120b335a jmp dword ptr [edx*4 + 0x120b33d0] */
  switch (EDX) {
    case 0: goto L_120b33e0;
    case 1: goto L_120b33e8;
    case 2: goto L_120b33f8;
    case 3: goto L_120b340c;
    default: x86_unimpl("switch@0x120b335a out of table"); return;
  }
  /* 120b3361 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 120b3364 test byte ptr [ebx], dh */
  { uint32_t _r=(r8((uint32_t)(EBX)))&(C.d.b.h); fl_logic(_r,8); }
  /* 120b3366 or edx, dword ptr [edx] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EDX))); EDX = (_r); fl_logic(_r,32); }
  /* 120b3369 xor ecx, dword ptr [ebx] */
  { uint32_t _r=(ECX)^(r32((uint32_t)(EBX))); ECX = (_r); fl_logic(_r,32); }
  /* 120b336b adc dl, byte ptr [ebx + esi + 0x339c120b] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EBX + ESI*1 + 0x339c120b))),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 120b3372 or edx, dword ptr [edx] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EDX))); EDX = (_r); fl_logic(_r,32); }
  /* 120b3374 movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 120b3375 xor ecx, dword ptr [ebx] */
  { uint32_t _r=(ECX)^(r32((uint32_t)(EBX))); ECX = (_r); fl_logic(_r,32); }
  /* 120b3377 adc ch, byte ptr [ebx + esi + 0x33b4120b] */
  { uint32_t _a=(C.c.b.h),_b=(r8((uint32_t)(EBX + ESI*1 + 0x33b4120b))),_r=_a+_b+C.cf; C.c.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 120b337e or edx, dword ptr [edx] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EDX))); EDX = (_r); fl_logic(_r,32); }
  /* 120b3384 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 120b3388 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 120b338c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 120b3390 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 120b3394 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 120b3398 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 120b339c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 120b33a0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 120b33a4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 120b33a8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 120b33ac mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 120b33b0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 120b33b4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 120b33b8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 120b33bc lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 120b33c3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 120b33c5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_120b33c7:;
  /* 120b33c7 jmp dword ptr [edx*4 + 0x120b33d0] */
  switch (EDX) {
    case 0: goto L_120b33e0;
    case 1: goto L_120b33e8;
    case 2: goto L_120b33f8;
    case 3: goto L_120b340c;
    default: x86_unimpl("switch@0x120b33c7 out of table"); return;
  }
  /* 120b33ce mov edi, edi */
  EDI = (EDI);
L_120b33e0:;
  /* 120b33e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b33e3 pop esi */
  ESI = (pop32());
  /* 120b33e4 pop edi */
  EDI = (pop32());
  /* 120b33e5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120b33e6 ret  */
  ESPCHK(0x120b30f0u, _esp0);
  ESP += 4; return;
  /* 120b33e7 nop  */
  /* nop */
L_120b33e8:;
  /* 120b33e8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 120b33eb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 120b33ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b33f1 pop esi */
  ESI = (pop32());
  /* 120b33f2 pop edi */
  EDI = (pop32());
  /* 120b33f3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120b33f4 ret  */
  ESPCHK(0x120b30f0u, _esp0);
  ESP += 4; return;
  /* 120b33f5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_120b33f8:;
  /* 120b33f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 120b33fb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 120b33fe mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 120b3401 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 120b3404 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b3407 pop esi */
  ESI = (pop32());
  /* 120b3408 pop edi */
  EDI = (pop32());
  /* 120b3409 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120b340a ret  */
  ESPCHK(0x120b30f0u, _esp0);
  ESP += 4; return;
  /* 120b340b nop  */
  /* nop */
L_120b340c:;
  /* 120b340c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 120b340f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 120b3412 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 120b3415 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 120b3418 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 120b341b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 120b341e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b3421 pop esi */
  ESI = (pop32());
  /* 120b3422 pop edi */
  EDI = (pop32());
  /* 120b3423 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 120b3424 ret  */
  ESPCHK(0x120b30f0u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x120b3430 (15 bytes, 7 insns) */
void f_120b3430(void) {
  FTRACE(0x120b3430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b3430 push ebp */
  push32((uint32_t)(EBP));
  /* 120b3431 mov ebp, esp */
  EBP = (ESP);
  /* 120b3433 push 2 */
  push32((uint32_t)(0x2u));
  /* 120b3435 call 0x120ab6f0 */
  push32(0x120b343au); f_120ab6f0();
  /* 120b343a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b343d pop ebp */
  EBP = (pop32());
  /* 120b343e ret  */
  ESPCHK(0x120b3430u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x120b3440 (48 bytes, 17 insns) */
void f_120b3440(void) {
  FTRACE(0x120b3440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b3440 push ebp */
  push32((uint32_t)(EBP));
  /* 120b3441 mov ebp, esp */
  EBP = (ESP);
  /* 120b3443 push ecx */
  push32((uint32_t)(ECX));
  /* 120b3444 push 9 */
  push32((uint32_t)(0x9u));
  /* 120b3446 call 0x120acb80 */
  push32(0x120b344bu); f_120acb80();
  /* 120b344b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b344e mov eax, dword ptr [0x120e12fc] */
  EAX = (r32((uint32_t)(0x120e12fc)));
  /* 120b3453 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120b3456 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b3459 mov dword ptr [0x120e12fc], ecx */
  w32((uint32_t)(0x120e12fc), (ECX));
  /* 120b345f push 9 */
  push32((uint32_t)(0x9u));
  /* 120b3461 call 0x120acc20 */
  push32(0x120b3466u); f_120acc20();
  /* 120b3466 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b3469 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b346c mov esp, ebp */
  ESP = (EBP);
  /* 120b346e pop ebp */
  EBP = (pop32());
  /* 120b346f ret  */
  ESPCHK(0x120b3440u, _esp0);
  ESP += 4; return;
}

/* FUN_10013470 @ 0x120b3470 (10 bytes, 5 insns) */
void f_120b3470(void) {
  FTRACE(0x120b3470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b3470 push ebp */
  push32((uint32_t)(EBP));
  /* 120b3471 mov ebp, esp */
  EBP = (ESP);
  /* 120b3473 mov eax, dword ptr [0x120e12fc] */
  EAX = (r32((uint32_t)(0x120e12fc)));
  /* 120b3478 pop ebp */
  EBP = (pop32());
  /* 120b3479 ret  */
  ESPCHK(0x120b3470u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x120b3480 (45 bytes, 19 insns) */
void f_120b3480(void) {
  FTRACE(0x120b3480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b3480 push ebp */
  push32((uint32_t)(EBP));
  /* 120b3481 mov ebp, esp */
  EBP = (ESP);
  /* 120b3483 push ecx */
  push32((uint32_t)(ECX));
  /* 120b3484 mov eax, dword ptr [0x120e12fc] */
  EAX = (r32((uint32_t)(0x120e12fc)));
  /* 120b3489 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120b348c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b3490 je 0x120b34a0 */
  if (C.zf) goto L_120b34a0;
  /* 120b3492 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b3495 push ecx */
  push32((uint32_t)(ECX));
  /* 120b3496 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x120b3499u);
  /* 120b3499 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b349c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b349e jne 0x120b34a4 */
  if (!C.zf) goto L_120b34a4;
L_120b34a0:;
  /* 120b34a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b34a2 jmp 0x120b34a9 */
  goto L_120b34a9;
L_120b34a4:;
  /* 120b34a4 mov eax, 1 */
  EAX = (0x1u);
L_120b34a9:;
  /* 120b34a9 mov esp, ebp */
  ESP = (EBP);
  /* 120b34ab pop ebp */
  EBP = (pop32());
  /* 120b34ac ret  */
  ESPCHK(0x120b3480u, _esp0);
  ESP += 4; return;
}

/* FUN_100134b0 @ 0x120b34b0 (23 bytes, 10 insns) */
void f_120b34b0(void) {
  FTRACE(0x120b34b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b34b0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b34b1 mov ebp, esp */
  EBP = (ESP);
  /* 120b34b3 mov eax, dword ptr [0x120e12f8] */
  EAX = (r32((uint32_t)(0x120e12f8)));
  /* 120b34b8 push eax */
  push32((uint32_t)(EAX));
  /* 120b34b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b34bc push ecx */
  push32((uint32_t)(ECX));
  /* 120b34bd call 0x120b34d0 */
  push32(0x120b34c2u); f_120b34d0();
  /* 120b34c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b34c5 pop ebp */
  EBP = (pop32());
  /* 120b34c6 ret  */
  ESPCHK(0x120b34b0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x120b34d0 (87 bytes, 34 insns) */
void f_120b34d0(void) {
  FTRACE(0x120b34d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b34d0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b34d1 mov ebp, esp */
  EBP = (ESP);
  /* 120b34d3 push ecx */
  push32((uint32_t)(ECX));
  /* 120b34d4 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b34d8 jbe 0x120b34de */
  if ((C.cf||C.zf)) goto L_120b34de;
  /* 120b34da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b34dc jmp 0x120b3523 */
  goto L_120b3523;
L_120b34de:;
  /* 120b34de cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b34e2 ja 0x120b34f5 */
  if ((!C.cf&&!C.zf)) goto L_120b34f5;
  /* 120b34e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b34e7 push eax */
  push32((uint32_t)(EAX));
  /* 120b34e8 call 0x120b3530 */
  push32(0x120b34edu); f_120b3530();
  /* 120b34ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b34f0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120b34f3 jmp 0x120b34fc */
  goto L_120b34fc;
L_120b34f5:;
  /* 120b34f5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_120b34fc:;
  /* 120b34fc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b3500 jne 0x120b3508 */
  if (!C.zf) goto L_120b3508;
  /* 120b3502 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b3506 jne 0x120b350d */
  if (!C.zf) goto L_120b350d;
L_120b3508:;
  /* 120b3508 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b350b jmp 0x120b3523 */
  goto L_120b3523;
L_120b350d:;
  /* 120b350d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b3510 push ecx */
  push32((uint32_t)(ECX));
  /* 120b3511 call 0x120b3480 */
  push32(0x120b3516u); f_120b3480();
  /* 120b3516 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b3519 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b351b jne 0x120b3521 */
  if (!C.zf) goto L_120b3521;
  /* 120b351d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b351f jmp 0x120b3523 */
  goto L_120b3523;
L_120b3521:;
  /* 120b3521 jmp 0x120b34de */
  goto L_120b34de;
L_120b3523:;
  /* 120b3523 mov esp, ebp */
  ESP = (EBP);
  /* 120b3525 pop ebp */
  EBP = (pop32());
  /* 120b3526 ret  */
  ESPCHK(0x120b34d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013530 @ 0x120b3530 (109 bytes, 37 insns) */
void f_120b3530(void) {
  FTRACE(0x120b3530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b3530 push ebp */
  push32((uint32_t)(EBP));
  /* 120b3531 mov ebp, esp */
  EBP = (ESP);
  /* 120b3533 push ecx */
  push32((uint32_t)(ECX));
  /* 120b3534 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b3537 cmp eax, dword ptr [0x120df264] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x120df264))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b353d ja 0x120b356d */
  if ((!C.cf&&!C.zf)) goto L_120b356d;
  /* 120b353f push 9 */
  push32((uint32_t)(0x9u));
  /* 120b3541 call 0x120acb80 */
  push32(0x120b3546u); f_120acb80();
  /* 120b3546 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b3549 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b354c push ecx */
  push32((uint32_t)(ECX));
  /* 120b354d call 0x120b4070 */
  push32(0x120b3552u); f_120b4070();
  /* 120b3552 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b3555 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120b3558 push 9 */
  push32((uint32_t)(0x9u));
  /* 120b355a call 0x120acc20 */
  push32(0x120b355fu); f_120acc20();
  /* 120b355f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b3562 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b3566 je 0x120b356d */
  if (C.zf) goto L_120b356d;
  /* 120b3568 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b356b jmp 0x120b3599 */
  goto L_120b3599;
L_120b356d:;
  /* 120b356d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b3571 jne 0x120b357a */
  if (!C.zf) goto L_120b357a;
  /* 120b3573 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_120b357a:;
  /* 120b357a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b357d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b3580 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 120b3583 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 120b3586 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b3589 push eax */
  push32((uint32_t)(EAX));
  /* 120b358a push 0 */
  push32((uint32_t)(0x0u));
  /* 120b358c mov ecx, dword ptr [0x120e2aac] */
  ECX = (r32((uint32_t)(0x120e2aac)));
  /* 120b3592 push ecx */
  push32((uint32_t)(ECX));
  /* 120b3593 call dword ptr [0x120e33a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33a4))), 0x120b3599u);
L_120b3599:;
  /* 120b3599 mov esp, ebp */
  ESP = (EBP);
  /* 120b359b pop ebp */
  EBP = (pop32());
  /* 120b359c ret  */
  ESPCHK(0x120b3530u, _esp0);
  ESP += 4; return;
}

/* FUN_100135a0 @ 0x120b35a0 (10 bytes, 5 insns) */
void f_120b35a0(void) {
  FTRACE(0x120b35a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b35a0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b35a1 mov ebp, esp */
  EBP = (ESP);
  /* 120b35a3 mov eax, 1 */
  EAX = (0x1u);
  /* 120b35a8 pop ebp */
  EBP = (pop32());
  /* 120b35a9 ret  */
  ESPCHK(0x120b35a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100135b0 @ 0x120b35b0 (173 bytes, 59 insns) */
void f_120b35b0(void) {
  FTRACE(0x120b35b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b35b0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b35b1 mov ebp, esp */
  EBP = (ESP);
  /* 120b35b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b35b6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b35ba jbe 0x120b35c3 */
  if ((C.cf||C.zf)) goto L_120b35c3;
  /* 120b35bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b35be jmp 0x120b3659 */
  goto L_120b3659;
L_120b35c3:;
  /* 120b35c3 push 9 */
  push32((uint32_t)(0x9u));
  /* 120b35c5 call 0x120acb80 */
  push32(0x120b35cau); f_120acb80();
  /* 120b35ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b35cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b35d0 push eax */
  push32((uint32_t)(EAX));
  /* 120b35d1 call 0x120b39e0 */
  push32(0x120b35d6u); f_120b39e0();
  /* 120b35d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b35d9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120b35dc cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b35e0 je 0x120b3621 */
  if (C.zf) goto L_120b3621;
  /* 120b35e2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 120b35e9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b35ec cmp ecx, dword ptr [0x120df264] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x120df264))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b35f2 ja 0x120b3612 */
  if ((!C.cf&&!C.zf)) goto L_120b3612;
  /* 120b35f4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b35f7 push edx */
  push32((uint32_t)(EDX));
  /* 120b35f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b35fb push eax */
  push32((uint32_t)(EAX));
  /* 120b35fc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b35ff push ecx */
  push32((uint32_t)(ECX));
  /* 120b3600 call 0x120b48b0 */
  push32(0x120b3605u); f_120b48b0();
  /* 120b3605 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b3608 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b360a je 0x120b3612 */
  if (C.zf) goto L_120b3612;
  /* 120b360c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b360f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_120b3612:;
  /* 120b3612 push 9 */
  push32((uint32_t)(0x9u));
  /* 120b3614 call 0x120acc20 */
  push32(0x120b3619u); f_120acc20();
  /* 120b3619 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b361c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b361f jmp 0x120b3659 */
  goto L_120b3659;
L_120b3621:;
  /* 120b3621 push 9 */
  push32((uint32_t)(0x9u));
  /* 120b3623 call 0x120acc20 */
  push32(0x120b3628u); f_120acc20();
  /* 120b3628 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b362b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b362f jne 0x120b3638 */
  if (!C.zf) goto L_120b3638;
  /* 120b3631 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_120b3638:;
  /* 120b3638 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b363b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b363e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 120b3640 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 120b3643 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b3646 push ecx */
  push32((uint32_t)(ECX));
  /* 120b3647 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b364a push edx */
  push32((uint32_t)(EDX));
  /* 120b364b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 120b364d mov eax, dword ptr [0x120e2aac] */
  EAX = (r32((uint32_t)(0x120e2aac)));
  /* 120b3652 push eax */
  push32((uint32_t)(EAX));
  /* 120b3653 call dword ptr [0x120e33a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33a0))), 0x120b3659u);
L_120b3659:;
  /* 120b3659 mov esp, ebp */
  ESP = (EBP);
  /* 120b365b pop ebp */
  EBP = (pop32());
  /* 120b365c ret  */
  ESPCHK(0x120b35b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013660 @ 0x120b3660 (490 bytes, 165 insns) */
void f_120b3660(void) {
  FTRACE(0x120b3660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b3660 push ebp */
  push32((uint32_t)(EBP));
  /* 120b3661 mov ebp, esp */
  EBP = (ESP);
  /* 120b3663 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b3666 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b366a jne 0x120b367d */
  if (!C.zf) goto L_120b367d;
  /* 120b366c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b366f push eax */
  push32((uint32_t)(EAX));
  /* 120b3670 call 0x120b34b0 */
  push32(0x120b3675u); f_120b34b0();
  /* 120b3675 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b3678 jmp 0x120b3846 */
  goto L_120b3846;
L_120b367d:;
  /* 120b367d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b3681 jne 0x120b3696 */
  if (!C.zf) goto L_120b3696;
  /* 120b3683 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b3686 push ecx */
  push32((uint32_t)(ECX));
  /* 120b3687 call 0x120b3850 */
  push32(0x120b368cu); f_120b3850();
  /* 120b368c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b368f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b3691 jmp 0x120b3846 */
  goto L_120b3846;
L_120b3696:;
  /* 120b3696 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 120b369d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b36a1 ja 0x120b3819 */
  if ((!C.cf&&!C.zf)) goto L_120b3819;
  /* 120b36a7 push 9 */
  push32((uint32_t)(0x9u));
  /* 120b36a9 call 0x120acb80 */
  push32(0x120b36aeu); f_120acb80();
  /* 120b36ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b36b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b36b4 push edx */
  push32((uint32_t)(EDX));
  /* 120b36b5 call 0x120b39e0 */
  push32(0x120b36bau); f_120b39e0();
  /* 120b36ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b36bd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120b36c0 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b36c4 je 0x120b37dc */
  if (C.zf) goto L_120b37dc;
  /* 120b36ca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b36cd cmp eax, dword ptr [0x120df264] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x120df264))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b36d3 ja 0x120b3750 */
  if ((!C.cf&&!C.zf)) goto L_120b3750;
  /* 120b36d5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b36d8 push ecx */
  push32((uint32_t)(ECX));
  /* 120b36d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b36dc push edx */
  push32((uint32_t)(EDX));
  /* 120b36dd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b36e0 push eax */
  push32((uint32_t)(EAX));
  /* 120b36e1 call 0x120b48b0 */
  push32(0x120b36e6u); f_120b48b0();
  /* 120b36e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b36e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b36eb je 0x120b36f5 */
  if (C.zf) goto L_120b36f5;
  /* 120b36ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b36f0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120b36f3 jmp 0x120b3750 */
  goto L_120b3750;
L_120b36f5:;
  /* 120b36f5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b36f8 push edx */
  push32((uint32_t)(EDX));
  /* 120b36f9 call 0x120b4070 */
  push32(0x120b36feu); f_120b4070();
  /* 120b36fe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b3701 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120b3704 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b3708 je 0x120b3750 */
  if (C.zf) goto L_120b3750;
  /* 120b370a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b370d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 120b3710 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b3713 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120b3716 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b3719 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b371c jae 0x120b3726 */
  if (!C.cf) goto L_120b3726;
  /* 120b371e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b3721 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 120b3724 jmp 0x120b372c */
  goto L_120b372c;
L_120b3726:;
  /* 120b3726 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b3729 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_120b372c:;
  /* 120b372c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b372f push edx */
  push32((uint32_t)(EDX));
  /* 120b3730 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b3733 push eax */
  push32((uint32_t)(EAX));
  /* 120b3734 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b3737 push ecx */
  push32((uint32_t)(ECX));
  /* 120b3738 call 0x120b6d20 */
  push32(0x120b373du); f_120b6d20();
  /* 120b373d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b3740 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b3743 push edx */
  push32((uint32_t)(EDX));
  /* 120b3744 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b3747 push eax */
  push32((uint32_t)(EAX));
  /* 120b3748 call 0x120b3aa0 */
  push32(0x120b374du); f_120b3aa0();
  /* 120b374d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120b3750:;
  /* 120b3750 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b3754 jne 0x120b37d0 */
  if (!C.zf) goto L_120b37d0;
  /* 120b3756 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b375a jne 0x120b3763 */
  if (!C.zf) goto L_120b3763;
  /* 120b375c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_120b3763:;
  /* 120b3763 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b3766 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b3769 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 120b376c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 120b376f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b3772 push edx */
  push32((uint32_t)(EDX));
  /* 120b3773 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b3775 mov eax, dword ptr [0x120e2aac] */
  EAX = (r32((uint32_t)(0x120e2aac)));
  /* 120b377a push eax */
  push32((uint32_t)(EAX));
  /* 120b377b call dword ptr [0x120e33a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33a4))), 0x120b3781u);
  /* 120b3781 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120b3784 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b3788 je 0x120b37d0 */
  if (C.zf) goto L_120b37d0;
  /* 120b378a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b378d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 120b3790 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b3793 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120b3796 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b3799 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b379c jae 0x120b37a6 */
  if (!C.cf) goto L_120b37a6;
  /* 120b379e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b37a1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 120b37a4 jmp 0x120b37ac */
  goto L_120b37ac;
L_120b37a6:;
  /* 120b37a6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b37a9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_120b37ac:;
  /* 120b37ac mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b37af push eax */
  push32((uint32_t)(EAX));
  /* 120b37b0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b37b3 push ecx */
  push32((uint32_t)(ECX));
  /* 120b37b4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b37b7 push edx */
  push32((uint32_t)(EDX));
  /* 120b37b8 call 0x120b6d20 */
  push32(0x120b37bdu); f_120b6d20();
  /* 120b37bd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b37c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b37c3 push eax */
  push32((uint32_t)(EAX));
  /* 120b37c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b37c7 push ecx */
  push32((uint32_t)(ECX));
  /* 120b37c8 call 0x120b3aa0 */
  push32(0x120b37cdu); f_120b3aa0();
  /* 120b37cd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_120b37d0:;
  /* 120b37d0 push 9 */
  push32((uint32_t)(0x9u));
  /* 120b37d2 call 0x120acc20 */
  push32(0x120b37d7u); f_120acc20();
  /* 120b37d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b37da jmp 0x120b3819 */
  goto L_120b3819;
L_120b37dc:;
  /* 120b37dc push 9 */
  push32((uint32_t)(0x9u));
  /* 120b37de call 0x120acc20 */
  push32(0x120b37e3u); f_120acc20();
  /* 120b37e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b37e6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b37ea jne 0x120b37f3 */
  if (!C.zf) goto L_120b37f3;
  /* 120b37ec mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_120b37f3:;
  /* 120b37f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b37f6 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b37f9 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 120b37fc mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 120b37ff mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b3802 push eax */
  push32((uint32_t)(EAX));
  /* 120b3803 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b3806 push ecx */
  push32((uint32_t)(ECX));
  /* 120b3807 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b3809 mov edx, dword ptr [0x120e2aac] */
  EDX = (r32((uint32_t)(0x120e2aac)));
  /* 120b380f push edx */
  push32((uint32_t)(EDX));
  /* 120b3810 call dword ptr [0x120e33a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33a0))), 0x120b3816u);
  /* 120b3816 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_120b3819:;
  /* 120b3819 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b381d jne 0x120b3828 */
  if (!C.zf) goto L_120b3828;
  /* 120b381f cmp dword ptr [0x120e12f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e12f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b3826 jne 0x120b382d */
  if (!C.zf) goto L_120b382d;
L_120b3828:;
  /* 120b3828 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b382b jmp 0x120b3846 */
  goto L_120b3846;
L_120b382d:;
  /* 120b382d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b3830 push eax */
  push32((uint32_t)(EAX));
  /* 120b3831 call 0x120b3480 */
  push32(0x120b3836u); f_120b3480();
  /* 120b3836 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b3839 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b383b jne 0x120b3841 */
  if (!C.zf) goto L_120b3841;
  /* 120b383d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b383f jmp 0x120b3846 */
  goto L_120b3846;
L_120b3841:;
  /* 120b3841 jmp 0x120b3696 */
  goto L_120b3696;
L_120b3846:;
  /* 120b3846 mov esp, ebp */
  ESP = (EBP);
  /* 120b3848 pop ebp */
  EBP = (pop32());
  /* 120b3849 ret  */
  ESPCHK(0x120b3660u, _esp0);
  ESP += 4; return;
}

/* FUN_10013850 @ 0x120b3850 (104 bytes, 38 insns) */
void f_120b3850(void) {
  FTRACE(0x120b3850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b3850 push ebp */
  push32((uint32_t)(EBP));
  /* 120b3851 mov ebp, esp */
  EBP = (ESP);
  /* 120b3853 push ecx */
  push32((uint32_t)(ECX));
  /* 120b3854 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b3858 jne 0x120b385c */
  if (!C.zf) goto L_120b385c;
  /* 120b385a jmp 0x120b38b4 */
  goto L_120b38b4;
L_120b385c:;
  /* 120b385c push 9 */
  push32((uint32_t)(0x9u));
  /* 120b385e call 0x120acb80 */
  push32(0x120b3863u); f_120acb80();
  /* 120b3863 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b3866 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b3869 push eax */
  push32((uint32_t)(EAX));
  /* 120b386a call 0x120b39e0 */
  push32(0x120b386fu); f_120b39e0();
  /* 120b386f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b3872 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120b3875 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b3879 je 0x120b3897 */
  if (C.zf) goto L_120b3897;
  /* 120b387b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b387e push ecx */
  push32((uint32_t)(ECX));
  /* 120b387f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b3882 push edx */
  push32((uint32_t)(EDX));
  /* 120b3883 call 0x120b3aa0 */
  push32(0x120b3888u); f_120b3aa0();
  /* 120b3888 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b388b push 9 */
  push32((uint32_t)(0x9u));
  /* 120b388d call 0x120acc20 */
  push32(0x120b3892u); f_120acc20();
  /* 120b3892 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b3895 jmp 0x120b38b4 */
  goto L_120b38b4;
L_120b3897:;
  /* 120b3897 push 9 */
  push32((uint32_t)(0x9u));
  /* 120b3899 call 0x120acc20 */
  push32(0x120b389eu); f_120acc20();
  /* 120b389e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b38a1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b38a4 push eax */
  push32((uint32_t)(EAX));
  /* 120b38a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b38a7 mov ecx, dword ptr [0x120e2aac] */
  ECX = (r32((uint32_t)(0x120e2aac)));
  /* 120b38ad push ecx */
  push32((uint32_t)(ECX));
  /* 120b38ae call dword ptr [0x120e33b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33b0))), 0x120b38b4u);
L_120b38b4:;
  /* 120b38b4 mov esp, ebp */
  ESP = (EBP);
  /* 120b38b6 pop ebp */
  EBP = (pop32());
  /* 120b38b7 ret  */
  ESPCHK(0x120b3850u, _esp0);
  ESP += 4; return;
}

/* FUN_100138c0 @ 0x120b38c0 (116 bytes, 34 insns) */
void f_120b38c0(void) {
  FTRACE(0x120b38c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b38c0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b38c1 mov ebp, esp */
  EBP = (ESP);
  /* 120b38c3 push ecx */
  push32((uint32_t)(ECX));
  /* 120b38c4 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 120b38cb push 9 */
  push32((uint32_t)(0x9u));
  /* 120b38cd call 0x120acb80 */
  push32(0x120b38d2u); f_120acb80();
  /* 120b38d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b38d5 call 0x120b4fd0 */
  push32(0x120b38dau); f_120b4fd0();
  /* 120b38da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b38dc jge 0x120b38e5 */
  if ((C.sf==C.of)) goto L_120b38e5;
  /* 120b38de mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_120b38e5:;
  /* 120b38e5 push 9 */
  push32((uint32_t)(0x9u));
  /* 120b38e7 call 0x120acc20 */
  push32(0x120b38ecu); f_120acc20();
  /* 120b38ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b38ef push 0 */
  push32((uint32_t)(0x0u));
  /* 120b38f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b38f3 mov eax, dword ptr [0x120e2aac] */
  EAX = (r32((uint32_t)(0x120e2aac)));
  /* 120b38f8 push eax */
  push32((uint32_t)(EAX));
  /* 120b38f9 call dword ptr [0x120e3404] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3404))), 0x120b38ffu);
  /* 120b38ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b3901 jne 0x120b392d */
  if (!C.zf) goto L_120b392d;
  /* 120b3903 call dword ptr [0x120e33e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33e8))), 0x120b3909u);
  /* 120b3909 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b390c jne 0x120b3926 */
  if (!C.zf) goto L_120b3926;
  /* 120b390e call 0x120b8320 */
  push32(0x120b3913u); f_120b8320();
  /* 120b3913 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 120b3919 call 0x120b8310 */
  push32(0x120b391eu); f_120b8310();
  /* 120b391e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 120b3924 jmp 0x120b392d */
  goto L_120b392d;
L_120b3926:;
  /* 120b3926 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_120b392d:;
  /* 120b392d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b3930 mov esp, ebp */
  ESP = (EBP);
  /* 120b3932 pop ebp */
  EBP = (pop32());
  /* 120b3933 ret  */
  ESPCHK(0x120b38c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013940 @ 0x120b3940 (10 bytes, 5 insns) */
void f_120b3940(void) {
  FTRACE(0x120b3940u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b3940 push ebp */
  push32((uint32_t)(EBP));
  /* 120b3941 mov ebp, esp */
  EBP = (ESP);
  /* 120b3943 call 0x120b38c0 */
  push32(0x120b3948u); f_120b38c0();
  /* 120b3948 pop ebp */
  EBP = (pop32());
  /* 120b3949 ret  */
  ESPCHK(0x120b3940u, _esp0);
  ESP += 4; return;
}

/* FUN_10013950 @ 0x120b3950 (10 bytes, 5 insns) */
void f_120b3950(void) {
  FTRACE(0x120b3950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b3950 push ebp */
  push32((uint32_t)(EBP));
  /* 120b3951 mov ebp, esp */
  EBP = (ESP);
  /* 120b3953 mov eax, dword ptr [0x120df264] */
  EAX = (r32((uint32_t)(0x120df264)));
  /* 120b3958 pop ebp */
  EBP = (pop32());
  /* 120b3959 ret  */
  ESPCHK(0x120b3950u, _esp0);
  ESP += 4; return;
}

/* FUN_10013960 @ 0x120b3960 (31 bytes, 11 insns) */
void f_120b3960(void) {
  FTRACE(0x120b3960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b3960 push ebp */
  push32((uint32_t)(EBP));
  /* 120b3961 mov ebp, esp */
  EBP = (ESP);
  /* 120b3963 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b396a jbe 0x120b3970 */
  if ((C.cf||C.zf)) goto L_120b3970;
  /* 120b396c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b396e jmp 0x120b397d */
  goto L_120b397d;
L_120b3970:;
  /* 120b3970 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b3973 mov dword ptr [0x120df264], eax */
  w32((uint32_t)(0x120df264), (EAX));
  /* 120b3978 mov eax, 1 */
  EAX = (0x1u);
L_120b397d:;
  /* 120b397d pop ebp */
  EBP = (pop32());
  /* 120b397e ret  */
  ESPCHK(0x120b3960u, _esp0);
  ESP += 4; return;
}

/* FUN_10013980 @ 0x120b3980 (89 bytes, 20 insns) */
void f_120b3980(void) {
  FTRACE(0x120b3980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b3980 push ebp */
  push32((uint32_t)(EBP));
  /* 120b3981 mov ebp, esp */
  EBP = (ESP);
  /* 120b3983 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 120b3988 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b398a mov eax, dword ptr [0x120e2aac] */
  EAX = (r32((uint32_t)(0x120e2aac)));
  /* 120b398f push eax */
  push32((uint32_t)(EAX));
  /* 120b3990 call dword ptr [0x120e33a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33a4))), 0x120b3996u);
  /* 120b3996 mov dword ptr [0x120e2aa8], eax */
  w32((uint32_t)(0x120e2aa8), (EAX));
  /* 120b399b cmp dword ptr [0x120e2aa8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e2aa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b39a2 jne 0x120b39a8 */
  if (!C.zf) goto L_120b39a8;
  /* 120b39a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b39a6 jmp 0x120b39d7 */
  goto L_120b39d7;
L_120b39a8:;
  /* 120b39a8 mov ecx, dword ptr [0x120e2aa8] */
  ECX = (r32((uint32_t)(0x120e2aa8)));
  /* 120b39ae mov dword ptr [0x120e2a9c], ecx */
  w32((uint32_t)(0x120e2a9c), (ECX));
  /* 120b39b4 mov dword ptr [0x120e2aa0], 0 */
  w32((uint32_t)(0x120e2aa0), (0x0u));
  /* 120b39be mov dword ptr [0x120e2aa4], 0 */
  w32((uint32_t)(0x120e2aa4), (0x0u));
  /* 120b39c8 mov dword ptr [0x120e2a88], 0x10 */
  w32((uint32_t)(0x120e2a88), (0x10u));
  /* 120b39d2 mov eax, 1 */
  EAX = (0x1u);
L_120b39d7:;
  /* 120b39d7 pop ebp */
  EBP = (pop32());
  /* 120b39d8 ret  */
  ESPCHK(0x120b3980u, _esp0);
  ESP += 4; return;
}

/* FUN_100139e0 @ 0x120b39e0 (85 bytes, 29 insns) */
void f_120b39e0(void) {
  FTRACE(0x120b39e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b39e0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b39e1 mov ebp, esp */
  EBP = (ESP);
  /* 120b39e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b39e6 mov eax, dword ptr [0x120e2aa4] */
  EAX = (r32((uint32_t)(0x120e2aa4)));
  /* 120b39eb imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b39ee mov ecx, dword ptr [0x120e2aa8] */
  ECX = (r32((uint32_t)(0x120e2aa8)));
  /* 120b39f4 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b39f6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120b39f9 mov edx, dword ptr [0x120e2aa8] */
  EDX = (r32((uint32_t)(0x120e2aa8)));
  /* 120b39ff mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_120b3a02:;
  /* 120b3a02 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b3a05 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b3a08 jae 0x120b3a2f */
  if (!C.cf) goto L_120b3a2f;
  /* 120b3a0a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b3a0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b3a10 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b3a13 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120b3a16 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b3a1d jae 0x120b3a24 */
  if (!C.cf) goto L_120b3a24;
  /* 120b3a1f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b3a22 jmp 0x120b3a31 */
  goto L_120b3a31;
L_120b3a24:;
  /* 120b3a24 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b3a27 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b3a2a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120b3a2d jmp 0x120b3a02 */
  goto L_120b3a02;
L_120b3a2f:;
  /* 120b3a2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120b3a31:;
  /* 120b3a31 mov esp, ebp */
  ESP = (EBP);
  /* 120b3a33 pop ebp */
  EBP = (pop32());
  /* 120b3a34 ret  */
  ESPCHK(0x120b39e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013a40 @ 0x120b3a40 (95 bytes, 33 insns) */
void f_120b3a40(void) {
  FTRACE(0x120b3a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b3a40 push ebp */
  push32((uint32_t)(EBP));
  /* 120b3a41 mov ebp, esp */
  EBP = (ESP);
  /* 120b3a43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b3a46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b3a49 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b3a4c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b3a4f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120b3a52 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b3a55 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 120b3a58 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120b3a5b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 120b3a60 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b3a63 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 120b3a65 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b3a68 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 120b3a6b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 120b3a6d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b3a6f jne 0x120b3a91 */
  if (!C.zf) goto L_120b3a91;
  /* 120b3a71 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b3a74 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 120b3a77 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b3a79 jne 0x120b3a91 */
  if (!C.zf) goto L_120b3a91;
  /* 120b3a7b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b3a7e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 120b3a84 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b3a86 je 0x120b3a91 */
  if (C.zf) goto L_120b3a91;
  /* 120b3a88 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 120b3a8f jmp 0x120b3a98 */
  goto L_120b3a98;
L_120b3a91:;
  /* 120b3a91 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_120b3a98:;
  /* 120b3a98 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b3a9b mov esp, ebp */
  ESP = (EBP);
  /* 120b3a9d pop ebp */
  EBP = (pop32());
  /* 120b3a9e ret  */
  ESPCHK(0x120b3a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10013aa0 @ 0x120b3aa0 (1485 bytes, 453 insns) */
void f_120b3aa0(void) {
  FTRACE(0x120b3aa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b3aa0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b3aa1 mov ebp, esp */
  EBP = (ESP);
  /* 120b3aa3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b3aa6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b3aa9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 120b3aac mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 120b3aaf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b3ab2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b3ab5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b3ab8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 120b3abb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b3abe shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 120b3ac1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120b3ac4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b3ac7 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b3acd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 120b3ad0 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 120b3ad7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120b3ada mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b3add sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b3ae0 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 120b3ae3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120b3ae6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120b3ae8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b3aeb mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 120b3aee mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120b3af1 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b3af4 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 120b3af7 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 120b3afa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120b3afc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 120b3aff mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120b3b02 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 120b3b05 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 120b3b08 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b3b0b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 120b3b0e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b3b10 jne 0x120b3c38 */
  if (!C.zf) goto L_120b3c38;
  /* 120b3b16 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b3b19 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 120b3b1c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b3b1f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 120b3b22 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b3b26 jbe 0x120b3b2f */
  if ((C.cf||C.zf)) goto L_120b3b2f;
  /* 120b3b28 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_120b3b2f:;
  /* 120b3b2f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 120b3b32 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 120b3b35 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 120b3b38 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b3b3b jne 0x120b3c11 */
  if (!C.zf) goto L_120b3c11;
  /* 120b3b41 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b3b45 jae 0x120b3ba6 */
  if (!C.cf) goto L_120b3ba6;
  /* 120b3b47 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 120b3b4c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b3b4f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 120b3b51 not eax */
  EAX = (~(EAX));
  /* 120b3b53 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b3b56 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 120b3b59 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 120b3b5d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120b3b5f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b3b62 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 120b3b65 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 120b3b69 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 120b3b6c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b3b6f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 120b3b72 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 120b3b75 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 120b3b78 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b3b7b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 120b3b7e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 120b3b81 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b3b84 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 120b3b88 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b3b8a jne 0x120b3ba4 */
  if (!C.zf) goto L_120b3ba4;
  /* 120b3b8c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 120b3b91 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b3b94 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 120b3b96 not eax */
  EAX = (~(EAX));
  /* 120b3b98 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b3b9b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120b3b9d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 120b3b9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b3ba2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_120b3ba4:;
  /* 120b3ba4 jmp 0x120b3c11 */
  goto L_120b3c11;
L_120b3ba6:;
  /* 120b3ba6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b3ba9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b3bac mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 120b3bb1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 120b3bb3 not edx */
  EDX = (~(EDX));
  /* 120b3bb5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b3bb8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 120b3bbb mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 120b3bc2 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 120b3bc4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b3bc7 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 120b3bca mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 120b3bd1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 120b3bd4 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b3bd7 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 120b3bda sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 120b3bdd mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 120b3be0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b3be3 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 120b3be6 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 120b3be9 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b3bec movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 120b3bf0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b3bf2 jne 0x120b3c11 */
  if (!C.zf) goto L_120b3c11;
  /* 120b3bf4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b3bf7 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b3bfa mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 120b3bff shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 120b3c01 not edx */
  EDX = (~(EDX));
  /* 120b3c03 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b3c06 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 120b3c09 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 120b3c0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b3c0e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_120b3c11:;
  /* 120b3c11 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 120b3c14 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 120b3c17 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 120b3c1a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 120b3c1d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 120b3c20 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 120b3c23 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 120b3c26 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 120b3c29 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 120b3c2c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 120b3c2f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b3c32 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b3c35 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_120b3c38:;
  /* 120b3c38 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b3c3b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 120b3c3e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b3c41 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 120b3c44 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b3c48 jbe 0x120b3c51 */
  if ((C.cf||C.zf)) goto L_120b3c51;
  /* 120b3c4a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_120b3c51:;
  /* 120b3c51 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b3c54 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 120b3c57 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b3c59 jne 0x120b3db5 */
  if (!C.zf) goto L_120b3db5;
  /* 120b3c5f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120b3c62 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b3c65 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 120b3c68 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b3c6b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 120b3c6e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b3c71 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 120b3c74 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b3c78 jbe 0x120b3c81 */
  if ((C.cf||C.zf)) goto L_120b3c81;
  /* 120b3c7a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_120b3c81:;
  /* 120b3c81 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b3c84 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b3c87 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 120b3c8a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b3c8d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 120b3c90 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b3c93 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 120b3c96 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b3c9a jbe 0x120b3ca3 */
  if ((C.cf||C.zf)) goto L_120b3ca3;
  /* 120b3c9c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_120b3ca3:;
  /* 120b3ca3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120b3ca6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b3ca9 je 0x120b3daf */
  if (C.zf) goto L_120b3daf;
  /* 120b3caf mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 120b3cb2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 120b3cb5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 120b3cb8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b3cbb jne 0x120b3d91 */
  if (!C.zf) goto L_120b3d91;
  /* 120b3cc1 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b3cc5 jae 0x120b3d26 */
  if (!C.cf) goto L_120b3d26;
  /* 120b3cc7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 120b3ccc mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120b3ccf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 120b3cd1 not edx */
  EDX = (~(EDX));
  /* 120b3cd3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b3cd6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 120b3cd9 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 120b3cdd and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 120b3cdf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b3ce2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 120b3ce5 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 120b3ce9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 120b3cec add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b3cef mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 120b3cf2 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 120b3cf5 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 120b3cf8 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b3cfb mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 120b3cfe mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 120b3d01 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b3d04 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 120b3d08 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b3d0a jne 0x120b3d24 */
  if (!C.zf) goto L_120b3d24;
  /* 120b3d0c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 120b3d11 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120b3d14 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 120b3d16 not edx */
  EDX = (~(EDX));
  /* 120b3d18 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b3d1b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120b3d1d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 120b3d1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b3d22 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_120b3d24:;
  /* 120b3d24 jmp 0x120b3d91 */
  goto L_120b3d91;
L_120b3d26:;
  /* 120b3d26 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120b3d29 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b3d2c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 120b3d31 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 120b3d33 not eax */
  EAX = (~(EAX));
  /* 120b3d35 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b3d38 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 120b3d3b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 120b3d42 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120b3d44 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b3d47 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 120b3d4a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 120b3d51 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 120b3d54 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b3d57 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 120b3d5a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 120b3d5d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 120b3d60 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b3d63 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 120b3d66 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 120b3d69 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b3d6c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 120b3d70 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b3d72 jne 0x120b3d91 */
  if (!C.zf) goto L_120b3d91;
  /* 120b3d74 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120b3d77 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b3d7a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 120b3d7f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 120b3d81 not eax */
  EAX = (~(EAX));
  /* 120b3d83 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b3d86 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 120b3d89 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 120b3d8b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b3d8e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_120b3d91:;
  /* 120b3d91 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 120b3d94 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 120b3d97 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 120b3d9a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 120b3d9d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 120b3da0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 120b3da3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 120b3da6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 120b3da9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 120b3dac mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_120b3daf:;
  /* 120b3daf mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 120b3db2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_120b3db5:;
  /* 120b3db5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b3db8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 120b3dbb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b3dbd jne 0x120b3dcb */
  if (!C.zf) goto L_120b3dcb;
  /* 120b3dbf mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120b3dc2 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b3dc5 je 0x120b3edb */
  if (C.zf) goto L_120b3edb;
L_120b3dcb:;
  /* 120b3dcb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 120b3dce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b3dd1 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 120b3dd4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 120b3dd7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120b3dda mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b3ddd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 120b3de0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 120b3de3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120b3de6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b3de9 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 120b3dec mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b3def mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120b3df2 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 120b3df5 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120b3df8 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 120b3dfb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120b3dfe mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 120b3e01 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120b3e04 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120b3e07 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 120b3e0a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b3e0d jne 0x120b3edb */
  if (!C.zf) goto L_120b3edb;
  /* 120b3e13 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b3e17 jae 0x120b3e74 */
  if (!C.cf) goto L_120b3e74;
  /* 120b3e19 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 120b3e1c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b3e1f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 120b3e23 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 120b3e26 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b3e29 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 120b3e2c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 120b3e2f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 120b3e32 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b3e35 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 120b3e38 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b3e3a jne 0x120b3e52 */
  if (!C.zf) goto L_120b3e52;
  /* 120b3e3c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 120b3e41 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 120b3e44 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 120b3e46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b3e49 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120b3e4b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 120b3e4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b3e50 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_120b3e52:;
  /* 120b3e52 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 120b3e57 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 120b3e5a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 120b3e5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b3e5f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 120b3e62 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 120b3e66 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120b3e68 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b3e6b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 120b3e6e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 120b3e72 jmp 0x120b3edb */
  goto L_120b3edb;
L_120b3e74:;
  /* 120b3e74 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 120b3e77 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b3e7a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 120b3e7e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 120b3e81 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b3e84 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 120b3e87 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 120b3e8a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 120b3e8d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b3e90 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 120b3e93 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b3e95 jne 0x120b3eb2 */
  if (!C.zf) goto L_120b3eb2;
  /* 120b3e97 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 120b3e9a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b3e9d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 120b3ea2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 120b3ea4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b3ea7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 120b3eaa or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 120b3eac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b3eaf mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_120b3eb2:;
  /* 120b3eb2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 120b3eb5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b3eb8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 120b3ebd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 120b3ebf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b3ec2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 120b3ec5 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 120b3ecc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120b3ece mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b3ed1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 120b3ed4 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_120b3edb:;
  /* 120b3edb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120b3ede mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b3ee1 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 120b3ee3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120b3ee6 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b3ee9 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b3eec mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 120b3eef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b3ef2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120b3ef4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b3ef7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b3efa mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 120b3efc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b3eff cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b3f02 jne 0x120b4069 */
  if (!C.zf) goto L_120b4069;
  /* 120b3f08 cmp dword ptr [0x120e2aa0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e2aa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b3f0f je 0x120b4058 */
  if (C.zf) goto L_120b4058;
  /* 120b3f15 mov eax, dword ptr [0x120e2a98] */
  EAX = (r32((uint32_t)(0x120e2a98)));
  /* 120b3f1a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 120b3f1d mov ecx, dword ptr [0x120e2aa0] */
  ECX = (r32((uint32_t)(0x120e2aa0)));
  /* 120b3f23 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 120b3f26 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b3f28 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 120b3f2b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 120b3f30 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 120b3f35 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b3f38 push eax */
  push32((uint32_t)(EAX));
  /* 120b3f39 call dword ptr [0x120e33ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33ac))), 0x120b3f3fu);
  /* 120b3f3f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 120b3f44 mov ecx, dword ptr [0x120e2a98] */
  ECX = (r32((uint32_t)(0x120e2a98)));
  /* 120b3f4a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 120b3f4c mov eax, dword ptr [0x120e2aa0] */
  EAX = (r32((uint32_t)(0x120e2aa0)));
  /* 120b3f51 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 120b3f54 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 120b3f56 mov edx, dword ptr [0x120e2aa0] */
  EDX = (r32((uint32_t)(0x120e2aa0)));
  /* 120b3f5c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 120b3f5f mov eax, dword ptr [0x120e2aa0] */
  EAX = (r32((uint32_t)(0x120e2aa0)));
  /* 120b3f64 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 120b3f67 mov edx, dword ptr [0x120e2a98] */
  EDX = (r32((uint32_t)(0x120e2a98)));
  /* 120b3f6d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 120b3f78 mov eax, dword ptr [0x120e2aa0] */
  EAX = (r32((uint32_t)(0x120e2aa0)));
  /* 120b3f7d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 120b3f80 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 120b3f83 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 120b3f86 mov eax, dword ptr [0x120e2aa0] */
  EAX = (r32((uint32_t)(0x120e2aa0)));
  /* 120b3f8b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 120b3f8e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 120b3f91 mov edx, dword ptr [0x120e2aa0] */
  EDX = (r32((uint32_t)(0x120e2aa0)));
  /* 120b3f97 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 120b3f9a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 120b3f9e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b3fa0 jne 0x120b3fb6 */
  if (!C.zf) goto L_120b3fb6;
  /* 120b3fa2 mov edx, dword ptr [0x120e2aa0] */
  EDX = (r32((uint32_t)(0x120e2aa0)));
  /* 120b3fa8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 120b3fab and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 120b3fad mov ecx, dword ptr [0x120e2aa0] */
  ECX = (r32((uint32_t)(0x120e2aa0)));
  /* 120b3fb3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_120b3fb6:;
  /* 120b3fb6 mov edx, dword ptr [0x120e2aa0] */
  EDX = (r32((uint32_t)(0x120e2aa0)));
  /* 120b3fbc cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b3fc0 jne 0x120b4058 */
  if (!C.zf) goto L_120b4058;
  /* 120b3fc6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 120b3fcb push 0 */
  push32((uint32_t)(0x0u));
  /* 120b3fcd mov eax, dword ptr [0x120e2aa0] */
  EAX = (r32((uint32_t)(0x120e2aa0)));
  /* 120b3fd2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 120b3fd5 push ecx */
  push32((uint32_t)(ECX));
  /* 120b3fd6 call dword ptr [0x120e33ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33ac))), 0x120b3fdcu);
  /* 120b3fdc mov edx, dword ptr [0x120e2aa0] */
  EDX = (r32((uint32_t)(0x120e2aa0)));
  /* 120b3fe2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 120b3fe5 push eax */
  push32((uint32_t)(EAX));
  /* 120b3fe6 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b3fe8 mov ecx, dword ptr [0x120e2aac] */
  ECX = (r32((uint32_t)(0x120e2aac)));
  /* 120b3fee push ecx */
  push32((uint32_t)(ECX));
  /* 120b3fef call dword ptr [0x120e33b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33b0))), 0x120b3ff5u);
  /* 120b3ff5 mov edx, dword ptr [0x120e2aa4] */
  EDX = (r32((uint32_t)(0x120e2aa4)));
  /* 120b3ffb imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b3ffe mov eax, dword ptr [0x120e2aa8] */
  EAX = (r32((uint32_t)(0x120e2aa8)));
  /* 120b4003 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4005 mov ecx, dword ptr [0x120e2aa0] */
  ECX = (r32((uint32_t)(0x120e2aa0)));
  /* 120b400b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b400e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b4010 push eax */
  push32((uint32_t)(EAX));
  /* 120b4011 mov edx, dword ptr [0x120e2aa0] */
  EDX = (r32((uint32_t)(0x120e2aa0)));
  /* 120b4017 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b401a push edx */
  push32((uint32_t)(EDX));
  /* 120b401b mov eax, dword ptr [0x120e2aa0] */
  EAX = (r32((uint32_t)(0x120e2aa0)));
  /* 120b4020 push eax */
  push32((uint32_t)(EAX));
  /* 120b4021 call 0x120b30f0 */
  push32(0x120b4026u); f_120b30f0();
  /* 120b4026 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4029 mov ecx, dword ptr [0x120e2aa4] */
  ECX = (r32((uint32_t)(0x120e2aa4)));
  /* 120b402f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b4032 mov dword ptr [0x120e2aa4], ecx */
  w32((uint32_t)(0x120e2aa4), (ECX));
  /* 120b4038 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b403b cmp edx, dword ptr [0x120e2aa0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x120e2aa0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b4041 jbe 0x120b404c */
  if ((C.cf||C.zf)) goto L_120b404c;
  /* 120b4043 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b4046 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b4049 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_120b404c:;
  /* 120b404c mov ecx, dword ptr [0x120e2aa8] */
  ECX = (r32((uint32_t)(0x120e2aa8)));
  /* 120b4052 mov dword ptr [0x120e2a9c], ecx */
  w32((uint32_t)(0x120e2a9c), (ECX));
L_120b4058:;
  /* 120b4058 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b405b mov dword ptr [0x120e2aa0], edx */
  w32((uint32_t)(0x120e2aa0), (EDX));
  /* 120b4061 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b4064 mov dword ptr [0x120e2a98], eax */
  w32((uint32_t)(0x120e2a98), (EAX));
L_120b4069:;
  /* 120b4069 mov esp, ebp */
  ESP = (EBP);
  /* 120b406b pop ebp */
  EBP = (pop32());
  /* 120b406c ret  */
  ESPCHK(0x120b3aa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014070 @ 0x120b4070 (1334 bytes, 427 insns) */
void f_120b4070(void) {
  FTRACE(0x120b4070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b4070 push ebp */
  push32((uint32_t)(EBP));
  /* 120b4071 mov ebp, esp */
  EBP = (ESP);
  /* 120b4073 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b4076 push esi */
  push32((uint32_t)(ESI));
  /* 120b4077 mov eax, dword ptr [0x120e2aa4] */
  EAX = (r32((uint32_t)(0x120e2aa4)));
  /* 120b407c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b407f mov ecx, dword ptr [0x120e2aa8] */
  ECX = (r32((uint32_t)(0x120e2aa8)));
  /* 120b4085 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4087 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 120b408a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b408d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4090 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 120b4093 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 120b4096 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 120b4099 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 120b409c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b409f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 120b40a2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b40a6 jge 0x120b40bc */
  if ((C.sf==C.of)) goto L_120b40bc;
  /* 120b40a8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 120b40ab mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b40ae shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 120b40b0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 120b40b3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 120b40ba jmp 0x120b40d1 */
  goto L_120b40d1;
L_120b40bc:;
  /* 120b40bc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 120b40c3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b40c6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b40c9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120b40cc shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 120b40ce mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_120b40d1:;
  /* 120b40d1 mov ecx, dword ptr [0x120e2a9c] */
  ECX = (r32((uint32_t)(0x120e2a9c)));
  /* 120b40d7 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_120b40da:;
  /* 120b40da mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b40dd cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b40e0 jae 0x120b4106 */
  if (!C.cf) goto L_120b4106;
  /* 120b40e2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b40e5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b40e8 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 120b40ea mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b40ed mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 120b40f0 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 120b40f3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120b40f5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b40f7 je 0x120b40fb */
  if (C.zf) goto L_120b40fb;
  /* 120b40f9 jmp 0x120b4106 */
  goto L_120b4106;
L_120b40fb:;
  /* 120b40fb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b40fe add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4101 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 120b4104 jmp 0x120b40da */
  goto L_120b40da;
L_120b4106:;
  /* 120b4106 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b4109 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b410c jne 0x120b41ed */
  if (!C.zf) goto L_120b41ed;
  /* 120b4112 mov eax, dword ptr [0x120e2aa8] */
  EAX = (r32((uint32_t)(0x120e2aa8)));
  /* 120b4117 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_120b411a:;
  /* 120b411a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b411d cmp ecx, dword ptr [0x120e2a9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x120e2a9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b4123 jae 0x120b4149 */
  if (!C.cf) goto L_120b4149;
  /* 120b4125 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b4128 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b412b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 120b412d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b4130 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 120b4133 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 120b4136 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 120b4138 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b413a je 0x120b413e */
  if (C.zf) goto L_120b413e;
  /* 120b413c jmp 0x120b4149 */
  goto L_120b4149;
L_120b413e:;
  /* 120b413e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b4141 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4144 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 120b4147 jmp 0x120b411a */
  goto L_120b411a;
L_120b4149:;
  /* 120b4149 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b414c cmp ecx, dword ptr [0x120e2a9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x120e2a9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b4152 jne 0x120b41ed */
  if (!C.zf) goto L_120b41ed;
L_120b4158:;
  /* 120b4158 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b415b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b415e jae 0x120b4176 */
  if (!C.cf) goto L_120b4176;
  /* 120b4160 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b4163 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b4167 je 0x120b416b */
  if (C.zf) goto L_120b416b;
  /* 120b4169 jmp 0x120b4176 */
  goto L_120b4176;
L_120b416b:;
  /* 120b416b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b416e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4171 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 120b4174 jmp 0x120b4158 */
  goto L_120b4158;
L_120b4176:;
  /* 120b4176 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b4179 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b417c jne 0x120b41c7 */
  if (!C.zf) goto L_120b41c7;
  /* 120b417e mov eax, dword ptr [0x120e2aa8] */
  EAX = (r32((uint32_t)(0x120e2aa8)));
  /* 120b4183 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_120b4186:;
  /* 120b4186 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b4189 cmp ecx, dword ptr [0x120e2a9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x120e2a9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b418f jae 0x120b41a7 */
  if (!C.cf) goto L_120b41a7;
  /* 120b4191 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b4194 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b4198 je 0x120b419c */
  if (C.zf) goto L_120b419c;
  /* 120b419a jmp 0x120b41a7 */
  goto L_120b41a7;
L_120b419c:;
  /* 120b419c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b419f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b41a2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 120b41a5 jmp 0x120b4186 */
  goto L_120b4186;
L_120b41a7:;
  /* 120b41a7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b41aa cmp ecx, dword ptr [0x120e2a9c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x120e2a9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b41b0 jne 0x120b41c7 */
  if (!C.zf) goto L_120b41c7;
  /* 120b41b2 call 0x120b45b0 */
  push32(0x120b41b7u); f_120b45b0();
  /* 120b41b7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 120b41ba cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b41be jne 0x120b41c7 */
  if (!C.zf) goto L_120b41c7;
  /* 120b41c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b41c2 jmp 0x120b45a1 */
  goto L_120b45a1;
L_120b41c7:;
  /* 120b41c7 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b41ca push edx */
  push32((uint32_t)(EDX));
  /* 120b41cb call 0x120b46c0 */
  push32(0x120b41d0u); f_120b46c0();
  /* 120b41d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b41d3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b41d6 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 120b41d9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 120b41db mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b41de mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 120b41e1 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b41e4 jne 0x120b41ed */
  if (!C.zf) goto L_120b41ed;
  /* 120b41e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b41e8 jmp 0x120b45a1 */
  goto L_120b45a1;
L_120b41ed:;
  /* 120b41ed mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b41f0 mov dword ptr [0x120e2a9c], edx */
  w32((uint32_t)(0x120e2a9c), (EDX));
  /* 120b41f6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b41f9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 120b41fc mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 120b41ff mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 120b4202 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120b4204 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 120b4207 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b420b je 0x120b4230 */
  if (C.zf) goto L_120b4230;
  /* 120b420d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b4210 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 120b4213 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b4216 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 120b421a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b421d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 120b4220 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 120b4223 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 120b422a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 120b422c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b422e jne 0x120b4265 */
  if (!C.zf) goto L_120b4265;
L_120b4230:;
  /* 120b4230 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_120b4237:;
  /* 120b4237 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b423a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 120b423d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b4240 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 120b4244 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b4247 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 120b424a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 120b424d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 120b4254 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 120b4256 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b4258 jne 0x120b4265 */
  if (!C.zf) goto L_120b4265;
  /* 120b425a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b425d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4260 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 120b4263 jmp 0x120b4237 */
  goto L_120b4237;
L_120b4265:;
  /* 120b4265 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b4268 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b426e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 120b4271 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 120b4278 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120b427b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 120b4282 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b4285 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 120b4288 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b428b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 120b428f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 120b4292 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b4296 jne 0x120b42b2 */
  if (!C.zf) goto L_120b42b2;
  /* 120b4298 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 120b429f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b42a2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 120b42a5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 120b42a8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 120b42af mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_120b42b2:;
  /* 120b42b2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b42b6 jl 0x120b42cb */
  if ((C.sf!=C.of)) goto L_120b42cb;
  /* 120b42b8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120b42bb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 120b42bd mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 120b42c0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b42c3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b42c6 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 120b42c9 jmp 0x120b42b2 */
  goto L_120b42b2;
L_120b42cb:;
  /* 120b42cb mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b42ce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b42d1 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 120b42d5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 120b42d8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b42db mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120b42dd sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b42e0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120b42e3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b42e6 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 120b42e9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b42ec mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 120b42ef cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b42f3 jle 0x120b42fc */
  if ((C.zf||C.sf!=C.of)) goto L_120b42fc;
  /* 120b42f5 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_120b42fc:;
  /* 120b42fc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b42ff cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b4302 je 0x120b4520 */
  if (C.zf) goto L_120b4520;
  /* 120b4308 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b430b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b430e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 120b4311 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b4314 jne 0x120b43ea */
  if (!C.zf) goto L_120b43ea;
  /* 120b431a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b431e jge 0x120b437f */
  if ((C.sf==C.of)) goto L_120b437f;
  /* 120b4320 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 120b4325 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b4328 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 120b432a not eax */
  EAX = (~(EAX));
  /* 120b432c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b432f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 120b4332 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 120b4336 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120b4338 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b433b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 120b433e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 120b4342 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 120b4345 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4348 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 120b434b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 120b434e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 120b4351 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4354 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 120b4357 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 120b435a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b435d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 120b4361 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b4363 jne 0x120b437d */
  if (!C.zf) goto L_120b437d;
  /* 120b4365 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 120b436a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b436d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 120b436f not eax */
  EAX = (~(EAX));
  /* 120b4371 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b4374 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120b4376 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 120b4378 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b437b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_120b437d:;
  /* 120b437d jmp 0x120b43ea */
  goto L_120b43ea;
L_120b437f:;
  /* 120b437f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b4382 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b4385 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 120b438a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 120b438c not edx */
  EDX = (~(EDX));
  /* 120b438e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b4391 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 120b4394 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 120b439b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 120b439d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b43a0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 120b43a3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 120b43aa mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 120b43ad add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b43b0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 120b43b3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 120b43b6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 120b43b9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b43bc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 120b43bf mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 120b43c2 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b43c5 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 120b43c9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b43cb jne 0x120b43ea */
  if (!C.zf) goto L_120b43ea;
  /* 120b43cd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b43d0 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b43d3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 120b43d8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 120b43da not edx */
  EDX = (~(EDX));
  /* 120b43dc mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b43df mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 120b43e2 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 120b43e4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b43e7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_120b43ea:;
  /* 120b43ea mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b43ed mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 120b43f0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b43f3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 120b43f6 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 120b43f9 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b43fc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 120b43ff mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b4402 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 120b4405 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 120b4408 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b440c je 0x120b4520 */
  if (C.zf) goto L_120b4520;
  /* 120b4412 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b4415 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b4418 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 120b441b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120b441e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b4421 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b4424 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 120b4427 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 120b442a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b442d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b4430 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 120b4433 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b4436 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b4439 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 120b443c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b443f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 120b4442 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b4445 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 120b4448 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b444b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b444e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 120b4451 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b4454 jne 0x120b4520 */
  if (!C.zf) goto L_120b4520;
  /* 120b445a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b445e jge 0x120b44ba */
  if ((C.sf==C.of)) goto L_120b44ba;
  /* 120b4460 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 120b4463 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4466 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 120b446a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 120b446d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4470 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 120b4473 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 120b4475 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 120b4478 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b447b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 120b447e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b4480 jne 0x120b4498 */
  if (!C.zf) goto L_120b4498;
  /* 120b4482 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 120b4487 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b448a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 120b448c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b448f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120b4491 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 120b4493 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b4496 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_120b4498:;
  /* 120b4498 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 120b449d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b44a0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 120b44a2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b44a5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 120b44a8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 120b44ac or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 120b44ae mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b44b1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 120b44b4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 120b44b8 jmp 0x120b4520 */
  goto L_120b4520;
L_120b44ba:;
  /* 120b44ba mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 120b44bd add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b44c0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 120b44c4 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 120b44c7 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b44ca mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 120b44cd add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 120b44cf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 120b44d2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b44d5 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 120b44d8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b44da jne 0x120b44f7 */
  if (!C.zf) goto L_120b44f7;
  /* 120b44dc mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b44df sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b44e2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 120b44e7 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 120b44e9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b44ec mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 120b44ef or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 120b44f1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b44f4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_120b44f7:;
  /* 120b44f7 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b44fa sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b44fd mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 120b4502 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 120b4504 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b4507 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 120b450a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 120b4511 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 120b4513 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b4516 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 120b4519 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_120b4520:;
  /* 120b4520 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b4524 je 0x120b453a */
  if (C.zf) goto L_120b453a;
  /* 120b4526 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b4529 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b452c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 120b452e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b4531 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4534 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b4537 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_120b453a:;
  /* 120b453a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b453d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4540 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 120b4543 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 120b4546 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4549 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b454c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 120b454e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 120b4551 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4554 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b4557 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b455a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 120b455d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b4560 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120b4562 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b4565 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120b4567 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b456a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b456d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 120b456f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b4571 jne 0x120b4593 */
  if (!C.zf) goto L_120b4593;
  /* 120b4573 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b4576 cmp eax, dword ptr [0x120e2aa0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x120e2aa0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b457c jne 0x120b4593 */
  if (!C.zf) goto L_120b4593;
  /* 120b457e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b4581 cmp ecx, dword ptr [0x120e2a98] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x120e2a98))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b4587 jne 0x120b4593 */
  if (!C.zf) goto L_120b4593;
  /* 120b4589 mov dword ptr [0x120e2aa0], 0 */
  w32((uint32_t)(0x120e2aa0), (0x0u));
L_120b4593:;
  /* 120b4593 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 120b4596 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b4599 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 120b459b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b459e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_120b45a1:;
  /* 120b45a1 pop esi */
  ESI = (pop32());
  /* 120b45a2 mov esp, ebp */
  ESP = (EBP);
  /* 120b45a4 pop ebp */
  EBP = (pop32());
  /* 120b45a5 ret  */
  ESPCHK(0x120b4070u, _esp0);
  ESP += 4; return;
}

/* FUN_100145b0 @ 0x120b45b0 (271 bytes, 78 insns) */
void f_120b45b0(void) {
  FTRACE(0x120b45b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b45b0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b45b1 mov ebp, esp */
  EBP = (ESP);
  /* 120b45b3 push ecx */
  push32((uint32_t)(ECX));
  /* 120b45b4 mov eax, dword ptr [0x120e2aa4] */
  EAX = (r32((uint32_t)(0x120e2aa4)));
  /* 120b45b9 cmp eax, dword ptr [0x120e2a88] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x120e2a88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b45bf jne 0x120b460b */
  if (!C.zf) goto L_120b460b;
  /* 120b45c1 mov ecx, dword ptr [0x120e2a88] */
  ECX = (r32((uint32_t)(0x120e2a88)));
  /* 120b45c7 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b45ca imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b45cd push ecx */
  push32((uint32_t)(ECX));
  /* 120b45ce mov edx, dword ptr [0x120e2aa8] */
  EDX = (r32((uint32_t)(0x120e2aa8)));
  /* 120b45d4 push edx */
  push32((uint32_t)(EDX));
  /* 120b45d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b45d7 mov eax, dword ptr [0x120e2aac] */
  EAX = (r32((uint32_t)(0x120e2aac)));
  /* 120b45dc push eax */
  push32((uint32_t)(EAX));
  /* 120b45dd call dword ptr [0x120e33a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33a0))), 0x120b45e3u);
  /* 120b45e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120b45e6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b45ea jne 0x120b45f3 */
  if (!C.zf) goto L_120b45f3;
  /* 120b45ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b45ee jmp 0x120b46bb */
  goto L_120b46bb;
L_120b45f3:;
  /* 120b45f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b45f6 mov dword ptr [0x120e2aa8], ecx */
  w32((uint32_t)(0x120e2aa8), (ECX));
  /* 120b45fc mov edx, dword ptr [0x120e2a88] */
  EDX = (r32((uint32_t)(0x120e2a88)));
  /* 120b4602 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4605 mov dword ptr [0x120e2a88], edx */
  w32((uint32_t)(0x120e2a88), (EDX));
L_120b460b:;
  /* 120b460b mov eax, dword ptr [0x120e2aa4] */
  EAX = (r32((uint32_t)(0x120e2aa4)));
  /* 120b4610 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b4613 mov ecx, dword ptr [0x120e2aa8] */
  ECX = (r32((uint32_t)(0x120e2aa8)));
  /* 120b4619 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b461b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120b461e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 120b4623 push 8 */
  push32((uint32_t)(0x8u));
  /* 120b4625 mov edx, dword ptr [0x120e2aac] */
  EDX = (r32((uint32_t)(0x120e2aac)));
  /* 120b462b push edx */
  push32((uint32_t)(EDX));
  /* 120b462c call dword ptr [0x120e33a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33a4))), 0x120b4632u);
  /* 120b4632 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b4635 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 120b4638 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b463b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b463f jne 0x120b4645 */
  if (!C.zf) goto L_120b4645;
  /* 120b4641 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b4643 jmp 0x120b46bb */
  goto L_120b46bb;
L_120b4645:;
  /* 120b4645 push 4 */
  push32((uint32_t)(0x4u));
  /* 120b4647 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 120b464c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 120b4651 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b4653 call dword ptr [0x120e339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e339c))), 0x120b4659u);
  /* 120b4659 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b465c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 120b465f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b4662 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b4666 jne 0x120b4682 */
  if (!C.zf) goto L_120b4682;
  /* 120b4668 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b466b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 120b466e push ecx */
  push32((uint32_t)(ECX));
  /* 120b466f push 0 */
  push32((uint32_t)(0x0u));
  /* 120b4671 mov edx, dword ptr [0x120e2aac] */
  EDX = (r32((uint32_t)(0x120e2aac)));
  /* 120b4677 push edx */
  push32((uint32_t)(EDX));
  /* 120b4678 call dword ptr [0x120e33b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33b0))), 0x120b467eu);
  /* 120b467e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b4680 jmp 0x120b46bb */
  goto L_120b46bb;
L_120b4682:;
  /* 120b4682 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b4685 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 120b468b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b468e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 120b4695 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b4698 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 120b469f mov eax, dword ptr [0x120e2aa4] */
  EAX = (r32((uint32_t)(0x120e2aa4)));
  /* 120b46a4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b46a7 mov dword ptr [0x120e2aa4], eax */
  w32((uint32_t)(0x120e2aa4), (EAX));
  /* 120b46ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b46af mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 120b46b2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 120b46b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_120b46bb:;
  /* 120b46bb mov esp, ebp */
  ESP = (EBP);
  /* 120b46bd pop ebp */
  EBP = (pop32());
  /* 120b46be ret  */
  ESPCHK(0x120b45b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100146c0 @ 0x120b46c0 (494 bytes, 149 insns) */
void f_120b46c0(void) {
  FTRACE(0x120b46c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b46c0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b46c1 mov ebp, esp */
  EBP = (ESP);
  /* 120b46c3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b46c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b46c9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 120b46cc mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 120b46cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b46d2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 120b46d5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120b46d8 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_120b46df:;
  /* 120b46df cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b46e3 jl 0x120b46f8 */
  if ((C.sf!=C.of)) goto L_120b46f8;
  /* 120b46e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b46e8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 120b46ea mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 120b46ed mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 120b46f0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b46f3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 120b46f6 jmp 0x120b46df */
  goto L_120b46df;
L_120b46f8:;
  /* 120b46f8 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 120b46fb imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b4701 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120b4704 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 120b470b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 120b470e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 120b4715 jmp 0x120b4720 */
  goto L_120b4720;
L_120b4717:;
  /* 120b4717 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b471a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b471d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_120b4720:;
  /* 120b4720 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b4724 jge 0x120b4746 */
  if ((C.sf==C.of)) goto L_120b4746;
  /* 120b4726 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b4729 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b472c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 120b472f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 120b4732 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b4735 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b4738 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 120b473b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b473e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b4741 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 120b4744 jmp 0x120b4717 */
  goto L_120b4717;
L_120b4746:;
  /* 120b4746 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 120b4749 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 120b474c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b474f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 120b4752 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4754 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 120b4757 push 4 */
  push32((uint32_t)(0x4u));
  /* 120b4759 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 120b475e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 120b4763 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b4766 push edx */
  push32((uint32_t)(EDX));
  /* 120b4767 call dword ptr [0x120e339c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e339c))), 0x120b476du);
  /* 120b476d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b476f jne 0x120b4779 */
  if (!C.zf) goto L_120b4779;
  /* 120b4771 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120b4774 jmp 0x120b48aa */
  goto L_120b48aa;
L_120b4779:;
  /* 120b4779 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b477c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4781 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 120b4784 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b4787 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120b478a jmp 0x120b4798 */
  goto L_120b4798;
L_120b478c:;
  /* 120b478c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b478f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4795 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_120b4798:;
  /* 120b4798 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b479b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b479e ja 0x120b47fd */
  if ((!C.cf&&!C.zf)) goto L_120b47fd;
  /* 120b47a0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b47a3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 120b47aa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b47ad mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 120b47b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b47ba add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b47bd mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 120b47c0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b47c3 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 120b47c9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b47cc add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b47d2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b47d5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 120b47d8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b47db sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b47e1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b47e4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 120b47e7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b47ea add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b47ef mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 120b47f2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b47f5 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 120b47fb jmp 0x120b478c */
  goto L_120b478c;
L_120b47fd:;
  /* 120b47fd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b4800 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4806 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 120b4809 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b480c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b480f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b4812 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 120b4815 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b4818 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 120b481b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 120b481e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b4821 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b4824 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 120b4827 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120b482a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b482d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b4830 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 120b4833 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b4836 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 120b4839 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 120b483c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b483f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b4842 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 120b4845 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 120b4848 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120b484b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 120b4853 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 120b4856 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120b4859 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 120b4864 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120b4867 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 120b486b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120b486e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 120b4871 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 120b4874 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120b4877 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 120b487a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b487c jne 0x120b488d */
  if (!C.zf) goto L_120b488d;
  /* 120b487e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b4881 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 120b4884 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 120b4887 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b488a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_120b488d:;
  /* 120b488d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 120b4892 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 120b4895 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 120b4897 not edx */
  EDX = (~(EDX));
  /* 120b4899 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b489c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 120b489f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 120b48a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b48a4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 120b48a7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_120b48aa:;
  /* 120b48aa mov esp, ebp */
  ESP = (EBP);
  /* 120b48ac pop ebp */
  EBP = (pop32());
  /* 120b48ad ret  */
  ESPCHK(0x120b46c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100148b0 @ 0x120b48b0 (1515 bytes, 489 insns) */
void f_120b48b0(void) {
  FTRACE(0x120b48b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b48b0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b48b1 mov ebp, esp */
  EBP = (ESP);
  /* 120b48b3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b48b6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 120b48b9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b48bc and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 120b48be mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 120b48c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b48c4 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 120b48c7 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 120b48ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b48cd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b48d0 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b48d3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 120b48d6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b48d9 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 120b48dc mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120b48df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b48e2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b48e8 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b48eb lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 120b48f2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 120b48f5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b48f8 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b48fb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 120b48fe mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b4901 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120b4903 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b4906 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 120b4909 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b490c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b490f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 120b4912 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120b4915 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120b4917 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 120b491a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120b491d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b4920 jle 0x120b4bd6 */
  if ((C.zf||C.sf!=C.of)) goto L_120b4bd6;
  /* 120b4926 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b4929 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 120b492c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b492e jne 0x120b493b */
  if (!C.zf) goto L_120b493b;
  /* 120b4930 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 120b4933 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4936 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b4939 jle 0x120b4942 */
  if ((C.zf||C.sf!=C.of)) goto L_120b4942;
L_120b493b:;
  /* 120b493b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b493d jmp 0x120b4e97 */
  goto L_120b4e97;
L_120b4942:;
  /* 120b4942 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b4945 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 120b4948 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b494b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 120b494e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b4952 jbe 0x120b495b */
  if ((C.cf||C.zf)) goto L_120b495b;
  /* 120b4954 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_120b495b:;
  /* 120b495b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120b495e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120b4961 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 120b4964 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b4967 jne 0x120b4a3d */
  if (!C.zf) goto L_120b4a3d;
  /* 120b496d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b4971 jae 0x120b49d2 */
  if (!C.cf) goto L_120b49d2;
  /* 120b4973 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 120b4978 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b497b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 120b497d not edx */
  EDX = (~(EDX));
  /* 120b497f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b4982 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b4985 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 120b4989 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 120b498b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b498e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b4991 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 120b4995 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b4998 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b499b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 120b499e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 120b49a1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b49a4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b49a7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 120b49aa mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b49ad add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b49b0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 120b49b4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b49b6 jne 0x120b49d0 */
  if (!C.zf) goto L_120b49d0;
  /* 120b49b8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 120b49bd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b49c0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 120b49c2 not edx */
  EDX = (~(EDX));
  /* 120b49c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b49c7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120b49c9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 120b49cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b49ce mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_120b49d0:;
  /* 120b49d0 jmp 0x120b4a3d */
  goto L_120b4a3d;
L_120b49d2:;
  /* 120b49d2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b49d5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b49d8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 120b49dd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 120b49df not eax */
  EAX = (~(EAX));
  /* 120b49e1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b49e4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b49e7 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 120b49ee and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120b49f0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b49f3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b49f6 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 120b49fd mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b4a00 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4a03 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 120b4a06 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 120b4a09 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b4a0c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4a0f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 120b4a12 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b4a15 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4a18 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 120b4a1c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b4a1e jne 0x120b4a3d */
  if (!C.zf) goto L_120b4a3d;
  /* 120b4a20 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b4a23 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b4a26 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 120b4a2b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 120b4a2d not eax */
  EAX = (~(EAX));
  /* 120b4a2f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b4a32 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 120b4a35 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 120b4a37 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b4a3a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_120b4a3d:;
  /* 120b4a3d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120b4a40 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 120b4a43 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120b4a46 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 120b4a49 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 120b4a4c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120b4a4f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 120b4a52 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120b4a55 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 120b4a58 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 120b4a5b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 120b4a5e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4a61 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b4a64 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 120b4a67 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b4a6b jle 0x120b4bb7 */
  if ((C.zf||C.sf!=C.of)) goto L_120b4bb7;
  /* 120b4a71 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b4a74 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4a77 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 120b4a7a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b4a7d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 120b4a80 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b4a83 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 120b4a86 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b4a8a jbe 0x120b4a93 */
  if ((C.cf||C.zf)) goto L_120b4a93;
  /* 120b4a8c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_120b4a93:;
  /* 120b4a93 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b4a96 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b4a99 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 120b4a9c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 120b4a9f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120b4aa2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b4aa5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 120b4aa8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 120b4aab mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120b4aae mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b4ab1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 120b4ab4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b4ab7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120b4aba mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 120b4abd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120b4ac0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 120b4ac3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120b4ac6 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 120b4ac9 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120b4acc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120b4acf mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 120b4ad2 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b4ad5 jne 0x120b4ba3 */
  if (!C.zf) goto L_120b4ba3;
  /* 120b4adb cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b4adf jae 0x120b4b3c */
  if (!C.cf) goto L_120b4b3c;
  /* 120b4ae1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b4ae4 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4ae7 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 120b4aeb mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b4aee add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4af1 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 120b4af4 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 120b4af7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b4afa add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4afd mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 120b4b00 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b4b02 jne 0x120b4b1a */
  if (!C.zf) goto L_120b4b1a;
  /* 120b4b04 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 120b4b09 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b4b0c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 120b4b0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b4b11 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120b4b13 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 120b4b15 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b4b18 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_120b4b1a:;
  /* 120b4b1a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 120b4b1f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b4b22 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 120b4b24 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b4b27 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b4b2a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 120b4b2e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120b4b30 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b4b33 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b4b36 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 120b4b3a jmp 0x120b4ba3 */
  goto L_120b4ba3;
L_120b4b3c:;
  /* 120b4b3c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b4b3f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4b42 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 120b4b46 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b4b49 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4b4c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 120b4b4f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 120b4b52 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b4b55 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4b58 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 120b4b5b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b4b5d jne 0x120b4b7a */
  if (!C.zf) goto L_120b4b7a;
  /* 120b4b5f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b4b62 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b4b65 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 120b4b6a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 120b4b6c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b4b6f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 120b4b72 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 120b4b74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b4b77 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_120b4b7a:;
  /* 120b4b7a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b4b7d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b4b80 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 120b4b85 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 120b4b87 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b4b8a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b4b8d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 120b4b94 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120b4b96 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b4b99 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b4b9c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_120b4ba3:;
  /* 120b4ba3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120b4ba6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b4ba9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 120b4bab mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120b4bae add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4bb1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b4bb4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_120b4bb7:;
  /* 120b4bb7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120b4bba add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4bbd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b4bc0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 120b4bc2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120b4bc5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4bc8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b4bcb add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4bce mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 120b4bd1 jmp 0x120b4e92 */
  goto L_120b4e92;
L_120b4bd6:;
  /* 120b4bd6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120b4bd9 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b4bdc jge 0x120b4e92 */
  if ((C.sf==C.of)) goto L_120b4e92;
  /* 120b4be2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120b4be5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4be8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b4beb mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 120b4bed mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 120b4bf0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4bf3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b4bf6 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4bf9 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 120b4bfc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b4bff add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4c02 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 120b4c05 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 120b4c08 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b4c0b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 120b4c0e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 120b4c11 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 120b4c14 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b4c17 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 120b4c1a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b4c1e jbe 0x120b4c27 */
  if ((C.cf||C.zf)) goto L_120b4c27;
  /* 120b4c20 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_120b4c27:;
  /* 120b4c27 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b4c2a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 120b4c2d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b4c2f jne 0x120b4d70 */
  if (!C.zf) goto L_120b4d70;
  /* 120b4c35 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b4c38 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 120b4c3b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b4c3e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 120b4c41 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b4c45 jbe 0x120b4c4e */
  if ((C.cf||C.zf)) goto L_120b4c4e;
  /* 120b4c47 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_120b4c4e:;
  /* 120b4c4e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120b4c51 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120b4c54 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 120b4c57 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b4c5a jne 0x120b4d30 */
  if (!C.zf) goto L_120b4d30;
  /* 120b4c60 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b4c64 jae 0x120b4cc5 */
  if (!C.cf) goto L_120b4cc5;
  /* 120b4c66 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 120b4c6b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b4c6e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 120b4c70 not edx */
  EDX = (~(EDX));
  /* 120b4c72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b4c75 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b4c78 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 120b4c7c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 120b4c7e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b4c81 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b4c84 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 120b4c88 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b4c8b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4c8e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 120b4c91 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 120b4c94 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b4c97 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4c9a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 120b4c9d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b4ca0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4ca3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 120b4ca7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b4ca9 jne 0x120b4cc3 */
  if (!C.zf) goto L_120b4cc3;
  /* 120b4cab mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 120b4cb0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b4cb3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 120b4cb5 not edx */
  EDX = (~(EDX));
  /* 120b4cb7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b4cba mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120b4cbc and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 120b4cbe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b4cc1 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_120b4cc3:;
  /* 120b4cc3 jmp 0x120b4d30 */
  goto L_120b4d30;
L_120b4cc5:;
  /* 120b4cc5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b4cc8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b4ccb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 120b4cd0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 120b4cd2 not eax */
  EAX = (~(EAX));
  /* 120b4cd4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b4cd7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b4cda mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 120b4ce1 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 120b4ce3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b4ce6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b4ce9 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 120b4cf0 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b4cf3 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4cf6 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 120b4cf9 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 120b4cfc mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b4cff add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4d02 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 120b4d05 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b4d08 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4d0b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 120b4d0f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b4d11 jne 0x120b4d30 */
  if (!C.zf) goto L_120b4d30;
  /* 120b4d13 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 120b4d16 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b4d19 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 120b4d1e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 120b4d20 not eax */
  EAX = (~(EAX));
  /* 120b4d22 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b4d25 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 120b4d28 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 120b4d2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b4d2d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_120b4d30:;
  /* 120b4d30 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120b4d33 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 120b4d36 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120b4d39 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 120b4d3c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 120b4d3f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120b4d42 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 120b4d45 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120b4d48 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 120b4d4b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 120b4d4e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 120b4d51 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4d54 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 120b4d57 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 120b4d5a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 120b4d5d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b4d60 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 120b4d63 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b4d67 jbe 0x120b4d70 */
  if ((C.cf||C.zf)) goto L_120b4d70;
  /* 120b4d69 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_120b4d70:;
  /* 120b4d70 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b4d73 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b4d76 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 120b4d79 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 120b4d7c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b4d7f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b4d82 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 120b4d85 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 120b4d88 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b4d8b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b4d8e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 120b4d91 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b4d94 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b4d97 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 120b4d9a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b4d9d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 120b4da0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b4da3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 120b4da6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b4da9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b4dac mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 120b4daf cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b4db2 jne 0x120b4e7e */
  if (!C.zf) goto L_120b4e7e;
  /* 120b4db8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b4dbc jae 0x120b4e18 */
  if (!C.cf) goto L_120b4e18;
  /* 120b4dbe mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b4dc1 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4dc4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 120b4dc8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b4dcb add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4dce mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 120b4dd1 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 120b4dd3 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b4dd6 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4dd9 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 120b4ddc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b4dde jne 0x120b4df6 */
  if (!C.zf) goto L_120b4df6;
  /* 120b4de0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 120b4de5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b4de8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 120b4dea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b4ded mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120b4def or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 120b4df1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b4df4 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_120b4df6:;
  /* 120b4df6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 120b4dfb mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b4dfe shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 120b4e00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b4e03 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b4e06 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 120b4e0a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 120b4e0c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b4e0f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b4e12 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 120b4e16 jmp 0x120b4e7e */
  goto L_120b4e7e;
L_120b4e18:;
  /* 120b4e18 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b4e1b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4e1e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 120b4e22 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b4e25 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4e28 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 120b4e2b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 120b4e2d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b4e30 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4e33 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 120b4e36 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b4e38 jne 0x120b4e55 */
  if (!C.zf) goto L_120b4e55;
  /* 120b4e3a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b4e3d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b4e40 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 120b4e45 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 120b4e47 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b4e4a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 120b4e4d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 120b4e4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b4e52 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_120b4e55:;
  /* 120b4e55 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b4e58 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b4e5b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 120b4e60 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 120b4e62 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b4e65 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b4e68 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 120b4e6f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 120b4e71 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b4e74 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 120b4e77 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_120b4e7e:;
  /* 120b4e7e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b4e81 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 120b4e84 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 120b4e86 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b4e89 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4e8c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 120b4e8f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_120b4e92:;
  /* 120b4e92 mov eax, 1 */
  EAX = (0x1u);
L_120b4e97:;
  /* 120b4e97 mov esp, ebp */
  ESP = (EBP);
  /* 120b4e99 pop ebp */
  EBP = (pop32());
  /* 120b4e9a ret  */
  ESPCHK(0x120b48b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014ea0 @ 0x120b4ea0 (304 bytes, 79 insns) */
void f_120b4ea0(void) {
  FTRACE(0x120b4ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b4ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b4ea1 mov ebp, esp */
  EBP = (ESP);
  /* 120b4ea3 push ecx */
  push32((uint32_t)(ECX));
  /* 120b4ea4 cmp dword ptr [0x120e2aa0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e2aa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b4eab je 0x120b4fcc */
  if (C.zf) goto L_120b4fcc;
  /* 120b4eb1 mov eax, dword ptr [0x120e2a98] */
  EAX = (r32((uint32_t)(0x120e2a98)));
  /* 120b4eb6 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 120b4eb9 mov ecx, dword ptr [0x120e2aa0] */
  ECX = (r32((uint32_t)(0x120e2aa0)));
  /* 120b4ebf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 120b4ec2 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4ec4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 120b4ec7 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 120b4ecc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 120b4ed1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b4ed4 push eax */
  push32((uint32_t)(EAX));
  /* 120b4ed5 call dword ptr [0x120e33ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33ac))), 0x120b4edbu);
  /* 120b4edb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 120b4ee0 mov ecx, dword ptr [0x120e2a98] */
  ECX = (r32((uint32_t)(0x120e2a98)));
  /* 120b4ee6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 120b4ee8 mov eax, dword ptr [0x120e2aa0] */
  EAX = (r32((uint32_t)(0x120e2aa0)));
  /* 120b4eed mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 120b4ef0 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 120b4ef2 mov edx, dword ptr [0x120e2aa0] */
  EDX = (r32((uint32_t)(0x120e2aa0)));
  /* 120b4ef8 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 120b4efb mov eax, dword ptr [0x120e2aa0] */
  EAX = (r32((uint32_t)(0x120e2aa0)));
  /* 120b4f00 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 120b4f03 mov edx, dword ptr [0x120e2a98] */
  EDX = (r32((uint32_t)(0x120e2a98)));
  /* 120b4f09 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 120b4f14 mov eax, dword ptr [0x120e2aa0] */
  EAX = (r32((uint32_t)(0x120e2aa0)));
  /* 120b4f19 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 120b4f1c mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 120b4f1f sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 120b4f22 mov eax, dword ptr [0x120e2aa0] */
  EAX = (r32((uint32_t)(0x120e2aa0)));
  /* 120b4f27 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 120b4f2a mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 120b4f2d mov edx, dword ptr [0x120e2aa0] */
  EDX = (r32((uint32_t)(0x120e2aa0)));
  /* 120b4f33 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 120b4f36 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 120b4f3a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 120b4f3c jne 0x120b4f52 */
  if (!C.zf) goto L_120b4f52;
  /* 120b4f3e mov edx, dword ptr [0x120e2aa0] */
  EDX = (r32((uint32_t)(0x120e2aa0)));
  /* 120b4f44 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 120b4f47 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 120b4f49 mov ecx, dword ptr [0x120e2aa0] */
  ECX = (r32((uint32_t)(0x120e2aa0)));
  /* 120b4f4f mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_120b4f52:;
  /* 120b4f52 mov edx, dword ptr [0x120e2aa0] */
  EDX = (r32((uint32_t)(0x120e2aa0)));
  /* 120b4f58 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b4f5c jne 0x120b4fc2 */
  if (!C.zf) goto L_120b4fc2;
  /* 120b4f5e cmp dword ptr [0x120e2aa4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x120e2aa4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b4f65 jle 0x120b4fc2 */
  if ((C.zf||C.sf!=C.of)) goto L_120b4fc2;
  /* 120b4f67 mov eax, dword ptr [0x120e2aa0] */
  EAX = (r32((uint32_t)(0x120e2aa0)));
  /* 120b4f6c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 120b4f6f push ecx */
  push32((uint32_t)(ECX));
  /* 120b4f70 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b4f72 mov edx, dword ptr [0x120e2aac] */
  EDX = (r32((uint32_t)(0x120e2aac)));
  /* 120b4f78 push edx */
  push32((uint32_t)(EDX));
  /* 120b4f79 call dword ptr [0x120e33b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e33b0))), 0x120b4f7fu);
  /* 120b4f7f mov eax, dword ptr [0x120e2aa4] */
  EAX = (r32((uint32_t)(0x120e2aa4)));
  /* 120b4f84 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b4f87 mov ecx, dword ptr [0x120e2aa8] */
  ECX = (r32((uint32_t)(0x120e2aa8)));
  /* 120b4f8d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4f8f mov edx, dword ptr [0x120e2aa0] */
  EDX = (r32((uint32_t)(0x120e2aa0)));
  /* 120b4f95 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4f98 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b4f9a push ecx */
  push32((uint32_t)(ECX));
  /* 120b4f9b mov eax, dword ptr [0x120e2aa0] */
  EAX = (r32((uint32_t)(0x120e2aa0)));
  /* 120b4fa0 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4fa3 push eax */
  push32((uint32_t)(EAX));
  /* 120b4fa4 mov ecx, dword ptr [0x120e2aa0] */
  ECX = (r32((uint32_t)(0x120e2aa0)));
  /* 120b4faa push ecx */
  push32((uint32_t)(ECX));
  /* 120b4fab call 0x120b30f0 */
  push32(0x120b4fb0u); f_120b30f0();
  /* 120b4fb0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b4fb3 mov edx, dword ptr [0x120e2aa4] */
  EDX = (r32((uint32_t)(0x120e2aa4)));
  /* 120b4fb9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b4fbc mov dword ptr [0x120e2aa4], edx */
  w32((uint32_t)(0x120e2aa4), (EDX));
L_120b4fc2:;
  /* 120b4fc2 mov dword ptr [0x120e2aa0], 0 */
  w32((uint32_t)(0x120e2aa0), (0x0u));
L_120b4fcc:;
  /* 120b4fcc mov esp, ebp */
  ESP = (EBP);
  /* 120b4fce pop ebp */
  EBP = (pop32());
  /* 120b4fcf ret  */
  ESPCHK(0x120b4ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014fd0 @ 0x120b4fd0 (1565 bytes, 343 insns) */
void f_120b4fd0(void) {
  FTRACE(0x120b4fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b4fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b4fd1 mov ebp, esp */
  EBP = (ESP);
  /* 120b4fd3 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b4fd9 mov eax, dword ptr [0x120e2aa4] */
  EAX = (r32((uint32_t)(0x120e2aa4)));
  /* 120b4fde imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 120b4fe1 push eax */
  push32((uint32_t)(EAX));
  /* 120b4fe2 mov ecx, dword ptr [0x120e2aa8] */
  ECX = (r32((uint32_t)(0x120e2aa8)));
  /* 120b4fe8 push ecx */
  push32((uint32_t)(ECX));
  /* 120b4fe9 call dword ptr [0x120e340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e340c))), 0x120b4fefu);
  /* 120b4fef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b4ff1 je 0x120b4ffb */
  if (C.zf) goto L_120b4ffb;
  /* 120b4ff3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 120b4ff6 jmp 0x120b55e9 */
  goto L_120b55e9;
L_120b4ffb:;
  /* 120b4ffb mov edx, dword ptr [0x120e2aa8] */
  EDX = (r32((uint32_t)(0x120e2aa8)));
  /* 120b5001 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 120b5007 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 120b5011 jmp 0x120b5022 */
  goto L_120b5022;
L_120b5013:;
  /* 120b5013 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 120b5019 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b501c mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_120b5022:;
  /* 120b5022 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 120b5028 cmp ecx, dword ptr [0x120e2aa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x120e2aa4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b502e jge 0x120b55e7 */
  if ((C.sf==C.of)) goto L_120b55e7;
  /* 120b5034 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 120b503a mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 120b503d mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 120b5043 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 120b5048 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 120b504e push ecx */
  push32((uint32_t)(ECX));
  /* 120b504f call dword ptr [0x120e340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e340c))), 0x120b5055u);
  /* 120b5055 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b5057 je 0x120b5063 */
  if (C.zf) goto L_120b5063;
  /* 120b5059 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 120b505e jmp 0x120b55e9 */
  goto L_120b55e9;
L_120b5063:;
  /* 120b5063 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 120b5069 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 120b506c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 120b5072 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 120b5078 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b507e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 120b5081 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 120b5087 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 120b508a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 120b508d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 120b5097 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 120b50a1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 120b50a8 jmp 0x120b50b3 */
  goto L_120b50b3;
L_120b50aa:;
  /* 120b50aa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b50ad add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b50b0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_120b50b3:;
  /* 120b50b3 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b50b7 jge 0x120b55ab */
  if ((C.sf==C.of)) goto L_120b55ab;
  /* 120b50bd mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 120b50c7 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 120b50d1 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 120b50db mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 120b50e5 jmp 0x120b50f6 */
  goto L_120b50f6;
L_120b50e7:;
  /* 120b50e7 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 120b50ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b50f0 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_120b50f6:;
  /* 120b50f6 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b50fd jge 0x120b5112 */
  if ((C.sf==C.of)) goto L_120b5112;
  /* 120b50ff mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 120b5105 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 120b5110 jmp 0x120b50e7 */
  goto L_120b50e7;
L_120b5112:;
  /* 120b5112 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5116 jl 0x120b554d */
  if ((C.sf!=C.of)) goto L_120b554d;
  /* 120b511c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 120b5121 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 120b5127 push ecx */
  push32((uint32_t)(ECX));
  /* 120b5128 call dword ptr [0x120e340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e340c))), 0x120b512eu);
  /* 120b512e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b5130 je 0x120b513c */
  if (C.zf) goto L_120b513c;
  /* 120b5132 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 120b5137 jmp 0x120b55e9 */
  goto L_120b55e9;
L_120b513c:;
  /* 120b513c mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 120b5142 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 120b5145 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 120b514f jmp 0x120b5160 */
  goto L_120b5160;
L_120b5151:;
  /* 120b5151 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 120b5157 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b515a mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_120b5160:;
  /* 120b5160 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5167 jge 0x120b52e4 */
  if ((C.sf==C.of)) goto L_120b52e4;
  /* 120b516d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b5170 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5173 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 120b5179 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 120b517f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5185 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 120b518b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 120b5191 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5195 jne 0x120b51a2 */
  if (!C.zf) goto L_120b51a2;
  /* 120b5197 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 120b519d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b51a0 je 0x120b51ac */
  if (C.zf) goto L_120b51ac;
L_120b51a2:;
  /* 120b51a2 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 120b51a7 jmp 0x120b55e9 */
  goto L_120b55e9;
L_120b51ac:;
  /* 120b51ac mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 120b51b2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120b51b4 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 120b51ba mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 120b51c0 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 120b51c6 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 120b51cc and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 120b51cf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b51d1 je 0x120b5209 */
  if (C.zf) goto L_120b5209;
  /* 120b51d3 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 120b51d9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b51dc mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 120b51e2 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b51ec jle 0x120b51f8 */
  if ((C.zf||C.sf!=C.of)) goto L_120b51f8;
  /* 120b51ee mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 120b51f3 jmp 0x120b55e9 */
  goto L_120b55e9;
L_120b51f8:;
  /* 120b51f8 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 120b51fe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5201 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 120b5207 jmp 0x120b524b */
  goto L_120b524b;
L_120b5209:;
  /* 120b5209 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 120b520f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 120b5212 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b5215 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 120b521b cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5222 jle 0x120b522e */
  if ((C.zf||C.sf!=C.of)) goto L_120b522e;
  /* 120b5224 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_120b522e:;
  /* 120b522e mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 120b5234 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 120b523b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b523e mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 120b5244 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_120b524b:;
  /* 120b524b cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5252 jl 0x120b526d */
  if ((C.sf!=C.of)) goto L_120b526d;
  /* 120b5254 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 120b525a and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 120b525d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b525f jne 0x120b526d */
  if (!C.zf) goto L_120b526d;
  /* 120b5261 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b526b jle 0x120b5277 */
  if ((C.zf||C.sf!=C.of)) goto L_120b5277;
L_120b526d:;
  /* 120b526d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 120b5272 jmp 0x120b55e9 */
  goto L_120b55e9;
L_120b5277:;
  /* 120b5277 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 120b527d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5283 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 120b5286 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b528c je 0x120b5298 */
  if (C.zf) goto L_120b5298;
  /* 120b528e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 120b5293 jmp 0x120b55e9 */
  goto L_120b55e9;
L_120b5298:;
  /* 120b5298 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 120b529e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b52a4 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 120b52aa mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 120b52b0 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b52b6 jb 0x120b51ac */
  if (C.cf) goto L_120b51ac;
  /* 120b52bc mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 120b52c2 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b52c8 je 0x120b52d4 */
  if (C.zf) goto L_120b52d4;
  /* 120b52ca mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 120b52cf jmp 0x120b55e9 */
  goto L_120b55e9;
L_120b52d4:;
  /* 120b52d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 120b52d7 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b52dc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 120b52df jmp 0x120b5151 */
  goto L_120b5151;
L_120b52e4:;
  /* 120b52e4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b52e7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120b52e9 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b52ef je 0x120b52fb */
  if (C.zf) goto L_120b52fb;
  /* 120b52f1 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 120b52f6 jmp 0x120b55e9 */
  goto L_120b55e9;
L_120b52fb:;
  /* 120b52fb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b52fe mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 120b5304 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 120b530b jmp 0x120b5316 */
  goto L_120b5316;
L_120b530d:;
  /* 120b530d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b5310 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5313 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_120b5316:;
  /* 120b5316 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b531a jge 0x120b554d */
  if ((C.sf==C.of)) goto L_120b554d;
  /* 120b5320 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 120b532a mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 120b5330 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_120b5336:;
  /* 120b5336 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 120b533c mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 120b533f mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 120b5345 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 120b534b cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5351 je 0x120b547a */
  if (C.zf) goto L_120b547a;
  /* 120b5357 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b535a mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 120b5360 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5367 je 0x120b547a */
  if (C.zf) goto L_120b547a;
  /* 120b536d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 120b5373 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5379 jb 0x120b538e */
  if (C.cf) goto L_120b538e;
  /* 120b537b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 120b5381 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5386 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b538c jb 0x120b5398 */
  if (C.cf) goto L_120b5398;
L_120b538e:;
  /* 120b538e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 120b5393 jmp 0x120b55e9 */
  goto L_120b55e9;
L_120b5398:;
  /* 120b5398 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 120b539e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 120b53a4 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 120b53aa mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 120b53b0 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b53b3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 120b53b6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b53b9 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b53be mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_120b53c4:;
  /* 120b53c4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b53c7 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b53cd je 0x120b53ee */
  if (C.zf) goto L_120b53ee;
  /* 120b53cf mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b53d2 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b53d8 jne 0x120b53dc */
  if (!C.zf) goto L_120b53dc;
  /* 120b53da jmp 0x120b53ee */
  goto L_120b53ee;
L_120b53dc:;
  /* 120b53dc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b53df mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120b53e1 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 120b53e4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b53e7 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b53e9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 120b53ec jmp 0x120b53c4 */
  goto L_120b53c4;
L_120b53ee:;
  /* 120b53ee mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 120b53f1 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b53f7 jne 0x120b5403 */
  if (!C.zf) goto L_120b5403;
  /* 120b53f9 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 120b53fe jmp 0x120b55e9 */
  goto L_120b55e9;
L_120b5403:;
  /* 120b5403 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 120b5409 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120b540b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 120b540e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b5411 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 120b5417 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b541e jle 0x120b542a */
  if ((C.zf||C.sf!=C.of)) goto L_120b542a;
  /* 120b5420 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_120b542a:;
  /* 120b542a mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 120b5430 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5433 je 0x120b543f */
  if (C.zf) goto L_120b543f;
  /* 120b5435 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 120b543a jmp 0x120b55e9 */
  goto L_120b55e9;
L_120b543f:;
  /* 120b543f mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 120b5445 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 120b5448 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b544e je 0x120b545a */
  if (C.zf) goto L_120b545a;
  /* 120b5450 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 120b5455 jmp 0x120b55e9 */
  goto L_120b55e9;
L_120b545a:;
  /* 120b545a mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 120b5460 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 120b5466 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 120b546c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b546f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 120b5475 jmp 0x120b5336 */
  goto L_120b5336;
L_120b547a:;
  /* 120b547a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5481 je 0x120b54f1 */
  if (C.zf) goto L_120b54f1;
  /* 120b5483 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5487 jge 0x120b54bb */
  if ((C.sf==C.of)) goto L_120b54bb;
  /* 120b5489 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 120b548e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b5491 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 120b5493 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 120b5499 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 120b549b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 120b54a1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 120b54a6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b54a9 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 120b54ab mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 120b54b1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 120b54b3 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 120b54b9 jmp 0x120b54f1 */
  goto L_120b54f1;
L_120b54bb:;
  /* 120b54bb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b54be sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b54c1 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 120b54c6 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 120b54c8 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 120b54ce or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 120b54d0 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 120b54d6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b54d9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b54dc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 120b54e1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 120b54e3 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 120b54e9 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 120b54eb mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_120b54f1:;
  /* 120b54f1 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 120b54f7 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 120b54fa cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5500 jne 0x120b5514 */
  if (!C.zf) goto L_120b5514;
  /* 120b5502 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 120b5505 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 120b550b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5512 je 0x120b551e */
  if (C.zf) goto L_120b551e;
L_120b5514:;
  /* 120b5514 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 120b5519 jmp 0x120b55e9 */
  goto L_120b55e9;
L_120b551e:;
  /* 120b551e mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 120b5524 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 120b5527 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b552d je 0x120b5539 */
  if (C.zf) goto L_120b5539;
  /* 120b552f mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 120b5534 jmp 0x120b55e9 */
  goto L_120b55e9;
L_120b5539:;
  /* 120b5539 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 120b553f add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5542 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 120b5548 jmp 0x120b530d */
  goto L_120b530d;
L_120b554d:;
  /* 120b554d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b5550 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 120b5556 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 120b555c cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5560 jne 0x120b557a */
  if (!C.zf) goto L_120b557a;
  /* 120b5562 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 120b5565 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 120b556b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 120b5571 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5578 je 0x120b5581 */
  if (C.zf) goto L_120b5581;
L_120b557a:;
  /* 120b557a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 120b557f jmp 0x120b55e9 */
  goto L_120b55e9;
L_120b5581:;
  /* 120b5581 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 120b5587 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b558d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 120b5593 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 120b5596 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b559b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 120b559e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b55a1 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 120b55a3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 120b55a6 jmp 0x120b50aa */
  goto L_120b50aa;
L_120b55ab:;
  /* 120b55ab mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 120b55b1 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 120b55b7 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b55b9 jne 0x120b55cc */
  if (!C.zf) goto L_120b55cc;
  /* 120b55bb mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 120b55c1 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 120b55c7 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b55ca je 0x120b55d3 */
  if (C.zf) goto L_120b55d3;
L_120b55cc:;
  /* 120b55cc mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 120b55d1 jmp 0x120b55e9 */
  goto L_120b55e9;
L_120b55d3:;
  /* 120b55d3 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 120b55d9 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b55dc mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 120b55e2 jmp 0x120b5013 */
  goto L_120b5013;
L_120b55e7:;
  /* 120b55e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120b55e9:;
  /* 120b55e9 mov esp, ebp */
  ESP = (EBP);
  /* 120b55eb pop ebp */
  EBP = (pop32());
  /* 120b55ec ret  */
  ESPCHK(0x120b4fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_100155f0 @ 0x120b55f0 (250 bytes, 92 insns) */
void f_120b55f0(void) {
  FTRACE(0x120b55f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b55f0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b55f1 mov ebp, esp */
  EBP = (ESP);
  /* 120b55f3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b55f6 push ebx */
  push32((uint32_t)(EBX));
  /* 120b55f7 push esi */
  push32((uint32_t)(ESI));
  /* 120b55f8 push edi */
  push32((uint32_t)(EDI));
  /* 120b55f9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 120b55fc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 120b55ff lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 120b5602 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_120b5605:;
  /* 120b5605 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5609 jne 0x120b5629 */
  if (!C.zf) goto L_120b5629;
  /* 120b560b push 0x120dc150 */
  push32((uint32_t)(0x120dc150u));
  /* 120b5610 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b5612 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 120b5614 push 0x120dc144 */
  push32((uint32_t)(0x120dc144u));
  /* 120b5619 push 2 */
  push32((uint32_t)(0x2u));
  /* 120b561b call 0x120ab840 */
  push32(0x120b5620u); f_120ab840();
  /* 120b5620 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5623 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5626 jne 0x120b5629 */
  if (!C.zf) goto L_120b5629;
  /* 120b5628 int3  */
  x86_unimpl("int3 @ 0x120b5628");
L_120b5629:;
  /* 120b5629 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 120b562b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 120b562d jne 0x120b5605 */
  if (!C.zf) goto L_120b5605;
L_120b562f:;
  /* 120b562f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5633 jne 0x120b5653 */
  if (!C.zf) goto L_120b5653;
  /* 120b5635 push 0x120dc134 */
  push32((uint32_t)(0x120dc134u));
  /* 120b563a push 0 */
  push32((uint32_t)(0x0u));
  /* 120b563c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 120b563e push 0x120dc144 */
  push32((uint32_t)(0x120dc144u));
  /* 120b5643 push 2 */
  push32((uint32_t)(0x2u));
  /* 120b5645 call 0x120ab840 */
  push32(0x120b564au); f_120ab840();
  /* 120b564a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b564d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5650 jne 0x120b5653 */
  if (!C.zf) goto L_120b5653;
  /* 120b5652 int3  */
  x86_unimpl("int3 @ 0x120b5652");
L_120b5653:;
  /* 120b5653 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b5655 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b5657 jne 0x120b562f */
  if (!C.zf) goto L_120b562f;
  /* 120b5659 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b565c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 120b5663 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b5666 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b5669 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 120b566c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b566f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b5672 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 120b5674 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b5677 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 120b567e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 120b5681 push ecx */
  push32((uint32_t)(ECX));
  /* 120b5682 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b5685 push edx */
  push32((uint32_t)(EDX));
  /* 120b5686 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b5689 push eax */
  push32((uint32_t)(EAX));
  /* 120b568a call 0x120b73d0 */
  push32(0x120b568fu); f_120b73d0();
  /* 120b568f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5692 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 120b5695 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b5698 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 120b569b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b569e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b56a1 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 120b56a4 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b56a7 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b56ab jl 0x120b56cf */
  if ((C.sf!=C.of)) goto L_120b56cf;
  /* 120b56ad mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b56b0 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120b56b2 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 120b56b5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 120b56b7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 120b56bd mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 120b56c0 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b56c3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120b56c5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b56c8 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b56cb mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 120b56cd jmp 0x120b56e0 */
  goto L_120b56e0;
L_120b56cf:;
  /* 120b56cf mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 120b56d2 push edx */
  push32((uint32_t)(EDX));
  /* 120b56d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 120b56d5 call 0x120b7150 */
  push32(0x120b56dau); f_120b7150();
  /* 120b56da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b56dd mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_120b56e0:;
  /* 120b56e0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 120b56e3 pop edi */
  EDI = (pop32());
  /* 120b56e4 pop esi */
  ESI = (pop32());
  /* 120b56e5 pop ebx */
  EBX = (pop32());
  /* 120b56e6 mov esp, ebp */
  ESP = (EBP);
  /* 120b56e8 pop ebp */
  EBP = (pop32());
  /* 120b56e9 ret  */
  ESPCHK(0x120b55f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100156f0 @ 0x120b56f0 (91 bytes, 30 insns) */
void f_120b56f0(void) {
  FTRACE(0x120b56f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b56f0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b56f1 mov ebp, esp */
  EBP = (ESP);
  /* 120b56f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b56f6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 120b56f8 cmp dword ptr [ecx], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b56fe jne 0x120b571e */
  if (!C.zf) goto L_120b571e;
  /* 120b5700 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b5703 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120b5705 cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5709 jne 0x120b571e */
  if (!C.zf) goto L_120b571e;
  /* 120b570b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b570e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 120b5710 cmp dword ptr [edx + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5717 jne 0x120b571e */
  if (!C.zf) goto L_120b571e;
  /* 120b5719 call 0x120afb50 */
  push32(0x120b571eu); f_120afb50();
L_120b571e:;
  /* 120b571e cmp dword ptr [0x120e1300], 0 */
  { uint32_t _a=(r32((uint32_t)(0x120e1300))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 120b5725 je 0x120b5745 */
  if (C.zf) goto L_120b5745;
  /* 120b5727 mov eax, dword ptr [0x120e1300] */
  EAX = (r32((uint32_t)(0x120e1300)));
  /* 120b572c push eax */
  push32((uint32_t)(EAX));
  /* 120b572d call 0x120b57f0 */
  push32(0x120b5732u); f_120b57f0();
  /* 120b5732 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5735 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b5737 je 0x120b5745 */
  if (C.zf) goto L_120b5745;
  /* 120b5739 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b573c push ecx */
  push32((uint32_t)(ECX));
  /* 120b573d call dword ptr [0x120e1300] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e1300))), 0x120b5743u);
  /* 120b5743 jmp 0x120b5747 */
  goto L_120b5747;
L_120b5745:;
  /* 120b5745 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_120b5747:;
  /* 120b5747 pop ebp */
  EBP = (pop32());
  /* 120b5748 ret 4 */
  ESPCHK(0x120b56f0u, _esp0);
  ESP += 8; return;
}

/* FUN_10015750 @ 0x120b5750 (21 bytes, 7 insns) */
void f_120b5750(void) {
  FTRACE(0x120b5750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b5750 push ebp */
  push32((uint32_t)(EBP));
  /* 120b5751 mov ebp, esp */
  EBP = (ESP);
  /* 120b5753 push 0x120b56f0 */
  push32((uint32_t)(0x120b56f0u));
  /* 120b5758 call dword ptr [0x120e3398] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3398))), 0x120b575eu);
  /* 120b575e mov dword ptr [0x120e1300], eax */
  w32((uint32_t)(0x120e1300), (EAX));
  /* 120b5763 pop ebp */
  EBP = (pop32());
  /* 120b5764 ret  */
  ESPCHK(0x120b5750u, _esp0);
  ESP += 4; return;
}

/* FUN_10015770 @ 0x120b5770 (17 bytes, 7 insns) */
void f_120b5770(void) {
  FTRACE(0x120b5770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b5770 push ebp */
  push32((uint32_t)(EBP));
  /* 120b5771 mov ebp, esp */
  EBP = (ESP);
  /* 120b5773 mov eax, dword ptr [0x120e1300] */
  EAX = (r32((uint32_t)(0x120e1300)));
  /* 120b5778 push eax */
  push32((uint32_t)(EAX));
  /* 120b5779 call dword ptr [0x120e3398] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3398))), 0x120b577fu);
  /* 120b577f pop ebp */
  EBP = (pop32());
  /* 120b5780 ret  */
  ESPCHK(0x120b5770u, _esp0);
  ESP += 4; return;
}

/* FUN_10015790 @ 0x120b5790 (43 bytes, 16 insns) */
void f_120b5790(void) {
  FTRACE(0x120b5790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b5790 push ebp */
  push32((uint32_t)(EBP));
  /* 120b5791 mov ebp, esp */
  EBP = (ESP);
  /* 120b5793 push ecx */
  push32((uint32_t)(ECX));
  /* 120b5794 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 120b579b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b579e push eax */
  push32((uint32_t)(EAX));
  /* 120b579f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b57a2 push ecx */
  push32((uint32_t)(ECX));
  /* 120b57a3 call dword ptr [0x120e3408] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3408))), 0x120b57a9u);
  /* 120b57a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b57ab je 0x120b57b4 */
  if (C.zf) goto L_120b57b4;
  /* 120b57ad mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_120b57b4:;
  /* 120b57b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b57b7 mov esp, ebp */
  ESP = (EBP);
  /* 120b57b9 pop ebp */
  EBP = (pop32());
  /* 120b57ba ret  */
  ESPCHK(0x120b5790u, _esp0);
  ESP += 4; return;
}

/* FUN_100157c0 @ 0x120b57c0 (43 bytes, 16 insns) */
void f_120b57c0(void) {
  FTRACE(0x120b57c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b57c0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b57c1 mov ebp, esp */
  EBP = (ESP);
  /* 120b57c3 push ecx */
  push32((uint32_t)(ECX));
  /* 120b57c4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 120b57cb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 120b57ce push eax */
  push32((uint32_t)(EAX));
  /* 120b57cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b57d2 push ecx */
  push32((uint32_t)(ECX));
  /* 120b57d3 call dword ptr [0x120e340c] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e340c))), 0x120b57d9u);
  /* 120b57d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b57db je 0x120b57e4 */
  if (C.zf) goto L_120b57e4;
  /* 120b57dd mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_120b57e4:;
  /* 120b57e4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b57e7 mov esp, ebp */
  ESP = (EBP);
  /* 120b57e9 pop ebp */
  EBP = (pop32());
  /* 120b57ea ret  */
  ESPCHK(0x120b57c0u, _esp0);
  ESP += 4; return;
}

/* _ValidateExecute @ 0x120b57f0 (39 bytes, 14 insns) */
void f_120b57f0(void) {
  FTRACE(0x120b57f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b57f0 push ebp */
  push32((uint32_t)(EBP));
  /* 120b57f1 mov ebp, esp */
  EBP = (ESP);
  /* 120b57f3 push ecx */
  push32((uint32_t)(ECX));
  /* 120b57f4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 120b57fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 120b57fe push eax */
  push32((uint32_t)(EAX));
  /* 120b57ff call dword ptr [0x120e3394] */
  call_ind((uint32_t)(r32((uint32_t)(0x120e3394))), 0x120b5805u);
  /* 120b5805 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 120b5807 je 0x120b5810 */
  if (C.zf) goto L_120b5810;
  /* 120b5809 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_120b5810:;
  /* 120b5810 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 120b5813 mov esp, ebp */
  ESP = (EBP);
  /* 120b5815 pop ebp */
  EBP = (pop32());
  /* 120b5816 ret  */
  ESPCHK(0x120b57f0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x120b5820 (129 bytes, 56 insns) */
void f_120b5820(void) {
  FTRACE(0x120b5820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 120b5820 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 120b5824 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 120b5828 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 120b582e jne 0x120b586c */
  if (!C.zf) goto L_120b586c;
L_120b5830:;
  /* 120b5830 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 120b5832 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120b5834 jne 0x120b5864 */
  if (!C.zf) goto L_120b5864;
  /* 120b5836 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 120b5838 je 0x120b5860 */
  if (C.zf) goto L_120b5860;
  /* 120b583a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120b583d jne 0x120b5864 */
  if (!C.zf) goto L_120b5864;
  /* 120b583f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 120b5841 je 0x120b5860 */
  if (C.zf) goto L_120b5860;
  /* 120b5843 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 120b5846 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120b5849 jne 0x120b5864 */
  if (!C.zf) goto L_120b5864;
  /* 120b584b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 120b584d je 0x120b5860 */
  if (C.zf) goto L_120b5860;
  /* 120b584f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120b5852 jne 0x120b5864 */
  if (!C.zf) goto L_120b5864;
  /* 120b5854 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b5857 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b585a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 120b585c jne 0x120b5830 */
  if (!C.zf) goto L_120b5830;
  /* 120b585e mov edi, edi */
  EDI = (EDI);
L_120b5860:;
  /* 120b5860 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 120b5862 ret  */
  ESPCHK(0x120b5820u, _esp0);
  ESP += 4; return;
  /* 120b5863 nop  */
  /* nop */
L_120b5864:;
  /* 120b5864 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 120b5866 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 120b5868 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 120b5869 ret  */
  ESPCHK(0x120b5820u, _esp0);
  ESP += 4; return;
  /* 120b586a mov edi, edi */
  EDI = (EDI);
L_120b586c:;
  /* 120b586c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 120b5872 je 0x120b5888 */
  if (C.zf) goto L_120b5888;
  /* 120b5874 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 120b5876 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 120b5877 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120b5879 jne 0x120b5864 */
  if (!C.zf) goto L_120b5864;
  /* 120b587b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 120b587c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 120b587e je 0x120b5860 */
  if (C.zf) goto L_120b5860;
  /* 120b5880 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 120b5886 je 0x120b5830 */
  if (C.zf) goto L_120b5830;
L_120b5888:;
  /* 120b5888 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 120b588b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b588e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120b5890 jne 0x120b5864 */
  if (!C.zf) goto L_120b5864;
  /* 120b5892 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 120b5894 je 0x120b5860 */
  if (C.zf) goto L_120b5860;
  /* 120b5896 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 120b5899 jne 0x120b5864 */
  if (!C.zf) goto L_120b5864;
  /* 120b589b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 120b589d je 0x120b5860 */
  if (C.zf) goto L_120b5860;
  /* 120b589f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 120b58a2 jmp 0x120b5830 */
  goto L_120b5830;
}

