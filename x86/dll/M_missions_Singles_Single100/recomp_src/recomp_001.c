#include "recomp.h"

/* FUN_10004d40 @ 0x10ed4d40 (120 bytes, 47 insns) */
void f_10ed4d40(void) {
  FTRACE(0x10ed4d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed4d40 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed4d41 mov ebp, esp */
  EBP = (ESP);
  /* 10ed4d43 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed4d46 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed4d47 push esi */
  push32((uint32_t)(ESI));
  /* 10ed4d48 push edi */
  push32((uint32_t)(EDI));
  /* 10ed4d49 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10ed4d4c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10ed4d51 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed4d56 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
L_10ed4d58:;
  /* 10ed4d58 mov esi, esp */
  ESI = (ESP);
  /* 10ed4d5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed4d5d push eax */
  push32((uint32_t)(EAX));
  /* 10ed4d5e call dword ptr [0x10f1258c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1258c))), 0x10ed4d64u);
  /* 10ed4d64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed4d67 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed4d69 call 0x10ed9380 */
  push32(0x10ed4d6eu); f_10ed9380();
  /* 10ed4d6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ed4d70 je 0x10ed4d8c */
  if (C.zf) goto L_10ed4d8c;
  /* 10ed4d72 mov esi, esp */
  ESI = (ESP);
  /* 10ed4d74 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed4d76 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed4d79 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed4d7a call dword ptr [0x10f124fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f124fc))), 0x10ed4d80u);
  /* 10ed4d80 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed4d83 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed4d85 call 0x10ed9380 */
  push32(0x10ed4d8au); f_10ed9380();
  /* 10ed4d8a jmp 0x10ed4d58 */
  goto L_10ed4d58;
L_10ed4d8c:;
  /* 10ed4d8c mov esi, esp */
  ESI = (ESP);
  /* 10ed4d8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed4d91 push edx */
  push32((uint32_t)(EDX));
  /* 10ed4d92 call dword ptr [0x10f1258c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1258c))), 0x10ed4d98u);
  /* 10ed4d98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed4d9b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed4d9d call 0x10ed9380 */
  push32(0x10ed4da2u); f_10ed9380();
  /* 10ed4da2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10ed4da4 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed4da6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10ed4da7 pop edi */
  EDI = (pop32());
  /* 10ed4da8 pop esi */
  ESI = (pop32());
  /* 10ed4da9 pop ebx */
  EBX = (pop32());
  /* 10ed4daa add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed4dad cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed4daf call 0x10ed9380 */
  push32(0x10ed4db4u); f_10ed9380();
  /* 10ed4db4 mov esp, ebp */
  ESP = (EBP);
  /* 10ed4db6 pop ebp */
  EBP = (pop32());
  /* 10ed4db7 ret  */
  ESPCHK(0x10ed4d40u, _esp0);
  ESP += 4; return;
}

/* FUN_10004de0 @ 0x10ed4de0 (77 bytes, 35 insns) */
void f_10ed4de0(void) {
  FTRACE(0x10ed4de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed4de0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed4de1 mov ebp, esp */
  EBP = (ESP);
  /* 10ed4de3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed4de6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed4de7 push esi */
  push32((uint32_t)(ESI));
  /* 10ed4de8 push edi */
  push32((uint32_t)(EDI));
  /* 10ed4de9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10ed4dec mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10ed4df1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed4df6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed4df8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed4dfb cmp eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed4dfe jge 0x10ed4e02 */
  if ((C.sf==C.of)) goto L_10ed4e02;
  /* 10ed4e00 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_10ed4e02:;
  /* 10ed4e02 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ed4e05 cmp ebx, 0 */
  { uint32_t _a=(EBX),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed4e08 jge 0x10ed4e0c */
  if ((C.sf==C.of)) goto L_10ed4e0c;
  /* 10ed4e0a neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
L_10ed4e0c:;
  /* 10ed4e0c mov ecx, eax */
  ECX = (EAX);
  /* 10ed4e0e cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed4e10 ja 0x10ed4e14 */
  if ((!C.cf&&!C.zf)) goto L_10ed4e14;
  /* 10ed4e12 mov ecx, ebx */
  ECX = (EBX);
L_10ed4e14:;
  /* 10ed4e14 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed4e16 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed4e18 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 10ed4e1a mov eax, ecx */
  EAX = (ECX);
  /* 10ed4e1c pop edi */
  EDI = (pop32());
  /* 10ed4e1d pop esi */
  ESI = (pop32());
  /* 10ed4e1e pop ebx */
  EBX = (pop32());
  /* 10ed4e1f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed4e22 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed4e24 call 0x10ed9380 */
  push32(0x10ed4e29u); f_10ed9380();
  /* 10ed4e29 mov esp, ebp */
  ESP = (EBP);
  /* 10ed4e2b pop ebp */
  EBP = (pop32());
  /* 10ed4e2c ret  */
  ESPCHK(0x10ed4de0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004e40 @ 0x10ed4e40 (70 bytes, 30 insns) */
void f_10ed4e40(void) {
  FTRACE(0x10ed4e40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed4e40 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed4e41 mov ebp, esp */
  EBP = (ESP);
  /* 10ed4e43 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed4e46 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed4e47 push esi */
  push32((uint32_t)(ESI));
  /* 10ed4e48 push edi */
  push32((uint32_t)(EDI));
  /* 10ed4e49 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed4e4a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed4e4d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed4e52 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed4e57 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed4e59 pop ecx */
  ECX = (pop32());
  /* 10ed4e5a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed4e5d mov esi, esp */
  ESI = (ESP);
  /* 10ed4e5f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed4e61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed4e64 push eax */
  push32((uint32_t)(EAX));
  /* 10ed4e65 call dword ptr [0x10f12564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12564))), 0x10ed4e6bu);
  /* 10ed4e6b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed4e6e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed4e70 call 0x10ed9380 */
  push32(0x10ed4e75u); f_10ed9380();
  /* 10ed4e75 pop edi */
  EDI = (pop32());
  /* 10ed4e76 pop esi */
  ESI = (pop32());
  /* 10ed4e77 pop ebx */
  EBX = (pop32());
  /* 10ed4e78 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed4e7b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed4e7d call 0x10ed9380 */
  push32(0x10ed4e82u); f_10ed9380();
  /* 10ed4e82 mov esp, ebp */
  ESP = (EBP);
  /* 10ed4e84 pop ebp */
  EBP = (pop32());
  /* 10ed4e85 ret  */
  ESPCHK(0x10ed4e40u, _esp0);
  ESP += 4; return;
}

/* FUN_10004ea0 @ 0x10ed4ea0 (79 bytes, 32 insns) */
void f_10ed4ea0(void) {
  FTRACE(0x10ed4ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed4ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed4ea1 mov ebp, esp */
  EBP = (ESP);
  /* 10ed4ea3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed4ea6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed4ea7 push esi */
  push32((uint32_t)(ESI));
  /* 10ed4ea8 push edi */
  push32((uint32_t)(EDI));
  /* 10ed4ea9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed4eaa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed4ead mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed4eb2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed4eb7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed4eb9 pop ecx */
  ECX = (pop32());
  /* 10ed4eba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed4ebd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed4ec0 call 0x10ed1195 */
  push32(0x10ed4ec5u); f_10ed1195();
  /* 10ed4ec5 mov esi, esp */
  ESI = (ESP);
  /* 10ed4ec7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed4eca mov cl, byte ptr [eax + 0x10] */
  CL = (r8((uint32_t)(EAX + 0x10)));
  /* 10ed4ecd push ecx */
  push32((uint32_t)(ECX));
  /* 10ed4ece call dword ptr [0x10f124f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f124f8))), 0x10ed4ed4u);
  /* 10ed4ed4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed4ed7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed4ed9 call 0x10ed9380 */
  push32(0x10ed4edeu); f_10ed9380();
  /* 10ed4ede pop edi */
  EDI = (pop32());
  /* 10ed4edf pop esi */
  ESI = (pop32());
  /* 10ed4ee0 pop ebx */
  EBX = (pop32());
  /* 10ed4ee1 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed4ee4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed4ee6 call 0x10ed9380 */
  push32(0x10ed4eebu); f_10ed9380();
  /* 10ed4eeb mov esp, ebp */
  ESP = (EBP);
  /* 10ed4eed pop ebp */
  EBP = (pop32());
  /* 10ed4eee ret  */
  ESPCHK(0x10ed4ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f10 @ 0x10ed4f10 (68 bytes, 29 insns) */
void f_10ed4f10(void) {
  FTRACE(0x10ed4f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed4f10 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed4f11 mov ebp, esp */
  EBP = (ESP);
  /* 10ed4f13 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed4f16 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed4f17 push esi */
  push32((uint32_t)(ESI));
  /* 10ed4f18 push edi */
  push32((uint32_t)(EDI));
  /* 10ed4f19 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed4f1a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed4f1d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed4f22 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed4f27 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed4f29 pop ecx */
  ECX = (pop32());
  /* 10ed4f2a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed4f2d mov esi, esp */
  ESI = (ESP);
  /* 10ed4f2f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed4f32 push eax */
  push32((uint32_t)(EAX));
  /* 10ed4f33 call dword ptr [0x10f1258c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1258c))), 0x10ed4f39u);
  /* 10ed4f39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed4f3c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed4f3e call 0x10ed9380 */
  push32(0x10ed4f43u); f_10ed9380();
  /* 10ed4f43 pop edi */
  EDI = (pop32());
  /* 10ed4f44 pop esi */
  ESI = (pop32());
  /* 10ed4f45 pop ebx */
  EBX = (pop32());
  /* 10ed4f46 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed4f49 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed4f4b call 0x10ed9380 */
  push32(0x10ed4f50u); f_10ed9380();
  /* 10ed4f50 mov esp, ebp */
  ESP = (EBP);
  /* 10ed4f52 pop ebp */
  EBP = (pop32());
  /* 10ed4f53 ret  */
  ESPCHK(0x10ed4f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10004f70 @ 0x10ed4f70 (69 bytes, 29 insns) */
void f_10ed4f70(void) {
  FTRACE(0x10ed4f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed4f70 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed4f71 mov ebp, esp */
  EBP = (ESP);
  /* 10ed4f73 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed4f76 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed4f77 push esi */
  push32((uint32_t)(ESI));
  /* 10ed4f78 push edi */
  push32((uint32_t)(EDI));
  /* 10ed4f79 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed4f7a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 10ed4f7d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 10ed4f82 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed4f87 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed4f89 pop ecx */
  ECX = (pop32());
  /* 10ed4f8a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed4f8d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ed4f91 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed4f94 call 0x10ed119a */
  push32(0x10ed4f99u); f_10ed119a();
  /* 10ed4f99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ed4f9b jle 0x10ed4fa1 */
  if ((C.zf||C.sf!=C.of)) goto L_10ed4fa1;
  /* 10ed4f9d mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_10ed4fa1:;
  /* 10ed4fa1 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10ed4fa4 pop edi */
  EDI = (pop32());
  /* 10ed4fa5 pop esi */
  ESI = (pop32());
  /* 10ed4fa6 pop ebx */
  EBX = (pop32());
  /* 10ed4fa7 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed4faa cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed4fac call 0x10ed9380 */
  push32(0x10ed4fb1u); f_10ed9380();
  /* 10ed4fb1 mov esp, ebp */
  ESP = (EBP);
  /* 10ed4fb3 pop ebp */
  EBP = (pop32());
  /* 10ed4fb4 ret  */
  ESPCHK(0x10ed4f70u, _esp0);
  ESP += 4; return;
}

/* FUN_10004fd0 @ 0x10ed4fd0 (39 bytes, 20 insns) */
void f_10ed4fd0(void) {
  FTRACE(0x10ed4fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed4fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed4fd1 mov ebp, esp */
  EBP = (ESP);
  /* 10ed4fd3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed4fd6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed4fd7 push esi */
  push32((uint32_t)(ESI));
  /* 10ed4fd8 push edi */
  push32((uint32_t)(EDI));
  /* 10ed4fd9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed4fda lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed4fdd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed4fe2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed4fe7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed4fe9 pop ecx */
  ECX = (pop32());
  /* 10ed4fea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed4fed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed4ff0 pop edi */
  EDI = (pop32());
  /* 10ed4ff1 pop esi */
  ESI = (pop32());
  /* 10ed4ff2 pop ebx */
  EBX = (pop32());
  /* 10ed4ff3 mov esp, ebp */
  ESP = (EBP);
  /* 10ed4ff5 pop ebp */
  EBP = (pop32());
  /* 10ed4ff6 ret  */
  ESPCHK(0x10ed4fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005000 @ 0x10ed5000 (71 bytes, 30 insns) */
void f_10ed5000(void) {
  FTRACE(0x10ed5000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed5000 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed5001 mov ebp, esp */
  EBP = (ESP);
  /* 10ed5003 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed5006 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed5007 push esi */
  push32((uint32_t)(ESI));
  /* 10ed5008 push edi */
  push32((uint32_t)(EDI));
  /* 10ed5009 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed500a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed500d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed5012 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed5017 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed5019 pop ecx */
  ECX = (pop32());
  /* 10ed501a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed501d mov esi, esp */
  ESI = (ESP);
  /* 10ed501f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5022 push eax */
  push32((uint32_t)(EAX));
  /* 10ed5023 call dword ptr [0x10f12580] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12580))), 0x10ed5029u);
  /* 10ed5029 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed502c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed502e call 0x10ed9380 */
  push32(0x10ed5033u); f_10ed9380();
  /* 10ed5033 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5036 pop edi */
  EDI = (pop32());
  /* 10ed5037 pop esi */
  ESI = (pop32());
  /* 10ed5038 pop ebx */
  EBX = (pop32());
  /* 10ed5039 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed503c cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed503e call 0x10ed9380 */
  push32(0x10ed5043u); f_10ed9380();
  /* 10ed5043 mov esp, ebp */
  ESP = (EBP);
  /* 10ed5045 pop ebp */
  EBP = (pop32());
  /* 10ed5046 ret  */
  ESPCHK(0x10ed5000u, _esp0);
  ESP += 4; return;
}

/* FUN_10005060 @ 0x10ed5060 (47 bytes, 22 insns) */
void f_10ed5060(void) {
  FTRACE(0x10ed5060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed5060 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed5061 mov ebp, esp */
  EBP = (ESP);
  /* 10ed5063 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed5066 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed5067 push esi */
  push32((uint32_t)(ESI));
  /* 10ed5068 push edi */
  push32((uint32_t)(EDI));
  /* 10ed5069 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed506a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed506d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed5072 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed5077 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed5079 pop ecx */
  ECX = (pop32());
  /* 10ed507a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed507d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5080 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed5083 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 10ed5086 pop edi */
  EDI = (pop32());
  /* 10ed5087 pop esi */
  ESI = (pop32());
  /* 10ed5088 pop ebx */
  EBX = (pop32());
  /* 10ed5089 mov esp, ebp */
  ESP = (EBP);
  /* 10ed508b pop ebp */
  EBP = (pop32());
  /* 10ed508c ret 4 */
  ESPCHK(0x10ed5060u, _esp0);
  ESP += 8; return;
}

/* FUN_100050a0 @ 0x10ed50a0 (94 bytes, 39 insns) */
void f_10ed50a0(void) {
  FTRACE(0x10ed50a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed50a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed50a1 mov ebp, esp */
  EBP = (ESP);
  /* 10ed50a3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed50a6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed50a7 push esi */
  push32((uint32_t)(ESI));
  /* 10ed50a8 push edi */
  push32((uint32_t)(EDI));
  /* 10ed50a9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed50aa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed50ad mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed50b2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed50b7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed50b9 pop ecx */
  ECX = (pop32());
  /* 10ed50ba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed50bd mov esi, esp */
  ESI = (ESP);
  /* 10ed50bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed50c2 push eax */
  push32((uint32_t)(EAX));
  /* 10ed50c3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed50c6 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed50c7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed50ca mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10ed50cd push eax */
  push32((uint32_t)(EAX));
  /* 10ed50ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed50d1 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed50d4 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed50d5 call dword ptr [0x10f124f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f124f4))), 0x10ed50dbu);
  /* 10ed50db add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed50de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed50e0 call 0x10ed9380 */
  push32(0x10ed50e5u); f_10ed9380();
  /* 10ed50e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed50e8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed50eb pop edi */
  EDI = (pop32());
  /* 10ed50ec pop esi */
  ESI = (pop32());
  /* 10ed50ed pop ebx */
  EBX = (pop32());
  /* 10ed50ee add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed50f1 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed50f3 call 0x10ed9380 */
  push32(0x10ed50f8u); f_10ed9380();
  /* 10ed50f8 mov esp, ebp */
  ESP = (EBP);
  /* 10ed50fa pop ebp */
  EBP = (pop32());
  /* 10ed50fb ret 4 */
  ESPCHK(0x10ed50a0u, _esp0);
  ESP += 8; return;
}

/* FUN_10005120 @ 0x10ed5120 (221 bytes, 81 insns) */
void f_10ed5120(void) {
  FTRACE(0x10ed5120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed5120 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed5121 mov ebp, esp */
  EBP = (ESP);
  /* 10ed5123 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed5126 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed5127 push esi */
  push32((uint32_t)(ESI));
  /* 10ed5128 push edi */
  push32((uint32_t)(EDI));
  /* 10ed5129 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed512a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 10ed512d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 10ed5132 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed5137 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed5139 pop ecx */
  ECX = (pop32());
  /* 10ed513a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed513d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5140 call 0x10ed119a */
  push32(0x10ed5145u); f_10ed119a();
  /* 10ed5145 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ed5147 jne 0x10ed51ea */
  if (!C.zf) goto L_10ed51ea;
  /* 10ed514d mov esi, esp */
  ESI = (ESP);
  /* 10ed514f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5152 mov cl, byte ptr [eax + 0x10] */
  CL = (r8((uint32_t)(EAX + 0x10)));
  /* 10ed5155 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed5156 call dword ptr [0x10f1253c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1253c))), 0x10ed515cu);
  /* 10ed515c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed515f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed5161 call 0x10ed9380 */
  push32(0x10ed5166u); f_10ed9380();
  /* 10ed5166 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ed516d jmp 0x10ed5178 */
  goto L_10ed5178;
L_10ed516f:;
  /* 10ed516f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ed5172 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed5175 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10ed5178:;
  /* 10ed5178 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ed517b cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed517e jge 0x10ed51cb */
  if ((C.sf==C.of)) goto L_10ed51cb;
  /* 10ed5180 mov esi, esp */
  ESI = (ESP);
  /* 10ed5182 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed5184 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed5187 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed5188 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed518b mov al, byte ptr [edx + 0x10] */
  AL = (r8((uint32_t)(EDX + 0x10)));
  /* 10ed518e push eax */
  push32((uint32_t)(EAX));
  /* 10ed518f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5192 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10ed5195 push edx */
  push32((uint32_t)(EDX));
  /* 10ed5196 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5199 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10ed519c push ecx */
  push32((uint32_t)(ECX));
  /* 10ed519d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed51a0 push edx */
  push32((uint32_t)(EDX));
  /* 10ed51a1 call dword ptr [0x10f12544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12544))), 0x10ed51a7u);
  /* 10ed51a7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed51aa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed51ac call 0x10ed9380 */
  push32(0x10ed51b1u); f_10ed9380();
  /* 10ed51b1 mov esi, esp */
  ESI = (ESP);
  /* 10ed51b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ed51b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed51b8 push eax */
  push32((uint32_t)(EAX));
  /* 10ed51b9 call dword ptr [0x10f12564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12564))), 0x10ed51bfu);
  /* 10ed51bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed51c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed51c4 call 0x10ed9380 */
  push32(0x10ed51c9u); f_10ed9380();
  /* 10ed51c9 jmp 0x10ed516f */
  goto L_10ed516f;
L_10ed51cb:;
  /* 10ed51cb mov esi, esp */
  ESI = (ESP);
  /* 10ed51cd push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed51cf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed51d2 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed51d3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed51d6 mov al, byte ptr [edx + 0x10] */
  AL = (r8((uint32_t)(EDX + 0x10)));
  /* 10ed51d9 push eax */
  push32((uint32_t)(EAX));
  /* 10ed51da call dword ptr [0x10f12588] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12588))), 0x10ed51e0u);
  /* 10ed51e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed51e3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed51e5 call 0x10ed9380 */
  push32(0x10ed51eau); f_10ed9380();
L_10ed51ea:;
  /* 10ed51ea pop edi */
  EDI = (pop32());
  /* 10ed51eb pop esi */
  ESI = (pop32());
  /* 10ed51ec pop ebx */
  EBX = (pop32());
  /* 10ed51ed add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed51f0 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed51f2 call 0x10ed9380 */
  push32(0x10ed51f7u); f_10ed9380();
  /* 10ed51f7 mov esp, ebp */
  ESP = (EBP);
  /* 10ed51f9 pop ebp */
  EBP = (pop32());
  /* 10ed51fa ret 8 */
  ESPCHK(0x10ed5120u, _esp0);
  ESP += 12; return;
}

/* FUN_10005240 @ 0x10ed5240 (47 bytes, 22 insns) */
void f_10ed5240(void) {
  FTRACE(0x10ed5240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed5240 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed5241 mov ebp, esp */
  EBP = (ESP);
  /* 10ed5243 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed5246 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed5247 push esi */
  push32((uint32_t)(ESI));
  /* 10ed5248 push edi */
  push32((uint32_t)(EDI));
  /* 10ed5249 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed524a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed524d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed5252 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed5257 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed5259 pop ecx */
  ECX = (pop32());
  /* 10ed525a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed525d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5260 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed5263 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
  /* 10ed5266 pop edi */
  EDI = (pop32());
  /* 10ed5267 pop esi */
  ESI = (pop32());
  /* 10ed5268 pop ebx */
  EBX = (pop32());
  /* 10ed5269 mov esp, ebp */
  ESP = (EBP);
  /* 10ed526b pop ebp */
  EBP = (pop32());
  /* 10ed526c ret 4 */
  ESPCHK(0x10ed5240u, _esp0);
  ESP += 8; return;
}

/* FUN_10005280 @ 0x10ed5280 (47 bytes, 22 insns) */
void f_10ed5280(void) {
  FTRACE(0x10ed5280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed5280 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed5281 mov ebp, esp */
  EBP = (ESP);
  /* 10ed5283 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed5286 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed5287 push esi */
  push32((uint32_t)(ESI));
  /* 10ed5288 push edi */
  push32((uint32_t)(EDI));
  /* 10ed5289 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed528a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed528d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed5292 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed5297 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed5299 pop ecx */
  ECX = (pop32());
  /* 10ed529a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed529d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed52a0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed52a3 mov dword ptr [eax + 0x1c], ecx */
  w32((uint32_t)(EAX + 0x1c), (ECX));
  /* 10ed52a6 pop edi */
  EDI = (pop32());
  /* 10ed52a7 pop esi */
  ESI = (pop32());
  /* 10ed52a8 pop ebx */
  EBX = (pop32());
  /* 10ed52a9 mov esp, ebp */
  ESP = (EBP);
  /* 10ed52ab pop ebp */
  EBP = (pop32());
  /* 10ed52ac ret 4 */
  ESPCHK(0x10ed5280u, _esp0);
  ESP += 8; return;
}

/* FUN_100052c0 @ 0x10ed52c0 (131 bytes, 48 insns) */
void f_10ed52c0(void) {
  FTRACE(0x10ed52c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed52c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed52c1 mov ebp, esp */
  EBP = (ESP);
  /* 10ed52c3 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed52c6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed52c7 push esi */
  push32((uint32_t)(ESI));
  /* 10ed52c8 push edi */
  push32((uint32_t)(EDI));
  /* 10ed52c9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed52ca lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 10ed52cd mov ecx, 0x13 */
  ECX = (0x13u);
  /* 10ed52d2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed52d7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed52d9 pop ecx */
  ECX = (pop32());
  /* 10ed52da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed52dd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ed52e4 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10ed52eb jmp 0x10ed52f6 */
  goto L_10ed52f6;
L_10ed52ed:;
  /* 10ed52ed mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ed52f0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed52f3 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_10ed52f6:;
  /* 10ed52f6 cmp dword ptr [ebp - 0xc], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed52fa jge 0x10ed5329 */
  if ((C.sf==C.of)) goto L_10ed5329;
  /* 10ed52fc mov esi, esp */
  ESI = (ESP);
  /* 10ed52fe mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 10ed5301 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed5302 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5305 push edx */
  push32((uint32_t)(EDX));
  /* 10ed5306 call dword ptr [0x10f12500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12500))), 0x10ed530cu);
  /* 10ed530c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed530f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed5311 call 0x10ed9380 */
  push32(0x10ed5316u); f_10ed9380();
  /* 10ed5316 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ed5318 jle 0x10ed5327 */
  if ((C.zf||C.sf!=C.of)) goto L_10ed5327;
  /* 10ed531a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ed531d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ed5320 mov dword ptr [ebp - 0xc], 8 */
  w32((uint32_t)(EBP + -0xc), (0x8u));
L_10ed5327:;
  /* 10ed5327 jmp 0x10ed52ed */
  goto L_10ed52ed;
L_10ed5329:;
  /* 10ed5329 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed532c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ed532f mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10ed5332 pop edi */
  EDI = (pop32());
  /* 10ed5333 pop esi */
  ESI = (pop32());
  /* 10ed5334 pop ebx */
  EBX = (pop32());
  /* 10ed5335 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed5338 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed533a call 0x10ed9380 */
  push32(0x10ed533fu); f_10ed9380();
  /* 10ed533f mov esp, ebp */
  ESP = (EBP);
  /* 10ed5341 pop ebp */
  EBP = (pop32());
  /* 10ed5342 ret  */
  ESPCHK(0x10ed52c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005370 @ 0x10ed5370 (47 bytes, 22 insns) */
void f_10ed5370(void) {
  FTRACE(0x10ed5370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed5370 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed5371 mov ebp, esp */
  EBP = (ESP);
  /* 10ed5373 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed5376 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed5377 push esi */
  push32((uint32_t)(ESI));
  /* 10ed5378 push edi */
  push32((uint32_t)(EDI));
  /* 10ed5379 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed537a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed537d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed5382 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed5387 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed5389 pop ecx */
  ECX = (pop32());
  /* 10ed538a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed538d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5390 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed5393 mov dword ptr [eax + 0x10], ecx */
  w32((uint32_t)(EAX + 0x10), (ECX));
  /* 10ed5396 pop edi */
  EDI = (pop32());
  /* 10ed5397 pop esi */
  ESI = (pop32());
  /* 10ed5398 pop ebx */
  EBX = (pop32());
  /* 10ed5399 mov esp, ebp */
  ESP = (EBP);
  /* 10ed539b pop ebp */
  EBP = (pop32());
  /* 10ed539c ret 4 */
  ESPCHK(0x10ed5370u, _esp0);
  ESP += 8; return;
}

/* FUN_100053b0 @ 0x10ed53b0 (65 bytes, 28 insns) */
void f_10ed53b0(void) {
  FTRACE(0x10ed53b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed53b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed53b1 mov ebp, esp */
  EBP = (ESP);
  /* 10ed53b3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed53b6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed53b7 push esi */
  push32((uint32_t)(ESI));
  /* 10ed53b8 push edi */
  push32((uint32_t)(EDI));
  /* 10ed53b9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed53ba lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed53bd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed53c2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed53c7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed53c9 pop ecx */
  ECX = (pop32());
  /* 10ed53ca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed53cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed53d0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed53d3 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
  /* 10ed53d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed53d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ed53dc mov dword ptr [edx + 0x1c], eax */
  w32((uint32_t)(EDX + 0x1c), (EAX));
  /* 10ed53df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed53e2 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ed53e5 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 10ed53e8 pop edi */
  EDI = (pop32());
  /* 10ed53e9 pop esi */
  ESI = (pop32());
  /* 10ed53ea pop ebx */
  EBX = (pop32());
  /* 10ed53eb mov esp, ebp */
  ESP = (EBP);
  /* 10ed53ed pop ebp */
  EBP = (pop32());
  /* 10ed53ee ret 0xc */
  ESPCHK(0x10ed53b0u, _esp0);
  ESP += 16; return;
}

/* FUN_10005410 @ 0x10ed5410 (166 bytes, 58 insns) */
void f_10ed5410(void) {
  FTRACE(0x10ed5410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed5410 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed5411 mov ebp, esp */
  EBP = (ESP);
  /* 10ed5413 sub esp, 0x70 */
  { uint32_t _a=(ESP),_b=(0x70u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed5416 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed5417 push esi */
  push32((uint32_t)(ESI));
  /* 10ed5418 push edi */
  push32((uint32_t)(EDI));
  /* 10ed5419 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed541a lea edi, [ebp - 0x70] */
  EDI = ((uint32_t)(EBP + -0x70));
  /* 10ed541d mov ecx, 0x1c */
  ECX = (0x1cu);
  /* 10ed5422 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed5427 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed5429 pop ecx */
  ECX = (pop32());
  /* 10ed542a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed542d mov esi, esp */
  ESI = (ESP);
  /* 10ed542f lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 10ed5432 push eax */
  push32((uint32_t)(EAX));
  /* 10ed5433 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed5435 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5438 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed5439 call dword ptr [0x10f12590] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12590))), 0x10ed543fu);
  /* 10ed543f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed5442 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed5444 call 0x10ed9380 */
  push32(0x10ed5449u); f_10ed9380();
  /* 10ed5449 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ed544c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ed5452 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed5455 mov eax, dword ptr [ebp - 0x2a] */
  EAX = (r32((uint32_t)(EBP + -0x2a)));
  /* 10ed5458 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ed545d cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed545f jge 0x10ed546d */
  if ((C.sf==C.of)) goto L_10ed546d;
  /* 10ed5461 mov cx, word ptr [ebp - 0x2c] */
  CX = (r16((uint32_t)(EBP + -0x2c)));
  /* 10ed5465 add cx, word ptr [ebp + 8] */
  { uint32_t _a=(CX),_b=(r16((uint32_t)(EBP + 0x8))),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 10ed5469 mov word ptr [ebp - 0x2c], cx */
  w16((uint32_t)(EBP + -0x2c), (CX));
L_10ed546d:;
  /* 10ed546d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ed5470 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ed5476 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed5479 mov eax, dword ptr [ebp - 0x2a] */
  EAX = (r32((uint32_t)(EBP + -0x2a)));
  /* 10ed547c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ed5481 cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed5483 jl 0x10ed548d */
  if ((C.sf!=C.of)) goto L_10ed548d;
  /* 10ed5485 mov cx, word ptr [ebp - 0x2a] */
  CX = (r16((uint32_t)(EBP + -0x2a)));
  /* 10ed5489 mov word ptr [ebp - 0x2c], cx */
  w16((uint32_t)(EBP + -0x2c), (CX));
L_10ed548d:;
  /* 10ed548d mov esi, esp */
  ESI = (ESP);
  /* 10ed548f lea edx, [ebp - 0x30] */
  EDX = ((uint32_t)(EBP + -0x30));
  /* 10ed5492 push edx */
  push32((uint32_t)(EDX));
  /* 10ed5493 call dword ptr [0x10f124f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f124f0))), 0x10ed5499u);
  /* 10ed5499 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed549c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed549e call 0x10ed9380 */
  push32(0x10ed54a3u); f_10ed9380();
  /* 10ed54a3 pop edi */
  EDI = (pop32());
  /* 10ed54a4 pop esi */
  ESI = (pop32());
  /* 10ed54a5 pop ebx */
  EBX = (pop32());
  /* 10ed54a6 add esp, 0x70 */
  { uint32_t _a=(ESP),_b=(0x70u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed54a9 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed54ab call 0x10ed9380 */
  push32(0x10ed54b0u); f_10ed9380();
  /* 10ed54b0 mov esp, ebp */
  ESP = (EBP);
  /* 10ed54b2 pop ebp */
  EBP = (pop32());
  /* 10ed54b3 ret 4 */
  ESPCHK(0x10ed5410u, _esp0);
  ESP += 8; return;
}

/* FUN_100054e0 @ 0x10ed54e0 (114 bytes, 42 insns) */
void f_10ed54e0(void) {
  FTRACE(0x10ed54e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed54e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed54e1 mov ebp, esp */
  EBP = (ESP);
  /* 10ed54e3 sub esp, 0x78 */
  { uint32_t _a=(ESP),_b=(0x78u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed54e6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed54e7 push esi */
  push32((uint32_t)(ESI));
  /* 10ed54e8 push edi */
  push32((uint32_t)(EDI));
  /* 10ed54e9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed54ea lea edi, [ebp - 0x78] */
  EDI = ((uint32_t)(EBP + -0x78));
  /* 10ed54ed mov ecx, 0x1e */
  ECX = (0x1eu);
  /* 10ed54f2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed54f7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed54f9 pop ecx */
  ECX = (pop32());
  /* 10ed54fa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed54fd mov esi, esp */
  ESI = (ESP);
  /* 10ed54ff lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 10ed5502 push eax */
  push32((uint32_t)(EAX));
  /* 10ed5503 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed5505 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5508 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed5509 call dword ptr [0x10f12590] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12590))), 0x10ed550fu);
  /* 10ed550f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed5512 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed5514 call 0x10ed9380 */
  push32(0x10ed5519u); f_10ed9380();
  /* 10ed5519 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10ed551c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 10ed5522 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 10ed5525 fild dword ptr [ebp - 0x34] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + -0x34)));
  /* 10ed5528 mov eax, dword ptr [ebp - 0x2a] */
  EAX = (r32((uint32_t)(EBP + -0x2a)));
  /* 10ed552b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ed5530 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 10ed5533 fidiv dword ptr [ebp - 0x38] */
  FPU_ST(0) = FPU_ST(0) / ((double)(int32_t)r32((uint32_t)(EBP + -0x38)));
  /* 10ed5536 fmul dword ptr [0x10f09050] */
  FPU_ST(0) = FPU_ST(0) * ((double)rf32((uint32_t)(0x10f09050)));
  /* 10ed553c call 0x10ed966c */
  push32(0x10ed5541u); f_10ed966c();
  /* 10ed5541 pop edi */
  EDI = (pop32());
  /* 10ed5542 pop esi */
  ESI = (pop32());
  /* 10ed5543 pop ebx */
  EBX = (pop32());
  /* 10ed5544 add esp, 0x78 */
  { uint32_t _a=(ESP),_b=(0x78u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed5547 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed5549 call 0x10ed9380 */
  push32(0x10ed554eu); f_10ed9380();
  /* 10ed554e mov esp, ebp */
  ESP = (EBP);
  /* 10ed5550 pop ebp */
  EBP = (pop32());
  /* 10ed5551 ret  */
  ESPCHK(0x10ed54e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005570 @ 0x10ed5570 (94 bytes, 37 insns) */
void f_10ed5570(void) {
  FTRACE(0x10ed5570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed5570 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed5571 mov ebp, esp */
  EBP = (ESP);
  /* 10ed5573 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed5576 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed5577 push esi */
  push32((uint32_t)(ESI));
  /* 10ed5578 push edi */
  push32((uint32_t)(EDI));
  /* 10ed5579 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed557a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed557d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed5582 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed5587 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed5589 pop ecx */
  ECX = (pop32());
  /* 10ed558a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed558d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5590 call 0x10ed1195 */
  push32(0x10ed5595u); f_10ed1195();
  /* 10ed5595 mov esi, esp */
  ESI = (ESP);
  /* 10ed5597 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 10ed559a push eax */
  push32((uint32_t)(EAX));
  /* 10ed559b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed559e mov dl, byte ptr [ecx + 0x10] */
  DL = (r8((uint32_t)(ECX + 0x10)));
  /* 10ed55a1 push edx */
  push32((uint32_t)(EDX));
  /* 10ed55a2 call dword ptr [0x10f124ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f124ec))), 0x10ed55a8u);
  /* 10ed55a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed55ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed55ad call 0x10ed9380 */
  push32(0x10ed55b2u); f_10ed9380();
  /* 10ed55b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed55b5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed55b8 mov dword ptr [eax + 0x10], ecx */
  w32((uint32_t)(EAX + 0x10), (ECX));
  /* 10ed55bb pop edi */
  EDI = (pop32());
  /* 10ed55bc pop esi */
  ESI = (pop32());
  /* 10ed55bd pop ebx */
  EBX = (pop32());
  /* 10ed55be add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed55c1 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed55c3 call 0x10ed9380 */
  push32(0x10ed55c8u); f_10ed9380();
  /* 10ed55c8 mov esp, ebp */
  ESP = (EBP);
  /* 10ed55ca pop ebp */
  EBP = (pop32());
  /* 10ed55cb ret 4 */
  ESPCHK(0x10ed5570u, _esp0);
  ESP += 8; return;
}

/* FUN_100055f0 @ 0x10ed55f0 (39 bytes, 20 insns) */
void f_10ed55f0(void) {
  FTRACE(0x10ed55f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed55f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed55f1 mov ebp, esp */
  EBP = (ESP);
  /* 10ed55f3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed55f6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed55f7 push esi */
  push32((uint32_t)(ESI));
  /* 10ed55f8 push edi */
  push32((uint32_t)(EDI));
  /* 10ed55f9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed55fa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed55fd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed5602 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed5607 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed5609 pop ecx */
  ECX = (pop32());
  /* 10ed560a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed560d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5610 pop edi */
  EDI = (pop32());
  /* 10ed5611 pop esi */
  ESI = (pop32());
  /* 10ed5612 pop ebx */
  EBX = (pop32());
  /* 10ed5613 mov esp, ebp */
  ESP = (EBP);
  /* 10ed5615 pop ebp */
  EBP = (pop32());
  /* 10ed5616 ret  */
  ESPCHK(0x10ed55f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005620 @ 0x10ed5620 (98 bytes, 39 insns) */
void f_10ed5620(void) {
  FTRACE(0x10ed5620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed5620 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed5621 mov ebp, esp */
  EBP = (ESP);
  /* 10ed5623 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed5626 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed5627 push esi */
  push32((uint32_t)(ESI));
  /* 10ed5628 push edi */
  push32((uint32_t)(EDI));
  /* 10ed5629 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed562a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed562d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed5632 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed5637 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed5639 pop ecx */
  ECX = (pop32());
  /* 10ed563a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed563d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5640 call 0x10ed1195 */
  push32(0x10ed5645u); f_10ed1195();
  /* 10ed5645 mov esi, esp */
  ESI = (ESP);
  /* 10ed5647 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed5649 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed564b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed564e push eax */
  push32((uint32_t)(EAX));
  /* 10ed564f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5652 mov dl, byte ptr [ecx + 0x10] */
  DL = (r8((uint32_t)(ECX + 0x10)));
  /* 10ed5655 push edx */
  push32((uint32_t)(EDX));
  /* 10ed5656 call dword ptr [0x10f12574] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12574))), 0x10ed565cu);
  /* 10ed565c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed565f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed5661 call 0x10ed9380 */
  push32(0x10ed5666u); f_10ed9380();
  /* 10ed5666 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5669 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed566c mov dword ptr [eax + 0x20], ecx */
  w32((uint32_t)(EAX + 0x20), (ECX));
  /* 10ed566f pop edi */
  EDI = (pop32());
  /* 10ed5670 pop esi */
  ESI = (pop32());
  /* 10ed5671 pop ebx */
  EBX = (pop32());
  /* 10ed5672 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed5675 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed5677 call 0x10ed9380 */
  push32(0x10ed567cu); f_10ed9380();
  /* 10ed567c mov esp, ebp */
  ESP = (EBP);
  /* 10ed567e pop ebp */
  EBP = (pop32());
  /* 10ed567f ret 4 */
  ESPCHK(0x10ed5620u, _esp0);
  ESP += 8; return;
}

/* FUN_100056a0 @ 0x10ed56a0 (87 bytes, 35 insns) */
void f_10ed56a0(void) {
  FTRACE(0x10ed56a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed56a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed56a1 mov ebp, esp */
  EBP = (ESP);
  /* 10ed56a3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed56a6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed56a7 push esi */
  push32((uint32_t)(ESI));
  /* 10ed56a8 push edi */
  push32((uint32_t)(EDI));
  /* 10ed56a9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed56aa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed56ad mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed56b2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed56b7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed56b9 pop ecx */
  ECX = (pop32());
  /* 10ed56ba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed56bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed56c0 call 0x10ed1195 */
  push32(0x10ed56c5u); f_10ed1195();
  /* 10ed56c5 mov esi, esp */
  ESI = (ESP);
  /* 10ed56c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed56c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed56cc push eax */
  push32((uint32_t)(EAX));
  /* 10ed56cd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed56d0 mov dl, byte ptr [ecx + 0x10] */
  DL = (r8((uint32_t)(ECX + 0x10)));
  /* 10ed56d3 push edx */
  push32((uint32_t)(EDX));
  /* 10ed56d4 call dword ptr [0x10f124e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f124e8))), 0x10ed56dau);
  /* 10ed56da add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed56dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed56df call 0x10ed9380 */
  push32(0x10ed56e4u); f_10ed9380();
  /* 10ed56e4 pop edi */
  EDI = (pop32());
  /* 10ed56e5 pop esi */
  ESI = (pop32());
  /* 10ed56e6 pop ebx */
  EBX = (pop32());
  /* 10ed56e7 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed56ea cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed56ec call 0x10ed9380 */
  push32(0x10ed56f1u); f_10ed9380();
  /* 10ed56f1 mov esp, ebp */
  ESP = (EBP);
  /* 10ed56f3 pop ebp */
  EBP = (pop32());
  /* 10ed56f4 ret 4 */
  ESPCHK(0x10ed56a0u, _esp0);
  ESP += 8; return;
}

/* FUN_10005710 @ 0x10ed5710 (90 bytes, 37 insns) */
void f_10ed5710(void) {
  FTRACE(0x10ed5710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed5710 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed5711 mov ebp, esp */
  EBP = (ESP);
  /* 10ed5713 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed5716 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed5717 push esi */
  push32((uint32_t)(ESI));
  /* 10ed5718 push edi */
  push32((uint32_t)(EDI));
  /* 10ed5719 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed571a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 10ed571d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 10ed5722 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed5727 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed5729 pop ecx */
  ECX = (pop32());
  /* 10ed572a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed572d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ed5731 mov esi, esp */
  ESI = (ESP);
  /* 10ed5733 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5736 push eax */
  push32((uint32_t)(EAX));
  /* 10ed5737 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed573a mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 10ed573d push edx */
  push32((uint32_t)(EDX));
  /* 10ed573e call dword ptr [0x10f12578] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12578))), 0x10ed5744u);
  /* 10ed5744 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed5747 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed5749 call 0x10ed9380 */
  push32(0x10ed574eu); f_10ed9380();
  /* 10ed574e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ed5750 jle 0x10ed5756 */
  if ((C.zf||C.sf!=C.of)) goto L_10ed5756;
  /* 10ed5752 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_10ed5756:;
  /* 10ed5756 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10ed5759 pop edi */
  EDI = (pop32());
  /* 10ed575a pop esi */
  ESI = (pop32());
  /* 10ed575b pop ebx */
  EBX = (pop32());
  /* 10ed575c add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed575f cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed5761 call 0x10ed9380 */
  push32(0x10ed5766u); f_10ed9380();
  /* 10ed5766 mov esp, ebp */
  ESP = (EBP);
  /* 10ed5768 pop ebp */
  EBP = (pop32());
  /* 10ed5769 ret  */
  ESPCHK(0x10ed5710u, _esp0);
  ESP += 4; return;
}

/* FUN_10005780 @ 0x10ed5780 (89 bytes, 36 insns) */
void f_10ed5780(void) {
  FTRACE(0x10ed5780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed5780 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed5781 mov ebp, esp */
  EBP = (ESP);
  /* 10ed5783 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed5786 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed5787 push esi */
  push32((uint32_t)(ESI));
  /* 10ed5788 push edi */
  push32((uint32_t)(EDI));
  /* 10ed5789 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed578a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 10ed578d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 10ed5792 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed5797 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed5799 pop ecx */
  ECX = (pop32());
  /* 10ed579a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed579d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ed57a1 mov esi, esp */
  ESI = (ESP);
  /* 10ed57a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed57a6 push eax */
  push32((uint32_t)(EAX));
  /* 10ed57a7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed57aa push ecx */
  push32((uint32_t)(ECX));
  /* 10ed57ab call dword ptr [0x10f12578] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12578))), 0x10ed57b1u);
  /* 10ed57b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed57b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed57b6 call 0x10ed9380 */
  push32(0x10ed57bbu); f_10ed9380();
  /* 10ed57bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ed57bd jle 0x10ed57c3 */
  if ((C.zf||C.sf!=C.of)) goto L_10ed57c3;
  /* 10ed57bf mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_10ed57c3:;
  /* 10ed57c3 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10ed57c6 pop edi */
  EDI = (pop32());
  /* 10ed57c7 pop esi */
  ESI = (pop32());
  /* 10ed57c8 pop ebx */
  EBX = (pop32());
  /* 10ed57c9 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed57cc cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed57ce call 0x10ed9380 */
  push32(0x10ed57d3u); f_10ed9380();
  /* 10ed57d3 mov esp, ebp */
  ESP = (EBP);
  /* 10ed57d5 pop ebp */
  EBP = (pop32());
  /* 10ed57d6 ret 4 */
  ESPCHK(0x10ed5780u, _esp0);
  ESP += 8; return;
}

/* FUN_100057f0 @ 0x10ed57f0 (47 bytes, 22 insns) */
void f_10ed57f0(void) {
  FTRACE(0x10ed57f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed57f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed57f1 mov ebp, esp */
  EBP = (ESP);
  /* 10ed57f3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed57f6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed57f7 push esi */
  push32((uint32_t)(ESI));
  /* 10ed57f8 push edi */
  push32((uint32_t)(EDI));
  /* 10ed57f9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed57fa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed57fd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed5802 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed5807 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed5809 pop ecx */
  ECX = (pop32());
  /* 10ed580a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed580d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5810 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed5813 mov dword ptr [eax + 0x20], ecx */
  w32((uint32_t)(EAX + 0x20), (ECX));
  /* 10ed5816 pop edi */
  EDI = (pop32());
  /* 10ed5817 pop esi */
  ESI = (pop32());
  /* 10ed5818 pop ebx */
  EBX = (pop32());
  /* 10ed5819 mov esp, ebp */
  ESP = (EBP);
  /* 10ed581b pop ebp */
  EBP = (pop32());
  /* 10ed581c ret 4 */
  ESPCHK(0x10ed57f0u, _esp0);
  ESP += 8; return;
}

/* FUN_10005830 @ 0x10ed5830 (81 bytes, 33 insns) */
void f_10ed5830(void) {
  FTRACE(0x10ed5830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed5830 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed5831 mov ebp, esp */
  EBP = (ESP);
  /* 10ed5833 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed5836 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed5837 push esi */
  push32((uint32_t)(ESI));
  /* 10ed5838 push edi */
  push32((uint32_t)(EDI));
  /* 10ed5839 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed583a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed583d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed5842 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed5847 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed5849 pop ecx */
  ECX = (pop32());
  /* 10ed584a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed584d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5850 call 0x10ed1195 */
  push32(0x10ed5855u); f_10ed1195();
  /* 10ed5855 mov esi, esp */
  ESI = (ESP);
  /* 10ed5857 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ed5859 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed585c mov cl, byte ptr [eax + 0x10] */
  CL = (r8((uint32_t)(EAX + 0x10)));
  /* 10ed585f push ecx */
  push32((uint32_t)(ECX));
  /* 10ed5860 call dword ptr [0x10f12568] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12568))), 0x10ed5866u);
  /* 10ed5866 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed5869 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed586b call 0x10ed9380 */
  push32(0x10ed5870u); f_10ed9380();
  /* 10ed5870 pop edi */
  EDI = (pop32());
  /* 10ed5871 pop esi */
  ESI = (pop32());
  /* 10ed5872 pop ebx */
  EBX = (pop32());
  /* 10ed5873 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed5876 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed5878 call 0x10ed9380 */
  push32(0x10ed587du); f_10ed9380();
  /* 10ed587d mov esp, ebp */
  ESP = (EBP);
  /* 10ed587f pop ebp */
  EBP = (pop32());
  /* 10ed5880 ret  */
  ESPCHK(0x10ed5830u, _esp0);
  ESP += 4; return;
}

/* FUN_100058a0 @ 0x10ed58a0 (99 bytes, 38 insns) */
void f_10ed58a0(void) {
  FTRACE(0x10ed58a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed58a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed58a1 mov ebp, esp */
  EBP = (ESP);
  /* 10ed58a3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed58a6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed58a7 push esi */
  push32((uint32_t)(ESI));
  /* 10ed58a8 push edi */
  push32((uint32_t)(EDI));
  /* 10ed58a9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed58aa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed58ad mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed58b2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed58b7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed58b9 pop ecx */
  ECX = (pop32());
  /* 10ed58ba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed58bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed58c0 call 0x10ed1023 */
  push32(0x10ed58c5u); f_10ed1023();
  /* 10ed58c5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ed58ca test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ed58cc je 0x10ed58f2 */
  if (C.zf) goto L_10ed58f2;
  /* 10ed58ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed58d1 call 0x10ed128a */
  push32(0x10ed58d6u); f_10ed128a();
  /* 10ed58d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed58d9 call 0x10ed10a0 */
  push32(0x10ed58deu); f_10ed10a0();
  /* 10ed58de cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed58e1 jge 0x10ed58f2 */
  if ((C.sf==C.of)) goto L_10ed58f2;
  /* 10ed58e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed58e6 mov ecx, dword ptr [eax + 0x20] */
  ECX = (r32((uint32_t)(EAX + 0x20)));
  /* 10ed58e9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed58ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed58ed call 0x10ed1221 */
  push32(0x10ed58f2u); f_10ed1221();
L_10ed58f2:;
  /* 10ed58f2 pop edi */
  EDI = (pop32());
  /* 10ed58f3 pop esi */
  ESI = (pop32());
  /* 10ed58f4 pop ebx */
  EBX = (pop32());
  /* 10ed58f5 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed58f8 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed58fa call 0x10ed9380 */
  push32(0x10ed58ffu); f_10ed9380();
  /* 10ed58ff mov esp, ebp */
  ESP = (EBP);
  /* 10ed5901 pop ebp */
  EBP = (pop32());
  /* 10ed5902 ret  */
  ESPCHK(0x10ed58a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10005920 @ 0x10ed5920 (76 bytes, 32 insns) */
void f_10ed5920(void) {
  FTRACE(0x10ed5920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed5920 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed5921 mov ebp, esp */
  EBP = (ESP);
  /* 10ed5923 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed5926 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed5927 push esi */
  push32((uint32_t)(ESI));
  /* 10ed5928 push edi */
  push32((uint32_t)(EDI));
  /* 10ed5929 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed592a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed592d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed5932 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed5937 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed5939 pop ecx */
  ECX = (pop32());
  /* 10ed593a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed593d mov esi, esp */
  ESI = (ESP);
  /* 10ed593f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed5941 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed5944 push eax */
  push32((uint32_t)(EAX));
  /* 10ed5945 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5948 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed5949 call dword ptr [0x10f12570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12570))), 0x10ed594fu);
  /* 10ed594f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed5952 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed5954 call 0x10ed9380 */
  push32(0x10ed5959u); f_10ed9380();
  /* 10ed5959 pop edi */
  EDI = (pop32());
  /* 10ed595a pop esi */
  ESI = (pop32());
  /* 10ed595b pop ebx */
  EBX = (pop32());
  /* 10ed595c add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed595f cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed5961 call 0x10ed9380 */
  push32(0x10ed5966u); f_10ed9380();
  /* 10ed5966 mov esp, ebp */
  ESP = (EBP);
  /* 10ed5968 pop ebp */
  EBP = (pop32());
  /* 10ed5969 ret 4 */
  ESPCHK(0x10ed5920u, _esp0);
  ESP += 8; return;
}

/* FUN_10005980 @ 0x10ed5980 (95 bytes, 37 insns) */
void f_10ed5980(void) {
  FTRACE(0x10ed5980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed5980 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed5981 mov ebp, esp */
  EBP = (ESP);
  /* 10ed5983 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed5986 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed5987 push esi */
  push32((uint32_t)(ESI));
  /* 10ed5988 push edi */
  push32((uint32_t)(EDI));
  /* 10ed5989 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed598a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 10ed598d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 10ed5992 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed5997 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed5999 pop ecx */
  ECX = (pop32());
  /* 10ed599a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed599d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ed59a1 mov esi, esp */
  ESI = (ESP);
  /* 10ed59a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed59a5 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 10ed59aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed59ad call 0x10ed12da */
  push32(0x10ed59b2u); f_10ed12da();
  /* 10ed59b2 push eax */
  push32((uint32_t)(EAX));
  /* 10ed59b3 call dword ptr [0x10f12560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12560))), 0x10ed59b9u);
  /* 10ed59b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed59bc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed59be call 0x10ed9380 */
  push32(0x10ed59c3u); f_10ed9380();
  /* 10ed59c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ed59c5 jle 0x10ed59cb */
  if ((C.zf||C.sf!=C.of)) goto L_10ed59cb;
  /* 10ed59c7 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_10ed59cb:;
  /* 10ed59cb mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10ed59ce pop edi */
  EDI = (pop32());
  /* 10ed59cf pop esi */
  ESI = (pop32());
  /* 10ed59d0 pop ebx */
  EBX = (pop32());
  /* 10ed59d1 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed59d4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed59d6 call 0x10ed9380 */
  push32(0x10ed59dbu); f_10ed9380();
  /* 10ed59db mov esp, ebp */
  ESP = (EBP);
  /* 10ed59dd pop ebp */
  EBP = (pop32());
  /* 10ed59de ret  */
  ESPCHK(0x10ed5980u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a00 @ 0x10ed5a00 (47 bytes, 22 insns) */
void f_10ed5a00(void) {
  FTRACE(0x10ed5a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed5a00 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed5a01 mov ebp, esp */
  EBP = (ESP);
  /* 10ed5a03 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed5a06 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed5a07 push esi */
  push32((uint32_t)(ESI));
  /* 10ed5a08 push edi */
  push32((uint32_t)(EDI));
  /* 10ed5a09 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed5a0a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed5a0d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed5a12 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed5a17 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed5a19 pop ecx */
  ECX = (pop32());
  /* 10ed5a1a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed5a1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5a20 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed5a23 mov dword ptr [eax + 0x2c], ecx */
  w32((uint32_t)(EAX + 0x2c), (ECX));
  /* 10ed5a26 pop edi */
  EDI = (pop32());
  /* 10ed5a27 pop esi */
  ESI = (pop32());
  /* 10ed5a28 pop ebx */
  EBX = (pop32());
  /* 10ed5a29 mov esp, ebp */
  ESP = (EBP);
  /* 10ed5a2b pop ebp */
  EBP = (pop32());
  /* 10ed5a2c ret 4 */
  ESPCHK(0x10ed5a00u, _esp0);
  ESP += 8; return;
}

/* FUN_10005a40 @ 0x10ed5a40 (64 bytes, 27 insns) */
void f_10ed5a40(void) {
  FTRACE(0x10ed5a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed5a40 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed5a41 mov ebp, esp */
  EBP = (ESP);
  /* 10ed5a43 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed5a46 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed5a47 push esi */
  push32((uint32_t)(ESI));
  /* 10ed5a48 push edi */
  push32((uint32_t)(EDI));
  /* 10ed5a49 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed5a4a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed5a4d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed5a52 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed5a57 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed5a59 pop ecx */
  ECX = (pop32());
  /* 10ed5a5a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed5a5d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5a60 call 0x10ed11ea */
  push32(0x10ed5a65u); f_10ed11ea();
  /* 10ed5a65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5a68 mov byte ptr [eax + 0x2c], 1 */
  w8((uint32_t)(EAX + 0x2c), (0x1u));
  /* 10ed5a6c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5a6f pop edi */
  EDI = (pop32());
  /* 10ed5a70 pop esi */
  ESI = (pop32());
  /* 10ed5a71 pop ebx */
  EBX = (pop32());
  /* 10ed5a72 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed5a75 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed5a77 call 0x10ed9380 */
  push32(0x10ed5a7cu); f_10ed9380();
  /* 10ed5a7c mov esp, ebp */
  ESP = (EBP);
  /* 10ed5a7e pop ebp */
  EBP = (pop32());
  /* 10ed5a7f ret  */
  ESPCHK(0x10ed5a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10005a90 @ 0x10ed5a90 (57 bytes, 25 insns) */
void f_10ed5a90(void) {
  FTRACE(0x10ed5a90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed5a90 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed5a91 mov ebp, esp */
  EBP = (ESP);
  /* 10ed5a93 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed5a96 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed5a97 push esi */
  push32((uint32_t)(ESI));
  /* 10ed5a98 push edi */
  push32((uint32_t)(EDI));
  /* 10ed5a99 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed5a9a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed5a9d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed5aa2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed5aa7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed5aa9 pop ecx */
  ECX = (pop32());
  /* 10ed5aaa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed5aad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5ab0 call 0x10ed1294 */
  push32(0x10ed5ab5u); f_10ed1294();
  /* 10ed5ab5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5ab8 pop edi */
  EDI = (pop32());
  /* 10ed5ab9 pop esi */
  ESI = (pop32());
  /* 10ed5aba pop ebx */
  EBX = (pop32());
  /* 10ed5abb add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed5abe cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed5ac0 call 0x10ed9380 */
  push32(0x10ed5ac5u); f_10ed9380();
  /* 10ed5ac5 mov esp, ebp */
  ESP = (EBP);
  /* 10ed5ac7 pop ebp */
  EBP = (pop32());
  /* 10ed5ac8 ret  */
  ESPCHK(0x10ed5a90u, _esp0);
  ESP += 4; return;
}

/* FUN_10005ae0 @ 0x10ed5ae0 (56 bytes, 25 insns) */
void f_10ed5ae0(void) {
  FTRACE(0x10ed5ae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed5ae0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed5ae1 mov ebp, esp */
  EBP = (ESP);
  /* 10ed5ae3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed5ae6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed5ae7 push esi */
  push32((uint32_t)(ESI));
  /* 10ed5ae8 push edi */
  push32((uint32_t)(EDI));
  /* 10ed5ae9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed5aea lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed5aed mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed5af2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed5af7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed5af9 pop ecx */
  ECX = (pop32());
  /* 10ed5afa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed5afd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5b00 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed5b03 mov dword ptr [eax + 0x24], ecx */
  w32((uint32_t)(EAX + 0x24), (ECX));
  /* 10ed5b06 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5b09 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ed5b0c mov dword ptr [edx + 0x28], eax */
  w32((uint32_t)(EDX + 0x28), (EAX));
  /* 10ed5b0f pop edi */
  EDI = (pop32());
  /* 10ed5b10 pop esi */
  ESI = (pop32());
  /* 10ed5b11 pop ebx */
  EBX = (pop32());
  /* 10ed5b12 mov esp, ebp */
  ESP = (EBP);
  /* 10ed5b14 pop ebp */
  EBP = (pop32());
  /* 10ed5b15 ret 8 */
  ESPCHK(0x10ed5ae0u, _esp0);
  ESP += 12; return;
}

/* FUN_10005b30 @ 0x10ed5b30 (566 bytes, 177 insns) [1 switch table(s)] */
void f_10ed5b30(void) {
  FTRACE(0x10ed5b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed5b30 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed5b31 mov ebp, esp */
  EBP = (ESP);
  /* 10ed5b33 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed5b36 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed5b37 push esi */
  push32((uint32_t)(ESI));
  /* 10ed5b38 push edi */
  push32((uint32_t)(EDI));
  /* 10ed5b39 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed5b3a lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 10ed5b3d mov ecx, 0x13 */
  ECX = (0x13u);
  /* 10ed5b42 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed5b47 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed5b49 pop ecx */
  ECX = (pop32());
  /* 10ed5b4a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed5b4d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5b50 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ed5b52 mov cl, byte ptr [eax + 0x2c] */
  CL = (r8((uint32_t)(EAX + 0x2c)));
  /* 10ed5b55 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ed5b57 je 0x10ed5d55 */
  if (C.zf) goto L_10ed5d55;
  /* 10ed5b5d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5b60 call 0x10ed1023 */
  push32(0x10ed5b65u); f_10ed1023();
  /* 10ed5b65 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ed5b6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ed5b6c je 0x10ed5d55 */
  if (C.zf) goto L_10ed5d55;
  /* 10ed5b72 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5b75 cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed5b79 je 0x10ed5d55 */
  if (C.zf) goto L_10ed5d55;
  /* 10ed5b7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5b82 cmp dword ptr [eax + 0x10], 6 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed5b86 je 0x10ed5bcd */
  if (C.zf) goto L_10ed5bcd;
  /* 10ed5b88 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5b8b call 0x10ed10a0 */
  push32(0x10ed5b90u); f_10ed10a0();
  /* 10ed5b90 cmp eax, 0x32 */
  { uint32_t _a=(EAX),_b=(0x32u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed5b93 jge 0x10ed5b9d */
  if ((C.sf==C.of)) goto L_10ed5b9d;
  /* 10ed5b95 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5b98 call 0x10ed12a8 */
  push32(0x10ed5b9du); f_10ed12a8();
L_10ed5b9d:;
  /* 10ed5b9d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5ba0 call 0x10ed12ad */
  push32(0x10ed5ba5u); f_10ed12ad();
  /* 10ed5ba5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ed5baa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ed5bac je 0x10ed5bc8 */
  if (C.zf) goto L_10ed5bc8;
  /* 10ed5bae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5bb1 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed5bb2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5bb5 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10ed5bb8 push eax */
  push32((uint32_t)(EAX));
  /* 10ed5bb9 call 0x10ed12d5 */
  push32(0x10ed5bbeu); f_10ed12d5();
  /* 10ed5bbe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed5bc1 mov ecx, eax */
  ECX = (EAX);
  /* 10ed5bc3 call 0x10ed11e0 */
  push32(0x10ed5bc8u); f_10ed11e0();
L_10ed5bc8:;
  /* 10ed5bc8 jmp 0x10ed5d55 */
  goto L_10ed5d55;
L_10ed5bcd:;
  /* 10ed5bcd mov esi, esp */
  ESI = (ESP);
  /* 10ed5bcf push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed5bd1 push 0x258 */
  push32((uint32_t)(0x258u));
  /* 10ed5bd6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5bd9 call 0x10ed12da */
  push32(0x10ed5bdeu); f_10ed12da();
  /* 10ed5bde push eax */
  push32((uint32_t)(EAX));
  /* 10ed5bdf call dword ptr [0x10f12560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12560))), 0x10ed5be5u);
  /* 10ed5be5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed5be8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed5bea call 0x10ed9380 */
  push32(0x10ed5befu); f_10ed9380();
  /* 10ed5bef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ed5bf1 jle 0x10ed5d55 */
  if ((C.zf||C.sf!=C.of)) goto L_10ed5d55;
  /* 10ed5bf7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5bfa cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed5bfe je 0x10ed5d55 */
  if (C.zf) goto L_10ed5d55;
  /* 10ed5c04 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5c07 mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 10ed5c0a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ed5c0d cmp dword ptr [ebp - 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed5c11 ja 0x10ed5ce2 */
  if ((!C.cf&&!C.zf)) goto L_10ed5ce2;
  /* 10ed5c17 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ed5c1a jmp dword ptr [ecx*4 + 0x10ed5d66] */
  switch (ECX) {
    case 0: goto L_10ed5c21;
    case 1: goto L_10ed5c44;
    case 2: goto L_10ed5c64;
    case 3: goto L_10ed5c84;
    case 4: goto L_10ed5ca4;
    case 5: goto L_10ed5cc4;
    default: x86_unimpl("switch@0x10ed5c1a out of table"); return;
  }
L_10ed5c21:;
  /* 10ed5c21 mov esi, esp */
  ESI = (ESP);
  /* 10ed5c23 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5c26 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 10ed5c29 push eax */
  push32((uint32_t)(EAX));
  /* 10ed5c2a push 0x10f0916c */
  push32((uint32_t)(0x10f0916cu));
  /* 10ed5c2f call dword ptr [0x10f124dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f124dc))), 0x10ed5c35u);
  /* 10ed5c35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed5c38 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed5c3a call 0x10ed9380 */
  push32(0x10ed5c3fu); f_10ed9380();
  /* 10ed5c3f jmp 0x10ed5ce2 */
  goto L_10ed5ce2;
L_10ed5c44:;
  /* 10ed5c44 mov esi, esp */
  ESI = (ESP);
  /* 10ed5c46 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5c49 mov edx, dword ptr [ecx + 0x28] */
  EDX = (r32((uint32_t)(ECX + 0x28)));
  /* 10ed5c4c push edx */
  push32((uint32_t)(EDX));
  /* 10ed5c4d push 0x10f09160 */
  push32((uint32_t)(0x10f09160u));
  /* 10ed5c52 call dword ptr [0x10f124dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f124dc))), 0x10ed5c58u);
  /* 10ed5c58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed5c5b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed5c5d call 0x10ed9380 */
  push32(0x10ed5c62u); f_10ed9380();
  /* 10ed5c62 jmp 0x10ed5ce2 */
  goto L_10ed5ce2;
L_10ed5c64:;
  /* 10ed5c64 mov esi, esp */
  ESI = (ESP);
  /* 10ed5c66 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5c69 mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 10ed5c6c push ecx */
  push32((uint32_t)(ECX));
  /* 10ed5c6d push 0x10f09154 */
  push32((uint32_t)(0x10f09154u));
  /* 10ed5c72 call dword ptr [0x10f124dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f124dc))), 0x10ed5c78u);
  /* 10ed5c78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed5c7b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed5c7d call 0x10ed9380 */
  push32(0x10ed5c82u); f_10ed9380();
  /* 10ed5c82 jmp 0x10ed5ce2 */
  goto L_10ed5ce2;
L_10ed5c84:;
  /* 10ed5c84 mov esi, esp */
  ESI = (ESP);
  /* 10ed5c86 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5c89 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 10ed5c8c push eax */
  push32((uint32_t)(EAX));
  /* 10ed5c8d push 0x10f09148 */
  push32((uint32_t)(0x10f09148u));
  /* 10ed5c92 call dword ptr [0x10f124dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f124dc))), 0x10ed5c98u);
  /* 10ed5c98 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed5c9b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed5c9d call 0x10ed9380 */
  push32(0x10ed5ca2u); f_10ed9380();
  /* 10ed5ca2 jmp 0x10ed5ce2 */
  goto L_10ed5ce2;
L_10ed5ca4:;
  /* 10ed5ca4 mov esi, esp */
  ESI = (ESP);
  /* 10ed5ca6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5ca9 mov edx, dword ptr [ecx + 0x28] */
  EDX = (r32((uint32_t)(ECX + 0x28)));
  /* 10ed5cac push edx */
  push32((uint32_t)(EDX));
  /* 10ed5cad push 0x10f0913c */
  push32((uint32_t)(0x10f0913cu));
  /* 10ed5cb2 call dword ptr [0x10f124dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f124dc))), 0x10ed5cb8u);
  /* 10ed5cb8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed5cbb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed5cbd call 0x10ed9380 */
  push32(0x10ed5cc2u); f_10ed9380();
  /* 10ed5cc2 jmp 0x10ed5ce2 */
  goto L_10ed5ce2;
L_10ed5cc4:;
  /* 10ed5cc4 mov esi, esp */
  ESI = (ESP);
  /* 10ed5cc6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5cc9 mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 10ed5ccc push ecx */
  push32((uint32_t)(ECX));
  /* 10ed5ccd push 0x10f09130 */
  push32((uint32_t)(0x10f09130u));
  /* 10ed5cd2 call dword ptr [0x10f124dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f124dc))), 0x10ed5cd8u);
  /* 10ed5cd8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed5cdb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed5cdd call 0x10ed9380 */
  push32(0x10ed5ce2u); f_10ed9380();
L_10ed5ce2:;
  /* 10ed5ce2 mov esi, esp */
  ESI = (ESP);
  /* 10ed5ce4 push 0x10f09120 */
  push32((uint32_t)(0x10f09120u));
  /* 10ed5ce9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed5ceb push 0x10f09118 */
  push32((uint32_t)(0x10f09118u));
  /* 10ed5cf0 push 7 */
  push32((uint32_t)(0x7u));
  /* 10ed5cf2 call dword ptr [0x10f124e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f124e0))), 0x10ed5cf8u);
  /* 10ed5cf8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed5cfb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed5cfd call 0x10ed9380 */
  push32(0x10ed5d02u); f_10ed9380();
  /* 10ed5d02 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10ed5d05 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed5d09 je 0x10ed5d13 */
  if (C.zf) goto L_10ed5d13;
  /* 10ed5d0b cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed5d0f je 0x10ed5d1f */
  if (C.zf) goto L_10ed5d1f;
  /* 10ed5d11 jmp 0x10ed5d27 */
  goto L_10ed5d27;
L_10ed5d13:;
  /* 10ed5d13 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed5d15 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5d18 call 0x10ed1122 */
  push32(0x10ed5d1du); f_10ed1122();
  /* 10ed5d1d jmp 0x10ed5d27 */
  goto L_10ed5d27;
L_10ed5d1f:;
  /* 10ed5d1f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5d22 call 0x10ed1154 */
  push32(0x10ed5d27u); f_10ed1154();
L_10ed5d27:;
  /* 10ed5d27 mov esi, esp */
  ESI = (ESP);
  /* 10ed5d29 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5d2c mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 10ed5d2f push eax */
  push32((uint32_t)(EAX));
  /* 10ed5d30 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5d33 mov dl, byte ptr [ecx + 0x24] */
  DL = (r8((uint32_t)(ECX + 0x24)));
  /* 10ed5d36 push edx */
  push32((uint32_t)(EDX));
  /* 10ed5d37 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed5d39 call dword ptr [0x10f124e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f124e4))), 0x10ed5d3fu);
  /* 10ed5d3f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed5d42 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed5d44 call 0x10ed9380 */
  push32(0x10ed5d49u); f_10ed9380();
  /* 10ed5d49 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed5d4b push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed5d4d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5d50 call 0x10ed11c2 */
  push32(0x10ed5d55u); f_10ed11c2();
L_10ed5d55:;
  /* 10ed5d55 pop edi */
  EDI = (pop32());
  /* 10ed5d56 pop esi */
  ESI = (pop32());
  /* 10ed5d57 pop ebx */
  EBX = (pop32());
  /* 10ed5d58 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed5d5b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed5d5d call 0x10ed9380 */
  push32(0x10ed5d62u); f_10ed9380();
  /* 10ed5d62 mov esp, ebp */
  ESP = (EBP);
  /* 10ed5d64 pop ebp */
  EBP = (pop32());
  /* 10ed5d65 ret  */
  ESPCHK(0x10ed5b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10005e20 @ 0x10ed5e20 (112 bytes, 43 insns) */
void f_10ed5e20(void) {
  FTRACE(0x10ed5e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed5e20 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed5e21 mov ebp, esp */
  EBP = (ESP);
  /* 10ed5e23 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed5e26 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed5e27 push esi */
  push32((uint32_t)(ESI));
  /* 10ed5e28 push edi */
  push32((uint32_t)(EDI));
  /* 10ed5e29 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed5e2a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed5e2d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed5e32 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed5e37 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed5e39 pop ecx */
  ECX = (pop32());
  /* 10ed5e3a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed5e3d push 6 */
  push32((uint32_t)(0x6u));
  /* 10ed5e3f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5e42 call 0x10ed1122 */
  push32(0x10ed5e47u); f_10ed1122();
  /* 10ed5e47 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5e4a call 0x10ed1195 */
  push32(0x10ed5e4fu); f_10ed1195();
  /* 10ed5e4f mov esi, esp */
  ESI = (ESP);
  /* 10ed5e51 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed5e53 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed5e55 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10ed5e57 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5e5a call 0x10ed12da */
  push32(0x10ed5e5fu); f_10ed12da();
  /* 10ed5e5f push eax */
  push32((uint32_t)(EAX));
  /* 10ed5e60 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5e63 mov cl, byte ptr [eax + 0x10] */
  CL = (r8((uint32_t)(EAX + 0x10)));
  /* 10ed5e66 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed5e67 call dword ptr [0x10f12574] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12574))), 0x10ed5e6du);
  /* 10ed5e6d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed5e70 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed5e72 call 0x10ed9380 */
  push32(0x10ed5e77u); f_10ed9380();
  /* 10ed5e77 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5e7a call 0x10ed12cb */
  push32(0x10ed5e7fu); f_10ed12cb();
  /* 10ed5e7f pop edi */
  EDI = (pop32());
  /* 10ed5e80 pop esi */
  ESI = (pop32());
  /* 10ed5e81 pop ebx */
  EBX = (pop32());
  /* 10ed5e82 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed5e85 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed5e87 call 0x10ed9380 */
  push32(0x10ed5e8cu); f_10ed9380();
  /* 10ed5e8c mov esp, ebp */
  ESP = (EBP);
  /* 10ed5e8e pop ebp */
  EBP = (pop32());
  /* 10ed5e8f ret  */
  ESPCHK(0x10ed5e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10005eb0 @ 0x10ed5eb0 (75 bytes, 32 insns) */
void f_10ed5eb0(void) {
  FTRACE(0x10ed5eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed5eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed5eb1 mov ebp, esp */
  EBP = (ESP);
  /* 10ed5eb3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed5eb6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed5eb7 push esi */
  push32((uint32_t)(ESI));
  /* 10ed5eb8 push edi */
  push32((uint32_t)(EDI));
  /* 10ed5eb9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed5eba lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed5ebd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed5ec2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed5ec7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed5ec9 pop ecx */
  ECX = (pop32());
  /* 10ed5eca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed5ecd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ed5ed0 push eax */
  push32((uint32_t)(EAX));
  /* 10ed5ed1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ed5ed4 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed5ed5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed5ed8 push edx */
  push32((uint32_t)(EDX));
  /* 10ed5ed9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5edc call 0x10ed1019 */
  push32(0x10ed5ee1u); f_10ed1019();
  /* 10ed5ee1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5ee4 mov byte ptr [eax + 0x2c], 1 */
  w8((uint32_t)(EAX + 0x2c), (0x1u));
  /* 10ed5ee8 pop edi */
  EDI = (pop32());
  /* 10ed5ee9 pop esi */
  ESI = (pop32());
  /* 10ed5eea pop ebx */
  EBX = (pop32());
  /* 10ed5eeb add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed5eee cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed5ef0 call 0x10ed9380 */
  push32(0x10ed5ef5u); f_10ed9380();
  /* 10ed5ef5 mov esp, ebp */
  ESP = (EBP);
  /* 10ed5ef7 pop ebp */
  EBP = (pop32());
  /* 10ed5ef8 ret 0xc */
  ESPCHK(0x10ed5eb0u, _esp0);
  ESP += 16; return;
}

/* FUN_10005f10 @ 0x10ed5f10 (95 bytes, 37 insns) */
void f_10ed5f10(void) {
  FTRACE(0x10ed5f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed5f10 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed5f11 mov ebp, esp */
  EBP = (ESP);
  /* 10ed5f13 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed5f16 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed5f17 push esi */
  push32((uint32_t)(ESI));
  /* 10ed5f18 push edi */
  push32((uint32_t)(EDI));
  /* 10ed5f19 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed5f1a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 10ed5f1d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 10ed5f22 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed5f27 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed5f29 pop ecx */
  ECX = (pop32());
  /* 10ed5f2a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed5f2d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ed5f31 mov esi, esp */
  ESI = (ESP);
  /* 10ed5f33 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed5f35 push 0x7d0 */
  push32((uint32_t)(0x7d0u));
  /* 10ed5f3a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5f3d call 0x10ed12da */
  push32(0x10ed5f42u); f_10ed12da();
  /* 10ed5f42 push eax */
  push32((uint32_t)(EAX));
  /* 10ed5f43 call dword ptr [0x10f12560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12560))), 0x10ed5f49u);
  /* 10ed5f49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed5f4c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed5f4e call 0x10ed9380 */
  push32(0x10ed5f53u); f_10ed9380();
  /* 10ed5f53 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ed5f55 jle 0x10ed5f5b */
  if ((C.zf||C.sf!=C.of)) goto L_10ed5f5b;
  /* 10ed5f57 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_10ed5f5b:;
  /* 10ed5f5b mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10ed5f5e pop edi */
  EDI = (pop32());
  /* 10ed5f5f pop esi */
  ESI = (pop32());
  /* 10ed5f60 pop ebx */
  EBX = (pop32());
  /* 10ed5f61 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed5f64 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed5f66 call 0x10ed9380 */
  push32(0x10ed5f6bu); f_10ed9380();
  /* 10ed5f6b mov esp, ebp */
  ESP = (EBP);
  /* 10ed5f6d pop ebp */
  EBP = (pop32());
  /* 10ed5f6e ret  */
  ESPCHK(0x10ed5f10u, _esp0);
  ESP += 4; return;
}

/* FUN_10005f90 @ 0x10ed5f90 (78 bytes, 28 insns) */
void f_10ed5f90(void) {
  FTRACE(0x10ed5f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed5f90 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed5f91 mov ebp, esp */
  EBP = (ESP);
  /* 10ed5f93 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed5f96 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed5f97 push esi */
  push32((uint32_t)(ESI));
  /* 10ed5f98 push edi */
  push32((uint32_t)(EDI));
  /* 10ed5f99 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed5f9a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed5f9d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed5fa2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed5fa7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed5fa9 pop ecx */
  ECX = (pop32());
  /* 10ed5faa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed5fad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5fb0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed5fb3 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10ed5fb6 mov edx, dword ptr [0x10f0f474] */
  EDX = (r32((uint32_t)(0x10f0f474)));
  /* 10ed5fbc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed5fbf mov dword ptr [edx*4 + 0x10f0f424], eax */
  w32((uint32_t)(EDX*4 + 0x10f0f424), (EAX));
  /* 10ed5fc6 mov ecx, dword ptr [0x10f0f474] */
  ECX = (r32((uint32_t)(0x10f0f474)));
  /* 10ed5fcc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed5fcf mov dword ptr [0x10f0f474], ecx */
  w32((uint32_t)(0x10f0f474), (ECX));
  /* 10ed5fd5 pop edi */
  EDI = (pop32());
  /* 10ed5fd6 pop esi */
  ESI = (pop32());
  /* 10ed5fd7 pop ebx */
  EBX = (pop32());
  /* 10ed5fd8 mov esp, ebp */
  ESP = (EBP);
  /* 10ed5fda pop ebp */
  EBP = (pop32());
  /* 10ed5fdb ret 4 */
  ESPCHK(0x10ed5f90u, _esp0);
  ESP += 8; return;
}

/* FUN_10006000 @ 0x10ed6000 (128 bytes, 44 insns) */
void f_10ed6000(void) {
  FTRACE(0x10ed6000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed6000 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed6001 mov ebp, esp */
  EBP = (ESP);
  /* 10ed6003 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed6006 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed6007 push esi */
  push32((uint32_t)(ESI));
  /* 10ed6008 push edi */
  push32((uint32_t)(EDI));
  /* 10ed6009 lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 10ed600c mov ecx, 0x12 */
  ECX = (0x12u);
  /* 10ed6011 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed6016 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed6018 mov eax, dword ptr [0x10f0f424] */
  EAX = (r32((uint32_t)(0x10f0f424)));
  /* 10ed601d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10ed6020 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ed6027 jmp 0x10ed6032 */
  goto L_10ed6032;
L_10ed6029:;
  /* 10ed6029 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ed602c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed602f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10ed6032:;
  /* 10ed6032 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ed6035 cmp edx, dword ptr [0x10f0f474] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x10f0f474))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed603b jge 0x10ed606c */
  if ((C.sf==C.of)) goto L_10ed606c;
  /* 10ed603d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ed6040 mov ecx, dword ptr [eax*4 + 0x10f0f424] */
  ECX = (r32((uint32_t)(EAX*4 + 0x10f0f424)));
  /* 10ed6047 call 0x10ed1131 */
  push32(0x10ed604cu); f_10ed1131();
  /* 10ed604c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ed604e mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 10ed6051 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed6054 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ed6056 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 10ed6059 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed605b jne 0x10ed606a */
  if (!C.zf) goto L_10ed606a;
  /* 10ed605d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ed6060 mov edx, dword ptr [ecx*4 + 0x10f0f424] */
  EDX = (r32((uint32_t)(ECX*4 + 0x10f0f424)));
  /* 10ed6067 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_10ed606a:;
  /* 10ed606a jmp 0x10ed6029 */
  goto L_10ed6029;
L_10ed606c:;
  /* 10ed606c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed606f pop edi */
  EDI = (pop32());
  /* 10ed6070 pop esi */
  ESI = (pop32());
  /* 10ed6071 pop ebx */
  EBX = (pop32());
  /* 10ed6072 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed6075 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed6077 call 0x10ed9380 */
  push32(0x10ed607cu); f_10ed9380();
  /* 10ed607c mov esp, ebp */
  ESP = (EBP);
  /* 10ed607e pop ebp */
  EBP = (pop32());
  /* 10ed607f ret  */
  ESPCHK(0x10ed6000u, _esp0);
  ESP += 4; return;
}

/* FUN_100060a0 @ 0x10ed60a0 (47 bytes, 22 insns) */
void f_10ed60a0(void) {
  FTRACE(0x10ed60a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed60a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed60a1 mov ebp, esp */
  EBP = (ESP);
  /* 10ed60a3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed60a6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed60a7 push esi */
  push32((uint32_t)(ESI));
  /* 10ed60a8 push edi */
  push32((uint32_t)(EDI));
  /* 10ed60a9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed60aa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed60ad mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed60b2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed60b7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed60b9 pop ecx */
  ECX = (pop32());
  /* 10ed60ba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed60bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed60c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed60c3 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10ed60c6 pop edi */
  EDI = (pop32());
  /* 10ed60c7 pop esi */
  ESI = (pop32());
  /* 10ed60c8 pop ebx */
  EBX = (pop32());
  /* 10ed60c9 mov esp, ebp */
  ESP = (EBP);
  /* 10ed60cb pop ebp */
  EBP = (pop32());
  /* 10ed60cc ret 4 */
  ESPCHK(0x10ed60a0u, _esp0);
  ESP += 8; return;
}

/* FUN_100060e0 @ 0x10ed60e0 (47 bytes, 22 insns) */
void f_10ed60e0(void) {
  FTRACE(0x10ed60e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed60e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed60e1 mov ebp, esp */
  EBP = (ESP);
  /* 10ed60e3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed60e6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed60e7 push esi */
  push32((uint32_t)(ESI));
  /* 10ed60e8 push edi */
  push32((uint32_t)(EDI));
  /* 10ed60e9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed60ea lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed60ed mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed60f2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed60f7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed60f9 pop ecx */
  ECX = (pop32());
  /* 10ed60fa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed60fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6100 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed6103 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 10ed6106 pop edi */
  EDI = (pop32());
  /* 10ed6107 pop esi */
  ESI = (pop32());
  /* 10ed6108 pop ebx */
  EBX = (pop32());
  /* 10ed6109 mov esp, ebp */
  ESP = (EBP);
  /* 10ed610b pop ebp */
  EBP = (pop32());
  /* 10ed610c ret 4 */
  ESPCHK(0x10ed60e0u, _esp0);
  ESP += 8; return;
}

/* FUN_10006120 @ 0x10ed6120 (47 bytes, 22 insns) */
void f_10ed6120(void) {
  FTRACE(0x10ed6120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed6120 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed6121 mov ebp, esp */
  EBP = (ESP);
  /* 10ed6123 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed6126 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed6127 push esi */
  push32((uint32_t)(ESI));
  /* 10ed6128 push edi */
  push32((uint32_t)(EDI));
  /* 10ed6129 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed612a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed612d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed6132 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed6137 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed6139 pop ecx */
  ECX = (pop32());
  /* 10ed613a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed613d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6140 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed6143 mov dword ptr [eax + 0x10], ecx */
  w32((uint32_t)(EAX + 0x10), (ECX));
  /* 10ed6146 pop edi */
  EDI = (pop32());
  /* 10ed6147 pop esi */
  ESI = (pop32());
  /* 10ed6148 pop ebx */
  EBX = (pop32());
  /* 10ed6149 mov esp, ebp */
  ESP = (EBP);
  /* 10ed614b pop ebp */
  EBP = (pop32());
  /* 10ed614c ret 4 */
  ESPCHK(0x10ed6120u, _esp0);
  ESP += 8; return;
}

/* FUN_10006160 @ 0x10ed6160 (85 bytes, 35 insns) */
void f_10ed6160(void) {
  FTRACE(0x10ed6160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed6160 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed6161 mov ebp, esp */
  EBP = (ESP);
  /* 10ed6163 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed6166 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed6167 push esi */
  push32((uint32_t)(ESI));
  /* 10ed6168 push edi */
  push32((uint32_t)(EDI));
  /* 10ed6169 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed616a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed616d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed6172 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed6177 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed6179 pop ecx */
  ECX = (pop32());
  /* 10ed617a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed617d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6180 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10ed6183 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed6184 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6187 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 10ed618a push eax */
  push32((uint32_t)(EAX));
  /* 10ed618b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed618e call 0x10ed11c2 */
  push32(0x10ed6193u); f_10ed11c2();
  /* 10ed6193 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6196 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10ed6199 push edx */
  push32((uint32_t)(EDX));
  /* 10ed619a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed619d call 0x10ed1221 */
  push32(0x10ed61a2u); f_10ed1221();
  /* 10ed61a2 pop edi */
  EDI = (pop32());
  /* 10ed61a3 pop esi */
  ESI = (pop32());
  /* 10ed61a4 pop ebx */
  EBX = (pop32());
  /* 10ed61a5 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed61a8 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed61aa call 0x10ed9380 */
  push32(0x10ed61afu); f_10ed9380();
  /* 10ed61af mov esp, ebp */
  ESP = (EBP);
  /* 10ed61b1 pop ebp */
  EBP = (pop32());
  /* 10ed61b2 ret 4 */
  ESPCHK(0x10ed6160u, _esp0);
  ESP += 8; return;
}

/* FUN_100061d0 @ 0x10ed61d0 (42 bytes, 21 insns) */
void f_10ed61d0(void) {
  FTRACE(0x10ed61d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed61d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed61d1 mov ebp, esp */
  EBP = (ESP);
  /* 10ed61d3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed61d6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed61d7 push esi */
  push32((uint32_t)(ESI));
  /* 10ed61d8 push edi */
  push32((uint32_t)(EDI));
  /* 10ed61d9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed61da lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed61dd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed61e2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed61e7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed61e9 pop ecx */
  ECX = (pop32());
  /* 10ed61ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed61ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed61f0 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ed61f3 pop edi */
  EDI = (pop32());
  /* 10ed61f4 pop esi */
  ESI = (pop32());
  /* 10ed61f5 pop ebx */
  EBX = (pop32());
  /* 10ed61f6 mov esp, ebp */
  ESP = (EBP);
  /* 10ed61f8 pop ebp */
  EBP = (pop32());
  /* 10ed61f9 ret  */
  ESPCHK(0x10ed61d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006210 @ 0x10ed6210 (39 bytes, 20 insns) */
void f_10ed6210(void) {
  FTRACE(0x10ed6210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed6210 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed6211 mov ebp, esp */
  EBP = (ESP);
  /* 10ed6213 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed6216 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed6217 push esi */
  push32((uint32_t)(ESI));
  /* 10ed6218 push edi */
  push32((uint32_t)(EDI));
  /* 10ed6219 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed621a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed621d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed6222 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed6227 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed6229 pop ecx */
  ECX = (pop32());
  /* 10ed622a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed622d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6230 pop edi */
  EDI = (pop32());
  /* 10ed6231 pop esi */
  ESI = (pop32());
  /* 10ed6232 pop ebx */
  EBX = (pop32());
  /* 10ed6233 mov esp, ebp */
  ESP = (EBP);
  /* 10ed6235 pop ebp */
  EBP = (pop32());
  /* 10ed6236 ret  */
  ESPCHK(0x10ed6210u, _esp0);
  ESP += 4; return;
}

/* FUN_10006240 @ 0x10ed6240 (518 bytes, 176 insns) */
void f_10ed6240(void) {
  FTRACE(0x10ed6240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed6240 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed6241 mov ebp, esp */
  EBP = (ESP);
  /* 10ed6243 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed6246 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed6247 push esi */
  push32((uint32_t)(ESI));
  /* 10ed6248 push edi */
  push32((uint32_t)(EDI));
  /* 10ed6249 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed624a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed624d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed6252 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed6257 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed6259 pop ecx */
  ECX = (pop32());
  /* 10ed625a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed625d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6260 call 0x10ed11a9 */
  push32(0x10ed6265u); f_10ed11a9();
  /* 10ed6265 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ed6267 jle 0x10ed6435 */
  if ((C.zf||C.sf!=C.of)) goto L_10ed6435;
  /* 10ed626d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6270 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10ed6273 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed6276 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6279 cmp ecx, dword ptr [edx + 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed627c jge 0x10ed6435 */
  if ((C.sf==C.of)) goto L_10ed6435;
  /* 10ed6282 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6285 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10ed6288 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed628b cmp dword ptr [edx + ecx*8 + 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*8 + 0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed6290 jne 0x10ed6359 */
  if (!C.zf) goto L_10ed6359;
  /* 10ed6296 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6299 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10ed629c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed629f mov eax, dword ptr [edx + ecx*8 + 0x28] */
  EAX = (r32((uint32_t)(EDX + ECX*8 + 0x28)));
  /* 10ed62a3 push eax */
  push32((uint32_t)(EAX));
  /* 10ed62a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed62a7 call 0x10ed10c3 */
  push32(0x10ed62acu); f_10ed10c3();
  /* 10ed62ac and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ed62b1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ed62b3 je 0x10ed62e0 */
  if (C.zf) goto L_10ed62e0;
  /* 10ed62b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed62b8 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10ed62bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed62be mov ecx, dword ptr [eax + edx*8 + 0x30] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x30)));
  /* 10ed62c2 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed62c3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed62c6 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10ed62c9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed62cc mov edx, dword ptr [ecx + eax*8 + 0x28] */
  EDX = (r32((uint32_t)(ECX + EAX*8 + 0x28)));
  /* 10ed62d0 push edx */
  push32((uint32_t)(EDX));
  /* 10ed62d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed62d4 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed62d7 push eax */
  push32((uint32_t)(EAX));
  /* 10ed62d8 call 0x10ed1069 */
  push32(0x10ed62ddu); f_10ed1069();
  /* 10ed62dd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10ed62e0:;
  /* 10ed62e0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed62e3 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10ed62e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed62e9 mov ecx, dword ptr [eax + edx*8 + 0x30] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x30)));
  /* 10ed62ed push ecx */
  push32((uint32_t)(ECX));
  /* 10ed62ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed62f1 call 0x10ed10c3 */
  push32(0x10ed62f6u); f_10ed10c3();
  /* 10ed62f6 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ed62fb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ed62fd je 0x10ed6354 */
  if (C.zf) goto L_10ed6354;
  /* 10ed62ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6302 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10ed6305 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed6308 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed630b mov dword ptr [ecx + 0x1c], eax */
  w32((uint32_t)(ECX + 0x1c), (EAX));
  /* 10ed630e mov esi, esp */
  ESI = (ESP);
  /* 10ed6310 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed6312 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6315 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed6318 push edx */
  push32((uint32_t)(EDX));
  /* 10ed6319 call dword ptr [0x10f12564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12564))), 0x10ed631fu);
  /* 10ed631f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed6322 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed6324 call 0x10ed9380 */
  push32(0x10ed6329u); f_10ed9380();
  /* 10ed6329 mov esi, esp */
  ESI = (ESP);
  /* 10ed632b push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed632d push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed632f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6332 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10ed6335 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6338 mov eax, dword ptr [edx + ecx*8 + 0x28] */
  EAX = (r32((uint32_t)(EDX + ECX*8 + 0x28)));
  /* 10ed633c push eax */
  push32((uint32_t)(EAX));
  /* 10ed633d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6340 mov dl, byte ptr [ecx + 0x24] */
  DL = (r8((uint32_t)(ECX + 0x24)));
  /* 10ed6343 push edx */
  push32((uint32_t)(EDX));
  /* 10ed6344 call dword ptr [0x10f12574] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12574))), 0x10ed634au);
  /* 10ed634a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed634d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed634f call 0x10ed9380 */
  push32(0x10ed6354u); f_10ed9380();
L_10ed6354:;
  /* 10ed6354 jmp 0x10ed6435 */
  goto L_10ed6435;
L_10ed6359:;
  /* 10ed6359 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed635c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10ed635f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6362 cmp dword ptr [edx + ecx*8 + 0x34], 2 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*8 + 0x34))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed6367 je 0x10ed6379 */
  if (C.zf) goto L_10ed6379;
  /* 10ed6369 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed636c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10ed636f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6372 cmp dword ptr [edx + ecx*8 + 0x34], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*8 + 0x34))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed6377 jne 0x10ed63d0 */
  if (!C.zf) goto L_10ed63d0;
L_10ed6379:;
  /* 10ed6379 mov esi, esp */
  ESI = (ESP);
  /* 10ed637b push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed637d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6380 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed6383 push eax */
  push32((uint32_t)(EAX));
  /* 10ed6384 call dword ptr [0x10f12564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12564))), 0x10ed638au);
  /* 10ed638a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed638d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed638f call 0x10ed9380 */
  push32(0x10ed6394u); f_10ed9380();
  /* 10ed6394 mov esi, esp */
  ESI = (ESP);
  /* 10ed6396 push 2 */
  push32((uint32_t)(0x2u));
  /* 10ed6398 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed639a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed639d mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10ed63a0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed63a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed63a6 mov dword ptr [eax + 0x1c], edx */
  w32((uint32_t)(EAX + 0x1c), (EDX));
  /* 10ed63a9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed63ac mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10ed63af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed63b2 mov ecx, dword ptr [eax + edx*8 + 0x28] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x28)));
  /* 10ed63b6 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed63b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed63ba mov al, byte ptr [edx + 0x24] */
  AL = (r8((uint32_t)(EDX + 0x24)));
  /* 10ed63bd push eax */
  push32((uint32_t)(EAX));
  /* 10ed63be call dword ptr [0x10f12574] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12574))), 0x10ed63c4u);
  /* 10ed63c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed63c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed63c9 call 0x10ed9380 */
  push32(0x10ed63ceu); f_10ed9380();
  /* 10ed63ce jmp 0x10ed6435 */
  goto L_10ed6435;
L_10ed63d0:;
  /* 10ed63d0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed63d3 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10ed63d6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed63d9 cmp dword ptr [eax + edx*8 + 0x34], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*8 + 0x34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed63de jne 0x10ed6435 */
  if (!C.zf) goto L_10ed6435;
  /* 10ed63e0 mov esi, esp */
  ESI = (ESP);
  /* 10ed63e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed63e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed63e7 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed63ea push ecx */
  push32((uint32_t)(ECX));
  /* 10ed63eb call dword ptr [0x10f12564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12564))), 0x10ed63f1u);
  /* 10ed63f1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed63f4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed63f6 call 0x10ed9380 */
  push32(0x10ed63fbu); f_10ed9380();
  /* 10ed63fb mov esi, esp */
  ESI = (ESP);
  /* 10ed63fd push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed63ff push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed6401 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6404 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10ed6407 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed640a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed640d mov dword ptr [ecx + 0x1c], eax */
  w32((uint32_t)(ECX + 0x1c), (EAX));
  /* 10ed6410 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6413 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10ed6416 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6419 mov edx, dword ptr [ecx + eax*8 + 0x28] */
  EDX = (r32((uint32_t)(ECX + EAX*8 + 0x28)));
  /* 10ed641d push edx */
  push32((uint32_t)(EDX));
  /* 10ed641e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6421 mov cl, byte ptr [eax + 0x24] */
  CL = (r8((uint32_t)(EAX + 0x24)));
  /* 10ed6424 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed6425 call dword ptr [0x10f12574] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12574))), 0x10ed642bu);
  /* 10ed642b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed642e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed6430 call 0x10ed9380 */
  push32(0x10ed6435u); f_10ed9380();
L_10ed6435:;
  /* 10ed6435 pop edi */
  EDI = (pop32());
  /* 10ed6436 pop esi */
  ESI = (pop32());
  /* 10ed6437 pop ebx */
  EBX = (pop32());
  /* 10ed6438 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed643b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed643d call 0x10ed9380 */
  push32(0x10ed6442u); f_10ed9380();
  /* 10ed6442 mov esp, ebp */
  ESP = (EBP);
  /* 10ed6444 pop ebp */
  EBP = (pop32());
  /* 10ed6445 ret  */
  ESPCHK(0x10ed6240u, _esp0);
  ESP += 4; return;
}

/* FUN_100064d0 @ 0x10ed64d0 (38 bytes, 20 insns) */
void f_10ed64d0(void) {
  FTRACE(0x10ed64d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed64d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed64d1 mov ebp, esp */
  EBP = (ESP);
  /* 10ed64d3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed64d6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed64d7 push esi */
  push32((uint32_t)(ESI));
  /* 10ed64d8 push edi */
  push32((uint32_t)(EDI));
  /* 10ed64d9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed64da lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed64dd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed64e2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed64e7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed64e9 pop ecx */
  ECX = (pop32());
  /* 10ed64ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed64ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ed64ef pop edi */
  EDI = (pop32());
  /* 10ed64f0 pop esi */
  ESI = (pop32());
  /* 10ed64f1 pop ebx */
  EBX = (pop32());
  /* 10ed64f2 mov esp, ebp */
  ESP = (EBP);
  /* 10ed64f4 pop ebp */
  EBP = (pop32());
  /* 10ed64f5 ret  */
  ESPCHK(0x10ed64d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006500 @ 0x10ed6500 (85 bytes, 34 insns) */
void f_10ed6500(void) {
  FTRACE(0x10ed6500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed6500 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed6501 mov ebp, esp */
  EBP = (ESP);
  /* 10ed6503 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed6506 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed6507 push esi */
  push32((uint32_t)(ESI));
  /* 10ed6508 push edi */
  push32((uint32_t)(EDI));
  /* 10ed6509 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed650a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed650d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed6512 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed6517 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed6519 pop ecx */
  ECX = (pop32());
  /* 10ed651a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed651d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6520 mov ecx, dword ptr [eax + 0x20] */
  ECX = (r32((uint32_t)(EAX + 0x20)));
  /* 10ed6523 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6526 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed6529 mov dword ptr [edx + ecx*8 + 0x28], eax */
  w32((uint32_t)(EDX + ECX*8 + 0x28), (EAX));
  /* 10ed652d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6530 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 10ed6533 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6536 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ed6539 mov dword ptr [eax + edx*8 + 0x2c], ecx */
  w32((uint32_t)(EAX + EDX*8 + 0x2c), (ECX));
  /* 10ed653d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6540 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 10ed6543 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed6546 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6549 mov dword ptr [ecx + 0x20], eax */
  w32((uint32_t)(ECX + 0x20), (EAX));
  /* 10ed654c pop edi */
  EDI = (pop32());
  /* 10ed654d pop esi */
  ESI = (pop32());
  /* 10ed654e pop ebx */
  EBX = (pop32());
  /* 10ed654f mov esp, ebp */
  ESP = (EBP);
  /* 10ed6551 pop ebp */
  EBP = (pop32());
  /* 10ed6552 ret 8 */
  ESPCHK(0x10ed6500u, _esp0);
  ESP += 12; return;
}

/* FUN_10006570 @ 0x10ed6570 (86 bytes, 33 insns) */
void f_10ed6570(void) {
  FTRACE(0x10ed6570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed6570 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed6571 mov ebp, esp */
  EBP = (ESP);
  /* 10ed6573 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed6576 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed6577 push esi */
  push32((uint32_t)(ESI));
  /* 10ed6578 push edi */
  push32((uint32_t)(EDI));
  /* 10ed6579 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed657a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed657d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed6582 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed6587 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed6589 pop ecx */
  ECX = (pop32());
  /* 10ed658a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed658d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6590 mov ecx, dword ptr [eax + 0x20] */
  ECX = (r32((uint32_t)(EAX + 0x20)));
  /* 10ed6593 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6596 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed6599 mov dword ptr [edx + ecx*8 + 0x28], eax */
  w32((uint32_t)(EDX + ECX*8 + 0x28), (EAX));
  /* 10ed659d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed65a0 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 10ed65a3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed65a6 mov dword ptr [eax + edx*8 + 0x2c], 2 */
  w32((uint32_t)(EAX + EDX*8 + 0x2c), (0x2u));
  /* 10ed65ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed65b1 mov edx, dword ptr [ecx + 0x20] */
  EDX = (r32((uint32_t)(ECX + 0x20)));
  /* 10ed65b4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed65b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed65ba mov dword ptr [eax + 0x20], edx */
  w32((uint32_t)(EAX + 0x20), (EDX));
  /* 10ed65bd pop edi */
  EDI = (pop32());
  /* 10ed65be pop esi */
  ESI = (pop32());
  /* 10ed65bf pop ebx */
  EBX = (pop32());
  /* 10ed65c0 mov esp, ebp */
  ESP = (EBP);
  /* 10ed65c2 pop ebp */
  EBP = (pop32());
  /* 10ed65c3 ret 4 */
  ESPCHK(0x10ed6570u, _esp0);
  ESP += 8; return;
}

/* FUN_100065e0 @ 0x10ed65e0 (119 bytes, 43 insns) */
void f_10ed65e0(void) {
  FTRACE(0x10ed65e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed65e0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed65e1 mov ebp, esp */
  EBP = (ESP);
  /* 10ed65e3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed65e6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed65e7 push esi */
  push32((uint32_t)(ESI));
  /* 10ed65e8 push edi */
  push32((uint32_t)(EDI));
  /* 10ed65e9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed65ea lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed65ed mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed65f2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed65f7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed65f9 pop ecx */
  ECX = (pop32());
  /* 10ed65fa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed65fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6600 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed6603 mov esi, esp */
  ESI = (ESP);
  /* 10ed6605 push eax */
  push32((uint32_t)(EAX));
  /* 10ed6606 call dword ptr [0x10f12580] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12580))), 0x10ed660cu);
  /* 10ed660c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed660f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed6611 call 0x10ed9380 */
  push32(0x10ed6616u); f_10ed9380();
  /* 10ed6616 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6619 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed661c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10ed661e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6621 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ed6624 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10ed6627 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed662a mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
  /* 10ed6631 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6634 mov dword ptr [eax + 0x20], 0 */
  w32((uint32_t)(EAX + 0x20), (0x0u));
  /* 10ed663b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed663e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ed6641 mov dword ptr [ecx + 0x24], edx */
  w32((uint32_t)(ECX + 0x24), (EDX));
  /* 10ed6644 pop edi */
  EDI = (pop32());
  /* 10ed6645 pop esi */
  ESI = (pop32());
  /* 10ed6646 pop ebx */
  EBX = (pop32());
  /* 10ed6647 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed664a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed664c call 0x10ed9380 */
  push32(0x10ed6651u); f_10ed9380();
  /* 10ed6651 mov esp, ebp */
  ESP = (EBP);
  /* 10ed6653 pop ebp */
  EBP = (pop32());
  /* 10ed6654 ret 0xc */
  ESPCHK(0x10ed65e0u, _esp0);
  ESP += 16; return;
}

/* FUN_10006680 @ 0x10ed6680 (263 bytes, 93 insns) */
void f_10ed6680(void) {
  FTRACE(0x10ed6680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed6680 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed6681 mov ebp, esp */
  EBP = (ESP);
  /* 10ed6683 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed6686 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed6687 push esi */
  push32((uint32_t)(ESI));
  /* 10ed6688 push edi */
  push32((uint32_t)(EDI));
  /* 10ed6689 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed668a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 10ed668d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 10ed6692 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed6697 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed6699 pop ecx */
  ECX = (pop32());
  /* 10ed669a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed669d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed66a0 call 0x10ed11a9 */
  push32(0x10ed66a5u); f_10ed11a9();
  /* 10ed66a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ed66a7 jne 0x10ed6774 */
  if (!C.zf) goto L_10ed6774;
  /* 10ed66ad mov esi, esp */
  ESI = (ESP);
  /* 10ed66af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed66b2 mov cl, byte ptr [eax + 0x24] */
  CL = (r8((uint32_t)(EAX + 0x24)));
  /* 10ed66b5 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed66b6 call dword ptr [0x10f1253c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1253c))), 0x10ed66bcu);
  /* 10ed66bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed66bf cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed66c1 call 0x10ed9380 */
  push32(0x10ed66c6u); f_10ed9380();
  /* 10ed66c6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ed66cd jmp 0x10ed66d8 */
  goto L_10ed66d8;
L_10ed66cf:;
  /* 10ed66cf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ed66d2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed66d5 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10ed66d8:;
  /* 10ed66d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ed66db cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed66de jge 0x10ed6730 */
  if ((C.sf==C.of)) goto L_10ed6730;
  /* 10ed66e0 mov esi, esp */
  ESI = (ESP);
  /* 10ed66e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed66e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed66e7 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed66e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed66eb mov al, byte ptr [edx + 0x24] */
  AL = (r8((uint32_t)(EDX + 0x24)));
  /* 10ed66ee push eax */
  push32((uint32_t)(EAX));
  /* 10ed66ef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed66f2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ed66f4 push edx */
  push32((uint32_t)(EDX));
  /* 10ed66f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed66f8 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ed66fb push ecx */
  push32((uint32_t)(ECX));
  /* 10ed66fc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed66ff add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed6702 push edx */
  push32((uint32_t)(EDX));
  /* 10ed6703 call dword ptr [0x10f12544] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12544))), 0x10ed6709u);
  /* 10ed6709 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed670c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed670e call 0x10ed9380 */
  push32(0x10ed6713u); f_10ed9380();
  /* 10ed6713 mov esi, esp */
  ESI = (ESP);
  /* 10ed6715 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ed6717 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed671a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed671d push eax */
  push32((uint32_t)(EAX));
  /* 10ed671e call dword ptr [0x10f12564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12564))), 0x10ed6724u);
  /* 10ed6724 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed6727 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed6729 call 0x10ed9380 */
  push32(0x10ed672eu); f_10ed9380();
  /* 10ed672e jmp 0x10ed66cf */
  goto L_10ed66cf;
L_10ed6730:;
  /* 10ed6730 mov esi, esp */
  ESI = (ESP);
  /* 10ed6732 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed6734 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6737 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed673a push ecx */
  push32((uint32_t)(ECX));
  /* 10ed673b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed673e mov al, byte ptr [edx + 0x24] */
  AL = (r8((uint32_t)(EDX + 0x24)));
  /* 10ed6741 push eax */
  push32((uint32_t)(EAX));
  /* 10ed6742 call dword ptr [0x10f12588] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12588))), 0x10ed6748u);
  /* 10ed6748 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed674b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed674d call 0x10ed9380 */
  push32(0x10ed6752u); f_10ed9380();
  /* 10ed6752 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6755 mov dword ptr [ecx + 0x20], 0 */
  w32((uint32_t)(ECX + 0x20), (0x0u));
  /* 10ed675c push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed675e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed6761 push edx */
  push32((uint32_t)(EDX));
  /* 10ed6762 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6765 call 0x10ed105f */
  push32(0x10ed676au); f_10ed105f();
  /* 10ed676a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed676d mov dword ptr [eax + 0x1c], 0 */
  w32((uint32_t)(EAX + 0x1c), (0x0u));
L_10ed6774:;
  /* 10ed6774 pop edi */
  EDI = (pop32());
  /* 10ed6775 pop esi */
  ESI = (pop32());
  /* 10ed6776 pop ebx */
  EBX = (pop32());
  /* 10ed6777 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed677a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed677c call 0x10ed9380 */
  push32(0x10ed6781u); f_10ed9380();
  /* 10ed6781 mov esp, ebp */
  ESP = (EBP);
  /* 10ed6783 pop ebp */
  EBP = (pop32());
  /* 10ed6784 ret 8 */
  ESPCHK(0x10ed6680u, _esp0);
  ESP += 12; return;
}

/* FUN_100067d0 @ 0x10ed67d0 (42 bytes, 21 insns) */
void f_10ed67d0(void) {
  FTRACE(0x10ed67d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed67d0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed67d1 mov ebp, esp */
  EBP = (ESP);
  /* 10ed67d3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed67d6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed67d7 push esi */
  push32((uint32_t)(ESI));
  /* 10ed67d8 push edi */
  push32((uint32_t)(EDI));
  /* 10ed67d9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed67da lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed67dd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed67e2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed67e7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed67e9 pop ecx */
  ECX = (pop32());
  /* 10ed67ea mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed67ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed67f0 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed67f3 pop edi */
  EDI = (pop32());
  /* 10ed67f4 pop esi */
  ESI = (pop32());
  /* 10ed67f5 pop ebx */
  EBX = (pop32());
  /* 10ed67f6 mov esp, ebp */
  ESP = (EBP);
  /* 10ed67f8 pop ebp */
  EBP = (pop32());
  /* 10ed67f9 ret  */
  ESPCHK(0x10ed67d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006810 @ 0x10ed6810 (78 bytes, 33 insns) */
void f_10ed6810(void) {
  FTRACE(0x10ed6810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed6810 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed6811 mov ebp, esp */
  EBP = (ESP);
  /* 10ed6813 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed6816 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed6817 push esi */
  push32((uint32_t)(ESI));
  /* 10ed6818 push edi */
  push32((uint32_t)(EDI));
  /* 10ed6819 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed681a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed681d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed6822 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed6827 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed6829 pop ecx */
  ECX = (pop32());
  /* 10ed682a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed682d mov esi, esp */
  ESI = (ESP);
  /* 10ed682f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6832 mov cl, byte ptr [eax + 0x24] */
  CL = (r8((uint32_t)(EAX + 0x24)));
  /* 10ed6835 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed6836 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6839 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed683c push edx */
  push32((uint32_t)(EDX));
  /* 10ed683d call dword ptr [0x10f12500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12500))), 0x10ed6843u);
  /* 10ed6843 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed6846 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed6848 call 0x10ed9380 */
  push32(0x10ed684du); f_10ed9380();
  /* 10ed684d pop edi */
  EDI = (pop32());
  /* 10ed684e pop esi */
  ESI = (pop32());
  /* 10ed684f pop ebx */
  EBX = (pop32());
  /* 10ed6850 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed6853 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed6855 call 0x10ed9380 */
  push32(0x10ed685au); f_10ed9380();
  /* 10ed685a mov esp, ebp */
  ESP = (EBP);
  /* 10ed685c pop ebp */
  EBP = (pop32());
  /* 10ed685d ret  */
  ESPCHK(0x10ed6810u, _esp0);
  ESP += 4; return;
}

/* FUN_10006880 @ 0x10ed6880 (102 bytes, 40 insns) */
void f_10ed6880(void) {
  FTRACE(0x10ed6880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed6880 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed6881 mov ebp, esp */
  EBP = (ESP);
  /* 10ed6883 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed6886 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed6887 push esi */
  push32((uint32_t)(ESI));
  /* 10ed6888 push edi */
  push32((uint32_t)(EDI));
  /* 10ed6889 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed688a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 10ed688d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 10ed6892 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed6897 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed6899 pop ecx */
  ECX = (pop32());
  /* 10ed689a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed689d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ed68a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed68a4 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed68a7 mov esi, esp */
  ESI = (ESP);
  /* 10ed68a9 push eax */
  push32((uint32_t)(EAX));
  /* 10ed68aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed68ad push ecx */
  push32((uint32_t)(ECX));
  /* 10ed68ae call dword ptr [0x10f12578] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12578))), 0x10ed68b4u);
  /* 10ed68b4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed68b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed68b9 call 0x10ed9380 */
  push32(0x10ed68beu); f_10ed9380();
  /* 10ed68be mov esi, eax */
  ESI = (EAX);
  /* 10ed68c0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed68c3 call 0x10ed11a9 */
  push32(0x10ed68c8u); f_10ed11a9();
  /* 10ed68c8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed68ca jne 0x10ed68d0 */
  if (!C.zf) goto L_10ed68d0;
  /* 10ed68cc mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_10ed68d0:;
  /* 10ed68d0 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10ed68d3 pop edi */
  EDI = (pop32());
  /* 10ed68d4 pop esi */
  ESI = (pop32());
  /* 10ed68d5 pop ebx */
  EBX = (pop32());
  /* 10ed68d6 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed68d9 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed68db call 0x10ed9380 */
  push32(0x10ed68e0u); f_10ed9380();
  /* 10ed68e0 mov esp, ebp */
  ESP = (EBP);
  /* 10ed68e2 pop ebp */
  EBP = (pop32());
  /* 10ed68e3 ret 4 */
  ESPCHK(0x10ed6880u, _esp0);
  ESP += 8; return;
}

/* FUN_10006900 @ 0x10ed6900 (122 bytes, 45 insns) */
void f_10ed6900(void) {
  FTRACE(0x10ed6900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed6900 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed6901 mov ebp, esp */
  EBP = (ESP);
  /* 10ed6903 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed6906 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed6907 push esi */
  push32((uint32_t)(ESI));
  /* 10ed6908 push edi */
  push32((uint32_t)(EDI));
  /* 10ed6909 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed690a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed690d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed6912 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed6917 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed6919 pop ecx */
  ECX = (pop32());
  /* 10ed691a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed691d mov esi, esp */
  ESI = (ESP);
  /* 10ed691f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed6922 push eax */
  push32((uint32_t)(EAX));
  /* 10ed6923 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6926 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed6929 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed692a call dword ptr [0x10f124d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f124d8))), 0x10ed6930u);
  /* 10ed6930 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed6933 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed6935 call 0x10ed9380 */
  push32(0x10ed693au); f_10ed9380();
  /* 10ed693a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed693d add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed6940 push edx */
  push32((uint32_t)(EDX));
  /* 10ed6941 call 0x10ed10c8 */
  push32(0x10ed6946u); f_10ed10c8();
  /* 10ed6946 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed6949 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ed694e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6951 mov dword ptr [ecx + 0x18], eax */
  w32((uint32_t)(ECX + 0x18), (EAX));
  /* 10ed6954 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6957 mov dword ptr [edx + 0x14], 0 */
  w32((uint32_t)(EDX + 0x14), (0x0u));
  /* 10ed695e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6961 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ed6964 mov dword ptr [eax + 0x1c], ecx */
  w32((uint32_t)(EAX + 0x1c), (ECX));
  /* 10ed6967 pop edi */
  EDI = (pop32());
  /* 10ed6968 pop esi */
  ESI = (pop32());
  /* 10ed6969 pop ebx */
  EBX = (pop32());
  /* 10ed696a add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed696d cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed696f call 0x10ed9380 */
  push32(0x10ed6974u); f_10ed9380();
  /* 10ed6974 mov esp, ebp */
  ESP = (EBP);
  /* 10ed6976 pop ebp */
  EBP = (pop32());
  /* 10ed6977 ret 8 */
  ESPCHK(0x10ed6900u, _esp0);
  ESP += 12; return;
}

/* FUN_100069a0 @ 0x10ed69a0 (56 bytes, 25 insns) */
void f_10ed69a0(void) {
  FTRACE(0x10ed69a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed69a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed69a1 mov ebp, esp */
  EBP = (ESP);
  /* 10ed69a3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed69a6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed69a7 push esi */
  push32((uint32_t)(ESI));
  /* 10ed69a8 push edi */
  push32((uint32_t)(EDI));
  /* 10ed69a9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed69aa lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 10ed69ad mov ecx, 0x12 */
  ECX = (0x12u);
  /* 10ed69b2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed69b7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed69b9 pop ecx */
  ECX = (pop32());
  /* 10ed69ba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed69bd mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ed69c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed69c4 cmp dword ptr [eax + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed69c8 jne 0x10ed69ce */
  if (!C.zf) goto L_10ed69ce;
  /* 10ed69ca mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_10ed69ce:;
  /* 10ed69ce mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10ed69d1 pop edi */
  EDI = (pop32());
  /* 10ed69d2 pop esi */
  ESI = (pop32());
  /* 10ed69d3 pop ebx */
  EBX = (pop32());
  /* 10ed69d4 mov esp, ebp */
  ESP = (EBP);
  /* 10ed69d6 pop ebp */
  EBP = (pop32());
  /* 10ed69d7 ret  */
  ESPCHK(0x10ed69a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100069f0 @ 0x10ed69f0 (163 bytes, 60 insns) */
void f_10ed69f0(void) {
  FTRACE(0x10ed69f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed69f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed69f1 mov ebp, esp */
  EBP = (ESP);
  /* 10ed69f3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed69f6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed69f7 push esi */
  push32((uint32_t)(ESI));
  /* 10ed69f8 push edi */
  push32((uint32_t)(EDI));
  /* 10ed69f9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed69fa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed69fd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed6a02 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed6a07 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed6a09 pop ecx */
  ECX = (pop32());
  /* 10ed6a0a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed6a0d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6a10 call 0x10ed10e6 */
  push32(0x10ed6a15u); f_10ed10e6();
  /* 10ed6a15 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ed6a1a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ed6a1c je 0x10ed6a80 */
  if (C.zf) goto L_10ed6a80;
  /* 10ed6a1e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6a21 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed6a24 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 10ed6a27 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6a2a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ed6a2d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10ed6a2f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6a32 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ed6a35 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 10ed6a38 mov esi, esp */
  ESI = (ESP);
  /* 10ed6a3a push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed6a3c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6a3f add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed6a42 push eax */
  push32((uint32_t)(EAX));
  /* 10ed6a43 call dword ptr [0x10f12564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12564))), 0x10ed6a49u);
  /* 10ed6a49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed6a4c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed6a4e call 0x10ed9380 */
  push32(0x10ed6a53u); f_10ed9380();
  /* 10ed6a53 mov esi, esp */
  ESI = (ESP);
  /* 10ed6a55 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed6a57 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed6a59 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6a5c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10ed6a5e push edx */
  push32((uint32_t)(EDX));
  /* 10ed6a5f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6a62 mov cl, byte ptr [eax + 0x18] */
  CL = (r8((uint32_t)(EAX + 0x18)));
  /* 10ed6a65 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed6a66 call dword ptr [0x10f12574] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12574))), 0x10ed6a6cu);
  /* 10ed6a6c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed6a6f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed6a71 call 0x10ed9380 */
  push32(0x10ed6a76u); f_10ed9380();
  /* 10ed6a76 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6a79 mov dword ptr [edx + 0x14], 1 */
  w32((uint32_t)(EDX + 0x14), (0x1u));
L_10ed6a80:;
  /* 10ed6a80 pop edi */
  EDI = (pop32());
  /* 10ed6a81 pop esi */
  ESI = (pop32());
  /* 10ed6a82 pop ebx */
  EBX = (pop32());
  /* 10ed6a83 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed6a86 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed6a88 call 0x10ed9380 */
  push32(0x10ed6a8du); f_10ed9380();
  /* 10ed6a8d mov esp, ebp */
  ESP = (EBP);
  /* 10ed6a8f pop ebp */
  EBP = (pop32());
  /* 10ed6a90 ret 0xc */
  ESPCHK(0x10ed69f0u, _esp0);
  ESP += 16; return;
}

/* FUN_10006ac0 @ 0x10ed6ac0 (140 bytes, 53 insns) */
void f_10ed6ac0(void) {
  FTRACE(0x10ed6ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed6ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed6ac1 mov ebp, esp */
  EBP = (ESP);
  /* 10ed6ac3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed6ac6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed6ac7 push esi */
  push32((uint32_t)(ESI));
  /* 10ed6ac8 push edi */
  push32((uint32_t)(EDI));
  /* 10ed6ac9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed6aca lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 10ed6acd mov ecx, 0x12 */
  ECX = (0x12u);
  /* 10ed6ad2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed6ad7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed6ad9 pop ecx */
  ECX = (pop32());
  /* 10ed6ada mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed6add mov esi, esp */
  ESI = (ESP);
  /* 10ed6adf push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed6ae1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6ae4 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed6ae7 push eax */
  push32((uint32_t)(EAX));
  /* 10ed6ae8 call dword ptr [0x10f12564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12564))), 0x10ed6aeeu);
  /* 10ed6aee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed6af1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed6af3 call 0x10ed9380 */
  push32(0x10ed6af8u); f_10ed9380();
  /* 10ed6af8 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ed6afc mov esi, esp */
  ESI = (ESP);
  /* 10ed6afe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6b01 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10ed6b04 push edx */
  push32((uint32_t)(EDX));
  /* 10ed6b05 call dword ptr [0x10f1258c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1258c))), 0x10ed6b0bu);
  /* 10ed6b0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed6b0e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed6b10 call 0x10ed9380 */
  push32(0x10ed6b15u); f_10ed9380();
  /* 10ed6b15 mov esi, eax */
  ESI = (EAX);
  /* 10ed6b17 mov edi, esp */
  EDI = (ESP);
  /* 10ed6b19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6b1c mov cl, byte ptr [eax + 0x18] */
  CL = (r8((uint32_t)(EAX + 0x18)));
  /* 10ed6b1f push ecx */
  push32((uint32_t)(ECX));
  /* 10ed6b20 call dword ptr [0x10f124d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f124d4))), 0x10ed6b26u);
  /* 10ed6b26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed6b29 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed6b2b call 0x10ed9380 */
  push32(0x10ed6b30u); f_10ed9380();
  /* 10ed6b30 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed6b32 jne 0x10ed6b38 */
  if (!C.zf) goto L_10ed6b38;
  /* 10ed6b34 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_10ed6b38:;
  /* 10ed6b38 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10ed6b3b pop edi */
  EDI = (pop32());
  /* 10ed6b3c pop esi */
  ESI = (pop32());
  /* 10ed6b3d pop ebx */
  EBX = (pop32());
  /* 10ed6b3e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed6b41 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed6b43 call 0x10ed9380 */
  push32(0x10ed6b48u); f_10ed9380();
  /* 10ed6b48 mov esp, ebp */
  ESP = (EBP);
  /* 10ed6b4a pop ebp */
  EBP = (pop32());
  /* 10ed6b4b ret  */
  ESPCHK(0x10ed6ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006b70 @ 0x10ed6b70 (125 bytes, 48 insns) */
void f_10ed6b70(void) {
  FTRACE(0x10ed6b70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed6b70 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed6b71 mov ebp, esp */
  EBP = (ESP);
  /* 10ed6b73 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed6b76 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed6b77 push esi */
  push32((uint32_t)(ESI));
  /* 10ed6b78 push edi */
  push32((uint32_t)(EDI));
  /* 10ed6b79 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed6b7a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed6b7d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed6b82 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed6b87 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed6b89 pop ecx */
  ECX = (pop32());
  /* 10ed6b8a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed6b8d mov esi, esp */
  ESI = (ESP);
  /* 10ed6b8f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed6b91 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6b94 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed6b97 push eax */
  push32((uint32_t)(EAX));
  /* 10ed6b98 call dword ptr [0x10f12564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12564))), 0x10ed6b9eu);
  /* 10ed6b9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed6ba1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed6ba3 call 0x10ed9380 */
  push32(0x10ed6ba8u); f_10ed9380();
  /* 10ed6ba8 mov esi, esp */
  ESI = (ESP);
  /* 10ed6baa push 1 */
  push32((uint32_t)(0x1u));
  /* 10ed6bac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6baf mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 10ed6bb2 push edx */
  push32((uint32_t)(EDX));
  /* 10ed6bb3 call dword ptr [0x10f12564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12564))), 0x10ed6bb9u);
  /* 10ed6bb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed6bbc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed6bbe call 0x10ed9380 */
  push32(0x10ed6bc3u); f_10ed9380();
  /* 10ed6bc3 mov esi, esp */
  ESI = (ESP);
  /* 10ed6bc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6bc8 mov cl, byte ptr [eax + 0x18] */
  CL = (r8((uint32_t)(EAX + 0x18)));
  /* 10ed6bcb push ecx */
  push32((uint32_t)(ECX));
  /* 10ed6bcc call dword ptr [0x10f124d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f124d0))), 0x10ed6bd2u);
  /* 10ed6bd2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed6bd5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed6bd7 call 0x10ed9380 */
  push32(0x10ed6bdcu); f_10ed9380();
  /* 10ed6bdc pop edi */
  EDI = (pop32());
  /* 10ed6bdd pop esi */
  ESI = (pop32());
  /* 10ed6bde pop ebx */
  EBX = (pop32());
  /* 10ed6bdf add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed6be2 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed6be4 call 0x10ed9380 */
  push32(0x10ed6be9u); f_10ed9380();
  /* 10ed6be9 mov esp, ebp */
  ESP = (EBP);
  /* 10ed6beb pop ebp */
  EBP = (pop32());
  /* 10ed6bec ret  */
  ESPCHK(0x10ed6b70u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c10 @ 0x10ed6c10 (98 bytes, 39 insns) */
void f_10ed6c10(void) {
  FTRACE(0x10ed6c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed6c10 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed6c11 mov ebp, esp */
  EBP = (ESP);
  /* 10ed6c13 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed6c16 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed6c17 push esi */
  push32((uint32_t)(ESI));
  /* 10ed6c18 push edi */
  push32((uint32_t)(EDI));
  /* 10ed6c19 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed6c1a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed6c1d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed6c22 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed6c27 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed6c29 pop ecx */
  ECX = (pop32());
  /* 10ed6c2a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed6c2d mov esi, esp */
  ESI = (ESP);
  /* 10ed6c2f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed6c31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6c34 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed6c37 push eax */
  push32((uint32_t)(EAX));
  /* 10ed6c38 call dword ptr [0x10f12564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12564))), 0x10ed6c3eu);
  /* 10ed6c3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed6c41 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed6c43 call 0x10ed9380 */
  push32(0x10ed6c48u); f_10ed9380();
  /* 10ed6c48 mov esi, esp */
  ESI = (ESP);
  /* 10ed6c4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6c4d mov dl, byte ptr [ecx + 0x18] */
  DL = (r8((uint32_t)(ECX + 0x18)));
  /* 10ed6c50 push edx */
  push32((uint32_t)(EDX));
  /* 10ed6c51 call dword ptr [0x10f124cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f124cc))), 0x10ed6c57u);
  /* 10ed6c57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed6c5a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed6c5c call 0x10ed9380 */
  push32(0x10ed6c61u); f_10ed9380();
  /* 10ed6c61 pop edi */
  EDI = (pop32());
  /* 10ed6c62 pop esi */
  ESI = (pop32());
  /* 10ed6c63 pop ebx */
  EBX = (pop32());
  /* 10ed6c64 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed6c67 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed6c69 call 0x10ed9380 */
  push32(0x10ed6c6eu); f_10ed9380();
  /* 10ed6c6e mov esp, ebp */
  ESP = (EBP);
  /* 10ed6c70 pop ebp */
  EBP = (pop32());
  /* 10ed6c71 ret  */
  ESPCHK(0x10ed6c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10006c90 @ 0x10ed6c90 (402 bytes, 129 insns) [1 switch table(s)] */
void f_10ed6c90(void) {
  FTRACE(0x10ed6c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed6c90 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed6c91 mov ebp, esp */
  EBP = (ESP);
  /* 10ed6c93 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed6c96 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed6c97 push esi */
  push32((uint32_t)(ESI));
  /* 10ed6c98 push edi */
  push32((uint32_t)(EDI));
  /* 10ed6c99 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed6c9a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 10ed6c9d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 10ed6ca2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed6ca7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed6ca9 pop ecx */
  ECX = (pop32());
  /* 10ed6caa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed6cad mov esi, esp */
  ESI = (ESP);
  /* 10ed6caf push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed6cb1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6cb4 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed6cb7 push eax */
  push32((uint32_t)(EAX));
  /* 10ed6cb8 call dword ptr [0x10f12564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12564))), 0x10ed6cbeu);
  /* 10ed6cbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed6cc1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed6cc3 call 0x10ed9380 */
  push32(0x10ed6cc8u); f_10ed9380();
  /* 10ed6cc8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6ccb mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 10ed6cce mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10ed6cd1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ed6cd4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed6cd7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ed6cda cmp dword ptr [ebp - 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed6cde ja 0x10ed6e11 */
  if ((!C.cf&&!C.zf)) goto L_10ed6e11;
  /* 10ed6ce4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ed6ce7 jmp dword ptr [ecx*4 + 0x10ed6e22] */
  switch (ECX) {
    case 0: goto L_10ed6cee;
    case 1: goto L_10ed6d27;
    case 2: goto L_10ed6d6b;
    case 3: goto L_10ed6da1;
    case 4: goto L_10ed6de5;
    default: x86_unimpl("switch@0x10ed6ce7 out of table"); return;
  }
L_10ed6cee:;
  /* 10ed6cee mov esi, esp */
  ESI = (ESP);
  /* 10ed6cf0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6cf3 mov al, byte ptr [edx + 0x18] */
  AL = (r8((uint32_t)(EDX + 0x18)));
  /* 10ed6cf6 push eax */
  push32((uint32_t)(EAX));
  /* 10ed6cf7 call dword ptr [0x10f124c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f124c8))), 0x10ed6cfdu);
  /* 10ed6cfd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed6d00 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed6d02 call 0x10ed9380 */
  push32(0x10ed6d07u); f_10ed9380();
  /* 10ed6d07 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ed6d0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ed6d0e je 0x10ed6d22 */
  if (C.zf) goto L_10ed6d22;
  /* 10ed6d10 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6d13 call 0x10ed121c */
  push32(0x10ed6d18u); f_10ed121c();
  /* 10ed6d18 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6d1b mov dword ptr [ecx + 0x14], 2 */
  w32((uint32_t)(ECX + 0x14), (0x2u));
L_10ed6d22:;
  /* 10ed6d22 jmp 0x10ed6e11 */
  goto L_10ed6e11;
L_10ed6d27:;
  /* 10ed6d27 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6d2a call 0x10ed1145 */
  push32(0x10ed6d2fu); f_10ed1145();
  /* 10ed6d2f and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ed6d34 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ed6d36 je 0x10ed6d66 */
  if (C.zf) goto L_10ed6d66;
  /* 10ed6d38 mov esi, esp */
  ESI = (ESP);
  /* 10ed6d3a push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed6d3c push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed6d3e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6d41 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10ed6d44 push eax */
  push32((uint32_t)(EAX));
  /* 10ed6d45 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6d48 mov dl, byte ptr [ecx + 0x18] */
  DL = (r8((uint32_t)(ECX + 0x18)));
  /* 10ed6d4b push edx */
  push32((uint32_t)(EDX));
  /* 10ed6d4c call dword ptr [0x10f12574] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12574))), 0x10ed6d52u);
  /* 10ed6d52 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed6d55 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed6d57 call 0x10ed9380 */
  push32(0x10ed6d5cu); f_10ed9380();
  /* 10ed6d5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6d5f mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
L_10ed6d66:;
  /* 10ed6d66 jmp 0x10ed6e11 */
  goto L_10ed6e11;
L_10ed6d6b:;
  /* 10ed6d6b mov esi, esp */
  ESI = (ESP);
  /* 10ed6d6d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6d70 mov dl, byte ptr [ecx + 0x18] */
  DL = (r8((uint32_t)(ECX + 0x18)));
  /* 10ed6d73 push edx */
  push32((uint32_t)(EDX));
  /* 10ed6d74 call dword ptr [0x10f124c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f124c8))), 0x10ed6d7au);
  /* 10ed6d7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed6d7d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed6d7f call 0x10ed9380 */
  push32(0x10ed6d84u); f_10ed9380();
  /* 10ed6d84 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ed6d89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ed6d8b je 0x10ed6d9f */
  if (C.zf) goto L_10ed6d9f;
  /* 10ed6d8d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6d90 call 0x10ed1078 */
  push32(0x10ed6d95u); f_10ed1078();
  /* 10ed6d95 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6d98 mov dword ptr [eax + 0x14], 4 */
  w32((uint32_t)(EAX + 0x14), (0x4u));
L_10ed6d9f:;
  /* 10ed6d9f jmp 0x10ed6e11 */
  goto L_10ed6e11;
L_10ed6da1:;
  /* 10ed6da1 mov esi, esp */
  ESI = (ESP);
  /* 10ed6da3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6da6 mov dl, byte ptr [ecx + 0x18] */
  DL = (r8((uint32_t)(ECX + 0x18)));
  /* 10ed6da9 push edx */
  push32((uint32_t)(EDX));
  /* 10ed6daa call dword ptr [0x10f124d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f124d4))), 0x10ed6db0u);
  /* 10ed6db0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed6db3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed6db5 call 0x10ed9380 */
  push32(0x10ed6dbau); f_10ed9380();
  /* 10ed6dba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ed6dbc jne 0x10ed6de3 */
  if (!C.zf) goto L_10ed6de3;
  /* 10ed6dbe mov esi, esp */
  ESI = (ESP);
  /* 10ed6dc0 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10ed6dc2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6dc5 mov cl, byte ptr [eax + 0x1c] */
  CL = (r8((uint32_t)(EAX + 0x1c)));
  /* 10ed6dc8 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed6dc9 call dword ptr [0x10f12514] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12514))), 0x10ed6dcfu);
  /* 10ed6dcf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed6dd2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed6dd4 call 0x10ed9380 */
  push32(0x10ed6dd9u); f_10ed9380();
  /* 10ed6dd9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6ddc mov dword ptr [edx + 0x14], 5 */
  w32((uint32_t)(EDX + 0x14), (0x5u));
L_10ed6de3:;
  /* 10ed6de3 jmp 0x10ed6e11 */
  goto L_10ed6e11;
L_10ed6de5:;
  /* 10ed6de5 mov esi, esp */
  ESI = (ESP);
  /* 10ed6de7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6dea mov cl, byte ptr [eax + 0x1c] */
  CL = (r8((uint32_t)(EAX + 0x1c)));
  /* 10ed6ded push ecx */
  push32((uint32_t)(ECX));
  /* 10ed6dee call dword ptr [0x10f12520] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12520))), 0x10ed6df4u);
  /* 10ed6df4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed6df7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed6df9 call 0x10ed9380 */
  push32(0x10ed6dfeu); f_10ed9380();
  /* 10ed6dfe and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ed6e03 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ed6e05 je 0x10ed6e11 */
  if (C.zf) goto L_10ed6e11;
  /* 10ed6e07 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6e0a mov dword ptr [edx + 0x14], 0 */
  w32((uint32_t)(EDX + 0x14), (0x0u));
L_10ed6e11:;
  /* 10ed6e11 pop edi */
  EDI = (pop32());
  /* 10ed6e12 pop esi */
  ESI = (pop32());
  /* 10ed6e13 pop ebx */
  EBX = (pop32());
  /* 10ed6e14 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed6e17 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed6e19 call 0x10ed9380 */
  push32(0x10ed6e1eu); f_10ed9380();
  /* 10ed6e1e mov esp, ebp */
  ESP = (EBP);
  /* 10ed6e20 pop ebp */
  EBP = (pop32());
  /* 10ed6e21 ret  */
  ESPCHK(0x10ed6c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ea0 @ 0x10ed6ea0 (39 bytes, 18 insns) */
void f_10ed6ea0(void) {
  FTRACE(0x10ed6ea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed6ea0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed6ea1 mov ebp, esp */
  EBP = (ESP);
  /* 10ed6ea3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed6ea6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed6ea7 push esi */
  push32((uint32_t)(ESI));
  /* 10ed6ea8 push edi */
  push32((uint32_t)(EDI));
  /* 10ed6ea9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10ed6eac mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10ed6eb1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed6eb6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed6eb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed6ebb mov dword ptr [0x10f0f478], eax */
  w32((uint32_t)(0x10f0f478), (EAX));
  /* 10ed6ec0 pop edi */
  EDI = (pop32());
  /* 10ed6ec1 pop esi */
  ESI = (pop32());
  /* 10ed6ec2 pop ebx */
  EBX = (pop32());
  /* 10ed6ec3 mov esp, ebp */
  ESP = (EBP);
  /* 10ed6ec5 pop ebp */
  EBP = (pop32());
  /* 10ed6ec6 ret  */
  ESPCHK(0x10ed6ea0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006ed0 @ 0x10ed6ed0 (93 bytes, 34 insns) */
void f_10ed6ed0(void) {
  FTRACE(0x10ed6ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed6ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed6ed1 mov ebp, esp */
  EBP = (ESP);
  /* 10ed6ed3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed6ed6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed6ed7 push esi */
  push32((uint32_t)(ESI));
  /* 10ed6ed8 push edi */
  push32((uint32_t)(EDI));
  /* 10ed6ed9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10ed6edc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10ed6ee1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed6ee6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed6ee8 cmp dword ptr [0x10f0f478], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f478))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed6eef je 0x10ed6f1c */
  if (C.zf) goto L_10ed6f1c;
  /* 10ed6ef1 mov ecx, dword ptr [0x10f0f478] */
  ECX = (r32((uint32_t)(0x10f0f478)));
  /* 10ed6ef7 call 0x10ed10e6 */
  push32(0x10ed6efcu); f_10ed10e6();
  /* 10ed6efc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ed6f01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ed6f03 je 0x10ed6f1c */
  if (C.zf) goto L_10ed6f1c;
  /* 10ed6f05 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ed6f08 push eax */
  push32((uint32_t)(EAX));
  /* 10ed6f09 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ed6f0c push ecx */
  push32((uint32_t)(ECX));
  /* 10ed6f0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed6f10 push edx */
  push32((uint32_t)(EDX));
  /* 10ed6f11 mov ecx, dword ptr [0x10f0f478] */
  ECX = (r32((uint32_t)(0x10f0f478)));
  /* 10ed6f17 call 0x10ed111d */
  push32(0x10ed6f1cu); f_10ed111d();
L_10ed6f1c:;
  /* 10ed6f1c pop edi */
  EDI = (pop32());
  /* 10ed6f1d pop esi */
  ESI = (pop32());
  /* 10ed6f1e pop ebx */
  EBX = (pop32());
  /* 10ed6f1f add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed6f22 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed6f24 call 0x10ed9380 */
  push32(0x10ed6f29u); f_10ed9380();
  /* 10ed6f29 mov esp, ebp */
  ESP = (EBP);
  /* 10ed6f2b pop ebp */
  EBP = (pop32());
  /* 10ed6f2c ret  */
  ESPCHK(0x10ed6ed0u, _esp0);
  ESP += 4; return;
}

/* FUN_10006f50 @ 0x10ed6f50 (437 bytes, 146 insns) */
void f_10ed6f50(void) {
  FTRACE(0x10ed6f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed6f50 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed6f51 mov ebp, esp */
  EBP = (ESP);
  /* 10ed6f53 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed6f56 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed6f57 push esi */
  push32((uint32_t)(ESI));
  /* 10ed6f58 push edi */
  push32((uint32_t)(EDI));
  /* 10ed6f59 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed6f5a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 10ed6f5d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 10ed6f62 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed6f67 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed6f69 pop ecx */
  ECX = (pop32());
  /* 10ed6f6a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed6f6d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6f70 call 0x10ed105a */
  push32(0x10ed6f75u); f_10ed105a();
  /* 10ed6f75 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ed6f7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ed6f7c je 0x10ed70f4 */
  if (C.zf) goto L_10ed70f4;
  /* 10ed6f82 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6f85 mov cl, byte ptr [eax + 0x1c] */
  CL = (r8((uint32_t)(EAX + 0x1c)));
  /* 10ed6f88 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10ed6f8b cmp byte ptr [ebp - 8], 1 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ed6f8f je 0x10ed7049 */
  if (C.zf) goto L_10ed7049;
  /* 10ed6f95 cmp byte ptr [ebp - 8], 2 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10ed6f99 je 0x10ed6fa0 */
  if (C.zf) goto L_10ed6fa0;
  /* 10ed6f9b jmp 0x10ed709f */
  goto L_10ed709f;
L_10ed6fa0:;
  /* 10ed6fa0 cmp dword ptr [0x10f0f480], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f480))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed6fa7 je 0x10ed6fef */
  if (C.zf) goto L_10ed6fef;
  /* 10ed6fa9 mov esi, esp */
  ESI = (ESP);
  /* 10ed6fab push 3 */
  push32((uint32_t)(0x3u));
  /* 10ed6fad mov edx, dword ptr [0x10f0f480] */
  EDX = (r32((uint32_t)(0x10f0f480)));
  /* 10ed6fb3 push edx */
  push32((uint32_t)(EDX));
  /* 10ed6fb4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6fb7 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed6fba push eax */
  push32((uint32_t)(EAX));
  /* 10ed6fbb call dword ptr [0x10f12570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12570))), 0x10ed6fc1u);
  /* 10ed6fc1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed6fc4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed6fc6 call 0x10ed9380 */
  push32(0x10ed6fcbu); f_10ed9380();
  /* 10ed6fcb mov esi, esp */
  ESI = (ESP);
  /* 10ed6fcd push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed6fcf mov ecx, dword ptr [0x10f0f480] */
  ECX = (r32((uint32_t)(0x10f0f480)));
  /* 10ed6fd5 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed6fd6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6fd9 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed6fdc push edx */
  push32((uint32_t)(EDX));
  /* 10ed6fdd call dword ptr [0x10f12570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12570))), 0x10ed6fe3u);
  /* 10ed6fe3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed6fe6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed6fe8 call 0x10ed9380 */
  push32(0x10ed6fedu); f_10ed9380();
  /* 10ed6fed jmp 0x10ed7044 */
  goto L_10ed7044;
L_10ed6fef:;
  /* 10ed6fef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed6ff2 call 0x10ed109b */
  push32(0x10ed6ff7u); f_10ed109b();
  /* 10ed6ff7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ed6ffc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ed6ffe jne 0x10ed7044 */
  if (!C.zf) goto L_10ed7044;
  /* 10ed7000 mov esi, esp */
  ESI = (ESP);
  /* 10ed7002 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed7004 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7007 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed700a push eax */
  push32((uint32_t)(EAX));
  /* 10ed700b call dword ptr [0x10f12564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12564))), 0x10ed7011u);
  /* 10ed7011 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7014 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed7016 call 0x10ed9380 */
  push32(0x10ed701bu); f_10ed9380();
  /* 10ed701b mov esi, esp */
  ESI = (ESP);
  /* 10ed701d push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed701f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7022 mov dl, byte ptr [ecx + 8] */
  DL = (r8((uint32_t)(ECX + 0x8)));
  /* 10ed7025 push edx */
  push32((uint32_t)(EDX));
  /* 10ed7026 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7029 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed702c push eax */
  push32((uint32_t)(EAX));
  /* 10ed702d mov cl, byte ptr [0x10f0f47c] */
  CL = (r8((uint32_t)(0x10f0f47c)));
  /* 10ed7033 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed7034 call dword ptr [0x10f1256c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1256c))), 0x10ed703au);
  /* 10ed703a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed703d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed703f call 0x10ed9380 */
  push32(0x10ed7044u); f_10ed9380();
L_10ed7044:;
  /* 10ed7044 jmp 0x10ed70f4 */
  goto L_10ed70f4;
L_10ed7049:;
  /* 10ed7049 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed704c call 0x10ed109b */
  push32(0x10ed7051u); f_10ed109b();
  /* 10ed7051 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ed7056 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ed7058 jne 0x10ed709d */
  if (!C.zf) goto L_10ed709d;
  /* 10ed705a mov esi, esp */
  ESI = (ESP);
  /* 10ed705c push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed705e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7061 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7064 push edx */
  push32((uint32_t)(EDX));
  /* 10ed7065 call dword ptr [0x10f12564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12564))), 0x10ed706bu);
  /* 10ed706b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed706e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed7070 call 0x10ed9380 */
  push32(0x10ed7075u); f_10ed9380();
  /* 10ed7075 mov esi, esp */
  ESI = (ESP);
  /* 10ed7077 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed7079 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed707c mov cl, byte ptr [eax + 8] */
  CL = (r8((uint32_t)(EAX + 0x8)));
  /* 10ed707f push ecx */
  push32((uint32_t)(ECX));
  /* 10ed7080 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7083 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7086 push edx */
  push32((uint32_t)(EDX));
  /* 10ed7087 mov al, byte ptr [0x10f0f47c] */
  AL = (r8((uint32_t)(0x10f0f47c)));
  /* 10ed708c push eax */
  push32((uint32_t)(EAX));
  /* 10ed708d call dword ptr [0x10f1256c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1256c))), 0x10ed7093u);
  /* 10ed7093 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7096 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed7098 call 0x10ed9380 */
  push32(0x10ed709du); f_10ed9380();
L_10ed709d:;
  /* 10ed709d jmp 0x10ed70f4 */
  goto L_10ed70f4;
L_10ed709f:;
  /* 10ed709f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed70a2 call 0x10ed109b */
  push32(0x10ed70a7u); f_10ed109b();
  /* 10ed70a7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ed70ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ed70ae jne 0x10ed70f4 */
  if (!C.zf) goto L_10ed70f4;
  /* 10ed70b0 mov esi, esp */
  ESI = (ESP);
  /* 10ed70b2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed70b4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed70b7 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed70ba push ecx */
  push32((uint32_t)(ECX));
  /* 10ed70bb call dword ptr [0x10f12564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12564))), 0x10ed70c1u);
  /* 10ed70c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed70c4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed70c6 call 0x10ed9380 */
  push32(0x10ed70cbu); f_10ed9380();
  /* 10ed70cb mov esi, esp */
  ESI = (ESP);
  /* 10ed70cd push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed70cf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed70d2 mov al, byte ptr [edx + 8] */
  AL = (r8((uint32_t)(EDX + 0x8)));
  /* 10ed70d5 push eax */
  push32((uint32_t)(EAX));
  /* 10ed70d6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed70d9 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed70dc push ecx */
  push32((uint32_t)(ECX));
  /* 10ed70dd mov dl, byte ptr [0x10f0f47c] */
  DL = (r8((uint32_t)(0x10f0f47c)));
  /* 10ed70e3 push edx */
  push32((uint32_t)(EDX));
  /* 10ed70e4 call dword ptr [0x10f12574] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12574))), 0x10ed70eau);
  /* 10ed70ea add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed70ed cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed70ef call 0x10ed9380 */
  push32(0x10ed70f4u); f_10ed9380();
L_10ed70f4:;
  /* 10ed70f4 pop edi */
  EDI = (pop32());
  /* 10ed70f5 pop esi */
  ESI = (pop32());
  /* 10ed70f6 pop ebx */
  EBX = (pop32());
  /* 10ed70f7 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed70fa cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed70fc call 0x10ed9380 */
  push32(0x10ed7101u); f_10ed9380();
  /* 10ed7101 mov esp, ebp */
  ESP = (EBP);
  /* 10ed7103 pop ebp */
  EBP = (pop32());
  /* 10ed7104 ret  */
  ESPCHK(0x10ed6f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10007180 @ 0x10ed7180 (235 bytes, 78 insns) */
void f_10ed7180(void) {
  FTRACE(0x10ed7180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed7180 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed7181 mov ebp, esp */
  EBP = (ESP);
  /* 10ed7183 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed7189 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed718a push esi */
  push32((uint32_t)(ESI));
  /* 10ed718b push edi */
  push32((uint32_t)(EDI));
  /* 10ed718c push ecx */
  push32((uint32_t)(ECX));
  /* 10ed718d lea edi, [ebp - 0x88] */
  EDI = ((uint32_t)(EBP + -0x88));
  /* 10ed7193 mov ecx, 0x22 */
  ECX = (0x22u);
  /* 10ed7198 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed719d rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed719f pop ecx */
  ECX = (pop32());
  /* 10ed71a0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed71a3 mov dword ptr [ebp - 0x38], 0 */
  w32((uint32_t)(EBP + -0x38), (0x0u));
  /* 10ed71aa mov dword ptr [ebp - 0x34], 0 */
  w32((uint32_t)(EBP + -0x34), (0x0u));
  /* 10ed71b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed71b4 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed71b7 mov esi, esp */
  ESI = (ESP);
  /* 10ed71b9 push eax */
  push32((uint32_t)(EAX));
  /* 10ed71ba call dword ptr [0x10f1258c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1258c))), 0x10ed71c0u);
  /* 10ed71c0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed71c3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed71c5 call 0x10ed9380 */
  push32(0x10ed71cau); f_10ed9380();
  /* 10ed71ca mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 10ed71cd cmp dword ptr [ebp - 0x3c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed71d1 jle 0x10ed7244 */
  if ((C.zf||C.sf!=C.of)) goto L_10ed7244;
  /* 10ed71d3 mov dword ptr [ebp - 0x40], 0 */
  w32((uint32_t)(EBP + -0x40), (0x0u));
  /* 10ed71da mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 10ed71e1 mov dword ptr [ebp - 0x48], 0 */
  w32((uint32_t)(EBP + -0x48), (0x0u));
  /* 10ed71e8 jmp 0x10ed71f3 */
  goto L_10ed71f3;
L_10ed71ea:;
  /* 10ed71ea mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 10ed71ed add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed71f0 mov dword ptr [ebp - 0x48], ecx */
  w32((uint32_t)(EBP + -0x48), (ECX));
L_10ed71f3:;
  /* 10ed71f3 mov edx, dword ptr [ebp - 0x48] */
  EDX = (r32((uint32_t)(EBP + -0x48)));
  /* 10ed71f6 cmp edx, dword ptr [ebp - 0x3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed71f9 jge 0x10ed7230 */
  if ((C.sf==C.of)) goto L_10ed7230;
  /* 10ed71fb mov esi, esp */
  ESI = (ESP);
  /* 10ed71fd lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 10ed7200 push eax */
  push32((uint32_t)(EAX));
  /* 10ed7201 mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 10ed7204 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed7205 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7208 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed720b push edx */
  push32((uint32_t)(EDX));
  /* 10ed720c call dword ptr [0x10f12590] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12590))), 0x10ed7212u);
  /* 10ed7212 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7215 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed7217 call 0x10ed9380 */
  push32(0x10ed721cu); f_10ed9380();
  /* 10ed721c mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10ed721f add eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7222 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 10ed7225 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 10ed7228 add ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed722b mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 10ed722e jmp 0x10ed71ea */
  goto L_10ed71ea;
L_10ed7230:;
  /* 10ed7230 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10ed7233 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ed7234 idiv dword ptr [ebp - 0x3c] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + -0x3c))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ed7237 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 10ed723a mov eax, dword ptr [ebp - 0x44] */
  EAX = (r32((uint32_t)(EBP + -0x44)));
  /* 10ed723d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ed723e idiv dword ptr [ebp - 0x3c] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + -0x3c))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ed7241 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_10ed7244:;
  /* 10ed7244 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed7247 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ed724a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10ed724c mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10ed724f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10ed7252 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed7255 pop edi */
  EDI = (pop32());
  /* 10ed7256 pop esi */
  ESI = (pop32());
  /* 10ed7257 pop ebx */
  EBX = (pop32());
  /* 10ed7258 add esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed725e cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed7260 call 0x10ed9380 */
  push32(0x10ed7265u); f_10ed9380();
  /* 10ed7265 mov esp, ebp */
  ESP = (EBP);
  /* 10ed7267 pop ebp */
  EBP = (pop32());
  /* 10ed7268 ret 4 */
  ESPCHK(0x10ed7180u, _esp0);
  ESP += 8; return;
}

/* FUN_100072b0 @ 0x10ed72b0 (120 bytes, 47 insns) */
void f_10ed72b0(void) {
  FTRACE(0x10ed72b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed72b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed72b1 mov ebp, esp */
  EBP = (ESP);
  /* 10ed72b3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed72b6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed72b7 push esi */
  push32((uint32_t)(ESI));
  /* 10ed72b8 push edi */
  push32((uint32_t)(EDI));
  /* 10ed72b9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed72ba lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 10ed72bd mov ecx, 0x12 */
  ECX = (0x12u);
  /* 10ed72c2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed72c7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed72c9 pop ecx */
  ECX = (pop32());
  /* 10ed72ca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed72cd mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ed72d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed72d4 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed72d7 mov esi, esp */
  ESI = (ESP);
  /* 10ed72d9 push eax */
  push32((uint32_t)(EAX));
  /* 10ed72da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed72dd add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed72e0 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed72e1 call dword ptr [0x10f12578] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12578))), 0x10ed72e7u);
  /* 10ed72e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed72ea cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed72ec call 0x10ed9380 */
  push32(0x10ed72f1u); f_10ed9380();
  /* 10ed72f1 mov esi, eax */
  ESI = (EAX);
  /* 10ed72f3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed72f6 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed72f9 mov edi, esp */
  EDI = (ESP);
  /* 10ed72fb push edx */
  push32((uint32_t)(EDX));
  /* 10ed72fc call dword ptr [0x10f1258c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1258c))), 0x10ed7302u);
  /* 10ed7302 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7305 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed7307 call 0x10ed9380 */
  push32(0x10ed730cu); f_10ed9380();
  /* 10ed730c cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed730e jne 0x10ed7314 */
  if (!C.zf) goto L_10ed7314;
  /* 10ed7310 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_10ed7314:;
  /* 10ed7314 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10ed7317 pop edi */
  EDI = (pop32());
  /* 10ed7318 pop esi */
  ESI = (pop32());
  /* 10ed7319 pop ebx */
  EBX = (pop32());
  /* 10ed731a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed731d cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed731f call 0x10ed9380 */
  push32(0x10ed7324u); f_10ed9380();
  /* 10ed7324 mov esp, ebp */
  ESP = (EBP);
  /* 10ed7326 pop ebp */
  EBP = (pop32());
  /* 10ed7327 ret  */
  ESPCHK(0x10ed72b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007350 @ 0x10ed7350 (86 bytes, 35 insns) */
void f_10ed7350(void) {
  FTRACE(0x10ed7350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed7350 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed7351 mov ebp, esp */
  EBP = (ESP);
  /* 10ed7353 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed7356 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed7357 push esi */
  push32((uint32_t)(ESI));
  /* 10ed7358 push edi */
  push32((uint32_t)(EDI));
  /* 10ed7359 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed735a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 10ed735d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 10ed7362 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed7367 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed7369 pop ecx */
  ECX = (pop32());
  /* 10ed736a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed736d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ed7371 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7374 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7377 mov esi, esp */
  ESI = (ESP);
  /* 10ed7379 push eax */
  push32((uint32_t)(EAX));
  /* 10ed737a call dword ptr [0x10f1258c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1258c))), 0x10ed7380u);
  /* 10ed7380 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7383 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed7385 call 0x10ed9380 */
  push32(0x10ed738au); f_10ed9380();
  /* 10ed738a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ed738c jle 0x10ed7392 */
  if ((C.zf||C.sf!=C.of)) goto L_10ed7392;
  /* 10ed738e mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_10ed7392:;
  /* 10ed7392 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10ed7395 pop edi */
  EDI = (pop32());
  /* 10ed7396 pop esi */
  ESI = (pop32());
  /* 10ed7397 pop ebx */
  EBX = (pop32());
  /* 10ed7398 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed739b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed739d call 0x10ed9380 */
  push32(0x10ed73a2u); f_10ed9380();
  /* 10ed73a2 mov esp, ebp */
  ESP = (EBP);
  /* 10ed73a4 pop ebp */
  EBP = (pop32());
  /* 10ed73a5 ret  */
  ESPCHK(0x10ed7350u, _esp0);
  ESP += 4; return;
}

/* FUN_100073c0 @ 0x10ed73c0 (42 bytes, 21 insns) */
void f_10ed73c0(void) {
  FTRACE(0x10ed73c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed73c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed73c1 mov ebp, esp */
  EBP = (ESP);
  /* 10ed73c3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed73c6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed73c7 push esi */
  push32((uint32_t)(ESI));
  /* 10ed73c8 push edi */
  push32((uint32_t)(EDI));
  /* 10ed73c9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed73ca lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed73cd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed73d2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed73d7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed73d9 pop ecx */
  ECX = (pop32());
  /* 10ed73da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed73dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed73e0 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed73e3 pop edi */
  EDI = (pop32());
  /* 10ed73e4 pop esi */
  ESI = (pop32());
  /* 10ed73e5 pop ebx */
  EBX = (pop32());
  /* 10ed73e6 mov esp, ebp */
  ESP = (EBP);
  /* 10ed73e8 pop ebp */
  EBP = (pop32());
  /* 10ed73e9 ret  */
  ESPCHK(0x10ed73c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007400 @ 0x10ed7400 (77 bytes, 32 insns) */
void f_10ed7400(void) {
  FTRACE(0x10ed7400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed7400 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed7401 mov ebp, esp */
  EBP = (ESP);
  /* 10ed7403 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed7406 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed7407 push esi */
  push32((uint32_t)(ESI));
  /* 10ed7408 push edi */
  push32((uint32_t)(EDI));
  /* 10ed7409 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed740a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed740d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed7412 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed7417 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed7419 pop ecx */
  ECX = (pop32());
  /* 10ed741a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed741d mov esi, esp */
  ESI = (ESP);
  /* 10ed741f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed7422 push eax */
  push32((uint32_t)(EAX));
  /* 10ed7423 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7426 add ecx, 0xd */
  { uint32_t _a=(ECX),_b=(0xdu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7429 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed742a call dword ptr [0x10f124d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f124d8))), 0x10ed7430u);
  /* 10ed7430 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7433 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed7435 call 0x10ed9380 */
  push32(0x10ed743au); f_10ed9380();
  /* 10ed743a pop edi */
  EDI = (pop32());
  /* 10ed743b pop esi */
  ESI = (pop32());
  /* 10ed743c pop ebx */
  EBX = (pop32());
  /* 10ed743d add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7440 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed7442 call 0x10ed9380 */
  push32(0x10ed7447u); f_10ed9380();
  /* 10ed7447 mov esp, ebp */
  ESP = (EBP);
  /* 10ed7449 pop ebp */
  EBP = (pop32());
  /* 10ed744a ret 4 */
  ESPCHK(0x10ed7400u, _esp0);
  ESP += 8; return;
}

/* FUN_10007460 @ 0x10ed7460 (413 bytes, 143 insns) */
void f_10ed7460(void) {
  FTRACE(0x10ed7460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed7460 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed7461 mov ebp, esp */
  EBP = (ESP);
  /* 10ed7463 sub esp, 0x54 */
  { uint32_t _a=(ESP),_b=(0x54u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed7466 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed7467 push esi */
  push32((uint32_t)(ESI));
  /* 10ed7468 push edi */
  push32((uint32_t)(EDI));
  /* 10ed7469 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed746a lea edi, [ebp - 0x54] */
  EDI = ((uint32_t)(EBP + -0x54));
  /* 10ed746d mov ecx, 0x15 */
  ECX = (0x15u);
  /* 10ed7472 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed7477 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed7479 pop ecx */
  ECX = (pop32());
  /* 10ed747a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed747d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7480 call 0x10ed10d2 */
  push32(0x10ed7485u); f_10ed10d2();
  /* 10ed7485 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ed748a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ed748c je 0x10ed75ec */
  if (C.zf) goto L_10ed75ec;
  /* 10ed7492 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7495 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ed7497 mov cl, byte ptr [eax + 0xc] */
  CL = (r8((uint32_t)(EAX + 0xc)));
  /* 10ed749a cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed749d jne 0x10ed7548 */
  if (!C.zf) goto L_10ed7548;
  /* 10ed74a3 push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10ed74a8 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10ed74ab push edx */
  push32((uint32_t)(EDX));
  /* 10ed74ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed74af call 0x10ed10b9 */
  push32(0x10ed74b4u); f_10ed10b9();
  /* 10ed74b4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ed74b7 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed74b8 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10ed74ba push edx */
  push32((uint32_t)(EDX));
  /* 10ed74bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed74be add eax, 0x15 */
  { uint32_t _a=(EAX),_b=(0x15u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed74c1 push eax */
  push32((uint32_t)(EAX));
  /* 10ed74c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed74c5 call 0x10ed12df */
  push32(0x10ed74cau); f_10ed12df();
  /* 10ed74ca mov esi, esp */
  ESI = (ESP);
  /* 10ed74cc push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed74ce mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed74d1 add ecx, 0x15 */
  { uint32_t _a=(ECX),_b=(0x15u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed74d4 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed74d5 call dword ptr [0x10f12560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12560))), 0x10ed74dbu);
  /* 10ed74db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed74de cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed74e0 call 0x10ed9380 */
  push32(0x10ed74e5u); f_10ed9380();
  /* 10ed74e5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed74e8 jge 0x10ed74f3 */
  if ((C.sf==C.of)) goto L_10ed74f3;
  /* 10ed74ea mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed74ed mov byte ptr [edx + 0xc], 2 */
  w8((uint32_t)(EDX + 0xc), (0x2u));
  /* 10ed74f1 jmp 0x10ed7548 */
  goto L_10ed7548;
L_10ed74f3:;
  /* 10ed74f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed74f6 call 0x10ed1181 */
  push32(0x10ed74fbu); f_10ed1181();
  /* 10ed74fb and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ed7500 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ed7502 jne 0x10ed7548 */
  if (!C.zf) goto L_10ed7548;
  /* 10ed7504 mov esi, esp */
  ESI = (ESP);
  /* 10ed7506 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed7508 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed750b add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed750e push eax */
  push32((uint32_t)(EAX));
  /* 10ed750f call dword ptr [0x10f12564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12564))), 0x10ed7515u);
  /* 10ed7515 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7518 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed751a call 0x10ed9380 */
  push32(0x10ed751fu); f_10ed9380();
  /* 10ed751f mov esi, esp */
  ESI = (ESP);
  /* 10ed7521 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed7523 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7526 mov dl, byte ptr [ecx + 8] */
  DL = (r8((uint32_t)(ECX + 0x8)));
  /* 10ed7529 push edx */
  push32((uint32_t)(EDX));
  /* 10ed752a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed752d add eax, 0x1d */
  { uint32_t _a=(EAX),_b=(0x1du),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7530 push eax */
  push32((uint32_t)(EAX));
  /* 10ed7531 mov cl, byte ptr [0x10f0cd5c] */
  CL = (r8((uint32_t)(0x10f0cd5c)));
  /* 10ed7537 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed7538 call dword ptr [0x10f12574] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12574))), 0x10ed753eu);
  /* 10ed753e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7541 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed7543 call 0x10ed9380 */
  push32(0x10ed7548u); f_10ed9380();
L_10ed7548:;
  /* 10ed7548 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed754b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ed754d mov al, byte ptr [edx + 0xc] */
  AL = (r8((uint32_t)(EDX + 0xc)));
  /* 10ed7550 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed7553 jne 0x10ed75ec */
  if (!C.zf) goto L_10ed75ec;
  /* 10ed7559 push 0x190 */
  push32((uint32_t)(0x190u));
  /* 10ed755e lea ecx, [ebp - 0x14] */
  ECX = ((uint32_t)(EBP + -0x14));
  /* 10ed7561 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed7562 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7565 call 0x10ed10b9 */
  push32(0x10ed756au); f_10ed10b9();
  /* 10ed756a mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ed756d push edx */
  push32((uint32_t)(EDX));
  /* 10ed756e mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 10ed7570 push eax */
  push32((uint32_t)(EAX));
  /* 10ed7571 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7574 add ecx, 0x15 */
  { uint32_t _a=(ECX),_b=(0x15u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7577 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed7578 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed757b call 0x10ed12df */
  push32(0x10ed7580u); f_10ed12df();
  /* 10ed7580 mov esi, esp */
  ESI = (ESP);
  /* 10ed7582 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed7584 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7587 add edx, 0x15 */
  { uint32_t _a=(EDX),_b=(0x15u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed758a push edx */
  push32((uint32_t)(EDX));
  /* 10ed758b call dword ptr [0x10f12560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12560))), 0x10ed7591u);
  /* 10ed7591 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7594 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed7596 call 0x10ed9380 */
  push32(0x10ed759bu); f_10ed9380();
  /* 10ed759b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed759e jge 0x10ed75e5 */
  if ((C.sf==C.of)) goto L_10ed75e5;
  /* 10ed75a0 mov esi, esp */
  ESI = (ESP);
  /* 10ed75a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed75a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed75a7 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed75aa push eax */
  push32((uint32_t)(EAX));
  /* 10ed75ab call dword ptr [0x10f12564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12564))), 0x10ed75b1u);
  /* 10ed75b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed75b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed75b6 call 0x10ed9380 */
  push32(0x10ed75bbu); f_10ed9380();
  /* 10ed75bb mov esi, esp */
  ESI = (ESP);
  /* 10ed75bd push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed75bf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed75c2 mov dl, byte ptr [ecx + 8] */
  DL = (r8((uint32_t)(ECX + 0x8)));
  /* 10ed75c5 push edx */
  push32((uint32_t)(EDX));
  /* 10ed75c6 mov eax, dword ptr [0x10f0f484] */
  EAX = (r32((uint32_t)(0x10f0f484)));
  /* 10ed75cb push eax */
  push32((uint32_t)(EAX));
  /* 10ed75cc mov cl, byte ptr [0x10f0cd5c] */
  CL = (r8((uint32_t)(0x10f0cd5c)));
  /* 10ed75d2 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed75d3 call dword ptr [0x10f12574] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12574))), 0x10ed75d9u);
  /* 10ed75d9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed75dc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed75de call 0x10ed9380 */
  push32(0x10ed75e3u); f_10ed9380();
  /* 10ed75e3 jmp 0x10ed75ec */
  goto L_10ed75ec;
L_10ed75e5:;
  /* 10ed75e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed75e8 mov byte ptr [edx + 0xc], 1 */
  w8((uint32_t)(EDX + 0xc), (0x1u));
L_10ed75ec:;
  /* 10ed75ec pop edi */
  EDI = (pop32());
  /* 10ed75ed pop esi */
  ESI = (pop32());
  /* 10ed75ee pop ebx */
  EBX = (pop32());
  /* 10ed75ef add esp, 0x54 */
  { uint32_t _a=(ESP),_b=(0x54u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed75f2 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed75f4 call 0x10ed9380 */
  push32(0x10ed75f9u); f_10ed9380();
  /* 10ed75f9 mov esp, ebp */
  ESP = (EBP);
  /* 10ed75fb pop ebp */
  EBP = (pop32());
  /* 10ed75fc ret  */
  ESPCHK(0x10ed7460u, _esp0);
  ESP += 4; return;
}

/* FUN_10007670 @ 0x10ed7670 (311 bytes, 104 insns) */
void f_10ed7670(void) {
  FTRACE(0x10ed7670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed7670 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed7671 mov ebp, esp */
  EBP = (ESP);
  /* 10ed7673 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed7679 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed767a push esi */
  push32((uint32_t)(ESI));
  /* 10ed767b push edi */
  push32((uint32_t)(EDI));
  /* 10ed767c push ecx */
  push32((uint32_t)(ECX));
  /* 10ed767d lea edi, [ebp - 0x88] */
  EDI = ((uint32_t)(EBP + -0x88));
  /* 10ed7683 mov ecx, 0x22 */
  ECX = (0x22u);
  /* 10ed7688 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed768d rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed768f pop ecx */
  ECX = (pop32());
  /* 10ed7690 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed7693 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed7696 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ed7699 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ed769c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ed769f lea edx, [ebp - 0x30] */
  EDX = ((uint32_t)(EBP + -0x30));
  /* 10ed76a2 push edx */
  push32((uint32_t)(EDX));
  /* 10ed76a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed76a6 call 0x10ed10b9 */
  push32(0x10ed76abu); f_10ed10b9();
  /* 10ed76ab mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10ed76ad mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 10ed76b0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10ed76b3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10ed76b6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ed76b9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10ed76bc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ed76bf mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 10ed76c2 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ed76c5 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed76c8 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 10ed76cb fild dword ptr [ebp - 0x34] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + -0x34)));
  /* 10ed76ce mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ed76d1 sub eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed76d4 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 10ed76d7 fild dword ptr [ebp - 0x38] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + -0x38)));
  /* 10ed76da fdivp st(1) */
  FPU_ST(1) = FPU_ST(1) / FPU_ST(0);
  (void)fpu_pop();
  /* 10ed76dc sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed76df fstp qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  (void)fpu_pop();
  /* 10ed76e2 call 0x10ed9534 */
  push32(0x10ed76e7u); f_10ed9534();
  /* 10ed76e7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed76ea fstp qword ptr [ebp - 0x24] */
  wf64((uint32_t)(EBP + -0x24), FPU_ST(0));
  (void)fpu_pop();
  /* 10ed76ed mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ed76f0 sub ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed76f3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10ed76f5 jge 0x10ed7703 */
  if ((C.sf==C.of)) goto L_10ed7703;
  /* 10ed76f7 fld qword ptr [0x10f09040] */
  fpu_push(rf64((uint32_t)(0x10f09040)));
  /* 10ed76fd fadd qword ptr [ebp - 0x24] */
  FPU_ST(0) = FPU_ST(0) + (rf64((uint32_t)(EBP + -0x24)));
  /* 10ed7700 fstp qword ptr [ebp - 0x24] */
  wf64((uint32_t)(EBP + -0x24), FPU_ST(0));
  (void)fpu_pop();
L_10ed7703:;
  /* 10ed7703 fld qword ptr [ebp - 0x24] */
  fpu_push(rf64((uint32_t)(EBP + -0x24)));
  /* 10ed7706 fmul qword ptr [0x10f09030] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(0x10f09030)));
  /* 10ed770c fdiv qword ptr [0x10f09020] */
  FPU_ST(0) = FPU_ST(0) / (rf64((uint32_t)(0x10f09020)));
  /* 10ed7712 call 0x10ed966c */
  push32(0x10ed7717u); f_10ed966c();
  /* 10ed7717 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 10ed771a fild dword ptr [ebp + 0x10] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + 0x10)));
  /* 10ed771d fstp qword ptr [ebp - 0x40] */
  wf64((uint32_t)(EBP + -0x40), FPU_ST(0));
  (void)fpu_pop();
  /* 10ed7720 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ed7723 push edx */
  push32((uint32_t)(EDX));
  /* 10ed7724 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ed7727 push eax */
  push32((uint32_t)(EAX));
  /* 10ed7728 call 0x10ed9484 */
  push32(0x10ed772du); f_10ed9484();
  /* 10ed772d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7730 fmul qword ptr [ebp - 0x40] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x40)));
  /* 10ed7733 fiadd dword ptr [ebp - 8] */
  FPU_ST(0) = FPU_ST(0) + ((double)(int32_t)r32((uint32_t)(EBP + -0x8)));
  /* 10ed7736 call 0x10ed966c */
  push32(0x10ed773bu); f_10ed966c();
  /* 10ed773b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10ed773e fild dword ptr [ebp + 0x10] */
  fpu_push((double)(int32_t)r32((uint32_t)(EBP + 0x10)));
  /* 10ed7741 fstp qword ptr [ebp - 0x48] */
  wf64((uint32_t)(EBP + -0x48), FPU_ST(0));
  (void)fpu_pop();
  /* 10ed7744 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10ed7747 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed7748 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 10ed774b push edx */
  push32((uint32_t)(EDX));
  /* 10ed774c call 0x10ed93d4 */
  push32(0x10ed7751u); f_10ed93d4();
  /* 10ed7751 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7754 fmul qword ptr [ebp - 0x48] */
  FPU_ST(0) = FPU_ST(0) * (rf64((uint32_t)(EBP + -0x48)));
  /* 10ed7757 fiadd dword ptr [ebp - 0xc] */
  FPU_ST(0) = FPU_ST(0) + ((double)(int32_t)r32((uint32_t)(EBP + -0xc)));
  /* 10ed775a call 0x10ed966c */
  push32(0x10ed775fu); f_10ed966c();
  /* 10ed775f mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10ed7762 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 10ed7764 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10ed7767 push eax */
  push32((uint32_t)(EAX));
  /* 10ed7768 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10ed776b push ecx */
  push32((uint32_t)(ECX));
  /* 10ed776c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed776f add edx, 0x1d */
  { uint32_t _a=(EDX),_b=(0x1du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7772 push edx */
  push32((uint32_t)(EDX));
  /* 10ed7773 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7776 call 0x10ed12df */
  push32(0x10ed777bu); f_10ed12df();
  /* 10ed777b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10ed777e add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7783 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7786 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 10ed7789 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed778c call 0x10ed1226 */
  push32(0x10ed7791u); f_10ed1226();
  /* 10ed7791 pop edi */
  EDI = (pop32());
  /* 10ed7792 pop esi */
  ESI = (pop32());
  /* 10ed7793 pop ebx */
  EBX = (pop32());
  /* 10ed7794 add esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed779a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed779c call 0x10ed9380 */
  push32(0x10ed77a1u); f_10ed9380();
  /* 10ed77a1 mov esp, ebp */
  ESP = (EBP);
  /* 10ed77a3 pop ebp */
  EBP = (pop32());
  /* 10ed77a4 ret 0xc */
  ESPCHK(0x10ed7670u, _esp0);
  ESP += 16; return;
}

/* FUN_10007800 @ 0x10ed7800 (198 bytes, 71 insns) */
void f_10ed7800(void) {
  FTRACE(0x10ed7800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed7800 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed7801 mov ebp, esp */
  EBP = (ESP);
  /* 10ed7803 sub esp, 0x78 */
  { uint32_t _a=(ESP),_b=(0x78u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed7806 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed7807 push esi */
  push32((uint32_t)(ESI));
  /* 10ed7808 push edi */
  push32((uint32_t)(EDI));
  /* 10ed7809 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed780a lea edi, [ebp - 0x78] */
  EDI = ((uint32_t)(EBP + -0x78));
  /* 10ed780d mov ecx, 0x1e */
  ECX = (0x1eu);
  /* 10ed7812 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed7817 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed7819 pop ecx */
  ECX = (pop32());
  /* 10ed781a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed781d mov esi, esp */
  ESI = (ESP);
  /* 10ed781f lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 10ed7822 push eax */
  push32((uint32_t)(EAX));
  /* 10ed7823 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed7825 mov ecx, dword ptr [0x10f0f488] */
  ECX = (r32((uint32_t)(0x10f0f488)));
  /* 10ed782b push ecx */
  push32((uint32_t)(ECX));
  /* 10ed782c call dword ptr [0x10f12590] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12590))), 0x10ed7832u);
  /* 10ed7832 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7835 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed7837 call 0x10ed9380 */
  push32(0x10ed783cu); f_10ed9380();
  /* 10ed783c mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10ed783f mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 10ed7842 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10ed7845 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 10ed7848 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ed784b mov dword ptr [ebp - 0x1c], ecx */
  w32((uint32_t)(EBP + -0x1c), (ECX));
  /* 10ed784e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ed7851 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10ed7854 mov esi, esp */
  ESI = (ESP);
  /* 10ed7856 lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 10ed7859 push eax */
  push32((uint32_t)(EAX));
  /* 10ed785a call dword ptr [0x10f124f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f124f0))), 0x10ed7860u);
  /* 10ed7860 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7863 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed7865 call 0x10ed9380 */
  push32(0x10ed786au); f_10ed9380();
  /* 10ed786a mov esi, esp */
  ESI = (ESP);
  /* 10ed786c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ed786f push ecx */
  push32((uint32_t)(ECX));
  /* 10ed7870 mov edx, dword ptr [0x10f0f488] */
  EDX = (r32((uint32_t)(0x10f0f488)));
  /* 10ed7876 push edx */
  push32((uint32_t)(EDX));
  /* 10ed7877 mov eax, dword ptr [0x10f0f484] */
  EAX = (r32((uint32_t)(0x10f0f484)));
  /* 10ed787c push eax */
  push32((uint32_t)(EAX));
  /* 10ed787d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed7880 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed7881 call dword ptr [0x10f124f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f124f4))), 0x10ed7887u);
  /* 10ed7887 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed788a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed788c call 0x10ed9380 */
  push32(0x10ed7891u); f_10ed9380();
  /* 10ed7891 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 10ed7894 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10ed7897 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ed789a mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10ed789d mov esi, esp */
  ESI = (ESP);
  /* 10ed789f lea ecx, [ebp - 0x30] */
  ECX = ((uint32_t)(EBP + -0x30));
  /* 10ed78a2 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed78a3 call dword ptr [0x10f124f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f124f0))), 0x10ed78a9u);
  /* 10ed78a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed78ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed78ae call 0x10ed9380 */
  push32(0x10ed78b3u); f_10ed9380();
  /* 10ed78b3 pop edi */
  EDI = (pop32());
  /* 10ed78b4 pop esi */
  ESI = (pop32());
  /* 10ed78b5 pop ebx */
  EBX = (pop32());
  /* 10ed78b6 add esp, 0x78 */
  { uint32_t _a=(ESP),_b=(0x78u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed78b9 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed78bb call 0x10ed9380 */
  push32(0x10ed78c0u); f_10ed9380();
  /* 10ed78c0 mov esp, ebp */
  ESP = (EBP);
  /* 10ed78c2 pop ebp */
  EBP = (pop32());
  /* 10ed78c3 ret 0x10 */
  ESPCHK(0x10ed7800u, _esp0);
  ESP += 20; return;
}

/* FUN_10007900 @ 0x10ed7900 (120 bytes, 47 insns) */
void f_10ed7900(void) {
  FTRACE(0x10ed7900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed7900 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed7901 mov ebp, esp */
  EBP = (ESP);
  /* 10ed7903 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed7906 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed7907 push esi */
  push32((uint32_t)(ESI));
  /* 10ed7908 push edi */
  push32((uint32_t)(EDI));
  /* 10ed7909 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed790a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 10ed790d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 10ed7912 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed7917 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed7919 pop ecx */
  ECX = (pop32());
  /* 10ed791a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed791d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ed7921 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7924 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7927 mov esi, esp */
  ESI = (ESP);
  /* 10ed7929 push eax */
  push32((uint32_t)(EAX));
  /* 10ed792a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed792d add ecx, 0x1d */
  { uint32_t _a=(ECX),_b=(0x1du),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7930 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed7931 call dword ptr [0x10f12578] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12578))), 0x10ed7937u);
  /* 10ed7937 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed793a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed793c call 0x10ed9380 */
  push32(0x10ed7941u); f_10ed9380();
  /* 10ed7941 mov esi, eax */
  ESI = (EAX);
  /* 10ed7943 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7946 add edx, 0xd */
  { uint32_t _a=(EDX),_b=(0xdu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7949 mov edi, esp */
  EDI = (ESP);
  /* 10ed794b push edx */
  push32((uint32_t)(EDX));
  /* 10ed794c call dword ptr [0x10f1258c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1258c))), 0x10ed7952u);
  /* 10ed7952 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7955 cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed7957 call 0x10ed9380 */
  push32(0x10ed795cu); f_10ed9380();
  /* 10ed795c cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed795e jne 0x10ed7964 */
  if (!C.zf) goto L_10ed7964;
  /* 10ed7960 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_10ed7964:;
  /* 10ed7964 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10ed7967 pop edi */
  EDI = (pop32());
  /* 10ed7968 pop esi */
  ESI = (pop32());
  /* 10ed7969 pop ebx */
  EBX = (pop32());
  /* 10ed796a add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed796d cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed796f call 0x10ed9380 */
  push32(0x10ed7974u); f_10ed9380();
  /* 10ed7974 mov esp, ebp */
  ESP = (EBP);
  /* 10ed7976 pop ebp */
  EBP = (pop32());
  /* 10ed7977 ret  */
  ESPCHK(0x10ed7900u, _esp0);
  ESP += 4; return;
}

/* FUN_100079a0 @ 0x10ed79a0 (86 bytes, 35 insns) */
void f_10ed79a0(void) {
  FTRACE(0x10ed79a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed79a0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed79a1 mov ebp, esp */
  EBP = (ESP);
  /* 10ed79a3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed79a6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed79a7 push esi */
  push32((uint32_t)(ESI));
  /* 10ed79a8 push edi */
  push32((uint32_t)(EDI));
  /* 10ed79a9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed79aa lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 10ed79ad mov ecx, 0x12 */
  ECX = (0x12u);
  /* 10ed79b2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed79b7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed79b9 pop ecx */
  ECX = (pop32());
  /* 10ed79ba mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed79bd mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ed79c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed79c4 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed79c7 mov esi, esp */
  ESI = (ESP);
  /* 10ed79c9 push eax */
  push32((uint32_t)(EAX));
  /* 10ed79ca call dword ptr [0x10f1258c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1258c))), 0x10ed79d0u);
  /* 10ed79d0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed79d3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed79d5 call 0x10ed9380 */
  push32(0x10ed79dau); f_10ed9380();
  /* 10ed79da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ed79dc jle 0x10ed79e2 */
  if ((C.zf||C.sf!=C.of)) goto L_10ed79e2;
  /* 10ed79de mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_10ed79e2:;
  /* 10ed79e2 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10ed79e5 pop edi */
  EDI = (pop32());
  /* 10ed79e6 pop esi */
  ESI = (pop32());
  /* 10ed79e7 pop ebx */
  EBX = (pop32());
  /* 10ed79e8 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed79eb cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed79ed call 0x10ed9380 */
  push32(0x10ed79f2u); f_10ed9380();
  /* 10ed79f2 mov esp, ebp */
  ESP = (EBP);
  /* 10ed79f4 pop ebp */
  EBP = (pop32());
  /* 10ed79f5 ret  */
  ESPCHK(0x10ed79a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a10 @ 0x10ed7a10 (42 bytes, 21 insns) */
void f_10ed7a10(void) {
  FTRACE(0x10ed7a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed7a10 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed7a11 mov ebp, esp */
  EBP = (ESP);
  /* 10ed7a13 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed7a16 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed7a17 push esi */
  push32((uint32_t)(ESI));
  /* 10ed7a18 push edi */
  push32((uint32_t)(EDI));
  /* 10ed7a19 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed7a1a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed7a1d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed7a22 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed7a27 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed7a29 pop ecx */
  ECX = (pop32());
  /* 10ed7a2a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed7a2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7a30 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7a33 pop edi */
  EDI = (pop32());
  /* 10ed7a34 pop esi */
  ESI = (pop32());
  /* 10ed7a35 pop ebx */
  EBX = (pop32());
  /* 10ed7a36 mov esp, ebp */
  ESP = (EBP);
  /* 10ed7a38 pop ebp */
  EBP = (pop32());
  /* 10ed7a39 ret  */
  ESPCHK(0x10ed7a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10007a50 @ 0x10ed7a50 (235 bytes, 78 insns) */
void f_10ed7a50(void) {
  FTRACE(0x10ed7a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed7a50 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed7a51 mov ebp, esp */
  EBP = (ESP);
  /* 10ed7a53 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed7a59 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed7a5a push esi */
  push32((uint32_t)(ESI));
  /* 10ed7a5b push edi */
  push32((uint32_t)(EDI));
  /* 10ed7a5c push ecx */
  push32((uint32_t)(ECX));
  /* 10ed7a5d lea edi, [ebp - 0x88] */
  EDI = ((uint32_t)(EBP + -0x88));
  /* 10ed7a63 mov ecx, 0x22 */
  ECX = (0x22u);
  /* 10ed7a68 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed7a6d rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed7a6f pop ecx */
  ECX = (pop32());
  /* 10ed7a70 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed7a73 mov dword ptr [ebp - 0x38], 0 */
  w32((uint32_t)(EBP + -0x38), (0x0u));
  /* 10ed7a7a mov dword ptr [ebp - 0x34], 0 */
  w32((uint32_t)(EBP + -0x34), (0x0u));
  /* 10ed7a81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7a84 add eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7a87 mov esi, esp */
  ESI = (ESP);
  /* 10ed7a89 push eax */
  push32((uint32_t)(EAX));
  /* 10ed7a8a call dword ptr [0x10f1258c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1258c))), 0x10ed7a90u);
  /* 10ed7a90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7a93 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed7a95 call 0x10ed9380 */
  push32(0x10ed7a9au); f_10ed9380();
  /* 10ed7a9a mov dword ptr [ebp - 0x3c], eax */
  w32((uint32_t)(EBP + -0x3c), (EAX));
  /* 10ed7a9d cmp dword ptr [ebp - 0x3c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed7aa1 jle 0x10ed7b14 */
  if ((C.zf||C.sf!=C.of)) goto L_10ed7b14;
  /* 10ed7aa3 mov dword ptr [ebp - 0x40], 0 */
  w32((uint32_t)(EBP + -0x40), (0x0u));
  /* 10ed7aaa mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 10ed7ab1 mov dword ptr [ebp - 0x48], 0 */
  w32((uint32_t)(EBP + -0x48), (0x0u));
  /* 10ed7ab8 jmp 0x10ed7ac3 */
  goto L_10ed7ac3;
L_10ed7aba:;
  /* 10ed7aba mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 10ed7abd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7ac0 mov dword ptr [ebp - 0x48], ecx */
  w32((uint32_t)(EBP + -0x48), (ECX));
L_10ed7ac3:;
  /* 10ed7ac3 mov edx, dword ptr [ebp - 0x48] */
  EDX = (r32((uint32_t)(EBP + -0x48)));
  /* 10ed7ac6 cmp edx, dword ptr [ebp - 0x3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed7ac9 jge 0x10ed7b00 */
  if ((C.sf==C.of)) goto L_10ed7b00;
  /* 10ed7acb mov esi, esp */
  ESI = (ESP);
  /* 10ed7acd lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 10ed7ad0 push eax */
  push32((uint32_t)(EAX));
  /* 10ed7ad1 mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 10ed7ad4 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed7ad5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7ad8 add edx, 0xd */
  { uint32_t _a=(EDX),_b=(0xdu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7adb push edx */
  push32((uint32_t)(EDX));
  /* 10ed7adc call dword ptr [0x10f12590] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12590))), 0x10ed7ae2u);
  /* 10ed7ae2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7ae5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed7ae7 call 0x10ed9380 */
  push32(0x10ed7aecu); f_10ed9380();
  /* 10ed7aec mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10ed7aef add eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7af2 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 10ed7af5 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 10ed7af8 add ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7afb mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 10ed7afe jmp 0x10ed7aba */
  goto L_10ed7aba;
L_10ed7b00:;
  /* 10ed7b00 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10ed7b03 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ed7b04 idiv dword ptr [ebp - 0x3c] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + -0x3c))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ed7b07 mov dword ptr [ebp - 0x38], eax */
  w32((uint32_t)(EBP + -0x38), (EAX));
  /* 10ed7b0a mov eax, dword ptr [ebp - 0x44] */
  EAX = (r32((uint32_t)(EBP + -0x44)));
  /* 10ed7b0d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ed7b0e idiv dword ptr [ebp - 0x3c] */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(r32((uint32_t)(EBP + -0x3c))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ed7b11 mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_10ed7b14:;
  /* 10ed7b14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed7b17 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 10ed7b1a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10ed7b1c mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 10ed7b1f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 10ed7b22 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed7b25 pop edi */
  EDI = (pop32());
  /* 10ed7b26 pop esi */
  ESI = (pop32());
  /* 10ed7b27 pop ebx */
  EBX = (pop32());
  /* 10ed7b28 add esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7b2e cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed7b30 call 0x10ed9380 */
  push32(0x10ed7b35u); f_10ed9380();
  /* 10ed7b35 mov esp, ebp */
  ESP = (EBP);
  /* 10ed7b37 pop ebp */
  EBP = (pop32());
  /* 10ed7b38 ret 4 */
  ESPCHK(0x10ed7a50u, _esp0);
  ESP += 8; return;
}

/* FUN_10007b80 @ 0x10ed7b80 (250 bytes, 89 insns) */
void f_10ed7b80(void) {
  FTRACE(0x10ed7b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed7b80 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed7b81 mov ebp, esp */
  EBP = (ESP);
  /* 10ed7b83 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed7b86 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed7b87 push esi */
  push32((uint32_t)(ESI));
  /* 10ed7b88 push edi */
  push32((uint32_t)(EDI));
  /* 10ed7b89 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed7b8a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed7b8d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed7b92 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed7b97 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed7b99 pop ecx */
  ECX = (pop32());
  /* 10ed7b9a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed7b9d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7ba0 call 0x10ed1109 */
  push32(0x10ed7ba5u); f_10ed1109();
  /* 10ed7ba5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ed7baa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ed7bac je 0x10ed7c69 */
  if (C.zf) goto L_10ed7c69;
  /* 10ed7bb2 mov esi, esp */
  ESI = (ESP);
  /* 10ed7bb4 mov eax, dword ptr [0x10f0cd60] */
  EAX = (r32((uint32_t)(0x10f0cd60)));
  /* 10ed7bb9 push eax */
  push32((uint32_t)(EAX));
  /* 10ed7bba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7bbd push ecx */
  push32((uint32_t)(ECX));
  /* 10ed7bbe mov edx, dword ptr [0x10f0f48c] */
  EDX = (r32((uint32_t)(0x10f0f48c)));
  /* 10ed7bc4 push edx */
  push32((uint32_t)(EDX));
  /* 10ed7bc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7bc8 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7bcb push eax */
  push32((uint32_t)(EAX));
  /* 10ed7bcc call dword ptr [0x10f124f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f124f4))), 0x10ed7bd2u);
  /* 10ed7bd2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7bd5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed7bd7 call 0x10ed9380 */
  push32(0x10ed7bdcu); f_10ed9380();
  /* 10ed7bdc mov esi, esp */
  ESI = (ESP);
  /* 10ed7bde push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed7be0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7be3 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7be6 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed7be7 call dword ptr [0x10f12560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12560))), 0x10ed7bedu);
  /* 10ed7bed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7bf0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed7bf2 call 0x10ed9380 */
  push32(0x10ed7bf7u); f_10ed9380();
  /* 10ed7bf7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ed7bf9 jle 0x10ed7c1c */
  if ((C.zf||C.sf!=C.of)) goto L_10ed7c1c;
  /* 10ed7bfb mov esi, esp */
  ESI = (ESP);
  /* 10ed7bfd push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed7bff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7c02 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7c05 push edx */
  push32((uint32_t)(EDX));
  /* 10ed7c06 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7c09 push eax */
  push32((uint32_t)(EAX));
  /* 10ed7c0a call dword ptr [0x10f12570] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12570))), 0x10ed7c10u);
  /* 10ed7c10 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7c13 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed7c15 call 0x10ed9380 */
  push32(0x10ed7c1au); f_10ed9380();
  /* 10ed7c1a jmp 0x10ed7c69 */
  goto L_10ed7c69;
L_10ed7c1c:;
  /* 10ed7c1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7c1f call 0x10ed123f */
  push32(0x10ed7c24u); f_10ed123f();
  /* 10ed7c24 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ed7c29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ed7c2b jne 0x10ed7c69 */
  if (!C.zf) goto L_10ed7c69;
  /* 10ed7c2d mov esi, esp */
  ESI = (ESP);
  /* 10ed7c2f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed7c31 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7c34 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed7c35 call dword ptr [0x10f12564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12564))), 0x10ed7c3bu);
  /* 10ed7c3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7c3e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed7c40 call 0x10ed9380 */
  push32(0x10ed7c45u); f_10ed9380();
  /* 10ed7c45 mov esi, esp */
  ESI = (ESP);
  /* 10ed7c47 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed7c49 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed7c4b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7c4e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 10ed7c51 push eax */
  push32((uint32_t)(EAX));
  /* 10ed7c52 mov cl, byte ptr [0x10f0cd64] */
  CL = (r8((uint32_t)(0x10f0cd64)));
  /* 10ed7c58 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed7c59 call dword ptr [0x10f1256c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1256c))), 0x10ed7c5fu);
  /* 10ed7c5f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7c62 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed7c64 call 0x10ed9380 */
  push32(0x10ed7c69u); f_10ed9380();
L_10ed7c69:;
  /* 10ed7c69 pop edi */
  EDI = (pop32());
  /* 10ed7c6a pop esi */
  ESI = (pop32());
  /* 10ed7c6b pop ebx */
  EBX = (pop32());
  /* 10ed7c6c add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7c6f cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed7c71 call 0x10ed9380 */
  push32(0x10ed7c76u); f_10ed9380();
  /* 10ed7c76 mov esp, ebp */
  ESP = (EBP);
  /* 10ed7c78 pop ebp */
  EBP = (pop32());
  /* 10ed7c79 ret  */
  ESPCHK(0x10ed7b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10007cc0 @ 0x10ed7cc0 (74 bytes, 31 insns) */
void f_10ed7cc0(void) {
  FTRACE(0x10ed7cc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed7cc0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed7cc1 mov ebp, esp */
  EBP = (ESP);
  /* 10ed7cc3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed7cc6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed7cc7 push esi */
  push32((uint32_t)(ESI));
  /* 10ed7cc8 push edi */
  push32((uint32_t)(EDI));
  /* 10ed7cc9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed7cca lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed7ccd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed7cd2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed7cd7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed7cd9 pop ecx */
  ECX = (pop32());
  /* 10ed7cda mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed7cdd mov esi, esp */
  ESI = (ESP);
  /* 10ed7cdf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed7ce2 push eax */
  push32((uint32_t)(EAX));
  /* 10ed7ce3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7ce6 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed7ce7 call dword ptr [0x10f124d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f124d8))), 0x10ed7cedu);
  /* 10ed7ced add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7cf0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed7cf2 call 0x10ed9380 */
  push32(0x10ed7cf7u); f_10ed9380();
  /* 10ed7cf7 pop edi */
  EDI = (pop32());
  /* 10ed7cf8 pop esi */
  ESI = (pop32());
  /* 10ed7cf9 pop ebx */
  EBX = (pop32());
  /* 10ed7cfa add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7cfd cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed7cff call 0x10ed9380 */
  push32(0x10ed7d04u); f_10ed9380();
  /* 10ed7d04 mov esp, ebp */
  ESP = (EBP);
  /* 10ed7d06 pop ebp */
  EBP = (pop32());
  /* 10ed7d07 ret 4 */
  ESPCHK(0x10ed7cc0u, _esp0);
  ESP += 8; return;
}

/* FUN_10007d20 @ 0x10ed7d20 (114 bytes, 45 insns) */
void f_10ed7d20(void) {
  FTRACE(0x10ed7d20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed7d20 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed7d21 mov ebp, esp */
  EBP = (ESP);
  /* 10ed7d23 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed7d26 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed7d27 push esi */
  push32((uint32_t)(ESI));
  /* 10ed7d28 push edi */
  push32((uint32_t)(EDI));
  /* 10ed7d29 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed7d2a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 10ed7d2d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 10ed7d32 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed7d37 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed7d39 pop ecx */
  ECX = (pop32());
  /* 10ed7d3a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed7d3d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ed7d41 mov esi, esp */
  ESI = (ESP);
  /* 10ed7d43 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7d46 push eax */
  push32((uint32_t)(EAX));
  /* 10ed7d47 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7d4a mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 10ed7d4d push edx */
  push32((uint32_t)(EDX));
  /* 10ed7d4e call dword ptr [0x10f12578] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12578))), 0x10ed7d54u);
  /* 10ed7d54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7d57 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed7d59 call 0x10ed9380 */
  push32(0x10ed7d5eu); f_10ed9380();
  /* 10ed7d5e mov esi, eax */
  ESI = (EAX);
  /* 10ed7d60 mov edi, esp */
  EDI = (ESP);
  /* 10ed7d62 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7d65 push eax */
  push32((uint32_t)(EAX));
  /* 10ed7d66 call dword ptr [0x10f1258c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1258c))), 0x10ed7d6cu);
  /* 10ed7d6c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7d6f cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed7d71 call 0x10ed9380 */
  push32(0x10ed7d76u); f_10ed9380();
  /* 10ed7d76 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed7d78 jne 0x10ed7d7e */
  if (!C.zf) goto L_10ed7d7e;
  /* 10ed7d7a mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_10ed7d7e:;
  /* 10ed7d7e mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10ed7d81 pop edi */
  EDI = (pop32());
  /* 10ed7d82 pop esi */
  ESI = (pop32());
  /* 10ed7d83 pop ebx */
  EBX = (pop32());
  /* 10ed7d84 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7d87 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed7d89 call 0x10ed9380 */
  push32(0x10ed7d8eu); f_10ed9380();
  /* 10ed7d8e mov esp, ebp */
  ESP = (EBP);
  /* 10ed7d90 pop ebp */
  EBP = (pop32());
  /* 10ed7d91 ret  */
  ESPCHK(0x10ed7d20u, _esp0);
  ESP += 4; return;
}

/* FUN_10007db0 @ 0x10ed7db0 (83 bytes, 34 insns) */
void f_10ed7db0(void) {
  FTRACE(0x10ed7db0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed7db0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed7db1 mov ebp, esp */
  EBP = (ESP);
  /* 10ed7db3 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed7db6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed7db7 push esi */
  push32((uint32_t)(ESI));
  /* 10ed7db8 push edi */
  push32((uint32_t)(EDI));
  /* 10ed7db9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed7dba lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 10ed7dbd mov ecx, 0x12 */
  ECX = (0x12u);
  /* 10ed7dc2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed7dc7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed7dc9 pop ecx */
  ECX = (pop32());
  /* 10ed7dca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed7dcd mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ed7dd1 mov esi, esp */
  ESI = (ESP);
  /* 10ed7dd3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7dd6 push eax */
  push32((uint32_t)(EAX));
  /* 10ed7dd7 call dword ptr [0x10f1258c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1258c))), 0x10ed7dddu);
  /* 10ed7ddd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7de0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed7de2 call 0x10ed9380 */
  push32(0x10ed7de7u); f_10ed9380();
  /* 10ed7de7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ed7de9 jle 0x10ed7def */
  if ((C.zf||C.sf!=C.of)) goto L_10ed7def;
  /* 10ed7deb mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_10ed7def:;
  /* 10ed7def mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10ed7df2 pop edi */
  EDI = (pop32());
  /* 10ed7df3 pop esi */
  ESI = (pop32());
  /* 10ed7df4 pop ebx */
  EBX = (pop32());
  /* 10ed7df5 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7df8 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed7dfa call 0x10ed9380 */
  push32(0x10ed7dffu); f_10ed9380();
  /* 10ed7dff mov esp, ebp */
  ESP = (EBP);
  /* 10ed7e01 pop ebp */
  EBP = (pop32());
  /* 10ed7e02 ret  */
  ESPCHK(0x10ed7db0u, _esp0);
  ESP += 4; return;
}

/* FUN_10007e20 @ 0x10ed7e20 (126 bytes, 48 insns) */
void f_10ed7e20(void) {
  FTRACE(0x10ed7e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed7e20 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed7e21 mov ebp, esp */
  EBP = (ESP);
  /* 10ed7e23 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed7e26 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed7e27 push esi */
  push32((uint32_t)(ESI));
  /* 10ed7e28 push edi */
  push32((uint32_t)(EDI));
  /* 10ed7e29 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed7e2a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed7e2d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed7e32 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed7e37 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed7e39 pop ecx */
  ECX = (pop32());
  /* 10ed7e3a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed7e3d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7e40 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed7e43 mov dword ptr [eax + 6], ecx */
  w32((uint32_t)(EAX + 0x6), (ECX));
  /* 10ed7e46 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7e49 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ed7e4c mov dword ptr [edx + 0xa], eax */
  w32((uint32_t)(EDX + 0xa), (EAX));
  /* 10ed7e4f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed7e52 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed7e53 call 0x10ed10c8 */
  push32(0x10ed7e58u); f_10ed10c8();
  /* 10ed7e58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7e5b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7e5e mov byte ptr [edx + 1], al */
  w8((uint32_t)(EDX + 0x1), (AL));
  /* 10ed7e61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7e64 mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 10ed7e67 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 10ed7e69 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7e6c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ed7e6f mov dword ptr [edx + 2], eax */
  w32((uint32_t)(EDX + 0x2), (EAX));
  /* 10ed7e72 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7e75 add ecx, 0xe */
  { uint32_t _a=(ECX),_b=(0xeu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7e78 mov esi, esp */
  ESI = (ESP);
  /* 10ed7e7a push ecx */
  push32((uint32_t)(ECX));
  /* 10ed7e7b call dword ptr [0x10f12580] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12580))), 0x10ed7e81u);
  /* 10ed7e81 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7e84 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed7e86 call 0x10ed9380 */
  push32(0x10ed7e8bu); f_10ed9380();
  /* 10ed7e8b pop edi */
  EDI = (pop32());
  /* 10ed7e8c pop esi */
  ESI = (pop32());
  /* 10ed7e8d pop ebx */
  EBX = (pop32());
  /* 10ed7e8e add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7e91 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed7e93 call 0x10ed9380 */
  push32(0x10ed7e98u); f_10ed9380();
  /* 10ed7e98 mov esp, ebp */
  ESP = (EBP);
  /* 10ed7e9a pop ebp */
  EBP = (pop32());
  /* 10ed7e9b ret 0x10 */
  ESPCHK(0x10ed7e20u, _esp0);
  ESP += 20; return;
}

/* FUN_10007ec0 @ 0x10ed7ec0 (136 bytes, 54 insns) */
void f_10ed7ec0(void) {
  FTRACE(0x10ed7ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed7ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed7ec1 mov ebp, esp */
  EBP = (ESP);
  /* 10ed7ec3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed7ec6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed7ec7 push esi */
  push32((uint32_t)(ESI));
  /* 10ed7ec8 push edi */
  push32((uint32_t)(EDI));
  /* 10ed7ec9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed7eca lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed7ecd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed7ed2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed7ed7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed7ed9 pop ecx */
  ECX = (pop32());
  /* 10ed7eda mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed7edd mov esi, esp */
  ESI = (ESP);
  /* 10ed7edf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed7ee2 push eax */
  push32((uint32_t)(EAX));
  /* 10ed7ee3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7ee6 add ecx, 0x16 */
  { uint32_t _a=(ECX),_b=(0x16u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7ee9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed7eea call dword ptr [0x10f124d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f124d8))), 0x10ed7ef0u);
  /* 10ed7ef0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7ef3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed7ef5 call 0x10ed9380 */
  push32(0x10ed7efau); f_10ed9380();
  /* 10ed7efa mov esi, esp */
  ESI = (ESP);
  /* 10ed7efc mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ed7eff push edx */
  push32((uint32_t)(EDX));
  /* 10ed7f00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7f03 add eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7f06 push eax */
  push32((uint32_t)(EAX));
  /* 10ed7f07 call dword ptr [0x10f124c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f124c4))), 0x10ed7f0du);
  /* 10ed7f0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7f10 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed7f12 call 0x10ed9380 */
  push32(0x10ed7f17u); f_10ed9380();
  /* 10ed7f17 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ed7f1a push ecx */
  push32((uint32_t)(ECX));
  /* 10ed7f1b mov dl, byte ptr [ebp + 0x10] */
  DL = (r8((uint32_t)(EBP + 0x10)));
  /* 10ed7f1e push edx */
  push32((uint32_t)(EDX));
  /* 10ed7f1f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7f22 add eax, 0x1e */
  { uint32_t _a=(EAX),_b=(0x1eu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7f25 push eax */
  push32((uint32_t)(EAX));
  /* 10ed7f26 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7f29 add ecx, 0x16 */
  { uint32_t _a=(ECX),_b=(0x16u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7f2c push ecx */
  push32((uint32_t)(ECX));
  /* 10ed7f2d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7f30 call 0x10ed1073 */
  push32(0x10ed7f35u); f_10ed1073();
  /* 10ed7f35 pop edi */
  EDI = (pop32());
  /* 10ed7f36 pop esi */
  ESI = (pop32());
  /* 10ed7f37 pop ebx */
  EBX = (pop32());
  /* 10ed7f38 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7f3b cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed7f3d call 0x10ed9380 */
  push32(0x10ed7f42u); f_10ed9380();
  /* 10ed7f42 mov esp, ebp */
  ESP = (EBP);
  /* 10ed7f44 pop ebp */
  EBP = (pop32());
  /* 10ed7f45 ret 0x10 */
  ESPCHK(0x10ed7ec0u, _esp0);
  ESP += 20; return;
}

/* FUN_10007f70 @ 0x10ed7f70 (150 bytes, 58 insns) */
void f_10ed7f70(void) {
  FTRACE(0x10ed7f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed7f70 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed7f71 mov ebp, esp */
  EBP = (ESP);
  /* 10ed7f73 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed7f76 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed7f77 push esi */
  push32((uint32_t)(ESI));
  /* 10ed7f78 push edi */
  push32((uint32_t)(EDI));
  /* 10ed7f79 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed7f7a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed7f7d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed7f82 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed7f87 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed7f89 pop ecx */
  ECX = (pop32());
  /* 10ed7f8a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed7f8d mov esi, esp */
  ESI = (ESP);
  /* 10ed7f8f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed7f92 push eax */
  push32((uint32_t)(EAX));
  /* 10ed7f93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7f96 add ecx, 0x16 */
  { uint32_t _a=(ECX),_b=(0x16u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7f99 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed7f9a call dword ptr [0x10f124d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f124d8))), 0x10ed7fa0u);
  /* 10ed7fa0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7fa3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed7fa5 call 0x10ed9380 */
  push32(0x10ed7faau); f_10ed9380();
  /* 10ed7faa mov esi, esp */
  ESI = (ESP);
  /* 10ed7fac push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 10ed7fb1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7fb4 add edx, 0x16 */
  { uint32_t _a=(EDX),_b=(0x16u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7fb7 push edx */
  push32((uint32_t)(EDX));
  /* 10ed7fb8 mov eax, dword ptr [0x10f0f490] */
  EAX = (r32((uint32_t)(0x10f0f490)));
  /* 10ed7fbd push eax */
  push32((uint32_t)(EAX));
  /* 10ed7fbe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7fc1 add ecx, 0x1e */
  { uint32_t _a=(ECX),_b=(0x1eu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7fc4 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed7fc5 call dword ptr [0x10f124f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f124f4))), 0x10ed7fcbu);
  /* 10ed7fcb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7fce cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed7fd0 call 0x10ed9380 */
  push32(0x10ed7fd5u); f_10ed9380();
  /* 10ed7fd5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ed7fd8 push edx */
  push32((uint32_t)(EDX));
  /* 10ed7fd9 mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 10ed7fdc push eax */
  push32((uint32_t)(EAX));
  /* 10ed7fdd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7fe0 add ecx, 0x1e */
  { uint32_t _a=(ECX),_b=(0x1eu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7fe3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed7fe4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7fe7 add edx, 0x16 */
  { uint32_t _a=(EDX),_b=(0x16u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7fea push edx */
  push32((uint32_t)(EDX));
  /* 10ed7feb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed7fee call 0x10ed1073 */
  push32(0x10ed7ff3u); f_10ed1073();
  /* 10ed7ff3 pop edi */
  EDI = (pop32());
  /* 10ed7ff4 pop esi */
  ESI = (pop32());
  /* 10ed7ff5 pop ebx */
  EBX = (pop32());
  /* 10ed7ff6 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed7ff9 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed7ffb call 0x10ed9380 */
  push32(0x10ed8000u); f_10ed9380();
  /* 10ed8000 mov esp, ebp */
  ESP = (EBP);
  /* 10ed8002 pop ebp */
  EBP = (pop32());
  /* 10ed8003 ret 0xc */
  ESPCHK(0x10ed7f70u, _esp0);
  ESP += 16; return;
}

/* FUN_10008030 @ 0x10ed8030 (255 bytes, 92 insns) */
void f_10ed8030(void) {
  FTRACE(0x10ed8030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed8030 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed8031 mov ebp, esp */
  EBP = (ESP);
  /* 10ed8033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed8036 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed8037 push esi */
  push32((uint32_t)(ESI));
  /* 10ed8038 push edi */
  push32((uint32_t)(EDI));
  /* 10ed8039 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed803a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed803d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed8042 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed8047 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed8049 pop ecx */
  ECX = (pop32());
  /* 10ed804a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed804d mov esi, esp */
  ESI = (ESP);
  /* 10ed804f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8052 mov cl, byte ptr [eax + 2] */
  CL = (r8((uint32_t)(EAX + 0x2)));
  /* 10ed8055 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed8056 call dword ptr [0x10f12504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12504))), 0x10ed805cu);
  /* 10ed805c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed805f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8061 call 0x10ed9380 */
  push32(0x10ed8066u); f_10ed9380();
  /* 10ed8066 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ed806b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ed806d je 0x10ed80b5 */
  if (C.zf) goto L_10ed80b5;
  /* 10ed806f mov esi, esp */
  ESI = (ESP);
  /* 10ed8071 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8074 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10ed8076 push eax */
  push32((uint32_t)(EAX));
  /* 10ed8077 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed807a mov edx, dword ptr [ecx + 0xa] */
  EDX = (r32((uint32_t)(ECX + 0xa)));
  /* 10ed807d push edx */
  push32((uint32_t)(EDX));
  /* 10ed807e call dword ptr [0x10f12560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12560))), 0x10ed8084u);
  /* 10ed8084 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8087 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8089 call 0x10ed9380 */
  push32(0x10ed808eu); f_10ed9380();
  /* 10ed808e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ed8090 jle 0x10ed80b5 */
  if ((C.zf||C.sf!=C.of)) goto L_10ed80b5;
  /* 10ed8092 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8095 call 0x10ed12d0 */
  push32(0x10ed809au); f_10ed12d0();
  /* 10ed809a mov esi, esp */
  ESI = (ESP);
  /* 10ed809c push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed809e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed80a1 mov cl, byte ptr [eax + 2] */
  CL = (r8((uint32_t)(EAX + 0x2)));
  /* 10ed80a4 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed80a5 call dword ptr [0x10f1251c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1251c))), 0x10ed80abu);
  /* 10ed80ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed80ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed80b0 call 0x10ed9380 */
  push32(0x10ed80b5u); f_10ed9380();
L_10ed80b5:;
  /* 10ed80b5 mov esi, esp */
  ESI = (ESP);
  /* 10ed80b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed80ba mov al, byte ptr [edx + 2] */
  AL = (r8((uint32_t)(EDX + 0x2)));
  /* 10ed80bd push eax */
  push32((uint32_t)(EAX));
  /* 10ed80be call dword ptr [0x10f12504] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12504))), 0x10ed80c4u);
  /* 10ed80c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed80c7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed80c9 call 0x10ed9380 */
  push32(0x10ed80ceu); f_10ed9380();
  /* 10ed80ce and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ed80d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ed80d5 jne 0x10ed811e */
  if (!C.zf) goto L_10ed811e;
  /* 10ed80d7 mov esi, esp */
  ESI = (ESP);
  /* 10ed80d9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed80dc mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ed80de push edx */
  push32((uint32_t)(EDX));
  /* 10ed80df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed80e2 mov ecx, dword ptr [eax + 0xa] */
  ECX = (r32((uint32_t)(EAX + 0xa)));
  /* 10ed80e5 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed80e6 call dword ptr [0x10f12560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12560))), 0x10ed80ecu);
  /* 10ed80ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed80ef cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed80f1 call 0x10ed9380 */
  push32(0x10ed80f6u); f_10ed9380();
  /* 10ed80f6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed80f9 jge 0x10ed811e */
  if ((C.sf==C.of)) goto L_10ed811e;
  /* 10ed80fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed80fe call 0x10ed10dc */
  push32(0x10ed8103u); f_10ed10dc();
  /* 10ed8103 mov esi, esp */
  ESI = (ESP);
  /* 10ed8105 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ed8107 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed810a mov al, byte ptr [edx + 2] */
  AL = (r8((uint32_t)(EDX + 0x2)));
  /* 10ed810d push eax */
  push32((uint32_t)(EAX));
  /* 10ed810e call dword ptr [0x10f1251c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1251c))), 0x10ed8114u);
  /* 10ed8114 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8117 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8119 call 0x10ed9380 */
  push32(0x10ed811eu); f_10ed9380();
L_10ed811e:;
  /* 10ed811e pop edi */
  EDI = (pop32());
  /* 10ed811f pop esi */
  ESI = (pop32());
  /* 10ed8120 pop ebx */
  EBX = (pop32());
  /* 10ed8121 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8124 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8126 call 0x10ed9380 */
  push32(0x10ed812bu); f_10ed9380();
  /* 10ed812b mov esp, ebp */
  ESP = (EBP);
  /* 10ed812d pop ebp */
  EBP = (pop32());
  /* 10ed812e ret  */
  ESPCHK(0x10ed8030u, _esp0);
  ESP += 4; return;
}

/* FUN_10008170 @ 0x10ed8170 (158 bytes, 60 insns) */
void f_10ed8170(void) {
  FTRACE(0x10ed8170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed8170 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed8171 mov ebp, esp */
  EBP = (ESP);
  /* 10ed8173 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed8176 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed8177 push esi */
  push32((uint32_t)(ESI));
  /* 10ed8178 push edi */
  push32((uint32_t)(EDI));
  /* 10ed8179 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed817a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed817d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed8182 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed8187 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed8189 pop ecx */
  ECX = (pop32());
  /* 10ed818a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed818d mov esi, esp */
  ESI = (ESP);
  /* 10ed818f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed8191 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8194 add eax, 0xe */
  { uint32_t _a=(EAX),_b=(0xeu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8197 push eax */
  push32((uint32_t)(EAX));
  /* 10ed8198 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed819b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ed819d push edx */
  push32((uint32_t)(EDX));
  /* 10ed819e call dword ptr [0x10f12588] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12588))), 0x10ed81a4u);
  /* 10ed81a4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed81a7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed81a9 call 0x10ed9380 */
  push32(0x10ed81aeu); f_10ed9380();
  /* 10ed81ae mov esi, esp */
  ESI = (ESP);
  /* 10ed81b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed81b2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed81b5 mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 10ed81b8 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed81b9 call dword ptr [0x10f12564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12564))), 0x10ed81bfu);
  /* 10ed81bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed81c2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed81c4 call 0x10ed9380 */
  push32(0x10ed81c9u); f_10ed9380();
  /* 10ed81c9 mov esi, esp */
  ESI = (ESP);
  /* 10ed81cb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed81ce mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10ed81d1 push eax */
  push32((uint32_t)(EAX));
  /* 10ed81d2 call dword ptr [0x10f124c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f124c0))), 0x10ed81d8u);
  /* 10ed81d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed81db cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed81dd call 0x10ed9380 */
  push32(0x10ed81e2u); f_10ed9380();
  /* 10ed81e2 mov esi, esp */
  ESI = (ESP);
  /* 10ed81e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed81e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed81e9 add ecx, 0xe */
  { uint32_t _a=(ECX),_b=(0xeu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed81ec push ecx */
  push32((uint32_t)(ECX));
  /* 10ed81ed call dword ptr [0x10f12564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12564))), 0x10ed81f3u);
  /* 10ed81f3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed81f6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed81f8 call 0x10ed9380 */
  push32(0x10ed81fdu); f_10ed9380();
  /* 10ed81fd pop edi */
  EDI = (pop32());
  /* 10ed81fe pop esi */
  ESI = (pop32());
  /* 10ed81ff pop ebx */
  EBX = (pop32());
  /* 10ed8200 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8203 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8205 call 0x10ed9380 */
  push32(0x10ed820au); f_10ed9380();
  /* 10ed820a mov esp, ebp */
  ESP = (EBP);
  /* 10ed820c pop ebp */
  EBP = (pop32());
  /* 10ed820d ret  */
  ESPCHK(0x10ed8170u, _esp0);
  ESP += 4; return;
}

/* FUN_10008240 @ 0x10ed8240 (158 bytes, 60 insns) */
void f_10ed8240(void) {
  FTRACE(0x10ed8240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed8240 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed8241 mov ebp, esp */
  EBP = (ESP);
  /* 10ed8243 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed8246 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed8247 push esi */
  push32((uint32_t)(ESI));
  /* 10ed8248 push edi */
  push32((uint32_t)(EDI));
  /* 10ed8249 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed824a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed824d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed8252 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed8257 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed8259 pop ecx */
  ECX = (pop32());
  /* 10ed825a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed825d mov esi, esp */
  ESI = (ESP);
  /* 10ed825f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed8261 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8264 add eax, 0xe */
  { uint32_t _a=(EAX),_b=(0xeu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8267 push eax */
  push32((uint32_t)(EAX));
  /* 10ed8268 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed826b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10ed826d push edx */
  push32((uint32_t)(EDX));
  /* 10ed826e call dword ptr [0x10f12588] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12588))), 0x10ed8274u);
  /* 10ed8274 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8277 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8279 call 0x10ed9380 */
  push32(0x10ed827eu); f_10ed9380();
  /* 10ed827e mov esi, esp */
  ESI = (ESP);
  /* 10ed8280 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed8282 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8285 mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 10ed8288 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed8289 call dword ptr [0x10f12564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12564))), 0x10ed828fu);
  /* 10ed828f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8292 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8294 call 0x10ed9380 */
  push32(0x10ed8299u); f_10ed9380();
  /* 10ed8299 mov esi, esp */
  ESI = (ESP);
  /* 10ed829b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed829e mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10ed82a1 push eax */
  push32((uint32_t)(EAX));
  /* 10ed82a2 call dword ptr [0x10f124bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f124bc))), 0x10ed82a8u);
  /* 10ed82a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed82ab cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed82ad call 0x10ed9380 */
  push32(0x10ed82b2u); f_10ed9380();
  /* 10ed82b2 mov esi, esp */
  ESI = (ESP);
  /* 10ed82b4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed82b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed82b9 add ecx, 0xe */
  { uint32_t _a=(ECX),_b=(0xeu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed82bc push ecx */
  push32((uint32_t)(ECX));
  /* 10ed82bd call dword ptr [0x10f12564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12564))), 0x10ed82c3u);
  /* 10ed82c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed82c6 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed82c8 call 0x10ed9380 */
  push32(0x10ed82cdu); f_10ed9380();
  /* 10ed82cd pop edi */
  EDI = (pop32());
  /* 10ed82ce pop esi */
  ESI = (pop32());
  /* 10ed82cf pop ebx */
  EBX = (pop32());
  /* 10ed82d0 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed82d3 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed82d5 call 0x10ed9380 */
  push32(0x10ed82dau); f_10ed9380();
  /* 10ed82da mov esp, ebp */
  ESP = (EBP);
  /* 10ed82dc pop ebp */
  EBP = (pop32());
  /* 10ed82dd ret  */
  ESPCHK(0x10ed8240u, _esp0);
  ESP += 4; return;
}

/* FUN_10008310 @ 0x10ed8310 (49 bytes, 22 insns) */
void f_10ed8310(void) {
  FTRACE(0x10ed8310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed8310 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed8311 mov ebp, esp */
  EBP = (ESP);
  /* 10ed8313 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed8316 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed8317 push esi */
  push32((uint32_t)(ESI));
  /* 10ed8318 push edi */
  push32((uint32_t)(EDI));
  /* 10ed8319 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed831a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed831d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed8322 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed8327 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed8329 pop ecx */
  ECX = (pop32());
  /* 10ed832a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed832d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8330 mov dword ptr [eax + 0x2c], 0xffffffff */
  w32((uint32_t)(EAX + 0x2c), (0xffffffffu));
  /* 10ed8337 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed833a pop edi */
  EDI = (pop32());
  /* 10ed833b pop esi */
  ESI = (pop32());
  /* 10ed833c pop ebx */
  EBX = (pop32());
  /* 10ed833d mov esp, ebp */
  ESP = (EBP);
  /* 10ed833f pop ebp */
  EBP = (pop32());
  /* 10ed8340 ret  */
  ESPCHK(0x10ed8310u, _esp0);
  ESP += 4; return;
}

/* FUN_10008350 @ 0x10ed8350 (77 bytes, 32 insns) */
void f_10ed8350(void) {
  FTRACE(0x10ed8350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed8350 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed8351 mov ebp, esp */
  EBP = (ESP);
  /* 10ed8353 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed8356 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed8357 push esi */
  push32((uint32_t)(ESI));
  /* 10ed8358 push edi */
  push32((uint32_t)(EDI));
  /* 10ed8359 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed835a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed835d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed8362 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed8367 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed8369 pop ecx */
  ECX = (pop32());
  /* 10ed836a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed836d mov esi, esp */
  ESI = (ESP);
  /* 10ed836f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed8372 push eax */
  push32((uint32_t)(EAX));
  /* 10ed8373 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8376 add ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8379 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed837a call dword ptr [0x10f124d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f124d8))), 0x10ed8380u);
  /* 10ed8380 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8383 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8385 call 0x10ed9380 */
  push32(0x10ed838au); f_10ed9380();
  /* 10ed838a pop edi */
  EDI = (pop32());
  /* 10ed838b pop esi */
  ESI = (pop32());
  /* 10ed838c pop ebx */
  EBX = (pop32());
  /* 10ed838d add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8390 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8392 call 0x10ed9380 */
  push32(0x10ed8397u); f_10ed9380();
  /* 10ed8397 mov esp, ebp */
  ESP = (EBP);
  /* 10ed8399 pop ebp */
  EBP = (pop32());
  /* 10ed839a ret 4 */
  ESPCHK(0x10ed8350u, _esp0);
  ESP += 8; return;
}

/* FUN_100083b0 @ 0x10ed83b0 (102 bytes, 40 insns) */
void f_10ed83b0(void) {
  FTRACE(0x10ed83b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed83b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed83b1 mov ebp, esp */
  EBP = (ESP);
  /* 10ed83b3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed83b6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed83b7 push esi */
  push32((uint32_t)(ESI));
  /* 10ed83b8 push edi */
  push32((uint32_t)(EDI));
  /* 10ed83b9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed83ba lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed83bd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed83c2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed83c7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed83c9 pop ecx */
  ECX = (pop32());
  /* 10ed83ca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed83cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed83d0 add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed83d3 mov esi, esp */
  ESI = (ESP);
  /* 10ed83d5 push eax */
  push32((uint32_t)(EAX));
  /* 10ed83d6 call dword ptr [0x10f12580] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12580))), 0x10ed83dcu);
  /* 10ed83dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed83df cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed83e1 call 0x10ed9380 */
  push32(0x10ed83e6u); f_10ed9380();
  /* 10ed83e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed83e9 add ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed83ec mov esi, esp */
  ESI = (ESP);
  /* 10ed83ee push ecx */
  push32((uint32_t)(ECX));
  /* 10ed83ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed83f2 push edx */
  push32((uint32_t)(EDX));
  /* 10ed83f3 call dword ptr [0x10f124b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f124b8))), 0x10ed83f9u);
  /* 10ed83f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed83fc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed83fe call 0x10ed9380 */
  push32(0x10ed8403u); f_10ed9380();
  /* 10ed8403 pop edi */
  EDI = (pop32());
  /* 10ed8404 pop esi */
  ESI = (pop32());
  /* 10ed8405 pop ebx */
  EBX = (pop32());
  /* 10ed8406 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8409 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed840b call 0x10ed9380 */
  push32(0x10ed8410u); f_10ed9380();
  /* 10ed8410 mov esp, ebp */
  ESP = (EBP);
  /* 10ed8412 pop ebp */
  EBP = (pop32());
  /* 10ed8413 ret 4 */
  ESPCHK(0x10ed83b0u, _esp0);
  ESP += 8; return;
}

/* FUN_10008430 @ 0x10ed8430 (184 bytes, 69 insns) */
void f_10ed8430(void) {
  FTRACE(0x10ed8430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed8430 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed8431 mov ebp, esp */
  EBP = (ESP);
  /* 10ed8433 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed8436 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed8437 push esi */
  push32((uint32_t)(ESI));
  /* 10ed8438 push edi */
  push32((uint32_t)(EDI));
  /* 10ed8439 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed843a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 10ed843d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 10ed8442 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed8447 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed8449 pop ecx */
  ECX = (pop32());
  /* 10ed844a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed844d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ed8451 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8454 cmp dword ptr [eax + 0x2c], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x2c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8458 jne 0x10ed8487 */
  if (!C.zf) goto L_10ed8487;
  /* 10ed845a mov esi, esp */
  ESI = (ESP);
  /* 10ed845c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed845f push ecx */
  push32((uint32_t)(ECX));
  /* 10ed8460 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed8462 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8465 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8468 push edx */
  push32((uint32_t)(EDX));
  /* 10ed8469 call dword ptr [0x10f12590] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12590))), 0x10ed846fu);
  /* 10ed846f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8472 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8474 call 0x10ed9380 */
  push32(0x10ed8479u); f_10ed9380();
  /* 10ed8479 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed847c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ed847e mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 10ed8481 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8484 mov dword ptr [edx + 0x2c], ecx */
  w32((uint32_t)(EDX + 0x2c), (ECX));
L_10ed8487:;
  /* 10ed8487 mov esi, esp */
  ESI = (ESP);
  /* 10ed8489 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed848c push eax */
  push32((uint32_t)(EAX));
  /* 10ed848d call dword ptr [0x10f1258c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1258c))), 0x10ed8493u);
  /* 10ed8493 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8496 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8498 call 0x10ed9380 */
  push32(0x10ed849du); f_10ed9380();
  /* 10ed849d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed84a0 jne 0x10ed84d2 */
  if (!C.zf) goto L_10ed84d2;
  /* 10ed84a2 mov esi, esp */
  ESI = (ESP);
  /* 10ed84a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed84a7 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed84a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed84aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed84ad push edx */
  push32((uint32_t)(EDX));
  /* 10ed84ae call dword ptr [0x10f12590] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12590))), 0x10ed84b4u);
  /* 10ed84b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed84b7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed84b9 call 0x10ed9380 */
  push32(0x10ed84beu); f_10ed9380();
  /* 10ed84be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed84c1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ed84c3 mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 10ed84c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed84c9 cmp ecx, dword ptr [edx + 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed84cc jne 0x10ed84d2 */
  if (!C.zf) goto L_10ed84d2;
  /* 10ed84ce mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_10ed84d2:;
  /* 10ed84d2 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10ed84d5 pop edi */
  EDI = (pop32());
  /* 10ed84d6 pop esi */
  ESI = (pop32());
  /* 10ed84d7 pop ebx */
  EBX = (pop32());
  /* 10ed84d8 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed84db cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed84dd call 0x10ed9380 */
  push32(0x10ed84e2u); f_10ed9380();
  /* 10ed84e2 mov esp, ebp */
  ESP = (EBP);
  /* 10ed84e4 pop ebp */
  EBP = (pop32());
  /* 10ed84e5 ret 4 */
  ESPCHK(0x10ed8430u, _esp0);
  ESP += 8; return;
}

/* FUN_10008520 @ 0x10ed8520 (110 bytes, 43 insns) */
void f_10ed8520(void) {
  FTRACE(0x10ed8520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed8520 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed8521 mov ebp, esp */
  EBP = (ESP);
  /* 10ed8523 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed8526 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed8527 push esi */
  push32((uint32_t)(ESI));
  /* 10ed8528 push edi */
  push32((uint32_t)(EDI));
  /* 10ed8529 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed852a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 10ed852d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 10ed8532 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed8537 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed8539 pop ecx */
  ECX = (pop32());
  /* 10ed853a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed853d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ed8541 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed8544 push eax */
  push32((uint32_t)(EAX));
  /* 10ed8545 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8548 call 0x10ed100a */
  push32(0x10ed854du); f_10ed100a();
  /* 10ed854d and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ed8552 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ed8554 je 0x10ed8578 */
  if (C.zf) goto L_10ed8578;
  /* 10ed8556 mov esi, esp */
  ESI = (ESP);
  /* 10ed8558 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed855b push ecx */
  push32((uint32_t)(ECX));
  /* 10ed855c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10ed855f push edx */
  push32((uint32_t)(EDX));
  /* 10ed8560 call dword ptr [0x10f12578] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12578))), 0x10ed8566u);
  /* 10ed8566 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8569 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed856b call 0x10ed9380 */
  push32(0x10ed8570u); f_10ed9380();
  /* 10ed8570 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ed8572 jle 0x10ed8578 */
  if ((C.zf||C.sf!=C.of)) goto L_10ed8578;
  /* 10ed8574 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_10ed8578:;
  /* 10ed8578 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10ed857b pop edi */
  EDI = (pop32());
  /* 10ed857c pop esi */
  ESI = (pop32());
  /* 10ed857d pop ebx */
  EBX = (pop32());
  /* 10ed857e add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8581 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8583 call 0x10ed9380 */
  push32(0x10ed8588u); f_10ed9380();
  /* 10ed8588 mov esp, ebp */
  ESP = (EBP);
  /* 10ed858a pop ebp */
  EBP = (pop32());
  /* 10ed858b ret 8 */
  ESPCHK(0x10ed8520u, _esp0);
  ESP += 12; return;
}

/* FUN_100085b0 @ 0x10ed85b0 (42 bytes, 21 insns) */
void f_10ed85b0(void) {
  FTRACE(0x10ed85b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed85b0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed85b1 mov ebp, esp */
  EBP = (ESP);
  /* 10ed85b3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed85b6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed85b7 push esi */
  push32((uint32_t)(ESI));
  /* 10ed85b8 push edi */
  push32((uint32_t)(EDI));
  /* 10ed85b9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed85ba lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed85bd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed85c2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed85c7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed85c9 pop ecx */
  ECX = (pop32());
  /* 10ed85ca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed85cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed85d0 add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed85d3 pop edi */
  EDI = (pop32());
  /* 10ed85d4 pop esi */
  ESI = (pop32());
  /* 10ed85d5 pop ebx */
  EBX = (pop32());
  /* 10ed85d6 mov esp, ebp */
  ESP = (EBP);
  /* 10ed85d8 pop ebp */
  EBP = (pop32());
  /* 10ed85d9 ret  */
  ESPCHK(0x10ed85b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100085f0 @ 0x10ed85f0 (155 bytes, 58 insns) */
void f_10ed85f0(void) {
  FTRACE(0x10ed85f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed85f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed85f1 mov ebp, esp */
  EBP = (ESP);
  /* 10ed85f3 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed85f6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed85f7 push esi */
  push32((uint32_t)(ESI));
  /* 10ed85f8 push edi */
  push32((uint32_t)(EDI));
  /* 10ed85f9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed85fa lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 10ed85fd mov ecx, 0x13 */
  ECX = (0x13u);
  /* 10ed8602 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed8607 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed8609 pop ecx */
  ECX = (pop32());
  /* 10ed860a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed860d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8610 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed8613 mov dword ptr [eax + 0x45], ecx */
  w32((uint32_t)(EAX + 0x45), (ECX));
  /* 10ed8616 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8619 mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 10ed861c mov byte ptr [edx + 0x38], al */
  w8((uint32_t)(EDX + 0x38), (AL));
  /* 10ed861f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8622 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10ed8625 mov dword ptr [ecx + 0x39], edx */
  w32((uint32_t)(ECX + 0x39), (EDX));
  /* 10ed8628 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed862b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10ed862e mov dword ptr [eax + 0x3d], ecx */
  w32((uint32_t)(EAX + 0x3d), (ECX));
  /* 10ed8631 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8634 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10ed8637 mov dword ptr [edx + 0x41], eax */
  w32((uint32_t)(EDX + 0x41), (EAX));
  /* 10ed863a mov esi, esp */
  ESI = (ESP);
  /* 10ed863c push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10ed8641 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8644 mov edx, dword ptr [ecx + 0x45] */
  EDX = (r32((uint32_t)(ECX + 0x45)));
  /* 10ed8647 push edx */
  push32((uint32_t)(EDX));
  /* 10ed8648 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10ed864b push eax */
  push32((uint32_t)(EAX));
  /* 10ed864c call dword ptr [0x10f1257c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1257c))), 0x10ed8652u);
  /* 10ed8652 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8655 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8657 call 0x10ed9380 */
  push32(0x10ed865cu); f_10ed9380();
  /* 10ed865c mov esi, esp */
  ESI = (ESP);
  /* 10ed865e push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed8660 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed8662 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 10ed8665 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed8666 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed8668 call dword ptr [0x10f12574] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12574))), 0x10ed866eu);
  /* 10ed866e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8671 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8673 call 0x10ed9380 */
  push32(0x10ed8678u); f_10ed9380();
  /* 10ed8678 pop edi */
  EDI = (pop32());
  /* 10ed8679 pop esi */
  ESI = (pop32());
  /* 10ed867a pop ebx */
  EBX = (pop32());
  /* 10ed867b add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed867e cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8680 call 0x10ed9380 */
  push32(0x10ed8685u); f_10ed9380();
  /* 10ed8685 mov esp, ebp */
  ESP = (EBP);
  /* 10ed8687 pop ebp */
  EBP = (pop32());
  /* 10ed8688 ret 0x14 */
  ESPCHK(0x10ed85f0u, _esp0);
  ESP += 24; return;
}

/* FUN_100086c0 @ 0x10ed86c0 (252 bytes, 91 insns) */
void f_10ed86c0(void) {
  FTRACE(0x10ed86c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed86c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed86c1 mov ebp, esp */
  EBP = (ESP);
  /* 10ed86c3 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed86c6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed86c7 push esi */
  push32((uint32_t)(ESI));
  /* 10ed86c8 push edi */
  push32((uint32_t)(EDI));
  /* 10ed86c9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed86ca lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 10ed86cd mov ecx, 0x13 */
  ECX = (0x13u);
  /* 10ed86d2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed86d7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed86d9 pop ecx */
  ECX = (pop32());
  /* 10ed86da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed86dd mov esi, esp */
  ESI = (ESP);
  /* 10ed86df push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed86e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed86e4 mov ecx, dword ptr [eax + 0x45] */
  ECX = (r32((uint32_t)(EAX + 0x45)));
  /* 10ed86e7 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed86e8 call dword ptr [0x10f12564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12564))), 0x10ed86eeu);
  /* 10ed86ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed86f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed86f3 call 0x10ed9380 */
  push32(0x10ed86f8u); f_10ed9380();
  /* 10ed86f8 mov esi, esp */
  ESI = (ESP);
  /* 10ed86fa push 0x2bc */
  push32((uint32_t)(0x2bcu));
  /* 10ed86ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8702 mov eax, dword ptr [edx + 0x45] */
  EAX = (r32((uint32_t)(EDX + 0x45)));
  /* 10ed8705 push eax */
  push32((uint32_t)(EAX));
  /* 10ed8706 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 10ed8709 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed870a call dword ptr [0x10f1257c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1257c))), 0x10ed8710u);
  /* 10ed8710 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8713 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8715 call 0x10ed9380 */
  push32(0x10ed871au); f_10ed9380();
  /* 10ed871a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed871d cmp dword ptr [edx + 0x39], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x39))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8721 je 0x10ed8732 */
  if (C.zf) goto L_10ed8732;
  /* 10ed8723 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8726 mov cx, word ptr [ebp - 0xc] */
  CX = (r16((uint32_t)(EBP + -0xc)));
  /* 10ed872a add cx, word ptr [eax + 0x39] */
  { uint32_t _a=(CX),_b=(r16((uint32_t)(EAX + 0x39))),_r=_a+_b; CX = (_r); fl_add(_a,_b,_r,16); }
  /* 10ed872e mov word ptr [ebp - 0xc], cx */
  w16((uint32_t)(EBP + -0xc), (CX));
L_10ed8732:;
  /* 10ed8732 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8735 cmp dword ptr [edx + 0x3d], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x3d))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8739 je 0x10ed8746 */
  if (C.zf) goto L_10ed8746;
  /* 10ed873b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed873e mov cx, word ptr [eax + 0x3d] */
  CX = (r16((uint32_t)(EAX + 0x3d)));
  /* 10ed8742 mov word ptr [ebp - 0xa], cx */
  w16((uint32_t)(EBP + -0xa), (CX));
L_10ed8746:;
  /* 10ed8746 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8749 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ed874b mov al, byte ptr [edx + 0x38] */
  AL = (r8((uint32_t)(EDX + 0x38)));
  /* 10ed874e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ed8750 jne 0x10ed8773 */
  if (!C.zf) goto L_10ed8773;
  /* 10ed8752 mov esi, esp */
  ESI = (ESP);
  /* 10ed8754 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed8756 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8759 mov dl, byte ptr [ecx + 0x41] */
  DL = (r8((uint32_t)(ECX + 0x41)));
  /* 10ed875c push edx */
  push32((uint32_t)(EDX));
  /* 10ed875d lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10ed8760 push eax */
  push32((uint32_t)(EAX));
  /* 10ed8761 push 3 */
  push32((uint32_t)(0x3u));
  /* 10ed8763 call dword ptr [0x10f12574] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12574))), 0x10ed8769u);
  /* 10ed8769 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed876c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed876e call 0x10ed9380 */
  push32(0x10ed8773u); f_10ed9380();
L_10ed8773:;
  /* 10ed8773 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8776 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10ed8778 mov dl, byte ptr [ecx + 0x38] */
  DL = (r8((uint32_t)(ECX + 0x38)));
  /* 10ed877b cmp edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed877e jne 0x10ed87a1 */
  if (!C.zf) goto L_10ed87a1;
  /* 10ed8780 mov esi, esp */
  ESI = (ESP);
  /* 10ed8782 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed8784 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8787 mov cl, byte ptr [eax + 0x41] */
  CL = (r8((uint32_t)(EAX + 0x41)));
  /* 10ed878a push ecx */
  push32((uint32_t)(ECX));
  /* 10ed878b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10ed878e push edx */
  push32((uint32_t)(EDX));
  /* 10ed878f push 3 */
  push32((uint32_t)(0x3u));
  /* 10ed8791 call dword ptr [0x10f1256c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1256c))), 0x10ed8797u);
  /* 10ed8797 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed879a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed879c call 0x10ed9380 */
  push32(0x10ed87a1u); f_10ed9380();
L_10ed87a1:;
  /* 10ed87a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed87a4 mov dword ptr [eax + 0x45], 0 */
  w32((uint32_t)(EAX + 0x45), (0x0u));
  /* 10ed87ab pop edi */
  EDI = (pop32());
  /* 10ed87ac pop esi */
  ESI = (pop32());
  /* 10ed87ad pop ebx */
  EBX = (pop32());
  /* 10ed87ae add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed87b1 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed87b3 call 0x10ed9380 */
  push32(0x10ed87b8u); f_10ed9380();
  /* 10ed87b8 mov esp, ebp */
  ESP = (EBP);
  /* 10ed87ba pop ebp */
  EBP = (pop32());
  /* 10ed87bb ret  */
  ESPCHK(0x10ed86c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008800 @ 0x10ed8800 (143 bytes, 53 insns) */
void f_10ed8800(void) {
  FTRACE(0x10ed8800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed8800 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed8801 mov ebp, esp */
  EBP = (ESP);
  /* 10ed8803 sub esp, 0x50 */
  { uint32_t _a=(ESP),_b=(0x50u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed8806 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed8807 push esi */
  push32((uint32_t)(ESI));
  /* 10ed8808 push edi */
  push32((uint32_t)(EDI));
  /* 10ed8809 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed880a lea edi, [ebp - 0x50] */
  EDI = ((uint32_t)(EBP + -0x50));
  /* 10ed880d mov ecx, 0x14 */
  ECX = (0x14u);
  /* 10ed8812 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed8817 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed8819 pop ecx */
  ECX = (pop32());
  /* 10ed881a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed881d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ed8821 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8824 cmp dword ptr [eax + 0x45], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x45))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8828 je 0x10ed887b */
  if (C.zf) goto L_10ed887b;
  /* 10ed882a mov esi, esp */
  ESI = (ESP);
  /* 10ed882c push 0x1f4 */
  push32((uint32_t)(0x1f4u));
  /* 10ed8831 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8834 mov edx, dword ptr [ecx + 0x45] */
  EDX = (r32((uint32_t)(ECX + 0x45)));
  /* 10ed8837 push edx */
  push32((uint32_t)(EDX));
  /* 10ed8838 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 10ed883b push eax */
  push32((uint32_t)(EAX));
  /* 10ed883c call dword ptr [0x10f1257c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1257c))), 0x10ed8842u);
  /* 10ed8842 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8845 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8847 call 0x10ed9380 */
  push32(0x10ed884cu); f_10ed9380();
  /* 10ed884c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed884f call 0x10ed1258 */
  push32(0x10ed8854u); f_10ed1258();
  /* 10ed8854 mov esi, esp */
  ESI = (ESP);
  /* 10ed8856 push eax */
  push32((uint32_t)(EAX));
  /* 10ed8857 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 10ed885a push ecx */
  push32((uint32_t)(ECX));
  /* 10ed885b call dword ptr [0x10f12578] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12578))), 0x10ed8861u);
  /* 10ed8861 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8864 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8866 call 0x10ed9380 */
  push32(0x10ed886bu); f_10ed9380();
  /* 10ed886b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ed886d jle 0x10ed887b */
  if ((C.zf||C.sf!=C.of)) goto L_10ed887b;
  /* 10ed886f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8872 call 0x10ed1096 */
  push32(0x10ed8877u); f_10ed1096();
  /* 10ed8877 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_10ed887b:;
  /* 10ed887b mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10ed887e pop edi */
  EDI = (pop32());
  /* 10ed887f pop esi */
  ESI = (pop32());
  /* 10ed8880 pop ebx */
  EBX = (pop32());
  /* 10ed8881 add esp, 0x50 */
  { uint32_t _a=(ESP),_b=(0x50u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8884 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8886 call 0x10ed9380 */
  push32(0x10ed888bu); f_10ed9380();
  /* 10ed888b mov esp, ebp */
  ESP = (EBP);
  /* 10ed888d pop ebp */
  EBP = (pop32());
  /* 10ed888e ret  */
  ESPCHK(0x10ed8800u, _esp0);
  ESP += 4; return;
}

/* FUN_100088c0 @ 0x10ed88c0 (39 bytes, 20 insns) */
void f_10ed88c0(void) {
  FTRACE(0x10ed88c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed88c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed88c1 mov ebp, esp */
  EBP = (ESP);
  /* 10ed88c3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed88c6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed88c7 push esi */
  push32((uint32_t)(ESI));
  /* 10ed88c8 push edi */
  push32((uint32_t)(EDI));
  /* 10ed88c9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed88ca lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed88cd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed88d2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed88d7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed88d9 pop ecx */
  ECX = (pop32());
  /* 10ed88da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed88dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed88e0 pop edi */
  EDI = (pop32());
  /* 10ed88e1 pop esi */
  ESI = (pop32());
  /* 10ed88e2 pop ebx */
  EBX = (pop32());
  /* 10ed88e3 mov esp, ebp */
  ESP = (EBP);
  /* 10ed88e5 pop ebp */
  EBP = (pop32());
  /* 10ed88e6 ret  */
  ESPCHK(0x10ed88c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100088f0 @ 0x10ed88f0 (98 bytes, 39 insns) */
void f_10ed88f0(void) {
  FTRACE(0x10ed88f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed88f0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed88f1 mov ebp, esp */
  EBP = (ESP);
  /* 10ed88f3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed88f6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed88f7 push esi */
  push32((uint32_t)(ESI));
  /* 10ed88f8 push edi */
  push32((uint32_t)(EDI));
  /* 10ed88f9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed88fa lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed88fd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed8902 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed8907 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed8909 pop ecx */
  ECX = (pop32());
  /* 10ed890a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed890d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8910 call 0x10ed12b2 */
  push32(0x10ed8915u); f_10ed12b2();
  /* 10ed8915 mov esi, esp */
  ESI = (ESP);
  /* 10ed8917 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed891a push eax */
  push32((uint32_t)(EAX));
  /* 10ed891b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed891e mov dl, byte ptr [ecx + 0x3c] */
  DL = (r8((uint32_t)(ECX + 0x3c)));
  /* 10ed8921 push edx */
  push32((uint32_t)(EDX));
  /* 10ed8922 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8925 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8928 push eax */
  push32((uint32_t)(EAX));
  /* 10ed8929 call dword ptr [0x10f124b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f124b4))), 0x10ed892fu);
  /* 10ed892f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8932 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8934 call 0x10ed9380 */
  push32(0x10ed8939u); f_10ed9380();
  /* 10ed8939 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed893c add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed893f pop edi */
  EDI = (pop32());
  /* 10ed8940 pop esi */
  ESI = (pop32());
  /* 10ed8941 pop ebx */
  EBX = (pop32());
  /* 10ed8942 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8945 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8947 call 0x10ed9380 */
  push32(0x10ed894cu); f_10ed9380();
  /* 10ed894c mov esp, ebp */
  ESP = (EBP);
  /* 10ed894e pop ebp */
  EBP = (pop32());
  /* 10ed894f ret 4 */
  ESPCHK(0x10ed88f0u, _esp0);
  ESP += 8; return;
}

/* FUN_10008970 @ 0x10ed8970 (59 bytes, 25 insns) */
void f_10ed8970(void) {
  FTRACE(0x10ed8970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed8970 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed8971 mov ebp, esp */
  EBP = (ESP);
  /* 10ed8973 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed8976 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed8977 push esi */
  push32((uint32_t)(ESI));
  /* 10ed8978 push edi */
  push32((uint32_t)(EDI));
  /* 10ed8979 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed897a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed897d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed8982 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed8987 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed8989 pop ecx */
  ECX = (pop32());
  /* 10ed898a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed898d push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 10ed8992 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8995 call 0x10ed1104 */
  push32(0x10ed899au); f_10ed1104();
  /* 10ed899a pop edi */
  EDI = (pop32());
  /* 10ed899b pop esi */
  ESI = (pop32());
  /* 10ed899c pop ebx */
  EBX = (pop32());
  /* 10ed899d add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed89a0 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed89a2 call 0x10ed9380 */
  push32(0x10ed89a7u); f_10ed9380();
  /* 10ed89a7 mov esp, ebp */
  ESP = (EBP);
  /* 10ed89a9 pop ebp */
  EBP = (pop32());
  /* 10ed89aa ret  */
  ESPCHK(0x10ed8970u, _esp0);
  ESP += 4; return;
}

/* FUN_100089c0 @ 0x10ed89c0 (97 bytes, 38 insns) */
void f_10ed89c0(void) {
  FTRACE(0x10ed89c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed89c0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed89c1 mov ebp, esp */
  EBP = (ESP);
  /* 10ed89c3 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed89c6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed89c7 push esi */
  push32((uint32_t)(ESI));
  /* 10ed89c8 push edi */
  push32((uint32_t)(EDI));
  /* 10ed89c9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed89ca lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 10ed89cd mov ecx, 0x13 */
  ECX = (0x13u);
  /* 10ed89d2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed89d7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed89d9 pop ecx */
  ECX = (pop32());
  /* 10ed89da mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed89dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed89e0 call 0x10ed11bd */
  push32(0x10ed89e5u); f_10ed11bd();
  /* 10ed89e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed89e8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10ed89ea mov cx, word ptr [eax + 8] */
  CX = (r16((uint32_t)(EAX + 0x8)));
  /* 10ed89ee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10ed89f1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed89f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10ed89f6 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 10ed89fa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10ed89fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed8a00 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ed8a03 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 10ed8a05 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10ed8a08 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 10ed8a0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed8a0e pop edi */
  EDI = (pop32());
  /* 10ed8a0f pop esi */
  ESI = (pop32());
  /* 10ed8a10 pop ebx */
  EBX = (pop32());
  /* 10ed8a11 add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8a14 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8a16 call 0x10ed9380 */
  push32(0x10ed8a1bu); f_10ed9380();
  /* 10ed8a1b mov esp, ebp */
  ESP = (EBP);
  /* 10ed8a1d pop ebp */
  EBP = (pop32());
  /* 10ed8a1e ret 4 */
  ESPCHK(0x10ed89c0u, _esp0);
  ESP += 8; return;
}

/* FUN_10008a40 @ 0x10ed8a40 (89 bytes, 36 insns) */
void f_10ed8a40(void) {
  FTRACE(0x10ed8a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed8a40 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed8a41 mov ebp, esp */
  EBP = (ESP);
  /* 10ed8a43 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed8a46 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed8a47 push esi */
  push32((uint32_t)(ESI));
  /* 10ed8a48 push edi */
  push32((uint32_t)(EDI));
  /* 10ed8a49 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed8a4a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed8a4d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed8a52 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed8a57 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed8a59 pop ecx */
  ECX = (pop32());
  /* 10ed8a5a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed8a5d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8a60 call 0x10ed12b2 */
  push32(0x10ed8a65u); f_10ed12b2();
  /* 10ed8a65 mov esi, esp */
  ESI = (ESP);
  /* 10ed8a67 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed8a69 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed8a6b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed8a6e push eax */
  push32((uint32_t)(EAX));
  /* 10ed8a6f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8a72 mov dl, byte ptr [ecx + 0x3c] */
  DL = (r8((uint32_t)(ECX + 0x3c)));
  /* 10ed8a75 push edx */
  push32((uint32_t)(EDX));
  /* 10ed8a76 call dword ptr [0x10f1256c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1256c))), 0x10ed8a7cu);
  /* 10ed8a7c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8a7f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8a81 call 0x10ed9380 */
  push32(0x10ed8a86u); f_10ed9380();
  /* 10ed8a86 pop edi */
  EDI = (pop32());
  /* 10ed8a87 pop esi */
  ESI = (pop32());
  /* 10ed8a88 pop ebx */
  EBX = (pop32());
  /* 10ed8a89 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8a8c cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8a8e call 0x10ed9380 */
  push32(0x10ed8a93u); f_10ed9380();
  /* 10ed8a93 mov esp, ebp */
  ESP = (EBP);
  /* 10ed8a95 pop ebp */
  EBP = (pop32());
  /* 10ed8a96 ret 4 */
  ESPCHK(0x10ed8a40u, _esp0);
  ESP += 8; return;
}

/* FUN_10008ab0 @ 0x10ed8ab0 (103 bytes, 41 insns) */
void f_10ed8ab0(void) {
  FTRACE(0x10ed8ab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed8ab0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed8ab1 mov ebp, esp */
  EBP = (ESP);
  /* 10ed8ab3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed8ab6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed8ab7 push esi */
  push32((uint32_t)(ESI));
  /* 10ed8ab8 push edi */
  push32((uint32_t)(EDI));
  /* 10ed8ab9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed8aba lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed8abd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed8ac2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed8ac7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed8ac9 pop ecx */
  ECX = (pop32());
  /* 10ed8aca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed8acd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8ad0 call 0x10ed12b2 */
  push32(0x10ed8ad5u); f_10ed12b2();
  /* 10ed8ad5 mov esi, esp */
  ESI = (ESP);
  /* 10ed8ad7 mov al, byte ptr [ebp + 0xc] */
  AL = (r8((uint32_t)(EBP + 0xc)));
  /* 10ed8ada push eax */
  push32((uint32_t)(EAX));
  /* 10ed8adb call 0x10ed9d80 */
  push32(0x10ed8ae0u); f_10ed9d80();
  /* 10ed8ae0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ed8ae1 mov ecx, 0xff */
  ECX = (0xffu);
  /* 10ed8ae6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ed8ae8 push edx */
  push32((uint32_t)(EDX));
  /* 10ed8ae9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed8aec push edx */
  push32((uint32_t)(EDX));
  /* 10ed8aed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8af0 mov cl, byte ptr [eax + 0x3c] */
  CL = (r8((uint32_t)(EAX + 0x3c)));
  /* 10ed8af3 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed8af4 call dword ptr [0x10f12574] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12574))), 0x10ed8afau);
  /* 10ed8afa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8afd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8aff call 0x10ed9380 */
  push32(0x10ed8b04u); f_10ed9380();
  /* 10ed8b04 pop edi */
  EDI = (pop32());
  /* 10ed8b05 pop esi */
  ESI = (pop32());
  /* 10ed8b06 pop ebx */
  EBX = (pop32());
  /* 10ed8b07 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8b0a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8b0c call 0x10ed9380 */
  push32(0x10ed8b11u); f_10ed9380();
  /* 10ed8b11 mov esp, ebp */
  ESP = (EBP);
  /* 10ed8b13 pop ebp */
  EBP = (pop32());
  /* 10ed8b14 ret 8 */
  ESPCHK(0x10ed8ab0u, _esp0);
  ESP += 12; return;
}

/* FUN_10008b30 @ 0x10ed8b30 (62 bytes, 27 insns) */
void f_10ed8b30(void) {
  FTRACE(0x10ed8b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed8b30 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed8b31 mov ebp, esp */
  EBP = (ESP);
  /* 10ed8b33 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed8b36 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed8b37 push esi */
  push32((uint32_t)(ESI));
  /* 10ed8b38 push edi */
  push32((uint32_t)(EDI));
  /* 10ed8b39 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed8b3a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed8b3d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed8b42 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed8b47 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed8b49 pop ecx */
  ECX = (pop32());
  /* 10ed8b4a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed8b4d push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed8b4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed8b52 push eax */
  push32((uint32_t)(EAX));
  /* 10ed8b53 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8b56 call 0x10ed1212 */
  push32(0x10ed8b5bu); f_10ed1212();
  /* 10ed8b5b pop edi */
  EDI = (pop32());
  /* 10ed8b5c pop esi */
  ESI = (pop32());
  /* 10ed8b5d pop ebx */
  EBX = (pop32());
  /* 10ed8b5e add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8b61 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8b63 call 0x10ed9380 */
  push32(0x10ed8b68u); f_10ed9380();
  /* 10ed8b68 mov esp, ebp */
  ESP = (EBP);
  /* 10ed8b6a pop ebp */
  EBP = (pop32());
  /* 10ed8b6b ret 4 */
  ESPCHK(0x10ed8b30u, _esp0);
  ESP += 8; return;
}

/* FUN_10008b80 @ 0x10ed8b80 (39 bytes, 20 insns) */
void f_10ed8b80(void) {
  FTRACE(0x10ed8b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed8b80 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed8b81 mov ebp, esp */
  EBP = (ESP);
  /* 10ed8b83 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed8b86 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed8b87 push esi */
  push32((uint32_t)(ESI));
  /* 10ed8b88 push edi */
  push32((uint32_t)(EDI));
  /* 10ed8b89 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed8b8a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed8b8d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed8b92 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed8b97 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed8b99 pop ecx */
  ECX = (pop32());
  /* 10ed8b9a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed8b9d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8ba0 pop edi */
  EDI = (pop32());
  /* 10ed8ba1 pop esi */
  ESI = (pop32());
  /* 10ed8ba2 pop ebx */
  EBX = (pop32());
  /* 10ed8ba3 mov esp, ebp */
  ESP = (EBP);
  /* 10ed8ba5 pop ebp */
  EBP = (pop32());
  /* 10ed8ba6 ret  */
  ESPCHK(0x10ed8b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10008bb0 @ 0x10ed8bb0 (70 bytes, 30 insns) */
void f_10ed8bb0(void) {
  FTRACE(0x10ed8bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed8bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed8bb1 mov ebp, esp */
  EBP = (ESP);
  /* 10ed8bb3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed8bb6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed8bb7 push esi */
  push32((uint32_t)(ESI));
  /* 10ed8bb8 push edi */
  push32((uint32_t)(EDI));
  /* 10ed8bb9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed8bba lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed8bbd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed8bc2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed8bc7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed8bc9 pop ecx */
  ECX = (pop32());
  /* 10ed8bca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed8bcd mov esi, esp */
  ESI = (ESP);
  /* 10ed8bcf push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed8bd1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8bd4 push eax */
  push32((uint32_t)(EAX));
  /* 10ed8bd5 call dword ptr [0x10f12564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12564))), 0x10ed8bdbu);
  /* 10ed8bdb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8bde cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8be0 call 0x10ed9380 */
  push32(0x10ed8be5u); f_10ed9380();
  /* 10ed8be5 pop edi */
  EDI = (pop32());
  /* 10ed8be6 pop esi */
  ESI = (pop32());
  /* 10ed8be7 pop ebx */
  EBX = (pop32());
  /* 10ed8be8 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8beb cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8bed call 0x10ed9380 */
  push32(0x10ed8bf2u); f_10ed9380();
  /* 10ed8bf2 mov esp, ebp */
  ESP = (EBP);
  /* 10ed8bf4 pop ebp */
  EBP = (pop32());
  /* 10ed8bf5 ret  */
  ESPCHK(0x10ed8bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008c10 @ 0x10ed8c10 (123 bytes, 48 insns) */
void f_10ed8c10(void) {
  FTRACE(0x10ed8c10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed8c10 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed8c11 mov ebp, esp */
  EBP = (ESP);
  /* 10ed8c13 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed8c16 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed8c17 push esi */
  push32((uint32_t)(ESI));
  /* 10ed8c18 push edi */
  push32((uint32_t)(EDI));
  /* 10ed8c19 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed8c1a lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 10ed8c1d mov ecx, 0x13 */
  ECX = (0x13u);
  /* 10ed8c22 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed8c27 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed8c29 pop ecx */
  ECX = (pop32());
  /* 10ed8c2a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed8c2d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ed8c31 mov byte ptr [ebp - 0xc], 0 */
  w8((uint32_t)(EBP + -0xc), (0x0u));
  /* 10ed8c35 jmp 0x10ed8c3f */
  goto L_10ed8c3f;
L_10ed8c37:;
  /* 10ed8c37 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10ed8c3a add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10ed8c3c mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
L_10ed8c3f:;
  /* 10ed8c3f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10ed8c42 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10ed8c48 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8c4b jge 0x10ed8c77 */
  if ((C.sf==C.of)) goto L_10ed8c77;
  /* 10ed8c4d mov esi, esp */
  ESI = (ESP);
  /* 10ed8c4f mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 10ed8c52 push edx */
  push32((uint32_t)(EDX));
  /* 10ed8c53 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8c56 push eax */
  push32((uint32_t)(EAX));
  /* 10ed8c57 call dword ptr [0x10f12500] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12500))), 0x10ed8c5du);
  /* 10ed8c5d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8c60 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8c62 call 0x10ed9380 */
  push32(0x10ed8c67u); f_10ed9380();
  /* 10ed8c67 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ed8c69 jle 0x10ed8c75 */
  if ((C.zf||C.sf!=C.of)) goto L_10ed8c75;
  /* 10ed8c6b mov cl, byte ptr [ebp - 0xc] */
  CL = (r8((uint32_t)(EBP + -0xc)));
  /* 10ed8c6e mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10ed8c71 mov byte ptr [ebp - 0xc], 8 */
  w8((uint32_t)(EBP + -0xc), (0x8u));
L_10ed8c75:;
  /* 10ed8c75 jmp 0x10ed8c37 */
  goto L_10ed8c37;
L_10ed8c77:;
  /* 10ed8c77 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10ed8c7a pop edi */
  EDI = (pop32());
  /* 10ed8c7b pop esi */
  ESI = (pop32());
  /* 10ed8c7c pop ebx */
  EBX = (pop32());
  /* 10ed8c7d add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8c80 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8c82 call 0x10ed9380 */
  push32(0x10ed8c87u); f_10ed9380();
  /* 10ed8c87 mov esp, ebp */
  ESP = (EBP);
  /* 10ed8c89 pop ebp */
  EBP = (pop32());
  /* 10ed8c8a ret  */
  ESPCHK(0x10ed8c10u, _esp0);
  ESP += 4; return;
}

/* FUN_10008cb0 @ 0x10ed8cb0 (68 bytes, 29 insns) */
void f_10ed8cb0(void) {
  FTRACE(0x10ed8cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed8cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed8cb1 mov ebp, esp */
  EBP = (ESP);
  /* 10ed8cb3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed8cb6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed8cb7 push esi */
  push32((uint32_t)(ESI));
  /* 10ed8cb8 push edi */
  push32((uint32_t)(EDI));
  /* 10ed8cb9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed8cba lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed8cbd mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed8cc2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed8cc7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed8cc9 pop ecx */
  ECX = (pop32());
  /* 10ed8cca mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed8ccd mov esi, esp */
  ESI = (ESP);
  /* 10ed8ccf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8cd2 push eax */
  push32((uint32_t)(EAX));
  /* 10ed8cd3 call dword ptr [0x10f1258c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1258c))), 0x10ed8cd9u);
  /* 10ed8cd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8cdc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8cde call 0x10ed9380 */
  push32(0x10ed8ce3u); f_10ed9380();
  /* 10ed8ce3 pop edi */
  EDI = (pop32());
  /* 10ed8ce4 pop esi */
  ESI = (pop32());
  /* 10ed8ce5 pop ebx */
  EBX = (pop32());
  /* 10ed8ce6 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8ce9 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8ceb call 0x10ed9380 */
  push32(0x10ed8cf0u); f_10ed9380();
  /* 10ed8cf0 mov esp, ebp */
  ESP = (EBP);
  /* 10ed8cf2 pop ebp */
  EBP = (pop32());
  /* 10ed8cf3 ret  */
  ESPCHK(0x10ed8cb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d10 @ 0x10ed8d10 (69 bytes, 29 insns) */
void f_10ed8d10(void) {
  FTRACE(0x10ed8d10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed8d10 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed8d11 mov ebp, esp */
  EBP = (ESP);
  /* 10ed8d13 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed8d16 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed8d17 push esi */
  push32((uint32_t)(ESI));
  /* 10ed8d18 push edi */
  push32((uint32_t)(EDI));
  /* 10ed8d19 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed8d1a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 10ed8d1d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 10ed8d22 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed8d27 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed8d29 pop ecx */
  ECX = (pop32());
  /* 10ed8d2a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed8d2d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ed8d31 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8d34 call 0x10ed123a */
  push32(0x10ed8d39u); f_10ed123a();
  /* 10ed8d39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ed8d3b jle 0x10ed8d41 */
  if ((C.zf||C.sf!=C.of)) goto L_10ed8d41;
  /* 10ed8d3d mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_10ed8d41:;
  /* 10ed8d41 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10ed8d44 pop edi */
  EDI = (pop32());
  /* 10ed8d45 pop esi */
  ESI = (pop32());
  /* 10ed8d46 pop ebx */
  EBX = (pop32());
  /* 10ed8d47 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8d4a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8d4c call 0x10ed9380 */
  push32(0x10ed8d51u); f_10ed9380();
  /* 10ed8d51 mov esp, ebp */
  ESP = (EBP);
  /* 10ed8d53 pop ebp */
  EBP = (pop32());
  /* 10ed8d54 ret  */
  ESPCHK(0x10ed8d10u, _esp0);
  ESP += 4; return;
}

/* FUN_10008d70 @ 0x10ed8d70 (88 bytes, 35 insns) */
void f_10ed8d70(void) {
  FTRACE(0x10ed8d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed8d70 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed8d71 mov ebp, esp */
  EBP = (ESP);
  /* 10ed8d73 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed8d76 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed8d77 push esi */
  push32((uint32_t)(ESI));
  /* 10ed8d78 push edi */
  push32((uint32_t)(EDI));
  /* 10ed8d79 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed8d7a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed8d7d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed8d82 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed8d87 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed8d89 pop ecx */
  ECX = (pop32());
  /* 10ed8d8a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed8d8d mov esi, esp */
  ESI = (ESP);
  /* 10ed8d8f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed8d92 push eax */
  push32((uint32_t)(EAX));
  /* 10ed8d93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8d96 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed8d97 call dword ptr [0x10f124d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f124d8))), 0x10ed8d9du);
  /* 10ed8d9d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8da0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8da2 call 0x10ed9380 */
  push32(0x10ed8da7u); f_10ed9380();
  /* 10ed8da7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8daa call 0x10ed1299 */
  push32(0x10ed8dafu); f_10ed1299();
  /* 10ed8daf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8db2 mov byte ptr [edx + 0x3c], al */
  w8((uint32_t)(EDX + 0x3c), (AL));
  /* 10ed8db5 pop edi */
  EDI = (pop32());
  /* 10ed8db6 pop esi */
  ESI = (pop32());
  /* 10ed8db7 pop ebx */
  EBX = (pop32());
  /* 10ed8db8 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8dbb cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8dbd call 0x10ed9380 */
  push32(0x10ed8dc2u); f_10ed9380();
  /* 10ed8dc2 mov esp, ebp */
  ESP = (EBP);
  /* 10ed8dc4 pop ebp */
  EBP = (pop32());
  /* 10ed8dc5 ret 4 */
  ESPCHK(0x10ed8d70u, _esp0);
  ESP += 8; return;
}

/* FUN_10008de0 @ 0x10ed8de0 (110 bytes, 42 insns) */
void f_10ed8de0(void) {
  FTRACE(0x10ed8de0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed8de0 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed8de1 mov ebp, esp */
  EBP = (ESP);
  /* 10ed8de3 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed8de6 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed8de7 push esi */
  push32((uint32_t)(ESI));
  /* 10ed8de8 push edi */
  push32((uint32_t)(EDI));
  /* 10ed8de9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed8dea lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed8ded mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed8df2 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed8df7 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed8df9 pop ecx */
  ECX = (pop32());
  /* 10ed8dfa mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed8dfd mov esi, esp */
  ESI = (ESP);
  /* 10ed8dff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8e02 push eax */
  push32((uint32_t)(EAX));
  /* 10ed8e03 call dword ptr [0x10f12580] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12580))), 0x10ed8e09u);
  /* 10ed8e09 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8e0c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8e0e call 0x10ed9380 */
  push32(0x10ed8e13u); f_10ed9380();
  /* 10ed8e13 mov esi, esp */
  ESI = (ESP);
  /* 10ed8e15 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8e18 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed8e19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed8e1c push edx */
  push32((uint32_t)(EDX));
  /* 10ed8e1d call dword ptr [0x10f124b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f124b8))), 0x10ed8e23u);
  /* 10ed8e23 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8e26 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8e28 call 0x10ed9380 */
  push32(0x10ed8e2du); f_10ed9380();
  /* 10ed8e2d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8e30 call 0x10ed1299 */
  push32(0x10ed8e35u); f_10ed1299();
  /* 10ed8e35 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8e38 mov byte ptr [ecx + 0x3c], al */
  w8((uint32_t)(ECX + 0x3c), (AL));
  /* 10ed8e3b pop edi */
  EDI = (pop32());
  /* 10ed8e3c pop esi */
  ESI = (pop32());
  /* 10ed8e3d pop ebx */
  EBX = (pop32());
  /* 10ed8e3e add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8e41 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8e43 call 0x10ed9380 */
  push32(0x10ed8e48u); f_10ed9380();
  /* 10ed8e48 mov esp, ebp */
  ESP = (EBP);
  /* 10ed8e4a pop ebp */
  EBP = (pop32());
  /* 10ed8e4b ret 4 */
  ESPCHK(0x10ed8de0u, _esp0);
  ESP += 8; return;
}

/* FUN_10008e70 @ 0x10ed8e70 (113 bytes, 44 insns) */
void f_10ed8e70(void) {
  FTRACE(0x10ed8e70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed8e70 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed8e71 mov ebp, esp */
  EBP = (ESP);
  /* 10ed8e73 sub esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed8e76 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed8e77 push esi */
  push32((uint32_t)(ESI));
  /* 10ed8e78 push edi */
  push32((uint32_t)(EDI));
  /* 10ed8e79 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed8e7a lea edi, [ebp - 0x48] */
  EDI = ((uint32_t)(EBP + -0x48));
  /* 10ed8e7d mov ecx, 0x12 */
  ECX = (0x12u);
  /* 10ed8e82 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed8e87 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed8e89 pop ecx */
  ECX = (pop32());
  /* 10ed8e8a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed8e8d mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10ed8e91 mov esi, esp */
  ESI = (ESP);
  /* 10ed8e93 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8e96 push eax */
  push32((uint32_t)(EAX));
  /* 10ed8e97 call dword ptr [0x10f1258c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1258c))), 0x10ed8e9du);
  /* 10ed8e9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8ea0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8ea2 call 0x10ed9380 */
  push32(0x10ed8ea7u); f_10ed9380();
  /* 10ed8ea7 mov esi, eax */
  ESI = (EAX);
  /* 10ed8ea9 mov edi, esp */
  EDI = (ESP);
  /* 10ed8eab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8eae push ecx */
  push32((uint32_t)(ECX));
  /* 10ed8eaf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed8eb2 push edx */
  push32((uint32_t)(EDX));
  /* 10ed8eb3 call dword ptr [0x10f12578] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12578))), 0x10ed8eb9u);
  /* 10ed8eb9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8ebc cmp edi, esp */
  { uint32_t _a=(EDI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8ebe call 0x10ed9380 */
  push32(0x10ed8ec3u); f_10ed9380();
  /* 10ed8ec3 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8ec5 jne 0x10ed8ecb */
  if (!C.zf) goto L_10ed8ecb;
  /* 10ed8ec7 mov byte ptr [ebp - 8], 1 */
  w8((uint32_t)(EBP + -0x8), (0x1u));
L_10ed8ecb:;
  /* 10ed8ecb mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10ed8ece pop edi */
  EDI = (pop32());
  /* 10ed8ecf pop esi */
  ESI = (pop32());
  /* 10ed8ed0 pop ebx */
  EBX = (pop32());
  /* 10ed8ed1 add esp, 0x48 */
  { uint32_t _a=(ESP),_b=(0x48u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8ed4 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8ed6 call 0x10ed9380 */
  push32(0x10ed8edbu); f_10ed9380();
  /* 10ed8edb mov esp, ebp */
  ESP = (EBP);
  /* 10ed8edd pop ebp */
  EBP = (pop32());
  /* 10ed8ede ret 4 */
  ESPCHK(0x10ed8e70u, _esp0);
  ESP += 8; return;
}

/* FUN_10008f00 @ 0x10ed8f00 (47 bytes, 22 insns) */
void f_10ed8f00(void) {
  FTRACE(0x10ed8f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed8f00 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed8f01 mov ebp, esp */
  EBP = (ESP);
  /* 10ed8f03 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed8f06 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed8f07 push esi */
  push32((uint32_t)(ESI));
  /* 10ed8f08 push edi */
  push32((uint32_t)(EDI));
  /* 10ed8f09 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed8f0a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed8f0d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed8f12 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed8f17 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed8f19 pop ecx */
  ECX = (pop32());
  /* 10ed8f1a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed8f1d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8f20 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 10ed8f23 mov byte ptr [eax + 0x3c], cl */
  w8((uint32_t)(EAX + 0x3c), (CL));
  /* 10ed8f26 pop edi */
  EDI = (pop32());
  /* 10ed8f27 pop esi */
  ESI = (pop32());
  /* 10ed8f28 pop ebx */
  EBX = (pop32());
  /* 10ed8f29 mov esp, ebp */
  ESP = (EBP);
  /* 10ed8f2b pop ebp */
  EBP = (pop32());
  /* 10ed8f2c ret 4 */
  ESPCHK(0x10ed8f00u, _esp0);
  ESP += 8; return;
}

/* FUN_10008f40 @ 0x10ed8f40 (38 bytes, 19 insns) */
void f_10ed8f40(void) {
  FTRACE(0x10ed8f40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed8f40 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed8f41 mov ebp, esp */
  EBP = (ESP);
  /* 10ed8f43 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed8f46 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed8f47 push esi */
  push32((uint32_t)(ESI));
  /* 10ed8f48 push edi */
  push32((uint32_t)(EDI));
  /* 10ed8f49 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed8f4a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed8f4d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed8f52 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed8f57 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed8f59 pop ecx */
  ECX = (pop32());
  /* 10ed8f5a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed8f5d pop edi */
  EDI = (pop32());
  /* 10ed8f5e pop esi */
  ESI = (pop32());
  /* 10ed8f5f pop ebx */
  EBX = (pop32());
  /* 10ed8f60 mov esp, ebp */
  ESP = (EBP);
  /* 10ed8f62 pop ebp */
  EBP = (pop32());
  /* 10ed8f63 ret 4 */
  ESPCHK(0x10ed8f40u, _esp0);
  ESP += 8; return;
}

/* FUN_10008f70 @ 0x10ed8f70 (127 bytes, 48 insns) */
void f_10ed8f70(void) {
  FTRACE(0x10ed8f70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed8f70 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed8f71 mov ebp, esp */
  EBP = (ESP);
  /* 10ed8f73 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed8f76 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed8f77 push esi */
  push32((uint32_t)(ESI));
  /* 10ed8f78 push edi */
  push32((uint32_t)(EDI));
  /* 10ed8f79 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed8f7a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed8f7d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed8f82 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed8f87 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed8f89 pop ecx */
  ECX = (pop32());
  /* 10ed8f8a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed8f8d mov esi, esp */
  ESI = (ESP);
  /* 10ed8f8f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed8f92 push eax */
  push32((uint32_t)(EAX));
  /* 10ed8f93 call dword ptr [0x10f1258c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1258c))), 0x10ed8f99u);
  /* 10ed8f99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8f9c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8f9e call 0x10ed9380 */
  push32(0x10ed8fa3u); f_10ed9380();
  /* 10ed8fa3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ed8fa5 jle 0x10ed8fdc */
  if ((C.zf||C.sf!=C.of)) goto L_10ed8fdc;
  /* 10ed8fa7 mov esi, esp */
  ESI = (ESP);
  /* 10ed8fa9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed8fab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed8fae call 0x10ed11e5 */
  push32(0x10ed8fb3u); f_10ed11e5();
  /* 10ed8fb3 push eax */
  push32((uint32_t)(EAX));
  /* 10ed8fb4 call dword ptr [0x10f12564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12564))), 0x10ed8fbau);
  /* 10ed8fba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8fbd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8fbf call 0x10ed9380 */
  push32(0x10ed8fc4u); f_10ed9380();
  /* 10ed8fc4 mov esi, esp */
  ESI = (ESP);
  /* 10ed8fc6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10ed8fc9 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed8fca push 1 */
  push32((uint32_t)(0x1u));
  /* 10ed8fcc call dword ptr [0x10f12548] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12548))), 0x10ed8fd2u);
  /* 10ed8fd2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8fd5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8fd7 call 0x10ed9380 */
  push32(0x10ed8fdcu); f_10ed9380();
L_10ed8fdc:;
  /* 10ed8fdc pop edi */
  EDI = (pop32());
  /* 10ed8fdd pop esi */
  ESI = (pop32());
  /* 10ed8fde pop ebx */
  EBX = (pop32());
  /* 10ed8fdf add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed8fe2 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed8fe4 call 0x10ed9380 */
  push32(0x10ed8fe9u); f_10ed9380();
  /* 10ed8fe9 mov esp, ebp */
  ESP = (EBP);
  /* 10ed8feb pop ebp */
  EBP = (pop32());
  /* 10ed8fec ret 4 */
  ESPCHK(0x10ed8f70u, _esp0);
  ESP += 8; return;
}

/* FUN_10009010 @ 0x10ed9010 (181 bytes, 65 insns) */
void f_10ed9010(void) {
  FTRACE(0x10ed9010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed9010 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed9011 mov ebp, esp */
  EBP = (ESP);
  /* 10ed9013 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed9016 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed9017 push esi */
  push32((uint32_t)(ESI));
  /* 10ed9018 push edi */
  push32((uint32_t)(EDI));
  /* 10ed9019 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed901a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed901d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed9022 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed9027 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed9029 pop ecx */
  ECX = (pop32());
  /* 10ed902a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed902d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed9030 call 0x10ed1203 */
  push32(0x10ed9035u); f_10ed1203();
  /* 10ed9035 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10ed903a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ed903c je 0x10ed90b4 */
  if (C.zf) goto L_10ed90b4;
  /* 10ed903e mov esi, esp */
  ESI = (ESP);
  /* 10ed9040 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed9042 push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10ed9047 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed904a call 0x10ed1104 */
  push32(0x10ed904fu); f_10ed1104();
  /* 10ed904f push eax */
  push32((uint32_t)(EAX));
  /* 10ed9050 call dword ptr [0x10f12560] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12560))), 0x10ed9056u);
  /* 10ed9056 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed9059 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed905b call 0x10ed9380 */
  push32(0x10ed9060u); f_10ed9380();
  /* 10ed9060 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10ed9062 jle 0x10ed90b4 */
  if ((C.zf||C.sf!=C.of)) goto L_10ed90b4;
  /* 10ed9064 mov esi, esp */
  ESI = (ESP);
  /* 10ed9066 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed9068 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed906a push 0xbb8 */
  push32((uint32_t)(0xbb8u));
  /* 10ed906f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed9072 call 0x10ed1104 */
  push32(0x10ed9077u); f_10ed1104();
  /* 10ed9077 push eax */
  push32((uint32_t)(EAX));
  /* 10ed9078 call dword ptr [0x10f12584] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12584))), 0x10ed907eu);
  /* 10ed907e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed9081 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed9083 call 0x10ed9380 */
  push32(0x10ed9088u); f_10ed9380();
  /* 10ed9088 mov esi, esp */
  ESI = (ESP);
  /* 10ed908a push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed908c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed908f add eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed9092 push eax */
  push32((uint32_t)(EAX));
  /* 10ed9093 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed9095 call dword ptr [0x10f12588] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12588))), 0x10ed909bu);
  /* 10ed909b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed909e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed90a0 call 0x10ed9380 */
  push32(0x10ed90a5u); f_10ed9380();
  /* 10ed90a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed90a8 add ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed90ab push ecx */
  push32((uint32_t)(ECX));
  /* 10ed90ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed90af call 0x10ed1050 */
  push32(0x10ed90b4u); f_10ed1050();
L_10ed90b4:;
  /* 10ed90b4 pop edi */
  EDI = (pop32());
  /* 10ed90b5 pop esi */
  ESI = (pop32());
  /* 10ed90b6 pop ebx */
  EBX = (pop32());
  /* 10ed90b7 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed90ba cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed90bc call 0x10ed9380 */
  push32(0x10ed90c1u); f_10ed9380();
  /* 10ed90c1 mov esp, ebp */
  ESP = (EBP);
  /* 10ed90c3 pop ebp */
  EBP = (pop32());
  /* 10ed90c4 ret  */
  ESPCHK(0x10ed9010u, _esp0);
  ESP += 4; return;
}

/* FUN_10009100 @ 0x10ed9100 (98 bytes, 38 insns) */
void f_10ed9100(void) {
  FTRACE(0x10ed9100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed9100 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed9101 mov ebp, esp */
  EBP = (ESP);
  /* 10ed9103 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed9106 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed9107 push esi */
  push32((uint32_t)(ESI));
  /* 10ed9108 push edi */
  push32((uint32_t)(EDI));
  /* 10ed9109 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed910a lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 10ed910d mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10ed9112 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed9117 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed9119 pop ecx */
  ECX = (pop32());
  /* 10ed911a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed911d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed9120 call 0x10ed11e5 */
  push32(0x10ed9125u); f_10ed11e5();
  /* 10ed9125 mov esi, esp */
  ESI = (ESP);
  /* 10ed9127 push eax */
  push32((uint32_t)(EAX));
  /* 10ed9128 call dword ptr [0x10f12580] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12580))), 0x10ed912eu);
  /* 10ed912e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed9131 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed9133 call 0x10ed9380 */
  push32(0x10ed9138u); f_10ed9380();
  /* 10ed9138 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed913b add eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed913e mov esi, esp */
  ESI = (ESP);
  /* 10ed9140 push eax */
  push32((uint32_t)(EAX));
  /* 10ed9141 call dword ptr [0x10f12580] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12580))), 0x10ed9147u);
  /* 10ed9147 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed914a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed914c call 0x10ed9380 */
  push32(0x10ed9151u); f_10ed9380();
  /* 10ed9151 pop edi */
  EDI = (pop32());
  /* 10ed9152 pop esi */
  ESI = (pop32());
  /* 10ed9153 pop ebx */
  EBX = (pop32());
  /* 10ed9154 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed9157 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed9159 call 0x10ed9380 */
  push32(0x10ed915eu); f_10ed9380();
  /* 10ed915e mov esp, ebp */
  ESP = (EBP);
  /* 10ed9160 pop ebp */
  EBP = (pop32());
  /* 10ed9161 ret  */
  ESPCHK(0x10ed9100u, _esp0);
  ESP += 4; return;
}

/* FUN_10009180 @ 0x10ed9180 (139 bytes, 53 insns) */
void f_10ed9180(void) {
  FTRACE(0x10ed9180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed9180 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed9181 mov ebp, esp */
  EBP = (ESP);
  /* 10ed9183 sub esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed9186 push ebx */
  push32((uint32_t)(EBX));
  /* 10ed9187 push esi */
  push32((uint32_t)(ESI));
  /* 10ed9188 push edi */
  push32((uint32_t)(EDI));
  /* 10ed9189 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed918a lea edi, [ebp - 0x4c] */
  EDI = ((uint32_t)(EBP + -0x4c));
  /* 10ed918d mov ecx, 0x13 */
  ECX = (0x13u);
  /* 10ed9192 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10ed9197 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10ed9199 pop ecx */
  ECX = (pop32());
  /* 10ed919a mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10ed919d mov esi, esp */
  ESI = (ESP);
  /* 10ed919f push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed91a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10ed91a4 push eax */
  push32((uint32_t)(EAX));
  /* 10ed91a5 call dword ptr [0x10f12564] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f12564))), 0x10ed91abu);
  /* 10ed91ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed91ae cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed91b0 call 0x10ed9380 */
  push32(0x10ed91b5u); f_10ed9380();
  /* 10ed91b5 mov esi, esp */
  ESI = (ESP);
  /* 10ed91b7 push 0x12c */
  push32((uint32_t)(0x12cu));
  /* 10ed91bc push 1 */
  push32((uint32_t)(0x1u));
  /* 10ed91be lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 10ed91c1 push ecx */
  push32((uint32_t)(ECX));
  /* 10ed91c2 call dword ptr [0x10f124b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f124b4))), 0x10ed91c8u);
  /* 10ed91c8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed91cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed91cd call 0x10ed9380 */
  push32(0x10ed91d2u); f_10ed9380();
  /* 10ed91d2 mov esi, esp */
  ESI = (ESP);
  /* 10ed91d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10ed91d6 call 0x10ed9d80 */
  push32(0x10ed91dbu); f_10ed9d80();
  /* 10ed91db cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10ed91dc mov ecx, 0xff */
  ECX = (0xffu);
  /* 10ed91e1 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10ed91e3 push edx */
  push32((uint32_t)(EDX));
  /* 10ed91e4 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10ed91e7 push edx */
  push32((uint32_t)(EDX));
  /* 10ed91e8 push 1 */
  push32((uint32_t)(0x1u));
  /* 10ed91ea call dword ptr [0x10f1256c] */
  call_ind((uint32_t)(r32((uint32_t)(0x10f1256c))), 0x10ed91f0u);
  /* 10ed91f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed91f3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed91f5 call 0x10ed9380 */
  push32(0x10ed91fau); f_10ed9380();
  /* 10ed91fa pop edi */
  EDI = (pop32());
  /* 10ed91fb pop esi */
  ESI = (pop32());
  /* 10ed91fc pop ebx */
  EBX = (pop32());
  /* 10ed91fd add esp, 0x4c */
  { uint32_t _a=(ESP),_b=(0x4cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed9200 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed9202 call 0x10ed9380 */
  push32(0x10ed9207u); f_10ed9380();
  /* 10ed9207 mov esp, ebp */
  ESP = (EBP);
  /* 10ed9209 pop ebp */
  EBP = (pop32());
  /* 10ed920a ret  */
  ESPCHK(0x10ed9180u, _esp0);
  ESP += 4; return;
}

/* __chkesp @ 0x10ed9380 (56 bytes, 28 insns) */
void f_10ed9380(void) {
  FTRACE(0x10ed9380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed9380 jne 0x10ed9383 */
  if (!C.zf) goto L_10ed9383;
  /* 10ed9382 ret  */
  ESPCHK(0x10ed9380u, _esp0);
  ESP += 4; return;
L_10ed9383:;
  /* 10ed9383 push ebp */
  push32((uint32_t)(EBP));
  /* 10ed9384 mov ebp, esp */
  EBP = (ESP);
  /* 10ed9386 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed9389 push eax */
  push32((uint32_t)(EAX));
  /* 10ed938a push edx */
  push32((uint32_t)(EDX));
  /* 10ed938b push ebx */
  push32((uint32_t)(EBX));
  /* 10ed938c push esi */
  push32((uint32_t)(ESI));
  /* 10ed938d push edi */
  push32((uint32_t)(EDI));
  /* 10ed938e push 0x10f0918c */
  push32((uint32_t)(0x10f0918cu));
  /* 10ed9393 push 0x10f09188 */
  push32((uint32_t)(0x10f09188u));
  /* 10ed9398 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10ed939a push 0x10f09178 */
  push32((uint32_t)(0x10f09178u));
  /* 10ed939f push 1 */
  push32((uint32_t)(0x1u));
  /* 10ed93a1 call 0x10eda2e0 */
  push32(0x10ed93a6u); f_10eda2e0();
  /* 10ed93a6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed93a9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed93ac jne 0x10ed93af */
  if (!C.zf) goto L_10ed93af;
  /* 10ed93ae int3  */
  x86_unimpl("int3 @ 0x10ed93ae");
L_10ed93af:;
  /* 10ed93af pop edi */
  EDI = (pop32());
  /* 10ed93b0 pop esi */
  ESI = (pop32());
  /* 10ed93b1 pop ebx */
  EBX = (pop32());
  /* 10ed93b2 pop edx */
  EDX = (pop32());
  /* 10ed93b3 pop eax */
  EAX = (pop32());
  /* 10ed93b4 mov esp, ebp */
  ESP = (EBP);
  /* 10ed93b6 pop ebp */
  EBP = (pop32());
  /* 10ed93b7 ret  */
  ESPCHK(0x10ed9380u, _esp0);
  ESP += 4; return;
}

/* FUN_100093c0 @ 0x10ed93c0 (20 bytes, 6 insns) */
void f_10ed93c0(void) {
  FTRACE(0x10ed93c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed93c0 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10ed93c3 fst qword ptr [esp] */
  wf64((uint32_t)(ESP), FPU_ST(0));
  /* 10ed93c6 call 0x10edabd8 */
  push32(0x10ed93cbu); f_10edabd8();
  /* 10ed93cb call 0x10ed93dd */
  push32(0x10ed93d0u); f_10ed93dd();
  /* 10ed93d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10ed93d3 ret  */
  ESPCHK(0x10ed93c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100093d4 @ 0x10ed93d4 (9 bytes, 2 insns) */
void f_10ed93d4(void) {
  FTRACE(0x10ed93d4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed93d4 lea edx, [esp + 4] */
  EDX = ((uint32_t)(ESP + 0x4));
  /* 10ed93d8 call 0x10edab95 */
  push32(0x10ed93ddu); f_10edab95();
}

/* FUN_100093dd @ 0x10ed93dd (145 bytes, 43 insns) */
void f_10ed93dd(void) {
  FTRACE(0x10ed93ddu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10ed93dd push edx */
  push32((uint32_t)(EDX));
  /* 10ed93de wait  */
  /* wait (no observable integer/reg state) */
  /* 10ed93df fnstcw word ptr [esp] */
  w16((uint32_t)(ESP), C.fcw);
  /* 10ed93e2 je 0x10ed9434 */
  if (C.zf) goto L_10ed9434;
  /* 10ed93e4 cmp word ptr [esp], 0x27f */
  { uint32_t _a=(r16((uint32_t)(ESP))),_b=(0x27fu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 10ed93ea je 0x10ed93f2 */
  if (C.zf) goto L_10ed93f2;
  /* 10ed93ec fldcw word ptr [0x10f094e8] */
  C.fcw = r16((uint32_t)(0x10f094e8));
L_10ed93f2:;
  /* 10ed93f2 fsin  */
  FPU_ST(0) = __builtin_sin(FPU_ST(0)); C.fsw_c2=0;
  /* 10ed93f4 wait  */
  /* wait (no observable integer/reg state) */
  /* 10ed93f5 fnstsw ax */
  AX = fpu_status();
  /* 10ed93f7 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 10ed93f8 jp 0x10ed9417 */
  if (C.pf) goto L_10ed9417;
L_10ed93fa:;
  /* 10ed93fa cmp dword ptr [0x10f0f4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed9401 jne 0x10edabee */
  if (!C.zf) { jmp_ind(0x10edabeeu); return; }
  /* 10ed9407 mov edx, 0x1e */
  EDX = (0x1eu);
  /* 10ed940c lea ecx, [0x10f0cd70] */
  ECX = ((uint32_t)(0x10f0cd70));
  /* 10ed9412 jmp 0x10edabfb */
  f_10edabfb(); return;
L_10ed9417:;
  /* 10ed9417 fld xword ptr [0x10f094ea] */
  fpu_push(rf80((uint32_t)(0x10f094ea)));
  /* 10ed941d fxch st(1) */
  { double _t=FPU_ST(0); FPU_ST(0)=FPU_ST(1); FPU_ST(1)=_t; }
L_10ed941f:;
  /* 10ed941f fprem1  */
  FPU_ST(0) = __builtin_remainder(FPU_ST(0), FPU_ST(1)); C.fsw_c2=0;
  /* 10ed9421 wait  */
  /* wait (no observable integer/reg state) */
  /* 10ed9422 fnstsw ax */
  AX = fpu_status();
  /* 10ed9424 sahf  */
  C.sf=(AH>>7)&1; C.zf=(AH>>6)&1; C.af=(AH>>4)&1; C.pf=(AH>>2)&1; C.cf=AH&1;
  /* 10ed9425 jp 0x10ed941f */
  if (C.pf) goto L_10ed941f;
  /* 10ed9427 fstp st(1) */
  FPU_ST(1) = FPU_ST(0);
  (void)fpu_pop();
  /* 10ed9429 fsin  */
  FPU_ST(0) = __builtin_sin(FPU_ST(0)); C.fsw_c2=0;
  /* 10ed942b jmp 0x10ed93fa */
  goto L_10ed93fa;
L_10ed942d:;
  /* 10ed942d call 0x10edab7c */
  push32(0x10ed9432u); f_10edab7c();
  /* 10ed9432 jmp 0x10ed944f */
  goto L_10ed944f;
L_10ed9434:;
  /* 10ed9434 test eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); fl_logic(_r,32); }
  /* 10ed9439 jne 0x10ed942d */
  if (!C.zf) goto L_10ed942d;
  /* 10ed943b cmp dword ptr [esp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed9440 jne 0x10ed942d */
  if (!C.zf) goto L_10ed942d;
  /* 10ed9442 fstp st(0) */
  FPU_ST(0) = FPU_ST(0);
  (void)fpu_pop();
  /* 10ed9444 fld xword ptr [0x10f0cdf0] */
  fpu_push(rf80((uint32_t)(0x10f0cdf0)));
  /* 10ed944a mov eax, 1 */
  EAX = (0x1u);
L_10ed944f:;
  /* 10ed944f cmp dword ptr [0x10f0f4ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10f0f4ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10ed9456 jne 0x10edabee */
  if (!C.zf) { jmp_ind(0x10edabeeu); return; }
  /* 10ed945c mov edx, 0x1e */
  EDX = (0x1eu);
  /* 10ed9461 lea ecx, [0x10f0cd70] */
  ECX = ((uint32_t)(0x10f0cd70));
  /* 10ed9467 call 0x10edacf7 */
  push32(0x10ed946cu); f_10edacf7();
  /* 10ed946c pop edx */
  EDX = (pop32());
  /* 10ed946d ret  */
  ESPCHK(0x10ed93ddu, _esp0);
  ESP += 4; return;
}

