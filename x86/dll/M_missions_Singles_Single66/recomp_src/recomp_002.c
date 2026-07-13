#include "recomp.h"

/* FUN_1000ab70 @ 0x11acab70 (34 bytes, 13 insns) */
void f_11acab70(void) {
  FTRACE(0x11acab70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acab70 push ebp */
  push32((uint32_t)(EBP));
  /* 11acab71 mov ebp, esp */
  EBP = (ESP);
  /* 11acab73 push ecx */
  push32((uint32_t)(ECX));
  /* 11acab74 mov eax, dword ptr [0x11af6b34] */
  EAX = (r32((uint32_t)(0x11af6b34)));
  /* 11acab79 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11acab7c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acab80 je 0x11acab8b */
  if (C.zf) goto L_11acab8b;
  /* 11acab82 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acab85 mov dword ptr [0x11af6b34], ecx */
  w32((uint32_t)(0x11af6b34), (ECX));
L_11acab8b:;
  /* 11acab8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acab8e mov esp, ebp */
  ESP = (EBP);
  /* 11acab90 pop ebp */
  EBP = (pop32());
  /* 11acab91 ret  */
  ESPCHK(0x11acab70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aba0 @ 0x11acaba0 (103 bytes, 38 insns) */
void f_11acaba0(void) {
  FTRACE(0x11acaba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acaba0 push ebp */
  push32((uint32_t)(EBP));
  /* 11acaba1 mov ebp, esp */
  EBP = (ESP);
  /* 11acaba3 push ecx */
  push32((uint32_t)(ECX));
  /* 11acaba4 mov eax, dword ptr [0x11af6b34] */
  EAX = (r32((uint32_t)(0x11af6b34)));
  /* 11acaba9 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11acabac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acabae jne 0x11acabb2 */
  if (!C.zf) goto L_11acabb2;
  /* 11acabb0 jmp 0x11acac03 */
  goto L_11acac03;
L_11acabb2:;
  /* 11acabb2 push 9 */
  push32((uint32_t)(0x9u));
  /* 11acabb4 call 0x11acd060 */
  push32(0x11acabb9u); f_11acd060();
  /* 11acabb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acabbc mov ecx, dword ptr [0x11af9314] */
  ECX = (r32((uint32_t)(0x11af9314)));
  /* 11acabc2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11acabc5 jmp 0x11acabcf */
  goto L_11acabcf;
L_11acabc7:;
  /* 11acabc7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acabca mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11acabcc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11acabcf:;
  /* 11acabcf cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acabd3 je 0x11acabf9 */
  if (C.zf) goto L_11acabf9;
  /* 11acabd5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acabd8 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11acabdb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11acabe1 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acabe4 jne 0x11acabf7 */
  if (!C.zf) goto L_11acabf7;
  /* 11acabe6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acabe9 push eax */
  push32((uint32_t)(EAX));
  /* 11acabea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acabed add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acabf0 push ecx */
  push32((uint32_t)(ECX));
  /* 11acabf1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x11acabf4u);
  /* 11acabf4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11acabf7:;
  /* 11acabf7 jmp 0x11acabc7 */
  goto L_11acabc7;
L_11acabf9:;
  /* 11acabf9 push 9 */
  push32((uint32_t)(0x9u));
  /* 11acabfb call 0x11acd100 */
  push32(0x11acac00u); f_11acd100();
  /* 11acac00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11acac03:;
  /* 11acac03 mov esp, ebp */
  ESP = (EBP);
  /* 11acac05 pop ebp */
  EBP = (pop32());
  /* 11acac06 ret  */
  ESPCHK(0x11acaba0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x11acac10 (75 bytes, 28 insns) */
void f_11acac10(void) {
  FTRACE(0x11acac10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acac10 push ebp */
  push32((uint32_t)(EBP));
  /* 11acac11 mov ebp, esp */
  EBP = (ESP);
  /* 11acac13 push ecx */
  push32((uint32_t)(ECX));
  /* 11acac14 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acac18 je 0x11acac4d */
  if (C.zf) goto L_11acac4d;
  /* 11acac1a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acac1d push eax */
  push32((uint32_t)(EAX));
  /* 11acac1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acac21 push ecx */
  push32((uint32_t)(ECX));
  /* 11acac22 call dword ptr [0x11afb3ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3ec))), 0x11acac28u);
  /* 11acac28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acac2a jne 0x11acac4d */
  if (!C.zf) goto L_11acac4d;
  /* 11acac2c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acac30 je 0x11acac44 */
  if (C.zf) goto L_11acac44;
  /* 11acac32 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acac35 push edx */
  push32((uint32_t)(EDX));
  /* 11acac36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acac39 push eax */
  push32((uint32_t)(EAX));
  /* 11acac3a call dword ptr [0x11afb3e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3e8))), 0x11acac40u);
  /* 11acac40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acac42 jne 0x11acac4d */
  if (!C.zf) goto L_11acac4d;
L_11acac44:;
  /* 11acac44 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11acac4b jmp 0x11acac54 */
  goto L_11acac54;
L_11acac4d:;
  /* 11acac4d mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11acac54:;
  /* 11acac54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acac57 mov esp, ebp */
  ESP = (EBP);
  /* 11acac59 pop ebp */
  EBP = (pop32());
  /* 11acac5a ret  */
  ESPCHK(0x11acac10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac60 @ 0x11acac60 (134 bytes, 50 insns) */
void f_11acac60(void) {
  FTRACE(0x11acac60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acac60 push ebp */
  push32((uint32_t)(EBP));
  /* 11acac61 mov ebp, esp */
  EBP = (ESP);
  /* 11acac63 push ecx */
  push32((uint32_t)(ECX));
  /* 11acac64 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acac68 jne 0x11acac6e */
  if (!C.zf) goto L_11acac6e;
  /* 11acac6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11acac6c jmp 0x11acace2 */
  goto L_11acace2;
L_11acac6e:;
  /* 11acac6e push 1 */
  push32((uint32_t)(0x1u));
  /* 11acac70 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11acac72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acac75 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acac78 push eax */
  push32((uint32_t)(EAX));
  /* 11acac79 call 0x11acac10 */
  push32(0x11acac7eu); f_11acac10();
  /* 11acac7e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acac81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acac83 jne 0x11acac89 */
  if (!C.zf) goto L_11acac89;
  /* 11acac85 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11acac87 jmp 0x11acace2 */
  goto L_11acace2;
L_11acac89:;
  /* 11acac89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acac8c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acac8f push ecx */
  push32((uint32_t)(ECX));
  /* 11acac90 call 0x11acf9f0 */
  push32(0x11acac95u); f_11acf9f0();
  /* 11acac95 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acac98 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11acac9b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acac9f je 0x11acacb6 */
  if (C.zf) goto L_11acacb6;
  /* 11acaca1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acaca4 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acaca7 push edx */
  push32((uint32_t)(EDX));
  /* 11acaca8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acacab push eax */
  push32((uint32_t)(EAX));
  /* 11acacac call 0x11acfa50 */
  push32(0x11acacb1u); f_11acfa50();
  /* 11acacb1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acacb4 jmp 0x11acace2 */
  goto L_11acace2;
L_11acacb6:;
  /* 11acacb6 mov ecx, dword ptr [0x11af92c8] */
  ECX = (r32((uint32_t)(0x11af92c8)));
  /* 11acacbc and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11acacc2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11acacc4 je 0x11acaccd */
  if (C.zf) goto L_11acaccd;
  /* 11acacc6 mov eax, 1 */
  EAX = (0x1u);
  /* 11acaccb jmp 0x11acace2 */
  goto L_11acace2;
L_11acaccd:;
  /* 11acaccd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acacd0 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acacd3 push edx */
  push32((uint32_t)(EDX));
  /* 11acacd4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acacd6 mov eax, dword ptr [0x11afac64] */
  EAX = (r32((uint32_t)(0x11afac64)));
  /* 11acacdb push eax */
  push32((uint32_t)(EAX));
  /* 11acacdc call dword ptr [0x11afb3f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3f0))), 0x11acace2u);
L_11acace2:;
  /* 11acace2 mov esp, ebp */
  ESP = (EBP);
  /* 11acace4 pop ebp */
  EBP = (pop32());
  /* 11acace5 ret  */
  ESPCHK(0x11acac60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000acf0 @ 0x11acacf0 (227 bytes, 80 insns) */
void f_11acacf0(void) {
  FTRACE(0x11acacf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acacf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11acacf1 mov ebp, esp */
  EBP = (ESP);
  /* 11acacf3 push ecx */
  push32((uint32_t)(ECX));
  /* 11acacf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acacf7 push eax */
  push32((uint32_t)(EAX));
  /* 11acacf8 call 0x11acac60 */
  push32(0x11acacfdu); f_11acac60();
  /* 11acacfd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acad00 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acad02 jne 0x11acad0b */
  if (!C.zf) goto L_11acad0b;
  /* 11acad04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11acad06 jmp 0x11acadcf */
  goto L_11acadcf;
L_11acad0b:;
  /* 11acad0b push 9 */
  push32((uint32_t)(0x9u));
  /* 11acad0d call 0x11acd060 */
  push32(0x11acad12u); f_11acd060();
  /* 11acad12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acad15 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acad18 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acad1b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11acad1e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acad21 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11acad24 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11acad29 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acad2c je 0x11acad50 */
  if (C.zf) goto L_11acad50;
  /* 11acad2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acad31 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acad35 je 0x11acad50 */
  if (C.zf) goto L_11acad50;
  /* 11acad37 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acad3a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11acad3d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11acad42 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acad45 je 0x11acad50 */
  if (C.zf) goto L_11acad50;
  /* 11acad47 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acad4a cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acad4e jne 0x11acadc3 */
  if (!C.zf) goto L_11acadc3;
L_11acad50:;
  /* 11acad50 push 1 */
  push32((uint32_t)(0x1u));
  /* 11acad52 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acad55 push edx */
  push32((uint32_t)(EDX));
  /* 11acad56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acad59 push eax */
  push32((uint32_t)(EAX));
  /* 11acad5a call 0x11acac10 */
  push32(0x11acad5fu); f_11acac10();
  /* 11acad5f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acad62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acad64 je 0x11acadc3 */
  if (C.zf) goto L_11acadc3;
  /* 11acad66 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acad69 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11acad6c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acad6f jne 0x11acadc3 */
  if (!C.zf) goto L_11acadc3;
  /* 11acad71 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acad74 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11acad77 cmp ecx, dword ptr [0x11af6b38] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11af6b38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acad7d jg 0x11acadc3 */
  if ((!C.zf&&C.sf==C.of)) goto L_11acadc3;
  /* 11acad7f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acad83 je 0x11acad90 */
  if (C.zf) goto L_11acad90;
  /* 11acad85 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11acad88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acad8b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11acad8e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11acad90:;
  /* 11acad90 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acad94 je 0x11acada1 */
  if (C.zf) goto L_11acada1;
  /* 11acad96 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11acad99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acad9c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11acad9f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11acada1:;
  /* 11acada1 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acada5 je 0x11acadb2 */
  if (C.zf) goto L_11acadb2;
  /* 11acada7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11acadaa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acadad mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11acadb0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11acadb2:;
  /* 11acadb2 push 9 */
  push32((uint32_t)(0x9u));
  /* 11acadb4 call 0x11acd100 */
  push32(0x11acadb9u); f_11acd100();
  /* 11acadb9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acadbc mov eax, 1 */
  EAX = (0x1u);
  /* 11acadc1 jmp 0x11acadcf */
  goto L_11acadcf;
L_11acadc3:;
  /* 11acadc3 push 9 */
  push32((uint32_t)(0x9u));
  /* 11acadc5 call 0x11acd100 */
  push32(0x11acadcau); f_11acd100();
  /* 11acadca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acadcd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11acadcf:;
  /* 11acadcf mov esp, ebp */
  ESP = (EBP);
  /* 11acadd1 pop ebp */
  EBP = (pop32());
  /* 11acadd2 ret  */
  ESPCHK(0x11acacf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ade0 @ 0x11acade0 (28 bytes, 11 insns) */
void f_11acade0(void) {
  FTRACE(0x11acade0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acade0 push ebp */
  push32((uint32_t)(EBP));
  /* 11acade1 mov ebp, esp */
  EBP = (ESP);
  /* 11acade3 push ecx */
  push32((uint32_t)(ECX));
  /* 11acade4 mov eax, dword ptr [0x11afac70] */
  EAX = (r32((uint32_t)(0x11afac70)));
  /* 11acade9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11acadec mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acadef mov dword ptr [0x11afac70], ecx */
  w32((uint32_t)(0x11afac70), (ECX));
  /* 11acadf5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acadf8 mov esp, ebp */
  ESP = (EBP);
  /* 11acadfa pop ebp */
  EBP = (pop32());
  /* 11acadfb ret  */
  ESPCHK(0x11acade0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ae00 @ 0x11acae00 (362 bytes, 116 insns) */
void f_11acae00(void) {
  FTRACE(0x11acae00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acae00 push ebp */
  push32((uint32_t)(EBP));
  /* 11acae01 mov ebp, esp */
  EBP = (ESP);
  /* 11acae03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acae06 push ebx */
  push32((uint32_t)(EBX));
  /* 11acae07 push esi */
  push32((uint32_t)(ESI));
  /* 11acae08 push edi */
  push32((uint32_t)(EDI));
  /* 11acae09 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acae0d jne 0x11acae3a */
  if (!C.zf) goto L_11acae3a;
L_11acae0f:;
  /* 11acae0f push 0x11af3c24 */
  push32((uint32_t)(0x11af3c24u));
  /* 11acae14 push 0x11af373c */
  push32((uint32_t)(0x11af373cu));
  /* 11acae19 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acae1b push 0 */
  push32((uint32_t)(0x0u));
  /* 11acae1d push 0 */
  push32((uint32_t)(0x0u));
  /* 11acae1f push 0 */
  push32((uint32_t)(0x0u));
  /* 11acae21 call 0x11ac6a40 */
  push32(0x11acae26u); f_11ac6a40();
  /* 11acae26 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acae29 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acae2c jne 0x11acae2f */
  if (!C.zf) goto L_11acae2f;
  /* 11acae2e int3  */
  x86_unimpl("int3 @ 0x11acae2e");
L_11acae2f:;
  /* 11acae2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11acae31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acae33 jne 0x11acae0f */
  if (!C.zf) goto L_11acae0f;
  /* 11acae35 jmp 0x11acaf63 */
  goto L_11acaf63;
L_11acae3a:;
  /* 11acae3a push 9 */
  push32((uint32_t)(0x9u));
  /* 11acae3c call 0x11acd060 */
  push32(0x11acae41u); f_11acd060();
  /* 11acae41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acae44 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acae47 mov edx, dword ptr [0x11af9314] */
  EDX = (r32((uint32_t)(0x11af9314)));
  /* 11acae4d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11acae4f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11acae56 jmp 0x11acae61 */
  goto L_11acae61;
L_11acae58:;
  /* 11acae58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acae5b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acae5e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11acae61:;
  /* 11acae61 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acae65 jge 0x11acae85 */
  if ((C.sf==C.of)) goto L_11acae85;
  /* 11acae67 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acae6a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acae6d mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 11acae75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acae78 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acae7b mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 11acae83 jmp 0x11acae58 */
  goto L_11acae58;
L_11acae85:;
  /* 11acae85 mov edx, dword ptr [0x11af9314] */
  EDX = (r32((uint32_t)(0x11af9314)));
  /* 11acae8b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11acae8e jmp 0x11acae98 */
  goto L_11acae98;
L_11acae90:;
  /* 11acae90 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acae93 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11acae95 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11acae98:;
  /* 11acae98 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acae9c je 0x11acaf41 */
  if (C.zf) goto L_11acaf41;
  /* 11acaea2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acaea5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11acaea8 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11acaead test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acaeaf jl 0x11acaf17 */
  if ((C.sf!=C.of)) goto L_11acaf17;
  /* 11acaeb1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acaeb4 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11acaeb7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11acaebd cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acaec0 jge 0x11acaf17 */
  if ((C.sf==C.of)) goto L_11acaf17;
  /* 11acaec2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acaec5 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11acaec8 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11acaece mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acaed1 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 11acaed5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acaed8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acaedb mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11acaede and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11acaee4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acaee7 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 11acaeeb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acaeee mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11acaef1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11acaef6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acaef9 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 11acaefd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acaf00 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acaf03 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acaf06 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11acaf09 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11acaf0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acaf11 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 11acaf15 jmp 0x11acaf3c */
  goto L_11acaf3c;
L_11acaf17:;
  /* 11acaf17 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acaf1a push edx */
  push32((uint32_t)(EDX));
  /* 11acaf1b push 0x11af3c00 */
  push32((uint32_t)(0x11af3c00u));
  /* 11acaf20 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acaf22 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acaf24 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acaf26 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acaf28 call 0x11ac6a40 */
  push32(0x11acaf2du); f_11ac6a40();
  /* 11acaf2d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acaf30 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acaf33 jne 0x11acaf36 */
  if (!C.zf) goto L_11acaf36;
  /* 11acaf35 int3  */
  x86_unimpl("int3 @ 0x11acaf35");
L_11acaf36:;
  /* 11acaf36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11acaf38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acaf3a jne 0x11acaf17 */
  if (!C.zf) goto L_11acaf17;
L_11acaf3c:;
  /* 11acaf3c jmp 0x11acae90 */
  goto L_11acae90;
L_11acaf41:;
  /* 11acaf41 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acaf44 mov edx, dword ptr [0x11af931c] */
  EDX = (r32((uint32_t)(0x11af931c)));
  /* 11acaf4a mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 11acaf4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acaf50 mov ecx, dword ptr [0x11af9310] */
  ECX = (r32((uint32_t)(0x11af9310)));
  /* 11acaf56 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 11acaf59 push 9 */
  push32((uint32_t)(0x9u));
  /* 11acaf5b call 0x11acd100 */
  push32(0x11acaf60u); f_11acd100();
  /* 11acaf60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11acaf63:;
  /* 11acaf63 pop edi */
  EDI = (pop32());
  /* 11acaf64 pop esi */
  ESI = (pop32());
  /* 11acaf65 pop ebx */
  EBX = (pop32());
  /* 11acaf66 mov esp, ebp */
  ESP = (EBP);
  /* 11acaf68 pop ebp */
  EBP = (pop32());
  /* 11acaf69 ret  */
  ESPCHK(0x11acae00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af70 @ 0x11acaf70 (291 bytes, 95 insns) */
void f_11acaf70(void) {
  FTRACE(0x11acaf70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acaf70 push ebp */
  push32((uint32_t)(EBP));
  /* 11acaf71 mov ebp, esp */
  EBP = (ESP);
  /* 11acaf73 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acaf76 push ebx */
  push32((uint32_t)(EBX));
  /* 11acaf77 push esi */
  push32((uint32_t)(ESI));
  /* 11acaf78 push edi */
  push32((uint32_t)(EDI));
  /* 11acaf79 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11acaf80 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acaf84 je 0x11acaf92 */
  if (C.zf) goto L_11acaf92;
  /* 11acaf86 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acaf8a je 0x11acaf92 */
  if (C.zf) goto L_11acaf92;
  /* 11acaf8c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acaf90 jne 0x11acafc0 */
  if (!C.zf) goto L_11acafc0;
L_11acaf92:;
  /* 11acaf92 push 0x11af3c4c */
  push32((uint32_t)(0x11af3c4cu));
  /* 11acaf97 push 0x11af373c */
  push32((uint32_t)(0x11af373cu));
  /* 11acaf9c push 0 */
  push32((uint32_t)(0x0u));
  /* 11acaf9e push 0 */
  push32((uint32_t)(0x0u));
  /* 11acafa0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acafa2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acafa4 call 0x11ac6a40 */
  push32(0x11acafa9u); f_11ac6a40();
  /* 11acafa9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acafac cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acafaf jne 0x11acafb2 */
  if (!C.zf) goto L_11acafb2;
  /* 11acafb1 int3  */
  x86_unimpl("int3 @ 0x11acafb1");
L_11acafb2:;
  /* 11acafb2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11acafb4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acafb6 jne 0x11acaf92 */
  if (!C.zf) goto L_11acaf92;
  /* 11acafb8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acafbb jmp 0x11acb08c */
  goto L_11acb08c;
L_11acafc0:;
  /* 11acafc0 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11acafc7 jmp 0x11acafd2 */
  goto L_11acafd2;
L_11acafc9:;
  /* 11acafc9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acafcc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acafcf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11acafd2:;
  /* 11acafd2 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acafd6 jge 0x11acb05c */
  if ((C.sf==C.of)) goto L_11acb05c;
  /* 11acafdc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acafdf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11acafe2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acafe5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11acafe8 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 11acafec sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acaff0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acaff3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acaff6 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 11acaffa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acaffd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11acb000 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb003 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11acb006 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 11acb00a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acb00e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb011 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acb014 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 11acb018 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb01b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acb01e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb023 jne 0x11acb032 */
  if (!C.zf) goto L_11acb032;
  /* 11acb025 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb028 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acb02b cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb030 je 0x11acb057 */
  if (C.zf) goto L_11acb057;
L_11acb032:;
  /* 11acb032 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb036 je 0x11acb057 */
  if (C.zf) goto L_11acb057;
  /* 11acb038 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb03c jne 0x11acb050 */
  if (!C.zf) goto L_11acb050;
  /* 11acb03e cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb042 jne 0x11acb057 */
  if (!C.zf) goto L_11acb057;
  /* 11acb044 mov eax, dword ptr [0x11af6b34] */
  EAX = (r32((uint32_t)(0x11af6b34)));
  /* 11acb049 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11acb04c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acb04e je 0x11acb057 */
  if (C.zf) goto L_11acb057;
L_11acb050:;
  /* 11acb050 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11acb057:;
  /* 11acb057 jmp 0x11acafc9 */
  goto L_11acafc9;
L_11acb05c:;
  /* 11acb05c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11acb05f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acb062 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11acb065 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acb068 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acb06b mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 11acb06e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11acb071 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acb074 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 11acb077 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acb07a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acb07d mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 11acb080 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acb083 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11acb089 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11acb08c:;
  /* 11acb08c pop edi */
  EDI = (pop32());
  /* 11acb08d pop esi */
  ESI = (pop32());
  /* 11acb08e pop ebx */
  EBX = (pop32());
  /* 11acb08f mov esp, ebp */
  ESP = (EBP);
  /* 11acb091 pop ebp */
  EBP = (pop32());
  /* 11acb092 ret  */
  ESPCHK(0x11acaf70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b0a0 @ 0x11acb0a0 (697 bytes, 253 insns) */
void f_11acb0a0(void) {
  FTRACE(0x11acb0a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acb0a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11acb0a1 mov ebp, esp */
  EBP = (ESP);
  /* 11acb0a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acb0a6 push ebx */
  push32((uint32_t)(EBX));
  /* 11acb0a7 push esi */
  push32((uint32_t)(ESI));
  /* 11acb0a8 push edi */
  push32((uint32_t)(EDI));
  /* 11acb0a9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11acb0b0 push 9 */
  push32((uint32_t)(0x9u));
  /* 11acb0b2 call 0x11acd060 */
  push32(0x11acb0b7u); f_11acd060();
  /* 11acb0b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11acb0ba:;
  /* 11acb0ba push 0x11af3d44 */
  push32((uint32_t)(0x11af3d44u));
  /* 11acb0bf push 0x11af373c */
  push32((uint32_t)(0x11af373cu));
  /* 11acb0c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb0c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb0c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb0ca push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb0cc call 0x11ac6a40 */
  push32(0x11acb0d1u); f_11ac6a40();
  /* 11acb0d1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb0d4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb0d7 jne 0x11acb0da */
  if (!C.zf) goto L_11acb0da;
  /* 11acb0d9 int3  */
  x86_unimpl("int3 @ 0x11acb0d9");
L_11acb0da:;
  /* 11acb0da xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11acb0dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acb0de jne 0x11acb0ba */
  if (!C.zf) goto L_11acb0ba;
  /* 11acb0e0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb0e4 je 0x11acb0ee */
  if (C.zf) goto L_11acb0ee;
  /* 11acb0e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acb0e9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11acb0eb mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11acb0ee:;
  /* 11acb0ee mov eax, dword ptr [0x11af9314] */
  EAX = (r32((uint32_t)(0x11af9314)));
  /* 11acb0f3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11acb0f6 jmp 0x11acb100 */
  goto L_11acb100;
L_11acb0f8:;
  /* 11acb0f8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb0fb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11acb0fd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11acb100:;
  /* 11acb100 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb104 je 0x11acb322 */
  if (C.zf) goto L_11acb322;
  /* 11acb10a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb10d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb110 je 0x11acb322 */
  if (C.zf) goto L_11acb322;
  /* 11acb116 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb119 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11acb11c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11acb122 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb125 je 0x11acb154 */
  if (C.zf) goto L_11acb154;
  /* 11acb127 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb12a mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11acb12d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11acb133 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11acb135 je 0x11acb154 */
  if (C.zf) goto L_11acb154;
  /* 11acb137 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb13a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11acb13d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11acb142 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb145 jne 0x11acb159 */
  if (!C.zf) goto L_11acb159;
  /* 11acb147 mov ecx, dword ptr [0x11af6b34] */
  ECX = (r32((uint32_t)(0x11af6b34)));
  /* 11acb14d and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11acb150 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11acb152 jne 0x11acb159 */
  if (!C.zf) goto L_11acb159;
L_11acb154:;
  /* 11acb154 jmp 0x11acb31d */
  goto L_11acb31d;
L_11acb159:;
  /* 11acb159 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb15c cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb160 je 0x11acb1d2 */
  if (C.zf) goto L_11acb1d2;
  /* 11acb162 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb164 push 1 */
  push32((uint32_t)(0x1u));
  /* 11acb166 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb169 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11acb16c push ecx */
  push32((uint32_t)(ECX));
  /* 11acb16d call 0x11acac10 */
  push32(0x11acb172u); f_11acac10();
  /* 11acb172 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb175 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acb177 jne 0x11acb1a3 */
  if (!C.zf) goto L_11acb1a3;
L_11acb179:;
  /* 11acb179 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb17c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11acb17f push eax */
  push32((uint32_t)(EAX));
  /* 11acb180 push 0x11af3d30 */
  push32((uint32_t)(0x11af3d30u));
  /* 11acb185 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb187 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb189 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb18b push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb18d call 0x11ac6a40 */
  push32(0x11acb192u); f_11ac6a40();
  /* 11acb192 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb195 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb198 jne 0x11acb19b */
  if (!C.zf) goto L_11acb19b;
  /* 11acb19a int3  */
  x86_unimpl("int3 @ 0x11acb19a");
L_11acb19b:;
  /* 11acb19b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11acb19d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11acb19f jne 0x11acb179 */
  if (!C.zf) goto L_11acb179;
  /* 11acb1a1 jmp 0x11acb1d2 */
  goto L_11acb1d2;
L_11acb1a3:;
  /* 11acb1a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb1a6 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11acb1a9 push eax */
  push32((uint32_t)(EAX));
  /* 11acb1aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb1ad mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11acb1b0 push edx */
  push32((uint32_t)(EDX));
  /* 11acb1b1 push 0x11af3d24 */
  push32((uint32_t)(0x11af3d24u));
  /* 11acb1b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb1b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb1ba push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb1bc push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb1be call 0x11ac6a40 */
  push32(0x11acb1c3u); f_11ac6a40();
  /* 11acb1c3 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb1c6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb1c9 jne 0x11acb1cc */
  if (!C.zf) goto L_11acb1cc;
  /* 11acb1cb int3  */
  x86_unimpl("int3 @ 0x11acb1cb");
L_11acb1cc:;
  /* 11acb1cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11acb1ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acb1d0 jne 0x11acb1a3 */
  if (!C.zf) goto L_11acb1a3;
L_11acb1d2:;
  /* 11acb1d2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb1d5 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11acb1d8 push edx */
  push32((uint32_t)(EDX));
  /* 11acb1d9 push 0x11af3d1c */
  push32((uint32_t)(0x11af3d1cu));
  /* 11acb1de push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb1e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb1e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb1e4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb1e6 call 0x11ac6a40 */
  push32(0x11acb1ebu); f_11ac6a40();
  /* 11acb1eb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb1ee cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb1f1 jne 0x11acb1f4 */
  if (!C.zf) goto L_11acb1f4;
  /* 11acb1f3 int3  */
  x86_unimpl("int3 @ 0x11acb1f3");
L_11acb1f4:;
  /* 11acb1f4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11acb1f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acb1f8 jne 0x11acb1d2 */
  if (!C.zf) goto L_11acb1d2;
  /* 11acb1fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb1fd mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11acb200 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11acb206 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb209 jne 0x11acb27c */
  if (!C.zf) goto L_11acb27c;
L_11acb20b:;
  /* 11acb20b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb20e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11acb211 push ecx */
  push32((uint32_t)(ECX));
  /* 11acb212 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb215 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11acb218 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11acb21b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11acb220 push eax */
  push32((uint32_t)(EAX));
  /* 11acb221 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb224 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb227 push ecx */
  push32((uint32_t)(ECX));
  /* 11acb228 push 0x11af3ce8 */
  push32((uint32_t)(0x11af3ce8u));
  /* 11acb22d push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb22f push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb231 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb233 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb235 call 0x11ac6a40 */
  push32(0x11acb23au); f_11ac6a40();
  /* 11acb23a add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb23d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb240 jne 0x11acb243 */
  if (!C.zf) goto L_11acb243;
  /* 11acb242 int3  */
  x86_unimpl("int3 @ 0x11acb242");
L_11acb243:;
  /* 11acb243 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11acb245 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11acb247 jne 0x11acb20b */
  if (!C.zf) goto L_11acb20b;
  /* 11acb249 cmp dword ptr [0x11afac70], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11afac70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb250 je 0x11acb26b */
  if (C.zf) goto L_11acb26b;
  /* 11acb252 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb255 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11acb258 push ecx */
  push32((uint32_t)(ECX));
  /* 11acb259 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb25c add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb25f push edx */
  push32((uint32_t)(EDX));
  /* 11acb260 call dword ptr [0x11afac70] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afac70))), 0x11acb266u);
  /* 11acb266 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb269 jmp 0x11acb277 */
  goto L_11acb277;
L_11acb26b:;
  /* 11acb26b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb26e push eax */
  push32((uint32_t)(EAX));
  /* 11acb26f call 0x11acb360 */
  push32(0x11acb274u); f_11acb360();
  /* 11acb274 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11acb277:;
  /* 11acb277 jmp 0x11acb31d */
  goto L_11acb31d;
L_11acb27c:;
  /* 11acb27c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb27f cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb283 jne 0x11acb2c2 */
  if (!C.zf) goto L_11acb2c2;
L_11acb285:;
  /* 11acb285 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb288 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11acb28b push eax */
  push32((uint32_t)(EAX));
  /* 11acb28c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb28f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb292 push ecx */
  push32((uint32_t)(ECX));
  /* 11acb293 push 0x11af3cc0 */
  push32((uint32_t)(0x11af3cc0u));
  /* 11acb298 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb29a push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb29c push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb29e push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb2a0 call 0x11ac6a40 */
  push32(0x11acb2a5u); f_11ac6a40();
  /* 11acb2a5 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb2a8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb2ab jne 0x11acb2ae */
  if (!C.zf) goto L_11acb2ae;
  /* 11acb2ad int3  */
  x86_unimpl("int3 @ 0x11acb2ad");
L_11acb2ae:;
  /* 11acb2ae xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11acb2b0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11acb2b2 jne 0x11acb285 */
  if (!C.zf) goto L_11acb285;
  /* 11acb2b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb2b7 push eax */
  push32((uint32_t)(EAX));
  /* 11acb2b8 call 0x11acb360 */
  push32(0x11acb2bdu); f_11acb360();
  /* 11acb2bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb2c0 jmp 0x11acb31d */
  goto L_11acb31d;
L_11acb2c2:;
  /* 11acb2c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb2c5 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11acb2c8 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11acb2ce cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb2d1 jne 0x11acb31d */
  if (!C.zf) goto L_11acb31d;
L_11acb2d3:;
  /* 11acb2d3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb2d6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11acb2d9 push ecx */
  push32((uint32_t)(ECX));
  /* 11acb2da mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb2dd mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11acb2e0 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11acb2e3 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11acb2e8 push eax */
  push32((uint32_t)(EAX));
  /* 11acb2e9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb2ec add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb2ef push ecx */
  push32((uint32_t)(ECX));
  /* 11acb2f0 push 0x11af3c8c */
  push32((uint32_t)(0x11af3c8cu));
  /* 11acb2f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb2f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb2f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb2fb push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb2fd call 0x11ac6a40 */
  push32(0x11acb302u); f_11ac6a40();
  /* 11acb302 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb305 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb308 jne 0x11acb30b */
  if (!C.zf) goto L_11acb30b;
  /* 11acb30a int3  */
  x86_unimpl("int3 @ 0x11acb30a");
L_11acb30b:;
  /* 11acb30b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11acb30d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11acb30f jne 0x11acb2d3 */
  if (!C.zf) goto L_11acb2d3;
  /* 11acb311 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb314 push eax */
  push32((uint32_t)(EAX));
  /* 11acb315 call 0x11acb360 */
  push32(0x11acb31au); f_11acb360();
  /* 11acb31a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11acb31d:;
  /* 11acb31d jmp 0x11acb0f8 */
  goto L_11acb0f8;
L_11acb322:;
  /* 11acb322 push 9 */
  push32((uint32_t)(0x9u));
  /* 11acb324 call 0x11acd100 */
  push32(0x11acb329u); f_11acd100();
  /* 11acb329 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11acb32c:;
  /* 11acb32c push 0x11af3c74 */
  push32((uint32_t)(0x11af3c74u));
  /* 11acb331 push 0x11af373c */
  push32((uint32_t)(0x11af373cu));
  /* 11acb336 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb338 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb33a push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb33c push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb33e call 0x11ac6a40 */
  push32(0x11acb343u); f_11ac6a40();
  /* 11acb343 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb346 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb349 jne 0x11acb34c */
  if (!C.zf) goto L_11acb34c;
  /* 11acb34b int3  */
  x86_unimpl("int3 @ 0x11acb34b");
L_11acb34c:;
  /* 11acb34c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11acb34e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11acb350 jne 0x11acb32c */
  if (!C.zf) goto L_11acb32c;
  /* 11acb352 pop edi */
  EDI = (pop32());
  /* 11acb353 pop esi */
  ESI = (pop32());
  /* 11acb354 pop ebx */
  EBX = (pop32());
  /* 11acb355 mov esp, ebp */
  ESP = (EBP);
  /* 11acb357 pop ebp */
  EBP = (pop32());
  /* 11acb358 ret  */
  ESPCHK(0x11acb0a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b360 @ 0x11acb360 (276 bytes, 89 insns) */
void f_11acb360(void) {
  FTRACE(0x11acb360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acb360 push ebp */
  push32((uint32_t)(EBP));
  /* 11acb361 mov ebp, esp */
  EBP = (ESP);
  /* 11acb363 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acb366 push ebx */
  push32((uint32_t)(EBX));
  /* 11acb367 push esi */
  push32((uint32_t)(ESI));
  /* 11acb368 push edi */
  push32((uint32_t)(EDI));
  /* 11acb369 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 11acb370 jmp 0x11acb37b */
  goto L_11acb37b;
L_11acb372:;
  /* 11acb372 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11acb375 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb378 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_11acb37b:;
  /* 11acb37b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acb37e cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb382 jge 0x11acb38f */
  if ((C.sf==C.of)) goto L_11acb38f;
  /* 11acb384 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acb387 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11acb38a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 11acb38d jmp 0x11acb396 */
  goto L_11acb396;
L_11acb38f:;
  /* 11acb38f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_11acb396:;
  /* 11acb396 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11acb399 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb39c jge 0x11acb43c */
  if ((C.sf==C.of)) goto L_11acb43c;
  /* 11acb3a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acb3a5 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb3a8 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 11acb3ab mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 11acb3ae cmp dword ptr [0x11af71d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11af71d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb3b5 jle 0x11acb3d3 */
  if ((C.zf||C.sf!=C.of)) goto L_11acb3d3;
  /* 11acb3b7 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 11acb3bc mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11acb3bf and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11acb3c5 push ecx */
  push32((uint32_t)(ECX));
  /* 11acb3c6 call 0x11ace1b0 */
  push32(0x11acb3cbu); f_11ace1b0();
  /* 11acb3cb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb3ce mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 11acb3d1 jmp 0x11acb3f0 */
  goto L_11acb3f0;
L_11acb3d3:;
  /* 11acb3d3 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11acb3d6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11acb3dc mov eax, dword ptr [0x11af6fb8] */
  EAX = (r32((uint32_t)(0x11af6fb8)));
  /* 11acb3e1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11acb3e3 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11acb3e7 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 11acb3ed mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_11acb3f0:;
  /* 11acb3f0 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb3f4 je 0x11acb404 */
  if (C.zf) goto L_11acb404;
  /* 11acb3f6 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11acb3f9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11acb3ff mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 11acb402 jmp 0x11acb40b */
  goto L_11acb40b;
L_11acb404:;
  /* 11acb404 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_11acb40b:;
  /* 11acb40b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11acb40e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 11acb411 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 11acb415 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11acb418 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11acb41e push edx */
  push32((uint32_t)(EDX));
  /* 11acb41f push 0x11af3d68 */
  push32((uint32_t)(0x11af3d68u));
  /* 11acb424 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11acb427 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11acb42a lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 11acb42e push ecx */
  push32((uint32_t)(ECX));
  /* 11acb42f call 0x11ac62d0 */
  push32(0x11acb434u); f_11ac62d0();
  /* 11acb434 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb437 jmp 0x11acb372 */
  goto L_11acb372;
L_11acb43c:;
  /* 11acb43c mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11acb43f mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_11acb444:;
  /* 11acb444 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 11acb447 push eax */
  push32((uint32_t)(EAX));
  /* 11acb448 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 11acb44b push ecx */
  push32((uint32_t)(ECX));
  /* 11acb44c push 0x11af3d58 */
  push32((uint32_t)(0x11af3d58u));
  /* 11acb451 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb453 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb455 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb457 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb459 call 0x11ac6a40 */
  push32(0x11acb45eu); f_11ac6a40();
  /* 11acb45e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb461 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb464 jne 0x11acb467 */
  if (!C.zf) goto L_11acb467;
  /* 11acb466 int3  */
  x86_unimpl("int3 @ 0x11acb466");
L_11acb467:;
  /* 11acb467 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11acb469 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11acb46b jne 0x11acb444 */
  if (!C.zf) goto L_11acb444;
  /* 11acb46d pop edi */
  EDI = (pop32());
  /* 11acb46e pop esi */
  ESI = (pop32());
  /* 11acb46f pop ebx */
  EBX = (pop32());
  /* 11acb470 mov esp, ebp */
  ESP = (EBP);
  /* 11acb472 pop ebp */
  EBP = (pop32());
  /* 11acb473 ret  */
  ESPCHK(0x11acb360u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b480 @ 0x11acb480 (116 bytes, 46 insns) */
void f_11acb480(void) {
  FTRACE(0x11acb480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acb480 push ebp */
  push32((uint32_t)(EBP));
  /* 11acb481 mov ebp, esp */
  EBP = (ESP);
  /* 11acb483 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acb486 push ebx */
  push32((uint32_t)(EBX));
  /* 11acb487 push esi */
  push32((uint32_t)(ESI));
  /* 11acb488 push edi */
  push32((uint32_t)(EDI));
  /* 11acb489 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 11acb48c push eax */
  push32((uint32_t)(EAX));
  /* 11acb48d call 0x11acae00 */
  push32(0x11acb492u); f_11acae00();
  /* 11acb492 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb495 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb499 jne 0x11acb4b4 */
  if (!C.zf) goto L_11acb4b4;
  /* 11acb49b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb49f jne 0x11acb4b4 */
  if (!C.zf) goto L_11acb4b4;
  /* 11acb4a1 mov ecx, dword ptr [0x11af6b34] */
  ECX = (r32((uint32_t)(0x11af6b34)));
  /* 11acb4a7 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11acb4aa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11acb4ac je 0x11acb4eb */
  if (C.zf) goto L_11acb4eb;
  /* 11acb4ae cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb4b2 je 0x11acb4eb */
  if (C.zf) goto L_11acb4eb;
L_11acb4b4:;
  /* 11acb4b4 push 0x11af3d70 */
  push32((uint32_t)(0x11af3d70u));
  /* 11acb4b9 push 0x11af373c */
  push32((uint32_t)(0x11af373cu));
  /* 11acb4be push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb4c0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb4c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb4c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb4c6 call 0x11ac6a40 */
  push32(0x11acb4cbu); f_11ac6a40();
  /* 11acb4cb add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb4ce cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb4d1 jne 0x11acb4d4 */
  if (!C.zf) goto L_11acb4d4;
  /* 11acb4d3 int3  */
  x86_unimpl("int3 @ 0x11acb4d3");
L_11acb4d4:;
  /* 11acb4d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11acb4d6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11acb4d8 jne 0x11acb4b4 */
  if (!C.zf) goto L_11acb4b4;
  /* 11acb4da push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb4dc call 0x11acb0a0 */
  push32(0x11acb4e1u); f_11acb0a0();
  /* 11acb4e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb4e4 mov eax, 1 */
  EAX = (0x1u);
  /* 11acb4e9 jmp 0x11acb4ed */
  goto L_11acb4ed;
L_11acb4eb:;
  /* 11acb4eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11acb4ed:;
  /* 11acb4ed pop edi */
  EDI = (pop32());
  /* 11acb4ee pop esi */
  ESI = (pop32());
  /* 11acb4ef pop ebx */
  EBX = (pop32());
  /* 11acb4f0 mov esp, ebp */
  ESP = (EBP);
  /* 11acb4f2 pop ebp */
  EBP = (pop32());
  /* 11acb4f3 ret  */
  ESPCHK(0x11acb480u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b500 @ 0x11acb500 (197 bytes, 79 insns) */
void f_11acb500(void) {
  FTRACE(0x11acb500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acb500 push ebp */
  push32((uint32_t)(EBP));
  /* 11acb501 mov ebp, esp */
  EBP = (ESP);
  /* 11acb503 push ecx */
  push32((uint32_t)(ECX));
  /* 11acb504 push ebx */
  push32((uint32_t)(EBX));
  /* 11acb505 push esi */
  push32((uint32_t)(ESI));
  /* 11acb506 push edi */
  push32((uint32_t)(EDI));
  /* 11acb507 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb50b jne 0x11acb512 */
  if (!C.zf) goto L_11acb512;
  /* 11acb50d jmp 0x11acb5be */
  goto L_11acb5be;
L_11acb512:;
  /* 11acb512 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11acb519 jmp 0x11acb524 */
  goto L_11acb524;
L_11acb51b:;
  /* 11acb51b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb51e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb521 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11acb524:;
  /* 11acb524 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb528 jge 0x11acb56e */
  if ((C.sf==C.of)) goto L_11acb56e;
L_11acb52a:;
  /* 11acb52a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb52d mov edx, dword ptr [ecx*4 + 0x11af6b44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11af6b44)));
  /* 11acb534 push edx */
  push32((uint32_t)(EDX));
  /* 11acb535 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb538 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acb53b mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 11acb53f push edx */
  push32((uint32_t)(EDX));
  /* 11acb540 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb543 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acb546 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 11acb54a push edx */
  push32((uint32_t)(EDX));
  /* 11acb54b push 0x11af3dcc */
  push32((uint32_t)(0x11af3dccu));
  /* 11acb550 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb552 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb554 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb556 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb558 call 0x11ac6a40 */
  push32(0x11acb55du); f_11ac6a40();
  /* 11acb55d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb560 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb563 jne 0x11acb566 */
  if (!C.zf) goto L_11acb566;
  /* 11acb565 int3  */
  x86_unimpl("int3 @ 0x11acb565");
L_11acb566:;
  /* 11acb566 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11acb568 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acb56a jne 0x11acb52a */
  if (!C.zf) goto L_11acb52a;
  /* 11acb56c jmp 0x11acb51b */
  goto L_11acb51b;
L_11acb56e:;
  /* 11acb56e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acb571 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11acb574 push edx */
  push32((uint32_t)(EDX));
  /* 11acb575 push 0x11af3da8 */
  push32((uint32_t)(0x11af3da8u));
  /* 11acb57a push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb57c push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb57e push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb580 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb582 call 0x11ac6a40 */
  push32(0x11acb587u); f_11ac6a40();
  /* 11acb587 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb58a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb58d jne 0x11acb590 */
  if (!C.zf) goto L_11acb590;
  /* 11acb58f int3  */
  x86_unimpl("int3 @ 0x11acb58f");
L_11acb590:;
  /* 11acb590 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11acb592 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acb594 jne 0x11acb56e */
  if (!C.zf) goto L_11acb56e;
L_11acb596:;
  /* 11acb596 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acb599 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 11acb59c push edx */
  push32((uint32_t)(EDX));
  /* 11acb59d push 0x11af3d88 */
  push32((uint32_t)(0x11af3d88u));
  /* 11acb5a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb5a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb5a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb5a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb5aa call 0x11ac6a40 */
  push32(0x11acb5afu); f_11ac6a40();
  /* 11acb5af add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb5b2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb5b5 jne 0x11acb5b8 */
  if (!C.zf) goto L_11acb5b8;
  /* 11acb5b7 int3  */
  x86_unimpl("int3 @ 0x11acb5b7");
L_11acb5b8:;
  /* 11acb5b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11acb5ba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acb5bc jne 0x11acb596 */
  if (!C.zf) goto L_11acb596;
L_11acb5be:;
  /* 11acb5be pop edi */
  EDI = (pop32());
  /* 11acb5bf pop esi */
  ESI = (pop32());
  /* 11acb5c0 pop ebx */
  EBX = (pop32());
  /* 11acb5c1 mov esp, ebp */
  ESP = (EBP);
  /* 11acb5c3 pop ebp */
  EBP = (pop32());
  /* 11acb5c4 ret  */
  ESPCHK(0x11acb500u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b5d0 @ 0x11acb5d0 (329 bytes, 102 insns) */
void f_11acb5d0(void) {
  FTRACE(0x11acb5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acb5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11acb5d1 mov ebp, esp */
  EBP = (ESP);
  /* 11acb5d3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acb5d6 cmp dword ptr [0x11afadd0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11afadd0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb5dd jne 0x11acb5e4 */
  if (!C.zf) goto L_11acb5e4;
  /* 11acb5df call 0x11ad1de0 */
  push32(0x11acb5e4u); f_11ad1de0();
L_11acb5e4:;
  /* 11acb5e4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11acb5eb mov eax, dword ptr [0x11af92b0] */
  EAX = (r32((uint32_t)(0x11af92b0)));
  /* 11acb5f0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11acb5f3:;
  /* 11acb5f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb5f6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11acb5f9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11acb5fb je 0x11acb629 */
  if (C.zf) goto L_11acb629;
  /* 11acb5fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb600 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11acb603 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb606 je 0x11acb611 */
  if (C.zf) goto L_11acb611;
  /* 11acb608 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acb60b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb60e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11acb611:;
  /* 11acb611 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb614 push eax */
  push32((uint32_t)(EAX));
  /* 11acb615 call 0x11acc490 */
  push32(0x11acb61au); f_11acc490();
  /* 11acb61a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb61d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb620 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11acb624 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11acb627 jmp 0x11acb5f3 */
  goto L_11acb5f3;
L_11acb629:;
  /* 11acb629 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 11acb62b push 0x11af3dec */
  push32((uint32_t)(0x11af3decu));
  /* 11acb630 push 2 */
  push32((uint32_t)(0x2u));
  /* 11acb632 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acb635 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 11acb63c push ecx */
  push32((uint32_t)(ECX));
  /* 11acb63d call 0x11ac9660 */
  push32(0x11acb642u); f_11ac9660();
  /* 11acb642 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb645 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11acb648 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11acb64b mov dword ptr [0x11af92e4], edx */
  w32((uint32_t)(0x11af92e4), (EDX));
  /* 11acb651 cmp dword ptr [0x11af92e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af92e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb658 jne 0x11acb664 */
  if (!C.zf) goto L_11acb664;
  /* 11acb65a push 9 */
  push32((uint32_t)(0x9u));
  /* 11acb65c call 0x11ac68f0 */
  push32(0x11acb661u); f_11ac68f0();
  /* 11acb661 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11acb664:;
  /* 11acb664 mov eax, dword ptr [0x11af92b0] */
  EAX = (r32((uint32_t)(0x11af92b0)));
  /* 11acb669 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11acb66c jmp 0x11acb677 */
  goto L_11acb677;
L_11acb66e:;
  /* 11acb66e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb671 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb674 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11acb677:;
  /* 11acb677 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb67a movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11acb67d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acb67f je 0x11acb6e7 */
  if (C.zf) goto L_11acb6e7;
  /* 11acb681 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb684 push ecx */
  push32((uint32_t)(ECX));
  /* 11acb685 call 0x11acc490 */
  push32(0x11acb68au); f_11acc490();
  /* 11acb68a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb68d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb690 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11acb693 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb696 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11acb699 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb69c je 0x11acb6e5 */
  if (C.zf) goto L_11acb6e5;
  /* 11acb69e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 11acb6a0 push 0x11af3dec */
  push32((uint32_t)(0x11af3decu));
  /* 11acb6a5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11acb6a7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11acb6aa push ecx */
  push32((uint32_t)(ECX));
  /* 11acb6ab call 0x11ac9660 */
  push32(0x11acb6b0u); f_11ac9660();
  /* 11acb6b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb6b3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11acb6b6 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11acb6b8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11acb6bb cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb6be jne 0x11acb6ca */
  if (!C.zf) goto L_11acb6ca;
  /* 11acb6c0 push 9 */
  push32((uint32_t)(0x9u));
  /* 11acb6c2 call 0x11ac68f0 */
  push32(0x11acb6c7u); f_11ac68f0();
  /* 11acb6c7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11acb6ca:;
  /* 11acb6ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb6cd push ecx */
  push32((uint32_t)(ECX));
  /* 11acb6ce mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11acb6d1 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11acb6d3 push eax */
  push32((uint32_t)(EAX));
  /* 11acb6d4 call 0x11acc610 */
  push32(0x11acb6d9u); f_11acc610();
  /* 11acb6d9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb6dc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11acb6df add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb6e2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11acb6e5:;
  /* 11acb6e5 jmp 0x11acb66e */
  goto L_11acb66e;
L_11acb6e7:;
  /* 11acb6e7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11acb6e9 mov edx, dword ptr [0x11af92b0] */
  EDX = (r32((uint32_t)(0x11af92b0)));
  /* 11acb6ef push edx */
  push32((uint32_t)(EDX));
  /* 11acb6f0 call 0x11aca0f0 */
  push32(0x11acb6f5u); f_11aca0f0();
  /* 11acb6f5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb6f8 mov dword ptr [0x11af92b0], 0 */
  w32((uint32_t)(0x11af92b0), (0x0u));
  /* 11acb702 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11acb705 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11acb70b mov dword ptr [0x11afadc0], 1 */
  w32((uint32_t)(0x11afadc0), (0x1u));
  /* 11acb715 mov esp, ebp */
  ESP = (EBP);
  /* 11acb717 pop ebp */
  EBP = (pop32());
  /* 11acb718 ret  */
  ESPCHK(0x11acb5d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b720 @ 0x11acb720 (216 bytes, 69 insns) */
void f_11acb720(void) {
  FTRACE(0x11acb720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acb720 push ebp */
  push32((uint32_t)(EBP));
  /* 11acb721 mov ebp, esp */
  EBP = (ESP);
  /* 11acb723 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acb726 cmp dword ptr [0x11afadd0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11afadd0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb72d jne 0x11acb734 */
  if (!C.zf) goto L_11acb734;
  /* 11acb72f call 0x11ad1de0 */
  push32(0x11acb734u); f_11ad1de0();
L_11acb734:;
  /* 11acb734 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11acb739 push 0x11af9320 */
  push32((uint32_t)(0x11af9320u));
  /* 11acb73e push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb740 call dword ptr [0x11afb3a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3a8))), 0x11acb746u);
  /* 11acb746 mov dword ptr [0x11af92f4], 0x11af9320 */
  w32((uint32_t)(0x11af92f4), (0x11af9320u));
  /* 11acb750 mov eax, dword ptr [0x11afade8] */
  EAX = (r32((uint32_t)(0x11afade8)));
  /* 11acb755 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11acb758 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11acb75a jne 0x11acb767 */
  if (!C.zf) goto L_11acb767;
  /* 11acb75c mov edx, dword ptr [0x11af92f4] */
  EDX = (r32((uint32_t)(0x11af92f4)));
  /* 11acb762 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11acb765 jmp 0x11acb76f */
  goto L_11acb76f;
L_11acb767:;
  /* 11acb767 mov eax, dword ptr [0x11afade8] */
  EAX = (r32((uint32_t)(0x11afade8)));
  /* 11acb76c mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11acb76f:;
  /* 11acb76f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11acb772 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11acb775 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 11acb778 push edx */
  push32((uint32_t)(EDX));
  /* 11acb779 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11acb77c push eax */
  push32((uint32_t)(EAX));
  /* 11acb77d push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb77f push 0 */
  push32((uint32_t)(0x0u));
  /* 11acb781 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11acb784 push ecx */
  push32((uint32_t)(ECX));
  /* 11acb785 call 0x11acb800 */
  push32(0x11acb78au); f_11acb800();
  /* 11acb78a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb78d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11acb792 push 0x11af3df8 */
  push32((uint32_t)(0x11af3df8u));
  /* 11acb797 push 2 */
  push32((uint32_t)(0x2u));
  /* 11acb799 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11acb79c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb79f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 11acb7a2 push ecx */
  push32((uint32_t)(ECX));
  /* 11acb7a3 call 0x11ac9660 */
  push32(0x11acb7a8u); f_11ac9660();
  /* 11acb7a8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb7ab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11acb7ae cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb7b2 jne 0x11acb7be */
  if (!C.zf) goto L_11acb7be;
  /* 11acb7b4 push 8 */
  push32((uint32_t)(0x8u));
  /* 11acb7b6 call 0x11ac68f0 */
  push32(0x11acb7bbu); f_11ac68f0();
  /* 11acb7bb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11acb7be:;
  /* 11acb7be lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 11acb7c1 push edx */
  push32((uint32_t)(EDX));
  /* 11acb7c2 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11acb7c5 push eax */
  push32((uint32_t)(EAX));
  /* 11acb7c6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11acb7c9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acb7cc lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 11acb7cf push eax */
  push32((uint32_t)(EAX));
  /* 11acb7d0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acb7d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11acb7d4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11acb7d7 push edx */
  push32((uint32_t)(EDX));
  /* 11acb7d8 call 0x11acb800 */
  push32(0x11acb7ddu); f_11acb800();
  /* 11acb7dd add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb7e0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11acb7e3 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acb7e6 mov dword ptr [0x11af92d8], eax */
  w32((uint32_t)(0x11af92d8), (EAX));
  /* 11acb7eb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acb7ee mov dword ptr [0x11af92dc], ecx */
  w32((uint32_t)(0x11af92dc), (ECX));
  /* 11acb7f4 mov esp, ebp */
  ESP = (EBP);
  /* 11acb7f6 pop ebp */
  EBP = (pop32());
  /* 11acb7f7 ret  */
  ESPCHK(0x11acb720u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b800 @ 0x11acb800 (1060 bytes, 360 insns) */
void f_11acb800(void) {
  FTRACE(0x11acb800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acb800 push ebp */
  push32((uint32_t)(EBP));
  /* 11acb801 mov ebp, esp */
  EBP = (ESP);
  /* 11acb803 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acb806 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11acb809 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11acb80f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11acb812 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 11acb818 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acb81b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11acb81e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb822 je 0x11acb835 */
  if (C.zf) goto L_11acb835;
  /* 11acb824 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acb827 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11acb82a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11acb82c mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acb82f add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb832 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_11acb835:;
  /* 11acb835 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb838 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11acb83b cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb83e jne 0x11acb90d */
  if (!C.zf) goto L_11acb90d;
L_11acb844:;
  /* 11acb844 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb847 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb84a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11acb84d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb850 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11acb853 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb856 je 0x11acb8d2 */
  if (C.zf) goto L_11acb8d2;
  /* 11acb858 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb85b movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11acb85e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acb860 je 0x11acb8d2 */
  if (C.zf) goto L_11acb8d2;
  /* 11acb862 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb865 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11acb867 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11acb869 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11acb86b mov al, byte ptr [edx + 0x11af97e1] */
  AL = (r8((uint32_t)(EDX + 0x11af97e1)));
  /* 11acb871 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11acb874 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acb876 je 0x11acb8a7 */
  if (C.zf) goto L_11acb8a7;
  /* 11acb878 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11acb87b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11acb87d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb880 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11acb883 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11acb885 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb889 je 0x11acb8a7 */
  if (C.zf) goto L_11acb8a7;
  /* 11acb88b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11acb88e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb891 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11acb893 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11acb895 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11acb898 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb89b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11acb89e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb8a1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb8a4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11acb8a7:;
  /* 11acb8a7 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11acb8aa mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11acb8ac add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb8af mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11acb8b2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11acb8b4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb8b8 je 0x11acb8cd */
  if (C.zf) goto L_11acb8cd;
  /* 11acb8ba mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11acb8bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb8c0 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11acb8c2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11acb8c4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11acb8c7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb8ca mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11acb8cd:;
  /* 11acb8cd jmp 0x11acb844 */
  goto L_11acb844;
L_11acb8d2:;
  /* 11acb8d2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11acb8d5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11acb8d7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb8da mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11acb8dd mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11acb8df cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb8e3 je 0x11acb8f4 */
  if (C.zf) goto L_11acb8f4;
  /* 11acb8e5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11acb8e8 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11acb8eb mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11acb8ee add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb8f1 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_11acb8f4:;
  /* 11acb8f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb8f7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11acb8fa cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb8fd jne 0x11acb908 */
  if (!C.zf) goto L_11acb908;
  /* 11acb8ff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb902 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb905 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11acb908:;
  /* 11acb908 jmp 0x11acb9dc */
  goto L_11acb9dc;
L_11acb90d:;
  /* 11acb90d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11acb910 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11acb912 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb915 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11acb918 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11acb91a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb91e je 0x11acb933 */
  if (C.zf) goto L_11acb933;
  /* 11acb920 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11acb923 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb926 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11acb928 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11acb92a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11acb92d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb930 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11acb933:;
  /* 11acb933 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb936 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11acb938 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 11acb93b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb93e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb941 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11acb944 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11acb947 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11acb94d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11acb94f mov dl, byte ptr [ecx + 0x11af97e1] */
  DL = (r8((uint32_t)(ECX + 0x11af97e1)));
  /* 11acb955 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11acb958 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11acb95a je 0x11acb98b */
  if (C.zf) goto L_11acb98b;
  /* 11acb95c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11acb95f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11acb961 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb964 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11acb967 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11acb969 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb96d je 0x11acb982 */
  if (C.zf) goto L_11acb982;
  /* 11acb96f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11acb972 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb975 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11acb977 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11acb979 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11acb97c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb97f mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11acb982:;
  /* 11acb982 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb985 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acb988 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11acb98b:;
  /* 11acb98b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11acb98e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11acb994 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb997 je 0x11acb9b7 */
  if (C.zf) goto L_11acb9b7;
  /* 11acb999 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11acb99c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11acb9a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acb9a3 je 0x11acb9b7 */
  if (C.zf) goto L_11acb9b7;
  /* 11acb9a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11acb9a8 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11acb9ae cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb9b1 jne 0x11acb90d */
  if (!C.zf) goto L_11acb90d;
L_11acb9b7:;
  /* 11acb9b7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11acb9ba and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11acb9c0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11acb9c2 jne 0x11acb9cf */
  if (!C.zf) goto L_11acb9cf;
  /* 11acb9c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb9c7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acb9ca mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11acb9cd jmp 0x11acb9dc */
  goto L_11acb9dc;
L_11acb9cf:;
  /* 11acb9cf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb9d3 je 0x11acb9dc */
  if (C.zf) goto L_11acb9dc;
  /* 11acb9d5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11acb9d8 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_11acb9dc:;
  /* 11acb9dc mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11acb9e3:;
  /* 11acb9e3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb9e6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11acb9e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acb9eb je 0x11acba0e */
  if (C.zf) goto L_11acba0e;
L_11acb9ed:;
  /* 11acb9ed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb9f0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11acb9f3 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acb9f6 je 0x11acba03 */
  if (C.zf) goto L_11acba03;
  /* 11acb9f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acb9fb movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11acb9fe cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acba01 jne 0x11acba0e */
  if (!C.zf) goto L_11acba0e;
L_11acba03:;
  /* 11acba03 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acba06 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acba09 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11acba0c jmp 0x11acb9ed */
  goto L_11acb9ed;
L_11acba0e:;
  /* 11acba0e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acba11 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11acba14 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11acba16 jne 0x11acba1d */
  if (!C.zf) goto L_11acba1d;
  /* 11acba18 jmp 0x11acbbfb */
  goto L_11acbbfb;
L_11acba1d:;
  /* 11acba1d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acba21 je 0x11acba34 */
  if (C.zf) goto L_11acba34;
  /* 11acba23 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acba26 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11acba29 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11acba2b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acba2e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acba31 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11acba34:;
  /* 11acba34 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11acba37 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11acba39 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acba3c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11acba3f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11acba41:;
  /* 11acba41 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11acba48 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11acba4f:;
  /* 11acba4f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acba52 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11acba55 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acba58 jne 0x11acba6e */
  if (!C.zf) goto L_11acba6e;
  /* 11acba5a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acba5d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acba60 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11acba63 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11acba66 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acba69 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11acba6c jmp 0x11acba4f */
  goto L_11acba4f;
L_11acba6e:;
  /* 11acba6e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acba71 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11acba74 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acba77 jne 0x11acbaca */
  if (!C.zf) goto L_11acbaca;
  /* 11acba79 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11acba7c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11acba7e mov ecx, 2 */
  ECX = (0x2u);
  /* 11acba83 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11acba85 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11acba87 jne 0x11acbac2 */
  if (!C.zf) goto L_11acbac2;
  /* 11acba89 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acba8d je 0x11acbaaf */
  if (C.zf) goto L_11acbaaf;
  /* 11acba8f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acba92 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11acba96 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acba99 jne 0x11acbaa6 */
  if (!C.zf) goto L_11acbaa6;
  /* 11acba9b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acba9e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acbaa1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11acbaa4 jmp 0x11acbaad */
  goto L_11acbaad;
L_11acbaa6:;
  /* 11acbaa6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11acbaad:;
  /* 11acbaad jmp 0x11acbab6 */
  goto L_11acbab6;
L_11acbaaf:;
  /* 11acbaaf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11acbab6:;
  /* 11acbab6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11acbab8 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acbabc sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11acbabf mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11acbac2:;
  /* 11acbac2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11acbac5 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11acbac7 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11acbaca:;
  /* 11acbaca mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11acbacd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11acbad0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acbad3 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11acbad6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11acbad8 je 0x11acbafe */
  if (C.zf) goto L_11acbafe;
  /* 11acbada cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acbade je 0x11acbaef */
  if (C.zf) goto L_11acbaef;
  /* 11acbae0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11acbae3 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 11acbae6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11acbae9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acbaec mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_11acbaef:;
  /* 11acbaef mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11acbaf2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11acbaf4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acbaf7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11acbafa mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11acbafc jmp 0x11acbaca */
  goto L_11acbaca;
L_11acbafe:;
  /* 11acbafe mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acbb01 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11acbb04 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acbb06 je 0x11acbb24 */
  if (C.zf) goto L_11acbb24;
  /* 11acbb08 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acbb0c jne 0x11acbb29 */
  if (!C.zf) goto L_11acbb29;
  /* 11acbb0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acbb11 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11acbb14 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acbb17 je 0x11acbb24 */
  if (C.zf) goto L_11acbb24;
  /* 11acbb19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acbb1c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11acbb1f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acbb22 jne 0x11acbb29 */
  if (!C.zf) goto L_11acbb29;
L_11acbb24:;
  /* 11acbb24 jmp 0x11acbbd4 */
  goto L_11acbbd4;
L_11acbb29:;
  /* 11acbb29 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acbb2d je 0x11acbbc6 */
  if (C.zf) goto L_11acbbc6;
  /* 11acbb33 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acbb37 je 0x11acbb8d */
  if (C.zf) goto L_11acbb8d;
  /* 11acbb39 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acbb3c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11acbb3e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11acbb40 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11acbb42 mov cl, byte ptr [eax + 0x11af97e1] */
  CL = (r8((uint32_t)(EAX + 0x11af97e1)));
  /* 11acbb48 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11acbb4b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11acbb4d je 0x11acbb78 */
  if (C.zf) goto L_11acbb78;
  /* 11acbb4f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11acbb52 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acbb55 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11acbb57 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11acbb59 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11acbb5c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acbb5f mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 11acbb62 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acbb65 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acbb68 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11acbb6b mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11acbb6e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11acbb70 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acbb73 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11acbb76 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11acbb78:;
  /* 11acbb78 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11acbb7b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acbb7e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11acbb80 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11acbb82 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11acbb85 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acbb88 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11acbb8b jmp 0x11acbbb9 */
  goto L_11acbbb9;
L_11acbb8d:;
  /* 11acbb8d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acbb90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11acbb92 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11acbb94 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11acbb96 mov cl, byte ptr [eax + 0x11af97e1] */
  CL = (r8((uint32_t)(EAX + 0x11af97e1)));
  /* 11acbb9c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11acbb9f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11acbba1 je 0x11acbbb9 */
  if (C.zf) goto L_11acbbb9;
  /* 11acbba3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acbba6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acbba9 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11acbbac mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11acbbaf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11acbbb1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acbbb4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11acbbb7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11acbbb9:;
  /* 11acbbb9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11acbbbc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11acbbbe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acbbc1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11acbbc4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11acbbc6:;
  /* 11acbbc6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acbbc9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acbbcc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11acbbcf jmp 0x11acba41 */
  goto L_11acba41;
L_11acbbd4:;
  /* 11acbbd4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acbbd8 je 0x11acbbe9 */
  if (C.zf) goto L_11acbbe9;
  /* 11acbbda mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11acbbdd mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11acbbe0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11acbbe3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acbbe6 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_11acbbe9:;
  /* 11acbbe9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11acbbec mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11acbbee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acbbf1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11acbbf4 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11acbbf6 jmp 0x11acb9e3 */
  goto L_11acb9e3;
L_11acbbfb:;
  /* 11acbbfb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acbbff je 0x11acbc13 */
  if (C.zf) goto L_11acbc13;
  /* 11acbc01 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acbc04 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11acbc0a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acbc0d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acbc10 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11acbc13:;
  /* 11acbc13 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11acbc16 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11acbc18 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acbc1b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11acbc1e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11acbc20 mov esp, ebp */
  ESP = (EBP);
  /* 11acbc22 pop ebp */
  EBP = (pop32());
  /* 11acbc23 ret  */
  ESPCHK(0x11acb800u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc30 @ 0x11acbc30 (537 bytes, 173 insns) */
void f_11acbc30(void) {
  FTRACE(0x11acbc30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acbc30 push ebp */
  push32((uint32_t)(EBP));
  /* 11acbc31 mov ebp, esp */
  EBP = (ESP);
  /* 11acbc33 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acbc36 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11acbc3d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11acbc44 cmp dword ptr [0x11af9424], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af9424))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acbc4b jne 0x11acbc8a */
  if (!C.zf) goto L_11acbc8a;
  /* 11acbc4d call dword ptr [0x11afb36c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb36c))), 0x11acbc53u);
  /* 11acbc53 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11acbc56 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acbc5a je 0x11acbc68 */
  if (C.zf) goto L_11acbc68;
  /* 11acbc5c mov dword ptr [0x11af9424], 1 */
  w32((uint32_t)(0x11af9424), (0x1u));
  /* 11acbc66 jmp 0x11acbc8a */
  goto L_11acbc8a;
L_11acbc68:;
  /* 11acbc68 call dword ptr [0x11afb370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb370))), 0x11acbc6eu);
  /* 11acbc6e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11acbc71 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acbc75 je 0x11acbc83 */
  if (C.zf) goto L_11acbc83;
  /* 11acbc77 mov dword ptr [0x11af9424], 2 */
  w32((uint32_t)(0x11af9424), (0x2u));
  /* 11acbc81 jmp 0x11acbc8a */
  goto L_11acbc8a;
L_11acbc83:;
  /* 11acbc83 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11acbc85 jmp 0x11acbe45 */
  goto L_11acbe45;
L_11acbc8a:;
  /* 11acbc8a cmp dword ptr [0x11af9424], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11af9424))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acbc91 jne 0x11acbd8e */
  if (!C.zf) goto L_11acbd8e;
  /* 11acbc97 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acbc9b jne 0x11acbcb3 */
  if (!C.zf) goto L_11acbcb3;
  /* 11acbc9d call dword ptr [0x11afb36c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb36c))), 0x11acbca3u);
  /* 11acbca3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11acbca6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acbcaa jne 0x11acbcb3 */
  if (!C.zf) goto L_11acbcb3;
  /* 11acbcac xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11acbcae jmp 0x11acbe45 */
  goto L_11acbe45;
L_11acbcb3:;
  /* 11acbcb3 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11acbcb6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11acbcb9:;
  /* 11acbcb9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acbcbc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11acbcbe mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11acbcc1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11acbcc3 je 0x11acbce5 */
  if (C.zf) goto L_11acbce5;
  /* 11acbcc5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acbcc8 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acbccb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11acbcce mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acbcd1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11acbcd3 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11acbcd6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11acbcd8 jne 0x11acbce3 */
  if (!C.zf) goto L_11acbce3;
  /* 11acbcda mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acbcdd add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acbce0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11acbce3:;
  /* 11acbce3 jmp 0x11acbcb9 */
  goto L_11acbcb9;
L_11acbce5:;
  /* 11acbce5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acbce8 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acbceb sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11acbced add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acbcf0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11acbcf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acbcf5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acbcf7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acbcf9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acbcfb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acbcfe push edx */
  push32((uint32_t)(EDX));
  /* 11acbcff mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11acbd02 push eax */
  push32((uint32_t)(EAX));
  /* 11acbd03 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acbd05 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acbd07 call dword ptr [0x11afb3bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3bc))), 0x11acbd0du);
  /* 11acbd0d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11acbd10 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acbd14 je 0x11acbd34 */
  if (C.zf) goto L_11acbd34;
  /* 11acbd16 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11acbd18 push 0x11af3e04 */
  push32((uint32_t)(0x11af3e04u));
  /* 11acbd1d push 2 */
  push32((uint32_t)(0x2u));
  /* 11acbd1f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11acbd22 push ecx */
  push32((uint32_t)(ECX));
  /* 11acbd23 call 0x11ac9660 */
  push32(0x11acbd28u); f_11ac9660();
  /* 11acbd28 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acbd2b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11acbd2e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acbd32 jne 0x11acbd45 */
  if (!C.zf) goto L_11acbd45;
L_11acbd34:;
  /* 11acbd34 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11acbd37 push edx */
  push32((uint32_t)(EDX));
  /* 11acbd38 call dword ptr [0x11afb378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb378))), 0x11acbd3eu);
  /* 11acbd3e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11acbd40 jmp 0x11acbe45 */
  goto L_11acbe45;
L_11acbd45:;
  /* 11acbd45 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acbd47 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acbd49 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11acbd4c push eax */
  push32((uint32_t)(EAX));
  /* 11acbd4d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11acbd50 push ecx */
  push32((uint32_t)(ECX));
  /* 11acbd51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acbd54 push edx */
  push32((uint32_t)(EDX));
  /* 11acbd55 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11acbd58 push eax */
  push32((uint32_t)(EAX));
  /* 11acbd59 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acbd5b push 0 */
  push32((uint32_t)(0x0u));
  /* 11acbd5d call dword ptr [0x11afb3bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3bc))), 0x11acbd63u);
  /* 11acbd63 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acbd65 jne 0x11acbd7c */
  if (!C.zf) goto L_11acbd7c;
  /* 11acbd67 push 2 */
  push32((uint32_t)(0x2u));
  /* 11acbd69 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11acbd6c push ecx */
  push32((uint32_t)(ECX));
  /* 11acbd6d call 0x11aca0f0 */
  push32(0x11acbd72u); f_11aca0f0();
  /* 11acbd72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acbd75 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_11acbd7c:;
  /* 11acbd7c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11acbd7f push edx */
  push32((uint32_t)(EDX));
  /* 11acbd80 call dword ptr [0x11afb378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb378))), 0x11acbd86u);
  /* 11acbd86 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11acbd89 jmp 0x11acbe45 */
  goto L_11acbe45;
L_11acbd8e:;
  /* 11acbd8e cmp dword ptr [0x11af9424], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11af9424))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acbd95 jne 0x11acbe43 */
  if (!C.zf) goto L_11acbe43;
  /* 11acbd9b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acbd9f jne 0x11acbdb7 */
  if (!C.zf) goto L_11acbdb7;
  /* 11acbda1 call dword ptr [0x11afb370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb370))), 0x11acbda7u);
  /* 11acbda7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11acbdaa cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acbdae jne 0x11acbdb7 */
  if (!C.zf) goto L_11acbdb7;
  /* 11acbdb0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11acbdb2 jmp 0x11acbe45 */
  goto L_11acbe45;
L_11acbdb7:;
  /* 11acbdb7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11acbdba mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11acbdbd:;
  /* 11acbdbd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11acbdc0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11acbdc3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11acbdc5 je 0x11acbde5 */
  if (C.zf) goto L_11acbde5;
  /* 11acbdc7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11acbdca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acbdcd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11acbdd0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11acbdd3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11acbdd6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11acbdd8 jne 0x11acbde3 */
  if (!C.zf) goto L_11acbde3;
  /* 11acbdda mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11acbddd add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acbde0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11acbde3:;
  /* 11acbde3 jmp 0x11acbdbd */
  goto L_11acbdbd;
L_11acbde5:;
  /* 11acbde5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11acbde8 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acbdeb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acbdee mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11acbdf1 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 11acbdf6 push 0x11af3e04 */
  push32((uint32_t)(0x11af3e04u));
  /* 11acbdfb push 2 */
  push32((uint32_t)(0x2u));
  /* 11acbdfd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11acbe00 push edx */
  push32((uint32_t)(EDX));
  /* 11acbe01 call 0x11ac9660 */
  push32(0x11acbe06u); f_11ac9660();
  /* 11acbe06 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acbe09 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11acbe0c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acbe10 jne 0x11acbe20 */
  if (!C.zf) goto L_11acbe20;
  /* 11acbe12 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11acbe15 push eax */
  push32((uint32_t)(EAX));
  /* 11acbe16 call dword ptr [0x11afb37c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb37c))), 0x11acbe1cu);
  /* 11acbe1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11acbe1e jmp 0x11acbe45 */
  goto L_11acbe45;
L_11acbe20:;
  /* 11acbe20 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11acbe23 push ecx */
  push32((uint32_t)(ECX));
  /* 11acbe24 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11acbe27 push edx */
  push32((uint32_t)(EDX));
  /* 11acbe28 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11acbe2b push eax */
  push32((uint32_t)(EAX));
  /* 11acbe2c call 0x11ad1e10 */
  push32(0x11acbe31u); f_11ad1e10();
  /* 11acbe31 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acbe34 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11acbe37 push ecx */
  push32((uint32_t)(ECX));
  /* 11acbe38 call dword ptr [0x11afb37c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb37c))), 0x11acbe3eu);
  /* 11acbe3e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11acbe41 jmp 0x11acbe45 */
  goto L_11acbe45;
L_11acbe43:;
  /* 11acbe43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11acbe45:;
  /* 11acbe45 mov esp, ebp */
  ESP = (EBP);
  /* 11acbe47 pop ebp */
  EBP = (pop32());
  /* 11acbe48 ret  */
  ESPCHK(0x11acbc30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be50 @ 0x11acbe50 (77 bytes, 25 insns) */
void f_11acbe50(void) {
  FTRACE(0x11acbe50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acbe50 push ebp */
  push32((uint32_t)(EBP));
  /* 11acbe51 mov ebp, esp */
  EBP = (ESP);
  /* 11acbe53 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acbe55 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11acbe5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11acbe5c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acbe60 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11acbe63 push eax */
  push32((uint32_t)(EAX));
  /* 11acbe64 call dword ptr [0x11afb364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb364))), 0x11acbe6au);
  /* 11acbe6a mov dword ptr [0x11afac64], eax */
  w32((uint32_t)(0x11afac64), (EAX));
  /* 11acbe6f cmp dword ptr [0x11afac64], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11afac64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acbe76 jne 0x11acbe7c */
  if (!C.zf) goto L_11acbe7c;
  /* 11acbe78 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11acbe7a jmp 0x11acbe9b */
  goto L_11acbe9b;
L_11acbe7c:;
  /* 11acbe7c call 0x11acf990 */
  push32(0x11acbe81u); f_11acf990();
  /* 11acbe81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acbe83 jne 0x11acbe96 */
  if (!C.zf) goto L_11acbe96;
  /* 11acbe85 mov ecx, dword ptr [0x11afac64] */
  ECX = (r32((uint32_t)(0x11afac64)));
  /* 11acbe8b push ecx */
  push32((uint32_t)(ECX));
  /* 11acbe8c call dword ptr [0x11afb374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb374))), 0x11acbe92u);
  /* 11acbe92 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11acbe94 jmp 0x11acbe9b */
  goto L_11acbe9b;
L_11acbe96:;
  /* 11acbe96 mov eax, 1 */
  EAX = (0x1u);
L_11acbe9b:;
  /* 11acbe9b pop ebp */
  EBP = (pop32());
  /* 11acbe9c ret  */
  ESPCHK(0x11acbe50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bea0 @ 0x11acbea0 (156 bytes, 48 insns) */
void f_11acbea0(void) {
  FTRACE(0x11acbea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acbea0 push ebp */
  push32((uint32_t)(EBP));
  /* 11acbea1 mov ebp, esp */
  EBP = (ESP);
  /* 11acbea3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acbea6 mov eax, dword ptr [0x11af9908] */
  EAX = (r32((uint32_t)(0x11af9908)));
  /* 11acbeab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11acbeae mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11acbeb5 jmp 0x11acbec0 */
  goto L_11acbec0;
L_11acbeb7:;
  /* 11acbeb7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acbeba add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acbebd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11acbec0:;
  /* 11acbec0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acbec3 cmp edx, dword ptr [0x11af9904] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11af9904))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acbec9 jge 0x11acbf16 */
  if ((C.sf==C.of)) goto L_11acbf16;
  /* 11acbecb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11acbed0 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11acbed5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acbed8 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11acbedb push ecx */
  push32((uint32_t)(ECX));
  /* 11acbedc call dword ptr [0x11afb368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb368))), 0x11acbee2u);
  /* 11acbee2 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11acbee7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acbee9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acbeec mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11acbeef push eax */
  push32((uint32_t)(EAX));
  /* 11acbef0 call dword ptr [0x11afb368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb368))), 0x11acbef6u);
  /* 11acbef6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acbef9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11acbefc push edx */
  push32((uint32_t)(EDX));
  /* 11acbefd push 0 */
  push32((uint32_t)(0x0u));
  /* 11acbeff mov eax, dword ptr [0x11afac64] */
  EAX = (r32((uint32_t)(0x11afac64)));
  /* 11acbf04 push eax */
  push32((uint32_t)(EAX));
  /* 11acbf05 call dword ptr [0x11afb360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb360))), 0x11acbf0bu);
  /* 11acbf0b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acbf0e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acbf11 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11acbf14 jmp 0x11acbeb7 */
  goto L_11acbeb7;
L_11acbf16:;
  /* 11acbf16 mov edx, dword ptr [0x11af9908] */
  EDX = (r32((uint32_t)(0x11af9908)));
  /* 11acbf1c push edx */
  push32((uint32_t)(EDX));
  /* 11acbf1d push 0 */
  push32((uint32_t)(0x0u));
  /* 11acbf1f mov eax, dword ptr [0x11afac64] */
  EAX = (r32((uint32_t)(0x11afac64)));
  /* 11acbf24 push eax */
  push32((uint32_t)(EAX));
  /* 11acbf25 call dword ptr [0x11afb360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb360))), 0x11acbf2bu);
  /* 11acbf2b mov ecx, dword ptr [0x11afac64] */
  ECX = (r32((uint32_t)(0x11afac64)));
  /* 11acbf31 push ecx */
  push32((uint32_t)(ECX));
  /* 11acbf32 call dword ptr [0x11afb374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb374))), 0x11acbf38u);
  /* 11acbf38 mov esp, ebp */
  ESP = (EBP);
  /* 11acbf3a pop ebp */
  EBP = (pop32());
  /* 11acbf3b ret  */
  ESPCHK(0x11acbea0u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x11acbf40 (73 bytes, 19 insns) */
void f_11acbf40(void) {
  FTRACE(0x11acbf40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acbf40 push ebp */
  push32((uint32_t)(EBP));
  /* 11acbf41 mov ebp, esp */
  EBP = (ESP);
  /* 11acbf43 cmp dword ptr [0x11af92b8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11af92b8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acbf4a je 0x11acbf5e */
  if (C.zf) goto L_11acbf5e;
  /* 11acbf4c cmp dword ptr [0x11af92b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af92b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acbf53 jne 0x11acbf87 */
  if (!C.zf) goto L_11acbf87;
  /* 11acbf55 cmp dword ptr [0x11af92bc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11af92bc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acbf5c jne 0x11acbf87 */
  if (!C.zf) goto L_11acbf87;
L_11acbf5e:;
  /* 11acbf5e push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11acbf63 call 0x11acbf90 */
  push32(0x11acbf68u); f_11acbf90();
  /* 11acbf68 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acbf6b cmp dword ptr [0x11af9428], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af9428))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acbf72 je 0x11acbf7a */
  if (C.zf) goto L_11acbf7a;
  /* 11acbf74 call dword ptr [0x11af9428] */
  call_ind((uint32_t)(r32((uint32_t)(0x11af9428))), 0x11acbf7au);
L_11acbf7a:;
  /* 11acbf7a push 0xff */
  push32((uint32_t)(0xffu));
  /* 11acbf7f call 0x11acbf90 */
  push32(0x11acbf84u); f_11acbf90();
  /* 11acbf84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11acbf87:;
  /* 11acbf87 pop ebp */
  EBP = (pop32());
  /* 11acbf88 ret  */
  ESPCHK(0x11acbf40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf90 @ 0x11acbf90 (447 bytes, 131 insns) */
void f_11acbf90(void) {
  FTRACE(0x11acbf90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acbf90 push ebp */
  push32((uint32_t)(EBP));
  /* 11acbf91 mov ebp, esp */
  EBP = (ESP);
  /* 11acbf93 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acbf99 push ebx */
  push32((uint32_t)(EBX));
  /* 11acbf9a push esi */
  push32((uint32_t)(ESI));
  /* 11acbf9b push edi */
  push32((uint32_t)(EDI));
  /* 11acbf9c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11acbfa3 jmp 0x11acbfae */
  goto L_11acbfae;
L_11acbfa5:;
  /* 11acbfa5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acbfa8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acbfab mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11acbfae:;
  /* 11acbfae cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acbfb2 jae 0x11acbfc7 */
  if (!C.cf) goto L_11acbfc7;
  /* 11acbfb4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acbfb7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acbfba cmp edx, dword ptr [ecx*8 + 0x11af6b60] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x11af6b60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acbfc1 jne 0x11acbfc5 */
  if (!C.zf) goto L_11acbfc5;
  /* 11acbfc3 jmp 0x11acbfc7 */
  goto L_11acbfc7;
L_11acbfc5:;
  /* 11acbfc5 jmp 0x11acbfa5 */
  goto L_11acbfa5;
L_11acbfc7:;
  /* 11acbfc7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acbfca mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acbfcd cmp ecx, dword ptr [eax*8 + 0x11af6b60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11af6b60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acbfd4 jne 0x11acc148 */
  if (!C.zf) goto L_11acc148;
  /* 11acbfda cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acbfe1 je 0x11acc004 */
  if (C.zf) goto L_11acc004;
  /* 11acbfe3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acbfe6 mov eax, dword ptr [edx*8 + 0x11af6b64] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11af6b64)));
  /* 11acbfed push eax */
  push32((uint32_t)(EAX));
  /* 11acbfee push 0 */
  push32((uint32_t)(0x0u));
  /* 11acbff0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acbff2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acbff4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11acbff6 call 0x11ac6a40 */
  push32(0x11acbffbu); f_11ac6a40();
  /* 11acbffb add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acbffe cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc001 jne 0x11acc004 */
  if (!C.zf) goto L_11acc004;
  /* 11acc003 int3  */
  x86_unimpl("int3 @ 0x11acc003");
L_11acc004:;
  /* 11acc004 cmp dword ptr [0x11af92b8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11af92b8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc00b je 0x11acc01f */
  if (C.zf) goto L_11acc01f;
  /* 11acc00d cmp dword ptr [0x11af92b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af92b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc014 jne 0x11acc058 */
  if (!C.zf) goto L_11acc058;
  /* 11acc016 cmp dword ptr [0x11af92bc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11af92bc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc01d jne 0x11acc058 */
  if (!C.zf) goto L_11acc058;
L_11acc01f:;
  /* 11acc01f push 0 */
  push32((uint32_t)(0x0u));
  /* 11acc021 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11acc024 push ecx */
  push32((uint32_t)(ECX));
  /* 11acc025 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acc028 mov eax, dword ptr [edx*8 + 0x11af6b64] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11af6b64)));
  /* 11acc02f push eax */
  push32((uint32_t)(EAX));
  /* 11acc030 call 0x11acc490 */
  push32(0x11acc035u); f_11acc490();
  /* 11acc035 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acc038 push eax */
  push32((uint32_t)(EAX));
  /* 11acc039 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acc03c mov edx, dword ptr [ecx*8 + 0x11af6b64] */
  EDX = (r32((uint32_t)(ECX*8 + 0x11af6b64)));
  /* 11acc043 push edx */
  push32((uint32_t)(EDX));
  /* 11acc044 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11acc046 call dword ptr [0x11afb38c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb38c))), 0x11acc04cu);
  /* 11acc04c push eax */
  push32((uint32_t)(EAX));
  /* 11acc04d call dword ptr [0x11afb390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb390))), 0x11acc053u);
  /* 11acc053 jmp 0x11acc148 */
  goto L_11acc148;
L_11acc058:;
  /* 11acc058 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc05f je 0x11acc148 */
  if (C.zf) goto L_11acc148;
  /* 11acc065 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11acc06a lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 11acc070 push eax */
  push32((uint32_t)(EAX));
  /* 11acc071 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acc073 call dword ptr [0x11afb3a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3a8))), 0x11acc079u);
  /* 11acc079 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acc07b jne 0x11acc091 */
  if (!C.zf) goto L_11acc091;
  /* 11acc07d push 0x11af3500 */
  push32((uint32_t)(0x11af3500u));
  /* 11acc082 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 11acc088 push ecx */
  push32((uint32_t)(ECX));
  /* 11acc089 call 0x11acc610 */
  push32(0x11acc08eu); f_11acc610();
  /* 11acc08e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11acc091:;
  /* 11acc091 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 11acc097 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11acc09a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11acc09d push eax */
  push32((uint32_t)(EAX));
  /* 11acc09e call 0x11acc490 */
  push32(0x11acc0a3u); f_11acc490();
  /* 11acc0a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acc0a6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acc0a9 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc0ac jbe 0x11acc0da */
  if ((C.cf||C.zf)) goto L_11acc0da;
  /* 11acc0ae lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 11acc0b4 push ecx */
  push32((uint32_t)(ECX));
  /* 11acc0b5 call 0x11acc490 */
  push32(0x11acc0bau); f_11acc490();
  /* 11acc0ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acc0bd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11acc0c0 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 11acc0c4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11acc0c7 push 3 */
  push32((uint32_t)(0x3u));
  /* 11acc0c9 push 0x11af34fc */
  push32((uint32_t)(0x11af34fcu));
  /* 11acc0ce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11acc0d1 push ecx */
  push32((uint32_t)(ECX));
  /* 11acc0d2 call 0x11acce80 */
  push32(0x11acc0d7u); f_11acce80();
  /* 11acc0d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11acc0da:;
  /* 11acc0da push 0x11af40c0 */
  push32((uint32_t)(0x11af40c0u));
  /* 11acc0df lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11acc0e5 push edx */
  push32((uint32_t)(EDX));
  /* 11acc0e6 call 0x11acc610 */
  push32(0x11acc0ebu); f_11acc610();
  /* 11acc0eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acc0ee mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11acc0f1 push eax */
  push32((uint32_t)(EAX));
  /* 11acc0f2 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 11acc0f8 push ecx */
  push32((uint32_t)(ECX));
  /* 11acc0f9 call 0x11acc620 */
  push32(0x11acc0feu); f_11acc620();
  /* 11acc0fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acc101 push 0x11af3474 */
  push32((uint32_t)(0x11af3474u));
  /* 11acc106 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11acc10c push edx */
  push32((uint32_t)(EDX));
  /* 11acc10d call 0x11acc620 */
  push32(0x11acc112u); f_11acc620();
  /* 11acc112 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acc115 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acc118 mov ecx, dword ptr [eax*8 + 0x11af6b64] */
  ECX = (r32((uint32_t)(EAX*8 + 0x11af6b64)));
  /* 11acc11f push ecx */
  push32((uint32_t)(ECX));
  /* 11acc120 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11acc126 push edx */
  push32((uint32_t)(EDX));
  /* 11acc127 call 0x11acc620 */
  push32(0x11acc12cu); f_11acc620();
  /* 11acc12c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acc12f push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11acc134 push 0x11af4098 */
  push32((uint32_t)(0x11af4098u));
  /* 11acc139 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 11acc13f push eax */
  push32((uint32_t)(EAX));
  /* 11acc140 call 0x11accdc0 */
  push32(0x11acc145u); f_11accdc0();
  /* 11acc145 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11acc148:;
  /* 11acc148 pop edi */
  EDI = (pop32());
  /* 11acc149 pop esi */
  ESI = (pop32());
  /* 11acc14a pop ebx */
  EBX = (pop32());
  /* 11acc14b mov esp, ebp */
  ESP = (EBP);
  /* 11acc14d pop ebp */
  EBP = (pop32());
  /* 11acc14e ret  */
  ESPCHK(0x11acbf90u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x11acc150 (80 bytes, 27 insns) */
void f_11acc150(void) {
  FTRACE(0x11acc150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acc150 push ebp */
  push32((uint32_t)(EBP));
  /* 11acc151 mov ebp, esp */
  EBP = (ESP);
  /* 11acc153 push ecx */
  push32((uint32_t)(ECX));
  /* 11acc154 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11acc15b jmp 0x11acc166 */
  goto L_11acc166;
L_11acc15d:;
  /* 11acc15d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acc160 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acc163 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11acc166:;
  /* 11acc166 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc16a jae 0x11acc17f */
  if (!C.cf) goto L_11acc17f;
  /* 11acc16c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acc16f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acc172 cmp edx, dword ptr [ecx*8 + 0x11af6b60] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x11af6b60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc179 jne 0x11acc17d */
  if (!C.zf) goto L_11acc17d;
  /* 11acc17b jmp 0x11acc17f */
  goto L_11acc17f;
L_11acc17d:;
  /* 11acc17d jmp 0x11acc15d */
  goto L_11acc15d;
L_11acc17f:;
  /* 11acc17f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acc182 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acc185 cmp ecx, dword ptr [eax*8 + 0x11af6b60] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11af6b60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc18c jne 0x11acc19a */
  if (!C.zf) goto L_11acc19a;
  /* 11acc18e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acc191 mov eax, dword ptr [edx*8 + 0x11af6b64] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11af6b64)));
  /* 11acc198 jmp 0x11acc19c */
  goto L_11acc19c;
L_11acc19a:;
  /* 11acc19a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11acc19c:;
  /* 11acc19c mov esp, ebp */
  ESP = (EBP);
  /* 11acc19e pop ebp */
  EBP = (pop32());
  /* 11acc19f ret  */
  ESPCHK(0x11acc150u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x11acc1a0 (66 bytes, 28 insns) */
void f_11acc1a0(void) {
  FTRACE(0x11acc1a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acc1a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11acc1a1 mov ebp, esp */
  EBP = (ESP);
  /* 11acc1a3 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc1a7 jne 0x11acc1c7 */
  if (!C.zf) goto L_11acc1c7;
  /* 11acc1a9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc1ad jge 0x11acc1c7 */
  if ((C.sf==C.of)) goto L_11acc1c7;
  /* 11acc1af push 1 */
  push32((uint32_t)(0x1u));
  /* 11acc1b1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11acc1b4 push eax */
  push32((uint32_t)(EAX));
  /* 11acc1b5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acc1b8 push ecx */
  push32((uint32_t)(ECX));
  /* 11acc1b9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acc1bc push edx */
  push32((uint32_t)(EDX));
  /* 11acc1bd call 0x11acc1f0 */
  push32(0x11acc1c2u); f_11acc1f0();
  /* 11acc1c2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acc1c5 jmp 0x11acc1dd */
  goto L_11acc1dd;
L_11acc1c7:;
  /* 11acc1c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acc1c9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11acc1cc push eax */
  push32((uint32_t)(EAX));
  /* 11acc1cd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acc1d0 push ecx */
  push32((uint32_t)(ECX));
  /* 11acc1d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acc1d4 push edx */
  push32((uint32_t)(EDX));
  /* 11acc1d5 call 0x11acc1f0 */
  push32(0x11acc1dau); f_11acc1f0();
  /* 11acc1da add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11acc1dd:;
  /* 11acc1dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acc1e0 pop ebp */
  EBP = (pop32());
  /* 11acc1e1 ret  */
  ESPCHK(0x11acc1a0u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x11acc1f0 (194 bytes, 71 insns) */
void f_11acc1f0(void) {
  FTRACE(0x11acc1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acc1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11acc1f1 mov ebp, esp */
  EBP = (ESP);
  /* 11acc1f3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acc1f6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acc1f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11acc1fc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc200 je 0x11acc219 */
  if (C.zf) goto L_11acc219;
  /* 11acc202 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acc205 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11acc208 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acc20b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acc20e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11acc211 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acc214 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11acc216 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11acc219:;
  /* 11acc219 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acc21c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11acc21f:;
  /* 11acc21f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acc222 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11acc224 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11acc227 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11acc22a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acc22d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11acc22f div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11acc232 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11acc235 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc239 jbe 0x11acc251 */
  if ((C.cf||C.zf)) goto L_11acc251;
  /* 11acc23b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11acc23e add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acc241 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acc244 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11acc246 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acc249 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acc24c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11acc24f jmp 0x11acc265 */
  goto L_11acc265;
L_11acc251:;
  /* 11acc251 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11acc254 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acc257 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acc25a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11acc25c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acc25f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acc262 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11acc265:;
  /* 11acc265 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc269 ja 0x11acc21f */
  if ((!C.cf&&!C.zf)) goto L_11acc21f;
  /* 11acc26b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acc26e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11acc271 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acc274 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acc277 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11acc27a:;
  /* 11acc27a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acc27d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11acc27f mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 11acc282 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acc285 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acc288 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11acc28a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11acc28c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acc28f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 11acc292 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11acc294 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acc297 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acc29a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11acc29d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acc2a0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acc2a3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11acc2a6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acc2a9 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc2ac jb 0x11acc27a */
  if (C.cf) goto L_11acc27a;
  /* 11acc2ae mov esp, ebp */
  ESP = (EBP);
  /* 11acc2b0 pop ebp */
  EBP = (pop32());
  /* 11acc2b1 ret  */
  ESPCHK(0x11acc1f0u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x11acc2c0 (63 bytes, 24 insns) */
void f_11acc2c0(void) {
  FTRACE(0x11acc2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acc2c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11acc2c1 mov ebp, esp */
  EBP = (ESP);
  /* 11acc2c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11acc2c4 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc2c8 jne 0x11acc2d9 */
  if (!C.zf) goto L_11acc2d9;
  /* 11acc2ca cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc2ce jge 0x11acc2d9 */
  if ((C.sf==C.of)) goto L_11acc2d9;
  /* 11acc2d0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11acc2d7 jmp 0x11acc2e0 */
  goto L_11acc2e0;
L_11acc2d9:;
  /* 11acc2d9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11acc2e0:;
  /* 11acc2e0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acc2e3 push eax */
  push32((uint32_t)(EAX));
  /* 11acc2e4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11acc2e7 push ecx */
  push32((uint32_t)(ECX));
  /* 11acc2e8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acc2eb push edx */
  push32((uint32_t)(EDX));
  /* 11acc2ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acc2ef push eax */
  push32((uint32_t)(EAX));
  /* 11acc2f0 call 0x11acc1f0 */
  push32(0x11acc2f5u); f_11acc1f0();
  /* 11acc2f5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acc2f8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acc2fb mov esp, ebp */
  ESP = (EBP);
  /* 11acc2fd pop ebp */
  EBP = (pop32());
  /* 11acc2fe ret  */
  ESPCHK(0x11acc2c0u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x11acc300 (30 bytes, 14 insns) */
void f_11acc300(void) {
  FTRACE(0x11acc300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acc300 push ebp */
  push32((uint32_t)(EBP));
  /* 11acc301 mov ebp, esp */
  EBP = (ESP);
  /* 11acc303 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acc305 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11acc308 push eax */
  push32((uint32_t)(EAX));
  /* 11acc309 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acc30c push ecx */
  push32((uint32_t)(ECX));
  /* 11acc30d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acc310 push edx */
  push32((uint32_t)(EDX));
  /* 11acc311 call 0x11acc1f0 */
  push32(0x11acc316u); f_11acc1f0();
  /* 11acc316 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acc319 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acc31c pop ebp */
  EBP = (pop32());
  /* 11acc31d ret  */
  ESPCHK(0x11acc300u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x11acc320 (72 bytes, 28 insns) */
void f_11acc320(void) {
  FTRACE(0x11acc320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acc320 push ebp */
  push32((uint32_t)(EBP));
  /* 11acc321 mov ebp, esp */
  EBP = (ESP);
  /* 11acc323 push ecx */
  push32((uint32_t)(ECX));
  /* 11acc324 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc328 jne 0x11acc341 */
  if (!C.zf) goto L_11acc341;
  /* 11acc32a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc32e jg 0x11acc341 */
  if ((!C.zf&&C.sf==C.of)) goto L_11acc341;
  /* 11acc330 jl 0x11acc338 */
  if ((C.sf!=C.of)) goto L_11acc338;
  /* 11acc332 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc336 jae 0x11acc341 */
  if (!C.cf) goto L_11acc341;
L_11acc338:;
  /* 11acc338 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11acc33f jmp 0x11acc348 */
  goto L_11acc348;
L_11acc341:;
  /* 11acc341 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11acc348:;
  /* 11acc348 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acc34b push eax */
  push32((uint32_t)(EAX));
  /* 11acc34c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11acc34f push ecx */
  push32((uint32_t)(ECX));
  /* 11acc350 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11acc353 push edx */
  push32((uint32_t)(EDX));
  /* 11acc354 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acc357 push eax */
  push32((uint32_t)(EAX));
  /* 11acc358 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acc35b push ecx */
  push32((uint32_t)(ECX));
  /* 11acc35c call 0x11acc370 */
  push32(0x11acc361u); f_11acc370();
  /* 11acc361 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11acc364 mov esp, ebp */
  ESP = (EBP);
  /* 11acc366 pop ebp */
  EBP = (pop32());
  /* 11acc367 ret  */
  ESPCHK(0x11acc320u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x11acc370 (242 bytes, 91 insns) */
void f_11acc370(void) {
  FTRACE(0x11acc370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acc370 push ebp */
  push32((uint32_t)(EBP));
  /* 11acc371 mov ebp, esp */
  EBP = (ESP);
  /* 11acc373 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acc376 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11acc379 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11acc37c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc380 je 0x11acc3a4 */
  if (C.zf) goto L_11acc3a4;
  /* 11acc382 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acc385 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11acc388 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acc38b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acc38e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11acc391 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acc394 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11acc396 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acc399 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acc39c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11acc39e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11acc3a1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11acc3a4:;
  /* 11acc3a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acc3a7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11acc3aa:;
  /* 11acc3aa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11acc3ad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11acc3af push ecx */
  push32((uint32_t)(ECX));
  /* 11acc3b0 push eax */
  push32((uint32_t)(EAX));
  /* 11acc3b1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acc3b4 push edx */
  push32((uint32_t)(EDX));
  /* 11acc3b5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acc3b8 push eax */
  push32((uint32_t)(EAX));
  /* 11acc3b9 call 0x11acdc90 */
  push32(0x11acc3beu); f_11acdc90();
  /* 11acc3be mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11acc3c1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11acc3c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11acc3c6 push edx */
  push32((uint32_t)(EDX));
  /* 11acc3c7 push ecx */
  push32((uint32_t)(ECX));
  /* 11acc3c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acc3cb push eax */
  push32((uint32_t)(EAX));
  /* 11acc3cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acc3cf push ecx */
  push32((uint32_t)(ECX));
  /* 11acc3d0 call 0x11acdc20 */
  push32(0x11acc3d5u); f_11acdc20();
  /* 11acc3d5 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11acc3d8 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11acc3db cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc3df jbe 0x11acc3f7 */
  if ((C.cf||C.zf)) goto L_11acc3f7;
  /* 11acc3e1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11acc3e4 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acc3e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acc3ea mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11acc3ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acc3ef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acc3f2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11acc3f5 jmp 0x11acc40b */
  goto L_11acc40b;
L_11acc3f7:;
  /* 11acc3f7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11acc3fa add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acc3fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acc400 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11acc402 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acc405 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acc408 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11acc40b:;
  /* 11acc40b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc40f ja 0x11acc3aa */
  if ((!C.cf&&!C.zf)) goto L_11acc3aa;
  /* 11acc411 jb 0x11acc419 */
  if (C.cf) goto L_11acc419;
  /* 11acc413 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc417 ja 0x11acc3aa */
  if ((!C.cf&&!C.zf)) goto L_11acc3aa;
L_11acc419:;
  /* 11acc419 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acc41c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11acc41f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acc422 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acc425 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11acc428:;
  /* 11acc428 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acc42b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11acc42d mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 11acc430 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acc433 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acc436 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11acc438 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11acc43a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acc43d mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 11acc440 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11acc442 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acc445 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acc448 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11acc44b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acc44e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acc451 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11acc454 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acc457 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc45a jb 0x11acc428 */
  if (C.cf) goto L_11acc428;
  /* 11acc45c mov esp, ebp */
  ESP = (EBP);
  /* 11acc45e pop ebp */
  EBP = (pop32());
  /* 11acc45f ret 0x14 */
  ESPCHK(0x11acc370u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x11acc470 (31 bytes, 15 insns) */
void f_11acc470(void) {
  FTRACE(0x11acc470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acc470 push ebp */
  push32((uint32_t)(EBP));
  /* 11acc471 mov ebp, esp */
  EBP = (ESP);
  /* 11acc473 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acc475 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11acc478 push eax */
  push32((uint32_t)(EAX));
  /* 11acc479 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11acc47c push ecx */
  push32((uint32_t)(ECX));
  /* 11acc47d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acc480 push edx */
  push32((uint32_t)(EDX));
  /* 11acc481 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acc484 push eax */
  push32((uint32_t)(EAX));
  /* 11acc485 call 0x11acc370 */
  push32(0x11acc48au); f_11acc370();
  /* 11acc48a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11acc48d pop ebp */
  EBP = (pop32());
  /* 11acc48e ret  */
  ESPCHK(0x11acc470u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11acc490 (123 bytes, 44 insns) */
void f_11acc490(void) {
  FTRACE(0x11acc490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acc490 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11acc494 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11acc49a je 0x11acc4b0 */
  if (C.zf) goto L_11acc4b0;
L_11acc49c:;
  /* 11acc49c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11acc49e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11acc49f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11acc4a1 je 0x11acc4e3 */
  if (C.zf) goto L_11acc4e3;
  /* 11acc4a3 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11acc4a9 jne 0x11acc49c */
  if (!C.zf) goto L_11acc49c;
  /* 11acc4ab add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11acc4b0:;
  /* 11acc4b0 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11acc4b2 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11acc4b7 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acc4b9 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11acc4bc xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11acc4be add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acc4c1 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11acc4c6 je 0x11acc4b0 */
  if (C.zf) goto L_11acc4b0;
  /* 11acc4c8 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11acc4cb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11acc4cd je 0x11acc501 */
  if (C.zf) goto L_11acc501;
  /* 11acc4cf test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11acc4d1 je 0x11acc4f7 */
  if (C.zf) goto L_11acc4f7;
  /* 11acc4d3 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11acc4d8 je 0x11acc4ed */
  if (C.zf) goto L_11acc4ed;
  /* 11acc4da test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11acc4df je 0x11acc4e3 */
  if (C.zf) goto L_11acc4e3;
  /* 11acc4e1 jmp 0x11acc4b0 */
  goto L_11acc4b0;
L_11acc4e3:;
  /* 11acc4e3 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11acc4e6 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11acc4ea sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acc4ec ret  */
  ESPCHK(0x11acc490u, _esp0);
  ESP += 4; return;
L_11acc4ed:;
  /* 11acc4ed lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11acc4f0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11acc4f4 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acc4f6 ret  */
  ESPCHK(0x11acc490u, _esp0);
  ESP += 4; return;
L_11acc4f7:;
  /* 11acc4f7 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 11acc4fa mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11acc4fe sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acc500 ret  */
  ESPCHK(0x11acc490u, _esp0);
  ESP += 4; return;
L_11acc501:;
  /* 11acc501 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11acc504 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11acc508 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acc50a ret  */
  ESPCHK(0x11acc490u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c510 @ 0x11acc510 (249 bytes, 93 insns) */
void f_11acc510(void) {
  FTRACE(0x11acc510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acc510 push ebp */
  push32((uint32_t)(EBP));
  /* 11acc511 mov ebp, esp */
  EBP = (ESP);
  /* 11acc513 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acc516 push ebx */
  push32((uint32_t)(EBX));
  /* 11acc517 push esi */
  push32((uint32_t)(ESI));
  /* 11acc518 push edi */
  push32((uint32_t)(EDI));
  /* 11acc519 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11acc51c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11acc51f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 11acc522 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_11acc525:;
  /* 11acc525 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc529 jne 0x11acc549 */
  if (!C.zf) goto L_11acc549;
  /* 11acc52b push 0x11af32f8 */
  push32((uint32_t)(0x11af32f8u));
  /* 11acc530 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acc532 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11acc534 push 0x11af32ec */
  push32((uint32_t)(0x11af32ecu));
  /* 11acc539 push 2 */
  push32((uint32_t)(0x2u));
  /* 11acc53b call 0x11ac6a40 */
  push32(0x11acc540u); f_11ac6a40();
  /* 11acc540 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acc543 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc546 jne 0x11acc549 */
  if (!C.zf) goto L_11acc549;
  /* 11acc548 int3  */
  x86_unimpl("int3 @ 0x11acc548");
L_11acc549:;
  /* 11acc549 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11acc54b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11acc54d jne 0x11acc525 */
  if (!C.zf) goto L_11acc525;
L_11acc54f:;
  /* 11acc54f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc553 jne 0x11acc573 */
  if (!C.zf) goto L_11acc573;
  /* 11acc555 push 0x11af32dc */
  push32((uint32_t)(0x11af32dcu));
  /* 11acc55a push 0 */
  push32((uint32_t)(0x0u));
  /* 11acc55c push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11acc55e push 0x11af32ec */
  push32((uint32_t)(0x11af32ecu));
  /* 11acc563 push 2 */
  push32((uint32_t)(0x2u));
  /* 11acc565 call 0x11ac6a40 */
  push32(0x11acc56au); f_11ac6a40();
  /* 11acc56a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acc56d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc570 jne 0x11acc573 */
  if (!C.zf) goto L_11acc573;
  /* 11acc572 int3  */
  x86_unimpl("int3 @ 0x11acc572");
L_11acc573:;
  /* 11acc573 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11acc575 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acc577 jne 0x11acc54f */
  if (!C.zf) goto L_11acc54f;
  /* 11acc579 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11acc57c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 11acc583 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11acc586 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acc589 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11acc58c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11acc58f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acc592 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11acc594 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11acc597 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acc59a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11acc59d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11acc5a0 push edx */
  push32((uint32_t)(EDX));
  /* 11acc5a1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11acc5a4 push eax */
  push32((uint32_t)(EAX));
  /* 11acc5a5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11acc5a8 push ecx */
  push32((uint32_t)(ECX));
  /* 11acc5a9 call 0x11ac7610 */
  push32(0x11acc5aeu); f_11ac7610();
  /* 11acc5ae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acc5b1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11acc5b4 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11acc5b7 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11acc5ba sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acc5bd mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11acc5c0 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11acc5c3 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11acc5c6 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc5ca jl 0x11acc5ee */
  if ((C.sf!=C.of)) goto L_11acc5ee;
  /* 11acc5cc mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11acc5cf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11acc5d1 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11acc5d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11acc5d6 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11acc5dc mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11acc5df mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11acc5e2 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11acc5e4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acc5e7 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11acc5ea mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11acc5ec jmp 0x11acc5ff */
  goto L_11acc5ff;
L_11acc5ee:;
  /* 11acc5ee mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11acc5f1 push eax */
  push32((uint32_t)(EAX));
  /* 11acc5f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acc5f4 call 0x11ac7390 */
  push32(0x11acc5f9u); f_11ac7390();
  /* 11acc5f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acc5fc mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_11acc5ff:;
  /* 11acc5ff mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11acc602 pop edi */
  EDI = (pop32());
  /* 11acc603 pop esi */
  ESI = (pop32());
  /* 11acc604 pop ebx */
  EBX = (pop32());
  /* 11acc605 mov esp, ebp */
  ESP = (EBP);
  /* 11acc607 pop ebp */
  EBP = (pop32());
  /* 11acc608 ret  */
  ESPCHK(0x11acc510u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c610 @ 0x11acc610 (7 bytes, 3 insns) */
void f_11acc610(void) {
  FTRACE(0x11acc610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acc610 push edi */
  push32((uint32_t)(EDI));
  /* 11acc611 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11acc615 jmp 0x11acc681 */
  jmp_ind(0x11acc681u); return;
}

/* FUN_1000c620 @ 0x11acc620 (224 bytes, 84 insns) */
void f_11acc620(void) {
  FTRACE(0x11acc620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acc620 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11acc624 push edi */
  push32((uint32_t)(EDI));
  /* 11acc625 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11acc62b je 0x11acc63c */
  if (C.zf) goto L_11acc63c;
L_11acc62d:;
  /* 11acc62d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11acc62f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11acc630 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11acc632 je 0x11acc66f */
  if (C.zf) goto L_11acc66f;
  /* 11acc634 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11acc63a jne 0x11acc62d */
  if (!C.zf) goto L_11acc62d;
L_11acc63c:;
  /* 11acc63c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11acc63e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11acc643 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acc645 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11acc648 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11acc64a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acc64d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11acc652 je 0x11acc63c */
  if (C.zf) goto L_11acc63c;
  /* 11acc654 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11acc657 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11acc659 je 0x11acc67e */
  if (C.zf) goto L_11acc67e;
  /* 11acc65b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11acc65d je 0x11acc679 */
  if (C.zf) goto L_11acc679;
  /* 11acc65f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11acc664 je 0x11acc674 */
  if (C.zf) goto L_11acc674;
  /* 11acc666 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11acc66b je 0x11acc66f */
  if (C.zf) goto L_11acc66f;
  /* 11acc66d jmp 0x11acc63c */
  goto L_11acc63c;
L_11acc66f:;
  /* 11acc66f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11acc672 jmp 0x11acc681 */
  goto L_11acc681;
L_11acc674:;
  /* 11acc674 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11acc677 jmp 0x11acc681 */
  goto L_11acc681;
L_11acc679:;
  /* 11acc679 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 11acc67c jmp 0x11acc681 */
  goto L_11acc681;
L_11acc67e:;
  /* 11acc67e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11acc681:;
  /* 11acc681 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11acc685 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11acc68b je 0x11acc6a6 */
  if (C.zf) goto L_11acc6a6;
L_11acc68d:;
  /* 11acc68d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11acc68f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11acc690 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11acc692 je 0x11acc6f8 */
  if (C.zf) goto L_11acc6f8;
  /* 11acc694 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11acc696 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11acc697 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11acc69d jne 0x11acc68d */
  if (!C.zf) goto L_11acc68d;
  /* 11acc69f jmp 0x11acc6a6 */
  goto L_11acc6a6;
L_11acc6a1:;
  /* 11acc6a1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11acc6a3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11acc6a6:;
  /* 11acc6a6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11acc6ab mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11acc6ad add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acc6af xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11acc6b2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11acc6b4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11acc6b6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acc6b9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11acc6be je 0x11acc6a1 */
  if (C.zf) goto L_11acc6a1;
  /* 11acc6c0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11acc6c2 je 0x11acc6f8 */
  if (C.zf) goto L_11acc6f8;
  /* 11acc6c4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11acc6c6 je 0x11acc6ef */
  if (C.zf) goto L_11acc6ef;
  /* 11acc6c8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11acc6ce je 0x11acc6e2 */
  if (C.zf) goto L_11acc6e2;
  /* 11acc6d0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11acc6d6 je 0x11acc6da */
  if (C.zf) goto L_11acc6da;
  /* 11acc6d8 jmp 0x11acc6a1 */
  goto L_11acc6a1;
L_11acc6da:;
  /* 11acc6da mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11acc6dc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11acc6e0 pop edi */
  EDI = (pop32());
  /* 11acc6e1 ret  */
  ESPCHK(0x11acc620u, _esp0);
  ESP += 4; return;
L_11acc6e2:;
  /* 11acc6e2 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11acc6e5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11acc6e9 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 11acc6ed pop edi */
  EDI = (pop32());
  /* 11acc6ee ret  */
  ESPCHK(0x11acc620u, _esp0);
  ESP += 4; return;
L_11acc6ef:;
  /* 11acc6ef mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11acc6f2 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11acc6f6 pop edi */
  EDI = (pop32());
  /* 11acc6f7 ret  */
  ESPCHK(0x11acc620u, _esp0);
  ESP += 4; return;
L_11acc6f8:;
  /* 11acc6f8 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11acc6fa mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11acc6fe pop edi */
  EDI = (pop32());
  /* 11acc6ff ret  */
  ESPCHK(0x11acc620u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c700 @ 0x11acc700 (243 bytes, 91 insns) */
void f_11acc700(void) {
  FTRACE(0x11acc700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acc700 push ebp */
  push32((uint32_t)(EBP));
  /* 11acc701 mov ebp, esp */
  EBP = (ESP);
  /* 11acc703 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acc706 push ebx */
  push32((uint32_t)(EBX));
  /* 11acc707 push esi */
  push32((uint32_t)(ESI));
  /* 11acc708 push edi */
  push32((uint32_t)(EDI));
  /* 11acc709 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11acc70c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11acc70f:;
  /* 11acc70f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc713 jne 0x11acc733 */
  if (!C.zf) goto L_11acc733;
  /* 11acc715 push 0x11af32f8 */
  push32((uint32_t)(0x11af32f8u));
  /* 11acc71a push 0 */
  push32((uint32_t)(0x0u));
  /* 11acc71c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 11acc71e push 0x11af40dc */
  push32((uint32_t)(0x11af40dcu));
  /* 11acc723 push 2 */
  push32((uint32_t)(0x2u));
  /* 11acc725 call 0x11ac6a40 */
  push32(0x11acc72au); f_11ac6a40();
  /* 11acc72a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acc72d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc730 jne 0x11acc733 */
  if (!C.zf) goto L_11acc733;
  /* 11acc732 int3  */
  x86_unimpl("int3 @ 0x11acc732");
L_11acc733:;
  /* 11acc733 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11acc735 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11acc737 jne 0x11acc70f */
  if (!C.zf) goto L_11acc70f;
L_11acc739:;
  /* 11acc739 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc73d jne 0x11acc75d */
  if (!C.zf) goto L_11acc75d;
  /* 11acc73f push 0x11af32dc */
  push32((uint32_t)(0x11af32dcu));
  /* 11acc744 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acc746 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 11acc748 push 0x11af40dc */
  push32((uint32_t)(0x11af40dcu));
  /* 11acc74d push 2 */
  push32((uint32_t)(0x2u));
  /* 11acc74f call 0x11ac6a40 */
  push32(0x11acc754u); f_11ac6a40();
  /* 11acc754 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acc757 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc75a jne 0x11acc75d */
  if (!C.zf) goto L_11acc75d;
  /* 11acc75c int3  */
  x86_unimpl("int3 @ 0x11acc75c");
L_11acc75d:;
  /* 11acc75d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11acc75f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11acc761 jne 0x11acc739 */
  if (!C.zf) goto L_11acc739;
  /* 11acc763 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11acc766 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 11acc76d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11acc770 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acc773 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11acc776 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11acc779 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acc77c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11acc77e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11acc781 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acc784 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11acc787 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11acc78a push ecx */
  push32((uint32_t)(ECX));
  /* 11acc78b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11acc78e push edx */
  push32((uint32_t)(EDX));
  /* 11acc78f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11acc792 push eax */
  push32((uint32_t)(EAX));
  /* 11acc793 call 0x11ac7610 */
  push32(0x11acc798u); f_11ac7610();
  /* 11acc798 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acc79b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11acc79e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11acc7a1 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11acc7a4 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acc7a7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11acc7aa mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11acc7ad mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11acc7b0 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc7b4 jl 0x11acc7d8 */
  if ((C.sf!=C.of)) goto L_11acc7d8;
  /* 11acc7b6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11acc7b9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11acc7bb mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11acc7be xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11acc7c0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11acc7c6 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11acc7c9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11acc7cc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11acc7ce add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acc7d1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11acc7d4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11acc7d6 jmp 0x11acc7e9 */
  goto L_11acc7e9;
L_11acc7d8:;
  /* 11acc7d8 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11acc7db push edx */
  push32((uint32_t)(EDX));
  /* 11acc7dc push 0 */
  push32((uint32_t)(0x0u));
  /* 11acc7de call 0x11ac7390 */
  push32(0x11acc7e3u); f_11ac7390();
  /* 11acc7e3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acc7e6 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_11acc7e9:;
  /* 11acc7e9 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11acc7ec pop edi */
  EDI = (pop32());
  /* 11acc7ed pop esi */
  ESI = (pop32());
  /* 11acc7ee pop ebx */
  EBX = (pop32());
  /* 11acc7ef mov esp, ebp */
  ESP = (EBP);
  /* 11acc7f1 pop ebp */
  EBP = (pop32());
  /* 11acc7f2 ret  */
  ESPCHK(0x11acc700u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c800 @ 0x11acc800 (47 bytes, 17 insns) */
void f_11acc800(void) {
  FTRACE(0x11acc800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acc800 push ecx */
  push32((uint32_t)(ECX));
  /* 11acc801 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc806 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 11acc80a jb 0x11acc820 */
  if (C.cf) goto L_11acc820;
L_11acc80c:;
  /* 11acc80c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acc812 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acc817 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11acc819 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc81e jae 0x11acc80c */
  if (!C.cf) goto L_11acc80c;
L_11acc820:;
  /* 11acc820 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acc822 mov eax, esp */
  EAX = (ESP);
  /* 11acc824 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11acc826 mov esp, ecx */
  ESP = (ECX);
  /* 11acc828 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11acc82a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11acc82d push eax */
  push32((uint32_t)(EAX));
  /* 11acc82e ret  */
  ESPCHK(0x11acc800u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c830 @ 0x11acc830 (507 bytes, 151 insns) [1 switch table(s)] */
void f_11acc830(void) {
  FTRACE(0x11acc830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acc830 push ebp */
  push32((uint32_t)(EBP));
  /* 11acc831 mov ebp, esp */
  EBP = (ESP);
  /* 11acc833 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acc836 push esi */
  push32((uint32_t)(ESI));
  /* 11acc837 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc83b je 0x11acc843 */
  if (C.zf) goto L_11acc843;
  /* 11acc83d cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc841 jne 0x11acc848 */
  if (!C.zf) goto L_11acc848;
L_11acc843:;
  /* 11acc843 jmp 0x11acca18 */
  goto L_11acca18;
L_11acc848:;
  /* 11acc848 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc84c je 0x11acc864 */
  if (C.zf) goto L_11acc864;
  /* 11acc84e cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc852 je 0x11acc864 */
  if (C.zf) goto L_11acc864;
  /* 11acc854 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc858 je 0x11acc864 */
  if (C.zf) goto L_11acc864;
  /* 11acc85a cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc85e jne 0x11acc941 */
  if (!C.zf) goto L_11acc941;
L_11acc864:;
  /* 11acc864 push 1 */
  push32((uint32_t)(0x1u));
  /* 11acc866 call 0x11acd060 */
  push32(0x11acc86bu); f_11acd060();
  /* 11acc86b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acc86e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc872 je 0x11acc87a */
  if (C.zf) goto L_11acc87a;
  /* 11acc874 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc878 jne 0x11acc8bf */
  if (!C.zf) goto L_11acc8bf;
L_11acc87a:;
  /* 11acc87a cmp dword ptr [0x11af943c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af943c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc881 jne 0x11acc8bf */
  if (!C.zf) goto L_11acc8bf;
  /* 11acc883 push 1 */
  push32((uint32_t)(0x1u));
  /* 11acc885 push 0x11acca60 */
  push32((uint32_t)(0x11acca60u));
  /* 11acc88a call dword ptr [0x11afb358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb358))), 0x11acc890u);
  /* 11acc890 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc893 jne 0x11acc8a1 */
  if (!C.zf) goto L_11acc8a1;
  /* 11acc895 mov dword ptr [0x11af943c], 1 */
  w32((uint32_t)(0x11af943c), (0x1u));
  /* 11acc89f jmp 0x11acc8bf */
  goto L_11acc8bf;
L_11acc8a1:;
  /* 11acc8a1 call dword ptr [0x11afb3c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3c4))), 0x11acc8a7u);
  /* 11acc8a7 mov esi, eax */
  ESI = (EAX);
  /* 11acc8a9 call 0x11ad2200 */
  push32(0x11acc8aeu); f_11ad2200();
  /* 11acc8ae mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 11acc8b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11acc8b2 call 0x11acd100 */
  push32(0x11acc8b7u); f_11acd100();
  /* 11acc8b7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acc8ba jmp 0x11acca18 */
  goto L_11acca18;
L_11acc8bf:;
  /* 11acc8bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acc8c2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11acc8c5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11acc8c8 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acc8cb mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11acc8ce cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc8d2 ja 0x11acc932 */
  if ((!C.cf&&!C.zf)) goto L_11acc932;
  /* 11acc8d4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11acc8d7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11acc8d9 mov dl, byte ptr [eax + 0x11acca3f] */
  DL = (r8((uint32_t)(EAX + 0x11acca3f)));
  /* 11acc8df jmp dword ptr [edx*4 + 0x11acca2b] */
  switch (EDX) {
    case 0: goto L_11acc8e6;
    case 1: goto L_11acc920;
    case 2: goto L_11acc8fa;
    case 3: goto L_11acc90d;
    case 4: goto L_11acc932;
    default: x86_unimpl("switch@0x11acc8df out of table"); return;
  }
L_11acc8e6:;
  /* 11acc8e6 mov ecx, dword ptr [0x11af942c] */
  ECX = (r32((uint32_t)(0x11af942c)));
  /* 11acc8ec mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11acc8ef mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acc8f2 mov dword ptr [0x11af942c], edx */
  w32((uint32_t)(0x11af942c), (EDX));
  /* 11acc8f8 jmp 0x11acc932 */
  goto L_11acc932;
L_11acc8fa:;
  /* 11acc8fa mov eax, dword ptr [0x11af9430] */
  EAX = (r32((uint32_t)(0x11af9430)));
  /* 11acc8ff mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11acc902 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acc905 mov dword ptr [0x11af9430], ecx */
  w32((uint32_t)(0x11af9430), (ECX));
  /* 11acc90b jmp 0x11acc932 */
  goto L_11acc932;
L_11acc90d:;
  /* 11acc90d mov edx, dword ptr [0x11af9434] */
  EDX = (r32((uint32_t)(0x11af9434)));
  /* 11acc913 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11acc916 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acc919 mov dword ptr [0x11af9434], eax */
  w32((uint32_t)(0x11af9434), (EAX));
  /* 11acc91e jmp 0x11acc932 */
  goto L_11acc932;
L_11acc920:;
  /* 11acc920 mov ecx, dword ptr [0x11af9438] */
  ECX = (r32((uint32_t)(0x11af9438)));
  /* 11acc926 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11acc929 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acc92c mov dword ptr [0x11af9438], edx */
  w32((uint32_t)(0x11af9438), (EDX));
L_11acc932:;
  /* 11acc932 push 1 */
  push32((uint32_t)(0x1u));
  /* 11acc934 call 0x11acd100 */
  push32(0x11acc939u); f_11acd100();
  /* 11acc939 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acc93c jmp 0x11acca13 */
  goto L_11acca13;
L_11acc941:;
  /* 11acc941 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc945 je 0x11acc958 */
  if (C.zf) goto L_11acc958;
  /* 11acc947 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc94b je 0x11acc958 */
  if (C.zf) goto L_11acc958;
  /* 11acc94d cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc951 je 0x11acc958 */
  if (C.zf) goto L_11acc958;
  /* 11acc953 jmp 0x11acca18 */
  goto L_11acca18;
L_11acc958:;
  /* 11acc958 call 0x11ac71c0 */
  push32(0x11acc95du); f_11ac71c0();
  /* 11acc95d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11acc960 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acc963 cmp dword ptr [eax + 0x50], 0x11af6cb0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x11af6cb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc96a jne 0x11acc9b5 */
  if (!C.zf) goto L_11acc9b5;
  /* 11acc96c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 11acc971 push 0x11af40e8 */
  push32((uint32_t)(0x11af40e8u));
  /* 11acc976 push 2 */
  push32((uint32_t)(0x2u));
  /* 11acc978 mov ecx, dword ptr [0x11af6d30] */
  ECX = (r32((uint32_t)(0x11af6d30)));
  /* 11acc97e push ecx */
  push32((uint32_t)(ECX));
  /* 11acc97f call 0x11ac9660 */
  push32(0x11acc984u); f_11ac9660();
  /* 11acc984 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acc987 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acc98a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 11acc98d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acc990 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc994 je 0x11acc9b3 */
  if (C.zf) goto L_11acc9b3;
  /* 11acc996 mov ecx, dword ptr [0x11af6d30] */
  ECX = (r32((uint32_t)(0x11af6d30)));
  /* 11acc99c push ecx */
  push32((uint32_t)(ECX));
  /* 11acc99d push 0x11af6cb0 */
  push32((uint32_t)(0x11af6cb0u));
  /* 11acc9a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acc9a5 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 11acc9a8 push eax */
  push32((uint32_t)(EAX));
  /* 11acc9a9 call 0x11ad1e10 */
  push32(0x11acc9aeu); f_11ad1e10();
  /* 11acc9ae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acc9b1 jmp 0x11acc9b5 */
  goto L_11acc9b5;
L_11acc9b3:;
  /* 11acc9b3 jmp 0x11acca18 */
  goto L_11acca18;
L_11acc9b5:;
  /* 11acc9b5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acc9b8 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11acc9bb push edx */
  push32((uint32_t)(EDX));
  /* 11acc9bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acc9bf push eax */
  push32((uint32_t)(EAX));
  /* 11acc9c0 call 0x11accd40 */
  push32(0x11acc9c5u); f_11accd40();
  /* 11acc9c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acc9c8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11acc9cb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc9cf jne 0x11acc9d3 */
  if (!C.zf) goto L_11acc9d3;
  /* 11acc9d1 jmp 0x11acca18 */
  goto L_11acca18;
L_11acc9d3:;
  /* 11acc9d3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acc9d6 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11acc9d9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11acc9dc:;
  /* 11acc9dc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acc9df mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11acc9e2 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acc9e5 jne 0x11acca13 */
  if (!C.zf) goto L_11acca13;
  /* 11acc9e7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acc9ea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acc9ed mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11acc9f0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acc9f3 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acc9f6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11acc9f9 mov edx, dword ptr [0x11af6d34] */
  EDX = (r32((uint32_t)(0x11af6d34)));
  /* 11acc9ff imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11acca02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acca05 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11acca08 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acca0a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acca0d jb 0x11acca11 */
  if (C.cf) goto L_11acca11;
  /* 11acca0f jmp 0x11acca13 */
  goto L_11acca13;
L_11acca11:;
  /* 11acca11 jmp 0x11acc9dc */
  goto L_11acc9dc;
L_11acca13:;
  /* 11acca13 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11acca16 jmp 0x11acca26 */
  goto L_11acca26;
L_11acca18:;
  /* 11acca18 call 0x11ad21f0 */
  push32(0x11acca1du); f_11ad21f0();
  /* 11acca1d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 11acca23 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11acca26:;
  /* 11acca26 pop esi */
  ESI = (pop32());
  /* 11acca27 mov esp, ebp */
  ESP = (EBP);
  /* 11acca29 pop ebp */
  EBP = (pop32());
  /* 11acca2a ret  */
  ESPCHK(0x11acc830u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca60 @ 0x11acca60 (146 bytes, 45 insns) */
void f_11acca60(void) {
  FTRACE(0x11acca60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acca60 push ebp */
  push32((uint32_t)(EBP));
  /* 11acca61 mov ebp, esp */
  EBP = (ESP);
  /* 11acca63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acca66 push 1 */
  push32((uint32_t)(0x1u));
  /* 11acca68 call 0x11acd060 */
  push32(0x11acca6du); f_11acd060();
  /* 11acca6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acca70 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acca74 jne 0x11acca8e */
  if (!C.zf) goto L_11acca8e;
  /* 11acca76 mov dword ptr [ebp - 8], 0x11af942c */
  w32((uint32_t)(EBP + -0x8), (0x11af942cu));
  /* 11acca7d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acca80 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11acca82 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11acca85 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11acca8c jmp 0x11accaa4 */
  goto L_11accaa4;
L_11acca8e:;
  /* 11acca8e mov dword ptr [ebp - 8], 0x11af9430 */
  w32((uint32_t)(EBP + -0x8), (0x11af9430u));
  /* 11acca95 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acca98 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11acca9a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11acca9d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_11accaa4:;
  /* 11accaa4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11accaa8 jne 0x11accab8 */
  if (!C.zf) goto L_11accab8;
  /* 11accaaa push 1 */
  push32((uint32_t)(0x1u));
  /* 11accaac call 0x11acd100 */
  push32(0x11accab1u); f_11acd100();
  /* 11accab1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11accab4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11accab6 jmp 0x11accaec */
  goto L_11accaec;
L_11accab8:;
  /* 11accab8 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11accabc je 0x11accadd */
  if (C.zf) goto L_11accadd;
  /* 11accabe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11accac1 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11accac7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11accac9 call 0x11acd100 */
  push32(0x11accaceu); f_11acd100();
  /* 11accace add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11accad1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11accad4 push edx */
  push32((uint32_t)(EDX));
  /* 11accad5 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x11accad8u);
  /* 11accad8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11accadb jmp 0x11accae7 */
  goto L_11accae7;
L_11accadd:;
  /* 11accadd push 1 */
  push32((uint32_t)(0x1u));
  /* 11accadf call 0x11acd100 */
  push32(0x11accae4u); f_11acd100();
  /* 11accae4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11accae7:;
  /* 11accae7 mov eax, 1 */
  EAX = (0x1u);
L_11accaec:;
  /* 11accaec mov esp, ebp */
  ESP = (EBP);
  /* 11accaee pop ebp */
  EBP = (pop32());
  /* 11accaef ret 4 */
  ESPCHK(0x11acca60u, _esp0);
  ESP += 8; return;
}

/* FUN_1000cb00 @ 0x11accb00 (522 bytes, 162 insns) [1 switch table(s)] */
void f_11accb00(void) {
  FTRACE(0x11accb00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11accb00 push ebp */
  push32((uint32_t)(EBP));
  /* 11accb01 mov ebp, esp */
  EBP = (ESP);
  /* 11accb03 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11accb06 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11accb0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11accb10 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11accb13 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11accb16 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11accb19 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11accb1c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11accb20 ja 0x11accbce */
  if ((!C.cf&&!C.zf)) goto L_11accbce;
  /* 11accb26 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11accb29 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11accb2b mov dl, byte ptr [eax + 0x11accd22] */
  DL = (r8((uint32_t)(EAX + 0x11accd22)));
  /* 11accb31 jmp dword ptr [edx*4 + 0x11accd0a] */
  switch (EDX) {
    case 0: goto L_11accb38;
    case 1: goto L_11accba3;
    case 2: goto L_11accb89;
    case 3: goto L_11accb55;
    case 4: goto L_11accb6f;
    case 5: goto L_11accbce;
    default: x86_unimpl("switch@0x11accb31 out of table"); return;
  }
L_11accb38:;
  /* 11accb38 mov dword ptr [ebp - 0x18], 0x11af942c */
  w32((uint32_t)(EBP + -0x18), (0x11af942cu));
  /* 11accb3f mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11accb42 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11accb44 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11accb47 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11accb4a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11accb4d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11accb50 jmp 0x11accbd6 */
  goto L_11accbd6;
L_11accb55:;
  /* 11accb55 mov dword ptr [ebp - 0x18], 0x11af9430 */
  w32((uint32_t)(EBP + -0x18), (0x11af9430u));
  /* 11accb5c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11accb5f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11accb61 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11accb64 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11accb67 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11accb6a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11accb6d jmp 0x11accbd6 */
  goto L_11accbd6;
L_11accb6f:;
  /* 11accb6f mov dword ptr [ebp - 0x18], 0x11af9434 */
  w32((uint32_t)(EBP + -0x18), (0x11af9434u));
  /* 11accb76 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11accb79 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11accb7b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11accb7e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11accb81 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11accb84 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11accb87 jmp 0x11accbd6 */
  goto L_11accbd6;
L_11accb89:;
  /* 11accb89 mov dword ptr [ebp - 0x18], 0x11af9438 */
  w32((uint32_t)(EBP + -0x18), (0x11af9438u));
  /* 11accb90 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11accb93 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11accb95 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11accb98 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11accb9b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11accb9e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11accba1 jmp 0x11accbd6 */
  goto L_11accbd6;
L_11accba3:;
  /* 11accba3 call 0x11ac71c0 */
  push32(0x11accba8u); f_11ac71c0();
  /* 11accba8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11accbab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11accbae mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11accbb1 push edx */
  push32((uint32_t)(EDX));
  /* 11accbb2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11accbb5 push eax */
  push32((uint32_t)(EAX));
  /* 11accbb6 call 0x11accd40 */
  push32(0x11accbbbu); f_11accd40();
  /* 11accbbb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11accbbe add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11accbc1 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11accbc4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11accbc7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11accbc9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11accbcc jmp 0x11accbd6 */
  goto L_11accbd6;
L_11accbce:;
  /* 11accbce or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11accbd1 jmp 0x11accd06 */
  goto L_11accd06;
L_11accbd6:;
  /* 11accbd6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11accbda je 0x11accbe6 */
  if (C.zf) goto L_11accbe6;
  /* 11accbdc push 1 */
  push32((uint32_t)(0x1u));
  /* 11accbde call 0x11acd060 */
  push32(0x11accbe3u); f_11acd060();
  /* 11accbe3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11accbe6:;
  /* 11accbe6 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11accbea jne 0x11accc03 */
  if (!C.zf) goto L_11accc03;
  /* 11accbec cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11accbf0 je 0x11accbfc */
  if (C.zf) goto L_11accbfc;
  /* 11accbf2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11accbf4 call 0x11acd100 */
  push32(0x11accbf9u); f_11acd100();
  /* 11accbf9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11accbfc:;
  /* 11accbfc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11accbfe jmp 0x11accd06 */
  goto L_11accd06;
L_11accc03:;
  /* 11accc03 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11accc07 jne 0x11accc20 */
  if (!C.zf) goto L_11accc20;
  /* 11accc09 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11accc0d je 0x11accc19 */
  if (C.zf) goto L_11accc19;
  /* 11accc0f push 1 */
  push32((uint32_t)(0x1u));
  /* 11accc11 call 0x11acd100 */
  push32(0x11accc16u); f_11acd100();
  /* 11accc16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11accc19:;
  /* 11accc19 push 3 */
  push32((uint32_t)(0x3u));
  /* 11accc1b call 0x11ac90d0 */
  push32(0x11accc20u); f_11ac90d0();
L_11accc20:;
  /* 11accc20 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11accc24 je 0x11accc32 */
  if (C.zf) goto L_11accc32;
  /* 11accc26 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11accc2a je 0x11accc32 */
  if (C.zf) goto L_11accc32;
  /* 11accc2c cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11accc30 jne 0x11accc5e */
  if (!C.zf) goto L_11accc5e;
L_11accc32:;
  /* 11accc32 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11accc35 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 11accc38 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11accc3b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11accc3e mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 11accc45 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11accc49 jne 0x11accc5e */
  if (!C.zf) goto L_11accc5e;
  /* 11accc4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11accc4e mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 11accc51 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11accc54 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11accc57 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_11accc5e:;
  /* 11accc5e cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11accc62 jne 0x11accca0 */
  if (!C.zf) goto L_11accca0;
  /* 11accc64 mov eax, dword ptr [0x11af6d28] */
  EAX = (r32((uint32_t)(0x11af6d28)));
  /* 11accc69 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11accc6c jmp 0x11accc77 */
  goto L_11accc77;
L_11accc6e:;
  /* 11accc6e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11accc71 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11accc74 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11accc77:;
  /* 11accc77 mov edx, dword ptr [0x11af6d28] */
  EDX = (r32((uint32_t)(0x11af6d28)));
  /* 11accc7d add edx, dword ptr [0x11af6d2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11af6d2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11accc83 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11accc86 jge 0x11accc9e */
  if ((C.sf==C.of)) goto L_11accc9e;
  /* 11accc88 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11accc8b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11accc8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11accc91 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11accc94 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 11accc9c jmp 0x11accc6e */
  goto L_11accc6e;
L_11accc9e:;
  /* 11accc9e jmp 0x11accca9 */
  goto L_11accca9;
L_11accca0:;
  /* 11accca0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11accca3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11accca9:;
  /* 11accca9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acccad je 0x11acccb9 */
  if (C.zf) goto L_11acccb9;
  /* 11acccaf push 1 */
  push32((uint32_t)(0x1u));
  /* 11acccb1 call 0x11acd100 */
  push32(0x11acccb6u); f_11acd100();
  /* 11acccb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11acccb9:;
  /* 11acccb9 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acccbd jne 0x11acccd0 */
  if (!C.zf) goto L_11acccd0;
  /* 11acccbf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acccc2 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 11acccc5 push edx */
  push32((uint32_t)(EDX));
  /* 11acccc6 push 8 */
  push32((uint32_t)(0x8u));
  /* 11acccc8 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x11accccbu);
  /* 11accccb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acccce jmp 0x11acccda */
  goto L_11acccda;
L_11acccd0:;
  /* 11acccd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acccd3 push eax */
  push32((uint32_t)(EAX));
  /* 11acccd4 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x11acccd7u);
  /* 11acccd7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11acccda:;
  /* 11acccda cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acccde je 0x11acccec */
  if (C.zf) goto L_11acccec;
  /* 11accce0 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11accce4 je 0x11acccec */
  if (C.zf) goto L_11acccec;
  /* 11accce6 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acccea jne 0x11accd04 */
  if (!C.zf) goto L_11accd04;
L_11acccec:;
  /* 11acccec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acccef mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11acccf2 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 11acccf5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acccf9 jne 0x11accd04 */
  if (!C.zf) goto L_11accd04;
  /* 11acccfb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acccfe mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11accd01 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_11accd04:;
  /* 11accd04 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11accd06:;
  /* 11accd06 mov esp, ebp */
  ESP = (EBP);
  /* 11accd08 pop ebp */
  EBP = (pop32());
  /* 11accd09 ret  */
  ESPCHK(0x11accb00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd40 @ 0x11accd40 (91 bytes, 35 insns) */
void f_11accd40(void) {
  FTRACE(0x11accd40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11accd40 push ebp */
  push32((uint32_t)(EBP));
  /* 11accd41 mov ebp, esp */
  EBP = (ESP);
  /* 11accd43 push ecx */
  push32((uint32_t)(ECX));
  /* 11accd44 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11accd47 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11accd4a:;
  /* 11accd4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11accd4d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11accd50 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11accd53 je 0x11accd73 */
  if (C.zf) goto L_11accd73;
  /* 11accd55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11accd58 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11accd5b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11accd5e mov ecx, dword ptr [0x11af6d34] */
  ECX = (r32((uint32_t)(0x11af6d34)));
  /* 11accd64 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11accd67 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11accd6a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11accd6c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11accd6f jae 0x11accd73 */
  if (!C.cf) goto L_11accd73;
  /* 11accd71 jmp 0x11accd4a */
  goto L_11accd4a;
L_11accd73:;
  /* 11accd73 mov eax, dword ptr [0x11af6d34] */
  EAX = (r32((uint32_t)(0x11af6d34)));
  /* 11accd78 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11accd7b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11accd7e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11accd80 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11accd83 jae 0x11accd95 */
  if (!C.cf) goto L_11accd95;
  /* 11accd85 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11accd88 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11accd8b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11accd8e jne 0x11accd95 */
  if (!C.zf) goto L_11accd95;
  /* 11accd90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11accd93 jmp 0x11accd97 */
  goto L_11accd97;
L_11accd95:;
  /* 11accd95 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11accd97:;
  /* 11accd97 mov esp, ebp */
  ESP = (EBP);
  /* 11accd99 pop ebp */
  EBP = (pop32());
  /* 11accd9a ret  */
  ESPCHK(0x11accd40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cda0 @ 0x11accda0 (13 bytes, 6 insns) */
void f_11accda0(void) {
  FTRACE(0x11accda0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11accda0 push ebp */
  push32((uint32_t)(EBP));
  /* 11accda1 mov ebp, esp */
  EBP = (ESP);
  /* 11accda3 call 0x11ac71c0 */
  push32(0x11accda8u); f_11ac71c0();
  /* 11accda8 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11accdab pop ebp */
  EBP = (pop32());
  /* 11accdac ret  */
  ESPCHK(0x11accda0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cdb0 @ 0x11accdb0 (13 bytes, 6 insns) */
void f_11accdb0(void) {
  FTRACE(0x11accdb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11accdb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11accdb1 mov ebp, esp */
  EBP = (ESP);
  /* 11accdb3 call 0x11ac71c0 */
  push32(0x11accdb8u); f_11ac71c0();
  /* 11accdb8 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11accdbb pop ebp */
  EBP = (pop32());
  /* 11accdbc ret  */
  ESPCHK(0x11accdb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cdc0 @ 0x11accdc0 (187 bytes, 54 insns) */
void f_11accdc0(void) {
  FTRACE(0x11accdc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11accdc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11accdc1 mov ebp, esp */
  EBP = (ESP);
  /* 11accdc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11accdc6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11accdcd cmp dword ptr [0x11af9440], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af9440))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11accdd4 jne 0x11acce33 */
  if (!C.zf) goto L_11acce33;
  /* 11accdd6 push 0x11af33d4 */
  push32((uint32_t)(0x11af33d4u));
  /* 11accddb call dword ptr [0x11afb3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3a0))), 0x11accde1u);
  /* 11accde1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11accde4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11accde8 je 0x11acce07 */
  if (C.zf) goto L_11acce07;
  /* 11accdea push 0x11af4118 */
  push32((uint32_t)(0x11af4118u));
  /* 11accdef mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11accdf2 push eax */
  push32((uint32_t)(EAX));
  /* 11accdf3 call dword ptr [0x11afb39c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb39c))), 0x11accdf9u);
  /* 11accdf9 mov dword ptr [0x11af9440], eax */
  w32((uint32_t)(0x11af9440), (EAX));
  /* 11accdfe cmp dword ptr [0x11af9440], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af9440))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acce05 jne 0x11acce0b */
  if (!C.zf) goto L_11acce0b;
L_11acce07:;
  /* 11acce07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11acce09 jmp 0x11acce77 */
  goto L_11acce77;
L_11acce0b:;
  /* 11acce0b push 0x11af4108 */
  push32((uint32_t)(0x11af4108u));
  /* 11acce10 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acce13 push ecx */
  push32((uint32_t)(ECX));
  /* 11acce14 call dword ptr [0x11afb39c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb39c))), 0x11acce1au);
  /* 11acce1a mov dword ptr [0x11af9444], eax */
  w32((uint32_t)(0x11af9444), (EAX));
  /* 11acce1f push 0x11af40f4 */
  push32((uint32_t)(0x11af40f4u));
  /* 11acce24 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acce27 push edx */
  push32((uint32_t)(EDX));
  /* 11acce28 call dword ptr [0x11afb39c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb39c))), 0x11acce2eu);
  /* 11acce2e mov dword ptr [0x11af9448], eax */
  w32((uint32_t)(0x11af9448), (EAX));
L_11acce33:;
  /* 11acce33 cmp dword ptr [0x11af9444], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af9444))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acce3a je 0x11acce45 */
  if (C.zf) goto L_11acce45;
  /* 11acce3c call dword ptr [0x11af9444] */
  call_ind((uint32_t)(r32((uint32_t)(0x11af9444))), 0x11acce42u);
  /* 11acce42 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11acce45:;
  /* 11acce45 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acce49 je 0x11acce61 */
  if (C.zf) goto L_11acce61;
  /* 11acce4b cmp dword ptr [0x11af9448], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af9448))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acce52 je 0x11acce61 */
  if (C.zf) goto L_11acce61;
  /* 11acce54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acce57 push eax */
  push32((uint32_t)(EAX));
  /* 11acce58 call dword ptr [0x11af9448] */
  call_ind((uint32_t)(r32((uint32_t)(0x11af9448))), 0x11acce5eu);
  /* 11acce5e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11acce61:;
  /* 11acce61 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11acce64 push ecx */
  push32((uint32_t)(ECX));
  /* 11acce65 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acce68 push edx */
  push32((uint32_t)(EDX));
  /* 11acce69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acce6c push eax */
  push32((uint32_t)(EAX));
  /* 11acce6d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acce70 push ecx */
  push32((uint32_t)(ECX));
  /* 11acce71 call dword ptr [0x11af9440] */
  call_ind((uint32_t)(r32((uint32_t)(0x11af9440))), 0x11acce77u);
L_11acce77:;
  /* 11acce77 mov esp, ebp */
  ESP = (EBP);
  /* 11acce79 pop ebp */
  EBP = (pop32());
  /* 11acce7a ret  */
  ESPCHK(0x11accdc0u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x11acce80 (254 bytes, 109 insns) */
void f_11acce80(void) {
  FTRACE(0x11acce80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acce80 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11acce84 push edi */
  push32((uint32_t)(EDI));
  /* 11acce85 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11acce87 je 0x11accf03 */
  if (C.zf) goto L_11accf03;
  /* 11acce89 push esi */
  push32((uint32_t)(ESI));
  /* 11acce8a push ebx */
  push32((uint32_t)(EBX));
  /* 11acce8b mov ebx, ecx */
  EBX = (ECX);
  /* 11acce8d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11acce91 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11acce97 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11acce9b jne 0x11accea4 */
  if (!C.zf) goto L_11accea4;
  /* 11acce9d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11accea0 jne 0x11accf11 */
  if (!C.zf) goto L_11accf11;
  /* 11accea2 jmp 0x11accec5 */
  goto L_11accec5;
L_11accea4:;
  /* 11accea4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11accea6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11accea7 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11accea9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11acceaa dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11acceab je 0x11acced2 */
  if (C.zf) goto L_11acced2;
  /* 11accead test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11acceaf je 0x11acceda */
  if (C.zf) goto L_11acceda;
  /* 11acceb1 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11acceb7 jne 0x11accea4 */
  if (!C.zf) goto L_11accea4;
  /* 11acceb9 mov ebx, ecx */
  EBX = (ECX);
  /* 11accebb shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11accebe jne 0x11accf11 */
  if (!C.zf) goto L_11accf11;
L_11accec0:;
  /* 11accec0 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11accec3 je 0x11acced2 */
  if (C.zf) goto L_11acced2;
L_11accec5:;
  /* 11accec5 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11accec7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11accec8 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11acceca inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11accecb test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11accecd je 0x11accefe */
  if (C.zf) goto L_11accefe;
  /* 11accecf dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11acced0 jne 0x11accec5 */
  if (!C.zf) goto L_11accec5;
L_11acced2:;
  /* 11acced2 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11acced6 pop ebx */
  EBX = (pop32());
  /* 11acced7 pop esi */
  ESI = (pop32());
  /* 11acced8 pop edi */
  EDI = (pop32());
  /* 11acced9 ret  */
  ESPCHK(0x11acce80u, _esp0);
  ESP += 4; return;
L_11acceda:;
  /* 11acceda test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11accee0 je 0x11accef4 */
  if (C.zf) goto L_11accef4;
L_11accee2:;
  /* 11accee2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11accee4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11accee5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11accee6 je 0x11accf76 */
  if (C.zf) goto L_11accf76;
  /* 11acceec test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11accef2 jne 0x11accee2 */
  if (!C.zf) goto L_11accee2;
L_11accef4:;
  /* 11accef4 mov ebx, ecx */
  EBX = (ECX);
  /* 11accef6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11accef9 jne 0x11accf67 */
  if (!C.zf) goto L_11accf67;
L_11accefb:;
  /* 11accefb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11accefd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11accefe:;
  /* 11accefe dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11acceff jne 0x11accefb */
  if (!C.zf) goto L_11accefb;
  /* 11accf01 pop ebx */
  EBX = (pop32());
  /* 11accf02 pop esi */
  ESI = (pop32());
L_11accf03:;
  /* 11accf03 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11accf07 pop edi */
  EDI = (pop32());
  /* 11accf08 ret  */
  ESPCHK(0x11acce80u, _esp0);
  ESP += 4; return;
L_11accf09:;
  /* 11accf09 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11accf0b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11accf0e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11accf0f je 0x11accec0 */
  if (C.zf) goto L_11accec0;
L_11accf11:;
  /* 11accf11 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11accf16 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11accf18 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11accf1a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11accf1d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11accf1f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11accf21 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11accf24 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11accf29 je 0x11accf09 */
  if (C.zf) goto L_11accf09;
  /* 11accf2b test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11accf2d je 0x11accf5b */
  if (C.zf) goto L_11accf5b;
  /* 11accf2f test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11accf31 je 0x11accf51 */
  if (C.zf) goto L_11accf51;
  /* 11accf33 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11accf39 je 0x11accf47 */
  if (C.zf) goto L_11accf47;
  /* 11accf3b test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11accf41 jne 0x11accf09 */
  if (!C.zf) goto L_11accf09;
  /* 11accf43 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11accf45 jmp 0x11accf5f */
  goto L_11accf5f;
L_11accf47:;
  /* 11accf47 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11accf4d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11accf4f jmp 0x11accf5f */
  goto L_11accf5f;
L_11accf51:;
  /* 11accf51 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11accf57 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11accf59 jmp 0x11accf5f */
  goto L_11accf5f;
L_11accf5b:;
  /* 11accf5b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11accf5d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11accf5f:;
  /* 11accf5f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11accf62 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11accf64 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11accf65 je 0x11accf71 */
  if (C.zf) goto L_11accf71;
L_11accf67:;
  /* 11accf67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11accf69:;
  /* 11accf69 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11accf6b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11accf6e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11accf6f jne 0x11accf69 */
  if (!C.zf) goto L_11accf69;
L_11accf71:;
  /* 11accf71 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11accf74 jne 0x11accefb */
  if (!C.zf) goto L_11accefb;
L_11accf76:;
  /* 11accf76 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11accf7a pop ebx */
  EBX = (pop32());
  /* 11accf7b pop esi */
  ESI = (pop32());
  /* 11accf7c pop edi */
  EDI = (pop32());
  /* 11accf7d ret  */
  ESPCHK(0x11acce80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf80 @ 0x11accf80 (55 bytes, 16 insns) */
void f_11accf80(void) {
  FTRACE(0x11accf80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11accf80 push ebp */
  push32((uint32_t)(EBP));
  /* 11accf81 mov ebp, esp */
  EBP = (ESP);
  /* 11accf83 mov eax, dword ptr [0x11af6c34] */
  EAX = (r32((uint32_t)(0x11af6c34)));
  /* 11accf88 push eax */
  push32((uint32_t)(EAX));
  /* 11accf89 call dword ptr [0x11afb354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb354))), 0x11accf8fu);
  /* 11accf8f mov ecx, dword ptr [0x11af6c24] */
  ECX = (r32((uint32_t)(0x11af6c24)));
  /* 11accf95 push ecx */
  push32((uint32_t)(ECX));
  /* 11accf96 call dword ptr [0x11afb354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb354))), 0x11accf9cu);
  /* 11accf9c mov edx, dword ptr [0x11af6c14] */
  EDX = (r32((uint32_t)(0x11af6c14)));
  /* 11accfa2 push edx */
  push32((uint32_t)(EDX));
  /* 11accfa3 call dword ptr [0x11afb354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb354))), 0x11accfa9u);
  /* 11accfa9 mov eax, dword ptr [0x11af6bf4] */
  EAX = (r32((uint32_t)(0x11af6bf4)));
  /* 11accfae push eax */
  push32((uint32_t)(EAX));
  /* 11accfaf call dword ptr [0x11afb354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb354))), 0x11accfb5u);
  /* 11accfb5 pop ebp */
  EBP = (pop32());
  /* 11accfb6 ret  */
  ESPCHK(0x11accf80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cfc0 @ 0x11accfc0 (159 bytes, 47 insns) */
void f_11accfc0(void) {
  FTRACE(0x11accfc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11accfc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11accfc1 mov ebp, esp */
  EBP = (ESP);
  /* 11accfc3 push ecx */
  push32((uint32_t)(ECX));
  /* 11accfc4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11accfcb jmp 0x11accfd6 */
  goto L_11accfd6;
L_11accfcd:;
  /* 11accfcd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11accfd0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11accfd3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11accfd6:;
  /* 11accfd6 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11accfda jge 0x11acd029 */
  if ((C.sf==C.of)) goto L_11acd029;
  /* 11accfdc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11accfdf cmp dword ptr [ecx*4 + 0x11af6bf0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11af6bf0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11accfe7 je 0x11acd027 */
  if (C.zf) goto L_11acd027;
  /* 11accfe9 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11accfed je 0x11acd027 */
  if (C.zf) goto L_11acd027;
  /* 11accfef cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11accff3 je 0x11acd027 */
  if (C.zf) goto L_11acd027;
  /* 11accff5 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11accff9 je 0x11acd027 */
  if (C.zf) goto L_11acd027;
  /* 11accffb cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11accfff je 0x11acd027 */
  if (C.zf) goto L_11acd027;
  /* 11acd001 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acd004 mov eax, dword ptr [edx*4 + 0x11af6bf0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11af6bf0)));
  /* 11acd00b push eax */
  push32((uint32_t)(EAX));
  /* 11acd00c call dword ptr [0x11afb3e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3e4))), 0x11acd012u);
  /* 11acd012 push 2 */
  push32((uint32_t)(0x2u));
  /* 11acd014 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acd017 mov edx, dword ptr [ecx*4 + 0x11af6bf0] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11af6bf0)));
  /* 11acd01e push edx */
  push32((uint32_t)(EDX));
  /* 11acd01f call 0x11aca0f0 */
  push32(0x11acd024u); f_11aca0f0();
  /* 11acd024 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11acd027:;
  /* 11acd027 jmp 0x11accfcd */
  goto L_11accfcd;
L_11acd029:;
  /* 11acd029 mov eax, dword ptr [0x11af6c14] */
  EAX = (r32((uint32_t)(0x11af6c14)));
  /* 11acd02e push eax */
  push32((uint32_t)(EAX));
  /* 11acd02f call dword ptr [0x11afb3e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3e4))), 0x11acd035u);
  /* 11acd035 mov ecx, dword ptr [0x11af6c24] */
  ECX = (r32((uint32_t)(0x11af6c24)));
  /* 11acd03b push ecx */
  push32((uint32_t)(ECX));
  /* 11acd03c call dword ptr [0x11afb3e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3e4))), 0x11acd042u);
  /* 11acd042 mov edx, dword ptr [0x11af6c34] */
  EDX = (r32((uint32_t)(0x11af6c34)));
  /* 11acd048 push edx */
  push32((uint32_t)(EDX));
  /* 11acd049 call dword ptr [0x11afb3e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3e4))), 0x11acd04fu);
  /* 11acd04f mov eax, dword ptr [0x11af6bf4] */
  EAX = (r32((uint32_t)(0x11af6bf4)));
  /* 11acd054 push eax */
  push32((uint32_t)(EAX));
  /* 11acd055 call dword ptr [0x11afb3e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3e4))), 0x11acd05bu);
  /* 11acd05b mov esp, ebp */
  ESP = (EBP);
  /* 11acd05d pop ebp */
  EBP = (pop32());
  /* 11acd05e ret  */
  ESPCHK(0x11accfc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d060 @ 0x11acd060 (151 bytes, 46 insns) */
void f_11acd060(void) {
  FTRACE(0x11acd060u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acd060 push ebp */
  push32((uint32_t)(EBP));
  /* 11acd061 mov ebp, esp */
  EBP = (ESP);
  /* 11acd063 push ecx */
  push32((uint32_t)(ECX));
  /* 11acd064 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acd067 cmp dword ptr [eax*4 + 0x11af6bf0], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11af6bf0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acd06f jne 0x11acd0e2 */
  if (!C.zf) goto L_11acd0e2;
  /* 11acd071 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 11acd076 push 0x11af4124 */
  push32((uint32_t)(0x11af4124u));
  /* 11acd07b push 2 */
  push32((uint32_t)(0x2u));
  /* 11acd07d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11acd07f call 0x11ac9660 */
  push32(0x11acd084u); f_11ac9660();
  /* 11acd084 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acd087 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11acd08a cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acd08e jne 0x11acd09a */
  if (!C.zf) goto L_11acd09a;
  /* 11acd090 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11acd092 call 0x11ac68f0 */
  push32(0x11acd097u); f_11ac68f0();
  /* 11acd097 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11acd09a:;
  /* 11acd09a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11acd09c call 0x11acd060 */
  push32(0x11acd0a1u); f_11acd060();
  /* 11acd0a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acd0a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acd0a7 cmp dword ptr [ecx*4 + 0x11af6bf0], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11af6bf0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acd0af jne 0x11acd0ca */
  if (!C.zf) goto L_11acd0ca;
  /* 11acd0b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acd0b4 push edx */
  push32((uint32_t)(EDX));
  /* 11acd0b5 call dword ptr [0x11afb354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb354))), 0x11acd0bbu);
  /* 11acd0bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acd0be mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acd0c1 mov dword ptr [eax*4 + 0x11af6bf0], ecx */
  w32((uint32_t)(EAX*4 + 0x11af6bf0), (ECX));
  /* 11acd0c8 jmp 0x11acd0d8 */
  goto L_11acd0d8;
L_11acd0ca:;
  /* 11acd0ca push 2 */
  push32((uint32_t)(0x2u));
  /* 11acd0cc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acd0cf push edx */
  push32((uint32_t)(EDX));
  /* 11acd0d0 call 0x11aca0f0 */
  push32(0x11acd0d5u); f_11aca0f0();
  /* 11acd0d5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11acd0d8:;
  /* 11acd0d8 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11acd0da call 0x11acd100 */
  push32(0x11acd0dfu); f_11acd100();
  /* 11acd0df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11acd0e2:;
  /* 11acd0e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acd0e5 mov ecx, dword ptr [eax*4 + 0x11af6bf0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11af6bf0)));
  /* 11acd0ec push ecx */
  push32((uint32_t)(ECX));
  /* 11acd0ed call dword ptr [0x11afb35c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb35c))), 0x11acd0f3u);
  /* 11acd0f3 mov esp, ebp */
  ESP = (EBP);
  /* 11acd0f5 pop ebp */
  EBP = (pop32());
  /* 11acd0f6 ret  */
  ESPCHK(0x11acd060u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d100 @ 0x11acd100 (22 bytes, 8 insns) */
void f_11acd100(void) {
  FTRACE(0x11acd100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acd100 push ebp */
  push32((uint32_t)(EBP));
  /* 11acd101 mov ebp, esp */
  EBP = (ESP);
  /* 11acd103 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acd106 mov ecx, dword ptr [eax*4 + 0x11af6bf0] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11af6bf0)));
  /* 11acd10d push ecx */
  push32((uint32_t)(ECX));
  /* 11acd10e call dword ptr [0x11afb34c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb34c))), 0x11acd114u);
  /* 11acd114 pop ebp */
  EBP = (pop32());
  /* 11acd115 ret  */
  ESPCHK(0x11acd100u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d120 @ 0x11acd120 (26 bytes, 10 insns) */
void f_11acd120(void) {
  FTRACE(0x11acd120u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acd120 push ebp */
  push32((uint32_t)(EBP));
  /* 11acd121 mov ebp, esp */
  EBP = (ESP);
  /* 11acd123 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acd126 push eax */
  push32((uint32_t)(EAX));
  /* 11acd127 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acd129 call dword ptr [0x11afb348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb348))), 0x11acd12fu);
  /* 11acd12f push 0xff */
  push32((uint32_t)(0xffu));
  /* 11acd134 call dword ptr [0x11afb3d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3d0))), 0x11acd13au);
  /* 11acd13a pop ebp */
  EBP = (pop32());
  /* 11acd13b ret  */
  ESPCHK(0x11acd120u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x11acd140 (446 bytes, 130 insns) */
void f_11acd140(void) {
  FTRACE(0x11acd140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acd140 push ebp */
  push32((uint32_t)(EBP));
  /* 11acd141 mov ebp, esp */
  EBP = (ESP);
  /* 11acd143 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acd146 call 0x11ac71c0 */
  push32(0x11acd14bu); f_11ac71c0();
  /* 11acd14b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11acd14e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acd151 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11acd154 push ecx */
  push32((uint32_t)(ECX));
  /* 11acd155 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acd158 push edx */
  push32((uint32_t)(EDX));
  /* 11acd159 call 0x11acd300 */
  push32(0x11acd15eu); f_11acd300();
  /* 11acd15e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acd161 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11acd164 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acd168 je 0x11acd173 */
  if (C.zf) goto L_11acd173;
  /* 11acd16a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11acd16d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acd171 jne 0x11acd182 */
  if (!C.zf) goto L_11acd182;
L_11acd173:;
  /* 11acd173 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acd176 push ecx */
  push32((uint32_t)(ECX));
  /* 11acd177 call dword ptr [0x11afb350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb350))), 0x11acd17du);
  /* 11acd17d jmp 0x11acd2fa */
  goto L_11acd2fa;
L_11acd182:;
  /* 11acd182 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11acd185 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acd189 jne 0x11acd19f */
  if (!C.zf) goto L_11acd19f;
  /* 11acd18b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11acd18e mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11acd195 mov eax, 1 */
  EAX = (0x1u);
  /* 11acd19a jmp 0x11acd2fa */
  goto L_11acd2fa;
L_11acd19f:;
  /* 11acd19f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11acd1a2 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acd1a6 jne 0x11acd1b0 */
  if (!C.zf) goto L_11acd1b0;
  /* 11acd1a8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11acd1ab jmp 0x11acd2fa */
  goto L_11acd2fa;
L_11acd1b0:;
  /* 11acd1b0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11acd1b3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11acd1b6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11acd1b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acd1bc mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 11acd1bf mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11acd1c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acd1c5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acd1c8 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 11acd1cb mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11acd1ce cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acd1d2 jne 0x11acd2d7 */
  if (!C.zf) goto L_11acd2d7;
  /* 11acd1d8 mov eax, dword ptr [0x11af6d28] */
  EAX = (r32((uint32_t)(0x11af6d28)));
  /* 11acd1dd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11acd1e0 jmp 0x11acd1eb */
  goto L_11acd1eb;
L_11acd1e2:;
  /* 11acd1e2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11acd1e5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acd1e8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11acd1eb:;
  /* 11acd1eb mov edx, dword ptr [0x11af6d28] */
  EDX = (r32((uint32_t)(0x11af6d28)));
  /* 11acd1f1 add edx, dword ptr [0x11af6d2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11af6d2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acd1f7 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acd1fa jge 0x11acd212 */
  if ((C.sf==C.of)) goto L_11acd212;
  /* 11acd1fc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11acd1ff imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11acd202 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acd205 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11acd208 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 11acd210 jmp 0x11acd1e2 */
  goto L_11acd1e2;
L_11acd212:;
  /* 11acd212 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acd215 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 11acd218 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11acd21b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11acd21e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acd224 jne 0x11acd235 */
  if (!C.zf) goto L_11acd235;
  /* 11acd226 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acd229 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 11acd230 jmp 0x11acd2bd */
  goto L_11acd2bd;
L_11acd235:;
  /* 11acd235 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11acd238 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acd23e jne 0x11acd24c */
  if (!C.zf) goto L_11acd24c;
  /* 11acd240 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acd243 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 11acd24a jmp 0x11acd2bd */
  goto L_11acd2bd;
L_11acd24c:;
  /* 11acd24c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11acd24f cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acd255 jne 0x11acd263 */
  if (!C.zf) goto L_11acd263;
  /* 11acd257 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acd25a mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 11acd261 jmp 0x11acd2bd */
  goto L_11acd2bd;
L_11acd263:;
  /* 11acd263 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11acd266 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acd26c jne 0x11acd27a */
  if (!C.zf) goto L_11acd27a;
  /* 11acd26e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acd271 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 11acd278 jmp 0x11acd2bd */
  goto L_11acd2bd;
L_11acd27a:;
  /* 11acd27a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11acd27d cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acd283 jne 0x11acd291 */
  if (!C.zf) goto L_11acd291;
  /* 11acd285 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acd288 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 11acd28f jmp 0x11acd2bd */
  goto L_11acd2bd;
L_11acd291:;
  /* 11acd291 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11acd294 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acd29a jne 0x11acd2a8 */
  if (!C.zf) goto L_11acd2a8;
  /* 11acd29c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acd29f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 11acd2a6 jmp 0x11acd2bd */
  goto L_11acd2bd;
L_11acd2a8:;
  /* 11acd2a8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11acd2ab cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acd2b1 jne 0x11acd2bd */
  if (!C.zf) goto L_11acd2bd;
  /* 11acd2b3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acd2b6 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_11acd2bd:;
  /* 11acd2bd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acd2c0 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 11acd2c3 push edx */
  push32((uint32_t)(EDX));
  /* 11acd2c4 push 8 */
  push32((uint32_t)(0x8u));
  /* 11acd2c6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11acd2c9u);
  /* 11acd2c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acd2cc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acd2cf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11acd2d2 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 11acd2d5 jmp 0x11acd2ee */
  goto L_11acd2ee;
L_11acd2d7:;
  /* 11acd2d7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11acd2da mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11acd2e1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11acd2e4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11acd2e7 push ecx */
  push32((uint32_t)(ECX));
  /* 11acd2e8 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11acd2ebu);
  /* 11acd2eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11acd2ee:;
  /* 11acd2ee mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acd2f1 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11acd2f4 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 11acd2f7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11acd2fa:;
  /* 11acd2fa mov esp, ebp */
  ESP = (EBP);
  /* 11acd2fc pop ebp */
  EBP = (pop32());
  /* 11acd2fd ret  */
  ESPCHK(0x11acd140u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d300 @ 0x11acd300 (89 bytes, 35 insns) */
void f_11acd300(void) {
  FTRACE(0x11acd300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acd300 push ebp */
  push32((uint32_t)(EBP));
  /* 11acd301 mov ebp, esp */
  EBP = (ESP);
  /* 11acd303 push ecx */
  push32((uint32_t)(ECX));
  /* 11acd304 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acd307 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11acd30a:;
  /* 11acd30a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acd30d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11acd30f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acd312 je 0x11acd332 */
  if (C.zf) goto L_11acd332;
  /* 11acd314 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acd317 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acd31a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11acd31d mov ecx, dword ptr [0x11af6d34] */
  ECX = (r32((uint32_t)(0x11af6d34)));
  /* 11acd323 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11acd326 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acd329 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acd32b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acd32e jae 0x11acd332 */
  if (!C.cf) goto L_11acd332;
  /* 11acd330 jmp 0x11acd30a */
  goto L_11acd30a;
L_11acd332:;
  /* 11acd332 mov eax, dword ptr [0x11af6d34] */
  EAX = (r32((uint32_t)(0x11af6d34)));
  /* 11acd337 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11acd33a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acd33d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acd33f cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acd342 jae 0x11acd34e */
  if (!C.cf) goto L_11acd34e;
  /* 11acd344 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acd347 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11acd349 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acd34c je 0x11acd352 */
  if (C.zf) goto L_11acd352;
L_11acd34e:;
  /* 11acd34e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11acd350 jmp 0x11acd355 */
  goto L_11acd355;
L_11acd352:;
  /* 11acd352 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11acd355:;
  /* 11acd355 mov esp, ebp */
  ESP = (EBP);
  /* 11acd357 pop ebp */
  EBP = (pop32());
  /* 11acd358 ret  */
  ESPCHK(0x11acd300u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d360 @ 0x11acd360 (130 bytes, 43 insns) */
void f_11acd360(void) {
  FTRACE(0x11acd360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acd360 push ebp */
  push32((uint32_t)(EBP));
  /* 11acd361 mov ebp, esp */
  EBP = (ESP);
  /* 11acd363 push ecx */
  push32((uint32_t)(ECX));
  /* 11acd364 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acd367 cmp eax, dword ptr [0x11afadbc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11afadbc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acd36d jae 0x11acd391 */
  if (!C.cf) goto L_11acd391;
  /* 11acd36f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acd372 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11acd375 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acd378 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11acd37b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11acd37e mov eax, dword ptr [ecx*4 + 0x11afac80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11afac80)));
  /* 11acd385 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11acd38a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11acd38d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11acd38f jne 0x11acd3ac */
  if (!C.zf) goto L_11acd3ac;
L_11acd391:;
  /* 11acd391 call 0x11ad21f0 */
  push32(0x11acd396u); f_11ad21f0();
  /* 11acd396 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11acd39c call 0x11ad2200 */
  push32(0x11acd3a1u); f_11ad2200();
  /* 11acd3a1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11acd3a7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11acd3aa jmp 0x11acd3de */
  goto L_11acd3de;
L_11acd3ac:;
  /* 11acd3ac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acd3af push edx */
  push32((uint32_t)(EDX));
  /* 11acd3b0 call 0x11ad2720 */
  push32(0x11acd3b5u); f_11ad2720();
  /* 11acd3b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acd3b8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11acd3bb push eax */
  push32((uint32_t)(EAX));
  /* 11acd3bc mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acd3bf push ecx */
  push32((uint32_t)(ECX));
  /* 11acd3c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acd3c3 push edx */
  push32((uint32_t)(EDX));
  /* 11acd3c4 call 0x11acd3f0 */
  push32(0x11acd3c9u); f_11acd3f0();
  /* 11acd3c9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acd3cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11acd3cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acd3d2 push eax */
  push32((uint32_t)(EAX));
  /* 11acd3d3 call 0x11ad27b0 */
  push32(0x11acd3d8u); f_11ad27b0();
  /* 11acd3d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acd3db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11acd3de:;
  /* 11acd3de mov esp, ebp */
  ESP = (EBP);
  /* 11acd3e0 pop ebp */
  EBP = (pop32());
  /* 11acd3e1 ret  */
  ESPCHK(0x11acd360u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3f0 @ 0x11acd3f0 (178 bytes, 56 insns) */
void f_11acd3f0(void) {
  FTRACE(0x11acd3f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acd3f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11acd3f1 mov ebp, esp */
  EBP = (ESP);
  /* 11acd3f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acd3f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acd3f9 push eax */
  push32((uint32_t)(EAX));
  /* 11acd3fa call 0x11ad25a0 */
  push32(0x11acd3ffu); f_11ad25a0();
  /* 11acd3ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acd402 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11acd405 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acd409 jne 0x11acd41e */
  if (!C.zf) goto L_11acd41e;
  /* 11acd40b call 0x11ad21f0 */
  push32(0x11acd410u); f_11ad21f0();
  /* 11acd410 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11acd416 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11acd419 jmp 0x11acd49e */
  goto L_11acd49e;
L_11acd41e:;
  /* 11acd41e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11acd421 push ecx */
  push32((uint32_t)(ECX));
  /* 11acd422 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acd424 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acd427 push edx */
  push32((uint32_t)(EDX));
  /* 11acd428 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11acd42b push eax */
  push32((uint32_t)(EAX));
  /* 11acd42c call dword ptr [0x11afb340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb340))), 0x11acd432u);
  /* 11acd432 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11acd435 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acd439 jne 0x11acd446 */
  if (!C.zf) goto L_11acd446;
  /* 11acd43b call dword ptr [0x11afb3c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3c4))), 0x11acd441u);
  /* 11acd441 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11acd444 jmp 0x11acd44d */
  goto L_11acd44d;
L_11acd446:;
  /* 11acd446 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11acd44d:;
  /* 11acd44d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acd451 je 0x11acd464 */
  if (C.zf) goto L_11acd464;
  /* 11acd453 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acd456 push ecx */
  push32((uint32_t)(ECX));
  /* 11acd457 call 0x11ad2150 */
  push32(0x11acd45cu); f_11ad2150();
  /* 11acd45c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acd45f or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11acd462 jmp 0x11acd49e */
  goto L_11acd49e;
L_11acd464:;
  /* 11acd464 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acd467 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11acd46a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acd46d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11acd470 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11acd473 mov ecx, dword ptr [edx*4 + 0x11afac80] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11afac80)));
  /* 11acd47a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 11acd47e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 11acd481 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acd484 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11acd487 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acd48a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11acd48d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11acd490 mov eax, dword ptr [eax*4 + 0x11afac80] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11afac80)));
  /* 11acd497 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 11acd49b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11acd49e:;
  /* 11acd49e mov esp, ebp */
  ESP = (EBP);
  /* 11acd4a0 pop ebp */
  EBP = (pop32());
  /* 11acd4a1 ret  */
  ESPCHK(0x11acd3f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d4b0 @ 0x11acd4b0 (130 bytes, 43 insns) */
void f_11acd4b0(void) {
  FTRACE(0x11acd4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acd4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11acd4b1 mov ebp, esp */
  EBP = (ESP);
  /* 11acd4b3 push ecx */
  push32((uint32_t)(ECX));
  /* 11acd4b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acd4b7 cmp eax, dword ptr [0x11afadbc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11afadbc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acd4bd jae 0x11acd4e1 */
  if (!C.cf) goto L_11acd4e1;
  /* 11acd4bf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acd4c2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11acd4c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acd4c8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11acd4cb imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11acd4ce mov eax, dword ptr [ecx*4 + 0x11afac80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11afac80)));
  /* 11acd4d5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11acd4da and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11acd4dd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11acd4df jne 0x11acd4fc */
  if (!C.zf) goto L_11acd4fc;
L_11acd4e1:;
  /* 11acd4e1 call 0x11ad21f0 */
  push32(0x11acd4e6u); f_11ad21f0();
  /* 11acd4e6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11acd4ec call 0x11ad2200 */
  push32(0x11acd4f1u); f_11ad2200();
  /* 11acd4f1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11acd4f7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11acd4fa jmp 0x11acd52e */
  goto L_11acd52e;
L_11acd4fc:;
  /* 11acd4fc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acd4ff push edx */
  push32((uint32_t)(EDX));
  /* 11acd500 call 0x11ad2720 */
  push32(0x11acd505u); f_11ad2720();
  /* 11acd505 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acd508 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11acd50b push eax */
  push32((uint32_t)(EAX));
  /* 11acd50c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acd50f push ecx */
  push32((uint32_t)(ECX));
  /* 11acd510 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acd513 push edx */
  push32((uint32_t)(EDX));
  /* 11acd514 call 0x11acd540 */
  push32(0x11acd519u); f_11acd540();
  /* 11acd519 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acd51c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11acd51f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acd522 push eax */
  push32((uint32_t)(EAX));
  /* 11acd523 call 0x11ad27b0 */
  push32(0x11acd528u); f_11ad27b0();
  /* 11acd528 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acd52b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11acd52e:;
  /* 11acd52e mov esp, ebp */
  ESP = (EBP);
  /* 11acd530 pop ebp */
  EBP = (pop32());
  /* 11acd531 ret  */
  ESPCHK(0x11acd4b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d540 @ 0x11acd540 (627 bytes, 182 insns) */
void f_11acd540(void) {
  FTRACE(0x11acd540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acd540 push ebp */
  push32((uint32_t)(EBP));
  /* 11acd541 mov ebp, esp */
  EBP = (ESP);
  /* 11acd543 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acd549 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11acd550 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11acd553 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 11acd559 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acd55d jne 0x11acd566 */
  if (!C.zf) goto L_11acd566;
  /* 11acd55f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11acd561 jmp 0x11acd7af */
  goto L_11acd7af;
L_11acd566:;
  /* 11acd566 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acd569 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11acd56c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acd56f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11acd572 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11acd575 mov eax, dword ptr [ecx*4 + 0x11afac80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11afac80)));
  /* 11acd57c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11acd581 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11acd584 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11acd586 je 0x11acd598 */
  if (C.zf) goto L_11acd598;
  /* 11acd588 push 2 */
  push32((uint32_t)(0x2u));
  /* 11acd58a push 0 */
  push32((uint32_t)(0x0u));
  /* 11acd58c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acd58f push edx */
  push32((uint32_t)(EDX));
  /* 11acd590 call 0x11acd3f0 */
  push32(0x11acd595u); f_11acd3f0();
  /* 11acd595 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11acd598:;
  /* 11acd598 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acd59b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11acd59e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acd5a1 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11acd5a4 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11acd5a7 mov edx, dword ptr [eax*4 + 0x11afac80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11afac80)));
  /* 11acd5ae movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11acd5b3 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11acd5b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acd5ba je 0x11acd6cc */
  if (C.zf) goto L_11acd6cc;
  /* 11acd5c0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acd5c3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11acd5c6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11acd5cd:;
  /* 11acd5cd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acd5d0 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acd5d3 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acd5d6 jae 0x11acd6ca */
  if (!C.cf) goto L_11acd6ca;
  /* 11acd5dc lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 11acd5e2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11acd5e5:;
  /* 11acd5e5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acd5e8 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 11acd5ee sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acd5f0 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acd5f6 jge 0x11acd657 */
  if ((C.sf==C.of)) goto L_11acd657;
  /* 11acd5f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acd5fb sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acd5fe cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acd601 jae 0x11acd657 */
  if (!C.cf) goto L_11acd657;
  /* 11acd603 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acd606 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11acd608 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 11acd60e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acd611 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acd614 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11acd617 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 11acd61e cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acd621 jne 0x11acd641 */
  if (!C.zf) goto L_11acd641;
  /* 11acd623 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 11acd629 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acd62c mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 11acd632 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acd635 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 11acd638 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acd63b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acd63e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11acd641:;
  /* 11acd641 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acd644 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 11acd64a mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11acd64c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acd64f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acd652 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11acd655 jmp 0x11acd5e5 */
  goto L_11acd5e5;
L_11acd657:;
  /* 11acd657 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acd659 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 11acd65f push edx */
  push32((uint32_t)(EDX));
  /* 11acd660 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acd663 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 11acd669 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acd66b push eax */
  push32((uint32_t)(EAX));
  /* 11acd66c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 11acd672 push edx */
  push32((uint32_t)(EDX));
  /* 11acd673 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acd676 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11acd679 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acd67c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11acd67f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11acd682 mov edx, dword ptr [eax*4 + 0x11afac80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11afac80)));
  /* 11acd689 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 11acd68c push eax */
  push32((uint32_t)(EAX));
  /* 11acd68d call dword ptr [0x11afb390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb390))), 0x11acd693u);
  /* 11acd693 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acd695 je 0x11acd6ba */
  if (C.zf) goto L_11acd6ba;
  /* 11acd697 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11acd69a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acd6a0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11acd6a3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acd6a6 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 11acd6ac sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acd6ae cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acd6b4 jge 0x11acd6b8 */
  if ((C.sf==C.of)) goto L_11acd6b8;
  /* 11acd6b6 jmp 0x11acd6ca */
  goto L_11acd6ca;
L_11acd6b8:;
  /* 11acd6b8 jmp 0x11acd6c5 */
  goto L_11acd6c5;
L_11acd6ba:;
  /* 11acd6ba call dword ptr [0x11afb3c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3c4))), 0x11acd6c0u);
  /* 11acd6c0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11acd6c3 jmp 0x11acd6ca */
  goto L_11acd6ca;
L_11acd6c5:;
  /* 11acd6c5 jmp 0x11acd5cd */
  goto L_11acd5cd;
L_11acd6ca:;
  /* 11acd6ca jmp 0x11acd71c */
  goto L_11acd71c;
L_11acd6cc:;
  /* 11acd6cc push 0 */
  push32((uint32_t)(0x0u));
  /* 11acd6ce lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 11acd6d4 push ecx */
  push32((uint32_t)(ECX));
  /* 11acd6d5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11acd6d8 push edx */
  push32((uint32_t)(EDX));
  /* 11acd6d9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acd6dc push eax */
  push32((uint32_t)(EAX));
  /* 11acd6dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acd6e0 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11acd6e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acd6e6 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11acd6e9 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11acd6ec mov eax, dword ptr [ecx*4 + 0x11afac80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11afac80)));
  /* 11acd6f3 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 11acd6f6 push ecx */
  push32((uint32_t)(ECX));
  /* 11acd6f7 call dword ptr [0x11afb390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb390))), 0x11acd6fdu);
  /* 11acd6fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acd6ff je 0x11acd713 */
  if (C.zf) goto L_11acd713;
  /* 11acd701 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11acd708 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 11acd70e mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11acd711 jmp 0x11acd71c */
  goto L_11acd71c;
L_11acd713:;
  /* 11acd713 call dword ptr [0x11afb3c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3c4))), 0x11acd719u);
  /* 11acd719 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11acd71c:;
  /* 11acd71c cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acd720 jne 0x11acd7a6 */
  if (!C.zf) goto L_11acd7a6;
  /* 11acd726 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acd72a je 0x11acd75a */
  if (C.zf) goto L_11acd75a;
  /* 11acd72c cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acd730 jne 0x11acd749 */
  if (!C.zf) goto L_11acd749;
  /* 11acd732 call 0x11ad21f0 */
  push32(0x11acd737u); f_11ad21f0();
  /* 11acd737 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11acd73d call 0x11ad2200 */
  push32(0x11acd742u); f_11ad2200();
  /* 11acd742 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11acd745 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11acd747 jmp 0x11acd755 */
  goto L_11acd755;
L_11acd749:;
  /* 11acd749 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11acd74c push edx */
  push32((uint32_t)(EDX));
  /* 11acd74d call 0x11ad2150 */
  push32(0x11acd752u); f_11ad2150();
  /* 11acd752 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11acd755:;
  /* 11acd755 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11acd758 jmp 0x11acd7af */
  goto L_11acd7af;
L_11acd75a:;
  /* 11acd75a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acd75d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11acd760 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acd763 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11acd766 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11acd769 mov edx, dword ptr [eax*4 + 0x11afac80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11afac80)));
  /* 11acd770 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11acd775 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11acd778 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acd77a je 0x11acd78b */
  if (C.zf) goto L_11acd78b;
  /* 11acd77c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acd77f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11acd782 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acd785 jne 0x11acd78b */
  if (!C.zf) goto L_11acd78b;
  /* 11acd787 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11acd789 jmp 0x11acd7af */
  goto L_11acd7af;
L_11acd78b:;
  /* 11acd78b call 0x11ad21f0 */
  push32(0x11acd790u); f_11ad21f0();
  /* 11acd790 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 11acd796 call 0x11ad2200 */
  push32(0x11acd79bu); f_11ad2200();
  /* 11acd79b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11acd7a1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11acd7a4 jmp 0x11acd7af */
  goto L_11acd7af;
L_11acd7a6:;
  /* 11acd7a6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11acd7a9 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11acd7af:;
  /* 11acd7af mov esp, ebp */
  ESP = (EBP);
  /* 11acd7b1 pop ebp */
  EBP = (pop32());
  /* 11acd7b2 ret  */
  ESPCHK(0x11acd540u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d7c0 @ 0x11acd7c0 (199 bytes, 68 insns) */
void f_11acd7c0(void) {
  FTRACE(0x11acd7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acd7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11acd7c1 mov ebp, esp */
  EBP = (ESP);
  /* 11acd7c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11acd7c4 push ebx */
  push32((uint32_t)(EBX));
  /* 11acd7c5 push esi */
  push32((uint32_t)(ESI));
  /* 11acd7c6 push edi */
  push32((uint32_t)(EDI));
L_11acd7c7:;
  /* 11acd7c7 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acd7cb jne 0x11acd7eb */
  if (!C.zf) goto L_11acd7eb;
  /* 11acd7cd push 0x11af3594 */
  push32((uint32_t)(0x11af3594u));
  /* 11acd7d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acd7d4 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 11acd7d6 push 0x11af412c */
  push32((uint32_t)(0x11af412cu));
  /* 11acd7db push 2 */
  push32((uint32_t)(0x2u));
  /* 11acd7dd call 0x11ac6a40 */
  push32(0x11acd7e2u); f_11ac6a40();
  /* 11acd7e2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acd7e5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acd7e8 jne 0x11acd7eb */
  if (!C.zf) goto L_11acd7eb;
  /* 11acd7ea int3  */
  x86_unimpl("int3 @ 0x11acd7ea");
L_11acd7eb:;
  /* 11acd7eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11acd7ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acd7ef jne 0x11acd7c7 */
  if (!C.zf) goto L_11acd7c7;
  /* 11acd7f1 mov ecx, dword ptr [0x11af94b0] */
  ECX = (r32((uint32_t)(0x11af94b0)));
  /* 11acd7f7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acd7fa mov dword ptr [0x11af94b0], ecx */
  w32((uint32_t)(0x11af94b0), (ECX));
  /* 11acd800 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acd803 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11acd806 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 11acd808 push 0x11af412c */
  push32((uint32_t)(0x11af412cu));
  /* 11acd80d push 2 */
  push32((uint32_t)(0x2u));
  /* 11acd80f push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11acd814 call 0x11ac9660 */
  push32(0x11acd819u); f_11ac9660();
  /* 11acd819 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acd81c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acd81f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11acd822 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acd825 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acd829 je 0x11acd846 */
  if (C.zf) goto L_11acd846;
  /* 11acd82b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acd82e mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11acd831 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11acd834 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acd837 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11acd83a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acd83d mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 11acd844 jmp 0x11acd86b */
  goto L_11acd86b;
L_11acd846:;
  /* 11acd846 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acd849 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11acd84c or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11acd84f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acd852 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11acd855 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acd858 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acd85b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acd85e mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11acd861 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acd864 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_11acd86b:;
  /* 11acd86b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acd86e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acd871 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11acd874 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11acd876 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acd879 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11acd880 pop edi */
  EDI = (pop32());
  /* 11acd881 pop esi */
  ESI = (pop32());
  /* 11acd882 pop ebx */
  EBX = (pop32());
  /* 11acd883 mov esp, ebp */
  ESP = (EBP);
  /* 11acd885 pop ebp */
  EBP = (pop32());
  /* 11acd886 ret  */
  ESPCHK(0x11acd7c0u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x11acd890 (50 bytes, 17 insns) */
void f_11acd890(void) {
  FTRACE(0x11acd890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acd890 push ebp */
  push32((uint32_t)(EBP));
  /* 11acd891 mov ebp, esp */
  EBP = (ESP);
  /* 11acd893 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acd896 cmp eax, dword ptr [0x11afadbc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11afadbc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acd89c jb 0x11acd8a2 */
  if (C.cf) goto L_11acd8a2;
  /* 11acd89e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11acd8a0 jmp 0x11acd8c0 */
  goto L_11acd8c0;
L_11acd8a2:;
  /* 11acd8a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acd8a5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11acd8a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acd8ab and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11acd8ae imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11acd8b1 mov eax, dword ptr [ecx*4 + 0x11afac80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11afac80)));
  /* 11acd8b8 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11acd8bd and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_11acd8c0:;
  /* 11acd8c0 pop ebp */
  EBP = (pop32());
  /* 11acd8c1 ret  */
  ESPCHK(0x11acd890u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8d0 @ 0x11acd8d0 (300 bytes, 80 insns) */
void f_11acd8d0(void) {
  FTRACE(0x11acd8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acd8d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11acd8d1 mov ebp, esp */
  EBP = (ESP);
  /* 11acd8d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11acd8d4 cmp dword ptr [0x11afac60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11afac60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acd8db jne 0x11acd8e9 */
  if (!C.zf) goto L_11acd8e9;
  /* 11acd8dd mov dword ptr [0x11afac60], 0x200 */
  w32((uint32_t)(0x11afac60), (0x200u));
  /* 11acd8e7 jmp 0x11acd8fc */
  goto L_11acd8fc;
L_11acd8e9:;
  /* 11acd8e9 cmp dword ptr [0x11afac60], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x11afac60))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acd8f0 jge 0x11acd8fc */
  if ((C.sf==C.of)) goto L_11acd8fc;
  /* 11acd8f2 mov dword ptr [0x11afac60], 0x14 */
  w32((uint32_t)(0x11afac60), (0x14u));
L_11acd8fc:;
  /* 11acd8fc push 0x83 */
  push32((uint32_t)(0x83u));
  /* 11acd901 push 0x11af4138 */
  push32((uint32_t)(0x11af4138u));
  /* 11acd906 push 2 */
  push32((uint32_t)(0x2u));
  /* 11acd908 push 4 */
  push32((uint32_t)(0x4u));
  /* 11acd90a mov eax, dword ptr [0x11afac60] */
  EAX = (r32((uint32_t)(0x11afac60)));
  /* 11acd90f push eax */
  push32((uint32_t)(EAX));
  /* 11acd910 call 0x11ac9a70 */
  push32(0x11acd915u); f_11ac9a70();
  /* 11acd915 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acd918 mov dword ptr [0x11af990c], eax */
  w32((uint32_t)(0x11af990c), (EAX));
  /* 11acd91d cmp dword ptr [0x11af990c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af990c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acd924 jne 0x11acd965 */
  if (!C.zf) goto L_11acd965;
  /* 11acd926 mov dword ptr [0x11afac60], 0x14 */
  w32((uint32_t)(0x11afac60), (0x14u));
  /* 11acd930 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 11acd935 push 0x11af4138 */
  push32((uint32_t)(0x11af4138u));
  /* 11acd93a push 2 */
  push32((uint32_t)(0x2u));
  /* 11acd93c push 4 */
  push32((uint32_t)(0x4u));
  /* 11acd93e mov ecx, dword ptr [0x11afac60] */
  ECX = (r32((uint32_t)(0x11afac60)));
  /* 11acd944 push ecx */
  push32((uint32_t)(ECX));
  /* 11acd945 call 0x11ac9a70 */
  push32(0x11acd94au); f_11ac9a70();
  /* 11acd94a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acd94d mov dword ptr [0x11af990c], eax */
  w32((uint32_t)(0x11af990c), (EAX));
  /* 11acd952 cmp dword ptr [0x11af990c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af990c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acd959 jne 0x11acd965 */
  if (!C.zf) goto L_11acd965;
  /* 11acd95b push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11acd95d call 0x11ac68f0 */
  push32(0x11acd962u); f_11ac68f0();
  /* 11acd962 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11acd965:;
  /* 11acd965 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11acd96c jmp 0x11acd977 */
  goto L_11acd977;
L_11acd96e:;
  /* 11acd96e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acd971 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acd974 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11acd977:;
  /* 11acd977 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acd97b jge 0x11acd996 */
  if ((C.sf==C.of)) goto L_11acd996;
  /* 11acd97d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acd980 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11acd983 add eax, 0x11af6d38 */
  { uint32_t _a=(EAX),_b=(0x11af6d38u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acd988 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acd98b mov edx, dword ptr [0x11af990c] */
  EDX = (r32((uint32_t)(0x11af990c)));
  /* 11acd991 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11acd994 jmp 0x11acd96e */
  goto L_11acd96e;
L_11acd996:;
  /* 11acd996 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11acd99d jmp 0x11acd9a8 */
  goto L_11acd9a8;
L_11acd99f:;
  /* 11acd99f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acd9a2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acd9a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11acd9a8:;
  /* 11acd9a8 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acd9ac jge 0x11acd9f8 */
  if ((C.sf==C.of)) goto L_11acd9f8;
  /* 11acd9ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acd9b1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11acd9b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acd9b7 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11acd9ba imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11acd9bd mov eax, dword ptr [ecx*4 + 0x11afac80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11afac80)));
  /* 11acd9c4 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acd9c8 je 0x11acd9e6 */
  if (C.zf) goto L_11acd9e6;
  /* 11acd9ca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acd9cd sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11acd9d0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acd9d3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11acd9d6 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11acd9d9 mov eax, dword ptr [ecx*4 + 0x11afac80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11afac80)));
  /* 11acd9e0 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acd9e4 jne 0x11acd9f6 */
  if (!C.zf) goto L_11acd9f6;
L_11acd9e6:;
  /* 11acd9e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acd9e9 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11acd9ec mov dword ptr [ecx + 0x11af6d48], 0xffffffff */
  w32((uint32_t)(ECX + 0x11af6d48), (0xffffffffu));
L_11acd9f6:;
  /* 11acd9f6 jmp 0x11acd99f */
  goto L_11acd99f;
L_11acd9f8:;
  /* 11acd9f8 mov esp, ebp */
  ESP = (EBP);
  /* 11acd9fa pop ebp */
  EBP = (pop32());
  /* 11acd9fb ret  */
  ESPCHK(0x11acd8d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da00 @ 0x11acda00 (26 bytes, 9 insns) */
void f_11acda00(void) {
  FTRACE(0x11acda00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acda00 push ebp */
  push32((uint32_t)(EBP));
  /* 11acda01 mov ebp, esp */
  EBP = (ESP);
  /* 11acda03 call 0x11ad2a20 */
  push32(0x11acda08u); f_11ad2a20();
  /* 11acda08 movsx eax, byte ptr [0x11af92fc] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11af92fc))));
  /* 11acda0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acda11 je 0x11acda18 */
  if (C.zf) goto L_11acda18;
  /* 11acda13 call 0x11ad27e0 */
  push32(0x11acda18u); f_11ad27e0();
L_11acda18:;
  /* 11acda18 pop ebp */
  EBP = (pop32());
  /* 11acda19 ret  */
  ESPCHK(0x11acda00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da20 @ 0x11acda20 (61 bytes, 20 insns) */
void f_11acda20(void) {
  FTRACE(0x11acda20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acda20 push ebp */
  push32((uint32_t)(EBP));
  /* 11acda21 mov ebp, esp */
  EBP = (ESP);
  /* 11acda23 cmp dword ptr [ebp + 8], 0x11af6d38 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11af6d38u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acda2a jb 0x11acda4e */
  if (C.cf) goto L_11acda4e;
  /* 11acda2c cmp dword ptr [ebp + 8], 0x11af6f98 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11af6f98u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acda33 ja 0x11acda4e */
  if ((!C.cf&&!C.zf)) goto L_11acda4e;
  /* 11acda35 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acda38 sub eax, 0x11af6d38 */
  { uint32_t _a=(EAX),_b=(0x11af6d38u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acda3d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11acda40 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acda43 push eax */
  push32((uint32_t)(EAX));
  /* 11acda44 call 0x11acd060 */
  push32(0x11acda49u); f_11acd060();
  /* 11acda49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acda4c jmp 0x11acda5b */
  goto L_11acda5b;
L_11acda4e:;
  /* 11acda4e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acda51 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acda54 push ecx */
  push32((uint32_t)(ECX));
  /* 11acda55 call dword ptr [0x11afb35c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb35c))), 0x11acda5bu);
L_11acda5b:;
  /* 11acda5b pop ebp */
  EBP = (pop32());
  /* 11acda5c ret  */
  ESPCHK(0x11acda20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da60 @ 0x11acda60 (41 bytes, 16 insns) */
void f_11acda60(void) {
  FTRACE(0x11acda60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acda60 push ebp */
  push32((uint32_t)(EBP));
  /* 11acda61 mov ebp, esp */
  EBP = (ESP);
  /* 11acda63 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acda67 jge 0x11acda7a */
  if ((C.sf==C.of)) goto L_11acda7a;
  /* 11acda69 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acda6c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acda6f push eax */
  push32((uint32_t)(EAX));
  /* 11acda70 call 0x11acd060 */
  push32(0x11acda75u); f_11acd060();
  /* 11acda75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acda78 jmp 0x11acda87 */
  goto L_11acda87;
L_11acda7a:;
  /* 11acda7a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acda7d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acda80 push ecx */
  push32((uint32_t)(ECX));
  /* 11acda81 call dword ptr [0x11afb35c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb35c))), 0x11acda87u);
L_11acda87:;
  /* 11acda87 pop ebp */
  EBP = (pop32());
  /* 11acda88 ret  */
  ESPCHK(0x11acda60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da90 @ 0x11acda90 (61 bytes, 20 insns) */
void f_11acda90(void) {
  FTRACE(0x11acda90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acda90 push ebp */
  push32((uint32_t)(EBP));
  /* 11acda91 mov ebp, esp */
  EBP = (ESP);
  /* 11acda93 cmp dword ptr [ebp + 8], 0x11af6d38 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11af6d38u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acda9a jb 0x11acdabe */
  if (C.cf) goto L_11acdabe;
  /* 11acda9c cmp dword ptr [ebp + 8], 0x11af6f98 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11af6f98u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acdaa3 ja 0x11acdabe */
  if ((!C.cf&&!C.zf)) goto L_11acdabe;
  /* 11acdaa5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acdaa8 sub eax, 0x11af6d38 */
  { uint32_t _a=(EAX),_b=(0x11af6d38u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acdaad sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11acdab0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acdab3 push eax */
  push32((uint32_t)(EAX));
  /* 11acdab4 call 0x11acd100 */
  push32(0x11acdab9u); f_11acd100();
  /* 11acdab9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acdabc jmp 0x11acdacb */
  goto L_11acdacb;
L_11acdabe:;
  /* 11acdabe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acdac1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acdac4 push ecx */
  push32((uint32_t)(ECX));
  /* 11acdac5 call dword ptr [0x11afb34c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb34c))), 0x11acdacbu);
L_11acdacb:;
  /* 11acdacb pop ebp */
  EBP = (pop32());
  /* 11acdacc ret  */
  ESPCHK(0x11acda90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dad0 @ 0x11acdad0 (41 bytes, 16 insns) */
void f_11acdad0(void) {
  FTRACE(0x11acdad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acdad0 push ebp */
  push32((uint32_t)(EBP));
  /* 11acdad1 mov ebp, esp */
  EBP = (ESP);
  /* 11acdad3 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acdad7 jge 0x11acdaea */
  if ((C.sf==C.of)) goto L_11acdaea;
  /* 11acdad9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acdadc add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acdadf push eax */
  push32((uint32_t)(EAX));
  /* 11acdae0 call 0x11acd100 */
  push32(0x11acdae5u); f_11acd100();
  /* 11acdae5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acdae8 jmp 0x11acdaf7 */
  goto L_11acdaf7;
L_11acdaea:;
  /* 11acdaea mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acdaed add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acdaf0 push ecx */
  push32((uint32_t)(ECX));
  /* 11acdaf1 call dword ptr [0x11afb34c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb34c))), 0x11acdaf7u);
L_11acdaf7:;
  /* 11acdaf7 pop ebp */
  EBP = (pop32());
  /* 11acdaf8 ret  */
  ESPCHK(0x11acdad0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db00 @ 0x11acdb00 (119 bytes, 34 insns) */
void f_11acdb00(void) {
  FTRACE(0x11acdb00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acdb00 push ebp */
  push32((uint32_t)(EBP));
  /* 11acdb01 mov ebp, esp */
  EBP = (ESP);
  /* 11acdb03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acdb06 push 0x11af9654 */
  push32((uint32_t)(0x11af9654u));
  /* 11acdb0b call dword ptr [0x11afb3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3a4))), 0x11acdb11u);
  /* 11acdb11 cmp dword ptr [0x11af9644], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af9644))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acdb18 je 0x11acdb38 */
  if (C.zf) goto L_11acdb38;
  /* 11acdb1a push 0x11af9654 */
  push32((uint32_t)(0x11af9654u));
  /* 11acdb1f call dword ptr [0x11afb394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb394))), 0x11acdb25u);
  /* 11acdb25 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11acdb27 call 0x11acd060 */
  push32(0x11acdb2cu); f_11acd060();
  /* 11acdb2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acdb2f mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11acdb36 jmp 0x11acdb3f */
  goto L_11acdb3f;
L_11acdb38:;
  /* 11acdb38 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11acdb3f:;
  /* 11acdb3f mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 11acdb43 push eax */
  push32((uint32_t)(EAX));
  /* 11acdb44 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acdb47 push ecx */
  push32((uint32_t)(ECX));
  /* 11acdb48 call 0x11acdb80 */
  push32(0x11acdb4du); f_11acdb80();
  /* 11acdb4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acdb50 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11acdb53 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acdb57 je 0x11acdb65 */
  if (C.zf) goto L_11acdb65;
  /* 11acdb59 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11acdb5b call 0x11acd100 */
  push32(0x11acdb60u); f_11acd100();
  /* 11acdb60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acdb63 jmp 0x11acdb70 */
  goto L_11acdb70;
L_11acdb65:;
  /* 11acdb65 push 0x11af9654 */
  push32((uint32_t)(0x11af9654u));
  /* 11acdb6a call dword ptr [0x11afb394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb394))), 0x11acdb70u);
L_11acdb70:;
  /* 11acdb70 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acdb73 mov esp, ebp */
  ESP = (EBP);
  /* 11acdb75 pop ebp */
  EBP = (pop32());
  /* 11acdb76 ret  */
  ESPCHK(0x11acdb00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db80 @ 0x11acdb80 (160 bytes, 50 insns) */
void f_11acdb80(void) {
  FTRACE(0x11acdb80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acdb80 push ebp */
  push32((uint32_t)(EBP));
  /* 11acdb81 mov ebp, esp */
  EBP = (ESP);
  /* 11acdb83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acdb86 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acdb8a jne 0x11acdb93 */
  if (!C.zf) goto L_11acdb93;
  /* 11acdb8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11acdb8e jmp 0x11acdc1c */
  goto L_11acdc1c;
L_11acdb93:;
  /* 11acdb93 cmp dword ptr [0x11af94d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af94d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acdb9a jne 0x11acdbca */
  if (!C.zf) goto L_11acdbca;
  /* 11acdb9c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acdb9f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11acdba4 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acdba9 jle 0x11acdbbb */
  if ((C.zf||C.sf!=C.of)) goto L_11acdbbb;
  /* 11acdbab call 0x11ad21f0 */
  push32(0x11acdbb0u); f_11ad21f0();
  /* 11acdbb0 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 11acdbb6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11acdbb9 jmp 0x11acdc1c */
  goto L_11acdc1c;
L_11acdbbb:;
  /* 11acdbbb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acdbbe mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 11acdbc1 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11acdbc3 mov eax, 1 */
  EAX = (0x1u);
  /* 11acdbc8 jmp 0x11acdc1c */
  goto L_11acdc1c;
L_11acdbca:;
  /* 11acdbca mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11acdbd1 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11acdbd4 push eax */
  push32((uint32_t)(EAX));
  /* 11acdbd5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acdbd7 mov ecx, dword ptr [0x11af71d0] */
  ECX = (r32((uint32_t)(0x11af71d0)));
  /* 11acdbdd push ecx */
  push32((uint32_t)(ECX));
  /* 11acdbde mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acdbe1 push edx */
  push32((uint32_t)(EDX));
  /* 11acdbe2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11acdbe4 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 11acdbe7 push eax */
  push32((uint32_t)(EAX));
  /* 11acdbe8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11acdbed mov ecx, dword ptr [0x11af94e4] */
  ECX = (r32((uint32_t)(0x11af94e4)));
  /* 11acdbf3 push ecx */
  push32((uint32_t)(ECX));
  /* 11acdbf4 call dword ptr [0x11afb3bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3bc))), 0x11acdbfau);
  /* 11acdbfa mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11acdbfd cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acdc01 je 0x11acdc09 */
  if (C.zf) goto L_11acdc09;
  /* 11acdc03 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acdc07 je 0x11acdc19 */
  if (C.zf) goto L_11acdc19;
L_11acdc09:;
  /* 11acdc09 call 0x11ad21f0 */
  push32(0x11acdc0eu); f_11ad21f0();
  /* 11acdc0e mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 11acdc14 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11acdc17 jmp 0x11acdc1c */
  goto L_11acdc1c;
L_11acdc19:;
  /* 11acdc19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11acdc1c:;
  /* 11acdc1c mov esp, ebp */
  ESP = (EBP);
  /* 11acdc1e pop ebp */
  EBP = (pop32());
  /* 11acdc1f ret  */
  ESPCHK(0x11acdb80u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x11acdc20 (104 bytes, 43 insns) */
void f_11acdc20(void) {
  FTRACE(0x11acdc20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acdc20 push ebx */
  push32((uint32_t)(EBX));
  /* 11acdc21 push esi */
  push32((uint32_t)(ESI));
  /* 11acdc22 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 11acdc26 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11acdc28 jne 0x11acdc42 */
  if (!C.zf) goto L_11acdc42;
  /* 11acdc2a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 11acdc2e mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11acdc32 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11acdc34 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11acdc36 mov ebx, eax */
  EBX = (EAX);
  /* 11acdc38 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11acdc3c div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11acdc3e mov edx, ebx */
  EDX = (EBX);
  /* 11acdc40 jmp 0x11acdc83 */
  goto L_11acdc83;
L_11acdc42:;
  /* 11acdc42 mov ecx, eax */
  ECX = (EAX);
  /* 11acdc44 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11acdc48 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 11acdc4c mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_11acdc50:;
  /* 11acdc50 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11acdc52 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 11acdc54 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11acdc56 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 11acdc58 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11acdc5a jne 0x11acdc50 */
  if (!C.zf) goto L_11acdc50;
  /* 11acdc5c div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11acdc5e mov esi, eax */
  ESI = (EAX);
  /* 11acdc60 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11acdc64 mov ecx, eax */
  ECX = (EAX);
  /* 11acdc66 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11acdc6a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11acdc6c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acdc6e jb 0x11acdc7e */
  if (C.cf) goto L_11acdc7e;
  /* 11acdc70 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acdc74 ja 0x11acdc7e */
  if ((!C.cf&&!C.zf)) goto L_11acdc7e;
  /* 11acdc76 jb 0x11acdc7f */
  if (C.cf) goto L_11acdc7f;
  /* 11acdc78 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acdc7c jbe 0x11acdc7f */
  if ((C.cf||C.zf)) goto L_11acdc7f;
L_11acdc7e:;
  /* 11acdc7e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_11acdc7f:;
  /* 11acdc7f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11acdc81 mov eax, esi */
  EAX = (ESI);
L_11acdc83:;
  /* 11acdc83 pop esi */
  ESI = (pop32());
  /* 11acdc84 pop ebx */
  EBX = (pop32());
  /* 11acdc85 ret 0x10 */
  ESPCHK(0x11acdc20u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x11acdc90 (117 bytes, 44 insns) */
void f_11acdc90(void) {
  FTRACE(0x11acdc90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acdc90 push ebx */
  push32((uint32_t)(EBX));
  /* 11acdc91 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11acdc95 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11acdc97 jne 0x11acdcb1 */
  if (!C.zf) goto L_11acdcb1;
  /* 11acdc99 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11acdc9d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11acdca1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11acdca3 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11acdca5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11acdca9 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11acdcab mov eax, edx */
  EAX = (EDX);
  /* 11acdcad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11acdcaf jmp 0x11acdd01 */
  goto L_11acdd01;
L_11acdcb1:;
  /* 11acdcb1 mov ecx, eax */
  ECX = (EAX);
  /* 11acdcb3 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 11acdcb7 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11acdcbb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_11acdcbf:;
  /* 11acdcbf shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11acdcc1 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 11acdcc3 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11acdcc5 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 11acdcc7 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11acdcc9 jne 0x11acdcbf */
  if (!C.zf) goto L_11acdcbf;
  /* 11acdccb div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11acdccd mov ecx, eax */
  ECX = (EAX);
  /* 11acdccf mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11acdcd3 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 11acdcd4 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11acdcd8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acdcda jb 0x11acdcea */
  if (C.cf) goto L_11acdcea;
  /* 11acdcdc cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acdce0 ja 0x11acdcea */
  if ((!C.cf&&!C.zf)) goto L_11acdcea;
  /* 11acdce2 jb 0x11acdcf2 */
  if (C.cf) goto L_11acdcf2;
  /* 11acdce4 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acdce8 jbe 0x11acdcf2 */
  if ((C.cf||C.zf)) goto L_11acdcf2;
L_11acdcea:;
  /* 11acdcea sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acdcee sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11acdcf2:;
  /* 11acdcf2 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acdcf6 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acdcfa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11acdcfc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11acdcfe sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11acdd01:;
  /* 11acdd01 pop ebx */
  EBX = (pop32());
  /* 11acdd02 ret 0x10 */
  ESPCHK(0x11acdc90u, _esp0);
  ESP += 20; return;
}

/* FUN_1000dd10 @ 0x11acdd10 (31 bytes, 18 insns) */
void f_11acdd10(void) {
  FTRACE(0x11acdd10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acdd10 push ebp */
  push32((uint32_t)(EBP));
  /* 11acdd11 mov ebp, esp */
  EBP = (ESP);
  /* 11acdd13 push ecx */
  push32((uint32_t)(ECX));
  /* 11acdd14 push ebx */
  push32((uint32_t)(EBX));
  /* 11acdd15 push esi */
  push32((uint32_t)(ESI));
  /* 11acdd16 push edi */
  push32((uint32_t)(EDI));
  /* 11acdd17 wait  */
  /* wait (no observable integer/reg state) */
  /* 11acdd18 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 11acdd1b mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11acdd1f push eax */
  push32((uint32_t)(EAX));
  /* 11acdd20 call 0x11ace100 */
  push32(0x11acdd25u); f_11ace100();
  /* 11acdd25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acdd28 pop edi */
  EDI = (pop32());
  /* 11acdd29 pop esi */
  ESI = (pop32());
  /* 11acdd2a pop ebx */
  EBX = (pop32());
  /* 11acdd2b mov esp, ebp */
  ESP = (EBP);
  /* 11acdd2d pop ebp */
  EBP = (pop32());
  /* 11acdd2e ret  */
  ESPCHK(0x11acdd10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dd30 @ 0x11acdd30 (32 bytes, 18 insns) */
void f_11acdd30(void) {
  FTRACE(0x11acdd30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acdd30 push ebp */
  push32((uint32_t)(EBP));
  /* 11acdd31 mov ebp, esp */
  EBP = (ESP);
  /* 11acdd33 push ecx */
  push32((uint32_t)(ECX));
  /* 11acdd34 push ebx */
  push32((uint32_t)(EBX));
  /* 11acdd35 push esi */
  push32((uint32_t)(ESI));
  /* 11acdd36 push edi */
  push32((uint32_t)(EDI));
  /* 11acdd37 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 11acdd3a fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 11acdd3c mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11acdd40 push eax */
  push32((uint32_t)(EAX));
  /* 11acdd41 call 0x11ace100 */
  push32(0x11acdd46u); f_11ace100();
  /* 11acdd46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acdd49 pop edi */
  EDI = (pop32());
  /* 11acdd4a pop esi */
  ESI = (pop32());
  /* 11acdd4b pop ebx */
  EBX = (pop32());
  /* 11acdd4c mov esp, ebp */
  ESP = (EBP);
  /* 11acdd4e pop ebp */
  EBP = (pop32());
  /* 11acdd4f ret  */
  ESPCHK(0x11acdd30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dd50 @ 0x11acdd50 (79 bytes, 34 insns) */
void f_11acdd50(void) {
  FTRACE(0x11acdd50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acdd50 push ebp */
  push32((uint32_t)(EBP));
  /* 11acdd51 mov ebp, esp */
  EBP = (ESP);
  /* 11acdd53 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acdd56 push ebx */
  push32((uint32_t)(EBX));
  /* 11acdd57 push esi */
  push32((uint32_t)(ESI));
  /* 11acdd58 push edi */
  push32((uint32_t)(EDI));
  /* 11acdd59 wait  */
  /* wait (no observable integer/reg state) */
  /* 11acdd5a fnstcw word ptr [ebp - 0x10] */
  w16((uint32_t)(EBP + -0x10), C.fcw);
  /* 11acdd5d mov ax, word ptr [ebp - 0x10] */
  AX = (r16((uint32_t)(EBP + -0x10)));
  /* 11acdd61 push eax */
  push32((uint32_t)(EAX));
  /* 11acdd62 call 0x11acde20 */
  push32(0x11acdd67u); f_11acde20();
  /* 11acdd67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acdd6a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11acdd6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acdd70 and ecx, dword ptr [ebp + 0xc] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + 0xc))); ECX = (_r); fl_logic(_r,32); }
  /* 11acdd73 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acdd76 not edx */
  EDX = (~(EDX));
  /* 11acdd78 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acdd7b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11acdd7d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11acdd7f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11acdd82 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11acdd85 push ecx */
  push32((uint32_t)(ECX));
  /* 11acdd86 call 0x11acdfa0 */
  push32(0x11acdd8bu); f_11acdfa0();
  /* 11acdd8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acdd8e mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11acdd92 fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 11acdd95 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11acdd98 pop edi */
  EDI = (pop32());
  /* 11acdd99 pop esi */
  ESI = (pop32());
  /* 11acdd9a pop ebx */
  EBX = (pop32());
  /* 11acdd9b mov esp, ebp */
  ESP = (EBP);
  /* 11acdd9d pop ebp */
  EBP = (pop32());
  /* 11acdd9e ret  */
  ESPCHK(0x11acdd50u, _esp0);
  ESP += 4; return;
}

/* __controlfp @ 0x11acdda0 (26 bytes, 11 insns) */
void f_11acdda0(void) {
  FTRACE(0x11acdda0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acdda0 push ebp */
  push32((uint32_t)(EBP));
  /* 11acdda1 mov ebp, esp */
  EBP = (ESP);
  /* 11acdda3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acdda6 and eax, 0xfff7ffff */
  { uint32_t _r=(EAX)&(0xfff7ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11acddab push eax */
  push32((uint32_t)(EAX));
  /* 11acddac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acddaf push ecx */
  push32((uint32_t)(ECX));
  /* 11acddb0 call 0x11acdd50 */
  push32(0x11acddb5u); f_11acdd50();
  /* 11acddb5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acddb8 pop ebp */
  EBP = (pop32());
  /* 11acddb9 ret  */
  ESPCHK(0x11acdda0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ddc0 @ 0x11acddc0 (88 bytes, 33 insns) */
void f_11acddc0(void) {
  FTRACE(0x11acddc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acddc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11acddc1 mov ebp, esp */
  EBP = (ESP);
  /* 11acddc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acddc6 push ebx */
  push32((uint32_t)(EBX));
  /* 11acddc7 push esi */
  push32((uint32_t)(ESI));
  /* 11acddc8 push edi */
  push32((uint32_t)(EDI));
  /* 11acddc9 call 0x11accdb0 */
  push32(0x11acddceu); f_11accdb0();
  /* 11acddce mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 11acddd0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11acddd3 fninit  */
  C.fptop=0; C.fcw=0x037f; C.fsw_c0=C.fsw_c1=C.fsw_c2=C.fsw_c3=0;
  /* 11acddd5 call 0x11ac84b0 */
  push32(0x11acdddau); f_11ac84b0();
  /* 11acddda cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acddde je 0x11acde11 */
  if (C.zf) goto L_11acde11;
  /* 11acdde0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acdde3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11acdde6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11acdde8 and eax, 0x10008 */
  { uint32_t _r=(EAX)&(0x10008u); EAX = (_r); fl_logic(_r,32); }
  /* 11acdded test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acddef je 0x11acde11 */
  if (C.zf) goto L_11acde11;
  /* 11acddf1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acddf4 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11acddf7 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acddfa mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11acddfd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acde00 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11acde07 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acde0a mov dword ptr [ecx + 8], 0xffff */
  w32((uint32_t)(ECX + 0x8), (0xffffu));
L_11acde11:;
  /* 11acde11 pop edi */
  EDI = (pop32());
  /* 11acde12 pop esi */
  ESI = (pop32());
  /* 11acde13 pop ebx */
  EBX = (pop32());
  /* 11acde14 mov esp, ebp */
  ESP = (EBP);
  /* 11acde16 pop ebp */
  EBP = (pop32());
  /* 11acde17 ret  */
  ESPCHK(0x11acddc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de20 @ 0x11acde20 (377 bytes, 115 insns) */
void f_11acde20(void) {
  FTRACE(0x11acde20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acde20 push ebp */
  push32((uint32_t)(EBP));
  /* 11acde21 mov ebp, esp */
  EBP = (ESP);
  /* 11acde23 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acde26 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11acde2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acde30 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11acde35 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11acde38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acde3a je 0x11acde45 */
  if (C.zf) goto L_11acde45;
  /* 11acde3c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acde3f or ecx, 0x10 */
  { uint32_t _r=(ECX)|(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11acde42 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11acde45:;
  /* 11acde45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acde48 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11acde4e and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11acde51 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11acde53 je 0x11acde5d */
  if (C.zf) goto L_11acde5d;
  /* 11acde55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acde58 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 11acde5a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11acde5d:;
  /* 11acde5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acde60 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11acde66 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11acde69 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11acde6b je 0x11acde76 */
  if (C.zf) goto L_11acde76;
  /* 11acde6d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acde70 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11acde73 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11acde76:;
  /* 11acde76 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acde79 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11acde7e and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11acde81 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acde83 je 0x11acde8e */
  if (C.zf) goto L_11acde8e;
  /* 11acde85 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acde88 or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11acde8b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11acde8e:;
  /* 11acde8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acde91 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11acde97 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11acde9a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11acde9c je 0x11acdea6 */
  if (C.zf) goto L_11acdea6;
  /* 11acde9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acdea1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11acdea3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11acdea6:;
  /* 11acdea6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acdea9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11acdeaf and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11acdeb2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11acdeb4 je 0x11acdec2 */
  if (C.zf) goto L_11acdec2;
  /* 11acdeb6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acdeb9 or edx, 0x80000 */
  { uint32_t _r=(EDX)|(0x80000u); EDX = (_r); fl_logic(_r,32); }
  /* 11acdebf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11acdec2:;
  /* 11acdec2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acdec5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11acdeca and eax, 0xc00 */
  { uint32_t _r=(EAX)&(0xc00u); EAX = (_r); fl_logic(_r,32); }
  /* 11acdecf mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11acded2 cmp dword ptr [ebp - 8], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acded9 jg 0x11acdef5 */
  if ((!C.zf&&C.sf==C.of)) goto L_11acdef5;
  /* 11acdedb cmp dword ptr [ebp - 8], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acdee2 je 0x11acdf08 */
  if (C.zf) goto L_11acdf08;
  /* 11acdee4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acdee8 je 0x11acdf00 */
  if (C.zf) goto L_11acdf00;
  /* 11acdeea cmp dword ptr [ebp - 8], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acdef1 je 0x11acdf13 */
  if (C.zf) goto L_11acdf13;
  /* 11acdef3 jmp 0x11acdf27 */
  goto L_11acdf27;
L_11acdef5:;
  /* 11acdef5 cmp dword ptr [ebp - 8], 0xc00 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acdefc je 0x11acdf1e */
  if (C.zf) goto L_11acdf1e;
  /* 11acdefe jmp 0x11acdf27 */
  goto L_11acdf27;
L_11acdf00:;
  /* 11acdf00 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acdf03 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11acdf06 jmp 0x11acdf27 */
  goto L_11acdf27;
L_11acdf08:;
  /* 11acdf08 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acdf0b or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11acdf0e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11acdf11 jmp 0x11acdf27 */
  goto L_11acdf27;
L_11acdf13:;
  /* 11acdf13 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acdf16 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11acdf19 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11acdf1c jmp 0x11acdf27 */
  goto L_11acdf27;
L_11acdf1e:;
  /* 11acdf1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acdf21 or ch, 3 */
  { uint32_t _r=(C.c.b.h)|(0x3u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11acdf24 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11acdf27:;
  /* 11acdf27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acdf2a and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11acdf30 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 11acdf36 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11acdf39 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acdf3d je 0x11acdf69 */
  if (C.zf) goto L_11acdf69;
  /* 11acdf3f cmp dword ptr [ebp - 0xc], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acdf46 je 0x11acdf5b */
  if (C.zf) goto L_11acdf5b;
  /* 11acdf48 cmp dword ptr [ebp - 0xc], 0x300 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acdf4f je 0x11acdf53 */
  if (C.zf) goto L_11acdf53;
  /* 11acdf51 jmp 0x11acdf75 */
  goto L_11acdf75;
L_11acdf53:;
  /* 11acdf53 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acdf56 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11acdf59 jmp 0x11acdf75 */
  goto L_11acdf75;
L_11acdf5b:;
  /* 11acdf5b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acdf5e or ecx, 0x10000 */
  { uint32_t _r=(ECX)|(0x10000u); ECX = (_r); fl_logic(_r,32); }
  /* 11acdf64 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11acdf67 jmp 0x11acdf75 */
  goto L_11acdf75;
L_11acdf69:;
  /* 11acdf69 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acdf6c or edx, 0x20000 */
  { uint32_t _r=(EDX)|(0x20000u); EDX = (_r); fl_logic(_r,32); }
  /* 11acdf72 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11acdf75:;
  /* 11acdf75 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acdf78 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11acdf7d and eax, 0x1000 */
  { uint32_t _r=(EAX)&(0x1000u); EAX = (_r); fl_logic(_r,32); }
  /* 11acdf82 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acdf84 je 0x11acdf92 */
  if (C.zf) goto L_11acdf92;
  /* 11acdf86 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acdf89 or ecx, 0x40000 */
  { uint32_t _r=(ECX)|(0x40000u); ECX = (_r); fl_logic(_r,32); }
  /* 11acdf8f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11acdf92:;
  /* 11acdf92 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acdf95 mov esp, ebp */
  ESP = (EBP);
  /* 11acdf97 pop ebp */
  EBP = (pop32());
  /* 11acdf98 ret  */
  ESPCHK(0x11acde20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dfa0 @ 0x11acdfa0 (346 bytes, 106 insns) */
void f_11acdfa0(void) {
  FTRACE(0x11acdfa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acdfa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11acdfa1 mov ebp, esp */
  EBP = (ESP);
  /* 11acdfa3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acdfa6 mov word ptr [ebp - 4], 0 */
  w16((uint32_t)(EBP + -0x4), (0x0u));
  /* 11acdfac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acdfaf and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11acdfb2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acdfb4 je 0x11acdfc1 */
  if (C.zf) goto L_11acdfc1;
  /* 11acdfb6 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11acdfba or cl, 1 */
  { uint32_t _r=(CL)|(0x1u); CL = (_r); fl_logic(_r,8); }
  /* 11acdfbd mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_11acdfc1:;
  /* 11acdfc1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acdfc4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11acdfc7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11acdfc9 je 0x11acdfd5 */
  if (C.zf) goto L_11acdfd5;
  /* 11acdfcb mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11acdfcf or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11acdfd1 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
L_11acdfd5:;
  /* 11acdfd5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acdfd8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11acdfdb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11acdfdd je 0x11acdfea */
  if (C.zf) goto L_11acdfea;
  /* 11acdfdf mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11acdfe3 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 11acdfe6 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_11acdfea:;
  /* 11acdfea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acdfed and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 11acdff0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acdff2 je 0x11acdfff */
  if (C.zf) goto L_11acdfff;
  /* 11acdff4 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11acdff8 or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 11acdffb mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_11acdfff:;
  /* 11acdfff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace002 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ace005 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ace007 je 0x11ace013 */
  if (C.zf) goto L_11ace013;
  /* 11ace009 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11ace00d or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11ace00f mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
L_11ace013:;
  /* 11ace013 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace016 and ecx, 0x80000 */
  { uint32_t _r=(ECX)&(0x80000u); ECX = (_r); fl_logic(_r,32); }
  /* 11ace01c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ace01e je 0x11ace02b */
  if (C.zf) goto L_11ace02b;
  /* 11ace020 mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11ace024 or dl, 2 */
  { uint32_t _r=(DL)|(0x2u); DL = (_r); fl_logic(_r,8); }
  /* 11ace027 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_11ace02b:;
  /* 11ace02b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace02e and eax, 0x300 */
  { uint32_t _r=(EAX)&(0x300u); EAX = (_r); fl_logic(_r,32); }
  /* 11ace033 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ace036 cmp dword ptr [ebp - 8], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ace03d ja 0x11ace059 */
  if ((!C.cf&&!C.zf)) goto L_11ace059;
  /* 11ace03f cmp dword ptr [ebp - 8], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ace046 je 0x11ace06e */
  if (C.zf) goto L_11ace06e;
  /* 11ace048 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ace04c je 0x11ace064 */
  if (C.zf) goto L_11ace064;
  /* 11ace04e cmp dword ptr [ebp - 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ace055 je 0x11ace07b */
  if (C.zf) goto L_11ace07b;
  /* 11ace057 jmp 0x11ace093 */
  goto L_11ace093;
L_11ace059:;
  /* 11ace059 cmp dword ptr [ebp - 8], 0x300 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ace060 je 0x11ace088 */
  if (C.zf) goto L_11ace088;
  /* 11ace062 jmp 0x11ace093 */
  goto L_11ace093;
L_11ace064:;
  /* 11ace064 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11ace068 mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11ace06c jmp 0x11ace093 */
  goto L_11ace093;
L_11ace06e:;
  /* 11ace06e mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11ace072 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11ace075 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
  /* 11ace079 jmp 0x11ace093 */
  goto L_11ace093;
L_11ace07b:;
  /* 11ace07b mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11ace07f or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 11ace082 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11ace086 jmp 0x11ace093 */
  goto L_11ace093;
L_11ace088:;
  /* 11ace088 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11ace08c or ch, 0xc */
  { uint32_t _r=(C.c.b.h)|(0xcu); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11ace08f mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_11ace093:;
  /* 11ace093 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace096 and edx, 0x30000 */
  { uint32_t _r=(EDX)&(0x30000u); EDX = (_r); fl_logic(_r,32); }
  /* 11ace09c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11ace09f cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ace0a3 je 0x11ace0b9 */
  if (C.zf) goto L_11ace0b9;
  /* 11ace0a5 cmp dword ptr [ebp - 0xc], 0x10000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x10000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ace0ac je 0x11ace0c6 */
  if (C.zf) goto L_11ace0c6;
  /* 11ace0ae cmp dword ptr [ebp - 0xc], 0x20000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ace0b5 je 0x11ace0d3 */
  if (C.zf) goto L_11ace0d3;
  /* 11ace0b7 jmp 0x11ace0db */
  goto L_11ace0db;
L_11ace0b9:;
  /* 11ace0b9 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11ace0bd or ah, 3 */
  { uint32_t _r=(AH)|(0x3u); AH = (_r); fl_logic(_r,8); }
  /* 11ace0c0 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11ace0c4 jmp 0x11ace0db */
  goto L_11ace0db;
L_11ace0c6:;
  /* 11ace0c6 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11ace0ca or ch, 2 */
  { uint32_t _r=(C.c.b.h)|(0x2u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11ace0cd mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11ace0d1 jmp 0x11ace0db */
  goto L_11ace0db;
L_11ace0d3:;
  /* 11ace0d3 mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11ace0d7 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_11ace0db:;
  /* 11ace0db mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace0de and eax, 0x40000 */
  { uint32_t _r=(EAX)&(0x40000u); EAX = (_r); fl_logic(_r,32); }
  /* 11ace0e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ace0e5 je 0x11ace0f2 */
  if (C.zf) goto L_11ace0f2;
  /* 11ace0e7 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11ace0eb or ch, 0x10 */
  { uint32_t _r=(C.c.b.h)|(0x10u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11ace0ee mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_11ace0f2:;
  /* 11ace0f2 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11ace0f6 mov esp, ebp */
  ESP = (EBP);
  /* 11ace0f8 pop ebp */
  EBP = (pop32());
  /* 11ace0f9 ret  */
  ESPCHK(0x11acdfa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e100 @ 0x11ace100 (167 bytes, 56 insns) */
void f_11ace100(void) {
  FTRACE(0x11ace100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ace100 push ebp */
  push32((uint32_t)(EBP));
  /* 11ace101 mov ebp, esp */
  EBP = (ESP);
  /* 11ace103 push ecx */
  push32((uint32_t)(ECX));
  /* 11ace104 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ace10b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace10e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ace113 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11ace116 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ace118 je 0x11ace123 */
  if (C.zf) goto L_11ace123;
  /* 11ace11a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ace11d or ecx, 0x10 */
  { uint32_t _r=(ECX)|(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11ace120 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ace123:;
  /* 11ace123 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace126 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ace12c and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11ace12f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ace131 je 0x11ace13b */
  if (C.zf) goto L_11ace13b;
  /* 11ace133 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ace136 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 11ace138 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ace13b:;
  /* 11ace13b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace13e and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ace144 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11ace147 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ace149 je 0x11ace154 */
  if (C.zf) goto L_11ace154;
  /* 11ace14b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ace14e or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11ace151 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ace154:;
  /* 11ace154 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace157 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ace15c and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11ace15f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ace161 je 0x11ace16c */
  if (C.zf) goto L_11ace16c;
  /* 11ace163 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ace166 or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11ace169 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11ace16c:;
  /* 11ace16c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace16f and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ace175 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11ace178 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ace17a je 0x11ace184 */
  if (C.zf) goto L_11ace184;
  /* 11ace17c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ace17f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11ace181 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ace184:;
  /* 11ace184 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace187 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ace18d and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11ace190 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ace192 je 0x11ace1a0 */
  if (C.zf) goto L_11ace1a0;
  /* 11ace194 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ace197 or edx, 0x80000 */
  { uint32_t _r=(EDX)|(0x80000u); EDX = (_r); fl_logic(_r,32); }
  /* 11ace19d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ace1a0:;
  /* 11ace1a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ace1a3 mov esp, ebp */
  ESP = (EBP);
  /* 11ace1a5 pop ebp */
  EBP = (pop32());
  /* 11ace1a6 ret  */
  ESPCHK(0x11ace100u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e1b0 @ 0x11ace1b0 (183 bytes, 58 insns) */
void f_11ace1b0(void) {
  FTRACE(0x11ace1b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ace1b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ace1b1 mov ebp, esp */
  EBP = (ESP);
  /* 11ace1b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ace1b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace1b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ace1bc cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ace1c1 ja 0x11ace1da */
  if ((!C.cf&&!C.zf)) goto L_11ace1da;
  /* 11ace1c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace1c6 mov edx, dword ptr [0x11af6fb8] */
  EDX = (r32((uint32_t)(0x11af6fb8)));
  /* 11ace1cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ace1ce mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11ace1d2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11ace1d5 jmp 0x11ace263 */
  goto L_11ace263;
L_11ace1da:;
  /* 11ace1da mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace1dd sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11ace1e0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ace1e6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ace1ec mov edx, dword ptr [0x11af6fb8] */
  EDX = (r32((uint32_t)(0x11af6fb8)));
  /* 11ace1f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ace1f4 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11ace1f8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11ace1fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ace1ff je 0x11ace223 */
  if (C.zf) goto L_11ace223;
  /* 11ace201 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace204 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11ace207 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ace20d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 11ace210 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 11ace213 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 11ace216 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 11ace21a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 11ace221 jmp 0x11ace234 */
  goto L_11ace234;
L_11ace223:;
  /* 11ace223 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11ace226 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 11ace229 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 11ace22d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11ace234:;
  /* 11ace234 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ace236 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ace238 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ace23a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11ace23d push ecx */
  push32((uint32_t)(ECX));
  /* 11ace23e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ace241 push edx */
  push32((uint32_t)(EDX));
  /* 11ace242 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11ace245 push eax */
  push32((uint32_t)(EAX));
  /* 11ace246 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ace248 call 0x11ad35c0 */
  push32(0x11ace24du); f_11ad35c0();
  /* 11ace24d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ace250 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ace252 jne 0x11ace258 */
  if (!C.zf) goto L_11ace258;
  /* 11ace254 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ace256 jmp 0x11ace263 */
  goto L_11ace263;
L_11ace258:;
  /* 11ace258 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ace25b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ace260 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_11ace263:;
  /* 11ace263 mov esp, ebp */
  ESP = (EBP);
  /* 11ace265 pop ebp */
  EBP = (pop32());
  /* 11ace266 ret  */
  ESPCHK(0x11ace1b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e270 @ 0x11ace270 (11 bytes, 6 insns) */
void f_11ace270(void) {
  FTRACE(0x11ace270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ace270 push ebp */
  push32((uint32_t)(EBP));
  /* 11ace271 mov ebp, esp */
  EBP = (ESP);
  /* 11ace273 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace276 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ace279 pop ebp */
  EBP = (pop32());
  /* 11ace27a ret  */
  ESPCHK(0x11ace270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e280 @ 0x11ace280 (147 bytes, 43 insns) */
void f_11ace280(void) {
  FTRACE(0x11ace280u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ace280 push ebp */
  push32((uint32_t)(EBP));
  /* 11ace281 mov ebp, esp */
  EBP = (ESP);
  /* 11ace283 push ecx */
  push32((uint32_t)(ECX));
  /* 11ace284 cmp dword ptr [0x11af94d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af94d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ace28b jne 0x11ace2a7 */
  if (!C.zf) goto L_11ace2a7;
  /* 11ace28d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ace291 jl 0x11ace2a2 */
  if ((C.sf!=C.of)) goto L_11ace2a2;
  /* 11ace293 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ace297 jg 0x11ace2a2 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ace2a2;
  /* 11ace299 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace29c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ace29f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11ace2a2:;
  /* 11ace2a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace2a5 jmp 0x11ace30f */
  goto L_11ace30f;
L_11ace2a7:;
  /* 11ace2a7 push 0x11af9654 */
  push32((uint32_t)(0x11af9654u));
  /* 11ace2ac call dword ptr [0x11afb3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3a4))), 0x11ace2b2u);
  /* 11ace2b2 cmp dword ptr [0x11af9644], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af9644))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ace2b9 je 0x11ace2d9 */
  if (C.zf) goto L_11ace2d9;
  /* 11ace2bb push 0x11af9654 */
  push32((uint32_t)(0x11af9654u));
  /* 11ace2c0 call dword ptr [0x11afb394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb394))), 0x11ace2c6u);
  /* 11ace2c6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11ace2c8 call 0x11acd060 */
  push32(0x11ace2cdu); f_11acd060();
  /* 11ace2cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ace2d0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11ace2d7 jmp 0x11ace2e0 */
  goto L_11ace2e0;
L_11ace2d9:;
  /* 11ace2d9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11ace2e0:;
  /* 11ace2e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace2e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ace2e4 call 0x11ace320 */
  push32(0x11ace2e9u); f_11ace320();
  /* 11ace2e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ace2ec mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11ace2ef cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ace2f3 je 0x11ace301 */
  if (C.zf) goto L_11ace301;
  /* 11ace2f5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11ace2f7 call 0x11acd100 */
  push32(0x11ace2fcu); f_11acd100();
  /* 11ace2fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ace2ff jmp 0x11ace30c */
  goto L_11ace30c;
L_11ace301:;
  /* 11ace301 push 0x11af9654 */
  push32((uint32_t)(0x11af9654u));
  /* 11ace306 call dword ptr [0x11afb394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb394))), 0x11ace30cu);
L_11ace30c:;
  /* 11ace30c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11ace30f:;
  /* 11ace30f mov esp, ebp */
  ESP = (EBP);
  /* 11ace311 pop ebp */
  EBP = (pop32());
  /* 11ace312 ret  */
  ESPCHK(0x11ace280u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e320 @ 0x11ace320 (299 bytes, 91 insns) */
void f_11ace320(void) {
  FTRACE(0x11ace320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ace320 push ebp */
  push32((uint32_t)(EBP));
  /* 11ace321 mov ebp, esp */
  EBP = (ESP);
  /* 11ace323 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ace326 cmp dword ptr [0x11af94d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af94d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ace32d jne 0x11ace34c */
  if (!C.zf) goto L_11ace34c;
  /* 11ace32f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ace333 jl 0x11ace344 */
  if ((C.sf!=C.of)) goto L_11ace344;
  /* 11ace335 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ace339 jg 0x11ace344 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ace344;
  /* 11ace33b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace33e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ace341 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11ace344:;
  /* 11ace344 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace347 jmp 0x11ace447 */
  goto L_11ace447;
L_11ace34c:;
  /* 11ace34c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ace353 jge 0x11ace393 */
  if ((C.sf==C.of)) goto L_11ace393;
  /* 11ace355 cmp dword ptr [0x11af71d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11af71d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ace35c jle 0x11ace371 */
  if ((C.zf||C.sf!=C.of)) goto L_11ace371;
  /* 11ace35e push 1 */
  push32((uint32_t)(0x1u));
  /* 11ace360 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace363 push ecx */
  push32((uint32_t)(ECX));
  /* 11ace364 call 0x11ace1b0 */
  push32(0x11ace369u); f_11ace1b0();
  /* 11ace369 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ace36c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11ace36f jmp 0x11ace385 */
  goto L_11ace385;
L_11ace371:;
  /* 11ace371 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace374 mov eax, dword ptr [0x11af6fb8] */
  EAX = (r32((uint32_t)(0x11af6fb8)));
  /* 11ace379 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ace37b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11ace37f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ace382 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11ace385:;
  /* 11ace385 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ace389 jne 0x11ace393 */
  if (!C.zf) goto L_11ace393;
  /* 11ace38b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace38e jmp 0x11ace447 */
  goto L_11ace447;
L_11ace393:;
  /* 11ace393 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace396 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11ace399 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ace39f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ace3a5 mov eax, dword ptr [0x11af6fb8] */
  EAX = (r32((uint32_t)(0x11af6fb8)));
  /* 11ace3aa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ace3ac mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11ace3b0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11ace3b6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ace3b8 je 0x11ace3dc */
  if (C.zf) goto L_11ace3dc;
  /* 11ace3ba mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace3bd sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11ace3c0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ace3c6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 11ace3c9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11ace3cc mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 11ace3cf mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 11ace3d3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11ace3da jmp 0x11ace3ed */
  goto L_11ace3ed;
L_11ace3dc:;
  /* 11ace3dc mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 11ace3df mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11ace3e2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 11ace3e6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_11ace3ed:;
  /* 11ace3ed push 1 */
  push32((uint32_t)(0x1u));
  /* 11ace3ef push 0 */
  push32((uint32_t)(0x0u));
  /* 11ace3f1 push 3 */
  push32((uint32_t)(0x3u));
  /* 11ace3f3 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11ace3f6 push edx */
  push32((uint32_t)(EDX));
  /* 11ace3f7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ace3fa push eax */
  push32((uint32_t)(EAX));
  /* 11ace3fb lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11ace3fe push ecx */
  push32((uint32_t)(ECX));
  /* 11ace3ff push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11ace404 mov edx, dword ptr [0x11af94d4] */
  EDX = (r32((uint32_t)(0x11af94d4)));
  /* 11ace40a push edx */
  push32((uint32_t)(EDX));
  /* 11ace40b call 0x11ad3780 */
  push32(0x11ace410u); f_11ad3780();
  /* 11ace410 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ace413 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ace416 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ace41a jne 0x11ace421 */
  if (!C.zf) goto L_11ace421;
  /* 11ace41c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace41f jmp 0x11ace447 */
  goto L_11ace447;
L_11ace421:;
  /* 11ace421 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ace425 jne 0x11ace431 */
  if (!C.zf) goto L_11ace431;
  /* 11ace427 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ace42a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ace42f jmp 0x11ace447 */
  goto L_11ace447;
L_11ace431:;
  /* 11ace431 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ace434 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ace439 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 11ace43c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ace442 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11ace445 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11ace447:;
  /* 11ace447 mov esp, ebp */
  ESP = (EBP);
  /* 11ace449 pop ebp */
  EBP = (pop32());
  /* 11ace44a ret  */
  ESPCHK(0x11ace320u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e450 @ 0x11ace450 (132 bytes, 51 insns) */
void f_11ace450(void) {
  FTRACE(0x11ace450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ace450 push ebp */
  push32((uint32_t)(EBP));
  /* 11ace451 mov ebp, esp */
  EBP = (ESP);
  /* 11ace453 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ace456 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ace459 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ace45a and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11ace45d add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ace45f sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11ace462 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ace465 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ace468 and eax, 0x8000001f */
  { uint32_t _r=(EAX)&(0x8000001fu); EAX = (_r); fl_logic(_r,32); }
  /* 11ace46d jns 0x11ace474 */
  if (!C.sf) goto L_11ace474;
  /* 11ace46f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11ace470 or eax, 0xffffffe0 */
  { uint32_t _r=(EAX)|(0xffffffe0u); EAX = (_r); fl_logic(_r,32); }
  /* 11ace473 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11ace474:;
  /* 11ace474 mov ecx, 0x1f */
  ECX = (0x1fu);
  /* 11ace479 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ace47b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ace47e or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ace481 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ace484 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ace486 not edx */
  EDX = (~(EDX));
  /* 11ace488 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ace48b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ace48e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace491 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11ace494 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11ace497 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ace499 je 0x11ace49f */
  if (C.zf) goto L_11ace49f;
  /* 11ace49b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ace49d jmp 0x11ace4d0 */
  goto L_11ace4d0;
L_11ace49f:;
  /* 11ace49f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ace4a2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ace4a5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ace4a8 jmp 0x11ace4b3 */
  goto L_11ace4b3;
L_11ace4aa:;
  /* 11ace4aa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ace4ad add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ace4b0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11ace4b3:;
  /* 11ace4b3 cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ace4b7 jge 0x11ace4cb */
  if ((C.sf==C.of)) goto L_11ace4cb;
  /* 11ace4b9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ace4bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace4bf cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ace4c3 je 0x11ace4c9 */
  if (C.zf) goto L_11ace4c9;
  /* 11ace4c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ace4c7 jmp 0x11ace4d0 */
  goto L_11ace4d0;
L_11ace4c9:;
  /* 11ace4c9 jmp 0x11ace4aa */
  goto L_11ace4aa;
L_11ace4cb:;
  /* 11ace4cb mov eax, 1 */
  EAX = (0x1u);
L_11ace4d0:;
  /* 11ace4d0 mov esp, ebp */
  ESP = (EBP);
  /* 11ace4d2 pop ebp */
  EBP = (pop32());
  /* 11ace4d3 ret  */
  ESPCHK(0x11ace450u, _esp0);
  ESP += 4; return;
}

/* __IncMan @ 0x11ace4e0 (168 bytes, 63 insns) */
void f_11ace4e0(void) {
  FTRACE(0x11ace4e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ace4e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ace4e1 mov ebp, esp */
  EBP = (ESP);
  /* 11ace4e3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ace4e6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ace4e9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ace4ea and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11ace4ed add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ace4ef sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11ace4f2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11ace4f5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ace4f8 and eax, 0x8000001f */
  { uint32_t _r=(EAX)&(0x8000001fu); EAX = (_r); fl_logic(_r,32); }
  /* 11ace4fd jns 0x11ace504 */
  if (!C.sf) goto L_11ace504;
  /* 11ace4ff dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11ace500 or eax, 0xffffffe0 */
  { uint32_t _r=(EAX)|(0xffffffe0u); EAX = (_r); fl_logic(_r,32); }
  /* 11ace503 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11ace504:;
  /* 11ace504 mov ecx, 0x1f */
  ECX = (0x1fu);
  /* 11ace509 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ace50b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ace50e mov edx, 1 */
  EDX = (0x1u);
  /* 11ace513 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ace516 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ace518 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ace51b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ace51e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace521 lea edx, [ecx + eax*4] */
  EDX = ((uint32_t)(ECX + EAX*4));
  /* 11ace524 push edx */
  push32((uint32_t)(EDX));
  /* 11ace525 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ace528 push eax */
  push32((uint32_t)(EAX));
  /* 11ace529 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ace52c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace52f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11ace532 push eax */
  push32((uint32_t)(EAX));
  /* 11ace533 call 0x11ad3ae0 */
  push32(0x11ace538u); f_11ad3ae0();
  /* 11ace538 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ace53b mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11ace53e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ace541 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ace544 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ace547 jmp 0x11ace552 */
  goto L_11ace552;
L_11ace549:;
  /* 11ace549 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ace54c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ace54f mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11ace552:;
  /* 11ace552 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ace556 jl 0x11ace581 */
  if ((C.sf!=C.of)) goto L_11ace581;
  /* 11ace558 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ace55c je 0x11ace581 */
  if (C.zf) goto L_11ace581;
  /* 11ace55e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ace561 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace564 lea edx, [ecx + eax*4] */
  EDX = ((uint32_t)(ECX + EAX*4));
  /* 11ace567 push edx */
  push32((uint32_t)(EDX));
  /* 11ace568 push 1 */
  push32((uint32_t)(0x1u));
  /* 11ace56a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ace56d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace570 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11ace573 push edx */
  push32((uint32_t)(EDX));
  /* 11ace574 call 0x11ad3ae0 */
  push32(0x11ace579u); f_11ad3ae0();
  /* 11ace579 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ace57c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11ace57f jmp 0x11ace549 */
  goto L_11ace549;
L_11ace581:;
  /* 11ace581 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ace584 mov esp, ebp */
  ESP = (EBP);
  /* 11ace586 pop ebp */
  EBP = (pop32());
  /* 11ace587 ret  */
  ESPCHK(0x11ace4e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e590 @ 0x11ace590 (219 bytes, 78 insns) */
void f_11ace590(void) {
  FTRACE(0x11ace590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ace590 push ebp */
  push32((uint32_t)(EBP));
  /* 11ace591 mov ebp, esp */
  EBP = (ESP);
  /* 11ace593 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ace596 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11ace59d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ace5a0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ace5a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ace5a6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ace5a9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ace5ac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ace5af mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ace5b2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ace5b3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11ace5b6 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ace5b8 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11ace5bb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11ace5be mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ace5c1 and edx, 0x8000001f */
  { uint32_t _r=(EDX)&(0x8000001fu); EDX = (_r); fl_logic(_r,32); }
  /* 11ace5c7 jns 0x11ace5ce */
  if (!C.sf) goto L_11ace5ce;
  /* 11ace5c9 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11ace5ca or edx, 0xffffffe0 */
  { uint32_t _r=(EDX)|(0xffffffe0u); EDX = (_r); fl_logic(_r,32); }
  /* 11ace5cd inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
L_11ace5ce:;
  /* 11ace5ce mov eax, 0x1f */
  EAX = (0x1fu);
  /* 11ace5d3 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ace5d5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ace5d8 mov edx, 1 */
  EDX = (0x1u);
  /* 11ace5dd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ace5e0 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ace5e2 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11ace5e5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ace5e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace5eb mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11ace5ee and edx, dword ptr [ebp - 0x1c] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x1c))); EDX = (_r); fl_logic(_r,32); }
  /* 11ace5f1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ace5f3 je 0x11ace61f */
  if (C.zf) goto L_11ace61f;
  /* 11ace5f5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ace5f8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ace5fb push eax */
  push32((uint32_t)(EAX));
  /* 11ace5fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace5ff push ecx */
  push32((uint32_t)(ECX));
  /* 11ace600 call 0x11ace450 */
  push32(0x11ace605u); f_11ace450();
  /* 11ace605 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ace608 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ace60a jne 0x11ace61f */
  if (!C.zf) goto L_11ace61f;
  /* 11ace60c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ace60f push edx */
  push32((uint32_t)(EDX));
  /* 11ace610 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace613 push eax */
  push32((uint32_t)(EAX));
  /* 11ace614 call 0x11ace4e0 */
  push32(0x11ace619u); f_11ace4e0();
  /* 11ace619 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ace61c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11ace61f:;
  /* 11ace61f or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ace622 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ace625 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ace627 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ace62a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace62d mov eax, dword ptr [ecx + eax*4] */
  EAX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11ace630 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ace632 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ace635 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace638 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11ace63b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ace63e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ace641 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11ace644 jmp 0x11ace64f */
  goto L_11ace64f;
L_11ace646:;
  /* 11ace646 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ace649 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ace64c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11ace64f:;
  /* 11ace64f cmp dword ptr [ebp - 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ace653 jge 0x11ace664 */
  if ((C.sf==C.of)) goto L_11ace664;
  /* 11ace655 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ace658 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace65b mov dword ptr [eax + edx*4], 0 */
  w32((uint32_t)(EAX + EDX*4), (0x0u));
  /* 11ace662 jmp 0x11ace646 */
  goto L_11ace646;
L_11ace664:;
  /* 11ace664 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ace667 mov esp, ebp */
  ESP = (EBP);
  /* 11ace669 pop ebp */
  EBP = (pop32());
  /* 11ace66a ret  */
  ESPCHK(0x11ace590u, _esp0);
  ESP += 4; return;
}

/* __CopyMan @ 0x11ace670 (76 bytes, 28 insns) */
void f_11ace670(void) {
  FTRACE(0x11ace670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ace670 push ebp */
  push32((uint32_t)(EBP));
  /* 11ace671 mov ebp, esp */
  EBP = (ESP);
  /* 11ace673 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ace676 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ace679 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ace67c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace67f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ace682 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11ace689 jmp 0x11ace694 */
  goto L_11ace694;
L_11ace68b:;
  /* 11ace68b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ace68e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ace691 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11ace694:;
  /* 11ace694 cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ace698 jge 0x11ace6b8 */
  if ((C.sf==C.of)) goto L_11ace6b8;
  /* 11ace69a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ace69d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ace6a0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ace6a2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ace6a4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ace6a7 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ace6aa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ace6ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ace6b0 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ace6b3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ace6b6 jmp 0x11ace68b */
  goto L_11ace68b;
L_11ace6b8:;
  /* 11ace6b8 mov esp, ebp */
  ESP = (EBP);
  /* 11ace6ba pop ebp */
  EBP = (pop32());
  /* 11ace6bb ret  */
  ESPCHK(0x11ace670u, _esp0);
  ESP += 4; return;
}

/* __FillZeroMan @ 0x11ace6c0 (47 bytes, 17 insns) */
void f_11ace6c0(void) {
  FTRACE(0x11ace6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ace6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ace6c1 mov ebp, esp */
  EBP = (ESP);
  /* 11ace6c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ace6c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ace6cb jmp 0x11ace6d6 */
  goto L_11ace6d6;
L_11ace6cd:;
  /* 11ace6cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ace6d0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ace6d3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ace6d6:;
  /* 11ace6d6 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ace6da jge 0x11ace6eb */
  if ((C.sf==C.of)) goto L_11ace6eb;
  /* 11ace6dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ace6df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace6e2 mov dword ptr [edx + ecx*4], 0 */
  w32((uint32_t)(EDX + ECX*4), (0x0u));
  /* 11ace6e9 jmp 0x11ace6cd */
  goto L_11ace6cd;
L_11ace6eb:;
  /* 11ace6eb mov esp, ebp */
  ESP = (EBP);
  /* 11ace6ed pop ebp */
  EBP = (pop32());
  /* 11ace6ee ret  */
  ESPCHK(0x11ace6c0u, _esp0);
  ESP += 4; return;
}

/* __IsZeroMan @ 0x11ace6f0 (55 bytes, 21 insns) */
void f_11ace6f0(void) {
  FTRACE(0x11ace6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ace6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ace6f1 mov ebp, esp */
  EBP = (ESP);
  /* 11ace6f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ace6f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11ace6fb jmp 0x11ace706 */
  goto L_11ace706;
L_11ace6fd:;
  /* 11ace6fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ace700 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ace703 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11ace706:;
  /* 11ace706 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ace70a jge 0x11ace71e */
  if ((C.sf==C.of)) goto L_11ace71e;
  /* 11ace70c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ace70f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace712 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ace716 je 0x11ace71c */
  if (C.zf) goto L_11ace71c;
  /* 11ace718 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ace71a jmp 0x11ace723 */
  goto L_11ace723;
L_11ace71c:;
  /* 11ace71c jmp 0x11ace6fd */
  goto L_11ace6fd;
L_11ace71e:;
  /* 11ace71e mov eax, 1 */
  EAX = (0x1u);
L_11ace723:;
  /* 11ace723 mov esp, ebp */
  ESP = (EBP);
  /* 11ace725 pop ebp */
  EBP = (pop32());
  /* 11ace726 ret  */
  ESPCHK(0x11ace6f0u, _esp0);
  ESP += 4; return;
}

/* __ShrMan @ 0x11ace730 (236 bytes, 82 insns) */
void f_11ace730(void) {
  FTRACE(0x11ace730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ace730 push ebp */
  push32((uint32_t)(EBP));
  /* 11ace731 mov ebp, esp */
  EBP = (ESP);
  /* 11ace733 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ace736 push esi */
  push32((uint32_t)(ESI));
  /* 11ace737 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ace73a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11ace73b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11ace73e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ace740 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11ace743 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ace746 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ace749 and eax, 0x8000001f */
  { uint32_t _r=(EAX)&(0x8000001fu); EAX = (_r); fl_logic(_r,32); }
  /* 11ace74e jns 0x11ace755 */
  if (!C.sf) goto L_11ace755;
  /* 11ace750 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11ace751 or eax, 0xffffffe0 */
  { uint32_t _r=(EAX)|(0xffffffe0u); EAX = (_r); fl_logic(_r,32); }
  /* 11ace754 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11ace755:;
  /* 11ace755 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ace758 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ace75b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ace75e shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ace760 not edx */
  EDX = (~(EDX));
  /* 11ace762 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11ace765 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ace76c mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11ace773 jmp 0x11ace77e */
  goto L_11ace77e;
L_11ace775:;
  /* 11ace775 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ace778 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ace77b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11ace77e:;
  /* 11ace77e cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ace782 jge 0x11ace7d1 */
  if ((C.sf==C.of)) goto L_11ace7d1;
  /* 11ace784 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ace787 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace78a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11ace78d and eax, dword ptr [ebp - 0x14] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + -0x14))); EAX = (_r); fl_logic(_r,32); }
  /* 11ace790 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11ace793 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ace796 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace799 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11ace79c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ace79f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ace7a1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ace7a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace7a7 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11ace7aa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ace7ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace7b0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11ace7b3 or edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11ace7b6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ace7b9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace7bc mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11ace7bf mov ecx, 0x20 */
  ECX = (0x20u);
  /* 11ace7c4 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ace7c7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ace7ca shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ace7cc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ace7cf jmp 0x11ace775 */
  goto L_11ace775;
L_11ace7d1:;
  /* 11ace7d1 mov dword ptr [ebp - 0xc], 2 */
  w32((uint32_t)(EBP + -0xc), (0x2u));
  /* 11ace7d8 jmp 0x11ace7e3 */
  goto L_11ace7e3;
L_11ace7da:;
  /* 11ace7da mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ace7dd sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ace7e0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11ace7e3:;
  /* 11ace7e3 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ace7e7 jl 0x11ace817 */
  if ((C.sf!=C.of)) goto L_11ace817;
  /* 11ace7e9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ace7ec cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ace7ef jl 0x11ace808 */
  if ((C.sf!=C.of)) goto L_11ace808;
  /* 11ace7f1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ace7f4 sub edx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ace7f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ace7fa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace7fd mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace800 mov edx, dword ptr [esi + edx*4] */
  EDX = (r32((uint32_t)(ESI + EDX*4)));
  /* 11ace803 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11ace806 jmp 0x11ace815 */
  goto L_11ace815;
L_11ace808:;
  /* 11ace808 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ace80b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace80e mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_11ace815:;
  /* 11ace815 jmp 0x11ace7da */
  goto L_11ace7da;
L_11ace817:;
  /* 11ace817 pop esi */
  ESI = (pop32());
  /* 11ace818 mov esp, ebp */
  ESP = (EBP);
  /* 11ace81a pop ebp */
  EBP = (pop32());
  /* 11ace81b ret  */
  ESPCHK(0x11ace730u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e820 @ 0x11ace820 (578 bytes, 188 insns) */
void f_11ace820(void) {
  FTRACE(0x11ace820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ace820 push ebp */
  push32((uint32_t)(EBP));
  /* 11ace821 mov ebp, esp */
  EBP = (ESP);
  /* 11ace823 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ace826 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace829 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11ace82b mov cx, word ptr [eax + 0xa] */
  CX = (r16((uint32_t)(EAX + 0xa)));
  /* 11ace82f and ecx, 0x7fff */
  { uint32_t _r=(ECX)&(0x7fffu); ECX = (_r); fl_logic(_r,32); }
  /* 11ace835 sub ecx, 0x3fff */
  { uint32_t _a=(ECX),_b=(0x3fffu),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ace83b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ace83e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace841 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ace843 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 11ace847 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11ace84c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11ace84f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace852 mov edx, dword ptr [ecx + 6] */
  EDX = (r32((uint32_t)(ECX + 0x6)));
  /* 11ace855 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11ace858 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace85b mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 11ace85e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11ace861 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ace864 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ace866 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11ace869 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11ace86c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11ace86f cmp dword ptr [ebp - 4], 0xffffc001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffc001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ace876 jne 0x11ace8b0 */
  if (!C.zf) goto L_11ace8b0;
  /* 11ace878 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ace87f lea ecx, [ebp - 0x18] */
  ECX = ((uint32_t)(EBP + -0x18));
  /* 11ace882 push ecx */
  push32((uint32_t)(ECX));
  /* 11ace883 call 0x11ace6f0 */
  push32(0x11ace888u); f_11ace6f0();
  /* 11ace888 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ace88b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ace88d je 0x11ace898 */
  if (C.zf) goto L_11ace898;
  /* 11ace88f mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11ace896 jmp 0x11ace8ab */
  goto L_11ace8ab;
L_11ace898:;
  /* 11ace898 lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 11ace89b push edx */
  push32((uint32_t)(EDX));
  /* 11ace89c call 0x11ace6c0 */
  push32(0x11ace8a1u); f_11ace6c0();
  /* 11ace8a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ace8a4 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
L_11ace8ab:;
  /* 11ace8ab jmp 0x11ace9fc */
  goto L_11ace9fc;
L_11ace8b0:;
  /* 11ace8b0 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11ace8b3 push eax */
  push32((uint32_t)(EAX));
  /* 11ace8b4 lea ecx, [ebp - 0x30] */
  ECX = ((uint32_t)(EBP + -0x30));
  /* 11ace8b7 push ecx */
  push32((uint32_t)(ECX));
  /* 11ace8b8 call 0x11ace670 */
  push32(0x11ace8bdu); f_11ace670();
  /* 11ace8bd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ace8c0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ace8c3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ace8c6 push eax */
  push32((uint32_t)(EAX));
  /* 11ace8c7 lea ecx, [ebp - 0x18] */
  ECX = ((uint32_t)(EBP + -0x18));
  /* 11ace8ca push ecx */
  push32((uint32_t)(ECX));
  /* 11ace8cb call 0x11ace590 */
  push32(0x11ace8d0u); f_11ace590();
  /* 11ace8d0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ace8d3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ace8d5 je 0x11ace8e0 */
  if (C.zf) goto L_11ace8e0;
  /* 11ace8d7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ace8da add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ace8dd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ace8e0:;
  /* 11ace8e0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ace8e3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ace8e6 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ace8e9 sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ace8ec cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ace8ef jge 0x11ace910 */
  if ((C.sf==C.of)) goto L_11ace910;
  /* 11ace8f1 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11ace8f4 push eax */
  push32((uint32_t)(EAX));
  /* 11ace8f5 call 0x11ace6c0 */
  push32(0x11ace8fau); f_11ace6c0();
  /* 11ace8fa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ace8fd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ace904 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 11ace90b jmp 0x11ace9fc */
  goto L_11ace9fc;
L_11ace910:;
  /* 11ace910 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ace913 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ace916 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ace919 jg 0x11ace980 */
  if ((!C.zf&&C.sf==C.of)) goto L_11ace980;
  /* 11ace91b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ace91e mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ace921 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ace924 mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
  /* 11ace927 lea edx, [ebp - 0x30] */
  EDX = ((uint32_t)(EBP + -0x30));
  /* 11ace92a push edx */
  push32((uint32_t)(EDX));
  /* 11ace92b lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11ace92e push eax */
  push32((uint32_t)(EAX));
  /* 11ace92f call 0x11ace670 */
  push32(0x11ace934u); f_11ace670();
  /* 11ace934 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ace937 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11ace93a push ecx */
  push32((uint32_t)(ECX));
  /* 11ace93b lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 11ace93e push edx */
  push32((uint32_t)(EDX));
  /* 11ace93f call 0x11ace730 */
  push32(0x11ace944u); f_11ace730();
  /* 11ace944 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ace947 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ace94a mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ace94d push ecx */
  push32((uint32_t)(ECX));
  /* 11ace94e lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 11ace951 push edx */
  push32((uint32_t)(EDX));
  /* 11ace952 call 0x11ace590 */
  push32(0x11ace957u); f_11ace590();
  /* 11ace957 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ace95a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ace95d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11ace960 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ace963 push ecx */
  push32((uint32_t)(ECX));
  /* 11ace964 lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 11ace967 push edx */
  push32((uint32_t)(EDX));
  /* 11ace968 call 0x11ace730 */
  push32(0x11ace96du); f_11ace730();
  /* 11ace96d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ace970 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11ace977 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 11ace97e jmp 0x11ace9fc */
  goto L_11ace9fc;
L_11ace980:;
  /* 11ace980 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ace983 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ace986 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ace988 jl 0x11ace9cb */
  if ((C.sf!=C.of)) goto L_11ace9cb;
  /* 11ace98a lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 11ace98d push edx */
  push32((uint32_t)(EDX));
  /* 11ace98e call 0x11ace6c0 */
  push32(0x11ace993u); f_11ace6c0();
  /* 11ace993 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ace996 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ace999 or eax, 0x80000000 */
  { uint32_t _r=(EAX)|(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 11ace99e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ace9a1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ace9a4 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ace9a7 push edx */
  push32((uint32_t)(EDX));
  /* 11ace9a8 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11ace9ab push eax */
  push32((uint32_t)(EAX));
  /* 11ace9ac call 0x11ace730 */
  push32(0x11ace9b1u); f_11ace730();
  /* 11ace9b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ace9b4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ace9b7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ace9b9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ace9bc add edx, dword ptr [eax + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ace9bf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ace9c2 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 11ace9c9 jmp 0x11ace9fc */
  goto L_11ace9fc;
L_11ace9cb:;
  /* 11ace9cb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ace9ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ace9d1 add edx, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ace9d4 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ace9d7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ace9da and eax, 0x7fffffff */
  { uint32_t _r=(EAX)&(0x7fffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ace9df mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ace9e2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ace9e5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11ace9e8 push edx */
  push32((uint32_t)(EDX));
  /* 11ace9e9 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11ace9ec push eax */
  push32((uint32_t)(EAX));
  /* 11ace9ed call 0x11ace730 */
  push32(0x11ace9f2u); f_11ace730();
  /* 11ace9f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ace9f5 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
L_11ace9fc:;
  /* 11ace9fc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ace9ff mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11acea02 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acea05 mov eax, 0x20 */
  EAX = (0x20u);
  /* 11acea0a sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acea0c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11acea0f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acea12 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11acea15 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11acea17 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11acea1a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11acea1c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11acea1f neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11acea21 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acea23 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11acea29 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11acea2b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11acea2e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11acea31 cmp dword ptr [edx + 0x10], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acea35 jne 0x11acea4a */
  if (!C.zf) goto L_11acea4a;
  /* 11acea37 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acea3a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11acea3d mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11acea40 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acea43 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11acea46 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11acea48 jmp 0x11acea5b */
  goto L_11acea5b;
L_11acea4a:;
  /* 11acea4a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11acea4d cmp dword ptr [ecx + 0x10], 0x20 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acea51 jne 0x11acea5b */
  if (!C.zf) goto L_11acea5b;
  /* 11acea53 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acea56 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11acea59 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
L_11acea5b:;
  /* 11acea5b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11acea5e mov esp, ebp */
  ESP = (EBP);
  /* 11acea60 pop ebp */
  EBP = (pop32());
  /* 11acea61 ret  */
  ESPCHK(0x11ace820u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ea70 @ 0x11acea70 (26 bytes, 11 insns) */
void f_11acea70(void) {
  FTRACE(0x11acea70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acea70 push ebp */
  push32((uint32_t)(EBP));
  /* 11acea71 mov ebp, esp */
  EBP = (ESP);
  /* 11acea73 push 0x11af71e0 */
  push32((uint32_t)(0x11af71e0u));
  /* 11acea78 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acea7b push eax */
  push32((uint32_t)(EAX));
  /* 11acea7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acea7f push ecx */
  push32((uint32_t)(ECX));
  /* 11acea80 call 0x11ace820 */
  push32(0x11acea85u); f_11ace820();
  /* 11acea85 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acea88 pop ebp */
  EBP = (pop32());
  /* 11acea89 ret  */
  ESPCHK(0x11acea70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ea90 @ 0x11acea90 (26 bytes, 11 insns) */
void f_11acea90(void) {
  FTRACE(0x11acea90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acea90 push ebp */
  push32((uint32_t)(EBP));
  /* 11acea91 mov ebp, esp */
  EBP = (ESP);
  /* 11acea93 push 0x11af71f8 */
  push32((uint32_t)(0x11af71f8u));
  /* 11acea98 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acea9b push eax */
  push32((uint32_t)(EAX));
  /* 11acea9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acea9f push ecx */
  push32((uint32_t)(ECX));
  /* 11aceaa0 call 0x11ace820 */
  push32(0x11aceaa5u); f_11ace820();
  /* 11aceaa5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aceaa8 pop ebp */
  EBP = (pop32());
  /* 11aceaa9 ret  */
  ESPCHK(0x11acea90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eab0 @ 0x11aceab0 (191 bytes, 58 insns) */
void f_11aceab0(void) {
  FTRACE(0x11aceab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11aceab0 push ebp */
  push32((uint32_t)(EBP));
  /* 11aceab1 mov ebp, esp */
  EBP = (ESP);
  /* 11aceab3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11aceab6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11aceabd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11aceac0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11aceac2 mov cx, word ptr [eax + 0xa] */
  CX = (r16((uint32_t)(EAX + 0xa)));
  /* 11aceac6 and ecx, 0x7fff */
  { uint32_t _r=(ECX)&(0x7fffu); ECX = (_r); fl_logic(_r,32); }
  /* 11aceacc mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11acead0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acead3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11acead5 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 11acead9 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11aceade mov word ptr [ebp - 0x18], ax */
  w16((uint32_t)(EBP + -0x18), (AX));
  /* 11aceae2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11aceae5 mov edx, dword ptr [ecx + 6] */
  EDX = (r32((uint32_t)(ECX + 0x6)));
  /* 11aceae8 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11aceaeb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11aceaee mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 11aceaf1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11aceaf4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11aceaf7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11aceaf9 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11aceafc shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11aceaff mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11aceb02 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11aceb04 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 11aceb07 push ecx */
  push32((uint32_t)(ECX));
  /* 11aceb08 call 0x11ace590 */
  push32(0x11aceb0du); f_11ace590();
  /* 11aceb0d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aceb10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11aceb12 je 0x11aceb27 */
  if (C.zf) goto L_11aceb27;
  /* 11aceb14 mov dword ptr [ebp - 0x10], 0x80000000 */
  w32((uint32_t)(EBP + -0x10), (0x80000000u));
  /* 11aceb1b mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11aceb1f add dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a+_b; DX = (_r); fl_add(_a,_b,_r,16); }
  /* 11aceb23 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_11aceb27:;
  /* 11aceb27 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11aceb2a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11aceb2f cmp eax, 0x7fff */
  { uint32_t _a=(EAX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aceb34 jne 0x11aceb3d */
  if (!C.zf) goto L_11aceb3d;
  /* 11aceb36 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_11aceb3d:;
  /* 11aceb3d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11aceb40 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11aceb43 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11aceb46 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11aceb49 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11aceb4c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11aceb4e mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11aceb51 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11aceb57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11aceb5a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11aceb5f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11aceb61 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11aceb64 mov word ptr [ecx + 8], dx */
  w16((uint32_t)(ECX + 0x8), (DX));
  /* 11aceb68 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11aceb6b mov esp, ebp */
  ESP = (EBP);
  /* 11aceb6d pop ebp */
  EBP = (pop32());
  /* 11aceb6e ret  */
  ESPCHK(0x11aceab0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb70 @ 0x11aceb70 (54 bytes, 24 insns) */
void f_11aceb70(void) {
  FTRACE(0x11aceb70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11aceb70 push ebp */
  push32((uint32_t)(EBP));
  /* 11aceb71 mov ebp, esp */
  EBP = (ESP);
  /* 11aceb73 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11aceb76 push 0 */
  push32((uint32_t)(0x0u));
  /* 11aceb78 push 0 */
  push32((uint32_t)(0x0u));
  /* 11aceb7a push 0 */
  push32((uint32_t)(0x0u));
  /* 11aceb7c push 0 */
  push32((uint32_t)(0x0u));
  /* 11aceb7e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11aceb81 push eax */
  push32((uint32_t)(EAX));
  /* 11aceb82 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 11aceb85 push ecx */
  push32((uint32_t)(ECX));
  /* 11aceb86 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11aceb89 push edx */
  push32((uint32_t)(EDX));
  /* 11aceb8a call 0x11ad3de0 */
  push32(0x11aceb8fu); f_11ad3de0();
  /* 11aceb8f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aceb92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11aceb95 push eax */
  push32((uint32_t)(EAX));
  /* 11aceb96 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11aceb99 push ecx */
  push32((uint32_t)(ECX));
  /* 11aceb9a call 0x11acea70 */
  push32(0x11aceb9fu); f_11acea70();
  /* 11aceb9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aceba2 mov esp, ebp */
  ESP = (EBP);
  /* 11aceba4 pop ebp */
  EBP = (pop32());
  /* 11aceba5 ret  */
  ESPCHK(0x11aceb70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ebb0 @ 0x11acebb0 (54 bytes, 24 insns) */
void f_11acebb0(void) {
  FTRACE(0x11acebb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acebb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11acebb1 mov ebp, esp */
  EBP = (ESP);
  /* 11acebb3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acebb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acebb8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acebba push 0 */
  push32((uint32_t)(0x0u));
  /* 11acebbc push 1 */
  push32((uint32_t)(0x1u));
  /* 11acebbe mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acebc1 push eax */
  push32((uint32_t)(EAX));
  /* 11acebc2 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 11acebc5 push ecx */
  push32((uint32_t)(ECX));
  /* 11acebc6 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11acebc9 push edx */
  push32((uint32_t)(EDX));
  /* 11acebca call 0x11ad3de0 */
  push32(0x11acebcfu); f_11ad3de0();
  /* 11acebcf add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acebd2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acebd5 push eax */
  push32((uint32_t)(EAX));
  /* 11acebd6 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11acebd9 push ecx */
  push32((uint32_t)(ECX));
  /* 11acebda call 0x11aceab0 */
  push32(0x11acebdfu); f_11aceab0();
  /* 11acebdf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acebe2 mov esp, ebp */
  ESP = (EBP);
  /* 11acebe4 pop ebp */
  EBP = (pop32());
  /* 11acebe5 ret  */
  ESPCHK(0x11acebb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ebf0 @ 0x11acebf0 (54 bytes, 24 insns) */
void f_11acebf0(void) {
  FTRACE(0x11acebf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acebf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11acebf1 mov ebp, esp */
  EBP = (ESP);
  /* 11acebf3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acebf6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acebf8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acebfa push 0 */
  push32((uint32_t)(0x0u));
  /* 11acebfc push 0 */
  push32((uint32_t)(0x0u));
  /* 11acebfe mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acec01 push eax */
  push32((uint32_t)(EAX));
  /* 11acec02 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 11acec05 push ecx */
  push32((uint32_t)(ECX));
  /* 11acec06 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11acec09 push edx */
  push32((uint32_t)(EDX));
  /* 11acec0a call 0x11ad3de0 */
  push32(0x11acec0fu); f_11ad3de0();
  /* 11acec0f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acec12 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acec15 push eax */
  push32((uint32_t)(EAX));
  /* 11acec16 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11acec19 push ecx */
  push32((uint32_t)(ECX));
  /* 11acec1a call 0x11acea90 */
  push32(0x11acec1fu); f_11acea90();
  /* 11acec1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acec22 mov esp, ebp */
  ESP = (EBP);
  /* 11acec24 pop ebp */
  EBP = (pop32());
  /* 11acec25 ret  */
  ESPCHK(0x11acebf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec30 @ 0x11acec30 (250 bytes, 90 insns) */
void f_11acec30(void) {
  FTRACE(0x11acec30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acec30 push ebp */
  push32((uint32_t)(EBP));
  /* 11acec31 mov ebp, esp */
  EBP = (ESP);
  /* 11acec33 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acec36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acec39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11acec3c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11acec3f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11acec42 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11acec45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acec48 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 11acec4b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acec4e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acec51 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11acec54:;
  /* 11acec54 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acec58 jle 0x11acec9b */
  if ((C.zf||C.sf!=C.of)) goto L_11acec9b;
  /* 11acec5a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acec5d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11acec60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acec62 je 0x11acec78 */
  if (C.zf) goto L_11acec78;
  /* 11acec64 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acec67 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11acec6a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11acec6d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acec70 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acec73 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11acec76 jmp 0x11acec7f */
  goto L_11acec7f;
L_11acec78:;
  /* 11acec78 mov dword ptr [ebp - 0xc], 0x30 */
  w32((uint32_t)(EBP + -0xc), (0x30u));
L_11acec7f:;
  /* 11acec7f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acec82 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11acec85 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11acec87 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acec8a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acec8d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11acec90 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acec93 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acec96 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11acec99 jmp 0x11acec54 */
  goto L_11acec54;
L_11acec9b:;
  /* 11acec9b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acec9e mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11aceca1 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aceca5 jl 0x11acece4 */
  if ((C.sf!=C.of)) goto L_11acece4;
  /* 11aceca7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acecaa movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11acecad cmp ecx, 0x35 */
  { uint32_t _a=(ECX),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acecb0 jl 0x11acece4 */
  if ((C.sf!=C.of)) goto L_11acece4;
  /* 11acecb2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acecb5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acecb8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11acecbb:;
  /* 11acecbb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acecbe movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11acecc1 cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acecc4 jne 0x11acecd7 */
  if (!C.zf) goto L_11acecd7;
  /* 11acecc6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acecc9 mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 11aceccc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11aceccf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acecd2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11acecd5 jmp 0x11acecbb */
  goto L_11acecbb;
L_11acecd7:;
  /* 11acecd7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acecda mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11acecdc add dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 11acecdf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acece2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
L_11acece4:;
  /* 11acece4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acece7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11acecea cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11aceced jne 0x11aced00 */
  if (!C.zf) goto L_11aced00;
  /* 11acecef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11acecf2 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11acecf5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acecf8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11acecfb mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11acecfe jmp 0x11aced26 */
  goto L_11aced26;
L_11aced00:;
  /* 11aced00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11aced03 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11aced06 push eax */
  push32((uint32_t)(EAX));
  /* 11aced07 call 0x11acc490 */
  push32(0x11aced0cu); f_11acc490();
  /* 11aced0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aced0f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11aced12 push eax */
  push32((uint32_t)(EAX));
  /* 11aced13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11aced16 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11aced19 push ecx */
  push32((uint32_t)(ECX));
  /* 11aced1a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11aced1d push edx */
  push32((uint32_t)(EDX));
  /* 11aced1e call 0x11acef80 */
  push32(0x11aced23u); f_11acef80();
  /* 11aced23 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11aced26:;
  /* 11aced26 mov esp, ebp */
  ESP = (EBP);
  /* 11aced28 pop ebp */
  EBP = (pop32());
  /* 11aced29 ret  */
  ESPCHK(0x11acec30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed30 @ 0x11aced30 (119 bytes, 44 insns) */
void f_11aced30(void) {
  FTRACE(0x11aced30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11aced30 push ebp */
  push32((uint32_t)(EBP));
  /* 11aced31 mov ebp, esp */
  EBP = (ESP);
  /* 11aced33 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11aced36 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11aced39 push eax */
  push32((uint32_t)(EAX));
  /* 11aced3a lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11aced3d push ecx */
  push32((uint32_t)(ECX));
  /* 11aced3e call 0x11acedb0 */
  push32(0x11aced43u); f_11acedb0();
  /* 11aced43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aced46 lea edx, [ebp - 0x28] */
  EDX = ((uint32_t)(EBP + -0x28));
  /* 11aced49 push edx */
  push32((uint32_t)(EDX));
  /* 11aced4a push 0 */
  push32((uint32_t)(0x0u));
  /* 11aced4c push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11aced4e sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11aced51 mov eax, esp */
  EAX = (ESP);
  /* 11aced53 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11aced56 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11aced58 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11aced5b mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11aced5e mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11aced62 mov word ptr [eax + 8], cx */
  w16((uint32_t)(EAX + 0x8), (CX));
  /* 11aced66 call 0x11ad4960 */
  push32(0x11aced6bu); f_11ad4960();
  /* 11aced6b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aced6e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11aced71 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11aced74 movsx eax, byte ptr [ebp - 0x26] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x26))));
  /* 11aced78 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11aced7b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11aced7d movsx edx, word ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x28))));
  /* 11aced81 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11aced84 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11aced87 lea ecx, [ebp - 0x24] */
  ECX = ((uint32_t)(EBP + -0x24));
  /* 11aced8a push ecx */
  push32((uint32_t)(ECX));
  /* 11aced8b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11aced8e push edx */
  push32((uint32_t)(EDX));
  /* 11aced8f call 0x11acc610 */
  push32(0x11aced94u); f_11acc610();
  /* 11aced94 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11aced97 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11aced9a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11aced9d mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11aceda0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11aceda3 mov esp, ebp */
  ESP = (EBP);
  /* 11aceda5 pop ebp */
  EBP = (pop32());
  /* 11aceda6 ret  */
  ESPCHK(0x11aced30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000edb0 @ 0x11acedb0 (354 bytes, 104 insns) */
void f_11acedb0(void) {
  FTRACE(0x11acedb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acedb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11acedb1 mov ebp, esp */
  EBP = (ESP);
  /* 11acedb3 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acedb6 mov dword ptr [ebp - 0xc], 0x80000000 */
  w32((uint32_t)(EBP + -0xc), (0x80000000u));
  /* 11acedbd mov word ptr [ebp - 4], 0 */
  w16((uint32_t)(EBP + -0x4), (0x0u));
  /* 11acedc3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acedc6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11acedc8 mov cx, word ptr [eax + 6] */
  CX = (r16((uint32_t)(EAX + 0x6)));
  /* 11acedcc and ecx, 0x7ff0 */
  { uint32_t _r=(ECX)&(0x7ff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11acedd2 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11acedd5 mov word ptr [ebp - 0x14], cx */
  w16((uint32_t)(EBP + -0x14), (CX));
  /* 11acedd9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11aceddc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11acedde mov ax, word ptr [edx + 6] */
  AX = (r16((uint32_t)(EDX + 0x6)));
  /* 11acede2 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11acede7 mov word ptr [ebp - 0x18], ax */
  w16((uint32_t)(EBP + -0x18), (AX));
  /* 11acedeb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acedee mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11acedf1 and edx, 0xfffff */
  { uint32_t _r=(EDX)&(0xfffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11acedf7 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11acedfa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acedfd mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11acedff mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11acee02 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11acee05 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11acee0b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11acee0e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acee12 je 0x11acee27 */
  if (C.zf) goto L_11acee27;
  /* 11acee14 cmp dword ptr [ebp - 0x1c], 0x7ff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x7ffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acee1b je 0x11acee1f */
  if (C.zf) goto L_11acee1f;
  /* 11acee1d jmp 0x11acee6a */
  goto L_11acee6a;
L_11acee1f:;
  /* 11acee1f mov word ptr [ebp - 4], 0x7fff */
  w16((uint32_t)(EBP + -0x4), (0x7fffu));
  /* 11acee25 jmp 0x11acee85 */
  goto L_11acee85;
L_11acee27:;
  /* 11acee27 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acee2b jne 0x11acee54 */
  if (!C.zf) goto L_11acee54;
  /* 11acee2d cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acee31 jne 0x11acee54 */
  if (!C.zf) goto L_11acee54;
  /* 11acee33 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acee36 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11acee3d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acee40 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11acee46 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acee49 mov word ptr [edx + 8], 0 */
  w16((uint32_t)(EDX + 0x8), (0x0u));
  /* 11acee4f jmp 0x11acef0e */
  goto L_11acef0e;
L_11acee54:;
  /* 11acee54 movsx eax, word ptr [ebp - 0x14] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x14))));
  /* 11acee58 add eax, 0x3c01 */
  { uint32_t _a=(EAX),_b=(0x3c01u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acee5d mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11acee61 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11acee68 jmp 0x11acee85 */
  goto L_11acee85;
L_11acee6a:;
  /* 11acee6a mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 11acee6e sub cx, 0x3ff */
  { uint32_t _a=(CX),_b=(0x3ffu),_r=_a-_b; CX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11acee73 mov word ptr [ebp - 0x14], cx */
  w16((uint32_t)(EBP + -0x14), (CX));
  /* 11acee77 movsx edx, word ptr [ebp - 0x14] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x14))));
  /* 11acee7b add edx, 0x3fff */
  { uint32_t _a=(EDX),_b=(0x3fffu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acee81 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_11acee85:;
  /* 11acee85 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acee88 shl eax, 0xb */
  EAX = (sh_shl((uint32_t)(EAX), (0xbu)&0x1f, 32));
  /* 11acee8b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11acee8e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11acee90 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11acee93 shr edx, 0x15 */
  EDX = (sh_shr((uint32_t)(EDX), (0x15u)&0x1f, 32));
  /* 11acee96 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11acee98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acee9b mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11acee9e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11aceea1 shl ecx, 0xb */
  ECX = (sh_shl((uint32_t)(ECX), (0xbu)&0x1f, 32));
  /* 11aceea4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11aceea7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11aceea9:;
  /* 11aceea9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11aceeac mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11aceeaf and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11aceeb5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11aceeb7 jne 0x11aceef4 */
  if (!C.zf) goto L_11aceef4;
  /* 11aceeb9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11aceebc mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11aceebf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11aceec1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11aceec4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11aceec6 and edx, 0x80000000 */
  { uint32_t _r=(EDX)&(0x80000000u); EDX = (_r); fl_logic(_r,32); }
  /* 11aceecc neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11aceece sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11aceed0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11aceed2 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11aceed4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11aceed7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11aceeda mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11aceedd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11aceedf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11aceee1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11aceee4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11aceee6 mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11aceeea sub dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11aceeee mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
  /* 11aceef2 jmp 0x11aceea9 */
  goto L_11aceea9;
L_11aceef4:;
  /* 11aceef4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11aceef7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11aceefc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11aceeff and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11acef05 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11acef07 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acef0a mov word ptr [edx + 8], ax */
  w16((uint32_t)(EDX + 0x8), (AX));
L_11acef0e:;
  /* 11acef0e mov esp, ebp */
  ESP = (EBP);
  /* 11acef10 pop ebp */
  EBP = (pop32());
  /* 11acef11 ret  */
  ESPCHK(0x11acedb0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11acef20 (88 bytes, 40 insns) */
void f_11acef20(void) {
  FTRACE(0x11acef20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acef20 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11acef24 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11acef28 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11acef2a je 0x11acef73 */
  if (C.zf) goto L_11acef73;
  /* 11acef2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11acef2e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11acef32 push edi */
  push32((uint32_t)(EDI));
  /* 11acef33 mov edi, ecx */
  EDI = (ECX);
  /* 11acef35 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acef38 jb 0x11acef67 */
  if (C.cf) goto L_11acef67;
  /* 11acef3a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11acef3c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11acef3f je 0x11acef49 */
  if (C.zf) goto L_11acef49;
  /* 11acef41 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11acef43:;
  /* 11acef43 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11acef45 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11acef46 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11acef47 jne 0x11acef43 */
  if (!C.zf) goto L_11acef43;
L_11acef49:;
  /* 11acef49 mov ecx, eax */
  ECX = (EAX);
  /* 11acef4b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11acef4e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acef50 mov ecx, eax */
  ECX = (EAX);
  /* 11acef52 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11acef55 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acef57 mov ecx, edx */
  ECX = (EDX);
  /* 11acef59 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11acef5c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11acef5f je 0x11acef67 */
  if (C.zf) goto L_11acef67;
  /* 11acef61 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11acef63 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11acef65 je 0x11acef6d */
  if (C.zf) goto L_11acef6d;
L_11acef67:;
  /* 11acef67 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11acef69 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11acef6a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11acef6b jne 0x11acef67 */
  if (!C.zf) goto L_11acef67;
L_11acef6d:;
  /* 11acef6d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11acef71 pop edi */
  EDI = (pop32());
  /* 11acef72 ret  */
  ESPCHK(0x11acef20u, _esp0);
  ESP += 4; return;
L_11acef73:;
  /* 11acef73 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11acef77 ret  */
  ESPCHK(0x11acef20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ef80 @ 0x11acef80 (664 bytes, 264 insns) [15 switch table(s)] */
void f_11acef80(void) {
  FTRACE(0x11acef80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acef80 push ebp */
  push32((uint32_t)(EBP));
  /* 11acef81 mov ebp, esp */
  EBP = (ESP);
  /* 11acef83 push edi */
  push32((uint32_t)(EDI));
  /* 11acef84 push esi */
  push32((uint32_t)(ESI));
  /* 11acef85 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11acef88 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11acef8b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11acef8e mov eax, ecx */
  EAX = (ECX);
  /* 11acef90 mov edx, ecx */
  EDX = (ECX);
  /* 11acef92 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acef94 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acef96 jbe 0x11acefa0 */
  if ((C.cf||C.zf)) goto L_11acefa0;
  /* 11acef98 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acef9a jb 0x11acf118 */
  if (C.cf) goto L_11acf118;
L_11acefa0:;
  /* 11acefa0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11acefa6 jne 0x11acefbc */
  if (!C.zf) goto L_11acefbc;
  /* 11acefa8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11acefab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11acefae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acefb1 jb 0x11acefdc */
  if (C.cf) goto L_11acefdc;
  /* 11acefb3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11acefb5 jmp dword ptr [edx*4 + 0x11acf0c8] */
  switch (EDX) {
    case 0: goto L_11acf0d8;
    case 1: goto L_11acf0e0;
    case 2: goto L_11acf0ec;
    case 3: goto L_11acf100;
    default: x86_unimpl("switch@0x11acefb5 out of table"); return;
  }
L_11acefbc:;
  /* 11acefbc mov eax, edi */
  EAX = (EDI);
  /* 11acefbe mov edx, 3 */
  EDX = (0x3u);
  /* 11acefc3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acefc6 jb 0x11acefd4 */
  if (C.cf) goto L_11acefd4;
  /* 11acefc8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11acefcb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acefcd jmp dword ptr [eax*4 + 0x11acefe0] */
  switch (EAX) {
    case 1: goto L_11aceff0;
    case 2: goto L_11acf01c;
    case 3: goto L_11acf040;
    default: x86_unimpl("switch@0x11acefcd out of table"); return;
  }
L_11acefd4:;
  /* 11acefd4 jmp dword ptr [ecx*4 + 0x11acf0d8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11acf0d8)))); return;
  /* 11acefdb nop  */
  /* nop */
L_11acefdc:;
  /* 11acefdc jmp dword ptr [ecx*4 + 0x11acf05c] */
  switch (ECX) {
    case 0: goto L_11acf0bf;
    case 1: goto L_11acf0ac;
    case 2: goto L_11acf0a4;
    case 3: goto L_11acf09c;
    case 4: goto L_11acf094;
    case 5: goto L_11acf08c;
    case 6: goto L_11acf084;
    case 7: goto L_11acf07c;
    default: x86_unimpl("switch@0x11acefdc out of table"); return;
  }
  /* 11acefe3 nop  */
  /* nop */
L_11aceff0:;
  /* 11aceff0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11aceff2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11aceff4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11aceff6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11aceff9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11aceffc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11acefff shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11acf002 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11acf005 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11acf008 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11acf00b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acf00e jb 0x11acefdc */
  if (C.cf) goto L_11acefdc;
  /* 11acf010 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11acf012 jmp dword ptr [edx*4 + 0x11acf0c8] */
  switch (EDX) {
    case 0: goto L_11acf0d8;
    case 1: goto L_11acf0e0;
    case 2: goto L_11acf0ec;
    case 3: goto L_11acf100;
    default: x86_unimpl("switch@0x11acf012 out of table"); return;
  }
  /* 11acf019 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11acf01c:;
  /* 11acf01c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11acf01e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11acf020 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11acf022 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11acf025 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11acf028 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11acf02b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11acf02e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11acf031 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acf034 jb 0x11acefdc */
  if (C.cf) goto L_11acefdc;
  /* 11acf036 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11acf038 jmp dword ptr [edx*4 + 0x11acf0c8] */
  switch (EDX) {
    case 0: goto L_11acf0d8;
    case 1: goto L_11acf0e0;
    case 2: goto L_11acf0ec;
    case 3: goto L_11acf100;
    default: x86_unimpl("switch@0x11acf038 out of table"); return;
  }
  /* 11acf03f nop  */
  /* nop */
L_11acf040:;
  /* 11acf040 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11acf042 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11acf044 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11acf046 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11acf047 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11acf04a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11acf04b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acf04e jb 0x11acefdc */
  if (C.cf) goto L_11acefdc;
  /* 11acf050 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11acf052 jmp dword ptr [edx*4 + 0x11acf0c8] */
  switch (EDX) {
    case 0: goto L_11acf0d8;
    case 1: goto L_11acf0e0;
    case 2: goto L_11acf0ec;
    case 3: goto L_11acf100;
    default: x86_unimpl("switch@0x11acf052 out of table"); return;
  }
  /* 11acf059 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11acf07c:;
  /* 11acf07c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11acf080 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11acf084:;
  /* 11acf084 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11acf088 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11acf08c:;
  /* 11acf08c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11acf090 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11acf094:;
  /* 11acf094 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11acf098 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11acf09c:;
  /* 11acf09c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11acf0a0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11acf0a4:;
  /* 11acf0a4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11acf0a8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11acf0ac:;
  /* 11acf0ac mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11acf0b0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11acf0b4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11acf0bb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11acf0bd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11acf0bf:;
  /* 11acf0bf jmp dword ptr [edx*4 + 0x11acf0c8] */
  switch (EDX) {
    case 0: goto L_11acf0d8;
    case 1: goto L_11acf0e0;
    case 2: goto L_11acf0ec;
    case 3: goto L_11acf100;
    default: x86_unimpl("switch@0x11acf0bf out of table"); return;
  }
  /* 11acf0c6 mov edi, edi */
  EDI = (EDI);
L_11acf0d8:;
  /* 11acf0d8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acf0db pop esi */
  ESI = (pop32());
  /* 11acf0dc pop edi */
  EDI = (pop32());
  /* 11acf0dd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11acf0de ret  */
  ESPCHK(0x11acef80u, _esp0);
  ESP += 4; return;
  /* 11acf0df nop  */
  /* nop */
L_11acf0e0:;
  /* 11acf0e0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11acf0e2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11acf0e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acf0e7 pop esi */
  ESI = (pop32());
  /* 11acf0e8 pop edi */
  EDI = (pop32());
  /* 11acf0e9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11acf0ea ret  */
  ESPCHK(0x11acef80u, _esp0);
  ESP += 4; return;
  /* 11acf0eb nop  */
  /* nop */
L_11acf0ec:;
  /* 11acf0ec mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11acf0ee mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11acf0f0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11acf0f3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11acf0f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acf0f9 pop esi */
  ESI = (pop32());
  /* 11acf0fa pop edi */
  EDI = (pop32());
  /* 11acf0fb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11acf0fc ret  */
  ESPCHK(0x11acef80u, _esp0);
  ESP += 4; return;
  /* 11acf0fd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11acf100:;
  /* 11acf100 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11acf102 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11acf104 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11acf107 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11acf10a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11acf10d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11acf110 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acf113 pop esi */
  ESI = (pop32());
  /* 11acf114 pop edi */
  EDI = (pop32());
  /* 11acf115 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11acf116 ret  */
  ESPCHK(0x11acef80u, _esp0);
  ESP += 4; return;
  /* 11acf117 nop  */
  /* nop */
L_11acf118:;
  /* 11acf118 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11acf11c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11acf120 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11acf126 jne 0x11acf14c */
  if (!C.zf) goto L_11acf14c;
  /* 11acf128 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11acf12b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11acf12e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acf131 jb 0x11acf140 */
  if (C.cf) goto L_11acf140;
  /* 11acf133 std  */
  C.df=1;
  /* 11acf134 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11acf136 cld  */
  C.df=0;
  /* 11acf137 jmp dword ptr [edx*4 + 0x11acf260] */
  switch (EDX) {
    case 0: goto L_11acf270;
    case 1: goto L_11acf278;
    case 2: goto L_11acf288;
    case 3: goto L_11acf29c;
    default: x86_unimpl("switch@0x11acf137 out of table"); return;
  }
  /* 11acf13e mov edi, edi */
  EDI = (EDI);
L_11acf140:;
  /* 11acf140 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11acf142 jmp dword ptr [ecx*4 + 0x11acf210] */
  switch (ECX) {
    case 0: goto L_11acf257;
    default: x86_unimpl("switch@0x11acf142 out of table"); return;
  }
  /* 11acf149 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11acf14c:;
  /* 11acf14c mov eax, edi */
  EAX = (EDI);
  /* 11acf14e mov edx, 3 */
  EDX = (0x3u);
  /* 11acf153 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acf156 jb 0x11acf164 */
  if (C.cf) goto L_11acf164;
  /* 11acf158 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11acf15b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acf15d jmp dword ptr [eax*4 + 0x11acf168] */
  switch (EAX) {
    case 1: goto L_11acf178;
    case 2: goto L_11acf198;
    case 3: goto L_11acf1c0;
    default: x86_unimpl("switch@0x11acf15d out of table"); return;
  }
L_11acf164:;
  /* 11acf164 jmp dword ptr [ecx*4 + 0x11acf260] */
  switch (ECX) {
    case 0: goto L_11acf270;
    case 1: goto L_11acf278;
    case 2: goto L_11acf288;
    case 3: goto L_11acf29c;
    default: x86_unimpl("switch@0x11acf164 out of table"); return;
  }
  /* 11acf16b nop  */
  /* nop */
L_11acf178:;
  /* 11acf178 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11acf17b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11acf17d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11acf180 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11acf181 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11acf184 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11acf185 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acf188 jb 0x11acf140 */
  if (C.cf) goto L_11acf140;
  /* 11acf18a std  */
  C.df=1;
  /* 11acf18b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11acf18d cld  */
  C.df=0;
  /* 11acf18e jmp dword ptr [edx*4 + 0x11acf260] */
  switch (EDX) {
    case 0: goto L_11acf270;
    case 1: goto L_11acf278;
    case 2: goto L_11acf288;
    case 3: goto L_11acf29c;
    default: x86_unimpl("switch@0x11acf18e out of table"); return;
  }
  /* 11acf195 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11acf198:;
  /* 11acf198 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11acf19b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11acf19d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11acf1a0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11acf1a3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11acf1a6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11acf1a9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acf1ac sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acf1af cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acf1b2 jb 0x11acf140 */
  if (C.cf) goto L_11acf140;
  /* 11acf1b4 std  */
  C.df=1;
  /* 11acf1b5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11acf1b7 cld  */
  C.df=0;
  /* 11acf1b8 jmp dword ptr [edx*4 + 0x11acf260] */
  switch (EDX) {
    case 0: goto L_11acf270;
    case 1: goto L_11acf278;
    case 2: goto L_11acf288;
    case 3: goto L_11acf29c;
    default: x86_unimpl("switch@0x11acf1b8 out of table"); return;
  }
  /* 11acf1bf nop  */
  /* nop */
L_11acf1c0:;
  /* 11acf1c0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11acf1c3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11acf1c5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11acf1c8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11acf1cb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11acf1ce mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11acf1d1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11acf1d4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11acf1d7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acf1da sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acf1dd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acf1e0 jb 0x11acf140 */
  if (C.cf) goto L_11acf140;
  /* 11acf1e6 std  */
  C.df=1;
  /* 11acf1e7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11acf1e9 cld  */
  C.df=0;
  /* 11acf1ea jmp dword ptr [edx*4 + 0x11acf260] */
  switch (EDX) {
    case 0: goto L_11acf270;
    case 1: goto L_11acf278;
    case 2: goto L_11acf288;
    case 3: goto L_11acf29c;
    default: x86_unimpl("switch@0x11acf1ea out of table"); return;
  }
  /* 11acf1f1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11acf1f4 adc al, 0xf2 */
  { uint32_t _a=(AL),_b=(0xf2u),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11acf1f6 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 11acf1f7 adc dword ptr [edx + esi*8], ebx */
  { uint32_t _a=(r32((uint32_t)(EDX + ESI*8))),_b=(EBX),_r=_a+_b+C.cf; w32((uint32_t)(EDX + ESI*8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11acf1fa lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 11acf1fb adc dword ptr [edx + esi*8], esp */
  { uint32_t _a=(r32((uint32_t)(EDX + ESI*8))),_b=(ESP),_r=_a+_b+C.cf; w32((uint32_t)(EDX + ESI*8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11acf1fe lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 11acf1ff adc dword ptr [edx + esi*8], ebp */
  { uint32_t _a=(r32((uint32_t)(EDX + ESI*8))),_b=(EBP),_r=_a+_b+C.cf; w32((uint32_t)(EDX + ESI*8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11acf202 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 11acf203 adc dword ptr [edx + esi*8], esi */
  { uint32_t _a=(r32((uint32_t)(EDX + ESI*8))),_b=(ESI),_r=_a+_b+C.cf; w32((uint32_t)(EDX + ESI*8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11acf206 lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 11acf207 adc dword ptr [edx + esi*8], edi */
  { uint32_t _a=(r32((uint32_t)(EDX + ESI*8))),_b=(EDI),_r=_a+_b+C.cf; w32((uint32_t)(EDX + ESI*8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11acf20a lodsb al, byte ptr [esi] */
  AL = r8(ESI); ESI+=(C.df?-1:1);
  /* 11acf20b adc dword ptr [edx + esi*8 - 0x54], eax */
  { uint32_t _a=(r32((uint32_t)(EDX + ESI*8 + -0x54))),_b=(EAX),_r=_a+_b+C.cf; w32((uint32_t)(EDX + ESI*8 + -0x54), (_r)); fl_add(_a,_b,_r,32); }
  /* 11acf214 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11acf218 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11acf21c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11acf220 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11acf224 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11acf228 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11acf22c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11acf230 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11acf234 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11acf238 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11acf23c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11acf240 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11acf244 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11acf248 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11acf24c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11acf253 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11acf255 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11acf257:;
  /* 11acf257 jmp dword ptr [edx*4 + 0x11acf260] */
  switch (EDX) {
    case 0: goto L_11acf270;
    case 1: goto L_11acf278;
    case 2: goto L_11acf288;
    case 3: goto L_11acf29c;
    default: x86_unimpl("switch@0x11acf257 out of table"); return;
  }
  /* 11acf25e mov edi, edi */
  EDI = (EDI);
L_11acf270:;
  /* 11acf270 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acf273 pop esi */
  ESI = (pop32());
  /* 11acf274 pop edi */
  EDI = (pop32());
  /* 11acf275 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11acf276 ret  */
  ESPCHK(0x11acef80u, _esp0);
  ESP += 4; return;
  /* 11acf277 nop  */
  /* nop */
L_11acf278:;
  /* 11acf278 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11acf27b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11acf27e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acf281 pop esi */
  ESI = (pop32());
  /* 11acf282 pop edi */
  EDI = (pop32());
  /* 11acf283 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11acf284 ret  */
  ESPCHK(0x11acef80u, _esp0);
  ESP += 4; return;
  /* 11acf285 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11acf288:;
  /* 11acf288 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11acf28b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11acf28e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11acf291 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11acf294 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acf297 pop esi */
  ESI = (pop32());
  /* 11acf298 pop edi */
  EDI = (pop32());
  /* 11acf299 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11acf29a ret  */
  ESPCHK(0x11acef80u, _esp0);
  ESP += 4; return;
  /* 11acf29b nop  */
  /* nop */
L_11acf29c:;
  /* 11acf29c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11acf29f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11acf2a2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11acf2a5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11acf2a8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11acf2ab mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11acf2ae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acf2b1 pop esi */
  ESI = (pop32());
  /* 11acf2b2 pop edi */
  EDI = (pop32());
  /* 11acf2b3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11acf2b4 ret  */
  ESPCHK(0x11acef80u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x11acf2c0 (15 bytes, 7 insns) */
void f_11acf2c0(void) {
  FTRACE(0x11acf2c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acf2c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11acf2c1 mov ebp, esp */
  EBP = (ESP);
  /* 11acf2c3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11acf2c5 call 0x11ac68f0 */
  push32(0x11acf2cau); f_11ac68f0();
  /* 11acf2ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acf2cd pop ebp */
  EBP = (pop32());
  /* 11acf2ce ret  */
  ESPCHK(0x11acf2c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f2d0 @ 0x11acf2d0 (348 bytes, 114 insns) [1 switch table(s)] */
void f_11acf2d0(void) {
  FTRACE(0x11acf2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acf2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11acf2d1 mov ebp, esp */
  EBP = (ESP);
  /* 11acf2d3 sub esp, 0x70 */
  { uint32_t _a=(ESP),_b=(0x70u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acf2d6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11acf2d9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11acf2db mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 11acf2de mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11acf2e1 lea edx, [ebp - 0x10] */
  EDX = ((uint32_t)(EBP + -0x10));
  /* 11acf2e4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11acf2e7 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acf2ea mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11acf2ec mov dword ptr [ebp - 0x6c], ecx */
  w32((uint32_t)(EBP + -0x6c), (ECX));
  /* 11acf2ef mov edx, dword ptr [ebp - 0x6c] */
  EDX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11acf2f2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acf2f5 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
  /* 11acf2f8 cmp dword ptr [ebp - 0x6c], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x6c))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acf2fc ja 0x11acf33e */
  if ((!C.cf&&!C.zf)) goto L_11acf33e;
  /* 11acf2fe mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11acf301 jmp dword ptr [eax*4 + 0x11acf42c] */
  switch (EAX) {
    case 0: goto L_11acf308;
    case 1: goto L_11acf323;
    case 2: goto L_11acf311;
    case 3: goto L_11acf31a;
    case 4: goto L_11acf308;
    case 5: goto L_11acf33e;
    case 6: goto L_11acf335;
    case 7: goto L_11acf32c;
    default: x86_unimpl("switch@0x11acf301 out of table"); return;
  }
L_11acf308:;
  /* 11acf308 mov dword ptr [ebp - 4], 8 */
  w32((uint32_t)(EBP + -0x4), (0x8u));
  /* 11acf30f jmp 0x11acf345 */
  goto L_11acf345;
L_11acf311:;
  /* 11acf311 mov dword ptr [ebp - 4], 0x11 */
  w32((uint32_t)(EBP + -0x4), (0x11u));
  /* 11acf318 jmp 0x11acf345 */
  goto L_11acf345;
L_11acf31a:;
  /* 11acf31a mov dword ptr [ebp - 4], 0x12 */
  w32((uint32_t)(EBP + -0x4), (0x12u));
  /* 11acf321 jmp 0x11acf345 */
  goto L_11acf345;
L_11acf323:;
  /* 11acf323 mov dword ptr [ebp - 4], 4 */
  w32((uint32_t)(EBP + -0x4), (0x4u));
  /* 11acf32a jmp 0x11acf345 */
  goto L_11acf345;
L_11acf32c:;
  /* 11acf32c mov dword ptr [ebp - 4], 0x10 */
  w32((uint32_t)(EBP + -0x4), (0x10u));
  /* 11acf333 jmp 0x11acf345 */
  goto L_11acf345;
L_11acf335:;
  /* 11acf335 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acf338 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
L_11acf33e:;
  /* 11acf33e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11acf345:;
  /* 11acf345 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acf349 je 0x11acf3da */
  if (C.zf) goto L_11acf3da;
  /* 11acf34f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11acf352 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11acf354 push eax */
  push32((uint32_t)(EAX));
  /* 11acf355 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acf358 add ecx, 0x18 */
  { uint32_t _a=(ECX),_b=(0x18u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acf35b push ecx */
  push32((uint32_t)(ECX));
  /* 11acf35c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acf35f push edx */
  push32((uint32_t)(EDX));
  /* 11acf360 call 0x11ad55b0 */
  push32(0x11acf365u); f_11ad55b0();
  /* 11acf365 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acf368 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acf36a jne 0x11acf3da */
  if (!C.zf) goto L_11acf3da;
  /* 11acf36c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acf36f mov dword ptr [ebp - 0x70], eax */
  w32((uint32_t)(EBP + -0x70), (EAX));
  /* 11acf372 cmp dword ptr [ebp - 0x70], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acf376 je 0x11acf386 */
  if (C.zf) goto L_11acf386;
  /* 11acf378 cmp dword ptr [ebp - 0x70], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acf37c je 0x11acf386 */
  if (C.zf) goto L_11acf386;
  /* 11acf37e cmp dword ptr [ebp - 0x70], 0x1d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x1du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acf382 je 0x11acf386 */
  if (C.zf) goto L_11acf386;
  /* 11acf384 jmp 0x11acf3ac */
  goto L_11acf3ac;
L_11acf386:;
  /* 11acf386 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11acf389 or ecx, 1 */
  { uint32_t _r=(ECX)|(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11acf38c mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11acf38f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11acf392 and edx, 0xffffffe1 */
  { uint32_t _r=(EDX)&(0xffffffe1u); EDX = (_r); fl_logic(_r,32); }
  /* 11acf395 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11acf398 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11acf39b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acf39e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11acf3a1 mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
  /* 11acf3a4 mov edx, dword ptr [eax + 0x14] */
  EDX = (r32((uint32_t)(EAX + 0x14)));
  /* 11acf3a7 mov dword ptr [ebp - 0x3c], edx */
  w32((uint32_t)(EBP + -0x3c), (EDX));
  /* 11acf3aa jmp 0x11acf3b4 */
  goto L_11acf3b4;
L_11acf3ac:;
  /* 11acf3ac mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11acf3af and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11acf3b1 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_11acf3b4:;
  /* 11acf3b4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acf3b7 add ecx, 0x18 */
  { uint32_t _a=(ECX),_b=(0x18u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acf3ba push ecx */
  push32((uint32_t)(ECX));
  /* 11acf3bb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acf3be add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acf3c1 push edx */
  push32((uint32_t)(EDX));
  /* 11acf3c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acf3c5 push eax */
  push32((uint32_t)(EAX));
  /* 11acf3c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acf3c9 push ecx */
  push32((uint32_t)(ECX));
  /* 11acf3ca mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11acf3cd push edx */
  push32((uint32_t)(EDX));
  /* 11acf3ce lea eax, [ebp - 0x68] */
  EAX = ((uint32_t)(EBP + -0x68));
  /* 11acf3d1 push eax */
  push32((uint32_t)(EAX));
  /* 11acf3d2 call 0x11ad50e0 */
  push32(0x11acf3d7u); f_11ad50e0();
  /* 11acf3d7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11acf3da:;
  /* 11acf3da push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11acf3df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11acf3e2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11acf3e4 push edx */
  push32((uint32_t)(EDX));
  /* 11acf3e5 call 0x11ad5b20 */
  push32(0x11acf3eau); f_11ad5b20();
  /* 11acf3ea add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acf3ed mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11acf3f4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acf3f7 cmp dword ptr [eax], 8 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acf3fa je 0x11acf414 */
  if (C.zf) goto L_11acf414;
  /* 11acf3fc cmp dword ptr [0x11af76a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af76a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acf403 jne 0x11acf414 */
  if (!C.zf) goto L_11acf414;
  /* 11acf405 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acf408 push ecx */
  push32((uint32_t)(ECX));
  /* 11acf409 call 0x11ad5ad0 */
  push32(0x11acf40eu); f_11ad5ad0();
  /* 11acf40e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acf411 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11acf414:;
  /* 11acf414 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acf418 jne 0x11acf428 */
  if (!C.zf) goto L_11acf428;
  /* 11acf41a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acf41d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11acf41f push eax */
  push32((uint32_t)(EAX));
  /* 11acf420 call 0x11ad59d0 */
  push32(0x11acf425u); f_11ad59d0();
  /* 11acf425 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11acf428:;
  /* 11acf428 mov esp, ebp */
  ESP = (EBP);
  /* 11acf42a pop ebp */
  EBP = (pop32());
  /* 11acf42b ret  */
  ESPCHK(0x11acf2d0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x11acf450 (48 bytes, 17 insns) */
void f_11acf450(void) {
  FTRACE(0x11acf450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acf450 push ebp */
  push32((uint32_t)(EBP));
  /* 11acf451 mov ebp, esp */
  EBP = (ESP);
  /* 11acf453 push ecx */
  push32((uint32_t)(ECX));
  /* 11acf454 push 9 */
  push32((uint32_t)(0x9u));
  /* 11acf456 call 0x11acd060 */
  push32(0x11acf45bu); f_11acd060();
  /* 11acf45b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acf45e mov eax, dword ptr [0x11af94b8] */
  EAX = (r32((uint32_t)(0x11af94b8)));
  /* 11acf463 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11acf466 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acf469 mov dword ptr [0x11af94b8], ecx */
  w32((uint32_t)(0x11af94b8), (ECX));
  /* 11acf46f push 9 */
  push32((uint32_t)(0x9u));
  /* 11acf471 call 0x11acd100 */
  push32(0x11acf476u); f_11acd100();
  /* 11acf476 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acf479 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acf47c mov esp, ebp */
  ESP = (EBP);
  /* 11acf47e pop ebp */
  EBP = (pop32());
  /* 11acf47f ret  */
  ESPCHK(0x11acf450u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f480 @ 0x11acf480 (10 bytes, 5 insns) */
void f_11acf480(void) {
  FTRACE(0x11acf480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acf480 push ebp */
  push32((uint32_t)(EBP));
  /* 11acf481 mov ebp, esp */
  EBP = (ESP);
  /* 11acf483 mov eax, dword ptr [0x11af94b8] */
  EAX = (r32((uint32_t)(0x11af94b8)));
  /* 11acf488 pop ebp */
  EBP = (pop32());
  /* 11acf489 ret  */
  ESPCHK(0x11acf480u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x11acf490 (45 bytes, 19 insns) */
void f_11acf490(void) {
  FTRACE(0x11acf490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acf490 push ebp */
  push32((uint32_t)(EBP));
  /* 11acf491 mov ebp, esp */
  EBP = (ESP);
  /* 11acf493 push ecx */
  push32((uint32_t)(ECX));
  /* 11acf494 mov eax, dword ptr [0x11af94b8] */
  EAX = (r32((uint32_t)(0x11af94b8)));
  /* 11acf499 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11acf49c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acf4a0 je 0x11acf4b0 */
  if (C.zf) goto L_11acf4b0;
  /* 11acf4a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acf4a5 push ecx */
  push32((uint32_t)(ECX));
  /* 11acf4a6 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11acf4a9u);
  /* 11acf4a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acf4ac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acf4ae jne 0x11acf4b4 */
  if (!C.zf) goto L_11acf4b4;
L_11acf4b0:;
  /* 11acf4b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11acf4b2 jmp 0x11acf4b9 */
  goto L_11acf4b9;
L_11acf4b4:;
  /* 11acf4b4 mov eax, 1 */
  EAX = (0x1u);
L_11acf4b9:;
  /* 11acf4b9 mov esp, ebp */
  ESP = (EBP);
  /* 11acf4bb pop ebp */
  EBP = (pop32());
  /* 11acf4bc ret  */
  ESPCHK(0x11acf490u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f4c0 @ 0x11acf4c0 (23 bytes, 10 insns) */
void f_11acf4c0(void) {
  FTRACE(0x11acf4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acf4c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11acf4c1 mov ebp, esp */
  EBP = (ESP);
  /* 11acf4c3 mov eax, dword ptr [0x11af94b4] */
  EAX = (r32((uint32_t)(0x11af94b4)));
  /* 11acf4c8 push eax */
  push32((uint32_t)(EAX));
  /* 11acf4c9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acf4cc push ecx */
  push32((uint32_t)(ECX));
  /* 11acf4cd call 0x11acf4e0 */
  push32(0x11acf4d2u); f_11acf4e0();
  /* 11acf4d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acf4d5 pop ebp */
  EBP = (pop32());
  /* 11acf4d6 ret  */
  ESPCHK(0x11acf4c0u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x11acf4e0 (87 bytes, 34 insns) */
void f_11acf4e0(void) {
  FTRACE(0x11acf4e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acf4e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11acf4e1 mov ebp, esp */
  EBP = (ESP);
  /* 11acf4e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11acf4e4 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acf4e8 jbe 0x11acf4ee */
  if ((C.cf||C.zf)) goto L_11acf4ee;
  /* 11acf4ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11acf4ec jmp 0x11acf533 */
  goto L_11acf533;
L_11acf4ee:;
  /* 11acf4ee cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acf4f2 ja 0x11acf505 */
  if ((!C.cf&&!C.zf)) goto L_11acf505;
  /* 11acf4f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acf4f7 push eax */
  push32((uint32_t)(EAX));
  /* 11acf4f8 call 0x11acf540 */
  push32(0x11acf4fdu); f_11acf540();
  /* 11acf4fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acf500 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11acf503 jmp 0x11acf50c */
  goto L_11acf50c;
L_11acf505:;
  /* 11acf505 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11acf50c:;
  /* 11acf50c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acf510 jne 0x11acf518 */
  if (!C.zf) goto L_11acf518;
  /* 11acf512 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acf516 jne 0x11acf51d */
  if (!C.zf) goto L_11acf51d;
L_11acf518:;
  /* 11acf518 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acf51b jmp 0x11acf533 */
  goto L_11acf533;
L_11acf51d:;
  /* 11acf51d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acf520 push ecx */
  push32((uint32_t)(ECX));
  /* 11acf521 call 0x11acf490 */
  push32(0x11acf526u); f_11acf490();
  /* 11acf526 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acf529 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acf52b jne 0x11acf531 */
  if (!C.zf) goto L_11acf531;
  /* 11acf52d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11acf52f jmp 0x11acf533 */
  goto L_11acf533;
L_11acf531:;
  /* 11acf531 jmp 0x11acf4ee */
  goto L_11acf4ee;
L_11acf533:;
  /* 11acf533 mov esp, ebp */
  ESP = (EBP);
  /* 11acf535 pop ebp */
  EBP = (pop32());
  /* 11acf536 ret  */
  ESPCHK(0x11acf4e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f540 @ 0x11acf540 (109 bytes, 37 insns) */
void f_11acf540(void) {
  FTRACE(0x11acf540u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acf540 push ebp */
  push32((uint32_t)(EBP));
  /* 11acf541 mov ebp, esp */
  EBP = (ESP);
  /* 11acf543 push ecx */
  push32((uint32_t)(ECX));
  /* 11acf544 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acf547 cmp eax, dword ptr [0x11af7214] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11af7214))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acf54d ja 0x11acf57d */
  if ((!C.cf&&!C.zf)) goto L_11acf57d;
  /* 11acf54f push 9 */
  push32((uint32_t)(0x9u));
  /* 11acf551 call 0x11acd060 */
  push32(0x11acf556u); f_11acd060();
  /* 11acf556 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acf559 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acf55c push ecx */
  push32((uint32_t)(ECX));
  /* 11acf55d call 0x11ad0080 */
  push32(0x11acf562u); f_11ad0080();
  /* 11acf562 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acf565 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11acf568 push 9 */
  push32((uint32_t)(0x9u));
  /* 11acf56a call 0x11acd100 */
  push32(0x11acf56fu); f_11acd100();
  /* 11acf56f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acf572 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acf576 je 0x11acf57d */
  if (C.zf) goto L_11acf57d;
  /* 11acf578 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acf57b jmp 0x11acf5a9 */
  goto L_11acf5a9;
L_11acf57d:;
  /* 11acf57d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acf581 jne 0x11acf58a */
  if (!C.zf) goto L_11acf58a;
  /* 11acf583 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_11acf58a:;
  /* 11acf58a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acf58d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acf590 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11acf593 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11acf596 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acf599 push eax */
  push32((uint32_t)(EAX));
  /* 11acf59a push 0 */
  push32((uint32_t)(0x0u));
  /* 11acf59c mov ecx, dword ptr [0x11afac64] */
  ECX = (r32((uint32_t)(0x11afac64)));
  /* 11acf5a2 push ecx */
  push32((uint32_t)(ECX));
  /* 11acf5a3 call dword ptr [0x11afb33c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb33c))), 0x11acf5a9u);
L_11acf5a9:;
  /* 11acf5a9 mov esp, ebp */
  ESP = (EBP);
  /* 11acf5ab pop ebp */
  EBP = (pop32());
  /* 11acf5ac ret  */
  ESPCHK(0x11acf540u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f5b0 @ 0x11acf5b0 (10 bytes, 5 insns) */
void f_11acf5b0(void) {
  FTRACE(0x11acf5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acf5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11acf5b1 mov ebp, esp */
  EBP = (ESP);
  /* 11acf5b3 mov eax, 1 */
  EAX = (0x1u);
  /* 11acf5b8 pop ebp */
  EBP = (pop32());
  /* 11acf5b9 ret  */
  ESPCHK(0x11acf5b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f5c0 @ 0x11acf5c0 (173 bytes, 59 insns) */
void f_11acf5c0(void) {
  FTRACE(0x11acf5c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acf5c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11acf5c1 mov ebp, esp */
  EBP = (ESP);
  /* 11acf5c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acf5c6 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acf5ca jbe 0x11acf5d3 */
  if ((C.cf||C.zf)) goto L_11acf5d3;
  /* 11acf5cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11acf5ce jmp 0x11acf669 */
  goto L_11acf669;
L_11acf5d3:;
  /* 11acf5d3 push 9 */
  push32((uint32_t)(0x9u));
  /* 11acf5d5 call 0x11acd060 */
  push32(0x11acf5dau); f_11acd060();
  /* 11acf5da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acf5dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acf5e0 push eax */
  push32((uint32_t)(EAX));
  /* 11acf5e1 call 0x11acf9f0 */
  push32(0x11acf5e6u); f_11acf9f0();
  /* 11acf5e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acf5e9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11acf5ec cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acf5f0 je 0x11acf631 */
  if (C.zf) goto L_11acf631;
  /* 11acf5f2 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11acf5f9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acf5fc cmp ecx, dword ptr [0x11af7214] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11af7214))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acf602 ja 0x11acf622 */
  if ((!C.cf&&!C.zf)) goto L_11acf622;
  /* 11acf604 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acf607 push edx */
  push32((uint32_t)(EDX));
  /* 11acf608 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acf60b push eax */
  push32((uint32_t)(EAX));
  /* 11acf60c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acf60f push ecx */
  push32((uint32_t)(ECX));
  /* 11acf610 call 0x11ad08c0 */
  push32(0x11acf615u); f_11ad08c0();
  /* 11acf615 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acf618 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acf61a je 0x11acf622 */
  if (C.zf) goto L_11acf622;
  /* 11acf61c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acf61f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11acf622:;
  /* 11acf622 push 9 */
  push32((uint32_t)(0x9u));
  /* 11acf624 call 0x11acd100 */
  push32(0x11acf629u); f_11acd100();
  /* 11acf629 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acf62c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acf62f jmp 0x11acf669 */
  goto L_11acf669;
L_11acf631:;
  /* 11acf631 push 9 */
  push32((uint32_t)(0x9u));
  /* 11acf633 call 0x11acd100 */
  push32(0x11acf638u); f_11acd100();
  /* 11acf638 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acf63b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acf63f jne 0x11acf648 */
  if (!C.zf) goto L_11acf648;
  /* 11acf641 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11acf648:;
  /* 11acf648 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acf64b add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acf64e and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 11acf650 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11acf653 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acf656 push ecx */
  push32((uint32_t)(ECX));
  /* 11acf657 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acf65a push edx */
  push32((uint32_t)(EDX));
  /* 11acf65b push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11acf65d mov eax, dword ptr [0x11afac64] */
  EAX = (r32((uint32_t)(0x11afac64)));
  /* 11acf662 push eax */
  push32((uint32_t)(EAX));
  /* 11acf663 call dword ptr [0x11afb344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb344))), 0x11acf669u);
L_11acf669:;
  /* 11acf669 mov esp, ebp */
  ESP = (EBP);
  /* 11acf66b pop ebp */
  EBP = (pop32());
  /* 11acf66c ret  */
  ESPCHK(0x11acf5c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f670 @ 0x11acf670 (490 bytes, 165 insns) */
void f_11acf670(void) {
  FTRACE(0x11acf670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acf670 push ebp */
  push32((uint32_t)(EBP));
  /* 11acf671 mov ebp, esp */
  EBP = (ESP);
  /* 11acf673 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acf676 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acf67a jne 0x11acf68d */
  if (!C.zf) goto L_11acf68d;
  /* 11acf67c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acf67f push eax */
  push32((uint32_t)(EAX));
  /* 11acf680 call 0x11acf4c0 */
  push32(0x11acf685u); f_11acf4c0();
  /* 11acf685 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acf688 jmp 0x11acf856 */
  goto L_11acf856;
L_11acf68d:;
  /* 11acf68d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acf691 jne 0x11acf6a6 */
  if (!C.zf) goto L_11acf6a6;
  /* 11acf693 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acf696 push ecx */
  push32((uint32_t)(ECX));
  /* 11acf697 call 0x11acf860 */
  push32(0x11acf69cu); f_11acf860();
  /* 11acf69c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acf69f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11acf6a1 jmp 0x11acf856 */
  goto L_11acf856;
L_11acf6a6:;
  /* 11acf6a6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11acf6ad cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acf6b1 ja 0x11acf829 */
  if ((!C.cf&&!C.zf)) goto L_11acf829;
  /* 11acf6b7 push 9 */
  push32((uint32_t)(0x9u));
  /* 11acf6b9 call 0x11acd060 */
  push32(0x11acf6beu); f_11acd060();
  /* 11acf6be add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acf6c1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acf6c4 push edx */
  push32((uint32_t)(EDX));
  /* 11acf6c5 call 0x11acf9f0 */
  push32(0x11acf6cau); f_11acf9f0();
  /* 11acf6ca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acf6cd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11acf6d0 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acf6d4 je 0x11acf7ec */
  if (C.zf) goto L_11acf7ec;
  /* 11acf6da mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acf6dd cmp eax, dword ptr [0x11af7214] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11af7214))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acf6e3 ja 0x11acf760 */
  if ((!C.cf&&!C.zf)) goto L_11acf760;
  /* 11acf6e5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acf6e8 push ecx */
  push32((uint32_t)(ECX));
  /* 11acf6e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acf6ec push edx */
  push32((uint32_t)(EDX));
  /* 11acf6ed mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11acf6f0 push eax */
  push32((uint32_t)(EAX));
  /* 11acf6f1 call 0x11ad08c0 */
  push32(0x11acf6f6u); f_11ad08c0();
  /* 11acf6f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acf6f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acf6fb je 0x11acf705 */
  if (C.zf) goto L_11acf705;
  /* 11acf6fd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acf700 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11acf703 jmp 0x11acf760 */
  goto L_11acf760;
L_11acf705:;
  /* 11acf705 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acf708 push edx */
  push32((uint32_t)(EDX));
  /* 11acf709 call 0x11ad0080 */
  push32(0x11acf70eu); f_11ad0080();
  /* 11acf70e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acf711 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11acf714 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acf718 je 0x11acf760 */
  if (C.zf) goto L_11acf760;
  /* 11acf71a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acf71d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 11acf720 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acf723 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11acf726 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acf729 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acf72c jae 0x11acf736 */
  if (!C.cf) goto L_11acf736;
  /* 11acf72e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acf731 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11acf734 jmp 0x11acf73c */
  goto L_11acf73c;
L_11acf736:;
  /* 11acf736 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acf739 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11acf73c:;
  /* 11acf73c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11acf73f push edx */
  push32((uint32_t)(EDX));
  /* 11acf740 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acf743 push eax */
  push32((uint32_t)(EAX));
  /* 11acf744 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acf747 push ecx */
  push32((uint32_t)(ECX));
  /* 11acf748 call 0x11ad1e10 */
  push32(0x11acf74du); f_11ad1e10();
  /* 11acf74d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acf750 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acf753 push edx */
  push32((uint32_t)(EDX));
  /* 11acf754 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11acf757 push eax */
  push32((uint32_t)(EAX));
  /* 11acf758 call 0x11acfab0 */
  push32(0x11acf75du); f_11acfab0();
  /* 11acf75d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11acf760:;
  /* 11acf760 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acf764 jne 0x11acf7e0 */
  if (!C.zf) goto L_11acf7e0;
  /* 11acf766 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acf76a jne 0x11acf773 */
  if (!C.zf) goto L_11acf773;
  /* 11acf76c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11acf773:;
  /* 11acf773 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acf776 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acf779 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11acf77c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11acf77f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acf782 push edx */
  push32((uint32_t)(EDX));
  /* 11acf783 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acf785 mov eax, dword ptr [0x11afac64] */
  EAX = (r32((uint32_t)(0x11afac64)));
  /* 11acf78a push eax */
  push32((uint32_t)(EAX));
  /* 11acf78b call dword ptr [0x11afb33c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb33c))), 0x11acf791u);
  /* 11acf791 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11acf794 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acf798 je 0x11acf7e0 */
  if (C.zf) goto L_11acf7e0;
  /* 11acf79a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acf79d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11acf7a0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acf7a3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11acf7a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acf7a9 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acf7ac jae 0x11acf7b6 */
  if (!C.cf) goto L_11acf7b6;
  /* 11acf7ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acf7b1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11acf7b4 jmp 0x11acf7bc */
  goto L_11acf7bc;
L_11acf7b6:;
  /* 11acf7b6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acf7b9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11acf7bc:;
  /* 11acf7bc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11acf7bf push eax */
  push32((uint32_t)(EAX));
  /* 11acf7c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acf7c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11acf7c4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acf7c7 push edx */
  push32((uint32_t)(EDX));
  /* 11acf7c8 call 0x11ad1e10 */
  push32(0x11acf7cdu); f_11ad1e10();
  /* 11acf7cd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acf7d0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acf7d3 push eax */
  push32((uint32_t)(EAX));
  /* 11acf7d4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11acf7d7 push ecx */
  push32((uint32_t)(ECX));
  /* 11acf7d8 call 0x11acfab0 */
  push32(0x11acf7ddu); f_11acfab0();
  /* 11acf7dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11acf7e0:;
  /* 11acf7e0 push 9 */
  push32((uint32_t)(0x9u));
  /* 11acf7e2 call 0x11acd100 */
  push32(0x11acf7e7u); f_11acd100();
  /* 11acf7e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acf7ea jmp 0x11acf829 */
  goto L_11acf829;
L_11acf7ec:;
  /* 11acf7ec push 9 */
  push32((uint32_t)(0x9u));
  /* 11acf7ee call 0x11acd100 */
  push32(0x11acf7f3u); f_11acd100();
  /* 11acf7f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acf7f6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acf7fa jne 0x11acf803 */
  if (!C.zf) goto L_11acf803;
  /* 11acf7fc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11acf803:;
  /* 11acf803 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acf806 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acf809 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11acf80c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11acf80f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acf812 push eax */
  push32((uint32_t)(EAX));
  /* 11acf813 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acf816 push ecx */
  push32((uint32_t)(ECX));
  /* 11acf817 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acf819 mov edx, dword ptr [0x11afac64] */
  EDX = (r32((uint32_t)(0x11afac64)));
  /* 11acf81f push edx */
  push32((uint32_t)(EDX));
  /* 11acf820 call dword ptr [0x11afb344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb344))), 0x11acf826u);
  /* 11acf826 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11acf829:;
  /* 11acf829 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acf82d jne 0x11acf838 */
  if (!C.zf) goto L_11acf838;
  /* 11acf82f cmp dword ptr [0x11af94b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af94b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acf836 jne 0x11acf83d */
  if (!C.zf) goto L_11acf83d;
L_11acf838:;
  /* 11acf838 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acf83b jmp 0x11acf856 */
  goto L_11acf856;
L_11acf83d:;
  /* 11acf83d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acf840 push eax */
  push32((uint32_t)(EAX));
  /* 11acf841 call 0x11acf490 */
  push32(0x11acf846u); f_11acf490();
  /* 11acf846 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acf849 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acf84b jne 0x11acf851 */
  if (!C.zf) goto L_11acf851;
  /* 11acf84d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11acf84f jmp 0x11acf856 */
  goto L_11acf856;
L_11acf851:;
  /* 11acf851 jmp 0x11acf6a6 */
  goto L_11acf6a6;
L_11acf856:;
  /* 11acf856 mov esp, ebp */
  ESP = (EBP);
  /* 11acf858 pop ebp */
  EBP = (pop32());
  /* 11acf859 ret  */
  ESPCHK(0x11acf670u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f860 @ 0x11acf860 (104 bytes, 38 insns) */
void f_11acf860(void) {
  FTRACE(0x11acf860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acf860 push ebp */
  push32((uint32_t)(EBP));
  /* 11acf861 mov ebp, esp */
  EBP = (ESP);
  /* 11acf863 push ecx */
  push32((uint32_t)(ECX));
  /* 11acf864 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acf868 jne 0x11acf86c */
  if (!C.zf) goto L_11acf86c;
  /* 11acf86a jmp 0x11acf8c4 */
  goto L_11acf8c4;
L_11acf86c:;
  /* 11acf86c push 9 */
  push32((uint32_t)(0x9u));
  /* 11acf86e call 0x11acd060 */
  push32(0x11acf873u); f_11acd060();
  /* 11acf873 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acf876 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acf879 push eax */
  push32((uint32_t)(EAX));
  /* 11acf87a call 0x11acf9f0 */
  push32(0x11acf87fu); f_11acf9f0();
  /* 11acf87f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acf882 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11acf885 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acf889 je 0x11acf8a7 */
  if (C.zf) goto L_11acf8a7;
  /* 11acf88b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acf88e push ecx */
  push32((uint32_t)(ECX));
  /* 11acf88f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acf892 push edx */
  push32((uint32_t)(EDX));
  /* 11acf893 call 0x11acfab0 */
  push32(0x11acf898u); f_11acfab0();
  /* 11acf898 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acf89b push 9 */
  push32((uint32_t)(0x9u));
  /* 11acf89d call 0x11acd100 */
  push32(0x11acf8a2u); f_11acd100();
  /* 11acf8a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acf8a5 jmp 0x11acf8c4 */
  goto L_11acf8c4;
L_11acf8a7:;
  /* 11acf8a7 push 9 */
  push32((uint32_t)(0x9u));
  /* 11acf8a9 call 0x11acd100 */
  push32(0x11acf8aeu); f_11acd100();
  /* 11acf8ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acf8b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acf8b4 push eax */
  push32((uint32_t)(EAX));
  /* 11acf8b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acf8b7 mov ecx, dword ptr [0x11afac64] */
  ECX = (r32((uint32_t)(0x11afac64)));
  /* 11acf8bd push ecx */
  push32((uint32_t)(ECX));
  /* 11acf8be call dword ptr [0x11afb360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb360))), 0x11acf8c4u);
L_11acf8c4:;
  /* 11acf8c4 mov esp, ebp */
  ESP = (EBP);
  /* 11acf8c6 pop ebp */
  EBP = (pop32());
  /* 11acf8c7 ret  */
  ESPCHK(0x11acf860u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f8d0 @ 0x11acf8d0 (116 bytes, 34 insns) */
void f_11acf8d0(void) {
  FTRACE(0x11acf8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acf8d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11acf8d1 mov ebp, esp */
  EBP = (ESP);
  /* 11acf8d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11acf8d4 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 11acf8db push 9 */
  push32((uint32_t)(0x9u));
  /* 11acf8dd call 0x11acd060 */
  push32(0x11acf8e2u); f_11acd060();
  /* 11acf8e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acf8e5 call 0x11ad0fe0 */
  push32(0x11acf8eau); f_11ad0fe0();
  /* 11acf8ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acf8ec jge 0x11acf8f5 */
  if ((C.sf==C.of)) goto L_11acf8f5;
  /* 11acf8ee mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_11acf8f5:;
  /* 11acf8f5 push 9 */
  push32((uint32_t)(0x9u));
  /* 11acf8f7 call 0x11acd100 */
  push32(0x11acf8fcu); f_11acd100();
  /* 11acf8fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11acf8ff push 0 */
  push32((uint32_t)(0x0u));
  /* 11acf901 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acf903 mov eax, dword ptr [0x11afac64] */
  EAX = (r32((uint32_t)(0x11afac64)));
  /* 11acf908 push eax */
  push32((uint32_t)(EAX));
  /* 11acf909 call dword ptr [0x11afb3f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3f0))), 0x11acf90fu);
  /* 11acf90f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acf911 jne 0x11acf93d */
  if (!C.zf) goto L_11acf93d;
  /* 11acf913 call dword ptr [0x11afb3c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb3c4))), 0x11acf919u);
  /* 11acf919 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acf91c jne 0x11acf936 */
  if (!C.zf) goto L_11acf936;
  /* 11acf91e call 0x11ad2200 */
  push32(0x11acf923u); f_11ad2200();
  /* 11acf923 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 11acf929 call 0x11ad21f0 */
  push32(0x11acf92eu); f_11ad21f0();
  /* 11acf92e mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 11acf934 jmp 0x11acf93d */
  goto L_11acf93d;
L_11acf936:;
  /* 11acf936 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_11acf93d:;
  /* 11acf93d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acf940 mov esp, ebp */
  ESP = (EBP);
  /* 11acf942 pop ebp */
  EBP = (pop32());
  /* 11acf943 ret  */
  ESPCHK(0x11acf8d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f950 @ 0x11acf950 (10 bytes, 5 insns) */
void f_11acf950(void) {
  FTRACE(0x11acf950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acf950 push ebp */
  push32((uint32_t)(EBP));
  /* 11acf951 mov ebp, esp */
  EBP = (ESP);
  /* 11acf953 call 0x11acf8d0 */
  push32(0x11acf958u); f_11acf8d0();
  /* 11acf958 pop ebp */
  EBP = (pop32());
  /* 11acf959 ret  */
  ESPCHK(0x11acf950u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f960 @ 0x11acf960 (10 bytes, 5 insns) */
void f_11acf960(void) {
  FTRACE(0x11acf960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acf960 push ebp */
  push32((uint32_t)(EBP));
  /* 11acf961 mov ebp, esp */
  EBP = (ESP);
  /* 11acf963 mov eax, dword ptr [0x11af7214] */
  EAX = (r32((uint32_t)(0x11af7214)));
  /* 11acf968 pop ebp */
  EBP = (pop32());
  /* 11acf969 ret  */
  ESPCHK(0x11acf960u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f970 @ 0x11acf970 (31 bytes, 11 insns) */
void f_11acf970(void) {
  FTRACE(0x11acf970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acf970 push ebp */
  push32((uint32_t)(EBP));
  /* 11acf971 mov ebp, esp */
  EBP = (ESP);
  /* 11acf973 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acf97a jbe 0x11acf980 */
  if ((C.cf||C.zf)) goto L_11acf980;
  /* 11acf97c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11acf97e jmp 0x11acf98d */
  goto L_11acf98d;
L_11acf980:;
  /* 11acf980 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acf983 mov dword ptr [0x11af7214], eax */
  w32((uint32_t)(0x11af7214), (EAX));
  /* 11acf988 mov eax, 1 */
  EAX = (0x1u);
L_11acf98d:;
  /* 11acf98d pop ebp */
  EBP = (pop32());
  /* 11acf98e ret  */
  ESPCHK(0x11acf970u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f990 @ 0x11acf990 (89 bytes, 20 insns) */
void f_11acf990(void) {
  FTRACE(0x11acf990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acf990 push ebp */
  push32((uint32_t)(EBP));
  /* 11acf991 mov ebp, esp */
  EBP = (ESP);
  /* 11acf993 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11acf998 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acf99a mov eax, dword ptr [0x11afac64] */
  EAX = (r32((uint32_t)(0x11afac64)));
  /* 11acf99f push eax */
  push32((uint32_t)(EAX));
  /* 11acf9a0 call dword ptr [0x11afb33c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb33c))), 0x11acf9a6u);
  /* 11acf9a6 mov dword ptr [0x11af9908], eax */
  w32((uint32_t)(0x11af9908), (EAX));
  /* 11acf9ab cmp dword ptr [0x11af9908], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af9908))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acf9b2 jne 0x11acf9b8 */
  if (!C.zf) goto L_11acf9b8;
  /* 11acf9b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11acf9b6 jmp 0x11acf9e7 */
  goto L_11acf9e7;
L_11acf9b8:;
  /* 11acf9b8 mov ecx, dword ptr [0x11af9908] */
  ECX = (r32((uint32_t)(0x11af9908)));
  /* 11acf9be mov dword ptr [0x11af98fc], ecx */
  w32((uint32_t)(0x11af98fc), (ECX));
  /* 11acf9c4 mov dword ptr [0x11af9900], 0 */
  w32((uint32_t)(0x11af9900), (0x0u));
  /* 11acf9ce mov dword ptr [0x11af9904], 0 */
  w32((uint32_t)(0x11af9904), (0x0u));
  /* 11acf9d8 mov dword ptr [0x11af98e8], 0x10 */
  w32((uint32_t)(0x11af98e8), (0x10u));
  /* 11acf9e2 mov eax, 1 */
  EAX = (0x1u);
L_11acf9e7:;
  /* 11acf9e7 pop ebp */
  EBP = (pop32());
  /* 11acf9e8 ret  */
  ESPCHK(0x11acf990u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f9f0 @ 0x11acf9f0 (85 bytes, 29 insns) */
void f_11acf9f0(void) {
  FTRACE(0x11acf9f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acf9f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11acf9f1 mov ebp, esp */
  EBP = (ESP);
  /* 11acf9f3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acf9f6 mov eax, dword ptr [0x11af9904] */
  EAX = (r32((uint32_t)(0x11af9904)));
  /* 11acf9fb imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11acf9fe mov ecx, dword ptr [0x11af9908] */
  ECX = (r32((uint32_t)(0x11af9908)));
  /* 11acfa04 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acfa06 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11acfa09 mov edx, dword ptr [0x11af9908] */
  EDX = (r32((uint32_t)(0x11af9908)));
  /* 11acfa0f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11acfa12:;
  /* 11acfa12 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acfa15 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acfa18 jae 0x11acfa3f */
  if (!C.cf) goto L_11acfa3f;
  /* 11acfa1a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acfa1d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acfa20 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acfa23 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11acfa26 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acfa2d jae 0x11acfa34 */
  if (!C.cf) goto L_11acfa34;
  /* 11acfa2f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acfa32 jmp 0x11acfa41 */
  goto L_11acfa41;
L_11acfa34:;
  /* 11acfa34 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acfa37 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acfa3a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11acfa3d jmp 0x11acfa12 */
  goto L_11acfa12;
L_11acfa3f:;
  /* 11acfa3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11acfa41:;
  /* 11acfa41 mov esp, ebp */
  ESP = (EBP);
  /* 11acfa43 pop ebp */
  EBP = (pop32());
  /* 11acfa44 ret  */
  ESPCHK(0x11acf9f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fa50 @ 0x11acfa50 (95 bytes, 33 insns) */
void f_11acfa50(void) {
  FTRACE(0x11acfa50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acfa50 push ebp */
  push32((uint32_t)(EBP));
  /* 11acfa51 mov ebp, esp */
  EBP = (ESP);
  /* 11acfa53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acfa56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acfa59 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acfa5c sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acfa5f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11acfa62 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acfa65 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11acfa68 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11acfa6b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11acfa70 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acfa73 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11acfa75 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acfa78 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11acfa7b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11acfa7d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11acfa7f jne 0x11acfaa1 */
  if (!C.zf) goto L_11acfaa1;
  /* 11acfa81 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acfa84 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 11acfa87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11acfa89 jne 0x11acfaa1 */
  if (!C.zf) goto L_11acfaa1;
  /* 11acfa8b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acfa8e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 11acfa94 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11acfa96 je 0x11acfaa1 */
  if (C.zf) goto L_11acfaa1;
  /* 11acfa98 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 11acfa9f jmp 0x11acfaa8 */
  goto L_11acfaa8;
L_11acfaa1:;
  /* 11acfaa1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11acfaa8:;
  /* 11acfaa8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11acfaab mov esp, ebp */
  ESP = (EBP);
  /* 11acfaad pop ebp */
  EBP = (pop32());
  /* 11acfaae ret  */
  ESPCHK(0x11acfa50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fab0 @ 0x11acfab0 (1485 bytes, 453 insns) */
void f_11acfab0(void) {
  FTRACE(0x11acfab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11acfab0 push ebp */
  push32((uint32_t)(EBP));
  /* 11acfab1 mov ebp, esp */
  EBP = (ESP);
  /* 11acfab3 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acfab6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acfab9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11acfabc mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 11acfabf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acfac2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acfac5 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acfac8 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11acfacb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11acface shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11acfad1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11acfad4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acfad7 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11acfadd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11acfae0 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 11acfae7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11acfaea mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11acfaed sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acfaf0 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11acfaf3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11acfaf6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11acfaf8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acfafb mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11acfafe mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11acfb01 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acfb04 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 11acfb07 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11acfb0a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11acfb0c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11acfb0f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11acfb12 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11acfb15 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11acfb18 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11acfb1b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11acfb1e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11acfb20 jne 0x11acfc48 */
  if (!C.zf) goto L_11acfc48;
  /* 11acfb26 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11acfb29 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11acfb2c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acfb2f mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11acfb32 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acfb36 jbe 0x11acfb3f */
  if ((C.cf||C.zf)) goto L_11acfb3f;
  /* 11acfb38 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_11acfb3f:;
  /* 11acfb3f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11acfb42 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11acfb45 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11acfb48 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acfb4b jne 0x11acfc21 */
  if (!C.zf) goto L_11acfc21;
  /* 11acfb51 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acfb55 jae 0x11acfbb6 */
  if (!C.cf) goto L_11acfbb6;
  /* 11acfb57 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11acfb5c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11acfb5f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11acfb61 not eax */
  EAX = (~(EAX));
  /* 11acfb63 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acfb66 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11acfb69 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11acfb6d and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11acfb6f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acfb72 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11acfb75 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11acfb79 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11acfb7c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acfb7f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11acfb82 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11acfb85 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11acfb88 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acfb8b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11acfb8e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11acfb91 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acfb94 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11acfb98 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11acfb9a jne 0x11acfbb4 */
  if (!C.zf) goto L_11acfbb4;
  /* 11acfb9c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11acfba1 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11acfba4 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11acfba6 not eax */
  EAX = (~(EAX));
  /* 11acfba8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acfbab mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11acfbad and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11acfbaf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acfbb2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11acfbb4:;
  /* 11acfbb4 jmp 0x11acfc21 */
  goto L_11acfc21;
L_11acfbb6:;
  /* 11acfbb6 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11acfbb9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acfbbc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11acfbc1 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11acfbc3 not edx */
  EDX = (~(EDX));
  /* 11acfbc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acfbc8 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11acfbcb mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11acfbd2 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11acfbd4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acfbd7 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11acfbda mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 11acfbe1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11acfbe4 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acfbe7 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11acfbea sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11acfbed mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11acfbf0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acfbf3 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11acfbf6 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11acfbf9 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acfbfc movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11acfc00 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11acfc02 jne 0x11acfc21 */
  if (!C.zf) goto L_11acfc21;
  /* 11acfc04 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11acfc07 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acfc0a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11acfc0f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11acfc11 not edx */
  EDX = (~(EDX));
  /* 11acfc13 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acfc16 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11acfc19 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11acfc1b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acfc1e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11acfc21:;
  /* 11acfc21 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11acfc24 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11acfc27 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11acfc2a mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11acfc2d mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11acfc30 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11acfc33 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11acfc36 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11acfc39 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11acfc3c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11acfc3f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11acfc42 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acfc45 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_11acfc48:;
  /* 11acfc48 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11acfc4b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11acfc4e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acfc51 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11acfc54 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acfc58 jbe 0x11acfc61 */
  if ((C.cf||C.zf)) goto L_11acfc61;
  /* 11acfc5a mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_11acfc61:;
  /* 11acfc61 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11acfc64 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11acfc67 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11acfc69 jne 0x11acfdc5 */
  if (!C.zf) goto L_11acfdc5;
  /* 11acfc6f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11acfc72 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acfc75 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 11acfc78 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11acfc7b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11acfc7e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acfc81 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11acfc84 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acfc88 jbe 0x11acfc91 */
  if ((C.cf||C.zf)) goto L_11acfc91;
  /* 11acfc8a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_11acfc91:;
  /* 11acfc91 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11acfc94 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acfc97 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11acfc9a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11acfc9d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11acfca0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acfca3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11acfca6 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acfcaa jbe 0x11acfcb3 */
  if ((C.cf||C.zf)) goto L_11acfcb3;
  /* 11acfcac mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_11acfcb3:;
  /* 11acfcb3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11acfcb6 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acfcb9 je 0x11acfdbf */
  if (C.zf) goto L_11acfdbf;
  /* 11acfcbf mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11acfcc2 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11acfcc5 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11acfcc8 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acfccb jne 0x11acfda1 */
  if (!C.zf) goto L_11acfda1;
  /* 11acfcd1 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acfcd5 jae 0x11acfd36 */
  if (!C.cf) goto L_11acfd36;
  /* 11acfcd7 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11acfcdc mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11acfcdf shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11acfce1 not edx */
  EDX = (~(EDX));
  /* 11acfce3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acfce6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11acfce9 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11acfced and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11acfcef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acfcf2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11acfcf5 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11acfcf9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11acfcfc add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acfcff mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11acfd02 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11acfd05 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11acfd08 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acfd0b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11acfd0e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11acfd11 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acfd14 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11acfd18 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11acfd1a jne 0x11acfd34 */
  if (!C.zf) goto L_11acfd34;
  /* 11acfd1c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11acfd21 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11acfd24 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11acfd26 not edx */
  EDX = (~(EDX));
  /* 11acfd28 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acfd2b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11acfd2d and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11acfd2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acfd32 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11acfd34:;
  /* 11acfd34 jmp 0x11acfda1 */
  goto L_11acfda1;
L_11acfd36:;
  /* 11acfd36 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11acfd39 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acfd3c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11acfd41 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11acfd43 not eax */
  EAX = (~(EAX));
  /* 11acfd45 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acfd48 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11acfd4b mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11acfd52 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11acfd54 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acfd57 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11acfd5a mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11acfd61 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11acfd64 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acfd67 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11acfd6a sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11acfd6d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11acfd70 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acfd73 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11acfd76 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11acfd79 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acfd7c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11acfd80 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11acfd82 jne 0x11acfda1 */
  if (!C.zf) goto L_11acfda1;
  /* 11acfd84 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11acfd87 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acfd8a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11acfd8f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11acfd91 not eax */
  EAX = (~(EAX));
  /* 11acfd93 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acfd96 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11acfd99 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11acfd9b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acfd9e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11acfda1:;
  /* 11acfda1 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11acfda4 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11acfda7 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11acfdaa mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11acfdad mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11acfdb0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11acfdb3 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11acfdb6 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11acfdb9 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11acfdbc mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_11acfdbf:;
  /* 11acfdbf mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11acfdc2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_11acfdc5:;
  /* 11acfdc5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11acfdc8 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11acfdcb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11acfdcd jne 0x11acfddb */
  if (!C.zf) goto L_11acfddb;
  /* 11acfdcf mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11acfdd2 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acfdd5 je 0x11acfeeb */
  if (C.zf) goto L_11acfeeb;
L_11acfddb:;
  /* 11acfddb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11acfdde mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acfde1 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 11acfde4 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11acfde7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11acfdea mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11acfded mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11acfdf0 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11acfdf3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11acfdf6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11acfdf9 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11acfdfc mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11acfdff mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11acfe02 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11acfe05 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11acfe08 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11acfe0b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11acfe0e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11acfe11 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11acfe14 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11acfe17 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11acfe1a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acfe1d jne 0x11acfeeb */
  if (!C.zf) goto L_11acfeeb;
  /* 11acfe23 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acfe27 jae 0x11acfe84 */
  if (!C.cf) goto L_11acfe84;
  /* 11acfe29 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11acfe2c add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acfe2f movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11acfe33 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11acfe36 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acfe39 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11acfe3c add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11acfe3f mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11acfe42 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acfe45 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11acfe48 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11acfe4a jne 0x11acfe62 */
  if (!C.zf) goto L_11acfe62;
  /* 11acfe4c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11acfe51 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11acfe54 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11acfe56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acfe59 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11acfe5b or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11acfe5d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acfe60 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11acfe62:;
  /* 11acfe62 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11acfe67 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11acfe6a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11acfe6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acfe6f mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11acfe72 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11acfe76 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11acfe78 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acfe7b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11acfe7e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11acfe82 jmp 0x11acfeeb */
  goto L_11acfeeb;
L_11acfe84:;
  /* 11acfe84 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11acfe87 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acfe8a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11acfe8e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11acfe91 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acfe94 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11acfe97 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11acfe9a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11acfe9d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acfea0 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11acfea3 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11acfea5 jne 0x11acfec2 */
  if (!C.zf) goto L_11acfec2;
  /* 11acfea7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11acfeaa sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acfead mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11acfeb2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11acfeb4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acfeb7 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11acfeba or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11acfebc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11acfebf mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11acfec2:;
  /* 11acfec2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11acfec5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acfec8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11acfecd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11acfecf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acfed2 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11acfed5 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11acfedc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11acfede mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11acfee1 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11acfee4 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_11acfeeb:;
  /* 11acfeeb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11acfeee mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11acfef1 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11acfef3 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11acfef6 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acfef9 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11acfefc mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 11acfeff mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acff02 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11acff04 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11acff07 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acff0a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11acff0c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11acff0f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acff12 jne 0x11ad0079 */
  if (!C.zf) goto L_11ad0079;
  /* 11acff18 cmp dword ptr [0x11af9900], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11af9900))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acff1f je 0x11ad0068 */
  if (C.zf) goto L_11ad0068;
  /* 11acff25 mov eax, dword ptr [0x11af98f8] */
  EAX = (r32((uint32_t)(0x11af98f8)));
  /* 11acff2a shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 11acff2d mov ecx, dword ptr [0x11af9900] */
  ECX = (r32((uint32_t)(0x11af9900)));
  /* 11acff33 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11acff36 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11acff38 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11acff3b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11acff40 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11acff45 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11acff48 push eax */
  push32((uint32_t)(EAX));
  /* 11acff49 call dword ptr [0x11afb368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb368))), 0x11acff4fu);
  /* 11acff4f mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11acff54 mov ecx, dword ptr [0x11af98f8] */
  ECX = (r32((uint32_t)(0x11af98f8)));
  /* 11acff5a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11acff5c mov eax, dword ptr [0x11af9900] */
  EAX = (r32((uint32_t)(0x11af9900)));
  /* 11acff61 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11acff64 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11acff66 mov edx, dword ptr [0x11af9900] */
  EDX = (r32((uint32_t)(0x11af9900)));
  /* 11acff6c mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11acff6f mov eax, dword ptr [0x11af9900] */
  EAX = (r32((uint32_t)(0x11af9900)));
  /* 11acff74 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11acff77 mov edx, dword ptr [0x11af98f8] */
  EDX = (r32((uint32_t)(0x11af98f8)));
  /* 11acff7d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 11acff88 mov eax, dword ptr [0x11af9900] */
  EAX = (r32((uint32_t)(0x11af9900)));
  /* 11acff8d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11acff90 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 11acff93 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11acff96 mov eax, dword ptr [0x11af9900] */
  EAX = (r32((uint32_t)(0x11af9900)));
  /* 11acff9b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11acff9e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 11acffa1 mov edx, dword ptr [0x11af9900] */
  EDX = (r32((uint32_t)(0x11af9900)));
  /* 11acffa7 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11acffaa movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 11acffae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11acffb0 jne 0x11acffc6 */
  if (!C.zf) goto L_11acffc6;
  /* 11acffb2 mov edx, dword ptr [0x11af9900] */
  EDX = (r32((uint32_t)(0x11af9900)));
  /* 11acffb8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11acffbb and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11acffbd mov ecx, dword ptr [0x11af9900] */
  ECX = (r32((uint32_t)(0x11af9900)));
  /* 11acffc3 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11acffc6:;
  /* 11acffc6 mov edx, dword ptr [0x11af9900] */
  EDX = (r32((uint32_t)(0x11af9900)));
  /* 11acffcc cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11acffd0 jne 0x11ad0068 */
  if (!C.zf) goto L_11ad0068;
  /* 11acffd6 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11acffdb push 0 */
  push32((uint32_t)(0x0u));
  /* 11acffdd mov eax, dword ptr [0x11af9900] */
  EAX = (r32((uint32_t)(0x11af9900)));
  /* 11acffe2 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11acffe5 push ecx */
  push32((uint32_t)(ECX));
  /* 11acffe6 call dword ptr [0x11afb368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb368))), 0x11acffecu);
  /* 11acffec mov edx, dword ptr [0x11af9900] */
  EDX = (r32((uint32_t)(0x11af9900)));
  /* 11acfff2 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11acfff5 push eax */
  push32((uint32_t)(EAX));
  /* 11acfff6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11acfff8 mov ecx, dword ptr [0x11afac64] */
  ECX = (r32((uint32_t)(0x11afac64)));
  /* 11acfffe push ecx */
  push32((uint32_t)(ECX));
  /* 11acffff call dword ptr [0x11afb360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb360))), 0x11ad0005u);
  /* 11ad0005 mov edx, dword ptr [0x11af9904] */
  EDX = (r32((uint32_t)(0x11af9904)));
  /* 11ad000b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad000e mov eax, dword ptr [0x11af9908] */
  EAX = (r32((uint32_t)(0x11af9908)));
  /* 11ad0013 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0015 mov ecx, dword ptr [0x11af9900] */
  ECX = (r32((uint32_t)(0x11af9900)));
  /* 11ad001b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad001e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad0020 push eax */
  push32((uint32_t)(EAX));
  /* 11ad0021 mov edx, dword ptr [0x11af9900] */
  EDX = (r32((uint32_t)(0x11af9900)));
  /* 11ad0027 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad002a push edx */
  push32((uint32_t)(EDX));
  /* 11ad002b mov eax, dword ptr [0x11af9900] */
  EAX = (r32((uint32_t)(0x11af9900)));
  /* 11ad0030 push eax */
  push32((uint32_t)(EAX));
  /* 11ad0031 call 0x11acef80 */
  push32(0x11ad0036u); f_11acef80();
  /* 11ad0036 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0039 mov ecx, dword ptr [0x11af9904] */
  ECX = (r32((uint32_t)(0x11af9904)));
  /* 11ad003f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad0042 mov dword ptr [0x11af9904], ecx */
  w32((uint32_t)(0x11af9904), (ECX));
  /* 11ad0048 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad004b cmp edx, dword ptr [0x11af9900] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11af9900))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad0051 jbe 0x11ad005c */
  if ((C.cf||C.zf)) goto L_11ad005c;
  /* 11ad0053 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad0056 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad0059 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11ad005c:;
  /* 11ad005c mov ecx, dword ptr [0x11af9908] */
  ECX = (r32((uint32_t)(0x11af9908)));
  /* 11ad0062 mov dword ptr [0x11af98fc], ecx */
  w32((uint32_t)(0x11af98fc), (ECX));
L_11ad0068:;
  /* 11ad0068 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad006b mov dword ptr [0x11af9900], edx */
  w32((uint32_t)(0x11af9900), (EDX));
  /* 11ad0071 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad0074 mov dword ptr [0x11af98f8], eax */
  w32((uint32_t)(0x11af98f8), (EAX));
L_11ad0079:;
  /* 11ad0079 mov esp, ebp */
  ESP = (EBP);
  /* 11ad007b pop ebp */
  EBP = (pop32());
  /* 11ad007c ret  */
  ESPCHK(0x11acfab0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010080 @ 0x11ad0080 (1334 bytes, 427 insns) */
void f_11ad0080(void) {
  FTRACE(0x11ad0080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad0080 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad0081 mov ebp, esp */
  EBP = (ESP);
  /* 11ad0083 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad0086 push esi */
  push32((uint32_t)(ESI));
  /* 11ad0087 mov eax, dword ptr [0x11af9904] */
  EAX = (r32((uint32_t)(0x11af9904)));
  /* 11ad008c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad008f mov ecx, dword ptr [0x11af9908] */
  ECX = (r32((uint32_t)(0x11af9908)));
  /* 11ad0095 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0097 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11ad009a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad009d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad00a0 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad00a3 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11ad00a6 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ad00a9 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11ad00ac sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad00af mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11ad00b2 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad00b6 jge 0x11ad00cc */
  if ((C.sf==C.of)) goto L_11ad00cc;
  /* 11ad00b8 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11ad00bb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ad00be shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ad00c0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11ad00c3 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 11ad00ca jmp 0x11ad00e1 */
  goto L_11ad00e1;
L_11ad00cc:;
  /* 11ad00cc mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11ad00d3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ad00d6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad00d9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad00dc shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ad00de mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_11ad00e1:;
  /* 11ad00e1 mov ecx, dword ptr [0x11af98fc] */
  ECX = (r32((uint32_t)(0x11af98fc)));
  /* 11ad00e7 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_11ad00ea:;
  /* 11ad00ea mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad00ed cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad00f0 jae 0x11ad0116 */
  if (!C.cf) goto L_11ad0116;
  /* 11ad00f2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad00f5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ad00f8 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 11ad00fa mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad00fd mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11ad0100 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 11ad0103 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad0105 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad0107 je 0x11ad010b */
  if (C.zf) goto L_11ad010b;
  /* 11ad0109 jmp 0x11ad0116 */
  goto L_11ad0116;
L_11ad010b:;
  /* 11ad010b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad010e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0111 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11ad0114 jmp 0x11ad00ea */
  goto L_11ad00ea;
L_11ad0116:;
  /* 11ad0116 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad0119 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad011c jne 0x11ad01fd */
  if (!C.zf) goto L_11ad01fd;
  /* 11ad0122 mov eax, dword ptr [0x11af9908] */
  EAX = (r32((uint32_t)(0x11af9908)));
  /* 11ad0127 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11ad012a:;
  /* 11ad012a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad012d cmp ecx, dword ptr [0x11af98fc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11af98fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad0133 jae 0x11ad0159 */
  if (!C.cf) goto L_11ad0159;
  /* 11ad0135 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad0138 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ad013b and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 11ad013d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad0140 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11ad0143 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11ad0146 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad0148 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad014a je 0x11ad014e */
  if (C.zf) goto L_11ad014e;
  /* 11ad014c jmp 0x11ad0159 */
  goto L_11ad0159;
L_11ad014e:;
  /* 11ad014e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad0151 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0154 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ad0157 jmp 0x11ad012a */
  goto L_11ad012a;
L_11ad0159:;
  /* 11ad0159 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad015c cmp ecx, dword ptr [0x11af98fc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11af98fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad0162 jne 0x11ad01fd */
  if (!C.zf) goto L_11ad01fd;
L_11ad0168:;
  /* 11ad0168 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad016b cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad016e jae 0x11ad0186 */
  if (!C.cf) goto L_11ad0186;
  /* 11ad0170 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad0173 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad0177 je 0x11ad017b */
  if (C.zf) goto L_11ad017b;
  /* 11ad0179 jmp 0x11ad0186 */
  goto L_11ad0186;
L_11ad017b:;
  /* 11ad017b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad017e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0181 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11ad0184 jmp 0x11ad0168 */
  goto L_11ad0168;
L_11ad0186:;
  /* 11ad0186 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad0189 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad018c jne 0x11ad01d7 */
  if (!C.zf) goto L_11ad01d7;
  /* 11ad018e mov eax, dword ptr [0x11af9908] */
  EAX = (r32((uint32_t)(0x11af9908)));
  /* 11ad0193 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11ad0196:;
  /* 11ad0196 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad0199 cmp ecx, dword ptr [0x11af98fc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11af98fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad019f jae 0x11ad01b7 */
  if (!C.cf) goto L_11ad01b7;
  /* 11ad01a1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad01a4 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad01a8 je 0x11ad01ac */
  if (C.zf) goto L_11ad01ac;
  /* 11ad01aa jmp 0x11ad01b7 */
  goto L_11ad01b7;
L_11ad01ac:;
  /* 11ad01ac mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad01af add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad01b2 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ad01b5 jmp 0x11ad0196 */
  goto L_11ad0196;
L_11ad01b7:;
  /* 11ad01b7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad01ba cmp ecx, dword ptr [0x11af98fc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11af98fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad01c0 jne 0x11ad01d7 */
  if (!C.zf) goto L_11ad01d7;
  /* 11ad01c2 call 0x11ad05c0 */
  push32(0x11ad01c7u); f_11ad05c0();
  /* 11ad01c7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ad01ca cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad01ce jne 0x11ad01d7 */
  if (!C.zf) goto L_11ad01d7;
  /* 11ad01d0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad01d2 jmp 0x11ad05b1 */
  goto L_11ad05b1;
L_11ad01d7:;
  /* 11ad01d7 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad01da push edx */
  push32((uint32_t)(EDX));
  /* 11ad01db call 0x11ad06d0 */
  push32(0x11ad01e0u); f_11ad06d0();
  /* 11ad01e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad01e3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad01e6 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11ad01e9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11ad01eb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad01ee mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ad01f1 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad01f4 jne 0x11ad01fd */
  if (!C.zf) goto L_11ad01fd;
  /* 11ad01f6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad01f8 jmp 0x11ad05b1 */
  goto L_11ad05b1;
L_11ad01fd:;
  /* 11ad01fd mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad0200 mov dword ptr [0x11af98fc], edx */
  w32((uint32_t)(0x11af98fc), (EDX));
  /* 11ad0206 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad0209 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ad020c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 11ad020f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ad0212 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ad0214 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11ad0217 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad021b je 0x11ad0240 */
  if (C.zf) goto L_11ad0240;
  /* 11ad021d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad0220 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ad0223 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ad0226 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 11ad022a mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad022d mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ad0230 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 11ad0233 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 11ad023a or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11ad023c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad023e jne 0x11ad0275 */
  if (!C.zf) goto L_11ad0275;
L_11ad0240:;
  /* 11ad0240 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_11ad0247:;
  /* 11ad0247 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad024a mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ad024d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ad0250 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 11ad0254 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad0257 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ad025a mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 11ad025d and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 11ad0264 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11ad0266 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ad0268 jne 0x11ad0275 */
  if (!C.zf) goto L_11ad0275;
  /* 11ad026a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad026d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0270 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11ad0273 jmp 0x11ad0247 */
  goto L_11ad0247;
L_11ad0275:;
  /* 11ad0275 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad0278 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad027e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ad0281 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11ad0288 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ad028b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11ad0292 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad0295 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ad0298 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ad029b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 11ad029f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11ad02a2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad02a6 jne 0x11ad02c2 */
  if (!C.zf) goto L_11ad02c2;
  /* 11ad02a8 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 11ad02af mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad02b2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ad02b5 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11ad02b8 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 11ad02bf mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_11ad02c2:;
  /* 11ad02c2 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad02c6 jl 0x11ad02db */
  if ((C.sf!=C.of)) goto L_11ad02db;
  /* 11ad02c8 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ad02cb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11ad02cd mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11ad02d0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ad02d3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad02d6 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11ad02d9 jmp 0x11ad02c2 */
  goto L_11ad02c2;
L_11ad02db:;
  /* 11ad02db mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ad02de mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad02e1 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 11ad02e5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11ad02e8 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad02eb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ad02ed sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad02f0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ad02f3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad02f6 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11ad02f9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad02fc mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11ad02ff cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad0303 jle 0x11ad030c */
  if ((C.zf||C.sf!=C.of)) goto L_11ad030c;
  /* 11ad0305 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_11ad030c:;
  /* 11ad030c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad030f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad0312 je 0x11ad0530 */
  if (C.zf) goto L_11ad0530;
  /* 11ad0318 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad031b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad031e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ad0321 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad0324 jne 0x11ad03fa */
  if (!C.zf) goto L_11ad03fa;
  /* 11ad032a cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad032e jge 0x11ad038f */
  if ((C.sf==C.of)) goto L_11ad038f;
  /* 11ad0330 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11ad0335 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ad0338 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ad033a not eax */
  EAX = (~(EAX));
  /* 11ad033c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad033f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ad0342 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11ad0346 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad0348 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad034b mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ad034e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11ad0352 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ad0355 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0358 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11ad035b sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11ad035e mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ad0361 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0364 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11ad0367 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ad036a add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad036d movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11ad0371 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ad0373 jne 0x11ad038d */
  if (!C.zf) goto L_11ad038d;
  /* 11ad0375 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11ad037a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ad037d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ad037f not eax */
  EAX = (~(EAX));
  /* 11ad0381 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad0384 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ad0386 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11ad0388 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad038b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11ad038d:;
  /* 11ad038d jmp 0x11ad03fa */
  goto L_11ad03fa;
L_11ad038f:;
  /* 11ad038f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ad0392 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad0395 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ad039a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ad039c not edx */
  EDX = (~(EDX));
  /* 11ad039e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad03a1 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ad03a4 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11ad03ab and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad03ad mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad03b0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ad03b3 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 11ad03ba mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ad03bd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad03c0 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11ad03c3 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11ad03c6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ad03c9 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad03cc mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11ad03cf mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ad03d2 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad03d5 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11ad03d9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad03db jne 0x11ad03fa */
  if (!C.zf) goto L_11ad03fa;
  /* 11ad03dd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ad03e0 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad03e3 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ad03e8 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ad03ea not edx */
  EDX = (~(EDX));
  /* 11ad03ec mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad03ef mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ad03f2 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad03f4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad03f7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11ad03fa:;
  /* 11ad03fa mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad03fd mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ad0400 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad0403 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ad0406 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11ad0409 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad040c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ad040f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad0412 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ad0415 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11ad0418 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad041c je 0x11ad0530 */
  if (C.zf) goto L_11ad0530;
  /* 11ad0422 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad0425 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad0428 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 11ad042b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ad042e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad0431 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad0434 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ad0437 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11ad043a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad043d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad0440 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11ad0443 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad0446 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad0449 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11ad044c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad044f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ad0452 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad0455 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11ad0458 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad045b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad045e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ad0461 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad0464 jne 0x11ad0530 */
  if (!C.zf) goto L_11ad0530;
  /* 11ad046a cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad046e jge 0x11ad04ca */
  if ((C.sf==C.of)) goto L_11ad04ca;
  /* 11ad0470 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ad0473 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0476 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11ad047a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ad047d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0480 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11ad0483 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ad0485 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ad0488 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad048b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11ad048e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad0490 jne 0x11ad04a8 */
  if (!C.zf) goto L_11ad04a8;
  /* 11ad0492 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11ad0497 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad049a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ad049c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad049f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ad04a1 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11ad04a3 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad04a6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11ad04a8:;
  /* 11ad04a8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ad04ad mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad04b0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ad04b2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad04b5 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ad04b8 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11ad04bc or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad04be mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad04c1 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ad04c4 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11ad04c8 jmp 0x11ad0530 */
  goto L_11ad0530;
L_11ad04ca:;
  /* 11ad04ca mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ad04cd add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad04d0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11ad04d4 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ad04d7 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad04da mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11ad04dd add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ad04df mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ad04e2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad04e5 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11ad04e8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad04ea jne 0x11ad0507 */
  if (!C.zf) goto L_11ad0507;
  /* 11ad04ec mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad04ef sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad04f2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11ad04f7 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ad04f9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad04fc mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ad04ff or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11ad0501 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad0504 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11ad0507:;
  /* 11ad0507 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad050a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad050d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ad0512 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ad0514 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad0517 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ad051a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11ad0521 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad0523 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad0526 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ad0529 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_11ad0530:;
  /* 11ad0530 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad0534 je 0x11ad054a */
  if (C.zf) goto L_11ad054a;
  /* 11ad0536 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad0539 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad053c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11ad053e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad0541 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0544 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad0547 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_11ad054a:;
  /* 11ad054a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad054d add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0550 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11ad0553 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ad0556 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0559 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad055c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ad055e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ad0561 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0564 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad0567 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad056a mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 11ad056d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad0570 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ad0572 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad0575 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11ad0577 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad057a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad057d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11ad057f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad0581 jne 0x11ad05a3 */
  if (!C.zf) goto L_11ad05a3;
  /* 11ad0583 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad0586 cmp eax, dword ptr [0x11af9900] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11af9900))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad058c jne 0x11ad05a3 */
  if (!C.zf) goto L_11ad05a3;
  /* 11ad058e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad0591 cmp ecx, dword ptr [0x11af98f8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11af98f8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad0597 jne 0x11ad05a3 */
  if (!C.zf) goto L_11ad05a3;
  /* 11ad0599 mov dword ptr [0x11af9900], 0 */
  w32((uint32_t)(0x11af9900), (0x0u));
L_11ad05a3:;
  /* 11ad05a3 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11ad05a6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad05a9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11ad05ab mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad05ae add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11ad05b1:;
  /* 11ad05b1 pop esi */
  ESI = (pop32());
  /* 11ad05b2 mov esp, ebp */
  ESP = (EBP);
  /* 11ad05b4 pop ebp */
  EBP = (pop32());
  /* 11ad05b5 ret  */
  ESPCHK(0x11ad0080u, _esp0);
  ESP += 4; return;
}

/* FUN_100105c0 @ 0x11ad05c0 (271 bytes, 78 insns) */
void f_11ad05c0(void) {
  FTRACE(0x11ad05c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad05c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad05c1 mov ebp, esp */
  EBP = (ESP);
  /* 11ad05c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11ad05c4 mov eax, dword ptr [0x11af9904] */
  EAX = (r32((uint32_t)(0x11af9904)));
  /* 11ad05c9 cmp eax, dword ptr [0x11af98e8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11af98e8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad05cf jne 0x11ad061b */
  if (!C.zf) goto L_11ad061b;
  /* 11ad05d1 mov ecx, dword ptr [0x11af98e8] */
  ECX = (r32((uint32_t)(0x11af98e8)));
  /* 11ad05d7 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad05da imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad05dd push ecx */
  push32((uint32_t)(ECX));
  /* 11ad05de mov edx, dword ptr [0x11af9908] */
  EDX = (r32((uint32_t)(0x11af9908)));
  /* 11ad05e4 push edx */
  push32((uint32_t)(EDX));
  /* 11ad05e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad05e7 mov eax, dword ptr [0x11afac64] */
  EAX = (r32((uint32_t)(0x11afac64)));
  /* 11ad05ec push eax */
  push32((uint32_t)(EAX));
  /* 11ad05ed call dword ptr [0x11afb344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb344))), 0x11ad05f3u);
  /* 11ad05f3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11ad05f6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad05fa jne 0x11ad0603 */
  if (!C.zf) goto L_11ad0603;
  /* 11ad05fc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad05fe jmp 0x11ad06cb */
  goto L_11ad06cb;
L_11ad0603:;
  /* 11ad0603 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad0606 mov dword ptr [0x11af9908], ecx */
  w32((uint32_t)(0x11af9908), (ECX));
  /* 11ad060c mov edx, dword ptr [0x11af98e8] */
  EDX = (r32((uint32_t)(0x11af98e8)));
  /* 11ad0612 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0615 mov dword ptr [0x11af98e8], edx */
  w32((uint32_t)(0x11af98e8), (EDX));
L_11ad061b:;
  /* 11ad061b mov eax, dword ptr [0x11af9904] */
  EAX = (r32((uint32_t)(0x11af9904)));
  /* 11ad0620 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad0623 mov ecx, dword ptr [0x11af9908] */
  ECX = (r32((uint32_t)(0x11af9908)));
  /* 11ad0629 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad062b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ad062e push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11ad0633 push 8 */
  push32((uint32_t)(0x8u));
  /* 11ad0635 mov edx, dword ptr [0x11afac64] */
  EDX = (r32((uint32_t)(0x11afac64)));
  /* 11ad063b push edx */
  push32((uint32_t)(EDX));
  /* 11ad063c call dword ptr [0x11afb33c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb33c))), 0x11ad0642u);
  /* 11ad0642 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad0645 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 11ad0648 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad064b cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad064f jne 0x11ad0655 */
  if (!C.zf) goto L_11ad0655;
  /* 11ad0651 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad0653 jmp 0x11ad06cb */
  goto L_11ad06cb;
L_11ad0655:;
  /* 11ad0655 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ad0657 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11ad065c push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11ad0661 push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad0663 call dword ptr [0x11afb334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb334))), 0x11ad0669u);
  /* 11ad0669 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad066c mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 11ad066f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad0672 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad0676 jne 0x11ad0692 */
  if (!C.zf) goto L_11ad0692;
  /* 11ad0678 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad067b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ad067e push ecx */
  push32((uint32_t)(ECX));
  /* 11ad067f push 0 */
  push32((uint32_t)(0x0u));
  /* 11ad0681 mov edx, dword ptr [0x11afac64] */
  EDX = (r32((uint32_t)(0x11afac64)));
  /* 11ad0687 push edx */
  push32((uint32_t)(EDX));
  /* 11ad0688 call dword ptr [0x11afb360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb360))), 0x11ad068eu);
  /* 11ad068e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad0690 jmp 0x11ad06cb */
  goto L_11ad06cb;
L_11ad0692:;
  /* 11ad0692 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad0695 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11ad069b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad069e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11ad06a5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad06a8 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 11ad06af mov eax, dword ptr [0x11af9904] */
  EAX = (r32((uint32_t)(0x11af9904)));
  /* 11ad06b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad06b7 mov dword ptr [0x11af9904], eax */
  w32((uint32_t)(0x11af9904), (EAX));
  /* 11ad06bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad06bf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11ad06c2 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 11ad06c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11ad06cb:;
  /* 11ad06cb mov esp, ebp */
  ESP = (EBP);
  /* 11ad06cd pop ebp */
  EBP = (pop32());
  /* 11ad06ce ret  */
  ESPCHK(0x11ad05c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100106d0 @ 0x11ad06d0 (494 bytes, 149 insns) */
void f_11ad06d0(void) {
  FTRACE(0x11ad06d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad06d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad06d1 mov ebp, esp */
  EBP = (ESP);
  /* 11ad06d3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad06d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad06d9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11ad06dc mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11ad06df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad06e2 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ad06e5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11ad06e8 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_11ad06ef:;
  /* 11ad06ef cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad06f3 jl 0x11ad0708 */
  if ((C.sf!=C.of)) goto L_11ad0708;
  /* 11ad06f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad06f8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11ad06fa mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11ad06fd mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ad0700 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0703 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11ad0706 jmp 0x11ad06ef */
  goto L_11ad06ef;
L_11ad0708:;
  /* 11ad0708 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ad070b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad0711 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ad0714 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11ad071b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11ad071e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11ad0725 jmp 0x11ad0730 */
  goto L_11ad0730;
L_11ad0727:;
  /* 11ad0727 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ad072a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad072d mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11ad0730:;
  /* 11ad0730 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad0734 jge 0x11ad0756 */
  if ((C.sf==C.of)) goto L_11ad0756;
  /* 11ad0736 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ad0739 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad073c lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 11ad073f mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ad0742 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad0745 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad0748 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11ad074b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad074e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad0751 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11ad0754 jmp 0x11ad0727 */
  goto L_11ad0727;
L_11ad0756:;
  /* 11ad0756 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ad0759 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11ad075c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad075f mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11ad0762 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0764 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11ad0767 push 4 */
  push32((uint32_t)(0x4u));
  /* 11ad0769 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11ad076e push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11ad0773 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad0776 push edx */
  push32((uint32_t)(EDX));
  /* 11ad0777 call dword ptr [0x11afb334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11afb334))), 0x11ad077du);
  /* 11ad077d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11ad077f jne 0x11ad0789 */
  if (!C.zf) goto L_11ad0789;
  /* 11ad0781 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11ad0784 jmp 0x11ad08ba */
  goto L_11ad08ba;
L_11ad0789:;
  /* 11ad0789 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad078c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0791 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11ad0794 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad0797 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11ad079a jmp 0x11ad07a8 */
  goto L_11ad07a8;
L_11ad079c:;
  /* 11ad079c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad079f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad07a5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11ad07a8:;
  /* 11ad07a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad07ab cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad07ae ja 0x11ad080d */
  if ((!C.cf&&!C.zf)) goto L_11ad080d;
  /* 11ad07b0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad07b3 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 11ad07ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad07bd mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 11ad07c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad07ca add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad07cd mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ad07d0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad07d3 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 11ad07d9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad07dc add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad07e2 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad07e5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11ad07e8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad07eb sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad07f1 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad07f4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11ad07f7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad07fa add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad07ff mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11ad0802 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ad0805 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 11ad080b jmp 0x11ad079c */
  goto L_11ad079c;
L_11ad080d:;
  /* 11ad080d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad0810 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0816 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11ad0819 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad081c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad081f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad0822 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11ad0825 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad0828 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ad082b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ad082e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad0831 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad0834 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11ad0837 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ad083a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad083d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad0840 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11ad0843 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad0846 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11ad0849 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11ad084c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad084f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad0852 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11ad0855 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ad0858 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ad085b mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 11ad0863 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ad0866 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ad0869 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 11ad0874 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ad0877 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 11ad087b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ad087e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 11ad0881 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ad0884 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ad0887 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 11ad088a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ad088c jne 0x11ad089d */
  if (!C.zf) goto L_11ad089d;
  /* 11ad088e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad0891 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ad0894 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad0897 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad089a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11ad089d:;
  /* 11ad089d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ad08a2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ad08a5 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ad08a7 not edx */
  EDX = (~(EDX));
  /* 11ad08a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad08ac mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11ad08af and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad08b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad08b4 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11ad08b7 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_11ad08ba:;
  /* 11ad08ba mov esp, ebp */
  ESP = (EBP);
  /* 11ad08bc pop ebp */
  EBP = (pop32());
  /* 11ad08bd ret  */
  ESPCHK(0x11ad06d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100108c0 @ 0x11ad08c0 (1515 bytes, 489 insns) */
void f_11ad08c0(void) {
  FTRACE(0x11ad08c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11ad08c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11ad08c1 mov ebp, esp */
  EBP = (ESP);
  /* 11ad08c3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad08c6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11ad08c9 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad08cc and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 11ad08ce mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11ad08d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad08d4 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11ad08d7 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11ad08da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad08dd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad08e0 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad08e3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11ad08e6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11ad08e9 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11ad08ec mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11ad08ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad08f2 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11ad08f8 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad08fb lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11ad0902 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11ad0905 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11ad0908 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad090b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11ad090e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad0911 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ad0913 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad0916 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11ad0919 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad091c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad091f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11ad0922 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ad0925 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ad0927 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11ad092a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ad092d cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad0930 jle 0x11ad0be6 */
  if ((C.zf||C.sf!=C.of)) goto L_11ad0be6;
  /* 11ad0936 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad0939 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11ad093c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad093e jne 0x11ad094b */
  if (!C.zf) goto L_11ad094b;
  /* 11ad0940 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ad0943 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0946 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad0949 jle 0x11ad0952 */
  if ((C.zf||C.sf!=C.of)) goto L_11ad0952;
L_11ad094b:;
  /* 11ad094b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad094d jmp 0x11ad0ea7 */
  goto L_11ad0ea7;
L_11ad0952:;
  /* 11ad0952 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad0955 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11ad0958 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad095b mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11ad095e cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad0962 jbe 0x11ad096b */
  if ((C.cf||C.zf)) goto L_11ad096b;
  /* 11ad0964 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_11ad096b:;
  /* 11ad096b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ad096e mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ad0971 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ad0974 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad0977 jne 0x11ad0a4d */
  if (!C.zf) goto L_11ad0a4d;
  /* 11ad097d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad0981 jae 0x11ad09e2 */
  if (!C.cf) goto L_11ad09e2;
  /* 11ad0983 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ad0988 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ad098b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ad098d not edx */
  EDX = (~(EDX));
  /* 11ad098f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad0992 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad0995 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11ad0999 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad099b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad099e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad09a1 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11ad09a5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad09a8 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad09ab mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11ad09ae sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11ad09b1 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad09b4 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad09b7 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11ad09ba mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad09bd add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad09c0 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11ad09c4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad09c6 jne 0x11ad09e0 */
  if (!C.zf) goto L_11ad09e0;
  /* 11ad09c8 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ad09cd mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ad09d0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ad09d2 not edx */
  EDX = (~(EDX));
  /* 11ad09d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad09d7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ad09d9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad09db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad09de mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11ad09e0:;
  /* 11ad09e0 jmp 0x11ad0a4d */
  goto L_11ad0a4d;
L_11ad09e2:;
  /* 11ad09e2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ad09e5 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad09e8 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11ad09ed shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ad09ef not eax */
  EAX = (~(EAX));
  /* 11ad09f1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad09f4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad09f7 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11ad09fe and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad0a00 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad0a03 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad0a06 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11ad0a0d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad0a10 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0a13 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11ad0a16 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11ad0a19 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad0a1c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0a1f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11ad0a22 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad0a25 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0a28 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11ad0a2c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ad0a2e jne 0x11ad0a4d */
  if (!C.zf) goto L_11ad0a4d;
  /* 11ad0a30 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ad0a33 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad0a36 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11ad0a3b shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ad0a3d not eax */
  EAX = (~(EAX));
  /* 11ad0a3f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad0a42 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ad0a45 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11ad0a47 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad0a4a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11ad0a4d:;
  /* 11ad0a4d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ad0a50 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ad0a53 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ad0a56 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ad0a59 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11ad0a5c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ad0a5f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ad0a62 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ad0a65 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ad0a68 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11ad0a6b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ad0a6e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0a71 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad0a74 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11ad0a77 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad0a7b jle 0x11ad0bc7 */
  if ((C.zf||C.sf!=C.of)) goto L_11ad0bc7;
  /* 11ad0a81 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad0a84 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0a87 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11ad0a8a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad0a8d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11ad0a90 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad0a93 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11ad0a96 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad0a9a jbe 0x11ad0aa3 */
  if ((C.cf||C.zf)) goto L_11ad0aa3;
  /* 11ad0a9c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_11ad0aa3:;
  /* 11ad0aa3 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ad0aa6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad0aa9 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 11ad0aac mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11ad0aaf mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ad0ab2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad0ab5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ad0ab8 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11ad0abb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ad0abe mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad0ac1 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11ad0ac4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad0ac7 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ad0aca mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11ad0acd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ad0ad0 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ad0ad3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ad0ad6 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11ad0ad9 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ad0adc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ad0adf mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ad0ae2 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad0ae5 jne 0x11ad0bb3 */
  if (!C.zf) goto L_11ad0bb3;
  /* 11ad0aeb cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad0aef jae 0x11ad0b4c */
  if (!C.cf) goto L_11ad0b4c;
  /* 11ad0af1 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad0af4 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0af7 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11ad0afb mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad0afe add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0b01 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11ad0b04 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ad0b07 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad0b0a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0b0d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11ad0b10 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ad0b12 jne 0x11ad0b2a */
  if (!C.zf) goto L_11ad0b2a;
  /* 11ad0b14 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ad0b19 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ad0b1c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ad0b1e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad0b21 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ad0b23 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad0b25 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad0b28 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11ad0b2a:;
  /* 11ad0b2a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11ad0b2f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ad0b32 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ad0b34 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad0b37 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad0b3a mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11ad0b3e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad0b40 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad0b43 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad0b46 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11ad0b4a jmp 0x11ad0bb3 */
  goto L_11ad0bb3;
L_11ad0b4c:;
  /* 11ad0b4c mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad0b4f add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0b52 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11ad0b56 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad0b59 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0b5c mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11ad0b5f add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ad0b62 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad0b65 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0b68 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11ad0b6b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ad0b6d jne 0x11ad0b8a */
  if (!C.zf) goto L_11ad0b8a;
  /* 11ad0b6f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ad0b72 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad0b75 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ad0b7a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ad0b7c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad0b7f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ad0b82 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad0b84 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad0b87 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11ad0b8a:;
  /* 11ad0b8a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ad0b8d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad0b90 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11ad0b95 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ad0b97 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad0b9a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad0b9d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11ad0ba4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad0ba6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad0ba9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad0bac mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_11ad0bb3:;
  /* 11ad0bb3 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ad0bb6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad0bb9 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11ad0bbb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ad0bbe add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0bc1 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad0bc4 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_11ad0bc7:;
  /* 11ad0bc7 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ad0bca add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0bcd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad0bd0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11ad0bd2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ad0bd5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0bd8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad0bdb add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0bde mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 11ad0be1 jmp 0x11ad0ea2 */
  goto L_11ad0ea2;
L_11ad0be6:;
  /* 11ad0be6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ad0be9 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad0bec jge 0x11ad0ea2 */
  if ((C.sf==C.of)) goto L_11ad0ea2;
  /* 11ad0bf2 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ad0bf5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0bf8 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad0bfb mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11ad0bfd mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11ad0c00 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0c03 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad0c06 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0c09 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 11ad0c0c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad0c0f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0c12 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11ad0c15 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ad0c18 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad0c1b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11ad0c1e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ad0c21 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11ad0c24 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad0c27 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11ad0c2a cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad0c2e jbe 0x11ad0c37 */
  if ((C.cf||C.zf)) goto L_11ad0c37;
  /* 11ad0c30 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_11ad0c37:;
  /* 11ad0c37 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad0c3a and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11ad0c3d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ad0c3f jne 0x11ad0d80 */
  if (!C.zf) goto L_11ad0d80;
  /* 11ad0c45 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11ad0c48 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11ad0c4b sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad0c4e mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11ad0c51 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad0c55 jbe 0x11ad0c5e */
  if ((C.cf||C.zf)) goto L_11ad0c5e;
  /* 11ad0c57 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_11ad0c5e:;
  /* 11ad0c5e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ad0c61 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ad0c64 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ad0c67 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad0c6a jne 0x11ad0d40 */
  if (!C.zf) goto L_11ad0d40;
  /* 11ad0c70 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad0c74 jae 0x11ad0cd5 */
  if (!C.cf) goto L_11ad0cd5;
  /* 11ad0c76 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ad0c7b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ad0c7e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ad0c80 not edx */
  EDX = (~(EDX));
  /* 11ad0c82 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad0c85 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad0c88 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11ad0c8c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad0c8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad0c91 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad0c94 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11ad0c98 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad0c9b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0c9e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11ad0ca1 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11ad0ca4 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad0ca7 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0caa mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11ad0cad mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad0cb0 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0cb3 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11ad0cb7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad0cb9 jne 0x11ad0cd3 */
  if (!C.zf) goto L_11ad0cd3;
  /* 11ad0cbb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ad0cc0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ad0cc3 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ad0cc5 not edx */
  EDX = (~(EDX));
  /* 11ad0cc7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad0cca mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11ad0ccc and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad0cce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad0cd1 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11ad0cd3:;
  /* 11ad0cd3 jmp 0x11ad0d40 */
  goto L_11ad0d40;
L_11ad0cd5:;
  /* 11ad0cd5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ad0cd8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad0cdb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11ad0ce0 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ad0ce2 not eax */
  EAX = (~(EAX));
  /* 11ad0ce4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad0ce7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad0cea mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11ad0cf1 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11ad0cf3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad0cf6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad0cf9 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11ad0d00 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad0d03 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0d06 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11ad0d09 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11ad0d0c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad0d0f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0d12 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11ad0d15 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad0d18 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0d1b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11ad0d1f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11ad0d21 jne 0x11ad0d40 */
  if (!C.zf) goto L_11ad0d40;
  /* 11ad0d23 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11ad0d26 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad0d29 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11ad0d2e shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ad0d30 not eax */
  EAX = (~(EAX));
  /* 11ad0d32 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad0d35 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ad0d38 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11ad0d3a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad0d3d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11ad0d40:;
  /* 11ad0d40 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ad0d43 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ad0d46 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ad0d49 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ad0d4c mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11ad0d4f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ad0d52 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11ad0d55 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11ad0d58 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11ad0d5b mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11ad0d5e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ad0d61 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0d64 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11ad0d67 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ad0d6a sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11ad0d6d sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad0d70 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11ad0d73 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad0d77 jbe 0x11ad0d80 */
  if ((C.cf||C.zf)) goto L_11ad0d80;
  /* 11ad0d79 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_11ad0d80:;
  /* 11ad0d80 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ad0d83 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11ad0d86 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 11ad0d89 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11ad0d8c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad0d8f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad0d92 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ad0d95 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11ad0d98 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad0d9b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad0d9e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11ad0da1 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11ad0da4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad0da7 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11ad0daa mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad0dad mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ad0db0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad0db3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11ad0db6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad0db9 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad0dbc mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11ad0dbf cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad0dc2 jne 0x11ad0e8e */
  if (!C.zf) goto L_11ad0e8e;
  /* 11ad0dc8 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11ad0dcc jae 0x11ad0e28 */
  if (!C.cf) goto L_11ad0e28;
  /* 11ad0dce mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad0dd1 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0dd4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11ad0dd8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad0ddb add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0dde mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11ad0de1 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ad0de3 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad0de6 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0de9 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11ad0dec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad0dee jne 0x11ad0e06 */
  if (!C.zf) goto L_11ad0e06;
  /* 11ad0df0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11ad0df5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ad0df8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ad0dfa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad0dfd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11ad0dff or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11ad0e01 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad0e04 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11ad0e06:;
  /* 11ad0e06 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ad0e0b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ad0e0e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ad0e10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad0e13 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad0e16 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11ad0e1a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad0e1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad0e1f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad0e22 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11ad0e26 jmp 0x11ad0e8e */
  goto L_11ad0e8e;
L_11ad0e28:;
  /* 11ad0e28 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad0e2b add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0e2e movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11ad0e32 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad0e35 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0e38 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11ad0e3b add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11ad0e3d mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad0e40 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0e43 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11ad0e46 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11ad0e48 jne 0x11ad0e65 */
  if (!C.zf) goto L_11ad0e65;
  /* 11ad0e4a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ad0e4d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad0e50 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11ad0e55 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11ad0e57 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad0e5a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11ad0e5d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11ad0e5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11ad0e62 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11ad0e65:;
  /* 11ad0e65 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11ad0e68 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11ad0e6b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11ad0e70 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11ad0e72 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad0e75 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad0e78 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11ad0e7f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11ad0e81 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11ad0e84 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11ad0e87 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_11ad0e8e:;
  /* 11ad0e8e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad0e91 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ad0e94 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11ad0e96 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11ad0e99 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11ad0e9c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11ad0e9f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_11ad0ea2:;
  /* 11ad0ea2 mov eax, 1 */
  EAX = (0x1u);
L_11ad0ea7:;
  /* 11ad0ea7 mov esp, ebp */
  ESP = (EBP);
  /* 11ad0ea9 pop ebp */
  EBP = (pop32());
  /* 11ad0eaa ret  */
  ESPCHK(0x11ad08c0u, _esp0);
  ESP += 4; return;
}

