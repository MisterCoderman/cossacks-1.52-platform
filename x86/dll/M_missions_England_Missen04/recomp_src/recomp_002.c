#include "recomp.h"

/* FUN_1000f560 @ 0x1046f560 (172 bytes, 54 insns) */
void f_1046f560(void) {
  FTRACE(0x1046f560u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046f560 push ebp */
  push32((uint32_t)(EBP));
  /* 1046f561 mov ebp, esp */
  EBP = (ESP);
  /* 1046f563 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046f566 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046f569 push eax */
  push32((uint32_t)(EAX));
  /* 1046f56a call 0x1046f9a0 */
  push32(0x1046f56fu); f_1046f9a0();
  /* 1046f56f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046f572 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 1046f575 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1046f577 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1046f57a push ecx */
  push32((uint32_t)(ECX));
  /* 1046f57b mov edx, dword ptr [0x1048e6f0] */
  EDX = (r32((uint32_t)(0x1048e6f0)));
  /* 1046f581 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1046f583 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046f585 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1046f58b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046f591 push edx */
  push32((uint32_t)(EDX));
  /* 1046f592 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1046f595 push eax */
  push32((uint32_t)(EAX));
  /* 1046f596 call dword ptr [0x1048e70c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1048e70c))), 0x1046f59cu);
  /* 1046f59c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046f59e jne 0x1046f5b1 */
  if (!C.zf) goto L_1046f5b1;
  /* 1046f5a0 mov dword ptr [0x1048e704], 0 */
  w32((uint32_t)(0x1048e704), (0x0u));
  /* 1046f5aa mov eax, 1 */
  EAX = (0x1u);
  /* 1046f5af jmp 0x1046f606 */
  goto L_1046f606;
L_1046f5b1:;
  /* 1046f5b1 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1046f5b4 push ecx */
  push32((uint32_t)(ECX));
  /* 1046f5b5 mov edx, dword ptr [0x1048e700] */
  EDX = (r32((uint32_t)(0x1048e700)));
  /* 1046f5bb push edx */
  push32((uint32_t)(EDX));
  /* 1046f5bc call 0x104715e0 */
  push32(0x1046f5c1u); f_104715e0();
  /* 1046f5c1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046f5c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046f5c6 jne 0x1046f5f9 */
  if (!C.zf) goto L_1046f5f9;
  /* 1046f5c8 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1046f5cb push eax */
  push32((uint32_t)(EAX));
  /* 1046f5cc call 0x1046f6e0 */
  push32(0x1046f5d1u); f_1046f6e0();
  /* 1046f5d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046f5d4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046f5d6 je 0x1046f5f9 */
  if (C.zf) goto L_1046f5f9;
  /* 1046f5d8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1046f5db mov dword ptr [0x1048e708], ecx */
  w32((uint32_t)(0x1048e708), (ECX));
  /* 1046f5e1 mov edx, dword ptr [0x1048e708] */
  EDX = (r32((uint32_t)(0x1048e708)));
  /* 1046f5e7 mov dword ptr [0x1048e6ec], edx */
  w32((uint32_t)(0x1048e6ec), (EDX));
  /* 1046f5ed mov eax, dword ptr [0x1048e704] */
  EAX = (r32((uint32_t)(0x1048e704)));
  /* 1046f5f2 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1046f5f4 mov dword ptr [0x1048e704], eax */
  w32((uint32_t)(0x1048e704), (EAX));
L_1046f5f9:;
  /* 1046f5f9 mov eax, dword ptr [0x1048e704] */
  EAX = (r32((uint32_t)(0x1048e704)));
  /* 1046f5fe and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1046f601 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1046f603 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046f605 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1046f606:;
  /* 1046f606 mov esp, ebp */
  ESP = (EBP);
  /* 1046f608 pop ebp */
  EBP = (pop32());
  /* 1046f609 ret 4 */
  ESPCHK(0x1046f560u, _esp0);
  ESP += 8; return;
}

/* FUN_1000f610 @ 0x1046f610 (43 bytes, 11 insns) */
void f_1046f610(void) {
  FTRACE(0x1046f610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046f610 push ebp */
  push32((uint32_t)(EBP));
  /* 1046f611 mov ebp, esp */
  EBP = (ESP);
  /* 1046f613 mov eax, dword ptr [0x1048e704] */
  EAX = (r32((uint32_t)(0x1048e704)));
  /* 1046f618 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 1046f61d mov dword ptr [0x1048e704], eax */
  w32((uint32_t)(0x1048e704), (EAX));
  /* 1046f622 call dword ptr [0x10490254] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490254))), 0x1046f628u);
  /* 1046f628 mov dword ptr [0x1048e708], eax */
  w32((uint32_t)(0x1048e708), (EAX));
  /* 1046f62d mov ecx, dword ptr [0x1048e708] */
  ECX = (r32((uint32_t)(0x1048e708)));
  /* 1046f633 mov dword ptr [0x1048e6ec], ecx */
  w32((uint32_t)(0x1048e6ec), (ECX));
  /* 1046f639 pop ebp */
  EBP = (pop32());
  /* 1046f63a ret  */
  ESPCHK(0x1046f610u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f640 @ 0x1046f640 (155 bytes, 57 insns) */
void f_1046f640(void) {
  FTRACE(0x1046f640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046f640 push ebp */
  push32((uint32_t)(EBP));
  /* 1046f641 mov ebp, esp */
  EBP = (ESP);
  /* 1046f643 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046f646 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046f64a je 0x1046f66b */
  if (C.zf) goto L_1046f66b;
  /* 1046f64c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046f64f movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1046f652 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1046f654 je 0x1046f66b */
  if (C.zf) goto L_1046f66b;
  /* 1046f656 push 0x1048a724 */
  push32((uint32_t)(0x1048a724u));
  /* 1046f65b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046f65e push edx */
  push32((uint32_t)(EDX));
  /* 1046f65f call 0x1046eba0 */
  push32(0x1046f664u); f_1046eba0();
  /* 1046f664 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046f667 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046f669 jne 0x1046f693 */
  if (!C.zf) goto L_1046f693;
L_1046f66b:;
  /* 1046f66b push 8 */
  push32((uint32_t)(0x8u));
  /* 1046f66d lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1046f670 push eax */
  push32((uint32_t)(EAX));
  /* 1046f671 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 1046f676 mov ecx, dword ptr [0x1048e708] */
  ECX = (r32((uint32_t)(0x1048e708)));
  /* 1046f67c push ecx */
  push32((uint32_t)(ECX));
  /* 1046f67d call dword ptr [0x1048e70c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1048e70c))), 0x1046f683u);
  /* 1046f683 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046f685 jne 0x1046f68b */
  if (!C.zf) goto L_1046f68b;
  /* 1046f687 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046f689 jmp 0x1046f6d7 */
  goto L_1046f6d7;
L_1046f68b:;
  /* 1046f68b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 1046f68e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1046f691 jmp 0x1046f6cb */
  goto L_1046f6cb;
L_1046f693:;
  /* 1046f693 push 0x1048a720 */
  push32((uint32_t)(0x1048a720u));
  /* 1046f698 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046f69b push eax */
  push32((uint32_t)(EAX));
  /* 1046f69c call 0x1046eba0 */
  push32(0x1046f6a1u); f_1046eba0();
  /* 1046f6a1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046f6a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046f6a6 jne 0x1046f6cb */
  if (!C.zf) goto L_1046f6cb;
  /* 1046f6a8 push 8 */
  push32((uint32_t)(0x8u));
  /* 1046f6aa lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 1046f6ad push ecx */
  push32((uint32_t)(ECX));
  /* 1046f6ae push 0xb */
  push32((uint32_t)(0xbu));
  /* 1046f6b0 mov edx, dword ptr [0x1048e708] */
  EDX = (r32((uint32_t)(0x1048e708)));
  /* 1046f6b6 push edx */
  push32((uint32_t)(EDX));
  /* 1046f6b7 call dword ptr [0x1048e70c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1048e70c))), 0x1046f6bdu);
  /* 1046f6bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046f6bf jne 0x1046f6c5 */
  if (!C.zf) goto L_1046f6c5;
  /* 1046f6c1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046f6c3 jmp 0x1046f6d7 */
  goto L_1046f6d7;
L_1046f6c5:;
  /* 1046f6c5 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 1046f6c8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1046f6cb:;
  /* 1046f6cb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046f6ce push ecx */
  push32((uint32_t)(ECX));
  /* 1046f6cf call 0x104717c0 */
  push32(0x1046f6d4u); f_104717c0();
  /* 1046f6d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1046f6d7:;
  /* 1046f6d7 mov esp, ebp */
  ESP = (EBP);
  /* 1046f6d9 pop ebp */
  EBP = (pop32());
  /* 1046f6da ret  */
  ESPCHK(0x1046f640u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f6e0 @ 0x1046f6e0 (79 bytes, 26 insns) */
void f_1046f6e0(void) {
  FTRACE(0x1046f6e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046f6e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1046f6e1 mov ebp, esp */
  EBP = (ESP);
  /* 1046f6e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046f6e6 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 1046f6ea mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 1046f6ee mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1046f6f5 jmp 0x1046f700 */
  goto L_1046f700;
L_1046f6f7:;
  /* 1046f6f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046f6fa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046f6fd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1046f700:;
  /* 1046f700 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046f704 jae 0x1046f726 */
  if (!C.cf) goto L_1046f726;
  /* 1046f706 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046f709 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1046f70f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046f712 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1046f714 mov cx, word ptr [eax*2 + 0x1048d9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x1048d9c4)));
  /* 1046f71c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046f71e jne 0x1046f724 */
  if (!C.zf) goto L_1046f724;
  /* 1046f720 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046f722 jmp 0x1046f72b */
  goto L_1046f72b;
L_1046f724:;
  /* 1046f724 jmp 0x1046f6f7 */
  goto L_1046f6f7;
L_1046f726:;
  /* 1046f726 mov eax, 1 */
  EAX = (0x1u);
L_1046f72b:;
  /* 1046f72b mov esp, ebp */
  ESP = (EBP);
  /* 1046f72d pop ebp */
  EBP = (pop32());
  /* 1046f72e ret  */
  ESPCHK(0x1046f6e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f730 @ 0x1046f730 (135 bytes, 48 insns) */
void f_1046f730(void) {
  FTRACE(0x1046f730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046f730 push ebp */
  push32((uint32_t)(EBP));
  /* 1046f731 mov ebp, esp */
  EBP = (ESP);
  /* 1046f733 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046f736 push esi */
  push32((uint32_t)(ESI));
  /* 1046f737 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046f73a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1046f73f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 1046f744 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1046f749 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 1046f74c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1046f751 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1046f754 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1046f756 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 1046f759 push ecx */
  push32((uint32_t)(ECX));
  /* 1046f75a push 1 */
  push32((uint32_t)(0x1u));
  /* 1046f75c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046f75f push edx */
  push32((uint32_t)(EDX));
  /* 1046f760 call dword ptr [0x1048e70c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1048e70c))), 0x1046f766u);
  /* 1046f766 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046f768 jne 0x1046f76e */
  if (!C.zf) goto L_1046f76e;
  /* 1046f76a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046f76c jmp 0x1046f7b2 */
  goto L_1046f7b2;
L_1046f76e:;
  /* 1046f76e lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 1046f771 push eax */
  push32((uint32_t)(EAX));
  /* 1046f772 call 0x1046f9a0 */
  push32(0x1046f777u); f_1046f9a0();
  /* 1046f777 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046f77a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046f77d je 0x1046f7ad */
  if (C.zf) goto L_1046f7ad;
  /* 1046f77f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046f783 je 0x1046f7ad */
  if (C.zf) goto L_1046f7ad;
  /* 1046f785 mov ecx, dword ptr [0x1048e6fc] */
  ECX = (r32((uint32_t)(0x1048e6fc)));
  /* 1046f78b push ecx */
  push32((uint32_t)(ECX));
  /* 1046f78c call 0x1046fa20 */
  push32(0x1046f791u); f_1046fa20();
  /* 1046f791 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046f794 mov esi, eax */
  ESI = (EAX);
  /* 1046f796 mov edx, dword ptr [0x1048e6fc] */
  EDX = (r32((uint32_t)(0x1048e6fc)));
  /* 1046f79c push edx */
  push32((uint32_t)(EDX));
  /* 1046f79d call 0x10465d40 */
  push32(0x1046f7a2u); f_10465d40();
  /* 1046f7a2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046f7a5 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046f7a7 jne 0x1046f7ad */
  if (!C.zf) goto L_1046f7ad;
  /* 1046f7a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046f7ab jmp 0x1046f7b2 */
  goto L_1046f7b2;
L_1046f7ad:;
  /* 1046f7ad mov eax, 1 */
  EAX = (0x1u);
L_1046f7b2:;
  /* 1046f7b2 pop esi */
  ESI = (pop32());
  /* 1046f7b3 mov esp, ebp */
  ESP = (EBP);
  /* 1046f7b5 pop ebp */
  EBP = (pop32());
  /* 1046f7b6 ret  */
  ESPCHK(0x1046f730u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f7c0 @ 0x1046f7c0 (77 bytes, 18 insns) */
void f_1046f7c0(void) {
  FTRACE(0x1046f7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046f7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1046f7c1 mov ebp, esp */
  EBP = (ESP);
  /* 1046f7c3 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046f7c9 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 1046f7d3 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 1046f7d9 push eax */
  push32((uint32_t)(EAX));
  /* 1046f7da call dword ptr [0x10490250] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490250))), 0x1046f7e0u);
  /* 1046f7e0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046f7e2 je 0x1046f7f9 */
  if (C.zf) goto L_1046f7f9;
  /* 1046f7e4 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046f7eb jne 0x1046f7f9 */
  if (!C.zf) goto L_1046f7f9;
  /* 1046f7ed mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 1046f7f7 jmp 0x1046f803 */
  goto L_1046f803;
L_1046f7f9:;
  /* 1046f7f9 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_1046f803:;
  /* 1046f803 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 1046f809 mov esp, ebp */
  ESP = (EBP);
  /* 1046f80b pop ebp */
  EBP = (pop32());
  /* 1046f80c ret  */
  ESPCHK(0x1046f7c0u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x1046f810 (388 bytes, 118 insns) */
void f_1046f810(void) {
  FTRACE(0x1046f810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046f810 push ebp */
  push32((uint32_t)(EBP));
  /* 1046f811 mov ebp, esp */
  EBP = (ESP);
  /* 1046f813 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046f816 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1046f81d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 1046f824 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1046f82b:;
  /* 1046f82b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1046f82e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046f831 jg 0x1046f978 */
  if ((!C.zf&&C.sf==C.of)) goto L_1046f978;
  /* 1046f837 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1046f83a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046f83d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1046f83e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046f840 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1046f842 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1046f845 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046f848 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046f84b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046f84e cmp edx, dword ptr [ecx + 0x1048d520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x1048d520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046f854 jne 0x1046f94e */
  if (!C.zf) goto L_1046f94e;
  /* 1046f85a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046f85d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1046f860 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046f864 ja 0x1046f887 */
  if ((!C.cf&&!C.zf)) goto L_1046f887;
  /* 1046f866 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046f86a je 0x1046f8f9 */
  if (C.zf) goto L_1046f8f9;
  /* 1046f870 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046f874 je 0x1046f8a4 */
  if (C.zf) goto L_1046f8a4;
  /* 1046f876 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046f87a je 0x1046f8c6 */
  if (C.zf) goto L_1046f8c6;
  /* 1046f87c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046f880 je 0x1046f8e8 */
  if (C.zf) goto L_1046f8e8;
  /* 1046f882 jmp 0x1046f918 */
  goto L_1046f918;
L_1046f887:;
  /* 1046f887 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046f88e je 0x1046f8b5 */
  if (C.zf) goto L_1046f8b5;
  /* 1046f890 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046f897 je 0x1046f8d7 */
  if (C.zf) goto L_1046f8d7;
  /* 1046f899 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046f8a0 je 0x1046f90a */
  if (C.zf) goto L_1046f90a;
  /* 1046f8a2 jmp 0x1046f918 */
  goto L_1046f918;
L_1046f8a4:;
  /* 1046f8a4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046f8a7 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046f8aa add ecx, 0x1048d524 */
  { uint32_t _a=(ECX),_b=(0x1048d524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046f8b0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1046f8b3 jmp 0x1046f918 */
  goto L_1046f918;
L_1046f8b5:;
  /* 1046f8b5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046f8b8 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046f8bb mov eax, dword ptr [edx + 0x1048d52c] */
  EAX = (r32((uint32_t)(EDX + 0x1048d52c)));
  /* 1046f8c1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1046f8c4 jmp 0x1046f918 */
  goto L_1046f918;
L_1046f8c6:;
  /* 1046f8c6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046f8c9 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046f8cc add ecx, 0x1048d530 */
  { uint32_t _a=(ECX),_b=(0x1048d530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046f8d2 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1046f8d5 jmp 0x1046f918 */
  goto L_1046f918;
L_1046f8d7:;
  /* 1046f8d7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046f8da imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046f8dd mov eax, dword ptr [edx + 0x1048d534] */
  EAX = (r32((uint32_t)(EDX + 0x1048d534)));
  /* 1046f8e3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1046f8e6 jmp 0x1046f918 */
  goto L_1046f918;
L_1046f8e8:;
  /* 1046f8e8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046f8eb imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046f8ee add ecx, 0x1048d538 */
  { uint32_t _a=(ECX),_b=(0x1048d538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046f8f4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1046f8f7 jmp 0x1046f918 */
  goto L_1046f918;
L_1046f8f9:;
  /* 1046f8f9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046f8fc imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046f8ff add edx, 0x1048d53c */
  { uint32_t _a=(EDX),_b=(0x1048d53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046f905 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1046f908 jmp 0x1046f918 */
  goto L_1046f918;
L_1046f90a:;
  /* 1046f90a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046f90d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046f910 add eax, 0x1048d544 */
  { uint32_t _a=(EAX),_b=(0x1048d544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046f915 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1046f918:;
  /* 1046f918 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046f91c je 0x1046f924 */
  if (C.zf) goto L_1046f924;
  /* 1046f91e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046f922 jge 0x1046f926 */
  if ((C.sf==C.of)) goto L_1046f926;
L_1046f924:;
  /* 1046f924 jmp 0x1046f978 */
  goto L_1046f978;
L_1046f926:;
  /* 1046f926 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1046f929 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046f92c push ecx */
  push32((uint32_t)(ECX));
  /* 1046f92d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046f930 push edx */
  push32((uint32_t)(EDX));
  /* 1046f931 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1046f934 push eax */
  push32((uint32_t)(EAX));
  /* 1046f935 call 0x10466730 */
  push32(0x1046f93au); f_10466730();
  /* 1046f93a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046f93d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1046f940 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046f943 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 1046f947 mov eax, 1 */
  EAX = (0x1u);
  /* 1046f94c jmp 0x1046f98e */
  goto L_1046f98e;
L_1046f94e:;
  /* 1046f94e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046f951 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046f954 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046f957 cmp eax, dword ptr [edx + 0x1048d520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x1048d520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046f95d jae 0x1046f96a */
  if (!C.cf) goto L_1046f96a;
  /* 1046f95f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046f962 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046f965 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1046f968 jmp 0x1046f973 */
  goto L_1046f973;
L_1046f96a:;
  /* 1046f96a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046f96d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046f970 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1046f973:;
  /* 1046f973 jmp 0x1046f82b */
  goto L_1046f82b;
L_1046f978:;
  /* 1046f978 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1046f97b push eax */
  push32((uint32_t)(EAX));
  /* 1046f97c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1046f97f push ecx */
  push32((uint32_t)(ECX));
  /* 1046f980 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1046f983 push edx */
  push32((uint32_t)(EDX));
  /* 1046f984 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046f987 push eax */
  push32((uint32_t)(EAX));
  /* 1046f988 call dword ptr [0x1049025c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1049025c))), 0x1046f98eu);
L_1046f98e:;
  /* 1046f98e mov esp, ebp */
  ESP = (EBP);
  /* 1046f990 pop ebp */
  EBP = (pop32());
  /* 1046f991 ret 0x10 */
  ESPCHK(0x1046f810u, _esp0);
  ESP += 20; return;
}

/* FUN_1000f9a0 @ 0x1046f9a0 (118 bytes, 42 insns) */
void f_1046f9a0(void) {
  FTRACE(0x1046f9a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046f9a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1046f9a1 mov ebp, esp */
  EBP = (ESP);
  /* 1046f9a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046f9a6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1046f9ad:;
  /* 1046f9ad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046f9b0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1046f9b2 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 1046f9b5 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1046f9b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046f9bc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046f9bf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1046f9c2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1046f9c4 je 0x1046fa0f */
  if (C.zf) goto L_1046fa0f;
  /* 1046f9c6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1046f9ca cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046f9cd jl 0x1046f9e2 */
  if ((C.sf!=C.of)) goto L_1046f9e2;
  /* 1046f9cf movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1046f9d3 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046f9d6 jg 0x1046f9e2 */
  if ((!C.zf&&C.sf==C.of)) goto L_1046f9e2;
  /* 1046f9d8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1046f9db add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1046f9dd mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1046f9e0 jmp 0x1046f9fc */
  goto L_1046f9fc;
L_1046f9e2:;
  /* 1046f9e2 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1046f9e6 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046f9e9 jl 0x1046f9fc */
  if ((C.sf!=C.of)) goto L_1046f9fc;
  /* 1046f9eb movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1046f9ef cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046f9f2 jg 0x1046f9fc */
  if ((!C.zf&&C.sf==C.of)) goto L_1046f9fc;
  /* 1046f9f4 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 1046f9f7 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1046f9f9 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_1046f9fc:;
  /* 1046f9fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046f9ff shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1046fa02 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1046fa06 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1046fa0a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1046fa0d jmp 0x1046f9ad */
  goto L_1046f9ad;
L_1046fa0f:;
  /* 1046fa0f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046fa12 mov esp, ebp */
  ESP = (EBP);
  /* 1046fa14 pop ebp */
  EBP = (pop32());
  /* 1046fa15 ret  */
  ESPCHK(0x1046f9a0u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x1046fa20 (101 bytes, 36 insns) */
void f_1046fa20(void) {
  FTRACE(0x1046fa20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046fa20 push ebp */
  push32((uint32_t)(EBP));
  /* 1046fa21 mov ebp, esp */
  EBP = (ESP);
  /* 1046fa23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046fa26 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1046fa2d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046fa30 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1046fa32 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 1046fa35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046fa38 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046fa3b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_1046fa3e:;
  /* 1046fa3e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1046fa42 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046fa45 jl 0x1046fa50 */
  if ((C.sf!=C.of)) goto L_1046fa50;
  /* 1046fa47 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1046fa4b cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046fa4e jle 0x1046fa62 */
  if ((C.zf||C.sf!=C.of)) goto L_1046fa62;
L_1046fa50:;
  /* 1046fa50 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1046fa54 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046fa57 jl 0x1046fa7e */
  if ((C.sf!=C.of)) goto L_1046fa7e;
  /* 1046fa59 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1046fa5d cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046fa60 jg 0x1046fa7e */
  if ((!C.zf&&C.sf==C.of)) goto L_1046fa7e;
L_1046fa62:;
  /* 1046fa62 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046fa65 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046fa68 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1046fa6b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046fa6e mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1046fa70 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 1046fa73 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046fa76 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046fa79 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 1046fa7c jmp 0x1046fa3e */
  goto L_1046fa3e;
L_1046fa7e:;
  /* 1046fa7e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046fa81 mov esp, ebp */
  ESP = (EBP);
  /* 1046fa83 pop ebp */
  EBP = (pop32());
  /* 1046fa84 ret  */
  ESPCHK(0x1046fa20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fa90 @ 0x1046fa90 (122 bytes, 39 insns) */
void f_1046fa90(void) {
  FTRACE(0x1046fa90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046fa90 push ebp */
  push32((uint32_t)(EBP));
  /* 1046fa91 mov ebp, esp */
  EBP = (ESP);
  /* 1046fa93 push ecx */
  push32((uint32_t)(ECX));
  /* 1046fa94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046fa97 cmp eax, dword ptr [0x1048ff9c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1048ff9c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046fa9d jae 0x1046fac1 */
  if (!C.cf) goto L_1046fac1;
  /* 1046fa9f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046faa2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1046faa5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046faa8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1046faab imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046faae mov eax, dword ptr [ecx*4 + 0x1048fe60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x1048fe60)));
  /* 1046fab5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1046faba and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1046fabd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1046fabf jne 0x1046fadc */
  if (!C.zf) goto L_1046fadc;
L_1046fac1:;
  /* 1046fac1 call 0x1046ade0 */
  push32(0x1046fac6u); f_1046ade0();
  /* 1046fac6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1046facc call 0x1046adf0 */
  push32(0x1046fad1u); f_1046adf0();
  /* 1046fad1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1046fad7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1046fada jmp 0x1046fb06 */
  goto L_1046fb06;
L_1046fadc:;
  /* 1046fadc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046fadf push edx */
  push32((uint32_t)(EDX));
  /* 1046fae0 call 0x1046c600 */
  push32(0x1046fae5u); f_1046c600();
  /* 1046fae5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046fae8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046faeb push eax */
  push32((uint32_t)(EAX));
  /* 1046faec call 0x1046fb10 */
  push32(0x1046faf1u); f_1046fb10();
  /* 1046faf1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046faf4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1046faf7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046fafa push ecx */
  push32((uint32_t)(ECX));
  /* 1046fafb call 0x1046c690 */
  push32(0x1046fb00u); f_1046c690();
  /* 1046fb00 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046fb03 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1046fb06:;
  /* 1046fb06 mov esp, ebp */
  ESP = (EBP);
  /* 1046fb08 pop ebp */
  EBP = (pop32());
  /* 1046fb09 ret  */
  ESPCHK(0x1046fa90u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x1046fb10 (170 bytes, 59 insns) */
void f_1046fb10(void) {
  FTRACE(0x1046fb10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046fb10 push ebp */
  push32((uint32_t)(EBP));
  /* 1046fb11 mov ebp, esp */
  EBP = (ESP);
  /* 1046fb13 push ecx */
  push32((uint32_t)(ECX));
  /* 1046fb14 push esi */
  push32((uint32_t)(ESI));
  /* 1046fb15 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046fb18 push eax */
  push32((uint32_t)(EAX));
  /* 1046fb19 call 0x1046c480 */
  push32(0x1046fb1eu); f_1046c480();
  /* 1046fb1e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046fb21 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046fb24 je 0x1046fb63 */
  if (C.zf) goto L_1046fb63;
  /* 1046fb26 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046fb2a je 0x1046fb32 */
  if (C.zf) goto L_1046fb32;
  /* 1046fb2c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046fb30 jne 0x1046fb4c */
  if (!C.zf) goto L_1046fb4c;
L_1046fb32:;
  /* 1046fb32 push 1 */
  push32((uint32_t)(0x1u));
  /* 1046fb34 call 0x1046c480 */
  push32(0x1046fb39u); f_1046c480();
  /* 1046fb39 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046fb3c mov esi, eax */
  ESI = (EAX);
  /* 1046fb3e push 2 */
  push32((uint32_t)(0x2u));
  /* 1046fb40 call 0x1046c480 */
  push32(0x1046fb45u); f_1046c480();
  /* 1046fb45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046fb48 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046fb4a je 0x1046fb63 */
  if (C.zf) goto L_1046fb63;
L_1046fb4c:;
  /* 1046fb4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046fb4f push ecx */
  push32((uint32_t)(ECX));
  /* 1046fb50 call 0x1046c480 */
  push32(0x1046fb55u); f_1046c480();
  /* 1046fb55 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046fb58 push eax */
  push32((uint32_t)(EAX));
  /* 1046fb59 call dword ptr [0x10490258] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490258))), 0x1046fb5fu);
  /* 1046fb5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046fb61 je 0x1046fb6c */
  if (C.zf) goto L_1046fb6c;
L_1046fb63:;
  /* 1046fb63 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1046fb6a jmp 0x1046fb75 */
  goto L_1046fb75;
L_1046fb6c:;
  /* 1046fb6c call dword ptr [0x104902c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902c0))), 0x1046fb72u);
  /* 1046fb72 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1046fb75:;
  /* 1046fb75 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046fb78 push edx */
  push32((uint32_t)(EDX));
  /* 1046fb79 call 0x1046c3a0 */
  push32(0x1046fb7eu); f_1046c3a0();
  /* 1046fb7e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046fb81 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046fb84 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1046fb87 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046fb8a and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1046fb8d imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1046fb90 mov edx, dword ptr [eax*4 + 0x1048fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1048fe60)));
  /* 1046fb97 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 1046fb9c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046fba0 je 0x1046fbb3 */
  if (C.zf) goto L_1046fbb3;
  /* 1046fba2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046fba5 push eax */
  push32((uint32_t)(EAX));
  /* 1046fba6 call 0x1046ad40 */
  push32(0x1046fbabu); f_1046ad40();
  /* 1046fbab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046fbae or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1046fbb1 jmp 0x1046fbb5 */
  goto L_1046fbb5;
L_1046fbb3:;
  /* 1046fbb3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1046fbb5:;
  /* 1046fbb5 pop esi */
  ESI = (pop32());
  /* 1046fbb6 mov esp, ebp */
  ESP = (EBP);
  /* 1046fbb8 pop ebp */
  EBP = (pop32());
  /* 1046fbb9 ret  */
  ESPCHK(0x1046fb10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fbc0 @ 0x1046fbc0 (146 bytes, 52 insns) */
void f_1046fbc0(void) {
  FTRACE(0x1046fbc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046fbc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1046fbc1 mov ebp, esp */
  EBP = (ESP);
  /* 1046fbc3 push ebx */
  push32((uint32_t)(EBX));
  /* 1046fbc4 push esi */
  push32((uint32_t)(ESI));
  /* 1046fbc5 push edi */
  push32((uint32_t)(EDI));
L_1046fbc6:;
  /* 1046fbc6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046fbca jne 0x1046fbea */
  if (!C.zf) goto L_1046fbea;
  /* 1046fbcc push 0x1048a060 */
  push32((uint32_t)(0x1048a060u));
  /* 1046fbd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1046fbd3 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1046fbd5 push 0x1048a728 */
  push32((uint32_t)(0x1048a728u));
  /* 1046fbda push 2 */
  push32((uint32_t)(0x2u));
  /* 1046fbdc call 0x10461fd0 */
  push32(0x1046fbe1u); f_10461fd0();
  /* 1046fbe1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046fbe4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046fbe7 jne 0x1046fbea */
  if (!C.zf) goto L_1046fbea;
  /* 1046fbe9 int3  */
  x86_unimpl("int3 @ 0x1046fbe9");
L_1046fbea:;
  /* 1046fbea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1046fbec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1046fbee jne 0x1046fbc6 */
  if (!C.zf) goto L_1046fbc6;
  /* 1046fbf0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046fbf3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1046fbf6 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 1046fbfc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1046fbfe je 0x1046fc4d */
  if (C.zf) goto L_1046fc4d;
  /* 1046fc00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046fc03 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1046fc06 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 1046fc09 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1046fc0b je 0x1046fc4d */
  if (C.zf) goto L_1046fc4d;
  /* 1046fc0d push 2 */
  push32((uint32_t)(0x2u));
  /* 1046fc0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046fc12 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1046fc15 push eax */
  push32((uint32_t)(EAX));
  /* 1046fc16 call 0x104639a0 */
  push32(0x1046fc1bu); f_104639a0();
  /* 1046fc1b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046fc1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046fc21 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1046fc24 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 1046fc2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046fc2d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 1046fc30 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046fc33 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 1046fc39 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046fc3c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 1046fc43 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1046fc46 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_1046fc4d:;
  /* 1046fc4d pop edi */
  EDI = (pop32());
  /* 1046fc4e pop esi */
  ESI = (pop32());
  /* 1046fc4f pop ebx */
  EBX = (pop32());
  /* 1046fc50 pop ebp */
  EBP = (pop32());
  /* 1046fc51 ret  */
  ESPCHK(0x1046fbc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fc60 @ 0x1046fc60 (289 bytes, 97 insns) */
void f_1046fc60(void) {
  FTRACE(0x1046fc60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046fc60 push ebp */
  push32((uint32_t)(EBP));
  /* 1046fc61 mov ebp, esp */
  EBP = (ESP);
  /* 1046fc63 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046fc66 push esi */
  push32((uint32_t)(ESI));
  /* 1046fc67 mov eax, dword ptr [0x1048dc98] */
  EAX = (r32((uint32_t)(0x1048dc98)));
  /* 1046fc6c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1046fc6f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1046fc76 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1046fc7d jmp 0x1046fc88 */
  goto L_1046fc88;
L_1046fc7f:;
  /* 1046fc7f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1046fc82 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046fc85 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1046fc88:;
  /* 1046fc88 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046fc8c jae 0x1046fcc1 */
  if (!C.cf) goto L_1046fcc1;
  /* 1046fc8e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1046fc91 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046fc94 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1046fc97 push ecx */
  push32((uint32_t)(ECX));
  /* 1046fc98 call 0x10465d40 */
  push32(0x1046fc9du); f_10465d40();
  /* 1046fc9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046fca0 mov esi, eax */
  ESI = (EAX);
  /* 1046fca2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1046fca5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046fca8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1046fcac push ecx */
  push32((uint32_t)(ECX));
  /* 1046fcad call 0x10465d40 */
  push32(0x1046fcb2u); f_10465d40();
  /* 1046fcb2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046fcb5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046fcb8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1046fcbc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1046fcbf jmp 0x1046fc7f */
  goto L_1046fc7f;
L_1046fcc1:;
  /* 1046fcc1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046fcc4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046fcc7 push eax */
  push32((uint32_t)(EAX));
  /* 1046fcc8 call 0x10462ef0 */
  push32(0x1046fccdu); f_10462ef0();
  /* 1046fccd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046fcd0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1046fcd3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046fcd7 je 0x1046fd79 */
  if (C.zf) goto L_1046fd79;
  /* 1046fcdd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046fce0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1046fce3 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1046fcea jmp 0x1046fcf5 */
  goto L_1046fcf5;
L_1046fcec:;
  /* 1046fcec mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1046fcef add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046fcf2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1046fcf5:;
  /* 1046fcf5 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046fcf9 jae 0x1046fd6a */
  if (!C.cf) goto L_1046fd6a;
  /* 1046fcfb mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1046fcfe mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 1046fd01 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1046fd04 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046fd07 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1046fd0a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1046fd0d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046fd10 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1046fd13 push ecx */
  push32((uint32_t)(ECX));
  /* 1046fd14 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1046fd17 push edx */
  push32((uint32_t)(EDX));
  /* 1046fd18 call 0x10465ec0 */
  push32(0x1046fd1du); f_10465ec0();
  /* 1046fd1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046fd20 push eax */
  push32((uint32_t)(EAX));
  /* 1046fd21 call 0x10465d40 */
  push32(0x1046fd26u); f_10465d40();
  /* 1046fd26 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046fd29 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1046fd2c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046fd2e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1046fd31 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1046fd34 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 1046fd37 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1046fd3a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046fd3d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1046fd40 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1046fd43 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046fd46 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 1046fd4a push eax */
  push32((uint32_t)(EAX));
  /* 1046fd4b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1046fd4e push ecx */
  push32((uint32_t)(ECX));
  /* 1046fd4f call 0x10465ec0 */
  push32(0x1046fd54u); f_10465ec0();
  /* 1046fd54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046fd57 push eax */
  push32((uint32_t)(EAX));
  /* 1046fd58 call 0x10465d40 */
  push32(0x1046fd5du); f_10465d40();
  /* 1046fd5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046fd60 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1046fd63 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046fd65 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1046fd68 jmp 0x1046fcec */
  goto L_1046fcec;
L_1046fd6a:;
  /* 1046fd6a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1046fd6d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1046fd70 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1046fd73 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046fd76 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1046fd79:;
  /* 1046fd79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046fd7c pop esi */
  ESI = (pop32());
  /* 1046fd7d mov esp, ebp */
  ESP = (EBP);
  /* 1046fd7f pop ebp */
  EBP = (pop32());
  /* 1046fd80 ret  */
  ESPCHK(0x1046fc60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fd90 @ 0x1046fd90 (291 bytes, 97 insns) */
void f_1046fd90(void) {
  FTRACE(0x1046fd90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046fd90 push ebp */
  push32((uint32_t)(EBP));
  /* 1046fd91 mov ebp, esp */
  EBP = (ESP);
  /* 1046fd93 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046fd96 push esi */
  push32((uint32_t)(ESI));
  /* 1046fd97 mov eax, dword ptr [0x1048dc98] */
  EAX = (r32((uint32_t)(0x1048dc98)));
  /* 1046fd9c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1046fd9f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1046fda6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1046fdad jmp 0x1046fdb8 */
  goto L_1046fdb8;
L_1046fdaf:;
  /* 1046fdaf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1046fdb2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046fdb5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1046fdb8:;
  /* 1046fdb8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046fdbc jae 0x1046fdf2 */
  if (!C.cf) goto L_1046fdf2;
  /* 1046fdbe mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1046fdc1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046fdc4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 1046fdc8 push ecx */
  push32((uint32_t)(ECX));
  /* 1046fdc9 call 0x10465d40 */
  push32(0x1046fdceu); f_10465d40();
  /* 1046fdce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046fdd1 mov esi, eax */
  ESI = (EAX);
  /* 1046fdd3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1046fdd6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046fdd9 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 1046fddd push ecx */
  push32((uint32_t)(ECX));
  /* 1046fdde call 0x10465d40 */
  push32(0x1046fde3u); f_10465d40();
  /* 1046fde3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046fde6 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046fde9 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1046fded mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1046fdf0 jmp 0x1046fdaf */
  goto L_1046fdaf;
L_1046fdf2:;
  /* 1046fdf2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046fdf5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046fdf8 push eax */
  push32((uint32_t)(EAX));
  /* 1046fdf9 call 0x10462ef0 */
  push32(0x1046fdfeu); f_10462ef0();
  /* 1046fdfe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046fe01 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1046fe04 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046fe08 je 0x1046feab */
  if (C.zf) goto L_1046feab;
  /* 1046fe0e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046fe11 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1046fe14 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1046fe1b jmp 0x1046fe26 */
  goto L_1046fe26;
L_1046fe1d:;
  /* 1046fe1d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1046fe20 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046fe23 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1046fe26:;
  /* 1046fe26 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046fe2a jae 0x1046fe9c */
  if (!C.cf) goto L_1046fe9c;
  /* 1046fe2c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1046fe2f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 1046fe32 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1046fe35 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046fe38 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1046fe3b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1046fe3e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046fe41 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 1046fe45 push ecx */
  push32((uint32_t)(ECX));
  /* 1046fe46 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1046fe49 push edx */
  push32((uint32_t)(EDX));
  /* 1046fe4a call 0x10465ec0 */
  push32(0x1046fe4fu); f_10465ec0();
  /* 1046fe4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046fe52 push eax */
  push32((uint32_t)(EAX));
  /* 1046fe53 call 0x10465d40 */
  push32(0x1046fe58u); f_10465d40();
  /* 1046fe58 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046fe5b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1046fe5e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046fe60 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 1046fe63 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1046fe66 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 1046fe69 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1046fe6c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046fe6f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1046fe72 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1046fe75 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046fe78 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 1046fe7c push eax */
  push32((uint32_t)(EAX));
  /* 1046fe7d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1046fe80 push ecx */
  push32((uint32_t)(ECX));
  /* 1046fe81 call 0x10465ec0 */
  push32(0x1046fe86u); f_10465ec0();
  /* 1046fe86 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046fe89 push eax */
  push32((uint32_t)(EAX));
  /* 1046fe8a call 0x10465d40 */
  push32(0x1046fe8fu); f_10465d40();
  /* 1046fe8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046fe92 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1046fe95 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046fe97 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1046fe9a jmp 0x1046fe1d */
  goto L_1046fe1d;
L_1046fe9c:;
  /* 1046fe9c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1046fe9f mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 1046fea2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1046fea5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046fea8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_1046feab:;
  /* 1046feab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1046feae pop esi */
  ESI = (pop32());
  /* 1046feaf mov esp, ebp */
  ESP = (EBP);
  /* 1046feb1 pop ebp */
  EBP = (pop32());
  /* 1046feb2 ret  */
  ESPCHK(0x1046fd90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fec0 @ 0x1046fec0 (878 bytes, 273 insns) */
void f_1046fec0(void) {
  FTRACE(0x1046fec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1046fec0 push ebp */
  push32((uint32_t)(EBP));
  /* 1046fec1 mov ebp, esp */
  EBP = (ESP);
  /* 1046fec3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1046fec6 push esi */
  push32((uint32_t)(ESI));
  /* 1046fec7 mov eax, dword ptr [0x1048dc98] */
  EAX = (r32((uint32_t)(0x1048dc98)));
  /* 1046fecc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1046fecf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1046fed6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1046fedd jmp 0x1046fee8 */
  goto L_1046fee8;
L_1046fedf:;
  /* 1046fedf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1046fee2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046fee5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1046fee8:;
  /* 1046fee8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046feec jae 0x1046ff21 */
  if (!C.cf) goto L_1046ff21;
  /* 1046feee mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1046fef1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046fef4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 1046fef7 push ecx */
  push32((uint32_t)(ECX));
  /* 1046fef8 call 0x10465d40 */
  push32(0x1046fefdu); f_10465d40();
  /* 1046fefd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ff00 mov esi, eax */
  ESI = (EAX);
  /* 1046ff02 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1046ff05 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046ff08 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 1046ff0c push ecx */
  push32((uint32_t)(ECX));
  /* 1046ff0d call 0x10465d40 */
  push32(0x1046ff12u); f_10465d40();
  /* 1046ff12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ff15 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ff18 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1046ff1c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1046ff1f jmp 0x1046fedf */
  goto L_1046fedf;
L_1046ff21:;
  /* 1046ff21 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1046ff28 jmp 0x1046ff33 */
  goto L_1046ff33;
L_1046ff2a:;
  /* 1046ff2a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1046ff2d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ff30 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_1046ff33:;
  /* 1046ff33 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1046ff37 jae 0x1046ff6d */
  if (!C.cf) goto L_1046ff6d;
  /* 1046ff39 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1046ff3c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046ff3f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1046ff43 push eax */
  push32((uint32_t)(EAX));
  /* 1046ff44 call 0x10465d40 */
  push32(0x1046ff49u); f_10465d40();
  /* 1046ff49 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ff4c mov esi, eax */
  ESI = (EAX);
  /* 1046ff4e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1046ff51 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046ff54 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 1046ff58 push eax */
  push32((uint32_t)(EAX));
  /* 1046ff59 call 0x10465d40 */
  push32(0x1046ff5eu); f_10465d40();
  /* 1046ff5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ff61 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ff64 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1046ff68 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1046ff6b jmp 0x1046ff2a */
  goto L_1046ff2a;
L_1046ff6d:;
  /* 1046ff6d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046ff70 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 1046ff76 push eax */
  push32((uint32_t)(EAX));
  /* 1046ff77 call 0x10465d40 */
  push32(0x1046ff7cu); f_10465d40();
  /* 1046ff7c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ff7f mov esi, eax */
  ESI = (EAX);
  /* 1046ff81 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046ff84 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 1046ff8a push edx */
  push32((uint32_t)(EDX));
  /* 1046ff8b call 0x10465d40 */
  push32(0x1046ff90u); f_10465d40();
  /* 1046ff90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ff93 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ff96 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 1046ff9a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1046ff9d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046ffa0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 1046ffa6 push edx */
  push32((uint32_t)(EDX));
  /* 1046ffa7 call 0x10465d40 */
  push32(0x1046ffacu); f_10465d40();
  /* 1046ffac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ffaf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046ffb2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1046ffb6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1046ffb9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046ffbc mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 1046ffc2 push ecx */
  push32((uint32_t)(ECX));
  /* 1046ffc3 call 0x10465d40 */
  push32(0x1046ffc8u); f_10465d40();
  /* 1046ffc8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ffcb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046ffce lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1046ffd2 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1046ffd5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1046ffd8 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1046ffde push edx */
  push32((uint32_t)(EDX));
  /* 1046ffdf call 0x10465d40 */
  push32(0x1046ffe4u); f_10465d40();
  /* 1046ffe4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1046ffe7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046ffea lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 1046ffee mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1046fff1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1046fff4 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1046fff9 push eax */
  push32((uint32_t)(EAX));
  /* 1046fffa call 0x10462ef0 */
  push32(0x1046ffffu); f_10462ef0();
  /* 1046ffff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10470002 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10470005 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10470009 je 0x10470226 */
  if (C.zf) goto L_10470226;
  /* 1047000f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10470012 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 10470015 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10470018 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047001e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10470021 push 0xac */
  push32((uint32_t)(0xacu));
  /* 10470026 mov eax, dword ptr [0x1048dc98] */
  EAX = (r32((uint32_t)(0x1048dc98)));
  /* 1047002b push eax */
  push32((uint32_t)(EAX));
  /* 1047002c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047002f push ecx */
  push32((uint32_t)(ECX));
  /* 10470030 call 0x104697f0 */
  push32(0x10470035u); f_104697f0();
  /* 10470035 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10470038 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1047003f jmp 0x1047004a */
  goto L_1047004a;
L_10470041:;
  /* 10470041 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10470044 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10470047 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1047004a:;
  /* 1047004a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047004e jae 0x104700be */
  if (!C.cf) goto L_104700be;
  /* 10470050 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10470053 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10470056 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10470059 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 1047005c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047005f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10470062 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 10470065 push edx */
  push32((uint32_t)(EDX));
  /* 10470066 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10470069 push eax */
  push32((uint32_t)(EAX));
  /* 1047006a call 0x10465ec0 */
  push32(0x1047006fu); f_10465ec0();
  /* 1047006f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10470072 push eax */
  push32((uint32_t)(EAX));
  /* 10470073 call 0x10465d40 */
  push32(0x10470078u); f_10465d40();
  /* 10470078 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047007b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1047007e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10470082 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10470085 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10470088 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047008b mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1047008e mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 10470092 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10470095 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10470098 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 1047009c push edx */
  push32((uint32_t)(EDX));
  /* 1047009d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104700a0 push eax */
  push32((uint32_t)(EAX));
  /* 104700a1 call 0x10465ec0 */
  push32(0x104700a6u); f_10465ec0();
  /* 104700a6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104700a9 push eax */
  push32((uint32_t)(EAX));
  /* 104700aa call 0x10465d40 */
  push32(0x104700afu); f_10465d40();
  /* 104700af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104700b2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104700b5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 104700b9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 104700bc jmp 0x10470041 */
  goto L_10470041;
L_104700be:;
  /* 104700be mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 104700c5 jmp 0x104700d0 */
  goto L_104700d0;
L_104700c7:;
  /* 104700c7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104700ca add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104700cd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_104700d0:;
  /* 104700d0 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104700d4 jae 0x10470146 */
  if (!C.cf) goto L_10470146;
  /* 104700d6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104700d9 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 104700dc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 104700df mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 104700e3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104700e6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104700e9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 104700ed push eax */
  push32((uint32_t)(EAX));
  /* 104700ee mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104700f1 push ecx */
  push32((uint32_t)(ECX));
  /* 104700f2 call 0x10465ec0 */
  push32(0x104700f7u); f_10465ec0();
  /* 104700f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104700fa push eax */
  push32((uint32_t)(EAX));
  /* 104700fb call 0x10465d40 */
  push32(0x10470100u); f_10465d40();
  /* 10470100 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10470103 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10470106 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 1047010a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1047010d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10470110 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10470113 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 10470116 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 1047011a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047011d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10470120 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10470124 push eax */
  push32((uint32_t)(EAX));
  /* 10470125 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10470128 push ecx */
  push32((uint32_t)(ECX));
  /* 10470129 call 0x10465ec0 */
  push32(0x1047012eu); f_10465ec0();
  /* 1047012e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10470131 push eax */
  push32((uint32_t)(EAX));
  /* 10470132 call 0x10465d40 */
  push32(0x10470137u); f_10465d40();
  /* 10470137 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047013a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1047013d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10470141 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10470144 jmp 0x104700c7 */
  goto L_104700c7;
L_10470146:;
  /* 10470146 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10470149 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1047014c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 10470152 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10470155 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 1047015b push ecx */
  push32((uint32_t)(ECX));
  /* 1047015c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1047015f push edx */
  push32((uint32_t)(EDX));
  /* 10470160 call 0x10465ec0 */
  push32(0x10470165u); f_10465ec0();
  /* 10470165 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10470168 push eax */
  push32((uint32_t)(EAX));
  /* 10470169 call 0x10465d40 */
  push32(0x1047016eu); f_10465d40();
  /* 1047016e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10470171 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10470174 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 10470178 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1047017b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047017e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10470181 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 10470187 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047018a mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10470190 push eax */
  push32((uint32_t)(EAX));
  /* 10470191 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10470194 push ecx */
  push32((uint32_t)(ECX));
  /* 10470195 call 0x10465ec0 */
  push32(0x1047019au); f_10465ec0();
  /* 1047019a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047019d push eax */
  push32((uint32_t)(EAX));
  /* 1047019e call 0x10465d40 */
  push32(0x104701a3u); f_10465d40();
  /* 104701a3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104701a6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104701a9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 104701ad mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 104701b0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104701b3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104701b6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 104701bc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104701bf mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 104701c5 push ecx */
  push32((uint32_t)(ECX));
  /* 104701c6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104701c9 push edx */
  push32((uint32_t)(EDX));
  /* 104701ca call 0x10465ec0 */
  push32(0x104701cfu); f_10465ec0();
  /* 104701cf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104701d2 push eax */
  push32((uint32_t)(EAX));
  /* 104701d3 call 0x10465d40 */
  push32(0x104701d8u); f_10465d40();
  /* 104701d8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104701db mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104701de lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 104701e2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 104701e5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 104701e8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104701eb mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 104701f1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104701f4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 104701fa push eax */
  push32((uint32_t)(EAX));
  /* 104701fb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 104701fe push ecx */
  push32((uint32_t)(ECX));
  /* 104701ff call 0x10465ec0 */
  push32(0x10470204u); f_10465ec0();
  /* 10470204 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10470207 push eax */
  push32((uint32_t)(EAX));
  /* 10470208 call 0x10465d40 */
  push32(0x1047020du); f_10465d40();
  /* 1047020d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10470210 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10470213 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 10470217 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1047021a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047021d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10470220 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_10470226:;
  /* 10470226 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10470229 pop esi */
  ESI = (pop32());
  /* 1047022a mov esp, ebp */
  ESP = (EBP);
  /* 1047022c pop ebp */
  EBP = (pop32());
  /* 1047022d ret  */
  ESPCHK(0x1046fec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010230 @ 0x10470230 (31 bytes, 15 insns) */
void f_10470230(void) {
  FTRACE(0x10470230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10470230 push ebp */
  push32((uint32_t)(EBP));
  /* 10470231 mov ebp, esp */
  EBP = (ESP);
  /* 10470233 push 0 */
  push32((uint32_t)(0x0u));
  /* 10470235 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10470238 push eax */
  push32((uint32_t)(EAX));
  /* 10470239 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047023c push ecx */
  push32((uint32_t)(ECX));
  /* 1047023d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10470240 push edx */
  push32((uint32_t)(EDX));
  /* 10470241 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10470244 push eax */
  push32((uint32_t)(EAX));
  /* 10470245 call 0x10470250 */
  push32(0x1047024au); f_10470250();
  /* 1047024a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047024d pop ebp */
  EBP = (pop32());
  /* 1047024e ret  */
  ESPCHK(0x10470230u, _esp0);
  ESP += 4; return;
}

/* FUN_10010250 @ 0x10470250 (393 bytes, 123 insns) */
void f_10470250(void) {
  FTRACE(0x10470250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10470250 push ebp */
  push32((uint32_t)(EBP));
  /* 10470251 mov ebp, esp */
  EBP = (ESP);
  /* 10470253 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10470256 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047025a jne 0x10470266 */
  if (!C.zf) goto L_10470266;
  /* 1047025c mov eax, dword ptr [0x1048dc98] */
  EAX = (r32((uint32_t)(0x1048dc98)));
  /* 10470261 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10470264 jmp 0x1047026c */
  goto L_1047026c;
L_10470266:;
  /* 10470266 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10470269 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_1047026c:;
  /* 1047026c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047026f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10470272 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10470275 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10470278 push 0x1048e80c */
  push32((uint32_t)(0x1048e80cu));
  /* 1047027d call dword ptr [0x10490294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490294))), 0x10470283u);
  /* 10470283 cmp dword ptr [0x1048e7fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e7fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047028a je 0x104702aa */
  if (C.zf) goto L_104702aa;
  /* 1047028c push 0x1048e80c */
  push32((uint32_t)(0x1048e80cu));
  /* 10470291 call dword ptr [0x10490284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490284))), 0x10470297u);
  /* 10470297 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10470299 call 0x10466910 */
  push32(0x1047029eu); f_10466910();
  /* 1047029e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104702a1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 104702a8 jmp 0x104702b1 */
  goto L_104702b1;
L_104702aa:;
  /* 104702aa mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_104702b1:;
  /* 104702b1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104702b5 jbe 0x104703a2 */
  if ((C.cf||C.zf)) goto L_104703a2;
  /* 104702bb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104702be mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 104702c0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 104702c3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104702c7 je 0x104702d1 */
  if (C.zf) goto L_104702d1;
  /* 104702c9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104702cd je 0x104702d6 */
  if (C.zf) goto L_104702d6;
  /* 104702cf jmp 0x10470330 */
  goto L_10470330;
L_104702d1:;
  /* 104702d1 jmp 0x104703a2 */
  goto L_104703a2;
L_104702d6:;
  /* 104702d6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104702d9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104702dc mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 104702df mov dword ptr [0x1048e7e8], 0 */
  w32((uint32_t)(0x1048e7e8), (0x0u));
  /* 104702e9 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104702ec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 104702ef cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104702f2 jne 0x10470307 */
  if (!C.zf) goto L_10470307;
  /* 104702f4 mov dword ptr [0x1048e7e8], 1 */
  w32((uint32_t)(0x1048e7e8), (0x1u));
  /* 104702fe mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10470301 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10470304 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_10470307:;
  /* 10470307 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047030a push ecx */
  push32((uint32_t)(ECX));
  /* 1047030b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 1047030e push edx */
  push32((uint32_t)(EDX));
  /* 1047030f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10470312 push eax */
  push32((uint32_t)(EAX));
  /* 10470313 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10470316 push ecx */
  push32((uint32_t)(ECX));
  /* 10470317 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047031a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1047031c push eax */
  push32((uint32_t)(EAX));
  /* 1047031d call 0x104703e0 */
  push32(0x10470322u); f_104703e0();
  /* 10470322 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10470325 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10470328 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047032b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1047032e jmp 0x1047039d */
  goto L_1047039d;
L_10470330:;
  /* 10470330 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10470333 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10470335 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10470337 mov ecx, dword ptr [0x1048cc98] */
  ECX = (r32((uint32_t)(0x1048cc98)));
  /* 1047033d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1047033f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10470343 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10470349 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1047034b je 0x10470378 */
  if (C.zf) goto L_10470378;
  /* 1047034d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10470351 jbe 0x10470378 */
  if ((C.cf||C.zf)) goto L_10470378;
  /* 10470353 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10470356 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10470359 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1047035b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1047035d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10470360 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10470363 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10470366 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10470369 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047036c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1047036f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10470372 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10470375 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10470378:;
  /* 10470378 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047037b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047037e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10470380 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10470382 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10470385 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10470388 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1047038b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047038e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10470391 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 10470394 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10470397 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047039a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1047039d:;
  /* 1047039d jmp 0x104702b1 */
  goto L_104702b1;
L_104703a2:;
  /* 104703a2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104703a6 je 0x104703b4 */
  if (C.zf) goto L_104703b4;
  /* 104703a8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 104703aa call 0x104669b0 */
  push32(0x104703afu); f_104669b0();
  /* 104703af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104703b2 jmp 0x104703bf */
  goto L_104703bf;
L_104703b4:;
  /* 104703b4 push 0x1048e80c */
  push32((uint32_t)(0x1048e80cu));
  /* 104703b9 call dword ptr [0x10490284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490284))), 0x104703bfu);
L_104703bf:;
  /* 104703bf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104703c3 jbe 0x104703d3 */
  if ((C.cf||C.zf)) goto L_104703d3;
  /* 104703c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104703c8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 104703cb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104703ce sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104703d1 jmp 0x104703d5 */
  goto L_104703d5;
L_104703d3:;
  /* 104703d3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104703d5:;
  /* 104703d5 mov esp, ebp */
  ESP = (EBP);
  /* 104703d7 pop ebp */
  EBP = (pop32());
  /* 104703d8 ret  */
  ESPCHK(0x10470250u, _esp0);
  ESP += 4; return;
}

/* FUN_100103e0 @ 0x104703e0 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_104703e0(void) {
  FTRACE(0x104703e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104703e0 push ebp */
  push32((uint32_t)(EBP));
  /* 104703e1 mov ebp, esp */
  EBP = (ESP);
  /* 104703e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104703e6 push esi */
  push32((uint32_t)(ESI));
  /* 104703e7 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 104703eb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104703ee mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104703f1 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104703f4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104703f7 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104703fb ja 0x10470948 */
  if ((!C.cf&&!C.zf)) goto L_10470948;
  /* 10470401 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10470404 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10470406 mov dl, byte ptr [eax + 0x104709a9] */
  DL = (r8((uint32_t)(EAX + 0x104709a9)));
  /* 1047040c jmp dword ptr [edx*4 + 0x1047094d] */
  switch (EDX) {
    case 0: goto L_10470926;
    case 1: goto L_10470435;
    case 2: goto L_1047047b;
    case 3: goto L_104705c8;
    case 4: goto L_104705f0;
    case 5: goto L_1047068f;
    case 6: goto L_104706fb;
    case 7: goto L_10470724;
    case 8: goto L_10470765;
    case 9: goto L_10470847;
    case 10: goto L_104708ae;
    case 11: goto L_104708fb;
    case 12: goto L_10470413;
    case 13: goto L_10470458;
    case 14: goto L_1047049e;
    case 15: goto L_1047059e;
    case 16: goto L_10470635;
    case 17: goto L_10470662;
    case 18: goto L_104706b7;
    case 19: goto L_1047073b;
    case 20: goto L_104707e9;
    case 21: goto L_10470878;
    case 22: goto L_10470948;
    default: x86_unimpl("switch@0x1047040c out of table"); return;
  }
L_10470413:;
  /* 10470413 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10470416 push ecx */
  push32((uint32_t)(ECX));
  /* 10470417 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047041a push edx */
  push32((uint32_t)(EDX));
  /* 1047041b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047041e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10470421 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10470424 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 10470427 push eax */
  push32((uint32_t)(EAX));
  /* 10470428 call 0x10470a00 */
  push32(0x1047042du); f_10470a00();
  /* 1047042d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10470430 jmp 0x10470948 */
  goto L_10470948;
L_10470435:;
  /* 10470435 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10470438 push ecx */
  push32((uint32_t)(ECX));
  /* 10470439 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047043c push edx */
  push32((uint32_t)(EDX));
  /* 1047043d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10470440 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 10470443 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10470446 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 1047044a push eax */
  push32((uint32_t)(EAX));
  /* 1047044b call 0x10470a00 */
  push32(0x10470450u); f_10470a00();
  /* 10470450 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10470453 jmp 0x10470948 */
  goto L_10470948;
L_10470458:;
  /* 10470458 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1047045b push ecx */
  push32((uint32_t)(ECX));
  /* 1047045c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047045f push edx */
  push32((uint32_t)(EDX));
  /* 10470460 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10470463 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10470466 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10470469 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 1047046d push eax */
  push32((uint32_t)(EAX));
  /* 1047046e call 0x10470a00 */
  push32(0x10470473u); f_10470a00();
  /* 10470473 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10470476 jmp 0x10470948 */
  goto L_10470948;
L_1047047b:;
  /* 1047047b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1047047e push ecx */
  push32((uint32_t)(ECX));
  /* 1047047f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10470482 push edx */
  push32((uint32_t)(EDX));
  /* 10470483 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10470486 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 10470489 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1047048c mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 10470490 push eax */
  push32((uint32_t)(EAX));
  /* 10470491 call 0x10470a00 */
  push32(0x10470496u); f_10470a00();
  /* 10470496 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10470499 jmp 0x10470948 */
  goto L_10470948;
L_1047049e:;
  /* 1047049e cmp dword ptr [0x1048e7e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e7e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104704a5 je 0x10470526 */
  if (C.zf) goto L_10470526;
  /* 104704a7 mov dword ptr [0x1048e7e8], 0 */
  w32((uint32_t)(0x1048e7e8), (0x0u));
  /* 104704b1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104704b4 push ecx */
  push32((uint32_t)(ECX));
  /* 104704b5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104704b8 push edx */
  push32((uint32_t)(EDX));
  /* 104704b9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104704bc push eax */
  push32((uint32_t)(EAX));
  /* 104704bd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104704c0 push ecx */
  push32((uint32_t)(ECX));
  /* 104704c1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104704c4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 104704ca push eax */
  push32((uint32_t)(EAX));
  /* 104704cb call 0x10470bb0 */
  push32(0x104704d0u); f_10470bb0();
  /* 104704d0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104704d3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104704d6 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104704d9 jne 0x104704e0 */
  if (!C.zf) goto L_104704e0;
  /* 104704db jmp 0x10470948 */
  goto L_10470948;
L_104704e0:;
  /* 104704e0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104704e3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 104704e5 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 104704e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104704eb mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104704ed add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104704f0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104704f3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 104704f5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104704f8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 104704fa sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104704fd mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10470500 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10470502 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10470505 push ecx */
  push32((uint32_t)(ECX));
  /* 10470506 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10470509 push edx */
  push32((uint32_t)(EDX));
  /* 1047050a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047050d push eax */
  push32((uint32_t)(EAX));
  /* 1047050e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10470511 push ecx */
  push32((uint32_t)(ECX));
  /* 10470512 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10470515 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 1047051b push eax */
  push32((uint32_t)(EAX));
  /* 1047051c call 0x10470bb0 */
  push32(0x10470521u); f_10470bb0();
  /* 10470521 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10470524 jmp 0x10470599 */
  goto L_10470599;
L_10470526:;
  /* 10470526 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10470529 push ecx */
  push32((uint32_t)(ECX));
  /* 1047052a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1047052d push edx */
  push32((uint32_t)(EDX));
  /* 1047052e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10470531 push eax */
  push32((uint32_t)(EAX));
  /* 10470532 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10470535 push ecx */
  push32((uint32_t)(ECX));
  /* 10470536 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10470539 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1047053f push eax */
  push32((uint32_t)(EAX));
  /* 10470540 call 0x10470bb0 */
  push32(0x10470545u); f_10470bb0();
  /* 10470545 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10470548 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1047054b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047054e jne 0x10470555 */
  if (!C.zf) goto L_10470555;
  /* 10470550 jmp 0x10470948 */
  goto L_10470948;
L_10470555:;
  /* 10470555 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10470558 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1047055a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 1047055d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10470560 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10470562 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10470565 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10470568 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1047056a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1047056d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1047056f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10470572 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10470575 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10470577 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1047057a push ecx */
  push32((uint32_t)(ECX));
  /* 1047057b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1047057e push edx */
  push32((uint32_t)(EDX));
  /* 1047057f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10470582 push eax */
  push32((uint32_t)(EAX));
  /* 10470583 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10470586 push ecx */
  push32((uint32_t)(ECX));
  /* 10470587 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1047058a mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 10470590 push eax */
  push32((uint32_t)(EAX));
  /* 10470591 call 0x10470bb0 */
  push32(0x10470596u); f_10470bb0();
  /* 10470596 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10470599:;
  /* 10470599 jmp 0x10470948 */
  goto L_10470948;
L_1047059e:;
  /* 1047059e mov ecx, dword ptr [0x1048e7e8] */
  ECX = (r32((uint32_t)(0x1048e7e8)));
  /* 104705a4 mov dword ptr [0x1048e7f8], ecx */
  w32((uint32_t)(0x1048e7f8), (ECX));
  /* 104705aa mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104705ad push edx */
  push32((uint32_t)(EDX));
  /* 104705ae mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104705b1 push eax */
  push32((uint32_t)(EAX));
  /* 104705b2 push 2 */
  push32((uint32_t)(0x2u));
  /* 104705b4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104705b7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 104705ba push edx */
  push32((uint32_t)(EDX));
  /* 104705bb call 0x10470a50 */
  push32(0x104705c0u); f_10470a50();
  /* 104705c0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104705c3 jmp 0x10470948 */
  goto L_10470948;
L_104705c8:;
  /* 104705c8 mov eax, dword ptr [0x1048e7e8] */
  EAX = (r32((uint32_t)(0x1048e7e8)));
  /* 104705cd mov dword ptr [0x1048e7f8], eax */
  w32((uint32_t)(0x1048e7f8), (EAX));
  /* 104705d2 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104705d5 push ecx */
  push32((uint32_t)(ECX));
  /* 104705d6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104705d9 push edx */
  push32((uint32_t)(EDX));
  /* 104705da push 2 */
  push32((uint32_t)(0x2u));
  /* 104705dc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104705df mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 104705e2 push ecx */
  push32((uint32_t)(ECX));
  /* 104705e3 call 0x10470a50 */
  push32(0x104705e8u); f_10470a50();
  /* 104705e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104705eb jmp 0x10470948 */
  goto L_10470948;
L_104705f0:;
  /* 104705f0 mov edx, dword ptr [0x1048e7e8] */
  EDX = (r32((uint32_t)(0x1048e7e8)));
  /* 104705f6 mov dword ptr [0x1048e7f8], edx */
  w32((uint32_t)(0x1048e7f8), (EDX));
  /* 104705fc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104705ff mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 10470602 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10470603 mov ecx, 0xc */
  ECX = (0xcu);
  /* 10470608 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1047060a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1047060d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10470611 jne 0x1047061a */
  if (!C.zf) goto L_1047061a;
  /* 10470613 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_1047061a:;
  /* 1047061a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1047061d push edx */
  push32((uint32_t)(EDX));
  /* 1047061e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10470621 push eax */
  push32((uint32_t)(EAX));
  /* 10470622 push 2 */
  push32((uint32_t)(0x2u));
  /* 10470624 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10470627 push ecx */
  push32((uint32_t)(ECX));
  /* 10470628 call 0x10470a50 */
  push32(0x1047062du); f_10470a50();
  /* 1047062d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10470630 jmp 0x10470948 */
  goto L_10470948;
L_10470635:;
  /* 10470635 mov edx, dword ptr [0x1048e7e8] */
  EDX = (r32((uint32_t)(0x1048e7e8)));
  /* 1047063b mov dword ptr [0x1048e7f8], edx */
  w32((uint32_t)(0x1048e7f8), (EDX));
  /* 10470641 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10470644 push eax */
  push32((uint32_t)(EAX));
  /* 10470645 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10470648 push ecx */
  push32((uint32_t)(ECX));
  /* 10470649 push 3 */
  push32((uint32_t)(0x3u));
  /* 1047064b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047064e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 10470651 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10470654 push eax */
  push32((uint32_t)(EAX));
  /* 10470655 call 0x10470a50 */
  push32(0x1047065au); f_10470a50();
  /* 1047065a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047065d jmp 0x10470948 */
  goto L_10470948;
L_10470662:;
  /* 10470662 mov ecx, dword ptr [0x1048e7e8] */
  ECX = (r32((uint32_t)(0x1048e7e8)));
  /* 10470668 mov dword ptr [0x1048e7f8], ecx */
  w32((uint32_t)(0x1048e7f8), (ECX));
  /* 1047066e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10470671 push edx */
  push32((uint32_t)(EDX));
  /* 10470672 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10470675 push eax */
  push32((uint32_t)(EAX));
  /* 10470676 push 2 */
  push32((uint32_t)(0x2u));
  /* 10470678 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047067b mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1047067e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10470681 push edx */
  push32((uint32_t)(EDX));
  /* 10470682 call 0x10470a50 */
  push32(0x10470687u); f_10470a50();
  /* 10470687 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047068a jmp 0x10470948 */
  goto L_10470948;
L_1047068f:;
  /* 1047068f mov eax, dword ptr [0x1048e7e8] */
  EAX = (r32((uint32_t)(0x1048e7e8)));
  /* 10470694 mov dword ptr [0x1048e7f8], eax */
  w32((uint32_t)(0x1048e7f8), (EAX));
  /* 10470699 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1047069c push ecx */
  push32((uint32_t)(ECX));
  /* 1047069d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104706a0 push edx */
  push32((uint32_t)(EDX));
  /* 104706a1 push 2 */
  push32((uint32_t)(0x2u));
  /* 104706a3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104706a6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 104706a9 push ecx */
  push32((uint32_t)(ECX));
  /* 104706aa call 0x10470a50 */
  push32(0x104706afu); f_10470a50();
  /* 104706af add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104706b2 jmp 0x10470948 */
  goto L_10470948;
L_104706b7:;
  /* 104706b7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104706ba cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104706be jg 0x104706dc */
  if ((!C.zf&&C.sf==C.of)) goto L_104706dc;
  /* 104706c0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104706c3 push eax */
  push32((uint32_t)(EAX));
  /* 104706c4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104706c7 push ecx */
  push32((uint32_t)(ECX));
  /* 104706c8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104706cb mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 104706d1 push eax */
  push32((uint32_t)(EAX));
  /* 104706d2 call 0x10470a00 */
  push32(0x104706d7u); f_10470a00();
  /* 104706d7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104706da jmp 0x104706f6 */
  goto L_104706f6;
L_104706dc:;
  /* 104706dc mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 104706df push ecx */
  push32((uint32_t)(ECX));
  /* 104706e0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104706e3 push edx */
  push32((uint32_t)(EDX));
  /* 104706e4 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104706e7 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 104706ed push ecx */
  push32((uint32_t)(ECX));
  /* 104706ee call 0x10470a00 */
  push32(0x104706f3u); f_10470a00();
  /* 104706f3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104706f6:;
  /* 104706f6 jmp 0x10470948 */
  goto L_10470948;
L_104706fb:;
  /* 104706fb mov edx, dword ptr [0x1048e7e8] */
  EDX = (r32((uint32_t)(0x1048e7e8)));
  /* 10470701 mov dword ptr [0x1048e7f8], edx */
  w32((uint32_t)(0x1048e7f8), (EDX));
  /* 10470707 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1047070a push eax */
  push32((uint32_t)(EAX));
  /* 1047070b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047070e push ecx */
  push32((uint32_t)(ECX));
  /* 1047070f push 2 */
  push32((uint32_t)(0x2u));
  /* 10470711 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10470714 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10470716 push eax */
  push32((uint32_t)(EAX));
  /* 10470717 call 0x10470a50 */
  push32(0x1047071cu); f_10470a50();
  /* 1047071c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047071f jmp 0x10470948 */
  goto L_10470948;
L_10470724:;
  /* 10470724 mov ecx, dword ptr [0x1048e7e8] */
  ECX = (r32((uint32_t)(0x1048e7e8)));
  /* 1047072a mov dword ptr [0x1048e7f8], ecx */
  w32((uint32_t)(0x1048e7f8), (ECX));
  /* 10470730 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10470733 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10470736 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10470739 jmp 0x1047078d */
  goto L_1047078d;
L_1047073b:;
  /* 1047073b mov ecx, dword ptr [0x1048e7e8] */
  ECX = (r32((uint32_t)(0x1048e7e8)));
  /* 10470741 mov dword ptr [0x1048e7f8], ecx */
  w32((uint32_t)(0x1048e7f8), (ECX));
  /* 10470747 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1047074a push edx */
  push32((uint32_t)(EDX));
  /* 1047074b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047074e push eax */
  push32((uint32_t)(EAX));
  /* 1047074f push 1 */
  push32((uint32_t)(0x1u));
  /* 10470751 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10470754 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 10470757 push edx */
  push32((uint32_t)(EDX));
  /* 10470758 call 0x10470a50 */
  push32(0x1047075du); f_10470a50();
  /* 1047075d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10470760 jmp 0x10470948 */
  goto L_10470948;
L_10470765:;
  /* 10470765 mov eax, dword ptr [0x1048e7e8] */
  EAX = (r32((uint32_t)(0x1048e7e8)));
  /* 1047076a mov dword ptr [0x1048e7f8], eax */
  w32((uint32_t)(0x1048e7f8), (EAX));
  /* 1047076f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10470772 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10470776 jne 0x10470781 */
  if (!C.zf) goto L_10470781;
  /* 10470778 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 1047077f jmp 0x1047078d */
  goto L_1047078d;
L_10470781:;
  /* 10470781 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10470784 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 10470787 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047078a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1047078d:;
  /* 1047078d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10470790 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10470793 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10470796 jge 0x104707a1 */
  if ((C.sf==C.of)) goto L_104707a1;
  /* 10470798 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1047079f jmp 0x104707ce */
  goto L_104707ce;
L_104707a1:;
  /* 104707a1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104707a4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 104707a7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104707a8 mov ecx, 7 */
  ECX = (0x7u);
  /* 104707ad idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104707af mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104707b2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104707b5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 104707b8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104707b9 mov ecx, 7 */
  ECX = (0x7u);
  /* 104707be idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104707c0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104707c3 jl 0x104707ce */
  if ((C.sf!=C.of)) goto L_104707ce;
  /* 104707c5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104707c8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104707cb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_104707ce:;
  /* 104707ce mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104707d1 push eax */
  push32((uint32_t)(EAX));
  /* 104707d2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104707d5 push ecx */
  push32((uint32_t)(ECX));
  /* 104707d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 104707d8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104707db push edx */
  push32((uint32_t)(EDX));
  /* 104707dc call 0x10470a50 */
  push32(0x104707e1u); f_10470a50();
  /* 104707e1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104707e4 jmp 0x10470948 */
  goto L_10470948;
L_104707e9:;
  /* 104707e9 cmp dword ptr [0x1048e7e8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e7e8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104707f0 je 0x10470820 */
  if (C.zf) goto L_10470820;
  /* 104707f2 mov dword ptr [0x1048e7e8], 0 */
  w32((uint32_t)(0x1048e7e8), (0x0u));
  /* 104707fc mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104707ff push eax */
  push32((uint32_t)(EAX));
  /* 10470800 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10470803 push ecx */
  push32((uint32_t)(ECX));
  /* 10470804 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10470807 push edx */
  push32((uint32_t)(EDX));
  /* 10470808 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047080b push eax */
  push32((uint32_t)(EAX));
  /* 1047080c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1047080f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 10470815 push edx */
  push32((uint32_t)(EDX));
  /* 10470816 call 0x10470bb0 */
  push32(0x1047081bu); f_10470bb0();
  /* 1047081b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047081e jmp 0x10470842 */
  goto L_10470842;
L_10470820:;
  /* 10470820 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10470823 push eax */
  push32((uint32_t)(EAX));
  /* 10470824 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10470827 push ecx */
  push32((uint32_t)(ECX));
  /* 10470828 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047082b push edx */
  push32((uint32_t)(EDX));
  /* 1047082c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047082f push eax */
  push32((uint32_t)(EAX));
  /* 10470830 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10470833 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 10470839 push edx */
  push32((uint32_t)(EDX));
  /* 1047083a call 0x10470bb0 */
  push32(0x1047083fu); f_10470bb0();
  /* 1047083f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10470842:;
  /* 10470842 jmp 0x10470948 */
  goto L_10470948;
L_10470847:;
  /* 10470847 mov dword ptr [0x1048e7e8], 0 */
  w32((uint32_t)(0x1048e7e8), (0x0u));
  /* 10470851 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10470854 push eax */
  push32((uint32_t)(EAX));
  /* 10470855 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10470858 push ecx */
  push32((uint32_t)(ECX));
  /* 10470859 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047085c push edx */
  push32((uint32_t)(EDX));
  /* 1047085d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10470860 push eax */
  push32((uint32_t)(EAX));
  /* 10470861 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 10470864 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 1047086a push edx */
  push32((uint32_t)(EDX));
  /* 1047086b call 0x10470bb0 */
  push32(0x10470870u); f_10470bb0();
  /* 10470870 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10470873 jmp 0x10470948 */
  goto L_10470948;
L_10470878:;
  /* 10470878 mov eax, dword ptr [0x1048e7e8] */
  EAX = (r32((uint32_t)(0x1048e7e8)));
  /* 1047087d mov dword ptr [0x1048e7f8], eax */
  w32((uint32_t)(0x1048e7f8), (EAX));
  /* 10470882 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10470885 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 10470888 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10470889 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 1047088e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10470890 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10470893 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10470896 push edx */
  push32((uint32_t)(EDX));
  /* 10470897 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047089a push eax */
  push32((uint32_t)(EAX));
  /* 1047089b push 2 */
  push32((uint32_t)(0x2u));
  /* 1047089d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104708a0 push ecx */
  push32((uint32_t)(ECX));
  /* 104708a1 call 0x10470a50 */
  push32(0x104708a6u); f_10470a50();
  /* 104708a6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104708a9 jmp 0x10470948 */
  goto L_10470948;
L_104708ae:;
  /* 104708ae mov edx, dword ptr [0x1048e7e8] */
  EDX = (r32((uint32_t)(0x1048e7e8)));
  /* 104708b4 mov dword ptr [0x1048e7f8], edx */
  w32((uint32_t)(0x1048e7f8), (EDX));
  /* 104708ba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104708bd mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 104708c0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104708c1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 104708c6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104708c8 mov ecx, eax */
  ECX = (EAX);
  /* 104708ca add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104708cd imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104708d0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104708d3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 104708d6 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104708d7 mov esi, 0x64 */
  ESI = (0x64u);
  /* 104708dc idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104708de add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104708e0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104708e3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104708e6 push eax */
  push32((uint32_t)(EAX));
  /* 104708e7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104708ea push ecx */
  push32((uint32_t)(ECX));
  /* 104708eb push 4 */
  push32((uint32_t)(0x4u));
  /* 104708ed mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104708f0 push edx */
  push32((uint32_t)(EDX));
  /* 104708f1 call 0x10470a50 */
  push32(0x104708f6u); f_10470a50();
  /* 104708f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104708f9 jmp 0x10470948 */
  goto L_10470948;
L_104708fb:;
  /* 104708fb call 0x10471a10 */
  push32(0x10470900u); f_10471a10();
  /* 10470900 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10470903 push eax */
  push32((uint32_t)(EAX));
  /* 10470904 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10470907 push ecx */
  push32((uint32_t)(ECX));
  /* 10470908 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047090b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047090d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10470911 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 10470914 mov ecx, dword ptr [eax*4 + 0x1048de1c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1048de1c)));
  /* 1047091b push ecx */
  push32((uint32_t)(ECX));
  /* 1047091c call 0x10470a00 */
  push32(0x10470921u); f_10470a00();
  /* 10470921 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10470924 jmp 0x10470948 */
  goto L_10470948;
L_10470926:;
  /* 10470926 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10470929 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1047092b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 1047092e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10470931 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10470933 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10470936 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10470939 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1047093b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1047093e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10470940 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10470943 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10470946 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10470948:;
  /* 10470948 pop esi */
  ESI = (pop32());
  /* 10470949 mov esp, ebp */
  ESP = (EBP);
  /* 1047094b pop ebp */
  EBP = (pop32());
  /* 1047094c ret  */
  ESPCHK(0x104703e0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x10470a00 (72 bytes, 30 insns) */
void f_10470a00(void) {
  FTRACE(0x10470a00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10470a00 push ebp */
  push32((uint32_t)(EBP));
  /* 10470a01 mov ebp, esp */
  EBP = (ESP);
L_10470a03:;
  /* 10470a03 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10470a06 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10470a09 je 0x10470a46 */
  if (C.zf) goto L_10470a46;
  /* 10470a0b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10470a0e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10470a11 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10470a13 je 0x10470a46 */
  if (C.zf) goto L_10470a46;
  /* 10470a15 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10470a18 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10470a1a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10470a1d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10470a1f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10470a21 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10470a24 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10470a26 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10470a29 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10470a2c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10470a2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10470a31 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10470a34 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10470a37 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10470a3a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10470a3c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10470a3f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10470a42 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10470a44 jmp 0x10470a03 */
  goto L_10470a03;
L_10470a46:;
  /* 10470a46 pop ebp */
  EBP = (pop32());
  /* 10470a47 ret  */
  ESPCHK(0x10470a00u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a50 @ 0x10470a50 (173 bytes, 64 insns) */
void f_10470a50(void) {
  FTRACE(0x10470a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10470a50 push ebp */
  push32((uint32_t)(EBP));
  /* 10470a51 mov ebp, esp */
  EBP = (ESP);
  /* 10470a53 push ecx */
  push32((uint32_t)(ECX));
  /* 10470a54 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10470a5b cmp dword ptr [0x1048e7f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e7f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10470a62 je 0x10470a7a */
  if (C.zf) goto L_10470a7a;
  /* 10470a64 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10470a67 push eax */
  push32((uint32_t)(EAX));
  /* 10470a68 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10470a6b push ecx */
  push32((uint32_t)(ECX));
  /* 10470a6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10470a6f push edx */
  push32((uint32_t)(EDX));
  /* 10470a70 call 0x10470b00 */
  push32(0x10470a75u); f_10470b00();
  /* 10470a75 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10470a78 jmp 0x10470af9 */
  goto L_10470af9;
L_10470a7a:;
  /* 10470a7a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10470a7d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10470a80 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10470a82 jae 0x10470af0 */
  if (!C.cf) goto L_10470af0;
  /* 10470a84 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10470a87 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10470a8a mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 10470a8d jmp 0x10470a98 */
  goto L_10470a98;
L_10470a8f:;
  /* 10470a8f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10470a92 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10470a95 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_10470a98:;
  /* 10470a98 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10470a9b add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10470a9e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10470aa0 je 0x10470ad4 */
  if (C.zf) goto L_10470ad4;
  /* 10470aa2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10470aa5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10470aa6 mov ecx, 0xa */
  ECX = (0xau);
  /* 10470aab idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10470aad add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10470ab0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10470ab3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10470ab5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10470ab8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 10470abb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10470abe cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10470abf mov ecx, 0xa */
  ECX = (0xau);
  /* 10470ac4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10470ac6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10470ac9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10470acc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10470acf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10470ad2 jmp 0x10470a8f */
  goto L_10470a8f;
L_10470ad4:;
  /* 10470ad4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10470ad7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10470ad9 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10470adc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10470adf mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10470ae1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10470ae4 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10470ae6 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10470ae9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10470aec mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10470aee jmp 0x10470af9 */
  goto L_10470af9;
L_10470af0:;
  /* 10470af0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10470af3 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10470af9:;
  /* 10470af9 mov esp, ebp */
  ESP = (EBP);
  /* 10470afb pop ebp */
  EBP = (pop32());
  /* 10470afc ret  */
  ESPCHK(0x10470a50u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x10470b00 (172 bytes, 65 insns) */
void f_10470b00(void) {
  FTRACE(0x10470b00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10470b00 push ebp */
  push32((uint32_t)(EBP));
  /* 10470b01 mov ebp, esp */
  EBP = (ESP);
  /* 10470b03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10470b06 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10470b09 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10470b0b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10470b0e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10470b11 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10470b14 jbe 0x10470b5b */
  if ((C.cf||C.zf)) goto L_10470b5b;
L_10470b16:;
  /* 10470b16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10470b19 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10470b1a mov ecx, 0xa */
  ECX = (0xau);
  /* 10470b1f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10470b21 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10470b24 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10470b27 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10470b29 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10470b2c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10470b2f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10470b32 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10470b35 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10470b37 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10470b3a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10470b3d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10470b3f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10470b42 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10470b43 mov ecx, 0xa */
  ECX = (0xau);
  /* 10470b48 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10470b4a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10470b4d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10470b51 jle 0x10470b5b */
  if ((C.zf||C.sf!=C.of)) goto L_10470b5b;
  /* 10470b53 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10470b56 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10470b59 ja 0x10470b16 */
  if ((!C.cf&&!C.zf)) goto L_10470b16;
L_10470b5b:;
  /* 10470b5b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10470b5e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10470b60 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10470b63 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10470b66 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10470b69 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 10470b6b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10470b6e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10470b71 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10470b74:;
  /* 10470b74 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10470b77 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10470b79 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 10470b7c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10470b7f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10470b82 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10470b84 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10470b86 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10470b89 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10470b8c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10470b8f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10470b92 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 10470b95 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 10470b97 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10470b9a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10470b9d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10470ba0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10470ba3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10470ba6 jb 0x10470b74 */
  if (C.cf) goto L_10470b74;
  /* 10470ba8 mov esp, ebp */
  ESP = (EBP);
  /* 10470baa pop ebp */
  EBP = (pop32());
  /* 10470bab ret  */
  ESPCHK(0x10470b00u, _esp0);
  ESP += 4; return;
}

/* FUN_10010bb0 @ 0x10470bb0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_10470bb0(void) {
  FTRACE(0x10470bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10470bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10470bb1 mov ebp, esp */
  EBP = (ESP);
  /* 10470bb3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_10470bb6:;
  /* 10470bb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10470bb9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10470bbc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10470bbe je 0x1047102c */
  if (C.zf) goto L_1047102c;
  /* 10470bc4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10470bc7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10470bca je 0x1047102c */
  if (C.zf) goto L_1047102c;
  /* 10470bd0 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 10470bd4 mov dword ptr [0x1048e7f8], 0 */
  w32((uint32_t)(0x1048e7f8), (0x0u));
  /* 10470bde mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10470be5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10470be8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10470beb jmp 0x10470bf6 */
  goto L_10470bf6;
L_10470bed:;
  /* 10470bed mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10470bf0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10470bf3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10470bf6:;
  /* 10470bf6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10470bf9 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10470bfc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10470bff movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10470c02 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10470c05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10470c08 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10470c0b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10470c0d jne 0x10470c11 */
  if (!C.zf) goto L_10470c11;
  /* 10470c0f jmp 0x10470bed */
  goto L_10470bed;
L_10470c11:;
  /* 10470c11 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10470c14 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10470c17 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10470c1a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10470c1d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10470c20 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10470c23 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 10470c26 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10470c29 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 10470c2c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10470c30 ja 0x10470f80 */
  if ((!C.cf&&!C.zf)) goto L_10470f80;
  /* 10470c36 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10470c39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10470c3b mov al, byte ptr [ecx + 0x1047105c] */
  AL = (r8((uint32_t)(ECX + 0x1047105c)));
  /* 10470c41 jmp dword ptr [eax*4 + 0x10471030] */
  switch (EAX) {
    case 0: goto L_10470e9f;
    case 1: goto L_10470d83;
    case 2: goto L_10470d0e;
    case 3: goto L_10470c48;
    case 4: goto L_10470c86;
    case 5: goto L_10470ce7;
    case 6: goto L_10470d35;
    case 7: goto L_10470d5c;
    case 8: goto L_10470dca;
    case 9: goto L_10470cc4;
    case 10: goto L_10470f80;
    default: x86_unimpl("switch@0x10470c41 out of table"); return;
  }
L_10470c48:;
  /* 10470c48 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10470c4b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 10470c4e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10470c51 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10470c54 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10470c57 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10470c5b ja 0x10470c81 */
  if ((!C.cf&&!C.zf)) goto L_10470c81;
  /* 10470c5d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 10470c60 jmp dword ptr [ecx*4 + 0x104710af] */
  switch (ECX) {
    case 0: goto L_10470c67;
    case 1: goto L_10470c71;
    case 2: goto L_10470c77;
    case 3: goto L_10470c7d;
    case 4: goto L_10470ca5;
    case 5: goto L_10470caf;
    case 6: goto L_10470cb5;
    case 7: goto L_10470cbb;
    default: x86_unimpl("switch@0x10470c60 out of table"); return;
  }
L_10470c67:;
  /* 10470c67 mov dword ptr [0x1048e7f8], 1 */
  w32((uint32_t)(0x1048e7f8), (0x1u));
L_10470c71:;
  /* 10470c71 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 10470c75 jmp 0x10470c81 */
  goto L_10470c81;
L_10470c77:;
  /* 10470c77 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 10470c7b jmp 0x10470c81 */
  goto L_10470c81;
L_10470c7d:;
  /* 10470c7d mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_10470c81:;
  /* 10470c81 jmp 0x10470f80 */
  goto L_10470f80;
L_10470c86:;
  /* 10470c86 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10470c89 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 10470c8c mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10470c8f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10470c92 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10470c95 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10470c99 ja 0x10470cbf */
  if ((!C.cf&&!C.zf)) goto L_10470cbf;
  /* 10470c9b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10470c9e jmp dword ptr [ecx*4 + 0x104710bf] */
  switch (ECX) {
    case 0: goto L_10470ca5;
    case 1: goto L_10470caf;
    case 2: goto L_10470cb5;
    case 3: goto L_10470cbb;
    default: x86_unimpl("switch@0x10470c9e out of table"); return;
  }
L_10470ca5:;
  /* 10470ca5 mov dword ptr [0x1048e7f8], 1 */
  w32((uint32_t)(0x1048e7f8), (0x1u));
L_10470caf:;
  /* 10470caf mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 10470cb3 jmp 0x10470cbf */
  goto L_10470cbf;
L_10470cb5:;
  /* 10470cb5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 10470cb9 jmp 0x10470cbf */
  goto L_10470cbf;
L_10470cbb:;
  /* 10470cbb mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_10470cbf:;
  /* 10470cbf jmp 0x10470f80 */
  goto L_10470f80;
L_10470cc4:;
  /* 10470cc4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10470cc7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 10470cca cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10470cce je 0x10470cd8 */
  if (C.zf) goto L_10470cd8;
  /* 10470cd0 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10470cd4 je 0x10470cde */
  if (C.zf) goto L_10470cde;
  /* 10470cd6 jmp 0x10470ce2 */
  goto L_10470ce2;
L_10470cd8:;
  /* 10470cd8 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 10470cdc jmp 0x10470ce2 */
  goto L_10470ce2;
L_10470cde:;
  /* 10470cde mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_10470ce2:;
  /* 10470ce2 jmp 0x10470f80 */
  goto L_10470f80;
L_10470ce7:;
  /* 10470ce7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10470cea mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10470ced cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10470cf1 je 0x10470cfb */
  if (C.zf) goto L_10470cfb;
  /* 10470cf3 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10470cf7 je 0x10470d05 */
  if (C.zf) goto L_10470d05;
  /* 10470cf9 jmp 0x10470d09 */
  goto L_10470d09;
L_10470cfb:;
  /* 10470cfb mov dword ptr [0x1048e7f8], 1 */
  w32((uint32_t)(0x1048e7f8), (0x1u));
L_10470d05:;
  /* 10470d05 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_10470d09:;
  /* 10470d09 jmp 0x10470f80 */
  goto L_10470f80;
L_10470d0e:;
  /* 10470d0e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10470d11 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10470d14 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10470d18 je 0x10470d22 */
  if (C.zf) goto L_10470d22;
  /* 10470d1a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10470d1e je 0x10470d2c */
  if (C.zf) goto L_10470d2c;
  /* 10470d20 jmp 0x10470d30 */
  goto L_10470d30;
L_10470d22:;
  /* 10470d22 mov dword ptr [0x1048e7f8], 1 */
  w32((uint32_t)(0x1048e7f8), (0x1u));
L_10470d2c:;
  /* 10470d2c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_10470d30:;
  /* 10470d30 jmp 0x10470f80 */
  goto L_10470f80;
L_10470d35:;
  /* 10470d35 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10470d38 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 10470d3b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10470d3f je 0x10470d49 */
  if (C.zf) goto L_10470d49;
  /* 10470d41 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10470d45 je 0x10470d53 */
  if (C.zf) goto L_10470d53;
  /* 10470d47 jmp 0x10470d57 */
  goto L_10470d57;
L_10470d49:;
  /* 10470d49 mov dword ptr [0x1048e7f8], 1 */
  w32((uint32_t)(0x1048e7f8), (0x1u));
L_10470d53:;
  /* 10470d53 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_10470d57:;
  /* 10470d57 jmp 0x10470f80 */
  goto L_10470f80;
L_10470d5c:;
  /* 10470d5c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10470d5f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 10470d62 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10470d66 je 0x10470d70 */
  if (C.zf) goto L_10470d70;
  /* 10470d68 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10470d6c je 0x10470d7a */
  if (C.zf) goto L_10470d7a;
  /* 10470d6e jmp 0x10470d7e */
  goto L_10470d7e;
L_10470d70:;
  /* 10470d70 mov dword ptr [0x1048e7f8], 1 */
  w32((uint32_t)(0x1048e7f8), (0x1u));
L_10470d7a:;
  /* 10470d7a mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_10470d7e:;
  /* 10470d7e jmp 0x10470f80 */
  goto L_10470f80;
L_10470d83:;
  /* 10470d83 push 0x1048a85c */
  push32((uint32_t)(0x1048a85cu));
  /* 10470d88 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10470d8b push ecx */
  push32((uint32_t)(ECX));
  /* 10470d8c call 0x104715e0 */
  push32(0x10470d91u); f_104715e0();
  /* 10470d91 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10470d94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10470d96 jne 0x10470da3 */
  if (!C.zf) goto L_10470da3;
  /* 10470d98 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10470d9b add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10470d9e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10470da1 jmp 0x10470dc1 */
  goto L_10470dc1;
L_10470da3:;
  /* 10470da3 push 0x1048a858 */
  push32((uint32_t)(0x1048a858u));
  /* 10470da8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10470dab push eax */
  push32((uint32_t)(EAX));
  /* 10470dac call 0x104715e0 */
  push32(0x10470db1u); f_104715e0();
  /* 10470db1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10470db4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10470db6 jne 0x10470dc1 */
  if (!C.zf) goto L_10470dc1;
  /* 10470db8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10470dbb add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10470dbe mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10470dc1:;
  /* 10470dc1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 10470dc5 jmp 0x10470f80 */
  goto L_10470f80;
L_10470dca:;
  /* 10470dca mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10470dcd cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10470dd1 jg 0x10470de1 */
  if ((!C.zf&&C.sf==C.of)) goto L_10470de1;
  /* 10470dd3 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10470dd6 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 10470ddc mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10470ddf jmp 0x10470ded */
  goto L_10470ded;
L_10470de1:;
  /* 10470de1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10470de4 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 10470dea mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_10470ded:;
  /* 10470ded cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10470df1 jle 0x10470e94 */
  if ((C.zf||C.sf!=C.of)) goto L_10470e94;
  /* 10470df7 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10470dfa cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10470dfd jbe 0x10470e94 */
  if ((C.cf||C.zf)) goto L_10470e94;
  /* 10470e03 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10470e06 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10470e08 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10470e0a mov ecx, dword ptr [0x1048cc98] */
  ECX = (r32((uint32_t)(0x1048cc98)));
  /* 10470e10 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10470e12 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10470e16 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10470e1c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10470e1e je 0x10470e57 */
  if (C.zf) goto L_10470e57;
  /* 10470e20 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10470e23 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10470e26 jbe 0x10470e57 */
  if ((C.cf||C.zf)) goto L_10470e57;
  /* 10470e28 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10470e2b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10470e2d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 10470e30 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10470e32 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10470e34 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10470e37 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10470e39 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10470e3c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10470e3f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10470e41 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10470e44 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10470e47 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 10470e4a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10470e4d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10470e4f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10470e52 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10470e55 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_10470e57:;
  /* 10470e57 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10470e5a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10470e5c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 10470e5f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10470e61 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10470e63 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10470e66 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10470e68 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10470e6b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10470e6e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10470e70 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10470e73 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10470e76 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 10470e79 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10470e7c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10470e7e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10470e81 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10470e84 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10470e86 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10470e89 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10470e8c mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10470e8f jmp 0x10470ded */
  goto L_10470ded;
L_10470e94:;
  /* 10470e94 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10470e97 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10470e9a jmp 0x10470bb6 */
  goto L_10470bb6;
L_10470e9f:;
  /* 10470e9f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10470ea2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 10470ea5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10470ea7 je 0x10470f72 */
  if (C.zf) goto L_10470f72;
  /* 10470ead mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10470eb0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10470eb3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10470eb6:;
  /* 10470eb6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10470eb9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10470ebc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10470ebe je 0x10470f70 */
  if (C.zf) goto L_10470f70;
  /* 10470ec4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10470ec7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10470eca je 0x10470f70 */
  if (C.zf) goto L_10470f70;
  /* 10470ed0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10470ed3 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10470ed6 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10470ed9 jne 0x10470ee9 */
  if (!C.zf) goto L_10470ee9;
  /* 10470edb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10470ede add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10470ee1 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10470ee4 jmp 0x10470f70 */
  goto L_10470f70;
L_10470ee9:;
  /* 10470ee9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10470eec xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10470eee mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10470ef0 mov edx, dword ptr [0x1048cc98] */
  EDX = (r32((uint32_t)(0x1048cc98)));
  /* 10470ef6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10470ef8 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 10470efc and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10470f01 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10470f03 je 0x10470f3c */
  if (C.zf) goto L_10470f3c;
  /* 10470f05 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10470f08 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10470f0b jbe 0x10470f3c */
  if ((C.cf||C.zf)) goto L_10470f3c;
  /* 10470f0d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10470f10 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10470f12 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10470f15 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10470f17 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10470f19 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10470f1c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10470f1e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10470f21 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10470f24 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10470f26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10470f29 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10470f2c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10470f2f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10470f32 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10470f34 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10470f37 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10470f3a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10470f3c:;
  /* 10470f3c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10470f3f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10470f41 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10470f44 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10470f46 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 10470f48 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10470f4b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10470f4d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10470f50 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10470f53 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 10470f55 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10470f58 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10470f5b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 10470f5e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10470f61 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10470f63 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10470f66 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10470f69 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10470f6b jmp 0x10470eb6 */
  goto L_10470eb6;
L_10470f70:;
  /* 10470f70 jmp 0x10470f7b */
  goto L_10470f7b;
L_10470f72:;
  /* 10470f72 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10470f75 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10470f78 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10470f7b:;
  /* 10470f7b jmp 0x10470bb6 */
  goto L_10470bb6;
L_10470f80:;
  /* 10470f80 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 10470f84 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10470f86 je 0x10470fac */
  if (C.zf) goto L_10470fac;
  /* 10470f88 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10470f8b push edx */
  push32((uint32_t)(EDX));
  /* 10470f8c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10470f8f push eax */
  push32((uint32_t)(EAX));
  /* 10470f90 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10470f93 push ecx */
  push32((uint32_t)(ECX));
  /* 10470f94 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10470f97 push edx */
  push32((uint32_t)(EDX));
  /* 10470f98 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 10470f9b push eax */
  push32((uint32_t)(EAX));
  /* 10470f9c call 0x104703e0 */
  push32(0x10470fa1u); f_104703e0();
  /* 10470fa1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10470fa4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10470fa7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10470faa jmp 0x10471027 */
  goto L_10471027;
L_10470fac:;
  /* 10470fac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10470faf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10470fb1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10470fb3 mov ecx, dword ptr [0x1048cc98] */
  ECX = (r32((uint32_t)(0x1048cc98)));
  /* 10470fb9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10470fbb mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10470fbf and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 10470fc5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10470fc7 je 0x10470ff8 */
  if (C.zf) goto L_10470ff8;
  /* 10470fc9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10470fcc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10470fce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10470fd1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10470fd3 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10470fd5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10470fd8 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10470fda add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10470fdd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10470fe0 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 10470fe2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10470fe5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10470fe8 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 10470feb mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10470fee mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10470ff0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10470ff3 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10470ff6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_10470ff8:;
  /* 10470ff8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10470ffb mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10470ffd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10471000 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10471002 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 10471004 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10471007 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10471009 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047100c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047100f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 10471011 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10471014 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10471017 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1047101a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1047101d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1047101f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10471022 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10471025 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10471027:;
  /* 10471027 jmp 0x10470bb6 */
  goto L_10470bb6;
L_1047102c:;
  /* 1047102c mov esp, ebp */
  ESP = (EBP);
  /* 1047102e pop ebp */
  EBP = (pop32());
  /* 1047102f ret  */
  ESPCHK(0x10470bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_100110d0 @ 0x104710d0 (650 bytes, 178 insns) */
void f_104710d0(void) {
  FTRACE(0x104710d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104710d0 push ebp */
  push32((uint32_t)(EBP));
  /* 104710d1 mov ebp, esp */
  EBP = (ESP);
  /* 104710d3 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104710d9 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104710dd jne 0x10471239 */
  if (!C.zf) goto L_10471239;
  /* 104710e3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104710e6 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 104710ec lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 104710f2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104710f5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104710fc mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 10471106 push 0 */
  push32((uint32_t)(0x0u));
  /* 10471108 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 1047110e push edx */
  push32((uint32_t)(EDX));
  /* 1047110f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10471112 push eax */
  push32((uint32_t)(EAX));
  /* 10471113 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10471116 push ecx */
  push32((uint32_t)(ECX));
  /* 10471117 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047111a push edx */
  push32((uint32_t)(EDX));
  /* 1047111b call 0x104724f0 */
  push32(0x10471120u); f_104724f0();
  /* 10471120 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10471123 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10471126 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047112a jne 0x104711bf */
  if (!C.zf) goto L_104711bf;
  /* 10471130 call dword ptr [0x104902c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902c0))), 0x10471136u);
  /* 10471136 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10471139 je 0x10471140 */
  if (C.zf) goto L_10471140;
  /* 1047113b jmp 0x1047121d */
  goto L_1047121d;
L_10471140:;
  /* 10471140 push 0 */
  push32((uint32_t)(0x0u));
  /* 10471142 push 0 */
  push32((uint32_t)(0x0u));
  /* 10471144 push 0 */
  push32((uint32_t)(0x0u));
  /* 10471146 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10471149 push eax */
  push32((uint32_t)(EAX));
  /* 1047114a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047114d push ecx */
  push32((uint32_t)(ECX));
  /* 1047114e call 0x104724f0 */
  push32(0x10471153u); f_104724f0();
  /* 10471153 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10471156 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 1047115c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10471163 jne 0x1047116a */
  if (!C.zf) goto L_1047116a;
  /* 10471165 jmp 0x1047121d */
  goto L_1047121d;
L_1047116a:;
  /* 1047116a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 1047116c push 0x1048a864 */
  push32((uint32_t)(0x1048a864u));
  /* 10471171 push 2 */
  push32((uint32_t)(0x2u));
  /* 10471173 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 10471179 push edx */
  push32((uint32_t)(EDX));
  /* 1047117a call 0x10462f10 */
  push32(0x1047117fu); f_10462f10();
  /* 1047117f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10471182 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10471185 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10471189 jne 0x10471190 */
  if (!C.zf) goto L_10471190;
  /* 1047118b jmp 0x1047121d */
  goto L_1047121d;
L_10471190:;
  /* 10471190 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10471197 push 0 */
  push32((uint32_t)(0x0u));
  /* 10471199 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 1047119f push eax */
  push32((uint32_t)(EAX));
  /* 104711a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104711a3 push ecx */
  push32((uint32_t)(ECX));
  /* 104711a4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104711a7 push edx */
  push32((uint32_t)(EDX));
  /* 104711a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 104711ab push eax */
  push32((uint32_t)(EAX));
  /* 104711ac call 0x104724f0 */
  push32(0x104711b1u); f_104724f0();
  /* 104711b1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104711b4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104711b7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104711bb jne 0x104711bf */
  if (!C.zf) goto L_104711bf;
  /* 104711bd jmp 0x1047121d */
  goto L_1047121d;
L_104711bf:;
  /* 104711bf push 0x63 */
  push32((uint32_t)(0x63u));
  /* 104711c1 push 0x1048a864 */
  push32((uint32_t)(0x1048a864u));
  /* 104711c6 push 2 */
  push32((uint32_t)(0x2u));
  /* 104711c8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104711cb push ecx */
  push32((uint32_t)(ECX));
  /* 104711cc call 0x10462f10 */
  push32(0x104711d1u); f_10462f10();
  /* 104711d1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104711d4 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 104711da mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 104711dc mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 104711e2 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104711e5 jne 0x104711e9 */
  if (!C.zf) goto L_104711e9;
  /* 104711e7 jmp 0x1047121d */
  goto L_1047121d;
L_104711e9:;
  /* 104711e9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104711ec push ecx */
  push32((uint32_t)(ECX));
  /* 104711ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104711f0 push edx */
  push32((uint32_t)(EDX));
  /* 104711f1 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 104711f7 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104711f9 push ecx */
  push32((uint32_t)(ECX));
  /* 104711fa call 0x10466730 */
  push32(0x104711ffu); f_10466730();
  /* 104711ff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10471202 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10471206 je 0x10471216 */
  if (C.zf) goto L_10471216;
  /* 10471208 push 2 */
  push32((uint32_t)(0x2u));
  /* 1047120a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047120d push edx */
  push32((uint32_t)(EDX));
  /* 1047120e call 0x104639a0 */
  push32(0x10471213u); f_104639a0();
  /* 10471213 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10471216:;
  /* 10471216 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10471218 jmp 0x10471356 */
  goto L_10471356;
L_1047121d:;
  /* 1047121d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10471221 je 0x10471231 */
  if (C.zf) goto L_10471231;
  /* 10471223 push 2 */
  push32((uint32_t)(0x2u));
  /* 10471225 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10471228 push eax */
  push32((uint32_t)(EAX));
  /* 10471229 call 0x104639a0 */
  push32(0x1047122eu); f_104639a0();
  /* 1047122e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10471231:;
  /* 10471231 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10471234 jmp 0x10471356 */
  goto L_10471356;
L_10471239:;
  /* 10471239 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047123d jne 0x10471353 */
  if (!C.zf) goto L_10471353;
  /* 10471243 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 1047124d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10471250 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 10471256 push 0 */
  push32((uint32_t)(0x0u));
  /* 10471258 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 1047125e push edx */
  push32((uint32_t)(EDX));
  /* 1047125f push 0x1048e710 */
  push32((uint32_t)(0x1048e710u));
  /* 10471264 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10471267 push eax */
  push32((uint32_t)(EAX));
  /* 10471268 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047126b push ecx */
  push32((uint32_t)(ECX));
  /* 1047126c call 0x10472350 */
  push32(0x10471271u); f_10472350();
  /* 10471271 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10471274 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10471276 jne 0x10471280 */
  if (!C.zf) goto L_10471280;
  /* 10471278 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1047127b jmp 0x10471356 */
  goto L_10471356;
L_10471280:;
  /* 10471280 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10471286 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 10471289 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 10471293 jmp 0x104712a4 */
  goto L_104712a4;
L_10471295:;
  /* 10471295 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 1047129b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047129e mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_104712a4:;
  /* 104712a4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104712ab jge 0x1047134f */
  if ((C.sf==C.of)) goto L_1047134f;
  /* 104712b1 cmp dword ptr [0x1048cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1048cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104712b8 jle 0x104712eb */
  if ((C.zf||C.sf!=C.of)) goto L_104712eb;
  /* 104712ba push 4 */
  push32((uint32_t)(0x4u));
  /* 104712bc mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 104712c2 mov dl, byte ptr [ecx*2 + 0x1048e710] */
  DL = (r8((uint32_t)(ECX*2 + 0x1048e710)));
  /* 104712c9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 104712cf mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 104712d5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104712da push eax */
  push32((uint32_t)(EAX));
  /* 104712db call 0x10468f20 */
  push32(0x104712e0u); f_10468f20();
  /* 104712e0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104712e3 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 104712e9 jmp 0x1047131e */
  goto L_1047131e;
L_104712eb:;
  /* 104712eb mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 104712f1 mov dl, byte ptr [ecx*2 + 0x1048e710] */
  DL = (r8((uint32_t)(ECX*2 + 0x1048e710)));
  /* 104712f8 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 104712fe mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 10471304 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10471309 mov ecx, dword ptr [0x1048cc98] */
  ECX = (r32((uint32_t)(0x1048cc98)));
  /* 1047130f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10471311 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 10471315 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 10471318 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_1047131e:;
  /* 1047131e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10471325 je 0x10471348 */
  if (C.zf) goto L_10471348;
  /* 10471327 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 1047132d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10471330 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10471333 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 1047133a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 1047133e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 10471344 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 10471346 jmp 0x1047134a */
  goto L_1047134a;
L_10471348:;
  /* 10471348 jmp 0x1047134f */
  goto L_1047134f;
L_1047134a:;
  /* 1047134a jmp 0x10471295 */
  goto L_10471295;
L_1047134f:;
  /* 1047134f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10471351 jmp 0x10471356 */
  goto L_10471356;
L_10471353:;
  /* 10471353 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_10471356:;
  /* 10471356 mov esp, ebp */
  ESP = (EBP);
  /* 10471358 pop ebp */
  EBP = (pop32());
  /* 10471359 ret  */
  ESPCHK(0x104710d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011360 @ 0x10471360 (10 bytes, 5 insns) */
void f_10471360(void) {
  FTRACE(0x10471360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10471360 push ebp */
  push32((uint32_t)(EBP));
  /* 10471361 mov ebp, esp */
  EBP = (ESP);
  /* 10471363 mov eax, dword ptr [0x1048dd88] */
  EAX = (r32((uint32_t)(0x1048dd88)));
  /* 10471368 pop ebp */
  EBP = (pop32());
  /* 10471369 ret  */
  ESPCHK(0x10471360u, _esp0);
  ESP += 4; return;
}

/* FUN_10011370 @ 0x10471370 (575 bytes, 196 insns) */
void f_10471370(void) {
  FTRACE(0x10471370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10471370 push ebp */
  push32((uint32_t)(EBP));
  /* 10471371 mov ebp, esp */
  EBP = (ESP);
  /* 10471373 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10471375 push 0x1048a870 */
  push32((uint32_t)(0x1048a870u));
  /* 1047137a push 0x1046c018 */
  push32((uint32_t)(0x1046c018u));
  /* 1047137f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10471385 push eax */
  push32((uint32_t)(EAX));
  /* 10471386 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1047138d add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10471390 push ebx */
  push32((uint32_t)(EBX));
  /* 10471391 push esi */
  push32((uint32_t)(ESI));
  /* 10471392 push edi */
  push32((uint32_t)(EDI));
  /* 10471393 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10471396 cmp dword ptr [0x1048e71c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e71c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047139d jne 0x104713ee */
  if (!C.zf) goto L_104713ee;
  /* 1047139f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 104713a2 push eax */
  push32((uint32_t)(EAX));
  /* 104713a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 104713a5 push 0x10489fa4 */
  push32((uint32_t)(0x10489fa4u));
  /* 104713aa push 1 */
  push32((uint32_t)(0x1u));
  /* 104713ac call dword ptr [0x1049033c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1049033c))), 0x104713b2u);
  /* 104713b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104713b4 je 0x104713c2 */
  if (C.zf) goto L_104713c2;
  /* 104713b6 mov dword ptr [0x1048e71c], 1 */
  w32((uint32_t)(0x1048e71c), (0x1u));
  /* 104713c0 jmp 0x104713ee */
  goto L_104713ee;
L_104713c2:;
  /* 104713c2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 104713c5 push ecx */
  push32((uint32_t)(ECX));
  /* 104713c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 104713c8 push 0x10489fa0 */
  push32((uint32_t)(0x10489fa0u));
  /* 104713cd push 1 */
  push32((uint32_t)(0x1u));
  /* 104713cf push 0 */
  push32((uint32_t)(0x0u));
  /* 104713d1 call dword ptr [0x10490338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490338))), 0x104713d7u);
  /* 104713d7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104713d9 je 0x104713e7 */
  if (C.zf) goto L_104713e7;
  /* 104713db mov dword ptr [0x1048e71c], 2 */
  w32((uint32_t)(0x1048e71c), (0x2u));
  /* 104713e5 jmp 0x104713ee */
  goto L_104713ee;
L_104713e7:;
  /* 104713e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104713e9 jmp 0x104715c9 */
  goto L_104715c9;
L_104713ee:;
  /* 104713ee cmp dword ptr [0x1048e71c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1048e71c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104713f5 jne 0x10471412 */
  if (!C.zf) goto L_10471412;
  /* 104713f7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104713fa push edx */
  push32((uint32_t)(EDX));
  /* 104713fb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104713fe push eax */
  push32((uint32_t)(EAX));
  /* 104713ff mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10471402 push ecx */
  push32((uint32_t)(ECX));
  /* 10471403 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10471406 push edx */
  push32((uint32_t)(EDX));
  /* 10471407 call dword ptr [0x1049033c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1049033c))), 0x1047140du);
  /* 1047140d jmp 0x104715c9 */
  goto L_104715c9;
L_10471412:;
  /* 10471412 cmp dword ptr [0x1048e71c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1048e71c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10471419 jne 0x104715c7 */
  if (!C.zf) goto L_104715c7;
  /* 1047141f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10471423 jne 0x1047142d */
  if (!C.zf) goto L_1047142d;
  /* 10471425 mov eax, dword ptr [0x1048e690] */
  EAX = (r32((uint32_t)(0x1048e690)));
  /* 1047142a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_1047142d:;
  /* 1047142d push 0 */
  push32((uint32_t)(0x0u));
  /* 1047142f push 0 */
  push32((uint32_t)(0x0u));
  /* 10471431 push 0 */
  push32((uint32_t)(0x0u));
  /* 10471433 push 0 */
  push32((uint32_t)(0x0u));
  /* 10471435 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10471438 push ecx */
  push32((uint32_t)(ECX));
  /* 10471439 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047143c push edx */
  push32((uint32_t)(EDX));
  /* 1047143d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10471442 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10471445 push eax */
  push32((uint32_t)(EAX));
  /* 10471446 call dword ptr [0x104902ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902ec))), 0x1047144cu);
  /* 1047144c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1047144f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10471453 jne 0x1047145c */
  if (!C.zf) goto L_1047145c;
  /* 10471455 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10471457 jmp 0x104715c9 */
  goto L_104715c9;
L_1047145c:;
  /* 1047145c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10471463 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10471466 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10471469 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1047146b call 0x104660b0 */
  push32(0x10471470u); f_104660b0();
  /* 10471470 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 10471473 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10471476 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 10471479 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1047147c mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1047147f push edx */
  push32((uint32_t)(EDX));
  /* 10471480 push 0 */
  push32((uint32_t)(0x0u));
  /* 10471482 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 10471485 push eax */
  push32((uint32_t)(EAX));
  /* 10471486 call 0x10466c80 */
  push32(0x1047148bu); f_10466c80();
  /* 1047148b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047148e mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10471495 jmp 0x104714ae */
  goto L_104714ae;
  /* 10471497 mov eax, 1 */
  EAX = (0x1u);
  /* 1047149c ret  */
  ESPCHK(0x10471370u, _esp0);
  ESP += 4; return;
  /* 1047149d mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 104714a0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 104714a7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_104714ae:;
  /* 104714ae cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104714b2 jne 0x104714bb */
  if (!C.zf) goto L_104714bb;
  /* 104714b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104714b6 jmp 0x104715c9 */
  goto L_104715c9;
L_104714bb:;
  /* 104714bb push 0 */
  push32((uint32_t)(0x0u));
  /* 104714bd push 0 */
  push32((uint32_t)(0x0u));
  /* 104714bf mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 104714c2 push ecx */
  push32((uint32_t)(ECX));
  /* 104714c3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 104714c6 push edx */
  push32((uint32_t)(EDX));
  /* 104714c7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104714ca push eax */
  push32((uint32_t)(EAX));
  /* 104714cb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 104714ce push ecx */
  push32((uint32_t)(ECX));
  /* 104714cf push 0x220 */
  push32((uint32_t)(0x220u));
  /* 104714d4 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104714d7 push edx */
  push32((uint32_t)(EDX));
  /* 104714d8 call dword ptr [0x104902ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902ec))), 0x104714deu);
  /* 104714de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104714e0 jne 0x104714e9 */
  if (!C.zf) goto L_104714e9;
  /* 104714e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104714e4 jmp 0x104715c9 */
  goto L_104715c9;
L_104714e9:;
  /* 104714e9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 104714f0 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 104714f3 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 104714f7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104714fa and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 104714fc call 0x104660b0 */
  push32(0x10471501u); f_104660b0();
  /* 10471501 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 10471504 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10471507 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 1047150a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1047150d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10471514 jmp 0x1047152d */
  goto L_1047152d;
  /* 10471516 mov eax, 1 */
  EAX = (0x1u);
  /* 1047151b ret  */
  ESPCHK(0x10471370u, _esp0);
  ESP += 4; return;
  /* 1047151c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1047151f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10471526 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1047152d:;
  /* 1047152d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10471531 jne 0x1047153a */
  if (!C.zf) goto L_1047153a;
  /* 10471533 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10471535 jmp 0x104715c9 */
  goto L_104715c9;
L_1047153a:;
  /* 1047153a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047153e jne 0x10471549 */
  if (!C.zf) goto L_10471549;
  /* 10471540 mov edx, dword ptr [0x1048e680] */
  EDX = (r32((uint32_t)(0x1048e680)));
  /* 10471546 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_10471549:;
  /* 10471549 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047154c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1047154f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 10471555 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10471558 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1047155b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 10471562 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10471565 push ecx */
  push32((uint32_t)(ECX));
  /* 10471566 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10471569 push edx */
  push32((uint32_t)(EDX));
  /* 1047156a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1047156d push eax */
  push32((uint32_t)(EAX));
  /* 1047156e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10471571 push ecx */
  push32((uint32_t)(ECX));
  /* 10471572 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10471575 push edx */
  push32((uint32_t)(EDX));
  /* 10471576 call dword ptr [0x10490338] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490338))), 0x1047157cu);
  /* 1047157c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1047157f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10471582 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10471585 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10471587 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 1047158c cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10471592 je 0x104715a8 */
  if (C.zf) goto L_104715a8;
  /* 10471594 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10471597 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1047159a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1047159c mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 104715a0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104715a6 je 0x104715ac */
  if (C.zf) goto L_104715ac;
L_104715a8:;
  /* 104715a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104715aa jmp 0x104715c9 */
  goto L_104715c9;
L_104715ac:;
  /* 104715ac mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104715af shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 104715b1 push eax */
  push32((uint32_t)(EAX));
  /* 104715b2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 104715b5 push ecx */
  push32((uint32_t)(ECX));
  /* 104715b6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104715b9 push edx */
  push32((uint32_t)(EDX));
  /* 104715ba call 0x1046ae00 */
  push32(0x104715bfu); f_1046ae00();
  /* 104715bf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104715c2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 104715c5 jmp 0x104715c9 */
  goto L_104715c9;
L_104715c7:;
  /* 104715c7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104715c9:;
  /* 104715c9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 104715cc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104715cf mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 104715d6 pop edi */
  EDI = (pop32());
  /* 104715d7 pop esi */
  ESI = (pop32());
  /* 104715d8 pop ebx */
  EBX = (pop32());
  /* 104715d9 mov esp, ebp */
  ESP = (EBP);
  /* 104715db pop ebp */
  EBP = (pop32());
  /* 104715dc ret  */
  ESPCHK(0x10471370u, _esp0);
  ESP += 4; return;
}

/* FUN_100115e0 @ 0x104715e0 (208 bytes, 85 insns) */
void f_104715e0(void) {
  FTRACE(0x104715e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104715e0 push ebp */
  push32((uint32_t)(EBP));
  /* 104715e1 mov ebp, esp */
  EBP = (ESP);
  /* 104715e3 push edi */
  push32((uint32_t)(EDI));
  /* 104715e4 push esi */
  push32((uint32_t)(ESI));
  /* 104715e5 push ebx */
  push32((uint32_t)(EBX));
  /* 104715e6 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 104715e9 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 104715ec lea eax, [0x1048e678] */
  EAX = ((uint32_t)(0x1048e678));
  /* 104715f2 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104715f6 jne 0x10471633 */
  if (!C.zf) goto L_10471633;
  /* 104715f8 mov al, 0xff */
  AL = (0xffu);
  /* 104715fa mov edi, edi */
  EDI = (EDI);
L_104715fc:;
  /* 104715fc or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 104715fe je 0x1047162e */
  if (C.zf) goto L_1047162e;
  /* 10471600 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10471602 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10471603 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 10471605 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10471606 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10471608 je 0x104715fc */
  if (C.zf) goto L_104715fc;
  /* 1047160a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1047160c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1047160e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10471610 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10471613 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10471615 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10471617 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 10471619 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1047161b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1047161d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1047161f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 10471622 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10471624 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10471626 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10471628 je 0x104715fc */
  if (C.zf) goto L_104715fc;
  /* 1047162a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1047162c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_1047162e:;
  /* 1047162e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 10471631 jmp 0x104716ab */
  goto L_104716ab;
L_10471633:;
  /* 10471633 lock inc dword ptr [0x1048e80c] */
  x86_unimpl("lock inc @ 0x10471633");
  /* 1047163a cmp dword ptr [0x1048e7fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e7fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10471641 jg 0x10471647 */
  if ((!C.zf&&C.sf==C.of)) goto L_10471647;
  /* 10471643 push 0 */
  push32((uint32_t)(0x0u));
  /* 10471645 jmp 0x1047165c */
  goto L_1047165c;
L_10471647:;
  /* 10471647 lock dec dword ptr [0x1048e80c] */
  x86_unimpl("lock dec @ 0x10471647");
  /* 1047164e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10471650 call 0x10466910 */
  push32(0x10471655u); f_10466910();
  /* 10471655 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_1047165c:;
  /* 1047165c mov eax, 0xff */
  EAX = (0xffu);
  /* 10471661 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10471663 nop  */
  /* nop */
L_10471664:;
  /* 10471664 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 10471666 je 0x1047168f */
  if (C.zf) goto L_1047168f;
  /* 10471668 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1047166a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1047166b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1047166d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1047166e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10471670 je 0x10471664 */
  if (C.zf) goto L_10471664;
  /* 10471672 push eax */
  push32((uint32_t)(EAX));
  /* 10471673 push ebx */
  push32((uint32_t)(EBX));
  /* 10471674 call 0x10472750 */
  push32(0x10471679u); f_10472750();
  /* 10471679 mov ebx, eax */
  EBX = (EAX);
  /* 1047167b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047167e call 0x10472750 */
  push32(0x10471683u); f_10472750();
  /* 10471683 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10471686 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10471688 je 0x10471664 */
  if (C.zf) goto L_10471664;
  /* 1047168a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047168c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1047168f:;
  /* 1047168f mov ebx, eax */
  EBX = (EAX);
  /* 10471691 pop eax */
  EAX = (pop32());
  /* 10471692 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10471694 jne 0x1047169f */
  if (!C.zf) goto L_1047169f;
  /* 10471696 lock dec dword ptr [0x1048e80c] */
  x86_unimpl("lock dec @ 0x10471696");
  /* 1047169d jmp 0x104716a9 */
  goto L_104716a9;
L_1047169f:;
  /* 1047169f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 104716a1 call 0x104669b0 */
  push32(0x104716a6u); f_104669b0();
  /* 104716a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104716a9:;
  /* 104716a9 mov eax, ebx */
  EAX = (EBX);
L_104716ab:;
  /* 104716ab pop ebx */
  EBX = (pop32());
  /* 104716ac pop esi */
  ESI = (pop32());
  /* 104716ad pop edi */
  EDI = (pop32());
  /* 104716ae leave  */
  ESP = EBP;
  EBP = pop32();
  /* 104716af ret  */
  ESPCHK(0x104715e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100116b0 @ 0x104716b0 (257 bytes, 103 insns) */
void f_104716b0(void) {
  FTRACE(0x104716b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104716b0 push ebp */
  push32((uint32_t)(EBP));
  /* 104716b1 mov ebp, esp */
  EBP = (ESP);
  /* 104716b3 push edi */
  push32((uint32_t)(EDI));
  /* 104716b4 push esi */
  push32((uint32_t)(ESI));
  /* 104716b5 push ebx */
  push32((uint32_t)(EBX));
  /* 104716b6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104716b9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104716bb je 0x104717aa */
  if (C.zf) goto L_104717aa;
  /* 104716c1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 104716c4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 104716c7 lea eax, [0x1048e678] */
  EAX = ((uint32_t)(0x1048e678));
  /* 104716cd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104716d1 jne 0x10471721 */
  if (!C.zf) goto L_10471721;
  /* 104716d3 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 104716d5 mov bl, 0x5a */
  BL = (0x5au);
  /* 104716d7 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 104716d9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_104716dc:;
  /* 104716dc mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 104716de or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 104716e0 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 104716e2 je 0x10471705 */
  if (C.zf) goto L_10471705;
  /* 104716e4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 104716e6 je 0x10471705 */
  if (C.zf) goto L_10471705;
  /* 104716e8 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 104716e9 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 104716ea cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104716ec jb 0x104716f4 */
  if (C.cf) goto L_104716f4;
  /* 104716ee cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104716f0 ja 0x104716f4 */
  if ((!C.cf&&!C.zf)) goto L_104716f4;
  /* 104716f2 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_104716f4:;
  /* 104716f4 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104716f6 jb 0x104716fe */
  if (C.cf) goto L_104716fe;
  /* 104716f8 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104716fa ja 0x104716fe */
  if ((!C.cf&&!C.zf)) goto L_104716fe;
  /* 104716fc add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_104716fe:;
  /* 104716fe cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10471700 jne 0x1047170f */
  if (!C.zf) goto L_1047170f;
  /* 10471702 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10471703 jne 0x104716dc */
  if (!C.zf) goto L_104716dc;
L_10471705:;
  /* 10471705 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10471707 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10471709 je 0x104717aa */
  if (C.zf) goto L_104717aa;
L_1047170f:;
  /* 1047170f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 10471714 jb 0x104717aa */
  if (C.cf) goto L_104717aa;
  /* 1047171a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1047171c jmp 0x104717aa */
  goto L_104717aa;
L_10471721:;
  /* 10471721 lock inc dword ptr [0x1048e80c] */
  x86_unimpl("lock inc @ 0x10471721");
  /* 10471728 cmp dword ptr [0x1048e7fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e7fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047172f jg 0x10471735 */
  if ((!C.zf&&C.sf==C.of)) goto L_10471735;
  /* 10471731 push 0 */
  push32((uint32_t)(0x0u));
  /* 10471733 jmp 0x1047174e */
  goto L_1047174e;
L_10471735:;
  /* 10471735 lock dec dword ptr [0x1048e80c] */
  x86_unimpl("lock dec @ 0x10471735");
  /* 1047173c mov ebx, ecx */
  EBX = (ECX);
  /* 1047173e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10471740 call 0x10466910 */
  push32(0x10471745u); f_10466910();
  /* 10471745 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 1047174c mov ecx, ebx */
  ECX = (EBX);
L_1047174e:;
  /* 1047174e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10471750 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10471752 mov edi, edi */
  EDI = (EDI);
L_10471754:;
  /* 10471754 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10471756 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10471758 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1047175a je 0x1047177f */
  if (C.zf) goto L_1047177f;
  /* 1047175c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1047175e je 0x1047177f */
  if (C.zf) goto L_1047177f;
  /* 10471760 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10471761 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10471762 push ecx */
  push32((uint32_t)(ECX));
  /* 10471763 push eax */
  push32((uint32_t)(EAX));
  /* 10471764 push ebx */
  push32((uint32_t)(EBX));
  /* 10471765 call 0x10472750 */
  push32(0x1047176au); f_10472750();
  /* 1047176a mov ebx, eax */
  EBX = (EAX);
  /* 1047176c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047176f call 0x10472750 */
  push32(0x10471774u); f_10472750();
  /* 10471774 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10471777 pop ecx */
  ECX = (pop32());
  /* 10471778 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047177a jne 0x10471785 */
  if (!C.zf) goto L_10471785;
  /* 1047177c dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1047177d jne 0x10471754 */
  if (!C.zf) goto L_10471754;
L_1047177f:;
  /* 1047177f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10471781 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10471783 je 0x1047178e */
  if (C.zf) goto L_1047178e;
L_10471785:;
  /* 10471785 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 1047178a jb 0x1047178e */
  if (C.cf) goto L_1047178e;
  /* 1047178c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_1047178e:;
  /* 1047178e pop eax */
  EAX = (pop32());
  /* 1047178f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10471791 jne 0x1047179c */
  if (!C.zf) goto L_1047179c;
  /* 10471793 lock dec dword ptr [0x1048e80c] */
  x86_unimpl("lock dec @ 0x10471793");
  /* 1047179a jmp 0x104717aa */
  goto L_104717aa;
L_1047179c:;
  /* 1047179c mov ebx, ecx */
  EBX = (ECX);
  /* 1047179e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 104717a0 call 0x104669b0 */
  push32(0x104717a5u); f_104669b0();
  /* 104717a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104717a8 mov ecx, ebx */
  ECX = (EBX);
L_104717aa:;
  /* 104717aa mov eax, ecx */
  EAX = (ECX);
  /* 104717ac pop ebx */
  EBX = (pop32());
  /* 104717ad pop esi */
  ESI = (pop32());
  /* 104717ae pop edi */
  EDI = (pop32());
  /* 104717af leave  */
  ESP = EBP;
  EBP = pop32();
  /* 104717b0 ret  */
  ESPCHK(0x104716b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100117c0 @ 0x104717c0 (255 bytes, 88 insns) */
void f_104717c0(void) {
  FTRACE(0x104717c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104717c0 push ebp */
  push32((uint32_t)(EBP));
  /* 104717c1 mov ebp, esp */
  EBP = (ESP);
  /* 104717c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_104717c6:;
  /* 104717c6 cmp dword ptr [0x1048cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1048cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104717cd jle 0x104717e6 */
  if ((C.zf||C.sf!=C.of)) goto L_104717e6;
  /* 104717cf push 8 */
  push32((uint32_t)(0x8u));
  /* 104717d1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104717d4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104717d6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 104717d8 push ecx */
  push32((uint32_t)(ECX));
  /* 104717d9 call 0x10468f20 */
  push32(0x104717deu); f_10468f20();
  /* 104717de add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104717e1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 104717e4 jmp 0x104717ff */
  goto L_104717ff;
L_104717e6:;
  /* 104717e6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104717e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104717eb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104717ed mov ecx, dword ptr [0x1048cc98] */
  ECX = (r32((uint32_t)(0x1048cc98)));
  /* 104717f3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 104717f5 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 104717f9 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 104717fc mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_104717ff:;
  /* 104717ff cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10471803 je 0x10471810 */
  if (C.zf) goto L_10471810;
  /* 10471805 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10471808 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047180b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1047180e jmp 0x104717c6 */
  goto L_104717c6;
L_10471810:;
  /* 10471810 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10471813 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10471815 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10471817 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1047181a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047181d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10471820 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10471823 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10471826 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10471829 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047182d je 0x10471835 */
  if (C.zf) goto L_10471835;
  /* 1047182f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10471833 jne 0x10471848 */
  if (!C.zf) goto L_10471848;
L_10471835:;
  /* 10471835 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10471838 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047183a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1047183c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1047183f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10471842 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10471845 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10471848:;
  /* 10471848 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_1047184f:;
  /* 1047184f cmp dword ptr [0x1048cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1048cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10471856 jle 0x1047186b */
  if ((C.zf||C.sf!=C.of)) goto L_1047186b;
  /* 10471858 push 4 */
  push32((uint32_t)(0x4u));
  /* 1047185a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047185d push edx */
  push32((uint32_t)(EDX));
  /* 1047185e call 0x10468f20 */
  push32(0x10471863u); f_10468f20();
  /* 10471863 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10471866 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10471869 jmp 0x10471880 */
  goto L_10471880;
L_1047186b:;
  /* 1047186b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047186e mov ecx, dword ptr [0x1048cc98] */
  ECX = (r32((uint32_t)(0x1048cc98)));
  /* 10471874 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10471876 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1047187a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 1047187d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10471880:;
  /* 10471880 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10471884 je 0x104718ab */
  if (C.zf) goto L_104718ab;
  /* 10471886 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10471889 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1047188c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047188f lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 10471893 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 10471896 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10471899 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1047189b mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1047189d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104718a0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104718a3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104718a6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 104718a9 jmp 0x1047184f */
  goto L_1047184f;
L_104718ab:;
  /* 104718ab cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104718af jne 0x104718b8 */
  if (!C.zf) goto L_104718b8;
  /* 104718b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104718b4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 104718b6 jmp 0x104718bb */
  goto L_104718bb;
L_104718b8:;
  /* 104718b8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_104718bb:;
  /* 104718bb mov esp, ebp */
  ESP = (EBP);
  /* 104718bd pop ebp */
  EBP = (pop32());
  /* 104718be ret  */
  ESPCHK(0x104717c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100118c0 @ 0x104718c0 (17 bytes, 8 insns) */
void f_104718c0(void) {
  FTRACE(0x104718c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104718c0 push ebp */
  push32((uint32_t)(EBP));
  /* 104718c1 mov ebp, esp */
  EBP = (ESP);
  /* 104718c3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104718c6 push eax */
  push32((uint32_t)(EAX));
  /* 104718c7 call 0x104717c0 */
  push32(0x104718ccu); f_104717c0();
  /* 104718cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104718cf pop ebp */
  EBP = (pop32());
  /* 104718d0 ret  */
  ESPCHK(0x104718c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100118e0 @ 0x104718e0 (297 bytes, 106 insns) */
void f_104718e0(void) {
  FTRACE(0x104718e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104718e0 push ebp */
  push32((uint32_t)(EBP));
  /* 104718e1 mov ebp, esp */
  EBP = (ESP);
  /* 104718e3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104718e6 push esi */
  push32((uint32_t)(ESI));
L_104718e7:;
  /* 104718e7 cmp dword ptr [0x1048cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1048cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104718ee jle 0x10471907 */
  if ((C.zf||C.sf!=C.of)) goto L_10471907;
  /* 104718f0 push 8 */
  push32((uint32_t)(0x8u));
  /* 104718f2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104718f5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104718f7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 104718f9 push ecx */
  push32((uint32_t)(ECX));
  /* 104718fa call 0x10468f20 */
  push32(0x104718ffu); f_10468f20();
  /* 104718ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10471902 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10471905 jmp 0x10471920 */
  goto L_10471920;
L_10471907:;
  /* 10471907 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047190a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047190c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1047190e mov ecx, dword ptr [0x1048cc98] */
  ECX = (r32((uint32_t)(0x1048cc98)));
  /* 10471914 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10471916 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 1047191a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1047191d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_10471920:;
  /* 10471920 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10471924 je 0x10471931 */
  if (C.zf) goto L_10471931;
  /* 10471926 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10471929 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047192c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1047192f jmp 0x104718e7 */
  goto L_104718e7;
L_10471931:;
  /* 10471931 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10471934 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10471936 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10471938 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1047193b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047193e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10471941 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 10471944 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10471947 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1047194a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047194e je 0x10471956 */
  if (C.zf) goto L_10471956;
  /* 10471950 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10471954 jne 0x10471969 */
  if (!C.zf) goto L_10471969;
L_10471956:;
  /* 10471956 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10471959 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047195b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1047195d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10471960 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10471963 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10471966 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_10471969:;
  /* 10471969 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 10471970 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_10471977:;
  /* 10471977 cmp dword ptr [0x1048cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1048cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047197e jle 0x10471993 */
  if ((C.zf||C.sf!=C.of)) goto L_10471993;
  /* 10471980 push 4 */
  push32((uint32_t)(0x4u));
  /* 10471982 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10471985 push edx */
  push32((uint32_t)(EDX));
  /* 10471986 call 0x10468f20 */
  push32(0x1047198bu); f_10468f20();
  /* 1047198b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047198e mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10471991 jmp 0x104719a8 */
  goto L_104719a8;
L_10471993:;
  /* 10471993 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10471996 mov ecx, dword ptr [0x1048cc98] */
  ECX = (r32((uint32_t)(0x1048cc98)));
  /* 1047199c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1047199e mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 104719a2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 104719a5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_104719a8:;
  /* 104719a8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104719ac je 0x104719e9 */
  if (C.zf) goto L_104719e9;
  /* 104719ae push 0 */
  push32((uint32_t)(0x0u));
  /* 104719b0 push 0xa */
  push32((uint32_t)(0xau));
  /* 104719b2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104719b5 push eax */
  push32((uint32_t)(EAX));
  /* 104719b6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104719b9 push ecx */
  push32((uint32_t)(ECX));
  /* 104719ba call 0x10472880 */
  push32(0x104719bfu); f_10472880();
  /* 104719bf mov ecx, eax */
  ECX = (EAX);
  /* 104719c1 mov esi, edx */
  ESI = (EDX);
  /* 104719c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104719c6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104719c9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104719ca add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104719cc adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 104719ce mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 104719d1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 104719d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104719d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104719d9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 104719db mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104719de mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104719e1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104719e4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 104719e7 jmp 0x10471977 */
  goto L_10471977;
L_104719e9:;
  /* 104719e9 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104719ed jne 0x104719fe */
  if (!C.zf) goto L_104719fe;
  /* 104719ef mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104719f2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 104719f4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104719f7 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104719fa neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 104719fc jmp 0x10471a04 */
  goto L_10471a04;
L_104719fe:;
  /* 104719fe mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10471a01 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_10471a04:;
  /* 10471a04 pop esi */
  ESI = (pop32());
  /* 10471a05 mov esp, ebp */
  ESP = (EBP);
  /* 10471a07 pop ebp */
  EBP = (pop32());
  /* 10471a08 ret  */
  ESPCHK(0x104718e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a10 @ 0x10471a10 (61 bytes, 18 insns) */
void f_10471a10(void) {
  FTRACE(0x10471a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10471a10 push ebp */
  push32((uint32_t)(EBP));
  /* 10471a11 mov ebp, esp */
  EBP = (ESP);
  /* 10471a13 cmp dword ptr [0x1048e7d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e7d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10471a1a jne 0x10471a4b */
  if (!C.zf) goto L_10471a4b;
  /* 10471a1c push 0xb */
  push32((uint32_t)(0xbu));
  /* 10471a1e call 0x10466910 */
  push32(0x10471a23u); f_10466910();
  /* 10471a23 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10471a26 cmp dword ptr [0x1048e7d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e7d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10471a2d jne 0x10471a41 */
  if (!C.zf) goto L_10471a41;
  /* 10471a2f call 0x10471a70 */
  push32(0x10471a34u); f_10471a70();
  /* 10471a34 mov eax, dword ptr [0x1048e7d8] */
  EAX = (r32((uint32_t)(0x1048e7d8)));
  /* 10471a39 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10471a3c mov dword ptr [0x1048e7d8], eax */
  w32((uint32_t)(0x1048e7d8), (EAX));
L_10471a41:;
  /* 10471a41 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10471a43 call 0x104669b0 */
  push32(0x10471a48u); f_104669b0();
  /* 10471a48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10471a4b:;
  /* 10471a4b pop ebp */
  EBP = (pop32());
  /* 10471a4c ret  */
  ESPCHK(0x10471a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a50 @ 0x10471a50 (30 bytes, 11 insns) */
void f_10471a50(void) {
  FTRACE(0x10471a50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10471a50 push ebp */
  push32((uint32_t)(EBP));
  /* 10471a51 mov ebp, esp */
  EBP = (ESP);
  /* 10471a53 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10471a55 call 0x10466910 */
  push32(0x10471a5au); f_10466910();
  /* 10471a5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10471a5d call 0x10471a70 */
  push32(0x10471a62u); f_10471a70();
  /* 10471a62 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10471a64 call 0x104669b0 */
  push32(0x10471a69u); f_104669b0();
  /* 10471a69 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10471a6c pop ebp */
  EBP = (pop32());
  /* 10471a6d ret  */
  ESPCHK(0x10471a50u, _esp0);
  ESP += 4; return;
}

/* FUN_10011a70 @ 0x10471a70 (939 bytes, 266 insns) */
void f_10471a70(void) {
  FTRACE(0x10471a70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10471a70 push ebp */
  push32((uint32_t)(EBP));
  /* 10471a71 mov ebp, esp */
  EBP = (ESP);
  /* 10471a73 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10471a76 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10471a7d push 0xc */
  push32((uint32_t)(0xcu));
  /* 10471a7f call 0x10466910 */
  push32(0x10471a84u); f_10466910();
  /* 10471a84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10471a87 mov dword ptr [0x1048e720], 0 */
  w32((uint32_t)(0x1048e720), (0x0u));
  /* 10471a91 mov dword ptr [0x1048de38], 0xffffffff */
  w32((uint32_t)(0x1048de38), (0xffffffffu));
  /* 10471a9b mov eax, dword ptr [0x1048de38] */
  EAX = (r32((uint32_t)(0x1048de38)));
  /* 10471aa0 mov dword ptr [0x1048de28], eax */
  w32((uint32_t)(0x1048de28), (EAX));
  /* 10471aa5 push 0x1048a8d0 */
  push32((uint32_t)(0x1048a8d0u));
  /* 10471aaa call 0x104728f0 */
  push32(0x10471aafu); f_104728f0();
  /* 10471aaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10471ab2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10471ab5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10471ab9 jne 0x10471bf3 */
  if (!C.zf) goto L_10471bf3;
  /* 10471abf push 0xc */
  push32((uint32_t)(0xcu));
  /* 10471ac1 call 0x104669b0 */
  push32(0x10471ac6u); f_104669b0();
  /* 10471ac6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10471ac9 push 0x1048e728 */
  push32((uint32_t)(0x1048e728u));
  /* 10471ace call dword ptr [0x10490248] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490248))), 0x10471ad4u);
  /* 10471ad4 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10471ad7 je 0x10471bee */
  if (C.zf) goto L_10471bee;
  /* 10471add mov dword ptr [0x1048e720], 1 */
  w32((uint32_t)(0x1048e720), (0x1u));
  /* 10471ae7 mov ecx, dword ptr [0x1048e728] */
  ECX = (r32((uint32_t)(0x1048e728)));
  /* 10471aed imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10471af0 mov dword ptr [0x1048dd90], ecx */
  w32((uint32_t)(0x1048dd90), (ECX));
  /* 10471af6 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10471af8 mov dx, word ptr [0x1048e76e] */
  DX = (r16((uint32_t)(0x1048e76e)));
  /* 10471aff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10471b01 je 0x10471b19 */
  if (C.zf) goto L_10471b19;
  /* 10471b03 mov eax, dword ptr [0x1048e77c] */
  EAX = (r32((uint32_t)(0x1048e77c)));
  /* 10471b08 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10471b0b mov ecx, dword ptr [0x1048dd90] */
  ECX = (r32((uint32_t)(0x1048dd90)));
  /* 10471b11 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10471b13 mov dword ptr [0x1048dd90], ecx */
  w32((uint32_t)(0x1048dd90), (ECX));
L_10471b19:;
  /* 10471b19 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10471b1b mov dx, word ptr [0x1048e7c2] */
  DX = (r16((uint32_t)(0x1048e7c2)));
  /* 10471b22 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10471b24 je 0x10471b4e */
  if (C.zf) goto L_10471b4e;
  /* 10471b26 cmp dword ptr [0x1048e7d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e7d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10471b2d je 0x10471b4e */
  if (C.zf) goto L_10471b4e;
  /* 10471b2f mov dword ptr [0x1048dd94], 1 */
  w32((uint32_t)(0x1048dd94), (0x1u));
  /* 10471b39 mov eax, dword ptr [0x1048e7d0] */
  EAX = (r32((uint32_t)(0x1048e7d0)));
  /* 10471b3e sub eax, dword ptr [0x1048e77c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1048e77c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10471b44 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10471b47 mov dword ptr [0x1048dd98], eax */
  w32((uint32_t)(0x1048dd98), (EAX));
  /* 10471b4c jmp 0x10471b62 */
  goto L_10471b62;
L_10471b4e:;
  /* 10471b4e mov dword ptr [0x1048dd94], 0 */
  w32((uint32_t)(0x1048dd94), (0x0u));
  /* 10471b58 mov dword ptr [0x1048dd98], 0 */
  w32((uint32_t)(0x1048dd98), (0x0u));
L_10471b62:;
  /* 10471b62 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 10471b65 push ecx */
  push32((uint32_t)(ECX));
  /* 10471b66 push 0 */
  push32((uint32_t)(0x0u));
  /* 10471b68 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10471b6a mov edx, dword ptr [0x1048de1c] */
  EDX = (r32((uint32_t)(0x1048de1c)));
  /* 10471b70 push edx */
  push32((uint32_t)(EDX));
  /* 10471b71 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10471b73 push 0x1048e72c */
  push32((uint32_t)(0x1048e72cu));
  /* 10471b78 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10471b7d mov eax, dword ptr [0x1048e690] */
  EAX = (r32((uint32_t)(0x1048e690)));
  /* 10471b82 push eax */
  push32((uint32_t)(EAX));
  /* 10471b83 call dword ptr [0x104902ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902ec))), 0x10471b89u);
  /* 10471b89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10471b8b je 0x10471b9f */
  if (C.zf) goto L_10471b9f;
  /* 10471b8d cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10471b91 jne 0x10471b9f */
  if (!C.zf) goto L_10471b9f;
  /* 10471b93 mov ecx, dword ptr [0x1048de1c] */
  ECX = (r32((uint32_t)(0x1048de1c)));
  /* 10471b99 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 10471b9d jmp 0x10471ba8 */
  goto L_10471ba8;
L_10471b9f:;
  /* 10471b9f mov edx, dword ptr [0x1048de1c] */
  EDX = (r32((uint32_t)(0x1048de1c)));
  /* 10471ba5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10471ba8:;
  /* 10471ba8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 10471bab push eax */
  push32((uint32_t)(EAX));
  /* 10471bac push 0 */
  push32((uint32_t)(0x0u));
  /* 10471bae push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 10471bb0 mov ecx, dword ptr [0x1048de20] */
  ECX = (r32((uint32_t)(0x1048de20)));
  /* 10471bb6 push ecx */
  push32((uint32_t)(ECX));
  /* 10471bb7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10471bb9 push 0x1048e780 */
  push32((uint32_t)(0x1048e780u));
  /* 10471bbe push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10471bc3 mov edx, dword ptr [0x1048e690] */
  EDX = (r32((uint32_t)(0x1048e690)));
  /* 10471bc9 push edx */
  push32((uint32_t)(EDX));
  /* 10471bca call dword ptr [0x104902ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902ec))), 0x10471bd0u);
  /* 10471bd0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10471bd2 je 0x10471be5 */
  if (C.zf) goto L_10471be5;
  /* 10471bd4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10471bd8 jne 0x10471be5 */
  if (!C.zf) goto L_10471be5;
  /* 10471bda mov eax, dword ptr [0x1048de20] */
  EAX = (r32((uint32_t)(0x1048de20)));
  /* 10471bdf mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 10471be3 jmp 0x10471bee */
  goto L_10471bee;
L_10471be5:;
  /* 10471be5 mov ecx, dword ptr [0x1048de20] */
  ECX = (r32((uint32_t)(0x1048de20)));
  /* 10471beb mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_10471bee:;
  /* 10471bee jmp 0x10471e17 */
  goto L_10471e17;
L_10471bf3:;
  /* 10471bf3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10471bf6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10471bf9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10471bfb je 0x10471c1d */
  if (C.zf) goto L_10471c1d;
  /* 10471bfd cmp dword ptr [0x1048e7d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e7d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10471c04 je 0x10471c2c */
  if (C.zf) goto L_10471c2c;
  /* 10471c06 mov ecx, dword ptr [0x1048e7d4] */
  ECX = (r32((uint32_t)(0x1048e7d4)));
  /* 10471c0c push ecx */
  push32((uint32_t)(ECX));
  /* 10471c0d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10471c10 push edx */
  push32((uint32_t)(EDX));
  /* 10471c11 call 0x1046eba0 */
  push32(0x10471c16u); f_1046eba0();
  /* 10471c16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10471c19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10471c1b jne 0x10471c2c */
  if (!C.zf) goto L_10471c2c;
L_10471c1d:;
  /* 10471c1d push 0xc */
  push32((uint32_t)(0xcu));
  /* 10471c1f call 0x104669b0 */
  push32(0x10471c24u); f_104669b0();
  /* 10471c24 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10471c27 jmp 0x10471e17 */
  goto L_10471e17;
L_10471c2c:;
  /* 10471c2c push 2 */
  push32((uint32_t)(0x2u));
  /* 10471c2e mov eax, dword ptr [0x1048e7d4] */
  EAX = (r32((uint32_t)(0x1048e7d4)));
  /* 10471c33 push eax */
  push32((uint32_t)(EAX));
  /* 10471c34 call 0x104639a0 */
  push32(0x10471c39u); f_104639a0();
  /* 10471c39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10471c3c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 10471c41 push 0x1048a8c8 */
  push32((uint32_t)(0x1048a8c8u));
  /* 10471c46 push 2 */
  push32((uint32_t)(0x2u));
  /* 10471c48 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10471c4b push ecx */
  push32((uint32_t)(ECX));
  /* 10471c4c call 0x10465d40 */
  push32(0x10471c51u); f_10465d40();
  /* 10471c51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10471c54 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10471c57 push eax */
  push32((uint32_t)(EAX));
  /* 10471c58 call 0x10462f10 */
  push32(0x10471c5du); f_10462f10();
  /* 10471c5d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10471c60 mov dword ptr [0x1048e7d4], eax */
  w32((uint32_t)(0x1048e7d4), (EAX));
  /* 10471c65 cmp dword ptr [0x1048e7d4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e7d4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10471c6c jne 0x10471c7d */
  if (!C.zf) goto L_10471c7d;
  /* 10471c6e push 0xc */
  push32((uint32_t)(0xcu));
  /* 10471c70 call 0x104669b0 */
  push32(0x10471c75u); f_104669b0();
  /* 10471c75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10471c78 jmp 0x10471e17 */
  goto L_10471e17;
L_10471c7d:;
  /* 10471c7d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10471c80 push edx */
  push32((uint32_t)(EDX));
  /* 10471c81 mov eax, dword ptr [0x1048e7d4] */
  EAX = (r32((uint32_t)(0x1048e7d4)));
  /* 10471c86 push eax */
  push32((uint32_t)(EAX));
  /* 10471c87 call 0x10465ec0 */
  push32(0x10471c8cu); f_10465ec0();
  /* 10471c8c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10471c8f push 0xc */
  push32((uint32_t)(0xcu));
  /* 10471c91 call 0x104669b0 */
  push32(0x10471c96u); f_104669b0();
  /* 10471c96 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10471c99 push 3 */
  push32((uint32_t)(0x3u));
  /* 10471c9b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10471c9e push ecx */
  push32((uint32_t)(ECX));
  /* 10471c9f mov edx, dword ptr [0x1048de1c] */
  EDX = (r32((uint32_t)(0x1048de1c)));
  /* 10471ca5 push edx */
  push32((uint32_t)(EDX));
  /* 10471ca6 call 0x10466730 */
  push32(0x10471cabu); f_10466730();
  /* 10471cab add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10471cae mov eax, dword ptr [0x1048de1c] */
  EAX = (r32((uint32_t)(0x1048de1c)));
  /* 10471cb3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 10471cb7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10471cba add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10471cbd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10471cc0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10471cc3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10471cc6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10471cc9 jne 0x10471cdd */
  if (!C.zf) goto L_10471cdd;
  /* 10471ccb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10471cce add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10471cd1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10471cd4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10471cd7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10471cda mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_10471cdd:;
  /* 10471cdd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10471ce0 push eax */
  push32((uint32_t)(EAX));
  /* 10471ce1 call 0x104717c0 */
  push32(0x10471ce6u); f_104717c0();
  /* 10471ce6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10471ce9 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10471cef mov dword ptr [0x1048dd90], eax */
  w32((uint32_t)(0x1048dd90), (EAX));
L_10471cf4:;
  /* 10471cf4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10471cf7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10471cfa cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10471cfd je 0x10471d15 */
  if (C.zf) goto L_10471d15;
  /* 10471cff mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10471d02 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10471d05 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10471d08 jl 0x10471d20 */
  if ((C.sf!=C.of)) goto L_10471d20;
  /* 10471d0a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10471d0d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10471d10 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10471d13 jg 0x10471d20 */
  if ((!C.zf&&C.sf==C.of)) goto L_10471d20;
L_10471d15:;
  /* 10471d15 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10471d18 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10471d1b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10471d1e jmp 0x10471cf4 */
  goto L_10471cf4;
L_10471d20:;
  /* 10471d20 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10471d23 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10471d26 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10471d29 jne 0x10471dc5 */
  if (!C.zf) goto L_10471dc5;
  /* 10471d2f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10471d32 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10471d35 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10471d38 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10471d3b push edx */
  push32((uint32_t)(EDX));
  /* 10471d3c call 0x104717c0 */
  push32(0x10471d41u); f_104717c0();
  /* 10471d41 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10471d44 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10471d47 mov ecx, dword ptr [0x1048dd90] */
  ECX = (r32((uint32_t)(0x1048dd90)));
  /* 10471d4d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10471d4f mov dword ptr [0x1048dd90], ecx */
  w32((uint32_t)(0x1048dd90), (ECX));
L_10471d55:;
  /* 10471d55 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10471d58 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10471d5b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10471d5e jl 0x10471d76 */
  if ((C.sf!=C.of)) goto L_10471d76;
  /* 10471d60 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10471d63 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10471d66 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10471d69 jg 0x10471d76 */
  if ((!C.zf&&C.sf==C.of)) goto L_10471d76;
  /* 10471d6b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10471d6e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10471d71 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10471d74 jmp 0x10471d55 */
  goto L_10471d55;
L_10471d76:;
  /* 10471d76 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10471d79 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10471d7c cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10471d7f jne 0x10471dc5 */
  if (!C.zf) goto L_10471dc5;
  /* 10471d81 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10471d84 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10471d87 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10471d8a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10471d8d push ecx */
  push32((uint32_t)(ECX));
  /* 10471d8e call 0x104717c0 */
  push32(0x10471d93u); f_104717c0();
  /* 10471d93 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10471d96 mov edx, dword ptr [0x1048dd90] */
  EDX = (r32((uint32_t)(0x1048dd90)));
  /* 10471d9c add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10471d9e mov dword ptr [0x1048dd90], edx */
  w32((uint32_t)(0x1048dd90), (EDX));
L_10471da4:;
  /* 10471da4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10471da7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10471daa cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10471dad jl 0x10471dc5 */
  if ((C.sf!=C.of)) goto L_10471dc5;
  /* 10471daf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10471db2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 10471db5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10471db8 jg 0x10471dc5 */
  if ((!C.zf&&C.sf==C.of)) goto L_10471dc5;
  /* 10471dba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10471dbd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10471dc0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10471dc3 jmp 0x10471da4 */
  goto L_10471da4;
L_10471dc5:;
  /* 10471dc5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10471dc9 je 0x10471dd9 */
  if (C.zf) goto L_10471dd9;
  /* 10471dcb mov edx, dword ptr [0x1048dd90] */
  EDX = (r32((uint32_t)(0x1048dd90)));
  /* 10471dd1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 10471dd3 mov dword ptr [0x1048dd90], edx */
  w32((uint32_t)(0x1048dd90), (EDX));
L_10471dd9:;
  /* 10471dd9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10471ddc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 10471ddf mov dword ptr [0x1048dd94], ecx */
  w32((uint32_t)(0x1048dd94), (ECX));
  /* 10471de5 cmp dword ptr [0x1048dd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048dd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10471dec je 0x10471e0e */
  if (C.zf) goto L_10471e0e;
  /* 10471dee push 3 */
  push32((uint32_t)(0x3u));
  /* 10471df0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10471df3 push edx */
  push32((uint32_t)(EDX));
  /* 10471df4 mov eax, dword ptr [0x1048de20] */
  EAX = (r32((uint32_t)(0x1048de20)));
  /* 10471df9 push eax */
  push32((uint32_t)(EAX));
  /* 10471dfa call 0x10466730 */
  push32(0x10471dffu); f_10466730();
  /* 10471dff add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10471e02 mov ecx, dword ptr [0x1048de20] */
  ECX = (r32((uint32_t)(0x1048de20)));
  /* 10471e08 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 10471e0c jmp 0x10471e17 */
  goto L_10471e17;
L_10471e0e:;
  /* 10471e0e mov edx, dword ptr [0x1048de20] */
  EDX = (r32((uint32_t)(0x1048de20)));
  /* 10471e14 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_10471e17:;
  /* 10471e17 mov esp, ebp */
  ESP = (EBP);
  /* 10471e19 pop ebp */
  EBP = (pop32());
  /* 10471e1a ret  */
  ESPCHK(0x10471a70u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e20 @ 0x10471e20 (46 bytes, 18 insns) */
void f_10471e20(void) {
  FTRACE(0x10471e20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10471e20 push ebp */
  push32((uint32_t)(EBP));
  /* 10471e21 mov ebp, esp */
  EBP = (ESP);
  /* 10471e23 push ecx */
  push32((uint32_t)(ECX));
  /* 10471e24 push 0xb */
  push32((uint32_t)(0xbu));
  /* 10471e26 call 0x10466910 */
  push32(0x10471e2bu); f_10466910();
  /* 10471e2b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10471e2e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10471e31 push eax */
  push32((uint32_t)(EAX));
  /* 10471e32 call 0x10471e50 */
  push32(0x10471e37u); f_10471e50();
  /* 10471e37 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10471e3a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10471e3d push 0xb */
  push32((uint32_t)(0xbu));
  /* 10471e3f call 0x104669b0 */
  push32(0x10471e44u); f_104669b0();
  /* 10471e44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10471e47 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10471e4a mov esp, ebp */
  ESP = (EBP);
  /* 10471e4c pop ebp */
  EBP = (pop32());
  /* 10471e4d ret  */
  ESPCHK(0x10471e20u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e50 @ 0x10471e50 (762 bytes, 246 insns) */
void f_10471e50(void) {
  FTRACE(0x10471e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10471e50 push ebp */
  push32((uint32_t)(EBP));
  /* 10471e51 mov ebp, esp */
  EBP = (ESP);
  /* 10471e53 push ecx */
  push32((uint32_t)(ECX));
  /* 10471e54 cmp dword ptr [0x1048dd94], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048dd94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10471e5b jne 0x10471e64 */
  if (!C.zf) goto L_10471e64;
  /* 10471e5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10471e5f jmp 0x10472146 */
  goto L_10472146;
L_10471e64:;
  /* 10471e64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10471e67 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10471e6a cmp ecx, dword ptr [0x1048de28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1048de28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10471e70 jne 0x10471e84 */
  if (!C.zf) goto L_10471e84;
  /* 10471e72 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10471e75 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10471e78 cmp eax, dword ptr [0x1048de38] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1048de38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10471e7e je 0x1047204b */
  if (C.zf) goto L_1047204b;
L_10471e84:;
  /* 10471e84 cmp dword ptr [0x1048e720], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e720))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10471e8b je 0x10472005 */
  if (C.zf) goto L_10472005;
  /* 10471e91 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10471e93 mov cx, word ptr [0x1048e7c0] */
  CX = (r16((uint32_t)(0x1048e7c0)));
  /* 10471e9a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10471e9c jne 0x10471ef9 */
  if (!C.zf) goto L_10471ef9;
  /* 10471e9e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10471ea0 mov dx, word ptr [0x1048e7ce] */
  DX = (r16((uint32_t)(0x1048e7ce)));
  /* 10471ea7 push edx */
  push32((uint32_t)(EDX));
  /* 10471ea8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10471eaa mov ax, word ptr [0x1048e7cc] */
  AX = (r16((uint32_t)(0x1048e7cc)));
  /* 10471eb0 push eax */
  push32((uint32_t)(EAX));
  /* 10471eb1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10471eb3 mov cx, word ptr [0x1048e7ca] */
  CX = (r16((uint32_t)(0x1048e7ca)));
  /* 10471eba push ecx */
  push32((uint32_t)(ECX));
  /* 10471ebb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10471ebd mov dx, word ptr [0x1048e7c8] */
  DX = (r16((uint32_t)(0x1048e7c8)));
  /* 10471ec4 push edx */
  push32((uint32_t)(EDX));
  /* 10471ec5 push 0 */
  push32((uint32_t)(0x0u));
  /* 10471ec7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10471ec9 mov ax, word ptr [0x1048e7c4] */
  AX = (r16((uint32_t)(0x1048e7c4)));
  /* 10471ecf push eax */
  push32((uint32_t)(EAX));
  /* 10471ed0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10471ed2 mov cx, word ptr [0x1048e7c6] */
  CX = (r16((uint32_t)(0x1048e7c6)));
  /* 10471ed9 push ecx */
  push32((uint32_t)(ECX));
  /* 10471eda xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10471edc mov dx, word ptr [0x1048e7c2] */
  DX = (r16((uint32_t)(0x1048e7c2)));
  /* 10471ee3 push edx */
  push32((uint32_t)(EDX));
  /* 10471ee4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10471ee7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10471eea push ecx */
  push32((uint32_t)(ECX));
  /* 10471eeb push 1 */
  push32((uint32_t)(0x1u));
  /* 10471eed push 1 */
  push32((uint32_t)(0x1u));
  /* 10471eef call 0x10472150 */
  push32(0x10471ef4u); f_10472150();
  /* 10471ef4 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10471ef7 jmp 0x10471f4a */
  goto L_10471f4a;
L_10471ef9:;
  /* 10471ef9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10471efb mov dx, word ptr [0x1048e7ce] */
  DX = (r16((uint32_t)(0x1048e7ce)));
  /* 10471f02 push edx */
  push32((uint32_t)(EDX));
  /* 10471f03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10471f05 mov ax, word ptr [0x1048e7cc] */
  AX = (r16((uint32_t)(0x1048e7cc)));
  /* 10471f0b push eax */
  push32((uint32_t)(EAX));
  /* 10471f0c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10471f0e mov cx, word ptr [0x1048e7ca] */
  CX = (r16((uint32_t)(0x1048e7ca)));
  /* 10471f15 push ecx */
  push32((uint32_t)(ECX));
  /* 10471f16 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10471f18 mov dx, word ptr [0x1048e7c8] */
  DX = (r16((uint32_t)(0x1048e7c8)));
  /* 10471f1f push edx */
  push32((uint32_t)(EDX));
  /* 10471f20 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10471f22 mov ax, word ptr [0x1048e7c6] */
  AX = (r16((uint32_t)(0x1048e7c6)));
  /* 10471f28 push eax */
  push32((uint32_t)(EAX));
  /* 10471f29 push 0 */
  push32((uint32_t)(0x0u));
  /* 10471f2b push 0 */
  push32((uint32_t)(0x0u));
  /* 10471f2d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10471f2f mov cx, word ptr [0x1048e7c2] */
  CX = (r16((uint32_t)(0x1048e7c2)));
  /* 10471f36 push ecx */
  push32((uint32_t)(ECX));
  /* 10471f37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10471f3a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10471f3d push eax */
  push32((uint32_t)(EAX));
  /* 10471f3e push 0 */
  push32((uint32_t)(0x0u));
  /* 10471f40 push 1 */
  push32((uint32_t)(0x1u));
  /* 10471f42 call 0x10472150 */
  push32(0x10471f47u); f_10472150();
  /* 10471f47 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10471f4a:;
  /* 10471f4a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10471f4c mov cx, word ptr [0x1048e76c] */
  CX = (r16((uint32_t)(0x1048e76c)));
  /* 10471f53 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10471f55 jne 0x10471fb2 */
  if (!C.zf) goto L_10471fb2;
  /* 10471f57 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10471f59 mov dx, word ptr [0x1048e77a] */
  DX = (r16((uint32_t)(0x1048e77a)));
  /* 10471f60 push edx */
  push32((uint32_t)(EDX));
  /* 10471f61 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10471f63 mov ax, word ptr [0x1048e778] */
  AX = (r16((uint32_t)(0x1048e778)));
  /* 10471f69 push eax */
  push32((uint32_t)(EAX));
  /* 10471f6a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10471f6c mov cx, word ptr [0x1048e776] */
  CX = (r16((uint32_t)(0x1048e776)));
  /* 10471f73 push ecx */
  push32((uint32_t)(ECX));
  /* 10471f74 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10471f76 mov dx, word ptr [0x1048e774] */
  DX = (r16((uint32_t)(0x1048e774)));
  /* 10471f7d push edx */
  push32((uint32_t)(EDX));
  /* 10471f7e push 0 */
  push32((uint32_t)(0x0u));
  /* 10471f80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10471f82 mov ax, word ptr [0x1048e770] */
  AX = (r16((uint32_t)(0x1048e770)));
  /* 10471f88 push eax */
  push32((uint32_t)(EAX));
  /* 10471f89 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10471f8b mov cx, word ptr [0x1048e772] */
  CX = (r16((uint32_t)(0x1048e772)));
  /* 10471f92 push ecx */
  push32((uint32_t)(ECX));
  /* 10471f93 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10471f95 mov dx, word ptr [0x1048e76e] */
  DX = (r16((uint32_t)(0x1048e76e)));
  /* 10471f9c push edx */
  push32((uint32_t)(EDX));
  /* 10471f9d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10471fa0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 10471fa3 push ecx */
  push32((uint32_t)(ECX));
  /* 10471fa4 push 1 */
  push32((uint32_t)(0x1u));
  /* 10471fa6 push 0 */
  push32((uint32_t)(0x0u));
  /* 10471fa8 call 0x10472150 */
  push32(0x10471fadu); f_10472150();
  /* 10471fad add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10471fb0 jmp 0x10472003 */
  goto L_10472003;
L_10471fb2:;
  /* 10471fb2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10471fb4 mov dx, word ptr [0x1048e77a] */
  DX = (r16((uint32_t)(0x1048e77a)));
  /* 10471fbb push edx */
  push32((uint32_t)(EDX));
  /* 10471fbc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10471fbe mov ax, word ptr [0x1048e778] */
  AX = (r16((uint32_t)(0x1048e778)));
  /* 10471fc4 push eax */
  push32((uint32_t)(EAX));
  /* 10471fc5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10471fc7 mov cx, word ptr [0x1048e776] */
  CX = (r16((uint32_t)(0x1048e776)));
  /* 10471fce push ecx */
  push32((uint32_t)(ECX));
  /* 10471fcf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10471fd1 mov dx, word ptr [0x1048e774] */
  DX = (r16((uint32_t)(0x1048e774)));
  /* 10471fd8 push edx */
  push32((uint32_t)(EDX));
  /* 10471fd9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10471fdb mov ax, word ptr [0x1048e772] */
  AX = (r16((uint32_t)(0x1048e772)));
  /* 10471fe1 push eax */
  push32((uint32_t)(EAX));
  /* 10471fe2 push 0 */
  push32((uint32_t)(0x0u));
  /* 10471fe4 push 0 */
  push32((uint32_t)(0x0u));
  /* 10471fe6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10471fe8 mov cx, word ptr [0x1048e76e] */
  CX = (r16((uint32_t)(0x1048e76e)));
  /* 10471fef push ecx */
  push32((uint32_t)(ECX));
  /* 10471ff0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10471ff3 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 10471ff6 push eax */
  push32((uint32_t)(EAX));
  /* 10471ff7 push 0 */
  push32((uint32_t)(0x0u));
  /* 10471ff9 push 0 */
  push32((uint32_t)(0x0u));
  /* 10471ffb call 0x10472150 */
  push32(0x10472000u); f_10472150();
  /* 10472000 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10472003:;
  /* 10472003 jmp 0x1047204b */
  goto L_1047204b;
L_10472005:;
  /* 10472005 push 0 */
  push32((uint32_t)(0x0u));
  /* 10472007 push 0 */
  push32((uint32_t)(0x0u));
  /* 10472009 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047200b push 2 */
  push32((uint32_t)(0x2u));
  /* 1047200d push 0 */
  push32((uint32_t)(0x0u));
  /* 1047200f push 0 */
  push32((uint32_t)(0x0u));
  /* 10472011 push 1 */
  push32((uint32_t)(0x1u));
  /* 10472013 push 4 */
  push32((uint32_t)(0x4u));
  /* 10472015 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10472018 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1047201b push edx */
  push32((uint32_t)(EDX));
  /* 1047201c push 1 */
  push32((uint32_t)(0x1u));
  /* 1047201e push 1 */
  push32((uint32_t)(0x1u));
  /* 10472020 call 0x10472150 */
  push32(0x10472025u); f_10472150();
  /* 10472025 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10472028 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047202a push 0 */
  push32((uint32_t)(0x0u));
  /* 1047202c push 0 */
  push32((uint32_t)(0x0u));
  /* 1047202e push 2 */
  push32((uint32_t)(0x2u));
  /* 10472030 push 0 */
  push32((uint32_t)(0x0u));
  /* 10472032 push 0 */
  push32((uint32_t)(0x0u));
  /* 10472034 push 5 */
  push32((uint32_t)(0x5u));
  /* 10472036 push 0xa */
  push32((uint32_t)(0xau));
  /* 10472038 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047203b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1047203e push ecx */
  push32((uint32_t)(ECX));
  /* 1047203f push 1 */
  push32((uint32_t)(0x1u));
  /* 10472041 push 0 */
  push32((uint32_t)(0x0u));
  /* 10472043 call 0x10472150 */
  push32(0x10472048u); f_10472150();
  /* 10472048 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047204b:;
  /* 1047204b mov edx, dword ptr [0x1048de2c] */
  EDX = (r32((uint32_t)(0x1048de2c)));
  /* 10472051 cmp edx, dword ptr [0x1048de3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1048de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472057 jge 0x104720a4 */
  if ((C.sf==C.of)) goto L_104720a4;
  /* 10472059 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047205c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1047205f cmp ecx, dword ptr [0x1048de2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1048de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472065 jl 0x10472075 */
  if ((C.sf!=C.of)) goto L_10472075;
  /* 10472067 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047206a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1047206d cmp eax, dword ptr [0x1048de3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1048de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472073 jle 0x1047207c */
  if ((C.zf||C.sf!=C.of)) goto L_1047207c;
L_10472075:;
  /* 10472075 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10472077 jmp 0x10472146 */
  goto L_10472146;
L_1047207c:;
  /* 1047207c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047207f mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10472082 cmp edx, dword ptr [0x1048de2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1048de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472088 jle 0x104720a2 */
  if ((C.zf||C.sf!=C.of)) goto L_104720a2;
  /* 1047208a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047208d mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 10472090 cmp ecx, dword ptr [0x1048de3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1048de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472096 jge 0x104720a2 */
  if ((C.sf==C.of)) goto L_104720a2;
  /* 10472098 mov eax, 1 */
  EAX = (0x1u);
  /* 1047209d jmp 0x10472146 */
  goto L_10472146;
L_104720a2:;
  /* 104720a2 jmp 0x104720e7 */
  goto L_104720e7;
L_104720a4:;
  /* 104720a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104720a7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 104720aa cmp eax, dword ptr [0x1048de3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1048de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104720b0 jl 0x104720c0 */
  if ((C.sf!=C.of)) goto L_104720c0;
  /* 104720b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104720b5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 104720b8 cmp edx, dword ptr [0x1048de2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1048de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104720be jle 0x104720c7 */
  if ((C.zf||C.sf!=C.of)) goto L_104720c7;
L_104720c0:;
  /* 104720c0 mov eax, 1 */
  EAX = (0x1u);
  /* 104720c5 jmp 0x10472146 */
  goto L_10472146;
L_104720c7:;
  /* 104720c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104720ca mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 104720cd cmp ecx, dword ptr [0x1048de3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1048de3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104720d3 jle 0x104720e7 */
  if ((C.zf||C.sf!=C.of)) goto L_104720e7;
  /* 104720d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104720d8 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 104720db cmp eax, dword ptr [0x1048de2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1048de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104720e1 jge 0x104720e7 */
  if ((C.sf==C.of)) goto L_104720e7;
  /* 104720e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104720e5 jmp 0x10472146 */
  goto L_10472146;
L_104720e7:;
  /* 104720e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104720ea mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 104720ed imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104720f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104720f3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 104720f5 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104720f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104720fa mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 104720fd imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10472103 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10472105 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1047210b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1047210e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10472111 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 10472114 cmp edx, dword ptr [0x1048de2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1048de2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047211a jne 0x10472132 */
  if (!C.zf) goto L_10472132;
  /* 1047211c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047211f cmp eax, dword ptr [0x1048de30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1048de30))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472125 jl 0x1047212e */
  if ((C.sf!=C.of)) goto L_1047212e;
  /* 10472127 mov eax, 1 */
  EAX = (0x1u);
  /* 1047212c jmp 0x10472146 */
  goto L_10472146;
L_1047212e:;
  /* 1047212e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10472130 jmp 0x10472146 */
  goto L_10472146;
L_10472132:;
  /* 10472132 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10472135 cmp ecx, dword ptr [0x1048de40] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1048de40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047213b jge 0x10472144 */
  if ((C.sf==C.of)) goto L_10472144;
  /* 1047213d mov eax, 1 */
  EAX = (0x1u);
  /* 10472142 jmp 0x10472146 */
  goto L_10472146;
L_10472144:;
  /* 10472144 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10472146:;
  /* 10472146 mov esp, ebp */
  ESP = (EBP);
  /* 10472148 pop ebp */
  EBP = (pop32());
  /* 10472149 ret  */
  ESPCHK(0x10471e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10012150 @ 0x10472150 (504 bytes, 145 insns) */
void f_10472150(void) {
  FTRACE(0x10472150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10472150 push ebp */
  push32((uint32_t)(EBP));
  /* 10472151 mov ebp, esp */
  EBP = (ESP);
  /* 10472153 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10472156 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047215a jne 0x1047222c */
  if (!C.zf) goto L_1047222c;
  /* 10472160 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10472163 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10472166 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10472168 jne 0x10472179 */
  if (!C.zf) goto L_10472179;
  /* 1047216a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1047216d mov edx, dword ptr [ecx*4 + 0x1048de4c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1048de4c)));
  /* 10472174 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 10472177 jmp 0x10472186 */
  goto L_10472186;
L_10472179:;
  /* 10472179 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1047217c mov ecx, dword ptr [eax*4 + 0x1048de80] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1048de80)));
  /* 10472183 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_10472186:;
  /* 10472186 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10472189 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047218c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1047218f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10472192 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10472195 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1047219b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047219e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104721a0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 104721a3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104721a6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 104721a9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 104721ad cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 104721ae mov ecx, 7 */
  ECX = (0x7u);
  /* 104721b3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 104721b5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104721b8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104721bb cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104721be jge 0x104721d9 */
  if ((C.sf==C.of)) goto L_104721d9;
  /* 104721c0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 104721c3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104721c6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104721c9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104721cc imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104721cf add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104721d2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104721d4 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 104721d7 jmp 0x104721ed */
  goto L_104721ed;
L_104721d9:;
  /* 104721d9 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 104721dc sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104721df mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 104721e2 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104721e5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104721e8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104721ea mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_104721ed:;
  /* 104721ed cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104721f1 jne 0x1047222a */
  if (!C.zf) goto L_1047222a;
  /* 104721f3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104721f6 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 104721f9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104721fb jne 0x1047220c */
  if (!C.zf) goto L_1047220c;
  /* 104721fd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10472200 mov eax, dword ptr [edx*4 + 0x1048de50] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1048de50)));
  /* 10472207 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1047220a jmp 0x10472219 */
  goto L_10472219;
L_1047220c:;
  /* 1047220c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1047220f mov edx, dword ptr [ecx*4 + 0x1048de84] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1048de84)));
  /* 10472216 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_10472219:;
  /* 10472219 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047221c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047221f jle 0x1047222a */
  if ((C.zf||C.sf!=C.of)) goto L_1047222a;
  /* 10472221 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10472224 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10472227 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1047222a:;
  /* 1047222a jmp 0x10472261 */
  goto L_10472261;
L_1047222c:;
  /* 1047222c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047222f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10472232 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10472234 jne 0x10472245 */
  if (!C.zf) goto L_10472245;
  /* 10472236 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10472239 mov ecx, dword ptr [eax*4 + 0x1048de4c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1048de4c)));
  /* 10472240 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 10472243 jmp 0x10472252 */
  goto L_10472252;
L_10472245:;
  /* 10472245 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10472248 mov eax, dword ptr [edx*4 + 0x1048de80] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1048de80)));
  /* 1047224f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_10472252:;
  /* 10472252 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 10472255 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10472258 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047225b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047225e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_10472261:;
  /* 10472261 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472265 jne 0x104722a1 */
  if (!C.zf) goto L_104722a1;
  /* 10472267 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047226a mov dword ptr [0x1048de2c], eax */
  w32((uint32_t)(0x1048de2c), (EAX));
  /* 1047226f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 10472272 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10472275 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 10472278 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047227a imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1047227d mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 10472280 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10472282 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 10472288 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 1047228b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047228d mov dword ptr [0x1048de30], ecx */
  w32((uint32_t)(0x1048de30), (ECX));
  /* 10472293 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10472296 mov dword ptr [0x1048de28], edx */
  w32((uint32_t)(0x1048de28), (EDX));
  /* 1047229c jmp 0x10472344 */
  goto L_10472344;
L_104722a1:;
  /* 104722a1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104722a4 mov dword ptr [0x1048de3c], eax */
  w32((uint32_t)(0x1048de3c), (EAX));
  /* 104722a9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 104722ac imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104722af mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 104722b2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104722b4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104722b7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 104722ba add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104722bc imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104722c2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 104722c5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104722c7 mov dword ptr [0x1048de40], ecx */
  w32((uint32_t)(0x1048de40), (ECX));
  /* 104722cd mov edx, dword ptr [0x1048dd98] */
  EDX = (r32((uint32_t)(0x1048dd98)));
  /* 104722d3 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 104722d9 mov eax, dword ptr [0x1048de40] */
  EAX = (r32((uint32_t)(0x1048de40)));
  /* 104722de add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104722e0 mov dword ptr [0x1048de40], eax */
  w32((uint32_t)(0x1048de40), (EAX));
  /* 104722e5 cmp dword ptr [0x1048de40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048de40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104722ec jge 0x10472311 */
  if ((C.sf==C.of)) goto L_10472311;
  /* 104722ee mov ecx, dword ptr [0x1048de40] */
  ECX = (r32((uint32_t)(0x1048de40)));
  /* 104722f4 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104722fa mov dword ptr [0x1048de40], ecx */
  w32((uint32_t)(0x1048de40), (ECX));
  /* 10472300 mov edx, dword ptr [0x1048de3c] */
  EDX = (r32((uint32_t)(0x1048de3c)));
  /* 10472306 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10472309 mov dword ptr [0x1048de3c], edx */
  w32((uint32_t)(0x1048de3c), (EDX));
  /* 1047230f jmp 0x1047233b */
  goto L_1047233b;
L_10472311:;
  /* 10472311 cmp dword ptr [0x1048de40], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x1048de40))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047231b jl 0x1047233b */
  if ((C.sf!=C.of)) goto L_1047233b;
  /* 1047231d mov eax, dword ptr [0x1048de40] */
  EAX = (r32((uint32_t)(0x1048de40)));
  /* 10472322 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10472327 mov dword ptr [0x1048de40], eax */
  w32((uint32_t)(0x1048de40), (EAX));
  /* 1047232c mov ecx, dword ptr [0x1048de3c] */
  ECX = (r32((uint32_t)(0x1048de3c)));
  /* 10472332 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10472335 mov dword ptr [0x1048de3c], ecx */
  w32((uint32_t)(0x1048de3c), (ECX));
L_1047233b:;
  /* 1047233b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047233e mov dword ptr [0x1048de38], edx */
  w32((uint32_t)(0x1048de38), (EDX));
L_10472344:;
  /* 10472344 mov esp, ebp */
  ESP = (EBP);
  /* 10472346 pop ebp */
  EBP = (pop32());
  /* 10472347 ret  */
  ESPCHK(0x10472150u, _esp0);
  ESP += 4; return;
}

/* FUN_10012350 @ 0x10472350 (382 bytes, 135 insns) */
void f_10472350(void) {
  FTRACE(0x10472350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10472350 push ebp */
  push32((uint32_t)(EBP));
  /* 10472351 mov ebp, esp */
  EBP = (ESP);
  /* 10472353 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10472355 push 0x1048a8d8 */
  push32((uint32_t)(0x1048a8d8u));
  /* 1047235a push 0x1046c018 */
  push32((uint32_t)(0x1046c018u));
  /* 1047235f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10472365 push eax */
  push32((uint32_t)(EAX));
  /* 10472366 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1047236d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10472370 push ebx */
  push32((uint32_t)(EBX));
  /* 10472371 push esi */
  push32((uint32_t)(ESI));
  /* 10472372 push edi */
  push32((uint32_t)(EDI));
  /* 10472373 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10472376 cmp dword ptr [0x1048e7dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e7dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047237d jne 0x104723c2 */
  if (!C.zf) goto L_104723c2;
  /* 1047237f push 0 */
  push32((uint32_t)(0x0u));
  /* 10472381 push 0 */
  push32((uint32_t)(0x0u));
  /* 10472383 push 1 */
  push32((uint32_t)(0x1u));
  /* 10472385 push 0 */
  push32((uint32_t)(0x0u));
  /* 10472387 call dword ptr [0x10490244] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490244))), 0x1047238du);
  /* 1047238d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047238f je 0x1047239d */
  if (C.zf) goto L_1047239d;
  /* 10472391 mov dword ptr [0x1048e7dc], 1 */
  w32((uint32_t)(0x1048e7dc), (0x1u));
  /* 1047239b jmp 0x104723c2 */
  goto L_104723c2;
L_1047239d:;
  /* 1047239d push 0 */
  push32((uint32_t)(0x0u));
  /* 1047239f push 0 */
  push32((uint32_t)(0x0u));
  /* 104723a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 104723a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 104723a5 call dword ptr [0x1049025c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1049025c))), 0x104723abu);
  /* 104723ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104723ad je 0x104723bb */
  if (C.zf) goto L_104723bb;
  /* 104723af mov dword ptr [0x1048e7dc], 2 */
  w32((uint32_t)(0x1048e7dc), (0x2u));
  /* 104723b9 jmp 0x104723c2 */
  goto L_104723c2;
L_104723bb:;
  /* 104723bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104723bd jmp 0x104724d1 */
  goto L_104724d1;
L_104723c2:;
  /* 104723c2 cmp dword ptr [0x1048e7dc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1048e7dc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104723c9 jne 0x104723e6 */
  if (!C.zf) goto L_104723e6;
  /* 104723cb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 104723ce push eax */
  push32((uint32_t)(EAX));
  /* 104723cf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104723d2 push ecx */
  push32((uint32_t)(ECX));
  /* 104723d3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104723d6 push edx */
  push32((uint32_t)(EDX));
  /* 104723d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104723da push eax */
  push32((uint32_t)(EAX));
  /* 104723db call dword ptr [0x10490244] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490244))), 0x104723e1u);
  /* 104723e1 jmp 0x104724d1 */
  goto L_104724d1;
L_104723e6:;
  /* 104723e6 cmp dword ptr [0x1048e7dc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1048e7dc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104723ed jne 0x104724cf */
  if (!C.zf) goto L_104724cf;
  /* 104723f3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104723f7 jne 0x10472402 */
  if (!C.zf) goto L_10472402;
  /* 104723f9 mov ecx, dword ptr [0x1048e690] */
  ECX = (r32((uint32_t)(0x1048e690)));
  /* 104723ff mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_10472402:;
  /* 10472402 push 0 */
  push32((uint32_t)(0x0u));
  /* 10472404 push 0 */
  push32((uint32_t)(0x0u));
  /* 10472406 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10472409 push edx */
  push32((uint32_t)(EDX));
  /* 1047240a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047240d push eax */
  push32((uint32_t)(EAX));
  /* 1047240e call dword ptr [0x1049025c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1049025c))), 0x10472414u);
  /* 10472414 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10472417 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047241b jne 0x10472424 */
  if (!C.zf) goto L_10472424;
  /* 1047241d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047241f jmp 0x104724d1 */
  goto L_104724d1;
L_10472424:;
  /* 10472424 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1047242b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1047242e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10472431 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10472433 call 0x104660b0 */
  push32(0x10472438u); f_104660b0();
  /* 10472438 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 1047243b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1047243e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 10472441 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 10472444 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1047244b jmp 0x10472464 */
  goto L_10472464;
  /* 1047244d mov eax, 1 */
  EAX = (0x1u);
  /* 10472452 ret  */
  ESPCHK(0x10472350u, _esp0);
  ESP += 4; return;
  /* 10472453 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10472456 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1047245d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10472464:;
  /* 10472464 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472468 jne 0x1047246e */
  if (!C.zf) goto L_1047246e;
  /* 1047246a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047246c jmp 0x104724d1 */
  goto L_104724d1;
L_1047246e:;
  /* 1047246e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10472471 push edx */
  push32((uint32_t)(EDX));
  /* 10472472 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10472475 push eax */
  push32((uint32_t)(EAX));
  /* 10472476 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10472479 push ecx */
  push32((uint32_t)(ECX));
  /* 1047247a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047247d push edx */
  push32((uint32_t)(EDX));
  /* 1047247e call dword ptr [0x1049025c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1049025c))), 0x10472484u);
  /* 10472484 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10472486 jne 0x1047248c */
  if (!C.zf) goto L_1047248c;
  /* 10472488 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047248a jmp 0x104724d1 */
  goto L_104724d1;
L_1047248c:;
  /* 1047248c cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472490 jne 0x104724ad */
  if (!C.zf) goto L_104724ad;
  /* 10472492 push 0 */
  push32((uint32_t)(0x0u));
  /* 10472494 push 0 */
  push32((uint32_t)(0x0u));
  /* 10472496 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10472498 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1047249b push eax */
  push32((uint32_t)(EAX));
  /* 1047249c push 1 */
  push32((uint32_t)(0x1u));
  /* 1047249e mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 104724a1 push ecx */
  push32((uint32_t)(ECX));
  /* 104724a2 call dword ptr [0x1049031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1049031c))), 0x104724a8u);
  /* 104724a8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 104724ab jmp 0x104724ca */
  goto L_104724ca;
L_104724ad:;
  /* 104724ad mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 104724b0 push edx */
  push32((uint32_t)(EDX));
  /* 104724b1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104724b4 push eax */
  push32((uint32_t)(EAX));
  /* 104724b5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 104724b7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 104724ba push ecx */
  push32((uint32_t)(ECX));
  /* 104724bb push 1 */
  push32((uint32_t)(0x1u));
  /* 104724bd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 104724c0 push edx */
  push32((uint32_t)(EDX));
  /* 104724c1 call dword ptr [0x1049031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1049031c))), 0x104724c7u);
  /* 104724c7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_104724ca:;
  /* 104724ca mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 104724cd jmp 0x104724d1 */
  goto L_104724d1;
L_104724cf:;
  /* 104724cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104724d1:;
  /* 104724d1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 104724d4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104724d7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 104724de pop edi */
  EDI = (pop32());
  /* 104724df pop esi */
  ESI = (pop32());
  /* 104724e0 pop ebx */
  EBX = (pop32());
  /* 104724e1 mov esp, ebp */
  ESP = (EBP);
  /* 104724e3 pop ebp */
  EBP = (pop32());
  /* 104724e4 ret  */
  ESPCHK(0x10472350u, _esp0);
  ESP += 4; return;
}

/* FUN_100124f0 @ 0x104724f0 (398 bytes, 140 insns) */
void f_104724f0(void) {
  FTRACE(0x104724f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104724f0 push ebp */
  push32((uint32_t)(EBP));
  /* 104724f1 mov ebp, esp */
  EBP = (ESP);
  /* 104724f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 104724f5 push 0x1048a8e8 */
  push32((uint32_t)(0x1048a8e8u));
  /* 104724fa push 0x1046c018 */
  push32((uint32_t)(0x1046c018u));
  /* 104724ff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10472505 push eax */
  push32((uint32_t)(EAX));
  /* 10472506 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1047250d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10472510 push ebx */
  push32((uint32_t)(EBX));
  /* 10472511 push esi */
  push32((uint32_t)(ESI));
  /* 10472512 push edi */
  push32((uint32_t)(EDI));
  /* 10472513 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10472516 cmp dword ptr [0x1048e7e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e7e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047251d jne 0x10472562 */
  if (!C.zf) goto L_10472562;
  /* 1047251f push 0 */
  push32((uint32_t)(0x0u));
  /* 10472521 push 0 */
  push32((uint32_t)(0x0u));
  /* 10472523 push 1 */
  push32((uint32_t)(0x1u));
  /* 10472525 push 0 */
  push32((uint32_t)(0x0u));
  /* 10472527 call dword ptr [0x10490244] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490244))), 0x1047252du);
  /* 1047252d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047252f je 0x1047253d */
  if (C.zf) goto L_1047253d;
  /* 10472531 mov dword ptr [0x1048e7e0], 1 */
  w32((uint32_t)(0x1048e7e0), (0x1u));
  /* 1047253b jmp 0x10472562 */
  goto L_10472562;
L_1047253d:;
  /* 1047253d push 0 */
  push32((uint32_t)(0x0u));
  /* 1047253f push 0 */
  push32((uint32_t)(0x0u));
  /* 10472541 push 1 */
  push32((uint32_t)(0x1u));
  /* 10472543 push 0 */
  push32((uint32_t)(0x0u));
  /* 10472545 call dword ptr [0x1049025c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1049025c))), 0x1047254bu);
  /* 1047254b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047254d je 0x1047255b */
  if (C.zf) goto L_1047255b;
  /* 1047254f mov dword ptr [0x1048e7e0], 2 */
  w32((uint32_t)(0x1048e7e0), (0x2u));
  /* 10472559 jmp 0x10472562 */
  goto L_10472562;
L_1047255b:;
  /* 1047255b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047255d jmp 0x10472681 */
  goto L_10472681;
L_10472562:;
  /* 10472562 cmp dword ptr [0x1048e7e0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1048e7e0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472569 jne 0x10472586 */
  if (!C.zf) goto L_10472586;
  /* 1047256b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1047256e push eax */
  push32((uint32_t)(EAX));
  /* 1047256f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10472572 push ecx */
  push32((uint32_t)(ECX));
  /* 10472573 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10472576 push edx */
  push32((uint32_t)(EDX));
  /* 10472577 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047257a push eax */
  push32((uint32_t)(EAX));
  /* 1047257b call dword ptr [0x1049025c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1049025c))), 0x10472581u);
  /* 10472581 jmp 0x10472681 */
  goto L_10472681;
L_10472586:;
  /* 10472586 cmp dword ptr [0x1048e7e0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1048e7e0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047258d jne 0x1047267f */
  if (!C.zf) goto L_1047267f;
  /* 10472593 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472597 jne 0x104725a2 */
  if (!C.zf) goto L_104725a2;
  /* 10472599 mov ecx, dword ptr [0x1048e690] */
  ECX = (r32((uint32_t)(0x1048e690)));
  /* 1047259f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_104725a2:;
  /* 104725a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 104725a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 104725a6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104725a9 push edx */
  push32((uint32_t)(EDX));
  /* 104725aa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104725ad push eax */
  push32((uint32_t)(EAX));
  /* 104725ae call dword ptr [0x10490244] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490244))), 0x104725b4u);
  /* 104725b4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 104725b7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104725bb jne 0x104725c4 */
  if (!C.zf) goto L_104725c4;
  /* 104725bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104725bf jmp 0x10472681 */
  goto L_10472681;
L_104725c4:;
  /* 104725c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 104725cb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 104725ce shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 104725d0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104725d3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 104725d5 call 0x104660b0 */
  push32(0x104725dau); f_104660b0();
  /* 104725da mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 104725dd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 104725e0 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 104725e3 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 104725e6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 104725ed jmp 0x10472606 */
  goto L_10472606;
  /* 104725ef mov eax, 1 */
  EAX = (0x1u);
  /* 104725f4 ret  */
  ESPCHK(0x104724f0u, _esp0);
  ESP += 4; return;
  /* 104725f5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 104725f8 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 104725ff mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10472606:;
  /* 10472606 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047260a jne 0x10472610 */
  if (!C.zf) goto L_10472610;
  /* 1047260c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047260e jmp 0x10472681 */
  goto L_10472681;
L_10472610:;
  /* 10472610 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10472613 push edx */
  push32((uint32_t)(EDX));
  /* 10472614 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10472617 push eax */
  push32((uint32_t)(EAX));
  /* 10472618 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047261b push ecx */
  push32((uint32_t)(ECX));
  /* 1047261c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047261f push edx */
  push32((uint32_t)(EDX));
  /* 10472620 call dword ptr [0x10490244] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490244))), 0x10472626u);
  /* 10472626 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10472628 jne 0x1047262e */
  if (!C.zf) goto L_1047262e;
  /* 1047262a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047262c jmp 0x10472681 */
  goto L_10472681;
L_1047262e:;
  /* 1047262e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472632 jne 0x10472656 */
  if (!C.zf) goto L_10472656;
  /* 10472634 push 0 */
  push32((uint32_t)(0x0u));
  /* 10472636 push 0 */
  push32((uint32_t)(0x0u));
  /* 10472638 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047263a push 0 */
  push32((uint32_t)(0x0u));
  /* 1047263c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1047263e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10472641 push eax */
  push32((uint32_t)(EAX));
  /* 10472642 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 10472647 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1047264a push ecx */
  push32((uint32_t)(ECX));
  /* 1047264b call dword ptr [0x104902ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902ec))), 0x10472651u);
  /* 10472651 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 10472654 jmp 0x1047267a */
  goto L_1047267a;
L_10472656:;
  /* 10472656 push 0 */
  push32((uint32_t)(0x0u));
  /* 10472658 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047265a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1047265d push edx */
  push32((uint32_t)(EDX));
  /* 1047265e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10472661 push eax */
  push32((uint32_t)(EAX));
  /* 10472662 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10472664 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10472667 push ecx */
  push32((uint32_t)(ECX));
  /* 10472668 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1047266d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10472670 push edx */
  push32((uint32_t)(EDX));
  /* 10472671 call dword ptr [0x104902ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902ec))), 0x10472677u);
  /* 10472677 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_1047267a:;
  /* 1047267a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1047267d jmp 0x10472681 */
  goto L_10472681;
L_1047267f:;
  /* 1047267f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10472681:;
  /* 10472681 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 10472684 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10472687 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1047268e pop edi */
  EDI = (pop32());
  /* 1047268f pop esi */
  ESI = (pop32());
  /* 10472690 pop ebx */
  EBX = (pop32());
  /* 10472691 mov esp, ebp */
  ESP = (EBP);
  /* 10472693 pop ebp */
  EBP = (pop32());
  /* 10472694 ret  */
  ESPCHK(0x104724f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100126a0 @ 0x104726a0 (11 bytes, 6 insns) */
void f_104726a0(void) {
  FTRACE(0x104726a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104726a0 push ebp */
  push32((uint32_t)(EBP));
  /* 104726a1 mov ebp, esp */
  EBP = (ESP);
  /* 104726a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104726a6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104726a9 pop ebp */
  EBP = (pop32());
  /* 104726aa ret  */
  ESPCHK(0x104726a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100126b0 @ 0x104726b0 (147 bytes, 43 insns) */
void f_104726b0(void) {
  FTRACE(0x104726b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104726b0 push ebp */
  push32((uint32_t)(EBP));
  /* 104726b1 mov ebp, esp */
  EBP = (ESP);
  /* 104726b3 push ecx */
  push32((uint32_t)(ECX));
  /* 104726b4 cmp dword ptr [0x1048e680], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e680))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104726bb jne 0x104726d7 */
  if (!C.zf) goto L_104726d7;
  /* 104726bd cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104726c1 jl 0x104726d2 */
  if ((C.sf!=C.of)) goto L_104726d2;
  /* 104726c3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104726c7 jg 0x104726d2 */
  if ((!C.zf&&C.sf==C.of)) goto L_104726d2;
  /* 104726c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104726cc add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 104726cf mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_104726d2:;
  /* 104726d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104726d5 jmp 0x1047273f */
  goto L_1047273f;
L_104726d7:;
  /* 104726d7 push 0x1048e80c */
  push32((uint32_t)(0x1048e80cu));
  /* 104726dc call dword ptr [0x10490294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490294))), 0x104726e2u);
  /* 104726e2 cmp dword ptr [0x1048e7fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e7fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104726e9 je 0x10472709 */
  if (C.zf) goto L_10472709;
  /* 104726eb push 0x1048e80c */
  push32((uint32_t)(0x1048e80cu));
  /* 104726f0 call dword ptr [0x10490284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490284))), 0x104726f6u);
  /* 104726f6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 104726f8 call 0x10466910 */
  push32(0x104726fdu); f_10466910();
  /* 104726fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10472700 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10472707 jmp 0x10472710 */
  goto L_10472710;
L_10472709:;
  /* 10472709 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10472710:;
  /* 10472710 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10472713 push ecx */
  push32((uint32_t)(ECX));
  /* 10472714 call 0x10472750 */
  push32(0x10472719u); f_10472750();
  /* 10472719 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047271c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1047271f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472723 je 0x10472731 */
  if (C.zf) goto L_10472731;
  /* 10472725 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 10472727 call 0x104669b0 */
  push32(0x1047272cu); f_104669b0();
  /* 1047272c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047272f jmp 0x1047273c */
  goto L_1047273c;
L_10472731:;
  /* 10472731 push 0x1048e80c */
  push32((uint32_t)(0x1048e80cu));
  /* 10472736 call dword ptr [0x10490284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490284))), 0x1047273cu);
L_1047273c:;
  /* 1047273c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_1047273f:;
  /* 1047273f mov esp, ebp */
  ESP = (EBP);
  /* 10472741 pop ebp */
  EBP = (pop32());
  /* 10472742 ret  */
  ESPCHK(0x104726b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012750 @ 0x10472750 (299 bytes, 91 insns) */
void f_10472750(void) {
  FTRACE(0x10472750u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10472750 push ebp */
  push32((uint32_t)(EBP));
  /* 10472751 mov ebp, esp */
  EBP = (ESP);
  /* 10472753 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10472756 cmp dword ptr [0x1048e680], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e680))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047275d jne 0x1047277c */
  if (!C.zf) goto L_1047277c;
  /* 1047275f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472763 jl 0x10472774 */
  if ((C.sf!=C.of)) goto L_10472774;
  /* 10472765 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472769 jg 0x10472774 */
  if ((!C.zf&&C.sf==C.of)) goto L_10472774;
  /* 1047276b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047276e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10472771 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_10472774:;
  /* 10472774 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10472777 jmp 0x10472877 */
  goto L_10472877;
L_1047277c:;
  /* 1047277c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472783 jge 0x104727c3 */
  if ((C.sf==C.of)) goto L_104727c3;
  /* 10472785 cmp dword ptr [0x1048cea4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1048cea4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047278c jle 0x104727a1 */
  if ((C.zf||C.sf!=C.of)) goto L_104727a1;
  /* 1047278e push 1 */
  push32((uint32_t)(0x1u));
  /* 10472790 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10472793 push ecx */
  push32((uint32_t)(ECX));
  /* 10472794 call 0x10468f20 */
  push32(0x10472799u); f_10468f20();
  /* 10472799 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047279c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1047279f jmp 0x104727b5 */
  goto L_104727b5;
L_104727a1:;
  /* 104727a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104727a4 mov eax, dword ptr [0x1048cc98] */
  EAX = (r32((uint32_t)(0x1048cc98)));
  /* 104727a9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104727ab mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 104727af and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 104727b2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_104727b5:;
  /* 104727b5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104727b9 jne 0x104727c3 */
  if (!C.zf) goto L_104727c3;
  /* 104727bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104727be jmp 0x10472877 */
  goto L_10472877;
L_104727c3:;
  /* 104727c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104727c6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 104727c9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 104727cf and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 104727d5 mov eax, dword ptr [0x1048cc98] */
  EAX = (r32((uint32_t)(0x1048cc98)));
  /* 104727da xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104727dc mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 104727e0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 104727e6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104727e8 je 0x1047280c */
  if (C.zf) goto L_1047280c;
  /* 104727ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104727ed sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 104727f0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 104727f6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 104727f9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 104727fc mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 104727ff mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 10472803 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1047280a jmp 0x1047281d */
  goto L_1047281d;
L_1047280c:;
  /* 1047280c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 1047280f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 10472812 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 10472816 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_1047281d:;
  /* 1047281d push 1 */
  push32((uint32_t)(0x1u));
  /* 1047281f push 0 */
  push32((uint32_t)(0x0u));
  /* 10472821 push 3 */
  push32((uint32_t)(0x3u));
  /* 10472823 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 10472826 push edx */
  push32((uint32_t)(EDX));
  /* 10472827 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047282a push eax */
  push32((uint32_t)(EAX));
  /* 1047282b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 1047282e push ecx */
  push32((uint32_t)(ECX));
  /* 1047282f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 10472834 mov edx, dword ptr [0x1048e680] */
  EDX = (r32((uint32_t)(0x1048e680)));
  /* 1047283a push edx */
  push32((uint32_t)(EDX));
  /* 1047283b call 0x1046b300 */
  push32(0x10472840u); f_1046b300();
  /* 10472840 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10472843 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10472846 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047284a jne 0x10472851 */
  if (!C.zf) goto L_10472851;
  /* 1047284c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047284f jmp 0x10472877 */
  goto L_10472877;
L_10472851:;
  /* 10472851 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472855 jne 0x10472861 */
  if (!C.zf) goto L_10472861;
  /* 10472857 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047285a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1047285f jmp 0x10472877 */
  goto L_10472877;
L_10472861:;
  /* 10472861 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10472864 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10472869 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 1047286c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10472872 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10472875 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_10472877:;
  /* 10472877 mov esp, ebp */
  ESP = (EBP);
  /* 10472879 pop ebp */
  EBP = (pop32());
  /* 1047287a ret  */
  ESPCHK(0x10472750u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x10472880 (52 bytes, 19 insns) */
void f_10472880(void) {
  FTRACE(0x10472880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10472880 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10472884 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 10472888 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1047288a mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1047288e jne 0x10472899 */
  if (!C.zf) goto L_10472899;
  /* 10472890 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10472894 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 10472896 ret 0x10 */
  ESPCHK(0x10472880u, _esp0);
  ESP += 20; return;
L_10472899:;
  /* 10472899 push ebx */
  push32((uint32_t)(EBX));
  /* 1047289a mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 1047289c mov ebx, eax */
  EBX = (EAX);
  /* 1047289e mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 104728a2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 104728a6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 104728a8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 104728ac mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 104728ae add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104728b0 pop ebx */
  EBX = (pop32());
  /* 104728b1 ret 0x10 */
  ESPCHK(0x10472880u, _esp0);
  ESP += 20; return;
}

/* FUN_100128c0 @ 0x104728c0 (46 bytes, 18 insns) */
void f_104728c0(void) {
  FTRACE(0x104728c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104728c0 push ebp */
  push32((uint32_t)(EBP));
  /* 104728c1 mov ebp, esp */
  EBP = (ESP);
  /* 104728c3 push ecx */
  push32((uint32_t)(ECX));
  /* 104728c4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 104728c6 call 0x10466910 */
  push32(0x104728cbu); f_10466910();
  /* 104728cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104728ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104728d1 push eax */
  push32((uint32_t)(EAX));
  /* 104728d2 call 0x104728f0 */
  push32(0x104728d7u); f_104728f0();
  /* 104728d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104728da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104728dd push 0xc */
  push32((uint32_t)(0xcu));
  /* 104728df call 0x104669b0 */
  push32(0x104728e4u); f_104669b0();
  /* 104728e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104728e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104728ea mov esp, ebp */
  ESP = (EBP);
  /* 104728ec pop ebp */
  EBP = (pop32());
  /* 104728ed ret  */
  ESPCHK(0x104728c0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x104728f0 (198 bytes, 69 insns) */
void f_104728f0(void) {
  FTRACE(0x104728f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104728f0 push ebp */
  push32((uint32_t)(EBP));
  /* 104728f1 mov ebp, esp */
  EBP = (ESP);
  /* 104728f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104728f6 mov eax, dword ptr [0x1048e49c] */
  EAX = (r32((uint32_t)(0x1048e49c)));
  /* 104728fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104728fe cmp dword ptr [0x1048ffa0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048ffa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472905 jne 0x1047290e */
  if (!C.zf) goto L_1047290e;
  /* 10472907 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10472909 jmp 0x104729b2 */
  goto L_104729b2;
L_1047290e:;
  /* 1047290e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472912 jne 0x10472936 */
  if (!C.zf) goto L_10472936;
  /* 10472914 cmp dword ptr [0x1048e4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047291b je 0x10472936 */
  if (C.zf) goto L_10472936;
  /* 1047291d call 0x10472a10 */
  push32(0x10472922u); f_10472a10();
  /* 10472922 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10472924 je 0x1047292d */
  if (C.zf) goto L_1047292d;
  /* 10472926 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10472928 jmp 0x104729b2 */
  goto L_104729b2;
L_1047292d:;
  /* 1047292d mov ecx, dword ptr [0x1048e49c] */
  ECX = (r32((uint32_t)(0x1048e49c)));
  /* 10472933 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_10472936:;
  /* 10472936 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047293a je 0x104729b0 */
  if (C.zf) goto L_104729b0;
  /* 1047293c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472940 je 0x104729b0 */
  if (C.zf) goto L_104729b0;
  /* 10472942 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10472945 push edx */
  push32((uint32_t)(EDX));
  /* 10472946 call 0x10465d40 */
  push32(0x1047294bu); f_10465d40();
  /* 1047294b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047294e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10472951:;
  /* 10472951 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10472954 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472957 je 0x104729b0 */
  if (C.zf) goto L_104729b0;
  /* 10472959 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047295c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1047295e push edx */
  push32((uint32_t)(EDX));
  /* 1047295f call 0x10465d40 */
  push32(0x10472964u); f_10465d40();
  /* 10472964 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10472967 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047296a jbe 0x104729a5 */
  if ((C.cf||C.zf)) goto L_104729a5;
  /* 1047296c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047296f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 10472971 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10472974 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 10472978 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047297b jne 0x104729a5 */
  if (!C.zf) goto L_104729a5;
  /* 1047297d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10472980 push ecx */
  push32((uint32_t)(ECX));
  /* 10472981 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10472984 push edx */
  push32((uint32_t)(EDX));
  /* 10472985 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10472988 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1047298a push ecx */
  push32((uint32_t)(ECX));
  /* 1047298b call 0x104729c0 */
  push32(0x10472990u); f_104729c0();
  /* 10472990 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10472993 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10472995 jne 0x104729a5 */
  if (!C.zf) goto L_104729a5;
  /* 10472997 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047299a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1047299c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047299f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 104729a3 jmp 0x104729b2 */
  goto L_104729b2;
L_104729a5:;
  /* 104729a5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104729a8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104729ab mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 104729ae jmp 0x10472951 */
  goto L_10472951;
L_104729b0:;
  /* 104729b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104729b2:;
  /* 104729b2 mov esp, ebp */
  ESP = (EBP);
  /* 104729b4 pop ebp */
  EBP = (pop32());
  /* 104729b5 ret  */
  ESPCHK(0x104728f0u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x104729c0 (79 bytes, 32 insns) */
void f_104729c0(void) {
  FTRACE(0x104729c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104729c0 push ebp */
  push32((uint32_t)(EBP));
  /* 104729c1 mov ebp, esp */
  EBP = (ESP);
  /* 104729c3 push ecx */
  push32((uint32_t)(ECX));
  /* 104729c4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104729c8 jne 0x104729ce */
  if (!C.zf) goto L_104729ce;
  /* 104729ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104729cc jmp 0x10472a0b */
  goto L_10472a0b;
L_104729ce:;
  /* 104729ce mov eax, dword ptr [0x1048fb64] */
  EAX = (r32((uint32_t)(0x1048fb64)));
  /* 104729d3 push eax */
  push32((uint32_t)(EAX));
  /* 104729d4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 104729d7 push ecx */
  push32((uint32_t)(ECX));
  /* 104729d8 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 104729db push edx */
  push32((uint32_t)(EDX));
  /* 104729dc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 104729df push eax */
  push32((uint32_t)(EAX));
  /* 104729e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 104729e3 push ecx */
  push32((uint32_t)(ECX));
  /* 104729e4 push 1 */
  push32((uint32_t)(0x1u));
  /* 104729e6 mov edx, dword ptr [0x1048fe04] */
  EDX = (r32((uint32_t)(0x1048fe04)));
  /* 104729ec push edx */
  push32((uint32_t)(EDX));
  /* 104729ed call 0x10472ac0 */
  push32(0x104729f2u); f_10472ac0();
  /* 104729f2 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104729f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104729f8 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104729fc jne 0x10472a05 */
  if (!C.zf) goto L_10472a05;
  /* 104729fe mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 10472a03 jmp 0x10472a0b */
  goto L_10472a0b;
L_10472a05:;
  /* 10472a05 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10472a08 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_10472a0b:;
  /* 10472a0b mov esp, ebp */
  ESP = (EBP);
  /* 10472a0d pop ebp */
  EBP = (pop32());
  /* 10472a0e ret  */
  ESPCHK(0x104729c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012a10 @ 0x10472a10 (174 bytes, 66 insns) */
void f_10472a10(void) {
  FTRACE(0x10472a10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10472a10 push ebp */
  push32((uint32_t)(EBP));
  /* 10472a11 mov ebp, esp */
  EBP = (ESP);
  /* 10472a13 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10472a16 mov eax, dword ptr [0x1048e4a4] */
  EAX = (r32((uint32_t)(0x1048e4a4)));
  /* 10472a1b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10472a1e:;
  /* 10472a1e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10472a21 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472a24 je 0x10472ab8 */
  if (C.zf) goto L_10472ab8;
  /* 10472a2a push 0 */
  push32((uint32_t)(0x0u));
  /* 10472a2c push 0 */
  push32((uint32_t)(0x0u));
  /* 10472a2e push 0 */
  push32((uint32_t)(0x0u));
  /* 10472a30 push 0 */
  push32((uint32_t)(0x0u));
  /* 10472a32 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10472a34 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10472a37 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10472a39 push eax */
  push32((uint32_t)(EAX));
  /* 10472a3a push 0 */
  push32((uint32_t)(0x0u));
  /* 10472a3c push 1 */
  push32((uint32_t)(0x1u));
  /* 10472a3e call dword ptr [0x104902ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902ec))), 0x10472a44u);
  /* 10472a44 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10472a47 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472a4b jne 0x10472a52 */
  if (!C.zf) goto L_10472a52;
  /* 10472a4d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10472a50 jmp 0x10472aba */
  goto L_10472aba;
L_10472a52:;
  /* 10472a52 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10472a54 push 0x1048a8f4 */
  push32((uint32_t)(0x1048a8f4u));
  /* 10472a59 push 2 */
  push32((uint32_t)(0x2u));
  /* 10472a5b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10472a5e push ecx */
  push32((uint32_t)(ECX));
  /* 10472a5f call 0x10462f10 */
  push32(0x10472a64u); f_10462f10();
  /* 10472a64 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10472a67 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10472a6a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472a6e jne 0x10472a75 */
  if (!C.zf) goto L_10472a75;
  /* 10472a70 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10472a73 jmp 0x10472aba */
  goto L_10472aba;
L_10472a75:;
  /* 10472a75 push 0 */
  push32((uint32_t)(0x0u));
  /* 10472a77 push 0 */
  push32((uint32_t)(0x0u));
  /* 10472a79 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10472a7c push edx */
  push32((uint32_t)(EDX));
  /* 10472a7d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10472a80 push eax */
  push32((uint32_t)(EAX));
  /* 10472a81 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10472a83 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10472a86 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10472a88 push edx */
  push32((uint32_t)(EDX));
  /* 10472a89 push 0 */
  push32((uint32_t)(0x0u));
  /* 10472a8b push 1 */
  push32((uint32_t)(0x1u));
  /* 10472a8d call dword ptr [0x104902ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x104902ec))), 0x10472a93u);
  /* 10472a93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10472a95 jne 0x10472a9c */
  if (!C.zf) goto L_10472a9c;
  /* 10472a97 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10472a9a jmp 0x10472aba */
  goto L_10472aba;
L_10472a9c:;
  /* 10472a9c push 0 */
  push32((uint32_t)(0x0u));
  /* 10472a9e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10472aa1 push eax */
  push32((uint32_t)(EAX));
  /* 10472aa2 call 0x10472f10 */
  push32(0x10472aa7u); f_10472f10();
  /* 10472aa7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10472aaa mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10472aad add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10472ab0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 10472ab3 jmp 0x10472a1e */
  goto L_10472a1e;
L_10472ab8:;
  /* 10472ab8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10472aba:;
  /* 10472aba mov esp, ebp */
  ESP = (EBP);
  /* 10472abc pop ebp */
  EBP = (pop32());
  /* 10472abd ret  */
  ESPCHK(0x10472a10u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ac0 @ 0x10472ac0 (970 bytes, 340 insns) */
void f_10472ac0(void) {
  FTRACE(0x10472ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10472ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 10472ac1 mov ebp, esp */
  EBP = (ESP);
  /* 10472ac3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10472ac5 push 0x1048a948 */
  push32((uint32_t)(0x1048a948u));
  /* 10472aca push 0x1046c018 */
  push32((uint32_t)(0x1046c018u));
  /* 10472acf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 10472ad5 push eax */
  push32((uint32_t)(EAX));
  /* 10472ad6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 10472add add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10472ae0 push ebx */
  push32((uint32_t)(EBX));
  /* 10472ae1 push esi */
  push32((uint32_t)(ESI));
  /* 10472ae2 push edi */
  push32((uint32_t)(EDI));
  /* 10472ae3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10472ae6 cmp dword ptr [0x1048e7e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e7e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472aed jne 0x10472b46 */
  if (!C.zf) goto L_10472b46;
  /* 10472aef push 1 */
  push32((uint32_t)(0x1u));
  /* 10472af1 push 0x10489fa4 */
  push32((uint32_t)(0x10489fa4u));
  /* 10472af6 push 1 */
  push32((uint32_t)(0x1u));
  /* 10472af8 push 0x10489fa4 */
  push32((uint32_t)(0x10489fa4u));
  /* 10472afd push 0 */
  push32((uint32_t)(0x0u));
  /* 10472aff push 0 */
  push32((uint32_t)(0x0u));
  /* 10472b01 call dword ptr [0x10490240] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490240))), 0x10472b07u);
  /* 10472b07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10472b09 je 0x10472b17 */
  if (C.zf) goto L_10472b17;
  /* 10472b0b mov dword ptr [0x1048e7e4], 1 */
  w32((uint32_t)(0x1048e7e4), (0x1u));
  /* 10472b15 jmp 0x10472b46 */
  goto L_10472b46;
L_10472b17:;
  /* 10472b17 push 1 */
  push32((uint32_t)(0x1u));
  /* 10472b19 push 0x10489fa0 */
  push32((uint32_t)(0x10489fa0u));
  /* 10472b1e push 1 */
  push32((uint32_t)(0x1u));
  /* 10472b20 push 0x10489fa0 */
  push32((uint32_t)(0x10489fa0u));
  /* 10472b25 push 0 */
  push32((uint32_t)(0x0u));
  /* 10472b27 push 0 */
  push32((uint32_t)(0x0u));
  /* 10472b29 call dword ptr [0x1049024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1049024c))), 0x10472b2fu);
  /* 10472b2f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10472b31 je 0x10472b3f */
  if (C.zf) goto L_10472b3f;
  /* 10472b33 mov dword ptr [0x1048e7e4], 2 */
  w32((uint32_t)(0x1048e7e4), (0x2u));
  /* 10472b3d jmp 0x10472b46 */
  goto L_10472b46;
L_10472b3f:;
  /* 10472b3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10472b41 jmp 0x10472ea4 */
  goto L_10472ea4;
L_10472b46:;
  /* 10472b46 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472b4a jle 0x10472b5f */
  if ((C.zf||C.sf!=C.of)) goto L_10472b5f;
  /* 10472b4c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10472b4f push eax */
  push32((uint32_t)(EAX));
  /* 10472b50 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10472b53 push ecx */
  push32((uint32_t)(ECX));
  /* 10472b54 call 0x10472ec0 */
  push32(0x10472b59u); f_10472ec0();
  /* 10472b59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10472b5c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_10472b5f:;
  /* 10472b5f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472b63 jle 0x10472b78 */
  if ((C.zf||C.sf!=C.of)) goto L_10472b78;
  /* 10472b65 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10472b68 push edx */
  push32((uint32_t)(EDX));
  /* 10472b69 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10472b6c push eax */
  push32((uint32_t)(EAX));
  /* 10472b6d call 0x10472ec0 */
  push32(0x10472b72u); f_10472ec0();
  /* 10472b72 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10472b75 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_10472b78:;
  /* 10472b78 cmp dword ptr [0x1048e7e4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x1048e7e4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472b7f jne 0x10472ba4 */
  if (!C.zf) goto L_10472ba4;
  /* 10472b81 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10472b84 push ecx */
  push32((uint32_t)(ECX));
  /* 10472b85 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10472b88 push edx */
  push32((uint32_t)(EDX));
  /* 10472b89 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 10472b8c push eax */
  push32((uint32_t)(EAX));
  /* 10472b8d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10472b90 push ecx */
  push32((uint32_t)(ECX));
  /* 10472b91 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10472b94 push edx */
  push32((uint32_t)(EDX));
  /* 10472b95 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10472b98 push eax */
  push32((uint32_t)(EAX));
  /* 10472b99 call dword ptr [0x1049024c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1049024c))), 0x10472b9fu);
  /* 10472b9f jmp 0x10472ea4 */
  goto L_10472ea4;
L_10472ba4:;
  /* 10472ba4 cmp dword ptr [0x1048e7e4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1048e7e4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472bab jne 0x10472ea2 */
  if (!C.zf) goto L_10472ea2;
  /* 10472bb1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472bb5 jne 0x10472bc0 */
  if (!C.zf) goto L_10472bc0;
  /* 10472bb7 mov ecx, dword ptr [0x1048e690] */
  ECX = (r32((uint32_t)(0x1048e690)));
  /* 10472bbd mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_10472bc0:;
  /* 10472bc0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472bc4 je 0x10472bd0 */
  if (C.zf) goto L_10472bd0;
  /* 10472bc6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472bca jne 0x10472d4c */
  if (!C.zf) goto L_10472d4c;
L_10472bd0:;
  /* 10472bd0 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 10472bd3 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472bd6 jne 0x10472be2 */
  if (!C.zf) goto L_10472be2;
  /* 10472bd8 mov eax, 2 */
  EAX = (0x2u);
  /* 10472bdd jmp 0x10472ea4 */
  goto L_10472ea4;
L_10472be2:;
  /* 10472be2 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472be6 jle 0x10472bf2 */
  if ((C.zf||C.sf!=C.of)) goto L_10472bf2;
  /* 10472be8 mov eax, 1 */
  EAX = (0x1u);
  /* 10472bed jmp 0x10472ea4 */
  goto L_10472ea4;
L_10472bf2:;
  /* 10472bf2 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472bf6 jle 0x10472c02 */
  if ((C.zf||C.sf!=C.of)) goto L_10472c02;
  /* 10472bf8 mov eax, 3 */
  EAX = (0x3u);
  /* 10472bfd jmp 0x10472ea4 */
  goto L_10472ea4;
L_10472c02:;
  /* 10472c02 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 10472c05 push eax */
  push32((uint32_t)(EAX));
  /* 10472c06 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 10472c09 push ecx */
  push32((uint32_t)(ECX));
  /* 10472c0a call dword ptr [0x1049032c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1049032c))), 0x10472c10u);
  /* 10472c10 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10472c12 jne 0x10472c1b */
  if (!C.zf) goto L_10472c1b;
  /* 10472c14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10472c16 jmp 0x10472ea4 */
  goto L_10472ea4;
L_10472c1b:;
  /* 10472c1b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472c1f jne 0x10472c27 */
  if (!C.zf) goto L_10472c27;
  /* 10472c21 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472c25 je 0x10472c54 */
  if (C.zf) goto L_10472c54;
L_10472c27:;
  /* 10472c27 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472c2b jne 0x10472c33 */
  if (!C.zf) goto L_10472c33;
  /* 10472c2d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472c31 je 0x10472c54 */
  if (C.zf) goto L_10472c54;
L_10472c33:;
  /* 10472c33 push 0x1048a908 */
  push32((uint32_t)(0x1048a908u));
  /* 10472c38 push 0 */
  push32((uint32_t)(0x0u));
  /* 10472c3a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 10472c3f push 0x1048a900 */
  push32((uint32_t)(0x1048a900u));
  /* 10472c44 push 2 */
  push32((uint32_t)(0x2u));
  /* 10472c46 call 0x10461fd0 */
  push32(0x10472c4bu); f_10461fd0();
  /* 10472c4b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10472c4e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472c51 jne 0x10472c54 */
  if (!C.zf) goto L_10472c54;
  /* 10472c53 int3  */
  x86_unimpl("int3 @ 0x10472c53");
L_10472c54:;
  /* 10472c54 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10472c56 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10472c58 jne 0x10472c1b */
  if (!C.zf) goto L_10472c1b;
  /* 10472c5a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472c5e jle 0x10472cd3 */
  if ((C.zf||C.sf!=C.of)) goto L_10472cd3;
  /* 10472c60 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472c64 jae 0x10472c70 */
  if (!C.cf) goto L_10472c70;
  /* 10472c66 mov eax, 3 */
  EAX = (0x3u);
  /* 10472c6b jmp 0x10472ea4 */
  goto L_10472ea4;
L_10472c70:;
  /* 10472c70 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 10472c73 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 10472c76 jmp 0x10472c81 */
  goto L_10472c81;
L_10472c78:;
  /* 10472c78 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10472c7b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10472c7e mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_10472c81:;
  /* 10472c81 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10472c84 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10472c86 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10472c88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10472c8a je 0x10472cc9 */
  if (C.zf) goto L_10472cc9;
  /* 10472c8c mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10472c8f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10472c91 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 10472c94 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10472c96 je 0x10472cc9 */
  if (C.zf) goto L_10472cc9;
  /* 10472c98 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10472c9b xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10472c9d mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10472c9f mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10472ca2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10472ca4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10472ca6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472ca8 jl 0x10472cc7 */
  if ((C.sf!=C.of)) goto L_10472cc7;
  /* 10472caa mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10472cad xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10472caf mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10472cb1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10472cb4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10472cb6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10472cb9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472cbb jg 0x10472cc7 */
  if ((!C.zf&&C.sf==C.of)) goto L_10472cc7;
  /* 10472cbd mov eax, 2 */
  EAX = (0x2u);
  /* 10472cc2 jmp 0x10472ea4 */
  goto L_10472ea4;
L_10472cc7:;
  /* 10472cc7 jmp 0x10472c78 */
  goto L_10472c78;
L_10472cc9:;
  /* 10472cc9 mov eax, 3 */
  EAX = (0x3u);
  /* 10472cce jmp 0x10472ea4 */
  goto L_10472ea4;
L_10472cd3:;
  /* 10472cd3 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472cd7 jle 0x10472d4c */
  if ((C.zf||C.sf!=C.of)) goto L_10472d4c;
  /* 10472cd9 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472cdd jae 0x10472ce9 */
  if (!C.cf) goto L_10472ce9;
  /* 10472cdf mov eax, 1 */
  EAX = (0x1u);
  /* 10472ce4 jmp 0x10472ea4 */
  goto L_10472ea4;
L_10472ce9:;
  /* 10472ce9 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 10472cec mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 10472cef jmp 0x10472cfa */
  goto L_10472cfa;
L_10472cf1:;
  /* 10472cf1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10472cf4 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10472cf7 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_10472cfa:;
  /* 10472cfa mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10472cfd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10472cff mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10472d01 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10472d03 je 0x10472d42 */
  if (C.zf) goto L_10472d42;
  /* 10472d05 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 10472d08 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10472d0a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 10472d0d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10472d0f je 0x10472d42 */
  if (C.zf) goto L_10472d42;
  /* 10472d11 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10472d14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10472d16 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 10472d18 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 10472d1b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 10472d1d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10472d1f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472d21 jl 0x10472d40 */
  if ((C.sf!=C.of)) goto L_10472d40;
  /* 10472d23 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 10472d26 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 10472d28 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 10472d2a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 10472d2d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10472d2f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 10472d32 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472d34 jg 0x10472d40 */
  if ((!C.zf&&C.sf==C.of)) goto L_10472d40;
  /* 10472d36 mov eax, 2 */
  EAX = (0x2u);
  /* 10472d3b jmp 0x10472ea4 */
  goto L_10472ea4;
L_10472d40:;
  /* 10472d40 jmp 0x10472cf1 */
  goto L_10472cf1;
L_10472d42:;
  /* 10472d42 mov eax, 1 */
  EAX = (0x1u);
  /* 10472d47 jmp 0x10472ea4 */
  goto L_10472ea4;
L_10472d4c:;
  /* 10472d4c push 0 */
  push32((uint32_t)(0x0u));
  /* 10472d4e push 0 */
  push32((uint32_t)(0x0u));
  /* 10472d50 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10472d53 push ecx */
  push32((uint32_t)(ECX));
  /* 10472d54 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10472d57 push edx */
  push32((uint32_t)(EDX));
  /* 10472d58 push 9 */
  push32((uint32_t)(0x9u));
  /* 10472d5a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10472d5d push eax */
  push32((uint32_t)(EAX));
  /* 10472d5e call dword ptr [0x1049031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1049031c))), 0x10472d64u);
  /* 10472d64 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 10472d67 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472d6b jne 0x10472d74 */
  if (!C.zf) goto L_10472d74;
  /* 10472d6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10472d6f jmp 0x10472ea4 */
  goto L_10472ea4;
L_10472d74:;
  /* 10472d74 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 10472d7b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10472d7e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10472d80 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10472d83 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10472d85 call 0x104660b0 */
  push32(0x10472d8au); f_104660b0();
  /* 10472d8a mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 10472d8d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10472d90 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 10472d93 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 10472d96 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10472d9d jmp 0x10472db6 */
  goto L_10472db6;
  /* 10472d9f mov eax, 1 */
  EAX = (0x1u);
  /* 10472da4 ret  */
  ESPCHK(0x10472ac0u, _esp0);
  ESP += 4; return;
  /* 10472da5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10472da8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 10472daf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10472db6:;
  /* 10472db6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472dba jne 0x10472dc3 */
  if (!C.zf) goto L_10472dc3;
  /* 10472dbc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10472dbe jmp 0x10472ea4 */
  goto L_10472ea4;
L_10472dc3:;
  /* 10472dc3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10472dc6 push edx */
  push32((uint32_t)(EDX));
  /* 10472dc7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 10472dca push eax */
  push32((uint32_t)(EAX));
  /* 10472dcb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 10472dce push ecx */
  push32((uint32_t)(ECX));
  /* 10472dcf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10472dd2 push edx */
  push32((uint32_t)(EDX));
  /* 10472dd3 push 1 */
  push32((uint32_t)(0x1u));
  /* 10472dd5 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10472dd8 push eax */
  push32((uint32_t)(EAX));
  /* 10472dd9 call dword ptr [0x1049031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1049031c))), 0x10472ddfu);
  /* 10472ddf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10472de1 jne 0x10472dea */
  if (!C.zf) goto L_10472dea;
  /* 10472de3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10472de5 jmp 0x10472ea4 */
  goto L_10472ea4;
L_10472dea:;
  /* 10472dea push 0 */
  push32((uint32_t)(0x0u));
  /* 10472dec push 0 */
  push32((uint32_t)(0x0u));
  /* 10472dee mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10472df1 push ecx */
  push32((uint32_t)(ECX));
  /* 10472df2 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10472df5 push edx */
  push32((uint32_t)(EDX));
  /* 10472df6 push 9 */
  push32((uint32_t)(0x9u));
  /* 10472df8 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10472dfb push eax */
  push32((uint32_t)(EAX));
  /* 10472dfc call dword ptr [0x1049031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1049031c))), 0x10472e02u);
  /* 10472e02 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 10472e05 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472e09 jne 0x10472e12 */
  if (!C.zf) goto L_10472e12;
  /* 10472e0b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10472e0d jmp 0x10472ea4 */
  goto L_10472ea4;
L_10472e12:;
  /* 10472e12 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10472e19 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 10472e1c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 10472e1e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10472e21 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 10472e23 call 0x104660b0 */
  push32(0x10472e28u); f_104660b0();
  /* 10472e28 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 10472e2b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 10472e2e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 10472e31 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 10472e34 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 10472e3b jmp 0x10472e54 */
  goto L_10472e54;
  /* 10472e3d mov eax, 1 */
  EAX = (0x1u);
  /* 10472e42 ret  */
  ESPCHK(0x10472ac0u, _esp0);
  ESP += 4; return;
  /* 10472e43 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 10472e46 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 10472e4d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_10472e54:;
  /* 10472e54 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472e58 jne 0x10472e5e */
  if (!C.zf) goto L_10472e5e;
  /* 10472e5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10472e5c jmp 0x10472ea4 */
  goto L_10472ea4;
L_10472e5e:;
  /* 10472e5e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 10472e61 push edx */
  push32((uint32_t)(EDX));
  /* 10472e62 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 10472e65 push eax */
  push32((uint32_t)(EAX));
  /* 10472e66 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 10472e69 push ecx */
  push32((uint32_t)(ECX));
  /* 10472e6a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 10472e6d push edx */
  push32((uint32_t)(EDX));
  /* 10472e6e push 1 */
  push32((uint32_t)(0x1u));
  /* 10472e70 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 10472e73 push eax */
  push32((uint32_t)(EAX));
  /* 10472e74 call dword ptr [0x1049031c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1049031c))), 0x10472e7au);
  /* 10472e7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10472e7c jne 0x10472e82 */
  if (!C.zf) goto L_10472e82;
  /* 10472e7e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10472e80 jmp 0x10472ea4 */
  goto L_10472ea4;
L_10472e82:;
  /* 10472e82 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 10472e85 push ecx */
  push32((uint32_t)(ECX));
  /* 10472e86 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 10472e89 push edx */
  push32((uint32_t)(EDX));
  /* 10472e8a mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 10472e8d push eax */
  push32((uint32_t)(EAX));
  /* 10472e8e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 10472e91 push ecx */
  push32((uint32_t)(ECX));
  /* 10472e92 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10472e95 push edx */
  push32((uint32_t)(EDX));
  /* 10472e96 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10472e99 push eax */
  push32((uint32_t)(EAX));
  /* 10472e9a call dword ptr [0x10490240] */
  call_ind((uint32_t)(r32((uint32_t)(0x10490240))), 0x10472ea0u);
  /* 10472ea0 jmp 0x10472ea4 */
  goto L_10472ea4;
L_10472ea2:;
  /* 10472ea2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10472ea4:;
  /* 10472ea4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 10472ea7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 10472eaa mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 10472eb1 pop edi */
  EDI = (pop32());
  /* 10472eb2 pop esi */
  ESI = (pop32());
  /* 10472eb3 pop ebx */
  EBX = (pop32());
  /* 10472eb4 mov esp, ebp */
  ESP = (EBP);
  /* 10472eb6 pop ebp */
  EBP = (pop32());
  /* 10472eb7 ret  */
  ESPCHK(0x10472ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ec0 @ 0x10472ec0 (80 bytes, 32 insns) */
void f_10472ec0(void) {
  FTRACE(0x10472ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10472ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 10472ec1 mov ebp, esp */
  EBP = (ESP);
  /* 10472ec3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10472ec6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10472ec9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10472ecc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10472ecf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10472ed2:;
  /* 10472ed2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10472ed5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10472ed8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10472edb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10472ede test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10472ee0 je 0x10472ef7 */
  if (C.zf) goto L_10472ef7;
  /* 10472ee2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10472ee5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10472ee8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10472eea je 0x10472ef7 */
  if (C.zf) goto L_10472ef7;
  /* 10472eec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10472eef add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10472ef2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10472ef5 jmp 0x10472ed2 */
  goto L_10472ed2;
L_10472ef7:;
  /* 10472ef7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10472efa movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 10472efd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10472eff jne 0x10472f09 */
  if (!C.zf) goto L_10472f09;
  /* 10472f01 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10472f04 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10472f07 jmp 0x10472f0c */
  goto L_10472f0c;
L_10472f09:;
  /* 10472f09 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_10472f0c:;
  /* 10472f0c mov esp, ebp */
  ESP = (EBP);
  /* 10472f0e pop ebp */
  EBP = (pop32());
  /* 10472f0f ret  */
  ESPCHK(0x10472ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012f10 @ 0x10472f10 (736 bytes, 224 insns) */
void f_10472f10(void) {
  FTRACE(0x10472f10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10472f10 push ebp */
  push32((uint32_t)(EBP));
  /* 10472f11 mov ebp, esp */
  EBP = (ESP);
  /* 10472f13 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10472f16 push esi */
  push32((uint32_t)(ESI));
  /* 10472f17 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472f1b je 0x10472f3c */
  if (C.zf) goto L_10472f3c;
  /* 10472f1d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 10472f1f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10472f22 push eax */
  push32((uint32_t)(EAX));
  /* 10472f23 call 0x10473360 */
  push32(0x10472f28u); f_10473360();
  /* 10472f28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10472f2b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 10472f2e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472f32 je 0x10472f3c */
  if (C.zf) goto L_10472f3c;
  /* 10472f34 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10472f37 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472f3a jne 0x10472f44 */
  if (!C.zf) goto L_10472f44;
L_10472f3c:;
  /* 10472f3c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10472f3f jmp 0x104731eb */
  goto L_104731eb;
L_10472f44:;
  /* 10472f44 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 10472f47 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 10472f4b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10472f4d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10472f4f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10472f50 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 10472f53 mov ecx, dword ptr [0x1048e49c] */
  ECX = (r32((uint32_t)(0x1048e49c)));
  /* 10472f59 cmp ecx, dword ptr [0x1048e4a0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1048e4a0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472f5f jne 0x10472f75 */
  if (!C.zf) goto L_10472f75;
  /* 10472f61 mov edx, dword ptr [0x1048e49c] */
  EDX = (r32((uint32_t)(0x1048e49c)));
  /* 10472f67 push edx */
  push32((uint32_t)(EDX));
  /* 10472f68 call 0x10473270 */
  push32(0x10472f6du); f_10473270();
  /* 10472f6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10472f70 mov dword ptr [0x1048e49c], eax */
  w32((uint32_t)(0x1048e49c), (EAX));
L_10472f75:;
  /* 10472f75 cmp dword ptr [0x1048e49c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e49c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472f7c jne 0x10473035 */
  if (!C.zf) goto L_10473035;
  /* 10472f82 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472f86 je 0x10472fa7 */
  if (C.zf) goto L_10472fa7;
  /* 10472f88 cmp dword ptr [0x1048e4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472f8f je 0x10472fa7 */
  if (C.zf) goto L_10472fa7;
  /* 10472f91 call 0x10472a10 */
  push32(0x10472f96u); f_10472a10();
  /* 10472f96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10472f98 je 0x10472fa2 */
  if (C.zf) goto L_10472fa2;
  /* 10472f9a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10472f9d jmp 0x104731eb */
  goto L_104731eb;
L_10472fa2:;
  /* 10472fa2 jmp 0x10473035 */
  goto L_10473035;
L_10472fa7:;
  /* 10472fa7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472fab je 0x10472fb4 */
  if (C.zf) goto L_10472fb4;
  /* 10472fad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10472faf jmp 0x104731eb */
  goto L_104731eb;
L_10472fb4:;
  /* 10472fb4 cmp dword ptr [0x1048e49c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e49c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472fbb jne 0x10472ff4 */
  if (!C.zf) goto L_10472ff4;
  /* 10472fbd push 0x87 */
  push32((uint32_t)(0x87u));
  /* 10472fc2 push 0x1048a960 */
  push32((uint32_t)(0x1048a960u));
  /* 10472fc7 push 2 */
  push32((uint32_t)(0x2u));
  /* 10472fc9 push 4 */
  push32((uint32_t)(0x4u));
  /* 10472fcb call 0x10462f10 */
  push32(0x10472fd0u); f_10462f10();
  /* 10472fd0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10472fd3 mov dword ptr [0x1048e49c], eax */
  w32((uint32_t)(0x1048e49c), (EAX));
  /* 10472fd8 cmp dword ptr [0x1048e49c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e49c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472fdf jne 0x10472fe9 */
  if (!C.zf) goto L_10472fe9;
  /* 10472fe1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10472fe4 jmp 0x104731eb */
  goto L_104731eb;
L_10472fe9:;
  /* 10472fe9 mov eax, dword ptr [0x1048e49c] */
  EAX = (r32((uint32_t)(0x1048e49c)));
  /* 10472fee mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_10472ff4:;
  /* 10472ff4 cmp dword ptr [0x1048e4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10472ffb jne 0x10473035 */
  if (!C.zf) goto L_10473035;
  /* 10472ffd push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 10473002 push 0x1048a960 */
  push32((uint32_t)(0x1048a960u));
  /* 10473007 push 2 */
  push32((uint32_t)(0x2u));
  /* 10473009 push 4 */
  push32((uint32_t)(0x4u));
  /* 1047300b call 0x10462f10 */
  push32(0x10473010u); f_10462f10();
  /* 10473010 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10473013 mov dword ptr [0x1048e4a4], eax */
  w32((uint32_t)(0x1048e4a4), (EAX));
  /* 10473018 cmp dword ptr [0x1048e4a4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048e4a4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047301f jne 0x10473029 */
  if (!C.zf) goto L_10473029;
  /* 10473021 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10473024 jmp 0x104731eb */
  goto L_104731eb;
L_10473029:;
  /* 10473029 mov ecx, dword ptr [0x1048e4a4] */
  ECX = (r32((uint32_t)(0x1048e4a4)));
  /* 1047302f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_10473035:;
  /* 10473035 mov edx, dword ptr [0x1048e49c] */
  EDX = (r32((uint32_t)(0x1048e49c)));
  /* 1047303b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1047303e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 10473041 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10473044 push eax */
  push32((uint32_t)(EAX));
  /* 10473045 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10473048 push ecx */
  push32((uint32_t)(ECX));
  /* 10473049 call 0x104731f0 */
  push32(0x1047304eu); f_104731f0();
  /* 1047304e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10473051 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 10473054 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10473058 jl 0x104730f1 */
  if ((C.sf!=C.of)) goto L_104730f1;
  /* 1047305e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10473061 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10473064 je 0x104730f1 */
  if (C.zf) goto L_104730f1;
  /* 1047306a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047306e je 0x104730e3 */
  if (C.zf) goto L_104730e3;
  /* 10473070 push 2 */
  push32((uint32_t)(0x2u));
  /* 10473072 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10473075 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10473078 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 1047307b push edx */
  push32((uint32_t)(EDX));
  /* 1047307c call 0x104639a0 */
  push32(0x10473081u); f_104639a0();
  /* 10473081 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10473084 jmp 0x1047308f */
  goto L_1047308f;
L_10473086:;
  /* 10473086 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10473089 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047308c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1047308f:;
  /* 1047308f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10473092 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 10473095 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10473099 je 0x104730b0 */
  if (C.zf) goto L_104730b0;
  /* 1047309b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047309e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104730a1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 104730a4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 104730a7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 104730ab mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 104730ae jmp 0x10473086 */
  goto L_10473086;
L_104730b0:;
  /* 104730b0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 104730b5 push 0x1048a960 */
  push32((uint32_t)(0x1048a960u));
  /* 104730ba push 2 */
  push32((uint32_t)(0x2u));
  /* 104730bc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104730bf shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 104730c2 push eax */
  push32((uint32_t)(EAX));
  /* 104730c3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104730c6 push ecx */
  push32((uint32_t)(ECX));
  /* 104730c7 call 0x104633a0 */
  push32(0x104730ccu); f_104633a0();
  /* 104730cc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104730cf mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 104730d2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104730d6 je 0x104730e1 */
  if (C.zf) goto L_104730e1;
  /* 104730d8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 104730db mov dword ptr [0x1048e49c], edx */
  w32((uint32_t)(0x1048e49c), (EDX));
L_104730e1:;
  /* 104730e1 jmp 0x104730ef */
  goto L_104730ef;
L_104730e3:;
  /* 104730e3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 104730e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 104730e9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104730ec mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_104730ef:;
  /* 104730ef jmp 0x10473164 */
  goto L_10473164;
L_104730f1:;
  /* 104730f1 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104730f5 jne 0x1047315d */
  if (!C.zf) goto L_1047315d;
  /* 104730f7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104730fb jge 0x10473105 */
  if ((C.sf==C.of)) goto L_10473105;
  /* 104730fd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10473100 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 10473102 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_10473105:;
  /* 10473105 push 0xce */
  push32((uint32_t)(0xceu));
  /* 1047310a push 0x1048a960 */
  push32((uint32_t)(0x1048a960u));
  /* 1047310f push 2 */
  push32((uint32_t)(0x2u));
  /* 10473111 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10473114 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 1047311b push edx */
  push32((uint32_t)(EDX));
  /* 1047311c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047311f push eax */
  push32((uint32_t)(EAX));
  /* 10473120 call 0x104633a0 */
  push32(0x10473125u); f_104633a0();
  /* 10473125 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10473128 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1047312b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047312f jne 0x10473139 */
  if (!C.zf) goto L_10473139;
  /* 10473131 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10473134 jmp 0x104731eb */
  goto L_104731eb;
L_10473139:;
  /* 10473139 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047313c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047313f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10473142 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 10473145 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 10473148 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047314b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 10473153 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10473156 mov dword ptr [0x1048e49c], eax */
  w32((uint32_t)(0x1048e49c), (EAX));
  /* 1047315b jmp 0x10473164 */
  goto L_10473164;
L_1047315d:;
  /* 1047315d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047315f jmp 0x104731eb */
  goto L_104731eb;
L_10473164:;
  /* 10473164 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10473168 je 0x104731e9 */
  if (C.zf) goto L_104731e9;
  /* 1047316a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 1047316f push 0x1048a960 */
  push32((uint32_t)(0x1048a960u));
  /* 10473174 push 2 */
  push32((uint32_t)(0x2u));
  /* 10473176 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10473179 push ecx */
  push32((uint32_t)(ECX));
  /* 1047317a call 0x10465d40 */
  push32(0x1047317fu); f_10465d40();
  /* 1047317f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10473182 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10473185 push eax */
  push32((uint32_t)(EAX));
  /* 10473186 call 0x10462f10 */
  push32(0x1047318bu); f_10462f10();
  /* 1047318b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047318e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 10473191 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10473195 je 0x104731e9 */
  if (C.zf) goto L_104731e9;
  /* 10473197 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047319a push edx */
  push32((uint32_t)(EDX));
  /* 1047319b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047319e push eax */
  push32((uint32_t)(EAX));
  /* 1047319f call 0x10465ec0 */
  push32(0x104731a4u); f_10465ec0();
  /* 104731a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104731a7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 104731aa sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104731ad mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104731b0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104731b2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 104731b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104731b8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 104731bb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 104731be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104731c1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104731c4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 104731c7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 104731c9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 104731cb not edx */
  EDX = (~(EDX));
  /* 104731cd and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 104731d0 push edx */
  push32((uint32_t)(EDX));
  /* 104731d1 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 104731d4 push eax */
  push32((uint32_t)(EAX));
  /* 104731d5 call dword ptr [0x1049023c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1049023c))), 0x104731dbu);
  /* 104731db push 2 */
  push32((uint32_t)(0x2u));
  /* 104731dd mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104731e0 push ecx */
  push32((uint32_t)(ECX));
  /* 104731e1 call 0x104639a0 */
  push32(0x104731e6u); f_104639a0();
  /* 104731e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104731e9:;
  /* 104731e9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_104731eb:;
  /* 104731eb pop esi */
  ESI = (pop32());
  /* 104731ec mov esp, ebp */
  ESP = (EBP);
  /* 104731ee pop ebp */
  EBP = (pop32());
  /* 104731ef ret  */
  ESPCHK(0x10472f10u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x104731f0 (124 bytes, 47 insns) */
void f_104731f0(void) {
  FTRACE(0x104731f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104731f0 push ebp */
  push32((uint32_t)(EBP));
  /* 104731f1 mov ebp, esp */
  EBP = (ESP);
  /* 104731f3 push ecx */
  push32((uint32_t)(ECX));
  /* 104731f4 mov eax, dword ptr [0x1048e49c] */
  EAX = (r32((uint32_t)(0x1048e49c)));
  /* 104731f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 104731fc jmp 0x10473207 */
  goto L_10473207;
L_104731fe:;
  /* 104731fe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10473201 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10473204 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_10473207:;
  /* 10473207 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047320a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047320d je 0x1047325a */
  if (C.zf) goto L_1047325a;
  /* 1047320f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10473212 push eax */
  push32((uint32_t)(EAX));
  /* 10473213 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 10473216 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10473218 push edx */
  push32((uint32_t)(EDX));
  /* 10473219 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047321c push eax */
  push32((uint32_t)(EAX));
  /* 1047321d call 0x104729c0 */
  push32(0x10473222u); f_104729c0();
  /* 10473222 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10473225 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10473227 jne 0x10473258 */
  if (!C.zf) goto L_10473258;
  /* 10473229 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047322c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1047322e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10473231 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 10473235 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10473238 je 0x1047324a */
  if (C.zf) goto L_1047324a;
  /* 1047323a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047323d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1047323f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10473242 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 10473246 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10473248 jne 0x10473258 */
  if (!C.zf) goto L_10473258;
L_1047324a:;
  /* 1047324a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047324d sub eax, dword ptr [0x1048e49c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1048e49c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10473253 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10473256 jmp 0x10473268 */
  goto L_10473268;
L_10473258:;
  /* 10473258 jmp 0x104731fe */
  goto L_104731fe;
L_1047325a:;
  /* 1047325a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047325d sub eax, dword ptr [0x1048e49c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1048e49c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10473263 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 10473266 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_10473268:;
  /* 10473268 mov esp, ebp */
  ESP = (EBP);
  /* 1047326a pop ebp */
  EBP = (pop32());
  /* 1047326b ret  */
  ESPCHK(0x104731f0u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x10473270 (238 bytes, 80 insns) */
void f_10473270(void) {
  FTRACE(0x10473270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10473270 push ebp */
  push32((uint32_t)(EBP));
  /* 10473271 mov ebp, esp */
  EBP = (ESP);
  /* 10473273 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10473276 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 1047327d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10473280 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 10473283 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10473287 jne 0x10473290 */
  if (!C.zf) goto L_10473290;
  /* 10473289 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047328b jmp 0x1047335a */
  goto L_1047335a;
L_10473290:;
  /* 10473290 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10473293 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10473295 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10473298 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047329b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1047329e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104732a0 je 0x104732ad */
  if (C.zf) goto L_104732ad;
  /* 104732a2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 104732a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 104732a8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 104732ab jmp 0x10473290 */
  goto L_10473290;
L_104732ad:;
  /* 104732ad push 0x146 */
  push32((uint32_t)(0x146u));
  /* 104732b2 push 0x1048a960 */
  push32((uint32_t)(0x1048a960u));
  /* 104732b7 push 2 */
  push32((uint32_t)(0x2u));
  /* 104732b9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 104732bc lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 104732c3 push eax */
  push32((uint32_t)(EAX));
  /* 104732c4 call 0x10462f10 */
  push32(0x104732c9u); f_10462f10();
  /* 104732c9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104732cc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 104732cf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 104732d2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 104732d5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104732d9 jne 0x104732e5 */
  if (!C.zf) goto L_104732e5;
  /* 104732db push 9 */
  push32((uint32_t)(0x9u));
  /* 104732dd call 0x10461e80 */
  push32(0x104732e2u); f_10461e80();
  /* 104732e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_104732e5:;
  /* 104732e5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104732e8 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_104732eb:;
  /* 104732eb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 104732ee cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104732f1 je 0x1047334e */
  if (C.zf) goto L_1047334e;
  /* 104732f3 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 104732f8 push 0x1048a960 */
  push32((uint32_t)(0x1048a960u));
  /* 104732fd push 2 */
  push32((uint32_t)(0x2u));
  /* 104732ff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 10473302 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10473304 push edx */
  push32((uint32_t)(EDX));
  /* 10473305 call 0x10465d40 */
  push32(0x1047330au); f_10465d40();
  /* 1047330a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047330d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10473310 push eax */
  push32((uint32_t)(EAX));
  /* 10473311 call 0x10462f10 */
  push32(0x10473316u); f_10462f10();
  /* 10473316 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10473319 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047331c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1047331e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10473321 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10473324 je 0x1047333a */
  if (C.zf) goto L_1047333a;
  /* 10473326 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 10473329 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1047332b push ecx */
  push32((uint32_t)(ECX));
  /* 1047332c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047332f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 10473331 push eax */
  push32((uint32_t)(EAX));
  /* 10473332 call 0x10465ec0 */
  push32(0x10473337u); f_10465ec0();
  /* 10473337 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047333a:;
  /* 1047333a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047333d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10473340 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 10473343 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 10473346 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10473349 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1047334c jmp 0x104732eb */
  goto L_104732eb;
L_1047334e:;
  /* 1047334e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10473351 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 10473357 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1047335a:;
  /* 1047335a mov esp, ebp */
  ESP = (EBP);
  /* 1047335c pop ebp */
  EBP = (pop32());
  /* 1047335d ret  */
  ESPCHK(0x10473270u, _esp0);
  ESP += 4; return;
}

/* FUN_10013360 @ 0x10473360 (237 bytes, 81 insns) */
void f_10473360(void) {
  FTRACE(0x10473360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10473360 push ebp */
  push32((uint32_t)(EBP));
  /* 10473361 mov ebp, esp */
  EBP = (ESP);
  /* 10473363 push ecx */
  push32((uint32_t)(ECX));
  /* 10473364 cmp dword ptr [0x1048fbec], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1048fbec))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047336b jne 0x10473382 */
  if (!C.zf) goto L_10473382;
  /* 1047336d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10473370 push eax */
  push32((uint32_t)(EAX));
  /* 10473371 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10473374 push ecx */
  push32((uint32_t)(ECX));
  /* 10473375 call 0x10473460 */
  push32(0x1047337au); f_10473460();
  /* 1047337a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047337d jmp 0x10473449 */
  goto L_10473449;
L_10473382:;
  /* 10473382 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10473384 call 0x10466910 */
  push32(0x10473389u); f_10466910();
  /* 10473389 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047338c jmp 0x10473397 */
  goto L_10473397;
L_1047338e:;
  /* 1047338e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10473391 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10473394 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_10473397:;
  /* 10473397 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047339a movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 1047339e mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 104733a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104733a5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 104733ab test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 104733ad je 0x1047342b */
  if (C.zf) goto L_1047342b;
  /* 104733af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 104733b2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104733b7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104733b9 mov cl, byte ptr [eax + 0x1048fd01] */
  CL = (r8((uint32_t)(EAX + 0x1048fd01)));
  /* 104733bf and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 104733c2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104733c4 je 0x10473416 */
  if (C.zf) goto L_10473416;
  /* 104733c6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 104733c9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104733cc mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 104733cf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104733d2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104733d4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 104733d6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 104733d8 jne 0x104733e8 */
  if (!C.zf) goto L_104733e8;
  /* 104733da push 0x19 */
  push32((uint32_t)(0x19u));
  /* 104733dc call 0x104669b0 */
  push32(0x104733e1u); f_104669b0();
  /* 104733e1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104733e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104733e6 jmp 0x10473449 */
  goto L_10473449;
L_104733e8:;
  /* 104733e8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 104733eb and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 104733f1 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 104733f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 104733f7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 104733f9 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 104733fb or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 104733fd cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10473400 jne 0x10473414 */
  if (!C.zf) goto L_10473414;
  /* 10473402 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 10473404 call 0x104669b0 */
  push32(0x10473409u); f_104669b0();
  /* 10473409 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047340c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047340f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10473412 jmp 0x10473449 */
  goto L_10473449;
L_10473414:;
  /* 10473414 jmp 0x10473426 */
  goto L_10473426;
L_10473416:;
  /* 10473416 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 10473419 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1047341f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10473422 jne 0x10473426 */
  if (!C.zf) goto L_10473426;
  /* 10473424 jmp 0x1047342b */
  goto L_1047342b;
L_10473426:;
  /* 10473426 jmp 0x1047338e */
  goto L_1047338e;
L_1047342b:;
  /* 1047342b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1047342d call 0x104669b0 */
  push32(0x10473432u); f_104669b0();
  /* 10473432 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10473435 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10473438 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1047343d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10473440 jne 0x10473447 */
  if (!C.zf) goto L_10473447;
  /* 10473442 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10473445 jmp 0x10473449 */
  goto L_10473449;
L_10473447:;
  /* 10473447 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_10473449:;
  /* 10473449 mov esp, ebp */
  ESP = (EBP);
  /* 1047344b pop ebp */
  EBP = (pop32());
  /* 1047344c ret  */
  ESPCHK(0x10473360u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x10473460 (193 bytes, 87 insns) */
void f_10473460(void) {
  FTRACE(0x10473460u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10473460 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10473462 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10473466 push ebx */
  push32((uint32_t)(EBX));
  /* 10473467 mov ebx, eax */
  EBX = (EAX);
  /* 10473469 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1047346c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 10473470 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10473476 je 0x1047348b */
  if (C.zf) goto L_1047348b;
L_10473478:;
  /* 10473478 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 1047347a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1047347b cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1047347d je 0x10473450 */
  if (C.zf) { jmp_ind(0x10473450u); return; }
  /* 1047347f test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 10473481 je 0x104734d4 */
  if (C.zf) goto L_104734d4;
  /* 10473483 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 10473489 jne 0x10473478 */
  if (!C.zf) goto L_10473478;
L_1047348b:;
  /* 1047348b or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 1047348d push edi */
  push32((uint32_t)(EDI));
  /* 1047348e mov eax, ebx */
  EAX = (EBX);
  /* 10473490 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 10473493 push esi */
  push32((uint32_t)(ESI));
  /* 10473494 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_10473496:;
  /* 10473496 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 10473498 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 1047349d mov eax, ecx */
  EAX = (ECX);
  /* 1047349f mov esi, edi */
  ESI = (EDI);
  /* 104734a1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 104734a3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 104734a5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 104734a7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 104734aa xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 104734ad xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 104734af xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 104734b1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 104734b4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 104734ba jne 0x104734d8 */
  if (!C.zf) goto L_104734d8;
  /* 104734bc and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 104734c1 je 0x10473496 */
  if (C.zf) goto L_10473496;
  /* 104734c3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 104734c8 jne 0x104734d2 */
  if (!C.zf) goto L_104734d2;
  /* 104734ca and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 104734d0 jne 0x10473496 */
  if (!C.zf) goto L_10473496;
L_104734d2:;
  /* 104734d2 pop esi */
  ESI = (pop32());
  /* 104734d3 pop edi */
  EDI = (pop32());
L_104734d4:;
  /* 104734d4 pop ebx */
  EBX = (pop32());
  /* 104734d5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 104734d7 ret  */
  ESPCHK(0x10473460u, _esp0);
  ESP += 4; return;
L_104734d8:;
  /* 104734d8 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 104734db cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104734dd je 0x10473515 */
  if (C.zf) goto L_10473515;
  /* 104734df test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 104734e1 je 0x104734d2 */
  if (C.zf) goto L_104734d2;
  /* 104734e3 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104734e5 je 0x1047350e */
  if (C.zf) goto L_1047350e;
  /* 104734e7 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 104734e9 je 0x104734d2 */
  if (C.zf) goto L_104734d2;
  /* 104734eb shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 104734ee cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104734f0 je 0x10473507 */
  if (C.zf) goto L_10473507;
  /* 104734f2 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 104734f4 je 0x104734d2 */
  if (C.zf) goto L_104734d2;
  /* 104734f6 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 104734f8 je 0x10473500 */
  if (C.zf) goto L_10473500;
  /* 104734fa test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 104734fc je 0x104734d2 */
  if (C.zf) goto L_104734d2;
  /* 104734fe jmp 0x10473496 */
  goto L_10473496;
L_10473500:;
  /* 10473500 pop esi */
  ESI = (pop32());
  /* 10473501 pop edi */
  EDI = (pop32());
  /* 10473502 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 10473505 pop ebx */
  EBX = (pop32());
  /* 10473506 ret  */
  ESPCHK(0x10473460u, _esp0);
  ESP += 4; return;
L_10473507:;
  /* 10473507 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 1047350a pop esi */
  ESI = (pop32());
  /* 1047350b pop edi */
  EDI = (pop32());
  /* 1047350c pop ebx */
  EBX = (pop32());
  /* 1047350d ret  */
  ESPCHK(0x10473460u, _esp0);
  ESP += 4; return;
L_1047350e:;
  /* 1047350e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 10473511 pop esi */
  ESI = (pop32());
  /* 10473512 pop edi */
  EDI = (pop32());
  /* 10473513 pop ebx */
  EBX = (pop32());
  /* 10473514 ret  */
  ESPCHK(0x10473460u, _esp0);
  ESP += 4; return;
L_10473515:;
  /* 10473515 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 10473518 pop esi */
  ESI = (pop32());
  /* 10473519 pop edi */
  EDI = (pop32());
  /* 1047351a pop ebx */
  EBX = (pop32());
  /* 1047351b ret  */
  ESPCHK(0x10473460u, _esp0);
  ESP += 4; return;
  /* 1047351c jmp dword ptr [0x10490270] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10490270)))); return;
}

/* RtlUnwind @ 0x1047366c (6 bytes, 1 insns) */
void f_1047366c(void) {
  FTRACE(0x1047366cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047366c jmp dword ptr [0x1049034c] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1049034c)))); return;
}

/* thunk_FUN_10019b50 @ 0x10479005 (5 bytes, 1 insns) */
void f_10479005(void) {
  FTRACE(0x10479005u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10479005 jmp 0x10479b50 */
  f_10479b50(); return;
}

/* thunk_FUN_10019090 @ 0x1047900a (5 bytes, 1 insns) */
void f_1047900a(void) {
  FTRACE(0x1047900au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047900a jmp 0x10479090 */
  f_10479090(); return;
}

/* thunk_FUN_10019030 @ 0x1047900f (5 bytes, 1 insns) */
void f_1047900f(void) {
  FTRACE(0x1047900fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047900f jmp 0x10479030 */
  f_10479030(); return;
}

/* FUN_10019030 @ 0x10479030 (67 bytes, 26 insns) */
void f_10479030(void) {
  FTRACE(0x10479030u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10479030 push ebp */
  push32((uint32_t)(EBP));
  /* 10479031 mov ebp, esp */
  EBP = (ESP);
  /* 10479033 sub esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10479036 push ebx */
  push32((uint32_t)(EBX));
  /* 10479037 push esi */
  push32((uint32_t)(ESI));
  /* 10479038 push edi */
  push32((uint32_t)(EDI));
  /* 10479039 lea edi, [ebp - 0x44] */
  EDI = ((uint32_t)(EBP + -0x44));
  /* 1047903c mov ecx, 0x11 */
  ECX = (0x11u);
  /* 10479041 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10479046 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10479048 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047904b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1047904e cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479052 je 0x10479056 */
  if (C.zf) goto L_10479056;
  /* 10479054 jmp 0x1047905b */
  goto L_1047905b;
L_10479056:;
  /* 10479056 call 0x1047900a */
  push32(0x1047905bu); f_1047900a();
L_1047905b:;
  /* 1047905b mov eax, 1 */
  EAX = (0x1u);
  /* 10479060 pop edi */
  EDI = (pop32());
  /* 10479061 pop esi */
  ESI = (pop32());
  /* 10479062 pop ebx */
  EBX = (pop32());
  /* 10479063 add esp, 0x44 */
  { uint32_t _a=(ESP),_b=(0x44u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10479066 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479068 call 0x10479c00 */
  push32(0x1047906du); f_10479c00();
  /* 1047906d mov esp, ebp */
  ESP = (EBP);
  /* 1047906f pop ebp */
  EBP = (pop32());
  /* 10479070 ret 0xc */
  ESPCHK(0x10479030u, _esp0);
  ESP += 16; return;
}

/* FUN_10019090 @ 0x10479090 (455 bytes, 124 insns) */
void f_10479090(void) {
  FTRACE(0x10479090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10479090 push ebp */
  push32((uint32_t)(EBP));
  /* 10479091 mov ebp, esp */
  EBP = (ESP);
  /* 10479093 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10479096 push ebx */
  push32((uint32_t)(EBX));
  /* 10479097 push esi */
  push32((uint32_t)(ESI));
  /* 10479098 push edi */
  push32((uint32_t)(EDI));
  /* 10479099 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 1047909c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 104790a1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 104790a6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 104790a8 mov esi, esp */
  ESI = (ESP);
  /* 104790aa push 0x10029090 */
  push32((uint32_t)(0x10029090u));
  /* 104790af push 0x1002e410 */
  push32((uint32_t)(0x1002e410u));
  /* 104790b4 call dword ptr [0x100303ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303ec))), 0x104790bau);
  /* 104790ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104790bd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104790bf call 0x10479c00 */
  push32(0x104790c4u); f_10479c00();
  /* 104790c4 mov esi, esp */
  ESI = (ESP);
  /* 104790c6 push 0x10029088 */
  push32((uint32_t)(0x10029088u));
  /* 104790cb push 0x1002e418 */
  push32((uint32_t)(0x1002e418u));
  /* 104790d0 call dword ptr [0x100303ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303ec))), 0x104790d6u);
  /* 104790d6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104790d9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104790db call 0x10479c00 */
  push32(0x104790e0u); f_10479c00();
  /* 104790e0 mov esi, esp */
  ESI = (ESP);
  /* 104790e2 push 0x10029080 */
  push32((uint32_t)(0x10029080u));
  /* 104790e7 push 0x1002e420 */
  push32((uint32_t)(0x1002e420u));
  /* 104790ec call dword ptr [0x100303ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303ec))), 0x104790f2u);
  /* 104790f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104790f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104790f7 call 0x10479c00 */
  push32(0x104790fcu); f_10479c00();
  /* 104790fc mov esi, esp */
  ESI = (ESP);
  /* 104790fe push 0x10029078 */
  push32((uint32_t)(0x10029078u));
  /* 10479103 push 0x1002e428 */
  push32((uint32_t)(0x1002e428u));
  /* 10479108 call dword ptr [0x100303ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303ec))), 0x1047910eu);
  /* 1047910e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10479111 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479113 call 0x10479c00 */
  push32(0x10479118u); f_10479c00();
  /* 10479118 mov esi, esp */
  ESI = (ESP);
  /* 1047911a push 0x10029070 */
  push32((uint32_t)(0x10029070u));
  /* 1047911f push 0x1002e430 */
  push32((uint32_t)(0x1002e430u));
  /* 10479124 call dword ptr [0x100303ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303ec))), 0x1047912au);
  /* 1047912a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047912d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047912f call 0x10479c00 */
  push32(0x10479134u); f_10479c00();
  /* 10479134 mov esi, esp */
  ESI = (ESP);
  /* 10479136 push 0x10029068 */
  push32((uint32_t)(0x10029068u));
  /* 1047913b push 0x1002e438 */
  push32((uint32_t)(0x1002e438u));
  /* 10479140 call dword ptr [0x100303ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303ec))), 0x10479146u);
  /* 10479146 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10479149 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047914b call 0x10479c00 */
  push32(0x10479150u); f_10479c00();
  /* 10479150 mov esi, esp */
  ESI = (ESP);
  /* 10479152 push 0x10029060 */
  push32((uint32_t)(0x10029060u));
  /* 10479157 push 0x1002e440 */
  push32((uint32_t)(0x1002e440u));
  /* 1047915c call dword ptr [0x100303ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303ec))), 0x10479162u);
  /* 10479162 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10479165 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479167 call 0x10479c00 */
  push32(0x1047916cu); f_10479c00();
  /* 1047916c mov esi, esp */
  ESI = (ESP);
  /* 1047916e push 0x10029058 */
  push32((uint32_t)(0x10029058u));
  /* 10479173 push 0x1002e3e0 */
  push32((uint32_t)(0x1002e3e0u));
  /* 10479178 call dword ptr [0x100303f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303f0))), 0x1047917eu);
  /* 1047917e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10479181 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479183 call 0x10479c00 */
  push32(0x10479188u); f_10479c00();
  /* 10479188 mov esi, esp */
  ESI = (ESP);
  /* 1047918a push 0x10029050 */
  push32((uint32_t)(0x10029050u));
  /* 1047918f push 0x1002e3f0 */
  push32((uint32_t)(0x1002e3f0u));
  /* 10479194 call dword ptr [0x100303f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303f0))), 0x1047919au);
  /* 1047919a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047919d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047919f call 0x10479c00 */
  push32(0x104791a4u); f_10479c00();
  /* 104791a4 mov esi, esp */
  ESI = (ESP);
  /* 104791a6 push 0x10029048 */
  push32((uint32_t)(0x10029048u));
  /* 104791ab push 0x1002e3e8 */
  push32((uint32_t)(0x1002e3e8u));
  /* 104791b0 call dword ptr [0x100303f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303f0))), 0x104791b6u);
  /* 104791b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104791b9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104791bb call 0x10479c00 */
  push32(0x104791c0u); f_10479c00();
  /* 104791c0 mov esi, esp */
  ESI = (ESP);
  /* 104791c2 push 0x10029040 */
  push32((uint32_t)(0x10029040u));
  /* 104791c7 push 0x1002e400 */
  push32((uint32_t)(0x1002e400u));
  /* 104791cc call dword ptr [0x100303f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303f0))), 0x104791d2u);
  /* 104791d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104791d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104791d7 call 0x10479c00 */
  push32(0x104791dcu); f_10479c00();
  /* 104791dc mov esi, esp */
  ESI = (ESP);
  /* 104791de push 0x10029038 */
  push32((uint32_t)(0x10029038u));
  /* 104791e3 push 0x1002e3f8 */
  push32((uint32_t)(0x1002e3f8u));
  /* 104791e8 call dword ptr [0x100303f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303f0))), 0x104791eeu);
  /* 104791ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104791f1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104791f3 call 0x10479c00 */
  push32(0x104791f8u); f_10479c00();
  /* 104791f8 mov esi, esp */
  ESI = (ESP);
  /* 104791fa push 0x10029030 */
  push32((uint32_t)(0x10029030u));
  /* 104791ff push 0x1002e408 */
  push32((uint32_t)(0x1002e408u));
  /* 10479204 call dword ptr [0x100303f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303f0))), 0x1047920au);
  /* 1047920a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047920d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047920f call 0x10479c00 */
  push32(0x10479214u); f_10479c00();
  /* 10479214 mov esi, esp */
  ESI = (ESP);
  /* 10479216 push 0x10029028 */
  push32((uint32_t)(0x10029028u));
  /* 1047921b push 1 */
  push32((uint32_t)(0x1u));
  /* 1047921d call dword ptr [0x100303e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303e8))), 0x10479223u);
  /* 10479223 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10479226 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479228 call 0x10479c00 */
  push32(0x1047922du); f_10479c00();
  /* 1047922d mov esi, esp */
  ESI = (ESP);
  /* 1047922f push 0x1002901c */
  push32((uint32_t)(0x1002901cu));
  /* 10479234 push 5 */
  push32((uint32_t)(0x5u));
  /* 10479236 call dword ptr [0x100303e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303e8))), 0x1047923cu);
  /* 1047923c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047923f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479241 call 0x10479c00 */
  push32(0x10479246u); f_10479c00();
  /* 10479246 pop edi */
  EDI = (pop32());
  /* 10479247 pop esi */
  ESI = (pop32());
  /* 10479248 pop ebx */
  EBX = (pop32());
  /* 10479249 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047924c cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047924e call 0x10479c00 */
  push32(0x10479253u); f_10479c00();
  /* 10479253 mov esp, ebp */
  ESP = (EBP);
  /* 10479255 pop ebp */
  EBP = (pop32());
  /* 10479256 ret  */
  ESPCHK(0x10479090u, _esp0);
  ESP += 4; return;
}

/* FUN_100192d0 @ 0x104792d0 (1733 bytes, 510 insns) */
void f_104792d0(void) {
  FTRACE(0x104792d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 104792d0 push ebp */
  push32((uint32_t)(EBP));
  /* 104792d1 mov ebp, esp */
  EBP = (ESP);
  /* 104792d3 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 104792d6 push ebx */
  push32((uint32_t)(EBX));
  /* 104792d7 push esi */
  push32((uint32_t)(ESI));
  /* 104792d8 push edi */
  push32((uint32_t)(EDI));
  /* 104792d9 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 104792dc mov ecx, 0x10 */
  ECX = (0x10u);
  /* 104792e1 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 104792e6 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 104792e8 mov esi, esp */
  ESI = (ESP);
  /* 104792ea push 1 */
  push32((uint32_t)(0x1u));
  /* 104792ec call dword ptr [0x100303c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303c0))), 0x104792f2u);
  /* 104792f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104792f5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104792f7 call 0x10479c00 */
  push32(0x104792fcu); f_10479c00();
  /* 104792fc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10479301 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10479303 je 0x10479458 */
  if (C.zf) goto L_10479458;
  /* 10479309 mov esi, esp */
  ESI = (ESP);
  /* 1047930b push 0 */
  push32((uint32_t)(0x0u));
  /* 1047930d push 1 */
  push32((uint32_t)(0x1u));
  /* 1047930f call dword ptr [0x100303b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303b8))), 0x10479315u);
  /* 10479315 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10479318 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047931a call 0x10479c00 */
  push32(0x1047931fu); f_10479c00();
  /* 1047931f mov esi, esp */
  ESI = (ESP);
  /* 10479321 push 0x30d40 */
  push32((uint32_t)(0x30d40u));
  /* 10479326 push 3 */
  push32((uint32_t)(0x3u));
  /* 10479328 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047932a call dword ptr [0x100303c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303c8))), 0x10479330u);
  /* 10479330 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10479333 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479335 call 0x10479c00 */
  push32(0x1047933au); f_10479c00();
  /* 1047933a mov esi, esp */
  ESI = (ESP);
  /* 1047933c push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 10479341 push 1 */
  push32((uint32_t)(0x1u));
  /* 10479343 push 0 */
  push32((uint32_t)(0x0u));
  /* 10479345 call dword ptr [0x100303c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303c8))), 0x1047934bu);
  /* 1047934b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047934e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479350 call 0x10479c00 */
  push32(0x10479355u); f_10479c00();
  /* 10479355 mov esi, esp */
  ESI = (ESP);
  /* 10479357 push 0 */
  push32((uint32_t)(0x0u));
  /* 10479359 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047935b push 0 */
  push32((uint32_t)(0x0u));
  /* 1047935d call dword ptr [0x100303c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303c8))), 0x10479363u);
  /* 10479363 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10479366 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479368 call 0x10479c00 */
  push32(0x1047936du); f_10479c00();
  /* 1047936d mov esi, esp */
  ESI = (ESP);
  /* 1047936f push 0 */
  push32((uint32_t)(0x0u));
  /* 10479371 push 2 */
  push32((uint32_t)(0x2u));
  /* 10479373 push 0 */
  push32((uint32_t)(0x0u));
  /* 10479375 call dword ptr [0x100303c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303c8))), 0x1047937bu);
  /* 1047937b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047937e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479380 call 0x10479c00 */
  push32(0x10479385u); f_10479c00();
  /* 10479385 mov esi, esp */
  ESI = (ESP);
  /* 10479387 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 1047938c push 5 */
  push32((uint32_t)(0x5u));
  /* 1047938e push 0 */
  push32((uint32_t)(0x0u));
  /* 10479390 call dword ptr [0x100303c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303c8))), 0x10479396u);
  /* 10479396 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10479399 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047939b call 0x10479c00 */
  push32(0x104793a0u); f_10479c00();
  /* 104793a0 mov esi, esp */
  ESI = (ESP);
  /* 104793a2 push 0xc350 */
  push32((uint32_t)(0xc350u));
  /* 104793a7 push 4 */
  push32((uint32_t)(0x4u));
  /* 104793a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 104793ab call dword ptr [0x100303c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303c8))), 0x104793b1u);
  /* 104793b1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104793b4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104793b6 call 0x10479c00 */
  push32(0x104793bbu); f_10479c00();
  /* 104793bb mov esi, esp */
  ESI = (ESP);
  /* 104793bd push 0x100290dc */
  push32((uint32_t)(0x100290dcu));
  /* 104793c2 call dword ptr [0x100303cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303cc))), 0x104793c8u);
  /* 104793c8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104793cb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104793cd call 0x10479c00 */
  push32(0x104793d2u); f_10479c00();
  /* 104793d2 mov esi, esp */
  ESI = (ESP);
  /* 104793d4 push 0x100290d0 */
  push32((uint32_t)(0x100290d0u));
  /* 104793d9 call dword ptr [0x100303cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303cc))), 0x104793dfu);
  /* 104793df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104793e2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104793e4 call 0x10479c00 */
  push32(0x104793e9u); f_10479c00();
  /* 104793e9 mov esi, esp */
  ESI = (ESP);
  /* 104793eb push 0 */
  push32((uint32_t)(0x0u));
  /* 104793ed push 0x1002e3f0 */
  push32((uint32_t)(0x1002e3f0u));
  /* 104793f2 call dword ptr [0x100303c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303c4))), 0x104793f8u);
  /* 104793f8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104793fb cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104793fd call 0x10479c00 */
  push32(0x10479402u); f_10479c00();
  /* 10479402 mov esi, esp */
  ESI = (ESP);
  /* 10479404 push 0 */
  push32((uint32_t)(0x0u));
  /* 10479406 push 0xb4 */
  push32((uint32_t)(0xb4u));
  /* 1047940b push 0x1002e418 */
  push32((uint32_t)(0x1002e418u));
  /* 10479410 push 1 */
  push32((uint32_t)(0x1u));
  /* 10479412 call dword ptr [0x100303d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303d4))), 0x10479418u);
  /* 10479418 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047941b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047941d call 0x10479c00 */
  push32(0x10479422u); f_10479c00();
  /* 10479422 mov esi, esp */
  ESI = (ESP);
  /* 10479424 push 0 */
  push32((uint32_t)(0x0u));
  /* 10479426 push 0x1002e400 */
  push32((uint32_t)(0x1002e400u));
  /* 1047942b call dword ptr [0x100303c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303c4))), 0x10479431u);
  /* 10479431 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10479434 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479436 call 0x10479c00 */
  push32(0x1047943bu); f_10479c00();
  /* 1047943b mov esi, esp */
  ESI = (ESP);
  /* 1047943d push 0 */
  push32((uint32_t)(0x0u));
  /* 1047943f push 0x5a */
  push32((uint32_t)(0x5au));
  /* 10479441 push 0x1002e410 */
  push32((uint32_t)(0x1002e410u));
  /* 10479446 push 5 */
  push32((uint32_t)(0x5u));
  /* 10479448 call dword ptr [0x100303d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303d4))), 0x1047944eu);
  /* 1047944e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10479451 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479453 call 0x10479c00 */
  push32(0x10479458u); f_10479c00();
L_10479458:;
  /* 10479458 mov esi, esp */
  ESI = (ESP);
  /* 1047945a push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1047945c call dword ptr [0x100303c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303c0))), 0x10479462u);
  /* 10479462 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10479465 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479467 call 0x10479c00 */
  push32(0x1047946cu); f_10479c00();
  /* 1047946c and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10479471 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10479473 je 0x104794d3 */
  if (C.zf) goto L_104794d3;
  /* 10479475 push 0x1002e3f0 */
  push32((uint32_t)(0x1002e3f0u));
  /* 1047947a call 0x10479005 */
  push32(0x1047947fu); f_10479005();
  /* 1047947f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10479482 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479485 jge 0x104794d3 */
  if ((C.sf==C.of)) goto L_104794d3;
  /* 10479487 mov esi, esp */
  ESI = (ESP);
  /* 10479489 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047948b push 0x1e */
  push32((uint32_t)(0x1eu));
  /* 1047948d call dword ptr [0x100303b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303b8))), 0x10479493u);
  /* 10479493 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10479496 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479498 call 0x10479c00 */
  push32(0x1047949du); f_10479c00();
  /* 1047949d mov esi, esp */
  ESI = (ESP);
  /* 1047949f push 0 */
  push32((uint32_t)(0x0u));
  /* 104794a1 push 0x1002e3e8 */
  push32((uint32_t)(0x1002e3e8u));
  /* 104794a6 call dword ptr [0x100303c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303c4))), 0x104794acu);
  /* 104794ac add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104794af cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104794b1 call 0x10479c00 */
  push32(0x104794b6u); f_10479c00();
  /* 104794b6 mov esi, esp */
  ESI = (ESP);
  /* 104794b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 104794ba push 0 */
  push32((uint32_t)(0x0u));
  /* 104794bc push 0x1002e410 */
  push32((uint32_t)(0x1002e410u));
  /* 104794c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 104794c3 call dword ptr [0x100303d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303d4))), 0x104794c9u);
  /* 104794c9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104794cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104794ce call 0x10479c00 */
  push32(0x104794d3u); f_10479c00();
L_104794d3:;
  /* 104794d3 mov esi, esp */
  ESI = (ESP);
  /* 104794d5 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 104794d7 call dword ptr [0x100303c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303c0))), 0x104794ddu);
  /* 104794dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104794e0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104794e2 call 0x10479c00 */
  push32(0x104794e7u); f_10479c00();
  /* 104794e7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104794ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104794ee je 0x10479542 */
  if (C.zf) goto L_10479542;
  /* 104794f0 mov esi, esp */
  ESI = (ESP);
  /* 104794f2 push 0x1002e400 */
  push32((uint32_t)(0x1002e400u));
  /* 104794f7 push 0x1002e410 */
  push32((uint32_t)(0x1002e410u));
  /* 104794fc call dword ptr [0x100303d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303d8))), 0x10479502u);
  /* 10479502 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10479505 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479507 call 0x10479c00 */
  push32(0x1047950cu); f_10479c00();
  /* 1047950c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047950e jle 0x10479542 */
  if ((C.zf||C.sf!=C.of)) goto L_10479542;
  /* 10479510 mov esi, esp */
  ESI = (ESP);
  /* 10479512 push 0 */
  push32((uint32_t)(0x0u));
  /* 10479514 push 0x1002e400 */
  push32((uint32_t)(0x1002e400u));
  /* 10479519 call dword ptr [0x100303c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303c4))), 0x1047951fu);
  /* 1047951f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10479522 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479524 call 0x10479c00 */
  push32(0x10479529u); f_10479c00();
  /* 10479529 mov esi, esp */
  ESI = (ESP);
  /* 1047952b push 0x1002e3f0 */
  push32((uint32_t)(0x1002e3f0u));
  /* 10479530 push 5 */
  push32((uint32_t)(0x5u));
  /* 10479532 call dword ptr [0x100303d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303d0))), 0x10479538u);
  /* 10479538 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047953b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047953d call 0x10479c00 */
  push32(0x10479542u); f_10479c00();
L_10479542:;
  /* 10479542 mov esi, esp */
  ESI = (ESP);
  /* 10479544 push 2 */
  push32((uint32_t)(0x2u));
  /* 10479546 call dword ptr [0x100303c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303c0))), 0x1047954cu);
  /* 1047954c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047954f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479551 call 0x10479c00 */
  push32(0x10479556u); f_10479c00();
  /* 10479556 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1047955b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047955d je 0x1047960d */
  if (C.zf) goto L_1047960d;
  /* 10479563 push 0x1002e400 */
  push32((uint32_t)(0x1002e400u));
  /* 10479568 call 0x10479005 */
  push32(0x1047956du); f_10479005();
  /* 1047956d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10479570 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10479572 jle 0x1047960d */
  if ((C.zf||C.sf!=C.of)) goto L_1047960d;
  /* 10479578 push 0x1002e3f0 */
  push32((uint32_t)(0x1002e3f0u));
  /* 1047957d call 0x10479005 */
  push32(0x10479582u); f_10479005();
  /* 10479582 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10479585 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10479587 jne 0x1047960d */
  if (!C.zf) goto L_1047960d;
  /* 1047958d mov esi, esp */
  ESI = (ESP);
  /* 1047958f push 0 */
  push32((uint32_t)(0x0u));
  /* 10479591 push 2 */
  push32((uint32_t)(0x2u));
  /* 10479593 call dword ptr [0x100303b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303b8))), 0x10479599u);
  /* 10479599 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047959c cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047959e call 0x10479c00 */
  push32(0x104795a3u); f_10479c00();
  /* 104795a3 mov esi, esp */
  ESI = (ESP);
  /* 104795a5 push 0x100290c8 */
  push32((uint32_t)(0x100290c8u));
  /* 104795aa call dword ptr [0x100303cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303cc))), 0x104795b0u);
  /* 104795b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104795b3 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104795b5 call 0x10479c00 */
  push32(0x104795bau); f_10479c00();
  /* 104795ba mov esi, esp */
  ESI = (ESP);
  /* 104795bc push 0 */
  push32((uint32_t)(0x0u));
  /* 104795be push 0x1002e400 */
  push32((uint32_t)(0x1002e400u));
  /* 104795c3 call dword ptr [0x100303c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303c4))), 0x104795c9u);
  /* 104795c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104795cc cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104795ce call 0x10479c00 */
  push32(0x104795d3u); f_10479c00();
  /* 104795d3 mov esi, esp */
  ESI = (ESP);
  /* 104795d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 104795d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 104795d9 push 0x1002e440 */
  push32((uint32_t)(0x1002e440u));
  /* 104795de push 5 */
  push32((uint32_t)(0x5u));
  /* 104795e0 call dword ptr [0x100303e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303e0))), 0x104795e6u);
  /* 104795e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104795e9 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104795eb call 0x10479c00 */
  push32(0x104795f0u); f_10479c00();
  /* 104795f0 mov esi, esp */
  ESI = (ESP);
  /* 104795f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 104795f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 104795f6 push 0x1002e438 */
  push32((uint32_t)(0x1002e438u));
  /* 104795fb push 5 */
  push32((uint32_t)(0x5u));
  /* 104795fd call dword ptr [0x100303e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303e0))), 0x10479603u);
  /* 10479603 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10479606 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479608 call 0x10479c00 */
  push32(0x1047960du); f_10479c00();
L_1047960d:;
  /* 1047960d mov esi, esp */
  ESI = (ESP);
  /* 1047960f push 3 */
  push32((uint32_t)(0x3u));
  /* 10479611 call dword ptr [0x100303c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303c0))), 0x10479617u);
  /* 10479617 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047961a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047961c call 0x10479c00 */
  push32(0x10479621u); f_10479c00();
  /* 10479621 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10479626 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10479628 je 0x104796b3 */
  if (C.zf) goto L_104796b3;
  /* 1047962e push 0x1002e400 */
  push32((uint32_t)(0x1002e400u));
  /* 10479633 call 0x10479005 */
  push32(0x10479638u); f_10479005();
  /* 10479638 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047963b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047963d jne 0x104796b3 */
  if (!C.zf) goto L_104796b3;
  /* 1047963f push 0x1002e3f0 */
  push32((uint32_t)(0x1002e3f0u));
  /* 10479644 call 0x10479005 */
  push32(0x10479649u); f_10479005();
  /* 10479649 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047964c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047964e jne 0x104796b3 */
  if (!C.zf) goto L_104796b3;
  /* 10479650 mov esi, esp */
  ESI = (ESP);
  /* 10479652 push 0 */
  push32((uint32_t)(0x0u));
  /* 10479654 push 3 */
  push32((uint32_t)(0x3u));
  /* 10479656 call dword ptr [0x100303b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303b8))), 0x1047965cu);
  /* 1047965c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047965f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479661 call 0x10479c00 */
  push32(0x10479666u); f_10479c00();
  /* 10479666 mov esi, esp */
  ESI = (ESP);
  /* 10479668 push 0x100290c0 */
  push32((uint32_t)(0x100290c0u));
  /* 1047966d call dword ptr [0x100303cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303cc))), 0x10479673u);
  /* 10479673 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10479676 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479678 call 0x10479c00 */
  push32(0x1047967du); f_10479c00();
  /* 1047967d mov esi, esp */
  ESI = (ESP);
  /* 1047967f push 0 */
  push32((uint32_t)(0x0u));
  /* 10479681 push 0x1002e408 */
  push32((uint32_t)(0x1002e408u));
  /* 10479686 call dword ptr [0x100303c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303c4))), 0x1047968cu);
  /* 1047968c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047968f cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479691 call 0x10479c00 */
  push32(0x10479696u); f_10479c00();
  /* 10479696 mov esi, esp */
  ESI = (ESP);
  /* 10479698 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047969a push 0 */
  push32((uint32_t)(0x0u));
  /* 1047969c push 0x1002e430 */
  push32((uint32_t)(0x1002e430u));
  /* 104796a1 push 5 */
  push32((uint32_t)(0x5u));
  /* 104796a3 call dword ptr [0x100303d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303d4))), 0x104796a9u);
  /* 104796a9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104796ac cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104796ae call 0x10479c00 */
  push32(0x104796b3u); f_10479c00();
L_104796b3:;
  /* 104796b3 mov esi, esp */
  ESI = (ESP);
  /* 104796b5 push 3 */
  push32((uint32_t)(0x3u));
  /* 104796b7 call dword ptr [0x100303c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303c0))), 0x104796bdu);
  /* 104796bd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104796c0 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104796c2 call 0x10479c00 */
  push32(0x104796c7u); f_10479c00();
  /* 104796c7 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104796cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104796ce jne 0x1047975e */
  if (!C.zf) goto L_1047975e;
  /* 104796d4 mov esi, esp */
  ESI = (ESP);
  /* 104796d6 push 4 */
  push32((uint32_t)(0x4u));
  /* 104796d8 call dword ptr [0x100303c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303c0))), 0x104796deu);
  /* 104796de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104796e1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104796e3 call 0x10479c00 */
  push32(0x104796e8u); f_10479c00();
  /* 104796e8 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104796ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104796ef je 0x1047975e */
  if (C.zf) goto L_1047975e;
  /* 104796f1 mov esi, esp */
  ESI = (ESP);
  /* 104796f3 push 0x1002e3e0 */
  push32((uint32_t)(0x1002e3e0u));
  /* 104796f8 push 0x1002e428 */
  push32((uint32_t)(0x1002e428u));
  /* 104796fd call dword ptr [0x100303d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303d8))), 0x10479703u);
  /* 10479703 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10479706 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479708 call 0x10479c00 */
  push32(0x1047970du); f_10479c00();
  /* 1047970d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047970f jle 0x1047975e */
  if ((C.zf||C.sf!=C.of)) goto L_1047975e;
  /* 10479711 push 0x1002e408 */
  push32((uint32_t)(0x1002e408u));
  /* 10479716 call 0x10479005 */
  push32(0x1047971bu); f_10479005();
  /* 1047971b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047971e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10479720 jne 0x1047975e */
  if (!C.zf) goto L_1047975e;
  /* 10479722 mov esi, esp */
  ESI = (ESP);
  /* 10479724 push 0 */
  push32((uint32_t)(0x0u));
  /* 10479726 push 4 */
  push32((uint32_t)(0x4u));
  /* 10479728 call dword ptr [0x100303b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303b8))), 0x1047972eu);
  /* 1047972e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10479731 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479733 call 0x10479c00 */
  push32(0x10479738u); f_10479c00();
  /* 10479738 mov esi, esp */
  ESI = (ESP);
  /* 1047973a push 0x100290b8 */
  push32((uint32_t)(0x100290b8u));
  /* 1047973f call dword ptr [0x100303cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303cc))), 0x10479745u);
  /* 10479745 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10479748 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047974a call 0x10479c00 */
  push32(0x1047974fu); f_10479c00();
  /* 1047974f mov esi, esp */
  ESI = (ESP);
  /* 10479751 call dword ptr [0x100303e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303e4))), 0x10479757u);
  /* 10479757 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479759 call 0x10479c00 */
  push32(0x1047975eu); f_10479c00();
L_1047975e:;
  /* 1047975e mov esi, esp */
  ESI = (ESP);
  /* 10479760 push 5 */
  push32((uint32_t)(0x5u));
  /* 10479762 call dword ptr [0x100303c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303c0))), 0x10479768u);
  /* 10479768 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047976b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047976d call 0x10479c00 */
  push32(0x10479772u); f_10479c00();
  /* 10479772 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10479777 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10479779 je 0x104797c8 */
  if (C.zf) goto L_104797c8;
  /* 1047977b push 0x1002e3e0 */
  push32((uint32_t)(0x1002e3e0u));
  /* 10479780 call 0x10479005 */
  push32(0x10479785u); f_10479005();
  /* 10479785 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10479788 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047978a jne 0x104797c8 */
  if (!C.zf) goto L_104797c8;
  /* 1047978c mov esi, esp */
  ESI = (ESP);
  /* 1047978e push 0 */
  push32((uint32_t)(0x0u));
  /* 10479790 push 5 */
  push32((uint32_t)(0x5u));
  /* 10479792 call dword ptr [0x100303b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303b8))), 0x10479798u);
  /* 10479798 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047979b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047979d call 0x10479c00 */
  push32(0x104797a2u); f_10479c00();
  /* 104797a2 mov esi, esp */
  ESI = (ESP);
  /* 104797a4 push 0x100290b0 */
  push32((uint32_t)(0x100290b0u));
  /* 104797a9 call dword ptr [0x100303cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303cc))), 0x104797afu);
  /* 104797af add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104797b2 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104797b4 call 0x10479c00 */
  push32(0x104797b9u); f_10479c00();
  /* 104797b9 mov esi, esp */
  ESI = (ESP);
  /* 104797bb call dword ptr [0x100303dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303dc))), 0x104797c1u);
  /* 104797c1 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104797c3 call 0x10479c00 */
  push32(0x104797c8u); f_10479c00();
L_104797c8:;
  /* 104797c8 mov esi, esp */
  ESI = (ESP);
  /* 104797ca push 5 */
  push32((uint32_t)(0x5u));
  /* 104797cc call dword ptr [0x100303c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303c0))), 0x104797d2u);
  /* 104797d2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104797d5 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104797d7 call 0x10479c00 */
  push32(0x104797dcu); f_10479c00();
  /* 104797dc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104797e1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104797e3 je 0x10479841 */
  if (C.zf) goto L_10479841;
  /* 104797e5 mov esi, esp */
  ESI = (ESP);
  /* 104797e7 push 0x1002e3f0 */
  push32((uint32_t)(0x1002e3f0u));
  /* 104797ec push 0x1002e418 */
  push32((uint32_t)(0x1002e418u));
  /* 104797f1 call dword ptr [0x100303d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303d8))), 0x104797f7u);
  /* 104797f7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104797fa cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104797fc call 0x10479c00 */
  push32(0x10479801u); f_10479c00();
  /* 10479801 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10479803 jle 0x10479841 */
  if ((C.zf||C.sf!=C.of)) goto L_10479841;
  /* 10479805 mov esi, esp */
  ESI = (ESP);
  /* 10479807 push 0 */
  push32((uint32_t)(0x0u));
  /* 10479809 push 5 */
  push32((uint32_t)(0x5u));
  /* 1047980b call dword ptr [0x100303b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303b8))), 0x10479811u);
  /* 10479811 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10479814 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479816 call 0x10479c00 */
  push32(0x1047981bu); f_10479c00();
  /* 1047981b mov esi, esp */
  ESI = (ESP);
  /* 1047981d push 0x100290a8 */
  push32((uint32_t)(0x100290a8u));
  /* 10479822 call dword ptr [0x100303cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303cc))), 0x10479828u);
  /* 10479828 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047982b cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047982d call 0x10479c00 */
  push32(0x10479832u); f_10479c00();
  /* 10479832 mov esi, esp */
  ESI = (ESP);
  /* 10479834 call dword ptr [0x100303dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303dc))), 0x1047983au);
  /* 1047983a cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047983c call 0x10479c00 */
  push32(0x10479841u); f_10479c00();
L_10479841:;
  /* 10479841 mov esi, esp */
  ESI = (ESP);
  /* 10479843 push 7 */
  push32((uint32_t)(0x7u));
  /* 10479845 call dword ptr [0x100303c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303c0))), 0x1047984bu);
  /* 1047984b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047984e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479850 call 0x10479c00 */
  push32(0x10479855u); f_10479c00();
  /* 10479855 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1047985a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047985c je 0x104798ab */
  if (C.zf) goto L_104798ab;
  /* 1047985e mov esi, esp */
  ESI = (ESP);
  /* 10479860 push 0x1002e3e0 */
  push32((uint32_t)(0x1002e3e0u));
  /* 10479865 push 0x1002e420 */
  push32((uint32_t)(0x1002e420u));
  /* 1047986a call dword ptr [0x100303d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303d8))), 0x10479870u);
  /* 10479870 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10479873 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479875 call 0x10479c00 */
  push32(0x1047987au); f_10479c00();
  /* 1047987a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047987c jle 0x104798ab */
  if ((C.zf||C.sf!=C.of)) goto L_104798ab;
  /* 1047987e mov esi, esp */
  ESI = (ESP);
  /* 10479880 push 0 */
  push32((uint32_t)(0x0u));
  /* 10479882 push 7 */
  push32((uint32_t)(0x7u));
  /* 10479884 call dword ptr [0x100303b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303b8))), 0x1047988au);
  /* 1047988a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047988d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047988f call 0x10479c00 */
  push32(0x10479894u); f_10479c00();
  /* 10479894 mov esi, esp */
  ESI = (ESP);
  /* 10479896 push 0x100290a0 */
  push32((uint32_t)(0x100290a0u));
  /* 1047989b call dword ptr [0x100303cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303cc))), 0x104798a1u);
  /* 104798a1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104798a4 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104798a6 call 0x10479c00 */
  push32(0x104798abu); f_10479c00();
L_104798ab:;
  /* 104798ab mov esi, esp */
  ESI = (ESP);
  /* 104798ad push 5 */
  push32((uint32_t)(0x5u));
  /* 104798af call dword ptr [0x100303c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303c0))), 0x104798b5u);
  /* 104798b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104798b8 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104798ba call 0x10479c00 */
  push32(0x104798bfu); f_10479c00();
  /* 104798bf and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 104798c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104798c6 je 0x10479915 */
  if (C.zf) goto L_10479915;
  /* 104798c8 mov esi, esp */
  ESI = (ESP);
  /* 104798ca push 0x1002e400 */
  push32((uint32_t)(0x1002e400u));
  /* 104798cf push 0x1002e440 */
  push32((uint32_t)(0x1002e440u));
  /* 104798d4 call dword ptr [0x100303d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303d8))), 0x104798dau);
  /* 104798da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104798dd cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104798df call 0x10479c00 */
  push32(0x104798e4u); f_10479c00();
  /* 104798e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 104798e6 jle 0x10479915 */
  if ((C.zf||C.sf!=C.of)) goto L_10479915;
  /* 104798e8 mov esi, esp */
  ESI = (ESP);
  /* 104798ea push 0 */
  push32((uint32_t)(0x0u));
  /* 104798ec push 5 */
  push32((uint32_t)(0x5u));
  /* 104798ee call dword ptr [0x100303b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303b8))), 0x104798f4u);
  /* 104798f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 104798f7 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 104798f9 call 0x10479c00 */
  push32(0x104798feu); f_10479c00();
  /* 104798fe mov esi, esp */
  ESI = (ESP);
  /* 10479900 push 0x10029098 */
  push32((uint32_t)(0x10029098u));
  /* 10479905 call dword ptr [0x100303cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303cc))), 0x1047990bu);
  /* 1047990b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047990e cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479910 call 0x10479c00 */
  push32(0x10479915u); f_10479c00();
L_10479915:;
  /* 10479915 mov esi, esp */
  ESI = (ESP);
  /* 10479917 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10479919 call dword ptr [0x100303c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303c0))), 0x1047991fu);
  /* 1047991f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10479922 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479924 call 0x10479c00 */
  push32(0x10479929u); f_10479c00();
  /* 10479929 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1047992e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10479930 je 0x10479984 */
  if (C.zf) goto L_10479984;
  /* 10479932 mov esi, esp */
  ESI = (ESP);
  /* 10479934 push 0x1002e408 */
  push32((uint32_t)(0x1002e408u));
  /* 10479939 push 0x1002e430 */
  push32((uint32_t)(0x1002e430u));
  /* 1047993e call dword ptr [0x100303d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303d8))), 0x10479944u);
  /* 10479944 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10479947 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479949 call 0x10479c00 */
  push32(0x1047994eu); f_10479c00();
  /* 1047994e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10479950 jle 0x10479984 */
  if ((C.zf||C.sf!=C.of)) goto L_10479984;
  /* 10479952 mov esi, esp */
  ESI = (ESP);
  /* 10479954 push 0 */
  push32((uint32_t)(0x0u));
  /* 10479956 push 0x1002e408 */
  push32((uint32_t)(0x1002e408u));
  /* 1047995b call dword ptr [0x100303c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303c4))), 0x10479961u);
  /* 10479961 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10479964 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479966 call 0x10479c00 */
  push32(0x1047996bu); f_10479c00();
  /* 1047996b mov esi, esp */
  ESI = (ESP);
  /* 1047996d push 0x1002e3e0 */
  push32((uint32_t)(0x1002e3e0u));
  /* 10479972 push 5 */
  push32((uint32_t)(0x5u));
  /* 10479974 call dword ptr [0x100303d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303d0))), 0x1047997au);
  /* 1047997a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047997d cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047997f call 0x10479c00 */
  push32(0x10479984u); f_10479c00();
L_10479984:;
  /* 10479984 pop edi */
  EDI = (pop32());
  /* 10479985 pop esi */
  ESI = (pop32());
  /* 10479986 pop ebx */
  EBX = (pop32());
  /* 10479987 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047998a cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047998c call 0x10479c00 */
  push32(0x10479991u); f_10479c00();
  /* 10479991 mov esp, ebp */
  ESP = (EBP);
  /* 10479993 pop ebp */
  EBP = (pop32());
  /* 10479994 ret  */
  ESPCHK(0x104792d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019b50 @ 0x10479b50 (63 bytes, 26 insns) */
void f_10479b50(void) {
  FTRACE(0x10479b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10479b50 push ebp */
  push32((uint32_t)(EBP));
  /* 10479b51 mov ebp, esp */
  EBP = (ESP);
  /* 10479b53 sub esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10479b56 push ebx */
  push32((uint32_t)(EBX));
  /* 10479b57 push esi */
  push32((uint32_t)(ESI));
  /* 10479b58 push edi */
  push32((uint32_t)(EDI));
  /* 10479b59 lea edi, [ebp - 0x40] */
  EDI = ((uint32_t)(EBP + -0x40));
  /* 10479b5c mov ecx, 0x10 */
  ECX = (0x10u);
  /* 10479b61 mov eax, 0xcccccccc */
  EAX = (0xccccccccu);
  /* 10479b66 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10479b68 mov esi, esp */
  ESI = (ESP);
  /* 10479b6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10479b6d push eax */
  push32((uint32_t)(EAX));
  /* 10479b6e call dword ptr [0x100303bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100303bc))), 0x10479b74u);
  /* 10479b74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10479b77 cmp esi, esp */
  { uint32_t _a=(ESI),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479b79 call 0x10479c00 */
  push32(0x10479b7eu); f_10479c00();
  /* 10479b7e pop edi */
  EDI = (pop32());
  /* 10479b7f pop esi */
  ESI = (pop32());
  /* 10479b80 pop ebx */
  EBX = (pop32());
  /* 10479b81 add esp, 0x40 */
  { uint32_t _a=(ESP),_b=(0x40u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10479b84 cmp ebp, esp */
  { uint32_t _a=(EBP),_b=(ESP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479b86 call 0x10479c00 */
  push32(0x10479b8bu); f_10479c00();
  /* 10479b8b mov esp, ebp */
  ESP = (EBP);
  /* 10479b8d pop ebp */
  EBP = (pop32());
  /* 10479b8e ret  */
  ESPCHK(0x10479b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10019c00 @ 0x10479c00 (3 bytes, 2 insns) */
void f_10479c00(void) {
  FTRACE(0x10479c00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10479c00 jne 0x10479c03 */
  if (!C.zf) { f_10479c03(); return; }
  /* 10479c02 ret  */
  ESPCHK(0x10479c00u, _esp0);
  ESP += 4; return;
}

/* FUN_10019c03 @ 0x10479c03 (53 bytes, 26 insns) */
void f_10479c03(void) {
  FTRACE(0x10479c03u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10479c03 push ebp */
  push32((uint32_t)(EBP));
  /* 10479c04 mov ebp, esp */
  EBP = (ESP);
  /* 10479c06 sub esp, 0 */
  { uint32_t _a=(ESP),_b=(0x0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10479c09 push eax */
  push32((uint32_t)(EAX));
  /* 10479c0a push edx */
  push32((uint32_t)(EDX));
  /* 10479c0b push ebx */
  push32((uint32_t)(EBX));
  /* 10479c0c push esi */
  push32((uint32_t)(ESI));
  /* 10479c0d push edi */
  push32((uint32_t)(EDI));
  /* 10479c0e push 0x100290f8 */
  push32((uint32_t)(0x100290f8u));
  /* 10479c13 push 0x100290f4 */
  push32((uint32_t)(0x100290f4u));
  /* 10479c18 push 0x2a */
  push32((uint32_t)(0x2au));
  /* 10479c1a push 0x100290e4 */
  push32((uint32_t)(0x100290e4u));
  /* 10479c1f push 1 */
  push32((uint32_t)(0x1u));
  /* 10479c21 call 0x10479fd0 */
  push32(0x10479c26u); f_10479fd0();
  /* 10479c26 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10479c29 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479c2c jne 0x10479c2f */
  if (!C.zf) goto L_10479c2f;
  /* 10479c2e int3  */
  x86_unimpl("int3 @ 0x10479c2e");
L_10479c2f:;
  /* 10479c2f pop edi */
  EDI = (pop32());
  /* 10479c30 pop esi */
  ESI = (pop32());
  /* 10479c31 pop ebx */
  EBX = (pop32());
  /* 10479c32 pop edx */
  EDX = (pop32());
  /* 10479c33 pop eax */
  EAX = (pop32());
  /* 10479c34 mov esp, ebp */
  ESP = (EBP);
  /* 10479c36 pop ebp */
  EBP = (pop32());
  /* 10479c37 ret  */
  ESPCHK(0x10479c03u, _esp0);
  ESP += 4; return;
}

/* FUN_10019c40 @ 0x10479c40 (313 bytes, 78 insns) */
void f_10479c40(void) {
  FTRACE(0x10479c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10479c40 push ebp */
  push32((uint32_t)(EBP));
  /* 10479c41 mov ebp, esp */
  EBP = (ESP);
  /* 10479c43 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479c47 jne 0x10479d07 */
  if (!C.zf) goto L_10479d07;
  /* 10479c4d call dword ptr [0x10030274] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030274))), 0x10479c53u);
  /* 10479c53 mov dword ptr [0x1002e480], eax */
  w32((uint32_t)(0x1002e480), (EAX));
  /* 10479c58 push 1 */
  push32((uint32_t)(0x1u));
  /* 10479c5a call 0x1047d700 */
  push32(0x10479c5fu); f_1047d700();
  /* 10479c5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10479c62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10479c64 jne 0x10479c6d */
  if (!C.zf) goto L_10479c6d;
  /* 10479c66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10479c68 jmp 0x10479d75 */
  goto L_10479d75;
L_10479c6d:;
  /* 10479c6d mov eax, dword ptr [0x1002e480] */
  EAX = (r32((uint32_t)(0x1002e480)));
  /* 10479c72 shr eax, 8 */
  EAX = (sh_shr((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10479c75 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 10479c7a mov dword ptr [0x1002e48c], eax */
  w32((uint32_t)(0x1002e48c), (EAX));
  /* 10479c7f mov ecx, dword ptr [0x1002e480] */
  ECX = (r32((uint32_t)(0x1002e480)));
  /* 10479c85 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 10479c8b mov dword ptr [0x1002e488], ecx */
  w32((uint32_t)(0x1002e488), (ECX));
  /* 10479c91 mov edx, dword ptr [0x1002e488] */
  EDX = (r32((uint32_t)(0x1002e488)));
  /* 10479c97 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 10479c9a add edx, dword ptr [0x1002e48c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1002e48c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10479ca0 mov dword ptr [0x1002e484], edx */
  w32((uint32_t)(0x1002e484), (EDX));
  /* 10479ca6 mov eax, dword ptr [0x1002e480] */
  EAX = (r32((uint32_t)(0x1002e480)));
  /* 10479cab shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10479cae and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10479cb3 mov dword ptr [0x1002e480], eax */
  w32((uint32_t)(0x1002e480), (EAX));
  /* 10479cb8 call 0x1047a870 */
  push32(0x10479cbdu); f_1047a870();
  /* 10479cbd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10479cbf jne 0x10479ccd */
  if (!C.zf) goto L_10479ccd;
  /* 10479cc1 call 0x1047d750 */
  push32(0x10479cc6u); f_1047d750();
  /* 10479cc6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10479cc8 jmp 0x10479d75 */
  goto L_10479d75;
L_10479ccd:;
  /* 10479ccd call dword ptr [0x10030270] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030270))), 0x10479cd3u);
  /* 10479cd3 mov dword ptr [0x1002ffcc], eax */
  w32((uint32_t)(0x1002ffcc), (EAX));
  /* 10479cd8 call 0x1047d4e0 */
  push32(0x10479cddu); f_1047d4e0();
  /* 10479cdd mov dword ptr [0x1002e468], eax */
  w32((uint32_t)(0x1002e468), (EAX));
  /* 10479ce2 call 0x1047ab20 */
  push32(0x10479ce7u); f_1047ab20();
  /* 10479ce7 call 0x1047cfd0 */
  push32(0x10479cecu); f_1047cfd0();
  /* 10479cec call 0x1047ce80 */
  push32(0x10479cf1u); f_1047ce80();
  /* 10479cf1 call 0x1047a670 */
  push32(0x10479cf6u); f_1047a670();
  /* 10479cf6 mov ecx, dword ptr [0x1002e464] */
  ECX = (r32((uint32_t)(0x1002e464)));
  /* 10479cfc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10479cff mov dword ptr [0x1002e464], ecx */
  w32((uint32_t)(0x1002e464), (ECX));
  /* 10479d05 jmp 0x10479d70 */
  goto L_10479d70;
L_10479d07:;
  /* 10479d07 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479d0b jne 0x10479d60 */
  if (!C.zf) goto L_10479d60;
  /* 10479d0d cmp dword ptr [0x1002e464], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e464))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479d14 jle 0x10479d5a */
  if ((C.zf||C.sf!=C.of)) goto L_10479d5a;
  /* 10479d16 mov edx, dword ptr [0x1002e464] */
  EDX = (r32((uint32_t)(0x1002e464)));
  /* 10479d1c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10479d1f mov dword ptr [0x1002e464], edx */
  w32((uint32_t)(0x1002e464), (EDX));
  /* 10479d25 cmp dword ptr [0x1002e4b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e4b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479d2c jne 0x10479d33 */
  if (!C.zf) goto L_10479d33;
  /* 10479d2e call 0x1047a6f0 */
  push32(0x10479d33u); f_1047a6f0();
L_10479d33:;
  /* 10479d33 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 10479d35 call 0x1047c420 */
  push32(0x10479d3au); f_1047c420();
  /* 10479d3a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10479d3d and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 10479d40 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10479d42 je 0x10479d49 */
  if (C.zf) goto L_10479d49;
  /* 10479d44 call 0x1047cd30 */
  push32(0x10479d49u); f_1047cd30();
L_10479d49:;
  /* 10479d49 call 0x1047ae50 */
  push32(0x10479d4eu); f_1047ae50();
  /* 10479d4e call 0x1047a900 */
  push32(0x10479d53u); f_1047a900();
  /* 10479d53 call 0x1047d750 */
  push32(0x10479d58u); f_1047d750();
  /* 10479d58 jmp 0x10479d5e */
  goto L_10479d5e;
L_10479d5a:;
  /* 10479d5a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10479d5c jmp 0x10479d75 */
  goto L_10479d75;
L_10479d5e:;
  /* 10479d5e jmp 0x10479d70 */
  goto L_10479d70;
L_10479d60:;
  /* 10479d60 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479d64 jne 0x10479d70 */
  if (!C.zf) goto L_10479d70;
  /* 10479d66 push 0 */
  push32((uint32_t)(0x0u));
  /* 10479d68 call 0x1047a9f0 */
  push32(0x10479d6du); f_1047a9f0();
  /* 10479d6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10479d70:;
  /* 10479d70 mov eax, 1 */
  EAX = (0x1u);
L_10479d75:;
  /* 10479d75 pop ebp */
  EBP = (pop32());
  /* 10479d76 ret 0xc */
  ESPCHK(0x10479c40u, _esp0);
  ESP += 16; return;
}

/* FUN_10019d80 @ 0x10479d80 (243 bytes, 86 insns) */
void f_10479d80(void) {
  FTRACE(0x10479d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10479d80 push ebp */
  push32((uint32_t)(EBP));
  /* 10479d81 mov ebp, esp */
  EBP = (ESP);
  /* 10479d83 push ecx */
  push32((uint32_t)(ECX));
  /* 10479d84 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 10479d8b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479d8f jne 0x10479da1 */
  if (!C.zf) goto L_10479da1;
  /* 10479d91 cmp dword ptr [0x1002e464], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e464))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479d98 jne 0x10479da1 */
  if (!C.zf) goto L_10479da1;
  /* 10479d9a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10479d9c jmp 0x10479e6d */
  goto L_10479e6d;
L_10479da1:;
  /* 10479da1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479da5 je 0x10479dad */
  if (C.zf) goto L_10479dad;
  /* 10479da7 cmp dword ptr [ebp + 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479dab jne 0x10479def */
  if (!C.zf) goto L_10479def;
L_10479dad:;
  /* 10479dad cmp dword ptr [0x1002ffdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002ffdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479db4 je 0x10479dcb */
  if (C.zf) goto L_10479dcb;
  /* 10479db6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10479db9 push eax */
  push32((uint32_t)(EAX));
  /* 10479dba mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10479dbd push ecx */
  push32((uint32_t)(ECX));
  /* 10479dbe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10479dc1 push edx */
  push32((uint32_t)(EDX));
  /* 10479dc2 call dword ptr [0x1002ffdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002ffdc))), 0x10479dc8u);
  /* 10479dc8 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10479dcb:;
  /* 10479dcb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479dcf je 0x10479de5 */
  if (C.zf) goto L_10479de5;
  /* 10479dd1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10479dd4 push eax */
  push32((uint32_t)(EAX));
  /* 10479dd5 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10479dd8 push ecx */
  push32((uint32_t)(ECX));
  /* 10479dd9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10479ddc push edx */
  push32((uint32_t)(EDX));
  /* 10479ddd call 0x10479c40 */
  push32(0x10479de2u); f_10479c40();
  /* 10479de2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10479de5:;
  /* 10479de5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479de9 jne 0x10479def */
  if (!C.zf) goto L_10479def;
  /* 10479deb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10479ded jmp 0x10479e6d */
  goto L_10479e6d;
L_10479def:;
  /* 10479def mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10479df2 push eax */
  push32((uint32_t)(EAX));
  /* 10479df3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10479df6 push ecx */
  push32((uint32_t)(ECX));
  /* 10479df7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10479dfa push edx */
  push32((uint32_t)(EDX));
  /* 10479dfb call 0x1047900f */
  push32(0x10479e00u); f_1047900f();
  /* 10479e00 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10479e03 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479e07 jne 0x10479e1e */
  if (!C.zf) goto L_10479e1e;
  /* 10479e09 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479e0d jne 0x10479e1e */
  if (!C.zf) goto L_10479e1e;
  /* 10479e0f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 10479e12 push eax */
  push32((uint32_t)(EAX));
  /* 10479e13 push 0 */
  push32((uint32_t)(0x0u));
  /* 10479e15 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10479e18 push ecx */
  push32((uint32_t)(ECX));
  /* 10479e19 call 0x10479c40 */
  push32(0x10479e1eu); f_10479c40();
L_10479e1e:;
  /* 10479e1e cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479e22 je 0x10479e2a */
  if (C.zf) goto L_10479e2a;
  /* 10479e24 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479e28 jne 0x10479e6a */
  if (!C.zf) goto L_10479e6a;
L_10479e2a:;
  /* 10479e2a mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10479e2d push edx */
  push32((uint32_t)(EDX));
  /* 10479e2e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10479e31 push eax */
  push32((uint32_t)(EAX));
  /* 10479e32 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10479e35 push ecx */
  push32((uint32_t)(ECX));
  /* 10479e36 call 0x10479c40 */
  push32(0x10479e3bu); f_10479c40();
  /* 10479e3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10479e3d jne 0x10479e46 */
  if (!C.zf) goto L_10479e46;
  /* 10479e3f mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_10479e46:;
  /* 10479e46 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479e4a je 0x10479e6a */
  if (C.zf) goto L_10479e6a;
  /* 10479e4c cmp dword ptr [0x1002ffdc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002ffdc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479e53 je 0x10479e6a */
  if (C.zf) goto L_10479e6a;
  /* 10479e55 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 10479e58 push edx */
  push32((uint32_t)(EDX));
  /* 10479e59 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10479e5c push eax */
  push32((uint32_t)(EAX));
  /* 10479e5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10479e60 push ecx */
  push32((uint32_t)(ECX));
  /* 10479e61 call dword ptr [0x1002ffdc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002ffdc))), 0x10479e67u);
  /* 10479e67 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_10479e6a:;
  /* 10479e6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10479e6d:;
  /* 10479e6d mov esp, ebp */
  ESP = (EBP);
  /* 10479e6f pop ebp */
  EBP = (pop32());
  /* 10479e70 ret 0xc */
  ESPCHK(0x10479d80u, _esp0);
  ESP += 16; return;
}

/* __amsg_exit @ 0x10479e80 (58 bytes, 18 insns) */
void f_10479e80(void) {
  FTRACE(0x10479e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10479e80 push ebp */
  push32((uint32_t)(EBP));
  /* 10479e81 mov ebp, esp */
  EBP = (ESP);
  /* 10479e83 cmp dword ptr [0x1002e470], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1002e470))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479e8a je 0x10479e9e */
  if (C.zf) goto L_10479e9e;
  /* 10479e8c cmp dword ptr [0x1002e470], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e470))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479e93 jne 0x10479ea3 */
  if (!C.zf) goto L_10479ea3;
  /* 10479e95 cmp dword ptr [0x1002e474], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1002e474))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479e9c jne 0x10479ea3 */
  if (!C.zf) goto L_10479ea3;
L_10479e9e:;
  /* 10479e9e call 0x1047d7f0 */
  push32(0x10479ea3u); f_1047d7f0();
L_10479ea3:;
  /* 10479ea3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10479ea6 push eax */
  push32((uint32_t)(EAX));
  /* 10479ea7 call 0x1047d840 */
  push32(0x10479eacu); f_1047d840();
  /* 10479eac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10479eaf push 0xff */
  push32((uint32_t)(0xffu));
  /* 10479eb4 call dword ptr [0x1002ca30] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002ca30))), 0x10479ebau);
  /* 10479eba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10479ebd pop ebp */
  EBP = (pop32());
  /* 10479ebe ret  */
  ESPCHK(0x10479e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10019ec0 @ 0x10479ec0 (11 bytes, 5 insns) */
void f_10479ec0(void) {
  FTRACE(0x10479ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10479ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 10479ec1 mov ebp, esp */
  EBP = (ESP);
  /* 10479ec3 call dword ptr [0x10030278] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030278))), 0x10479ec9u);
  /* 10479ec9 pop ebp */
  EBP = (pop32());
  /* 10479eca ret  */
  ESPCHK(0x10479ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019ed0 @ 0x10479ed0 (87 bytes, 30 insns) */
void f_10479ed0(void) {
  FTRACE(0x10479ed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10479ed0 push ebp */
  push32((uint32_t)(EBP));
  /* 10479ed1 mov ebp, esp */
  EBP = (ESP);
  /* 10479ed3 push ecx */
  push32((uint32_t)(ECX));
  /* 10479ed4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479ed8 jl 0x10479ee0 */
  if ((C.sf!=C.of)) goto L_10479ee0;
  /* 10479eda cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479ede jl 0x10479ee5 */
  if ((C.sf!=C.of)) goto L_10479ee5;
L_10479ee0:;
  /* 10479ee0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10479ee3 jmp 0x10479f23 */
  goto L_10479f23;
L_10479ee5:;
  /* 10479ee5 cmp dword ptr [ebp + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479ee9 jne 0x10479ef7 */
  if (!C.zf) goto L_10479ef7;
  /* 10479eeb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10479eee mov eax, dword ptr [eax*4 + 0x1002ca38] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1002ca38)));
  /* 10479ef5 jmp 0x10479f23 */
  goto L_10479f23;
L_10479ef7:;
  /* 10479ef7 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10479efa and ecx, 0xfffffff8 */
  { uint32_t _r=(ECX)&(0xfffffff8u); ECX = (_r); fl_logic(_r,32); }
  /* 10479efd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 10479eff je 0x10479f06 */
  if (C.zf) goto L_10479f06;
  /* 10479f01 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10479f04 jmp 0x10479f23 */
  goto L_10479f23;
L_10479f06:;
  /* 10479f06 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10479f09 mov eax, dword ptr [edx*4 + 0x1002ca38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1002ca38)));
  /* 10479f10 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10479f13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10479f16 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10479f19 mov dword ptr [ecx*4 + 0x1002ca38], edx */
  w32((uint32_t)(ECX*4 + 0x1002ca38), (EDX));
  /* 10479f20 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10479f23:;
  /* 10479f23 mov esp, ebp */
  ESP = (EBP);
  /* 10479f25 pop ebp */
  EBP = (pop32());
  /* 10479f26 ret  */
  ESPCHK(0x10479ed0u, _esp0);
  ESP += 4; return;
}

/* __CrtSetReportFile @ 0x10479f30 (126 bytes, 38 insns) */
void f_10479f30(void) {
  FTRACE(0x10479f30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10479f30 push ebp */
  push32((uint32_t)(EBP));
  /* 10479f31 mov ebp, esp */
  EBP = (ESP);
  /* 10479f33 push ecx */
  push32((uint32_t)(ECX));
  /* 10479f34 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479f38 jl 0x10479f40 */
  if ((C.sf!=C.of)) goto L_10479f40;
  /* 10479f3a cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479f3e jl 0x10479f47 */
  if ((C.sf!=C.of)) goto L_10479f47;
L_10479f40:;
  /* 10479f40 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 10479f45 jmp 0x10479faa */
  goto L_10479faa;
L_10479f47:;
  /* 10479f47 cmp dword ptr [ebp + 0xc], -6 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479f4b jne 0x10479f59 */
  if (!C.zf) goto L_10479f59;
  /* 10479f4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10479f50 mov eax, dword ptr [eax*4 + 0x1002ca44] */
  EAX = (r32((uint32_t)(EAX*4 + 0x1002ca44)));
  /* 10479f57 jmp 0x10479faa */
  goto L_10479faa;
L_10479f59:;
  /* 10479f59 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10479f5c mov edx, dword ptr [ecx*4 + 0x1002ca44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1002ca44)));
  /* 10479f63 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 10479f66 cmp dword ptr [ebp + 0xc], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479f6a jne 0x10479f80 */
  if (!C.zf) goto L_10479f80;
  /* 10479f6c push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 10479f6e call dword ptr [0x1003027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003027c))), 0x10479f74u);
  /* 10479f74 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10479f77 mov dword ptr [ecx*4 + 0x1002ca44], eax */
  w32((uint32_t)(ECX*4 + 0x1002ca44), (EAX));
  /* 10479f7e jmp 0x10479fa7 */
  goto L_10479fa7;
L_10479f80:;
  /* 10479f80 cmp dword ptr [ebp + 0xc], -5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xfffffffbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10479f84 jne 0x10479f9a */
  if (!C.zf) goto L_10479f9a;
  /* 10479f86 push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 10479f88 call dword ptr [0x1003027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003027c))), 0x10479f8eu);
  /* 10479f8e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10479f91 mov dword ptr [edx*4 + 0x1002ca44], eax */
  w32((uint32_t)(EDX*4 + 0x1002ca44), (EAX));
  /* 10479f98 jmp 0x10479fa7 */
  goto L_10479fa7;
L_10479f9a:;
  /* 10479f9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10479f9d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10479fa0 mov dword ptr [eax*4 + 0x1002ca44], ecx */
  w32((uint32_t)(EAX*4 + 0x1002ca44), (ECX));
L_10479fa7:;
  /* 10479fa7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_10479faa:;
  /* 10479faa mov esp, ebp */
  ESP = (EBP);
  /* 10479fac pop ebp */
  EBP = (pop32());
  /* 10479fad ret  */
  ESPCHK(0x10479f30u, _esp0);
  ESP += 4; return;
}

/* FUN_10019fb0 @ 0x10479fb0 (28 bytes, 11 insns) */
void f_10479fb0(void) {
  FTRACE(0x10479fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10479fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 10479fb1 mov ebp, esp */
  EBP = (ESP);
  /* 10479fb3 push ecx */
  push32((uint32_t)(ECX));
  /* 10479fb4 mov eax, dword ptr [0x1002ffc0] */
  EAX = (r32((uint32_t)(0x1002ffc0)));
  /* 10479fb9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 10479fbc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 10479fbf mov dword ptr [0x1002ffc0], ecx */
  w32((uint32_t)(0x1002ffc0), (ECX));
  /* 10479fc5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 10479fc8 mov esp, ebp */
  ESP = (EBP);
  /* 10479fca pop ebp */
  EBP = (pop32());
  /* 10479fcb ret  */
  ESPCHK(0x10479fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10019fd0 @ 0x10479fd0 (912 bytes, 248 insns) */
void f_10479fd0(void) {
  FTRACE(0x10479fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10479fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 10479fd1 mov ebp, esp */
  EBP = (ESP);
  /* 10479fd3 mov eax, 0x302c */
  EAX = (0x302cu);
  /* 10479fd8 call 0x1047e0b0 */
  push32(0x10479fddu); f_1047e0b0();
  /* 10479fdd push edi */
  push32((uint32_t)(EDI));
  /* 10479fde mov byte ptr [ebp - 0x3008], 0 */
  w8((uint32_t)(EBP + -0x3008), (0x0u));
  /* 10479fe5 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 10479fea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10479fec lea edi, [ebp - 0x3007] */
  EDI = ((uint32_t)(EBP + -0x3007));
  /* 10479ff2 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10479ff4 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 10479ff6 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 10479ff7 mov byte ptr [ebp - 0x2008], 0 */
  w8((uint32_t)(EBP + -0x2008), (0x0u));
  /* 10479ffe mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 1047a003 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047a005 lea edi, [ebp - 0x2007] */
  EDI = ((uint32_t)(EBP + -0x2007));
  /* 1047a00b rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1047a00d stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 1047a00f stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1047a010 mov byte ptr [ebp - 0x1000], 0 */
  w8((uint32_t)(EBP + -0x1000), (0x0u));
  /* 1047a017 mov ecx, 0x3ff */
  ECX = (0x3ffu);
  /* 1047a01c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047a01e lea edi, [ebp - 0xfff] */
  EDI = ((uint32_t)(EBP + -0xfff));
  /* 1047a024 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1047a026 stosw word ptr es:[edi], ax */
  w16(EDI, AX); EDI+=(C.df?-2:2);
  /* 1047a028 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1047a029 lea eax, [ebp + 0x1c] */
  EAX = ((uint32_t)(EBP + 0x1c));
  /* 1047a02c mov dword ptr [ebp - 0x1004], eax */
  w32((uint32_t)(EBP + -0x1004), (EAX));
  /* 1047a032 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047a036 jl 0x1047a03e */
  if ((C.sf!=C.of)) goto L_1047a03e;
  /* 1047a038 cmp dword ptr [ebp + 8], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047a03c jl 0x1047a046 */
  if ((C.sf!=C.of)) goto L_1047a046;
L_1047a03e:;
  /* 1047a03e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1047a041 jmp 0x1047a35b */
  goto L_1047a35b;
L_1047a046:;
  /* 1047a046 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047a04a jne 0x1047a0f0 */
  if (!C.zf) goto L_1047a0f0;
  /* 1047a050 push 0x1002ca34 */
  push32((uint32_t)(0x1002ca34u));
  /* 1047a055 call dword ptr [0x10030294] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030294))), 0x1047a05bu);
  /* 1047a05b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047a05d jle 0x1047a0f0 */
  if ((C.zf||C.sf!=C.of)) goto L_1047a0f0;
  /* 1047a063 cmp dword ptr [0x1002e478], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e478))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047a06a jne 0x1047a0ae */
  if (!C.zf) goto L_1047a0ae;
  /* 1047a06c push 0x100292a0 */
  push32((uint32_t)(0x100292a0u));
  /* 1047a071 call dword ptr [0x10030290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030290))), 0x1047a077u);
  /* 1047a077 mov dword ptr [ebp - 0x300c], eax */
  w32((uint32_t)(EBP + -0x300c), (EAX));
  /* 1047a07d cmp dword ptr [ebp - 0x300c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x300c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047a084 je 0x1047a0a6 */
  if (C.zf) goto L_1047a0a6;
  /* 1047a086 push 0x10029294 */
  push32((uint32_t)(0x10029294u));
  /* 1047a08b mov ecx, dword ptr [ebp - 0x300c] */
  ECX = (r32((uint32_t)(EBP + -0x300c)));
  /* 1047a091 push ecx */
  push32((uint32_t)(ECX));
  /* 1047a092 call dword ptr [0x1003028c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003028c))), 0x1047a098u);
  /* 1047a098 mov dword ptr [0x1002e478], eax */
  w32((uint32_t)(0x1002e478), (EAX));
  /* 1047a09d cmp dword ptr [0x1002e478], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e478))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047a0a4 jne 0x1047a0ae */
  if (!C.zf) goto L_1047a0ae;
L_1047a0a6:;
  /* 1047a0a6 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1047a0a9 jmp 0x1047a35b */
  goto L_1047a35b;
L_1047a0ae:;
  /* 1047a0ae mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047a0b1 push edx */
  push32((uint32_t)(EDX));
  /* 1047a0b2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047a0b5 push eax */
  push32((uint32_t)(EAX));
  /* 1047a0b6 push 0x10029260 */
  push32((uint32_t)(0x10029260u));
  /* 1047a0bb lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 1047a0c1 push ecx */
  push32((uint32_t)(ECX));
  /* 1047a0c2 call dword ptr [0x1002e478] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002e478))), 0x1047a0c8u);
  /* 1047a0c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047a0cb lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 1047a0d1 push edx */
  push32((uint32_t)(EDX));
  /* 1047a0d2 call dword ptr [0x10030288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030288))), 0x1047a0d8u);
  /* 1047a0d8 push 0x1002ca34 */
  push32((uint32_t)(0x1002ca34u));
  /* 1047a0dd call dword ptr [0x10030284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030284))), 0x1047a0e3u);
  /* 1047a0e3 call 0x10479ec0 */
  push32(0x1047a0e8u); f_10479ec0();
  /* 1047a0e8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1047a0eb jmp 0x1047a35b */
  goto L_1047a35b;
L_1047a0f0:;
  /* 1047a0f0 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047a0f4 je 0x1047a12d */
  if (C.zf) goto L_1047a12d;
  /* 1047a0f6 mov eax, dword ptr [ebp - 0x1004] */
  EAX = (r32((uint32_t)(EBP + -0x1004)));
  /* 1047a0fc push eax */
  push32((uint32_t)(EAX));
  /* 1047a0fd mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1047a100 push ecx */
  push32((uint32_t)(ECX));
  /* 1047a101 push 0xfed */
  push32((uint32_t)(0xfedu));
  /* 1047a106 lea edx, [ebp - 0x1000] */
  EDX = ((uint32_t)(EBP + -0x1000));
  /* 1047a10c push edx */
  push32((uint32_t)(EDX));
  /* 1047a10d call 0x1047dfb0 */
  push32(0x1047a112u); f_1047dfb0();
  /* 1047a112 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047a115 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047a117 jge 0x1047a12d */
  if ((C.sf==C.of)) goto L_1047a12d;
  /* 1047a119 push 0x10029234 */
  push32((uint32_t)(0x10029234u));
  /* 1047a11e lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 1047a124 push eax */
  push32((uint32_t)(EAX));
  /* 1047a125 call 0x1047dec0 */
  push32(0x1047a12au); f_1047dec0();
  /* 1047a12a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047a12d:;
  /* 1047a12d cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047a131 jne 0x1047a165 */
  if (!C.zf) goto L_1047a165;
  /* 1047a133 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047a137 je 0x1047a145 */
  if (C.zf) goto L_1047a145;
  /* 1047a139 mov dword ptr [ebp - 0x3028], 0x10029220 */
  w32((uint32_t)(EBP + -0x3028), (0x10029220u));
  /* 1047a143 jmp 0x1047a14f */
  goto L_1047a14f;
L_1047a145:;
  /* 1047a145 mov dword ptr [ebp - 0x3028], 0x1002920c */
  w32((uint32_t)(EBP + -0x3028), (0x1002920cu));
L_1047a14f:;
  /* 1047a14f mov ecx, dword ptr [ebp - 0x3028] */
  ECX = (r32((uint32_t)(EBP + -0x3028)));
  /* 1047a155 push ecx */
  push32((uint32_t)(ECX));
  /* 1047a156 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 1047a15c push edx */
  push32((uint32_t)(EDX));
  /* 1047a15d call 0x1047dec0 */
  push32(0x1047a162u); f_1047dec0();
  /* 1047a162 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047a165:;
  /* 1047a165 lea eax, [ebp - 0x1000] */
  EAX = ((uint32_t)(EBP + -0x1000));
  /* 1047a16b push eax */
  push32((uint32_t)(EAX));
  /* 1047a16c lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 1047a172 push ecx */
  push32((uint32_t)(ECX));
  /* 1047a173 call 0x1047ded0 */
  push32(0x1047a178u); f_1047ded0();
  /* 1047a178 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047a17b cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047a17f jne 0x1047a1ba */
  if (!C.zf) goto L_1047a1ba;
  /* 1047a181 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047a184 mov eax, dword ptr [edx*4 + 0x1002ca38] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1002ca38)));
  /* 1047a18b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1047a18e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047a190 je 0x1047a1a6 */
  if (C.zf) goto L_1047a1a6;
  /* 1047a192 push 0x10029208 */
  push32((uint32_t)(0x10029208u));
  /* 1047a197 lea ecx, [ebp - 0x3008] */
  ECX = ((uint32_t)(EBP + -0x3008));
  /* 1047a19d push ecx */
  push32((uint32_t)(ECX));
  /* 1047a19e call 0x1047ded0 */
  push32(0x1047a1a3u); f_1047ded0();
  /* 1047a1a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047a1a6:;
  /* 1047a1a6 push 0x10029204 */
  push32((uint32_t)(0x10029204u));
  /* 1047a1ab lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 1047a1b1 push edx */
  push32((uint32_t)(EDX));
  /* 1047a1b2 call 0x1047ded0 */
  push32(0x1047a1b7u); f_1047ded0();
  /* 1047a1b7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047a1ba:;
  /* 1047a1ba cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047a1be je 0x1047a202 */
  if (C.zf) goto L_1047a202;
  /* 1047a1c0 lea eax, [ebp - 0x3008] */
  EAX = ((uint32_t)(EBP + -0x3008));
  /* 1047a1c6 push eax */
  push32((uint32_t)(EAX));
  /* 1047a1c7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047a1ca push ecx */
  push32((uint32_t)(ECX));
  /* 1047a1cb mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047a1ce push edx */
  push32((uint32_t)(EDX));
  /* 1047a1cf push 0x100291f8 */
  push32((uint32_t)(0x100291f8u));
  /* 1047a1d4 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1047a1d9 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 1047a1df push eax */
  push32((uint32_t)(EAX));
  /* 1047a1e0 call 0x1047ddc0 */
  push32(0x1047a1e5u); f_1047ddc0();
  /* 1047a1e5 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047a1e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047a1ea jge 0x1047a200 */
  if ((C.sf==C.of)) goto L_1047a200;
  /* 1047a1ec push 0x10029234 */
  push32((uint32_t)(0x10029234u));
  /* 1047a1f1 lea ecx, [ebp - 0x2008] */
  ECX = ((uint32_t)(EBP + -0x2008));
  /* 1047a1f7 push ecx */
  push32((uint32_t)(ECX));
  /* 1047a1f8 call 0x1047dec0 */
  push32(0x1047a1fdu); f_1047dec0();
  /* 1047a1fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047a200:;
  /* 1047a200 jmp 0x1047a218 */
  goto L_1047a218;
L_1047a202:;
  /* 1047a202 lea edx, [ebp - 0x3008] */
  EDX = ((uint32_t)(EBP + -0x3008));
  /* 1047a208 push edx */
  push32((uint32_t)(EDX));
  /* 1047a209 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 1047a20f push eax */
  push32((uint32_t)(EAX));
  /* 1047a210 call 0x1047dec0 */
  push32(0x1047a215u); f_1047dec0();
  /* 1047a215 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047a218:;
  /* 1047a218 cmp dword ptr [0x1002ffc0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002ffc0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047a21f je 0x1047a25c */
  if (C.zf) goto L_1047a25c;
  /* 1047a221 lea ecx, [ebp - 0x1008] */
  ECX = ((uint32_t)(EBP + -0x1008));
  /* 1047a227 push ecx */
  push32((uint32_t)(ECX));
  /* 1047a228 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 1047a22e push edx */
  push32((uint32_t)(EDX));
  /* 1047a22f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047a232 push eax */
  push32((uint32_t)(EAX));
  /* 1047a233 call dword ptr [0x1002ffc0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002ffc0))), 0x1047a239u);
  /* 1047a239 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047a23c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047a23e je 0x1047a25c */
  if (C.zf) goto L_1047a25c;
  /* 1047a240 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047a244 jne 0x1047a251 */
  if (!C.zf) goto L_1047a251;
  /* 1047a246 push 0x1002ca34 */
  push32((uint32_t)(0x1002ca34u));
  /* 1047a24b call dword ptr [0x10030284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030284))), 0x1047a251u);
L_1047a251:;
  /* 1047a251 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 1047a257 jmp 0x1047a35b */
  goto L_1047a35b;
L_1047a25c:;
  /* 1047a25c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047a25f mov edx, dword ptr [ecx*4 + 0x1002ca38] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1002ca38)));
  /* 1047a266 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1047a269 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1047a26b je 0x1047a2ab */
  if (C.zf) goto L_1047a2ab;
  /* 1047a26d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047a270 cmp dword ptr [eax*4 + 0x1002ca44], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x1002ca44))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047a278 je 0x1047a2ab */
  if (C.zf) goto L_1047a2ab;
  /* 1047a27a push 0 */
  push32((uint32_t)(0x0u));
  /* 1047a27c lea ecx, [ebp - 0x3010] */
  ECX = ((uint32_t)(EBP + -0x3010));
  /* 1047a282 push ecx */
  push32((uint32_t)(ECX));
  /* 1047a283 lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 1047a289 push edx */
  push32((uint32_t)(EDX));
  /* 1047a28a call 0x1047dd40 */
  push32(0x1047a28fu); f_1047dd40();
  /* 1047a28f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047a292 push eax */
  push32((uint32_t)(EAX));
  /* 1047a293 lea eax, [ebp - 0x2008] */
  EAX = ((uint32_t)(EBP + -0x2008));
  /* 1047a299 push eax */
  push32((uint32_t)(EAX));
  /* 1047a29a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047a29d mov edx, dword ptr [ecx*4 + 0x1002ca44] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1002ca44)));
  /* 1047a2a4 push edx */
  push32((uint32_t)(EDX));
  /* 1047a2a5 call dword ptr [0x10030280] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030280))), 0x1047a2abu);
L_1047a2ab:;
  /* 1047a2ab mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047a2ae mov ecx, dword ptr [eax*4 + 0x1002ca38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1002ca38)));
  /* 1047a2b5 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1047a2b8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1047a2ba je 0x1047a2c9 */
  if (C.zf) goto L_1047a2c9;
  /* 1047a2bc lea edx, [ebp - 0x2008] */
  EDX = ((uint32_t)(EBP + -0x2008));
  /* 1047a2c2 push edx */
  push32((uint32_t)(EDX));
  /* 1047a2c3 call dword ptr [0x10030288] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030288))), 0x1047a2c9u);
L_1047a2c9:;
  /* 1047a2c9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047a2cc mov ecx, dword ptr [eax*4 + 0x1002ca38] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1002ca38)));
  /* 1047a2d3 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1047a2d6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1047a2d8 je 0x1047a348 */
  if (C.zf) goto L_1047a348;
  /* 1047a2da cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047a2de je 0x1047a2fd */
  if (C.zf) goto L_1047a2fd;
  /* 1047a2e0 push 0xa */
  push32((uint32_t)(0xau));
  /* 1047a2e2 lea edx, [ebp - 0x3024] */
  EDX = ((uint32_t)(EBP + -0x3024));
  /* 1047a2e8 push edx */
  push32((uint32_t)(EDX));
  /* 1047a2e9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047a2ec push eax */
  push32((uint32_t)(EAX));
  /* 1047a2ed call 0x1047da50 */
  push32(0x1047a2f2u); f_1047da50();
  /* 1047a2f2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047a2f5 mov dword ptr [ebp - 0x302c], eax */
  w32((uint32_t)(EBP + -0x302c), (EAX));
  /* 1047a2fb jmp 0x1047a307 */
  goto L_1047a307;
L_1047a2fd:;
  /* 1047a2fd mov dword ptr [ebp - 0x302c], 0 */
  w32((uint32_t)(EBP + -0x302c), (0x0u));
L_1047a307:;
  /* 1047a307 lea ecx, [ebp - 0x1000] */
  ECX = ((uint32_t)(EBP + -0x1000));
  /* 1047a30d push ecx */
  push32((uint32_t)(ECX));
  /* 1047a30e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1047a311 push edx */
  push32((uint32_t)(EDX));
  /* 1047a312 mov eax, dword ptr [ebp - 0x302c] */
  EAX = (r32((uint32_t)(EBP + -0x302c)));
  /* 1047a318 push eax */
  push32((uint32_t)(EAX));
  /* 1047a319 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047a31c push ecx */
  push32((uint32_t)(ECX));
  /* 1047a31d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047a320 push edx */
  push32((uint32_t)(EDX));
  /* 1047a321 call 0x1047a360 */
  push32(0x1047a326u); f_1047a360();
  /* 1047a326 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047a329 mov dword ptr [ebp - 0x1008], eax */
  w32((uint32_t)(EBP + -0x1008), (EAX));
  /* 1047a32f cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047a333 jne 0x1047a340 */
  if (!C.zf) goto L_1047a340;
  /* 1047a335 push 0x1002ca34 */
  push32((uint32_t)(0x1002ca34u));
  /* 1047a33a call dword ptr [0x10030284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030284))), 0x1047a340u);
L_1047a340:;
  /* 1047a340 mov eax, dword ptr [ebp - 0x1008] */
  EAX = (r32((uint32_t)(EBP + -0x1008)));
  /* 1047a346 jmp 0x1047a35b */
  goto L_1047a35b;
L_1047a348:;
  /* 1047a348 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047a34c jne 0x1047a359 */
  if (!C.zf) goto L_1047a359;
  /* 1047a34e push 0x1002ca34 */
  push32((uint32_t)(0x1002ca34u));
  /* 1047a353 call dword ptr [0x10030284] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030284))), 0x1047a359u);
L_1047a359:;
  /* 1047a359 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1047a35b:;
  /* 1047a35b pop edi */
  EDI = (pop32());
  /* 1047a35c mov esp, ebp */
  ESP = (EBP);
  /* 1047a35e pop ebp */
  EBP = (pop32());
  /* 1047a35f ret  */
  ESPCHK(0x10479fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a360 @ 0x1047a360 (780 bytes, 197 insns) */
void f_1047a360(void) {
  FTRACE(0x1047a360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047a360 push ebp */
  push32((uint32_t)(EBP));
  /* 1047a361 mov ebp, esp */
  EBP = (ESP);
  /* 1047a363 mov eax, 0x1138 */
  EAX = (0x1138u);
  /* 1047a368 call 0x1047e0b0 */
  push32(0x1047a36du); f_1047e0b0();
L_1047a36d:;
  /* 1047a36d cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047a371 jne 0x1047a398 */
  if (!C.zf) goto L_1047a398;
  /* 1047a373 push 0x100293f0 */
  push32((uint32_t)(0x100293f0u));
  /* 1047a378 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047a37a push 0x1da */
  push32((uint32_t)(0x1dau));
  /* 1047a37f push 0x100293e4 */
  push32((uint32_t)(0x100293e4u));
  /* 1047a384 push 2 */
  push32((uint32_t)(0x2u));
  /* 1047a386 call 0x10479fd0 */
  push32(0x1047a38bu); f_10479fd0();
  /* 1047a38b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047a38e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047a391 jne 0x1047a398 */
  if (!C.zf) goto L_1047a398;
  /* 1047a393 call 0x10479ec0 */
  push32(0x1047a398u); f_10479ec0();
L_1047a398:;
  /* 1047a398 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047a39a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047a39c jne 0x1047a36d */
  if (!C.zf) goto L_1047a36d;
  /* 1047a39e push 0x104 */
  push32((uint32_t)(0x104u));
  /* 1047a3a3 lea ecx, [ebp - 0x108] */
  ECX = ((uint32_t)(EBP + -0x108));
  /* 1047a3a9 push ecx */
  push32((uint32_t)(ECX));
  /* 1047a3aa push 0 */
  push32((uint32_t)(0x0u));
  /* 1047a3ac call dword ptr [0x10030298] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030298))), 0x1047a3b2u);
  /* 1047a3b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047a3b4 jne 0x1047a3ca */
  if (!C.zf) goto L_1047a3ca;
  /* 1047a3b6 push 0x100293cc */
  push32((uint32_t)(0x100293ccu));
  /* 1047a3bb lea edx, [ebp - 0x108] */
  EDX = ((uint32_t)(EBP + -0x108));
  /* 1047a3c1 push edx */
  push32((uint32_t)(EDX));
  /* 1047a3c2 call 0x1047dec0 */
  push32(0x1047a3c7u); f_1047dec0();
  /* 1047a3c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047a3ca:;
  /* 1047a3ca lea eax, [ebp - 0x108] */
  EAX = ((uint32_t)(EBP + -0x108));
  /* 1047a3d0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1047a3d3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047a3d6 push ecx */
  push32((uint32_t)(ECX));
  /* 1047a3d7 call 0x1047dd40 */
  push32(0x1047a3dcu); f_1047dd40();
  /* 1047a3dc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047a3df cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047a3e2 jbe 0x1047a40d */
  if ((C.cf||C.zf)) goto L_1047a40d;
  /* 1047a3e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047a3e7 push edx */
  push32((uint32_t)(EDX));
  /* 1047a3e8 call 0x1047dd40 */
  push32(0x1047a3edu); f_1047dd40();
  /* 1047a3ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047a3f0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047a3f3 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 1047a3f7 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1047a3fa push 3 */
  push32((uint32_t)(0x3u));
  /* 1047a3fc push 0x100293c8 */
  push32((uint32_t)(0x100293c8u));
  /* 1047a401 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047a404 push eax */
  push32((uint32_t)(EAX));
  /* 1047a405 call 0x1047e730 */
  push32(0x1047a40au); f_1047e730();
  /* 1047a40a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047a40d:;
  /* 1047a40d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1047a410 mov dword ptr [ebp - 0x1110], ecx */
  w32((uint32_t)(EBP + -0x1110), (ECX));
  /* 1047a416 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047a41d je 0x1047a468 */
  if (C.zf) goto L_1047a468;
  /* 1047a41f mov edx, dword ptr [ebp - 0x1110] */
  EDX = (r32((uint32_t)(EBP + -0x1110)));
  /* 1047a425 push edx */
  push32((uint32_t)(EDX));
  /* 1047a426 call 0x1047dd40 */
  push32(0x1047a42bu); f_1047dd40();
  /* 1047a42b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047a42e cmp eax, 0x40 */
  { uint32_t _a=(EAX),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047a431 jbe 0x1047a468 */
  if ((C.cf||C.zf)) goto L_1047a468;
  /* 1047a433 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 1047a439 push eax */
  push32((uint32_t)(EAX));
  /* 1047a43a call 0x1047dd40 */
  push32(0x1047a43fu); f_1047dd40();
  /* 1047a43f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047a442 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 1047a448 lea edx, [ecx + eax - 0x40] */
  EDX = ((uint32_t)(ECX + EAX*1 + -0x40));
  /* 1047a44c mov dword ptr [ebp - 0x1110], edx */
  w32((uint32_t)(EBP + -0x1110), (EDX));
  /* 1047a452 push 3 */
  push32((uint32_t)(0x3u));
  /* 1047a454 push 0x100293c8 */
  push32((uint32_t)(0x100293c8u));
  /* 1047a459 mov eax, dword ptr [ebp - 0x1110] */
  EAX = (r32((uint32_t)(EBP + -0x1110)));
  /* 1047a45f push eax */
  push32((uint32_t)(EAX));
  /* 1047a460 call 0x1047e730 */
  push32(0x1047a465u); f_1047e730();
  /* 1047a465 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047a468:;
  /* 1047a468 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047a46c jne 0x1047a47a */
  if (!C.zf) goto L_1047a47a;
  /* 1047a46e mov dword ptr [ebp - 0x1114], 0x10029354 */
  w32((uint32_t)(EBP + -0x1114), (0x10029354u));
  /* 1047a478 jmp 0x1047a484 */
  goto L_1047a484;
L_1047a47a:;
  /* 1047a47a mov dword ptr [ebp - 0x1114], 0x100290f4 */
  w32((uint32_t)(EBP + -0x1114), (0x100290f4u));
L_1047a484:;
  /* 1047a484 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1047a487 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1047a48a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1047a48c je 0x1047a499 */
  if (C.zf) goto L_1047a499;
  /* 1047a48e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1047a491 mov dword ptr [ebp - 0x1118], eax */
  w32((uint32_t)(EBP + -0x1118), (EAX));
  /* 1047a497 jmp 0x1047a4a3 */
  goto L_1047a4a3;
L_1047a499:;
  /* 1047a499 mov dword ptr [ebp - 0x1118], 0x100290f4 */
  w32((uint32_t)(EBP + -0x1118), (0x100290f4u));
L_1047a4a3:;
  /* 1047a4a3 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1047a4a6 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1047a4a9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1047a4ab je 0x1047a4bf */
  if (C.zf) goto L_1047a4bf;
  /* 1047a4ad cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047a4b1 jne 0x1047a4bf */
  if (!C.zf) goto L_1047a4bf;
  /* 1047a4b3 mov dword ptr [ebp - 0x111c], 0x10029344 */
  w32((uint32_t)(EBP + -0x111c), (0x10029344u));
  /* 1047a4bd jmp 0x1047a4c9 */
  goto L_1047a4c9;
L_1047a4bf:;
  /* 1047a4bf mov dword ptr [ebp - 0x111c], 0x100290f4 */
  w32((uint32_t)(EBP + -0x111c), (0x100290f4u));
L_1047a4c9:;
  /* 1047a4c9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1047a4cc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1047a4cf test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1047a4d1 je 0x1047a4df */
  if (C.zf) goto L_1047a4df;
  /* 1047a4d3 mov dword ptr [ebp - 0x1120], 0x10029340 */
  w32((uint32_t)(EBP + -0x1120), (0x10029340u));
  /* 1047a4dd jmp 0x1047a4e9 */
  goto L_1047a4e9;
L_1047a4df:;
  /* 1047a4df mov dword ptr [ebp - 0x1120], 0x100290f4 */
  w32((uint32_t)(EBP + -0x1120), (0x100290f4u));
L_1047a4e9:;
  /* 1047a4e9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047a4ed je 0x1047a4fa */
  if (C.zf) goto L_1047a4fa;
  /* 1047a4ef mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047a4f2 mov dword ptr [ebp - 0x1124], edx */
  w32((uint32_t)(EBP + -0x1124), (EDX));
  /* 1047a4f8 jmp 0x1047a504 */
  goto L_1047a504;
L_1047a4fa:;
  /* 1047a4fa mov dword ptr [ebp - 0x1124], 0x100290f4 */
  w32((uint32_t)(EBP + -0x1124), (0x100290f4u));
L_1047a504:;
  /* 1047a504 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047a508 je 0x1047a516 */
  if (C.zf) goto L_1047a516;
  /* 1047a50a mov dword ptr [ebp - 0x1128], 0x10029338 */
  w32((uint32_t)(EBP + -0x1128), (0x10029338u));
  /* 1047a514 jmp 0x1047a520 */
  goto L_1047a520;
L_1047a516:;
  /* 1047a516 mov dword ptr [ebp - 0x1128], 0x100290f4 */
  w32((uint32_t)(EBP + -0x1128), (0x100290f4u));
L_1047a520:;
  /* 1047a520 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047a524 je 0x1047a531 */
  if (C.zf) goto L_1047a531;
  /* 1047a526 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047a529 mov dword ptr [ebp - 0x112c], eax */
  w32((uint32_t)(EBP + -0x112c), (EAX));
  /* 1047a52f jmp 0x1047a53b */
  goto L_1047a53b;
L_1047a531:;
  /* 1047a531 mov dword ptr [ebp - 0x112c], 0x100290f4 */
  w32((uint32_t)(EBP + -0x112c), (0x100290f4u));
L_1047a53b:;
  /* 1047a53b cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047a53f je 0x1047a54d */
  if (C.zf) goto L_1047a54d;
  /* 1047a541 mov dword ptr [ebp - 0x1130], 0x10029330 */
  w32((uint32_t)(EBP + -0x1130), (0x10029330u));
  /* 1047a54b jmp 0x1047a557 */
  goto L_1047a557;
L_1047a54d:;
  /* 1047a54d mov dword ptr [ebp - 0x1130], 0x100290f4 */
  w32((uint32_t)(EBP + -0x1130), (0x100290f4u));
L_1047a557:;
  /* 1047a557 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047a55e je 0x1047a56e */
  if (C.zf) goto L_1047a56e;
  /* 1047a560 mov ecx, dword ptr [ebp - 0x1110] */
  ECX = (r32((uint32_t)(EBP + -0x1110)));
  /* 1047a566 mov dword ptr [ebp - 0x1134], ecx */
  w32((uint32_t)(EBP + -0x1134), (ECX));
  /* 1047a56c jmp 0x1047a578 */
  goto L_1047a578;
L_1047a56e:;
  /* 1047a56e mov dword ptr [ebp - 0x1134], 0x100290f4 */
  w32((uint32_t)(EBP + -0x1134), (0x100290f4u));
L_1047a578:;
  /* 1047a578 cmp dword ptr [ebp - 0x1110], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1110))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047a57f je 0x1047a58d */
  if (C.zf) goto L_1047a58d;
  /* 1047a581 mov dword ptr [ebp - 0x1138], 0x10029324 */
  w32((uint32_t)(EBP + -0x1138), (0x10029324u));
  /* 1047a58b jmp 0x1047a597 */
  goto L_1047a597;
L_1047a58d:;
  /* 1047a58d mov dword ptr [ebp - 0x1138], 0x100290f4 */
  w32((uint32_t)(EBP + -0x1138), (0x100290f4u));
L_1047a597:;
  /* 1047a597 mov edx, dword ptr [ebp - 0x1114] */
  EDX = (r32((uint32_t)(EBP + -0x1114)));
  /* 1047a59d push edx */
  push32((uint32_t)(EDX));
  /* 1047a59e mov eax, dword ptr [ebp - 0x1118] */
  EAX = (r32((uint32_t)(EBP + -0x1118)));
  /* 1047a5a4 push eax */
  push32((uint32_t)(EAX));
  /* 1047a5a5 mov ecx, dword ptr [ebp - 0x111c] */
  ECX = (r32((uint32_t)(EBP + -0x111c)));
  /* 1047a5ab push ecx */
  push32((uint32_t)(ECX));
  /* 1047a5ac mov edx, dword ptr [ebp - 0x1120] */
  EDX = (r32((uint32_t)(EBP + -0x1120)));
  /* 1047a5b2 push edx */
  push32((uint32_t)(EDX));
  /* 1047a5b3 mov eax, dword ptr [ebp - 0x1124] */
  EAX = (r32((uint32_t)(EBP + -0x1124)));
  /* 1047a5b9 push eax */
  push32((uint32_t)(EAX));
  /* 1047a5ba mov ecx, dword ptr [ebp - 0x1128] */
  ECX = (r32((uint32_t)(EBP + -0x1128)));
  /* 1047a5c0 push ecx */
  push32((uint32_t)(ECX));
  /* 1047a5c1 mov edx, dword ptr [ebp - 0x112c] */
  EDX = (r32((uint32_t)(EBP + -0x112c)));
  /* 1047a5c7 push edx */
  push32((uint32_t)(EDX));
  /* 1047a5c8 mov eax, dword ptr [ebp - 0x1130] */
  EAX = (r32((uint32_t)(EBP + -0x1130)));
  /* 1047a5ce push eax */
  push32((uint32_t)(EAX));
  /* 1047a5cf mov ecx, dword ptr [ebp - 0x1134] */
  ECX = (r32((uint32_t)(EBP + -0x1134)));
  /* 1047a5d5 push ecx */
  push32((uint32_t)(ECX));
  /* 1047a5d6 mov edx, dword ptr [ebp - 0x1138] */
  EDX = (r32((uint32_t)(EBP + -0x1138)));
  /* 1047a5dc push edx */
  push32((uint32_t)(EDX));
  /* 1047a5dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047a5e0 push eax */
  push32((uint32_t)(EAX));
  /* 1047a5e1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047a5e4 mov edx, dword ptr [ecx*4 + 0x1002ca50] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1002ca50)));
  /* 1047a5eb push edx */
  push32((uint32_t)(EDX));
  /* 1047a5ec push 0x100292d0 */
  push32((uint32_t)(0x100292d0u));
  /* 1047a5f1 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1047a5f6 lea eax, [ebp - 0x110c] */
  EAX = ((uint32_t)(EBP + -0x110c));
  /* 1047a5fc push eax */
  push32((uint32_t)(EAX));
  /* 1047a5fd call 0x1047ddc0 */
  push32(0x1047a602u); f_1047ddc0();
  /* 1047a602 add esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047a605 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047a607 jge 0x1047a61d */
  if ((C.sf==C.of)) goto L_1047a61d;
  /* 1047a609 push 0x10029234 */
  push32((uint32_t)(0x10029234u));
  /* 1047a60e lea ecx, [ebp - 0x110c] */
  ECX = ((uint32_t)(EBP + -0x110c));
  /* 1047a614 push ecx */
  push32((uint32_t)(ECX));
  /* 1047a615 call 0x1047dec0 */
  push32(0x1047a61au); f_1047dec0();
  /* 1047a61a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047a61d:;
  /* 1047a61d push 0x12012 */
  push32((uint32_t)(0x12012u));
  /* 1047a622 push 0x100292ac */
  push32((uint32_t)(0x100292acu));
  /* 1047a627 lea edx, [ebp - 0x110c] */
  EDX = ((uint32_t)(EBP + -0x110c));
  /* 1047a62d push edx */
  push32((uint32_t)(EDX));
  /* 1047a62e call 0x1047e670 */
  push32(0x1047a633u); f_1047e670();
  /* 1047a633 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047a636 mov dword ptr [ebp - 0x10c], eax */
  w32((uint32_t)(EBP + -0x10c), (EAX));
  /* 1047a63c cmp dword ptr [ebp - 0x10c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047a643 jne 0x1047a656 */
  if (!C.zf) goto L_1047a656;
  /* 1047a645 push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1047a647 call 0x1047e3b0 */
  push32(0x1047a64cu); f_1047e3b0();
  /* 1047a64c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047a64f push 3 */
  push32((uint32_t)(0x3u));
  /* 1047a651 call 0x1047a6d0 */
  push32(0x1047a656u); f_1047a6d0();
L_1047a656:;
  /* 1047a656 cmp dword ptr [ebp - 0x10c], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10c))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047a65d jne 0x1047a666 */
  if (!C.zf) goto L_1047a666;
  /* 1047a65f mov eax, 1 */
  EAX = (0x1u);
  /* 1047a664 jmp 0x1047a668 */
  goto L_1047a668;
L_1047a666:;
  /* 1047a666 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1047a668:;
  /* 1047a668 mov esp, ebp */
  ESP = (EBP);
  /* 1047a66a pop ebp */
  EBP = (pop32());
  /* 1047a66b ret  */
  ESPCHK(0x1047a360u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a670 @ 0x1047a670 (56 bytes, 15 insns) */
void f_1047a670(void) {
  FTRACE(0x1047a670u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047a670 push ebp */
  push32((uint32_t)(EBP));
  /* 1047a671 mov ebp, esp */
  EBP = (ESP);
  /* 1047a673 cmp dword ptr [0x1002ffbc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002ffbc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047a67a je 0x1047a682 */
  if (C.zf) goto L_1047a682;
  /* 1047a67c call dword ptr [0x1002ffbc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002ffbc))), 0x1047a682u);
L_1047a682:;
  /* 1047a682 push 0x1002c418 */
  push32((uint32_t)(0x1002c418u));
  /* 1047a687 push 0x1002c208 */
  push32((uint32_t)(0x1002c208u));
  /* 1047a68c call 0x1047a840 */
  push32(0x1047a691u); f_1047a840();
  /* 1047a691 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047a694 push 0x1002c104 */
  push32((uint32_t)(0x1002c104u));
  /* 1047a699 push 0x1002c000 */
  push32((uint32_t)(0x1002c000u));
  /* 1047a69e call 0x1047a840 */
  push32(0x1047a6a3u); f_1047a840();
  /* 1047a6a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047a6a6 pop ebp */
  EBP = (pop32());
  /* 1047a6a7 ret  */
  ESPCHK(0x1047a670u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a6b0 @ 0x1047a6b0 (21 bytes, 10 insns) */
void f_1047a6b0(void) {
  FTRACE(0x1047a6b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047a6b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1047a6b1 mov ebp, esp */
  EBP = (ESP);
  /* 1047a6b3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047a6b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047a6b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047a6ba push eax */
  push32((uint32_t)(EAX));
  /* 1047a6bb call 0x1047a730 */
  push32(0x1047a6c0u); f_1047a730();
  /* 1047a6c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047a6c3 pop ebp */
  EBP = (pop32());
  /* 1047a6c4 ret  */
  ESPCHK(0x1047a6b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a6d0 @ 0x1047a6d0 (21 bytes, 10 insns) */
void f_1047a6d0(void) {
  FTRACE(0x1047a6d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047a6d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1047a6d1 mov ebp, esp */
  EBP = (ESP);
  /* 1047a6d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047a6d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1047a6d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047a6da push eax */
  push32((uint32_t)(EAX));
  /* 1047a6db call 0x1047a730 */
  push32(0x1047a6e0u); f_1047a730();
  /* 1047a6e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047a6e3 pop ebp */
  EBP = (pop32());
  /* 1047a6e4 ret  */
  ESPCHK(0x1047a6d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a6f0 @ 0x1047a6f0 (19 bytes, 9 insns) */
void f_1047a6f0(void) {
  FTRACE(0x1047a6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047a6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1047a6f1 mov ebp, esp */
  EBP = (ESP);
  /* 1047a6f3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1047a6f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047a6f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047a6f9 call 0x1047a730 */
  push32(0x1047a6feu); f_1047a730();
  /* 1047a6fe add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047a701 pop ebp */
  EBP = (pop32());
  /* 1047a702 ret  */
  ESPCHK(0x1047a6f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a710 @ 0x1047a710 (19 bytes, 9 insns) */
void f_1047a710(void) {
  FTRACE(0x1047a710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047a710 push ebp */
  push32((uint32_t)(EBP));
  /* 1047a711 mov ebp, esp */
  EBP = (ESP);
  /* 1047a713 push 1 */
  push32((uint32_t)(0x1u));
  /* 1047a715 push 1 */
  push32((uint32_t)(0x1u));
  /* 1047a717 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047a719 call 0x1047a730 */
  push32(0x1047a71eu); f_1047a730();
  /* 1047a71e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047a721 pop ebp */
  EBP = (pop32());
  /* 1047a722 ret  */
  ESPCHK(0x1047a710u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a730 @ 0x1047a730 (227 bytes, 61 insns) */
void f_1047a730(void) {
  FTRACE(0x1047a730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047a730 push ebp */
  push32((uint32_t)(EBP));
  /* 1047a731 mov ebp, esp */
  EBP = (ESP);
  /* 1047a733 push ecx */
  push32((uint32_t)(ECX));
  /* 1047a734 call 0x1047a820 */
  push32(0x1047a739u); f_1047a820();
  /* 1047a739 cmp dword ptr [0x1002e4bc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1002e4bc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047a740 jne 0x1047a753 */
  if (!C.zf) goto L_1047a753;
  /* 1047a742 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047a745 push eax */
  push32((uint32_t)(EAX));
  /* 1047a746 call dword ptr [0x100302a4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302a4))), 0x1047a74cu);
  /* 1047a74c push eax */
  push32((uint32_t)(EAX));
  /* 1047a74d call dword ptr [0x100302a0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302a0))), 0x1047a753u);
L_1047a753:;
  /* 1047a753 mov dword ptr [0x1002e4b8], 1 */
  w32((uint32_t)(0x1002e4b8), (0x1u));
  /* 1047a75d mov cl, byte ptr [ebp + 0x10] */
  CL = (r8((uint32_t)(EBP + 0x10)));
  /* 1047a760 mov byte ptr [0x1002e4b4], cl */
  w8((uint32_t)(0x1002e4b4), (CL));
  /* 1047a766 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047a76a jne 0x1047a7b3 */
  if (!C.zf) goto L_1047a7b3;
  /* 1047a76c cmp dword ptr [0x1002ffb8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002ffb8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047a773 je 0x1047a7a1 */
  if (C.zf) goto L_1047a7a1;
  /* 1047a775 mov edx, dword ptr [0x1002ffb4] */
  EDX = (r32((uint32_t)(0x1002ffb4)));
  /* 1047a77b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1047a77e:;
  /* 1047a77e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047a781 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047a784 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1047a787 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047a78a cmp ecx, dword ptr [0x1002ffb8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1002ffb8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047a790 jb 0x1047a7a1 */
  if (C.cf) goto L_1047a7a1;
  /* 1047a792 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047a795 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047a798 je 0x1047a79f */
  if (C.zf) goto L_1047a79f;
  /* 1047a79a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047a79d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x1047a79fu);
L_1047a79f:;
  /* 1047a79f jmp 0x1047a77e */
  goto L_1047a77e;
L_1047a7a1:;
  /* 1047a7a1 push 0x1002c724 */
  push32((uint32_t)(0x1002c724u));
  /* 1047a7a6 push 0x1002c51c */
  push32((uint32_t)(0x1002c51cu));
  /* 1047a7ab call 0x1047a840 */
  push32(0x1047a7b0u); f_1047a840();
  /* 1047a7b0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047a7b3:;
  /* 1047a7b3 push 0x1002c92c */
  push32((uint32_t)(0x1002c92cu));
  /* 1047a7b8 push 0x1002c828 */
  push32((uint32_t)(0x1002c828u));
  /* 1047a7bd call 0x1047a840 */
  push32(0x1047a7c2u); f_1047a840();
  /* 1047a7c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047a7c5 cmp dword ptr [0x1002e4c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e4c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047a7cc jne 0x1047a7ee */
  if (!C.zf) goto L_1047a7ee;
  /* 1047a7ce push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1047a7d0 call 0x1047c420 */
  push32(0x1047a7d5u); f_1047c420();
  /* 1047a7d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047a7d8 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 1047a7db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047a7dd je 0x1047a7ee */
  if (C.zf) goto L_1047a7ee;
  /* 1047a7df mov dword ptr [0x1002e4c0], 1 */
  w32((uint32_t)(0x1002e4c0), (0x1u));
  /* 1047a7e9 call 0x1047cd30 */
  push32(0x1047a7eeu); f_1047cd30();
L_1047a7ee:;
  /* 1047a7ee cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047a7f2 je 0x1047a7fb */
  if (C.zf) goto L_1047a7fb;
  /* 1047a7f4 call 0x1047a830 */
  push32(0x1047a7f9u); f_1047a830();
  /* 1047a7f9 jmp 0x1047a80f */
  goto L_1047a80f;
L_1047a7fb:;
  /* 1047a7fb mov dword ptr [0x1002e4bc], 1 */
  w32((uint32_t)(0x1002e4bc), (0x1u));
  /* 1047a805 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047a808 push ecx */
  push32((uint32_t)(ECX));
  /* 1047a809 call dword ptr [0x1003029c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003029c))), 0x1047a80fu);
L_1047a80f:;
  /* 1047a80f mov esp, ebp */
  ESP = (EBP);
  /* 1047a811 pop ebp */
  EBP = (pop32());
  /* 1047a812 ret  */
  ESPCHK(0x1047a730u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a820 @ 0x1047a820 (15 bytes, 7 insns) */
void f_1047a820(void) {
  FTRACE(0x1047a820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047a820 push ebp */
  push32((uint32_t)(EBP));
  /* 1047a821 mov ebp, esp */
  EBP = (ESP);
  /* 1047a823 push 0xd */
  push32((uint32_t)(0xdu));
  /* 1047a825 call 0x1047e910 */
  push32(0x1047a82au); f_1047e910();
  /* 1047a82a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047a82d pop ebp */
  EBP = (pop32());
  /* 1047a82e ret  */
  ESPCHK(0x1047a820u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a830 @ 0x1047a830 (15 bytes, 7 insns) */
void f_1047a830(void) {
  FTRACE(0x1047a830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047a830 push ebp */
  push32((uint32_t)(EBP));
  /* 1047a831 mov ebp, esp */
  EBP = (ESP);
  /* 1047a833 push 0xd */
  push32((uint32_t)(0xdu));
  /* 1047a835 call 0x1047e9b0 */
  push32(0x1047a83au); f_1047e9b0();
  /* 1047a83a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047a83d pop ebp */
  EBP = (pop32());
  /* 1047a83e ret  */
  ESPCHK(0x1047a830u, _esp0);
  ESP += 4; return;
}

/* __initterm @ 0x1047a840 (37 bytes, 16 insns) */
void f_1047a840(void) {
  FTRACE(0x1047a840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047a840 push ebp */
  push32((uint32_t)(EBP));
  /* 1047a841 mov ebp, esp */
  EBP = (ESP);
L_1047a843:;
  /* 1047a843 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047a846 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047a849 jae 0x1047a863 */
  if (!C.cf) goto L_1047a863;
  /* 1047a84b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047a84e cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047a851 je 0x1047a858 */
  if (C.zf) goto L_1047a858;
  /* 1047a853 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047a856 call dword ptr [edx] */
  call_ind((uint32_t)(r32((uint32_t)(EDX))), 0x1047a858u);
L_1047a858:;
  /* 1047a858 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047a85b add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047a85e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1047a861 jmp 0x1047a843 */
  goto L_1047a843;
L_1047a863:;
  /* 1047a863 pop ebp */
  EBP = (pop32());
  /* 1047a864 ret  */
  ESPCHK(0x1047a840u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a870 @ 0x1047a870 (130 bytes, 42 insns) */
void f_1047a870(void) {
  FTRACE(0x1047a870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047a870 push ebp */
  push32((uint32_t)(EBP));
  /* 1047a871 mov ebp, esp */
  EBP = (ESP);
  /* 1047a873 push ecx */
  push32((uint32_t)(ECX));
  /* 1047a874 call 0x1047e830 */
  push32(0x1047a879u); f_1047e830();
  /* 1047a879 call dword ptr [0x100302b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302b0))), 0x1047a87fu);
  /* 1047a87f mov dword ptr [0x1002ca5c], eax */
  w32((uint32_t)(0x1002ca5c), (EAX));
  /* 1047a884 cmp dword ptr [0x1002ca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1002ca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047a88b jne 0x1047a891 */
  if (!C.zf) goto L_1047a891;
  /* 1047a88d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047a88f jmp 0x1047a8ee */
  goto L_1047a8ee;
L_1047a891:;
  /* 1047a891 push 0x61 */
  push32((uint32_t)(0x61u));
  /* 1047a893 push 0x10029408 */
  push32((uint32_t)(0x10029408u));
  /* 1047a898 push 2 */
  push32((uint32_t)(0x2u));
  /* 1047a89a push 0x74 */
  push32((uint32_t)(0x74u));
  /* 1047a89c push 1 */
  push32((uint32_t)(0x1u));
  /* 1047a89e call 0x1047b320 */
  push32(0x1047a8a3u); f_1047b320();
  /* 1047a8a3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047a8a6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1047a8a9 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047a8ad je 0x1047a8c4 */
  if (C.zf) goto L_1047a8c4;
  /* 1047a8af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047a8b2 push eax */
  push32((uint32_t)(EAX));
  /* 1047a8b3 mov ecx, dword ptr [0x1002ca5c] */
  ECX = (r32((uint32_t)(0x1002ca5c)));
  /* 1047a8b9 push ecx */
  push32((uint32_t)(ECX));
  /* 1047a8ba call dword ptr [0x100302ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302ac))), 0x1047a8c0u);
  /* 1047a8c0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047a8c2 jne 0x1047a8c8 */
  if (!C.zf) goto L_1047a8c8;
L_1047a8c4:;
  /* 1047a8c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047a8c6 jmp 0x1047a8ee */
  goto L_1047a8ee;
L_1047a8c8:;
  /* 1047a8c8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047a8cb push edx */
  push32((uint32_t)(EDX));
  /* 1047a8cc call 0x1047a930 */
  push32(0x1047a8d1u); f_1047a930();
  /* 1047a8d1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047a8d4 call dword ptr [0x100302a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302a8))), 0x1047a8dau);
  /* 1047a8da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047a8dd mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1047a8df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047a8e2 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 1047a8e9 mov eax, 1 */
  EAX = (0x1u);
L_1047a8ee:;
  /* 1047a8ee mov esp, ebp */
  ESP = (EBP);
  /* 1047a8f0 pop ebp */
  EBP = (pop32());
  /* 1047a8f1 ret  */
  ESPCHK(0x1047a870u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a900 @ 0x1047a900 (41 bytes, 11 insns) */
void f_1047a900(void) {
  FTRACE(0x1047a900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047a900 push ebp */
  push32((uint32_t)(EBP));
  /* 1047a901 mov ebp, esp */
  EBP = (ESP);
  /* 1047a903 call 0x1047e870 */
  push32(0x1047a908u); f_1047e870();
  /* 1047a908 cmp dword ptr [0x1002ca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1002ca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047a90f je 0x1047a927 */
  if (C.zf) goto L_1047a927;
  /* 1047a911 mov eax, dword ptr [0x1002ca5c] */
  EAX = (r32((uint32_t)(0x1002ca5c)));
  /* 1047a916 push eax */
  push32((uint32_t)(EAX));
  /* 1047a917 call dword ptr [0x100302b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302b4))), 0x1047a91du);
  /* 1047a91d mov dword ptr [0x1002ca5c], 0xffffffff */
  w32((uint32_t)(0x1002ca5c), (0xffffffffu));
L_1047a927:;
  /* 1047a927 pop ebp */
  EBP = (pop32());
  /* 1047a928 ret  */
  ESPCHK(0x1047a900u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a930 @ 0x1047a930 (25 bytes, 8 insns) */
void f_1047a930(void) {
  FTRACE(0x1047a930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047a930 push ebp */
  push32((uint32_t)(EBP));
  /* 1047a931 mov ebp, esp */
  EBP = (ESP);
  /* 1047a933 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047a936 mov dword ptr [eax + 0x50], 0x1002cc00 */
  w32((uint32_t)(EAX + 0x50), (0x1002cc00u));
  /* 1047a93d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047a940 mov dword ptr [ecx + 0x14], 1 */
  w32((uint32_t)(ECX + 0x14), (0x1u));
  /* 1047a947 pop ebp */
  EBP = (pop32());
  /* 1047a948 ret  */
  ESPCHK(0x1047a930u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a950 @ 0x1047a950 (152 bytes, 48 insns) */
void f_1047a950(void) {
  FTRACE(0x1047a950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047a950 push ebp */
  push32((uint32_t)(EBP));
  /* 1047a951 mov ebp, esp */
  EBP = (ESP);
  /* 1047a953 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047a956 call dword ptr [0x100302c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302c0))), 0x1047a95cu);
  /* 1047a95c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1047a95f mov eax, dword ptr [0x1002ca5c] */
  EAX = (r32((uint32_t)(0x1002ca5c)));
  /* 1047a964 push eax */
  push32((uint32_t)(EAX));
  /* 1047a965 call dword ptr [0x100302bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302bc))), 0x1047a96bu);
  /* 1047a96b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1047a96e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047a972 jne 0x1047a9d7 */
  if (!C.zf) goto L_1047a9d7;
  /* 1047a974 push 0xe7 */
  push32((uint32_t)(0xe7u));
  /* 1047a979 push 0x10029408 */
  push32((uint32_t)(0x10029408u));
  /* 1047a97e push 2 */
  push32((uint32_t)(0x2u));
  /* 1047a980 push 0x74 */
  push32((uint32_t)(0x74u));
  /* 1047a982 push 1 */
  push32((uint32_t)(0x1u));
  /* 1047a984 call 0x1047b320 */
  push32(0x1047a989u); f_1047b320();
  /* 1047a989 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047a98c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1047a98f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047a993 je 0x1047a9cd */
  if (C.zf) goto L_1047a9cd;
  /* 1047a995 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047a998 push ecx */
  push32((uint32_t)(ECX));
  /* 1047a999 mov edx, dword ptr [0x1002ca5c] */
  EDX = (r32((uint32_t)(0x1002ca5c)));
  /* 1047a99f push edx */
  push32((uint32_t)(EDX));
  /* 1047a9a0 call dword ptr [0x100302ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302ac))), 0x1047a9a6u);
  /* 1047a9a6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047a9a8 je 0x1047a9cd */
  if (C.zf) goto L_1047a9cd;
  /* 1047a9aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047a9ad push eax */
  push32((uint32_t)(EAX));
  /* 1047a9ae call 0x1047a930 */
  push32(0x1047a9b3u); f_1047a930();
  /* 1047a9b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047a9b6 call dword ptr [0x100302a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302a8))), 0x1047a9bcu);
  /* 1047a9bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047a9bf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1047a9c1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047a9c4 mov dword ptr [edx + 4], 0xffffffff */
  w32((uint32_t)(EDX + 0x4), (0xffffffffu));
  /* 1047a9cb jmp 0x1047a9d7 */
  goto L_1047a9d7;
L_1047a9cd:;
  /* 1047a9cd push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1047a9cf call 0x10479e80 */
  push32(0x1047a9d4u); f_10479e80();
  /* 1047a9d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047a9d7:;
  /* 1047a9d7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047a9da push eax */
  push32((uint32_t)(EAX));
  /* 1047a9db call dword ptr [0x100302b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302b8))), 0x1047a9e1u);
  /* 1047a9e1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047a9e4 mov esp, ebp */
  ESP = (EBP);
  /* 1047a9e6 pop ebp */
  EBP = (pop32());
  /* 1047a9e7 ret  */
  ESPCHK(0x1047a950u, _esp0);
  ESP += 4; return;
}

/* FUN_1001a9f0 @ 0x1047a9f0 (263 bytes, 86 insns) */
void f_1047a9f0(void) {
  FTRACE(0x1047a9f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047a9f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1047a9f1 mov ebp, esp */
  EBP = (ESP);
  /* 1047a9f3 cmp dword ptr [0x1002ca5c], -1 */
  { uint32_t _a=(r32((uint32_t)(0x1002ca5c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047a9fa je 0x1047aaf5 */
  if (C.zf) goto L_1047aaf5;
  /* 1047aa00 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047aa04 jne 0x1047aa15 */
  if (!C.zf) goto L_1047aa15;
  /* 1047aa06 mov eax, dword ptr [0x1002ca5c] */
  EAX = (r32((uint32_t)(0x1002ca5c)));
  /* 1047aa0b push eax */
  push32((uint32_t)(EAX));
  /* 1047aa0c call dword ptr [0x100302bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302bc))), 0x1047aa12u);
  /* 1047aa12 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_1047aa15:;
  /* 1047aa15 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047aa19 je 0x1047aae6 */
  if (C.zf) goto L_1047aae6;
  /* 1047aa1f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047aa22 cmp dword ptr [ecx + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047aa26 je 0x1047aa39 */
  if (C.zf) goto L_1047aa39;
  /* 1047aa28 push 2 */
  push32((uint32_t)(0x2u));
  /* 1047aa2a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047aa2d mov eax, dword ptr [edx + 0x24] */
  EAX = (r32((uint32_t)(EDX + 0x24)));
  /* 1047aa30 push eax */
  push32((uint32_t)(EAX));
  /* 1047aa31 call 0x1047b9a0 */
  push32(0x1047aa36u); f_1047b9a0();
  /* 1047aa36 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047aa39:;
  /* 1047aa39 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047aa3c cmp dword ptr [ecx + 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047aa40 je 0x1047aa53 */
  if (C.zf) goto L_1047aa53;
  /* 1047aa42 push 2 */
  push32((uint32_t)(0x2u));
  /* 1047aa44 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047aa47 mov eax, dword ptr [edx + 0x28] */
  EAX = (r32((uint32_t)(EDX + 0x28)));
  /* 1047aa4a push eax */
  push32((uint32_t)(EAX));
  /* 1047aa4b call 0x1047b9a0 */
  push32(0x1047aa50u); f_1047b9a0();
  /* 1047aa50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047aa53:;
  /* 1047aa53 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047aa56 cmp dword ptr [ecx + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047aa5a je 0x1047aa6d */
  if (C.zf) goto L_1047aa6d;
  /* 1047aa5c push 2 */
  push32((uint32_t)(0x2u));
  /* 1047aa5e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047aa61 mov eax, dword ptr [edx + 0x30] */
  EAX = (r32((uint32_t)(EDX + 0x30)));
  /* 1047aa64 push eax */
  push32((uint32_t)(EAX));
  /* 1047aa65 call 0x1047b9a0 */
  push32(0x1047aa6au); f_1047b9a0();
  /* 1047aa6a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047aa6d:;
  /* 1047aa6d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047aa70 cmp dword ptr [ecx + 0x38], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047aa74 je 0x1047aa87 */
  if (C.zf) goto L_1047aa87;
  /* 1047aa76 push 2 */
  push32((uint32_t)(0x2u));
  /* 1047aa78 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047aa7b mov eax, dword ptr [edx + 0x38] */
  EAX = (r32((uint32_t)(EDX + 0x38)));
  /* 1047aa7e push eax */
  push32((uint32_t)(EAX));
  /* 1047aa7f call 0x1047b9a0 */
  push32(0x1047aa84u); f_1047b9a0();
  /* 1047aa84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047aa87:;
  /* 1047aa87 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047aa8a cmp dword ptr [ecx + 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047aa8e je 0x1047aaa1 */
  if (C.zf) goto L_1047aaa1;
  /* 1047aa90 push 2 */
  push32((uint32_t)(0x2u));
  /* 1047aa92 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047aa95 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 1047aa98 push eax */
  push32((uint32_t)(EAX));
  /* 1047aa99 call 0x1047b9a0 */
  push32(0x1047aa9eu); f_1047b9a0();
  /* 1047aa9e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047aaa1:;
  /* 1047aaa1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047aaa4 cmp dword ptr [ecx + 0x44], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x44))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047aaa8 je 0x1047aabb */
  if (C.zf) goto L_1047aabb;
  /* 1047aaaa push 2 */
  push32((uint32_t)(0x2u));
  /* 1047aaac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047aaaf mov eax, dword ptr [edx + 0x44] */
  EAX = (r32((uint32_t)(EDX + 0x44)));
  /* 1047aab2 push eax */
  push32((uint32_t)(EAX));
  /* 1047aab3 call 0x1047b9a0 */
  push32(0x1047aab8u); f_1047b9a0();
  /* 1047aab8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047aabb:;
  /* 1047aabb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047aabe cmp dword ptr [ecx + 0x50], 0x1002cc00 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x50))),_b=(0x1002cc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047aac5 je 0x1047aad8 */
  if (C.zf) goto L_1047aad8;
  /* 1047aac7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1047aac9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047aacc mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 1047aacf push eax */
  push32((uint32_t)(EAX));
  /* 1047aad0 call 0x1047b9a0 */
  push32(0x1047aad5u); f_1047b9a0();
  /* 1047aad5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047aad8:;
  /* 1047aad8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1047aada mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047aadd push ecx */
  push32((uint32_t)(ECX));
  /* 1047aade call 0x1047b9a0 */
  push32(0x1047aae3u); f_1047b9a0();
  /* 1047aae3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047aae6:;
  /* 1047aae6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047aae8 mov edx, dword ptr [0x1002ca5c] */
  EDX = (r32((uint32_t)(0x1002ca5c)));
  /* 1047aaee push edx */
  push32((uint32_t)(EDX));
  /* 1047aaef call dword ptr [0x100302ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302ac))), 0x1047aaf5u);
L_1047aaf5:;
  /* 1047aaf5 pop ebp */
  EBP = (pop32());
  /* 1047aaf6 ret  */
  ESPCHK(0x1047a9f0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ab00 @ 0x1047ab00 (11 bytes, 5 insns) */
void f_1047ab00(void) {
  FTRACE(0x1047ab00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047ab00 push ebp */
  push32((uint32_t)(EBP));
  /* 1047ab01 mov ebp, esp */
  EBP = (ESP);
  /* 1047ab03 call dword ptr [0x100302a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302a8))), 0x1047ab09u);
  /* 1047ab09 pop ebp */
  EBP = (pop32());
  /* 1047ab0a ret  */
  ESPCHK(0x1047ab00u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ab10 @ 0x1047ab10 (11 bytes, 5 insns) */
void f_1047ab10(void) {
  FTRACE(0x1047ab10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047ab10 push ebp */
  push32((uint32_t)(EBP));
  /* 1047ab11 mov ebp, esp */
  EBP = (ESP);
  /* 1047ab13 call dword ptr [0x100302c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302c4))), 0x1047ab19u);
  /* 1047ab19 pop ebp */
  EBP = (pop32());
  /* 1047ab1a ret  */
  ESPCHK(0x1047ab10u, _esp0);
  ESP += 4; return;
}

/* FUN_1001ab20 @ 0x1047ab20 (804 bytes, 236 insns) */
void f_1047ab20(void) {
  FTRACE(0x1047ab20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047ab20 push ebp */
  push32((uint32_t)(EBP));
  /* 1047ab21 mov ebp, esp */
  EBP = (ESP);
  /* 1047ab23 sub esp, 0x6c */
  { uint32_t _a=(ESP),_b=(0x6cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047ab26 push 0x81 */
  push32((uint32_t)(0x81u));
  /* 1047ab2b push 0x10029414 */
  push32((uint32_t)(0x10029414u));
  /* 1047ab30 push 2 */
  push32((uint32_t)(0x2u));
  /* 1047ab32 push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1047ab37 call 0x1047af10 */
  push32(0x1047ab3cu); f_1047af10();
  /* 1047ab3c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ab3f mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 1047ab42 cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ab46 jne 0x1047ab52 */
  if (!C.zf) goto L_1047ab52;
  /* 1047ab48 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 1047ab4a call 0x10479e80 */
  push32(0x1047ab4fu); f_10479e80();
  /* 1047ab4f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047ab52:;
  /* 1047ab52 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1047ab55 mov dword ptr [0x1002fe60], eax */
  w32((uint32_t)(0x1002fe60), (EAX));
  /* 1047ab5a mov dword ptr [0x1002ff9c], 0x20 */
  w32((uint32_t)(0x1002ff9c), (0x20u));
  /* 1047ab64 jmp 0x1047ab6f */
  goto L_1047ab6f;
L_1047ab66:;
  /* 1047ab66 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1047ab69 add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ab6c mov dword ptr [ebp - 0x50], ecx */
  w32((uint32_t)(EBP + -0x50), (ECX));
L_1047ab6f:;
  /* 1047ab6f mov edx, dword ptr [0x1002fe60] */
  EDX = (r32((uint32_t)(0x1002fe60)));
  /* 1047ab75 add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ab7b cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ab7e jae 0x1047aba3 */
  if (!C.cf) goto L_1047aba3;
  /* 1047ab80 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1047ab83 mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 1047ab87 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1047ab8a mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1047ab90 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1047ab93 mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 1047ab97 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1047ab9a mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1047aba1 jmp 0x1047ab66 */
  goto L_1047ab66;
L_1047aba3:;
  /* 1047aba3 lea ecx, [ebp - 0x48] */
  ECX = ((uint32_t)(EBP + -0x48));
  /* 1047aba6 push ecx */
  push32((uint32_t)(ECX));
  /* 1047aba7 call dword ptr [0x100302d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302d0))), 0x1047abadu);
  /* 1047abad mov edx, dword ptr [ebp - 0x16] */
  EDX = (r32((uint32_t)(EBP + -0x16)));
  /* 1047abb0 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1047abb6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1047abb8 je 0x1047ad45 */
  if (C.zf) goto L_1047ad45;
  /* 1047abbe cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047abc2 je 0x1047ad45 */
  if (C.zf) goto L_1047ad45;
  /* 1047abc8 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1047abcb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1047abcd mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 1047abd0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1047abd3 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047abd6 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1047abd9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047abdc add eax, dword ptr [ebp - 0x64] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047abdf mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
  /* 1047abe2 cmp dword ptr [ebp - 0x64], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x64))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047abe9 jge 0x1047abf3 */
  if ((C.sf==C.of)) goto L_1047abf3;
  /* 1047abeb mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 1047abee mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 1047abf1 jmp 0x1047abfa */
  goto L_1047abfa;
L_1047abf3:;
  /* 1047abf3 mov dword ptr [ebp - 0x68], 0x800 */
  w32((uint32_t)(EBP + -0x68), (0x800u));
L_1047abfa:;
  /* 1047abfa mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 1047abfd mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 1047ac00 mov dword ptr [ebp - 0x5c], 1 */
  w32((uint32_t)(EBP + -0x5c), (0x1u));
  /* 1047ac07 jmp 0x1047ac12 */
  goto L_1047ac12;
L_1047ac09:;
  /* 1047ac09 mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 1047ac0c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ac0f mov dword ptr [ebp - 0x5c], eax */
  w32((uint32_t)(EBP + -0x5c), (EAX));
L_1047ac12:;
  /* 1047ac12 mov ecx, dword ptr [0x1002ff9c] */
  ECX = (r32((uint32_t)(0x1002ff9c)));
  /* 1047ac18 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ac1b jge 0x1047acb2 */
  if ((C.sf==C.of)) goto L_1047acb2;
  /* 1047ac21 push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 1047ac26 push 0x10029414 */
  push32((uint32_t)(0x10029414u));
  /* 1047ac2b push 2 */
  push32((uint32_t)(0x2u));
  /* 1047ac2d push 0x480 */
  push32((uint32_t)(0x480u));
  /* 1047ac32 call 0x1047af10 */
  push32(0x1047ac37u); f_1047af10();
  /* 1047ac37 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ac3a mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
  /* 1047ac3d cmp dword ptr [ebp - 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ac41 jne 0x1047ac4e */
  if (!C.zf) goto L_1047ac4e;
  /* 1047ac43 mov edx, dword ptr [0x1002ff9c] */
  EDX = (r32((uint32_t)(0x1002ff9c)));
  /* 1047ac49 mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 1047ac4c jmp 0x1047acb2 */
  goto L_1047acb2;
L_1047ac4e:;
  /* 1047ac4e mov eax, dword ptr [ebp - 0x5c] */
  EAX = (r32((uint32_t)(EBP + -0x5c)));
  /* 1047ac51 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1047ac54 mov dword ptr [eax*4 + 0x1002fe60], ecx */
  w32((uint32_t)(EAX*4 + 0x1002fe60), (ECX));
  /* 1047ac5b mov edx, dword ptr [0x1002ff9c] */
  EDX = (r32((uint32_t)(0x1002ff9c)));
  /* 1047ac61 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ac64 mov dword ptr [0x1002ff9c], edx */
  w32((uint32_t)(0x1002ff9c), (EDX));
  /* 1047ac6a jmp 0x1047ac75 */
  goto L_1047ac75;
L_1047ac6c:;
  /* 1047ac6c mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1047ac6f add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ac72 mov dword ptr [ebp - 0x50], eax */
  w32((uint32_t)(EBP + -0x50), (EAX));
L_1047ac75:;
  /* 1047ac75 mov ecx, dword ptr [ebp - 0x5c] */
  ECX = (r32((uint32_t)(EBP + -0x5c)));
  /* 1047ac78 mov edx, dword ptr [ecx*4 + 0x1002fe60] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1002fe60)));
  /* 1047ac7f add edx, 0x480 */
  { uint32_t _a=(EDX),_b=(0x480u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ac85 cmp dword ptr [ebp - 0x50], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x50))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ac88 jae 0x1047acad */
  if (!C.cf) goto L_1047acad;
  /* 1047ac8a mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1047ac8d mov byte ptr [eax + 4], 0 */
  w8((uint32_t)(EAX + 0x4), (0x0u));
  /* 1047ac91 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1047ac94 mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 1047ac9a mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1047ac9d mov byte ptr [edx + 5], 0xa */
  w8((uint32_t)(EDX + 0x5), (0xau));
  /* 1047aca1 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1047aca4 mov dword ptr [eax + 8], 0 */
  w32((uint32_t)(EAX + 0x8), (0x0u));
  /* 1047acab jmp 0x1047ac6c */
  goto L_1047ac6c;
L_1047acad:;
  /* 1047acad jmp 0x1047ac09 */
  goto L_1047ac09;
L_1047acb2:;
  /* 1047acb2 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 1047acb9 jmp 0x1047acd6 */
  goto L_1047acd6;
L_1047acbb:;
  /* 1047acbb mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 1047acbe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047acc1 mov dword ptr [ebp - 0x58], ecx */
  w32((uint32_t)(EBP + -0x58), (ECX));
  /* 1047acc4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047acc7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047acca mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1047accd mov eax, dword ptr [ebp - 0x60] */
  EAX = (r32((uint32_t)(EBP + -0x60)));
  /* 1047acd0 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047acd3 mov dword ptr [ebp - 0x60], eax */
  w32((uint32_t)(EBP + -0x60), (EAX));
L_1047acd6:;
  /* 1047acd6 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 1047acd9 cmp ecx, dword ptr [ebp - 0x64] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x64))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047acdc jge 0x1047ad45 */
  if ((C.sf==C.of)) goto L_1047ad45;
  /* 1047acde mov edx, dword ptr [ebp - 0x60] */
  EDX = (r32((uint32_t)(EBP + -0x60)));
  /* 1047ace1 cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ace4 je 0x1047ad40 */
  if (C.zf) goto L_1047ad40;
  /* 1047ace6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047ace9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1047acec and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1047acef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1047acf1 je 0x1047ad40 */
  if (C.zf) goto L_1047ad40;
  /* 1047acf3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047acf6 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1047acf9 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1047acfc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047acfe jne 0x1047ad10 */
  if (!C.zf) goto L_1047ad10;
  /* 1047ad00 mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 1047ad03 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1047ad05 push edx */
  push32((uint32_t)(EDX));
  /* 1047ad06 call dword ptr [0x100302cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302cc))), 0x1047ad0cu);
  /* 1047ad0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047ad0e je 0x1047ad40 */
  if (C.zf) goto L_1047ad40;
L_1047ad10:;
  /* 1047ad10 mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 1047ad13 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1047ad16 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 1047ad19 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1047ad1c imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1047ad1f mov edx, dword ptr [eax*4 + 0x1002fe60] */
  EDX = (r32((uint32_t)(EAX*4 + 0x1002fe60)));
  /* 1047ad26 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ad28 mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 1047ad2b mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1047ad2e mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 1047ad31 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1047ad33 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1047ad35 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1047ad38 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047ad3b mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1047ad3d mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
L_1047ad40:;
  /* 1047ad40 jmp 0x1047acbb */
  goto L_1047acbb;
L_1047ad45:;
  /* 1047ad45 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 1047ad4c jmp 0x1047ad57 */
  goto L_1047ad57;
L_1047ad4e:;
  /* 1047ad4e mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
  /* 1047ad51 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ad54 mov dword ptr [ebp - 0x58], eax */
  w32((uint32_t)(EBP + -0x58), (EAX));
L_1047ad57:;
  /* 1047ad57 cmp dword ptr [ebp - 0x58], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ad5b jge 0x1047ae34 */
  if ((C.sf==C.of)) goto L_1047ae34;
  /* 1047ad61 mov ecx, dword ptr [ebp - 0x58] */
  ECX = (r32((uint32_t)(EBP + -0x58)));
  /* 1047ad64 imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1047ad67 mov edx, dword ptr [0x1002fe60] */
  EDX = (r32((uint32_t)(0x1002fe60)));
  /* 1047ad6d add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ad6f mov dword ptr [ebp - 0x50], edx */
  w32((uint32_t)(EBP + -0x50), (EDX));
  /* 1047ad72 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1047ad75 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ad78 jne 0x1047ae20 */
  if (!C.zf) goto L_1047ae20;
  /* 1047ad7e mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1047ad81 mov byte ptr [ecx + 4], 0x81 */
  w8((uint32_t)(ECX + 0x4), (0x81u));
  /* 1047ad85 cmp dword ptr [ebp - 0x58], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ad89 jne 0x1047ad94 */
  if (!C.zf) goto L_1047ad94;
  /* 1047ad8b mov dword ptr [ebp - 0x6c], 0xfffffff6 */
  w32((uint32_t)(EBP + -0x6c), (0xfffffff6u));
  /* 1047ad92 jmp 0x1047ada4 */
  goto L_1047ada4;
L_1047ad94:;
  /* 1047ad94 mov edx, dword ptr [ebp - 0x58] */
  EDX = (r32((uint32_t)(EBP + -0x58)));
  /* 1047ad97 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047ad9a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1047ad9c sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047ad9e add edx, -0xb */
  { uint32_t _a=(EDX),_b=(0xfffffff5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ada1 mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_1047ada4:;
  /* 1047ada4 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 1047ada7 push eax */
  push32((uint32_t)(EAX));
  /* 1047ada8 call dword ptr [0x1003027c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1003027c))), 0x1047adaeu);
  /* 1047adae mov dword ptr [ebp - 0x4c], eax */
  w32((uint32_t)(EBP + -0x4c), (EAX));
  /* 1047adb1 cmp dword ptr [ebp - 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047adb5 je 0x1047ae0f */
  if (C.zf) goto L_1047ae0f;
  /* 1047adb7 mov ecx, dword ptr [ebp - 0x4c] */
  ECX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1047adba push ecx */
  push32((uint32_t)(ECX));
  /* 1047adbb call dword ptr [0x100302cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302cc))), 0x1047adc1u);
  /* 1047adc1 mov dword ptr [ebp - 0x54], eax */
  w32((uint32_t)(EBP + -0x54), (EAX));
  /* 1047adc4 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047adc8 je 0x1047ae0f */
  if (C.zf) goto L_1047ae0f;
  /* 1047adca mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1047adcd mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 1047add0 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 1047add2 mov ecx, dword ptr [ebp - 0x54] */
  ECX = (r32((uint32_t)(EBP + -0x54)));
  /* 1047add5 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1047addb cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047adde jne 0x1047adf0 */
  if (!C.zf) goto L_1047adf0;
  /* 1047ade0 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1047ade3 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 1047ade6 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 1047ade8 mov ecx, dword ptr [ebp - 0x50] */
  ECX = (r32((uint32_t)(EBP + -0x50)));
  /* 1047adeb mov byte ptr [ecx + 4], al */
  w8((uint32_t)(ECX + 0x4), (AL));
  /* 1047adee jmp 0x1047ae0d */
  goto L_1047ae0d;
L_1047adf0:;
  /* 1047adf0 mov edx, dword ptr [ebp - 0x54] */
  EDX = (r32((uint32_t)(EBP + -0x54)));
  /* 1047adf3 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1047adf9 cmp edx, 3 */
  { uint32_t _a=(EDX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047adfc jne 0x1047ae0d */
  if (!C.zf) goto L_1047ae0d;
  /* 1047adfe mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1047ae01 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1047ae04 or cl, 8 */
  { uint32_t _r=(CL)|(0x8u); CL = (_r); fl_logic(_r,8); }
  /* 1047ae07 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1047ae0a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1047ae0d:;
  /* 1047ae0d jmp 0x1047ae1e */
  goto L_1047ae1e;
L_1047ae0f:;
  /* 1047ae0f mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1047ae12 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1047ae15 or cl, 0x40 */
  { uint32_t _r=(CL)|(0x40u); CL = (_r); fl_logic(_r,8); }
  /* 1047ae18 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1047ae1b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1047ae1e:;
  /* 1047ae1e jmp 0x1047ae2f */
  goto L_1047ae2f;
L_1047ae20:;
  /* 1047ae20 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 1047ae23 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 1047ae26 or cl, 0x80 */
  { uint32_t _r=(CL)|(0x80u); CL = (_r); fl_logic(_r,8); }
  /* 1047ae29 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 1047ae2c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
L_1047ae2f:;
  /* 1047ae2f jmp 0x1047ad4e */
  goto L_1047ad4e;
L_1047ae34:;
  /* 1047ae34 mov eax, dword ptr [0x1002ff9c] */
  EAX = (r32((uint32_t)(0x1002ff9c)));
  /* 1047ae39 push eax */
  push32((uint32_t)(EAX));
  /* 1047ae3a call dword ptr [0x100302c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302c8))), 0x1047ae40u);
  /* 1047ae40 mov esp, ebp */
  ESP = (EBP);
  /* 1047ae42 pop ebp */
  EBP = (pop32());
  /* 1047ae43 ret  */
  ESPCHK(0x1047ab20u, _esp0);
  ESP += 4; return;
}

/* __ioterm @ 0x1047ae50 (155 bytes, 45 insns) */
void f_1047ae50(void) {
  FTRACE(0x1047ae50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047ae50 push ebp */
  push32((uint32_t)(EBP));
  /* 1047ae51 mov ebp, esp */
  EBP = (ESP);
  /* 1047ae53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047ae56 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1047ae5d jmp 0x1047ae68 */
  goto L_1047ae68;
L_1047ae5f:;
  /* 1047ae5f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047ae62 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ae65 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1047ae68:;
  /* 1047ae68 cmp dword ptr [ebp - 8], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ae6c jge 0x1047aee7 */
  if ((C.sf==C.of)) goto L_1047aee7;
  /* 1047ae6e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047ae71 cmp dword ptr [ecx*4 + 0x1002fe60], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX*4 + 0x1002fe60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ae79 je 0x1047aee2 */
  if (C.zf) goto L_1047aee2;
  /* 1047ae7b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047ae7e mov eax, dword ptr [edx*4 + 0x1002fe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1002fe60)));
  /* 1047ae85 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1047ae88 jmp 0x1047ae93 */
  goto L_1047ae93;
L_1047ae8a:;
  /* 1047ae8a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047ae8d add ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ae90 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1047ae93:;
  /* 1047ae93 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047ae96 mov eax, dword ptr [edx*4 + 0x1002fe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1002fe60)));
  /* 1047ae9d add eax, 0x480 */
  { uint32_t _a=(EAX),_b=(0x480u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047aea2 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047aea5 jae 0x1047aebf */
  if (!C.cf) goto L_1047aebf;
  /* 1047aea7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047aeaa cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047aeae je 0x1047aebd */
  if (C.zf) goto L_1047aebd;
  /* 1047aeb0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047aeb3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047aeb6 push edx */
  push32((uint32_t)(EDX));
  /* 1047aeb7 call dword ptr [0x100302d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302d4))), 0x1047aebdu);
L_1047aebd:;
  /* 1047aebd jmp 0x1047ae8a */
  goto L_1047ae8a;
L_1047aebf:;
  /* 1047aebf push 2 */
  push32((uint32_t)(0x2u));
  /* 1047aec1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047aec4 mov ecx, dword ptr [eax*4 + 0x1002fe60] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1002fe60)));
  /* 1047aecb push ecx */
  push32((uint32_t)(ECX));
  /* 1047aecc call 0x1047b9a0 */
  push32(0x1047aed1u); f_1047b9a0();
  /* 1047aed1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047aed4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047aed7 mov dword ptr [edx*4 + 0x1002fe60], 0 */
  w32((uint32_t)(EDX*4 + 0x1002fe60), (0x0u));
L_1047aee2:;
  /* 1047aee2 jmp 0x1047ae5f */
  goto L_1047ae5f;
L_1047aee7:;
  /* 1047aee7 mov esp, ebp */
  ESP = (EBP);
  /* 1047aee9 pop ebp */
  EBP = (pop32());
  /* 1047aeea ret  */
  ESPCHK(0x1047ae50u, _esp0);
  ESP += 4; return;
}

/* FUN_1001aef0 @ 0x1047aef0 (29 bytes, 13 insns) */
void f_1047aef0(void) {
  FTRACE(0x1047aef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047aef0 push ebp */
  push32((uint32_t)(EBP));
  /* 1047aef1 mov ebp, esp */
  EBP = (ESP);
  /* 1047aef3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047aef5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047aef7 push 1 */
  push32((uint32_t)(0x1u));
  /* 1047aef9 mov eax, dword ptr [0x1002e668] */
  EAX = (r32((uint32_t)(0x1002e668)));
  /* 1047aefe push eax */
  push32((uint32_t)(EAX));
  /* 1047aeff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047af02 push ecx */
  push32((uint32_t)(ECX));
  /* 1047af03 call 0x1047af60 */
  push32(0x1047af08u); f_1047af60();
  /* 1047af08 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047af0b pop ebp */
  EBP = (pop32());
  /* 1047af0c ret  */
  ESPCHK(0x1047aef0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001af10 @ 0x1047af10 (35 bytes, 16 insns) */
void f_1047af10(void) {
  FTRACE(0x1047af10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047af10 push ebp */
  push32((uint32_t)(EBP));
  /* 1047af11 mov ebp, esp */
  EBP = (ESP);
  /* 1047af13 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1047af16 push eax */
  push32((uint32_t)(EAX));
  /* 1047af17 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047af1a push ecx */
  push32((uint32_t)(ECX));
  /* 1047af1b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047af1e push edx */
  push32((uint32_t)(EDX));
  /* 1047af1f mov eax, dword ptr [0x1002e668] */
  EAX = (r32((uint32_t)(0x1002e668)));
  /* 1047af24 push eax */
  push32((uint32_t)(EAX));
  /* 1047af25 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047af28 push ecx */
  push32((uint32_t)(ECX));
  /* 1047af29 call 0x1047af60 */
  push32(0x1047af2eu); f_1047af60();
  /* 1047af2e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047af31 pop ebp */
  EBP = (pop32());
  /* 1047af32 ret  */
  ESPCHK(0x1047af10u, _esp0);
  ESP += 4; return;
}

/* FUN_1001af40 @ 0x1047af40 (27 bytes, 13 insns) */
void f_1047af40(void) {
  FTRACE(0x1047af40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047af40 push ebp */
  push32((uint32_t)(EBP));
  /* 1047af41 mov ebp, esp */
  EBP = (ESP);
  /* 1047af43 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047af45 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047af47 push 1 */
  push32((uint32_t)(0x1u));
  /* 1047af49 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047af4c push eax */
  push32((uint32_t)(EAX));
  /* 1047af4d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047af50 push ecx */
  push32((uint32_t)(ECX));
  /* 1047af51 call 0x1047af60 */
  push32(0x1047af56u); f_1047af60();
  /* 1047af56 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047af59 pop ebp */
  EBP = (pop32());
  /* 1047af5a ret  */
  ESPCHK(0x1047af40u, _esp0);
  ESP += 4; return;
}

/* FUN_1001af60 @ 0x1047af60 (94 bytes, 38 insns) */
void f_1047af60(void) {
  FTRACE(0x1047af60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047af60 push ebp */
  push32((uint32_t)(EBP));
  /* 1047af61 mov ebp, esp */
  EBP = (ESP);
  /* 1047af63 push ecx */
  push32((uint32_t)(ECX));
L_1047af64:;
  /* 1047af64 push 9 */
  push32((uint32_t)(0x9u));
  /* 1047af66 call 0x1047e910 */
  push32(0x1047af6bu); f_1047e910();
  /* 1047af6b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047af6e mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1047af71 push eax */
  push32((uint32_t)(EAX));
  /* 1047af72 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1047af75 push ecx */
  push32((uint32_t)(ECX));
  /* 1047af76 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047af79 push edx */
  push32((uint32_t)(EDX));
  /* 1047af7a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047af7d push eax */
  push32((uint32_t)(EAX));
  /* 1047af7e call 0x1047afe0 */
  push32(0x1047af83u); f_1047afe0();
  /* 1047af83 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047af86 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1047af89 push 9 */
  push32((uint32_t)(0x9u));
  /* 1047af8b call 0x1047e9b0 */
  push32(0x1047af90u); f_1047e9b0();
  /* 1047af90 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047af93 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047af97 jne 0x1047af9f */
  if (!C.zf) goto L_1047af9f;
  /* 1047af99 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047af9d jne 0x1047afa4 */
  if (!C.zf) goto L_1047afa4;
L_1047af9f:;
  /* 1047af9f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047afa2 jmp 0x1047afba */
  goto L_1047afba;
L_1047afa4:;
  /* 1047afa4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047afa7 push ecx */
  push32((uint32_t)(ECX));
  /* 1047afa8 call 0x1047ec50 */
  push32(0x1047afadu); f_1047ec50();
  /* 1047afad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047afb0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047afb2 jne 0x1047afb8 */
  if (!C.zf) goto L_1047afb8;
  /* 1047afb4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047afb6 jmp 0x1047afba */
  goto L_1047afba;
L_1047afb8:;
  /* 1047afb8 jmp 0x1047af64 */
  goto L_1047af64;
L_1047afba:;
  /* 1047afba mov esp, ebp */
  ESP = (EBP);
  /* 1047afbc pop ebp */
  EBP = (pop32());
  /* 1047afbd ret  */
  ESPCHK(0x1047af60u, _esp0);
  ESP += 4; return;
}

/* FUN_1001afc0 @ 0x1047afc0 (23 bytes, 11 insns) */
void f_1047afc0(void) {
  FTRACE(0x1047afc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047afc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1047afc1 mov ebp, esp */
  EBP = (ESP);
  /* 1047afc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047afc5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047afc7 push 1 */
  push32((uint32_t)(0x1u));
  /* 1047afc9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047afcc push eax */
  push32((uint32_t)(EAX));
  /* 1047afcd call 0x1047afe0 */
  push32(0x1047afd2u); f_1047afe0();
  /* 1047afd2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047afd5 pop ebp */
  EBP = (pop32());
  /* 1047afd6 ret  */
  ESPCHK(0x1047afc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001afe0 @ 0x1047afe0 (787 bytes, 254 insns) */
void f_1047afe0(void) {
  FTRACE(0x1047afe0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047afe0 push ebp */
  push32((uint32_t)(EBP));
  /* 1047afe1 mov ebp, esp */
  EBP = (ESP);
  /* 1047afe3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047afe6 push ebx */
  push32((uint32_t)(EBX));
  /* 1047afe7 push esi */
  push32((uint32_t)(ESI));
  /* 1047afe8 push edi */
  push32((uint32_t)(EDI));
  /* 1047afe9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1047aff0 mov eax, dword ptr [0x1002ca84] */
  EAX = (r32((uint32_t)(0x1002ca84)));
  /* 1047aff5 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1047aff8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047affa je 0x1047b02c */
  if (C.zf) goto L_1047b02c;
L_1047affc:;
  /* 1047affc call 0x1047c0b0 */
  push32(0x1047b001u); f_1047c0b0();
  /* 1047b001 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047b003 jne 0x1047b026 */
  if (!C.zf) goto L_1047b026;
  /* 1047b005 push 0x10029508 */
  push32((uint32_t)(0x10029508u));
  /* 1047b00a push 0 */
  push32((uint32_t)(0x0u));
  /* 1047b00c push 0x141 */
  push32((uint32_t)(0x141u));
  /* 1047b011 push 0x100294fc */
  push32((uint32_t)(0x100294fcu));
  /* 1047b016 push 2 */
  push32((uint32_t)(0x2u));
  /* 1047b018 call 0x10479fd0 */
  push32(0x1047b01du); f_10479fd0();
  /* 1047b01d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b020 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b023 jne 0x1047b026 */
  if (!C.zf) goto L_1047b026;
  /* 1047b025 int3  */
  x86_unimpl("int3 @ 0x1047b025");
L_1047b026:;
  /* 1047b026 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1047b028 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1047b02a jne 0x1047affc */
  if (!C.zf) goto L_1047affc;
L_1047b02c:;
  /* 1047b02c mov edx, dword ptr [0x1002ca88] */
  EDX = (r32((uint32_t)(0x1002ca88)));
  /* 1047b032 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1047b035 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047b038 cmp eax, dword ptr [0x1002ca8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1002ca8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b03e jne 0x1047b041 */
  if (!C.zf) goto L_1047b041;
  /* 1047b040 int3  */
  x86_unimpl("int3 @ 0x1047b040");
L_1047b041:;
  /* 1047b041 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1047b044 push ecx */
  push32((uint32_t)(ECX));
  /* 1047b045 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047b048 push edx */
  push32((uint32_t)(EDX));
  /* 1047b049 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047b04c push eax */
  push32((uint32_t)(EAX));
  /* 1047b04d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047b050 push ecx */
  push32((uint32_t)(ECX));
  /* 1047b051 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047b054 push edx */
  push32((uint32_t)(EDX));
  /* 1047b055 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047b057 push 1 */
  push32((uint32_t)(0x1u));
  /* 1047b059 call dword ptr [0x1002cc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002cc90))), 0x1047b05fu);
  /* 1047b05f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b062 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047b064 jne 0x1047b0c4 */
  if (!C.zf) goto L_1047b0c4;
  /* 1047b066 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b06a je 0x1047b097 */
  if (C.zf) goto L_1047b097;
L_1047b06c:;
  /* 1047b06c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1047b06f push eax */
  push32((uint32_t)(EAX));
  /* 1047b070 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047b073 push ecx */
  push32((uint32_t)(ECX));
  /* 1047b074 push 0x100294c4 */
  push32((uint32_t)(0x100294c4u));
  /* 1047b079 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047b07b push 0 */
  push32((uint32_t)(0x0u));
  /* 1047b07d push 0 */
  push32((uint32_t)(0x0u));
  /* 1047b07f push 0 */
  push32((uint32_t)(0x0u));
  /* 1047b081 call 0x10479fd0 */
  push32(0x1047b086u); f_10479fd0();
  /* 1047b086 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b089 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b08c jne 0x1047b08f */
  if (!C.zf) goto L_1047b08f;
  /* 1047b08e int3  */
  x86_unimpl("int3 @ 0x1047b08e");
L_1047b08f:;
  /* 1047b08f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1047b091 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1047b093 jne 0x1047b06c */
  if (!C.zf) goto L_1047b06c;
  /* 1047b095 jmp 0x1047b0bd */
  goto L_1047b0bd;
L_1047b097:;
  /* 1047b097 push 0x100294a0 */
  push32((uint32_t)(0x100294a0u));
  /* 1047b09c push 0x1002949c */
  push32((uint32_t)(0x1002949cu));
  /* 1047b0a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047b0a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047b0a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047b0a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047b0a9 call 0x10479fd0 */
  push32(0x1047b0aeu); f_10479fd0();
  /* 1047b0ae add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b0b1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b0b4 jne 0x1047b0b7 */
  if (!C.zf) goto L_1047b0b7;
  /* 1047b0b6 int3  */
  x86_unimpl("int3 @ 0x1047b0b6");
L_1047b0b7:;
  /* 1047b0b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047b0b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047b0bb jne 0x1047b097 */
  if (!C.zf) goto L_1047b097;
L_1047b0bd:;
  /* 1047b0bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047b0bf jmp 0x1047b2ec */
  goto L_1047b2ec;
L_1047b0c4:;
  /* 1047b0c4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047b0c7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1047b0cd cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b0d0 je 0x1047b0e6 */
  if (C.zf) goto L_1047b0e6;
  /* 1047b0d2 mov edx, dword ptr [0x1002ca84] */
  EDX = (r32((uint32_t)(0x1002ca84)));
  /* 1047b0d8 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 1047b0db test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1047b0dd jne 0x1047b0e6 */
  if (!C.zf) goto L_1047b0e6;
  /* 1047b0df mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
L_1047b0e6:;
  /* 1047b0e6 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b0ea ja 0x1047b0f7 */
  if ((!C.cf&&!C.zf)) goto L_1047b0f7;
  /* 1047b0ec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047b0ef add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b0f2 cmp eax, -0x20 */
  { uint32_t _a=(EAX),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b0f5 jbe 0x1047b123 */
  if ((C.cf||C.zf)) goto L_1047b123;
L_1047b0f7:;
  /* 1047b0f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047b0fa push ecx */
  push32((uint32_t)(ECX));
  /* 1047b0fb push 0x10029478 */
  push32((uint32_t)(0x10029478u));
  /* 1047b100 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047b102 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047b104 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047b106 push 1 */
  push32((uint32_t)(0x1u));
  /* 1047b108 call 0x10479fd0 */
  push32(0x1047b10du); f_10479fd0();
  /* 1047b10d add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b110 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b113 jne 0x1047b116 */
  if (!C.zf) goto L_1047b116;
  /* 1047b115 int3  */
  x86_unimpl("int3 @ 0x1047b115");
L_1047b116:;
  /* 1047b116 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1047b118 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1047b11a jne 0x1047b0f7 */
  if (!C.zf) goto L_1047b0f7;
  /* 1047b11c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047b11e jmp 0x1047b2ec */
  goto L_1047b2ec;
L_1047b123:;
  /* 1047b123 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047b126 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1047b12b cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b12e je 0x1047b170 */
  if (C.zf) goto L_1047b170;
  /* 1047b130 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b134 je 0x1047b170 */
  if (C.zf) goto L_1047b170;
  /* 1047b136 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047b139 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1047b13f cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b142 je 0x1047b170 */
  if (C.zf) goto L_1047b170;
  /* 1047b144 cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b148 je 0x1047b170 */
  if (C.zf) goto L_1047b170;
L_1047b14a:;
  /* 1047b14a push 0x10029444 */
  push32((uint32_t)(0x10029444u));
  /* 1047b14f push 0x1002949c */
  push32((uint32_t)(0x1002949cu));
  /* 1047b154 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047b156 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047b158 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047b15a push 1 */
  push32((uint32_t)(0x1u));
  /* 1047b15c call 0x10479fd0 */
  push32(0x1047b161u); f_10479fd0();
  /* 1047b161 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b164 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b167 jne 0x1047b16a */
  if (!C.zf) goto L_1047b16a;
  /* 1047b169 int3  */
  x86_unimpl("int3 @ 0x1047b169");
L_1047b16a:;
  /* 1047b16a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1047b16c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1047b16e jne 0x1047b14a */
  if (!C.zf) goto L_1047b14a;
L_1047b170:;
  /* 1047b170 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047b173 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b176 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1047b179 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047b17c push ecx */
  push32((uint32_t)(ECX));
  /* 1047b17d call 0x1047ed60 */
  push32(0x1047b182u); f_1047ed60();
  /* 1047b182 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b185 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1047b188 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b18c jne 0x1047b195 */
  if (!C.zf) goto L_1047b195;
  /* 1047b18e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047b190 jmp 0x1047b2ec */
  goto L_1047b2ec;
L_1047b195:;
  /* 1047b195 mov edx, dword ptr [0x1002ca88] */
  EDX = (r32((uint32_t)(0x1002ca88)));
  /* 1047b19b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b19e mov dword ptr [0x1002ca88], edx */
  w32((uint32_t)(0x1002ca88), (EDX));
  /* 1047b1a4 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b1a8 je 0x1047b1f3 */
  if (C.zf) goto L_1047b1f3;
  /* 1047b1aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047b1ad mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 1047b1b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047b1b6 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 1047b1bd mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047b1c0 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 1047b1c7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047b1ca mov dword ptr [eax + 0xc], 0xfedcbabc */
  w32((uint32_t)(EAX + 0xc), (0xfedcbabcu));
  /* 1047b1d1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047b1d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047b1d7 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 1047b1da mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047b1dd mov dword ptr [eax + 0x14], 3 */
  w32((uint32_t)(EAX + 0x14), (0x3u));
  /* 1047b1e4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047b1e7 mov dword ptr [ecx + 0x18], 0 */
  w32((uint32_t)(ECX + 0x18), (0x0u));
  /* 1047b1ee jmp 0x1047b293 */
  goto L_1047b293;
L_1047b1f3:;
  /* 1047b1f3 mov edx, dword ptr [0x1002e4c8] */
  EDX = (r32((uint32_t)(0x1002e4c8)));
  /* 1047b1f9 add edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b1fc mov dword ptr [0x1002e4c8], edx */
  w32((uint32_t)(0x1002e4c8), (EDX));
  /* 1047b202 mov eax, dword ptr [0x1002e4d0] */
  EAX = (r32((uint32_t)(0x1002e4d0)));
  /* 1047b207 add eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b20a mov dword ptr [0x1002e4d0], eax */
  w32((uint32_t)(0x1002e4d0), (EAX));
  /* 1047b20f mov ecx, dword ptr [0x1002e4d0] */
  ECX = (r32((uint32_t)(0x1002e4d0)));
  /* 1047b215 cmp ecx, dword ptr [0x1002e4d4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1002e4d4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b21b jbe 0x1047b229 */
  if ((C.cf||C.zf)) goto L_1047b229;
  /* 1047b21d mov edx, dword ptr [0x1002e4d0] */
  EDX = (r32((uint32_t)(0x1002e4d0)));
  /* 1047b223 mov dword ptr [0x1002e4d4], edx */
  w32((uint32_t)(0x1002e4d4), (EDX));
L_1047b229:;
  /* 1047b229 cmp dword ptr [0x1002e4cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e4cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b230 je 0x1047b23f */
  if (C.zf) goto L_1047b23f;
  /* 1047b232 mov eax, dword ptr [0x1002e4cc] */
  EAX = (r32((uint32_t)(0x1002e4cc)));
  /* 1047b237 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047b23a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1047b23d jmp 0x1047b248 */
  goto L_1047b248;
L_1047b23f:;
  /* 1047b23f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047b242 mov dword ptr [0x1002e4c4], edx */
  w32((uint32_t)(0x1002e4c4), (EDX));
L_1047b248:;
  /* 1047b248 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047b24b mov ecx, dword ptr [0x1002e4cc] */
  ECX = (r32((uint32_t)(0x1002e4cc)));
  /* 1047b251 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1047b253 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047b256 mov dword ptr [edx + 4], 0 */
  w32((uint32_t)(EDX + 0x4), (0x0u));
  /* 1047b25d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047b260 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047b263 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1047b266 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047b269 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1047b26c mov dword ptr [edx + 0xc], eax */
  w32((uint32_t)(EDX + 0xc), (EAX));
  /* 1047b26f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047b272 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047b275 mov dword ptr [ecx + 0x10], edx */
  w32((uint32_t)(ECX + 0x10), (EDX));
  /* 1047b278 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047b27b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047b27e mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
  /* 1047b281 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047b284 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047b287 mov dword ptr [edx + 0x18], eax */
  w32((uint32_t)(EDX + 0x18), (EAX));
  /* 1047b28a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047b28d mov dword ptr [0x1002e4cc], ecx */
  w32((uint32_t)(0x1002e4cc), (ECX));
L_1047b293:;
  /* 1047b293 push 4 */
  push32((uint32_t)(0x4u));
  /* 1047b295 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1047b297 mov dl, byte ptr [0x1002ca90] */
  DL = (r8((uint32_t)(0x1002ca90)));
  /* 1047b29d push edx */
  push32((uint32_t)(EDX));
  /* 1047b29e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047b2a1 add eax, 0x1c */
  { uint32_t _a=(EAX),_b=(0x1cu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b2a4 push eax */
  push32((uint32_t)(EAX));
  /* 1047b2a5 call 0x1047ec80 */
  push32(0x1047b2aau); f_1047ec80();
  /* 1047b2aa add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b2ad push 4 */
  push32((uint32_t)(0x4u));
  /* 1047b2af xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1047b2b1 mov cl, byte ptr [0x1002ca90] */
  CL = (r8((uint32_t)(0x1002ca90)));
  /* 1047b2b7 push ecx */
  push32((uint32_t)(ECX));
  /* 1047b2b8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047b2bb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047b2be lea ecx, [eax + edx + 0x20] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x20));
  /* 1047b2c2 push ecx */
  push32((uint32_t)(ECX));
  /* 1047b2c3 call 0x1047ec80 */
  push32(0x1047b2c8u); f_1047ec80();
  /* 1047b2c8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b2cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047b2ce push edx */
  push32((uint32_t)(EDX));
  /* 1047b2cf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047b2d1 mov al, byte ptr [0x1002ca92] */
  AL = (r8((uint32_t)(0x1002ca92)));
  /* 1047b2d6 push eax */
  push32((uint32_t)(EAX));
  /* 1047b2d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047b2da add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b2dd push ecx */
  push32((uint32_t)(ECX));
  /* 1047b2de call 0x1047ec80 */
  push32(0x1047b2e3u); f_1047ec80();
  /* 1047b2e3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b2e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047b2e9 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1047b2ec:;
  /* 1047b2ec pop edi */
  EDI = (pop32());
  /* 1047b2ed pop esi */
  ESI = (pop32());
  /* 1047b2ee pop ebx */
  EBX = (pop32());
  /* 1047b2ef mov esp, ebp */
  ESP = (EBP);
  /* 1047b2f1 pop ebp */
  EBP = (pop32());
  /* 1047b2f2 ret  */
  ESPCHK(0x1047afe0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b300 @ 0x1047b300 (27 bytes, 13 insns) */
void f_1047b300(void) {
  FTRACE(0x1047b300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047b300 push ebp */
  push32((uint32_t)(EBP));
  /* 1047b301 mov ebp, esp */
  EBP = (ESP);
  /* 1047b303 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047b305 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047b307 push 1 */
  push32((uint32_t)(0x1u));
  /* 1047b309 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047b30c push eax */
  push32((uint32_t)(EAX));
  /* 1047b30d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047b310 push ecx */
  push32((uint32_t)(ECX));
  /* 1047b311 call 0x1047b320 */
  push32(0x1047b316u); f_1047b320();
  /* 1047b316 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b319 pop ebp */
  EBP = (pop32());
  /* 1047b31a ret  */
  ESPCHK(0x1047b300u, _esp0);
  ESP += 4; return;
}

/* __calloc_dbg @ 0x1047b320 (96 bytes, 37 insns) */
void f_1047b320(void) {
  FTRACE(0x1047b320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047b320 push ebp */
  push32((uint32_t)(EBP));
  /* 1047b321 mov ebp, esp */
  EBP = (ESP);
  /* 1047b323 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047b326 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047b329 imul eax, dword ptr [ebp + 8] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x8)))*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1047b32d mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1047b330 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1047b333 push ecx */
  push32((uint32_t)(ECX));
  /* 1047b334 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1047b337 push edx */
  push32((uint32_t)(EDX));
  /* 1047b338 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047b33b push eax */
  push32((uint32_t)(EAX));
  /* 1047b33c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047b33f push ecx */
  push32((uint32_t)(ECX));
  /* 1047b340 call 0x1047af10 */
  push32(0x1047b345u); f_1047af10();
  /* 1047b345 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b348 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1047b34b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b34f je 0x1047b379 */
  if (C.zf) goto L_1047b379;
  /* 1047b351 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047b354 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1047b357 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047b35a add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b35d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1047b360:;
  /* 1047b360 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047b363 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b366 jae 0x1047b379 */
  if (!C.cf) goto L_1047b379;
  /* 1047b368 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047b36b mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1047b36e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047b371 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b374 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1047b377 jmp 0x1047b360 */
  goto L_1047b360;
L_1047b379:;
  /* 1047b379 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047b37c mov esp, ebp */
  ESP = (EBP);
  /* 1047b37e pop ebp */
  EBP = (pop32());
  /* 1047b37f ret  */
  ESPCHK(0x1047b320u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b380 @ 0x1047b380 (27 bytes, 13 insns) */
void f_1047b380(void) {
  FTRACE(0x1047b380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047b380 push ebp */
  push32((uint32_t)(EBP));
  /* 1047b381 mov ebp, esp */
  EBP = (ESP);
  /* 1047b383 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047b385 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047b387 push 1 */
  push32((uint32_t)(0x1u));
  /* 1047b389 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047b38c push eax */
  push32((uint32_t)(EAX));
  /* 1047b38d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047b390 push ecx */
  push32((uint32_t)(ECX));
  /* 1047b391 call 0x1047b3a0 */
  push32(0x1047b396u); f_1047b3a0();
  /* 1047b396 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b399 pop ebp */
  EBP = (pop32());
  /* 1047b39a ret  */
  ESPCHK(0x1047b380u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b3a0 @ 0x1047b3a0 (64 bytes, 27 insns) */
void f_1047b3a0(void) {
  FTRACE(0x1047b3a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047b3a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1047b3a1 mov ebp, esp */
  EBP = (ESP);
  /* 1047b3a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1047b3a4 push 9 */
  push32((uint32_t)(0x9u));
  /* 1047b3a6 call 0x1047e910 */
  push32(0x1047b3abu); f_1047e910();
  /* 1047b3ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b3ae push 1 */
  push32((uint32_t)(0x1u));
  /* 1047b3b0 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1047b3b3 push eax */
  push32((uint32_t)(EAX));
  /* 1047b3b4 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1047b3b7 push ecx */
  push32((uint32_t)(ECX));
  /* 1047b3b8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047b3bb push edx */
  push32((uint32_t)(EDX));
  /* 1047b3bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047b3bf push eax */
  push32((uint32_t)(EAX));
  /* 1047b3c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047b3c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1047b3c4 call 0x1047b3e0 */
  push32(0x1047b3c9u); f_1047b3e0();
  /* 1047b3c9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b3cc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1047b3cf push 9 */
  push32((uint32_t)(0x9u));
  /* 1047b3d1 call 0x1047e9b0 */
  push32(0x1047b3d6u); f_1047e9b0();
  /* 1047b3d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b3d9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047b3dc mov esp, ebp */
  ESP = (EBP);
  /* 1047b3de pop ebp */
  EBP = (pop32());
  /* 1047b3df ret  */
  ESPCHK(0x1047b3a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b3e0 @ 0x1047b3e0 (1297 bytes, 431 insns) */
void f_1047b3e0(void) {
  FTRACE(0x1047b3e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047b3e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1047b3e1 mov ebp, esp */
  EBP = (ESP);
  /* 1047b3e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047b3e6 push ebx */
  push32((uint32_t)(EBX));
  /* 1047b3e7 push esi */
  push32((uint32_t)(ESI));
  /* 1047b3e8 push edi */
  push32((uint32_t)(EDI));
  /* 1047b3e9 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 1047b3f0 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b3f4 jne 0x1047b413 */
  if (!C.zf) goto L_1047b413;
  /* 1047b3f6 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1047b3f9 push eax */
  push32((uint32_t)(EAX));
  /* 1047b3fa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1047b3fd push ecx */
  push32((uint32_t)(ECX));
  /* 1047b3fe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047b401 push edx */
  push32((uint32_t)(EDX));
  /* 1047b402 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047b405 push eax */
  push32((uint32_t)(EAX));
  /* 1047b406 call 0x1047af10 */
  push32(0x1047b40bu); f_1047af10();
  /* 1047b40b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b40e jmp 0x1047b8ea */
  goto L_1047b8ea;
L_1047b413:;
  /* 1047b413 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b417 je 0x1047b436 */
  if (C.zf) goto L_1047b436;
  /* 1047b419 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b41d jne 0x1047b436 */
  if (!C.zf) goto L_1047b436;
  /* 1047b41f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047b422 push ecx */
  push32((uint32_t)(ECX));
  /* 1047b423 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047b426 push edx */
  push32((uint32_t)(EDX));
  /* 1047b427 call 0x1047b9a0 */
  push32(0x1047b42cu); f_1047b9a0();
  /* 1047b42c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b42f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047b431 jmp 0x1047b8ea */
  goto L_1047b8ea;
L_1047b436:;
  /* 1047b436 mov eax, dword ptr [0x1002ca84] */
  EAX = (r32((uint32_t)(0x1002ca84)));
  /* 1047b43b and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1047b43e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047b440 je 0x1047b472 */
  if (C.zf) goto L_1047b472;
L_1047b442:;
  /* 1047b442 call 0x1047c0b0 */
  push32(0x1047b447u); f_1047c0b0();
  /* 1047b447 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047b449 jne 0x1047b46c */
  if (!C.zf) goto L_1047b46c;
  /* 1047b44b push 0x10029508 */
  push32((uint32_t)(0x10029508u));
  /* 1047b450 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047b452 push 0x239 */
  push32((uint32_t)(0x239u));
  /* 1047b457 push 0x100294fc */
  push32((uint32_t)(0x100294fcu));
  /* 1047b45c push 2 */
  push32((uint32_t)(0x2u));
  /* 1047b45e call 0x10479fd0 */
  push32(0x1047b463u); f_10479fd0();
  /* 1047b463 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b466 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b469 jne 0x1047b46c */
  if (!C.zf) goto L_1047b46c;
  /* 1047b46b int3  */
  x86_unimpl("int3 @ 0x1047b46b");
L_1047b46c:;
  /* 1047b46c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1047b46e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1047b470 jne 0x1047b442 */
  if (!C.zf) goto L_1047b442;
L_1047b472:;
  /* 1047b472 mov edx, dword ptr [0x1002ca88] */
  EDX = (r32((uint32_t)(0x1002ca88)));
  /* 1047b478 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1047b47b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047b47e cmp eax, dword ptr [0x1002ca8c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1002ca8c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b484 jne 0x1047b487 */
  if (!C.zf) goto L_1047b487;
  /* 1047b486 int3  */
  x86_unimpl("int3 @ 0x1047b486");
L_1047b487:;
  /* 1047b487 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1047b48a push ecx */
  push32((uint32_t)(ECX));
  /* 1047b48b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1047b48e push edx */
  push32((uint32_t)(EDX));
  /* 1047b48f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047b492 push eax */
  push32((uint32_t)(EAX));
  /* 1047b493 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047b496 push ecx */
  push32((uint32_t)(ECX));
  /* 1047b497 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047b49a push edx */
  push32((uint32_t)(EDX));
  /* 1047b49b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047b49e push eax */
  push32((uint32_t)(EAX));
  /* 1047b49f push 2 */
  push32((uint32_t)(0x2u));
  /* 1047b4a1 call dword ptr [0x1002cc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002cc90))), 0x1047b4a7u);
  /* 1047b4a7 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b4aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047b4ac jne 0x1047b50c */
  if (!C.zf) goto L_1047b50c;
  /* 1047b4ae cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b4b2 je 0x1047b4df */
  if (C.zf) goto L_1047b4df;
L_1047b4b4:;
  /* 1047b4b4 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1047b4b7 push ecx */
  push32((uint32_t)(ECX));
  /* 1047b4b8 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1047b4bb push edx */
  push32((uint32_t)(EDX));
  /* 1047b4bc push 0x10029684 */
  push32((uint32_t)(0x10029684u));
  /* 1047b4c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047b4c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047b4c5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047b4c7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047b4c9 call 0x10479fd0 */
  push32(0x1047b4ceu); f_10479fd0();
  /* 1047b4ce add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b4d1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b4d4 jne 0x1047b4d7 */
  if (!C.zf) goto L_1047b4d7;
  /* 1047b4d6 int3  */
  x86_unimpl("int3 @ 0x1047b4d6");
L_1047b4d7:;
  /* 1047b4d7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047b4d9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047b4db jne 0x1047b4b4 */
  if (!C.zf) goto L_1047b4b4;
  /* 1047b4dd jmp 0x1047b505 */
  goto L_1047b505;
L_1047b4df:;
  /* 1047b4df push 0x10029660 */
  push32((uint32_t)(0x10029660u));
  /* 1047b4e4 push 0x1002949c */
  push32((uint32_t)(0x1002949cu));
  /* 1047b4e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047b4eb push 0 */
  push32((uint32_t)(0x0u));
  /* 1047b4ed push 0 */
  push32((uint32_t)(0x0u));
  /* 1047b4ef push 0 */
  push32((uint32_t)(0x0u));
  /* 1047b4f1 call 0x10479fd0 */
  push32(0x1047b4f6u); f_10479fd0();
  /* 1047b4f6 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b4f9 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b4fc jne 0x1047b4ff */
  if (!C.zf) goto L_1047b4ff;
  /* 1047b4fe int3  */
  x86_unimpl("int3 @ 0x1047b4fe");
L_1047b4ff:;
  /* 1047b4ff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1047b501 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1047b503 jne 0x1047b4df */
  if (!C.zf) goto L_1047b4df;
L_1047b505:;
  /* 1047b505 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047b507 jmp 0x1047b8ea */
  goto L_1047b8ea;
L_1047b50c:;
  /* 1047b50c cmp dword ptr [ebp + 0xc], -0x25 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffdbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b510 jbe 0x1047b53e */
  if ((C.cf||C.zf)) goto L_1047b53e;
L_1047b512:;
  /* 1047b512 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047b515 push edx */
  push32((uint32_t)(EDX));
  /* 1047b516 push 0x10029630 */
  push32((uint32_t)(0x10029630u));
  /* 1047b51b push 0 */
  push32((uint32_t)(0x0u));
  /* 1047b51d push 0 */
  push32((uint32_t)(0x0u));
  /* 1047b51f push 0 */
  push32((uint32_t)(0x0u));
  /* 1047b521 push 1 */
  push32((uint32_t)(0x1u));
  /* 1047b523 call 0x10479fd0 */
  push32(0x1047b528u); f_10479fd0();
  /* 1047b528 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b52b cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b52e jne 0x1047b531 */
  if (!C.zf) goto L_1047b531;
  /* 1047b530 int3  */
  x86_unimpl("int3 @ 0x1047b530");
L_1047b531:;
  /* 1047b531 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047b533 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047b535 jne 0x1047b512 */
  if (!C.zf) goto L_1047b512;
  /* 1047b537 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047b539 jmp 0x1047b8ea */
  goto L_1047b8ea;
L_1047b53e:;
  /* 1047b53e cmp dword ptr [ebp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b542 je 0x1047b586 */
  if (C.zf) goto L_1047b586;
  /* 1047b544 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047b547 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1047b54d cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b550 je 0x1047b586 */
  if (C.zf) goto L_1047b586;
  /* 1047b552 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047b555 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1047b55b cmp edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b55e je 0x1047b586 */
  if (C.zf) goto L_1047b586;
L_1047b560:;
  /* 1047b560 push 0x10029444 */
  push32((uint32_t)(0x10029444u));
  /* 1047b565 push 0x1002949c */
  push32((uint32_t)(0x1002949cu));
  /* 1047b56a push 0 */
  push32((uint32_t)(0x0u));
  /* 1047b56c push 0 */
  push32((uint32_t)(0x0u));
  /* 1047b56e push 0 */
  push32((uint32_t)(0x0u));
  /* 1047b570 push 1 */
  push32((uint32_t)(0x1u));
  /* 1047b572 call 0x10479fd0 */
  push32(0x1047b577u); f_10479fd0();
  /* 1047b577 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b57a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b57d jne 0x1047b580 */
  if (!C.zf) goto L_1047b580;
  /* 1047b57f int3  */
  x86_unimpl("int3 @ 0x1047b57f");
L_1047b580:;
  /* 1047b580 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047b582 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047b584 jne 0x1047b560 */
  if (!C.zf) goto L_1047b560;
L_1047b586:;
  /* 1047b586 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047b589 push ecx */
  push32((uint32_t)(ECX));
  /* 1047b58a call 0x1047c510 */
  push32(0x1047b58fu); f_1047c510();
  /* 1047b58f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b592 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047b594 jne 0x1047b5b7 */
  if (!C.zf) goto L_1047b5b7;
  /* 1047b596 push 0x1002960c */
  push32((uint32_t)(0x1002960cu));
  /* 1047b59b push 0 */
  push32((uint32_t)(0x0u));
  /* 1047b59d push 0x261 */
  push32((uint32_t)(0x261u));
  /* 1047b5a2 push 0x100294fc */
  push32((uint32_t)(0x100294fcu));
  /* 1047b5a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1047b5a9 call 0x10479fd0 */
  push32(0x1047b5aeu); f_10479fd0();
  /* 1047b5ae add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b5b1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b5b4 jne 0x1047b5b7 */
  if (!C.zf) goto L_1047b5b7;
  /* 1047b5b6 int3  */
  x86_unimpl("int3 @ 0x1047b5b6");
L_1047b5b7:;
  /* 1047b5b7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1047b5b9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1047b5bb jne 0x1047b586 */
  if (!C.zf) goto L_1047b586;
  /* 1047b5bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047b5c0 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047b5c3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1047b5c6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047b5c9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b5cd jne 0x1047b5d6 */
  if (!C.zf) goto L_1047b5d6;
  /* 1047b5cf mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_1047b5d6:;
  /* 1047b5d6 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b5da je 0x1047b61a */
  if (C.zf) goto L_1047b61a;
L_1047b5dc:;
  /* 1047b5dc mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047b5df cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b5e6 jne 0x1047b5f1 */
  if (!C.zf) goto L_1047b5f1;
  /* 1047b5e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047b5eb cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b5ef je 0x1047b612 */
  if (C.zf) goto L_1047b612;
L_1047b5f1:;
  /* 1047b5f1 push 0x100295c4 */
  push32((uint32_t)(0x100295c4u));
  /* 1047b5f6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047b5f8 push 0x26b */
  push32((uint32_t)(0x26bu));
  /* 1047b5fd push 0x100294fc */
  push32((uint32_t)(0x100294fcu));
  /* 1047b602 push 2 */
  push32((uint32_t)(0x2u));
  /* 1047b604 call 0x10479fd0 */
  push32(0x1047b609u); f_10479fd0();
  /* 1047b609 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b60c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b60f jne 0x1047b612 */
  if (!C.zf) goto L_1047b612;
  /* 1047b611 int3  */
  x86_unimpl("int3 @ 0x1047b611");
L_1047b612:;
  /* 1047b612 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1047b614 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1047b616 jne 0x1047b5dc */
  if (!C.zf) goto L_1047b5dc;
  /* 1047b618 jmp 0x1047b67e */
  goto L_1047b67e;
L_1047b61a:;
  /* 1047b61a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047b61d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1047b620 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1047b625 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b628 jne 0x1047b63f */
  if (!C.zf) goto L_1047b63f;
  /* 1047b62a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047b62d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1047b633 cmp ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b636 jne 0x1047b63f */
  if (!C.zf) goto L_1047b63f;
  /* 1047b638 mov dword ptr [ebp + 0x10], 2 */
  w32((uint32_t)(EBP + 0x10), (0x2u));
L_1047b63f:;
  /* 1047b63f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047b642 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1047b645 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1047b64a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047b64d and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1047b653 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b655 je 0x1047b678 */
  if (C.zf) goto L_1047b678;
  /* 1047b657 push 0x10029588 */
  push32((uint32_t)(0x10029588u));
  /* 1047b65c push 0 */
  push32((uint32_t)(0x0u));
  /* 1047b65e push 0x272 */
  push32((uint32_t)(0x272u));
  /* 1047b663 push 0x100294fc */
  push32((uint32_t)(0x100294fcu));
  /* 1047b668 push 2 */
  push32((uint32_t)(0x2u));
  /* 1047b66a call 0x10479fd0 */
  push32(0x1047b66fu); f_10479fd0();
  /* 1047b66f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b672 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b675 jne 0x1047b678 */
  if (!C.zf) goto L_1047b678;
  /* 1047b677 int3  */
  x86_unimpl("int3 @ 0x1047b677");
L_1047b678:;
  /* 1047b678 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1047b67a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1047b67c jne 0x1047b63f */
  if (!C.zf) goto L_1047b63f;
L_1047b67e:;
  /* 1047b67e cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b682 je 0x1047b6a9 */
  if (C.zf) goto L_1047b6a9;
  /* 1047b684 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047b687 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b68a push eax */
  push32((uint32_t)(EAX));
  /* 1047b68b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047b68e push ecx */
  push32((uint32_t)(ECX));
  /* 1047b68f call 0x1047ee90 */
  push32(0x1047b694u); f_1047ee90();
  /* 1047b694 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b697 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1047b69a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b69e jne 0x1047b6a7 */
  if (!C.zf) goto L_1047b6a7;
  /* 1047b6a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047b6a2 jmp 0x1047b8ea */
  goto L_1047b8ea;
L_1047b6a7:;
  /* 1047b6a7 jmp 0x1047b6cc */
  goto L_1047b6cc;
L_1047b6a9:;
  /* 1047b6a9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047b6ac add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b6af push edx */
  push32((uint32_t)(EDX));
  /* 1047b6b0 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047b6b3 push eax */
  push32((uint32_t)(EAX));
  /* 1047b6b4 call 0x1047ede0 */
  push32(0x1047b6b9u); f_1047ede0();
  /* 1047b6b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b6bc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1047b6bf cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b6c3 jne 0x1047b6cc */
  if (!C.zf) goto L_1047b6cc;
  /* 1047b6c5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047b6c7 jmp 0x1047b8ea */
  goto L_1047b8ea;
L_1047b6cc:;
  /* 1047b6cc mov ecx, dword ptr [0x1002ca88] */
  ECX = (r32((uint32_t)(0x1002ca88)));
  /* 1047b6d2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b6d5 mov dword ptr [0x1002ca88], ecx */
  w32((uint32_t)(0x1002ca88), (ECX));
  /* 1047b6db cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b6df jne 0x1047b737 */
  if (!C.zf) goto L_1047b737;
  /* 1047b6e1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047b6e4 mov eax, dword ptr [0x1002e4c8] */
  EAX = (r32((uint32_t)(0x1002e4c8)));
  /* 1047b6e9 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047b6ec mov dword ptr [0x1002e4c8], eax */
  w32((uint32_t)(0x1002e4c8), (EAX));
  /* 1047b6f1 mov ecx, dword ptr [0x1002e4c8] */
  ECX = (r32((uint32_t)(0x1002e4c8)));
  /* 1047b6f7 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b6fa mov dword ptr [0x1002e4c8], ecx */
  w32((uint32_t)(0x1002e4c8), (ECX));
  /* 1047b700 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047b703 mov eax, dword ptr [0x1002e4d0] */
  EAX = (r32((uint32_t)(0x1002e4d0)));
  /* 1047b708 sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047b70b mov dword ptr [0x1002e4d0], eax */
  w32((uint32_t)(0x1002e4d0), (EAX));
  /* 1047b710 mov ecx, dword ptr [0x1002e4d0] */
  ECX = (r32((uint32_t)(0x1002e4d0)));
  /* 1047b716 add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b719 mov dword ptr [0x1002e4d0], ecx */
  w32((uint32_t)(0x1002e4d0), (ECX));
  /* 1047b71f mov edx, dword ptr [0x1002e4d0] */
  EDX = (r32((uint32_t)(0x1002e4d0)));
  /* 1047b725 cmp edx, dword ptr [0x1002e4d4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1002e4d4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b72b jbe 0x1047b737 */
  if ((C.cf||C.zf)) goto L_1047b737;
  /* 1047b72d mov eax, dword ptr [0x1002e4d0] */
  EAX = (r32((uint32_t)(0x1002e4d0)));
  /* 1047b732 mov dword ptr [0x1002e4d4], eax */
  w32((uint32_t)(0x1002e4d4), (EAX));
L_1047b737:;
  /* 1047b737 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047b73a add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b73d mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1047b740 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047b743 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047b746 cmp eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b749 jbe 0x1047b76f */
  if ((C.cf||C.zf)) goto L_1047b76f;
  /* 1047b74b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047b74e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047b751 sub edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047b754 push edx */
  push32((uint32_t)(EDX));
  /* 1047b755 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047b757 mov al, byte ptr [0x1002ca92] */
  AL = (r8((uint32_t)(0x1002ca92)));
  /* 1047b75c push eax */
  push32((uint32_t)(EAX));
  /* 1047b75d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047b760 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047b763 add edx, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b766 push edx */
  push32((uint32_t)(EDX));
  /* 1047b767 call 0x1047ec80 */
  push32(0x1047b76cu); f_1047ec80();
  /* 1047b76c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047b76f:;
  /* 1047b76f push 4 */
  push32((uint32_t)(0x4u));
  /* 1047b771 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047b773 mov al, byte ptr [0x1002ca90] */
  AL = (r8((uint32_t)(0x1002ca90)));
  /* 1047b778 push eax */
  push32((uint32_t)(EAX));
  /* 1047b779 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047b77c add ecx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b77f push ecx */
  push32((uint32_t)(ECX));
  /* 1047b780 call 0x1047ec80 */
  push32(0x1047b785u); f_1047ec80();
  /* 1047b785 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b788 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b78c jne 0x1047b7a9 */
  if (!C.zf) goto L_1047b7a9;
  /* 1047b78e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047b791 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1047b794 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1047b797 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047b79a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1047b79d mov dword ptr [ecx + 0xc], edx */
  w32((uint32_t)(ECX + 0xc), (EDX));
  /* 1047b7a0 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047b7a3 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1047b7a6 mov dword ptr [eax + 0x18], ecx */
  w32((uint32_t)(EAX + 0x18), (ECX));
L_1047b7a9:;
  /* 1047b7a9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047b7ac mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047b7af mov dword ptr [edx + 0x10], eax */
  w32((uint32_t)(EDX + 0x10), (EAX));
L_1047b7b2:;
  /* 1047b7b2 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b7b6 jne 0x1047b7e7 */
  if (!C.zf) goto L_1047b7e7;
  /* 1047b7b8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b7bc jne 0x1047b7c6 */
  if (!C.zf) goto L_1047b7c6;
  /* 1047b7be mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047b7c1 cmp ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b7c4 je 0x1047b7e7 */
  if (C.zf) goto L_1047b7e7;
L_1047b7c6:;
  /* 1047b7c6 push 0x10029554 */
  push32((uint32_t)(0x10029554u));
  /* 1047b7cb push 0 */
  push32((uint32_t)(0x0u));
  /* 1047b7cd push 0x2a8 */
  push32((uint32_t)(0x2a8u));
  /* 1047b7d2 push 0x100294fc */
  push32((uint32_t)(0x100294fcu));
  /* 1047b7d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1047b7d9 call 0x10479fd0 */
  push32(0x1047b7deu); f_10479fd0();
  /* 1047b7de add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b7e1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b7e4 jne 0x1047b7e7 */
  if (!C.zf) goto L_1047b7e7;
  /* 1047b7e6 int3  */
  x86_unimpl("int3 @ 0x1047b7e6");
L_1047b7e7:;
  /* 1047b7e7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1047b7e9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1047b7eb jne 0x1047b7b2 */
  if (!C.zf) goto L_1047b7b2;
  /* 1047b7ed mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047b7f0 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b7f3 je 0x1047b7fb */
  if (C.zf) goto L_1047b7fb;
  /* 1047b7f5 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b7f9 je 0x1047b803 */
  if (C.zf) goto L_1047b803;
L_1047b7fb:;
  /* 1047b7fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047b7fe jmp 0x1047b8ea */
  goto L_1047b8ea;
L_1047b803:;
  /* 1047b803 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047b806 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b809 je 0x1047b81b */
  if (C.zf) goto L_1047b81b;
  /* 1047b80b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047b80e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1047b810 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047b813 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1047b816 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1047b819 jmp 0x1047b857 */
  goto L_1047b857;
L_1047b81b:;
  /* 1047b81b mov eax, dword ptr [0x1002e4c4] */
  EAX = (r32((uint32_t)(0x1002e4c4)));
  /* 1047b820 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b823 je 0x1047b846 */
  if (C.zf) goto L_1047b846;
  /* 1047b825 push 0x10029538 */
  push32((uint32_t)(0x10029538u));
  /* 1047b82a push 0 */
  push32((uint32_t)(0x0u));
  /* 1047b82c push 0x2b7 */
  push32((uint32_t)(0x2b7u));
  /* 1047b831 push 0x100294fc */
  push32((uint32_t)(0x100294fcu));
  /* 1047b836 push 2 */
  push32((uint32_t)(0x2u));
  /* 1047b838 call 0x10479fd0 */
  push32(0x1047b83du); f_10479fd0();
  /* 1047b83d add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b840 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b843 jne 0x1047b846 */
  if (!C.zf) goto L_1047b846;
  /* 1047b845 int3  */
  x86_unimpl("int3 @ 0x1047b845");
L_1047b846:;
  /* 1047b846 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1047b848 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1047b84a jne 0x1047b81b */
  if (!C.zf) goto L_1047b81b;
  /* 1047b84c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047b84f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1047b852 mov dword ptr [0x1002e4c4], eax */
  w32((uint32_t)(0x1002e4c4), (EAX));
L_1047b857:;
  /* 1047b857 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047b85a cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b85e je 0x1047b86f */
  if (C.zf) goto L_1047b86f;
  /* 1047b860 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047b863 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1047b866 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047b869 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1047b86b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1047b86d jmp 0x1047b8aa */
  goto L_1047b8aa;
L_1047b86f:;
  /* 1047b86f mov eax, dword ptr [0x1002e4cc] */
  EAX = (r32((uint32_t)(0x1002e4cc)));
  /* 1047b874 cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b877 je 0x1047b89a */
  if (C.zf) goto L_1047b89a;
  /* 1047b879 push 0x1002951c */
  push32((uint32_t)(0x1002951cu));
  /* 1047b87e push 0 */
  push32((uint32_t)(0x0u));
  /* 1047b880 push 0x2c2 */
  push32((uint32_t)(0x2c2u));
  /* 1047b885 push 0x100294fc */
  push32((uint32_t)(0x100294fcu));
  /* 1047b88a push 2 */
  push32((uint32_t)(0x2u));
  /* 1047b88c call 0x10479fd0 */
  push32(0x1047b891u); f_10479fd0();
  /* 1047b891 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b894 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b897 jne 0x1047b89a */
  if (!C.zf) goto L_1047b89a;
  /* 1047b899 int3  */
  x86_unimpl("int3 @ 0x1047b899");
L_1047b89a:;
  /* 1047b89a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1047b89c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1047b89e jne 0x1047b86f */
  if (!C.zf) goto L_1047b86f;
  /* 1047b8a0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047b8a3 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1047b8a5 mov dword ptr [0x1002e4cc], eax */
  w32((uint32_t)(0x1002e4cc), (EAX));
L_1047b8aa:;
  /* 1047b8aa cmp dword ptr [0x1002e4cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1002e4cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047b8b1 je 0x1047b8c1 */
  if (C.zf) goto L_1047b8c1;
  /* 1047b8b3 mov ecx, dword ptr [0x1002e4cc] */
  ECX = (r32((uint32_t)(0x1002e4cc)));
  /* 1047b8b9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047b8bc mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1047b8bf jmp 0x1047b8c9 */
  goto L_1047b8c9;
L_1047b8c1:;
  /* 1047b8c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047b8c4 mov dword ptr [0x1002e4c4], eax */
  w32((uint32_t)(0x1002e4c4), (EAX));
L_1047b8c9:;
  /* 1047b8c9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047b8cc mov edx, dword ptr [0x1002e4cc] */
  EDX = (r32((uint32_t)(0x1002e4cc)));
  /* 1047b8d2 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1047b8d4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047b8d7 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 1047b8de mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047b8e1 mov dword ptr [0x1002e4cc], ecx */
  w32((uint32_t)(0x1002e4cc), (ECX));
  /* 1047b8e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1047b8ea:;
  /* 1047b8ea pop edi */
  EDI = (pop32());
  /* 1047b8eb pop esi */
  ESI = (pop32());
  /* 1047b8ec pop ebx */
  EBX = (pop32());
  /* 1047b8ed mov esp, ebp */
  ESP = (EBP);
  /* 1047b8ef pop ebp */
  EBP = (pop32());
  /* 1047b8f0 ret  */
  ESPCHK(0x1047b3e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b900 @ 0x1047b900 (27 bytes, 13 insns) */
void f_1047b900(void) {
  FTRACE(0x1047b900u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047b900 push ebp */
  push32((uint32_t)(EBP));
  /* 1047b901 mov ebp, esp */
  EBP = (ESP);
  /* 1047b903 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047b905 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047b907 push 1 */
  push32((uint32_t)(0x1u));
  /* 1047b909 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047b90c push eax */
  push32((uint32_t)(EAX));
  /* 1047b90d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047b910 push ecx */
  push32((uint32_t)(ECX));
  /* 1047b911 call 0x1047b920 */
  push32(0x1047b916u); f_1047b920();
  /* 1047b916 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b919 pop ebp */
  EBP = (pop32());
  /* 1047b91a ret  */
  ESPCHK(0x1047b900u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b920 @ 0x1047b920 (64 bytes, 27 insns) */
void f_1047b920(void) {
  FTRACE(0x1047b920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047b920 push ebp */
  push32((uint32_t)(EBP));
  /* 1047b921 mov ebp, esp */
  EBP = (ESP);
  /* 1047b923 push ecx */
  push32((uint32_t)(ECX));
  /* 1047b924 push 9 */
  push32((uint32_t)(0x9u));
  /* 1047b926 call 0x1047e910 */
  push32(0x1047b92bu); f_1047e910();
  /* 1047b92b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b92e push 0 */
  push32((uint32_t)(0x0u));
  /* 1047b930 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1047b933 push eax */
  push32((uint32_t)(EAX));
  /* 1047b934 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1047b937 push ecx */
  push32((uint32_t)(ECX));
  /* 1047b938 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047b93b push edx */
  push32((uint32_t)(EDX));
  /* 1047b93c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047b93f push eax */
  push32((uint32_t)(EAX));
  /* 1047b940 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047b943 push ecx */
  push32((uint32_t)(ECX));
  /* 1047b944 call 0x1047b3e0 */
  push32(0x1047b949u); f_1047b3e0();
  /* 1047b949 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b94c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1047b94f push 9 */
  push32((uint32_t)(0x9u));
  /* 1047b951 call 0x1047e9b0 */
  push32(0x1047b956u); f_1047e9b0();
  /* 1047b956 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b959 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047b95c mov esp, ebp */
  ESP = (EBP);
  /* 1047b95e pop ebp */
  EBP = (pop32());
  /* 1047b95f ret  */
  ESPCHK(0x1047b920u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b960 @ 0x1047b960 (19 bytes, 9 insns) */
void f_1047b960(void) {
  FTRACE(0x1047b960u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047b960 push ebp */
  push32((uint32_t)(EBP));
  /* 1047b961 mov ebp, esp */
  EBP = (ESP);
  /* 1047b963 push 1 */
  push32((uint32_t)(0x1u));
  /* 1047b965 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047b968 push eax */
  push32((uint32_t)(EAX));
  /* 1047b969 call 0x1047b9a0 */
  push32(0x1047b96eu); f_1047b9a0();
  /* 1047b96e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b971 pop ebp */
  EBP = (pop32());
  /* 1047b972 ret  */
  ESPCHK(0x1047b960u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b980 @ 0x1047b980 (19 bytes, 9 insns) */
void f_1047b980(void) {
  FTRACE(0x1047b980u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047b980 push ebp */
  push32((uint32_t)(EBP));
  /* 1047b981 mov ebp, esp */
  EBP = (ESP);
  /* 1047b983 push 1 */
  push32((uint32_t)(0x1u));
  /* 1047b985 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047b988 push eax */
  push32((uint32_t)(EAX));
  /* 1047b989 call 0x1047b9d0 */
  push32(0x1047b98eu); f_1047b9d0();
  /* 1047b98e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b991 pop ebp */
  EBP = (pop32());
  /* 1047b992 ret  */
  ESPCHK(0x1047b980u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b9a0 @ 0x1047b9a0 (41 bytes, 16 insns) */
void f_1047b9a0(void) {
  FTRACE(0x1047b9a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047b9a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1047b9a1 mov ebp, esp */
  EBP = (ESP);
  /* 1047b9a3 push 9 */
  push32((uint32_t)(0x9u));
  /* 1047b9a5 call 0x1047e910 */
  push32(0x1047b9aau); f_1047e910();
  /* 1047b9aa add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b9ad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047b9b0 push eax */
  push32((uint32_t)(EAX));
  /* 1047b9b1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047b9b4 push ecx */
  push32((uint32_t)(ECX));
  /* 1047b9b5 call 0x1047b9d0 */
  push32(0x1047b9bau); f_1047b9d0();
  /* 1047b9ba add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b9bd push 9 */
  push32((uint32_t)(0x9u));
  /* 1047b9bf call 0x1047e9b0 */
  push32(0x1047b9c4u); f_1047e9b0();
  /* 1047b9c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047b9c7 pop ebp */
  EBP = (pop32());
  /* 1047b9c8 ret  */
  ESPCHK(0x1047b9a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001b9d0 @ 0x1047b9d0 (1004 bytes, 342 insns) */
void f_1047b9d0(void) {
  FTRACE(0x1047b9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047b9d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1047b9d1 mov ebp, esp */
  EBP = (ESP);
  /* 1047b9d3 push ecx */
  push32((uint32_t)(ECX));
  /* 1047b9d4 push ebx */
  push32((uint32_t)(EBX));
  /* 1047b9d5 push esi */
  push32((uint32_t)(ESI));
  /* 1047b9d6 push edi */
  push32((uint32_t)(EDI));
  /* 1047b9d7 mov eax, dword ptr [0x1002ca84] */
  EAX = (r32((uint32_t)(0x1002ca84)));
  /* 1047b9dc and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1047b9df test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047b9e1 je 0x1047ba13 */
  if (C.zf) goto L_1047ba13;
L_1047b9e3:;
  /* 1047b9e3 call 0x1047c0b0 */
  push32(0x1047b9e8u); f_1047c0b0();
  /* 1047b9e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047b9ea jne 0x1047ba0d */
  if (!C.zf) goto L_1047ba0d;
  /* 1047b9ec push 0x10029508 */
  push32((uint32_t)(0x10029508u));
  /* 1047b9f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047b9f3 push 0x3e1 */
  push32((uint32_t)(0x3e1u));
  /* 1047b9f8 push 0x100294fc */
  push32((uint32_t)(0x100294fcu));
  /* 1047b9fd push 2 */
  push32((uint32_t)(0x2u));
  /* 1047b9ff call 0x10479fd0 */
  push32(0x1047ba04u); f_10479fd0();
  /* 1047ba04 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ba07 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ba0a jne 0x1047ba0d */
  if (!C.zf) goto L_1047ba0d;
  /* 1047ba0c int3  */
  x86_unimpl("int3 @ 0x1047ba0c");
L_1047ba0d:;
  /* 1047ba0d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1047ba0f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1047ba11 jne 0x1047b9e3 */
  if (!C.zf) goto L_1047b9e3;
L_1047ba13:;
  /* 1047ba13 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ba17 jne 0x1047ba1e */
  if (!C.zf) goto L_1047ba1e;
  /* 1047ba19 jmp 0x1047bdb5 */
  goto L_1047bdb5;
L_1047ba1e:;
  /* 1047ba1e push 0 */
  push32((uint32_t)(0x0u));
  /* 1047ba20 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047ba22 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047ba24 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047ba27 push edx */
  push32((uint32_t)(EDX));
  /* 1047ba28 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047ba2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047ba2d push eax */
  push32((uint32_t)(EAX));
  /* 1047ba2e push 3 */
  push32((uint32_t)(0x3u));
  /* 1047ba30 call dword ptr [0x1002cc90] */
  call_ind((uint32_t)(r32((uint32_t)(0x1002cc90))), 0x1047ba36u);
  /* 1047ba36 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ba39 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047ba3b jne 0x1047ba68 */
  if (!C.zf) goto L_1047ba68;
L_1047ba3d:;
  /* 1047ba3d push 0x100297cc */
  push32((uint32_t)(0x100297ccu));
  /* 1047ba42 push 0x1002949c */
  push32((uint32_t)(0x1002949cu));
  /* 1047ba47 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047ba49 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047ba4b push 0 */
  push32((uint32_t)(0x0u));
  /* 1047ba4d push 0 */
  push32((uint32_t)(0x0u));
  /* 1047ba4f call 0x10479fd0 */
  push32(0x1047ba54u); f_10479fd0();
  /* 1047ba54 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ba57 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ba5a jne 0x1047ba5d */
  if (!C.zf) goto L_1047ba5d;
  /* 1047ba5c int3  */
  x86_unimpl("int3 @ 0x1047ba5c");
L_1047ba5d:;
  /* 1047ba5d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1047ba5f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1047ba61 jne 0x1047ba3d */
  if (!C.zf) goto L_1047ba3d;
  /* 1047ba63 jmp 0x1047bdb5 */
  goto L_1047bdb5;
L_1047ba68:;
  /* 1047ba68 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047ba6b push edx */
  push32((uint32_t)(EDX));
  /* 1047ba6c call 0x1047c510 */
  push32(0x1047ba71u); f_1047c510();
  /* 1047ba71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ba74 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047ba76 jne 0x1047ba99 */
  if (!C.zf) goto L_1047ba99;
  /* 1047ba78 push 0x1002960c */
  push32((uint32_t)(0x1002960cu));
  /* 1047ba7d push 0 */
  push32((uint32_t)(0x0u));
  /* 1047ba7f push 0x3f3 */
  push32((uint32_t)(0x3f3u));
  /* 1047ba84 push 0x100294fc */
  push32((uint32_t)(0x100294fcu));
  /* 1047ba89 push 2 */
  push32((uint32_t)(0x2u));
  /* 1047ba8b call 0x10479fd0 */
  push32(0x1047ba90u); f_10479fd0();
  /* 1047ba90 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047ba93 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047ba96 jne 0x1047ba99 */
  if (!C.zf) goto L_1047ba99;
  /* 1047ba98 int3  */
  x86_unimpl("int3 @ 0x1047ba98");
L_1047ba99:;
  /* 1047ba99 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047ba9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047ba9d jne 0x1047ba68 */
  if (!C.zf) goto L_1047ba68;
  /* 1047ba9f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047baa2 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047baa5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1047baa8:;
  /* 1047baa8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047baab mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1047baae and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1047bab3 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047bab6 je 0x1047bafb */
  if (C.zf) goto L_1047bafb;
  /* 1047bab8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047babb cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047babf je 0x1047bafb */
  if (C.zf) goto L_1047bafb;
  /* 1047bac1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047bac4 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1047bac7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1047bacc cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047bacf je 0x1047bafb */
  if (C.zf) goto L_1047bafb;
  /* 1047bad1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047bad4 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047bad8 je 0x1047bafb */
  if (C.zf) goto L_1047bafb;
  /* 1047bada push 0x100297a4 */
  push32((uint32_t)(0x100297a4u));
  /* 1047badf push 0 */
  push32((uint32_t)(0x0u));
  /* 1047bae1 push 0x3f9 */
  push32((uint32_t)(0x3f9u));
  /* 1047bae6 push 0x100294fc */
  push32((uint32_t)(0x100294fcu));
  /* 1047baeb push 2 */
  push32((uint32_t)(0x2u));
  /* 1047baed call 0x10479fd0 */
  push32(0x1047baf2u); f_10479fd0();
  /* 1047baf2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047baf5 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047baf8 jne 0x1047bafb */
  if (!C.zf) goto L_1047bafb;
  /* 1047bafa int3  */
  x86_unimpl("int3 @ 0x1047bafa");
L_1047bafb:;
  /* 1047bafb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1047bafd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1047baff jne 0x1047baa8 */
  if (!C.zf) goto L_1047baa8;
  /* 1047bb01 mov eax, dword ptr [0x1002ca84] */
  EAX = (r32((uint32_t)(0x1002ca84)));
  /* 1047bb06 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1047bb09 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047bb0b jne 0x1047bbd6 */
  if (!C.zf) goto L_1047bbd6;
  /* 1047bb11 push 4 */
  push32((uint32_t)(0x4u));
  /* 1047bb13 mov cl, byte ptr [0x1002ca90] */
  CL = (r8((uint32_t)(0x1002ca90)));
  /* 1047bb19 push ecx */
  push32((uint32_t)(ECX));
  /* 1047bb1a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047bb1d add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047bb20 push edx */
  push32((uint32_t)(EDX));
  /* 1047bb21 call 0x1047c020 */
  push32(0x1047bb26u); f_1047c020();
  /* 1047bb26 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047bb29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047bb2b jne 0x1047bb70 */
  if (!C.zf) goto L_1047bb70;
L_1047bb2d:;
  /* 1047bb2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047bb30 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047bb33 push eax */
  push32((uint32_t)(EAX));
  /* 1047bb34 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047bb37 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1047bb3a push edx */
  push32((uint32_t)(EDX));
  /* 1047bb3b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047bb3e mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1047bb41 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1047bb47 mov edx, dword ptr [ecx*4 + 0x1002ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1002ca94)));
  /* 1047bb4e push edx */
  push32((uint32_t)(EDX));
  /* 1047bb4f push 0x10029778 */
  push32((uint32_t)(0x10029778u));
  /* 1047bb54 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047bb56 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047bb58 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047bb5a push 1 */
  push32((uint32_t)(0x1u));
  /* 1047bb5c call 0x10479fd0 */
  push32(0x1047bb61u); f_10479fd0();
  /* 1047bb61 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047bb64 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047bb67 jne 0x1047bb6a */
  if (!C.zf) goto L_1047bb6a;
  /* 1047bb69 int3  */
  x86_unimpl("int3 @ 0x1047bb69");
L_1047bb6a:;
  /* 1047bb6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047bb6c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047bb6e jne 0x1047bb2d */
  if (!C.zf) goto L_1047bb2d;
L_1047bb70:;
  /* 1047bb70 push 4 */
  push32((uint32_t)(0x4u));
  /* 1047bb72 mov cl, byte ptr [0x1002ca90] */
  CL = (r8((uint32_t)(0x1002ca90)));
  /* 1047bb78 push ecx */
  push32((uint32_t)(ECX));
  /* 1047bb79 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047bb7c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1047bb7f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047bb82 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 1047bb86 push edx */
  push32((uint32_t)(EDX));
  /* 1047bb87 call 0x1047c020 */
  push32(0x1047bb8cu); f_1047c020();
  /* 1047bb8c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047bb8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047bb91 jne 0x1047bbd6 */
  if (!C.zf) goto L_1047bbd6;
L_1047bb93:;
  /* 1047bb93 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047bb96 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047bb99 push eax */
  push32((uint32_t)(EAX));
  /* 1047bb9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047bb9d mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1047bba0 push edx */
  push32((uint32_t)(EDX));
  /* 1047bba1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047bba4 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1047bba7 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1047bbad mov edx, dword ptr [ecx*4 + 0x1002ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1002ca94)));
  /* 1047bbb4 push edx */
  push32((uint32_t)(EDX));
  /* 1047bbb5 push 0x1002974c */
  push32((uint32_t)(0x1002974cu));
  /* 1047bbba push 0 */
  push32((uint32_t)(0x0u));
  /* 1047bbbc push 0 */
  push32((uint32_t)(0x0u));
  /* 1047bbbe push 0 */
  push32((uint32_t)(0x0u));
  /* 1047bbc0 push 1 */
  push32((uint32_t)(0x1u));
  /* 1047bbc2 call 0x10479fd0 */
  push32(0x1047bbc7u); f_10479fd0();
  /* 1047bbc7 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047bbca cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047bbcd jne 0x1047bbd0 */
  if (!C.zf) goto L_1047bbd0;
  /* 1047bbcf int3  */
  x86_unimpl("int3 @ 0x1047bbcf");
L_1047bbd0:;
  /* 1047bbd0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047bbd2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047bbd4 jne 0x1047bb93 */
  if (!C.zf) goto L_1047bb93;
L_1047bbd6:;
  /* 1047bbd6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047bbd9 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047bbdd jne 0x1047bc4b */
  if (!C.zf) goto L_1047bc4b;
L_1047bbdf:;
  /* 1047bbdf mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047bbe2 cmp dword ptr [edx + 0xc], 0xfedcbabc */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0xfedcbabcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047bbe9 jne 0x1047bbf4 */
  if (!C.zf) goto L_1047bbf4;
  /* 1047bbeb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047bbee cmp dword ptr [eax + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047bbf2 je 0x1047bc15 */
  if (C.zf) goto L_1047bc15;
L_1047bbf4:;
  /* 1047bbf4 push 0x1002970c */
  push32((uint32_t)(0x1002970cu));
  /* 1047bbf9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047bbfb push 0x40e */
  push32((uint32_t)(0x40eu));
  /* 1047bc00 push 0x100294fc */
  push32((uint32_t)(0x100294fcu));
  /* 1047bc05 push 2 */
  push32((uint32_t)(0x2u));
  /* 1047bc07 call 0x10479fd0 */
  push32(0x1047bc0cu); f_10479fd0();
  /* 1047bc0c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047bc0f cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047bc12 jne 0x1047bc15 */
  if (!C.zf) goto L_1047bc15;
  /* 1047bc14 int3  */
  x86_unimpl("int3 @ 0x1047bc14");
L_1047bc15:;
  /* 1047bc15 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1047bc17 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1047bc19 jne 0x1047bbdf */
  if (!C.zf) goto L_1047bbdf;
  /* 1047bc1b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047bc1e mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1047bc21 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047bc24 push eax */
  push32((uint32_t)(EAX));
  /* 1047bc25 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1047bc27 mov cl, byte ptr [0x1002ca91] */
  CL = (r8((uint32_t)(0x1002ca91)));
  /* 1047bc2d push ecx */
  push32((uint32_t)(ECX));
  /* 1047bc2e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047bc31 push edx */
  push32((uint32_t)(EDX));
  /* 1047bc32 call 0x1047ec80 */
  push32(0x1047bc37u); f_1047ec80();
  /* 1047bc37 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047bc3a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047bc3d push eax */
  push32((uint32_t)(EAX));
  /* 1047bc3e call 0x1047f080 */
  push32(0x1047bc43u); f_1047f080();
  /* 1047bc43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047bc46 jmp 0x1047bdb5 */
  goto L_1047bdb5;
L_1047bc4b:;
  /* 1047bc4b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047bc4e cmp dword ptr [ecx + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047bc52 jne 0x1047bc61 */
  if (!C.zf) goto L_1047bc61;
  /* 1047bc54 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047bc58 jne 0x1047bc61 */
  if (!C.zf) goto L_1047bc61;
  /* 1047bc5a mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_1047bc61:;
  /* 1047bc61 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047bc64 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1047bc67 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047bc6a je 0x1047bc8d */
  if (C.zf) goto L_1047bc8d;
  /* 1047bc6c push 0x100296ec */
  push32((uint32_t)(0x100296ecu));
  /* 1047bc71 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047bc73 push 0x41b */
  push32((uint32_t)(0x41bu));
  /* 1047bc78 push 0x100294fc */
  push32((uint32_t)(0x100294fcu));
  /* 1047bc7d push 2 */
  push32((uint32_t)(0x2u));
  /* 1047bc7f call 0x10479fd0 */
  push32(0x1047bc84u); f_10479fd0();
  /* 1047bc84 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047bc87 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047bc8a jne 0x1047bc8d */
  if (!C.zf) goto L_1047bc8d;
  /* 1047bc8c int3  */
  x86_unimpl("int3 @ 0x1047bc8c");
L_1047bc8d:;
  /* 1047bc8d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1047bc8f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1047bc91 jne 0x1047bc61 */
  if (!C.zf) goto L_1047bc61;
  /* 1047bc93 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047bc96 mov eax, dword ptr [0x1002e4d0] */
  EAX = (r32((uint32_t)(0x1002e4d0)));
  /* 1047bc9b sub eax, dword ptr [edx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047bc9e mov dword ptr [0x1002e4d0], eax */
  w32((uint32_t)(0x1002e4d0), (EAX));
  /* 1047bca3 mov ecx, dword ptr [0x1002ca84] */
  ECX = (r32((uint32_t)(0x1002ca84)));
  /* 1047bca9 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 1047bcac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1047bcae jne 0x1047bd8c */
  if (!C.zf) goto L_1047bd8c;
  /* 1047bcb4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047bcb7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047bcba je 0x1047bccc */
  if (C.zf) goto L_1047bccc;
  /* 1047bcbc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047bcbf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1047bcc1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047bcc4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 1047bcc7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1047bcca jmp 0x1047bd0a */
  goto L_1047bd0a;
L_1047bccc:;
  /* 1047bccc mov ecx, dword ptr [0x1002e4c4] */
  ECX = (r32((uint32_t)(0x1002e4c4)));
  /* 1047bcd2 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047bcd5 je 0x1047bcf8 */
  if (C.zf) goto L_1047bcf8;
  /* 1047bcd7 push 0x100296d4 */
  push32((uint32_t)(0x100296d4u));
  /* 1047bcdc push 0 */
  push32((uint32_t)(0x0u));
  /* 1047bcde push 0x42a */
  push32((uint32_t)(0x42au));
  /* 1047bce3 push 0x100294fc */
  push32((uint32_t)(0x100294fcu));
  /* 1047bce8 push 2 */
  push32((uint32_t)(0x2u));
  /* 1047bcea call 0x10479fd0 */
  push32(0x1047bcefu); f_10479fd0();
  /* 1047bcef add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047bcf2 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047bcf5 jne 0x1047bcf8 */
  if (!C.zf) goto L_1047bcf8;
  /* 1047bcf7 int3  */
  x86_unimpl("int3 @ 0x1047bcf7");
L_1047bcf8:;
  /* 1047bcf8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1047bcfa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1047bcfc jne 0x1047bccc */
  if (!C.zf) goto L_1047bccc;
  /* 1047bcfe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047bd01 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1047bd04 mov dword ptr [0x1002e4c4], ecx */
  w32((uint32_t)(0x1002e4c4), (ECX));
L_1047bd0a:;
  /* 1047bd0a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047bd0d cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047bd11 je 0x1047bd22 */
  if (C.zf) goto L_1047bd22;
  /* 1047bd13 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047bd16 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1047bd19 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047bd1c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1047bd1e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1047bd20 jmp 0x1047bd5f */
  goto L_1047bd5f;
L_1047bd22:;
  /* 1047bd22 mov ecx, dword ptr [0x1002e4cc] */
  ECX = (r32((uint32_t)(0x1002e4cc)));
  /* 1047bd28 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047bd2b je 0x1047bd4e */
  if (C.zf) goto L_1047bd4e;
  /* 1047bd2d push 0x100296bc */
  push32((uint32_t)(0x100296bcu));
  /* 1047bd32 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047bd34 push 0x434 */
  push32((uint32_t)(0x434u));
  /* 1047bd39 push 0x100294fc */
  push32((uint32_t)(0x100294fcu));
  /* 1047bd3e push 2 */
  push32((uint32_t)(0x2u));
  /* 1047bd40 call 0x10479fd0 */
  push32(0x1047bd45u); f_10479fd0();
  /* 1047bd45 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047bd48 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047bd4b jne 0x1047bd4e */
  if (!C.zf) goto L_1047bd4e;
  /* 1047bd4d int3  */
  x86_unimpl("int3 @ 0x1047bd4d");
L_1047bd4e:;
  /* 1047bd4e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1047bd50 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1047bd52 jne 0x1047bd22 */
  if (!C.zf) goto L_1047bd22;
  /* 1047bd54 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047bd57 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1047bd59 mov dword ptr [0x1002e4cc], ecx */
  w32((uint32_t)(0x1002e4cc), (ECX));
L_1047bd5f:;
  /* 1047bd5f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047bd62 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1047bd65 add eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047bd68 push eax */
  push32((uint32_t)(EAX));
  /* 1047bd69 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1047bd6b mov cl, byte ptr [0x1002ca91] */
  CL = (r8((uint32_t)(0x1002ca91)));
  /* 1047bd71 push ecx */
  push32((uint32_t)(ECX));
  /* 1047bd72 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047bd75 push edx */
  push32((uint32_t)(EDX));
  /* 1047bd76 call 0x1047ec80 */
  push32(0x1047bd7bu); f_1047ec80();
  /* 1047bd7b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047bd7e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047bd81 push eax */
  push32((uint32_t)(EAX));
  /* 1047bd82 call 0x1047f080 */
  push32(0x1047bd87u); f_1047f080();
  /* 1047bd87 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047bd8a jmp 0x1047bdb5 */
  goto L_1047bdb5;
L_1047bd8c:;
  /* 1047bd8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047bd8f mov dword ptr [ecx + 0x14], 0 */
  w32((uint32_t)(ECX + 0x14), (0x0u));
  /* 1047bd96 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047bd99 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1047bd9c push eax */
  push32((uint32_t)(EAX));
  /* 1047bd9d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1047bd9f mov cl, byte ptr [0x1002ca91] */
  CL = (r8((uint32_t)(0x1002ca91)));
  /* 1047bda5 push ecx */
  push32((uint32_t)(ECX));
  /* 1047bda6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047bda9 add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047bdac push edx */
  push32((uint32_t)(EDX));
  /* 1047bdad call 0x1047ec80 */
  push32(0x1047bdb2u); f_1047ec80();
  /* 1047bdb2 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047bdb5:;
  /* 1047bdb5 pop edi */
  EDI = (pop32());
  /* 1047bdb6 pop esi */
  ESI = (pop32());
  /* 1047bdb7 pop ebx */
  EBX = (pop32());
  /* 1047bdb8 mov esp, ebp */
  ESP = (EBP);
  /* 1047bdba pop ebp */
  EBP = (pop32());
  /* 1047bdbb ret  */
  ESPCHK(0x1047b9d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bdc0 @ 0x1047bdc0 (19 bytes, 9 insns) */
void f_1047bdc0(void) {
  FTRACE(0x1047bdc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047bdc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1047bdc1 mov ebp, esp */
  EBP = (ESP);
  /* 1047bdc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1047bdc5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047bdc8 push eax */
  push32((uint32_t)(EAX));
  /* 1047bdc9 call 0x1047bde0 */
  push32(0x1047bdceu); f_1047bde0();
  /* 1047bdce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047bdd1 pop ebp */
  EBP = (pop32());
  /* 1047bdd2 ret  */
  ESPCHK(0x1047bdc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bde0 @ 0x1047bde0 (342 bytes, 119 insns) */
void f_1047bde0(void) {
  FTRACE(0x1047bde0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047bde0 push ebp */
  push32((uint32_t)(EBP));
  /* 1047bde1 mov ebp, esp */
  EBP = (ESP);
  /* 1047bde3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047bde6 push ebx */
  push32((uint32_t)(EBX));
  /* 1047bde7 push esi */
  push32((uint32_t)(ESI));
  /* 1047bde8 push edi */
  push32((uint32_t)(EDI));
  /* 1047bde9 mov eax, dword ptr [0x1002ca84] */
  EAX = (r32((uint32_t)(0x1002ca84)));
  /* 1047bdee and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1047bdf1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047bdf3 je 0x1047be25 */
  if (C.zf) goto L_1047be25;
L_1047bdf5:;
  /* 1047bdf5 call 0x1047c0b0 */
  push32(0x1047bdfau); f_1047c0b0();
  /* 1047bdfa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047bdfc jne 0x1047be1f */
  if (!C.zf) goto L_1047be1f;
  /* 1047bdfe push 0x10029508 */
  push32((uint32_t)(0x10029508u));
  /* 1047be03 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047be05 push 0x47c */
  push32((uint32_t)(0x47cu));
  /* 1047be0a push 0x100294fc */
  push32((uint32_t)(0x100294fcu));
  /* 1047be0f push 2 */
  push32((uint32_t)(0x2u));
  /* 1047be11 call 0x10479fd0 */
  push32(0x1047be16u); f_10479fd0();
  /* 1047be16 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047be19 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047be1c jne 0x1047be1f */
  if (!C.zf) goto L_1047be1f;
  /* 1047be1e int3  */
  x86_unimpl("int3 @ 0x1047be1e");
L_1047be1f:;
  /* 1047be1f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1047be21 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1047be23 jne 0x1047bdf5 */
  if (!C.zf) goto L_1047bdf5;
L_1047be25:;
  /* 1047be25 push 9 */
  push32((uint32_t)(0x9u));
  /* 1047be27 call 0x1047e910 */
  push32(0x1047be2cu); f_1047e910();
  /* 1047be2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047be2f:;
  /* 1047be2f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047be32 push edx */
  push32((uint32_t)(EDX));
  /* 1047be33 call 0x1047c510 */
  push32(0x1047be38u); f_1047c510();
  /* 1047be38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047be3b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047be3d jne 0x1047be60 */
  if (!C.zf) goto L_1047be60;
  /* 1047be3f push 0x1002960c */
  push32((uint32_t)(0x1002960cu));
  /* 1047be44 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047be46 push 0x485 */
  push32((uint32_t)(0x485u));
  /* 1047be4b push 0x100294fc */
  push32((uint32_t)(0x100294fcu));
  /* 1047be50 push 2 */
  push32((uint32_t)(0x2u));
  /* 1047be52 call 0x10479fd0 */
  push32(0x1047be57u); f_10479fd0();
  /* 1047be57 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047be5a cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047be5d jne 0x1047be60 */
  if (!C.zf) goto L_1047be60;
  /* 1047be5f int3  */
  x86_unimpl("int3 @ 0x1047be5f");
L_1047be60:;
  /* 1047be60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047be62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047be64 jne 0x1047be2f */
  if (!C.zf) goto L_1047be2f;
  /* 1047be66 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047be69 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047be6c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_1047be6f:;
  /* 1047be6f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047be72 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1047be75 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1047be7a cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047be7d je 0x1047bec2 */
  if (C.zf) goto L_1047bec2;
  /* 1047be7f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047be82 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047be86 je 0x1047bec2 */
  if (C.zf) goto L_1047bec2;
  /* 1047be88 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047be8b mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1047be8e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1047be93 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047be96 je 0x1047bec2 */
  if (C.zf) goto L_1047bec2;
  /* 1047be98 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047be9b cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047be9f je 0x1047bec2 */
  if (C.zf) goto L_1047bec2;
  /* 1047bea1 push 0x100297a4 */
  push32((uint32_t)(0x100297a4u));
  /* 1047bea6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047bea8 push 0x48b */
  push32((uint32_t)(0x48bu));
  /* 1047bead push 0x100294fc */
  push32((uint32_t)(0x100294fcu));
  /* 1047beb2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1047beb4 call 0x10479fd0 */
  push32(0x1047beb9u); f_10479fd0();
  /* 1047beb9 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047bebc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047bebf jne 0x1047bec2 */
  if (!C.zf) goto L_1047bec2;
  /* 1047bec1 int3  */
  x86_unimpl("int3 @ 0x1047bec1");
L_1047bec2:;
  /* 1047bec2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1047bec4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1047bec6 jne 0x1047be6f */
  if (!C.zf) goto L_1047be6f;
  /* 1047bec8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047becb cmp dword ptr [eax + 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047becf jne 0x1047bede */
  if (!C.zf) goto L_1047bede;
  /* 1047bed1 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047bed5 jne 0x1047bede */
  if (!C.zf) goto L_1047bede;
  /* 1047bed7 mov dword ptr [ebp + 0xc], 2 */
  w32((uint32_t)(EBP + 0xc), (0x2u));
L_1047bede:;
  /* 1047bede mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047bee1 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047bee5 je 0x1047bf19 */
  if (C.zf) goto L_1047bf19;
L_1047bee7:;
  /* 1047bee7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047beea mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1047beed cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047bef0 je 0x1047bf13 */
  if (C.zf) goto L_1047bf13;
  /* 1047bef2 push 0x100296ec */
  push32((uint32_t)(0x100296ecu));
  /* 1047bef7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047bef9 push 0x492 */
  push32((uint32_t)(0x492u));
  /* 1047befe push 0x100294fc */
  push32((uint32_t)(0x100294fcu));
  /* 1047bf03 push 2 */
  push32((uint32_t)(0x2u));
  /* 1047bf05 call 0x10479fd0 */
  push32(0x1047bf0au); f_10479fd0();
  /* 1047bf0a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047bf0d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047bf10 jne 0x1047bf13 */
  if (!C.zf) goto L_1047bf13;
  /* 1047bf12 int3  */
  x86_unimpl("int3 @ 0x1047bf12");
L_1047bf13:;
  /* 1047bf13 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1047bf15 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1047bf17 jne 0x1047bee7 */
  if (!C.zf) goto L_1047bee7;
L_1047bf19:;
  /* 1047bf19 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047bf1c mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1047bf1f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1047bf22 push 9 */
  push32((uint32_t)(0x9u));
  /* 1047bf24 call 0x1047e9b0 */
  push32(0x1047bf29u); f_1047e9b0();
  /* 1047bf29 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047bf2c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047bf2f pop edi */
  EDI = (pop32());
  /* 1047bf30 pop esi */
  ESI = (pop32());
  /* 1047bf31 pop ebx */
  EBX = (pop32());
  /* 1047bf32 mov esp, ebp */
  ESP = (EBP);
  /* 1047bf34 pop ebp */
  EBP = (pop32());
  /* 1047bf35 ret  */
  ESPCHK(0x1047bde0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bf40 @ 0x1047bf40 (28 bytes, 11 insns) */
void f_1047bf40(void) {
  FTRACE(0x1047bf40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047bf40 push ebp */
  push32((uint32_t)(EBP));
  /* 1047bf41 mov ebp, esp */
  EBP = (ESP);
  /* 1047bf43 push ecx */
  push32((uint32_t)(ECX));
  /* 1047bf44 mov eax, dword ptr [0x1002ca8c] */
  EAX = (r32((uint32_t)(0x1002ca8c)));
  /* 1047bf49 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1047bf4c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047bf4f mov dword ptr [0x1002ca8c], ecx */
  w32((uint32_t)(0x1002ca8c), (ECX));
  /* 1047bf55 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047bf58 mov esp, ebp */
  ESP = (EBP);
  /* 1047bf5a pop ebp */
  EBP = (pop32());
  /* 1047bf5b ret  */
  ESPCHK(0x1047bf40u, _esp0);
  ESP += 4; return;
}

/* FUN_1001bf60 @ 0x1047bf60 (157 bytes, 59 insns) */
void f_1047bf60(void) {
  FTRACE(0x1047bf60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047bf60 push ebp */
  push32((uint32_t)(EBP));
  /* 1047bf61 mov ebp, esp */
  EBP = (ESP);
  /* 1047bf63 push ecx */
  push32((uint32_t)(ECX));
  /* 1047bf64 push ebx */
  push32((uint32_t)(EBX));
  /* 1047bf65 push esi */
  push32((uint32_t)(ESI));
  /* 1047bf66 push edi */
  push32((uint32_t)(EDI));
  /* 1047bf67 push 9 */
  push32((uint32_t)(0x9u));
  /* 1047bf69 call 0x1047e910 */
  push32(0x1047bf6eu); f_1047e910();
  /* 1047bf6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047bf71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047bf74 push eax */
  push32((uint32_t)(EAX));
  /* 1047bf75 call 0x1047c510 */
  push32(0x1047bf7au); f_1047c510();
  /* 1047bf7a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047bf7d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047bf7f je 0x1047bfec */
  if (C.zf) goto L_1047bfec;
  /* 1047bf81 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047bf84 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047bf87 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1047bf8a:;
  /* 1047bf8a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047bf8d mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1047bf90 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1047bf95 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047bf98 je 0x1047bfdd */
  if (C.zf) goto L_1047bfdd;
  /* 1047bf9a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047bf9d cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047bfa1 je 0x1047bfdd */
  if (C.zf) goto L_1047bfdd;
  /* 1047bfa3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047bfa6 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1047bfa9 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1047bfae cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047bfb1 je 0x1047bfdd */
  if (C.zf) goto L_1047bfdd;
  /* 1047bfb3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047bfb6 cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047bfba je 0x1047bfdd */
  if (C.zf) goto L_1047bfdd;
  /* 1047bfbc push 0x100297a4 */
  push32((uint32_t)(0x100297a4u));
  /* 1047bfc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047bfc3 push 0x4d3 */
  push32((uint32_t)(0x4d3u));
  /* 1047bfc8 push 0x100294fc */
  push32((uint32_t)(0x100294fcu));
  /* 1047bfcd push 2 */
  push32((uint32_t)(0x2u));
  /* 1047bfcf call 0x10479fd0 */
  push32(0x1047bfd4u); f_10479fd0();
  /* 1047bfd4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047bfd7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047bfda jne 0x1047bfdd */
  if (!C.zf) goto L_1047bfdd;
  /* 1047bfdc int3  */
  x86_unimpl("int3 @ 0x1047bfdc");
L_1047bfdd:;
  /* 1047bfdd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1047bfdf test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1047bfe1 jne 0x1047bf8a */
  if (!C.zf) goto L_1047bf8a;
  /* 1047bfe3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047bfe6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047bfe9 mov dword ptr [eax + 0x14], ecx */
  w32((uint32_t)(EAX + 0x14), (ECX));
L_1047bfec:;
  /* 1047bfec push 9 */
  push32((uint32_t)(0x9u));
  /* 1047bfee call 0x1047e9b0 */
  push32(0x1047bff3u); f_1047e9b0();
  /* 1047bff3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047bff6 pop edi */
  EDI = (pop32());
  /* 1047bff7 pop esi */
  ESI = (pop32());
  /* 1047bff8 pop ebx */
  EBX = (pop32());
  /* 1047bff9 mov esp, ebp */
  ESP = (EBP);
  /* 1047bffb pop ebp */
  EBP = (pop32());
  /* 1047bffc ret  */
  ESPCHK(0x1047bf60u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c000 @ 0x1047c000 (28 bytes, 11 insns) */
void f_1047c000(void) {
  FTRACE(0x1047c000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047c000 push ebp */
  push32((uint32_t)(EBP));
  /* 1047c001 mov ebp, esp */
  EBP = (ESP);
  /* 1047c003 push ecx */
  push32((uint32_t)(ECX));
  /* 1047c004 mov eax, dword ptr [0x1002cc90] */
  EAX = (r32((uint32_t)(0x1002cc90)));
  /* 1047c009 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1047c00c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047c00f mov dword ptr [0x1002cc90], ecx */
  w32((uint32_t)(0x1002cc90), (ECX));
  /* 1047c015 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047c018 mov esp, ebp */
  ESP = (EBP);
  /* 1047c01a pop ebp */
  EBP = (pop32());
  /* 1047c01b ret  */
  ESPCHK(0x1047c000u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c020 @ 0x1047c020 (136 bytes, 55 insns) */
void f_1047c020(void) {
  FTRACE(0x1047c020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047c020 push ebp */
  push32((uint32_t)(EBP));
  /* 1047c021 mov ebp, esp */
  EBP = (ESP);
  /* 1047c023 push ecx */
  push32((uint32_t)(ECX));
  /* 1047c024 push ebx */
  push32((uint32_t)(EBX));
  /* 1047c025 push esi */
  push32((uint32_t)(ESI));
  /* 1047c026 push edi */
  push32((uint32_t)(EDI));
  /* 1047c027 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_1047c02e:;
  /* 1047c02e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047c031 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047c034 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047c037 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1047c03a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047c03c je 0x1047c09e */
  if (C.zf) goto L_1047c09e;
  /* 1047c03e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047c041 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047c043 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1047c045 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047c048 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 1047c04e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047c051 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047c054 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1047c057 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c059 je 0x1047c09c */
  if (C.zf) goto L_1047c09c;
L_1047c05b:;
  /* 1047c05b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047c05e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 1047c063 push eax */
  push32((uint32_t)(EAX));
  /* 1047c064 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047c067 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1047c069 mov dl, byte ptr [ecx - 1] */
  DL = (r8((uint32_t)(ECX + -0x1)));
  /* 1047c06c push edx */
  push32((uint32_t)(EDX));
  /* 1047c06d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047c070 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047c073 push eax */
  push32((uint32_t)(EAX));
  /* 1047c074 push 0x100297e8 */
  push32((uint32_t)(0x100297e8u));
  /* 1047c079 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c07b push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c07d push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c07f push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c081 call 0x10479fd0 */
  push32(0x1047c086u); f_10479fd0();
  /* 1047c086 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047c089 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c08c jne 0x1047c08f */
  if (!C.zf) goto L_1047c08f;
  /* 1047c08e int3  */
  x86_unimpl("int3 @ 0x1047c08e");
L_1047c08f:;
  /* 1047c08f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1047c091 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1047c093 jne 0x1047c05b */
  if (!C.zf) goto L_1047c05b;
  /* 1047c095 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1047c09c:;
  /* 1047c09c jmp 0x1047c02e */
  goto L_1047c02e;
L_1047c09e:;
  /* 1047c09e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047c0a1 pop edi */
  EDI = (pop32());
  /* 1047c0a2 pop esi */
  ESI = (pop32());
  /* 1047c0a3 pop ebx */
  EBX = (pop32());
  /* 1047c0a4 mov esp, ebp */
  ESP = (EBP);
  /* 1047c0a6 pop ebp */
  EBP = (pop32());
  /* 1047c0a7 ret  */
  ESPCHK(0x1047c020u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c0b0 @ 0x1047c0b0 (700 bytes, 299 insns) */
void f_1047c0b0(void) {
  FTRACE(0x1047c0b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047c0b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1047c0b1 mov ebp, esp */
  EBP = (ESP);
  /* 1047c0b3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047c0b6 push ebx */
  push32((uint32_t)(EBX));
  /* 1047c0b7 push esi */
  push32((uint32_t)(ESI));
  /* 1047c0b8 push edi */
  push32((uint32_t)(EDI));
  /* 1047c0b9 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1047c0c0 mov eax, dword ptr [0x1002ca84] */
  EAX = (r32((uint32_t)(0x1002ca84)));
  /* 1047c0c5 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1047c0c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047c0ca jne 0x1047c0d6 */
  if (!C.zf) goto L_1047c0d6;
  /* 1047c0cc mov eax, 1 */
  EAX = (0x1u);
  /* 1047c0d1 jmp 0x1047c408 */
  goto L_1047c408;
L_1047c0d6:;
  /* 1047c0d6 push 9 */
  push32((uint32_t)(0x9u));
  /* 1047c0d8 call 0x1047e910 */
  push32(0x1047c0ddu); f_1047e910();
  /* 1047c0dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047c0e0 call 0x1047f0f0 */
  push32(0x1047c0e5u); f_1047f0f0();
  /* 1047c0e5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1047c0e8 cmp dword ptr [ebp - 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c0ec je 0x1047c1f9 */
  if (C.zf) goto L_1047c1f9;
  /* 1047c0f2 cmp dword ptr [ebp - 0xc], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c0f6 je 0x1047c1f9 */
  if (C.zf) goto L_1047c1f9;
  /* 1047c0fc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1047c0ff mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1047c102 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047c105 add edx, 6 */
  { uint32_t _a=(EDX),_b=(0x6u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047c108 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1047c10b cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c10f ja 0x1047c1c2 */
  if ((!C.cf&&!C.zf)) goto L_1047c1c2;
  /* 1047c115 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1047c118 jmp dword ptr [eax*4 + 0x1000440f] */
  jmp_ind((uint32_t)(r32((uint32_t)(EAX*4 + 0x1000440f)))); return;
L_1047c11f:;
  /* 1047c11f push 0x1002993c */
  push32((uint32_t)(0x1002993cu));
  /* 1047c124 push 0x1002949c */
  push32((uint32_t)(0x1002949cu));
  /* 1047c129 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c12b push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c12d push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c12f push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c131 call 0x10479fd0 */
  push32(0x1047c136u); f_10479fd0();
  /* 1047c136 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047c139 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c13c jne 0x1047c13f */
  if (!C.zf) goto L_1047c13f;
  /* 1047c13e int3  */
  x86_unimpl("int3 @ 0x1047c13e");
L_1047c13f:;
  /* 1047c13f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1047c141 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1047c143 jne 0x1047c11f */
  if (!C.zf) goto L_1047c11f;
  /* 1047c145 jmp 0x1047c1e8 */
  goto L_1047c1e8;
L_1047c14a:;
  /* 1047c14a push 0x10029918 */
  push32((uint32_t)(0x10029918u));
  /* 1047c14f push 0x1002949c */
  push32((uint32_t)(0x1002949cu));
  /* 1047c154 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c156 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c158 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c15a push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c15c call 0x10479fd0 */
  push32(0x1047c161u); f_10479fd0();
  /* 1047c161 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047c164 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c167 jne 0x1047c16a */
  if (!C.zf) goto L_1047c16a;
  /* 1047c169 int3  */
  x86_unimpl("int3 @ 0x1047c169");
L_1047c16a:;
  /* 1047c16a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1047c16c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1047c16e jne 0x1047c14a */
  if (!C.zf) goto L_1047c14a;
  /* 1047c170 jmp 0x1047c1e8 */
  goto L_1047c1e8;
L_1047c172:;
  /* 1047c172 push 0x100298f4 */
  push32((uint32_t)(0x100298f4u));
  /* 1047c177 push 0x1002949c */
  push32((uint32_t)(0x1002949cu));
  /* 1047c17c push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c17e push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c180 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c182 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c184 call 0x10479fd0 */
  push32(0x1047c189u); f_10479fd0();
  /* 1047c189 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047c18c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c18f jne 0x1047c192 */
  if (!C.zf) goto L_1047c192;
  /* 1047c191 int3  */
  x86_unimpl("int3 @ 0x1047c191");
L_1047c192:;
  /* 1047c192 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047c194 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047c196 jne 0x1047c172 */
  if (!C.zf) goto L_1047c172;
  /* 1047c198 jmp 0x1047c1e8 */
  goto L_1047c1e8;
L_1047c19a:;
  /* 1047c19a push 0x100298d0 */
  push32((uint32_t)(0x100298d0u));
  /* 1047c19f push 0x1002949c */
  push32((uint32_t)(0x1002949cu));
  /* 1047c1a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c1a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c1a8 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c1aa push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c1ac call 0x10479fd0 */
  push32(0x1047c1b1u); f_10479fd0();
  /* 1047c1b1 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047c1b4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c1b7 jne 0x1047c1ba */
  if (!C.zf) goto L_1047c1ba;
  /* 1047c1b9 int3  */
  x86_unimpl("int3 @ 0x1047c1b9");
L_1047c1ba:;
  /* 1047c1ba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1047c1bc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1047c1be jne 0x1047c19a */
  if (!C.zf) goto L_1047c19a;
  /* 1047c1c0 jmp 0x1047c1e8 */
  goto L_1047c1e8;
L_1047c1c2:;
  /* 1047c1c2 push 0x100298a4 */
  push32((uint32_t)(0x100298a4u));
  /* 1047c1c7 push 0x1002949c */
  push32((uint32_t)(0x1002949cu));
  /* 1047c1cc push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c1ce push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c1d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c1d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c1d4 call 0x10479fd0 */
  push32(0x1047c1d9u); f_10479fd0();
  /* 1047c1d9 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047c1dc cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c1df jne 0x1047c1e2 */
  if (!C.zf) goto L_1047c1e2;
  /* 1047c1e1 int3  */
  x86_unimpl("int3 @ 0x1047c1e1");
L_1047c1e2:;
  /* 1047c1e2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1047c1e4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1047c1e6 jne 0x1047c1c2 */
  if (!C.zf) goto L_1047c1c2;
L_1047c1e8:;
  /* 1047c1e8 push 9 */
  push32((uint32_t)(0x9u));
  /* 1047c1ea call 0x1047e9b0 */
  push32(0x1047c1efu); f_1047e9b0();
  /* 1047c1ef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047c1f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047c1f4 jmp 0x1047c408 */
  goto L_1047c408;
L_1047c1f9:;
  /* 1047c1f9 mov eax, dword ptr [0x1002e4cc] */
  EAX = (r32((uint32_t)(0x1002e4cc)));
  /* 1047c1fe mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1047c201 jmp 0x1047c20b */
  goto L_1047c20b;
L_1047c203:;
  /* 1047c203 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047c206 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1047c208 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_1047c20b:;
  /* 1047c20b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c20f je 0x1047c3fb */
  if (C.zf) goto L_1047c3fb;
  /* 1047c215 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 1047c21c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047c21f mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1047c222 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1047c228 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c22b je 0x1047c250 */
  if (C.zf) goto L_1047c250;
  /* 1047c22d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047c230 cmp dword ptr [edx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c234 je 0x1047c250 */
  if (C.zf) goto L_1047c250;
  /* 1047c236 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047c239 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1047c23c and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1047c242 cmp ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c245 je 0x1047c250 */
  if (C.zf) goto L_1047c250;
  /* 1047c247 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047c24a cmp dword ptr [edx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c24e jne 0x1047c268 */
  if (!C.zf) goto L_1047c268;
L_1047c250:;
  /* 1047c250 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047c253 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 1047c256 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1047c25c mov edx, dword ptr [ecx*4 + 0x1002ca94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1002ca94)));
  /* 1047c263 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 1047c266 jmp 0x1047c26f */
  goto L_1047c26f;
L_1047c268:;
  /* 1047c268 mov dword ptr [ebp - 0x14], 0x1002989c */
  w32((uint32_t)(EBP + -0x14), (0x1002989cu));
L_1047c26f:;
  /* 1047c26f push 4 */
  push32((uint32_t)(0x4u));
  /* 1047c271 mov al, byte ptr [0x1002ca90] */
  AL = (r8((uint32_t)(0x1002ca90)));
  /* 1047c276 push eax */
  push32((uint32_t)(EAX));
  /* 1047c277 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047c27a add ecx, 0x1c */
  { uint32_t _a=(ECX),_b=(0x1cu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047c27d push ecx */
  push32((uint32_t)(ECX));
  /* 1047c27e call 0x1047c020 */
  push32(0x1047c283u); f_1047c020();
  /* 1047c283 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047c286 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047c288 jne 0x1047c2c4 */
  if (!C.zf) goto L_1047c2c4;
L_1047c28a:;
  /* 1047c28a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047c28d add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047c290 push edx */
  push32((uint32_t)(EDX));
  /* 1047c291 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047c294 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 1047c297 push ecx */
  push32((uint32_t)(ECX));
  /* 1047c298 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1047c29b push edx */
  push32((uint32_t)(EDX));
  /* 1047c29c push 0x10029778 */
  push32((uint32_t)(0x10029778u));
  /* 1047c2a1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c2a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c2a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c2a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c2a9 call 0x10479fd0 */
  push32(0x1047c2aeu); f_10479fd0();
  /* 1047c2ae add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047c2b1 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c2b4 jne 0x1047c2b7 */
  if (!C.zf) goto L_1047c2b7;
  /* 1047c2b6 int3  */
  x86_unimpl("int3 @ 0x1047c2b6");
L_1047c2b7:;
  /* 1047c2b7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047c2b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047c2bb jne 0x1047c28a */
  if (!C.zf) goto L_1047c28a;
  /* 1047c2bd mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1047c2c4:;
  /* 1047c2c4 push 4 */
  push32((uint32_t)(0x4u));
  /* 1047c2c6 mov cl, byte ptr [0x1002ca90] */
  CL = (r8((uint32_t)(0x1002ca90)));
  /* 1047c2cc push ecx */
  push32((uint32_t)(ECX));
  /* 1047c2cd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047c2d0 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 1047c2d3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047c2d6 lea edx, [ecx + eax + 0x20] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x20));
  /* 1047c2da push edx */
  push32((uint32_t)(EDX));
  /* 1047c2db call 0x1047c020 */
  push32(0x1047c2e0u); f_1047c020();
  /* 1047c2e0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047c2e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047c2e5 jne 0x1047c321 */
  if (!C.zf) goto L_1047c321;
L_1047c2e7:;
  /* 1047c2e7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047c2ea add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047c2ed push eax */
  push32((uint32_t)(EAX));
  /* 1047c2ee mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047c2f1 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1047c2f4 push edx */
  push32((uint32_t)(EDX));
  /* 1047c2f5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1047c2f8 push eax */
  push32((uint32_t)(EAX));
  /* 1047c2f9 push 0x1002974c */
  push32((uint32_t)(0x1002974cu));
  /* 1047c2fe push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c300 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c302 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c304 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c306 call 0x10479fd0 */
  push32(0x1047c30bu); f_10479fd0();
  /* 1047c30b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047c30e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c311 jne 0x1047c314 */
  if (!C.zf) goto L_1047c314;
  /* 1047c313 int3  */
  x86_unimpl("int3 @ 0x1047c313");
L_1047c314:;
  /* 1047c314 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1047c316 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1047c318 jne 0x1047c2e7 */
  if (!C.zf) goto L_1047c2e7;
  /* 1047c31a mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1047c321:;
  /* 1047c321 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047c324 cmp dword ptr [edx + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c328 jne 0x1047c37a */
  if (!C.zf) goto L_1047c37a;
  /* 1047c32a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047c32d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1047c330 push ecx */
  push32((uint32_t)(ECX));
  /* 1047c331 mov dl, byte ptr [0x1002ca91] */
  DL = (r8((uint32_t)(0x1002ca91)));
  /* 1047c337 push edx */
  push32((uint32_t)(EDX));
  /* 1047c338 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047c33b add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047c33e push eax */
  push32((uint32_t)(EAX));
  /* 1047c33f call 0x1047c020 */
  push32(0x1047c344u); f_1047c020();
  /* 1047c344 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047c347 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047c349 jne 0x1047c37a */
  if (!C.zf) goto L_1047c37a;
L_1047c34b:;
  /* 1047c34b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047c34e add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047c351 push ecx */
  push32((uint32_t)(ECX));
  /* 1047c352 push 0x10029870 */
  push32((uint32_t)(0x10029870u));
  /* 1047c357 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c359 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c35b push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c35d push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c35f call 0x10479fd0 */
  push32(0x1047c364u); f_10479fd0();
  /* 1047c364 add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047c367 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c36a jne 0x1047c36d */
  if (!C.zf) goto L_1047c36d;
  /* 1047c36c int3  */
  x86_unimpl("int3 @ 0x1047c36c");
L_1047c36d:;
  /* 1047c36d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1047c36f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1047c371 jne 0x1047c34b */
  if (!C.zf) goto L_1047c34b;
  /* 1047c373 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_1047c37a:;
  /* 1047c37a cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c37e jne 0x1047c3f6 */
  if (!C.zf) goto L_1047c3f6;
  /* 1047c380 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047c383 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c387 je 0x1047c3bc */
  if (C.zf) goto L_1047c3bc;
L_1047c389:;
  /* 1047c389 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047c38c mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1047c38f push edx */
  push32((uint32_t)(EDX));
  /* 1047c390 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047c393 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1047c396 push ecx */
  push32((uint32_t)(ECX));
  /* 1047c397 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1047c39a push edx */
  push32((uint32_t)(EDX));
  /* 1047c39b push 0x10029850 */
  push32((uint32_t)(0x10029850u));
  /* 1047c3a0 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c3a2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c3a4 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c3a6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c3a8 call 0x10479fd0 */
  push32(0x1047c3adu); f_10479fd0();
  /* 1047c3ad add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047c3b0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c3b3 jne 0x1047c3b6 */
  if (!C.zf) goto L_1047c3b6;
  /* 1047c3b5 int3  */
  x86_unimpl("int3 @ 0x1047c3b5");
L_1047c3b6:;
  /* 1047c3b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047c3b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047c3ba jne 0x1047c389 */
  if (!C.zf) goto L_1047c389;
L_1047c3bc:;
  /* 1047c3bc mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047c3bf mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1047c3c2 push edx */
  push32((uint32_t)(EDX));
  /* 1047c3c3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1047c3c6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047c3c9 push eax */
  push32((uint32_t)(EAX));
  /* 1047c3ca mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1047c3cd push ecx */
  push32((uint32_t)(ECX));
  /* 1047c3ce push 0x10029824 */
  push32((uint32_t)(0x10029824u));
  /* 1047c3d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c3d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c3d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c3d9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c3db call 0x10479fd0 */
  push32(0x1047c3e0u); f_10479fd0();
  /* 1047c3e0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047c3e3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c3e6 jne 0x1047c3e9 */
  if (!C.zf) goto L_1047c3e9;
  /* 1047c3e8 int3  */
  x86_unimpl("int3 @ 0x1047c3e8");
L_1047c3e9:;
  /* 1047c3e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1047c3eb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1047c3ed jne 0x1047c3bc */
  if (!C.zf) goto L_1047c3bc;
  /* 1047c3ef mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1047c3f6:;
  /* 1047c3f6 jmp 0x1047c203 */
  goto L_1047c203;
L_1047c3fb:;
  /* 1047c3fb push 9 */
  push32((uint32_t)(0x9u));
  /* 1047c3fd call 0x1047e9b0 */
  push32(0x1047c402u); f_1047e9b0();
  /* 1047c402 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047c405 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1047c408:;
  /* 1047c408 pop edi */
  EDI = (pop32());
  /* 1047c409 pop esi */
  ESI = (pop32());
  /* 1047c40a pop ebx */
  EBX = (pop32());
  /* 1047c40b mov esp, ebp */
  ESP = (EBP);
  /* 1047c40d pop ebp */
  EBP = (pop32());
  /* 1047c40e ret  */
  ESPCHK(0x1047c0b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c420 @ 0x1047c420 (34 bytes, 13 insns) */
void f_1047c420(void) {
  FTRACE(0x1047c420u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047c420 push ebp */
  push32((uint32_t)(EBP));
  /* 1047c421 mov ebp, esp */
  EBP = (ESP);
  /* 1047c423 push ecx */
  push32((uint32_t)(ECX));
  /* 1047c424 mov eax, dword ptr [0x1002ca84] */
  EAX = (r32((uint32_t)(0x1002ca84)));
  /* 1047c429 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1047c42c cmp dword ptr [ebp + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c430 je 0x1047c43b */
  if (C.zf) goto L_1047c43b;
  /* 1047c432 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047c435 mov dword ptr [0x1002ca84], ecx */
  w32((uint32_t)(0x1002ca84), (ECX));
L_1047c43b:;
  /* 1047c43b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047c43e mov esp, ebp */
  ESP = (EBP);
  /* 1047c440 pop ebp */
  EBP = (pop32());
  /* 1047c441 ret  */
  ESPCHK(0x1047c420u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c450 @ 0x1047c450 (103 bytes, 38 insns) */
void f_1047c450(void) {
  FTRACE(0x1047c450u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047c450 push ebp */
  push32((uint32_t)(EBP));
  /* 1047c451 mov ebp, esp */
  EBP = (ESP);
  /* 1047c453 push ecx */
  push32((uint32_t)(ECX));
  /* 1047c454 mov eax, dword ptr [0x1002ca84] */
  EAX = (r32((uint32_t)(0x1002ca84)));
  /* 1047c459 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1047c45c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047c45e jne 0x1047c462 */
  if (!C.zf) goto L_1047c462;
  /* 1047c460 jmp 0x1047c4b3 */
  goto L_1047c4b3;
L_1047c462:;
  /* 1047c462 push 9 */
  push32((uint32_t)(0x9u));
  /* 1047c464 call 0x1047e910 */
  push32(0x1047c469u); f_1047e910();
  /* 1047c469 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047c46c mov ecx, dword ptr [0x1002e4cc] */
  ECX = (r32((uint32_t)(0x1002e4cc)));
  /* 1047c472 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1047c475 jmp 0x1047c47f */
  goto L_1047c47f;
L_1047c477:;
  /* 1047c477 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047c47a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1047c47c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1047c47f:;
  /* 1047c47f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c483 je 0x1047c4a9 */
  if (C.zf) goto L_1047c4a9;
  /* 1047c485 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047c488 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 1047c48b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1047c491 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c494 jne 0x1047c4a7 */
  if (!C.zf) goto L_1047c4a7;
  /* 1047c496 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047c499 push eax */
  push32((uint32_t)(EAX));
  /* 1047c49a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047c49d add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1047c4a0 push ecx */
  push32((uint32_t)(ECX));
  /* 1047c4a1 call dword ptr [ebp + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + 0x8))), 0x1047c4a4u);
  /* 1047c4a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047c4a7:;
  /* 1047c4a7 jmp 0x1047c477 */
  goto L_1047c477;
L_1047c4a9:;
  /* 1047c4a9 push 9 */
  push32((uint32_t)(0x9u));
  /* 1047c4ab call 0x1047e9b0 */
  push32(0x1047c4b0u); f_1047e9b0();
  /* 1047c4b0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1047c4b3:;
  /* 1047c4b3 mov esp, ebp */
  ESP = (EBP);
  /* 1047c4b5 pop ebp */
  EBP = (pop32());
  /* 1047c4b6 ret  */
  ESPCHK(0x1047c450u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:AtlIsValidAddress @ 0x1047c4c0 (75 bytes, 28 insns) */
void f_1047c4c0(void) {
  FTRACE(0x1047c4c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047c4c0 push ebp */
  push32((uint32_t)(EBP));
  /* 1047c4c1 mov ebp, esp */
  EBP = (ESP);
  /* 1047c4c3 push ecx */
  push32((uint32_t)(ECX));
  /* 1047c4c4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c4c8 je 0x1047c4fd */
  if (C.zf) goto L_1047c4fd;
  /* 1047c4ca mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047c4cd push eax */
  push32((uint32_t)(EAX));
  /* 1047c4ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047c4d1 push ecx */
  push32((uint32_t)(ECX));
  /* 1047c4d2 call dword ptr [0x100302dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302dc))), 0x1047c4d8u);
  /* 1047c4d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047c4da jne 0x1047c4fd */
  if (!C.zf) goto L_1047c4fd;
  /* 1047c4dc cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c4e0 je 0x1047c4f4 */
  if (C.zf) goto L_1047c4f4;
  /* 1047c4e2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047c4e5 push edx */
  push32((uint32_t)(EDX));
  /* 1047c4e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047c4e9 push eax */
  push32((uint32_t)(EAX));
  /* 1047c4ea call dword ptr [0x100302d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x100302d8))), 0x1047c4f0u);
  /* 1047c4f0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047c4f2 jne 0x1047c4fd */
  if (!C.zf) goto L_1047c4fd;
L_1047c4f4:;
  /* 1047c4f4 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1047c4fb jmp 0x1047c504 */
  goto L_1047c504;
L_1047c4fd:;
  /* 1047c4fd mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1047c504:;
  /* 1047c504 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047c507 mov esp, ebp */
  ESP = (EBP);
  /* 1047c509 pop ebp */
  EBP = (pop32());
  /* 1047c50a ret  */
  ESPCHK(0x1047c4c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c510 @ 0x1047c510 (134 bytes, 50 insns) */
void f_1047c510(void) {
  FTRACE(0x1047c510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047c510 push ebp */
  push32((uint32_t)(EBP));
  /* 1047c511 mov ebp, esp */
  EBP = (ESP);
  /* 1047c513 push ecx */
  push32((uint32_t)(ECX));
  /* 1047c514 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c518 jne 0x1047c51e */
  if (!C.zf) goto L_1047c51e;
  /* 1047c51a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047c51c jmp 0x1047c592 */
  goto L_1047c592;
L_1047c51e:;
  /* 1047c51e push 1 */
  push32((uint32_t)(0x1u));
  /* 1047c520 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1047c522 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047c525 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047c528 push eax */
  push32((uint32_t)(EAX));
  /* 1047c529 call 0x1047c4c0 */
  push32(0x1047c52eu); f_1047c4c0();
  /* 1047c52e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047c531 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047c533 jne 0x1047c539 */
  if (!C.zf) goto L_1047c539;
  /* 1047c535 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047c537 jmp 0x1047c592 */
  goto L_1047c592;
L_1047c539:;
  /* 1047c539 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047c53c sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047c53f push ecx */
  push32((uint32_t)(ECX));
  /* 1047c540 call 0x1047f210 */
  push32(0x1047c545u); f_1047f210();
  /* 1047c545 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047c548 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1047c54b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c54f je 0x1047c566 */
  if (C.zf) goto L_1047c566;
  /* 1047c551 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047c554 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047c557 push edx */
  push32((uint32_t)(EDX));
  /* 1047c558 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047c55b push eax */
  push32((uint32_t)(EAX));
  /* 1047c55c call 0x1047f270 */
  push32(0x1047c561u); f_1047f270();
  /* 1047c561 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047c564 jmp 0x1047c592 */
  goto L_1047c592;
L_1047c566:;
  /* 1047c566 mov ecx, dword ptr [0x1002e480] */
  ECX = (r32((uint32_t)(0x1002e480)));
  /* 1047c56c and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1047c572 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1047c574 je 0x1047c57d */
  if (C.zf) goto L_1047c57d;
  /* 1047c576 mov eax, 1 */
  EAX = (0x1u);
  /* 1047c57b jmp 0x1047c592 */
  goto L_1047c592;
L_1047c57d:;
  /* 1047c57d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047c580 sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047c583 push edx */
  push32((uint32_t)(EDX));
  /* 1047c584 push 0 */
  push32((uint32_t)(0x0u));
  /* 1047c586 mov eax, dword ptr [0x1002fe2c] */
  EAX = (r32((uint32_t)(0x1002fe2c)));
  /* 1047c58b push eax */
  push32((uint32_t)(EAX));
  /* 1047c58c call dword ptr [0x10030234] */
  call_ind((uint32_t)(r32((uint32_t)(0x10030234))), 0x1047c592u);
L_1047c592:;
  /* 1047c592 mov esp, ebp */
  ESP = (EBP);
  /* 1047c594 pop ebp */
  EBP = (pop32());
  /* 1047c595 ret  */
  ESPCHK(0x1047c510u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c5a0 @ 0x1047c5a0 (227 bytes, 80 insns) */
void f_1047c5a0(void) {
  FTRACE(0x1047c5a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047c5a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1047c5a1 mov ebp, esp */
  EBP = (ESP);
  /* 1047c5a3 push ecx */
  push32((uint32_t)(ECX));
  /* 1047c5a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047c5a7 push eax */
  push32((uint32_t)(EAX));
  /* 1047c5a8 call 0x1047c510 */
  push32(0x1047c5adu); f_1047c510();
  /* 1047c5ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047c5b0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047c5b2 jne 0x1047c5bb */
  if (!C.zf) goto L_1047c5bb;
  /* 1047c5b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1047c5b6 jmp 0x1047c67f */
  goto L_1047c67f;
L_1047c5bb:;
  /* 1047c5bb push 9 */
  push32((uint32_t)(0x9u));
  /* 1047c5bd call 0x1047e910 */
  push32(0x1047c5c2u); f_1047e910();
  /* 1047c5c2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047c5c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047c5c8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1047c5cb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1047c5ce mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047c5d1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1047c5d4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1047c5d9 cmp eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c5dc je 0x1047c600 */
  if (C.zf) goto L_1047c600;
  /* 1047c5de mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047c5e1 cmp dword ptr [ecx + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c5e5 je 0x1047c600 */
  if (C.zf) goto L_1047c600;
  /* 1047c5e7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047c5ea mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1047c5ed and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1047c5f2 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c5f5 je 0x1047c600 */
  if (C.zf) goto L_1047c600;
  /* 1047c5f7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047c5fa cmp dword ptr [ecx + 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c5fe jne 0x1047c673 */
  if (!C.zf) goto L_1047c673;
L_1047c600:;
  /* 1047c600 push 1 */
  push32((uint32_t)(0x1u));
  /* 1047c602 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1047c605 push edx */
  push32((uint32_t)(EDX));
  /* 1047c606 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047c609 push eax */
  push32((uint32_t)(EAX));
  /* 1047c60a call 0x1047c4c0 */
  push32(0x1047c60fu); f_1047c4c0();
  /* 1047c60f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047c612 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1047c614 je 0x1047c673 */
  if (C.zf) goto L_1047c673;
  /* 1047c616 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047c619 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 1047c61c cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c61f jne 0x1047c673 */
  if (!C.zf) goto L_1047c673;
  /* 1047c621 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047c624 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 1047c627 cmp ecx, dword ptr [0x1002ca88] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1002ca88))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c62d jg 0x1047c673 */
  if ((!C.zf&&C.sf==C.of)) goto L_1047c673;
  /* 1047c62f cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c633 je 0x1047c640 */
  if (C.zf) goto L_1047c640;
  /* 1047c635 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1047c638 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047c63b mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 1047c63e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1047c640:;
  /* 1047c640 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c644 je 0x1047c651 */
  if (C.zf) goto L_1047c651;
  /* 1047c646 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 1047c649 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047c64c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1047c64f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1047c651:;
  /* 1047c651 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1047c655 je 0x1047c662 */
  if (C.zf) goto L_1047c662;
  /* 1047c657 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1047c65a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047c65d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1047c660 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_1047c662:;
  /* 1047c662 push 9 */
  push32((uint32_t)(0x9u));
  /* 1047c664 call 0x1047e9b0 */
  push32(0x1047c669u); f_1047e9b0();
  /* 1047c669 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047c66c mov eax, 1 */
  EAX = (0x1u);
  /* 1047c671 jmp 0x1047c67f */
  goto L_1047c67f;
L_1047c673:;
  /* 1047c673 push 9 */
  push32((uint32_t)(0x9u));
  /* 1047c675 call 0x1047e9b0 */
  push32(0x1047c67au); f_1047e9b0();
  /* 1047c67a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1047c67d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1047c67f:;
  /* 1047c67f mov esp, ebp */
  ESP = (EBP);
  /* 1047c681 pop ebp */
  EBP = (pop32());
  /* 1047c682 ret  */
  ESPCHK(0x1047c5a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1001c690 @ 0x1047c690 (28 bytes, 11 insns) */
void f_1047c690(void) {
  FTRACE(0x1047c690u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1047c690 push ebp */
  push32((uint32_t)(EBP));
  /* 1047c691 mov ebp, esp */
  EBP = (ESP);
  /* 1047c693 push ecx */
  push32((uint32_t)(ECX));
  /* 1047c694 mov eax, dword ptr [0x1002fe38] */
  EAX = (r32((uint32_t)(0x1002fe38)));
  /* 1047c699 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1047c69c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1047c69f mov dword ptr [0x1002fe38], ecx */
  w32((uint32_t)(0x1002fe38), (ECX));
  /* 1047c6a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1047c6a8 mov esp, ebp */
  ESP = (EBP);
  /* 1047c6aa pop ebp */
  EBP = (pop32());
  /* 1047c6ab ret  */
  ESPCHK(0x1047c690u, _esp0);
  ESP += 4; return;
}

