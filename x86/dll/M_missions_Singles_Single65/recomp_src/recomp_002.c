#include "recomp.h"

/* FUN_1000ade0 @ 0x11a8ade0 (134 bytes, 50 insns) */
void f_11a8ade0(void) {
  FTRACE(0x11a8ade0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8ade0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8ade1 mov ebp, esp */
  EBP = (ESP);
  /* 11a8ade3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8ade4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8ade8 jne 0x11a8adee */
  if (!C.zf) goto L_11a8adee;
  /* 11a8adea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8adec jmp 0x11a8ae62 */
  goto L_11a8ae62;
L_11a8adee:;
  /* 11a8adee push 1 */
  push32((uint32_t)(0x1u));
  /* 11a8adf0 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11a8adf2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8adf5 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8adf8 push eax */
  push32((uint32_t)(EAX));
  /* 11a8adf9 call 0x11a8ad90 */
  push32(0x11a8adfeu); f_11a8ad90();
  /* 11a8adfe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ae01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8ae03 jne 0x11a8ae09 */
  if (!C.zf) goto L_11a8ae09;
  /* 11a8ae05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8ae07 jmp 0x11a8ae62 */
  goto L_11a8ae62;
L_11a8ae09:;
  /* 11a8ae09 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8ae0c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8ae0f push ecx */
  push32((uint32_t)(ECX));
  /* 11a8ae10 call 0x11a8fb70 */
  push32(0x11a8ae15u); f_11a8fb70();
  /* 11a8ae15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ae18 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a8ae1b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8ae1f je 0x11a8ae36 */
  if (C.zf) goto L_11a8ae36;
  /* 11a8ae21 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8ae24 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8ae27 push edx */
  push32((uint32_t)(EDX));
  /* 11a8ae28 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8ae2b push eax */
  push32((uint32_t)(EAX));
  /* 11a8ae2c call 0x11a8fbd0 */
  push32(0x11a8ae31u); f_11a8fbd0();
  /* 11a8ae31 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ae34 jmp 0x11a8ae62 */
  goto L_11a8ae62;
L_11a8ae36:;
  /* 11a8ae36 mov ecx, dword ptr [0x11aba0c0] */
  ECX = (r32((uint32_t)(0x11aba0c0)));
  /* 11a8ae3c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11a8ae42 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a8ae44 je 0x11a8ae4d */
  if (C.zf) goto L_11a8ae4d;
  /* 11a8ae46 mov eax, 1 */
  EAX = (0x1u);
  /* 11a8ae4b jmp 0x11a8ae62 */
  goto L_11a8ae62;
L_11a8ae4d:;
  /* 11a8ae4d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8ae50 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8ae53 push edx */
  push32((uint32_t)(EDX));
  /* 11a8ae54 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8ae56 mov eax, dword ptr [0x11abba64] */
  EAX = (r32((uint32_t)(0x11abba64)));
  /* 11a8ae5b push eax */
  push32((uint32_t)(EAX));
  /* 11a8ae5c call dword ptr [0x11abc3f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3f0))), 0x11a8ae62u);
L_11a8ae62:;
  /* 11a8ae62 mov esp, ebp */
  ESP = (EBP);
  /* 11a8ae64 pop ebp */
  EBP = (pop32());
  /* 11a8ae65 ret  */
  ESPCHK(0x11a8ade0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ae70 @ 0x11a8ae70 (227 bytes, 80 insns) */
void f_11a8ae70(void) {
  FTRACE(0x11a8ae70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8ae70 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8ae71 mov ebp, esp */
  EBP = (ESP);
  /* 11a8ae73 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8ae74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8ae77 push eax */
  push32((uint32_t)(EAX));
  /* 11a8ae78 call 0x11a8ade0 */
  push32(0x11a8ae7du); f_11a8ade0();
  /* 11a8ae7d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ae80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8ae82 jne 0x11a8ae8b */
  if (!C.zf) goto L_11a8ae8b;
  /* 11a8ae84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8ae86 jmp 0x11a8af4f */
  goto L_11a8af4f;
L_11a8ae8b:;
  /* 11a8ae8b push 9 */
  push32((uint32_t)(0x9u));
  /* 11a8ae8d call 0x11a8f2d0 */
  push32(0x11a8ae92u); f_11a8f2d0();
  /* 11a8ae92 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ae95 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8ae98 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8ae9b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a8ae9e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8aea1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11a8aea4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8aea9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8aeac je 0x11a8aed0 */
  if (C.zf) goto L_11a8aed0;
  /* 11a8aeae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8aeb1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8aeb5 je 0x11a8aed0 */
  if (C.zf) goto L_11a8aed0;
  /* 11a8aeb7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8aeba mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11a8aebd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8aec2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8aec5 je 0x11a8aed0 */
  if (C.zf) goto L_11a8aed0;
  /* 11a8aec7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8aeca cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8aece jne 0x11a8af43 */
  if (!C.zf) goto L_11a8af43;
L_11a8aed0:;
  /* 11a8aed0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a8aed2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8aed5 push edx */
  push32((uint32_t)(EDX));
  /* 11a8aed6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8aed9 push eax */
  push32((uint32_t)(EAX));
  /* 11a8aeda call 0x11a8ad90 */
  push32(0x11a8aedfu); f_11a8ad90();
  /* 11a8aedf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8aee2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8aee4 je 0x11a8af43 */
  if (C.zf) goto L_11a8af43;
  /* 11a8aee6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8aee9 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11a8aeec cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8aeef jne 0x11a8af43 */
  if (!C.zf) goto L_11a8af43;
  /* 11a8aef1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8aef4 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11a8aef7 cmp ecx, dword ptr [0x11ab7b80] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11ab7b80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8aefd jg 0x11a8af43 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a8af43;
  /* 11a8aeff cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8af03 je 0x11a8af10 */
  if (C.zf) goto L_11a8af10;
  /* 11a8af05 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8af08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8af0b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 11a8af0e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11a8af10:;
  /* 11a8af10 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8af14 je 0x11a8af21 */
  if (C.zf) goto L_11a8af21;
  /* 11a8af16 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a8af19 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8af1c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11a8af1f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11a8af21:;
  /* 11a8af21 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8af25 je 0x11a8af32 */
  if (C.zf) goto L_11a8af32;
  /* 11a8af27 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a8af2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8af2d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11a8af30 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11a8af32:;
  /* 11a8af32 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a8af34 call 0x11a8f370 */
  push32(0x11a8af39u); f_11a8f370();
  /* 11a8af39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8af3c mov eax, 1 */
  EAX = (0x1u);
  /* 11a8af41 jmp 0x11a8af4f */
  goto L_11a8af4f;
L_11a8af43:;
  /* 11a8af43 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a8af45 call 0x11a8f370 */
  push32(0x11a8af4au); f_11a8f370();
  /* 11a8af4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8af4d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a8af4f:;
  /* 11a8af4f mov esp, ebp */
  ESP = (EBP);
  /* 11a8af51 pop ebp */
  EBP = (pop32());
  /* 11a8af52 ret  */
  ESPCHK(0x11a8ae70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af60 @ 0x11a8af60 (28 bytes, 11 insns) */
void f_11a8af60(void) {
  FTRACE(0x11a8af60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8af60 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8af61 mov ebp, esp */
  EBP = (ESP);
  /* 11a8af63 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8af64 mov eax, dword ptr [0x11abba70] */
  EAX = (r32((uint32_t)(0x11abba70)));
  /* 11a8af69 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a8af6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8af6f mov dword ptr [0x11abba70], ecx */
  w32((uint32_t)(0x11abba70), (ECX));
  /* 11a8af75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8af78 mov esp, ebp */
  ESP = (EBP);
  /* 11a8af7a pop ebp */
  EBP = (pop32());
  /* 11a8af7b ret  */
  ESPCHK(0x11a8af60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af80 @ 0x11a8af80 (362 bytes, 116 insns) */
void f_11a8af80(void) {
  FTRACE(0x11a8af80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8af80 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8af81 mov ebp, esp */
  EBP = (ESP);
  /* 11a8af83 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8af86 push ebx */
  push32((uint32_t)(EBX));
  /* 11a8af87 push esi */
  push32((uint32_t)(ESI));
  /* 11a8af88 push edi */
  push32((uint32_t)(EDI));
  /* 11a8af89 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8af8d jne 0x11a8afba */
  if (!C.zf) goto L_11a8afba;
L_11a8af8f:;
  /* 11a8af8f push 0x11ab4d70 */
  push32((uint32_t)(0x11ab4d70u));
  /* 11a8af94 push 0x11ab4888 */
  push32((uint32_t)(0x11ab4888u));
  /* 11a8af99 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8af9b push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8af9d push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8af9f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8afa1 call 0x11a868a0 */
  push32(0x11a8afa6u); f_11a868a0();
  /* 11a8afa6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8afa9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8afac jne 0x11a8afaf */
  if (!C.zf) goto L_11a8afaf;
  /* 11a8afae int3  */
  x86_unimpl("int3 @ 0x11a8afae");
L_11a8afaf:;
  /* 11a8afaf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8afb1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8afb3 jne 0x11a8af8f */
  if (!C.zf) goto L_11a8af8f;
  /* 11a8afb5 jmp 0x11a8b0e3 */
  goto L_11a8b0e3;
L_11a8afba:;
  /* 11a8afba push 9 */
  push32((uint32_t)(0x9u));
  /* 11a8afbc call 0x11a8f2d0 */
  push32(0x11a8afc1u); f_11a8f2d0();
  /* 11a8afc1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8afc4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8afc7 mov edx, dword ptr [0x11aba10c] */
  EDX = (r32((uint32_t)(0x11aba10c)));
  /* 11a8afcd mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11a8afcf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11a8afd6 jmp 0x11a8afe1 */
  goto L_11a8afe1;
L_11a8afd8:;
  /* 11a8afd8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8afdb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8afde mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a8afe1:;
  /* 11a8afe1 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8afe5 jge 0x11a8b005 */
  if ((C.sf==C.of)) goto L_11a8b005;
  /* 11a8afe7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8afea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8afed mov dword ptr [edx + ecx*4 + 0x18], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x18), (0x0u));
  /* 11a8aff5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8aff8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8affb mov dword ptr [ecx + eax*4 + 4], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (0x0u));
  /* 11a8b003 jmp 0x11a8afd8 */
  goto L_11a8afd8;
L_11a8b005:;
  /* 11a8b005 mov edx, dword ptr [0x11aba10c] */
  EDX = (r32((uint32_t)(0x11aba10c)));
  /* 11a8b00b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11a8b00e jmp 0x11a8b018 */
  goto L_11a8b018;
L_11a8b010:;
  /* 11a8b010 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8b013 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a8b015 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11a8b018:;
  /* 11a8b018 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b01c je 0x11a8b0c1 */
  if (C.zf) goto L_11a8b0c1;
  /* 11a8b022 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8b025 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11a8b028 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8b02d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8b02f jl 0x11a8b097 */
  if ((C.sf!=C.of)) goto L_11a8b097;
  /* 11a8b031 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8b034 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11a8b037 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a8b03d cmp edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b040 jge 0x11a8b097 */
  if ((C.sf==C.of)) goto L_11a8b097;
  /* 11a8b042 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8b045 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11a8b048 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a8b04e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8b051 mov eax, dword ptr [edx + ecx*4 + 4] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x4)));
  /* 11a8b055 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8b058 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8b05b mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11a8b05e and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a8b064 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8b067 mov dword ptr [ecx + edx*4 + 4], eax */
  w32((uint32_t)(ECX + EDX*4 + 0x4), (EAX));
  /* 11a8b06b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8b06e mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11a8b071 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8b076 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8b079 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 11a8b07d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8b080 add edx, dword ptr [eax + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8b083 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8b086 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 11a8b089 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8b08e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8b091 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 11a8b095 jmp 0x11a8b0bc */
  goto L_11a8b0bc;
L_11a8b097:;
  /* 11a8b097 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8b09a push edx */
  push32((uint32_t)(EDX));
  /* 11a8b09b push 0x11ab4d4c */
  push32((uint32_t)(0x11ab4d4cu));
  /* 11a8b0a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b0a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b0a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b0a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b0a8 call 0x11a868a0 */
  push32(0x11a8b0adu); f_11a868a0();
  /* 11a8b0ad add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8b0b0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b0b3 jne 0x11a8b0b6 */
  if (!C.zf) goto L_11a8b0b6;
  /* 11a8b0b5 int3  */
  x86_unimpl("int3 @ 0x11a8b0b5");
L_11a8b0b6:;
  /* 11a8b0b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8b0b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8b0ba jne 0x11a8b097 */
  if (!C.zf) goto L_11a8b097;
L_11a8b0bc:;
  /* 11a8b0bc jmp 0x11a8b010 */
  goto L_11a8b010;
L_11a8b0c1:;
  /* 11a8b0c1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8b0c4 mov edx, dword ptr [0x11aba114] */
  EDX = (r32((uint32_t)(0x11aba114)));
  /* 11a8b0ca mov dword ptr [ecx + 0x2c], edx */
  w32((uint32_t)(ECX + 0x2c), (EDX));
  /* 11a8b0cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8b0d0 mov ecx, dword ptr [0x11aba108] */
  ECX = (r32((uint32_t)(0x11aba108)));
  /* 11a8b0d6 mov dword ptr [eax + 0x30], ecx */
  w32((uint32_t)(EAX + 0x30), (ECX));
  /* 11a8b0d9 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a8b0db call 0x11a8f370 */
  push32(0x11a8b0e0u); f_11a8f370();
  /* 11a8b0e0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a8b0e3:;
  /* 11a8b0e3 pop edi */
  EDI = (pop32());
  /* 11a8b0e4 pop esi */
  ESI = (pop32());
  /* 11a8b0e5 pop ebx */
  EBX = (pop32());
  /* 11a8b0e6 mov esp, ebp */
  ESP = (EBP);
  /* 11a8b0e8 pop ebp */
  EBP = (pop32());
  /* 11a8b0e9 ret  */
  ESPCHK(0x11a8af80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b0f0 @ 0x11a8b0f0 (291 bytes, 95 insns) */
void f_11a8b0f0(void) {
  FTRACE(0x11a8b0f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8b0f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8b0f1 mov ebp, esp */
  EBP = (ESP);
  /* 11a8b0f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8b0f6 push ebx */
  push32((uint32_t)(EBX));
  /* 11a8b0f7 push esi */
  push32((uint32_t)(ESI));
  /* 11a8b0f8 push edi */
  push32((uint32_t)(EDI));
  /* 11a8b0f9 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11a8b100 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b104 je 0x11a8b112 */
  if (C.zf) goto L_11a8b112;
  /* 11a8b106 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b10a je 0x11a8b112 */
  if (C.zf) goto L_11a8b112;
  /* 11a8b10c cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b110 jne 0x11a8b140 */
  if (!C.zf) goto L_11a8b140;
L_11a8b112:;
  /* 11a8b112 push 0x11ab4d98 */
  push32((uint32_t)(0x11ab4d98u));
  /* 11a8b117 push 0x11ab4888 */
  push32((uint32_t)(0x11ab4888u));
  /* 11a8b11c push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b11e push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b120 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b122 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b124 call 0x11a868a0 */
  push32(0x11a8b129u); f_11a868a0();
  /* 11a8b129 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8b12c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b12f jne 0x11a8b132 */
  if (!C.zf) goto L_11a8b132;
  /* 11a8b131 int3  */
  x86_unimpl("int3 @ 0x11a8b131");
L_11a8b132:;
  /* 11a8b132 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8b134 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8b136 jne 0x11a8b112 */
  if (!C.zf) goto L_11a8b112;
  /* 11a8b138 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8b13b jmp 0x11a8b20c */
  goto L_11a8b20c;
L_11a8b140:;
  /* 11a8b140 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11a8b147 jmp 0x11a8b152 */
  goto L_11a8b152;
L_11a8b149:;
  /* 11a8b149 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b14c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8b14f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11a8b152:;
  /* 11a8b152 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b156 jge 0x11a8b1dc */
  if ((C.sf==C.of)) goto L_11a8b1dc;
  /* 11a8b15c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b15f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8b162 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b165 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8b168 mov edx, dword ptr [eax + edx*4 + 0x18] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x18)));
  /* 11a8b16c sub edx, dword ptr [esi + ecx*4 + 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8b170 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b173 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8b176 mov dword ptr [ecx + eax*4 + 0x18], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x18), (EDX));
  /* 11a8b17a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b17d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8b180 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b183 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8b186 mov edx, dword ptr [eax + edx*4 + 4] */
  EDX = (r32((uint32_t)(EAX + EDX*4 + 0x4)));
  /* 11a8b18a sub edx, dword ptr [esi + ecx*4 + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESI + ECX*4 + 0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8b18e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b191 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8b194 mov dword ptr [ecx + eax*4 + 4], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x4), (EDX));
  /* 11a8b198 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b19b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8b19e cmp dword ptr [eax + edx*4 + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4 + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b1a3 jne 0x11a8b1b2 */
  if (!C.zf) goto L_11a8b1b2;
  /* 11a8b1a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b1a8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8b1ab cmp dword ptr [edx + ecx*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b1b0 je 0x11a8b1d7 */
  if (C.zf) goto L_11a8b1d7;
L_11a8b1b2:;
  /* 11a8b1b2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b1b6 je 0x11a8b1d7 */
  if (C.zf) goto L_11a8b1d7;
  /* 11a8b1b8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b1bc jne 0x11a8b1d0 */
  if (!C.zf) goto L_11a8b1d0;
  /* 11a8b1be cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b1c2 jne 0x11a8b1d7 */
  if (!C.zf) goto L_11a8b1d7;
  /* 11a8b1c4 mov eax, dword ptr [0x11ab7b7c] */
  EAX = (r32((uint32_t)(0x11ab7b7c)));
  /* 11a8b1c9 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11a8b1cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8b1ce je 0x11a8b1d7 */
  if (C.zf) goto L_11a8b1d7;
L_11a8b1d0:;
  /* 11a8b1d0 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11a8b1d7:;
  /* 11a8b1d7 jmp 0x11a8b149 */
  goto L_11a8b149;
L_11a8b1dc:;
  /* 11a8b1dc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8b1df mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8b1e2 mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11a8b1e5 sub eax, dword ptr [edx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x2c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8b1e8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8b1eb mov dword ptr [ecx + 0x2c], eax */
  w32((uint32_t)(ECX + 0x2c), (EAX));
  /* 11a8b1ee mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8b1f1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8b1f4 mov ecx, dword ptr [edx + 0x30] */
  ECX = (r32((uint32_t)(EDX + 0x30)));
  /* 11a8b1f7 sub ecx, dword ptr [eax + 0x30] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x30))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8b1fa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8b1fd mov dword ptr [edx + 0x30], ecx */
  w32((uint32_t)(EDX + 0x30), (ECX));
  /* 11a8b200 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8b203 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11a8b209 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11a8b20c:;
  /* 11a8b20c pop edi */
  EDI = (pop32());
  /* 11a8b20d pop esi */
  ESI = (pop32());
  /* 11a8b20e pop ebx */
  EBX = (pop32());
  /* 11a8b20f mov esp, ebp */
  ESP = (EBP);
  /* 11a8b211 pop ebp */
  EBP = (pop32());
  /* 11a8b212 ret  */
  ESPCHK(0x11a8b0f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b220 @ 0x11a8b220 (697 bytes, 253 insns) */
void f_11a8b220(void) {
  FTRACE(0x11a8b220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8b220 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8b221 mov ebp, esp */
  EBP = (ESP);
  /* 11a8b223 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8b226 push ebx */
  push32((uint32_t)(EBX));
  /* 11a8b227 push esi */
  push32((uint32_t)(ESI));
  /* 11a8b228 push edi */
  push32((uint32_t)(EDI));
  /* 11a8b229 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11a8b230 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a8b232 call 0x11a8f2d0 */
  push32(0x11a8b237u); f_11a8f2d0();
  /* 11a8b237 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a8b23a:;
  /* 11a8b23a push 0x11ab4e90 */
  push32((uint32_t)(0x11ab4e90u));
  /* 11a8b23f push 0x11ab4888 */
  push32((uint32_t)(0x11ab4888u));
  /* 11a8b244 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b246 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b248 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b24a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b24c call 0x11a868a0 */
  push32(0x11a8b251u); f_11a868a0();
  /* 11a8b251 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8b254 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b257 jne 0x11a8b25a */
  if (!C.zf) goto L_11a8b25a;
  /* 11a8b259 int3  */
  x86_unimpl("int3 @ 0x11a8b259");
L_11a8b25a:;
  /* 11a8b25a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8b25c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8b25e jne 0x11a8b23a */
  if (!C.zf) goto L_11a8b23a;
  /* 11a8b260 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b264 je 0x11a8b26e */
  if (C.zf) goto L_11a8b26e;
  /* 11a8b266 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8b269 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a8b26b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11a8b26e:;
  /* 11a8b26e mov eax, dword ptr [0x11aba10c] */
  EAX = (r32((uint32_t)(0x11aba10c)));
  /* 11a8b273 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a8b276 jmp 0x11a8b280 */
  goto L_11a8b280;
L_11a8b278:;
  /* 11a8b278 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b27b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a8b27d mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11a8b280:;
  /* 11a8b280 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b284 je 0x11a8b4a2 */
  if (C.zf) goto L_11a8b4a2;
  /* 11a8b28a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b28d cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b290 je 0x11a8b4a2 */
  if (C.zf) goto L_11a8b4a2;
  /* 11a8b296 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b299 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11a8b29c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a8b2a2 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b2a5 je 0x11a8b2d4 */
  if (C.zf) goto L_11a8b2d4;
  /* 11a8b2a7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b2aa mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 11a8b2ad and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a8b2b3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a8b2b5 je 0x11a8b2d4 */
  if (C.zf) goto L_11a8b2d4;
  /* 11a8b2b7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b2ba mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11a8b2bd and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8b2c2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b2c5 jne 0x11a8b2d9 */
  if (!C.zf) goto L_11a8b2d9;
  /* 11a8b2c7 mov ecx, dword ptr [0x11ab7b7c] */
  ECX = (r32((uint32_t)(0x11ab7b7c)));
  /* 11a8b2cd and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11a8b2d0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a8b2d2 jne 0x11a8b2d9 */
  if (!C.zf) goto L_11a8b2d9;
L_11a8b2d4:;
  /* 11a8b2d4 jmp 0x11a8b49d */
  goto L_11a8b49d;
L_11a8b2d9:;
  /* 11a8b2d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b2dc cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b2e0 je 0x11a8b352 */
  if (C.zf) goto L_11a8b352;
  /* 11a8b2e2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b2e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a8b2e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b2e9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11a8b2ec push ecx */
  push32((uint32_t)(ECX));
  /* 11a8b2ed call 0x11a8ad90 */
  push32(0x11a8b2f2u); f_11a8ad90();
  /* 11a8b2f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8b2f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8b2f7 jne 0x11a8b323 */
  if (!C.zf) goto L_11a8b323;
L_11a8b2f9:;
  /* 11a8b2f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b2fc mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11a8b2ff push eax */
  push32((uint32_t)(EAX));
  /* 11a8b300 push 0x11ab4e7c */
  push32((uint32_t)(0x11ab4e7cu));
  /* 11a8b305 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b307 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b309 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b30b push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b30d call 0x11a868a0 */
  push32(0x11a8b312u); f_11a868a0();
  /* 11a8b312 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8b315 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b318 jne 0x11a8b31b */
  if (!C.zf) goto L_11a8b31b;
  /* 11a8b31a int3  */
  x86_unimpl("int3 @ 0x11a8b31a");
L_11a8b31b:;
  /* 11a8b31b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a8b31d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a8b31f jne 0x11a8b2f9 */
  if (!C.zf) goto L_11a8b2f9;
  /* 11a8b321 jmp 0x11a8b352 */
  goto L_11a8b352;
L_11a8b323:;
  /* 11a8b323 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b326 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11a8b329 push eax */
  push32((uint32_t)(EAX));
  /* 11a8b32a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b32d mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11a8b330 push edx */
  push32((uint32_t)(EDX));
  /* 11a8b331 push 0x11ab4e70 */
  push32((uint32_t)(0x11ab4e70u));
  /* 11a8b336 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b338 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b33a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b33c push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b33e call 0x11a868a0 */
  push32(0x11a8b343u); f_11a868a0();
  /* 11a8b343 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8b346 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b349 jne 0x11a8b34c */
  if (!C.zf) goto L_11a8b34c;
  /* 11a8b34b int3  */
  x86_unimpl("int3 @ 0x11a8b34b");
L_11a8b34c:;
  /* 11a8b34c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8b34e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8b350 jne 0x11a8b323 */
  if (!C.zf) goto L_11a8b323;
L_11a8b352:;
  /* 11a8b352 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b355 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11a8b358 push edx */
  push32((uint32_t)(EDX));
  /* 11a8b359 push 0x11ab4e68 */
  push32((uint32_t)(0x11ab4e68u));
  /* 11a8b35e push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b360 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b362 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b364 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b366 call 0x11a868a0 */
  push32(0x11a8b36bu); f_11a868a0();
  /* 11a8b36b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8b36e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b371 jne 0x11a8b374 */
  if (!C.zf) goto L_11a8b374;
  /* 11a8b373 int3  */
  x86_unimpl("int3 @ 0x11a8b373");
L_11a8b374:;
  /* 11a8b374 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8b376 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8b378 jne 0x11a8b352 */
  if (!C.zf) goto L_11a8b352;
  /* 11a8b37a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b37d mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11a8b380 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a8b386 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b389 jne 0x11a8b3fc */
  if (!C.zf) goto L_11a8b3fc;
L_11a8b38b:;
  /* 11a8b38b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b38e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11a8b391 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8b392 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b395 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11a8b398 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11a8b39b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8b3a0 push eax */
  push32((uint32_t)(EAX));
  /* 11a8b3a1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b3a4 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8b3a7 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8b3a8 push 0x11ab4e34 */
  push32((uint32_t)(0x11ab4e34u));
  /* 11a8b3ad push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b3af push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b3b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b3b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b3b5 call 0x11a868a0 */
  push32(0x11a8b3bau); f_11a868a0();
  /* 11a8b3ba add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8b3bd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b3c0 jne 0x11a8b3c3 */
  if (!C.zf) goto L_11a8b3c3;
  /* 11a8b3c2 int3  */
  x86_unimpl("int3 @ 0x11a8b3c2");
L_11a8b3c3:;
  /* 11a8b3c3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a8b3c5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a8b3c7 jne 0x11a8b38b */
  if (!C.zf) goto L_11a8b38b;
  /* 11a8b3c9 cmp dword ptr [0x11abba70], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11abba70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b3d0 je 0x11a8b3eb */
  if (C.zf) goto L_11a8b3eb;
  /* 11a8b3d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b3d5 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11a8b3d8 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8b3d9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b3dc add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8b3df push edx */
  push32((uint32_t)(EDX));
  /* 11a8b3e0 call dword ptr [0x11abba70] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abba70))), 0x11a8b3e6u);
  /* 11a8b3e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8b3e9 jmp 0x11a8b3f7 */
  goto L_11a8b3f7;
L_11a8b3eb:;
  /* 11a8b3eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b3ee push eax */
  push32((uint32_t)(EAX));
  /* 11a8b3ef call 0x11a8b4e0 */
  push32(0x11a8b3f4u); f_11a8b4e0();
  /* 11a8b3f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a8b3f7:;
  /* 11a8b3f7 jmp 0x11a8b49d */
  goto L_11a8b49d;
L_11a8b3fc:;
  /* 11a8b3fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b3ff cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b403 jne 0x11a8b442 */
  if (!C.zf) goto L_11a8b442;
L_11a8b405:;
  /* 11a8b405 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b408 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11a8b40b push eax */
  push32((uint32_t)(EAX));
  /* 11a8b40c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b40f add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8b412 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8b413 push 0x11ab4e0c */
  push32((uint32_t)(0x11ab4e0cu));
  /* 11a8b418 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b41a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b41c push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b41e push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b420 call 0x11a868a0 */
  push32(0x11a8b425u); f_11a868a0();
  /* 11a8b425 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8b428 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b42b jne 0x11a8b42e */
  if (!C.zf) goto L_11a8b42e;
  /* 11a8b42d int3  */
  x86_unimpl("int3 @ 0x11a8b42d");
L_11a8b42e:;
  /* 11a8b42e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a8b430 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a8b432 jne 0x11a8b405 */
  if (!C.zf) goto L_11a8b405;
  /* 11a8b434 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b437 push eax */
  push32((uint32_t)(EAX));
  /* 11a8b438 call 0x11a8b4e0 */
  push32(0x11a8b43du); f_11a8b4e0();
  /* 11a8b43d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8b440 jmp 0x11a8b49d */
  goto L_11a8b49d;
L_11a8b442:;
  /* 11a8b442 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b445 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 11a8b448 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a8b44e cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b451 jne 0x11a8b49d */
  if (!C.zf) goto L_11a8b49d;
L_11a8b453:;
  /* 11a8b453 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b456 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11a8b459 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8b45a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b45d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 11a8b460 sar eax, 0x10 */
  EAX = (sh_sar((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11a8b463 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8b468 push eax */
  push32((uint32_t)(EAX));
  /* 11a8b469 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b46c add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8b46f push ecx */
  push32((uint32_t)(ECX));
  /* 11a8b470 push 0x11ab4dd8 */
  push32((uint32_t)(0x11ab4dd8u));
  /* 11a8b475 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b477 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b479 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b47b push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b47d call 0x11a868a0 */
  push32(0x11a8b482u); f_11a868a0();
  /* 11a8b482 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8b485 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b488 jne 0x11a8b48b */
  if (!C.zf) goto L_11a8b48b;
  /* 11a8b48a int3  */
  x86_unimpl("int3 @ 0x11a8b48a");
L_11a8b48b:;
  /* 11a8b48b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a8b48d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a8b48f jne 0x11a8b453 */
  if (!C.zf) goto L_11a8b453;
  /* 11a8b491 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b494 push eax */
  push32((uint32_t)(EAX));
  /* 11a8b495 call 0x11a8b4e0 */
  push32(0x11a8b49au); f_11a8b4e0();
  /* 11a8b49a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a8b49d:;
  /* 11a8b49d jmp 0x11a8b278 */
  goto L_11a8b278;
L_11a8b4a2:;
  /* 11a8b4a2 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a8b4a4 call 0x11a8f370 */
  push32(0x11a8b4a9u); f_11a8f370();
  /* 11a8b4a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a8b4ac:;
  /* 11a8b4ac push 0x11ab4dc0 */
  push32((uint32_t)(0x11ab4dc0u));
  /* 11a8b4b1 push 0x11ab4888 */
  push32((uint32_t)(0x11ab4888u));
  /* 11a8b4b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b4b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b4ba push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b4bc push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b4be call 0x11a868a0 */
  push32(0x11a8b4c3u); f_11a868a0();
  /* 11a8b4c3 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8b4c6 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b4c9 jne 0x11a8b4cc */
  if (!C.zf) goto L_11a8b4cc;
  /* 11a8b4cb int3  */
  x86_unimpl("int3 @ 0x11a8b4cb");
L_11a8b4cc:;
  /* 11a8b4cc xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a8b4ce test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a8b4d0 jne 0x11a8b4ac */
  if (!C.zf) goto L_11a8b4ac;
  /* 11a8b4d2 pop edi */
  EDI = (pop32());
  /* 11a8b4d3 pop esi */
  ESI = (pop32());
  /* 11a8b4d4 pop ebx */
  EBX = (pop32());
  /* 11a8b4d5 mov esp, ebp */
  ESP = (EBP);
  /* 11a8b4d7 pop ebp */
  EBP = (pop32());
  /* 11a8b4d8 ret  */
  ESPCHK(0x11a8b220u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b4e0 @ 0x11a8b4e0 (276 bytes, 89 insns) */
void f_11a8b4e0(void) {
  FTRACE(0x11a8b4e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8b4e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8b4e1 mov ebp, esp */
  EBP = (ESP);
  /* 11a8b4e3 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8b4e6 push ebx */
  push32((uint32_t)(EBX));
  /* 11a8b4e7 push esi */
  push32((uint32_t)(ESI));
  /* 11a8b4e8 push edi */
  push32((uint32_t)(EDI));
  /* 11a8b4e9 mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 11a8b4f0 jmp 0x11a8b4fb */
  goto L_11a8b4fb;
L_11a8b4f2:;
  /* 11a8b4f2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11a8b4f5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8b4f8 mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
L_11a8b4fb:;
  /* 11a8b4fb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8b4fe cmp dword ptr [ecx + 0x10], 0x10 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b502 jge 0x11a8b50f */
  if ((C.sf==C.of)) goto L_11a8b50f;
  /* 11a8b504 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8b507 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11a8b50a mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 11a8b50d jmp 0x11a8b516 */
  goto L_11a8b516;
L_11a8b50f:;
  /* 11a8b50f mov dword ptr [ebp - 0x54], 0x10 */
  w32((uint32_t)(EBP + -0x54), (0x10u));
L_11a8b516:;
  /* 11a8b516 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11a8b519 cmp ecx, dword ptr [ebp - 0x54] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x54))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b51c jge 0x11a8b5bc */
  if ((C.sf==C.of)) goto L_11a8b5bc;
  /* 11a8b522 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8b525 add edx, dword ptr [ebp - 0x4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8b528 mov al, byte ptr [edx + 0x20] */
  AL = (r8((uint32_t)(EDX + 0x20)));
  /* 11a8b52b mov byte ptr [ebp - 0x50], al */
  w8((uint32_t)(EBP + -0x50), (AL));
  /* 11a8b52e cmp dword ptr [0x11ab80d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11ab80d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b535 jle 0x11a8b553 */
  if ((C.zf||C.sf!=C.of)) goto L_11a8b553;
  /* 11a8b537 push 0x157 */
  push32((uint32_t)(0x157u));
  /* 11a8b53c mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 11a8b53f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a8b545 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8b546 call 0x11a8e0d0 */
  push32(0x11a8b54bu); f_11a8e0d0();
  /* 11a8b54b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8b54e mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
  /* 11a8b551 jmp 0x11a8b570 */
  goto L_11a8b570;
L_11a8b553:;
  /* 11a8b553 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11a8b556 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a8b55c mov eax, dword ptr [0x11ab7ec0] */
  EAX = (r32((uint32_t)(0x11ab7ec0)));
  /* 11a8b561 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a8b563 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11a8b567 and ecx, 0x157 */
  { uint32_t _r=(ECX)&(0x157u); ECX = (_r); fl_logic(_r,32); }
  /* 11a8b56d mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
L_11a8b570:;
  /* 11a8b570 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b574 je 0x11a8b584 */
  if (C.zf) goto L_11a8b584;
  /* 11a8b576 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11a8b579 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a8b57f mov dword ptr [ebp - 0x5c], edx */
  w32((uint32_t)(EBP + -0x5c), (EDX));
  /* 11a8b582 jmp 0x11a8b58b */
  goto L_11a8b58b;
L_11a8b584:;
  /* 11a8b584 mov dword ptr [ebp - 0x5c], 0x20 */
  w32((uint32_t)(EBP + -0x5c), (0x20u));
L_11a8b58b:;
  /* 11a8b58b mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11a8b58e mov cl, byte ptr [ebp - 0x5c] */
  CL = (r8((uint32_t)(EBP + -0x5c)));
  /* 11a8b591 mov byte ptr [ebp + eax - 0x48], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x48), (CL));
  /* 11a8b595 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11a8b598 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a8b59e push edx */
  push32((uint32_t)(EDX));
  /* 11a8b59f push 0x11ab4eb4 */
  push32((uint32_t)(0x11ab4eb4u));
  /* 11a8b5a4 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11a8b5a7 imul eax, eax, 3 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a8b5aa lea ecx, [ebp + eax - 0x34] */
  ECX = ((uint32_t)(EBP + EAX*1 + -0x34));
  /* 11a8b5ae push ecx */
  push32((uint32_t)(ECX));
  /* 11a8b5af call 0x11a86110 */
  push32(0x11a8b5b4u); f_11a86110();
  /* 11a8b5b4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8b5b7 jmp 0x11a8b4f2 */
  goto L_11a8b4f2;
L_11a8b5bc:;
  /* 11a8b5bc mov edx, dword ptr [ebp - 0x4c] */
  EDX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11a8b5bf mov byte ptr [ebp + edx - 0x48], 0 */
  w8((uint32_t)(EBP + EDX*1 + -0x48), (0x0u));
L_11a8b5c4:;
  /* 11a8b5c4 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 11a8b5c7 push eax */
  push32((uint32_t)(EAX));
  /* 11a8b5c8 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 11a8b5cb push ecx */
  push32((uint32_t)(ECX));
  /* 11a8b5cc push 0x11ab4ea4 */
  push32((uint32_t)(0x11ab4ea4u));
  /* 11a8b5d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b5d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b5d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b5d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b5d9 call 0x11a868a0 */
  push32(0x11a8b5deu); f_11a868a0();
  /* 11a8b5de add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8b5e1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b5e4 jne 0x11a8b5e7 */
  if (!C.zf) goto L_11a8b5e7;
  /* 11a8b5e6 int3  */
  x86_unimpl("int3 @ 0x11a8b5e6");
L_11a8b5e7:;
  /* 11a8b5e7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a8b5e9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a8b5eb jne 0x11a8b5c4 */
  if (!C.zf) goto L_11a8b5c4;
  /* 11a8b5ed pop edi */
  EDI = (pop32());
  /* 11a8b5ee pop esi */
  ESI = (pop32());
  /* 11a8b5ef pop ebx */
  EBX = (pop32());
  /* 11a8b5f0 mov esp, ebp */
  ESP = (EBP);
  /* 11a8b5f2 pop ebp */
  EBP = (pop32());
  /* 11a8b5f3 ret  */
  ESPCHK(0x11a8b4e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b600 @ 0x11a8b600 (116 bytes, 46 insns) */
void f_11a8b600(void) {
  FTRACE(0x11a8b600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8b600 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8b601 mov ebp, esp */
  EBP = (ESP);
  /* 11a8b603 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8b606 push ebx */
  push32((uint32_t)(EBX));
  /* 11a8b607 push esi */
  push32((uint32_t)(ESI));
  /* 11a8b608 push edi */
  push32((uint32_t)(EDI));
  /* 11a8b609 lea eax, [ebp - 0x34] */
  EAX = ((uint32_t)(EBP + -0x34));
  /* 11a8b60c push eax */
  push32((uint32_t)(EAX));
  /* 11a8b60d call 0x11a8af80 */
  push32(0x11a8b612u); f_11a8af80();
  /* 11a8b612 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8b615 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b619 jne 0x11a8b634 */
  if (!C.zf) goto L_11a8b634;
  /* 11a8b61b cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b61f jne 0x11a8b634 */
  if (!C.zf) goto L_11a8b634;
  /* 11a8b621 mov ecx, dword ptr [0x11ab7b7c] */
  ECX = (r32((uint32_t)(0x11ab7b7c)));
  /* 11a8b627 and ecx, 0x10 */
  { uint32_t _r=(ECX)&(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11a8b62a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a8b62c je 0x11a8b66b */
  if (C.zf) goto L_11a8b66b;
  /* 11a8b62e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b632 je 0x11a8b66b */
  if (C.zf) goto L_11a8b66b;
L_11a8b634:;
  /* 11a8b634 push 0x11ab4ebc */
  push32((uint32_t)(0x11ab4ebcu));
  /* 11a8b639 push 0x11ab4888 */
  push32((uint32_t)(0x11ab4888u));
  /* 11a8b63e push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b640 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b642 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b644 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b646 call 0x11a868a0 */
  push32(0x11a8b64bu); f_11a868a0();
  /* 11a8b64b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8b64e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b651 jne 0x11a8b654 */
  if (!C.zf) goto L_11a8b654;
  /* 11a8b653 int3  */
  x86_unimpl("int3 @ 0x11a8b653");
L_11a8b654:;
  /* 11a8b654 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a8b656 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a8b658 jne 0x11a8b634 */
  if (!C.zf) goto L_11a8b634;
  /* 11a8b65a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b65c call 0x11a8b220 */
  push32(0x11a8b661u); f_11a8b220();
  /* 11a8b661 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8b664 mov eax, 1 */
  EAX = (0x1u);
  /* 11a8b669 jmp 0x11a8b66d */
  goto L_11a8b66d;
L_11a8b66b:;
  /* 11a8b66b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a8b66d:;
  /* 11a8b66d pop edi */
  EDI = (pop32());
  /* 11a8b66e pop esi */
  ESI = (pop32());
  /* 11a8b66f pop ebx */
  EBX = (pop32());
  /* 11a8b670 mov esp, ebp */
  ESP = (EBP);
  /* 11a8b672 pop ebp */
  EBP = (pop32());
  /* 11a8b673 ret  */
  ESPCHK(0x11a8b600u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b680 @ 0x11a8b680 (197 bytes, 79 insns) */
void f_11a8b680(void) {
  FTRACE(0x11a8b680u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8b680 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8b681 mov ebp, esp */
  EBP = (ESP);
  /* 11a8b683 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8b684 push ebx */
  push32((uint32_t)(EBX));
  /* 11a8b685 push esi */
  push32((uint32_t)(ESI));
  /* 11a8b686 push edi */
  push32((uint32_t)(EDI));
  /* 11a8b687 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b68b jne 0x11a8b692 */
  if (!C.zf) goto L_11a8b692;
  /* 11a8b68d jmp 0x11a8b73e */
  goto L_11a8b73e;
L_11a8b692:;
  /* 11a8b692 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11a8b699 jmp 0x11a8b6a4 */
  goto L_11a8b6a4;
L_11a8b69b:;
  /* 11a8b69b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b69e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8b6a1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a8b6a4:;
  /* 11a8b6a4 cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b6a8 jge 0x11a8b6ee */
  if ((C.sf==C.of)) goto L_11a8b6ee;
L_11a8b6aa:;
  /* 11a8b6aa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b6ad mov edx, dword ptr [ecx*4 + 0x11ab7b8c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11ab7b8c)));
  /* 11a8b6b4 push edx */
  push32((uint32_t)(EDX));
  /* 11a8b6b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b6b8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8b6bb mov edx, dword ptr [ecx + eax*4 + 4] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x4)));
  /* 11a8b6bf push edx */
  push32((uint32_t)(EDX));
  /* 11a8b6c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b6c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8b6c6 mov edx, dword ptr [ecx + eax*4 + 0x18] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x18)));
  /* 11a8b6ca push edx */
  push32((uint32_t)(EDX));
  /* 11a8b6cb push 0x11ab4f18 */
  push32((uint32_t)(0x11ab4f18u));
  /* 11a8b6d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b6d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b6d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b6d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b6d8 call 0x11a868a0 */
  push32(0x11a8b6ddu); f_11a868a0();
  /* 11a8b6dd add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8b6e0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b6e3 jne 0x11a8b6e6 */
  if (!C.zf) goto L_11a8b6e6;
  /* 11a8b6e5 int3  */
  x86_unimpl("int3 @ 0x11a8b6e5");
L_11a8b6e6:;
  /* 11a8b6e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8b6e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8b6ea jne 0x11a8b6aa */
  if (!C.zf) goto L_11a8b6aa;
  /* 11a8b6ec jmp 0x11a8b69b */
  goto L_11a8b69b;
L_11a8b6ee:;
  /* 11a8b6ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8b6f1 mov edx, dword ptr [ecx + 0x2c] */
  EDX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11a8b6f4 push edx */
  push32((uint32_t)(EDX));
  /* 11a8b6f5 push 0x11ab4ef4 */
  push32((uint32_t)(0x11ab4ef4u));
  /* 11a8b6fa push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b6fc push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b6fe push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b700 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b702 call 0x11a868a0 */
  push32(0x11a8b707u); f_11a868a0();
  /* 11a8b707 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8b70a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b70d jne 0x11a8b710 */
  if (!C.zf) goto L_11a8b710;
  /* 11a8b70f int3  */
  x86_unimpl("int3 @ 0x11a8b70f");
L_11a8b710:;
  /* 11a8b710 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8b712 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8b714 jne 0x11a8b6ee */
  if (!C.zf) goto L_11a8b6ee;
L_11a8b716:;
  /* 11a8b716 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8b719 mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 11a8b71c push edx */
  push32((uint32_t)(EDX));
  /* 11a8b71d push 0x11ab4ed4 */
  push32((uint32_t)(0x11ab4ed4u));
  /* 11a8b722 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b724 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b726 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b728 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b72a call 0x11a868a0 */
  push32(0x11a8b72fu); f_11a868a0();
  /* 11a8b72f add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8b732 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b735 jne 0x11a8b738 */
  if (!C.zf) goto L_11a8b738;
  /* 11a8b737 int3  */
  x86_unimpl("int3 @ 0x11a8b737");
L_11a8b738:;
  /* 11a8b738 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8b73a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8b73c jne 0x11a8b716 */
  if (!C.zf) goto L_11a8b716;
L_11a8b73e:;
  /* 11a8b73e pop edi */
  EDI = (pop32());
  /* 11a8b73f pop esi */
  ESI = (pop32());
  /* 11a8b740 pop ebx */
  EBX = (pop32());
  /* 11a8b741 mov esp, ebp */
  ESP = (EBP);
  /* 11a8b743 pop ebp */
  EBP = (pop32());
  /* 11a8b744 ret  */
  ESPCHK(0x11a8b680u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b750 @ 0x11a8b750 (329 bytes, 102 insns) */
void f_11a8b750(void) {
  FTRACE(0x11a8b750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8b750 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8b751 mov ebp, esp */
  EBP = (ESP);
  /* 11a8b753 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8b756 cmp dword ptr [0x11abbbd0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11abbbd0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b75d jne 0x11a8b764 */
  if (!C.zf) goto L_11a8b764;
  /* 11a8b75f call 0x11a91f60 */
  push32(0x11a8b764u); f_11a91f60();
L_11a8b764:;
  /* 11a8b764 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11a8b76b mov eax, dword ptr [0x11aba0a8] */
  EAX = (r32((uint32_t)(0x11aba0a8)));
  /* 11a8b770 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a8b773:;
  /* 11a8b773 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b776 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11a8b779 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a8b77b je 0x11a8b7a9 */
  if (C.zf) goto L_11a8b7a9;
  /* 11a8b77d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b780 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11a8b783 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b786 je 0x11a8b791 */
  if (C.zf) goto L_11a8b791;
  /* 11a8b788 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8b78b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8b78e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11a8b791:;
  /* 11a8b791 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b794 push eax */
  push32((uint32_t)(EAX));
  /* 11a8b795 call 0x11a8c610 */
  push32(0x11a8b79au); f_11a8c610();
  /* 11a8b79a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8b79d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b7a0 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 11a8b7a4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a8b7a7 jmp 0x11a8b773 */
  goto L_11a8b773;
L_11a8b7a9:;
  /* 11a8b7a9 push 0x6d */
  push32((uint32_t)(0x6du));
  /* 11a8b7ab push 0x11ab4f38 */
  push32((uint32_t)(0x11ab4f38u));
  /* 11a8b7b0 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a8b7b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8b7b5 lea ecx, [eax*4 + 4] */
  ECX = ((uint32_t)(EAX*4 + 0x4));
  /* 11a8b7bc push ecx */
  push32((uint32_t)(ECX));
  /* 11a8b7bd call 0x11a897e0 */
  push32(0x11a8b7c2u); f_11a897e0();
  /* 11a8b7c2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8b7c5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11a8b7c8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8b7cb mov dword ptr [0x11aba0dc], edx */
  w32((uint32_t)(0x11aba0dc), (EDX));
  /* 11a8b7d1 cmp dword ptr [0x11aba0dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba0dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b7d8 jne 0x11a8b7e4 */
  if (!C.zf) goto L_11a8b7e4;
  /* 11a8b7da push 9 */
  push32((uint32_t)(0x9u));
  /* 11a8b7dc call 0x11a86750 */
  push32(0x11a8b7e1u); f_11a86750();
  /* 11a8b7e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a8b7e4:;
  /* 11a8b7e4 mov eax, dword ptr [0x11aba0a8] */
  EAX = (r32((uint32_t)(0x11aba0a8)));
  /* 11a8b7e9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a8b7ec jmp 0x11a8b7f7 */
  goto L_11a8b7f7;
L_11a8b7ee:;
  /* 11a8b7ee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b7f1 add ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8b7f4 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11a8b7f7:;
  /* 11a8b7f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b7fa movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11a8b7fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8b7ff je 0x11a8b867 */
  if (C.zf) goto L_11a8b867;
  /* 11a8b801 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b804 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8b805 call 0x11a8c610 */
  push32(0x11a8b80au); f_11a8c610();
  /* 11a8b80a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8b80d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8b810 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11a8b813 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b816 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11a8b819 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b81c je 0x11a8b865 */
  if (C.zf) goto L_11a8b865;
  /* 11a8b81e push 0x79 */
  push32((uint32_t)(0x79u));
  /* 11a8b820 push 0x11ab4f38 */
  push32((uint32_t)(0x11ab4f38u));
  /* 11a8b825 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a8b827 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a8b82a push ecx */
  push32((uint32_t)(ECX));
  /* 11a8b82b call 0x11a897e0 */
  push32(0x11a8b830u); f_11a897e0();
  /* 11a8b830 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8b833 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8b836 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11a8b838 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8b83b cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b83e jne 0x11a8b84a */
  if (!C.zf) goto L_11a8b84a;
  /* 11a8b840 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a8b842 call 0x11a86750 */
  push32(0x11a8b847u); f_11a86750();
  /* 11a8b847 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a8b84a:;
  /* 11a8b84a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b84d push ecx */
  push32((uint32_t)(ECX));
  /* 11a8b84e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8b851 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a8b853 push eax */
  push32((uint32_t)(EAX));
  /* 11a8b854 call 0x11a8c790 */
  push32(0x11a8b859u); f_11a8c790();
  /* 11a8b859 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8b85c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8b85f add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8b862 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11a8b865:;
  /* 11a8b865 jmp 0x11a8b7ee */
  goto L_11a8b7ee;
L_11a8b867:;
  /* 11a8b867 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a8b869 mov edx, dword ptr [0x11aba0a8] */
  EDX = (r32((uint32_t)(0x11aba0a8)));
  /* 11a8b86f push edx */
  push32((uint32_t)(EDX));
  /* 11a8b870 call 0x11a8a270 */
  push32(0x11a8b875u); f_11a8a270();
  /* 11a8b875 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8b878 mov dword ptr [0x11aba0a8], 0 */
  w32((uint32_t)(0x11aba0a8), (0x0u));
  /* 11a8b882 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8b885 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11a8b88b mov dword ptr [0x11abbbc0], 1 */
  w32((uint32_t)(0x11abbbc0), (0x1u));
  /* 11a8b895 mov esp, ebp */
  ESP = (EBP);
  /* 11a8b897 pop ebp */
  EBP = (pop32());
  /* 11a8b898 ret  */
  ESPCHK(0x11a8b750u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8a0 @ 0x11a8b8a0 (216 bytes, 69 insns) */
void f_11a8b8a0(void) {
  FTRACE(0x11a8b8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8b8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8b8a1 mov ebp, esp */
  EBP = (ESP);
  /* 11a8b8a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8b8a6 cmp dword ptr [0x11abbbd0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11abbbd0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b8ad jne 0x11a8b8b4 */
  if (!C.zf) goto L_11a8b8b4;
  /* 11a8b8af call 0x11a91f60 */
  push32(0x11a8b8b4u); f_11a91f60();
L_11a8b8b4:;
  /* 11a8b8b4 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11a8b8b9 push 0x11aba118 */
  push32((uint32_t)(0x11aba118u));
  /* 11a8b8be push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b8c0 call dword ptr [0x11abc3a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3a8))), 0x11a8b8c6u);
  /* 11a8b8c6 mov dword ptr [0x11aba0ec], 0x11aba118 */
  w32((uint32_t)(0x11aba0ec), (0x11aba118u));
  /* 11a8b8d0 mov eax, dword ptr [0x11abbbe8] */
  EAX = (r32((uint32_t)(0x11abbbe8)));
  /* 11a8b8d5 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11a8b8d8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a8b8da jne 0x11a8b8e7 */
  if (!C.zf) goto L_11a8b8e7;
  /* 11a8b8dc mov edx, dword ptr [0x11aba0ec] */
  EDX = (r32((uint32_t)(0x11aba0ec)));
  /* 11a8b8e2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11a8b8e5 jmp 0x11a8b8ef */
  goto L_11a8b8ef;
L_11a8b8e7:;
  /* 11a8b8e7 mov eax, dword ptr [0x11abbbe8] */
  EAX = (r32((uint32_t)(0x11abbbe8)));
  /* 11a8b8ec mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11a8b8ef:;
  /* 11a8b8ef mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a8b8f2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11a8b8f5 lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 11a8b8f8 push edx */
  push32((uint32_t)(EDX));
  /* 11a8b8f9 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11a8b8fc push eax */
  push32((uint32_t)(EAX));
  /* 11a8b8fd push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b8ff push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8b901 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a8b904 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8b905 call 0x11a8b980 */
  push32(0x11a8b90au); f_11a8b980();
  /* 11a8b90a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8b90d push 0x80 */
  push32((uint32_t)(0x80u));
  /* 11a8b912 push 0x11ab4f44 */
  push32((uint32_t)(0x11ab4f44u));
  /* 11a8b917 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a8b919 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8b91c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b91f lea ecx, [eax + edx*4] */
  ECX = ((uint32_t)(EAX + EDX*4));
  /* 11a8b922 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8b923 call 0x11a897e0 */
  push32(0x11a8b928u); f_11a897e0();
  /* 11a8b928 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8b92b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a8b92e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b932 jne 0x11a8b93e */
  if (!C.zf) goto L_11a8b93e;
  /* 11a8b934 push 8 */
  push32((uint32_t)(0x8u));
  /* 11a8b936 call 0x11a86750 */
  push32(0x11a8b93bu); f_11a86750();
  /* 11a8b93b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a8b93e:;
  /* 11a8b93e lea edx, [ebp - 4] */
  EDX = ((uint32_t)(EBP + -0x4));
  /* 11a8b941 push edx */
  push32((uint32_t)(EDX));
  /* 11a8b942 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11a8b945 push eax */
  push32((uint32_t)(EAX));
  /* 11a8b946 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8b949 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8b94c lea eax, [edx + ecx*4] */
  EAX = ((uint32_t)(EDX + ECX*4));
  /* 11a8b94f push eax */
  push32((uint32_t)(EAX));
  /* 11a8b950 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8b953 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8b954 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a8b957 push edx */
  push32((uint32_t)(EDX));
  /* 11a8b958 call 0x11a8b980 */
  push32(0x11a8b95du); f_11a8b980();
  /* 11a8b95d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8b960 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8b963 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8b966 mov dword ptr [0x11aba0d0], eax */
  w32((uint32_t)(0x11aba0d0), (EAX));
  /* 11a8b96b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8b96e mov dword ptr [0x11aba0d4], ecx */
  w32((uint32_t)(0x11aba0d4), (ECX));
  /* 11a8b974 mov esp, ebp */
  ESP = (EBP);
  /* 11a8b976 pop ebp */
  EBP = (pop32());
  /* 11a8b977 ret  */
  ESPCHK(0x11a8b8a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b980 @ 0x11a8b980 (1060 bytes, 360 insns) */
void f_11a8b980(void) {
  FTRACE(0x11a8b980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8b980 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8b981 mov ebp, esp */
  EBP = (ESP);
  /* 11a8b983 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8b986 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a8b989 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11a8b98f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a8b992 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
  /* 11a8b998 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8b99b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a8b99e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b9a2 je 0x11a8b9b5 */
  if (C.zf) goto L_11a8b9b5;
  /* 11a8b9a4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8b9a7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8b9aa mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11a8b9ac mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8b9af add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8b9b2 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
L_11a8b9b5:;
  /* 11a8b9b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b9b8 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11a8b9bb cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b9be jne 0x11a8ba8d */
  if (!C.zf) goto L_11a8ba8d;
L_11a8b9c4:;
  /* 11a8b9c4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b9c7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8b9ca mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a8b9cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b9d0 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11a8b9d3 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8b9d6 je 0x11a8ba52 */
  if (C.zf) goto L_11a8ba52;
  /* 11a8b9d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b9db movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11a8b9de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8b9e0 je 0x11a8ba52 */
  if (C.zf) goto L_11a8ba52;
  /* 11a8b9e2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8b9e5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a8b9e7 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11a8b9e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8b9eb mov al, byte ptr [edx + 0x11aba5e1] */
  AL = (r8((uint32_t)(EDX + 0x11aba5e1)));
  /* 11a8b9f1 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11a8b9f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8b9f6 je 0x11a8ba27 */
  if (C.zf) goto L_11a8ba27;
  /* 11a8b9f8 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a8b9fb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a8b9fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ba00 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a8ba03 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11a8ba05 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8ba09 je 0x11a8ba27 */
  if (C.zf) goto L_11a8ba27;
  /* 11a8ba0b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8ba0e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8ba11 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11a8ba13 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11a8ba15 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8ba18 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ba1b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11a8ba1e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8ba21 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ba24 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11a8ba27:;
  /* 11a8ba27 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a8ba2a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a8ba2c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ba2f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a8ba32 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11a8ba34 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8ba38 je 0x11a8ba4d */
  if (C.zf) goto L_11a8ba4d;
  /* 11a8ba3a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8ba3d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8ba40 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11a8ba42 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11a8ba44 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8ba47 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ba4a mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11a8ba4d:;
  /* 11a8ba4d jmp 0x11a8b9c4 */
  goto L_11a8b9c4;
L_11a8ba52:;
  /* 11a8ba52 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a8ba55 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a8ba57 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ba5a mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a8ba5d mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11a8ba5f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8ba63 je 0x11a8ba74 */
  if (C.zf) goto L_11a8ba74;
  /* 11a8ba65 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8ba68 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11a8ba6b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8ba6e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ba71 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_11a8ba74:;
  /* 11a8ba74 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8ba77 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11a8ba7a cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8ba7d jne 0x11a8ba88 */
  if (!C.zf) goto L_11a8ba88;
  /* 11a8ba7f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8ba82 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ba85 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11a8ba88:;
  /* 11a8ba88 jmp 0x11a8bb5c */
  goto L_11a8bb5c;
L_11a8ba8d:;
  /* 11a8ba8d mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a8ba90 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a8ba92 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ba95 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a8ba98 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11a8ba9a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8ba9e je 0x11a8bab3 */
  if (C.zf) goto L_11a8bab3;
  /* 11a8baa0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8baa3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8baa6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11a8baa8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11a8baaa mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8baad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8bab0 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11a8bab3:;
  /* 11a8bab3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8bab6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11a8bab8 mov byte ptr [ebp - 0xc], dl */
  w8((uint32_t)(EBP + -0xc), (DL));
  /* 11a8babb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8babe add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8bac1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a8bac4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8bac7 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a8bacd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a8bacf mov dl, byte ptr [ecx + 0x11aba5e1] */
  DL = (r8((uint32_t)(ECX + 0x11aba5e1)));
  /* 11a8bad5 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11a8bad8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a8bada je 0x11a8bb0b */
  if (C.zf) goto L_11a8bb0b;
  /* 11a8badc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a8badf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a8bae1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8bae4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a8bae7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11a8bae9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8baed je 0x11a8bb02 */
  if (C.zf) goto L_11a8bb02;
  /* 11a8baef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8baf2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8baf5 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11a8baf7 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11a8baf9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8bafc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8baff mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_11a8bb02:;
  /* 11a8bb02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8bb05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8bb08 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11a8bb0b:;
  /* 11a8bb0b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8bb0e and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a8bb14 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8bb17 je 0x11a8bb37 */
  if (C.zf) goto L_11a8bb37;
  /* 11a8bb19 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8bb1c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8bb21 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8bb23 je 0x11a8bb37 */
  if (C.zf) goto L_11a8bb37;
  /* 11a8bb25 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8bb28 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a8bb2e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8bb31 jne 0x11a8ba8d */
  if (!C.zf) goto L_11a8ba8d;
L_11a8bb37:;
  /* 11a8bb37 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8bb3a and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a8bb40 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a8bb42 jne 0x11a8bb4f */
  if (!C.zf) goto L_11a8bb4f;
  /* 11a8bb44 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8bb47 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8bb4a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a8bb4d jmp 0x11a8bb5c */
  goto L_11a8bb5c;
L_11a8bb4f:;
  /* 11a8bb4f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8bb53 je 0x11a8bb5c */
  if (C.zf) goto L_11a8bb5c;
  /* 11a8bb55 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8bb58 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
L_11a8bb5c:;
  /* 11a8bb5c mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11a8bb63:;
  /* 11a8bb63 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8bb66 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11a8bb69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8bb6b je 0x11a8bb8e */
  if (C.zf) goto L_11a8bb8e;
L_11a8bb6d:;
  /* 11a8bb6d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8bb70 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11a8bb73 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8bb76 je 0x11a8bb83 */
  if (C.zf) goto L_11a8bb83;
  /* 11a8bb78 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8bb7b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11a8bb7e cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8bb81 jne 0x11a8bb8e */
  if (!C.zf) goto L_11a8bb8e;
L_11a8bb83:;
  /* 11a8bb83 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8bb86 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8bb89 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a8bb8c jmp 0x11a8bb6d */
  goto L_11a8bb6d;
L_11a8bb8e:;
  /* 11a8bb8e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8bb91 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11a8bb94 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a8bb96 jne 0x11a8bb9d */
  if (!C.zf) goto L_11a8bb9d;
  /* 11a8bb98 jmp 0x11a8bd7b */
  goto L_11a8bd7b;
L_11a8bb9d:;
  /* 11a8bb9d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8bba1 je 0x11a8bbb4 */
  if (C.zf) goto L_11a8bbb4;
  /* 11a8bba3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8bba6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8bba9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11a8bbab mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8bbae add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8bbb1 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11a8bbb4:;
  /* 11a8bbb4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a8bbb7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a8bbb9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8bbbc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a8bbbf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11a8bbc1:;
  /* 11a8bbc1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11a8bbc8 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11a8bbcf:;
  /* 11a8bbcf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8bbd2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11a8bbd5 cmp eax, 0x5c */
  { uint32_t _a=(EAX),_b=(0x5cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8bbd8 jne 0x11a8bbee */
  if (!C.zf) goto L_11a8bbee;
  /* 11a8bbda mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8bbdd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8bbe0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a8bbe3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a8bbe6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8bbe9 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11a8bbec jmp 0x11a8bbcf */
  goto L_11a8bbcf;
L_11a8bbee:;
  /* 11a8bbee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8bbf1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11a8bbf4 cmp ecx, 0x22 */
  { uint32_t _a=(ECX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8bbf7 jne 0x11a8bc4a */
  if (!C.zf) goto L_11a8bc4a;
  /* 11a8bbf9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a8bbfc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a8bbfe mov ecx, 2 */
  ECX = (0x2u);
  /* 11a8bc03 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a8bc05 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a8bc07 jne 0x11a8bc42 */
  if (!C.zf) goto L_11a8bc42;
  /* 11a8bc09 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8bc0d je 0x11a8bc2f */
  if (C.zf) goto L_11a8bc2f;
  /* 11a8bc0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8bc12 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11a8bc16 cmp eax, 0x22 */
  { uint32_t _a=(EAX),_b=(0x22u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8bc19 jne 0x11a8bc26 */
  if (!C.zf) goto L_11a8bc26;
  /* 11a8bc1b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8bc1e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8bc21 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a8bc24 jmp 0x11a8bc2d */
  goto L_11a8bc2d;
L_11a8bc26:;
  /* 11a8bc26 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11a8bc2d:;
  /* 11a8bc2d jmp 0x11a8bc36 */
  goto L_11a8bc36;
L_11a8bc2f:;
  /* 11a8bc2f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11a8bc36:;
  /* 11a8bc36 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a8bc38 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8bc3c sete dl */
  DL = ((C.zf) ? 1u : 0u);
  /* 11a8bc3f mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11a8bc42:;
  /* 11a8bc42 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a8bc45 shr eax, 1 */
  EAX = (sh_shr((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11a8bc47 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11a8bc4a:;
  /* 11a8bc4a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a8bc4d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a8bc50 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8bc53 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11a8bc56 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a8bc58 je 0x11a8bc7e */
  if (C.zf) goto L_11a8bc7e;
  /* 11a8bc5a cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8bc5e je 0x11a8bc6f */
  if (C.zf) goto L_11a8bc6f;
  /* 11a8bc60 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8bc63 mov byte ptr [eax], 0x5c */
  w8((uint32_t)(EAX), (0x5cu));
  /* 11a8bc66 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8bc69 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8bc6c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_11a8bc6f:;
  /* 11a8bc6f mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a8bc72 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a8bc74 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8bc77 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a8bc7a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11a8bc7c jmp 0x11a8bc4a */
  goto L_11a8bc4a;
L_11a8bc7e:;
  /* 11a8bc7e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8bc81 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11a8bc84 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8bc86 je 0x11a8bca4 */
  if (C.zf) goto L_11a8bca4;
  /* 11a8bc88 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8bc8c jne 0x11a8bca9 */
  if (!C.zf) goto L_11a8bca9;
  /* 11a8bc8e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8bc91 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11a8bc94 cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8bc97 je 0x11a8bca4 */
  if (C.zf) goto L_11a8bca4;
  /* 11a8bc99 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8bc9c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11a8bc9f cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8bca2 jne 0x11a8bca9 */
  if (!C.zf) goto L_11a8bca9;
L_11a8bca4:;
  /* 11a8bca4 jmp 0x11a8bd54 */
  goto L_11a8bd54;
L_11a8bca9:;
  /* 11a8bca9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8bcad je 0x11a8bd46 */
  if (C.zf) goto L_11a8bd46;
  /* 11a8bcb3 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8bcb7 je 0x11a8bd0d */
  if (C.zf) goto L_11a8bd0d;
  /* 11a8bcb9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8bcbc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8bcbe mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11a8bcc0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a8bcc2 mov cl, byte ptr [eax + 0x11aba5e1] */
  CL = (r8((uint32_t)(EAX + 0x11aba5e1)));
  /* 11a8bcc8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11a8bccb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a8bccd je 0x11a8bcf8 */
  if (C.zf) goto L_11a8bcf8;
  /* 11a8bccf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8bcd2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8bcd5 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11a8bcd7 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 11a8bcd9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8bcdc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8bcdf mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
  /* 11a8bce2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8bce5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8bce8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a8bceb mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a8bcee mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a8bcf0 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8bcf3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a8bcf6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11a8bcf8:;
  /* 11a8bcf8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8bcfb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8bcfe mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11a8bd00 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11a8bd02 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8bd05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8bd08 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 11a8bd0b jmp 0x11a8bd39 */
  goto L_11a8bd39;
L_11a8bd0d:;
  /* 11a8bd0d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8bd10 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8bd12 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11a8bd14 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a8bd16 mov cl, byte ptr [eax + 0x11aba5e1] */
  CL = (r8((uint32_t)(EAX + 0x11aba5e1)));
  /* 11a8bd1c and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11a8bd1f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a8bd21 je 0x11a8bd39 */
  if (C.zf) goto L_11a8bd39;
  /* 11a8bd23 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8bd26 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8bd29 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a8bd2c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a8bd2f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a8bd31 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8bd34 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a8bd37 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11a8bd39:;
  /* 11a8bd39 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a8bd3c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a8bd3e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8bd41 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a8bd44 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11a8bd46:;
  /* 11a8bd46 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8bd49 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8bd4c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a8bd4f jmp 0x11a8bbc1 */
  goto L_11a8bbc1;
L_11a8bd54:;
  /* 11a8bd54 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8bd58 je 0x11a8bd69 */
  if (C.zf) goto L_11a8bd69;
  /* 11a8bd5a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8bd5d mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11a8bd60 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8bd63 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8bd66 mov dword ptr [ebp + 0x10], edx */
  w32((uint32_t)(EBP + 0x10), (EDX));
L_11a8bd69:;
  /* 11a8bd69 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a8bd6c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a8bd6e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8bd71 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11a8bd74 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11a8bd76 jmp 0x11a8bb63 */
  goto L_11a8bb63;
L_11a8bd7b:;
  /* 11a8bd7b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8bd7f je 0x11a8bd93 */
  if (C.zf) goto L_11a8bd93;
  /* 11a8bd81 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8bd84 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11a8bd8a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8bd8d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8bd90 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11a8bd93:;
  /* 11a8bd93 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a8bd96 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a8bd98 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8bd9b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a8bd9e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11a8bda0 mov esp, ebp */
  ESP = (EBP);
  /* 11a8bda2 pop ebp */
  EBP = (pop32());
  /* 11a8bda3 ret  */
  ESPCHK(0x11a8b980u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bdb0 @ 0x11a8bdb0 (537 bytes, 173 insns) */
void f_11a8bdb0(void) {
  FTRACE(0x11a8bdb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8bdb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8bdb1 mov ebp, esp */
  EBP = (ESP);
  /* 11a8bdb3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8bdb6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11a8bdbd mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11a8bdc4 cmp dword ptr [0x11aba21c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba21c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8bdcb jne 0x11a8be0a */
  if (!C.zf) goto L_11a8be0a;
  /* 11a8bdcd call dword ptr [0x11abc36c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc36c))), 0x11a8bdd3u);
  /* 11a8bdd3 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11a8bdd6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8bdda je 0x11a8bde8 */
  if (C.zf) goto L_11a8bde8;
  /* 11a8bddc mov dword ptr [0x11aba21c], 1 */
  w32((uint32_t)(0x11aba21c), (0x1u));
  /* 11a8bde6 jmp 0x11a8be0a */
  goto L_11a8be0a;
L_11a8bde8:;
  /* 11a8bde8 call dword ptr [0x11abc370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc370))), 0x11a8bdeeu);
  /* 11a8bdee mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11a8bdf1 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8bdf5 je 0x11a8be03 */
  if (C.zf) goto L_11a8be03;
  /* 11a8bdf7 mov dword ptr [0x11aba21c], 2 */
  w32((uint32_t)(0x11aba21c), (0x2u));
  /* 11a8be01 jmp 0x11a8be0a */
  goto L_11a8be0a;
L_11a8be03:;
  /* 11a8be03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8be05 jmp 0x11a8bfc5 */
  goto L_11a8bfc5;
L_11a8be0a:;
  /* 11a8be0a cmp dword ptr [0x11aba21c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11aba21c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8be11 jne 0x11a8bf0e */
  if (!C.zf) goto L_11a8bf0e;
  /* 11a8be17 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8be1b jne 0x11a8be33 */
  if (!C.zf) goto L_11a8be33;
  /* 11a8be1d call dword ptr [0x11abc36c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc36c))), 0x11a8be23u);
  /* 11a8be23 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11a8be26 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8be2a jne 0x11a8be33 */
  if (!C.zf) goto L_11a8be33;
  /* 11a8be2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8be2e jmp 0x11a8bfc5 */
  goto L_11a8bfc5;
L_11a8be33:;
  /* 11a8be33 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a8be36 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11a8be39:;
  /* 11a8be39 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8be3c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a8be3e mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11a8be41 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a8be43 je 0x11a8be65 */
  if (C.zf) goto L_11a8be65;
  /* 11a8be45 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8be48 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8be4b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a8be4e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8be51 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a8be53 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11a8be56 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a8be58 jne 0x11a8be63 */
  if (!C.zf) goto L_11a8be63;
  /* 11a8be5a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8be5d add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8be60 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11a8be63:;
  /* 11a8be63 jmp 0x11a8be39 */
  goto L_11a8be39;
L_11a8be65:;
  /* 11a8be65 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8be68 sub ecx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8be6b sar ecx, 1 */
  ECX = (sh_sar((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11a8be6d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8be70 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a8be73 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8be75 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8be77 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8be79 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8be7b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8be7e push edx */
  push32((uint32_t)(EDX));
  /* 11a8be7f mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a8be82 push eax */
  push32((uint32_t)(EAX));
  /* 11a8be83 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8be85 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8be87 call dword ptr [0x11abc3bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3bc))), 0x11a8be8du);
  /* 11a8be8d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11a8be90 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8be94 je 0x11a8beb4 */
  if (C.zf) goto L_11a8beb4;
  /* 11a8be96 push 0x64 */
  push32((uint32_t)(0x64u));
  /* 11a8be98 push 0x11ab4f50 */
  push32((uint32_t)(0x11ab4f50u));
  /* 11a8be9d push 2 */
  push32((uint32_t)(0x2u));
  /* 11a8be9f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a8bea2 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8bea3 call 0x11a897e0 */
  push32(0x11a8bea8u); f_11a897e0();
  /* 11a8bea8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8beab mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11a8beae cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8beb2 jne 0x11a8bec5 */
  if (!C.zf) goto L_11a8bec5;
L_11a8beb4:;
  /* 11a8beb4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a8beb7 push edx */
  push32((uint32_t)(EDX));
  /* 11a8beb8 call dword ptr [0x11abc378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc378))), 0x11a8bebeu);
  /* 11a8bebe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8bec0 jmp 0x11a8bfc5 */
  goto L_11a8bfc5;
L_11a8bec5:;
  /* 11a8bec5 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8bec7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8bec9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a8becc push eax */
  push32((uint32_t)(EAX));
  /* 11a8becd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a8bed0 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8bed1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8bed4 push edx */
  push32((uint32_t)(EDX));
  /* 11a8bed5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a8bed8 push eax */
  push32((uint32_t)(EAX));
  /* 11a8bed9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8bedb push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8bedd call dword ptr [0x11abc3bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3bc))), 0x11a8bee3u);
  /* 11a8bee3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8bee5 jne 0x11a8befc */
  if (!C.zf) goto L_11a8befc;
  /* 11a8bee7 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a8bee9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a8beec push ecx */
  push32((uint32_t)(ECX));
  /* 11a8beed call 0x11a8a270 */
  push32(0x11a8bef2u); f_11a8a270();
  /* 11a8bef2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8bef5 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_11a8befc:;
  /* 11a8befc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a8beff push edx */
  push32((uint32_t)(EDX));
  /* 11a8bf00 call dword ptr [0x11abc378] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc378))), 0x11a8bf06u);
  /* 11a8bf06 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a8bf09 jmp 0x11a8bfc5 */
  goto L_11a8bfc5;
L_11a8bf0e:;
  /* 11a8bf0e cmp dword ptr [0x11aba21c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11aba21c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8bf15 jne 0x11a8bfc3 */
  if (!C.zf) goto L_11a8bfc3;
  /* 11a8bf1b cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8bf1f jne 0x11a8bf37 */
  if (!C.zf) goto L_11a8bf37;
  /* 11a8bf21 call dword ptr [0x11abc370] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc370))), 0x11a8bf27u);
  /* 11a8bf27 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11a8bf2a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8bf2e jne 0x11a8bf37 */
  if (!C.zf) goto L_11a8bf37;
  /* 11a8bf30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8bf32 jmp 0x11a8bfc5 */
  goto L_11a8bfc5;
L_11a8bf37:;
  /* 11a8bf37 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a8bf3a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11a8bf3d:;
  /* 11a8bf3d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8bf40 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11a8bf43 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a8bf45 je 0x11a8bf65 */
  if (C.zf) goto L_11a8bf65;
  /* 11a8bf47 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8bf4a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8bf4d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11a8bf50 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8bf53 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11a8bf56 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a8bf58 jne 0x11a8bf63 */
  if (!C.zf) goto L_11a8bf63;
  /* 11a8bf5a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8bf5d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8bf60 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11a8bf63:;
  /* 11a8bf63 jmp 0x11a8bf3d */
  goto L_11a8bf3d;
L_11a8bf65:;
  /* 11a8bf65 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8bf68 sub ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8bf6b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8bf6e mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11a8bf71 push 0x8f */
  push32((uint32_t)(0x8fu));
  /* 11a8bf76 push 0x11ab4f50 */
  push32((uint32_t)(0x11ab4f50u));
  /* 11a8bf7b push 2 */
  push32((uint32_t)(0x2u));
  /* 11a8bf7d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a8bf80 push edx */
  push32((uint32_t)(EDX));
  /* 11a8bf81 call 0x11a897e0 */
  push32(0x11a8bf86u); f_11a897e0();
  /* 11a8bf86 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8bf89 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11a8bf8c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8bf90 jne 0x11a8bfa0 */
  if (!C.zf) goto L_11a8bfa0;
  /* 11a8bf92 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a8bf95 push eax */
  push32((uint32_t)(EAX));
  /* 11a8bf96 call dword ptr [0x11abc37c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc37c))), 0x11a8bf9cu);
  /* 11a8bf9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8bf9e jmp 0x11a8bfc5 */
  goto L_11a8bfc5;
L_11a8bfa0:;
  /* 11a8bfa0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a8bfa3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8bfa4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a8bfa7 push edx */
  push32((uint32_t)(EDX));
  /* 11a8bfa8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8bfab push eax */
  push32((uint32_t)(EAX));
  /* 11a8bfac call 0x11a91f90 */
  push32(0x11a8bfb1u); f_11a91f90();
  /* 11a8bfb1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8bfb4 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a8bfb7 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8bfb8 call dword ptr [0x11abc37c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc37c))), 0x11a8bfbeu);
  /* 11a8bfbe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8bfc1 jmp 0x11a8bfc5 */
  goto L_11a8bfc5;
L_11a8bfc3:;
  /* 11a8bfc3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a8bfc5:;
  /* 11a8bfc5 mov esp, ebp */
  ESP = (EBP);
  /* 11a8bfc7 pop ebp */
  EBP = (pop32());
  /* 11a8bfc8 ret  */
  ESPCHK(0x11a8bdb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bfd0 @ 0x11a8bfd0 (77 bytes, 25 insns) */
void f_11a8bfd0(void) {
  FTRACE(0x11a8bfd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8bfd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8bfd1 mov ebp, esp */
  EBP = (ESP);
  /* 11a8bfd3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8bfd5 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11a8bfda xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8bfdc cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8bfe0 sete al */
  AL = ((C.zf) ? 1u : 0u);
  /* 11a8bfe3 push eax */
  push32((uint32_t)(EAX));
  /* 11a8bfe4 call dword ptr [0x11abc364] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc364))), 0x11a8bfeau);
  /* 11a8bfea mov dword ptr [0x11abba64], eax */
  w32((uint32_t)(0x11abba64), (EAX));
  /* 11a8bfef cmp dword ptr [0x11abba64], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11abba64))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8bff6 jne 0x11a8bffc */
  if (!C.zf) goto L_11a8bffc;
  /* 11a8bff8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8bffa jmp 0x11a8c01b */
  goto L_11a8c01b;
L_11a8bffc:;
  /* 11a8bffc call 0x11a8fb10 */
  push32(0x11a8c001u); f_11a8fb10();
  /* 11a8c001 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8c003 jne 0x11a8c016 */
  if (!C.zf) goto L_11a8c016;
  /* 11a8c005 mov ecx, dword ptr [0x11abba64] */
  ECX = (r32((uint32_t)(0x11abba64)));
  /* 11a8c00b push ecx */
  push32((uint32_t)(ECX));
  /* 11a8c00c call dword ptr [0x11abc374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc374))), 0x11a8c012u);
  /* 11a8c012 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8c014 jmp 0x11a8c01b */
  goto L_11a8c01b;
L_11a8c016:;
  /* 11a8c016 mov eax, 1 */
  EAX = (0x1u);
L_11a8c01b:;
  /* 11a8c01b pop ebp */
  EBP = (pop32());
  /* 11a8c01c ret  */
  ESPCHK(0x11a8bfd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c020 @ 0x11a8c020 (156 bytes, 48 insns) */
void f_11a8c020(void) {
  FTRACE(0x11a8c020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8c020 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8c021 mov ebp, esp */
  EBP = (ESP);
  /* 11a8c023 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8c026 mov eax, dword ptr [0x11aba708] */
  EAX = (r32((uint32_t)(0x11aba708)));
  /* 11a8c02b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a8c02e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11a8c035 jmp 0x11a8c040 */
  goto L_11a8c040;
L_11a8c037:;
  /* 11a8c037 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8c03a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8c03d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11a8c040:;
  /* 11a8c040 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8c043 cmp edx, dword ptr [0x11aba704] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11aba704))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c049 jge 0x11a8c096 */
  if ((C.sf==C.of)) goto L_11a8c096;
  /* 11a8c04b push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11a8c050 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11a8c055 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8c058 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11a8c05b push ecx */
  push32((uint32_t)(ECX));
  /* 11a8c05c call dword ptr [0x11abc368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc368))), 0x11a8c062u);
  /* 11a8c062 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11a8c067 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8c069 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8c06c mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11a8c06f push eax */
  push32((uint32_t)(EAX));
  /* 11a8c070 call dword ptr [0x11abc368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc368))), 0x11a8c076u);
  /* 11a8c076 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8c079 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11a8c07c push edx */
  push32((uint32_t)(EDX));
  /* 11a8c07d push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8c07f mov eax, dword ptr [0x11abba64] */
  EAX = (r32((uint32_t)(0x11abba64)));
  /* 11a8c084 push eax */
  push32((uint32_t)(EAX));
  /* 11a8c085 call dword ptr [0x11abc360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc360))), 0x11a8c08bu);
  /* 11a8c08b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8c08e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8c091 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a8c094 jmp 0x11a8c037 */
  goto L_11a8c037;
L_11a8c096:;
  /* 11a8c096 mov edx, dword ptr [0x11aba708] */
  EDX = (r32((uint32_t)(0x11aba708)));
  /* 11a8c09c push edx */
  push32((uint32_t)(EDX));
  /* 11a8c09d push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8c09f mov eax, dword ptr [0x11abba64] */
  EAX = (r32((uint32_t)(0x11abba64)));
  /* 11a8c0a4 push eax */
  push32((uint32_t)(EAX));
  /* 11a8c0a5 call dword ptr [0x11abc360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc360))), 0x11a8c0abu);
  /* 11a8c0ab mov ecx, dword ptr [0x11abba64] */
  ECX = (r32((uint32_t)(0x11abba64)));
  /* 11a8c0b1 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8c0b2 call dword ptr [0x11abc374] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc374))), 0x11a8c0b8u);
  /* 11a8c0b8 mov esp, ebp */
  ESP = (EBP);
  /* 11a8c0ba pop ebp */
  EBP = (pop32());
  /* 11a8c0bb ret  */
  ESPCHK(0x11a8c020u, _esp0);
  ESP += 4; return;
}

/* __FF_MSGBANNER @ 0x11a8c0c0 (73 bytes, 19 insns) */
void f_11a8c0c0(void) {
  FTRACE(0x11a8c0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8c0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8c0c1 mov ebp, esp */
  EBP = (ESP);
  /* 11a8c0c3 cmp dword ptr [0x11aba0b0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11aba0b0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c0ca je 0x11a8c0de */
  if (C.zf) goto L_11a8c0de;
  /* 11a8c0cc cmp dword ptr [0x11aba0b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba0b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c0d3 jne 0x11a8c107 */
  if (!C.zf) goto L_11a8c107;
  /* 11a8c0d5 cmp dword ptr [0x11aba0b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11aba0b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c0dc jne 0x11a8c107 */
  if (!C.zf) goto L_11a8c107;
L_11a8c0de:;
  /* 11a8c0de push 0xfc */
  push32((uint32_t)(0xfcu));
  /* 11a8c0e3 call 0x11a8c110 */
  push32(0x11a8c0e8u); f_11a8c110();
  /* 11a8c0e8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8c0eb cmp dword ptr [0x11aba220], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba220))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c0f2 je 0x11a8c0fa */
  if (C.zf) goto L_11a8c0fa;
  /* 11a8c0f4 call dword ptr [0x11aba220] */
  call_ind((uint32_t)(r32((uint32_t)(0x11aba220))), 0x11a8c0fau);
L_11a8c0fa:;
  /* 11a8c0fa push 0xff */
  push32((uint32_t)(0xffu));
  /* 11a8c0ff call 0x11a8c110 */
  push32(0x11a8c104u); f_11a8c110();
  /* 11a8c104 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a8c107:;
  /* 11a8c107 pop ebp */
  EBP = (pop32());
  /* 11a8c108 ret  */
  ESPCHK(0x11a8c0c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c110 @ 0x11a8c110 (447 bytes, 131 insns) */
void f_11a8c110(void) {
  FTRACE(0x11a8c110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8c110 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8c111 mov ebp, esp */
  EBP = (ESP);
  /* 11a8c113 sub esp, 0x1b0 */
  { uint32_t _a=(ESP),_b=(0x1b0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8c119 push ebx */
  push32((uint32_t)(EBX));
  /* 11a8c11a push esi */
  push32((uint32_t)(ESI));
  /* 11a8c11b push edi */
  push32((uint32_t)(EDI));
  /* 11a8c11c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11a8c123 jmp 0x11a8c12e */
  goto L_11a8c12e;
L_11a8c125:;
  /* 11a8c125 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8c128 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8c12b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11a8c12e:;
  /* 11a8c12e cmp dword ptr [ebp - 8], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c132 jae 0x11a8c147 */
  if (!C.cf) goto L_11a8c147;
  /* 11a8c134 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8c137 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8c13a cmp edx, dword ptr [ecx*8 + 0x11ab7ba8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x11ab7ba8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c141 jne 0x11a8c145 */
  if (!C.zf) goto L_11a8c145;
  /* 11a8c143 jmp 0x11a8c147 */
  goto L_11a8c147;
L_11a8c145:;
  /* 11a8c145 jmp 0x11a8c125 */
  goto L_11a8c125;
L_11a8c147:;
  /* 11a8c147 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8c14a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8c14d cmp ecx, dword ptr [eax*8 + 0x11ab7ba8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11ab7ba8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c154 jne 0x11a8c2c8 */
  if (!C.zf) goto L_11a8c2c8;
  /* 11a8c15a cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c161 je 0x11a8c184 */
  if (C.zf) goto L_11a8c184;
  /* 11a8c163 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8c166 mov eax, dword ptr [edx*8 + 0x11ab7bac] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11ab7bac)));
  /* 11a8c16d push eax */
  push32((uint32_t)(EAX));
  /* 11a8c16e push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8c170 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8c172 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8c174 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a8c176 call 0x11a868a0 */
  push32(0x11a8c17bu); f_11a868a0();
  /* 11a8c17b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8c17e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c181 jne 0x11a8c184 */
  if (!C.zf) goto L_11a8c184;
  /* 11a8c183 int3  */
  x86_unimpl("int3 @ 0x11a8c183");
L_11a8c184:;
  /* 11a8c184 cmp dword ptr [0x11aba0b0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11aba0b0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c18b je 0x11a8c19f */
  if (C.zf) goto L_11a8c19f;
  /* 11a8c18d cmp dword ptr [0x11aba0b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba0b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c194 jne 0x11a8c1d8 */
  if (!C.zf) goto L_11a8c1d8;
  /* 11a8c196 cmp dword ptr [0x11aba0b4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11aba0b4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c19d jne 0x11a8c1d8 */
  if (!C.zf) goto L_11a8c1d8;
L_11a8c19f:;
  /* 11a8c19f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8c1a1 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11a8c1a4 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8c1a5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8c1a8 mov eax, dword ptr [edx*8 + 0x11ab7bac] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11ab7bac)));
  /* 11a8c1af push eax */
  push32((uint32_t)(EAX));
  /* 11a8c1b0 call 0x11a8c610 */
  push32(0x11a8c1b5u); f_11a8c610();
  /* 11a8c1b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8c1b8 push eax */
  push32((uint32_t)(EAX));
  /* 11a8c1b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8c1bc mov edx, dword ptr [ecx*8 + 0x11ab7bac] */
  EDX = (r32((uint32_t)(ECX*8 + 0x11ab7bac)));
  /* 11a8c1c3 push edx */
  push32((uint32_t)(EDX));
  /* 11a8c1c4 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 11a8c1c6 call dword ptr [0x11abc38c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc38c))), 0x11a8c1ccu);
  /* 11a8c1cc push eax */
  push32((uint32_t)(EAX));
  /* 11a8c1cd call dword ptr [0x11abc390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc390))), 0x11a8c1d3u);
  /* 11a8c1d3 jmp 0x11a8c2c8 */
  goto L_11a8c2c8;
L_11a8c1d8:;
  /* 11a8c1d8 cmp dword ptr [ebp + 8], 0xfc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c1df je 0x11a8c2c8 */
  if (C.zf) goto L_11a8c2c8;
  /* 11a8c1e5 push 0x104 */
  push32((uint32_t)(0x104u));
  /* 11a8c1ea lea eax, [ebp - 0x110] */
  EAX = ((uint32_t)(EBP + -0x110));
  /* 11a8c1f0 push eax */
  push32((uint32_t)(EAX));
  /* 11a8c1f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8c1f3 call dword ptr [0x11abc3a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3a8))), 0x11a8c1f9u);
  /* 11a8c1f9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8c1fb jne 0x11a8c211 */
  if (!C.zf) goto L_11a8c211;
  /* 11a8c1fd push 0x11ab4618 */
  push32((uint32_t)(0x11ab4618u));
  /* 11a8c202 lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 11a8c208 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8c209 call 0x11a8c790 */
  push32(0x11a8c20eu); f_11a8c790();
  /* 11a8c20e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a8c211:;
  /* 11a8c211 lea edx, [ebp - 0x110] */
  EDX = ((uint32_t)(EBP + -0x110));
  /* 11a8c217 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11a8c21a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8c21d push eax */
  push32((uint32_t)(EAX));
  /* 11a8c21e call 0x11a8c610 */
  push32(0x11a8c223u); f_11a8c610();
  /* 11a8c223 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8c226 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8c229 cmp eax, 0x3c */
  { uint32_t _a=(EAX),_b=(0x3cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c22c jbe 0x11a8c25a */
  if ((C.cf||C.zf)) goto L_11a8c25a;
  /* 11a8c22e lea ecx, [ebp - 0x110] */
  ECX = ((uint32_t)(EBP + -0x110));
  /* 11a8c234 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8c235 call 0x11a8c610 */
  push32(0x11a8c23au); f_11a8c610();
  /* 11a8c23a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8c23d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8c240 lea eax, [edx + eax - 0x3b] */
  EAX = ((uint32_t)(EDX + EAX*1 + -0x3b));
  /* 11a8c244 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11a8c247 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a8c249 push 0x11ab4614 */
  push32((uint32_t)(0x11ab4614u));
  /* 11a8c24e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8c251 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8c252 call 0x11a8d000 */
  push32(0x11a8c257u); f_11a8d000();
  /* 11a8c257 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a8c25a:;
  /* 11a8c25a push 0x11ab520c */
  push32((uint32_t)(0x11ab520cu));
  /* 11a8c25f lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11a8c265 push edx */
  push32((uint32_t)(EDX));
  /* 11a8c266 call 0x11a8c790 */
  push32(0x11a8c26bu); f_11a8c790();
  /* 11a8c26b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8c26e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8c271 push eax */
  push32((uint32_t)(EAX));
  /* 11a8c272 lea ecx, [ebp - 0x1b0] */
  ECX = ((uint32_t)(EBP + -0x1b0));
  /* 11a8c278 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8c279 call 0x11a8c7a0 */
  push32(0x11a8c27eu); f_11a8c7a0();
  /* 11a8c27e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8c281 push 0x11ab458c */
  push32((uint32_t)(0x11ab458cu));
  /* 11a8c286 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11a8c28c push edx */
  push32((uint32_t)(EDX));
  /* 11a8c28d call 0x11a8c7a0 */
  push32(0x11a8c292u); f_11a8c7a0();
  /* 11a8c292 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8c295 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8c298 mov ecx, dword ptr [eax*8 + 0x11ab7bac] */
  ECX = (r32((uint32_t)(EAX*8 + 0x11ab7bac)));
  /* 11a8c29f push ecx */
  push32((uint32_t)(ECX));
  /* 11a8c2a0 lea edx, [ebp - 0x1b0] */
  EDX = ((uint32_t)(EBP + -0x1b0));
  /* 11a8c2a6 push edx */
  push32((uint32_t)(EDX));
  /* 11a8c2a7 call 0x11a8c7a0 */
  push32(0x11a8c2acu); f_11a8c7a0();
  /* 11a8c2ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8c2af push 0x12010 */
  push32((uint32_t)(0x12010u));
  /* 11a8c2b4 push 0x11ab51e4 */
  push32((uint32_t)(0x11ab51e4u));
  /* 11a8c2b9 lea eax, [ebp - 0x1b0] */
  EAX = ((uint32_t)(EBP + -0x1b0));
  /* 11a8c2bf push eax */
  push32((uint32_t)(EAX));
  /* 11a8c2c0 call 0x11a8cf40 */
  push32(0x11a8c2c5u); f_11a8cf40();
  /* 11a8c2c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a8c2c8:;
  /* 11a8c2c8 pop edi */
  EDI = (pop32());
  /* 11a8c2c9 pop esi */
  ESI = (pop32());
  /* 11a8c2ca pop ebx */
  EBX = (pop32());
  /* 11a8c2cb mov esp, ebp */
  ESP = (EBP);
  /* 11a8c2cd pop ebp */
  EBP = (pop32());
  /* 11a8c2ce ret  */
  ESPCHK(0x11a8c110u, _esp0);
  ESP += 4; return;
}

/* __GET_RTERRMSG @ 0x11a8c2d0 (80 bytes, 27 insns) */
void f_11a8c2d0(void) {
  FTRACE(0x11a8c2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8c2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8c2d1 mov ebp, esp */
  EBP = (ESP);
  /* 11a8c2d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8c2d4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11a8c2db jmp 0x11a8c2e6 */
  goto L_11a8c2e6;
L_11a8c2dd:;
  /* 11a8c2dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8c2e0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8c2e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a8c2e6:;
  /* 11a8c2e6 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c2ea jae 0x11a8c2ff */
  if (!C.cf) goto L_11a8c2ff;
  /* 11a8c2ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8c2ef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8c2f2 cmp edx, dword ptr [ecx*8 + 0x11ab7ba8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX*8 + 0x11ab7ba8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c2f9 jne 0x11a8c2fd */
  if (!C.zf) goto L_11a8c2fd;
  /* 11a8c2fb jmp 0x11a8c2ff */
  goto L_11a8c2ff;
L_11a8c2fd:;
  /* 11a8c2fd jmp 0x11a8c2dd */
  goto L_11a8c2dd;
L_11a8c2ff:;
  /* 11a8c2ff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8c302 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8c305 cmp ecx, dword ptr [eax*8 + 0x11ab7ba8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11ab7ba8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c30c jne 0x11a8c31a */
  if (!C.zf) goto L_11a8c31a;
  /* 11a8c30e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8c311 mov eax, dword ptr [edx*8 + 0x11ab7bac] */
  EAX = (r32((uint32_t)(EDX*8 + 0x11ab7bac)));
  /* 11a8c318 jmp 0x11a8c31c */
  goto L_11a8c31c;
L_11a8c31a:;
  /* 11a8c31a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a8c31c:;
  /* 11a8c31c mov esp, ebp */
  ESP = (EBP);
  /* 11a8c31e pop ebp */
  EBP = (pop32());
  /* 11a8c31f ret  */
  ESPCHK(0x11a8c2d0u, _esp0);
  ESP += 4; return;
}

/* __itoa @ 0x11a8c320 (66 bytes, 28 insns) */
void f_11a8c320(void) {
  FTRACE(0x11a8c320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8c320 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8c321 mov ebp, esp */
  EBP = (ESP);
  /* 11a8c323 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c327 jne 0x11a8c347 */
  if (!C.zf) goto L_11a8c347;
  /* 11a8c329 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c32d jge 0x11a8c347 */
  if ((C.sf==C.of)) goto L_11a8c347;
  /* 11a8c32f push 1 */
  push32((uint32_t)(0x1u));
  /* 11a8c331 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8c334 push eax */
  push32((uint32_t)(EAX));
  /* 11a8c335 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8c338 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8c339 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8c33c push edx */
  push32((uint32_t)(EDX));
  /* 11a8c33d call 0x11a8c370 */
  push32(0x11a8c342u); f_11a8c370();
  /* 11a8c342 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8c345 jmp 0x11a8c35d */
  goto L_11a8c35d;
L_11a8c347:;
  /* 11a8c347 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8c349 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8c34c push eax */
  push32((uint32_t)(EAX));
  /* 11a8c34d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8c350 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8c351 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8c354 push edx */
  push32((uint32_t)(EDX));
  /* 11a8c355 call 0x11a8c370 */
  push32(0x11a8c35au); f_11a8c370();
  /* 11a8c35a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a8c35d:;
  /* 11a8c35d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8c360 pop ebp */
  EBP = (pop32());
  /* 11a8c361 ret  */
  ESPCHK(0x11a8c320u, _esp0);
  ESP += 4; return;
}

/* xtoa @ 0x11a8c370 (194 bytes, 71 insns) */
void f_11a8c370(void) {
  FTRACE(0x11a8c370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8c370 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8c371 mov ebp, esp */
  EBP = (ESP);
  /* 11a8c373 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8c376 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8c379 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a8c37c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c380 je 0x11a8c399 */
  if (C.zf) goto L_11a8c399;
  /* 11a8c382 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8c385 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11a8c388 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8c38b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8c38e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a8c391 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8c394 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a8c396 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11a8c399:;
  /* 11a8c399 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8c39c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11a8c39f:;
  /* 11a8c39f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8c3a2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a8c3a4 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a8c3a7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11a8c3aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8c3ad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a8c3af div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a8c3b2 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11a8c3b5 cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c3b9 jbe 0x11a8c3d1 */
  if ((C.cf||C.zf)) goto L_11a8c3d1;
  /* 11a8c3bb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8c3be add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8c3c1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8c3c4 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11a8c3c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8c3c9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8c3cc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a8c3cf jmp 0x11a8c3e5 */
  goto L_11a8c3e5;
L_11a8c3d1:;
  /* 11a8c3d1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8c3d4 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8c3d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8c3da mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11a8c3dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8c3df add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8c3e2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11a8c3e5:;
  /* 11a8c3e5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c3e9 ja 0x11a8c39f */
  if ((!C.cf&&!C.zf)) goto L_11a8c39f;
  /* 11a8c3eb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8c3ee mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11a8c3f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8c3f4 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8c3f7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a8c3fa:;
  /* 11a8c3fa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8c3fd mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11a8c3ff mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 11a8c402 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8c405 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8c408 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11a8c40a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11a8c40c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8c40f mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 11a8c412 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11a8c414 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8c417 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8c41a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a8c41d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8c420 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8c423 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a8c426 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8c429 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c42c jb 0x11a8c3fa */
  if (C.cf) goto L_11a8c3fa;
  /* 11a8c42e mov esp, ebp */
  ESP = (EBP);
  /* 11a8c430 pop ebp */
  EBP = (pop32());
  /* 11a8c431 ret  */
  ESPCHK(0x11a8c370u, _esp0);
  ESP += 4; return;
}

/* __ltoa @ 0x11a8c440 (63 bytes, 24 insns) */
void f_11a8c440(void) {
  FTRACE(0x11a8c440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8c440 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8c441 mov ebp, esp */
  EBP = (ESP);
  /* 11a8c443 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8c444 cmp dword ptr [ebp + 0x10], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c448 jne 0x11a8c459 */
  if (!C.zf) goto L_11a8c459;
  /* 11a8c44a cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c44e jge 0x11a8c459 */
  if ((C.sf==C.of)) goto L_11a8c459;
  /* 11a8c450 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11a8c457 jmp 0x11a8c460 */
  goto L_11a8c460;
L_11a8c459:;
  /* 11a8c459 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11a8c460:;
  /* 11a8c460 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8c463 push eax */
  push32((uint32_t)(EAX));
  /* 11a8c464 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8c467 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8c468 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8c46b push edx */
  push32((uint32_t)(EDX));
  /* 11a8c46c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8c46f push eax */
  push32((uint32_t)(EAX));
  /* 11a8c470 call 0x11a8c370 */
  push32(0x11a8c475u); f_11a8c370();
  /* 11a8c475 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8c478 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8c47b mov esp, ebp */
  ESP = (EBP);
  /* 11a8c47d pop ebp */
  EBP = (pop32());
  /* 11a8c47e ret  */
  ESPCHK(0x11a8c440u, _esp0);
  ESP += 4; return;
}

/* __ultoa @ 0x11a8c480 (30 bytes, 14 insns) */
void f_11a8c480(void) {
  FTRACE(0x11a8c480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8c480 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8c481 mov ebp, esp */
  EBP = (ESP);
  /* 11a8c483 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8c485 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8c488 push eax */
  push32((uint32_t)(EAX));
  /* 11a8c489 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8c48c push ecx */
  push32((uint32_t)(ECX));
  /* 11a8c48d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8c490 push edx */
  push32((uint32_t)(EDX));
  /* 11a8c491 call 0x11a8c370 */
  push32(0x11a8c496u); f_11a8c370();
  /* 11a8c496 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8c499 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8c49c pop ebp */
  EBP = (pop32());
  /* 11a8c49d ret  */
  ESPCHK(0x11a8c480u, _esp0);
  ESP += 4; return;
}

/* __i64toa @ 0x11a8c4a0 (72 bytes, 28 insns) */
void f_11a8c4a0(void) {
  FTRACE(0x11a8c4a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8c4a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8c4a1 mov ebp, esp */
  EBP = (ESP);
  /* 11a8c4a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8c4a4 cmp dword ptr [ebp + 0x14], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c4a8 jne 0x11a8c4c1 */
  if (!C.zf) goto L_11a8c4c1;
  /* 11a8c4aa cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c4ae jg 0x11a8c4c1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a8c4c1;
  /* 11a8c4b0 jl 0x11a8c4b8 */
  if ((C.sf!=C.of)) goto L_11a8c4b8;
  /* 11a8c4b2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c4b6 jae 0x11a8c4c1 */
  if (!C.cf) goto L_11a8c4c1;
L_11a8c4b8:;
  /* 11a8c4b8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11a8c4bf jmp 0x11a8c4c8 */
  goto L_11a8c4c8;
L_11a8c4c1:;
  /* 11a8c4c1 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11a8c4c8:;
  /* 11a8c4c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8c4cb push eax */
  push32((uint32_t)(EAX));
  /* 11a8c4cc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a8c4cf push ecx */
  push32((uint32_t)(ECX));
  /* 11a8c4d0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8c4d3 push edx */
  push32((uint32_t)(EDX));
  /* 11a8c4d4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8c4d7 push eax */
  push32((uint32_t)(EAX));
  /* 11a8c4d8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8c4db push ecx */
  push32((uint32_t)(ECX));
  /* 11a8c4dc call 0x11a8c4f0 */
  push32(0x11a8c4e1u); f_11a8c4f0();
  /* 11a8c4e1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8c4e4 mov esp, ebp */
  ESP = (EBP);
  /* 11a8c4e6 pop ebp */
  EBP = (pop32());
  /* 11a8c4e7 ret  */
  ESPCHK(0x11a8c4a0u, _esp0);
  ESP += 4; return;
}

/* x64toa @ 0x11a8c4f0 (242 bytes, 91 insns) */
void f_11a8c4f0(void) {
  FTRACE(0x11a8c4f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8c4f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8c4f1 mov ebp, esp */
  EBP = (ESP);
  /* 11a8c4f3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8c4f6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8c4f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a8c4fc cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c500 je 0x11a8c524 */
  if (C.zf) goto L_11a8c524;
  /* 11a8c502 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8c505 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11a8c508 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8c50b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8c50e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a8c511 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8c514 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a8c516 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8c519 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8c51c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a8c51e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11a8c521 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11a8c524:;
  /* 11a8c524 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8c527 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11a8c52a:;
  /* 11a8c52a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a8c52d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a8c52f push ecx */
  push32((uint32_t)(ECX));
  /* 11a8c530 push eax */
  push32((uint32_t)(EAX));
  /* 11a8c531 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8c534 push edx */
  push32((uint32_t)(EDX));
  /* 11a8c535 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8c538 push eax */
  push32((uint32_t)(EAX));
  /* 11a8c539 call 0x11a8da30 */
  push32(0x11a8c53eu); f_11a8da30();
  /* 11a8c53e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11a8c541 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a8c544 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a8c546 push edx */
  push32((uint32_t)(EDX));
  /* 11a8c547 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8c548 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8c54b push eax */
  push32((uint32_t)(EAX));
  /* 11a8c54c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8c54f push ecx */
  push32((uint32_t)(ECX));
  /* 11a8c550 call 0x11a8d9c0 */
  push32(0x11a8c555u); f_11a8d9c0();
  /* 11a8c555 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11a8c558 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11a8c55b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c55f jbe 0x11a8c577 */
  if ((C.cf||C.zf)) goto L_11a8c577;
  /* 11a8c561 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8c564 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8c567 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8c56a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11a8c56c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8c56f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8c572 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a8c575 jmp 0x11a8c58b */
  goto L_11a8c58b;
L_11a8c577:;
  /* 11a8c577 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8c57a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8c57d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8c580 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11a8c582 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8c585 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8c588 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11a8c58b:;
  /* 11a8c58b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c58f ja 0x11a8c52a */
  if ((!C.cf&&!C.zf)) goto L_11a8c52a;
  /* 11a8c591 jb 0x11a8c599 */
  if (C.cf) goto L_11a8c599;
  /* 11a8c593 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c597 ja 0x11a8c52a */
  if ((!C.cf&&!C.zf)) goto L_11a8c52a;
L_11a8c599:;
  /* 11a8c599 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8c59c mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11a8c59f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8c5a2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8c5a5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a8c5a8:;
  /* 11a8c5a8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8c5ab mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11a8c5ad mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 11a8c5b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8c5b3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8c5b6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11a8c5b8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11a8c5ba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8c5bd mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 11a8c5c0 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11a8c5c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8c5c5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8c5c8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a8c5cb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8c5ce add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8c5d1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a8c5d4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8c5d7 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c5da jb 0x11a8c5a8 */
  if (C.cf) goto L_11a8c5a8;
  /* 11a8c5dc mov esp, ebp */
  ESP = (EBP);
  /* 11a8c5de pop ebp */
  EBP = (pop32());
  /* 11a8c5df ret 0x14 */
  ESPCHK(0x11a8c4f0u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x11a8c5f0 (31 bytes, 15 insns) */
void f_11a8c5f0(void) {
  FTRACE(0x11a8c5f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8c5f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8c5f1 mov ebp, esp */
  EBP = (ESP);
  /* 11a8c5f3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8c5f5 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a8c5f8 push eax */
  push32((uint32_t)(EAX));
  /* 11a8c5f9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8c5fc push ecx */
  push32((uint32_t)(ECX));
  /* 11a8c5fd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8c600 push edx */
  push32((uint32_t)(EDX));
  /* 11a8c601 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8c604 push eax */
  push32((uint32_t)(EAX));
  /* 11a8c605 call 0x11a8c4f0 */
  push32(0x11a8c60au); f_11a8c4f0();
  /* 11a8c60a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8c60d pop ebp */
  EBP = (pop32());
  /* 11a8c60e ret  */
  ESPCHK(0x11a8c5f0u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11a8c610 (123 bytes, 44 insns) */
void f_11a8c610(void) {
  FTRACE(0x11a8c610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8c610 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a8c614 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11a8c61a je 0x11a8c630 */
  if (C.zf) goto L_11a8c630;
L_11a8c61c:;
  /* 11a8c61c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11a8c61e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a8c61f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a8c621 je 0x11a8c663 */
  if (C.zf) goto L_11a8c663;
  /* 11a8c623 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11a8c629 jne 0x11a8c61c */
  if (!C.zf) goto L_11a8c61c;
  /* 11a8c62b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11a8c630:;
  /* 11a8c630 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11a8c632 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11a8c637 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8c639 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8c63c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8c63e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8c641 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11a8c646 je 0x11a8c630 */
  if (C.zf) goto L_11a8c630;
  /* 11a8c648 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11a8c64b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a8c64d je 0x11a8c681 */
  if (C.zf) goto L_11a8c681;
  /* 11a8c64f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11a8c651 je 0x11a8c677 */
  if (C.zf) goto L_11a8c677;
  /* 11a8c653 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11a8c658 je 0x11a8c66d */
  if (C.zf) goto L_11a8c66d;
  /* 11a8c65a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11a8c65f je 0x11a8c663 */
  if (C.zf) goto L_11a8c663;
  /* 11a8c661 jmp 0x11a8c630 */
  goto L_11a8c630;
L_11a8c663:;
  /* 11a8c663 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11a8c666 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a8c66a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8c66c ret  */
  ESPCHK(0x11a8c610u, _esp0);
  ESP += 4; return;
L_11a8c66d:;
  /* 11a8c66d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11a8c670 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a8c674 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8c676 ret  */
  ESPCHK(0x11a8c610u, _esp0);
  ESP += 4; return;
L_11a8c677:;
  /* 11a8c677 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 11a8c67a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a8c67e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8c680 ret  */
  ESPCHK(0x11a8c610u, _esp0);
  ESP += 4; return;
L_11a8c681:;
  /* 11a8c681 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11a8c684 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a8c688 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8c68a ret  */
  ESPCHK(0x11a8c610u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c690 @ 0x11a8c690 (249 bytes, 93 insns) */
void f_11a8c690(void) {
  FTRACE(0x11a8c690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8c690 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8c691 mov ebp, esp */
  EBP = (ESP);
  /* 11a8c693 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8c696 push ebx */
  push32((uint32_t)(EBX));
  /* 11a8c697 push esi */
  push32((uint32_t)(ESI));
  /* 11a8c698 push edi */
  push32((uint32_t)(EDI));
  /* 11a8c699 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11a8c69c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11a8c69f lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 11a8c6a2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_11a8c6a5:;
  /* 11a8c6a5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c6a9 jne 0x11a8c6c9 */
  if (!C.zf) goto L_11a8c6c9;
  /* 11a8c6ab push 0x11ab4410 */
  push32((uint32_t)(0x11ab4410u));
  /* 11a8c6b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8c6b2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11a8c6b4 push 0x11ab4404 */
  push32((uint32_t)(0x11ab4404u));
  /* 11a8c6b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a8c6bb call 0x11a868a0 */
  push32(0x11a8c6c0u); f_11a868a0();
  /* 11a8c6c0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8c6c3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c6c6 jne 0x11a8c6c9 */
  if (!C.zf) goto L_11a8c6c9;
  /* 11a8c6c8 int3  */
  x86_unimpl("int3 @ 0x11a8c6c8");
L_11a8c6c9:;
  /* 11a8c6c9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a8c6cb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a8c6cd jne 0x11a8c6a5 */
  if (!C.zf) goto L_11a8c6a5;
L_11a8c6cf:;
  /* 11a8c6cf cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c6d3 jne 0x11a8c6f3 */
  if (!C.zf) goto L_11a8c6f3;
  /* 11a8c6d5 push 0x11ab43f4 */
  push32((uint32_t)(0x11ab43f4u));
  /* 11a8c6da push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8c6dc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11a8c6de push 0x11ab4404 */
  push32((uint32_t)(0x11ab4404u));
  /* 11a8c6e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a8c6e5 call 0x11a868a0 */
  push32(0x11a8c6eau); f_11a868a0();
  /* 11a8c6ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8c6ed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c6f0 jne 0x11a8c6f3 */
  if (!C.zf) goto L_11a8c6f3;
  /* 11a8c6f2 int3  */
  x86_unimpl("int3 @ 0x11a8c6f2");
L_11a8c6f3:;
  /* 11a8c6f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8c6f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8c6f7 jne 0x11a8c6cf */
  if (!C.zf) goto L_11a8c6cf;
  /* 11a8c6f9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a8c6fc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 11a8c703 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a8c706 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8c709 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11a8c70c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a8c70f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8c712 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11a8c714 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a8c717 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8c71a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11a8c71d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a8c720 push edx */
  push32((uint32_t)(EDX));
  /* 11a8c721 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8c724 push eax */
  push32((uint32_t)(EAX));
  /* 11a8c725 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a8c728 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8c729 call 0x11a871c0 */
  push32(0x11a8c72eu); f_11a871c0();
  /* 11a8c72e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8c731 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11a8c734 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a8c737 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a8c73a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8c73d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a8c740 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11a8c743 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a8c746 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c74a jl 0x11a8c76e */
  if ((C.sf!=C.of)) goto L_11a8c76e;
  /* 11a8c74c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a8c74f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a8c751 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11a8c754 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a8c756 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a8c75c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11a8c75f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a8c762 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a8c764 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8c767 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a8c76a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11a8c76c jmp 0x11a8c77f */
  goto L_11a8c77f;
L_11a8c76e:;
  /* 11a8c76e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a8c771 push eax */
  push32((uint32_t)(EAX));
  /* 11a8c772 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8c774 call 0x11a86f40 */
  push32(0x11a8c779u); f_11a86f40();
  /* 11a8c779 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8c77c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_11a8c77f:;
  /* 11a8c77f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a8c782 pop edi */
  EDI = (pop32());
  /* 11a8c783 pop esi */
  ESI = (pop32());
  /* 11a8c784 pop ebx */
  EBX = (pop32());
  /* 11a8c785 mov esp, ebp */
  ESP = (EBP);
  /* 11a8c787 pop ebp */
  EBP = (pop32());
  /* 11a8c788 ret  */
  ESPCHK(0x11a8c690u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c790 @ 0x11a8c790 (7 bytes, 3 insns) */
void f_11a8c790(void) {
  FTRACE(0x11a8c790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8c790 push edi */
  push32((uint32_t)(EDI));
  /* 11a8c791 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11a8c795 jmp 0x11a8c801 */
  jmp_ind(0x11a8c801u); return;
}

/* FUN_1000c7a0 @ 0x11a8c7a0 (224 bytes, 84 insns) */
void f_11a8c7a0(void) {
  FTRACE(0x11a8c7a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8c7a0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a8c7a4 push edi */
  push32((uint32_t)(EDI));
  /* 11a8c7a5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11a8c7ab je 0x11a8c7bc */
  if (C.zf) goto L_11a8c7bc;
L_11a8c7ad:;
  /* 11a8c7ad mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11a8c7af inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a8c7b0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a8c7b2 je 0x11a8c7ef */
  if (C.zf) goto L_11a8c7ef;
  /* 11a8c7b4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11a8c7ba jne 0x11a8c7ad */
  if (!C.zf) goto L_11a8c7ad;
L_11a8c7bc:;
  /* 11a8c7bc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11a8c7be mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11a8c7c3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8c7c5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8c7c8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8c7ca add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8c7cd test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11a8c7d2 je 0x11a8c7bc */
  if (C.zf) goto L_11a8c7bc;
  /* 11a8c7d4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11a8c7d7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a8c7d9 je 0x11a8c7fe */
  if (C.zf) goto L_11a8c7fe;
  /* 11a8c7db test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11a8c7dd je 0x11a8c7f9 */
  if (C.zf) goto L_11a8c7f9;
  /* 11a8c7df test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11a8c7e4 je 0x11a8c7f4 */
  if (C.zf) goto L_11a8c7f4;
  /* 11a8c7e6 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11a8c7eb je 0x11a8c7ef */
  if (C.zf) goto L_11a8c7ef;
  /* 11a8c7ed jmp 0x11a8c7bc */
  goto L_11a8c7bc;
L_11a8c7ef:;
  /* 11a8c7ef lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11a8c7f2 jmp 0x11a8c801 */
  goto L_11a8c801;
L_11a8c7f4:;
  /* 11a8c7f4 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11a8c7f7 jmp 0x11a8c801 */
  goto L_11a8c801;
L_11a8c7f9:;
  /* 11a8c7f9 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 11a8c7fc jmp 0x11a8c801 */
  goto L_11a8c801;
L_11a8c7fe:;
  /* 11a8c7fe lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11a8c801:;
  /* 11a8c801 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11a8c805 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11a8c80b je 0x11a8c826 */
  if (C.zf) goto L_11a8c826;
L_11a8c80d:;
  /* 11a8c80d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11a8c80f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11a8c810 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a8c812 je 0x11a8c878 */
  if (C.zf) goto L_11a8c878;
  /* 11a8c814 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11a8c816 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a8c817 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11a8c81d jne 0x11a8c80d */
  if (!C.zf) goto L_11a8c80d;
  /* 11a8c81f jmp 0x11a8c826 */
  goto L_11a8c826;
L_11a8c821:;
  /* 11a8c821 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11a8c823 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11a8c826:;
  /* 11a8c826 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11a8c82b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11a8c82d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8c82f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8c832 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8c834 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a8c836 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8c839 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11a8c83e je 0x11a8c821 */
  if (C.zf) goto L_11a8c821;
  /* 11a8c840 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a8c842 je 0x11a8c878 */
  if (C.zf) goto L_11a8c878;
  /* 11a8c844 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11a8c846 je 0x11a8c86f */
  if (C.zf) goto L_11a8c86f;
  /* 11a8c848 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11a8c84e je 0x11a8c862 */
  if (C.zf) goto L_11a8c862;
  /* 11a8c850 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11a8c856 je 0x11a8c85a */
  if (C.zf) goto L_11a8c85a;
  /* 11a8c858 jmp 0x11a8c821 */
  goto L_11a8c821;
L_11a8c85a:;
  /* 11a8c85a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11a8c85c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a8c860 pop edi */
  EDI = (pop32());
  /* 11a8c861 ret  */
  ESPCHK(0x11a8c7a0u, _esp0);
  ESP += 4; return;
L_11a8c862:;
  /* 11a8c862 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11a8c865 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a8c869 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 11a8c86d pop edi */
  EDI = (pop32());
  /* 11a8c86e ret  */
  ESPCHK(0x11a8c7a0u, _esp0);
  ESP += 4; return;
L_11a8c86f:;
  /* 11a8c86f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11a8c872 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a8c876 pop edi */
  EDI = (pop32());
  /* 11a8c877 ret  */
  ESPCHK(0x11a8c7a0u, _esp0);
  ESP += 4; return;
L_11a8c878:;
  /* 11a8c878 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11a8c87a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a8c87e pop edi */
  EDI = (pop32());
  /* 11a8c87f ret  */
  ESPCHK(0x11a8c7a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c880 @ 0x11a8c880 (243 bytes, 91 insns) */
void f_11a8c880(void) {
  FTRACE(0x11a8c880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8c880 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8c881 mov ebp, esp */
  EBP = (ESP);
  /* 11a8c883 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8c886 push ebx */
  push32((uint32_t)(EBX));
  /* 11a8c887 push esi */
  push32((uint32_t)(ESI));
  /* 11a8c888 push edi */
  push32((uint32_t)(EDI));
  /* 11a8c889 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11a8c88c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11a8c88f:;
  /* 11a8c88f cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c893 jne 0x11a8c8b3 */
  if (!C.zf) goto L_11a8c8b3;
  /* 11a8c895 push 0x11ab4410 */
  push32((uint32_t)(0x11ab4410u));
  /* 11a8c89a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8c89c push 0x5a */
  push32((uint32_t)(0x5au));
  /* 11a8c89e push 0x11ab5228 */
  push32((uint32_t)(0x11ab5228u));
  /* 11a8c8a3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a8c8a5 call 0x11a868a0 */
  push32(0x11a8c8aau); f_11a868a0();
  /* 11a8c8aa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8c8ad cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c8b0 jne 0x11a8c8b3 */
  if (!C.zf) goto L_11a8c8b3;
  /* 11a8c8b2 int3  */
  x86_unimpl("int3 @ 0x11a8c8b2");
L_11a8c8b3:;
  /* 11a8c8b3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a8c8b5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a8c8b7 jne 0x11a8c88f */
  if (!C.zf) goto L_11a8c88f;
L_11a8c8b9:;
  /* 11a8c8b9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c8bd jne 0x11a8c8dd */
  if (!C.zf) goto L_11a8c8dd;
  /* 11a8c8bf push 0x11ab43f4 */
  push32((uint32_t)(0x11ab43f4u));
  /* 11a8c8c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8c8c6 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 11a8c8c8 push 0x11ab5228 */
  push32((uint32_t)(0x11ab5228u));
  /* 11a8c8cd push 2 */
  push32((uint32_t)(0x2u));
  /* 11a8c8cf call 0x11a868a0 */
  push32(0x11a8c8d4u); f_11a868a0();
  /* 11a8c8d4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8c8d7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c8da jne 0x11a8c8dd */
  if (!C.zf) goto L_11a8c8dd;
  /* 11a8c8dc int3  */
  x86_unimpl("int3 @ 0x11a8c8dc");
L_11a8c8dd:;
  /* 11a8c8dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a8c8df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a8c8e1 jne 0x11a8c8b9 */
  if (!C.zf) goto L_11a8c8b9;
  /* 11a8c8e3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a8c8e6 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 11a8c8ed mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a8c8f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8c8f3 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11a8c8f6 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a8c8f9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8c8fc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11a8c8fe mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a8c901 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8c904 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11a8c907 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a8c90a push ecx */
  push32((uint32_t)(ECX));
  /* 11a8c90b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8c90e push edx */
  push32((uint32_t)(EDX));
  /* 11a8c90f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a8c912 push eax */
  push32((uint32_t)(EAX));
  /* 11a8c913 call 0x11a871c0 */
  push32(0x11a8c918u); f_11a871c0();
  /* 11a8c918 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8c91b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11a8c91e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a8c921 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a8c924 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8c927 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a8c92a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11a8c92d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a8c930 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c934 jl 0x11a8c958 */
  if ((C.sf!=C.of)) goto L_11a8c958;
  /* 11a8c936 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a8c939 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a8c93b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11a8c93e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a8c940 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a8c946 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11a8c949 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a8c94c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a8c94e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8c951 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a8c954 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11a8c956 jmp 0x11a8c969 */
  goto L_11a8c969;
L_11a8c958:;
  /* 11a8c958 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a8c95b push edx */
  push32((uint32_t)(EDX));
  /* 11a8c95c push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8c95e call 0x11a86f40 */
  push32(0x11a8c963u); f_11a86f40();
  /* 11a8c963 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8c966 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_11a8c969:;
  /* 11a8c969 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a8c96c pop edi */
  EDI = (pop32());
  /* 11a8c96d pop esi */
  ESI = (pop32());
  /* 11a8c96e pop ebx */
  EBX = (pop32());
  /* 11a8c96f mov esp, ebp */
  ESP = (EBP);
  /* 11a8c971 pop ebp */
  EBP = (pop32());
  /* 11a8c972 ret  */
  ESPCHK(0x11a8c880u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c980 @ 0x11a8c980 (47 bytes, 17 insns) */
void f_11a8c980(void) {
  FTRACE(0x11a8c980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8c980 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8c981 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c986 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 11a8c98a jb 0x11a8c9a0 */
  if (C.cf) goto L_11a8c9a0;
L_11a8c98c:;
  /* 11a8c98c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8c992 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8c997 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11a8c999 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c99e jae 0x11a8c98c */
  if (!C.cf) goto L_11a8c98c;
L_11a8c9a0:;
  /* 11a8c9a0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8c9a2 mov eax, esp */
  EAX = (ESP);
  /* 11a8c9a4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11a8c9a6 mov esp, ecx */
  ESP = (ECX);
  /* 11a8c9a8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a8c9aa mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11a8c9ad push eax */
  push32((uint32_t)(EAX));
  /* 11a8c9ae ret  */
  ESPCHK(0x11a8c980u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c9b0 @ 0x11a8c9b0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_11a8c9b0(void) {
  FTRACE(0x11a8c9b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8c9b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8c9b1 mov ebp, esp */
  EBP = (ESP);
  /* 11a8c9b3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8c9b6 push esi */
  push32((uint32_t)(ESI));
  /* 11a8c9b7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c9bb je 0x11a8c9c3 */
  if (C.zf) goto L_11a8c9c3;
  /* 11a8c9bd cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c9c1 jne 0x11a8c9c8 */
  if (!C.zf) goto L_11a8c9c8;
L_11a8c9c3:;
  /* 11a8c9c3 jmp 0x11a8cb98 */
  goto L_11a8cb98;
L_11a8c9c8:;
  /* 11a8c9c8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c9cc je 0x11a8c9e4 */
  if (C.zf) goto L_11a8c9e4;
  /* 11a8c9ce cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c9d2 je 0x11a8c9e4 */
  if (C.zf) goto L_11a8c9e4;
  /* 11a8c9d4 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c9d8 je 0x11a8c9e4 */
  if (C.zf) goto L_11a8c9e4;
  /* 11a8c9da cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c9de jne 0x11a8cac1 */
  if (!C.zf) goto L_11a8cac1;
L_11a8c9e4:;
  /* 11a8c9e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a8c9e6 call 0x11a8f2d0 */
  push32(0x11a8c9ebu); f_11a8f2d0();
  /* 11a8c9eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8c9ee cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c9f2 je 0x11a8c9fa */
  if (C.zf) goto L_11a8c9fa;
  /* 11a8c9f4 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8c9f8 jne 0x11a8ca3f */
  if (!C.zf) goto L_11a8ca3f;
L_11a8c9fa:;
  /* 11a8c9fa cmp dword ptr [0x11aba234], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8ca01 jne 0x11a8ca3f */
  if (!C.zf) goto L_11a8ca3f;
  /* 11a8ca03 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a8ca05 push 0x11a8cbe0 */
  push32((uint32_t)(0x11a8cbe0u));
  /* 11a8ca0a call dword ptr [0x11abc358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc358))), 0x11a8ca10u);
  /* 11a8ca10 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8ca13 jne 0x11a8ca21 */
  if (!C.zf) goto L_11a8ca21;
  /* 11a8ca15 mov dword ptr [0x11aba234], 1 */
  w32((uint32_t)(0x11aba234), (0x1u));
  /* 11a8ca1f jmp 0x11a8ca3f */
  goto L_11a8ca3f;
L_11a8ca21:;
  /* 11a8ca21 call dword ptr [0x11abc3d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3d4))), 0x11a8ca27u);
  /* 11a8ca27 mov esi, eax */
  ESI = (EAX);
  /* 11a8ca29 call 0x11a92380 */
  push32(0x11a8ca2eu); f_11a92380();
  /* 11a8ca2e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 11a8ca30 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a8ca32 call 0x11a8f370 */
  push32(0x11a8ca37u); f_11a8f370();
  /* 11a8ca37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ca3a jmp 0x11a8cb98 */
  goto L_11a8cb98;
L_11a8ca3f:;
  /* 11a8ca3f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8ca42 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11a8ca45 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a8ca48 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8ca4b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11a8ca4e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8ca52 ja 0x11a8cab2 */
  if ((!C.cf&&!C.zf)) goto L_11a8cab2;
  /* 11a8ca54 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a8ca57 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a8ca59 mov dl, byte ptr [eax + 0x11a8cbbf] */
  DL = (r8((uint32_t)(EAX + 0x11a8cbbf)));
  /* 11a8ca5f jmp dword ptr [edx*4 + 0x11a8cbab] */
  switch (EDX) {
    case 0: goto L_11a8ca66;
    case 1: goto L_11a8caa0;
    case 2: goto L_11a8ca7a;
    case 3: goto L_11a8ca8d;
    case 4: goto L_11a8cab2;
    default: x86_unimpl("switch@0x11a8ca5f out of table"); return;
  }
L_11a8ca66:;
  /* 11a8ca66 mov ecx, dword ptr [0x11aba224] */
  ECX = (r32((uint32_t)(0x11aba224)));
  /* 11a8ca6c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a8ca6f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8ca72 mov dword ptr [0x11aba224], edx */
  w32((uint32_t)(0x11aba224), (EDX));
  /* 11a8ca78 jmp 0x11a8cab2 */
  goto L_11a8cab2;
L_11a8ca7a:;
  /* 11a8ca7a mov eax, dword ptr [0x11aba228] */
  EAX = (r32((uint32_t)(0x11aba228)));
  /* 11a8ca7f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11a8ca82 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8ca85 mov dword ptr [0x11aba228], ecx */
  w32((uint32_t)(0x11aba228), (ECX));
  /* 11a8ca8b jmp 0x11a8cab2 */
  goto L_11a8cab2;
L_11a8ca8d:;
  /* 11a8ca8d mov edx, dword ptr [0x11aba22c] */
  EDX = (r32((uint32_t)(0x11aba22c)));
  /* 11a8ca93 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11a8ca96 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8ca99 mov dword ptr [0x11aba22c], eax */
  w32((uint32_t)(0x11aba22c), (EAX));
  /* 11a8ca9e jmp 0x11a8cab2 */
  goto L_11a8cab2;
L_11a8caa0:;
  /* 11a8caa0 mov ecx, dword ptr [0x11aba230] */
  ECX = (r32((uint32_t)(0x11aba230)));
  /* 11a8caa6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a8caa9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8caac mov dword ptr [0x11aba230], edx */
  w32((uint32_t)(0x11aba230), (EDX));
L_11a8cab2:;
  /* 11a8cab2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a8cab4 call 0x11a8f370 */
  push32(0x11a8cab9u); f_11a8f370();
  /* 11a8cab9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8cabc jmp 0x11a8cb93 */
  goto L_11a8cb93;
L_11a8cac1:;
  /* 11a8cac1 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8cac5 je 0x11a8cad8 */
  if (C.zf) goto L_11a8cad8;
  /* 11a8cac7 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8cacb je 0x11a8cad8 */
  if (C.zf) goto L_11a8cad8;
  /* 11a8cacd cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8cad1 je 0x11a8cad8 */
  if (C.zf) goto L_11a8cad8;
  /* 11a8cad3 jmp 0x11a8cb98 */
  goto L_11a8cb98;
L_11a8cad8:;
  /* 11a8cad8 call 0x11a89220 */
  push32(0x11a8caddu); f_11a89220();
  /* 11a8cadd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a8cae0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8cae3 cmp dword ptr [eax + 0x50], 0x11ab81d0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x11ab81d0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8caea jne 0x11a8cb35 */
  if (!C.zf) goto L_11a8cb35;
  /* 11a8caec push 0x133 */
  push32((uint32_t)(0x133u));
  /* 11a8caf1 push 0x11ab5234 */
  push32((uint32_t)(0x11ab5234u));
  /* 11a8caf6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a8caf8 mov ecx, dword ptr [0x11ab8250] */
  ECX = (r32((uint32_t)(0x11ab8250)));
  /* 11a8cafe push ecx */
  push32((uint32_t)(ECX));
  /* 11a8caff call 0x11a897e0 */
  push32(0x11a8cb04u); f_11a897e0();
  /* 11a8cb04 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8cb07 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8cb0a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 11a8cb0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8cb10 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8cb14 je 0x11a8cb33 */
  if (C.zf) goto L_11a8cb33;
  /* 11a8cb16 mov ecx, dword ptr [0x11ab8250] */
  ECX = (r32((uint32_t)(0x11ab8250)));
  /* 11a8cb1c push ecx */
  push32((uint32_t)(ECX));
  /* 11a8cb1d push 0x11ab81d0 */
  push32((uint32_t)(0x11ab81d0u));
  /* 11a8cb22 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8cb25 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 11a8cb28 push eax */
  push32((uint32_t)(EAX));
  /* 11a8cb29 call 0x11a91f90 */
  push32(0x11a8cb2eu); f_11a91f90();
  /* 11a8cb2e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8cb31 jmp 0x11a8cb35 */
  goto L_11a8cb35;
L_11a8cb33:;
  /* 11a8cb33 jmp 0x11a8cb98 */
  goto L_11a8cb98;
L_11a8cb35:;
  /* 11a8cb35 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8cb38 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11a8cb3b push edx */
  push32((uint32_t)(EDX));
  /* 11a8cb3c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8cb3f push eax */
  push32((uint32_t)(EAX));
  /* 11a8cb40 call 0x11a8cec0 */
  push32(0x11a8cb45u); f_11a8cec0();
  /* 11a8cb45 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8cb48 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a8cb4b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8cb4f jne 0x11a8cb53 */
  if (!C.zf) goto L_11a8cb53;
  /* 11a8cb51 jmp 0x11a8cb98 */
  goto L_11a8cb98;
L_11a8cb53:;
  /* 11a8cb53 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8cb56 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11a8cb59 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11a8cb5c:;
  /* 11a8cb5c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8cb5f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11a8cb62 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8cb65 jne 0x11a8cb93 */
  if (!C.zf) goto L_11a8cb93;
  /* 11a8cb67 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8cb6a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8cb6d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11a8cb70 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8cb73 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8cb76 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a8cb79 mov edx, dword ptr [0x11ab8254] */
  EDX = (r32((uint32_t)(0x11ab8254)));
  /* 11a8cb7f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a8cb82 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8cb85 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11a8cb88 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8cb8a cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8cb8d jb 0x11a8cb91 */
  if (C.cf) goto L_11a8cb91;
  /* 11a8cb8f jmp 0x11a8cb93 */
  goto L_11a8cb93;
L_11a8cb91:;
  /* 11a8cb91 jmp 0x11a8cb5c */
  goto L_11a8cb5c;
L_11a8cb93:;
  /* 11a8cb93 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8cb96 jmp 0x11a8cba6 */
  goto L_11a8cba6;
L_11a8cb98:;
  /* 11a8cb98 call 0x11a92370 */
  push32(0x11a8cb9du); f_11a92370();
  /* 11a8cb9d mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 11a8cba3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11a8cba6:;
  /* 11a8cba6 pop esi */
  ESI = (pop32());
  /* 11a8cba7 mov esp, ebp */
  ESP = (EBP);
  /* 11a8cba9 pop ebp */
  EBP = (pop32());
  /* 11a8cbaa ret  */
  ESPCHK(0x11a8c9b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cbe0 @ 0x11a8cbe0 (146 bytes, 45 insns) */
void f_11a8cbe0(void) {
  FTRACE(0x11a8cbe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8cbe0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8cbe1 mov ebp, esp */
  EBP = (ESP);
  /* 11a8cbe3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8cbe6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a8cbe8 call 0x11a8f2d0 */
  push32(0x11a8cbedu); f_11a8f2d0();
  /* 11a8cbed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8cbf0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8cbf4 jne 0x11a8cc0e */
  if (!C.zf) goto L_11a8cc0e;
  /* 11a8cbf6 mov dword ptr [ebp - 8], 0x11aba224 */
  w32((uint32_t)(EBP + -0x8), (0x11aba224u));
  /* 11a8cbfd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8cc00 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a8cc02 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a8cc05 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11a8cc0c jmp 0x11a8cc24 */
  goto L_11a8cc24;
L_11a8cc0e:;
  /* 11a8cc0e mov dword ptr [ebp - 8], 0x11aba228 */
  w32((uint32_t)(EBP + -0x8), (0x11aba228u));
  /* 11a8cc15 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8cc18 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a8cc1a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11a8cc1d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_11a8cc24:;
  /* 11a8cc24 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8cc28 jne 0x11a8cc38 */
  if (!C.zf) goto L_11a8cc38;
  /* 11a8cc2a push 1 */
  push32((uint32_t)(0x1u));
  /* 11a8cc2c call 0x11a8f370 */
  push32(0x11a8cc31u); f_11a8f370();
  /* 11a8cc31 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8cc34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8cc36 jmp 0x11a8cc6c */
  goto L_11a8cc6c;
L_11a8cc38:;
  /* 11a8cc38 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8cc3c je 0x11a8cc5d */
  if (C.zf) goto L_11a8cc5d;
  /* 11a8cc3e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8cc41 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11a8cc47 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a8cc49 call 0x11a8f370 */
  push32(0x11a8cc4eu); f_11a8f370();
  /* 11a8cc4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8cc51 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8cc54 push edx */
  push32((uint32_t)(EDX));
  /* 11a8cc55 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x11a8cc58u);
  /* 11a8cc58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8cc5b jmp 0x11a8cc67 */
  goto L_11a8cc67;
L_11a8cc5d:;
  /* 11a8cc5d push 1 */
  push32((uint32_t)(0x1u));
  /* 11a8cc5f call 0x11a8f370 */
  push32(0x11a8cc64u); f_11a8f370();
  /* 11a8cc64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a8cc67:;
  /* 11a8cc67 mov eax, 1 */
  EAX = (0x1u);
L_11a8cc6c:;
  /* 11a8cc6c mov esp, ebp */
  ESP = (EBP);
  /* 11a8cc6e pop ebp */
  EBP = (pop32());
  /* 11a8cc6f ret 4 */
  ESPCHK(0x11a8cbe0u, _esp0);
  ESP += 8; return;
}

/* FUN_1000cc80 @ 0x11a8cc80 (522 bytes, 162 insns) [1 switch table(s)] */
void f_11a8cc80(void) {
  FTRACE(0x11a8cc80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8cc80 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8cc81 mov ebp, esp */
  EBP = (ESP);
  /* 11a8cc83 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8cc86 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11a8cc8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8cc90 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11a8cc93 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a8cc96 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8cc99 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11a8cc9c cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8cca0 ja 0x11a8cd4e */
  if ((!C.cf&&!C.zf)) goto L_11a8cd4e;
  /* 11a8cca6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a8cca9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a8ccab mov dl, byte ptr [eax + 0x11a8cea2] */
  DL = (r8((uint32_t)(EAX + 0x11a8cea2)));
  /* 11a8ccb1 jmp dword ptr [edx*4 + 0x11a8ce8a] */
  switch (EDX) {
    case 0: goto L_11a8ccb8;
    case 1: goto L_11a8cd23;
    case 2: goto L_11a8cd09;
    case 3: goto L_11a8ccd5;
    case 4: goto L_11a8ccef;
    case 5: goto L_11a8cd4e;
    default: x86_unimpl("switch@0x11a8ccb1 out of table"); return;
  }
L_11a8ccb8:;
  /* 11a8ccb8 mov dword ptr [ebp - 0x18], 0x11aba224 */
  w32((uint32_t)(EBP + -0x18), (0x11aba224u));
  /* 11a8ccbf mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a8ccc2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a8ccc4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11a8ccc7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8ccca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8cccd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11a8ccd0 jmp 0x11a8cd56 */
  goto L_11a8cd56;
L_11a8ccd5:;
  /* 11a8ccd5 mov dword ptr [ebp - 0x18], 0x11aba228 */
  w32((uint32_t)(EBP + -0x18), (0x11aba228u));
  /* 11a8ccdc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a8ccdf mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a8cce1 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11a8cce4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8cce7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ccea mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11a8cced jmp 0x11a8cd56 */
  goto L_11a8cd56;
L_11a8ccef:;
  /* 11a8ccef mov dword ptr [ebp - 0x18], 0x11aba22c */
  w32((uint32_t)(EBP + -0x18), (0x11aba22cu));
  /* 11a8ccf6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a8ccf9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a8ccfb mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11a8ccfe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8cd01 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8cd04 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11a8cd07 jmp 0x11a8cd56 */
  goto L_11a8cd56;
L_11a8cd09:;
  /* 11a8cd09 mov dword ptr [ebp - 0x18], 0x11aba230 */
  w32((uint32_t)(EBP + -0x18), (0x11aba230u));
  /* 11a8cd10 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a8cd13 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a8cd15 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11a8cd18 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8cd1b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8cd1e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11a8cd21 jmp 0x11a8cd56 */
  goto L_11a8cd56;
L_11a8cd23:;
  /* 11a8cd23 call 0x11a89220 */
  push32(0x11a8cd28u); f_11a89220();
  /* 11a8cd28 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a8cd2b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8cd2e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11a8cd31 push edx */
  push32((uint32_t)(EDX));
  /* 11a8cd32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8cd35 push eax */
  push32((uint32_t)(EAX));
  /* 11a8cd36 call 0x11a8cec0 */
  push32(0x11a8cd3bu); f_11a8cec0();
  /* 11a8cd3b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8cd3e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8cd41 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11a8cd44 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a8cd47 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a8cd49 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11a8cd4c jmp 0x11a8cd56 */
  goto L_11a8cd56;
L_11a8cd4e:;
  /* 11a8cd4e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8cd51 jmp 0x11a8ce86 */
  goto L_11a8ce86;
L_11a8cd56:;
  /* 11a8cd56 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8cd5a je 0x11a8cd66 */
  if (C.zf) goto L_11a8cd66;
  /* 11a8cd5c push 1 */
  push32((uint32_t)(0x1u));
  /* 11a8cd5e call 0x11a8f2d0 */
  push32(0x11a8cd63u); f_11a8f2d0();
  /* 11a8cd63 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a8cd66:;
  /* 11a8cd66 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8cd6a jne 0x11a8cd83 */
  if (!C.zf) goto L_11a8cd83;
  /* 11a8cd6c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8cd70 je 0x11a8cd7c */
  if (C.zf) goto L_11a8cd7c;
  /* 11a8cd72 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a8cd74 call 0x11a8f370 */
  push32(0x11a8cd79u); f_11a8f370();
  /* 11a8cd79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a8cd7c:;
  /* 11a8cd7c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8cd7e jmp 0x11a8ce86 */
  goto L_11a8ce86;
L_11a8cd83:;
  /* 11a8cd83 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8cd87 jne 0x11a8cda0 */
  if (!C.zf) goto L_11a8cda0;
  /* 11a8cd89 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8cd8d je 0x11a8cd99 */
  if (C.zf) goto L_11a8cd99;
  /* 11a8cd8f push 1 */
  push32((uint32_t)(0x1u));
  /* 11a8cd91 call 0x11a8f370 */
  push32(0x11a8cd96u); f_11a8f370();
  /* 11a8cd96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a8cd99:;
  /* 11a8cd99 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a8cd9b call 0x11a88fa0 */
  push32(0x11a8cda0u); f_11a88fa0();
L_11a8cda0:;
  /* 11a8cda0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8cda4 je 0x11a8cdb2 */
  if (C.zf) goto L_11a8cdb2;
  /* 11a8cda6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8cdaa je 0x11a8cdb2 */
  if (C.zf) goto L_11a8cdb2;
  /* 11a8cdac cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8cdb0 jne 0x11a8cdde */
  if (!C.zf) goto L_11a8cdde;
L_11a8cdb2:;
  /* 11a8cdb2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8cdb5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 11a8cdb8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11a8cdbb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8cdbe mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 11a8cdc5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8cdc9 jne 0x11a8cdde */
  if (!C.zf) goto L_11a8cdde;
  /* 11a8cdcb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8cdce mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 11a8cdd1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a8cdd4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8cdd7 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_11a8cdde:;
  /* 11a8cdde cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8cde2 jne 0x11a8ce20 */
  if (!C.zf) goto L_11a8ce20;
  /* 11a8cde4 mov eax, dword ptr [0x11ab8248] */
  EAX = (r32((uint32_t)(0x11ab8248)));
  /* 11a8cde9 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11a8cdec jmp 0x11a8cdf7 */
  goto L_11a8cdf7;
L_11a8cdee:;
  /* 11a8cdee mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a8cdf1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8cdf4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11a8cdf7:;
  /* 11a8cdf7 mov edx, dword ptr [0x11ab8248] */
  EDX = (r32((uint32_t)(0x11ab8248)));
  /* 11a8cdfd add edx, dword ptr [0x11ab824c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11ab824c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ce03 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8ce06 jge 0x11a8ce1e */
  if ((C.sf==C.of)) goto L_11a8ce1e;
  /* 11a8ce08 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a8ce0b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a8ce0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8ce11 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11a8ce14 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 11a8ce1c jmp 0x11a8cdee */
  goto L_11a8cdee;
L_11a8ce1e:;
  /* 11a8ce1e jmp 0x11a8ce29 */
  goto L_11a8ce29;
L_11a8ce20:;
  /* 11a8ce20 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a8ce23 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11a8ce29:;
  /* 11a8ce29 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8ce2d je 0x11a8ce39 */
  if (C.zf) goto L_11a8ce39;
  /* 11a8ce2f push 1 */
  push32((uint32_t)(0x1u));
  /* 11a8ce31 call 0x11a8f370 */
  push32(0x11a8ce36u); f_11a8f370();
  /* 11a8ce36 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a8ce39:;
  /* 11a8ce39 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8ce3d jne 0x11a8ce50 */
  if (!C.zf) goto L_11a8ce50;
  /* 11a8ce3f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8ce42 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 11a8ce45 push edx */
  push32((uint32_t)(EDX));
  /* 11a8ce46 push 8 */
  push32((uint32_t)(0x8u));
  /* 11a8ce48 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x11a8ce4bu);
  /* 11a8ce4b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ce4e jmp 0x11a8ce5a */
  goto L_11a8ce5a;
L_11a8ce50:;
  /* 11a8ce50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8ce53 push eax */
  push32((uint32_t)(EAX));
  /* 11a8ce54 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x11a8ce57u);
  /* 11a8ce57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a8ce5a:;
  /* 11a8ce5a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8ce5e je 0x11a8ce6c */
  if (C.zf) goto L_11a8ce6c;
  /* 11a8ce60 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8ce64 je 0x11a8ce6c */
  if (C.zf) goto L_11a8ce6c;
  /* 11a8ce66 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8ce6a jne 0x11a8ce84 */
  if (!C.zf) goto L_11a8ce84;
L_11a8ce6c:;
  /* 11a8ce6c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8ce6f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a8ce72 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 11a8ce75 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8ce79 jne 0x11a8ce84 */
  if (!C.zf) goto L_11a8ce84;
  /* 11a8ce7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8ce7e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8ce81 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_11a8ce84:;
  /* 11a8ce84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a8ce86:;
  /* 11a8ce86 mov esp, ebp */
  ESP = (EBP);
  /* 11a8ce88 pop ebp */
  EBP = (pop32());
  /* 11a8ce89 ret  */
  ESPCHK(0x11a8cc80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cec0 @ 0x11a8cec0 (91 bytes, 35 insns) */
void f_11a8cec0(void) {
  FTRACE(0x11a8cec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8cec0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8cec1 mov ebp, esp */
  EBP = (ESP);
  /* 11a8cec3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8cec4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8cec7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a8ceca:;
  /* 11a8ceca mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8cecd mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a8ced0 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8ced3 je 0x11a8cef3 */
  if (C.zf) goto L_11a8cef3;
  /* 11a8ced5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8ced8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8cedb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a8cede mov ecx, dword ptr [0x11ab8254] */
  ECX = (r32((uint32_t)(0x11ab8254)));
  /* 11a8cee4 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a8cee7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8ceea add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ceec cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8ceef jae 0x11a8cef3 */
  if (!C.cf) goto L_11a8cef3;
  /* 11a8cef1 jmp 0x11a8ceca */
  goto L_11a8ceca;
L_11a8cef3:;
  /* 11a8cef3 mov eax, dword ptr [0x11ab8254] */
  EAX = (r32((uint32_t)(0x11ab8254)));
  /* 11a8cef8 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a8cefb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8cefe add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8cf00 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8cf03 jae 0x11a8cf15 */
  if (!C.cf) goto L_11a8cf15;
  /* 11a8cf05 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8cf08 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a8cf0b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8cf0e jne 0x11a8cf15 */
  if (!C.zf) goto L_11a8cf15;
  /* 11a8cf10 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8cf13 jmp 0x11a8cf17 */
  goto L_11a8cf17;
L_11a8cf15:;
  /* 11a8cf15 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a8cf17:;
  /* 11a8cf17 mov esp, ebp */
  ESP = (EBP);
  /* 11a8cf19 pop ebp */
  EBP = (pop32());
  /* 11a8cf1a ret  */
  ESPCHK(0x11a8cec0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf20 @ 0x11a8cf20 (13 bytes, 6 insns) */
void f_11a8cf20(void) {
  FTRACE(0x11a8cf20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8cf20 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8cf21 mov ebp, esp */
  EBP = (ESP);
  /* 11a8cf23 call 0x11a89220 */
  push32(0x11a8cf28u); f_11a89220();
  /* 11a8cf28 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8cf2b pop ebp */
  EBP = (pop32());
  /* 11a8cf2c ret  */
  ESPCHK(0x11a8cf20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf30 @ 0x11a8cf30 (13 bytes, 6 insns) */
void f_11a8cf30(void) {
  FTRACE(0x11a8cf30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8cf30 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8cf31 mov ebp, esp */
  EBP = (ESP);
  /* 11a8cf33 call 0x11a89220 */
  push32(0x11a8cf38u); f_11a89220();
  /* 11a8cf38 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8cf3b pop ebp */
  EBP = (pop32());
  /* 11a8cf3c ret  */
  ESPCHK(0x11a8cf30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf40 @ 0x11a8cf40 (187 bytes, 54 insns) */
void f_11a8cf40(void) {
  FTRACE(0x11a8cf40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8cf40 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8cf41 mov ebp, esp */
  EBP = (ESP);
  /* 11a8cf43 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8cf46 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11a8cf4d cmp dword ptr [0x11aba238], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba238))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8cf54 jne 0x11a8cfb3 */
  if (!C.zf) goto L_11a8cfb3;
  /* 11a8cf56 push 0x11ab44ec */
  push32((uint32_t)(0x11ab44ecu));
  /* 11a8cf5b call dword ptr [0x11abc3a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3a0))), 0x11a8cf61u);
  /* 11a8cf61 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a8cf64 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8cf68 je 0x11a8cf87 */
  if (C.zf) goto L_11a8cf87;
  /* 11a8cf6a push 0x11ab5264 */
  push32((uint32_t)(0x11ab5264u));
  /* 11a8cf6f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8cf72 push eax */
  push32((uint32_t)(EAX));
  /* 11a8cf73 call dword ptr [0x11abc39c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc39c))), 0x11a8cf79u);
  /* 11a8cf79 mov dword ptr [0x11aba238], eax */
  w32((uint32_t)(0x11aba238), (EAX));
  /* 11a8cf7e cmp dword ptr [0x11aba238], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba238))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8cf85 jne 0x11a8cf8b */
  if (!C.zf) goto L_11a8cf8b;
L_11a8cf87:;
  /* 11a8cf87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8cf89 jmp 0x11a8cff7 */
  goto L_11a8cff7;
L_11a8cf8b:;
  /* 11a8cf8b push 0x11ab5254 */
  push32((uint32_t)(0x11ab5254u));
  /* 11a8cf90 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8cf93 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8cf94 call dword ptr [0x11abc39c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc39c))), 0x11a8cf9au);
  /* 11a8cf9a mov dword ptr [0x11aba23c], eax */
  w32((uint32_t)(0x11aba23c), (EAX));
  /* 11a8cf9f push 0x11ab5240 */
  push32((uint32_t)(0x11ab5240u));
  /* 11a8cfa4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8cfa7 push edx */
  push32((uint32_t)(EDX));
  /* 11a8cfa8 call dword ptr [0x11abc39c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc39c))), 0x11a8cfaeu);
  /* 11a8cfae mov dword ptr [0x11aba240], eax */
  w32((uint32_t)(0x11aba240), (EAX));
L_11a8cfb3:;
  /* 11a8cfb3 cmp dword ptr [0x11aba23c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8cfba je 0x11a8cfc5 */
  if (C.zf) goto L_11a8cfc5;
  /* 11a8cfbc call dword ptr [0x11aba23c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11aba23c))), 0x11a8cfc2u);
  /* 11a8cfc2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a8cfc5:;
  /* 11a8cfc5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8cfc9 je 0x11a8cfe1 */
  if (C.zf) goto L_11a8cfe1;
  /* 11a8cfcb cmp dword ptr [0x11aba240], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba240))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8cfd2 je 0x11a8cfe1 */
  if (C.zf) goto L_11a8cfe1;
  /* 11a8cfd4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8cfd7 push eax */
  push32((uint32_t)(EAX));
  /* 11a8cfd8 call dword ptr [0x11aba240] */
  call_ind((uint32_t)(r32((uint32_t)(0x11aba240))), 0x11a8cfdeu);
  /* 11a8cfde mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a8cfe1:;
  /* 11a8cfe1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8cfe4 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8cfe5 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8cfe8 push edx */
  push32((uint32_t)(EDX));
  /* 11a8cfe9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8cfec push eax */
  push32((uint32_t)(EAX));
  /* 11a8cfed mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8cff0 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8cff1 call dword ptr [0x11aba238] */
  call_ind((uint32_t)(r32((uint32_t)(0x11aba238))), 0x11a8cff7u);
L_11a8cff7:;
  /* 11a8cff7 mov esp, ebp */
  ESP = (EBP);
  /* 11a8cff9 pop ebp */
  EBP = (pop32());
  /* 11a8cffa ret  */
  ESPCHK(0x11a8cf40u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x11a8d000 (254 bytes, 109 insns) */
void f_11a8d000(void) {
  FTRACE(0x11a8d000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8d000 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11a8d004 push edi */
  push32((uint32_t)(EDI));
  /* 11a8d005 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a8d007 je 0x11a8d083 */
  if (C.zf) goto L_11a8d083;
  /* 11a8d009 push esi */
  push32((uint32_t)(ESI));
  /* 11a8d00a push ebx */
  push32((uint32_t)(EBX));
  /* 11a8d00b mov ebx, ecx */
  EBX = (ECX);
  /* 11a8d00d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11a8d011 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11a8d017 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11a8d01b jne 0x11a8d024 */
  if (!C.zf) goto L_11a8d024;
  /* 11a8d01d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a8d020 jne 0x11a8d091 */
  if (!C.zf) goto L_11a8d091;
  /* 11a8d022 jmp 0x11a8d045 */
  goto L_11a8d045;
L_11a8d024:;
  /* 11a8d024 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a8d026 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a8d027 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a8d029 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a8d02a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a8d02b je 0x11a8d052 */
  if (C.zf) goto L_11a8d052;
  /* 11a8d02d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a8d02f je 0x11a8d05a */
  if (C.zf) goto L_11a8d05a;
  /* 11a8d031 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11a8d037 jne 0x11a8d024 */
  if (!C.zf) goto L_11a8d024;
  /* 11a8d039 mov ebx, ecx */
  EBX = (ECX);
  /* 11a8d03b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a8d03e jne 0x11a8d091 */
  if (!C.zf) goto L_11a8d091;
L_11a8d040:;
  /* 11a8d040 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11a8d043 je 0x11a8d052 */
  if (C.zf) goto L_11a8d052;
L_11a8d045:;
  /* 11a8d045 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a8d047 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a8d048 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a8d04a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a8d04b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11a8d04d je 0x11a8d07e */
  if (C.zf) goto L_11a8d07e;
  /* 11a8d04f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11a8d050 jne 0x11a8d045 */
  if (!C.zf) goto L_11a8d045;
L_11a8d052:;
  /* 11a8d052 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a8d056 pop ebx */
  EBX = (pop32());
  /* 11a8d057 pop esi */
  ESI = (pop32());
  /* 11a8d058 pop edi */
  EDI = (pop32());
  /* 11a8d059 ret  */
  ESPCHK(0x11a8d000u, _esp0);
  ESP += 4; return;
L_11a8d05a:;
  /* 11a8d05a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11a8d060 je 0x11a8d074 */
  if (C.zf) goto L_11a8d074;
L_11a8d062:;
  /* 11a8d062 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a8d064 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a8d065 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a8d066 je 0x11a8d0f6 */
  if (C.zf) goto L_11a8d0f6;
  /* 11a8d06c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11a8d072 jne 0x11a8d062 */
  if (!C.zf) goto L_11a8d062;
L_11a8d074:;
  /* 11a8d074 mov ebx, ecx */
  EBX = (ECX);
  /* 11a8d076 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a8d079 jne 0x11a8d0e7 */
  if (!C.zf) goto L_11a8d0e7;
L_11a8d07b:;
  /* 11a8d07b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a8d07d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11a8d07e:;
  /* 11a8d07e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11a8d07f jne 0x11a8d07b */
  if (!C.zf) goto L_11a8d07b;
  /* 11a8d081 pop ebx */
  EBX = (pop32());
  /* 11a8d082 pop esi */
  ESI = (pop32());
L_11a8d083:;
  /* 11a8d083 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a8d087 pop edi */
  EDI = (pop32());
  /* 11a8d088 ret  */
  ESPCHK(0x11a8d000u, _esp0);
  ESP += 4; return;
L_11a8d089:;
  /* 11a8d089 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11a8d08b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8d08e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a8d08f je 0x11a8d040 */
  if (C.zf) goto L_11a8d040;
L_11a8d091:;
  /* 11a8d091 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11a8d096 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11a8d098 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8d09a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8d09d xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8d09f mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11a8d0a1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8d0a4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11a8d0a9 je 0x11a8d089 */
  if (C.zf) goto L_11a8d089;
  /* 11a8d0ab test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11a8d0ad je 0x11a8d0db */
  if (C.zf) goto L_11a8d0db;
  /* 11a8d0af test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11a8d0b1 je 0x11a8d0d1 */
  if (C.zf) goto L_11a8d0d1;
  /* 11a8d0b3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11a8d0b9 je 0x11a8d0c7 */
  if (C.zf) goto L_11a8d0c7;
  /* 11a8d0bb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11a8d0c1 jne 0x11a8d089 */
  if (!C.zf) goto L_11a8d089;
  /* 11a8d0c3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11a8d0c5 jmp 0x11a8d0df */
  goto L_11a8d0df;
L_11a8d0c7:;
  /* 11a8d0c7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a8d0cd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11a8d0cf jmp 0x11a8d0df */
  goto L_11a8d0df;
L_11a8d0d1:;
  /* 11a8d0d1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a8d0d7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11a8d0d9 jmp 0x11a8d0df */
  goto L_11a8d0df;
L_11a8d0db:;
  /* 11a8d0db xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a8d0dd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11a8d0df:;
  /* 11a8d0df add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8d0e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8d0e4 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a8d0e5 je 0x11a8d0f1 */
  if (C.zf) goto L_11a8d0f1;
L_11a8d0e7:;
  /* 11a8d0e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a8d0e9:;
  /* 11a8d0e9 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11a8d0eb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8d0ee dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a8d0ef jne 0x11a8d0e9 */
  if (!C.zf) goto L_11a8d0e9;
L_11a8d0f1:;
  /* 11a8d0f1 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11a8d0f4 jne 0x11a8d07b */
  if (!C.zf) goto L_11a8d07b;
L_11a8d0f6:;
  /* 11a8d0f6 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a8d0fa pop ebx */
  EBX = (pop32());
  /* 11a8d0fb pop esi */
  ESI = (pop32());
  /* 11a8d0fc pop edi */
  EDI = (pop32());
  /* 11a8d0fd ret  */
  ESPCHK(0x11a8d000u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d100 @ 0x11a8d100 (130 bytes, 43 insns) */
void f_11a8d100(void) {
  FTRACE(0x11a8d100u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8d100 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8d101 mov ebp, esp */
  EBP = (ESP);
  /* 11a8d103 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8d104 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8d107 cmp eax, dword ptr [0x11abbbbc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11abbbbc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8d10d jae 0x11a8d131 */
  if (!C.cf) goto L_11a8d131;
  /* 11a8d10f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8d112 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11a8d115 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8d118 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11a8d11b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a8d11e mov eax, dword ptr [ecx*4 + 0x11abba80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11abba80)));
  /* 11a8d125 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11a8d12a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11a8d12d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a8d12f jne 0x11a8d14c */
  if (!C.zf) goto L_11a8d14c;
L_11a8d131:;
  /* 11a8d131 call 0x11a92370 */
  push32(0x11a8d136u); f_11a92370();
  /* 11a8d136 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11a8d13c call 0x11a92380 */
  push32(0x11a8d141u); f_11a92380();
  /* 11a8d141 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11a8d147 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8d14a jmp 0x11a8d17e */
  goto L_11a8d17e;
L_11a8d14c:;
  /* 11a8d14c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8d14f push edx */
  push32((uint32_t)(EDX));
  /* 11a8d150 call 0x11a928a0 */
  push32(0x11a8d155u); f_11a928a0();
  /* 11a8d155 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8d158 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8d15b push eax */
  push32((uint32_t)(EAX));
  /* 11a8d15c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8d15f push ecx */
  push32((uint32_t)(ECX));
  /* 11a8d160 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8d163 push edx */
  push32((uint32_t)(EDX));
  /* 11a8d164 call 0x11a8d190 */
  push32(0x11a8d169u); f_11a8d190();
  /* 11a8d169 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8d16c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a8d16f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8d172 push eax */
  push32((uint32_t)(EAX));
  /* 11a8d173 call 0x11a92930 */
  push32(0x11a8d178u); f_11a92930();
  /* 11a8d178 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8d17b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11a8d17e:;
  /* 11a8d17e mov esp, ebp */
  ESP = (EBP);
  /* 11a8d180 pop ebp */
  EBP = (pop32());
  /* 11a8d181 ret  */
  ESPCHK(0x11a8d100u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d190 @ 0x11a8d190 (178 bytes, 56 insns) */
void f_11a8d190(void) {
  FTRACE(0x11a8d190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8d190 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8d191 mov ebp, esp */
  EBP = (ESP);
  /* 11a8d193 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8d196 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8d199 push eax */
  push32((uint32_t)(EAX));
  /* 11a8d19a call 0x11a92720 */
  push32(0x11a8d19fu); f_11a92720();
  /* 11a8d19f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8d1a2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11a8d1a5 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8d1a9 jne 0x11a8d1be */
  if (!C.zf) goto L_11a8d1be;
  /* 11a8d1ab call 0x11a92370 */
  push32(0x11a8d1b0u); f_11a92370();
  /* 11a8d1b0 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11a8d1b6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8d1b9 jmp 0x11a8d23e */
  goto L_11a8d23e;
L_11a8d1be:;
  /* 11a8d1be mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8d1c1 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8d1c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8d1c4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8d1c7 push edx */
  push32((uint32_t)(EDX));
  /* 11a8d1c8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8d1cb push eax */
  push32((uint32_t)(EAX));
  /* 11a8d1cc call dword ptr [0x11abc354] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc354))), 0x11a8d1d2u);
  /* 11a8d1d2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a8d1d5 cmp dword ptr [ebp - 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8d1d9 jne 0x11a8d1e6 */
  if (!C.zf) goto L_11a8d1e6;
  /* 11a8d1db call dword ptr [0x11abc3d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3d4))), 0x11a8d1e1u);
  /* 11a8d1e1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a8d1e4 jmp 0x11a8d1ed */
  goto L_11a8d1ed;
L_11a8d1e6:;
  /* 11a8d1e6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11a8d1ed:;
  /* 11a8d1ed cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8d1f1 je 0x11a8d204 */
  if (C.zf) goto L_11a8d204;
  /* 11a8d1f3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8d1f6 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8d1f7 call 0x11a922d0 */
  push32(0x11a8d1fcu); f_11a922d0();
  /* 11a8d1fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8d1ff or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8d202 jmp 0x11a8d23e */
  goto L_11a8d23e;
L_11a8d204:;
  /* 11a8d204 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8d207 sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11a8d20a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8d20d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8d210 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a8d213 mov ecx, dword ptr [edx*4 + 0x11abba80] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11abba80)));
  /* 11a8d21a mov dl, byte ptr [ecx + eax + 4] */
  DL = (r8((uint32_t)(ECX + EAX*1 + 0x4)));
  /* 11a8d21e and dl, 0xfd */
  { uint32_t _r=(DL)&(0xfdu); DL = (_r); fl_logic(_r,8); }
  /* 11a8d221 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8d224 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11a8d227 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8d22a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11a8d22d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a8d230 mov eax, dword ptr [eax*4 + 0x11abba80] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11abba80)));
  /* 11a8d237 mov byte ptr [eax + ecx + 4], dl */
  w8((uint32_t)(EAX + ECX*1 + 0x4), (DL));
  /* 11a8d23b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11a8d23e:;
  /* 11a8d23e mov esp, ebp */
  ESP = (EBP);
  /* 11a8d240 pop ebp */
  EBP = (pop32());
  /* 11a8d241 ret  */
  ESPCHK(0x11a8d190u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d250 @ 0x11a8d250 (130 bytes, 43 insns) */
void f_11a8d250(void) {
  FTRACE(0x11a8d250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8d250 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8d251 mov ebp, esp */
  EBP = (ESP);
  /* 11a8d253 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8d254 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8d257 cmp eax, dword ptr [0x11abbbbc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11abbbbc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8d25d jae 0x11a8d281 */
  if (!C.cf) goto L_11a8d281;
  /* 11a8d25f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8d262 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11a8d265 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8d268 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11a8d26b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a8d26e mov eax, dword ptr [ecx*4 + 0x11abba80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11abba80)));
  /* 11a8d275 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11a8d27a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11a8d27d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a8d27f jne 0x11a8d29c */
  if (!C.zf) goto L_11a8d29c;
L_11a8d281:;
  /* 11a8d281 call 0x11a92370 */
  push32(0x11a8d286u); f_11a92370();
  /* 11a8d286 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11a8d28c call 0x11a92380 */
  push32(0x11a8d291u); f_11a92380();
  /* 11a8d291 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11a8d297 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8d29a jmp 0x11a8d2ce */
  goto L_11a8d2ce;
L_11a8d29c:;
  /* 11a8d29c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8d29f push edx */
  push32((uint32_t)(EDX));
  /* 11a8d2a0 call 0x11a928a0 */
  push32(0x11a8d2a5u); f_11a928a0();
  /* 11a8d2a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8d2a8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8d2ab push eax */
  push32((uint32_t)(EAX));
  /* 11a8d2ac mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8d2af push ecx */
  push32((uint32_t)(ECX));
  /* 11a8d2b0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8d2b3 push edx */
  push32((uint32_t)(EDX));
  /* 11a8d2b4 call 0x11a8d2e0 */
  push32(0x11a8d2b9u); f_11a8d2e0();
  /* 11a8d2b9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8d2bc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a8d2bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8d2c2 push eax */
  push32((uint32_t)(EAX));
  /* 11a8d2c3 call 0x11a92930 */
  push32(0x11a8d2c8u); f_11a92930();
  /* 11a8d2c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8d2cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11a8d2ce:;
  /* 11a8d2ce mov esp, ebp */
  ESP = (EBP);
  /* 11a8d2d0 pop ebp */
  EBP = (pop32());
  /* 11a8d2d1 ret  */
  ESPCHK(0x11a8d250u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d2e0 @ 0x11a8d2e0 (627 bytes, 182 insns) */
void f_11a8d2e0(void) {
  FTRACE(0x11a8d2e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8d2e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8d2e1 mov ebp, esp */
  EBP = (ESP);
  /* 11a8d2e3 sub esp, 0x420 */
  { uint32_t _a=(ESP),_b=(0x420u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8d2e9 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11a8d2f0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a8d2f3 mov dword ptr [ebp - 0x420], eax */
  w32((uint32_t)(EBP + -0x420), (EAX));
  /* 11a8d2f9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8d2fd jne 0x11a8d306 */
  if (!C.zf) goto L_11a8d306;
  /* 11a8d2ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8d301 jmp 0x11a8d54f */
  goto L_11a8d54f;
L_11a8d306:;
  /* 11a8d306 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8d309 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11a8d30c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8d30f and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11a8d312 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a8d315 mov eax, dword ptr [ecx*4 + 0x11abba80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11abba80)));
  /* 11a8d31c movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11a8d321 and ecx, 0x20 */
  { uint32_t _r=(ECX)&(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11a8d324 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a8d326 je 0x11a8d338 */
  if (C.zf) goto L_11a8d338;
  /* 11a8d328 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a8d32a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8d32c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8d32f push edx */
  push32((uint32_t)(EDX));
  /* 11a8d330 call 0x11a8d190 */
  push32(0x11a8d335u); f_11a8d190();
  /* 11a8d335 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a8d338:;
  /* 11a8d338 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8d33b sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11a8d33e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8d341 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11a8d344 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a8d347 mov edx, dword ptr [eax*4 + 0x11abba80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11abba80)));
  /* 11a8d34e movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11a8d353 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11a8d358 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8d35a je 0x11a8d46c */
  if (C.zf) goto L_11a8d46c;
  /* 11a8d360 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8d363 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a8d366 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11a8d36d:;
  /* 11a8d36d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8d370 sub edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8d373 cmp edx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8d376 jae 0x11a8d46a */
  if (!C.cf) goto L_11a8d46a;
  /* 11a8d37c lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 11a8d382 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11a8d385:;
  /* 11a8d385 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8d388 lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 11a8d38e sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8d390 cmp ecx, 0x400 */
  { uint32_t _a=(ECX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8d396 jge 0x11a8d3f7 */
  if ((C.sf==C.of)) goto L_11a8d3f7;
  /* 11a8d398 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8d39b sub eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8d39e cmp eax, dword ptr [ebp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8d3a1 jae 0x11a8d3f7 */
  if (!C.cf) goto L_11a8d3f7;
  /* 11a8d3a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8d3a6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11a8d3a8 mov byte ptr [ebp - 0x41c], dl */
  w8((uint32_t)(EBP + -0x41c), (DL));
  /* 11a8d3ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8d3b1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8d3b4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a8d3b7 movsx ecx, byte ptr [ebp - 0x41c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x41c))));
  /* 11a8d3be cmp ecx, 0xa */
  { uint32_t _a=(ECX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8d3c1 jne 0x11a8d3e1 */
  if (!C.zf) goto L_11a8d3e1;
  /* 11a8d3c3 mov edx, dword ptr [ebp - 0x420] */
  EDX = (r32((uint32_t)(EBP + -0x420)));
  /* 11a8d3c9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8d3cc mov dword ptr [ebp - 0x420], edx */
  w32((uint32_t)(EBP + -0x420), (EDX));
  /* 11a8d3d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8d3d5 mov byte ptr [eax], 0xd */
  w8((uint32_t)(EAX), (0xdu));
  /* 11a8d3d8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8d3db add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8d3de mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11a8d3e1:;
  /* 11a8d3e1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8d3e4 mov al, byte ptr [ebp - 0x41c] */
  AL = (r8((uint32_t)(EBP + -0x41c)));
  /* 11a8d3ea mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11a8d3ec mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8d3ef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8d3f2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a8d3f5 jmp 0x11a8d385 */
  goto L_11a8d385;
L_11a8d3f7:;
  /* 11a8d3f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8d3f9 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 11a8d3ff push edx */
  push32((uint32_t)(EDX));
  /* 11a8d400 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8d403 lea ecx, [ebp - 0x414] */
  ECX = ((uint32_t)(EBP + -0x414));
  /* 11a8d409 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8d40b push eax */
  push32((uint32_t)(EAX));
  /* 11a8d40c lea edx, [ebp - 0x414] */
  EDX = ((uint32_t)(EBP + -0x414));
  /* 11a8d412 push edx */
  push32((uint32_t)(EDX));
  /* 11a8d413 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8d416 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11a8d419 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8d41c and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11a8d41f imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a8d422 mov edx, dword ptr [eax*4 + 0x11abba80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11abba80)));
  /* 11a8d429 mov eax, dword ptr [edx + ecx] */
  EAX = (r32((uint32_t)(EDX + ECX*1)));
  /* 11a8d42c push eax */
  push32((uint32_t)(EAX));
  /* 11a8d42d call dword ptr [0x11abc390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc390))), 0x11a8d433u);
  /* 11a8d433 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8d435 je 0x11a8d45a */
  if (C.zf) goto L_11a8d45a;
  /* 11a8d437 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a8d43a add ecx, dword ptr [ebp - 0x418] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x418))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8d440 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11a8d443 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8d446 lea eax, [ebp - 0x414] */
  EAX = ((uint32_t)(EBP + -0x414));
  /* 11a8d44c sub edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8d44e cmp dword ptr [ebp - 0x418], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x418))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8d454 jge 0x11a8d458 */
  if ((C.sf==C.of)) goto L_11a8d458;
  /* 11a8d456 jmp 0x11a8d46a */
  goto L_11a8d46a;
L_11a8d458:;
  /* 11a8d458 jmp 0x11a8d465 */
  goto L_11a8d465;
L_11a8d45a:;
  /* 11a8d45a call dword ptr [0x11abc3d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3d4))), 0x11a8d460u);
  /* 11a8d460 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11a8d463 jmp 0x11a8d46a */
  goto L_11a8d46a;
L_11a8d465:;
  /* 11a8d465 jmp 0x11a8d36d */
  goto L_11a8d36d;
L_11a8d46a:;
  /* 11a8d46a jmp 0x11a8d4bc */
  goto L_11a8d4bc;
L_11a8d46c:;
  /* 11a8d46c push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8d46e lea ecx, [ebp - 0x418] */
  ECX = ((uint32_t)(EBP + -0x418));
  /* 11a8d474 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8d475 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8d478 push edx */
  push32((uint32_t)(EDX));
  /* 11a8d479 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8d47c push eax */
  push32((uint32_t)(EAX));
  /* 11a8d47d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8d480 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11a8d483 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8d486 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11a8d489 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a8d48c mov eax, dword ptr [ecx*4 + 0x11abba80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11abba80)));
  /* 11a8d493 mov ecx, dword ptr [eax + edx] */
  ECX = (r32((uint32_t)(EAX + EDX*1)));
  /* 11a8d496 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8d497 call dword ptr [0x11abc390] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc390))), 0x11a8d49du);
  /* 11a8d49d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8d49f je 0x11a8d4b3 */
  if (C.zf) goto L_11a8d4b3;
  /* 11a8d4a1 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11a8d4a8 mov edx, dword ptr [ebp - 0x418] */
  EDX = (r32((uint32_t)(EBP + -0x418)));
  /* 11a8d4ae mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11a8d4b1 jmp 0x11a8d4bc */
  goto L_11a8d4bc;
L_11a8d4b3:;
  /* 11a8d4b3 call dword ptr [0x11abc3d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3d4))), 0x11a8d4b9u);
  /* 11a8d4b9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11a8d4bc:;
  /* 11a8d4bc cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8d4c0 jne 0x11a8d546 */
  if (!C.zf) goto L_11a8d546;
  /* 11a8d4c6 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8d4ca je 0x11a8d4fa */
  if (C.zf) goto L_11a8d4fa;
  /* 11a8d4cc cmp dword ptr [ebp - 0xc], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8d4d0 jne 0x11a8d4e9 */
  if (!C.zf) goto L_11a8d4e9;
  /* 11a8d4d2 call 0x11a92370 */
  push32(0x11a8d4d7u); f_11a92370();
  /* 11a8d4d7 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11a8d4dd call 0x11a92380 */
  push32(0x11a8d4e2u); f_11a92380();
  /* 11a8d4e2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8d4e5 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11a8d4e7 jmp 0x11a8d4f5 */
  goto L_11a8d4f5;
L_11a8d4e9:;
  /* 11a8d4e9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8d4ec push edx */
  push32((uint32_t)(EDX));
  /* 11a8d4ed call 0x11a922d0 */
  push32(0x11a8d4f2u); f_11a922d0();
  /* 11a8d4f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a8d4f5:;
  /* 11a8d4f5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8d4f8 jmp 0x11a8d54f */
  goto L_11a8d54f;
L_11a8d4fa:;
  /* 11a8d4fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8d4fd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11a8d500 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8d503 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11a8d506 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a8d509 mov edx, dword ptr [eax*4 + 0x11abba80] */
  EDX = (r32((uint32_t)(EAX*4 + 0x11abba80)));
  /* 11a8d510 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 11a8d515 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11a8d518 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8d51a je 0x11a8d52b */
  if (C.zf) goto L_11a8d52b;
  /* 11a8d51c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8d51f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11a8d522 cmp edx, 0x1a */
  { uint32_t _a=(EDX),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8d525 jne 0x11a8d52b */
  if (!C.zf) goto L_11a8d52b;
  /* 11a8d527 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8d529 jmp 0x11a8d54f */
  goto L_11a8d54f;
L_11a8d52b:;
  /* 11a8d52b call 0x11a92370 */
  push32(0x11a8d530u); f_11a92370();
  /* 11a8d530 mov dword ptr [eax], 0x1c */
  w32((uint32_t)(EAX), (0x1cu));
  /* 11a8d536 call 0x11a92380 */
  push32(0x11a8d53bu); f_11a92380();
  /* 11a8d53b mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11a8d541 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8d544 jmp 0x11a8d54f */
  goto L_11a8d54f;
L_11a8d546:;
  /* 11a8d546 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a8d549 sub eax, dword ptr [ebp - 0x420] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x420))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11a8d54f:;
  /* 11a8d54f mov esp, ebp */
  ESP = (EBP);
  /* 11a8d551 pop ebp */
  EBP = (pop32());
  /* 11a8d552 ret  */
  ESPCHK(0x11a8d2e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d560 @ 0x11a8d560 (199 bytes, 68 insns) */
void f_11a8d560(void) {
  FTRACE(0x11a8d560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8d560 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8d561 mov ebp, esp */
  EBP = (ESP);
  /* 11a8d563 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8d564 push ebx */
  push32((uint32_t)(EBX));
  /* 11a8d565 push esi */
  push32((uint32_t)(ESI));
  /* 11a8d566 push edi */
  push32((uint32_t)(EDI));
L_11a8d567:;
  /* 11a8d567 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8d56b jne 0x11a8d58b */
  if (!C.zf) goto L_11a8d58b;
  /* 11a8d56d push 0x11ab46a0 */
  push32((uint32_t)(0x11ab46a0u));
  /* 11a8d572 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8d574 push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 11a8d576 push 0x11ab5270 */
  push32((uint32_t)(0x11ab5270u));
  /* 11a8d57b push 2 */
  push32((uint32_t)(0x2u));
  /* 11a8d57d call 0x11a868a0 */
  push32(0x11a8d582u); f_11a868a0();
  /* 11a8d582 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8d585 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8d588 jne 0x11a8d58b */
  if (!C.zf) goto L_11a8d58b;
  /* 11a8d58a int3  */
  x86_unimpl("int3 @ 0x11a8d58a");
L_11a8d58b:;
  /* 11a8d58b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8d58d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8d58f jne 0x11a8d567 */
  if (!C.zf) goto L_11a8d567;
  /* 11a8d591 mov ecx, dword ptr [0x11aba244] */
  ECX = (r32((uint32_t)(0x11aba244)));
  /* 11a8d597 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8d59a mov dword ptr [0x11aba244], ecx */
  w32((uint32_t)(0x11aba244), (ECX));
  /* 11a8d5a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8d5a3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a8d5a6 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 11a8d5a8 push 0x11ab5270 */
  push32((uint32_t)(0x11ab5270u));
  /* 11a8d5ad push 2 */
  push32((uint32_t)(0x2u));
  /* 11a8d5af push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11a8d5b4 call 0x11a897e0 */
  push32(0x11a8d5b9u); f_11a897e0();
  /* 11a8d5b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8d5bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8d5bf mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11a8d5c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8d5c5 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8d5c9 je 0x11a8d5e6 */
  if (C.zf) goto L_11a8d5e6;
  /* 11a8d5cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8d5ce mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11a8d5d1 or ecx, 8 */
  { uint32_t _r=(ECX)|(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11a8d5d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8d5d7 mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11a8d5da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8d5dd mov dword ptr [eax + 0x18], 0x1000 */
  w32((uint32_t)(EAX + 0x18), (0x1000u));
  /* 11a8d5e4 jmp 0x11a8d60b */
  goto L_11a8d60b;
L_11a8d5e6:;
  /* 11a8d5e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8d5e9 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11a8d5ec or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11a8d5ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8d5f2 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11a8d5f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8d5f8 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8d5fb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8d5fe mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11a8d601 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8d604 mov dword ptr [eax + 0x18], 2 */
  w32((uint32_t)(EAX + 0x18), (0x2u));
L_11a8d60b:;
  /* 11a8d60b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8d60e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8d611 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11a8d614 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11a8d616 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8d619 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11a8d620 pop edi */
  EDI = (pop32());
  /* 11a8d621 pop esi */
  ESI = (pop32());
  /* 11a8d622 pop ebx */
  EBX = (pop32());
  /* 11a8d623 mov esp, ebp */
  ESP = (EBP);
  /* 11a8d625 pop ebp */
  EBP = (pop32());
  /* 11a8d626 ret  */
  ESPCHK(0x11a8d560u, _esp0);
  ESP += 4; return;
}

/* __isatty @ 0x11a8d630 (50 bytes, 17 insns) */
void f_11a8d630(void) {
  FTRACE(0x11a8d630u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8d630 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8d631 mov ebp, esp */
  EBP = (ESP);
  /* 11a8d633 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8d636 cmp eax, dword ptr [0x11abbbbc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11abbbbc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8d63c jb 0x11a8d642 */
  if (C.cf) goto L_11a8d642;
  /* 11a8d63e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8d640 jmp 0x11a8d660 */
  goto L_11a8d660;
L_11a8d642:;
  /* 11a8d642 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8d645 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11a8d648 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8d64b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11a8d64e imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a8d651 mov eax, dword ptr [ecx*4 + 0x11abba80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11abba80)));
  /* 11a8d658 movsx eax, byte ptr [eax + edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 11a8d65d and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
L_11a8d660:;
  /* 11a8d660 pop ebp */
  EBP = (pop32());
  /* 11a8d661 ret  */
  ESPCHK(0x11a8d630u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d670 @ 0x11a8d670 (300 bytes, 80 insns) */
void f_11a8d670(void) {
  FTRACE(0x11a8d670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8d670 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8d671 mov ebp, esp */
  EBP = (ESP);
  /* 11a8d673 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8d674 cmp dword ptr [0x11abba60], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11abba60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8d67b jne 0x11a8d689 */
  if (!C.zf) goto L_11a8d689;
  /* 11a8d67d mov dword ptr [0x11abba60], 0x200 */
  w32((uint32_t)(0x11abba60), (0x200u));
  /* 11a8d687 jmp 0x11a8d69c */
  goto L_11a8d69c;
L_11a8d689:;
  /* 11a8d689 cmp dword ptr [0x11abba60], 0x14 */
  { uint32_t _a=(r32((uint32_t)(0x11abba60))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8d690 jge 0x11a8d69c */
  if ((C.sf==C.of)) goto L_11a8d69c;
  /* 11a8d692 mov dword ptr [0x11abba60], 0x14 */
  w32((uint32_t)(0x11abba60), (0x14u));
L_11a8d69c:;
  /* 11a8d69c push 0x83 */
  push32((uint32_t)(0x83u));
  /* 11a8d6a1 push 0x11ab527c */
  push32((uint32_t)(0x11ab527cu));
  /* 11a8d6a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a8d6a8 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a8d6aa mov eax, dword ptr [0x11abba60] */
  EAX = (r32((uint32_t)(0x11abba60)));
  /* 11a8d6af push eax */
  push32((uint32_t)(EAX));
  /* 11a8d6b0 call 0x11a89bf0 */
  push32(0x11a8d6b5u); f_11a89bf0();
  /* 11a8d6b5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8d6b8 mov dword ptr [0x11aba70c], eax */
  w32((uint32_t)(0x11aba70c), (EAX));
  /* 11a8d6bd cmp dword ptr [0x11aba70c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba70c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8d6c4 jne 0x11a8d705 */
  if (!C.zf) goto L_11a8d705;
  /* 11a8d6c6 mov dword ptr [0x11abba60], 0x14 */
  w32((uint32_t)(0x11abba60), (0x14u));
  /* 11a8d6d0 push 0x86 */
  push32((uint32_t)(0x86u));
  /* 11a8d6d5 push 0x11ab527c */
  push32((uint32_t)(0x11ab527cu));
  /* 11a8d6da push 2 */
  push32((uint32_t)(0x2u));
  /* 11a8d6dc push 4 */
  push32((uint32_t)(0x4u));
  /* 11a8d6de mov ecx, dword ptr [0x11abba60] */
  ECX = (r32((uint32_t)(0x11abba60)));
  /* 11a8d6e4 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8d6e5 call 0x11a89bf0 */
  push32(0x11a8d6eau); f_11a89bf0();
  /* 11a8d6ea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8d6ed mov dword ptr [0x11aba70c], eax */
  w32((uint32_t)(0x11aba70c), (EAX));
  /* 11a8d6f2 cmp dword ptr [0x11aba70c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba70c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8d6f9 jne 0x11a8d705 */
  if (!C.zf) goto L_11a8d705;
  /* 11a8d6fb push 0x1a */
  push32((uint32_t)(0x1au));
  /* 11a8d6fd call 0x11a86750 */
  push32(0x11a8d702u); f_11a86750();
  /* 11a8d702 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a8d705:;
  /* 11a8d705 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11a8d70c jmp 0x11a8d717 */
  goto L_11a8d717;
L_11a8d70e:;
  /* 11a8d70e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8d711 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8d714 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11a8d717:;
  /* 11a8d717 cmp dword ptr [ebp - 4], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8d71b jge 0x11a8d736 */
  if ((C.sf==C.of)) goto L_11a8d736;
  /* 11a8d71d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8d720 shl eax, 5 */
  EAX = (sh_shl((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11a8d723 add eax, 0x11ab7c40 */
  { uint32_t _a=(EAX),_b=(0x11ab7c40u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8d728 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8d72b mov edx, dword ptr [0x11aba70c] */
  EDX = (r32((uint32_t)(0x11aba70c)));
  /* 11a8d731 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11a8d734 jmp 0x11a8d70e */
  goto L_11a8d70e;
L_11a8d736:;
  /* 11a8d736 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11a8d73d jmp 0x11a8d748 */
  goto L_11a8d748;
L_11a8d73f:;
  /* 11a8d73f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8d742 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8d745 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a8d748:;
  /* 11a8d748 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8d74c jge 0x11a8d798 */
  if ((C.sf==C.of)) goto L_11a8d798;
  /* 11a8d74e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8d751 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11a8d754 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8d757 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11a8d75a imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a8d75d mov eax, dword ptr [ecx*4 + 0x11abba80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11abba80)));
  /* 11a8d764 cmp dword ptr [eax + edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8d768 je 0x11a8d786 */
  if (C.zf) goto L_11a8d786;
  /* 11a8d76a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8d76d sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11a8d770 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8d773 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11a8d776 imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a8d779 mov eax, dword ptr [ecx*4 + 0x11abba80] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11abba80)));
  /* 11a8d780 cmp dword ptr [eax + edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8d784 jne 0x11a8d796 */
  if (!C.zf) goto L_11a8d796;
L_11a8d786:;
  /* 11a8d786 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8d789 shl ecx, 5 */
  ECX = (sh_shl((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11a8d78c mov dword ptr [ecx + 0x11ab7c50], 0xffffffff */
  w32((uint32_t)(ECX + 0x11ab7c50), (0xffffffffu));
L_11a8d796:;
  /* 11a8d796 jmp 0x11a8d73f */
  goto L_11a8d73f;
L_11a8d798:;
  /* 11a8d798 mov esp, ebp */
  ESP = (EBP);
  /* 11a8d79a pop ebp */
  EBP = (pop32());
  /* 11a8d79b ret  */
  ESPCHK(0x11a8d670u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d7a0 @ 0x11a8d7a0 (26 bytes, 9 insns) */
void f_11a8d7a0(void) {
  FTRACE(0x11a8d7a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8d7a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8d7a1 mov ebp, esp */
  EBP = (ESP);
  /* 11a8d7a3 call 0x11a92ba0 */
  push32(0x11a8d7a8u); f_11a92ba0();
  /* 11a8d7a8 movsx eax, byte ptr [0x11aba0f4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11aba0f4))));
  /* 11a8d7af test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8d7b1 je 0x11a8d7b8 */
  if (C.zf) goto L_11a8d7b8;
  /* 11a8d7b3 call 0x11a92960 */
  push32(0x11a8d7b8u); f_11a92960();
L_11a8d7b8:;
  /* 11a8d7b8 pop ebp */
  EBP = (pop32());
  /* 11a8d7b9 ret  */
  ESPCHK(0x11a8d7a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d7c0 @ 0x11a8d7c0 (61 bytes, 20 insns) */
void f_11a8d7c0(void) {
  FTRACE(0x11a8d7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8d7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8d7c1 mov ebp, esp */
  EBP = (ESP);
  /* 11a8d7c3 cmp dword ptr [ebp + 8], 0x11ab7c40 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11ab7c40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8d7ca jb 0x11a8d7ee */
  if (C.cf) goto L_11a8d7ee;
  /* 11a8d7cc cmp dword ptr [ebp + 8], 0x11ab7ea0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11ab7ea0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8d7d3 ja 0x11a8d7ee */
  if ((!C.cf&&!C.zf)) goto L_11a8d7ee;
  /* 11a8d7d5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8d7d8 sub eax, 0x11ab7c40 */
  { uint32_t _a=(EAX),_b=(0x11ab7c40u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8d7dd sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11a8d7e0 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8d7e3 push eax */
  push32((uint32_t)(EAX));
  /* 11a8d7e4 call 0x11a8f2d0 */
  push32(0x11a8d7e9u); f_11a8f2d0();
  /* 11a8d7e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8d7ec jmp 0x11a8d7fb */
  goto L_11a8d7fb;
L_11a8d7ee:;
  /* 11a8d7ee mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8d7f1 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8d7f4 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8d7f5 call dword ptr [0x11abc35c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc35c))), 0x11a8d7fbu);
L_11a8d7fb:;
  /* 11a8d7fb pop ebp */
  EBP = (pop32());
  /* 11a8d7fc ret  */
  ESPCHK(0x11a8d7c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d800 @ 0x11a8d800 (41 bytes, 16 insns) */
void f_11a8d800(void) {
  FTRACE(0x11a8d800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8d800 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8d801 mov ebp, esp */
  EBP = (ESP);
  /* 11a8d803 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8d807 jge 0x11a8d81a */
  if ((C.sf==C.of)) goto L_11a8d81a;
  /* 11a8d809 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8d80c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8d80f push eax */
  push32((uint32_t)(EAX));
  /* 11a8d810 call 0x11a8f2d0 */
  push32(0x11a8d815u); f_11a8f2d0();
  /* 11a8d815 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8d818 jmp 0x11a8d827 */
  goto L_11a8d827;
L_11a8d81a:;
  /* 11a8d81a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8d81d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8d820 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8d821 call dword ptr [0x11abc35c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc35c))), 0x11a8d827u);
L_11a8d827:;
  /* 11a8d827 pop ebp */
  EBP = (pop32());
  /* 11a8d828 ret  */
  ESPCHK(0x11a8d800u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d830 @ 0x11a8d830 (61 bytes, 20 insns) */
void f_11a8d830(void) {
  FTRACE(0x11a8d830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8d830 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8d831 mov ebp, esp */
  EBP = (ESP);
  /* 11a8d833 cmp dword ptr [ebp + 8], 0x11ab7c40 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11ab7c40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8d83a jb 0x11a8d85e */
  if (C.cf) goto L_11a8d85e;
  /* 11a8d83c cmp dword ptr [ebp + 8], 0x11ab7ea0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x11ab7ea0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8d843 ja 0x11a8d85e */
  if ((!C.cf&&!C.zf)) goto L_11a8d85e;
  /* 11a8d845 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8d848 sub eax, 0x11ab7c40 */
  { uint32_t _a=(EAX),_b=(0x11ab7c40u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8d84d sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11a8d850 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8d853 push eax */
  push32((uint32_t)(EAX));
  /* 11a8d854 call 0x11a8f370 */
  push32(0x11a8d859u); f_11a8f370();
  /* 11a8d859 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8d85c jmp 0x11a8d86b */
  goto L_11a8d86b;
L_11a8d85e:;
  /* 11a8d85e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8d861 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8d864 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8d865 call dword ptr [0x11abc34c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc34c))), 0x11a8d86bu);
L_11a8d86b:;
  /* 11a8d86b pop ebp */
  EBP = (pop32());
  /* 11a8d86c ret  */
  ESPCHK(0x11a8d830u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d870 @ 0x11a8d870 (41 bytes, 16 insns) */
void f_11a8d870(void) {
  FTRACE(0x11a8d870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8d870 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8d871 mov ebp, esp */
  EBP = (ESP);
  /* 11a8d873 cmp dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8d877 jge 0x11a8d88a */
  if ((C.sf==C.of)) goto L_11a8d88a;
  /* 11a8d879 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8d87c add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8d87f push eax */
  push32((uint32_t)(EAX));
  /* 11a8d880 call 0x11a8f370 */
  push32(0x11a8d885u); f_11a8f370();
  /* 11a8d885 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8d888 jmp 0x11a8d897 */
  goto L_11a8d897;
L_11a8d88a:;
  /* 11a8d88a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8d88d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8d890 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8d891 call dword ptr [0x11abc34c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc34c))), 0x11a8d897u);
L_11a8d897:;
  /* 11a8d897 pop ebp */
  EBP = (pop32());
  /* 11a8d898 ret  */
  ESPCHK(0x11a8d870u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d8a0 @ 0x11a8d8a0 (119 bytes, 34 insns) */
void f_11a8d8a0(void) {
  FTRACE(0x11a8d8a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8d8a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8d8a1 mov ebp, esp */
  EBP = (ESP);
  /* 11a8d8a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8d8a6 push 0x11aba44c */
  push32((uint32_t)(0x11aba44cu));
  /* 11a8d8ab call dword ptr [0x11abc3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3a4))), 0x11a8d8b1u);
  /* 11a8d8b1 cmp dword ptr [0x11aba43c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba43c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8d8b8 je 0x11a8d8d8 */
  if (C.zf) goto L_11a8d8d8;
  /* 11a8d8ba push 0x11aba44c */
  push32((uint32_t)(0x11aba44cu));
  /* 11a8d8bf call dword ptr [0x11abc394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc394))), 0x11a8d8c5u);
  /* 11a8d8c5 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11a8d8c7 call 0x11a8f2d0 */
  push32(0x11a8d8ccu); f_11a8f2d0();
  /* 11a8d8cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8d8cf mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11a8d8d6 jmp 0x11a8d8df */
  goto L_11a8d8df;
L_11a8d8d8:;
  /* 11a8d8d8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11a8d8df:;
  /* 11a8d8df mov ax, word ptr [ebp + 0xc] */
  AX = (r16((uint32_t)(EBP + 0xc)));
  /* 11a8d8e3 push eax */
  push32((uint32_t)(EAX));
  /* 11a8d8e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8d8e7 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8d8e8 call 0x11a8d920 */
  push32(0x11a8d8edu); f_11a8d920();
  /* 11a8d8ed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8d8f0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a8d8f3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8d8f7 je 0x11a8d905 */
  if (C.zf) goto L_11a8d905;
  /* 11a8d8f9 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11a8d8fb call 0x11a8f370 */
  push32(0x11a8d900u); f_11a8f370();
  /* 11a8d900 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8d903 jmp 0x11a8d910 */
  goto L_11a8d910;
L_11a8d905:;
  /* 11a8d905 push 0x11aba44c */
  push32((uint32_t)(0x11aba44cu));
  /* 11a8d90a call dword ptr [0x11abc394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc394))), 0x11a8d910u);
L_11a8d910:;
  /* 11a8d910 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8d913 mov esp, ebp */
  ESP = (EBP);
  /* 11a8d915 pop ebp */
  EBP = (pop32());
  /* 11a8d916 ret  */
  ESPCHK(0x11a8d8a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d920 @ 0x11a8d920 (160 bytes, 50 insns) */
void f_11a8d920(void) {
  FTRACE(0x11a8d920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8d920 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8d921 mov ebp, esp */
  EBP = (ESP);
  /* 11a8d923 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8d926 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8d92a jne 0x11a8d933 */
  if (!C.zf) goto L_11a8d933;
  /* 11a8d92c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8d92e jmp 0x11a8d9bc */
  goto L_11a8d9bc;
L_11a8d933:;
  /* 11a8d933 cmp dword ptr [0x11aba2c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba2c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8d93a jne 0x11a8d96a */
  if (!C.zf) goto L_11a8d96a;
  /* 11a8d93c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8d93f and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8d944 cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8d949 jle 0x11a8d95b */
  if ((C.zf||C.sf!=C.of)) goto L_11a8d95b;
  /* 11a8d94b call 0x11a92370 */
  push32(0x11a8d950u); f_11a92370();
  /* 11a8d950 mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 11a8d956 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8d959 jmp 0x11a8d9bc */
  goto L_11a8d9bc;
L_11a8d95b:;
  /* 11a8d95b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8d95e mov dl, byte ptr [ebp + 0xc] */
  DL = (r8((uint32_t)(EBP + 0xc)));
  /* 11a8d961 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11a8d963 mov eax, 1 */
  EAX = (0x1u);
  /* 11a8d968 jmp 0x11a8d9bc */
  goto L_11a8d9bc;
L_11a8d96a:;
  /* 11a8d96a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11a8d971 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11a8d974 push eax */
  push32((uint32_t)(EAX));
  /* 11a8d975 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8d977 mov ecx, dword ptr [0x11ab80d0] */
  ECX = (r32((uint32_t)(0x11ab80d0)));
  /* 11a8d97d push ecx */
  push32((uint32_t)(ECX));
  /* 11a8d97e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8d981 push edx */
  push32((uint32_t)(EDX));
  /* 11a8d982 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a8d984 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 11a8d987 push eax */
  push32((uint32_t)(EAX));
  /* 11a8d988 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11a8d98d mov ecx, dword ptr [0x11aba2d8] */
  ECX = (r32((uint32_t)(0x11aba2d8)));
  /* 11a8d993 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8d994 call dword ptr [0x11abc3bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3bc))), 0x11a8d99au);
  /* 11a8d99a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a8d99d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8d9a1 je 0x11a8d9a9 */
  if (C.zf) goto L_11a8d9a9;
  /* 11a8d9a3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8d9a7 je 0x11a8d9b9 */
  if (C.zf) goto L_11a8d9b9;
L_11a8d9a9:;
  /* 11a8d9a9 call 0x11a92370 */
  push32(0x11a8d9aeu); f_11a92370();
  /* 11a8d9ae mov dword ptr [eax], 0x2a */
  w32((uint32_t)(EAX), (0x2au));
  /* 11a8d9b4 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8d9b7 jmp 0x11a8d9bc */
  goto L_11a8d9bc;
L_11a8d9b9:;
  /* 11a8d9b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11a8d9bc:;
  /* 11a8d9bc mov esp, ebp */
  ESP = (EBP);
  /* 11a8d9be pop ebp */
  EBP = (pop32());
  /* 11a8d9bf ret  */
  ESPCHK(0x11a8d920u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x11a8d9c0 (104 bytes, 43 insns) */
void f_11a8d9c0(void) {
  FTRACE(0x11a8d9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8d9c0 push ebx */
  push32((uint32_t)(EBX));
  /* 11a8d9c1 push esi */
  push32((uint32_t)(ESI));
  /* 11a8d9c2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 11a8d9c6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8d9c8 jne 0x11a8d9e2 */
  if (!C.zf) goto L_11a8d9e2;
  /* 11a8d9ca mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 11a8d9ce mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a8d9d2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a8d9d4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a8d9d6 mov ebx, eax */
  EBX = (EAX);
  /* 11a8d9d8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11a8d9dc div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a8d9de mov edx, ebx */
  EDX = (EBX);
  /* 11a8d9e0 jmp 0x11a8da23 */
  goto L_11a8da23;
L_11a8d9e2:;
  /* 11a8d9e2 mov ecx, eax */
  ECX = (EAX);
  /* 11a8d9e4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11a8d9e8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a8d9ec mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_11a8d9f0:;
  /* 11a8d9f0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11a8d9f2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 11a8d9f4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11a8d9f6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 11a8d9f8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a8d9fa jne 0x11a8d9f0 */
  if (!C.zf) goto L_11a8d9f0;
  /* 11a8d9fc div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a8d9fe mov esi, eax */
  ESI = (EAX);
  /* 11a8da00 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11a8da04 mov ecx, eax */
  ECX = (EAX);
  /* 11a8da06 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11a8da0a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11a8da0c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8da0e jb 0x11a8da1e */
  if (C.cf) goto L_11a8da1e;
  /* 11a8da10 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8da14 ja 0x11a8da1e */
  if ((!C.cf&&!C.zf)) goto L_11a8da1e;
  /* 11a8da16 jb 0x11a8da1f */
  if (C.cf) goto L_11a8da1f;
  /* 11a8da18 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8da1c jbe 0x11a8da1f */
  if ((C.cf||C.zf)) goto L_11a8da1f;
L_11a8da1e:;
  /* 11a8da1e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_11a8da1f:;
  /* 11a8da1f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a8da21 mov eax, esi */
  EAX = (ESI);
L_11a8da23:;
  /* 11a8da23 pop esi */
  ESI = (pop32());
  /* 11a8da24 pop ebx */
  EBX = (pop32());
  /* 11a8da25 ret 0x10 */
  ESPCHK(0x11a8d9c0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x11a8da30 (117 bytes, 44 insns) */
void f_11a8da30(void) {
  FTRACE(0x11a8da30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8da30 push ebx */
  push32((uint32_t)(EBX));
  /* 11a8da31 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11a8da35 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8da37 jne 0x11a8da51 */
  if (!C.zf) goto L_11a8da51;
  /* 11a8da39 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a8da3d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11a8da41 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a8da43 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a8da45 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a8da49 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a8da4b mov eax, edx */
  EAX = (EDX);
  /* 11a8da4d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a8da4f jmp 0x11a8daa1 */
  goto L_11a8daa1;
L_11a8da51:;
  /* 11a8da51 mov ecx, eax */
  ECX = (EAX);
  /* 11a8da53 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 11a8da57 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11a8da5b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_11a8da5f:;
  /* 11a8da5f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11a8da61 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 11a8da63 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11a8da65 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 11a8da67 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a8da69 jne 0x11a8da5f */
  if (!C.zf) goto L_11a8da5f;
  /* 11a8da6b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11a8da6d mov ecx, eax */
  ECX = (EAX);
  /* 11a8da6f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11a8da73 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 11a8da74 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11a8da78 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8da7a jb 0x11a8da8a */
  if (C.cf) goto L_11a8da8a;
  /* 11a8da7c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8da80 ja 0x11a8da8a */
  if ((!C.cf&&!C.zf)) goto L_11a8da8a;
  /* 11a8da82 jb 0x11a8da92 */
  if (C.cf) goto L_11a8da92;
  /* 11a8da84 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8da88 jbe 0x11a8da92 */
  if ((C.cf||C.zf)) goto L_11a8da92;
L_11a8da8a:;
  /* 11a8da8a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8da8e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11a8da92:;
  /* 11a8da92 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8da96 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8da9a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a8da9c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a8da9e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11a8daa1:;
  /* 11a8daa1 pop ebx */
  EBX = (pop32());
  /* 11a8daa2 ret 0x10 */
  ESPCHK(0x11a8da30u, _esp0);
  ESP += 20; return;
}

/* FUN_1000dab0 @ 0x11a8dab0 (348 bytes, 114 insns) [1 switch table(s)] */
void f_11a8dab0(void) {
  FTRACE(0x11a8dab0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8dab0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8dab1 mov ebp, esp */
  EBP = (ESP);
  /* 11a8dab3 sub esp, 0x70 */
  { uint32_t _a=(ESP),_b=(0x70u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8dab6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8dab9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a8dabb mov cx, word ptr [eax] */
  CX = (r16((uint32_t)(EAX)));
  /* 11a8dabe mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11a8dac1 lea edx, [ebp - 0x10] */
  EDX = ((uint32_t)(EBP + -0x10));
  /* 11a8dac4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11a8dac7 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8daca mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a8dacc mov dword ptr [ebp - 0x6c], ecx */
  w32((uint32_t)(EBP + -0x6c), (ECX));
  /* 11a8dacf mov edx, dword ptr [ebp - 0x6c] */
  EDX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11a8dad2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8dad5 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
  /* 11a8dad8 cmp dword ptr [ebp - 0x6c], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x6c))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8dadc ja 0x11a8db1e */
  if ((!C.cf&&!C.zf)) goto L_11a8db1e;
  /* 11a8dade mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11a8dae1 jmp dword ptr [eax*4 + 0x11a8dc0c] */
  switch (EAX) {
    case 0: goto L_11a8dae8;
    case 1: goto L_11a8db03;
    case 2: goto L_11a8daf1;
    case 3: goto L_11a8dafa;
    case 4: goto L_11a8dae8;
    case 5: goto L_11a8db1e;
    case 6: goto L_11a8db15;
    case 7: goto L_11a8db0c;
    default: x86_unimpl("switch@0x11a8dae1 out of table"); return;
  }
L_11a8dae8:;
  /* 11a8dae8 mov dword ptr [ebp - 4], 8 */
  w32((uint32_t)(EBP + -0x4), (0x8u));
  /* 11a8daef jmp 0x11a8db25 */
  goto L_11a8db25;
L_11a8daf1:;
  /* 11a8daf1 mov dword ptr [ebp - 4], 0x11 */
  w32((uint32_t)(EBP + -0x4), (0x11u));
  /* 11a8daf8 jmp 0x11a8db25 */
  goto L_11a8db25;
L_11a8dafa:;
  /* 11a8dafa mov dword ptr [ebp - 4], 0x12 */
  w32((uint32_t)(EBP + -0x4), (0x12u));
  /* 11a8db01 jmp 0x11a8db25 */
  goto L_11a8db25;
L_11a8db03:;
  /* 11a8db03 mov dword ptr [ebp - 4], 4 */
  w32((uint32_t)(EBP + -0x4), (0x4u));
  /* 11a8db0a jmp 0x11a8db25 */
  goto L_11a8db25;
L_11a8db0c:;
  /* 11a8db0c mov dword ptr [ebp - 4], 0x10 */
  w32((uint32_t)(EBP + -0x4), (0x10u));
  /* 11a8db13 jmp 0x11a8db25 */
  goto L_11a8db25;
L_11a8db15:;
  /* 11a8db15 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8db18 mov dword ptr [ecx], 1 */
  w32((uint32_t)(ECX), (0x1u));
L_11a8db1e:;
  /* 11a8db1e mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11a8db25:;
  /* 11a8db25 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8db29 je 0x11a8dbba */
  if (C.zf) goto L_11a8dbba;
  /* 11a8db2f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8db32 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a8db34 push eax */
  push32((uint32_t)(EAX));
  /* 11a8db35 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8db38 add ecx, 0x18 */
  { uint32_t _a=(ECX),_b=(0x18u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8db3b push ecx */
  push32((uint32_t)(ECX));
  /* 11a8db3c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8db3f push edx */
  push32((uint32_t)(EDX));
  /* 11a8db40 call 0x11a93e70 */
  push32(0x11a8db45u); f_11a93e70();
  /* 11a8db45 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8db48 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8db4a jne 0x11a8dbba */
  if (!C.zf) goto L_11a8dbba;
  /* 11a8db4c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8db4f mov dword ptr [ebp - 0x70], eax */
  w32((uint32_t)(EBP + -0x70), (EAX));
  /* 11a8db52 cmp dword ptr [ebp - 0x70], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8db56 je 0x11a8db66 */
  if (C.zf) goto L_11a8db66;
  /* 11a8db58 cmp dword ptr [ebp - 0x70], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8db5c je 0x11a8db66 */
  if (C.zf) goto L_11a8db66;
  /* 11a8db5e cmp dword ptr [ebp - 0x70], 0x1d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x1du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8db62 je 0x11a8db66 */
  if (C.zf) goto L_11a8db66;
  /* 11a8db64 jmp 0x11a8db8c */
  goto L_11a8db8c;
L_11a8db66:;
  /* 11a8db66 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a8db69 or ecx, 1 */
  { uint32_t _r=(ECX)|(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11a8db6c mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11a8db6f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a8db72 and edx, 0xffffffe1 */
  { uint32_t _r=(EDX)&(0xffffffe1u); EDX = (_r); fl_logic(_r,32); }
  /* 11a8db75 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11a8db78 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11a8db7b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8db7e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11a8db81 mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
  /* 11a8db84 mov edx, dword ptr [eax + 0x14] */
  EDX = (r32((uint32_t)(EAX + 0x14)));
  /* 11a8db87 mov dword ptr [ebp - 0x3c], edx */
  w32((uint32_t)(EBP + -0x3c), (EDX));
  /* 11a8db8a jmp 0x11a8db94 */
  goto L_11a8db94;
L_11a8db8c:;
  /* 11a8db8c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a8db8f and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11a8db91 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_11a8db94:;
  /* 11a8db94 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8db97 add ecx, 0x18 */
  { uint32_t _a=(ECX),_b=(0x18u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8db9a push ecx */
  push32((uint32_t)(ECX));
  /* 11a8db9b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8db9e add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8dba1 push edx */
  push32((uint32_t)(EDX));
  /* 11a8dba2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8dba5 push eax */
  push32((uint32_t)(EAX));
  /* 11a8dba6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8dba9 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8dbaa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8dbad push edx */
  push32((uint32_t)(EDX));
  /* 11a8dbae lea eax, [ebp - 0x68] */
  EAX = ((uint32_t)(EBP + -0x68));
  /* 11a8dbb1 push eax */
  push32((uint32_t)(EAX));
  /* 11a8dbb2 call 0x11a939a0 */
  push32(0x11a8dbb7u); f_11a939a0();
  /* 11a8dbb7 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a8dbba:;
  /* 11a8dbba push 0xffff */
  push32((uint32_t)(0xffffu));
  /* 11a8dbbf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8dbc2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a8dbc4 push edx */
  push32((uint32_t)(EDX));
  /* 11a8dbc5 call 0x11a943e0 */
  push32(0x11a8dbcau); f_11a943e0();
  /* 11a8dbca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8dbcd mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11a8dbd4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8dbd7 cmp dword ptr [eax], 8 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8dbda je 0x11a8dbf4 */
  if (C.zf) goto L_11a8dbf4;
  /* 11a8dbdc cmp dword ptr [0x11ab86f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11ab86f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8dbe3 jne 0x11a8dbf4 */
  if (!C.zf) goto L_11a8dbf4;
  /* 11a8dbe5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8dbe8 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8dbe9 call 0x11a94390 */
  push32(0x11a8dbeeu); f_11a94390();
  /* 11a8dbee add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8dbf1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11a8dbf4:;
  /* 11a8dbf4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8dbf8 jne 0x11a8dc08 */
  if (!C.zf) goto L_11a8dc08;
  /* 11a8dbfa mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8dbfd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a8dbff push eax */
  push32((uint32_t)(EAX));
  /* 11a8dc00 call 0x11a94290 */
  push32(0x11a8dc05u); f_11a94290();
  /* 11a8dc05 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a8dc08:;
  /* 11a8dc08 mov esp, ebp */
  ESP = (EBP);
  /* 11a8dc0a pop ebp */
  EBP = (pop32());
  /* 11a8dc0b ret  */
  ESPCHK(0x11a8dab0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc30 @ 0x11a8dc30 (31 bytes, 18 insns) */
void f_11a8dc30(void) {
  FTRACE(0x11a8dc30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8dc30 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8dc31 mov ebp, esp */
  EBP = (ESP);
  /* 11a8dc33 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8dc34 push ebx */
  push32((uint32_t)(EBX));
  /* 11a8dc35 push esi */
  push32((uint32_t)(ESI));
  /* 11a8dc36 push edi */
  push32((uint32_t)(EDI));
  /* 11a8dc37 wait  */
  /* wait (no observable integer/reg state) */
  /* 11a8dc38 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 11a8dc3b mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11a8dc3f push eax */
  push32((uint32_t)(EAX));
  /* 11a8dc40 call 0x11a8e020 */
  push32(0x11a8dc45u); f_11a8e020();
  /* 11a8dc45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8dc48 pop edi */
  EDI = (pop32());
  /* 11a8dc49 pop esi */
  ESI = (pop32());
  /* 11a8dc4a pop ebx */
  EBX = (pop32());
  /* 11a8dc4b mov esp, ebp */
  ESP = (EBP);
  /* 11a8dc4d pop ebp */
  EBP = (pop32());
  /* 11a8dc4e ret  */
  ESPCHK(0x11a8dc30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc50 @ 0x11a8dc50 (32 bytes, 18 insns) */
void f_11a8dc50(void) {
  FTRACE(0x11a8dc50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8dc50 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8dc51 mov ebp, esp */
  EBP = (ESP);
  /* 11a8dc53 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8dc54 push ebx */
  push32((uint32_t)(EBX));
  /* 11a8dc55 push esi */
  push32((uint32_t)(ESI));
  /* 11a8dc56 push edi */
  push32((uint32_t)(EDI));
  /* 11a8dc57 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 11a8dc5a fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 11a8dc5c mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11a8dc60 push eax */
  push32((uint32_t)(EAX));
  /* 11a8dc61 call 0x11a8e020 */
  push32(0x11a8dc66u); f_11a8e020();
  /* 11a8dc66 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8dc69 pop edi */
  EDI = (pop32());
  /* 11a8dc6a pop esi */
  ESI = (pop32());
  /* 11a8dc6b pop ebx */
  EBX = (pop32());
  /* 11a8dc6c mov esp, ebp */
  ESP = (EBP);
  /* 11a8dc6e pop ebp */
  EBP = (pop32());
  /* 11a8dc6f ret  */
  ESPCHK(0x11a8dc50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dc70 @ 0x11a8dc70 (79 bytes, 34 insns) */
void f_11a8dc70(void) {
  FTRACE(0x11a8dc70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8dc70 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8dc71 mov ebp, esp */
  EBP = (ESP);
  /* 11a8dc73 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8dc76 push ebx */
  push32((uint32_t)(EBX));
  /* 11a8dc77 push esi */
  push32((uint32_t)(ESI));
  /* 11a8dc78 push edi */
  push32((uint32_t)(EDI));
  /* 11a8dc79 wait  */
  /* wait (no observable integer/reg state) */
  /* 11a8dc7a fnstcw word ptr [ebp - 0x10] */
  w16((uint32_t)(EBP + -0x10), C.fcw);
  /* 11a8dc7d mov ax, word ptr [ebp - 0x10] */
  AX = (r16((uint32_t)(EBP + -0x10)));
  /* 11a8dc81 push eax */
  push32((uint32_t)(EAX));
  /* 11a8dc82 call 0x11a8dd40 */
  push32(0x11a8dc87u); f_11a8dd40();
  /* 11a8dc87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8dc8a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a8dc8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8dc90 and ecx, dword ptr [ebp + 0xc] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + 0xc))); ECX = (_r); fl_logic(_r,32); }
  /* 11a8dc93 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8dc96 not edx */
  EDX = (~(EDX));
  /* 11a8dc98 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8dc9b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8dc9d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a8dc9f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a8dca2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8dca5 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8dca6 call 0x11a8dec0 */
  push32(0x11a8dcabu); f_11a8dec0();
  /* 11a8dcab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8dcae mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11a8dcb2 fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 11a8dcb5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8dcb8 pop edi */
  EDI = (pop32());
  /* 11a8dcb9 pop esi */
  ESI = (pop32());
  /* 11a8dcba pop ebx */
  EBX = (pop32());
  /* 11a8dcbb mov esp, ebp */
  ESP = (EBP);
  /* 11a8dcbd pop ebp */
  EBP = (pop32());
  /* 11a8dcbe ret  */
  ESPCHK(0x11a8dc70u, _esp0);
  ESP += 4; return;
}

/* __controlfp @ 0x11a8dcc0 (26 bytes, 11 insns) */
void f_11a8dcc0(void) {
  FTRACE(0x11a8dcc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8dcc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8dcc1 mov ebp, esp */
  EBP = (ESP);
  /* 11a8dcc3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8dcc6 and eax, 0xfff7ffff */
  { uint32_t _r=(EAX)&(0xfff7ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8dccb push eax */
  push32((uint32_t)(EAX));
  /* 11a8dccc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8dccf push ecx */
  push32((uint32_t)(ECX));
  /* 11a8dcd0 call 0x11a8dc70 */
  push32(0x11a8dcd5u); f_11a8dc70();
  /* 11a8dcd5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8dcd8 pop ebp */
  EBP = (pop32());
  /* 11a8dcd9 ret  */
  ESPCHK(0x11a8dcc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dce0 @ 0x11a8dce0 (88 bytes, 33 insns) */
void f_11a8dce0(void) {
  FTRACE(0x11a8dce0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8dce0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8dce1 mov ebp, esp */
  EBP = (ESP);
  /* 11a8dce3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8dce6 push ebx */
  push32((uint32_t)(EBX));
  /* 11a8dce7 push esi */
  push32((uint32_t)(ESI));
  /* 11a8dce8 push edi */
  push32((uint32_t)(EDI));
  /* 11a8dce9 call 0x11a8cf30 */
  push32(0x11a8dceeu); f_11a8cf30();
  /* 11a8dcee mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 11a8dcf0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a8dcf3 fninit  */
  C.fptop=0; C.fcw=0x037f; C.fsw_c0=C.fsw_c1=C.fsw_c2=C.fsw_c3=0;
  /* 11a8dcf5 call 0x11a88380 */
  push32(0x11a8dcfau); f_11a88380();
  /* 11a8dcfa cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8dcfe je 0x11a8dd31 */
  if (C.zf) goto L_11a8dd31;
  /* 11a8dd00 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8dd03 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a8dd06 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a8dd08 and eax, 0x10008 */
  { uint32_t _r=(EAX)&(0x10008u); EAX = (_r); fl_logic(_r,32); }
  /* 11a8dd0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8dd0f je 0x11a8dd31 */
  if (C.zf) goto L_11a8dd31;
  /* 11a8dd11 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8dd14 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a8dd17 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8dd1a mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11a8dd1d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8dd20 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11a8dd27 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8dd2a mov dword ptr [ecx + 8], 0xffff */
  w32((uint32_t)(ECX + 0x8), (0xffffu));
L_11a8dd31:;
  /* 11a8dd31 pop edi */
  EDI = (pop32());
  /* 11a8dd32 pop esi */
  ESI = (pop32());
  /* 11a8dd33 pop ebx */
  EBX = (pop32());
  /* 11a8dd34 mov esp, ebp */
  ESP = (EBP);
  /* 11a8dd36 pop ebp */
  EBP = (pop32());
  /* 11a8dd37 ret  */
  ESPCHK(0x11a8dce0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dd40 @ 0x11a8dd40 (377 bytes, 115 insns) */
void f_11a8dd40(void) {
  FTRACE(0x11a8dd40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8dd40 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8dd41 mov ebp, esp */
  EBP = (ESP);
  /* 11a8dd43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8dd46 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11a8dd4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8dd50 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8dd55 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11a8dd58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8dd5a je 0x11a8dd65 */
  if (C.zf) goto L_11a8dd65;
  /* 11a8dd5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8dd5f or ecx, 0x10 */
  { uint32_t _r=(ECX)|(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11a8dd62 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11a8dd65:;
  /* 11a8dd65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8dd68 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a8dd6e and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11a8dd71 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a8dd73 je 0x11a8dd7d */
  if (C.zf) goto L_11a8dd7d;
  /* 11a8dd75 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8dd78 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 11a8dd7a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a8dd7d:;
  /* 11a8dd7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8dd80 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a8dd86 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11a8dd89 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a8dd8b je 0x11a8dd96 */
  if (C.zf) goto L_11a8dd96;
  /* 11a8dd8d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8dd90 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11a8dd93 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11a8dd96:;
  /* 11a8dd96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8dd99 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8dd9e and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11a8dda1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8dda3 je 0x11a8ddae */
  if (C.zf) goto L_11a8ddae;
  /* 11a8dda5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8dda8 or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11a8ddab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11a8ddae:;
  /* 11a8ddae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8ddb1 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a8ddb7 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11a8ddba test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a8ddbc je 0x11a8ddc6 */
  if (C.zf) goto L_11a8ddc6;
  /* 11a8ddbe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8ddc1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11a8ddc3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a8ddc6:;
  /* 11a8ddc6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8ddc9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a8ddcf and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11a8ddd2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a8ddd4 je 0x11a8dde2 */
  if (C.zf) goto L_11a8dde2;
  /* 11a8ddd6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8ddd9 or edx, 0x80000 */
  { uint32_t _r=(EDX)|(0x80000u); EDX = (_r); fl_logic(_r,32); }
  /* 11a8dddf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11a8dde2:;
  /* 11a8dde2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8dde5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8ddea and eax, 0xc00 */
  { uint32_t _r=(EAX)&(0xc00u); EAX = (_r); fl_logic(_r,32); }
  /* 11a8ddef mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a8ddf2 cmp dword ptr [ebp - 8], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8ddf9 jg 0x11a8de15 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a8de15;
  /* 11a8ddfb cmp dword ptr [ebp - 8], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8de02 je 0x11a8de28 */
  if (C.zf) goto L_11a8de28;
  /* 11a8de04 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8de08 je 0x11a8de20 */
  if (C.zf) goto L_11a8de20;
  /* 11a8de0a cmp dword ptr [ebp - 8], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8de11 je 0x11a8de33 */
  if (C.zf) goto L_11a8de33;
  /* 11a8de13 jmp 0x11a8de47 */
  goto L_11a8de47;
L_11a8de15:;
  /* 11a8de15 cmp dword ptr [ebp - 8], 0xc00 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8de1c je 0x11a8de3e */
  if (C.zf) goto L_11a8de3e;
  /* 11a8de1e jmp 0x11a8de47 */
  goto L_11a8de47;
L_11a8de20:;
  /* 11a8de20 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8de23 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a8de26 jmp 0x11a8de47 */
  goto L_11a8de47;
L_11a8de28:;
  /* 11a8de28 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8de2b or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11a8de2e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a8de31 jmp 0x11a8de47 */
  goto L_11a8de47;
L_11a8de33:;
  /* 11a8de33 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8de36 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11a8de39 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a8de3c jmp 0x11a8de47 */
  goto L_11a8de47;
L_11a8de3e:;
  /* 11a8de3e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8de41 or ch, 3 */
  { uint32_t _r=(C.c.b.h)|(0x3u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11a8de44 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11a8de47:;
  /* 11a8de47 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8de4a and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a8de50 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 11a8de56 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11a8de59 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8de5d je 0x11a8de89 */
  if (C.zf) goto L_11a8de89;
  /* 11a8de5f cmp dword ptr [ebp - 0xc], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8de66 je 0x11a8de7b */
  if (C.zf) goto L_11a8de7b;
  /* 11a8de68 cmp dword ptr [ebp - 0xc], 0x300 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8de6f je 0x11a8de73 */
  if (C.zf) goto L_11a8de73;
  /* 11a8de71 jmp 0x11a8de95 */
  goto L_11a8de95;
L_11a8de73:;
  /* 11a8de73 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8de76 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a8de79 jmp 0x11a8de95 */
  goto L_11a8de95;
L_11a8de7b:;
  /* 11a8de7b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8de7e or ecx, 0x10000 */
  { uint32_t _r=(ECX)|(0x10000u); ECX = (_r); fl_logic(_r,32); }
  /* 11a8de84 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a8de87 jmp 0x11a8de95 */
  goto L_11a8de95;
L_11a8de89:;
  /* 11a8de89 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8de8c or edx, 0x20000 */
  { uint32_t _r=(EDX)|(0x20000u); EDX = (_r); fl_logic(_r,32); }
  /* 11a8de92 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11a8de95:;
  /* 11a8de95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8de98 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8de9d and eax, 0x1000 */
  { uint32_t _r=(EAX)&(0x1000u); EAX = (_r); fl_logic(_r,32); }
  /* 11a8dea2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8dea4 je 0x11a8deb2 */
  if (C.zf) goto L_11a8deb2;
  /* 11a8dea6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8dea9 or ecx, 0x40000 */
  { uint32_t _r=(ECX)|(0x40000u); ECX = (_r); fl_logic(_r,32); }
  /* 11a8deaf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11a8deb2:;
  /* 11a8deb2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8deb5 mov esp, ebp */
  ESP = (EBP);
  /* 11a8deb7 pop ebp */
  EBP = (pop32());
  /* 11a8deb8 ret  */
  ESPCHK(0x11a8dd40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dec0 @ 0x11a8dec0 (346 bytes, 106 insns) */
void f_11a8dec0(void) {
  FTRACE(0x11a8dec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8dec0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8dec1 mov ebp, esp */
  EBP = (ESP);
  /* 11a8dec3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8dec6 mov word ptr [ebp - 4], 0 */
  w16((uint32_t)(EBP + -0x4), (0x0u));
  /* 11a8decc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8decf and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11a8ded2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8ded4 je 0x11a8dee1 */
  if (C.zf) goto L_11a8dee1;
  /* 11a8ded6 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11a8deda or cl, 1 */
  { uint32_t _r=(CL)|(0x1u); CL = (_r); fl_logic(_r,8); }
  /* 11a8dedd mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_11a8dee1:;
  /* 11a8dee1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8dee4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11a8dee7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a8dee9 je 0x11a8def5 */
  if (C.zf) goto L_11a8def5;
  /* 11a8deeb mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11a8deef or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11a8def1 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
L_11a8def5:;
  /* 11a8def5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8def8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11a8defb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a8defd je 0x11a8df0a */
  if (C.zf) goto L_11a8df0a;
  /* 11a8deff mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11a8df03 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 11a8df06 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_11a8df0a:;
  /* 11a8df0a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8df0d and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 11a8df10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8df12 je 0x11a8df1f */
  if (C.zf) goto L_11a8df1f;
  /* 11a8df14 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11a8df18 or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 11a8df1b mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_11a8df1f:;
  /* 11a8df1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8df22 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11a8df25 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a8df27 je 0x11a8df33 */
  if (C.zf) goto L_11a8df33;
  /* 11a8df29 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11a8df2d or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11a8df2f mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
L_11a8df33:;
  /* 11a8df33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8df36 and ecx, 0x80000 */
  { uint32_t _r=(ECX)&(0x80000u); ECX = (_r); fl_logic(_r,32); }
  /* 11a8df3c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a8df3e je 0x11a8df4b */
  if (C.zf) goto L_11a8df4b;
  /* 11a8df40 mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11a8df44 or dl, 2 */
  { uint32_t _r=(DL)|(0x2u); DL = (_r); fl_logic(_r,8); }
  /* 11a8df47 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_11a8df4b:;
  /* 11a8df4b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8df4e and eax, 0x300 */
  { uint32_t _r=(EAX)&(0x300u); EAX = (_r); fl_logic(_r,32); }
  /* 11a8df53 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a8df56 cmp dword ptr [ebp - 8], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8df5d ja 0x11a8df79 */
  if ((!C.cf&&!C.zf)) goto L_11a8df79;
  /* 11a8df5f cmp dword ptr [ebp - 8], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8df66 je 0x11a8df8e */
  if (C.zf) goto L_11a8df8e;
  /* 11a8df68 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8df6c je 0x11a8df84 */
  if (C.zf) goto L_11a8df84;
  /* 11a8df6e cmp dword ptr [ebp - 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8df75 je 0x11a8df9b */
  if (C.zf) goto L_11a8df9b;
  /* 11a8df77 jmp 0x11a8dfb3 */
  goto L_11a8dfb3;
L_11a8df79:;
  /* 11a8df79 cmp dword ptr [ebp - 8], 0x300 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8df80 je 0x11a8dfa8 */
  if (C.zf) goto L_11a8dfa8;
  /* 11a8df82 jmp 0x11a8dfb3 */
  goto L_11a8dfb3;
L_11a8df84:;
  /* 11a8df84 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11a8df88 mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11a8df8c jmp 0x11a8dfb3 */
  goto L_11a8dfb3;
L_11a8df8e:;
  /* 11a8df8e mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11a8df92 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11a8df95 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
  /* 11a8df99 jmp 0x11a8dfb3 */
  goto L_11a8dfb3;
L_11a8df9b:;
  /* 11a8df9b mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11a8df9f or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 11a8dfa2 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11a8dfa6 jmp 0x11a8dfb3 */
  goto L_11a8dfb3;
L_11a8dfa8:;
  /* 11a8dfa8 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11a8dfac or ch, 0xc */
  { uint32_t _r=(C.c.b.h)|(0xcu); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11a8dfaf mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_11a8dfb3:;
  /* 11a8dfb3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8dfb6 and edx, 0x30000 */
  { uint32_t _r=(EDX)&(0x30000u); EDX = (_r); fl_logic(_r,32); }
  /* 11a8dfbc mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11a8dfbf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8dfc3 je 0x11a8dfd9 */
  if (C.zf) goto L_11a8dfd9;
  /* 11a8dfc5 cmp dword ptr [ebp - 0xc], 0x10000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x10000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8dfcc je 0x11a8dfe6 */
  if (C.zf) goto L_11a8dfe6;
  /* 11a8dfce cmp dword ptr [ebp - 0xc], 0x20000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8dfd5 je 0x11a8dff3 */
  if (C.zf) goto L_11a8dff3;
  /* 11a8dfd7 jmp 0x11a8dffb */
  goto L_11a8dffb;
L_11a8dfd9:;
  /* 11a8dfd9 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11a8dfdd or ah, 3 */
  { uint32_t _r=(AH)|(0x3u); AH = (_r); fl_logic(_r,8); }
  /* 11a8dfe0 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11a8dfe4 jmp 0x11a8dffb */
  goto L_11a8dffb;
L_11a8dfe6:;
  /* 11a8dfe6 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11a8dfea or ch, 2 */
  { uint32_t _r=(C.c.b.h)|(0x2u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11a8dfed mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11a8dff1 jmp 0x11a8dffb */
  goto L_11a8dffb;
L_11a8dff3:;
  /* 11a8dff3 mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11a8dff7 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_11a8dffb:;
  /* 11a8dffb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8dffe and eax, 0x40000 */
  { uint32_t _r=(EAX)&(0x40000u); EAX = (_r); fl_logic(_r,32); }
  /* 11a8e003 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8e005 je 0x11a8e012 */
  if (C.zf) goto L_11a8e012;
  /* 11a8e007 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11a8e00b or ch, 0x10 */
  { uint32_t _r=(C.c.b.h)|(0x10u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11a8e00e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_11a8e012:;
  /* 11a8e012 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11a8e016 mov esp, ebp */
  ESP = (EBP);
  /* 11a8e018 pop ebp */
  EBP = (pop32());
  /* 11a8e019 ret  */
  ESPCHK(0x11a8dec0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e020 @ 0x11a8e020 (167 bytes, 56 insns) */
void f_11a8e020(void) {
  FTRACE(0x11a8e020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8e020 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8e021 mov ebp, esp */
  EBP = (ESP);
  /* 11a8e023 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8e024 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11a8e02b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e02e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8e033 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11a8e036 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8e038 je 0x11a8e043 */
  if (C.zf) goto L_11a8e043;
  /* 11a8e03a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8e03d or ecx, 0x10 */
  { uint32_t _r=(ECX)|(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11a8e040 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11a8e043:;
  /* 11a8e043 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e046 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a8e04c and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11a8e04f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a8e051 je 0x11a8e05b */
  if (C.zf) goto L_11a8e05b;
  /* 11a8e053 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8e056 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 11a8e058 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a8e05b:;
  /* 11a8e05b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e05e and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a8e064 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11a8e067 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a8e069 je 0x11a8e074 */
  if (C.zf) goto L_11a8e074;
  /* 11a8e06b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8e06e or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11a8e071 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11a8e074:;
  /* 11a8e074 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e077 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8e07c and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11a8e07f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8e081 je 0x11a8e08c */
  if (C.zf) goto L_11a8e08c;
  /* 11a8e083 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8e086 or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11a8e089 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11a8e08c:;
  /* 11a8e08c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e08f and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a8e095 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11a8e098 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a8e09a je 0x11a8e0a4 */
  if (C.zf) goto L_11a8e0a4;
  /* 11a8e09c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8e09f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11a8e0a1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a8e0a4:;
  /* 11a8e0a4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e0a7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a8e0ad and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11a8e0b0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a8e0b2 je 0x11a8e0c0 */
  if (C.zf) goto L_11a8e0c0;
  /* 11a8e0b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8e0b7 or edx, 0x80000 */
  { uint32_t _r=(EDX)|(0x80000u); EDX = (_r); fl_logic(_r,32); }
  /* 11a8e0bd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11a8e0c0:;
  /* 11a8e0c0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8e0c3 mov esp, ebp */
  ESP = (EBP);
  /* 11a8e0c5 pop ebp */
  EBP = (pop32());
  /* 11a8e0c6 ret  */
  ESPCHK(0x11a8e020u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e0d0 @ 0x11a8e0d0 (183 bytes, 58 insns) */
void f_11a8e0d0(void) {
  FTRACE(0x11a8e0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8e0d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8e0d1 mov ebp, esp */
  EBP = (ESP);
  /* 11a8e0d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8e0d6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e0d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8e0dc cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8e0e1 ja 0x11a8e0fa */
  if ((!C.cf&&!C.zf)) goto L_11a8e0fa;
  /* 11a8e0e3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e0e6 mov edx, dword ptr [0x11ab7ec0] */
  EDX = (r32((uint32_t)(0x11ab7ec0)));
  /* 11a8e0ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8e0ee mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11a8e0f2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11a8e0f5 jmp 0x11a8e183 */
  goto L_11a8e183;
L_11a8e0fa:;
  /* 11a8e0fa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e0fd sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11a8e100 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a8e106 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a8e10c mov edx, dword ptr [0x11ab7ec0] */
  EDX = (r32((uint32_t)(0x11ab7ec0)));
  /* 11a8e112 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8e114 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11a8e118 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11a8e11d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8e11f je 0x11a8e143 */
  if (C.zf) goto L_11a8e143;
  /* 11a8e121 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e124 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11a8e127 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a8e12d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 11a8e130 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 11a8e133 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 11a8e136 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 11a8e13a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 11a8e141 jmp 0x11a8e154 */
  goto L_11a8e154;
L_11a8e143:;
  /* 11a8e143 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11a8e146 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 11a8e149 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 11a8e14d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11a8e154:;
  /* 11a8e154 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a8e156 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8e158 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8e15a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11a8e15d push ecx */
  push32((uint32_t)(ECX));
  /* 11a8e15e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8e161 push edx */
  push32((uint32_t)(EDX));
  /* 11a8e162 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11a8e165 push eax */
  push32((uint32_t)(EAX));
  /* 11a8e166 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a8e168 call 0x11a944a0 */
  push32(0x11a8e16du); f_11a944a0();
  /* 11a8e16d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8e170 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8e172 jne 0x11a8e178 */
  if (!C.zf) goto L_11a8e178;
  /* 11a8e174 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8e176 jmp 0x11a8e183 */
  goto L_11a8e183;
L_11a8e178:;
  /* 11a8e178 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8e17b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8e180 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_11a8e183:;
  /* 11a8e183 mov esp, ebp */
  ESP = (EBP);
  /* 11a8e185 pop ebp */
  EBP = (pop32());
  /* 11a8e186 ret  */
  ESPCHK(0x11a8e0d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e190 @ 0x11a8e190 (11 bytes, 6 insns) */
void f_11a8e190(void) {
  FTRACE(0x11a8e190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8e190 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8e191 mov ebp, esp */
  EBP = (ESP);
  /* 11a8e193 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e196 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8e199 pop ebp */
  EBP = (pop32());
  /* 11a8e19a ret  */
  ESPCHK(0x11a8e190u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e1a0 @ 0x11a8e1a0 (147 bytes, 43 insns) */
void f_11a8e1a0(void) {
  FTRACE(0x11a8e1a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8e1a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8e1a1 mov ebp, esp */
  EBP = (ESP);
  /* 11a8e1a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8e1a4 cmp dword ptr [0x11aba2c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba2c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8e1ab jne 0x11a8e1c7 */
  if (!C.zf) goto L_11a8e1c7;
  /* 11a8e1ad cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8e1b1 jl 0x11a8e1c2 */
  if ((C.sf!=C.of)) goto L_11a8e1c2;
  /* 11a8e1b3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8e1b7 jg 0x11a8e1c2 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a8e1c2;
  /* 11a8e1b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e1bc add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8e1bf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11a8e1c2:;
  /* 11a8e1c2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e1c5 jmp 0x11a8e22f */
  goto L_11a8e22f;
L_11a8e1c7:;
  /* 11a8e1c7 push 0x11aba44c */
  push32((uint32_t)(0x11aba44cu));
  /* 11a8e1cc call dword ptr [0x11abc3a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3a4))), 0x11a8e1d2u);
  /* 11a8e1d2 cmp dword ptr [0x11aba43c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba43c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8e1d9 je 0x11a8e1f9 */
  if (C.zf) goto L_11a8e1f9;
  /* 11a8e1db push 0x11aba44c */
  push32((uint32_t)(0x11aba44cu));
  /* 11a8e1e0 call dword ptr [0x11abc394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc394))), 0x11a8e1e6u);
  /* 11a8e1e6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11a8e1e8 call 0x11a8f2d0 */
  push32(0x11a8e1edu); f_11a8f2d0();
  /* 11a8e1ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8e1f0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11a8e1f7 jmp 0x11a8e200 */
  goto L_11a8e200;
L_11a8e1f9:;
  /* 11a8e1f9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11a8e200:;
  /* 11a8e200 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e203 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8e204 call 0x11a8e240 */
  push32(0x11a8e209u); f_11a8e240();
  /* 11a8e209 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8e20c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11a8e20f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8e213 je 0x11a8e221 */
  if (C.zf) goto L_11a8e221;
  /* 11a8e215 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11a8e217 call 0x11a8f370 */
  push32(0x11a8e21cu); f_11a8f370();
  /* 11a8e21c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8e21f jmp 0x11a8e22c */
  goto L_11a8e22c;
L_11a8e221:;
  /* 11a8e221 push 0x11aba44c */
  push32((uint32_t)(0x11aba44cu));
  /* 11a8e226 call dword ptr [0x11abc394] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc394))), 0x11a8e22cu);
L_11a8e22c:;
  /* 11a8e22c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11a8e22f:;
  /* 11a8e22f mov esp, ebp */
  ESP = (EBP);
  /* 11a8e231 pop ebp */
  EBP = (pop32());
  /* 11a8e232 ret  */
  ESPCHK(0x11a8e1a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e240 @ 0x11a8e240 (299 bytes, 91 insns) */
void f_11a8e240(void) {
  FTRACE(0x11a8e240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8e240 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8e241 mov ebp, esp */
  EBP = (ESP);
  /* 11a8e243 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8e246 cmp dword ptr [0x11aba2c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba2c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8e24d jne 0x11a8e26c */
  if (!C.zf) goto L_11a8e26c;
  /* 11a8e24f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8e253 jl 0x11a8e264 */
  if ((C.sf!=C.of)) goto L_11a8e264;
  /* 11a8e255 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8e259 jg 0x11a8e264 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a8e264;
  /* 11a8e25b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e25e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8e261 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11a8e264:;
  /* 11a8e264 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e267 jmp 0x11a8e367 */
  goto L_11a8e367;
L_11a8e26c:;
  /* 11a8e26c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8e273 jge 0x11a8e2b3 */
  if ((C.sf==C.of)) goto L_11a8e2b3;
  /* 11a8e275 cmp dword ptr [0x11ab80d0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11ab80d0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8e27c jle 0x11a8e291 */
  if ((C.zf||C.sf!=C.of)) goto L_11a8e291;
  /* 11a8e27e push 1 */
  push32((uint32_t)(0x1u));
  /* 11a8e280 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e283 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8e284 call 0x11a8e0d0 */
  push32(0x11a8e289u); f_11a8e0d0();
  /* 11a8e289 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8e28c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11a8e28f jmp 0x11a8e2a5 */
  goto L_11a8e2a5;
L_11a8e291:;
  /* 11a8e291 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e294 mov eax, dword ptr [0x11ab7ec0] */
  EAX = (r32((uint32_t)(0x11ab7ec0)));
  /* 11a8e299 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a8e29b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11a8e29f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11a8e2a2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11a8e2a5:;
  /* 11a8e2a5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8e2a9 jne 0x11a8e2b3 */
  if (!C.zf) goto L_11a8e2b3;
  /* 11a8e2ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e2ae jmp 0x11a8e367 */
  goto L_11a8e367;
L_11a8e2b3:;
  /* 11a8e2b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e2b6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11a8e2b9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a8e2bf and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a8e2c5 mov eax, dword ptr [0x11ab7ec0] */
  EAX = (r32((uint32_t)(0x11ab7ec0)));
  /* 11a8e2ca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a8e2cc mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11a8e2d0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11a8e2d6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a8e2d8 je 0x11a8e2fc */
  if (C.zf) goto L_11a8e2fc;
  /* 11a8e2da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e2dd sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11a8e2e0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a8e2e6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 11a8e2e9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11a8e2ec mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 11a8e2ef mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 11a8e2f3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11a8e2fa jmp 0x11a8e30d */
  goto L_11a8e30d;
L_11a8e2fc:;
  /* 11a8e2fc mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 11a8e2ff mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11a8e302 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 11a8e306 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_11a8e30d:;
  /* 11a8e30d push 1 */
  push32((uint32_t)(0x1u));
  /* 11a8e30f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8e311 push 3 */
  push32((uint32_t)(0x3u));
  /* 11a8e313 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11a8e316 push edx */
  push32((uint32_t)(EDX));
  /* 11a8e317 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8e31a push eax */
  push32((uint32_t)(EAX));
  /* 11a8e31b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11a8e31e push ecx */
  push32((uint32_t)(ECX));
  /* 11a8e31f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11a8e324 mov edx, dword ptr [0x11aba2c8] */
  EDX = (r32((uint32_t)(0x11aba2c8)));
  /* 11a8e32a push edx */
  push32((uint32_t)(EDX));
  /* 11a8e32b call 0x11a94660 */
  push32(0x11a8e330u); f_11a94660();
  /* 11a8e330 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8e333 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a8e336 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8e33a jne 0x11a8e341 */
  if (!C.zf) goto L_11a8e341;
  /* 11a8e33c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e33f jmp 0x11a8e367 */
  goto L_11a8e367;
L_11a8e341:;
  /* 11a8e341 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8e345 jne 0x11a8e351 */
  if (!C.zf) goto L_11a8e351;
  /* 11a8e347 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8e34a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8e34f jmp 0x11a8e367 */
  goto L_11a8e367;
L_11a8e351:;
  /* 11a8e351 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8e354 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8e359 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 11a8e35c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a8e362 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11a8e365 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11a8e367:;
  /* 11a8e367 mov esp, ebp */
  ESP = (EBP);
  /* 11a8e369 pop ebp */
  EBP = (pop32());
  /* 11a8e36a ret  */
  ESPCHK(0x11a8e240u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e370 @ 0x11a8e370 (132 bytes, 51 insns) */
void f_11a8e370(void) {
  FTRACE(0x11a8e370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8e370 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8e371 mov ebp, esp */
  EBP = (ESP);
  /* 11a8e373 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8e376 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8e379 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a8e37a and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11a8e37d add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8e37f sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11a8e382 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11a8e385 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8e388 and eax, 0x8000001f */
  { uint32_t _r=(EAX)&(0x8000001fu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8e38d jns 0x11a8e394 */
  if (!C.sf) goto L_11a8e394;
  /* 11a8e38f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a8e390 or eax, 0xffffffe0 */
  { uint32_t _r=(EAX)|(0xffffffe0u); EAX = (_r); fl_logic(_r,32); }
  /* 11a8e393 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11a8e394:;
  /* 11a8e394 mov ecx, 0x1f */
  ECX = (0x1fu);
  /* 11a8e399 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8e39b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a8e39e or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a8e3a1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8e3a4 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a8e3a6 not edx */
  EDX = (~(EDX));
  /* 11a8e3a8 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11a8e3ab mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8e3ae mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e3b1 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11a8e3b4 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11a8e3b7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a8e3b9 je 0x11a8e3bf */
  if (C.zf) goto L_11a8e3bf;
  /* 11a8e3bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8e3bd jmp 0x11a8e3f0 */
  goto L_11a8e3f0;
L_11a8e3bf:;
  /* 11a8e3bf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8e3c2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8e3c5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11a8e3c8 jmp 0x11a8e3d3 */
  goto L_11a8e3d3;
L_11a8e3ca:;
  /* 11a8e3ca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8e3cd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8e3d0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11a8e3d3:;
  /* 11a8e3d3 cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8e3d7 jge 0x11a8e3eb */
  if ((C.sf==C.of)) goto L_11a8e3eb;
  /* 11a8e3d9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8e3dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e3df cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8e3e3 je 0x11a8e3e9 */
  if (C.zf) goto L_11a8e3e9;
  /* 11a8e3e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8e3e7 jmp 0x11a8e3f0 */
  goto L_11a8e3f0;
L_11a8e3e9:;
  /* 11a8e3e9 jmp 0x11a8e3ca */
  goto L_11a8e3ca;
L_11a8e3eb:;
  /* 11a8e3eb mov eax, 1 */
  EAX = (0x1u);
L_11a8e3f0:;
  /* 11a8e3f0 mov esp, ebp */
  ESP = (EBP);
  /* 11a8e3f2 pop ebp */
  EBP = (pop32());
  /* 11a8e3f3 ret  */
  ESPCHK(0x11a8e370u, _esp0);
  ESP += 4; return;
}

/* __IncMan @ 0x11a8e400 (168 bytes, 63 insns) */
void f_11a8e400(void) {
  FTRACE(0x11a8e400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8e400 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8e401 mov ebp, esp */
  EBP = (ESP);
  /* 11a8e403 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8e406 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8e409 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a8e40a and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11a8e40d add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8e40f sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11a8e412 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11a8e415 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8e418 and eax, 0x8000001f */
  { uint32_t _r=(EAX)&(0x8000001fu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8e41d jns 0x11a8e424 */
  if (!C.sf) goto L_11a8e424;
  /* 11a8e41f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a8e420 or eax, 0xffffffe0 */
  { uint32_t _r=(EAX)|(0xffffffe0u); EAX = (_r); fl_logic(_r,32); }
  /* 11a8e423 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11a8e424:;
  /* 11a8e424 mov ecx, 0x1f */
  ECX = (0x1fu);
  /* 11a8e429 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8e42b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a8e42e mov edx, 1 */
  EDX = (0x1u);
  /* 11a8e433 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8e436 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a8e438 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11a8e43b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8e43e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e441 lea edx, [ecx + eax*4] */
  EDX = ((uint32_t)(ECX + EAX*4));
  /* 11a8e444 push edx */
  push32((uint32_t)(EDX));
  /* 11a8e445 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8e448 push eax */
  push32((uint32_t)(EAX));
  /* 11a8e449 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8e44c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e44f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11a8e452 push eax */
  push32((uint32_t)(EAX));
  /* 11a8e453 call 0x11a949c0 */
  push32(0x11a8e458u); f_11a949c0();
  /* 11a8e458 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8e45b mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11a8e45e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8e461 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8e464 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a8e467 jmp 0x11a8e472 */
  goto L_11a8e472;
L_11a8e469:;
  /* 11a8e469 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8e46c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8e46f mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11a8e472:;
  /* 11a8e472 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8e476 jl 0x11a8e4a1 */
  if ((C.sf!=C.of)) goto L_11a8e4a1;
  /* 11a8e478 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8e47c je 0x11a8e4a1 */
  if (C.zf) goto L_11a8e4a1;
  /* 11a8e47e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8e481 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e484 lea edx, [ecx + eax*4] */
  EDX = ((uint32_t)(ECX + EAX*4));
  /* 11a8e487 push edx */
  push32((uint32_t)(EDX));
  /* 11a8e488 push 1 */
  push32((uint32_t)(0x1u));
  /* 11a8e48a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8e48d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e490 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11a8e493 push edx */
  push32((uint32_t)(EDX));
  /* 11a8e494 call 0x11a949c0 */
  push32(0x11a8e499u); f_11a949c0();
  /* 11a8e499 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8e49c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11a8e49f jmp 0x11a8e469 */
  goto L_11a8e469;
L_11a8e4a1:;
  /* 11a8e4a1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a8e4a4 mov esp, ebp */
  ESP = (EBP);
  /* 11a8e4a6 pop ebp */
  EBP = (pop32());
  /* 11a8e4a7 ret  */
  ESPCHK(0x11a8e400u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e4b0 @ 0x11a8e4b0 (219 bytes, 78 insns) */
void f_11a8e4b0(void) {
  FTRACE(0x11a8e4b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8e4b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8e4b1 mov ebp, esp */
  EBP = (ESP);
  /* 11a8e4b3 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8e4b6 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11a8e4bd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8e4c0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8e4c3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a8e4c6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8e4c9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8e4cc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a8e4cf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8e4d2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a8e4d3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11a8e4d6 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8e4d8 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11a8e4db mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11a8e4de mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8e4e1 and edx, 0x8000001f */
  { uint32_t _r=(EDX)&(0x8000001fu); EDX = (_r); fl_logic(_r,32); }
  /* 11a8e4e7 jns 0x11a8e4ee */
  if (!C.sf) goto L_11a8e4ee;
  /* 11a8e4e9 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11a8e4ea or edx, 0xffffffe0 */
  { uint32_t _r=(EDX)|(0xffffffe0u); EDX = (_r); fl_logic(_r,32); }
  /* 11a8e4ed inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
L_11a8e4ee:;
  /* 11a8e4ee mov eax, 0x1f */
  EAX = (0x1fu);
  /* 11a8e4f3 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8e4f5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a8e4f8 mov edx, 1 */
  EDX = (0x1u);
  /* 11a8e4fd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8e500 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a8e502 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11a8e505 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a8e508 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e50b mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11a8e50e and edx, dword ptr [ebp - 0x1c] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x1c))); EDX = (_r); fl_logic(_r,32); }
  /* 11a8e511 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a8e513 je 0x11a8e53f */
  if (C.zf) goto L_11a8e53f;
  /* 11a8e515 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8e518 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8e51b push eax */
  push32((uint32_t)(EAX));
  /* 11a8e51c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e51f push ecx */
  push32((uint32_t)(ECX));
  /* 11a8e520 call 0x11a8e370 */
  push32(0x11a8e525u); f_11a8e370();
  /* 11a8e525 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8e528 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8e52a jne 0x11a8e53f */
  if (!C.zf) goto L_11a8e53f;
  /* 11a8e52c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8e52f push edx */
  push32((uint32_t)(EDX));
  /* 11a8e530 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e533 push eax */
  push32((uint32_t)(EAX));
  /* 11a8e534 call 0x11a8e400 */
  push32(0x11a8e539u); f_11a8e400();
  /* 11a8e539 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8e53c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11a8e53f:;
  /* 11a8e53f or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a8e542 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8e545 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a8e547 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a8e54a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e54d mov eax, dword ptr [ecx + eax*4] */
  EAX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11a8e550 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8e552 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a8e555 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e558 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11a8e55b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a8e55e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8e561 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11a8e564 jmp 0x11a8e56f */
  goto L_11a8e56f;
L_11a8e566:;
  /* 11a8e566 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a8e569 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8e56c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11a8e56f:;
  /* 11a8e56f cmp dword ptr [ebp - 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8e573 jge 0x11a8e584 */
  if ((C.sf==C.of)) goto L_11a8e584;
  /* 11a8e575 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a8e578 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e57b mov dword ptr [eax + edx*4], 0 */
  w32((uint32_t)(EAX + EDX*4), (0x0u));
  /* 11a8e582 jmp 0x11a8e566 */
  goto L_11a8e566;
L_11a8e584:;
  /* 11a8e584 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a8e587 mov esp, ebp */
  ESP = (EBP);
  /* 11a8e589 pop ebp */
  EBP = (pop32());
  /* 11a8e58a ret  */
  ESPCHK(0x11a8e4b0u, _esp0);
  ESP += 4; return;
}

/* __CopyMan @ 0x11a8e590 (76 bytes, 28 insns) */
void f_11a8e590(void) {
  FTRACE(0x11a8e590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8e590 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8e591 mov ebp, esp */
  EBP = (ESP);
  /* 11a8e593 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8e596 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8e599 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a8e59c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e59f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a8e5a2 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11a8e5a9 jmp 0x11a8e5b4 */
  goto L_11a8e5b4;
L_11a8e5ab:;
  /* 11a8e5ab mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8e5ae add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8e5b1 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11a8e5b4:;
  /* 11a8e5b4 cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8e5b8 jge 0x11a8e5d8 */
  if ((C.sf==C.of)) goto L_11a8e5d8;
  /* 11a8e5ba mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8e5bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8e5c0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a8e5c2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11a8e5c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8e5c7 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8e5ca mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a8e5cd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8e5d0 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8e5d3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a8e5d6 jmp 0x11a8e5ab */
  goto L_11a8e5ab;
L_11a8e5d8:;
  /* 11a8e5d8 mov esp, ebp */
  ESP = (EBP);
  /* 11a8e5da pop ebp */
  EBP = (pop32());
  /* 11a8e5db ret  */
  ESPCHK(0x11a8e590u, _esp0);
  ESP += 4; return;
}

/* __FillZeroMan @ 0x11a8e5e0 (47 bytes, 17 insns) */
void f_11a8e5e0(void) {
  FTRACE(0x11a8e5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8e5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8e5e1 mov ebp, esp */
  EBP = (ESP);
  /* 11a8e5e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8e5e4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11a8e5eb jmp 0x11a8e5f6 */
  goto L_11a8e5f6;
L_11a8e5ed:;
  /* 11a8e5ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8e5f0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8e5f3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a8e5f6:;
  /* 11a8e5f6 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8e5fa jge 0x11a8e60b */
  if ((C.sf==C.of)) goto L_11a8e60b;
  /* 11a8e5fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8e5ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e602 mov dword ptr [edx + ecx*4], 0 */
  w32((uint32_t)(EDX + ECX*4), (0x0u));
  /* 11a8e609 jmp 0x11a8e5ed */
  goto L_11a8e5ed;
L_11a8e60b:;
  /* 11a8e60b mov esp, ebp */
  ESP = (EBP);
  /* 11a8e60d pop ebp */
  EBP = (pop32());
  /* 11a8e60e ret  */
  ESPCHK(0x11a8e5e0u, _esp0);
  ESP += 4; return;
}

/* __IsZeroMan @ 0x11a8e610 (55 bytes, 21 insns) */
void f_11a8e610(void) {
  FTRACE(0x11a8e610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8e610 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8e611 mov ebp, esp */
  EBP = (ESP);
  /* 11a8e613 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8e614 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11a8e61b jmp 0x11a8e626 */
  goto L_11a8e626;
L_11a8e61d:;
  /* 11a8e61d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8e620 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8e623 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a8e626:;
  /* 11a8e626 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8e62a jge 0x11a8e63e */
  if ((C.sf==C.of)) goto L_11a8e63e;
  /* 11a8e62c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8e62f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e632 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8e636 je 0x11a8e63c */
  if (C.zf) goto L_11a8e63c;
  /* 11a8e638 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8e63a jmp 0x11a8e643 */
  goto L_11a8e643;
L_11a8e63c:;
  /* 11a8e63c jmp 0x11a8e61d */
  goto L_11a8e61d;
L_11a8e63e:;
  /* 11a8e63e mov eax, 1 */
  EAX = (0x1u);
L_11a8e643:;
  /* 11a8e643 mov esp, ebp */
  ESP = (EBP);
  /* 11a8e645 pop ebp */
  EBP = (pop32());
  /* 11a8e646 ret  */
  ESPCHK(0x11a8e610u, _esp0);
  ESP += 4; return;
}

/* __ShrMan @ 0x11a8e650 (236 bytes, 82 insns) */
void f_11a8e650(void) {
  FTRACE(0x11a8e650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8e650 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8e651 mov ebp, esp */
  EBP = (ESP);
  /* 11a8e653 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8e656 push esi */
  push32((uint32_t)(ESI));
  /* 11a8e657 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8e65a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11a8e65b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11a8e65e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8e660 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11a8e663 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11a8e666 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8e669 and eax, 0x8000001f */
  { uint32_t _r=(EAX)&(0x8000001fu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8e66e jns 0x11a8e675 */
  if (!C.sf) goto L_11a8e675;
  /* 11a8e670 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11a8e671 or eax, 0xffffffe0 */
  { uint32_t _r=(EAX)|(0xffffffe0u); EAX = (_r); fl_logic(_r,32); }
  /* 11a8e674 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11a8e675:;
  /* 11a8e675 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a8e678 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a8e67b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8e67e shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a8e680 not edx */
  EDX = (~(EDX));
  /* 11a8e682 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11a8e685 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11a8e68c mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11a8e693 jmp 0x11a8e69e */
  goto L_11a8e69e;
L_11a8e695:;
  /* 11a8e695 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8e698 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8e69b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11a8e69e:;
  /* 11a8e69e cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8e6a2 jge 0x11a8e6f1 */
  if ((C.sf==C.of)) goto L_11a8e6f1;
  /* 11a8e6a4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8e6a7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e6aa mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11a8e6ad and eax, dword ptr [ebp - 0x14] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + -0x14))); EAX = (_r); fl_logic(_r,32); }
  /* 11a8e6b0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11a8e6b3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8e6b6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e6b9 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11a8e6bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8e6bf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11a8e6c1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8e6c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e6c7 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11a8e6ca mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8e6cd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e6d0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11a8e6d3 or edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11a8e6d6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8e6d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e6dc mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11a8e6df mov ecx, 0x20 */
  ECX = (0x20u);
  /* 11a8e6e4 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8e6e7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a8e6ea shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a8e6ec mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11a8e6ef jmp 0x11a8e695 */
  goto L_11a8e695;
L_11a8e6f1:;
  /* 11a8e6f1 mov dword ptr [ebp - 0xc], 2 */
  w32((uint32_t)(EBP + -0xc), (0x2u));
  /* 11a8e6f8 jmp 0x11a8e703 */
  goto L_11a8e703;
L_11a8e6fa:;
  /* 11a8e6fa mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8e6fd sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8e700 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11a8e703:;
  /* 11a8e703 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8e707 jl 0x11a8e737 */
  if ((C.sf!=C.of)) goto L_11a8e737;
  /* 11a8e709 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8e70c cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8e70f jl 0x11a8e728 */
  if ((C.sf!=C.of)) goto L_11a8e728;
  /* 11a8e711 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8e714 sub edx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8e717 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8e71a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e71d mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e720 mov edx, dword ptr [esi + edx*4] */
  EDX = (r32((uint32_t)(ESI + EDX*4)));
  /* 11a8e723 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11a8e726 jmp 0x11a8e735 */
  goto L_11a8e735;
L_11a8e728:;
  /* 11a8e728 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8e72b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e72e mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_11a8e735:;
  /* 11a8e735 jmp 0x11a8e6fa */
  goto L_11a8e6fa;
L_11a8e737:;
  /* 11a8e737 pop esi */
  ESI = (pop32());
  /* 11a8e738 mov esp, ebp */
  ESP = (EBP);
  /* 11a8e73a pop ebp */
  EBP = (pop32());
  /* 11a8e73b ret  */
  ESPCHK(0x11a8e650u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e740 @ 0x11a8e740 (578 bytes, 188 insns) */
void f_11a8e740(void) {
  FTRACE(0x11a8e740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8e740 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8e741 mov ebp, esp */
  EBP = (ESP);
  /* 11a8e743 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8e746 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e749 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a8e74b mov cx, word ptr [eax + 0xa] */
  CX = (r16((uint32_t)(EAX + 0xa)));
  /* 11a8e74f and ecx, 0x7fff */
  { uint32_t _r=(ECX)&(0x7fffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a8e755 sub ecx, 0x3fff */
  { uint32_t _a=(ECX),_b=(0x3fffu),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8e75b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a8e75e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e761 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8e763 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 11a8e767 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11a8e76c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11a8e76f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e772 mov edx, dword ptr [ecx + 6] */
  EDX = (r32((uint32_t)(ECX + 0x6)));
  /* 11a8e775 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11a8e778 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e77b mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 11a8e77e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11a8e781 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e784 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8e786 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11a8e789 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11a8e78c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11a8e78f cmp dword ptr [ebp - 4], 0xffffc001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffc001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8e796 jne 0x11a8e7d0 */
  if (!C.zf) goto L_11a8e7d0;
  /* 11a8e798 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11a8e79f lea ecx, [ebp - 0x18] */
  ECX = ((uint32_t)(EBP + -0x18));
  /* 11a8e7a2 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8e7a3 call 0x11a8e610 */
  push32(0x11a8e7a8u); f_11a8e610();
  /* 11a8e7a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8e7ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8e7ad je 0x11a8e7b8 */
  if (C.zf) goto L_11a8e7b8;
  /* 11a8e7af mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11a8e7b6 jmp 0x11a8e7cb */
  goto L_11a8e7cb;
L_11a8e7b8:;
  /* 11a8e7b8 lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 11a8e7bb push edx */
  push32((uint32_t)(EDX));
  /* 11a8e7bc call 0x11a8e5e0 */
  push32(0x11a8e7c1u); f_11a8e5e0();
  /* 11a8e7c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8e7c4 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
L_11a8e7cb:;
  /* 11a8e7cb jmp 0x11a8e91c */
  goto L_11a8e91c;
L_11a8e7d0:;
  /* 11a8e7d0 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11a8e7d3 push eax */
  push32((uint32_t)(EAX));
  /* 11a8e7d4 lea ecx, [ebp - 0x30] */
  ECX = ((uint32_t)(EBP + -0x30));
  /* 11a8e7d7 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8e7d8 call 0x11a8e590 */
  push32(0x11a8e7ddu); f_11a8e590();
  /* 11a8e7dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8e7e0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8e7e3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11a8e7e6 push eax */
  push32((uint32_t)(EAX));
  /* 11a8e7e7 lea ecx, [ebp - 0x18] */
  ECX = ((uint32_t)(EBP + -0x18));
  /* 11a8e7ea push ecx */
  push32((uint32_t)(ECX));
  /* 11a8e7eb call 0x11a8e4b0 */
  push32(0x11a8e7f0u); f_11a8e4b0();
  /* 11a8e7f0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8e7f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8e7f5 je 0x11a8e800 */
  if (C.zf) goto L_11a8e800;
  /* 11a8e7f7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8e7fa add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8e7fd mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11a8e800:;
  /* 11a8e800 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8e803 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8e806 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11a8e809 sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8e80c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8e80f jge 0x11a8e830 */
  if ((C.sf==C.of)) goto L_11a8e830;
  /* 11a8e811 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11a8e814 push eax */
  push32((uint32_t)(EAX));
  /* 11a8e815 call 0x11a8e5e0 */
  push32(0x11a8e81au); f_11a8e5e0();
  /* 11a8e81a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8e81d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11a8e824 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 11a8e82b jmp 0x11a8e91c */
  goto L_11a8e91c;
L_11a8e830:;
  /* 11a8e830 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8e833 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8e836 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8e839 jg 0x11a8e8a0 */
  if ((!C.zf&&C.sf==C.of)) goto L_11a8e8a0;
  /* 11a8e83b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8e83e mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11a8e841 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8e844 mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
  /* 11a8e847 lea edx, [ebp - 0x30] */
  EDX = ((uint32_t)(EBP + -0x30));
  /* 11a8e84a push edx */
  push32((uint32_t)(EDX));
  /* 11a8e84b lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11a8e84e push eax */
  push32((uint32_t)(EAX));
  /* 11a8e84f call 0x11a8e590 */
  push32(0x11a8e854u); f_11a8e590();
  /* 11a8e854 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8e857 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11a8e85a push ecx */
  push32((uint32_t)(ECX));
  /* 11a8e85b lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 11a8e85e push edx */
  push32((uint32_t)(EDX));
  /* 11a8e85f call 0x11a8e650 */
  push32(0x11a8e864u); f_11a8e650();
  /* 11a8e864 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8e867 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8e86a mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11a8e86d push ecx */
  push32((uint32_t)(ECX));
  /* 11a8e86e lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 11a8e871 push edx */
  push32((uint32_t)(EDX));
  /* 11a8e872 call 0x11a8e4b0 */
  push32(0x11a8e877u); f_11a8e4b0();
  /* 11a8e877 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8e87a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8e87d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11a8e880 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8e883 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8e884 lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 11a8e887 push edx */
  push32((uint32_t)(EDX));
  /* 11a8e888 call 0x11a8e650 */
  push32(0x11a8e88du); f_11a8e650();
  /* 11a8e88d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8e890 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11a8e897 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 11a8e89e jmp 0x11a8e91c */
  goto L_11a8e91c;
L_11a8e8a0:;
  /* 11a8e8a0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8e8a3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8e8a6 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8e8a8 jl 0x11a8e8eb */
  if ((C.sf!=C.of)) goto L_11a8e8eb;
  /* 11a8e8aa lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 11a8e8ad push edx */
  push32((uint32_t)(EDX));
  /* 11a8e8ae call 0x11a8e5e0 */
  push32(0x11a8e8b3u); f_11a8e5e0();
  /* 11a8e8b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8e8b6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a8e8b9 or eax, 0x80000000 */
  { uint32_t _r=(EAX)|(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 11a8e8be mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11a8e8c1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8e8c4 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11a8e8c7 push edx */
  push32((uint32_t)(EDX));
  /* 11a8e8c8 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11a8e8cb push eax */
  push32((uint32_t)(EAX));
  /* 11a8e8cc call 0x11a8e650 */
  push32(0x11a8e8d1u); f_11a8e650();
  /* 11a8e8d1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8e8d4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8e8d7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a8e8d9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8e8dc add edx, dword ptr [eax + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8e8df mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11a8e8e2 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 11a8e8e9 jmp 0x11a8e91c */
  goto L_11a8e91c;
L_11a8e8eb:;
  /* 11a8e8eb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8e8ee mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8e8f1 add edx, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8e8f4 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11a8e8f7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a8e8fa and eax, 0x7fffffff */
  { uint32_t _r=(EAX)&(0x7fffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8e8ff mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11a8e902 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8e905 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11a8e908 push edx */
  push32((uint32_t)(EDX));
  /* 11a8e909 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11a8e90c push eax */
  push32((uint32_t)(EAX));
  /* 11a8e90d call 0x11a8e650 */
  push32(0x11a8e912u); f_11a8e650();
  /* 11a8e912 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8e915 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
L_11a8e91c:;
  /* 11a8e91c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8e91f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11a8e922 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8e925 mov eax, 0x20 */
  EAX = (0x20u);
  /* 11a8e92a sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8e92c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11a8e92f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8e932 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8e935 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a8e937 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a8e93a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8e93c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a8e93f neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a8e941 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8e943 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11a8e949 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8e94b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11a8e94e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8e951 cmp dword ptr [edx + 0x10], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8e955 jne 0x11a8e96a */
  if (!C.zf) goto L_11a8e96a;
  /* 11a8e957 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8e95a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a8e95d mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11a8e960 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8e963 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a8e966 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11a8e968 jmp 0x11a8e97b */
  goto L_11a8e97b;
L_11a8e96a:;
  /* 11a8e96a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8e96d cmp dword ptr [ecx + 0x10], 0x20 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8e971 jne 0x11a8e97b */
  if (!C.zf) goto L_11a8e97b;
  /* 11a8e973 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8e976 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a8e979 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
L_11a8e97b:;
  /* 11a8e97b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a8e97e mov esp, ebp */
  ESP = (EBP);
  /* 11a8e980 pop ebp */
  EBP = (pop32());
  /* 11a8e981 ret  */
  ESPCHK(0x11a8e740u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e990 @ 0x11a8e990 (26 bytes, 11 insns) */
void f_11a8e990(void) {
  FTRACE(0x11a8e990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8e990 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8e991 mov ebp, esp */
  EBP = (ESP);
  /* 11a8e993 push 0x11ab80e0 */
  push32((uint32_t)(0x11ab80e0u));
  /* 11a8e998 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8e99b push eax */
  push32((uint32_t)(EAX));
  /* 11a8e99c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e99f push ecx */
  push32((uint32_t)(ECX));
  /* 11a8e9a0 call 0x11a8e740 */
  push32(0x11a8e9a5u); f_11a8e740();
  /* 11a8e9a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8e9a8 pop ebp */
  EBP = (pop32());
  /* 11a8e9a9 ret  */
  ESPCHK(0x11a8e990u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e9b0 @ 0x11a8e9b0 (26 bytes, 11 insns) */
void f_11a8e9b0(void) {
  FTRACE(0x11a8e9b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8e9b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8e9b1 mov ebp, esp */
  EBP = (ESP);
  /* 11a8e9b3 push 0x11ab80f8 */
  push32((uint32_t)(0x11ab80f8u));
  /* 11a8e9b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8e9bb push eax */
  push32((uint32_t)(EAX));
  /* 11a8e9bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e9bf push ecx */
  push32((uint32_t)(ECX));
  /* 11a8e9c0 call 0x11a8e740 */
  push32(0x11a8e9c5u); f_11a8e740();
  /* 11a8e9c5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8e9c8 pop ebp */
  EBP = (pop32());
  /* 11a8e9c9 ret  */
  ESPCHK(0x11a8e9b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e9d0 @ 0x11a8e9d0 (191 bytes, 58 insns) */
void f_11a8e9d0(void) {
  FTRACE(0x11a8e9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8e9d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8e9d1 mov ebp, esp */
  EBP = (ESP);
  /* 11a8e9d3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8e9d6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11a8e9dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e9e0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a8e9e2 mov cx, word ptr [eax + 0xa] */
  CX = (r16((uint32_t)(EAX + 0xa)));
  /* 11a8e9e6 and ecx, 0x7fff */
  { uint32_t _r=(ECX)&(0x7fffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a8e9ec mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11a8e9f0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8e9f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8e9f5 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 11a8e9f9 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11a8e9fe mov word ptr [ebp - 0x18], ax */
  w16((uint32_t)(EBP + -0x18), (AX));
  /* 11a8ea02 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8ea05 mov edx, dword ptr [ecx + 6] */
  EDX = (r32((uint32_t)(ECX + 0x6)));
  /* 11a8ea08 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11a8ea0b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8ea0e mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 11a8ea11 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a8ea14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8ea17 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8ea19 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11a8ea1c shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11a8ea1f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a8ea22 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11a8ea24 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 11a8ea27 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8ea28 call 0x11a8e4b0 */
  push32(0x11a8ea2du); f_11a8e4b0();
  /* 11a8ea2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ea30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8ea32 je 0x11a8ea47 */
  if (C.zf) goto L_11a8ea47;
  /* 11a8ea34 mov dword ptr [ebp - 0x10], 0x80000000 */
  w32((uint32_t)(EBP + -0x10), (0x80000000u));
  /* 11a8ea3b mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11a8ea3f add dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a+_b; DX = (_r); fl_add(_a,_b,_r,16); }
  /* 11a8ea43 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_11a8ea47:;
  /* 11a8ea47 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8ea4a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8ea4f cmp eax, 0x7fff */
  { uint32_t _a=(EAX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8ea54 jne 0x11a8ea5d */
  if (!C.zf) goto L_11a8ea5d;
  /* 11a8ea56 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_11a8ea5d:;
  /* 11a8ea5d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8ea60 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a8ea63 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11a8ea66 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8ea69 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8ea6c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11a8ea6e mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a8ea71 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a8ea77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8ea7a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8ea7f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11a8ea81 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8ea84 mov word ptr [ecx + 8], dx */
  w16((uint32_t)(ECX + 0x8), (DX));
  /* 11a8ea88 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a8ea8b mov esp, ebp */
  ESP = (EBP);
  /* 11a8ea8d pop ebp */
  EBP = (pop32());
  /* 11a8ea8e ret  */
  ESPCHK(0x11a8e9d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ea90 @ 0x11a8ea90 (54 bytes, 24 insns) */
void f_11a8ea90(void) {
  FTRACE(0x11a8ea90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8ea90 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8ea91 mov ebp, esp */
  EBP = (ESP);
  /* 11a8ea93 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8ea96 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8ea98 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8ea9a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8ea9c push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8ea9e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8eaa1 push eax */
  push32((uint32_t)(EAX));
  /* 11a8eaa2 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 11a8eaa5 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8eaa6 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11a8eaa9 push edx */
  push32((uint32_t)(EDX));
  /* 11a8eaaa call 0x11a94cc0 */
  push32(0x11a8eaafu); f_11a94cc0();
  /* 11a8eaaf add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8eab2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8eab5 push eax */
  push32((uint32_t)(EAX));
  /* 11a8eab6 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11a8eab9 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8eaba call 0x11a8e990 */
  push32(0x11a8eabfu); f_11a8e990();
  /* 11a8eabf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8eac2 mov esp, ebp */
  ESP = (EBP);
  /* 11a8eac4 pop ebp */
  EBP = (pop32());
  /* 11a8eac5 ret  */
  ESPCHK(0x11a8ea90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ead0 @ 0x11a8ead0 (54 bytes, 24 insns) */
void f_11a8ead0(void) {
  FTRACE(0x11a8ead0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8ead0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8ead1 mov ebp, esp */
  EBP = (ESP);
  /* 11a8ead3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8ead6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8ead8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8eada push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8eadc push 1 */
  push32((uint32_t)(0x1u));
  /* 11a8eade mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8eae1 push eax */
  push32((uint32_t)(EAX));
  /* 11a8eae2 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 11a8eae5 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8eae6 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11a8eae9 push edx */
  push32((uint32_t)(EDX));
  /* 11a8eaea call 0x11a94cc0 */
  push32(0x11a8eaefu); f_11a94cc0();
  /* 11a8eaef add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8eaf2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8eaf5 push eax */
  push32((uint32_t)(EAX));
  /* 11a8eaf6 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11a8eaf9 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8eafa call 0x11a8e9d0 */
  push32(0x11a8eaffu); f_11a8e9d0();
  /* 11a8eaff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8eb02 mov esp, ebp */
  ESP = (EBP);
  /* 11a8eb04 pop ebp */
  EBP = (pop32());
  /* 11a8eb05 ret  */
  ESPCHK(0x11a8ead0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb10 @ 0x11a8eb10 (54 bytes, 24 insns) */
void f_11a8eb10(void) {
  FTRACE(0x11a8eb10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8eb10 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8eb11 mov ebp, esp */
  EBP = (ESP);
  /* 11a8eb13 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8eb16 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8eb18 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8eb1a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8eb1c push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8eb1e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8eb21 push eax */
  push32((uint32_t)(EAX));
  /* 11a8eb22 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 11a8eb25 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8eb26 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11a8eb29 push edx */
  push32((uint32_t)(EDX));
  /* 11a8eb2a call 0x11a94cc0 */
  push32(0x11a8eb2fu); f_11a94cc0();
  /* 11a8eb2f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8eb32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8eb35 push eax */
  push32((uint32_t)(EAX));
  /* 11a8eb36 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11a8eb39 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8eb3a call 0x11a8e9b0 */
  push32(0x11a8eb3fu); f_11a8e9b0();
  /* 11a8eb3f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8eb42 mov esp, ebp */
  ESP = (EBP);
  /* 11a8eb44 pop ebp */
  EBP = (pop32());
  /* 11a8eb45 ret  */
  ESPCHK(0x11a8eb10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb50 @ 0x11a8eb50 (250 bytes, 90 insns) */
void f_11a8eb50(void) {
  FTRACE(0x11a8eb50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8eb50 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8eb51 mov ebp, esp */
  EBP = (ESP);
  /* 11a8eb53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8eb56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8eb59 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a8eb5c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8eb5f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11a8eb62 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11a8eb65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8eb68 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 11a8eb6b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8eb6e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8eb71 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11a8eb74:;
  /* 11a8eb74 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8eb78 jle 0x11a8ebbb */
  if ((C.zf||C.sf!=C.of)) goto L_11a8ebbb;
  /* 11a8eb7a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8eb7d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11a8eb80 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8eb82 je 0x11a8eb98 */
  if (C.zf) goto L_11a8eb98;
  /* 11a8eb84 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8eb87 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11a8eb8a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11a8eb8d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8eb90 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8eb93 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a8eb96 jmp 0x11a8eb9f */
  goto L_11a8eb9f;
L_11a8eb98:;
  /* 11a8eb98 mov dword ptr [ebp - 0xc], 0x30 */
  w32((uint32_t)(EBP + -0xc), (0x30u));
L_11a8eb9f:;
  /* 11a8eb9f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8eba2 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11a8eba5 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11a8eba7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8ebaa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ebad mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a8ebb0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8ebb3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8ebb6 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11a8ebb9 jmp 0x11a8eb74 */
  goto L_11a8eb74;
L_11a8ebbb:;
  /* 11a8ebbb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8ebbe mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11a8ebc1 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8ebc5 jl 0x11a8ec04 */
  if ((C.sf!=C.of)) goto L_11a8ec04;
  /* 11a8ebc7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8ebca movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11a8ebcd cmp ecx, 0x35 */
  { uint32_t _a=(ECX),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8ebd0 jl 0x11a8ec04 */
  if ((C.sf!=C.of)) goto L_11a8ec04;
  /* 11a8ebd2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8ebd5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8ebd8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11a8ebdb:;
  /* 11a8ebdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8ebde movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11a8ebe1 cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8ebe4 jne 0x11a8ebf7 */
  if (!C.zf) goto L_11a8ebf7;
  /* 11a8ebe6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8ebe9 mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 11a8ebec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8ebef sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8ebf2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a8ebf5 jmp 0x11a8ebdb */
  goto L_11a8ebdb;
L_11a8ebf7:;
  /* 11a8ebf7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8ebfa mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11a8ebfc add dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 11a8ebff mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8ec02 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
L_11a8ec04:;
  /* 11a8ec04 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8ec07 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11a8ec0a cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8ec0d jne 0x11a8ec20 */
  if (!C.zf) goto L_11a8ec20;
  /* 11a8ec0f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8ec12 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11a8ec15 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ec18 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8ec1b mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11a8ec1e jmp 0x11a8ec46 */
  goto L_11a8ec46;
L_11a8ec20:;
  /* 11a8ec20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8ec23 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ec26 push eax */
  push32((uint32_t)(EAX));
  /* 11a8ec27 call 0x11a8c610 */
  push32(0x11a8ec2cu); f_11a8c610();
  /* 11a8ec2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ec2f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ec32 push eax */
  push32((uint32_t)(EAX));
  /* 11a8ec33 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8ec36 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ec39 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8ec3a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8ec3d push edx */
  push32((uint32_t)(EDX));
  /* 11a8ec3e call 0x11a8eea0 */
  push32(0x11a8ec43u); f_11a8eea0();
  /* 11a8ec43 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a8ec46:;
  /* 11a8ec46 mov esp, ebp */
  ESP = (EBP);
  /* 11a8ec48 pop ebp */
  EBP = (pop32());
  /* 11a8ec49 ret  */
  ESPCHK(0x11a8eb50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ec50 @ 0x11a8ec50 (119 bytes, 44 insns) */
void f_11a8ec50(void) {
  FTRACE(0x11a8ec50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8ec50 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8ec51 mov ebp, esp */
  EBP = (ESP);
  /* 11a8ec53 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8ec56 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11a8ec59 push eax */
  push32((uint32_t)(EAX));
  /* 11a8ec5a lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11a8ec5d push ecx */
  push32((uint32_t)(ECX));
  /* 11a8ec5e call 0x11a8ecd0 */
  push32(0x11a8ec63u); f_11a8ecd0();
  /* 11a8ec63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ec66 lea edx, [ebp - 0x28] */
  EDX = ((uint32_t)(EBP + -0x28));
  /* 11a8ec69 push edx */
  push32((uint32_t)(EDX));
  /* 11a8ec6a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8ec6c push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11a8ec6e sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8ec71 mov eax, esp */
  EAX = (ESP);
  /* 11a8ec73 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8ec76 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11a8ec78 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8ec7b mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11a8ec7e mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11a8ec82 mov word ptr [eax + 8], cx */
  w16((uint32_t)(EAX + 0x8), (CX));
  /* 11a8ec86 call 0x11a95840 */
  push32(0x11a8ec8bu); f_11a95840();
  /* 11a8ec8b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ec8e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8ec91 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11a8ec94 movsx eax, byte ptr [ebp - 0x26] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x26))));
  /* 11a8ec98 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8ec9b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11a8ec9d movsx edx, word ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x28))));
  /* 11a8eca1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8eca4 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11a8eca7 lea ecx, [ebp - 0x24] */
  ECX = ((uint32_t)(EBP + -0x24));
  /* 11a8ecaa push ecx */
  push32((uint32_t)(ECX));
  /* 11a8ecab mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a8ecae push edx */
  push32((uint32_t)(EDX));
  /* 11a8ecaf call 0x11a8c790 */
  push32(0x11a8ecb4u); f_11a8c790();
  /* 11a8ecb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ecb7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8ecba mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11a8ecbd mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11a8ecc0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8ecc3 mov esp, ebp */
  ESP = (EBP);
  /* 11a8ecc5 pop ebp */
  EBP = (pop32());
  /* 11a8ecc6 ret  */
  ESPCHK(0x11a8ec50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ecd0 @ 0x11a8ecd0 (354 bytes, 104 insns) */
void f_11a8ecd0(void) {
  FTRACE(0x11a8ecd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8ecd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8ecd1 mov ebp, esp */
  EBP = (ESP);
  /* 11a8ecd3 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8ecd6 mov dword ptr [ebp - 0xc], 0x80000000 */
  w32((uint32_t)(EBP + -0xc), (0x80000000u));
  /* 11a8ecdd mov word ptr [ebp - 4], 0 */
  w16((uint32_t)(EBP + -0x4), (0x0u));
  /* 11a8ece3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8ece6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a8ece8 mov cx, word ptr [eax + 6] */
  CX = (r16((uint32_t)(EAX + 0x6)));
  /* 11a8ecec and ecx, 0x7ff0 */
  { uint32_t _r=(ECX)&(0x7ff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11a8ecf2 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11a8ecf5 mov word ptr [ebp - 0x14], cx */
  w16((uint32_t)(EBP + -0x14), (CX));
  /* 11a8ecf9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8ecfc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8ecfe mov ax, word ptr [edx + 6] */
  AX = (r16((uint32_t)(EDX + 0x6)));
  /* 11a8ed02 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11a8ed07 mov word ptr [ebp - 0x18], ax */
  w16((uint32_t)(EBP + -0x18), (AX));
  /* 11a8ed0b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8ed0e mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a8ed11 and edx, 0xfffff */
  { uint32_t _r=(EDX)&(0xfffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a8ed17 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11a8ed1a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8ed1d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a8ed1f mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11a8ed22 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a8ed25 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a8ed2b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11a8ed2e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8ed32 je 0x11a8ed47 */
  if (C.zf) goto L_11a8ed47;
  /* 11a8ed34 cmp dword ptr [ebp - 0x1c], 0x7ff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x7ffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8ed3b je 0x11a8ed3f */
  if (C.zf) goto L_11a8ed3f;
  /* 11a8ed3d jmp 0x11a8ed8a */
  goto L_11a8ed8a;
L_11a8ed3f:;
  /* 11a8ed3f mov word ptr [ebp - 4], 0x7fff */
  w16((uint32_t)(EBP + -0x4), (0x7fffu));
  /* 11a8ed45 jmp 0x11a8eda5 */
  goto L_11a8eda5;
L_11a8ed47:;
  /* 11a8ed47 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8ed4b jne 0x11a8ed74 */
  if (!C.zf) goto L_11a8ed74;
  /* 11a8ed4d cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8ed51 jne 0x11a8ed74 */
  if (!C.zf) goto L_11a8ed74;
  /* 11a8ed53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8ed56 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11a8ed5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8ed60 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11a8ed66 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8ed69 mov word ptr [edx + 8], 0 */
  w16((uint32_t)(EDX + 0x8), (0x0u));
  /* 11a8ed6f jmp 0x11a8ee2e */
  goto L_11a8ee2e;
L_11a8ed74:;
  /* 11a8ed74 movsx eax, word ptr [ebp - 0x14] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x14))));
  /* 11a8ed78 add eax, 0x3c01 */
  { uint32_t _a=(EAX),_b=(0x3c01u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ed7d mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11a8ed81 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11a8ed88 jmp 0x11a8eda5 */
  goto L_11a8eda5;
L_11a8ed8a:;
  /* 11a8ed8a mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 11a8ed8e sub cx, 0x3ff */
  { uint32_t _a=(CX),_b=(0x3ffu),_r=_a-_b; CX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11a8ed93 mov word ptr [ebp - 0x14], cx */
  w16((uint32_t)(EBP + -0x14), (CX));
  /* 11a8ed97 movsx edx, word ptr [ebp - 0x14] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x14))));
  /* 11a8ed9b add edx, 0x3fff */
  { uint32_t _a=(EDX),_b=(0x3fffu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8eda1 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_11a8eda5:;
  /* 11a8eda5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8eda8 shl eax, 0xb */
  EAX = (sh_shl((uint32_t)(EAX), (0xbu)&0x1f, 32));
  /* 11a8edab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8edae or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a8edb0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a8edb3 shr edx, 0x15 */
  EDX = (sh_shr((uint32_t)(EDX), (0x15u)&0x1f, 32));
  /* 11a8edb6 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11a8edb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8edbb mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11a8edbe mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a8edc1 shl ecx, 0xb */
  ECX = (sh_shl((uint32_t)(ECX), (0xbu)&0x1f, 32));
  /* 11a8edc4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8edc7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11a8edc9:;
  /* 11a8edc9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8edcc mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11a8edcf and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11a8edd5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a8edd7 jne 0x11a8ee14 */
  if (!C.zf) goto L_11a8ee14;
  /* 11a8edd9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8eddc mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a8eddf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11a8ede1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8ede4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a8ede6 and edx, 0x80000000 */
  { uint32_t _r=(EDX)&(0x80000000u); EDX = (_r); fl_logic(_r,32); }
  /* 11a8edec neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a8edee sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8edf0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a8edf2 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8edf4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8edf7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11a8edfa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8edfd mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a8edff shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11a8ee01 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8ee04 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11a8ee06 mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11a8ee0a sub dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11a8ee0e mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
  /* 11a8ee12 jmp 0x11a8edc9 */
  goto L_11a8edc9;
L_11a8ee14:;
  /* 11a8ee14 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a8ee17 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8ee1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8ee1f and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a8ee25 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8ee27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8ee2a mov word ptr [edx + 8], ax */
  w16((uint32_t)(EDX + 0x8), (AX));
L_11a8ee2e:;
  /* 11a8ee2e mov esp, ebp */
  ESP = (EBP);
  /* 11a8ee30 pop ebp */
  EBP = (pop32());
  /* 11a8ee31 ret  */
  ESPCHK(0x11a8ecd0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11a8ee40 (88 bytes, 40 insns) */
void f_11a8ee40(void) {
  FTRACE(0x11a8ee40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8ee40 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11a8ee44 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a8ee48 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a8ee4a je 0x11a8ee93 */
  if (C.zf) goto L_11a8ee93;
  /* 11a8ee4c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8ee4e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11a8ee52 push edi */
  push32((uint32_t)(EDI));
  /* 11a8ee53 mov edi, ecx */
  EDI = (ECX);
  /* 11a8ee55 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8ee58 jb 0x11a8ee87 */
  if (C.cf) goto L_11a8ee87;
  /* 11a8ee5a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a8ee5c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11a8ee5f je 0x11a8ee69 */
  if (C.zf) goto L_11a8ee69;
  /* 11a8ee61 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11a8ee63:;
  /* 11a8ee63 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a8ee65 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a8ee66 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11a8ee67 jne 0x11a8ee63 */
  if (!C.zf) goto L_11a8ee63;
L_11a8ee69:;
  /* 11a8ee69 mov ecx, eax */
  ECX = (EAX);
  /* 11a8ee6b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11a8ee6e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ee70 mov ecx, eax */
  ECX = (EAX);
  /* 11a8ee72 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11a8ee75 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ee77 mov ecx, edx */
  ECX = (EDX);
  /* 11a8ee79 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11a8ee7c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a8ee7f je 0x11a8ee87 */
  if (C.zf) goto L_11a8ee87;
  /* 11a8ee81 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11a8ee83 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a8ee85 je 0x11a8ee8d */
  if (C.zf) goto L_11a8ee8d;
L_11a8ee87:;
  /* 11a8ee87 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a8ee89 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a8ee8a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11a8ee8b jne 0x11a8ee87 */
  if (!C.zf) goto L_11a8ee87;
L_11a8ee8d:;
  /* 11a8ee8d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11a8ee91 pop edi */
  EDI = (pop32());
  /* 11a8ee92 ret  */
  ESPCHK(0x11a8ee40u, _esp0);
  ESP += 4; return;
L_11a8ee93:;
  /* 11a8ee93 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11a8ee97 ret  */
  ESPCHK(0x11a8ee40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eea0 @ 0x11a8eea0 (664 bytes, 269 insns) [15 switch table(s)] */
void f_11a8eea0(void) {
  FTRACE(0x11a8eea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8eea0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8eea1 mov ebp, esp */
  EBP = (ESP);
  /* 11a8eea3 push edi */
  push32((uint32_t)(EDI));
  /* 11a8eea4 push esi */
  push32((uint32_t)(ESI));
  /* 11a8eea5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8eea8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a8eeab mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8eeae mov eax, ecx */
  EAX = (ECX);
  /* 11a8eeb0 mov edx, ecx */
  EDX = (ECX);
  /* 11a8eeb2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8eeb4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8eeb6 jbe 0x11a8eec0 */
  if ((C.cf||C.zf)) goto L_11a8eec0;
  /* 11a8eeb8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8eeba jb 0x11a8f038 */
  if (C.cf) goto L_11a8f038;
L_11a8eec0:;
  /* 11a8eec0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11a8eec6 jne 0x11a8eedc */
  if (!C.zf) goto L_11a8eedc;
  /* 11a8eec8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a8eecb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11a8eece cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8eed1 jb 0x11a8eefc */
  if (C.cf) goto L_11a8eefc;
  /* 11a8eed3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a8eed5 jmp dword ptr [edx*4 + 0x11a8efe8] */
  switch (EDX) {
    case 0: goto L_11a8eff8;
    case 1: goto L_11a8f000;
    case 2: goto L_11a8f00c;
    case 3: goto L_11a8f020;
    default: x86_unimpl("switch@0x11a8eed5 out of table"); return;
  }
L_11a8eedc:;
  /* 11a8eedc mov eax, edi */
  EAX = (EDI);
  /* 11a8eede mov edx, 3 */
  EDX = (0x3u);
  /* 11a8eee3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8eee6 jb 0x11a8eef4 */
  if (C.cf) goto L_11a8eef4;
  /* 11a8eee8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11a8eeeb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8eeed jmp dword ptr [eax*4 + 0x11a8ef00] */
  switch (EAX) {
    case 1: goto L_11a8ef10;
    case 2: goto L_11a8ef3c;
    case 3: goto L_11a8ef60;
    default: x86_unimpl("switch@0x11a8eeed out of table"); return;
  }
L_11a8eef4:;
  /* 11a8eef4 jmp dword ptr [ecx*4 + 0x11a8eff8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11a8eff8)))); return;
  /* 11a8eefb nop  */
  /* nop */
L_11a8eefc:;
  /* 11a8eefc jmp dword ptr [ecx*4 + 0x11a8ef7c] */
  switch (ECX) {
    case 0: goto L_11a8efdf;
    case 1: goto L_11a8efcc;
    case 2: goto L_11a8efc4;
    case 3: goto L_11a8efbc;
    case 4: goto L_11a8efb4;
    case 5: goto L_11a8efac;
    case 6: goto L_11a8efa4;
    case 7: goto L_11a8ef9c;
    default: x86_unimpl("switch@0x11a8eefc out of table"); return;
  }
  /* 11a8ef03 nop  */
  /* nop */
L_11a8ef10:;
  /* 11a8ef10 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a8ef12 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a8ef14 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a8ef16 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a8ef19 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a8ef1c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a8ef1f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a8ef22 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a8ef25 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ef28 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ef2b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8ef2e jb 0x11a8eefc */
  if (C.cf) goto L_11a8eefc;
  /* 11a8ef30 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a8ef32 jmp dword ptr [edx*4 + 0x11a8efe8] */
  switch (EDX) {
    case 0: goto L_11a8eff8;
    case 1: goto L_11a8f000;
    case 2: goto L_11a8f00c;
    case 3: goto L_11a8f020;
    default: x86_unimpl("switch@0x11a8ef32 out of table"); return;
  }
  /* 11a8ef39 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a8ef3c:;
  /* 11a8ef3c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a8ef3e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a8ef40 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a8ef42 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a8ef45 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a8ef48 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a8ef4b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ef4e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ef51 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8ef54 jb 0x11a8eefc */
  if (C.cf) goto L_11a8eefc;
  /* 11a8ef56 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a8ef58 jmp dword ptr [edx*4 + 0x11a8efe8] */
  switch (EDX) {
    case 0: goto L_11a8eff8;
    case 1: goto L_11a8f000;
    case 2: goto L_11a8f00c;
    case 3: goto L_11a8f020;
    default: x86_unimpl("switch@0x11a8ef58 out of table"); return;
  }
  /* 11a8ef5f nop  */
  /* nop */
L_11a8ef60:;
  /* 11a8ef60 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a8ef62 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a8ef64 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a8ef66 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11a8ef67 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a8ef6a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11a8ef6b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8ef6e jb 0x11a8eefc */
  if (C.cf) goto L_11a8eefc;
  /* 11a8ef70 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a8ef72 jmp dword ptr [edx*4 + 0x11a8efe8] */
  switch (EDX) {
    case 0: goto L_11a8eff8;
    case 1: goto L_11a8f000;
    case 2: goto L_11a8f00c;
    case 3: goto L_11a8f020;
    default: x86_unimpl("switch@0x11a8ef72 out of table"); return;
  }
  /* 11a8ef79 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a8ef9c:;
  /* 11a8ef9c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11a8efa0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11a8efa4:;
  /* 11a8efa4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11a8efa8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11a8efac:;
  /* 11a8efac mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11a8efb0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11a8efb4:;
  /* 11a8efb4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11a8efb8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11a8efbc:;
  /* 11a8efbc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11a8efc0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11a8efc4:;
  /* 11a8efc4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11a8efc8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11a8efcc:;
  /* 11a8efcc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11a8efd0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11a8efd4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11a8efdb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8efdd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11a8efdf:;
  /* 11a8efdf jmp dword ptr [edx*4 + 0x11a8efe8] */
  switch (EDX) {
    case 0: goto L_11a8eff8;
    case 1: goto L_11a8f000;
    case 2: goto L_11a8f00c;
    case 3: goto L_11a8f020;
    default: x86_unimpl("switch@0x11a8efdf out of table"); return;
  }
  /* 11a8efe6 mov edi, edi */
  EDI = (EDI);
L_11a8eff8:;
  /* 11a8eff8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8effb pop esi */
  ESI = (pop32());
  /* 11a8effc pop edi */
  EDI = (pop32());
  /* 11a8effd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a8effe ret  */
  ESPCHK(0x11a8eea0u, _esp0);
  ESP += 4; return;
  /* 11a8efff nop  */
  /* nop */
L_11a8f000:;
  /* 11a8f000 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a8f002 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a8f004 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8f007 pop esi */
  ESI = (pop32());
  /* 11a8f008 pop edi */
  EDI = (pop32());
  /* 11a8f009 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a8f00a ret  */
  ESPCHK(0x11a8eea0u, _esp0);
  ESP += 4; return;
  /* 11a8f00b nop  */
  /* nop */
L_11a8f00c:;
  /* 11a8f00c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a8f00e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a8f010 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a8f013 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a8f016 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8f019 pop esi */
  ESI = (pop32());
  /* 11a8f01a pop edi */
  EDI = (pop32());
  /* 11a8f01b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a8f01c ret  */
  ESPCHK(0x11a8eea0u, _esp0);
  ESP += 4; return;
  /* 11a8f01d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a8f020:;
  /* 11a8f020 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11a8f022 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11a8f024 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a8f027 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a8f02a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a8f02d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a8f030 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8f033 pop esi */
  ESI = (pop32());
  /* 11a8f034 pop edi */
  EDI = (pop32());
  /* 11a8f035 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a8f036 ret  */
  ESPCHK(0x11a8eea0u, _esp0);
  ESP += 4; return;
  /* 11a8f037 nop  */
  /* nop */
L_11a8f038:;
  /* 11a8f038 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11a8f03c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11a8f040 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11a8f046 jne 0x11a8f06c */
  if (!C.zf) goto L_11a8f06c;
  /* 11a8f048 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a8f04b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11a8f04e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f051 jb 0x11a8f060 */
  if (C.cf) goto L_11a8f060;
  /* 11a8f053 std  */
  C.df=1;
  /* 11a8f054 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a8f056 cld  */
  C.df=0;
  /* 11a8f057 jmp dword ptr [edx*4 + 0x11a8f180] */
  switch (EDX) {
    case 0: goto L_11a8f190;
    case 1: goto L_11a8f198;
    case 2: goto L_11a8f1a8;
    case 3: goto L_11a8f1bc;
    default: x86_unimpl("switch@0x11a8f057 out of table"); return;
  }
  /* 11a8f05e mov edi, edi */
  EDI = (EDI);
L_11a8f060:;
  /* 11a8f060 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11a8f062 jmp dword ptr [ecx*4 + 0x11a8f130] */
  switch (ECX) {
    case 0: goto L_11a8f177;
    default: x86_unimpl("switch@0x11a8f062 out of table"); return;
  }
  /* 11a8f069 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a8f06c:;
  /* 11a8f06c mov eax, edi */
  EAX = (EDI);
  /* 11a8f06e mov edx, 3 */
  EDX = (0x3u);
  /* 11a8f073 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f076 jb 0x11a8f084 */
  if (C.cf) goto L_11a8f084;
  /* 11a8f078 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11a8f07b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8f07d jmp dword ptr [eax*4 + 0x11a8f088] */
  switch (EAX) {
    case 1: goto L_11a8f098;
    case 2: goto L_11a8f0b8;
    case 3: goto L_11a8f0e0;
    default: x86_unimpl("switch@0x11a8f07d out of table"); return;
  }
L_11a8f084:;
  /* 11a8f084 jmp dword ptr [ecx*4 + 0x11a8f180] */
  switch (ECX) {
    case 0: goto L_11a8f190;
    case 1: goto L_11a8f198;
    case 2: goto L_11a8f1a8;
    case 3: goto L_11a8f1bc;
    default: x86_unimpl("switch@0x11a8f084 out of table"); return;
  }
  /* 11a8f08b nop  */
  /* nop */
L_11a8f098:;
  /* 11a8f098 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a8f09b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a8f09d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a8f0a0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11a8f0a1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a8f0a4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11a8f0a5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f0a8 jb 0x11a8f060 */
  if (C.cf) goto L_11a8f060;
  /* 11a8f0aa std  */
  C.df=1;
  /* 11a8f0ab rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a8f0ad cld  */
  C.df=0;
  /* 11a8f0ae jmp dword ptr [edx*4 + 0x11a8f180] */
  switch (EDX) {
    case 0: goto L_11a8f190;
    case 1: goto L_11a8f198;
    case 2: goto L_11a8f1a8;
    case 3: goto L_11a8f1bc;
    default: x86_unimpl("switch@0x11a8f0ae out of table"); return;
  }
  /* 11a8f0b5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a8f0b8:;
  /* 11a8f0b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a8f0bb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a8f0bd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a8f0c0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a8f0c3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a8f0c6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a8f0c9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8f0cc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8f0cf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f0d2 jb 0x11a8f060 */
  if (C.cf) goto L_11a8f060;
  /* 11a8f0d4 std  */
  C.df=1;
  /* 11a8f0d5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a8f0d7 cld  */
  C.df=0;
  /* 11a8f0d8 jmp dword ptr [edx*4 + 0x11a8f180] */
  switch (EDX) {
    case 0: goto L_11a8f190;
    case 1: goto L_11a8f198;
    case 2: goto L_11a8f1a8;
    case 3: goto L_11a8f1bc;
    default: x86_unimpl("switch@0x11a8f0d8 out of table"); return;
  }
  /* 11a8f0df nop  */
  /* nop */
L_11a8f0e0:;
  /* 11a8f0e0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a8f0e3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11a8f0e5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a8f0e8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a8f0eb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a8f0ee mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a8f0f1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11a8f0f4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a8f0f7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8f0fa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8f0fd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f100 jb 0x11a8f060 */
  if (C.cf) goto L_11a8f060;
  /* 11a8f106 std  */
  C.df=1;
  /* 11a8f107 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11a8f109 cld  */
  C.df=0;
  /* 11a8f10a jmp dword ptr [edx*4 + 0x11a8f180] */
  switch (EDX) {
    case 0: goto L_11a8f190;
    case 1: goto L_11a8f198;
    case 2: goto L_11a8f1a8;
    case 3: goto L_11a8f1bc;
    default: x86_unimpl("switch@0x11a8f10a out of table"); return;
  }
  /* 11a8f111 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11a8f114 xor al, 0xf1 */
  { uint32_t _r=(AL)^(0xf1u); AL = (_r); fl_logic(_r,8); }
  /* 11a8f116 test al, 0x11 */
  { uint32_t _r=(AL)&(0x11u); fl_logic(_r,8); }
  /* 11a8f118 cmp al, 0xf1 */
  { uint32_t _a=(AL),_b=(0xf1u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11a8f11a test al, 0x11 */
  { uint32_t _r=(AL)&(0x11u); fl_logic(_r,8); }
  /* 11a8f11c inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 11a8f11d int1  */
  x86_unimpl("int1 @ 0x11a8f11d");
  /* 11a8f11e test al, 0x11 */
  { uint32_t _r=(AL)&(0x11u); fl_logic(_r,8); }
  /* 11a8f120 dec esp */
  { uint32_t _r=(ESP)-1; ESP = (_r); fl_dec(_r,32); }
  /* 11a8f121 int1  */
  x86_unimpl("int1 @ 0x11a8f121");
  /* 11a8f122 test al, 0x11 */
  { uint32_t _r=(AL)&(0x11u); fl_logic(_r,8); }
  /* 11a8f124 push esp */
  push32((uint32_t)(ESP));
  /* 11a8f125 int1  */
  x86_unimpl("int1 @ 0x11a8f125");
  /* 11a8f126 test al, 0x11 */
  { uint32_t _r=(AL)&(0x11u); fl_logic(_r,8); }
  /* 11a8f128 pop esp */
  ESP = (pop32());
  /* 11a8f129 int1  */
  x86_unimpl("int1 @ 0x11a8f129");
  /* 11a8f12a test al, 0x11 */
  { uint32_t _r=(AL)&(0x11u); fl_logic(_r,8); }
  /* 11a8f12c int1  */
  x86_unimpl("int1 @ 0x11a8f12c");
  /* 11a8f12e test al, 0x11 */
  { uint32_t _r=(AL)&(0x11u); fl_logic(_r,8); }
  /* 11a8f134 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11a8f138 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11a8f13c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11a8f140 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11a8f144 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11a8f148 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11a8f14c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11a8f150 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11a8f154 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11a8f158 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11a8f15c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11a8f160 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11a8f164 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11a8f168 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11a8f16c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11a8f173 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8f175 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11a8f177:;
  /* 11a8f177 jmp dword ptr [edx*4 + 0x11a8f180] */
  switch (EDX) {
    case 0: goto L_11a8f190;
    case 1: goto L_11a8f198;
    case 2: goto L_11a8f1a8;
    case 3: goto L_11a8f1bc;
    default: x86_unimpl("switch@0x11a8f177 out of table"); return;
  }
  /* 11a8f17e mov edi, edi */
  EDI = (EDI);
L_11a8f190:;
  /* 11a8f190 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8f193 pop esi */
  ESI = (pop32());
  /* 11a8f194 pop edi */
  EDI = (pop32());
  /* 11a8f195 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a8f196 ret  */
  ESPCHK(0x11a8eea0u, _esp0);
  ESP += 4; return;
  /* 11a8f197 nop  */
  /* nop */
L_11a8f198:;
  /* 11a8f198 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a8f19b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a8f19e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8f1a1 pop esi */
  ESI = (pop32());
  /* 11a8f1a2 pop edi */
  EDI = (pop32());
  /* 11a8f1a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a8f1a4 ret  */
  ESPCHK(0x11a8eea0u, _esp0);
  ESP += 4; return;
  /* 11a8f1a5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11a8f1a8:;
  /* 11a8f1a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a8f1ab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a8f1ae mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a8f1b1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a8f1b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8f1b7 pop esi */
  ESI = (pop32());
  /* 11a8f1b8 pop edi */
  EDI = (pop32());
  /* 11a8f1b9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a8f1ba ret  */
  ESPCHK(0x11a8eea0u, _esp0);
  ESP += 4; return;
  /* 11a8f1bb nop  */
  /* nop */
L_11a8f1bc:;
  /* 11a8f1bc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11a8f1bf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11a8f1c2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11a8f1c5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11a8f1c8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11a8f1cb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11a8f1ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8f1d1 pop esi */
  ESI = (pop32());
  /* 11a8f1d2 pop edi */
  EDI = (pop32());
  /* 11a8f1d3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11a8f1d4 ret  */
  ESPCHK(0x11a8eea0u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x11a8f1e0 (15 bytes, 7 insns) */
void f_11a8f1e0(void) {
  FTRACE(0x11a8f1e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8f1e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8f1e1 mov ebp, esp */
  EBP = (ESP);
  /* 11a8f1e3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a8f1e5 call 0x11a86750 */
  push32(0x11a8f1eau); f_11a86750();
  /* 11a8f1ea add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8f1ed pop ebp */
  EBP = (pop32());
  /* 11a8f1ee ret  */
  ESPCHK(0x11a8f1e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f1f0 @ 0x11a8f1f0 (55 bytes, 16 insns) */
void f_11a8f1f0(void) {
  FTRACE(0x11a8f1f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8f1f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8f1f1 mov ebp, esp */
  EBP = (ESP);
  /* 11a8f1f3 mov eax, dword ptr [0x11ab8154] */
  EAX = (r32((uint32_t)(0x11ab8154)));
  /* 11a8f1f8 push eax */
  push32((uint32_t)(EAX));
  /* 11a8f1f9 call dword ptr [0x11abc348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc348))), 0x11a8f1ffu);
  /* 11a8f1ff mov ecx, dword ptr [0x11ab8144] */
  ECX = (r32((uint32_t)(0x11ab8144)));
  /* 11a8f205 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8f206 call dword ptr [0x11abc348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc348))), 0x11a8f20cu);
  /* 11a8f20c mov edx, dword ptr [0x11ab8134] */
  EDX = (r32((uint32_t)(0x11ab8134)));
  /* 11a8f212 push edx */
  push32((uint32_t)(EDX));
  /* 11a8f213 call dword ptr [0x11abc348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc348))), 0x11a8f219u);
  /* 11a8f219 mov eax, dword ptr [0x11ab8114] */
  EAX = (r32((uint32_t)(0x11ab8114)));
  /* 11a8f21e push eax */
  push32((uint32_t)(EAX));
  /* 11a8f21f call dword ptr [0x11abc348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc348))), 0x11a8f225u);
  /* 11a8f225 pop ebp */
  EBP = (pop32());
  /* 11a8f226 ret  */
  ESPCHK(0x11a8f1f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f230 @ 0x11a8f230 (159 bytes, 47 insns) */
void f_11a8f230(void) {
  FTRACE(0x11a8f230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8f230 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8f231 mov ebp, esp */
  EBP = (ESP);
  /* 11a8f233 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8f234 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11a8f23b jmp 0x11a8f246 */
  goto L_11a8f246;
L_11a8f23d:;
  /* 11a8f23d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8f240 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8f243 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a8f246:;
  /* 11a8f246 cmp dword ptr [ebp - 4], 0x30 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f24a jge 0x11a8f299 */
  if ((C.sf==C.of)) goto L_11a8f299;
  /* 11a8f24c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8f24f cmp dword ptr [ecx*4 + 0x11ab8110], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11ab8110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f257 je 0x11a8f297 */
  if (C.zf) goto L_11a8f297;
  /* 11a8f259 cmp dword ptr [ebp - 4], 0x11 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x11u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f25d je 0x11a8f297 */
  if (C.zf) goto L_11a8f297;
  /* 11a8f25f cmp dword ptr [ebp - 4], 0xd */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f263 je 0x11a8f297 */
  if (C.zf) goto L_11a8f297;
  /* 11a8f265 cmp dword ptr [ebp - 4], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f269 je 0x11a8f297 */
  if (C.zf) goto L_11a8f297;
  /* 11a8f26b cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f26f je 0x11a8f297 */
  if (C.zf) goto L_11a8f297;
  /* 11a8f271 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8f274 mov eax, dword ptr [edx*4 + 0x11ab8110] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11ab8110)));
  /* 11a8f27b push eax */
  push32((uint32_t)(EAX));
  /* 11a8f27c call dword ptr [0x11abc3e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3e4))), 0x11a8f282u);
  /* 11a8f282 push 2 */
  push32((uint32_t)(0x2u));
  /* 11a8f284 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8f287 mov edx, dword ptr [ecx*4 + 0x11ab8110] */
  EDX = (r32((uint32_t)(ECX*4 + 0x11ab8110)));
  /* 11a8f28e push edx */
  push32((uint32_t)(EDX));
  /* 11a8f28f call 0x11a8a270 */
  push32(0x11a8f294u); f_11a8a270();
  /* 11a8f294 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a8f297:;
  /* 11a8f297 jmp 0x11a8f23d */
  goto L_11a8f23d;
L_11a8f299:;
  /* 11a8f299 mov eax, dword ptr [0x11ab8134] */
  EAX = (r32((uint32_t)(0x11ab8134)));
  /* 11a8f29e push eax */
  push32((uint32_t)(EAX));
  /* 11a8f29f call dword ptr [0x11abc3e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3e4))), 0x11a8f2a5u);
  /* 11a8f2a5 mov ecx, dword ptr [0x11ab8144] */
  ECX = (r32((uint32_t)(0x11ab8144)));
  /* 11a8f2ab push ecx */
  push32((uint32_t)(ECX));
  /* 11a8f2ac call dword ptr [0x11abc3e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3e4))), 0x11a8f2b2u);
  /* 11a8f2b2 mov edx, dword ptr [0x11ab8154] */
  EDX = (r32((uint32_t)(0x11ab8154)));
  /* 11a8f2b8 push edx */
  push32((uint32_t)(EDX));
  /* 11a8f2b9 call dword ptr [0x11abc3e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3e4))), 0x11a8f2bfu);
  /* 11a8f2bf mov eax, dword ptr [0x11ab8114] */
  EAX = (r32((uint32_t)(0x11ab8114)));
  /* 11a8f2c4 push eax */
  push32((uint32_t)(EAX));
  /* 11a8f2c5 call dword ptr [0x11abc3e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3e4))), 0x11a8f2cbu);
  /* 11a8f2cb mov esp, ebp */
  ESP = (EBP);
  /* 11a8f2cd pop ebp */
  EBP = (pop32());
  /* 11a8f2ce ret  */
  ESPCHK(0x11a8f230u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f2d0 @ 0x11a8f2d0 (151 bytes, 46 insns) */
void f_11a8f2d0(void) {
  FTRACE(0x11a8f2d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8f2d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8f2d1 mov ebp, esp */
  EBP = (ESP);
  /* 11a8f2d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8f2d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8f2d7 cmp dword ptr [eax*4 + 0x11ab8110], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x11ab8110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f2df jne 0x11a8f352 */
  if (!C.zf) goto L_11a8f352;
  /* 11a8f2e1 push 0xe1 */
  push32((uint32_t)(0xe1u));
  /* 11a8f2e6 push 0x11ab5284 */
  push32((uint32_t)(0x11ab5284u));
  /* 11a8f2eb push 2 */
  push32((uint32_t)(0x2u));
  /* 11a8f2ed push 0x18 */
  push32((uint32_t)(0x18u));
  /* 11a8f2ef call 0x11a897e0 */
  push32(0x11a8f2f4u); f_11a897e0();
  /* 11a8f2f4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8f2f7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a8f2fa cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f2fe jne 0x11a8f30a */
  if (!C.zf) goto L_11a8f30a;
  /* 11a8f300 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11a8f302 call 0x11a86750 */
  push32(0x11a8f307u); f_11a86750();
  /* 11a8f307 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a8f30a:;
  /* 11a8f30a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11a8f30c call 0x11a8f2d0 */
  push32(0x11a8f311u); f_11a8f2d0();
  /* 11a8f311 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8f314 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8f317 cmp dword ptr [ecx*4 + 0x11ab8110], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x11ab8110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f31f jne 0x11a8f33a */
  if (!C.zf) goto L_11a8f33a;
  /* 11a8f321 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8f324 push edx */
  push32((uint32_t)(EDX));
  /* 11a8f325 call dword ptr [0x11abc348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc348))), 0x11a8f32bu);
  /* 11a8f32b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8f32e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8f331 mov dword ptr [eax*4 + 0x11ab8110], ecx */
  w32((uint32_t)(EAX*4 + 0x11ab8110), (ECX));
  /* 11a8f338 jmp 0x11a8f348 */
  goto L_11a8f348;
L_11a8f33a:;
  /* 11a8f33a push 2 */
  push32((uint32_t)(0x2u));
  /* 11a8f33c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8f33f push edx */
  push32((uint32_t)(EDX));
  /* 11a8f340 call 0x11a8a270 */
  push32(0x11a8f345u); f_11a8a270();
  /* 11a8f345 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a8f348:;
  /* 11a8f348 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11a8f34a call 0x11a8f370 */
  push32(0x11a8f34fu); f_11a8f370();
  /* 11a8f34f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a8f352:;
  /* 11a8f352 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8f355 mov ecx, dword ptr [eax*4 + 0x11ab8110] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11ab8110)));
  /* 11a8f35c push ecx */
  push32((uint32_t)(ECX));
  /* 11a8f35d call dword ptr [0x11abc35c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc35c))), 0x11a8f363u);
  /* 11a8f363 mov esp, ebp */
  ESP = (EBP);
  /* 11a8f365 pop ebp */
  EBP = (pop32());
  /* 11a8f366 ret  */
  ESPCHK(0x11a8f2d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f370 @ 0x11a8f370 (22 bytes, 8 insns) */
void f_11a8f370(void) {
  FTRACE(0x11a8f370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8f370 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8f371 mov ebp, esp */
  EBP = (ESP);
  /* 11a8f373 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8f376 mov ecx, dword ptr [eax*4 + 0x11ab8110] */
  ECX = (r32((uint32_t)(EAX*4 + 0x11ab8110)));
  /* 11a8f37d push ecx */
  push32((uint32_t)(ECX));
  /* 11a8f37e call dword ptr [0x11abc34c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc34c))), 0x11a8f384u);
  /* 11a8f384 pop ebp */
  EBP = (pop32());
  /* 11a8f385 ret  */
  ESPCHK(0x11a8f370u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f390 @ 0x11a8f390 (26 bytes, 10 insns) */
void f_11a8f390(void) {
  FTRACE(0x11a8f390u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8f390 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8f391 mov ebp, esp */
  EBP = (ESP);
  /* 11a8f393 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8f396 push eax */
  push32((uint32_t)(EAX));
  /* 11a8f397 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8f399 call dword ptr [0x11abc350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc350))), 0x11a8f39fu);
  /* 11a8f39f push 0xff */
  push32((uint32_t)(0xffu));
  /* 11a8f3a4 call dword ptr [0x11abc3b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3b0))), 0x11a8f3aau);
  /* 11a8f3aa pop ebp */
  EBP = (pop32());
  /* 11a8f3ab ret  */
  ESPCHK(0x11a8f390u, _esp0);
  ESP += 4; return;
}

/* __XcptFilter @ 0x11a8f3b0 (446 bytes, 130 insns) */
void f_11a8f3b0(void) {
  FTRACE(0x11a8f3b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8f3b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8f3b1 mov ebp, esp */
  EBP = (ESP);
  /* 11a8f3b3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8f3b6 call 0x11a89220 */
  push32(0x11a8f3bbu); f_11a89220();
  /* 11a8f3bb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a8f3be mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8f3c1 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11a8f3c4 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8f3c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8f3c8 push edx */
  push32((uint32_t)(EDX));
  /* 11a8f3c9 call 0x11a8f570 */
  push32(0x11a8f3ceu); f_11a8f570();
  /* 11a8f3ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8f3d1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11a8f3d4 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f3d8 je 0x11a8f3e3 */
  if (C.zf) goto L_11a8f3e3;
  /* 11a8f3da mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a8f3dd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f3e1 jne 0x11a8f3f2 */
  if (!C.zf) goto L_11a8f3f2;
L_11a8f3e3:;
  /* 11a8f3e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8f3e6 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8f3e7 call dword ptr [0x11abc340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc340))), 0x11a8f3edu);
  /* 11a8f3ed jmp 0x11a8f56a */
  goto L_11a8f56a;
L_11a8f3f2:;
  /* 11a8f3f2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a8f3f5 cmp dword ptr [edx + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f3f9 jne 0x11a8f40f */
  if (!C.zf) goto L_11a8f40f;
  /* 11a8f3fb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a8f3fe mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 11a8f405 mov eax, 1 */
  EAX = (0x1u);
  /* 11a8f40a jmp 0x11a8f56a */
  goto L_11a8f56a;
L_11a8f40f:;
  /* 11a8f40f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a8f412 cmp dword ptr [ecx + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f416 jne 0x11a8f420 */
  if (!C.zf) goto L_11a8f420;
  /* 11a8f418 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8f41b jmp 0x11a8f56a */
  goto L_11a8f56a;
L_11a8f420:;
  /* 11a8f420 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a8f423 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11a8f426 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a8f429 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8f42c mov edx, dword ptr [ecx + 0x54] */
  EDX = (r32((uint32_t)(ECX + 0x54)));
  /* 11a8f42f mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11a8f432 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8f435 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8f438 mov dword ptr [eax + 0x54], ecx */
  w32((uint32_t)(EAX + 0x54), (ECX));
  /* 11a8f43b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a8f43e cmp dword ptr [edx + 4], 8 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f442 jne 0x11a8f547 */
  if (!C.zf) goto L_11a8f547;
  /* 11a8f448 mov eax, dword ptr [0x11ab8248] */
  EAX = (r32((uint32_t)(0x11ab8248)));
  /* 11a8f44d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11a8f450 jmp 0x11a8f45b */
  goto L_11a8f45b;
L_11a8f452:;
  /* 11a8f452 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a8f455 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8f458 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11a8f45b:;
  /* 11a8f45b mov edx, dword ptr [0x11ab8248] */
  EDX = (r32((uint32_t)(0x11ab8248)));
  /* 11a8f461 add edx, dword ptr [0x11ab824c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11ab824c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8f467 cmp dword ptr [ebp - 0x14], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f46a jge 0x11a8f482 */
  if ((C.sf==C.of)) goto L_11a8f482;
  /* 11a8f46c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a8f46f imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a8f472 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8f475 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11a8f478 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 11a8f480 jmp 0x11a8f452 */
  goto L_11a8f452;
L_11a8f482:;
  /* 11a8f482 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8f485 mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 11a8f488 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a8f48b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a8f48e cmp dword ptr [edx], 0xc000008e */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc000008eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f494 jne 0x11a8f4a5 */
  if (!C.zf) goto L_11a8f4a5;
  /* 11a8f496 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8f499 mov dword ptr [eax + 0x58], 0x83 */
  w32((uint32_t)(EAX + 0x58), (0x83u));
  /* 11a8f4a0 jmp 0x11a8f52d */
  goto L_11a8f52d;
L_11a8f4a5:;
  /* 11a8f4a5 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a8f4a8 cmp dword ptr [ecx], 0xc0000090 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc0000090u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f4ae jne 0x11a8f4bc */
  if (!C.zf) goto L_11a8f4bc;
  /* 11a8f4b0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8f4b3 mov dword ptr [edx + 0x58], 0x81 */
  w32((uint32_t)(EDX + 0x58), (0x81u));
  /* 11a8f4ba jmp 0x11a8f52d */
  goto L_11a8f52d;
L_11a8f4bc:;
  /* 11a8f4bc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a8f4bf cmp dword ptr [eax], 0xc0000091 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc0000091u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f4c5 jne 0x11a8f4d3 */
  if (!C.zf) goto L_11a8f4d3;
  /* 11a8f4c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8f4ca mov dword ptr [ecx + 0x58], 0x84 */
  w32((uint32_t)(ECX + 0x58), (0x84u));
  /* 11a8f4d1 jmp 0x11a8f52d */
  goto L_11a8f52d;
L_11a8f4d3:;
  /* 11a8f4d3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a8f4d6 cmp dword ptr [edx], 0xc0000093 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000093u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f4dc jne 0x11a8f4ea */
  if (!C.zf) goto L_11a8f4ea;
  /* 11a8f4de mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8f4e1 mov dword ptr [eax + 0x58], 0x85 */
  w32((uint32_t)(EAX + 0x58), (0x85u));
  /* 11a8f4e8 jmp 0x11a8f52d */
  goto L_11a8f52d;
L_11a8f4ea:;
  /* 11a8f4ea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a8f4ed cmp dword ptr [ecx], 0xc000008d */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xc000008du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f4f3 jne 0x11a8f501 */
  if (!C.zf) goto L_11a8f501;
  /* 11a8f4f5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8f4f8 mov dword ptr [edx + 0x58], 0x82 */
  w32((uint32_t)(EDX + 0x58), (0x82u));
  /* 11a8f4ff jmp 0x11a8f52d */
  goto L_11a8f52d;
L_11a8f501:;
  /* 11a8f501 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a8f504 cmp dword ptr [eax], 0xc000008f */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xc000008fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f50a jne 0x11a8f518 */
  if (!C.zf) goto L_11a8f518;
  /* 11a8f50c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8f50f mov dword ptr [ecx + 0x58], 0x86 */
  w32((uint32_t)(ECX + 0x58), (0x86u));
  /* 11a8f516 jmp 0x11a8f52d */
  goto L_11a8f52d;
L_11a8f518:;
  /* 11a8f518 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a8f51b cmp dword ptr [edx], 0xc0000092 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xc0000092u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f521 jne 0x11a8f52d */
  if (!C.zf) goto L_11a8f52d;
  /* 11a8f523 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8f526 mov dword ptr [eax + 0x58], 0x8a */
  w32((uint32_t)(EAX + 0x58), (0x8au));
L_11a8f52d:;
  /* 11a8f52d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8f530 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 11a8f533 push edx */
  push32((uint32_t)(EDX));
  /* 11a8f534 push 8 */
  push32((uint32_t)(0x8u));
  /* 11a8f536 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11a8f539u);
  /* 11a8f539 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8f53c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8f53f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8f542 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
  /* 11a8f545 jmp 0x11a8f55e */
  goto L_11a8f55e;
L_11a8f547:;
  /* 11a8f547 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a8f54a mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11a8f551 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a8f554 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11a8f557 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8f558 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11a8f55bu);
  /* 11a8f55b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a8f55e:;
  /* 11a8f55e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8f561 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a8f564 mov dword ptr [edx + 0x54], eax */
  w32((uint32_t)(EDX + 0x54), (EAX));
  /* 11a8f567 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11a8f56a:;
  /* 11a8f56a mov esp, ebp */
  ESP = (EBP);
  /* 11a8f56c pop ebp */
  EBP = (pop32());
  /* 11a8f56d ret  */
  ESPCHK(0x11a8f3b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f570 @ 0x11a8f570 (89 bytes, 35 insns) */
void f_11a8f570(void) {
  FTRACE(0x11a8f570u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8f570 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8f571 mov ebp, esp */
  EBP = (ESP);
  /* 11a8f573 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8f574 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8f577 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11a8f57a:;
  /* 11a8f57a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8f57d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a8f57f cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f582 je 0x11a8f5a2 */
  if (C.zf) goto L_11a8f5a2;
  /* 11a8f584 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8f587 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8f58a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a8f58d mov ecx, dword ptr [0x11ab8254] */
  ECX = (r32((uint32_t)(0x11ab8254)));
  /* 11a8f593 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a8f596 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8f599 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8f59b cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f59e jae 0x11a8f5a2 */
  if (!C.cf) goto L_11a8f5a2;
  /* 11a8f5a0 jmp 0x11a8f57a */
  goto L_11a8f57a;
L_11a8f5a2:;
  /* 11a8f5a2 mov eax, dword ptr [0x11ab8254] */
  EAX = (r32((uint32_t)(0x11ab8254)));
  /* 11a8f5a7 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a8f5aa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8f5ad add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8f5af cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f5b2 jae 0x11a8f5be */
  if (!C.cf) goto L_11a8f5be;
  /* 11a8f5b4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8f5b7 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a8f5b9 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f5bc je 0x11a8f5c2 */
  if (C.zf) goto L_11a8f5c2;
L_11a8f5be:;
  /* 11a8f5be xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8f5c0 jmp 0x11a8f5c5 */
  goto L_11a8f5c5;
L_11a8f5c2:;
  /* 11a8f5c2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11a8f5c5:;
  /* 11a8f5c5 mov esp, ebp */
  ESP = (EBP);
  /* 11a8f5c7 pop ebp */
  EBP = (pop32());
  /* 11a8f5c8 ret  */
  ESPCHK(0x11a8f570u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x11a8f5d0 (48 bytes, 17 insns) */
void f_11a8f5d0(void) {
  FTRACE(0x11a8f5d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8f5d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8f5d1 mov ebp, esp */
  EBP = (ESP);
  /* 11a8f5d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8f5d4 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a8f5d6 call 0x11a8f2d0 */
  push32(0x11a8f5dbu); f_11a8f2d0();
  /* 11a8f5db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8f5de mov eax, dword ptr [0x11aba2ac] */
  EAX = (r32((uint32_t)(0x11aba2ac)));
  /* 11a8f5e3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a8f5e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8f5e9 mov dword ptr [0x11aba2ac], ecx */
  w32((uint32_t)(0x11aba2ac), (ECX));
  /* 11a8f5ef push 9 */
  push32((uint32_t)(0x9u));
  /* 11a8f5f1 call 0x11a8f370 */
  push32(0x11a8f5f6u); f_11a8f370();
  /* 11a8f5f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8f5f9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8f5fc mov esp, ebp */
  ESP = (EBP);
  /* 11a8f5fe pop ebp */
  EBP = (pop32());
  /* 11a8f5ff ret  */
  ESPCHK(0x11a8f5d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f600 @ 0x11a8f600 (10 bytes, 5 insns) */
void f_11a8f600(void) {
  FTRACE(0x11a8f600u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8f600 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8f601 mov ebp, esp */
  EBP = (ESP);
  /* 11a8f603 mov eax, dword ptr [0x11aba2ac] */
  EAX = (r32((uint32_t)(0x11aba2ac)));
  /* 11a8f608 pop ebp */
  EBP = (pop32());
  /* 11a8f609 ret  */
  ESPCHK(0x11a8f600u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x11a8f610 (45 bytes, 19 insns) */
void f_11a8f610(void) {
  FTRACE(0x11a8f610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8f610 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8f611 mov ebp, esp */
  EBP = (ESP);
  /* 11a8f613 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8f614 mov eax, dword ptr [0x11aba2ac] */
  EAX = (r32((uint32_t)(0x11aba2ac)));
  /* 11a8f619 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a8f61c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f620 je 0x11a8f630 */
  if (C.zf) goto L_11a8f630;
  /* 11a8f622 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8f625 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8f626 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11a8f629u);
  /* 11a8f629 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8f62c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8f62e jne 0x11a8f634 */
  if (!C.zf) goto L_11a8f634;
L_11a8f630:;
  /* 11a8f630 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8f632 jmp 0x11a8f639 */
  goto L_11a8f639;
L_11a8f634:;
  /* 11a8f634 mov eax, 1 */
  EAX = (0x1u);
L_11a8f639:;
  /* 11a8f639 mov esp, ebp */
  ESP = (EBP);
  /* 11a8f63b pop ebp */
  EBP = (pop32());
  /* 11a8f63c ret  */
  ESPCHK(0x11a8f610u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f640 @ 0x11a8f640 (23 bytes, 10 insns) */
void f_11a8f640(void) {
  FTRACE(0x11a8f640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8f640 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8f641 mov ebp, esp */
  EBP = (ESP);
  /* 11a8f643 mov eax, dword ptr [0x11aba2a8] */
  EAX = (r32((uint32_t)(0x11aba2a8)));
  /* 11a8f648 push eax */
  push32((uint32_t)(EAX));
  /* 11a8f649 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8f64c push ecx */
  push32((uint32_t)(ECX));
  /* 11a8f64d call 0x11a8f660 */
  push32(0x11a8f652u); f_11a8f660();
  /* 11a8f652 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8f655 pop ebp */
  EBP = (pop32());
  /* 11a8f656 ret  */
  ESPCHK(0x11a8f640u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x11a8f660 (87 bytes, 34 insns) */
void f_11a8f660(void) {
  FTRACE(0x11a8f660u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8f660 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8f661 mov ebp, esp */
  EBP = (ESP);
  /* 11a8f663 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8f664 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f668 jbe 0x11a8f66e */
  if ((C.cf||C.zf)) goto L_11a8f66e;
  /* 11a8f66a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8f66c jmp 0x11a8f6b3 */
  goto L_11a8f6b3;
L_11a8f66e:;
  /* 11a8f66e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f672 ja 0x11a8f685 */
  if ((!C.cf&&!C.zf)) goto L_11a8f685;
  /* 11a8f674 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8f677 push eax */
  push32((uint32_t)(EAX));
  /* 11a8f678 call 0x11a8f6c0 */
  push32(0x11a8f67du); f_11a8f6c0();
  /* 11a8f67d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8f680 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a8f683 jmp 0x11a8f68c */
  goto L_11a8f68c;
L_11a8f685:;
  /* 11a8f685 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11a8f68c:;
  /* 11a8f68c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f690 jne 0x11a8f698 */
  if (!C.zf) goto L_11a8f698;
  /* 11a8f692 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f696 jne 0x11a8f69d */
  if (!C.zf) goto L_11a8f69d;
L_11a8f698:;
  /* 11a8f698 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8f69b jmp 0x11a8f6b3 */
  goto L_11a8f6b3;
L_11a8f69d:;
  /* 11a8f69d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8f6a0 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8f6a1 call 0x11a8f610 */
  push32(0x11a8f6a6u); f_11a8f610();
  /* 11a8f6a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8f6a9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8f6ab jne 0x11a8f6b1 */
  if (!C.zf) goto L_11a8f6b1;
  /* 11a8f6ad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8f6af jmp 0x11a8f6b3 */
  goto L_11a8f6b3;
L_11a8f6b1:;
  /* 11a8f6b1 jmp 0x11a8f66e */
  goto L_11a8f66e;
L_11a8f6b3:;
  /* 11a8f6b3 mov esp, ebp */
  ESP = (EBP);
  /* 11a8f6b5 pop ebp */
  EBP = (pop32());
  /* 11a8f6b6 ret  */
  ESPCHK(0x11a8f660u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f6c0 @ 0x11a8f6c0 (109 bytes, 37 insns) */
void f_11a8f6c0(void) {
  FTRACE(0x11a8f6c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8f6c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8f6c1 mov ebp, esp */
  EBP = (ESP);
  /* 11a8f6c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8f6c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8f6c7 cmp eax, dword ptr [0x11ab825c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11ab825c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f6cd ja 0x11a8f6fd */
  if ((!C.cf&&!C.zf)) goto L_11a8f6fd;
  /* 11a8f6cf push 9 */
  push32((uint32_t)(0x9u));
  /* 11a8f6d1 call 0x11a8f2d0 */
  push32(0x11a8f6d6u); f_11a8f2d0();
  /* 11a8f6d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8f6d9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8f6dc push ecx */
  push32((uint32_t)(ECX));
  /* 11a8f6dd call 0x11a90200 */
  push32(0x11a8f6e2u); f_11a90200();
  /* 11a8f6e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8f6e5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a8f6e8 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a8f6ea call 0x11a8f370 */
  push32(0x11a8f6efu); f_11a8f370();
  /* 11a8f6ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8f6f2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f6f6 je 0x11a8f6fd */
  if (C.zf) goto L_11a8f6fd;
  /* 11a8f6f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8f6fb jmp 0x11a8f729 */
  goto L_11a8f729;
L_11a8f6fd:;
  /* 11a8f6fd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f701 jne 0x11a8f70a */
  if (!C.zf) goto L_11a8f70a;
  /* 11a8f703 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_11a8f70a:;
  /* 11a8f70a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8f70d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8f710 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11a8f713 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11a8f716 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8f719 push eax */
  push32((uint32_t)(EAX));
  /* 11a8f71a push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8f71c mov ecx, dword ptr [0x11abba64] */
  ECX = (r32((uint32_t)(0x11abba64)));
  /* 11a8f722 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8f723 call dword ptr [0x11abc33c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc33c))), 0x11a8f729u);
L_11a8f729:;
  /* 11a8f729 mov esp, ebp */
  ESP = (EBP);
  /* 11a8f72b pop ebp */
  EBP = (pop32());
  /* 11a8f72c ret  */
  ESPCHK(0x11a8f6c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f730 @ 0x11a8f730 (10 bytes, 5 insns) */
void f_11a8f730(void) {
  FTRACE(0x11a8f730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8f730 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8f731 mov ebp, esp */
  EBP = (ESP);
  /* 11a8f733 mov eax, 1 */
  EAX = (0x1u);
  /* 11a8f738 pop ebp */
  EBP = (pop32());
  /* 11a8f739 ret  */
  ESPCHK(0x11a8f730u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f740 @ 0x11a8f740 (173 bytes, 59 insns) */
void f_11a8f740(void) {
  FTRACE(0x11a8f740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8f740 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8f741 mov ebp, esp */
  EBP = (ESP);
  /* 11a8f743 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8f746 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f74a jbe 0x11a8f753 */
  if ((C.cf||C.zf)) goto L_11a8f753;
  /* 11a8f74c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8f74e jmp 0x11a8f7e9 */
  goto L_11a8f7e9;
L_11a8f753:;
  /* 11a8f753 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a8f755 call 0x11a8f2d0 */
  push32(0x11a8f75au); f_11a8f2d0();
  /* 11a8f75a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8f75d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8f760 push eax */
  push32((uint32_t)(EAX));
  /* 11a8f761 call 0x11a8fb70 */
  push32(0x11a8f766u); f_11a8fb70();
  /* 11a8f766 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8f769 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a8f76c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f770 je 0x11a8f7b1 */
  if (C.zf) goto L_11a8f7b1;
  /* 11a8f772 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11a8f779 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8f77c cmp ecx, dword ptr [0x11ab825c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11ab825c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f782 ja 0x11a8f7a2 */
  if ((!C.cf&&!C.zf)) goto L_11a8f7a2;
  /* 11a8f784 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8f787 push edx */
  push32((uint32_t)(EDX));
  /* 11a8f788 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8f78b push eax */
  push32((uint32_t)(EAX));
  /* 11a8f78c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8f78f push ecx */
  push32((uint32_t)(ECX));
  /* 11a8f790 call 0x11a90a40 */
  push32(0x11a8f795u); f_11a90a40();
  /* 11a8f795 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8f798 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8f79a je 0x11a8f7a2 */
  if (C.zf) goto L_11a8f7a2;
  /* 11a8f79c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8f79f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11a8f7a2:;
  /* 11a8f7a2 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a8f7a4 call 0x11a8f370 */
  push32(0x11a8f7a9u); f_11a8f370();
  /* 11a8f7a9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8f7ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8f7af jmp 0x11a8f7e9 */
  goto L_11a8f7e9;
L_11a8f7b1:;
  /* 11a8f7b1 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a8f7b3 call 0x11a8f370 */
  push32(0x11a8f7b8u); f_11a8f370();
  /* 11a8f7b8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8f7bb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f7bf jne 0x11a8f7c8 */
  if (!C.zf) goto L_11a8f7c8;
  /* 11a8f7c1 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11a8f7c8:;
  /* 11a8f7c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8f7cb add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8f7ce and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 11a8f7d0 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11a8f7d3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8f7d6 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8f7d7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8f7da push edx */
  push32((uint32_t)(EDX));
  /* 11a8f7db push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11a8f7dd mov eax, dword ptr [0x11abba64] */
  EAX = (r32((uint32_t)(0x11abba64)));
  /* 11a8f7e2 push eax */
  push32((uint32_t)(EAX));
  /* 11a8f7e3 call dword ptr [0x11abc344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc344))), 0x11a8f7e9u);
L_11a8f7e9:;
  /* 11a8f7e9 mov esp, ebp */
  ESP = (EBP);
  /* 11a8f7eb pop ebp */
  EBP = (pop32());
  /* 11a8f7ec ret  */
  ESPCHK(0x11a8f740u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f7f0 @ 0x11a8f7f0 (490 bytes, 165 insns) */
void f_11a8f7f0(void) {
  FTRACE(0x11a8f7f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8f7f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8f7f1 mov ebp, esp */
  EBP = (ESP);
  /* 11a8f7f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8f7f6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f7fa jne 0x11a8f80d */
  if (!C.zf) goto L_11a8f80d;
  /* 11a8f7fc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8f7ff push eax */
  push32((uint32_t)(EAX));
  /* 11a8f800 call 0x11a8f640 */
  push32(0x11a8f805u); f_11a8f640();
  /* 11a8f805 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8f808 jmp 0x11a8f9d6 */
  goto L_11a8f9d6;
L_11a8f80d:;
  /* 11a8f80d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f811 jne 0x11a8f826 */
  if (!C.zf) goto L_11a8f826;
  /* 11a8f813 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8f816 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8f817 call 0x11a8f9e0 */
  push32(0x11a8f81cu); f_11a8f9e0();
  /* 11a8f81c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8f81f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8f821 jmp 0x11a8f9d6 */
  goto L_11a8f9d6;
L_11a8f826:;
  /* 11a8f826 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11a8f82d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f831 ja 0x11a8f9a9 */
  if ((!C.cf&&!C.zf)) goto L_11a8f9a9;
  /* 11a8f837 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a8f839 call 0x11a8f2d0 */
  push32(0x11a8f83eu); f_11a8f2d0();
  /* 11a8f83e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8f841 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8f844 push edx */
  push32((uint32_t)(EDX));
  /* 11a8f845 call 0x11a8fb70 */
  push32(0x11a8f84au); f_11a8fb70();
  /* 11a8f84a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8f84d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11a8f850 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f854 je 0x11a8f96c */
  if (C.zf) goto L_11a8f96c;
  /* 11a8f85a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8f85d cmp eax, dword ptr [0x11ab825c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11ab825c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f863 ja 0x11a8f8e0 */
  if ((!C.cf&&!C.zf)) goto L_11a8f8e0;
  /* 11a8f865 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8f868 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8f869 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8f86c push edx */
  push32((uint32_t)(EDX));
  /* 11a8f86d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8f870 push eax */
  push32((uint32_t)(EAX));
  /* 11a8f871 call 0x11a90a40 */
  push32(0x11a8f876u); f_11a90a40();
  /* 11a8f876 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8f879 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8f87b je 0x11a8f885 */
  if (C.zf) goto L_11a8f885;
  /* 11a8f87d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8f880 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a8f883 jmp 0x11a8f8e0 */
  goto L_11a8f8e0;
L_11a8f885:;
  /* 11a8f885 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8f888 push edx */
  push32((uint32_t)(EDX));
  /* 11a8f889 call 0x11a90200 */
  push32(0x11a8f88eu); f_11a90200();
  /* 11a8f88e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8f891 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a8f894 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f898 je 0x11a8f8e0 */
  if (C.zf) goto L_11a8f8e0;
  /* 11a8f89a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8f89d mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 11a8f8a0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8f8a3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a8f8a6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8f8a9 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f8ac jae 0x11a8f8b6 */
  if (!C.cf) goto L_11a8f8b6;
  /* 11a8f8ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8f8b1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11a8f8b4 jmp 0x11a8f8bc */
  goto L_11a8f8bc;
L_11a8f8b6:;
  /* 11a8f8b6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8f8b9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11a8f8bc:;
  /* 11a8f8bc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a8f8bf push edx */
  push32((uint32_t)(EDX));
  /* 11a8f8c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8f8c3 push eax */
  push32((uint32_t)(EAX));
  /* 11a8f8c4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8f8c7 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8f8c8 call 0x11a91f90 */
  push32(0x11a8f8cdu); f_11a91f90();
  /* 11a8f8cd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8f8d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8f8d3 push edx */
  push32((uint32_t)(EDX));
  /* 11a8f8d4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8f8d7 push eax */
  push32((uint32_t)(EAX));
  /* 11a8f8d8 call 0x11a8fc30 */
  push32(0x11a8f8ddu); f_11a8fc30();
  /* 11a8f8dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a8f8e0:;
  /* 11a8f8e0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f8e4 jne 0x11a8f960 */
  if (!C.zf) goto L_11a8f960;
  /* 11a8f8e6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f8ea jne 0x11a8f8f3 */
  if (!C.zf) goto L_11a8f8f3;
  /* 11a8f8ec mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11a8f8f3:;
  /* 11a8f8f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8f8f6 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8f8f9 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11a8f8fc mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11a8f8ff mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8f902 push edx */
  push32((uint32_t)(EDX));
  /* 11a8f903 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8f905 mov eax, dword ptr [0x11abba64] */
  EAX = (r32((uint32_t)(0x11abba64)));
  /* 11a8f90a push eax */
  push32((uint32_t)(EAX));
  /* 11a8f90b call dword ptr [0x11abc33c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc33c))), 0x11a8f911u);
  /* 11a8f911 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a8f914 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f918 je 0x11a8f960 */
  if (C.zf) goto L_11a8f960;
  /* 11a8f91a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8f91d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11a8f920 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8f923 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a8f926 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8f929 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f92c jae 0x11a8f936 */
  if (!C.cf) goto L_11a8f936;
  /* 11a8f92e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8f931 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11a8f934 jmp 0x11a8f93c */
  goto L_11a8f93c;
L_11a8f936:;
  /* 11a8f936 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8f939 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11a8f93c:;
  /* 11a8f93c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a8f93f push eax */
  push32((uint32_t)(EAX));
  /* 11a8f940 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8f943 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8f944 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8f947 push edx */
  push32((uint32_t)(EDX));
  /* 11a8f948 call 0x11a91f90 */
  push32(0x11a8f94du); f_11a91f90();
  /* 11a8f94d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8f950 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8f953 push eax */
  push32((uint32_t)(EAX));
  /* 11a8f954 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8f957 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8f958 call 0x11a8fc30 */
  push32(0x11a8f95du); f_11a8fc30();
  /* 11a8f95d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11a8f960:;
  /* 11a8f960 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a8f962 call 0x11a8f370 */
  push32(0x11a8f967u); f_11a8f370();
  /* 11a8f967 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8f96a jmp 0x11a8f9a9 */
  goto L_11a8f9a9;
L_11a8f96c:;
  /* 11a8f96c push 9 */
  push32((uint32_t)(0x9u));
  /* 11a8f96e call 0x11a8f370 */
  push32(0x11a8f973u); f_11a8f370();
  /* 11a8f973 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8f976 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f97a jne 0x11a8f983 */
  if (!C.zf) goto L_11a8f983;
  /* 11a8f97c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11a8f983:;
  /* 11a8f983 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8f986 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8f989 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11a8f98c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11a8f98f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8f992 push eax */
  push32((uint32_t)(EAX));
  /* 11a8f993 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8f996 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8f997 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8f999 mov edx, dword ptr [0x11abba64] */
  EDX = (r32((uint32_t)(0x11abba64)));
  /* 11a8f99f push edx */
  push32((uint32_t)(EDX));
  /* 11a8f9a0 call dword ptr [0x11abc344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc344))), 0x11a8f9a6u);
  /* 11a8f9a6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11a8f9a9:;
  /* 11a8f9a9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f9ad jne 0x11a8f9b8 */
  if (!C.zf) goto L_11a8f9b8;
  /* 11a8f9af cmp dword ptr [0x11aba2a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba2a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f9b6 jne 0x11a8f9bd */
  if (!C.zf) goto L_11a8f9bd;
L_11a8f9b8:;
  /* 11a8f9b8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8f9bb jmp 0x11a8f9d6 */
  goto L_11a8f9d6;
L_11a8f9bd:;
  /* 11a8f9bd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8f9c0 push eax */
  push32((uint32_t)(EAX));
  /* 11a8f9c1 call 0x11a8f610 */
  push32(0x11a8f9c6u); f_11a8f610();
  /* 11a8f9c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8f9c9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8f9cb jne 0x11a8f9d1 */
  if (!C.zf) goto L_11a8f9d1;
  /* 11a8f9cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8f9cf jmp 0x11a8f9d6 */
  goto L_11a8f9d6;
L_11a8f9d1:;
  /* 11a8f9d1 jmp 0x11a8f826 */
  goto L_11a8f826;
L_11a8f9d6:;
  /* 11a8f9d6 mov esp, ebp */
  ESP = (EBP);
  /* 11a8f9d8 pop ebp */
  EBP = (pop32());
  /* 11a8f9d9 ret  */
  ESPCHK(0x11a8f7f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f9e0 @ 0x11a8f9e0 (104 bytes, 38 insns) */
void f_11a8f9e0(void) {
  FTRACE(0x11a8f9e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8f9e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8f9e1 mov ebp, esp */
  EBP = (ESP);
  /* 11a8f9e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8f9e4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8f9e8 jne 0x11a8f9ec */
  if (!C.zf) goto L_11a8f9ec;
  /* 11a8f9ea jmp 0x11a8fa44 */
  goto L_11a8fa44;
L_11a8f9ec:;
  /* 11a8f9ec push 9 */
  push32((uint32_t)(0x9u));
  /* 11a8f9ee call 0x11a8f2d0 */
  push32(0x11a8f9f3u); f_11a8f2d0();
  /* 11a8f9f3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8f9f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8f9f9 push eax */
  push32((uint32_t)(EAX));
  /* 11a8f9fa call 0x11a8fb70 */
  push32(0x11a8f9ffu); f_11a8fb70();
  /* 11a8f9ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8fa02 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a8fa05 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8fa09 je 0x11a8fa27 */
  if (C.zf) goto L_11a8fa27;
  /* 11a8fa0b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8fa0e push ecx */
  push32((uint32_t)(ECX));
  /* 11a8fa0f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8fa12 push edx */
  push32((uint32_t)(EDX));
  /* 11a8fa13 call 0x11a8fc30 */
  push32(0x11a8fa18u); f_11a8fc30();
  /* 11a8fa18 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8fa1b push 9 */
  push32((uint32_t)(0x9u));
  /* 11a8fa1d call 0x11a8f370 */
  push32(0x11a8fa22u); f_11a8f370();
  /* 11a8fa22 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8fa25 jmp 0x11a8fa44 */
  goto L_11a8fa44;
L_11a8fa27:;
  /* 11a8fa27 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a8fa29 call 0x11a8f370 */
  push32(0x11a8fa2eu); f_11a8f370();
  /* 11a8fa2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8fa31 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8fa34 push eax */
  push32((uint32_t)(EAX));
  /* 11a8fa35 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8fa37 mov ecx, dword ptr [0x11abba64] */
  ECX = (r32((uint32_t)(0x11abba64)));
  /* 11a8fa3d push ecx */
  push32((uint32_t)(ECX));
  /* 11a8fa3e call dword ptr [0x11abc360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc360))), 0x11a8fa44u);
L_11a8fa44:;
  /* 11a8fa44 mov esp, ebp */
  ESP = (EBP);
  /* 11a8fa46 pop ebp */
  EBP = (pop32());
  /* 11a8fa47 ret  */
  ESPCHK(0x11a8f9e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fa50 @ 0x11a8fa50 (116 bytes, 34 insns) */
void f_11a8fa50(void) {
  FTRACE(0x11a8fa50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8fa50 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8fa51 mov ebp, esp */
  EBP = (ESP);
  /* 11a8fa53 push ecx */
  push32((uint32_t)(ECX));
  /* 11a8fa54 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 11a8fa5b push 9 */
  push32((uint32_t)(0x9u));
  /* 11a8fa5d call 0x11a8f2d0 */
  push32(0x11a8fa62u); f_11a8f2d0();
  /* 11a8fa62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8fa65 call 0x11a91160 */
  push32(0x11a8fa6au); f_11a91160();
  /* 11a8fa6a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8fa6c jge 0x11a8fa75 */
  if ((C.sf==C.of)) goto L_11a8fa75;
  /* 11a8fa6e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_11a8fa75:;
  /* 11a8fa75 push 9 */
  push32((uint32_t)(0x9u));
  /* 11a8fa77 call 0x11a8f370 */
  push32(0x11a8fa7cu); f_11a8f370();
  /* 11a8fa7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8fa7f push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8fa81 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8fa83 mov eax, dword ptr [0x11abba64] */
  EAX = (r32((uint32_t)(0x11abba64)));
  /* 11a8fa88 push eax */
  push32((uint32_t)(EAX));
  /* 11a8fa89 call dword ptr [0x11abc3f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3f0))), 0x11a8fa8fu);
  /* 11a8fa8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8fa91 jne 0x11a8fabd */
  if (!C.zf) goto L_11a8fabd;
  /* 11a8fa93 call dword ptr [0x11abc3d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3d4))), 0x11a8fa99u);
  /* 11a8fa99 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8fa9c jne 0x11a8fab6 */
  if (!C.zf) goto L_11a8fab6;
  /* 11a8fa9e call 0x11a92380 */
  push32(0x11a8faa3u); f_11a92380();
  /* 11a8faa3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 11a8faa9 call 0x11a92370 */
  push32(0x11a8faaeu); f_11a92370();
  /* 11a8faae mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 11a8fab4 jmp 0x11a8fabd */
  goto L_11a8fabd;
L_11a8fab6:;
  /* 11a8fab6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_11a8fabd:;
  /* 11a8fabd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8fac0 mov esp, ebp */
  ESP = (EBP);
  /* 11a8fac2 pop ebp */
  EBP = (pop32());
  /* 11a8fac3 ret  */
  ESPCHK(0x11a8fa50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fad0 @ 0x11a8fad0 (10 bytes, 5 insns) */
void f_11a8fad0(void) {
  FTRACE(0x11a8fad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8fad0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8fad1 mov ebp, esp */
  EBP = (ESP);
  /* 11a8fad3 call 0x11a8fa50 */
  push32(0x11a8fad8u); f_11a8fa50();
  /* 11a8fad8 pop ebp */
  EBP = (pop32());
  /* 11a8fad9 ret  */
  ESPCHK(0x11a8fad0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fae0 @ 0x11a8fae0 (10 bytes, 5 insns) */
void f_11a8fae0(void) {
  FTRACE(0x11a8fae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8fae0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8fae1 mov ebp, esp */
  EBP = (ESP);
  /* 11a8fae3 mov eax, dword ptr [0x11ab825c] */
  EAX = (r32((uint32_t)(0x11ab825c)));
  /* 11a8fae8 pop ebp */
  EBP = (pop32());
  /* 11a8fae9 ret  */
  ESPCHK(0x11a8fae0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000faf0 @ 0x11a8faf0 (31 bytes, 11 insns) */
void f_11a8faf0(void) {
  FTRACE(0x11a8faf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8faf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8faf1 mov ebp, esp */
  EBP = (ESP);
  /* 11a8faf3 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8fafa jbe 0x11a8fb00 */
  if ((C.cf||C.zf)) goto L_11a8fb00;
  /* 11a8fafc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8fafe jmp 0x11a8fb0d */
  goto L_11a8fb0d;
L_11a8fb00:;
  /* 11a8fb00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8fb03 mov dword ptr [0x11ab825c], eax */
  w32((uint32_t)(0x11ab825c), (EAX));
  /* 11a8fb08 mov eax, 1 */
  EAX = (0x1u);
L_11a8fb0d:;
  /* 11a8fb0d pop ebp */
  EBP = (pop32());
  /* 11a8fb0e ret  */
  ESPCHK(0x11a8faf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb10 @ 0x11a8fb10 (89 bytes, 20 insns) */
void f_11a8fb10(void) {
  FTRACE(0x11a8fb10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8fb10 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8fb11 mov ebp, esp */
  EBP = (ESP);
  /* 11a8fb13 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11a8fb18 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a8fb1a mov eax, dword ptr [0x11abba64] */
  EAX = (r32((uint32_t)(0x11abba64)));
  /* 11a8fb1f push eax */
  push32((uint32_t)(EAX));
  /* 11a8fb20 call dword ptr [0x11abc33c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc33c))), 0x11a8fb26u);
  /* 11a8fb26 mov dword ptr [0x11aba708], eax */
  w32((uint32_t)(0x11aba708), (EAX));
  /* 11a8fb2b cmp dword ptr [0x11aba708], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba708))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8fb32 jne 0x11a8fb38 */
  if (!C.zf) goto L_11a8fb38;
  /* 11a8fb34 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8fb36 jmp 0x11a8fb67 */
  goto L_11a8fb67;
L_11a8fb38:;
  /* 11a8fb38 mov ecx, dword ptr [0x11aba708] */
  ECX = (r32((uint32_t)(0x11aba708)));
  /* 11a8fb3e mov dword ptr [0x11aba6fc], ecx */
  w32((uint32_t)(0x11aba6fc), (ECX));
  /* 11a8fb44 mov dword ptr [0x11aba700], 0 */
  w32((uint32_t)(0x11aba700), (0x0u));
  /* 11a8fb4e mov dword ptr [0x11aba704], 0 */
  w32((uint32_t)(0x11aba704), (0x0u));
  /* 11a8fb58 mov dword ptr [0x11aba6e8], 0x10 */
  w32((uint32_t)(0x11aba6e8), (0x10u));
  /* 11a8fb62 mov eax, 1 */
  EAX = (0x1u);
L_11a8fb67:;
  /* 11a8fb67 pop ebp */
  EBP = (pop32());
  /* 11a8fb68 ret  */
  ESPCHK(0x11a8fb10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb70 @ 0x11a8fb70 (85 bytes, 29 insns) */
void f_11a8fb70(void) {
  FTRACE(0x11a8fb70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8fb70 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8fb71 mov ebp, esp */
  EBP = (ESP);
  /* 11a8fb73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8fb76 mov eax, dword ptr [0x11aba704] */
  EAX = (r32((uint32_t)(0x11aba704)));
  /* 11a8fb7b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a8fb7e mov ecx, dword ptr [0x11aba708] */
  ECX = (r32((uint32_t)(0x11aba708)));
  /* 11a8fb84 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8fb86 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a8fb89 mov edx, dword ptr [0x11aba708] */
  EDX = (r32((uint32_t)(0x11aba708)));
  /* 11a8fb8f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11a8fb92:;
  /* 11a8fb92 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8fb95 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8fb98 jae 0x11a8fbbf */
  if (!C.cf) goto L_11a8fbbf;
  /* 11a8fb9a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8fb9d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8fba0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8fba3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a8fba6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8fbad jae 0x11a8fbb4 */
  if (!C.cf) goto L_11a8fbb4;
  /* 11a8fbaf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8fbb2 jmp 0x11a8fbc1 */
  goto L_11a8fbc1;
L_11a8fbb4:;
  /* 11a8fbb4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8fbb7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8fbba mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a8fbbd jmp 0x11a8fb92 */
  goto L_11a8fb92;
L_11a8fbbf:;
  /* 11a8fbbf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a8fbc1:;
  /* 11a8fbc1 mov esp, ebp */
  ESP = (EBP);
  /* 11a8fbc3 pop ebp */
  EBP = (pop32());
  /* 11a8fbc4 ret  */
  ESPCHK(0x11a8fb70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fbd0 @ 0x11a8fbd0 (95 bytes, 33 insns) */
void f_11a8fbd0(void) {
  FTRACE(0x11a8fbd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8fbd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8fbd1 mov ebp, esp */
  EBP = (ESP);
  /* 11a8fbd3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8fbd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8fbd9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8fbdc sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8fbdf mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a8fbe2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8fbe5 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11a8fbe8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a8fbeb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11a8fbf0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8fbf3 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11a8fbf5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8fbf8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11a8fbfb and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11a8fbfd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a8fbff jne 0x11a8fc21 */
  if (!C.zf) goto L_11a8fc21;
  /* 11a8fc01 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8fc04 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 11a8fc07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a8fc09 jne 0x11a8fc21 */
  if (!C.zf) goto L_11a8fc21;
  /* 11a8fc0b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8fc0e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 11a8fc14 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a8fc16 je 0x11a8fc21 */
  if (C.zf) goto L_11a8fc21;
  /* 11a8fc18 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 11a8fc1f jmp 0x11a8fc28 */
  goto L_11a8fc28;
L_11a8fc21:;
  /* 11a8fc21 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11a8fc28:;
  /* 11a8fc28 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8fc2b mov esp, ebp */
  ESP = (EBP);
  /* 11a8fc2d pop ebp */
  EBP = (pop32());
  /* 11a8fc2e ret  */
  ESPCHK(0x11a8fbd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc30 @ 0x11a8fc30 (1485 bytes, 453 insns) */
void f_11a8fc30(void) {
  FTRACE(0x11a8fc30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a8fc30 push ebp */
  push32((uint32_t)(EBP));
  /* 11a8fc31 mov ebp, esp */
  EBP = (ESP);
  /* 11a8fc33 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8fc36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8fc39 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11a8fc3c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 11a8fc3f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8fc42 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8fc45 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8fc48 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11a8fc4b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a8fc4e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11a8fc51 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a8fc54 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8fc57 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a8fc5d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11a8fc60 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 11a8fc67 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a8fc6a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a8fc6d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8fc70 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11a8fc73 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a8fc76 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a8fc78 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8fc7b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11a8fc7e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a8fc81 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8fc84 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 11a8fc87 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11a8fc8a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a8fc8c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11a8fc8f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a8fc92 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11a8fc95 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11a8fc98 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a8fc9b and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11a8fc9e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a8fca0 jne 0x11a8fdc8 */
  if (!C.zf) goto L_11a8fdc8;
  /* 11a8fca6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a8fca9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11a8fcac sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8fcaf mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11a8fcb2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8fcb6 jbe 0x11a8fcbf */
  if ((C.cf||C.zf)) goto L_11a8fcbf;
  /* 11a8fcb8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_11a8fcbf:;
  /* 11a8fcbf mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11a8fcc2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11a8fcc5 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11a8fcc8 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8fccb jne 0x11a8fda1 */
  if (!C.zf) goto L_11a8fda1;
  /* 11a8fcd1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8fcd5 jae 0x11a8fd36 */
  if (!C.cf) goto L_11a8fd36;
  /* 11a8fcd7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11a8fcdc mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a8fcdf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11a8fce1 not eax */
  EAX = (~(EAX));
  /* 11a8fce3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8fce6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11a8fce9 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11a8fced and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a8fcef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8fcf2 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11a8fcf5 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11a8fcf9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11a8fcfc add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8fcff mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11a8fd02 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11a8fd05 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11a8fd08 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8fd0b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11a8fd0e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11a8fd11 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8fd14 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11a8fd18 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a8fd1a jne 0x11a8fd34 */
  if (!C.zf) goto L_11a8fd34;
  /* 11a8fd1c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11a8fd21 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a8fd24 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11a8fd26 not eax */
  EAX = (~(EAX));
  /* 11a8fd28 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8fd2b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a8fd2d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11a8fd2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8fd32 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11a8fd34:;
  /* 11a8fd34 jmp 0x11a8fda1 */
  goto L_11a8fda1;
L_11a8fd36:;
  /* 11a8fd36 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a8fd39 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8fd3c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11a8fd41 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a8fd43 not edx */
  EDX = (~(EDX));
  /* 11a8fd45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8fd48 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11a8fd4b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11a8fd52 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8fd54 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8fd57 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11a8fd5a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 11a8fd61 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11a8fd64 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8fd67 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11a8fd6a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11a8fd6d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11a8fd70 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8fd73 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11a8fd76 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11a8fd79 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8fd7c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11a8fd80 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a8fd82 jne 0x11a8fda1 */
  if (!C.zf) goto L_11a8fda1;
  /* 11a8fd84 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a8fd87 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8fd8a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11a8fd8f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a8fd91 not edx */
  EDX = (~(EDX));
  /* 11a8fd93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8fd96 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11a8fd99 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11a8fd9b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8fd9e mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11a8fda1:;
  /* 11a8fda1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11a8fda4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11a8fda7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11a8fdaa mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a8fdad mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11a8fdb0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11a8fdb3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a8fdb6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11a8fdb9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11a8fdbc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11a8fdbf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a8fdc2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8fdc5 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_11a8fdc8:;
  /* 11a8fdc8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a8fdcb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11a8fdce sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8fdd1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11a8fdd4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8fdd8 jbe 0x11a8fde1 */
  if ((C.cf||C.zf)) goto L_11a8fde1;
  /* 11a8fdda mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_11a8fde1:;
  /* 11a8fde1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8fde4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11a8fde7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a8fde9 jne 0x11a8ff45 */
  if (!C.zf) goto L_11a8ff45;
  /* 11a8fdef mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a8fdf2 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8fdf5 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 11a8fdf8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8fdfb sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11a8fdfe sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8fe01 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11a8fe04 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8fe08 jbe 0x11a8fe11 */
  if ((C.cf||C.zf)) goto L_11a8fe11;
  /* 11a8fe0a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_11a8fe11:;
  /* 11a8fe11 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a8fe14 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8fe17 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11a8fe1a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a8fe1d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11a8fe20 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8fe23 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11a8fe26 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8fe2a jbe 0x11a8fe33 */
  if ((C.cf||C.zf)) goto L_11a8fe33;
  /* 11a8fe2c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_11a8fe33:;
  /* 11a8fe33 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a8fe36 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8fe39 je 0x11a8ff3f */
  if (C.zf) goto L_11a8ff3f;
  /* 11a8fe3f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11a8fe42 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11a8fe45 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a8fe48 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8fe4b jne 0x11a8ff21 */
  if (!C.zf) goto L_11a8ff21;
  /* 11a8fe51 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8fe55 jae 0x11a8feb6 */
  if (!C.cf) goto L_11a8feb6;
  /* 11a8fe57 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11a8fe5c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a8fe5f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a8fe61 not edx */
  EDX = (~(EDX));
  /* 11a8fe63 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8fe66 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11a8fe69 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11a8fe6d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11a8fe6f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8fe72 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11a8fe75 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11a8fe79 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11a8fe7c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8fe7f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11a8fe82 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11a8fe85 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11a8fe88 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8fe8b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11a8fe8e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11a8fe91 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8fe94 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11a8fe98 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a8fe9a jne 0x11a8feb4 */
  if (!C.zf) goto L_11a8feb4;
  /* 11a8fe9c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11a8fea1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a8fea4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a8fea6 not edx */
  EDX = (~(EDX));
  /* 11a8fea8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8feab mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a8fead and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11a8feaf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8feb2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11a8feb4:;
  /* 11a8feb4 jmp 0x11a8ff21 */
  goto L_11a8ff21;
L_11a8feb6:;
  /* 11a8feb6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a8feb9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8febc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11a8fec1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11a8fec3 not eax */
  EAX = (~(EAX));
  /* 11a8fec5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8fec8 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11a8fecb mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11a8fed2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a8fed4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8fed7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11a8feda mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11a8fee1 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11a8fee4 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8fee7 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11a8feea sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11a8feed mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11a8fef0 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8fef3 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11a8fef6 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11a8fef9 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8fefc movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11a8ff00 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a8ff02 jne 0x11a8ff21 */
  if (!C.zf) goto L_11a8ff21;
  /* 11a8ff04 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a8ff07 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a8ff0a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11a8ff0f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11a8ff11 not eax */
  EAX = (~(EAX));
  /* 11a8ff13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8ff16 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a8ff19 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11a8ff1b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8ff1e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11a8ff21:;
  /* 11a8ff21 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11a8ff24 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11a8ff27 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11a8ff2a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11a8ff2d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11a8ff30 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11a8ff33 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a8ff36 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11a8ff39 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11a8ff3c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_11a8ff3f:;
  /* 11a8ff3f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11a8ff42 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_11a8ff45:;
  /* 11a8ff45 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a8ff48 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11a8ff4b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a8ff4d jne 0x11a8ff5b */
  if (!C.zf) goto L_11a8ff5b;
  /* 11a8ff4f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a8ff52 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8ff55 je 0x11a9006b */
  if (C.zf) goto L_11a9006b;
L_11a8ff5b:;
  /* 11a8ff5b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a8ff5e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a8ff61 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 11a8ff64 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11a8ff67 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a8ff6a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a8ff6d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a8ff70 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11a8ff73 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a8ff76 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a8ff79 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11a8ff7c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a8ff7f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a8ff82 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11a8ff85 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a8ff88 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a8ff8b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a8ff8e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11a8ff91 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a8ff94 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a8ff97 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a8ff9a cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8ff9d jne 0x11a9006b */
  if (!C.zf) goto L_11a9006b;
  /* 11a8ffa3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a8ffa7 jae 0x11a90004 */
  if (!C.cf) goto L_11a90004;
  /* 11a8ffa9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11a8ffac add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ffaf movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11a8ffb3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11a8ffb6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ffb9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11a8ffbc add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11a8ffbf mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11a8ffc2 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a8ffc5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11a8ffc8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a8ffca jne 0x11a8ffe2 */
  if (!C.zf) goto L_11a8ffe2;
  /* 11a8ffcc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11a8ffd1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a8ffd4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a8ffd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8ffd9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a8ffdb or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11a8ffdd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a8ffe0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11a8ffe2:;
  /* 11a8ffe2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11a8ffe7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a8ffea shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11a8ffec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8ffef mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11a8fff2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11a8fff6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a8fff8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a8fffb mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11a8fffe mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11a90002 jmp 0x11a9006b */
  goto L_11a9006b;
L_11a90004:;
  /* 11a90004 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11a90007 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9000a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11a9000e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11a90011 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90014 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11a90017 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11a9001a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11a9001d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90020 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11a90023 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a90025 jne 0x11a90042 */
  if (!C.zf) goto L_11a90042;
  /* 11a90027 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a9002a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9002d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11a90032 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a90034 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a90037 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11a9003a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11a9003c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9003f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11a90042:;
  /* 11a90042 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a90045 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a90048 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11a9004d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11a9004f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a90052 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11a90055 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11a9005c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a9005e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a90061 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11a90064 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_11a9006b:;
  /* 11a9006b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a9006e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a90071 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11a90073 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a90076 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90079 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a9007c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 11a9007f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a90082 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a90084 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a90087 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9008a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11a9008c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9008f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a90092 jne 0x11a901f9 */
  if (!C.zf) goto L_11a901f9;
  /* 11a90098 cmp dword ptr [0x11aba700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9009f je 0x11a901e8 */
  if (C.zf) goto L_11a901e8;
  /* 11a900a5 mov eax, dword ptr [0x11aba6f8] */
  EAX = (r32((uint32_t)(0x11aba6f8)));
  /* 11a900aa shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 11a900ad mov ecx, dword ptr [0x11aba700] */
  ECX = (r32((uint32_t)(0x11aba700)));
  /* 11a900b3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11a900b6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a900b8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11a900bb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11a900c0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11a900c5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a900c8 push eax */
  push32((uint32_t)(EAX));
  /* 11a900c9 call dword ptr [0x11abc368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc368))), 0x11a900cfu);
  /* 11a900cf mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11a900d4 mov ecx, dword ptr [0x11aba6f8] */
  ECX = (r32((uint32_t)(0x11aba6f8)));
  /* 11a900da shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a900dc mov eax, dword ptr [0x11aba700] */
  EAX = (r32((uint32_t)(0x11aba700)));
  /* 11a900e1 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11a900e4 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11a900e6 mov edx, dword ptr [0x11aba700] */
  EDX = (r32((uint32_t)(0x11aba700)));
  /* 11a900ec mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11a900ef mov eax, dword ptr [0x11aba700] */
  EAX = (r32((uint32_t)(0x11aba700)));
  /* 11a900f4 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11a900f7 mov edx, dword ptr [0x11aba6f8] */
  EDX = (r32((uint32_t)(0x11aba6f8)));
  /* 11a900fd mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 11a90108 mov eax, dword ptr [0x11aba700] */
  EAX = (r32((uint32_t)(0x11aba700)));
  /* 11a9010d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11a90110 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 11a90113 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11a90116 mov eax, dword ptr [0x11aba700] */
  EAX = (r32((uint32_t)(0x11aba700)));
  /* 11a9011b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11a9011e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 11a90121 mov edx, dword ptr [0x11aba700] */
  EDX = (r32((uint32_t)(0x11aba700)));
  /* 11a90127 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11a9012a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 11a9012e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a90130 jne 0x11a90146 */
  if (!C.zf) goto L_11a90146;
  /* 11a90132 mov edx, dword ptr [0x11aba700] */
  EDX = (r32((uint32_t)(0x11aba700)));
  /* 11a90138 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a9013b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11a9013d mov ecx, dword ptr [0x11aba700] */
  ECX = (r32((uint32_t)(0x11aba700)));
  /* 11a90143 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11a90146:;
  /* 11a90146 mov edx, dword ptr [0x11aba700] */
  EDX = (r32((uint32_t)(0x11aba700)));
  /* 11a9014c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a90150 jne 0x11a901e8 */
  if (!C.zf) goto L_11a901e8;
  /* 11a90156 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11a9015b push 0 */
  push32((uint32_t)(0x0u));
  /* 11a9015d mov eax, dword ptr [0x11aba700] */
  EAX = (r32((uint32_t)(0x11aba700)));
  /* 11a90162 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11a90165 push ecx */
  push32((uint32_t)(ECX));
  /* 11a90166 call dword ptr [0x11abc368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc368))), 0x11a9016cu);
  /* 11a9016c mov edx, dword ptr [0x11aba700] */
  EDX = (r32((uint32_t)(0x11aba700)));
  /* 11a90172 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11a90175 push eax */
  push32((uint32_t)(EAX));
  /* 11a90176 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a90178 mov ecx, dword ptr [0x11abba64] */
  ECX = (r32((uint32_t)(0x11abba64)));
  /* 11a9017e push ecx */
  push32((uint32_t)(ECX));
  /* 11a9017f call dword ptr [0x11abc360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc360))), 0x11a90185u);
  /* 11a90185 mov edx, dword ptr [0x11aba704] */
  EDX = (r32((uint32_t)(0x11aba704)));
  /* 11a9018b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a9018e mov eax, dword ptr [0x11aba708] */
  EAX = (r32((uint32_t)(0x11aba708)));
  /* 11a90193 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90195 mov ecx, dword ptr [0x11aba700] */
  ECX = (r32((uint32_t)(0x11aba700)));
  /* 11a9019b add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9019e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a901a0 push eax */
  push32((uint32_t)(EAX));
  /* 11a901a1 mov edx, dword ptr [0x11aba700] */
  EDX = (r32((uint32_t)(0x11aba700)));
  /* 11a901a7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a901aa push edx */
  push32((uint32_t)(EDX));
  /* 11a901ab mov eax, dword ptr [0x11aba700] */
  EAX = (r32((uint32_t)(0x11aba700)));
  /* 11a901b0 push eax */
  push32((uint32_t)(EAX));
  /* 11a901b1 call 0x11a8eea0 */
  push32(0x11a901b6u); f_11a8eea0();
  /* 11a901b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a901b9 mov ecx, dword ptr [0x11aba704] */
  ECX = (r32((uint32_t)(0x11aba704)));
  /* 11a901bf sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a901c2 mov dword ptr [0x11aba704], ecx */
  w32((uint32_t)(0x11aba704), (ECX));
  /* 11a901c8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a901cb cmp edx, dword ptr [0x11aba700] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11aba700))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a901d1 jbe 0x11a901dc */
  if ((C.cf||C.zf)) goto L_11a901dc;
  /* 11a901d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a901d6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a901d9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11a901dc:;
  /* 11a901dc mov ecx, dword ptr [0x11aba708] */
  ECX = (r32((uint32_t)(0x11aba708)));
  /* 11a901e2 mov dword ptr [0x11aba6fc], ecx */
  w32((uint32_t)(0x11aba6fc), (ECX));
L_11a901e8:;
  /* 11a901e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a901eb mov dword ptr [0x11aba700], edx */
  w32((uint32_t)(0x11aba700), (EDX));
  /* 11a901f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a901f4 mov dword ptr [0x11aba6f8], eax */
  w32((uint32_t)(0x11aba6f8), (EAX));
L_11a901f9:;
  /* 11a901f9 mov esp, ebp */
  ESP = (EBP);
  /* 11a901fb pop ebp */
  EBP = (pop32());
  /* 11a901fc ret  */
  ESPCHK(0x11a8fc30u, _esp0);
  ESP += 4; return;
}

/* FUN_10010200 @ 0x11a90200 (1334 bytes, 427 insns) */
void f_11a90200(void) {
  FTRACE(0x11a90200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a90200 push ebp */
  push32((uint32_t)(EBP));
  /* 11a90201 mov ebp, esp */
  EBP = (ESP);
  /* 11a90203 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a90206 push esi */
  push32((uint32_t)(ESI));
  /* 11a90207 mov eax, dword ptr [0x11aba704] */
  EAX = (r32((uint32_t)(0x11aba704)));
  /* 11a9020c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a9020f mov ecx, dword ptr [0x11aba708] */
  ECX = (r32((uint32_t)(0x11aba708)));
  /* 11a90215 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90217 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11a9021a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a9021d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90220 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11a90223 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11a90226 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a90229 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11a9022c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9022f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11a90232 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a90236 jge 0x11a9024c */
  if ((C.sf==C.of)) goto L_11a9024c;
  /* 11a90238 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11a9023b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a9023e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a90240 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11a90243 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 11a9024a jmp 0x11a90261 */
  goto L_11a90261;
L_11a9024c:;
  /* 11a9024c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11a90253 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a90256 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a90259 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a9025c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11a9025e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_11a90261:;
  /* 11a90261 mov ecx, dword ptr [0x11aba6fc] */
  ECX = (r32((uint32_t)(0x11aba6fc)));
  /* 11a90267 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_11a9026a:;
  /* 11a9026a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a9026d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a90270 jae 0x11a90296 */
  if (!C.cf) goto L_11a90296;
  /* 11a90272 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a90275 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a90278 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 11a9027a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a9027d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11a90280 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 11a90283 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a90285 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a90287 je 0x11a9028b */
  if (C.zf) goto L_11a9028b;
  /* 11a90289 jmp 0x11a90296 */
  goto L_11a90296;
L_11a9028b:;
  /* 11a9028b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a9028e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90291 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11a90294 jmp 0x11a9026a */
  goto L_11a9026a;
L_11a90296:;
  /* 11a90296 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a90299 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9029c jne 0x11a9037d */
  if (!C.zf) goto L_11a9037d;
  /* 11a902a2 mov eax, dword ptr [0x11aba708] */
  EAX = (r32((uint32_t)(0x11aba708)));
  /* 11a902a7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11a902aa:;
  /* 11a902aa mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a902ad cmp ecx, dword ptr [0x11aba6fc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11aba6fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a902b3 jae 0x11a902d9 */
  if (!C.cf) goto L_11a902d9;
  /* 11a902b5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a902b8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a902bb and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 11a902bd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a902c0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11a902c3 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11a902c6 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11a902c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a902ca je 0x11a902ce */
  if (C.zf) goto L_11a902ce;
  /* 11a902cc jmp 0x11a902d9 */
  goto L_11a902d9;
L_11a902ce:;
  /* 11a902ce mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a902d1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a902d4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11a902d7 jmp 0x11a902aa */
  goto L_11a902aa;
L_11a902d9:;
  /* 11a902d9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a902dc cmp ecx, dword ptr [0x11aba6fc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11aba6fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a902e2 jne 0x11a9037d */
  if (!C.zf) goto L_11a9037d;
L_11a902e8:;
  /* 11a902e8 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a902eb cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a902ee jae 0x11a90306 */
  if (!C.cf) goto L_11a90306;
  /* 11a902f0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a902f3 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a902f7 je 0x11a902fb */
  if (C.zf) goto L_11a902fb;
  /* 11a902f9 jmp 0x11a90306 */
  goto L_11a90306;
L_11a902fb:;
  /* 11a902fb mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a902fe add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90301 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11a90304 jmp 0x11a902e8 */
  goto L_11a902e8;
L_11a90306:;
  /* 11a90306 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a90309 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9030c jne 0x11a90357 */
  if (!C.zf) goto L_11a90357;
  /* 11a9030e mov eax, dword ptr [0x11aba708] */
  EAX = (r32((uint32_t)(0x11aba708)));
  /* 11a90313 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11a90316:;
  /* 11a90316 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a90319 cmp ecx, dword ptr [0x11aba6fc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11aba6fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9031f jae 0x11a90337 */
  if (!C.cf) goto L_11a90337;
  /* 11a90321 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a90324 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a90328 je 0x11a9032c */
  if (C.zf) goto L_11a9032c;
  /* 11a9032a jmp 0x11a90337 */
  goto L_11a90337;
L_11a9032c:;
  /* 11a9032c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a9032f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90332 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11a90335 jmp 0x11a90316 */
  goto L_11a90316;
L_11a90337:;
  /* 11a90337 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a9033a cmp ecx, dword ptr [0x11aba6fc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11aba6fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a90340 jne 0x11a90357 */
  if (!C.zf) goto L_11a90357;
  /* 11a90342 call 0x11a90740 */
  push32(0x11a90347u); f_11a90740();
  /* 11a90347 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11a9034a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9034e jne 0x11a90357 */
  if (!C.zf) goto L_11a90357;
  /* 11a90350 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a90352 jmp 0x11a90731 */
  goto L_11a90731;
L_11a90357:;
  /* 11a90357 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a9035a push edx */
  push32((uint32_t)(EDX));
  /* 11a9035b call 0x11a90850 */
  push32(0x11a90360u); f_11a90850();
  /* 11a90360 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90363 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a90366 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11a90369 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11a9036b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a9036e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11a90371 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a90374 jne 0x11a9037d */
  if (!C.zf) goto L_11a9037d;
  /* 11a90376 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a90378 jmp 0x11a90731 */
  goto L_11a90731;
L_11a9037d:;
  /* 11a9037d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a90380 mov dword ptr [0x11aba6fc], edx */
  w32((uint32_t)(0x11aba6fc), (EDX));
  /* 11a90386 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a90389 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11a9038c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 11a9038f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11a90392 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a90394 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11a90397 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9039b je 0x11a903c0 */
  if (C.zf) goto L_11a903c0;
  /* 11a9039d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a903a0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11a903a3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a903a6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 11a903aa mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a903ad mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11a903b0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 11a903b3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 11a903ba or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11a903bc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a903be jne 0x11a903f5 */
  if (!C.zf) goto L_11a903f5;
L_11a903c0:;
  /* 11a903c0 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_11a903c7:;
  /* 11a903c7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a903ca mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11a903cd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a903d0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 11a903d4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a903d7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11a903da mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 11a903dd and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 11a903e4 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11a903e6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a903e8 jne 0x11a903f5 */
  if (!C.zf) goto L_11a903f5;
  /* 11a903ea mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a903ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a903f0 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11a903f3 jmp 0x11a903c7 */
  goto L_11a903c7;
L_11a903f5:;
  /* 11a903f5 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a903f8 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a903fe mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11a90401 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11a90408 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a9040b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11a90412 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a90415 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11a90418 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a9041b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 11a9041f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11a90422 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a90426 jne 0x11a90442 */
  if (!C.zf) goto L_11a90442;
  /* 11a90428 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 11a9042f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a90432 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11a90435 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11a90438 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 11a9043f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_11a90442:;
  /* 11a90442 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a90446 jl 0x11a9045b */
  if ((C.sf!=C.of)) goto L_11a9045b;
  /* 11a90448 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a9044b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11a9044d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11a90450 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a90453 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90456 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11a90459 jmp 0x11a90442 */
  goto L_11a90442;
L_11a9045b:;
  /* 11a9045b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a9045e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a90461 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 11a90465 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11a90468 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a9046b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a9046d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a90470 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a90473 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a90476 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11a90479 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9047c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11a9047f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a90483 jle 0x11a9048c */
  if ((C.zf||C.sf!=C.of)) goto L_11a9048c;
  /* 11a90485 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_11a9048c:;
  /* 11a9048c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a9048f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a90492 je 0x11a906b0 */
  if (C.zf) goto L_11a906b0;
  /* 11a90498 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a9049b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a9049e mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11a904a1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a904a4 jne 0x11a9057a */
  if (!C.zf) goto L_11a9057a;
  /* 11a904aa cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a904ae jge 0x11a9050f */
  if ((C.sf==C.of)) goto L_11a9050f;
  /* 11a904b0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11a904b5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a904b8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11a904ba not eax */
  EAX = (~(EAX));
  /* 11a904bc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a904bf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11a904c2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11a904c6 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a904c8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a904cb mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11a904ce mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11a904d2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11a904d5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a904d8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11a904db sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11a904de mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11a904e1 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a904e4 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11a904e7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11a904ea add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a904ed movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11a904f1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a904f3 jne 0x11a9050d */
  if (!C.zf) goto L_11a9050d;
  /* 11a904f5 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11a904fa mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a904fd shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11a904ff not eax */
  EAX = (~(EAX));
  /* 11a90501 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a90504 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a90506 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11a90508 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a9050b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11a9050d:;
  /* 11a9050d jmp 0x11a9057a */
  goto L_11a9057a;
L_11a9050f:;
  /* 11a9050f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a90512 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a90515 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11a9051a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a9051c not edx */
  EDX = (~(EDX));
  /* 11a9051e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a90521 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11a90524 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11a9052b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9052d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a90530 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11a90533 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 11a9053a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11a9053d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90540 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11a90543 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11a90546 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11a90549 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9054c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11a9054f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11a90552 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90555 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11a90559 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a9055b jne 0x11a9057a */
  if (!C.zf) goto L_11a9057a;
  /* 11a9055d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a90560 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a90563 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11a90568 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a9056a not edx */
  EDX = (~(EDX));
  /* 11a9056c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a9056f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11a90572 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11a90574 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a90577 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11a9057a:;
  /* 11a9057a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a9057d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11a90580 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a90583 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a90586 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11a90589 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a9058c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a9058f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a90592 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11a90595 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11a90598 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9059c je 0x11a906b0 */
  if (C.zf) goto L_11a906b0;
  /* 11a905a2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a905a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a905a8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 11a905ab mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a905ae mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a905b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a905b4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11a905b7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11a905ba mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a905bd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a905c0 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11a905c3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a905c6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a905c9 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11a905cc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a905cf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11a905d2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a905d5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11a905d8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a905db mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a905de mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11a905e1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a905e4 jne 0x11a906b0 */
  if (!C.zf) goto L_11a906b0;
  /* 11a905ea cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a905ee jge 0x11a9064a */
  if ((C.sf==C.of)) goto L_11a9064a;
  /* 11a905f0 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11a905f3 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a905f6 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11a905fa mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11a905fd add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90600 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11a90603 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11a90605 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11a90608 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9060b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11a9060e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a90610 jne 0x11a90628 */
  if (!C.zf) goto L_11a90628;
  /* 11a90612 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11a90617 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a9061a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11a9061c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a9061f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a90621 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11a90623 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a90626 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11a90628:;
  /* 11a90628 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11a9062d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a90630 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a90632 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a90635 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11a90638 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11a9063c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9063e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a90641 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11a90644 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11a90648 jmp 0x11a906b0 */
  goto L_11a906b0;
L_11a9064a:;
  /* 11a9064a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11a9064d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90650 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11a90654 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11a90657 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9065a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11a9065d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11a9065f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11a90662 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90665 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11a90668 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a9066a jne 0x11a90687 */
  if (!C.zf) goto L_11a90687;
  /* 11a9066c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a9066f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a90672 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11a90677 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11a90679 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a9067c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a9067f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11a90681 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a90684 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11a90687:;
  /* 11a90687 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a9068a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9068d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11a90692 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a90694 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a90697 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11a9069a mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11a906a1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11a906a3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a906a6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11a906a9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_11a906b0:;
  /* 11a906b0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a906b4 je 0x11a906ca */
  if (C.zf) goto L_11a906ca;
  /* 11a906b6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a906b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a906bc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11a906be mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a906c1 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a906c4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a906c7 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_11a906ca:;
  /* 11a906ca mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a906cd add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a906d0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11a906d3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a906d6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a906d9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a906dc mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11a906de mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a906e1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a906e4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a906e7 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a906ea mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 11a906ed mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a906f0 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a906f2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a906f5 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a906f7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a906fa mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a906fd mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11a906ff test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a90701 jne 0x11a90723 */
  if (!C.zf) goto L_11a90723;
  /* 11a90703 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a90706 cmp eax, dword ptr [0x11aba700] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11aba700))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9070c jne 0x11a90723 */
  if (!C.zf) goto L_11a90723;
  /* 11a9070e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a90711 cmp ecx, dword ptr [0x11aba6f8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11aba6f8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a90717 jne 0x11a90723 */
  if (!C.zf) goto L_11a90723;
  /* 11a90719 mov dword ptr [0x11aba700], 0 */
  w32((uint32_t)(0x11aba700), (0x0u));
L_11a90723:;
  /* 11a90723 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11a90726 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a90729 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11a9072b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a9072e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11a90731:;
  /* 11a90731 pop esi */
  ESI = (pop32());
  /* 11a90732 mov esp, ebp */
  ESP = (EBP);
  /* 11a90734 pop ebp */
  EBP = (pop32());
  /* 11a90735 ret  */
  ESPCHK(0x11a90200u, _esp0);
  ESP += 4; return;
}

/* FUN_10010740 @ 0x11a90740 (271 bytes, 78 insns) */
void f_11a90740(void) {
  FTRACE(0x11a90740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a90740 push ebp */
  push32((uint32_t)(EBP));
  /* 11a90741 mov ebp, esp */
  EBP = (ESP);
  /* 11a90743 push ecx */
  push32((uint32_t)(ECX));
  /* 11a90744 mov eax, dword ptr [0x11aba704] */
  EAX = (r32((uint32_t)(0x11aba704)));
  /* 11a90749 cmp eax, dword ptr [0x11aba6e8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11aba6e8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9074f jne 0x11a9079b */
  if (!C.zf) goto L_11a9079b;
  /* 11a90751 mov ecx, dword ptr [0x11aba6e8] */
  ECX = (r32((uint32_t)(0x11aba6e8)));
  /* 11a90757 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9075a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a9075d push ecx */
  push32((uint32_t)(ECX));
  /* 11a9075e mov edx, dword ptr [0x11aba708] */
  EDX = (r32((uint32_t)(0x11aba708)));
  /* 11a90764 push edx */
  push32((uint32_t)(EDX));
  /* 11a90765 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a90767 mov eax, dword ptr [0x11abba64] */
  EAX = (r32((uint32_t)(0x11abba64)));
  /* 11a9076c push eax */
  push32((uint32_t)(EAX));
  /* 11a9076d call dword ptr [0x11abc344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc344))), 0x11a90773u);
  /* 11a90773 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a90776 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9077a jne 0x11a90783 */
  if (!C.zf) goto L_11a90783;
  /* 11a9077c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9077e jmp 0x11a9084b */
  goto L_11a9084b;
L_11a90783:;
  /* 11a90783 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a90786 mov dword ptr [0x11aba708], ecx */
  w32((uint32_t)(0x11aba708), (ECX));
  /* 11a9078c mov edx, dword ptr [0x11aba6e8] */
  EDX = (r32((uint32_t)(0x11aba6e8)));
  /* 11a90792 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90795 mov dword ptr [0x11aba6e8], edx */
  w32((uint32_t)(0x11aba6e8), (EDX));
L_11a9079b:;
  /* 11a9079b mov eax, dword ptr [0x11aba704] */
  EAX = (r32((uint32_t)(0x11aba704)));
  /* 11a907a0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a907a3 mov ecx, dword ptr [0x11aba708] */
  ECX = (r32((uint32_t)(0x11aba708)));
  /* 11a907a9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a907ab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a907ae push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11a907b3 push 8 */
  push32((uint32_t)(0x8u));
  /* 11a907b5 mov edx, dword ptr [0x11abba64] */
  EDX = (r32((uint32_t)(0x11abba64)));
  /* 11a907bb push edx */
  push32((uint32_t)(EDX));
  /* 11a907bc call dword ptr [0x11abc33c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc33c))), 0x11a907c2u);
  /* 11a907c2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a907c5 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 11a907c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a907cb cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a907cf jne 0x11a907d5 */
  if (!C.zf) goto L_11a907d5;
  /* 11a907d1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a907d3 jmp 0x11a9084b */
  goto L_11a9084b;
L_11a907d5:;
  /* 11a907d5 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a907d7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11a907dc push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11a907e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a907e3 call dword ptr [0x11abc334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc334))), 0x11a907e9u);
  /* 11a907e9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a907ec mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 11a907ef mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a907f2 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a907f6 jne 0x11a90812 */
  if (!C.zf) goto L_11a90812;
  /* 11a907f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a907fb mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11a907fe push ecx */
  push32((uint32_t)(ECX));
  /* 11a907ff push 0 */
  push32((uint32_t)(0x0u));
  /* 11a90801 mov edx, dword ptr [0x11abba64] */
  EDX = (r32((uint32_t)(0x11abba64)));
  /* 11a90807 push edx */
  push32((uint32_t)(EDX));
  /* 11a90808 call dword ptr [0x11abc360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc360))), 0x11a9080eu);
  /* 11a9080e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a90810 jmp 0x11a9084b */
  goto L_11a9084b;
L_11a90812:;
  /* 11a90812 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a90815 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11a9081b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9081e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11a90825 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a90828 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 11a9082f mov eax, dword ptr [0x11aba704] */
  EAX = (r32((uint32_t)(0x11aba704)));
  /* 11a90834 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90837 mov dword ptr [0x11aba704], eax */
  w32((uint32_t)(0x11aba704), (EAX));
  /* 11a9083c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9083f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11a90842 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 11a90848 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11a9084b:;
  /* 11a9084b mov esp, ebp */
  ESP = (EBP);
  /* 11a9084d pop ebp */
  EBP = (pop32());
  /* 11a9084e ret  */
  ESPCHK(0x11a90740u, _esp0);
  ESP += 4; return;
}

/* FUN_10010850 @ 0x11a90850 (494 bytes, 149 insns) */
void f_11a90850(void) {
  FTRACE(0x11a90850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a90850 push ebp */
  push32((uint32_t)(EBP));
  /* 11a90851 mov ebp, esp */
  EBP = (ESP);
  /* 11a90853 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a90856 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a90859 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11a9085c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11a9085f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a90862 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11a90865 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a90868 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_11a9086f:;
  /* 11a9086f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a90873 jl 0x11a90888 */
  if ((C.sf!=C.of)) goto L_11a90888;
  /* 11a90875 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a90878 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11a9087a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a9087d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a90880 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90883 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11a90886 jmp 0x11a9086f */
  goto L_11a9086f;
L_11a90888:;
  /* 11a90888 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a9088b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a90891 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a90894 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11a9089b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11a9089e mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11a908a5 jmp 0x11a908b0 */
  goto L_11a908b0;
L_11a908a7:;
  /* 11a908a7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a908aa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a908ad mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11a908b0:;
  /* 11a908b0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a908b4 jge 0x11a908d6 */
  if ((C.sf==C.of)) goto L_11a908d6;
  /* 11a908b6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a908b9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a908bc lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 11a908bf mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11a908c2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a908c5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a908c8 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11a908cb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a908ce mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a908d1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11a908d4 jmp 0x11a908a7 */
  goto L_11a908a7;
L_11a908d6:;
  /* 11a908d6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a908d9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11a908dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a908df mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11a908e2 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a908e4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11a908e7 push 4 */
  push32((uint32_t)(0x4u));
  /* 11a908e9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11a908ee push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11a908f3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a908f6 push edx */
  push32((uint32_t)(EDX));
  /* 11a908f7 call dword ptr [0x11abc334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc334))), 0x11a908fdu);
  /* 11a908fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a908ff jne 0x11a90909 */
  if (!C.zf) goto L_11a90909;
  /* 11a90901 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a90904 jmp 0x11a90a3a */
  goto L_11a90a3a;
L_11a90909:;
  /* 11a90909 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a9090c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90911 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11a90914 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a90917 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a9091a jmp 0x11a90928 */
  goto L_11a90928;
L_11a9091c:;
  /* 11a9091c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9091f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90925 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11a90928:;
  /* 11a90928 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9092b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9092e ja 0x11a9098d */
  if ((!C.cf&&!C.zf)) goto L_11a9098d;
  /* 11a90930 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a90933 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 11a9093a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9093d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 11a90947 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9094a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9094d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11a90950 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a90953 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 11a90959 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a9095c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90962 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a90965 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11a90968 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a9096b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a90971 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a90974 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11a90977 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a9097a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9097f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11a90982 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a90985 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 11a9098b jmp 0x11a9091c */
  goto L_11a9091c;
L_11a9098d:;
  /* 11a9098d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a90990 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90996 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11a90999 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a9099c add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9099f mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a909a2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11a909a5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a909a8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a909ab mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11a909ae mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a909b1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a909b4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11a909b7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a909ba add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a909bd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a909c0 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11a909c3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a909c6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11a909c9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11a909cc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a909cf mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a909d2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11a909d5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a909d8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a909db mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 11a909e3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a909e6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a909e9 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 11a909f4 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a909f7 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 11a909fb mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a909fe mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 11a90a01 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11a90a04 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a90a07 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 11a90a0a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a90a0c jne 0x11a90a1d */
  if (!C.zf) goto L_11a90a1d;
  /* 11a90a0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a90a11 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a90a14 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11a90a17 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a90a1a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11a90a1d:;
  /* 11a90a1d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11a90a22 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a90a25 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a90a27 not edx */
  EDX = (~(EDX));
  /* 11a90a29 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a90a2c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11a90a2f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11a90a31 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a90a34 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11a90a37 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_11a90a3a:;
  /* 11a90a3a mov esp, ebp */
  ESP = (EBP);
  /* 11a90a3c pop ebp */
  EBP = (pop32());
  /* 11a90a3d ret  */
  ESPCHK(0x11a90850u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a40 @ 0x11a90a40 (1515 bytes, 489 insns) */
void f_11a90a40(void) {
  FTRACE(0x11a90a40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a90a40 push ebp */
  push32((uint32_t)(EBP));
  /* 11a90a41 mov ebp, esp */
  EBP = (ESP);
  /* 11a90a43 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a90a46 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11a90a49 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90a4c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 11a90a4e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11a90a51 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a90a54 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11a90a57 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11a90a5a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a90a5d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a90a60 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a90a63 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11a90a66 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a90a69 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11a90a6c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a90a6f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a90a72 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a90a78 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a90a7b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11a90a82 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11a90a85 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11a90a88 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a90a8b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11a90a8e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a90a91 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a90a93 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a90a96 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11a90a99 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a90a9c add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90a9f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11a90aa2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a90aa5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a90aa7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11a90aaa mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a90aad cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a90ab0 jle 0x11a90d66 */
  if ((C.zf||C.sf!=C.of)) goto L_11a90d66;
  /* 11a90ab6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a90ab9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11a90abc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a90abe jne 0x11a90acb */
  if (!C.zf) goto L_11a90acb;
  /* 11a90ac0 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a90ac3 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90ac6 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a90ac9 jle 0x11a90ad2 */
  if ((C.zf||C.sf!=C.of)) goto L_11a90ad2;
L_11a90acb:;
  /* 11a90acb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a90acd jmp 0x11a91027 */
  goto L_11a91027;
L_11a90ad2:;
  /* 11a90ad2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a90ad5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11a90ad8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a90adb mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11a90ade cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a90ae2 jbe 0x11a90aeb */
  if ((C.cf||C.zf)) goto L_11a90aeb;
  /* 11a90ae4 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_11a90aeb:;
  /* 11a90aeb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a90aee mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a90af1 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a90af4 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a90af7 jne 0x11a90bcd */
  if (!C.zf) goto L_11a90bcd;
  /* 11a90afd cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a90b01 jae 0x11a90b62 */
  if (!C.cf) goto L_11a90b62;
  /* 11a90b03 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11a90b08 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a90b0b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a90b0d not edx */
  EDX = (~(EDX));
  /* 11a90b0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a90b12 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a90b15 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11a90b19 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11a90b1b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a90b1e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a90b21 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11a90b25 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a90b28 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90b2b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11a90b2e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11a90b31 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a90b34 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90b37 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11a90b3a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a90b3d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90b40 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11a90b44 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a90b46 jne 0x11a90b60 */
  if (!C.zf) goto L_11a90b60;
  /* 11a90b48 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11a90b4d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a90b50 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a90b52 not edx */
  EDX = (~(EDX));
  /* 11a90b54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a90b57 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a90b59 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11a90b5b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a90b5e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11a90b60:;
  /* 11a90b60 jmp 0x11a90bcd */
  goto L_11a90bcd;
L_11a90b62:;
  /* 11a90b62 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a90b65 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a90b68 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11a90b6d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11a90b6f not eax */
  EAX = (~(EAX));
  /* 11a90b71 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a90b74 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a90b77 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11a90b7e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a90b80 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a90b83 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a90b86 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11a90b8d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a90b90 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90b93 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11a90b96 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11a90b99 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a90b9c add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90b9f mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11a90ba2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a90ba5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90ba8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11a90bac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a90bae jne 0x11a90bcd */
  if (!C.zf) goto L_11a90bcd;
  /* 11a90bb0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a90bb3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a90bb6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11a90bbb shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11a90bbd not eax */
  EAX = (~(EAX));
  /* 11a90bbf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a90bc2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a90bc5 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11a90bc7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a90bca mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11a90bcd:;
  /* 11a90bcd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a90bd0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11a90bd3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a90bd6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11a90bd9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11a90bdc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a90bdf mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a90be2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a90be5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11a90be8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11a90beb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a90bee add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90bf1 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a90bf4 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11a90bf7 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a90bfb jle 0x11a90d47 */
  if ((C.zf||C.sf!=C.of)) goto L_11a90d47;
  /* 11a90c01 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a90c04 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90c07 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11a90c0a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a90c0d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11a90c10 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a90c13 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11a90c16 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a90c1a jbe 0x11a90c23 */
  if ((C.cf||C.zf)) goto L_11a90c23;
  /* 11a90c1c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_11a90c23:;
  /* 11a90c23 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a90c26 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a90c29 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 11a90c2c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11a90c2f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a90c32 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a90c35 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a90c38 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11a90c3b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a90c3e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a90c41 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11a90c44 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a90c47 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a90c4a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11a90c4d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a90c50 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a90c53 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a90c56 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11a90c59 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a90c5c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a90c5f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a90c62 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a90c65 jne 0x11a90d33 */
  if (!C.zf) goto L_11a90d33;
  /* 11a90c6b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a90c6f jae 0x11a90ccc */
  if (!C.cf) goto L_11a90ccc;
  /* 11a90c71 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a90c74 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90c77 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11a90c7b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a90c7e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90c81 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11a90c84 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11a90c87 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a90c8a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90c8d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11a90c90 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a90c92 jne 0x11a90caa */
  if (!C.zf) goto L_11a90caa;
  /* 11a90c94 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11a90c99 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a90c9c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a90c9e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a90ca1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a90ca3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11a90ca5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a90ca8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11a90caa:;
  /* 11a90caa mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11a90caf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a90cb2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11a90cb4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a90cb7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a90cba mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11a90cbe or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a90cc0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a90cc3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a90cc6 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11a90cca jmp 0x11a90d33 */
  goto L_11a90d33;
L_11a90ccc:;
  /* 11a90ccc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a90ccf add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90cd2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11a90cd6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a90cd9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90cdc mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11a90cdf add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11a90ce2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a90ce5 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90ce8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11a90ceb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a90ced jne 0x11a90d0a */
  if (!C.zf) goto L_11a90d0a;
  /* 11a90cef mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a90cf2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a90cf5 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11a90cfa shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a90cfc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a90cff mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11a90d02 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11a90d04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a90d07 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11a90d0a:;
  /* 11a90d0a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a90d0d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a90d10 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11a90d15 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11a90d17 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a90d1a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a90d1d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11a90d24 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a90d26 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a90d29 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a90d2c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_11a90d33:;
  /* 11a90d33 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a90d36 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a90d39 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11a90d3b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a90d3e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90d41 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a90d44 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_11a90d47:;
  /* 11a90d47 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a90d4a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90d4d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a90d50 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11a90d52 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a90d55 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90d58 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a90d5b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90d5e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 11a90d61 jmp 0x11a91022 */
  goto L_11a91022;
L_11a90d66:;
  /* 11a90d66 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a90d69 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a90d6c jge 0x11a91022 */
  if ((C.sf==C.of)) goto L_11a91022;
  /* 11a90d72 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a90d75 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90d78 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a90d7b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11a90d7d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11a90d80 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90d83 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a90d86 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90d89 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 11a90d8c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a90d8f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90d92 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11a90d95 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a90d98 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a90d9b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11a90d9e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a90da1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11a90da4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a90da7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11a90daa cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a90dae jbe 0x11a90db7 */
  if ((C.cf||C.zf)) goto L_11a90db7;
  /* 11a90db0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_11a90db7:;
  /* 11a90db7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a90dba and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11a90dbd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a90dbf jne 0x11a90f00 */
  if (!C.zf) goto L_11a90f00;
  /* 11a90dc5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a90dc8 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11a90dcb sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a90dce mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11a90dd1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a90dd5 jbe 0x11a90dde */
  if ((C.cf||C.zf)) goto L_11a90dde;
  /* 11a90dd7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_11a90dde:;
  /* 11a90dde mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a90de1 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a90de4 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a90de7 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a90dea jne 0x11a90ec0 */
  if (!C.zf) goto L_11a90ec0;
  /* 11a90df0 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a90df4 jae 0x11a90e55 */
  if (!C.cf) goto L_11a90e55;
  /* 11a90df6 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11a90dfb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a90dfe shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a90e00 not edx */
  EDX = (~(EDX));
  /* 11a90e02 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a90e05 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a90e08 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11a90e0c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11a90e0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a90e11 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a90e14 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11a90e18 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a90e1b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90e1e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11a90e21 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11a90e24 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a90e27 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90e2a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11a90e2d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a90e30 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90e33 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11a90e37 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a90e39 jne 0x11a90e53 */
  if (!C.zf) goto L_11a90e53;
  /* 11a90e3b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11a90e40 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a90e43 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a90e45 not edx */
  EDX = (~(EDX));
  /* 11a90e47 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a90e4a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a90e4c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11a90e4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a90e51 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11a90e53:;
  /* 11a90e53 jmp 0x11a90ec0 */
  goto L_11a90ec0;
L_11a90e55:;
  /* 11a90e55 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a90e58 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a90e5b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11a90e60 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11a90e62 not eax */
  EAX = (~(EAX));
  /* 11a90e64 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a90e67 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a90e6a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11a90e71 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11a90e73 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a90e76 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a90e79 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11a90e80 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a90e83 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90e86 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11a90e89 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11a90e8c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a90e8f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90e92 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11a90e95 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a90e98 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90e9b movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11a90e9f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a90ea1 jne 0x11a90ec0 */
  if (!C.zf) goto L_11a90ec0;
  /* 11a90ea3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11a90ea6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a90ea9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11a90eae shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11a90eb0 not eax */
  EAX = (~(EAX));
  /* 11a90eb2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a90eb5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a90eb8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11a90eba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a90ebd mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11a90ec0:;
  /* 11a90ec0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a90ec3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11a90ec6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a90ec9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11a90ecc mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11a90ecf mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a90ed2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a90ed5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11a90ed8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11a90edb mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11a90ede mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a90ee1 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90ee4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11a90ee7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a90eea sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11a90eed sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a90ef0 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11a90ef3 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a90ef7 jbe 0x11a90f00 */
  if ((C.cf||C.zf)) goto L_11a90f00;
  /* 11a90ef9 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_11a90f00:;
  /* 11a90f00 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a90f03 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a90f06 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 11a90f09 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11a90f0c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a90f0f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a90f12 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11a90f15 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11a90f18 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a90f1b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a90f1e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11a90f21 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a90f24 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a90f27 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11a90f2a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a90f2d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11a90f30 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a90f33 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11a90f36 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a90f39 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a90f3c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11a90f3f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a90f42 jne 0x11a9100e */
  if (!C.zf) goto L_11a9100e;
  /* 11a90f48 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a90f4c jae 0x11a90fa8 */
  if (!C.cf) goto L_11a90fa8;
  /* 11a90f4e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a90f51 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90f54 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11a90f58 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a90f5b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90f5e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11a90f61 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11a90f63 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a90f66 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90f69 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11a90f6c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a90f6e jne 0x11a90f86 */
  if (!C.zf) goto L_11a90f86;
  /* 11a90f70 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11a90f75 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a90f78 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11a90f7a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a90f7d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a90f7f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11a90f81 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a90f84 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11a90f86:;
  /* 11a90f86 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11a90f8b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a90f8e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a90f90 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a90f93 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a90f96 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11a90f9a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11a90f9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a90f9f mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a90fa2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11a90fa6 jmp 0x11a9100e */
  goto L_11a9100e;
L_11a90fa8:;
  /* 11a90fa8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a90fab add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90fae movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11a90fb2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a90fb5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90fb8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11a90fbb add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11a90fbd mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a90fc0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a90fc3 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11a90fc6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a90fc8 jne 0x11a90fe5 */
  if (!C.zf) goto L_11a90fe5;
  /* 11a90fca mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a90fcd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a90fd0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11a90fd5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11a90fd7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a90fda mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a90fdd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11a90fdf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a90fe2 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11a90fe5:;
  /* 11a90fe5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a90fe8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a90feb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11a90ff0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a90ff2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a90ff5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a90ff8 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11a90fff or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11a91001 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a91004 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11a91007 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_11a9100e:;
  /* 11a9100e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a91011 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a91014 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11a91016 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a91019 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9101c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a9101f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_11a91022:;
  /* 11a91022 mov eax, 1 */
  EAX = (0x1u);
L_11a91027:;
  /* 11a91027 mov esp, ebp */
  ESP = (EBP);
  /* 11a91029 pop ebp */
  EBP = (pop32());
  /* 11a9102a ret  */
  ESPCHK(0x11a90a40u, _esp0);
  ESP += 4; return;
}

/* FUN_10011030 @ 0x11a91030 (304 bytes, 79 insns) */
void f_11a91030(void) {
  FTRACE(0x11a91030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a91030 push ebp */
  push32((uint32_t)(EBP));
  /* 11a91031 mov ebp, esp */
  EBP = (ESP);
  /* 11a91033 push ecx */
  push32((uint32_t)(ECX));
  /* 11a91034 cmp dword ptr [0x11aba700], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba700))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9103b je 0x11a9115c */
  if (C.zf) goto L_11a9115c;
  /* 11a91041 mov eax, dword ptr [0x11aba6f8] */
  EAX = (r32((uint32_t)(0x11aba6f8)));
  /* 11a91046 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 11a91049 mov ecx, dword ptr [0x11aba700] */
  ECX = (r32((uint32_t)(0x11aba700)));
  /* 11a9104f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11a91052 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a91054 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11a91057 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11a9105c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11a91061 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a91064 push eax */
  push32((uint32_t)(EAX));
  /* 11a91065 call dword ptr [0x11abc368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc368))), 0x11a9106bu);
  /* 11a9106b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11a91070 mov ecx, dword ptr [0x11aba6f8] */
  ECX = (r32((uint32_t)(0x11aba6f8)));
  /* 11a91076 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a91078 mov eax, dword ptr [0x11aba700] */
  EAX = (r32((uint32_t)(0x11aba700)));
  /* 11a9107d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11a91080 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11a91082 mov edx, dword ptr [0x11aba700] */
  EDX = (r32((uint32_t)(0x11aba700)));
  /* 11a91088 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11a9108b mov eax, dword ptr [0x11aba700] */
  EAX = (r32((uint32_t)(0x11aba700)));
  /* 11a91090 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11a91093 mov edx, dword ptr [0x11aba6f8] */
  EDX = (r32((uint32_t)(0x11aba6f8)));
  /* 11a91099 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 11a910a4 mov eax, dword ptr [0x11aba700] */
  EAX = (r32((uint32_t)(0x11aba700)));
  /* 11a910a9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11a910ac mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 11a910af sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11a910b2 mov eax, dword ptr [0x11aba700] */
  EAX = (r32((uint32_t)(0x11aba700)));
  /* 11a910b7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11a910ba mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 11a910bd mov edx, dword ptr [0x11aba700] */
  EDX = (r32((uint32_t)(0x11aba700)));
  /* 11a910c3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11a910c6 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 11a910ca test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a910cc jne 0x11a910e2 */
  if (!C.zf) goto L_11a910e2;
  /* 11a910ce mov edx, dword ptr [0x11aba700] */
  EDX = (r32((uint32_t)(0x11aba700)));
  /* 11a910d4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11a910d7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11a910d9 mov ecx, dword ptr [0x11aba700] */
  ECX = (r32((uint32_t)(0x11aba700)));
  /* 11a910df mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11a910e2:;
  /* 11a910e2 mov edx, dword ptr [0x11aba700] */
  EDX = (r32((uint32_t)(0x11aba700)));
  /* 11a910e8 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a910ec jne 0x11a91152 */
  if (!C.zf) goto L_11a91152;
  /* 11a910ee cmp dword ptr [0x11aba704], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11aba704))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a910f5 jle 0x11a91152 */
  if ((C.zf||C.sf!=C.of)) goto L_11a91152;
  /* 11a910f7 mov eax, dword ptr [0x11aba700] */
  EAX = (r32((uint32_t)(0x11aba700)));
  /* 11a910fc mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11a910ff push ecx */
  push32((uint32_t)(ECX));
  /* 11a91100 push 0 */
  push32((uint32_t)(0x0u));
  /* 11a91102 mov edx, dword ptr [0x11abba64] */
  EDX = (r32((uint32_t)(0x11abba64)));
  /* 11a91108 push edx */
  push32((uint32_t)(EDX));
  /* 11a91109 call dword ptr [0x11abc360] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc360))), 0x11a9110fu);
  /* 11a9110f mov eax, dword ptr [0x11aba704] */
  EAX = (r32((uint32_t)(0x11aba704)));
  /* 11a91114 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a91117 mov ecx, dword ptr [0x11aba708] */
  ECX = (r32((uint32_t)(0x11aba708)));
  /* 11a9111d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9111f mov edx, dword ptr [0x11aba700] */
  EDX = (r32((uint32_t)(0x11aba700)));
  /* 11a91125 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a91128 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9112a push ecx */
  push32((uint32_t)(ECX));
  /* 11a9112b mov eax, dword ptr [0x11aba700] */
  EAX = (r32((uint32_t)(0x11aba700)));
  /* 11a91130 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a91133 push eax */
  push32((uint32_t)(EAX));
  /* 11a91134 mov ecx, dword ptr [0x11aba700] */
  ECX = (r32((uint32_t)(0x11aba700)));
  /* 11a9113a push ecx */
  push32((uint32_t)(ECX));
  /* 11a9113b call 0x11a8eea0 */
  push32(0x11a91140u); f_11a8eea0();
  /* 11a91140 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a91143 mov edx, dword ptr [0x11aba704] */
  EDX = (r32((uint32_t)(0x11aba704)));
  /* 11a91149 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9114c mov dword ptr [0x11aba704], edx */
  w32((uint32_t)(0x11aba704), (EDX));
L_11a91152:;
  /* 11a91152 mov dword ptr [0x11aba700], 0 */
  w32((uint32_t)(0x11aba700), (0x0u));
L_11a9115c:;
  /* 11a9115c mov esp, ebp */
  ESP = (EBP);
  /* 11a9115e pop ebp */
  EBP = (pop32());
  /* 11a9115f ret  */
  ESPCHK(0x11a91030u, _esp0);
  ESP += 4; return;
}

/* FUN_10011160 @ 0x11a91160 (1565 bytes, 343 insns) */
void f_11a91160(void) {
  FTRACE(0x11a91160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a91160 push ebp */
  push32((uint32_t)(EBP));
  /* 11a91161 mov ebp, esp */
  EBP = (ESP);
  /* 11a91163 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a91169 mov eax, dword ptr [0x11aba704] */
  EAX = (r32((uint32_t)(0x11aba704)));
  /* 11a9116e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a91171 push eax */
  push32((uint32_t)(EAX));
  /* 11a91172 mov ecx, dword ptr [0x11aba708] */
  ECX = (r32((uint32_t)(0x11aba708)));
  /* 11a91178 push ecx */
  push32((uint32_t)(ECX));
  /* 11a91179 call dword ptr [0x11abc3e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3e8))), 0x11a9117fu);
  /* 11a9117f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a91181 je 0x11a9118b */
  if (C.zf) goto L_11a9118b;
  /* 11a91183 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11a91186 jmp 0x11a91779 */
  goto L_11a91779;
L_11a9118b:;
  /* 11a9118b mov edx, dword ptr [0x11aba708] */
  EDX = (r32((uint32_t)(0x11aba708)));
  /* 11a91191 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 11a91197 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 11a911a1 jmp 0x11a911b2 */
  goto L_11a911b2;
L_11a911a3:;
  /* 11a911a3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 11a911a9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a911ac mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_11a911b2:;
  /* 11a911b2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 11a911b8 cmp ecx, dword ptr [0x11aba704] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11aba704))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a911be jge 0x11a91777 */
  if ((C.sf==C.of)) goto L_11a91777;
  /* 11a911c4 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11a911ca mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11a911cd mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 11a911d3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11a911d8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 11a911de push ecx */
  push32((uint32_t)(ECX));
  /* 11a911df call dword ptr [0x11abc3e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3e8))), 0x11a911e5u);
  /* 11a911e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a911e7 je 0x11a911f3 */
  if (C.zf) goto L_11a911f3;
  /* 11a911e9 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 11a911ee jmp 0x11a91779 */
  goto L_11a91779;
L_11a911f3:;
  /* 11a911f3 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11a911f9 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11a911fc mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 11a91202 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 11a91208 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9120e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11a91211 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11a91217 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11a9121a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11a9121d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 11a91227 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 11a91231 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11a91238 jmp 0x11a91243 */
  goto L_11a91243;
L_11a9123a:;
  /* 11a9123a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9123d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a91240 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11a91243:;
  /* 11a91243 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a91247 jge 0x11a9173b */
  if ((C.sf==C.of)) goto L_11a9173b;
  /* 11a9124d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 11a91257 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 11a91261 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 11a9126b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 11a91275 jmp 0x11a91286 */
  goto L_11a91286;
L_11a91277:;
  /* 11a91277 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11a9127d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a91280 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_11a91286:;
  /* 11a91286 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9128d jge 0x11a912a2 */
  if ((C.sf==C.of)) goto L_11a912a2;
  /* 11a9128f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11a91295 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 11a912a0 jmp 0x11a91277 */
  goto L_11a91277;
L_11a912a2:;
  /* 11a912a2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a912a6 jl 0x11a916dd */
  if ((C.sf!=C.of)) goto L_11a916dd;
  /* 11a912ac push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11a912b1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 11a912b7 push ecx */
  push32((uint32_t)(ECX));
  /* 11a912b8 call dword ptr [0x11abc3e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc3e8))), 0x11a912beu);
  /* 11a912be test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a912c0 je 0x11a912cc */
  if (C.zf) goto L_11a912cc;
  /* 11a912c2 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 11a912c7 jmp 0x11a91779 */
  goto L_11a91779;
L_11a912cc:;
  /* 11a912cc mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 11a912d2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11a912d5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 11a912df jmp 0x11a912f0 */
  goto L_11a912f0;
L_11a912e1:;
  /* 11a912e1 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 11a912e7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a912ea mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_11a912f0:;
  /* 11a912f0 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a912f7 jge 0x11a91474 */
  if ((C.sf==C.of)) goto L_11a91474;
  /* 11a912fd mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a91300 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a91303 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 11a91309 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11a9130f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a91315 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 11a9131b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11a91321 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a91325 jne 0x11a91332 */
  if (!C.zf) goto L_11a91332;
  /* 11a91327 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 11a9132d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a91330 je 0x11a9133c */
  if (C.zf) goto L_11a9133c;
L_11a91332:;
  /* 11a91332 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 11a91337 jmp 0x11a91779 */
  goto L_11a91779;
L_11a9133c:;
  /* 11a9133c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11a91342 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11a91344 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 11a9134a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 11a91350 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 11a91356 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 11a9135c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11a9135f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11a91361 je 0x11a91399 */
  if (C.zf) goto L_11a91399;
  /* 11a91363 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 11a91369 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9136c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 11a91372 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9137c jle 0x11a91388 */
  if ((C.zf||C.sf!=C.of)) goto L_11a91388;
  /* 11a9137e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 11a91383 jmp 0x11a91779 */
  goto L_11a91779;
L_11a91388:;
  /* 11a91388 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 11a9138e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a91391 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 11a91397 jmp 0x11a913db */
  goto L_11a913db;
L_11a91399:;
  /* 11a91399 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 11a9139f sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11a913a2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a913a5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 11a913ab cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a913b2 jle 0x11a913be */
  if ((C.zf||C.sf!=C.of)) goto L_11a913be;
  /* 11a913b4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_11a913be:;
  /* 11a913be mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11a913c4 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 11a913cb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a913ce mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11a913d4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_11a913db:;
  /* 11a913db cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a913e2 jl 0x11a913fd */
  if ((C.sf!=C.of)) goto L_11a913fd;
  /* 11a913e4 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 11a913ea and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 11a913ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a913ef jne 0x11a913fd */
  if (!C.zf) goto L_11a913fd;
  /* 11a913f1 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a913fb jle 0x11a91407 */
  if ((C.zf||C.sf!=C.of)) goto L_11a91407;
L_11a913fd:;
  /* 11a913fd mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 11a91402 jmp 0x11a91779 */
  goto L_11a91779;
L_11a91407:;
  /* 11a91407 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11a9140d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a91413 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11a91416 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9141c je 0x11a91428 */
  if (C.zf) goto L_11a91428;
  /* 11a9141e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 11a91423 jmp 0x11a91779 */
  goto L_11a91779;
L_11a91428:;
  /* 11a91428 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11a9142e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a91434 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 11a9143a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11a91440 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a91446 jb 0x11a9133c */
  if (C.cf) goto L_11a9133c;
  /* 11a9144c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11a91452 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a91458 je 0x11a91464 */
  if (C.zf) goto L_11a91464;
  /* 11a9145a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 11a9145f jmp 0x11a91779 */
  goto L_11a91779;
L_11a91464:;
  /* 11a91464 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a91467 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9146c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11a9146f jmp 0x11a912e1 */
  goto L_11a912e1;
L_11a91474:;
  /* 11a91474 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a91477 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a91479 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9147f je 0x11a9148b */
  if (C.zf) goto L_11a9148b;
  /* 11a91481 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 11a91486 jmp 0x11a91779 */
  goto L_11a91779;
L_11a9148b:;
  /* 11a9148b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a9148e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 11a91494 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11a9149b jmp 0x11a914a6 */
  goto L_11a914a6;
L_11a9149d:;
  /* 11a9149d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a914a0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a914a3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11a914a6:;
  /* 11a914a6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a914aa jge 0x11a916dd */
  if ((C.sf==C.of)) goto L_11a916dd;
  /* 11a914b0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 11a914ba mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 11a914c0 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_11a914c6:;
  /* 11a914c6 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11a914cc mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11a914cf mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 11a914d5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11a914db cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a914e1 je 0x11a9160a */
  if (C.zf) goto L_11a9160a;
  /* 11a914e7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a914ea mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 11a914f0 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a914f7 je 0x11a9160a */
  if (C.zf) goto L_11a9160a;
  /* 11a914fd mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11a91503 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a91509 jb 0x11a9151e */
  if (C.cf) goto L_11a9151e;
  /* 11a9150b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 11a91511 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a91516 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9151c jb 0x11a91528 */
  if (C.cf) goto L_11a91528;
L_11a9151e:;
  /* 11a9151e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 11a91523 jmp 0x11a91779 */
  goto L_11a91779;
L_11a91528:;
  /* 11a91528 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11a9152e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 11a91534 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 11a9153a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 11a91540 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a91543 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11a91546 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a91549 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9154e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_11a91554:;
  /* 11a91554 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a91557 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9155d je 0x11a9157e */
  if (C.zf) goto L_11a9157e;
  /* 11a9155f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a91562 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a91568 jne 0x11a9156c */
  if (!C.zf) goto L_11a9156c;
  /* 11a9156a jmp 0x11a9157e */
  goto L_11a9157e;
L_11a9156c:;
  /* 11a9156c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a9156f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11a91571 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 11a91574 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a91577 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a91579 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11a9157c jmp 0x11a91554 */
  goto L_11a91554;
L_11a9157e:;
  /* 11a9157e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11a91581 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a91587 jne 0x11a91593 */
  if (!C.zf) goto L_11a91593;
  /* 11a91589 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 11a9158e jmp 0x11a91779 */
  goto L_11a91779;
L_11a91593:;
  /* 11a91593 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11a91599 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11a9159b sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11a9159e sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a915a1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 11a915a7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a915ae jle 0x11a915ba */
  if ((C.zf||C.sf!=C.of)) goto L_11a915ba;
  /* 11a915b0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_11a915ba:;
  /* 11a915ba mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11a915c0 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a915c3 je 0x11a915cf */
  if (C.zf) goto L_11a915cf;
  /* 11a915c5 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 11a915ca jmp 0x11a91779 */
  goto L_11a91779;
L_11a915cf:;
  /* 11a915cf mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11a915d5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11a915d8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a915de je 0x11a915ea */
  if (C.zf) goto L_11a915ea;
  /* 11a915e0 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 11a915e5 jmp 0x11a91779 */
  goto L_11a91779;
L_11a915ea:;
  /* 11a915ea mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11a915f0 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 11a915f6 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 11a915fc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a915ff mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 11a91605 jmp 0x11a914c6 */
  goto L_11a914c6;
L_11a9160a:;
  /* 11a9160a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a91611 je 0x11a91681 */
  if (C.zf) goto L_11a91681;
  /* 11a91613 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a91617 jge 0x11a9164b */
  if ((C.sf==C.of)) goto L_11a9164b;
  /* 11a91619 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11a9161e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a91621 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a91623 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 11a91629 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9162b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 11a91631 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11a91636 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a91639 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a9163b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 11a91641 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11a91643 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 11a91649 jmp 0x11a91681 */
  goto L_11a91681;
L_11a9164b:;
  /* 11a9164b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a9164e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a91651 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11a91656 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a91658 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 11a9165e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11a91660 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 11a91666 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a91669 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a9166c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11a91671 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11a91673 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 11a91679 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9167b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_11a91681:;
  /* 11a91681 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11a91687 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11a9168a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a91690 jne 0x11a916a4 */
  if (!C.zf) goto L_11a916a4;
  /* 11a91692 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11a91695 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 11a9169b cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a916a2 je 0x11a916ae */
  if (C.zf) goto L_11a916ae;
L_11a916a4:;
  /* 11a916a4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 11a916a9 jmp 0x11a91779 */
  goto L_11a91779;
L_11a916ae:;
  /* 11a916ae mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 11a916b4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11a916b7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a916bd je 0x11a916c9 */
  if (C.zf) goto L_11a916c9;
  /* 11a916bf mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 11a916c4 jmp 0x11a91779 */
  goto L_11a91779;
L_11a916c9:;
  /* 11a916c9 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 11a916cf add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a916d2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 11a916d8 jmp 0x11a9149d */
  goto L_11a9149d;
L_11a916dd:;
  /* 11a916dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a916e0 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 11a916e6 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 11a916ec cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a916f0 jne 0x11a9170a */
  if (!C.zf) goto L_11a9170a;
  /* 11a916f2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a916f5 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 11a916fb mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 11a91701 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a91708 je 0x11a91711 */
  if (C.zf) goto L_11a91711;
L_11a9170a:;
  /* 11a9170a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 11a9170f jmp 0x11a91779 */
  goto L_11a91779;
L_11a91711:;
  /* 11a91711 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 11a91717 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9171d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 11a91723 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11a91726 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9172b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11a9172e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a91731 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11a91733 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11a91736 jmp 0x11a9123a */
  goto L_11a9123a;
L_11a9173b:;
  /* 11a9173b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11a91741 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 11a91747 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a91749 jne 0x11a9175c */
  if (!C.zf) goto L_11a9175c;
  /* 11a9174b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11a91751 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 11a91757 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9175a je 0x11a91763 */
  if (C.zf) goto L_11a91763;
L_11a9175c:;
  /* 11a9175c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 11a91761 jmp 0x11a91779 */
  goto L_11a91779;
L_11a91763:;
  /* 11a91763 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11a91769 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9176c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 11a91772 jmp 0x11a911a3 */
  goto L_11a911a3;
L_11a91777:;
  /* 11a91777 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11a91779:;
  /* 11a91779 mov esp, ebp */
  ESP = (EBP);
  /* 11a9177b pop ebp */
  EBP = (pop32());
  /* 11a9177c ret  */
  ESPCHK(0x11a91160u, _esp0);
  ESP += 4; return;
}

/* FUN_10011780 @ 0x11a91780 (836 bytes, 238 insns) */
void f_11a91780(void) {
  FTRACE(0x11a91780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11a91780 push ebp */
  push32((uint32_t)(EBP));
  /* 11a91781 mov ebp, esp */
  EBP = (ESP);
  /* 11a91783 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11a91786 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11a91788 call 0x11a8f2d0 */
  push32(0x11a9178du); f_11a8f2d0();
  /* 11a9178d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a91790 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a91793 push eax */
  push32((uint32_t)(EAX));
  /* 11a91794 call 0x11a91ad0 */
  push32(0x11a91799u); f_11a91ad0();
  /* 11a91799 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9179c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11a9179f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a917a2 cmp ecx, dword ptr [0x11aba450] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11aba450))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a917a8 jne 0x11a917bb */
  if (!C.zf) goto L_11a917bb;
  /* 11a917aa push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11a917ac call 0x11a8f370 */
  push32(0x11a917b1u); f_11a8f370();
  /* 11a917b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a917b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a917b6 jmp 0x11a91ac0 */
  goto L_11a91ac0;
L_11a917bb:;
  /* 11a917bb cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a917bf jne 0x11a917dc */
  if (!C.zf) goto L_11a917dc;
  /* 11a917c1 call 0x11a91bb0 */
  push32(0x11a917c6u); f_11a91bb0();
  /* 11a917c6 call 0x11a91c30 */
  push32(0x11a917cbu); f_11a91c30();
  /* 11a917cb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11a917cd call 0x11a8f370 */
  push32(0x11a917d2u); f_11a8f370();
  /* 11a917d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a917d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a917d7 jmp 0x11a91ac0 */
  goto L_11a91ac0;
L_11a917dc:;
  /* 11a917dc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11a917e3 jmp 0x11a917ee */
  goto L_11a917ee;
L_11a917e5:;
  /* 11a917e5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a917e8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a917eb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11a917ee:;
  /* 11a917ee cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a917f2 jae 0x11a9193f */
  if (!C.cf) goto L_11a9193f;
  /* 11a917f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a917fb imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a917fe mov ecx, dword ptr [eax + 0x11ab8268] */
  ECX = (r32((uint32_t)(EAX + 0x11ab8268)));
  /* 11a91804 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a91807 jne 0x11a9193a */
  if (!C.zf) goto L_11a9193a;
  /* 11a9180d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11a91814 jmp 0x11a9181f */
  goto L_11a9181f;
L_11a91816:;
  /* 11a91816 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a91819 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a9181c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_11a9181f:;
  /* 11a9181f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a91826 jae 0x11a91834 */
  if (!C.cf) goto L_11a91834;
  /* 11a91828 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a9182b mov byte ptr [eax + 0x11aba5e0], 0 */
  w8((uint32_t)(EAX + 0x11aba5e0), (0x0u));
  /* 11a91832 jmp 0x11a91816 */
  goto L_11a91816;
L_11a91834:;
  /* 11a91834 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11a9183b jmp 0x11a91846 */
  goto L_11a91846;
L_11a9183d:;
  /* 11a9183d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a91840 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a91843 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11a91846:;
  /* 11a91846 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9184a jae 0x11a918c7 */
  if (!C.cf) goto L_11a918c7;
  /* 11a9184c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a9184f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a91852 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a91855 lea ecx, [edx + eax*8 + 0x11ab8278] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x11ab8278));
  /* 11a9185c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11a9185f jmp 0x11a9186a */
  goto L_11a9186a;
L_11a91861:;
  /* 11a91861 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a91864 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a91867 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11a9186a:;
  /* 11a9186a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a9186d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a9186f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11a91871 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a91873 je 0x11a918c2 */
  if (C.zf) goto L_11a918c2;
  /* 11a91875 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a91878 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a9187a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11a9187d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a9187f je 0x11a918c2 */
  if (C.zf) goto L_11a918c2;
  /* 11a91881 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a91884 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a91886 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11a91888 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11a9188b jmp 0x11a91896 */
  goto L_11a91896;
L_11a9188d:;
  /* 11a9188d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a91890 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a91893 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11a91896:;
  /* 11a91896 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11a91899 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a9189b mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11a9189e cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a918a1 ja 0x11a918c0 */
  if ((!C.cf&&!C.zf)) goto L_11a918c0;
  /* 11a918a3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a918a6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a918a9 mov dl, byte ptr [eax + 0x11aba5e1] */
  DL = (r8((uint32_t)(EAX + 0x11aba5e1)));
  /* 11a918af or dl, byte ptr [ecx + 0x11ab8260] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x11ab8260))); DL = (_r); fl_logic(_r,8); }
  /* 11a918b5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a918b8 mov byte ptr [eax + 0x11aba5e1], dl */
  w8((uint32_t)(EAX + 0x11aba5e1), (DL));
  /* 11a918be jmp 0x11a9188d */
  goto L_11a9188d;
L_11a918c0:;
  /* 11a918c0 jmp 0x11a91861 */
  goto L_11a91861;
L_11a918c2:;
  /* 11a918c2 jmp 0x11a9183d */
  goto L_11a9183d;
L_11a918c7:;
  /* 11a918c7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a918ca mov dword ptr [0x11aba450], ecx */
  w32((uint32_t)(0x11aba450), (ECX));
  /* 11a918d0 mov dword ptr [0x11aba4dc], 1 */
  w32((uint32_t)(0x11aba4dc), (0x1u));
  /* 11a918da mov edx, dword ptr [0x11aba450] */
  EDX = (r32((uint32_t)(0x11aba450)));
  /* 11a918e0 push edx */
  push32((uint32_t)(EDX));
  /* 11a918e1 call 0x11a91b30 */
  push32(0x11a918e6u); f_11a91b30();
  /* 11a918e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a918e9 mov dword ptr [0x11aba6e4], eax */
  w32((uint32_t)(0x11aba6e4), (EAX));
  /* 11a918ee mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11a918f5 jmp 0x11a91900 */
  goto L_11a91900;
L_11a918f7:;
  /* 11a918f7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a918fa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a918fd mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11a91900:;
  /* 11a91900 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a91904 jae 0x11a91924 */
  if (!C.cf) goto L_11a91924;
  /* 11a91906 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11a91909 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11a9190c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a9190f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a91912 mov cx, word ptr [ecx + eax*2 + 0x11ab826c] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x11ab826c)));
  /* 11a9191a mov word ptr [edx*2 + 0x11aba4d0], cx */
  w16((uint32_t)(EDX*2 + 0x11aba4d0), (CX));
  /* 11a91922 jmp 0x11a918f7 */
  goto L_11a918f7;
L_11a91924:;
  /* 11a91924 call 0x11a91c30 */
  push32(0x11a91929u); f_11a91c30();
  /* 11a91929 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11a9192b call 0x11a8f370 */
  push32(0x11a91930u); f_11a8f370();
  /* 11a91930 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a91933 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a91935 jmp 0x11a91ac0 */
  goto L_11a91ac0;
L_11a9193a:;
  /* 11a9193a jmp 0x11a917e5 */
  goto L_11a917e5;
L_11a9193f:;
  /* 11a9193f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 11a91942 push edx */
  push32((uint32_t)(EDX));
  /* 11a91943 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a91946 push eax */
  push32((uint32_t)(EAX));
  /* 11a91947 call dword ptr [0x11abc330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11abc330))), 0x11a9194du);
  /* 11a9194d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a91950 jne 0x11a91a92 */
  if (!C.zf) goto L_11a91a92;
  /* 11a91956 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11a9195d jmp 0x11a91968 */
  goto L_11a91968;
L_11a9195f:;
  /* 11a9195f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a91962 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a91965 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_11a91968:;
  /* 11a91968 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a9196f jae 0x11a9197d */
  if (!C.cf) goto L_11a9197d;
  /* 11a91971 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a91974 mov byte ptr [edx + 0x11aba5e0], 0 */
  w8((uint32_t)(EDX + 0x11aba5e0), (0x0u));
  /* 11a9197b jmp 0x11a9195f */
  goto L_11a9195f;
L_11a9197d:;
  /* 11a9197d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11a91980 mov dword ptr [0x11aba450], eax */
  w32((uint32_t)(0x11aba450), (EAX));
  /* 11a91985 mov dword ptr [0x11aba6e4], 0 */
  w32((uint32_t)(0x11aba6e4), (0x0u));
  /* 11a9198f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a91993 jbe 0x11a91a4e */
  if ((C.cf||C.zf)) goto L_11a91a4e;
  /* 11a91999 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 11a9199c mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11a9199f jmp 0x11a919aa */
  goto L_11a919aa;
L_11a919a1:;
  /* 11a919a1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a919a4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a919a7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_11a919aa:;
  /* 11a919aa mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a919ad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11a919af mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11a919b1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11a919b3 je 0x11a919fc */
  if (C.zf) goto L_11a919fc;
  /* 11a919b5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a919b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a919ba mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11a919bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11a919bf je 0x11a919fc */
  if (C.zf) goto L_11a919fc;
  /* 11a919c1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a919c4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a919c6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11a919c8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11a919cb jmp 0x11a919d6 */
  goto L_11a919d6;
L_11a919cd:;
  /* 11a919cd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a919d0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a919d3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11a919d6:;
  /* 11a919d6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11a919d9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11a919db mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11a919de cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a919e1 ja 0x11a919fa */
  if ((!C.cf&&!C.zf)) goto L_11a919fa;
  /* 11a919e3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a919e6 mov cl, byte ptr [eax + 0x11aba5e1] */
  CL = (r8((uint32_t)(EAX + 0x11aba5e1)));
  /* 11a919ec or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 11a919ef mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a919f2 mov byte ptr [edx + 0x11aba5e1], cl */
  w8((uint32_t)(EDX + 0x11aba5e1), (CL));
  /* 11a919f8 jmp 0x11a919cd */
  goto L_11a919cd;
L_11a919fa:;
  /* 11a919fa jmp 0x11a919a1 */
  goto L_11a919a1;
L_11a919fc:;
  /* 11a919fc mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 11a91a03 jmp 0x11a91a0e */
  goto L_11a91a0e;
L_11a91a05:;
  /* 11a91a05 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a91a08 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a91a0b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11a91a0e:;
  /* 11a91a0e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a91a15 jae 0x11a91a2e */
  if (!C.cf) goto L_11a91a2e;
  /* 11a91a17 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a91a1a mov dl, byte ptr [ecx + 0x11aba5e1] */
  DL = (r8((uint32_t)(ECX + 0x11aba5e1)));
  /* 11a91a20 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 11a91a23 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11a91a26 mov byte ptr [eax + 0x11aba5e1], dl */
  w8((uint32_t)(EAX + 0x11aba5e1), (DL));
  /* 11a91a2c jmp 0x11a91a05 */
  goto L_11a91a05;
L_11a91a2e:;
  /* 11a91a2e mov ecx, dword ptr [0x11aba450] */
  ECX = (r32((uint32_t)(0x11aba450)));
  /* 11a91a34 push ecx */
  push32((uint32_t)(ECX));
  /* 11a91a35 call 0x11a91b30 */
  push32(0x11a91a3au); f_11a91b30();
  /* 11a91a3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a91a3d mov dword ptr [0x11aba6e4], eax */
  w32((uint32_t)(0x11aba6e4), (EAX));
  /* 11a91a42 mov dword ptr [0x11aba4dc], 1 */
  w32((uint32_t)(0x11aba4dc), (0x1u));
  /* 11a91a4c jmp 0x11a91a58 */
  goto L_11a91a58;
L_11a91a4e:;
  /* 11a91a4e mov dword ptr [0x11aba4dc], 0 */
  w32((uint32_t)(0x11aba4dc), (0x0u));
L_11a91a58:;
  /* 11a91a58 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11a91a5f jmp 0x11a91a6a */
  goto L_11a91a6a;
L_11a91a61:;
  /* 11a91a61 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a91a64 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11a91a67 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11a91a6a:;
  /* 11a91a6a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a91a6e jae 0x11a91a7f */
  if (!C.cf) goto L_11a91a7f;
  /* 11a91a70 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11a91a73 mov word ptr [eax*2 + 0x11aba4d0], 0 */
  w16((uint32_t)(EAX*2 + 0x11aba4d0), (0x0u));
  /* 11a91a7d jmp 0x11a91a61 */
  goto L_11a91a61;
L_11a91a7f:;
  /* 11a91a7f call 0x11a91c30 */
  push32(0x11a91a84u); f_11a91c30();
  /* 11a91a84 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11a91a86 call 0x11a8f370 */
  push32(0x11a91a8bu); f_11a8f370();
  /* 11a91a8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a91a8e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a91a90 jmp 0x11a91ac0 */
  goto L_11a91ac0;
L_11a91a92:;
  /* 11a91a92 cmp dword ptr [0x11aba2b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11aba2b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11a91a99 je 0x11a91ab3 */
  if (C.zf) goto L_11a91ab3;
  /* 11a91a9b call 0x11a91bb0 */
  push32(0x11a91aa0u); f_11a91bb0();
  /* 11a91aa0 call 0x11a91c30 */
  push32(0x11a91aa5u); f_11a91c30();
  /* 11a91aa5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11a91aa7 call 0x11a8f370 */
  push32(0x11a91aacu); f_11a8f370();
  /* 11a91aac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a91aaf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11a91ab1 jmp 0x11a91ac0 */
  goto L_11a91ac0;
L_11a91ab3:;
  /* 11a91ab3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11a91ab5 call 0x11a8f370 */
  push32(0x11a91abau); f_11a8f370();
  /* 11a91aba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11a91abd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11a91ac0:;
  /* 11a91ac0 mov esp, ebp */
  ESP = (EBP);
  /* 11a91ac2 pop ebp */
  EBP = (pop32());
  /* 11a91ac3 ret  */
  ESPCHK(0x11a91780u, _esp0);
  ESP += 4; return;
}

