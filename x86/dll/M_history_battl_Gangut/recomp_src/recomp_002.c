#include "recomp.h"

/* FUN_1000d5e0 @ 0x1289d5e0 (349 bytes, 122 insns) */
void f_1289d5e0(void) {
  FTRACE(0x1289d5e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289d5e0 push ebp */
  push32((uint32_t)(EBP));
  /* 1289d5e1 mov ebp, esp */
  EBP = (ESP);
  /* 1289d5e3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289d5e6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1289d5eb push 0 */
  push32((uint32_t)(0x0u));
  /* 1289d5ed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289d5f0 push eax */
  push32((uint32_t)(EAX));
  /* 1289d5f1 call 0x12899580 */
  push32(0x1289d5f6u); f_12899580();
  /* 1289d5f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d5f9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289d5fc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1289d5ff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1289d601 jne 0x1289d60a */
  if (!C.zf) goto L_1289d60a;
  /* 1289d603 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289d605 jmp 0x1289d739 */
  goto L_1289d739;
L_1289d60a:;
  /* 1289d60a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289d60d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1289d610 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289d613 jne 0x1289d640 */
  if (!C.zf) goto L_1289d640;
  /* 1289d615 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289d618 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 1289d61c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289d61e je 0x1289d640 */
  if (C.zf) goto L_1289d640;
  /* 1289d620 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289d623 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d626 push ecx */
  push32((uint32_t)(ECX));
  /* 1289d627 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289d62a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d630 push edx */
  push32((uint32_t)(EDX));
  /* 1289d631 call 0x12897e10 */
  push32(0x1289d636u); f_12897e10();
  /* 1289d636 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d639 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289d63b jmp 0x1289d739 */
  goto L_1289d739;
L_1289d640:;
  /* 1289d640 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1289d647 jmp 0x1289d652 */
  goto L_1289d652;
L_1289d649:;
  /* 1289d649 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289d64c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d64f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1289d652:;
  /* 1289d652 push 0x128bb760 */
  push32((uint32_t)(0x128bb760u));
  /* 1289d657 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289d65a push ecx */
  push32((uint32_t)(ECX));
  /* 1289d65b call 0x1289f790 */
  push32(0x1289d660u); f_1289f790();
  /* 1289d660 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d663 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1289d666 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289d66a jne 0x1289d674 */
  if (!C.zf) goto L_1289d674;
  /* 1289d66c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1289d66f jmp 0x1289d739 */
  goto L_1289d739;
L_1289d674:;
  /* 1289d674 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289d677 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d67a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1289d67c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 1289d67f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289d683 jne 0x1289d6aa */
  if (!C.zf) goto L_1289d6aa;
  /* 1289d685 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289d689 jge 0x1289d6aa */
  if ((C.sf==C.of)) goto L_1289d6aa;
  /* 1289d68b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1289d68f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289d692 je 0x1289d6aa */
  if (C.zf) goto L_1289d6aa;
  /* 1289d694 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289d697 push edx */
  push32((uint32_t)(EDX));
  /* 1289d698 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289d69b push eax */
  push32((uint32_t)(EAX));
  /* 1289d69c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289d69f push ecx */
  push32((uint32_t)(ECX));
  /* 1289d6a0 call 0x12898680 */
  push32(0x1289d6a5u); f_12898680();
  /* 1289d6a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d6a8 jmp 0x1289d710 */
  goto L_1289d710;
L_1289d6aa:;
  /* 1289d6aa cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289d6ae jne 0x1289d6d8 */
  if (!C.zf) goto L_1289d6d8;
  /* 1289d6b0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289d6b4 jge 0x1289d6d8 */
  if ((C.sf==C.of)) goto L_1289d6d8;
  /* 1289d6b6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1289d6ba cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289d6bd je 0x1289d6d8 */
  if (C.zf) goto L_1289d6d8;
  /* 1289d6bf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289d6c2 push eax */
  push32((uint32_t)(EAX));
  /* 1289d6c3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289d6c6 push ecx */
  push32((uint32_t)(ECX));
  /* 1289d6c7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289d6ca add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d6cd push edx */
  push32((uint32_t)(EDX));
  /* 1289d6ce call 0x12898680 */
  push32(0x1289d6d3u); f_12898680();
  /* 1289d6d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d6d6 jmp 0x1289d710 */
  goto L_1289d710;
L_1289d6d8:;
  /* 1289d6d8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289d6dc jne 0x1289d70b */
  if (!C.zf) goto L_1289d70b;
  /* 1289d6de movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1289d6e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289d6e4 je 0x1289d6ef */
  if (C.zf) goto L_1289d6ef;
  /* 1289d6e6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1289d6ea cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289d6ed jne 0x1289d70b */
  if (!C.zf) goto L_1289d70b;
L_1289d6ef:;
  /* 1289d6ef mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289d6f2 push edx */
  push32((uint32_t)(EDX));
  /* 1289d6f3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289d6f6 push eax */
  push32((uint32_t)(EAX));
  /* 1289d6f7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289d6fa add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d700 push ecx */
  push32((uint32_t)(ECX));
  /* 1289d701 call 0x12898680 */
  push32(0x1289d706u); f_12898680();
  /* 1289d706 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d709 jmp 0x1289d710 */
  goto L_1289d710;
L_1289d70b:;
  /* 1289d70b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1289d70e jmp 0x1289d739 */
  goto L_1289d739;
L_1289d710:;
  /* 1289d710 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1289d714 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289d717 jne 0x1289d71b */
  if (!C.zf) goto L_1289d71b;
  /* 1289d719 jmp 0x1289d737 */
  goto L_1289d737;
L_1289d71b:;
  /* 1289d71b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 1289d71f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289d721 jne 0x1289d725 */
  if (!C.zf) goto L_1289d725;
  /* 1289d723 jmp 0x1289d737 */
  goto L_1289d737;
L_1289d725:;
  /* 1289d725 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289d728 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289d72b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 1289d72f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1289d732 jmp 0x1289d649 */
  goto L_1289d649;
L_1289d737:;
  /* 1289d737 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1289d739:;
  /* 1289d739 mov esp, ebp */
  ESP = (EBP);
  /* 1289d73b pop ebp */
  EBP = (pop32());
  /* 1289d73c ret  */
  ESPCHK(0x1289d5e0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x1289d740 (101 bytes, 36 insns) */
void f_1289d740(void) {
  FTRACE(0x1289d740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289d740 push ebp */
  push32((uint32_t)(EBP));
  /* 1289d741 mov ebp, esp */
  EBP = (ESP);
  /* 1289d743 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289d746 push eax */
  push32((uint32_t)(EAX));
  /* 1289d747 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289d74a push ecx */
  push32((uint32_t)(ECX));
  /* 1289d74b call 0x12897e10 */
  push32(0x1289d750u); f_12897e10();
  /* 1289d750 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d753 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289d756 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 1289d75a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289d75c je 0x1289d778 */
  if (C.zf) goto L_1289d778;
  /* 1289d75e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289d761 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d764 push ecx */
  push32((uint32_t)(ECX));
  /* 1289d765 push 0x128bb768 */
  push32((uint32_t)(0x128bb768u));
  /* 1289d76a push 2 */
  push32((uint32_t)(0x2u));
  /* 1289d76c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289d76f push edx */
  push32((uint32_t)(EDX));
  /* 1289d770 call 0x1289d590 */
  push32(0x1289d775u); f_1289d590();
  /* 1289d775 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1289d778:;
  /* 1289d778 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289d77b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 1289d782 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1289d784 je 0x1289d7a3 */
  if (C.zf) goto L_1289d7a3;
  /* 1289d786 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289d789 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d78f push edx */
  push32((uint32_t)(EDX));
  /* 1289d790 push 0x128bb764 */
  push32((uint32_t)(0x128bb764u));
  /* 1289d795 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289d797 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289d79a push eax */
  push32((uint32_t)(EAX));
  /* 1289d79b call 0x1289d590 */
  push32(0x1289d7a0u); f_1289d590();
  /* 1289d7a0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1289d7a3:;
  /* 1289d7a3 pop ebp */
  EBP = (pop32());
  /* 1289d7a4 ret  */
  ESPCHK(0x1289d740u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d7b0 @ 0x1289d7b0 (664 bytes, 258 insns) [15 switch table(s)] */
void f_1289d7b0(void) {
  FTRACE(0x1289d7b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289d7b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1289d7b1 mov ebp, esp */
  EBP = (ESP);
  /* 1289d7b3 push edi */
  push32((uint32_t)(EDI));
  /* 1289d7b4 push esi */
  push32((uint32_t)(ESI));
  /* 1289d7b5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1289d7b8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1289d7bb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1289d7be mov eax, ecx */
  EAX = (ECX);
  /* 1289d7c0 mov edx, ecx */
  EDX = (ECX);
  /* 1289d7c2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d7c4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289d7c6 jbe 0x1289d7d0 */
  if ((C.cf||C.zf)) goto L_1289d7d0;
  /* 1289d7c8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289d7ca jb 0x1289d948 */
  if (C.cf) goto L_1289d948;
L_1289d7d0:;
  /* 1289d7d0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1289d7d6 jne 0x1289d7ec */
  if (!C.zf) goto L_1289d7ec;
  /* 1289d7d8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1289d7db and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1289d7de cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289d7e1 jb 0x1289d80c */
  if (C.cf) goto L_1289d80c;
  /* 1289d7e3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1289d7e5 jmp dword ptr [edx*4 + 0x1289d8f8] */
  switch (EDX) {
    case 0: goto L_1289d908;
    case 1: goto L_1289d910;
    case 2: goto L_1289d91c;
    case 3: goto L_1289d930;
    default: x86_unimpl("switch@0x1289d7e5 out of table"); return;
  }
L_1289d7ec:;
  /* 1289d7ec mov eax, edi */
  EAX = (EDI);
  /* 1289d7ee mov edx, 3 */
  EDX = (0x3u);
  /* 1289d7f3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289d7f6 jb 0x1289d804 */
  if (C.cf) goto L_1289d804;
  /* 1289d7f8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1289d7fb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d7fd jmp dword ptr [eax*4 + 0x1289d810] */
  switch (EAX) {
    case 1: goto L_1289d820;
    case 2: goto L_1289d84c;
    case 3: goto L_1289d870;
    default: x86_unimpl("switch@0x1289d7fd out of table"); return;
  }
L_1289d804:;
  /* 1289d804 jmp dword ptr [ecx*4 + 0x1289d908] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1289d908)))); return;
  /* 1289d80b nop  */
  /* nop */
L_1289d80c:;
  /* 1289d80c jmp dword ptr [ecx*4 + 0x1289d88c] */
  switch (ECX) {
    case 0: goto L_1289d8ef;
    case 1: goto L_1289d8dc;
    case 2: goto L_1289d8d4;
    case 3: goto L_1289d8cc;
    case 4: goto L_1289d8c4;
    case 5: goto L_1289d8bc;
    case 6: goto L_1289d8b4;
    case 7: goto L_1289d8ac;
    default: x86_unimpl("switch@0x1289d80c out of table"); return;
  }
  /* 1289d813 nop  */
  /* nop */
L_1289d820:;
  /* 1289d820 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1289d822 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1289d824 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1289d826 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1289d829 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1289d82c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1289d82f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1289d832 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1289d835 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d838 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d83b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289d83e jb 0x1289d80c */
  if (C.cf) goto L_1289d80c;
  /* 1289d840 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1289d842 jmp dword ptr [edx*4 + 0x1289d8f8] */
  switch (EDX) {
    case 0: goto L_1289d908;
    case 1: goto L_1289d910;
    case 2: goto L_1289d91c;
    case 3: goto L_1289d930;
    default: x86_unimpl("switch@0x1289d842 out of table"); return;
  }
  /* 1289d849 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1289d84c:;
  /* 1289d84c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1289d84e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1289d850 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1289d852 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1289d855 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1289d858 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1289d85b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d85e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d861 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289d864 jb 0x1289d80c */
  if (C.cf) goto L_1289d80c;
  /* 1289d866 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1289d868 jmp dword ptr [edx*4 + 0x1289d8f8] */
  switch (EDX) {
    case 0: goto L_1289d908;
    case 1: goto L_1289d910;
    case 2: goto L_1289d91c;
    case 3: goto L_1289d930;
    default: x86_unimpl("switch@0x1289d868 out of table"); return;
  }
  /* 1289d86f nop  */
  /* nop */
L_1289d870:;
  /* 1289d870 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1289d872 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1289d874 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1289d876 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1289d877 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1289d87a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1289d87b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289d87e jb 0x1289d80c */
  if (C.cf) goto L_1289d80c;
  /* 1289d880 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1289d882 jmp dword ptr [edx*4 + 0x1289d8f8] */
  switch (EDX) {
    case 0: goto L_1289d908;
    case 1: goto L_1289d910;
    case 2: goto L_1289d91c;
    case 3: goto L_1289d930;
    default: x86_unimpl("switch@0x1289d882 out of table"); return;
  }
  /* 1289d889 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1289d8ac:;
  /* 1289d8ac mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1289d8b0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1289d8b4:;
  /* 1289d8b4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1289d8b8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1289d8bc:;
  /* 1289d8bc mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1289d8c0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1289d8c4:;
  /* 1289d8c4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1289d8c8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1289d8cc:;
  /* 1289d8cc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1289d8d0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1289d8d4:;
  /* 1289d8d4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1289d8d8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1289d8dc:;
  /* 1289d8dc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1289d8e0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1289d8e4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1289d8eb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1289d8ed add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1289d8ef:;
  /* 1289d8ef jmp dword ptr [edx*4 + 0x1289d8f8] */
  switch (EDX) {
    case 0: goto L_1289d908;
    case 1: goto L_1289d910;
    case 2: goto L_1289d91c;
    case 3: goto L_1289d930;
    default: x86_unimpl("switch@0x1289d8ef out of table"); return;
  }
  /* 1289d8f6 mov edi, edi */
  EDI = (EDI);
L_1289d908:;
  /* 1289d908 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289d90b pop esi */
  ESI = (pop32());
  /* 1289d90c pop edi */
  EDI = (pop32());
  /* 1289d90d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1289d90e ret  */
  ESPCHK(0x1289d7b0u, _esp0);
  ESP += 4; return;
  /* 1289d90f nop  */
  /* nop */
L_1289d910:;
  /* 1289d910 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1289d912 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1289d914 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289d917 pop esi */
  ESI = (pop32());
  /* 1289d918 pop edi */
  EDI = (pop32());
  /* 1289d919 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1289d91a ret  */
  ESPCHK(0x1289d7b0u, _esp0);
  ESP += 4; return;
  /* 1289d91b nop  */
  /* nop */
L_1289d91c:;
  /* 1289d91c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1289d91e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1289d920 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1289d923 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1289d926 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289d929 pop esi */
  ESI = (pop32());
  /* 1289d92a pop edi */
  EDI = (pop32());
  /* 1289d92b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1289d92c ret  */
  ESPCHK(0x1289d7b0u, _esp0);
  ESP += 4; return;
  /* 1289d92d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1289d930:;
  /* 1289d930 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1289d932 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1289d934 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1289d937 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1289d93a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1289d93d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1289d940 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289d943 pop esi */
  ESI = (pop32());
  /* 1289d944 pop edi */
  EDI = (pop32());
  /* 1289d945 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1289d946 ret  */
  ESPCHK(0x1289d7b0u, _esp0);
  ESP += 4; return;
  /* 1289d947 nop  */
  /* nop */
L_1289d948:;
  /* 1289d948 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1289d94c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1289d950 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1289d956 jne 0x1289d97c */
  if (!C.zf) goto L_1289d97c;
  /* 1289d958 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1289d95b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1289d95e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289d961 jb 0x1289d970 */
  if (C.cf) goto L_1289d970;
  /* 1289d963 std  */
  C.df=1;
  /* 1289d964 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1289d966 cld  */
  C.df=0;
  /* 1289d967 jmp dword ptr [edx*4 + 0x1289da90] */
  switch (EDX) {
    case 0: goto L_1289daa0;
    case 1: goto L_1289daa8;
    case 2: goto L_1289dab8;
    case 3: goto L_1289dacc;
    default: x86_unimpl("switch@0x1289d967 out of table"); return;
  }
  /* 1289d96e mov edi, edi */
  EDI = (EDI);
L_1289d970:;
  /* 1289d970 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1289d972 jmp dword ptr [ecx*4 + 0x1289da40] */
  switch (ECX) {
    case 0: goto L_1289da87;
    default: x86_unimpl("switch@0x1289d972 out of table"); return;
  }
  /* 1289d979 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1289d97c:;
  /* 1289d97c mov eax, edi */
  EAX = (EDI);
  /* 1289d97e mov edx, 3 */
  EDX = (0x3u);
  /* 1289d983 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289d986 jb 0x1289d994 */
  if (C.cf) goto L_1289d994;
  /* 1289d988 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1289d98b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289d98d jmp dword ptr [eax*4 + 0x1289d998] */
  switch (EAX) {
    case 1: goto L_1289d9a8;
    case 2: goto L_1289d9c8;
    case 3: goto L_1289d9f0;
    default: x86_unimpl("switch@0x1289d98d out of table"); return;
  }
L_1289d994:;
  /* 1289d994 jmp dword ptr [ecx*4 + 0x1289da90] */
  switch (ECX) {
    case 0: goto L_1289daa0;
    case 1: goto L_1289daa8;
    case 2: goto L_1289dab8;
    case 3: goto L_1289dacc;
    default: x86_unimpl("switch@0x1289d994 out of table"); return;
  }
  /* 1289d99b nop  */
  /* nop */
L_1289d9a8:;
  /* 1289d9a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1289d9ab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1289d9ad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1289d9b0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1289d9b1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1289d9b4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1289d9b5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289d9b8 jb 0x1289d970 */
  if (C.cf) goto L_1289d970;
  /* 1289d9ba std  */
  C.df=1;
  /* 1289d9bb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1289d9bd cld  */
  C.df=0;
  /* 1289d9be jmp dword ptr [edx*4 + 0x1289da90] */
  switch (EDX) {
    case 0: goto L_1289daa0;
    case 1: goto L_1289daa8;
    case 2: goto L_1289dab8;
    case 3: goto L_1289dacc;
    default: x86_unimpl("switch@0x1289d9be out of table"); return;
  }
  /* 1289d9c5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1289d9c8:;
  /* 1289d9c8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1289d9cb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1289d9cd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1289d9d0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1289d9d3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1289d9d6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1289d9d9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289d9dc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289d9df cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289d9e2 jb 0x1289d970 */
  if (C.cf) goto L_1289d970;
  /* 1289d9e4 std  */
  C.df=1;
  /* 1289d9e5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1289d9e7 cld  */
  C.df=0;
  /* 1289d9e8 jmp dword ptr [edx*4 + 0x1289da90] */
  switch (EDX) {
    case 0: goto L_1289daa0;
    case 1: goto L_1289daa8;
    case 2: goto L_1289dab8;
    case 3: goto L_1289dacc;
    default: x86_unimpl("switch@0x1289d9e8 out of table"); return;
  }
  /* 1289d9ef nop  */
  /* nop */
L_1289d9f0:;
  /* 1289d9f0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1289d9f3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1289d9f5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1289d9f8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1289d9fb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1289d9fe mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1289da01 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1289da04 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1289da07 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289da0a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289da0d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289da10 jb 0x1289d970 */
  if (C.cf) goto L_1289d970;
  /* 1289da16 std  */
  C.df=1;
  /* 1289da17 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1289da19 cld  */
  C.df=0;
  /* 1289da1a jmp dword ptr [edx*4 + 0x1289da90] */
  switch (EDX) {
    case 0: goto L_1289daa0;
    case 1: goto L_1289daa8;
    case 2: goto L_1289dab8;
    case 3: goto L_1289dacc;
    default: x86_unimpl("switch@0x1289da1a out of table"); return;
  }
  /* 1289da21 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1289da24 inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 1289da25 fimul dword ptr [ecx - 0x7625b3ee] */
  FPU_ST(0) = FPU_ST(0) * ((double)(int32_t)r32((uint32_t)(ECX + -0x7625b3ee)));
  /* 1289da2b adc dl, byte ptr [edx + ebx*8 - 0x77] */
  { uint32_t _a=(DL),_b=(r8((uint32_t)(EDX + EBX*8 + -0x77))),_r=_a+_b+C.cf; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 1289da2f adc bl, byte ptr [edx + ebx*8 - 0x77] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(EDX + EBX*8 + -0x77))),_r=_a+_b+C.cf; BL = (_r); fl_add(_a,_b,_r,8); }
  /* 1289da33 adc ah, byte ptr [edx + ebx*8 - 0x77] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(EDX + EBX*8 + -0x77))),_r=_a+_b+C.cf; AH = (_r); fl_add(_a,_b,_r,8); }
  /* 1289da37 adc ch, byte ptr [edx + ebx*8 - 0x77] */
  { uint32_t _a=(C.c.b.h),_b=(r8((uint32_t)(EDX + EBX*8 + -0x77))),_r=_a+_b+C.cf; C.c.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 1289da3b adc dh, byte ptr [edx + ebx*8 - 0x77] */
  { uint32_t _a=(C.d.b.h),_b=(r8((uint32_t)(EDX + EBX*8 + -0x77))),_r=_a+_b+C.cf; C.d.b.h = (_r); fl_add(_a,_b,_r,8); }
  /* 1289da44 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1289da48 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1289da4c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1289da50 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1289da54 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1289da58 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1289da5c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1289da60 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1289da64 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1289da68 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1289da6c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1289da70 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1289da74 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1289da78 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1289da7c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1289da83 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1289da85 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1289da87:;
  /* 1289da87 jmp dword ptr [edx*4 + 0x1289da90] */
  switch (EDX) {
    case 0: goto L_1289daa0;
    case 1: goto L_1289daa8;
    case 2: goto L_1289dab8;
    case 3: goto L_1289dacc;
    default: x86_unimpl("switch@0x1289da87 out of table"); return;
  }
  /* 1289da8e mov edi, edi */
  EDI = (EDI);
L_1289daa0:;
  /* 1289daa0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289daa3 pop esi */
  ESI = (pop32());
  /* 1289daa4 pop edi */
  EDI = (pop32());
  /* 1289daa5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1289daa6 ret  */
  ESPCHK(0x1289d7b0u, _esp0);
  ESP += 4; return;
  /* 1289daa7 nop  */
  /* nop */
L_1289daa8:;
  /* 1289daa8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1289daab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1289daae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289dab1 pop esi */
  ESI = (pop32());
  /* 1289dab2 pop edi */
  EDI = (pop32());
  /* 1289dab3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1289dab4 ret  */
  ESPCHK(0x1289d7b0u, _esp0);
  ESP += 4; return;
  /* 1289dab5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1289dab8:;
  /* 1289dab8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1289dabb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1289dabe mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1289dac1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1289dac4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289dac7 pop esi */
  ESI = (pop32());
  /* 1289dac8 pop edi */
  EDI = (pop32());
  /* 1289dac9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1289daca ret  */
  ESPCHK(0x1289d7b0u, _esp0);
  ESP += 4; return;
  /* 1289dacb nop  */
  /* nop */
L_1289dacc:;
  /* 1289dacc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1289dacf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1289dad2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1289dad5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1289dad8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1289dadb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1289dade mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289dae1 pop esi */
  ESI = (pop32());
  /* 1289dae2 pop edi */
  EDI = (pop32());
  /* 1289dae3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1289dae4 ret  */
  ESPCHK(0x1289d7b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000daf0 @ 0x1289daf0 (421 bytes, 148 insns) */
void f_1289daf0(void) {
  FTRACE(0x1289daf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289daf0 push ebp */
  push32((uint32_t)(EBP));
  /* 1289daf1 mov ebp, esp */
  EBP = (ESP);
  /* 1289daf3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1289daf5 push 0x128bb778 */
  push32((uint32_t)(0x128bb778u));
  /* 1289dafa push 0x128a06e0 */
  push32((uint32_t)(0x128a06e0u));
  /* 1289daff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1289db05 push eax */
  push32((uint32_t)(EAX));
  /* 1289db06 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1289db0d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289db10 push ebx */
  push32((uint32_t)(EBX));
  /* 1289db11 push esi */
  push32((uint32_t)(ESI));
  /* 1289db12 push edi */
  push32((uint32_t)(EDI));
  /* 1289db13 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1289db16 cmp dword ptr [0x128bf8c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf8c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289db1d jne 0x1289db6e */
  if (!C.zf) goto L_1289db6e;
  /* 1289db1f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1289db22 push eax */
  push32((uint32_t)(EAX));
  /* 1289db23 push 1 */
  push32((uint32_t)(0x1u));
  /* 1289db25 push 0x128bb770 */
  push32((uint32_t)(0x128bb770u));
  /* 1289db2a push 1 */
  push32((uint32_t)(0x1u));
  /* 1289db2c call dword ptr [0x128c22dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22dc))), 0x1289db32u);
  /* 1289db32 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289db34 je 0x1289db42 */
  if (C.zf) goto L_1289db42;
  /* 1289db36 mov dword ptr [0x128bf8c0], 1 */
  w32((uint32_t)(0x128bf8c0), (0x1u));
  /* 1289db40 jmp 0x1289db6e */
  goto L_1289db6e;
L_1289db42:;
  /* 1289db42 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 1289db45 push ecx */
  push32((uint32_t)(ECX));
  /* 1289db46 push 1 */
  push32((uint32_t)(0x1u));
  /* 1289db48 push 0x128bb76c */
  push32((uint32_t)(0x128bb76cu));
  /* 1289db4d push 1 */
  push32((uint32_t)(0x1u));
  /* 1289db4f push 0 */
  push32((uint32_t)(0x0u));
  /* 1289db51 call dword ptr [0x128c2290] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2290))), 0x1289db57u);
  /* 1289db57 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289db59 je 0x1289db67 */
  if (C.zf) goto L_1289db67;
  /* 1289db5b mov dword ptr [0x128bf8c0], 2 */
  w32((uint32_t)(0x128bf8c0), (0x2u));
  /* 1289db65 jmp 0x1289db6e */
  goto L_1289db6e;
L_1289db67:;
  /* 1289db67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289db69 jmp 0x1289dc98 */
  goto L_1289dc98;
L_1289db6e:;
  /* 1289db6e cmp dword ptr [0x128bf8c0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x128bf8c0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289db75 jne 0x1289dba5 */
  if (!C.zf) goto L_1289dba5;
  /* 1289db77 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289db7b jne 0x1289db86 */
  if (!C.zf) goto L_1289db86;
  /* 1289db7d mov edx, dword ptr [0x128bf8a8] */
  EDX = (r32((uint32_t)(0x128bf8a8)));
  /* 1289db83 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_1289db86:;
  /* 1289db86 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1289db89 push eax */
  push32((uint32_t)(EAX));
  /* 1289db8a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1289db8d push ecx */
  push32((uint32_t)(ECX));
  /* 1289db8e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289db91 push edx */
  push32((uint32_t)(EDX));
  /* 1289db92 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289db95 push eax */
  push32((uint32_t)(EAX));
  /* 1289db96 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1289db99 push ecx */
  push32((uint32_t)(ECX));
  /* 1289db9a call dword ptr [0x128c2290] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2290))), 0x1289dba0u);
  /* 1289dba0 jmp 0x1289dc98 */
  goto L_1289dc98;
L_1289dba5:;
  /* 1289dba5 cmp dword ptr [0x128bf8c0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x128bf8c0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289dbac jne 0x1289dc96 */
  if (!C.zf) goto L_1289dc96;
  /* 1289dbb2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289dbb6 jne 0x1289dbc1 */
  if (!C.zf) goto L_1289dbc1;
  /* 1289dbb8 mov edx, dword ptr [0x128bf8b8] */
  EDX = (r32((uint32_t)(0x128bf8b8)));
  /* 1289dbbe mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_1289dbc1:;
  /* 1289dbc1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1289dbc3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1289dbc5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1289dbc8 push eax */
  push32((uint32_t)(EAX));
  /* 1289dbc9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289dbcc push ecx */
  push32((uint32_t)(ECX));
  /* 1289dbcd mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1289dbd0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1289dbd2 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289dbd4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1289dbd7 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289dbda push edx */
  push32((uint32_t)(EDX));
  /* 1289dbdb mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1289dbde push eax */
  push32((uint32_t)(EAX));
  /* 1289dbdf call dword ptr [0x128c228c] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c228c))), 0x1289dbe5u);
  /* 1289dbe5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1289dbe8 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289dbec jne 0x1289dbf5 */
  if (!C.zf) goto L_1289dbf5;
  /* 1289dbee xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289dbf0 jmp 0x1289dc98 */
  goto L_1289dc98;
L_1289dbf5:;
  /* 1289dbf5 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1289dbfc mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1289dbff shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1289dc01 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289dc04 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1289dc06 call 0x12898000 */
  push32(0x1289dc0bu); f_12898000();
  /* 1289dc0b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 1289dc0e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1289dc11 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1289dc14 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1289dc17 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1289dc1a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1289dc1c push edx */
  push32((uint32_t)(EDX));
  /* 1289dc1d push 0 */
  push32((uint32_t)(0x0u));
  /* 1289dc1f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1289dc22 push eax */
  push32((uint32_t)(EAX));
  /* 1289dc23 call 0x12899580 */
  push32(0x1289dc28u); f_12899580();
  /* 1289dc28 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289dc2b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1289dc32 jmp 0x1289dc4b */
  goto L_1289dc4b;
  /* 1289dc34 mov eax, 1 */
  EAX = (0x1u);
  /* 1289dc39 ret  */
  ESPCHK(0x1289daf0u, _esp0);
  ESP += 4; return;
  /* 1289dc3a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1289dc3d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1289dc44 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1289dc4b:;
  /* 1289dc4b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289dc4f jne 0x1289dc55 */
  if (!C.zf) goto L_1289dc55;
  /* 1289dc51 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289dc53 jmp 0x1289dc98 */
  goto L_1289dc98;
L_1289dc55:;
  /* 1289dc55 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1289dc58 push ecx */
  push32((uint32_t)(ECX));
  /* 1289dc59 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1289dc5c push edx */
  push32((uint32_t)(EDX));
  /* 1289dc5d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1289dc60 push eax */
  push32((uint32_t)(EAX));
  /* 1289dc61 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289dc64 push ecx */
  push32((uint32_t)(ECX));
  /* 1289dc65 push 1 */
  push32((uint32_t)(0x1u));
  /* 1289dc67 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1289dc6a push edx */
  push32((uint32_t)(EDX));
  /* 1289dc6b call dword ptr [0x128c228c] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c228c))), 0x1289dc71u);
  /* 1289dc71 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1289dc74 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289dc78 jne 0x1289dc7e */
  if (!C.zf) goto L_1289dc7e;
  /* 1289dc7a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289dc7c jmp 0x1289dc98 */
  goto L_1289dc98;
L_1289dc7e:;
  /* 1289dc7e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1289dc81 push eax */
  push32((uint32_t)(EAX));
  /* 1289dc82 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1289dc85 push ecx */
  push32((uint32_t)(ECX));
  /* 1289dc86 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1289dc89 push edx */
  push32((uint32_t)(EDX));
  /* 1289dc8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289dc8d push eax */
  push32((uint32_t)(EAX));
  /* 1289dc8e call dword ptr [0x128c22dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22dc))), 0x1289dc94u);
  /* 1289dc94 jmp 0x1289dc98 */
  goto L_1289dc98;
L_1289dc96:;
  /* 1289dc96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1289dc98:;
  /* 1289dc98 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1289dc9b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289dc9e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1289dca5 pop edi */
  EDI = (pop32());
  /* 1289dca6 pop esi */
  ESI = (pop32());
  /* 1289dca7 pop ebx */
  EBX = (pop32());
  /* 1289dca8 mov esp, ebp */
  ESP = (EBP);
  /* 1289dcaa pop ebp */
  EBP = (pop32());
  /* 1289dcab ret  */
  ESPCHK(0x1289daf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dcb0 @ 0x1289dcb0 (727 bytes, 263 insns) */
void f_1289dcb0(void) {
  FTRACE(0x1289dcb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289dcb0 push ebp */
  push32((uint32_t)(EBP));
  /* 1289dcb1 mov ebp, esp */
  EBP = (ESP);
  /* 1289dcb3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1289dcb5 push 0x128bb788 */
  push32((uint32_t)(0x128bb788u));
  /* 1289dcba push 0x128a06e0 */
  push32((uint32_t)(0x128a06e0u));
  /* 1289dcbf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1289dcc5 push eax */
  push32((uint32_t)(EAX));
  /* 1289dcc6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1289dccd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289dcd0 push ebx */
  push32((uint32_t)(EBX));
  /* 1289dcd1 push esi */
  push32((uint32_t)(ESI));
  /* 1289dcd2 push edi */
  push32((uint32_t)(EDI));
  /* 1289dcd3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1289dcd6 cmp dword ptr [0x128bf8c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf8c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289dcdd jne 0x1289dd36 */
  if (!C.zf) goto L_1289dd36;
  /* 1289dcdf push 0 */
  push32((uint32_t)(0x0u));
  /* 1289dce1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1289dce3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1289dce5 push 0x128bb770 */
  push32((uint32_t)(0x128bb770u));
  /* 1289dcea push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1289dcef push 0 */
  push32((uint32_t)(0x0u));
  /* 1289dcf1 call dword ptr [0x128c22e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22e4))), 0x1289dcf7u);
  /* 1289dcf7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289dcf9 je 0x1289dd07 */
  if (C.zf) goto L_1289dd07;
  /* 1289dcfb mov dword ptr [0x128bf8c4], 1 */
  w32((uint32_t)(0x128bf8c4), (0x1u));
  /* 1289dd05 jmp 0x1289dd36 */
  goto L_1289dd36;
L_1289dd07:;
  /* 1289dd07 push 0 */
  push32((uint32_t)(0x0u));
  /* 1289dd09 push 0 */
  push32((uint32_t)(0x0u));
  /* 1289dd0b push 1 */
  push32((uint32_t)(0x1u));
  /* 1289dd0d push 0x128bb76c */
  push32((uint32_t)(0x128bb76cu));
  /* 1289dd12 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1289dd17 push 0 */
  push32((uint32_t)(0x0u));
  /* 1289dd19 call dword ptr [0x128c22e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22e0))), 0x1289dd1fu);
  /* 1289dd1f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289dd21 je 0x1289dd2f */
  if (C.zf) goto L_1289dd2f;
  /* 1289dd23 mov dword ptr [0x128bf8c4], 2 */
  w32((uint32_t)(0x128bf8c4), (0x2u));
  /* 1289dd2d jmp 0x1289dd36 */
  goto L_1289dd36;
L_1289dd2f:;
  /* 1289dd2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289dd31 jmp 0x1289dfa1 */
  goto L_1289dfa1;
L_1289dd36:;
  /* 1289dd36 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289dd3a jle 0x1289dd4f */
  if ((C.zf||C.sf!=C.of)) goto L_1289dd4f;
  /* 1289dd3c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1289dd3f push eax */
  push32((uint32_t)(EAX));
  /* 1289dd40 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1289dd43 push ecx */
  push32((uint32_t)(ECX));
  /* 1289dd44 call 0x1289dfc0 */
  push32(0x1289dd49u); f_1289dfc0();
  /* 1289dd49 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289dd4c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1289dd4f:;
  /* 1289dd4f cmp dword ptr [0x128bf8c4], 2 */
  { uint32_t _a=(r32((uint32_t)(0x128bf8c4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289dd56 jne 0x1289dd7b */
  if (!C.zf) goto L_1289dd7b;
  /* 1289dd58 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1289dd5b push edx */
  push32((uint32_t)(EDX));
  /* 1289dd5c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 1289dd5f push eax */
  push32((uint32_t)(EAX));
  /* 1289dd60 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1289dd63 push ecx */
  push32((uint32_t)(ECX));
  /* 1289dd64 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1289dd67 push edx */
  push32((uint32_t)(EDX));
  /* 1289dd68 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289dd6b push eax */
  push32((uint32_t)(EAX));
  /* 1289dd6c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289dd6f push ecx */
  push32((uint32_t)(ECX));
  /* 1289dd70 call dword ptr [0x128c22e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22e0))), 0x1289dd76u);
  /* 1289dd76 jmp 0x1289dfa1 */
  goto L_1289dfa1;
L_1289dd7b:;
  /* 1289dd7b cmp dword ptr [0x128bf8c4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x128bf8c4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289dd82 jne 0x1289df9f */
  if (!C.zf) goto L_1289df9f;
  /* 1289dd88 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289dd8c jne 0x1289dd97 */
  if (!C.zf) goto L_1289dd97;
  /* 1289dd8e mov edx, dword ptr [0x128bf8b8] */
  EDX = (r32((uint32_t)(0x128bf8b8)));
  /* 1289dd94 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_1289dd97:;
  /* 1289dd97 push 0 */
  push32((uint32_t)(0x0u));
  /* 1289dd99 push 0 */
  push32((uint32_t)(0x0u));
  /* 1289dd9b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1289dd9e push eax */
  push32((uint32_t)(EAX));
  /* 1289dd9f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1289dda2 push ecx */
  push32((uint32_t)(ECX));
  /* 1289dda3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 1289dda6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1289dda8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289ddaa and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 1289ddad add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ddb0 push edx */
  push32((uint32_t)(EDX));
  /* 1289ddb1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1289ddb4 push eax */
  push32((uint32_t)(EAX));
  /* 1289ddb5 call dword ptr [0x128c228c] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c228c))), 0x1289ddbbu);
  /* 1289ddbb mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1289ddbe cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289ddc2 jne 0x1289ddcb */
  if (!C.zf) goto L_1289ddcb;
  /* 1289ddc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289ddc6 jmp 0x1289dfa1 */
  goto L_1289dfa1;
L_1289ddcb:;
  /* 1289ddcb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 1289ddd2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1289ddd5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1289ddd7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ddda and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1289dddc call 0x12898000 */
  push32(0x1289dde1u); f_12898000();
  /* 1289dde1 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 1289dde4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1289dde7 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289ddea mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1289dded mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1289ddf4 jmp 0x1289de0d */
  goto L_1289de0d;
  /* 1289ddf6 mov eax, 1 */
  EAX = (0x1u);
  /* 1289ddfb ret  */
  ESPCHK(0x1289dcb0u, _esp0);
  ESP += 4; return;
  /* 1289ddfc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1289ddff mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 1289de06 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1289de0d:;
  /* 1289de0d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289de11 jne 0x1289de1a */
  if (!C.zf) goto L_1289de1a;
  /* 1289de13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289de15 jmp 0x1289dfa1 */
  goto L_1289dfa1;
L_1289de1a:;
  /* 1289de1a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1289de1d push edx */
  push32((uint32_t)(EDX));
  /* 1289de1e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1289de21 push eax */
  push32((uint32_t)(EAX));
  /* 1289de22 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 1289de25 push ecx */
  push32((uint32_t)(ECX));
  /* 1289de26 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1289de29 push edx */
  push32((uint32_t)(EDX));
  /* 1289de2a push 1 */
  push32((uint32_t)(0x1u));
  /* 1289de2c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1289de2f push eax */
  push32((uint32_t)(EAX));
  /* 1289de30 call dword ptr [0x128c228c] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c228c))), 0x1289de36u);
  /* 1289de36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289de38 jne 0x1289de41 */
  if (!C.zf) goto L_1289de41;
  /* 1289de3a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289de3c jmp 0x1289dfa1 */
  goto L_1289dfa1;
L_1289de41:;
  /* 1289de41 push 0 */
  push32((uint32_t)(0x0u));
  /* 1289de43 push 0 */
  push32((uint32_t)(0x0u));
  /* 1289de45 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1289de48 push ecx */
  push32((uint32_t)(ECX));
  /* 1289de49 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1289de4c push edx */
  push32((uint32_t)(EDX));
  /* 1289de4d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289de50 push eax */
  push32((uint32_t)(EAX));
  /* 1289de51 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289de54 push ecx */
  push32((uint32_t)(ECX));
  /* 1289de55 call dword ptr [0x128c22e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22e4))), 0x1289de5bu);
  /* 1289de5b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1289de5e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289de62 jne 0x1289de6b */
  if (!C.zf) goto L_1289de6b;
  /* 1289de64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289de66 jmp 0x1289dfa1 */
  goto L_1289dfa1;
L_1289de6b:;
  /* 1289de6b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289de6e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 1289de74 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1289de76 je 0x1289debb */
  if (C.zf) goto L_1289debb;
  /* 1289de78 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289de7c je 0x1289deb6 */
  if (C.zf) goto L_1289deb6;
  /* 1289de7e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1289de81 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289de84 jle 0x1289de8d */
  if ((C.zf||C.sf!=C.of)) goto L_1289de8d;
  /* 1289de86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289de88 jmp 0x1289dfa1 */
  goto L_1289dfa1;
L_1289de8d:;
  /* 1289de8d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1289de90 push ecx */
  push32((uint32_t)(ECX));
  /* 1289de91 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 1289de94 push edx */
  push32((uint32_t)(EDX));
  /* 1289de95 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1289de98 push eax */
  push32((uint32_t)(EAX));
  /* 1289de99 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1289de9c push ecx */
  push32((uint32_t)(ECX));
  /* 1289de9d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289dea0 push edx */
  push32((uint32_t)(EDX));
  /* 1289dea1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289dea4 push eax */
  push32((uint32_t)(EAX));
  /* 1289dea5 call dword ptr [0x128c22e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22e4))), 0x1289deabu);
  /* 1289deab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289dead jne 0x1289deb6 */
  if (!C.zf) goto L_1289deb6;
  /* 1289deaf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289deb1 jmp 0x1289dfa1 */
  goto L_1289dfa1;
L_1289deb6:;
  /* 1289deb6 jmp 0x1289df9a */
  goto L_1289df9a;
L_1289debb:;
  /* 1289debb mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1289debe mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 1289dec1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1289dec8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1289decb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1289decd add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ded0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1289ded2 call 0x12898000 */
  push32(0x1289ded7u); f_12898000();
  /* 1289ded7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 1289deda mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1289dedd mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 1289dee0 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 1289dee3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1289deea jmp 0x1289df03 */
  goto L_1289df03;
  /* 1289deec mov eax, 1 */
  EAX = (0x1u);
  /* 1289def1 ret  */
  ESPCHK(0x1289dcb0u, _esp0);
  ESP += 4; return;
  /* 1289def2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1289def5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1289defc mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1289df03:;
  /* 1289df03 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289df07 jne 0x1289df10 */
  if (!C.zf) goto L_1289df10;
  /* 1289df09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289df0b jmp 0x1289dfa1 */
  goto L_1289dfa1;
L_1289df10:;
  /* 1289df10 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1289df13 push eax */
  push32((uint32_t)(EAX));
  /* 1289df14 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1289df17 push ecx */
  push32((uint32_t)(ECX));
  /* 1289df18 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1289df1b push edx */
  push32((uint32_t)(EDX));
  /* 1289df1c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1289df1f push eax */
  push32((uint32_t)(EAX));
  /* 1289df20 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289df23 push ecx */
  push32((uint32_t)(ECX));
  /* 1289df24 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289df27 push edx */
  push32((uint32_t)(EDX));
  /* 1289df28 call dword ptr [0x128c22e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22e4))), 0x1289df2eu);
  /* 1289df2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289df30 jne 0x1289df36 */
  if (!C.zf) goto L_1289df36;
  /* 1289df32 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289df34 jmp 0x1289dfa1 */
  goto L_1289dfa1;
L_1289df36:;
  /* 1289df36 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289df3a jne 0x1289df6a */
  if (!C.zf) goto L_1289df6a;
  /* 1289df3c push 0 */
  push32((uint32_t)(0x0u));
  /* 1289df3e push 0 */
  push32((uint32_t)(0x0u));
  /* 1289df40 push 0 */
  push32((uint32_t)(0x0u));
  /* 1289df42 push 0 */
  push32((uint32_t)(0x0u));
  /* 1289df44 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1289df47 push eax */
  push32((uint32_t)(EAX));
  /* 1289df48 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1289df4b push ecx */
  push32((uint32_t)(ECX));
  /* 1289df4c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1289df51 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 1289df54 push edx */
  push32((uint32_t)(EDX));
  /* 1289df55 call dword ptr [0x128c227c] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c227c))), 0x1289df5bu);
  /* 1289df5b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1289df5e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289df62 jne 0x1289df68 */
  if (!C.zf) goto L_1289df68;
  /* 1289df64 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289df66 jmp 0x1289dfa1 */
  goto L_1289dfa1;
L_1289df68:;
  /* 1289df68 jmp 0x1289df9a */
  goto L_1289df9a;
L_1289df6a:;
  /* 1289df6a push 0 */
  push32((uint32_t)(0x0u));
  /* 1289df6c push 0 */
  push32((uint32_t)(0x0u));
  /* 1289df6e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1289df71 push eax */
  push32((uint32_t)(EAX));
  /* 1289df72 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 1289df75 push ecx */
  push32((uint32_t)(ECX));
  /* 1289df76 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1289df79 push edx */
  push32((uint32_t)(EDX));
  /* 1289df7a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 1289df7d push eax */
  push32((uint32_t)(EAX));
  /* 1289df7e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1289df83 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 1289df86 push ecx */
  push32((uint32_t)(ECX));
  /* 1289df87 call dword ptr [0x128c227c] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c227c))), 0x1289df8du);
  /* 1289df8d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1289df90 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289df94 jne 0x1289df9a */
  if (!C.zf) goto L_1289df9a;
  /* 1289df96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289df98 jmp 0x1289dfa1 */
  goto L_1289dfa1;
L_1289df9a:;
  /* 1289df9a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1289df9d jmp 0x1289dfa1 */
  goto L_1289dfa1;
L_1289df9f:;
  /* 1289df9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1289dfa1:;
  /* 1289dfa1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 1289dfa4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1289dfa7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1289dfae pop edi */
  EDI = (pop32());
  /* 1289dfaf pop esi */
  ESI = (pop32());
  /* 1289dfb0 pop ebx */
  EBX = (pop32());
  /* 1289dfb1 mov esp, ebp */
  ESP = (EBP);
  /* 1289dfb3 pop ebp */
  EBP = (pop32());
  /* 1289dfb4 ret  */
  ESPCHK(0x1289dcb0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dfc0 @ 0x1289dfc0 (80 bytes, 32 insns) */
void f_1289dfc0(void) {
  FTRACE(0x1289dfc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289dfc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1289dfc1 mov ebp, esp */
  EBP = (ESP);
  /* 1289dfc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289dfc6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289dfc9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1289dfcc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289dfcf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_1289dfd2:;
  /* 1289dfd2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289dfd5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289dfd8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289dfdb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1289dfde test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1289dfe0 je 0x1289dff7 */
  if (C.zf) goto L_1289dff7;
  /* 1289dfe2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289dfe5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1289dfe8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1289dfea je 0x1289dff7 */
  if (C.zf) goto L_1289dff7;
  /* 1289dfec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289dfef add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289dff2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1289dff5 jmp 0x1289dfd2 */
  goto L_1289dfd2;
L_1289dff7:;
  /* 1289dff7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289dffa movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1289dffd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1289dfff jne 0x1289e009 */
  if (!C.zf) goto L_1289e009;
  /* 1289e001 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289e004 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289e007 jmp 0x1289e00c */
  goto L_1289e00c;
L_1289e009:;
  /* 1289e009 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_1289e00c:;
  /* 1289e00c mov esp, ebp */
  ESP = (EBP);
  /* 1289e00e pop ebp */
  EBP = (pop32());
  /* 1289e00f ret  */
  ESPCHK(0x1289dfc0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e010 @ 0x1289e010 (130 bytes, 50 insns) */
void f_1289e010(void) {
  FTRACE(0x1289e010u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289e010 push ebp */
  push32((uint32_t)(EBP));
  /* 1289e011 mov ebp, esp */
  EBP = (ESP);
  /* 1289e013 push ecx */
  push32((uint32_t)(ECX));
  /* 1289e014 push ebx */
  push32((uint32_t)(EBX));
  /* 1289e015 push esi */
  push32((uint32_t)(ESI));
  /* 1289e016 push edi */
  push32((uint32_t)(EDI));
  /* 1289e017 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1289e01e:;
  /* 1289e01e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289e022 jne 0x1289e042 */
  if (!C.zf) goto L_1289e042;
  /* 1289e024 push 0x128bb7ac */
  push32((uint32_t)(0x128bb7acu));
  /* 1289e029 push 0 */
  push32((uint32_t)(0x0u));
  /* 1289e02b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1289e02d push 0x128bb7a0 */
  push32((uint32_t)(0x128bb7a0u));
  /* 1289e032 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289e034 call 0x12892e00 */
  push32(0x1289e039u); f_12892e00();
  /* 1289e039 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e03c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289e03f jne 0x1289e042 */
  if (!C.zf) goto L_1289e042;
  /* 1289e041 int3  */
  x86_unimpl("int3 @ 0x1289e041");
L_1289e042:;
  /* 1289e042 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289e044 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289e046 jne 0x1289e01e */
  if (!C.zf) goto L_1289e01e;
  /* 1289e048 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e04b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1289e04e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 1289e051 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1289e053 je 0x1289e061 */
  if (C.zf) goto L_1289e061;
  /* 1289e055 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e058 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1289e05f jmp 0x1289e088 */
  goto L_1289e088;
L_1289e061:;
  /* 1289e061 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e064 push ecx */
  push32((uint32_t)(ECX));
  /* 1289e065 call 0x12898e40 */
  push32(0x1289e06au); f_12898e40();
  /* 1289e06a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e06d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e070 push edx */
  push32((uint32_t)(EDX));
  /* 1289e071 call 0x1289e0a0 */
  push32(0x1289e076u); f_1289e0a0();
  /* 1289e076 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e079 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1289e07c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e07f push eax */
  push32((uint32_t)(EAX));
  /* 1289e080 call 0x12898eb0 */
  push32(0x1289e085u); f_12898eb0();
  /* 1289e085 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1289e088:;
  /* 1289e088 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289e08b pop edi */
  EDI = (pop32());
  /* 1289e08c pop esi */
  ESI = (pop32());
  /* 1289e08d pop ebx */
  EBX = (pop32());
  /* 1289e08e mov esp, ebp */
  ESP = (EBP);
  /* 1289e090 pop ebp */
  EBP = (pop32());
  /* 1289e091 ret  */
  ESPCHK(0x1289e010u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e0a0 @ 0x1289e0a0 (190 bytes, 67 insns) */
void f_1289e0a0(void) {
  FTRACE(0x1289e0a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289e0a0 push ebp */
  push32((uint32_t)(EBP));
  /* 1289e0a1 mov ebp, esp */
  EBP = (ESP);
  /* 1289e0a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289e0a6 push ebx */
  push32((uint32_t)(EBX));
  /* 1289e0a7 push esi */
  push32((uint32_t)(ESI));
  /* 1289e0a8 push edi */
  push32((uint32_t)(EDI));
  /* 1289e0a9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1289e0b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e0b3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1289e0b6:;
  /* 1289e0b6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289e0ba jne 0x1289e0da */
  if (!C.zf) goto L_1289e0da;
  /* 1289e0bc push 0x128babc8 */
  push32((uint32_t)(0x128babc8u));
  /* 1289e0c1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1289e0c3 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 1289e0c5 push 0x128bb7a0 */
  push32((uint32_t)(0x128bb7a0u));
  /* 1289e0ca push 2 */
  push32((uint32_t)(0x2u));
  /* 1289e0cc call 0x12892e00 */
  push32(0x1289e0d1u); f_12892e00();
  /* 1289e0d1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e0d4 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289e0d7 jne 0x1289e0da */
  if (!C.zf) goto L_1289e0da;
  /* 1289e0d9 int3  */
  x86_unimpl("int3 @ 0x1289e0d9");
L_1289e0da:;
  /* 1289e0da xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1289e0dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1289e0de jne 0x1289e0b6 */
  if (!C.zf) goto L_1289e0b6;
  /* 1289e0e0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289e0e3 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 1289e0e6 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 1289e0eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289e0ed je 0x1289e14a */
  if (C.zf) goto L_1289e14a;
  /* 1289e0ef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289e0f2 push ecx */
  push32((uint32_t)(ECX));
  /* 1289e0f3 call 0x1289cb40 */
  push32(0x1289e0f8u); f_1289cb40();
  /* 1289e0f8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e0fb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1289e0fe mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289e101 push edx */
  push32((uint32_t)(EDX));
  /* 1289e102 call 0x128a08f0 */
  push32(0x1289e107u); f_128a08f0();
  /* 1289e107 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e10a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289e10d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1289e110 push ecx */
  push32((uint32_t)(ECX));
  /* 1289e111 call 0x128a07c0 */
  push32(0x1289e116u); f_128a07c0();
  /* 1289e116 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e119 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289e11b jge 0x1289e126 */
  if ((C.sf==C.of)) goto L_1289e126;
  /* 1289e11d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 1289e124 jmp 0x1289e14a */
  goto L_1289e14a;
L_1289e126:;
  /* 1289e126 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289e129 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289e12d je 0x1289e14a */
  if (C.zf) goto L_1289e14a;
  /* 1289e12f push 2 */
  push32((uint32_t)(0x2u));
  /* 1289e131 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289e134 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1289e137 push ecx */
  push32((uint32_t)(ECX));
  /* 1289e138 call 0x128958f0 */
  push32(0x1289e13du); f_128958f0();
  /* 1289e13d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e140 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289e143 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_1289e14a:;
  /* 1289e14a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289e14d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 1289e154 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289e157 pop edi */
  EDI = (pop32());
  /* 1289e158 pop esi */
  ESI = (pop32());
  /* 1289e159 pop ebx */
  EBX = (pop32());
  /* 1289e15a mov esp, ebp */
  ESP = (EBP);
  /* 1289e15c pop ebp */
  EBP = (pop32());
  /* 1289e15d ret  */
  ESPCHK(0x1289e0a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e160 @ 0x1289e160 (210 bytes, 63 insns) */
void f_1289e160(void) {
  FTRACE(0x1289e160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289e160 push ebp */
  push32((uint32_t)(EBP));
  /* 1289e161 mov ebp, esp */
  EBP = (ESP);
  /* 1289e163 push ecx */
  push32((uint32_t)(ECX));
  /* 1289e164 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e167 cmp eax, dword ptr [0x128c119c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x128c119c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289e16d jae 0x1289e191 */
  if (!C.cf) goto L_1289e191;
  /* 1289e16f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e172 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1289e175 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e178 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 1289e17b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1289e17e mov eax, dword ptr [ecx*4 + 0x128c1060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x128c1060)));
  /* 1289e185 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 1289e18a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1289e18d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1289e18f jne 0x1289e1a4 */
  if (!C.zf) goto L_1289e1a4;
L_1289e191:;
  /* 1289e191 call 0x1289c3d0 */
  push32(0x1289e196u); f_1289c3d0();
  /* 1289e196 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1289e19c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1289e19f jmp 0x1289e22e */
  goto L_1289e22e;
L_1289e1a4:;
  /* 1289e1a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e1a7 push edx */
  push32((uint32_t)(EDX));
  /* 1289e1a8 call 0x1289c900 */
  push32(0x1289e1adu); f_1289c900();
  /* 1289e1ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e1b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e1b3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1289e1b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e1b9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 1289e1bc imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1289e1bf mov edx, dword ptr [eax*4 + 0x128c1060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x128c1060)));
  /* 1289e1c6 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 1289e1cb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 1289e1ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289e1d0 je 0x1289e20d */
  if (C.zf) goto L_1289e20d;
  /* 1289e1d2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e1d5 push ecx */
  push32((uint32_t)(ECX));
  /* 1289e1d6 call 0x1289c780 */
  push32(0x1289e1dbu); f_1289c780();
  /* 1289e1db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e1de push eax */
  push32((uint32_t)(EAX));
  /* 1289e1df call dword ptr [0x128c22e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22e8))), 0x1289e1e5u);
  /* 1289e1e5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289e1e7 jne 0x1289e1f4 */
  if (!C.zf) goto L_1289e1f4;
  /* 1289e1e9 call dword ptr [0x128c2250] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2250))), 0x1289e1efu);
  /* 1289e1ef mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1289e1f2 jmp 0x1289e1fb */
  goto L_1289e1fb;
L_1289e1f4:;
  /* 1289e1f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_1289e1fb:;
  /* 1289e1fb cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289e1ff jne 0x1289e203 */
  if (!C.zf) goto L_1289e203;
  /* 1289e201 jmp 0x1289e21f */
  goto L_1289e21f;
L_1289e203:;
  /* 1289e203 call 0x1289c3e0 */
  push32(0x1289e208u); f_1289c3e0();
  /* 1289e208 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289e20b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_1289e20d:;
  /* 1289e20d call 0x1289c3d0 */
  push32(0x1289e212u); f_1289c3d0();
  /* 1289e212 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1289e218 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_1289e21f:;
  /* 1289e21f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e222 push eax */
  push32((uint32_t)(EAX));
  /* 1289e223 call 0x1289c990 */
  push32(0x1289e228u); f_1289c990();
  /* 1289e228 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e22b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1289e22e:;
  /* 1289e22e mov esp, ebp */
  ESP = (EBP);
  /* 1289e230 pop ebp */
  EBP = (pop32());
  /* 1289e231 ret  */
  ESPCHK(0x1289e160u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x1289e240 (219 bytes, 64 insns) */
void f_1289e240(void) {
  FTRACE(0x1289e240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289e240 push ebp */
  push32((uint32_t)(EBP));
  /* 1289e241 mov ebp, esp */
  EBP = (ESP);
  /* 1289e243 push ecx */
  push32((uint32_t)(ECX));
  /* 1289e244 cmp dword ptr [0x128bf8b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf8b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289e24b je 0x1289e2e1 */
  if (C.zf) goto L_1289e2e1;
  /* 1289e251 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1289e253 push 0x128bb7bc */
  push32((uint32_t)(0x128bb7bcu));
  /* 1289e258 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289e25a push 0xac */
  push32((uint32_t)(0xacu));
  /* 1289e25f push 1 */
  push32((uint32_t)(0x1u));
  /* 1289e261 call 0x12895270 */
  push32(0x1289e266u); f_12895270();
  /* 1289e266 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e269 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1289e26c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289e270 jne 0x1289e27c */
  if (!C.zf) goto L_1289e27c;
  /* 1289e272 mov eax, 1 */
  EAX = (0x1u);
  /* 1289e277 jmp 0x1289e317 */
  goto L_1289e317;
L_1289e27c:;
  /* 1289e27c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289e27f push eax */
  push32((uint32_t)(EAX));
  /* 1289e280 call 0x1289e320 */
  push32(0x1289e285u); f_1289e320();
  /* 1289e285 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e288 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289e28a je 0x1289e2ad */
  if (C.zf) goto L_1289e2ad;
  /* 1289e28c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289e28f push ecx */
  push32((uint32_t)(ECX));
  /* 1289e290 call 0x1289e8b0 */
  push32(0x1289e295u); f_1289e8b0();
  /* 1289e295 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e298 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289e29a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289e29d push edx */
  push32((uint32_t)(EDX));
  /* 1289e29e call 0x128958f0 */
  push32(0x1289e2a3u); f_128958f0();
  /* 1289e2a3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e2a6 mov eax, 1 */
  EAX = (0x1u);
  /* 1289e2ab jmp 0x1289e317 */
  goto L_1289e317;
L_1289e2ad:;
  /* 1289e2ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289e2b0 mov dword ptr [0x128beca8], eax */
  w32((uint32_t)(0x128beca8), (EAX));
  /* 1289e2b5 mov ecx, dword ptr [0x128bf8c8] */
  ECX = (r32((uint32_t)(0x128bf8c8)));
  /* 1289e2bb push ecx */
  push32((uint32_t)(ECX));
  /* 1289e2bc call 0x1289e8b0 */
  push32(0x1289e2c1u); f_1289e8b0();
  /* 1289e2c1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e2c4 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289e2c6 mov edx, dword ptr [0x128bf8c8] */
  EDX = (r32((uint32_t)(0x128bf8c8)));
  /* 1289e2cc push edx */
  push32((uint32_t)(EDX));
  /* 1289e2cd call 0x128958f0 */
  push32(0x1289e2d2u); f_128958f0();
  /* 1289e2d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e2d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289e2d8 mov dword ptr [0x128bf8c8], eax */
  w32((uint32_t)(0x128bf8c8), (EAX));
  /* 1289e2dd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289e2df jmp 0x1289e317 */
  goto L_1289e317;
L_1289e2e1:;
  /* 1289e2e1 mov dword ptr [0x128beca8], 0x128becb0 */
  w32((uint32_t)(0x128beca8), (0x128becb0u));
  /* 1289e2eb mov ecx, dword ptr [0x128bf8c8] */
  ECX = (r32((uint32_t)(0x128bf8c8)));
  /* 1289e2f1 push ecx */
  push32((uint32_t)(ECX));
  /* 1289e2f2 call 0x1289e8b0 */
  push32(0x1289e2f7u); f_1289e8b0();
  /* 1289e2f7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e2fa push 2 */
  push32((uint32_t)(0x2u));
  /* 1289e2fc mov edx, dword ptr [0x128bf8c8] */
  EDX = (r32((uint32_t)(0x128bf8c8)));
  /* 1289e302 push edx */
  push32((uint32_t)(EDX));
  /* 1289e303 call 0x128958f0 */
  push32(0x1289e308u); f_128958f0();
  /* 1289e308 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e30b mov dword ptr [0x128bf8c8], 0 */
  w32((uint32_t)(0x128bf8c8), (0x0u));
  /* 1289e315 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1289e317:;
  /* 1289e317 mov esp, ebp */
  ESP = (EBP);
  /* 1289e319 pop ebp */
  EBP = (pop32());
  /* 1289e31a ret  */
  ESPCHK(0x1289e240u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e320 @ 0x1289e320 (1423 bytes, 533 insns) */
void f_1289e320(void) {
  FTRACE(0x1289e320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289e320 push ebp */
  push32((uint32_t)(EBP));
  /* 1289e321 mov ebp, esp */
  EBP = (ESP);
  /* 1289e323 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289e326 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 1289e32d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289e32f mov ax, word ptr [0x128bf902] */
  AX = (r16((uint32_t)(0x128bf902)));
  /* 1289e335 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1289e338 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1289e33a mov cx, word ptr [0x128bf904] */
  CX = (r16((uint32_t)(0x128bf904)));
  /* 1289e341 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1289e344 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289e348 jne 0x1289e352 */
  if (!C.zf) goto L_1289e352;
  /* 1289e34a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1289e34d jmp 0x1289e8ab */
  goto L_1289e8ab;
L_1289e352:;
  /* 1289e352 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e355 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e358 push edx */
  push32((uint32_t)(EDX));
  /* 1289e359 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 1289e35b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289e35e push eax */
  push32((uint32_t)(EAX));
  /* 1289e35f push 1 */
  push32((uint32_t)(0x1u));
  /* 1289e361 call 0x128a1e00 */
  push32(0x1289e366u); f_128a1e00();
  /* 1289e366 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e369 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289e36c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289e36e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1289e371 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e374 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e377 push edx */
  push32((uint32_t)(EDX));
  /* 1289e378 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 1289e37a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289e37d push eax */
  push32((uint32_t)(EAX));
  /* 1289e37e push 1 */
  push32((uint32_t)(0x1u));
  /* 1289e380 call 0x128a1e00 */
  push32(0x1289e385u); f_128a1e00();
  /* 1289e385 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e388 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289e38b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289e38d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1289e390 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e393 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e396 push edx */
  push32((uint32_t)(EDX));
  /* 1289e397 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 1289e399 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289e39c push eax */
  push32((uint32_t)(EAX));
  /* 1289e39d push 1 */
  push32((uint32_t)(0x1u));
  /* 1289e39f call 0x128a1e00 */
  push32(0x1289e3a4u); f_128a1e00();
  /* 1289e3a4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e3a7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289e3aa or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289e3ac mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1289e3af mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e3b2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e3b5 push edx */
  push32((uint32_t)(EDX));
  /* 1289e3b6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 1289e3b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289e3bb push eax */
  push32((uint32_t)(EAX));
  /* 1289e3bc push 1 */
  push32((uint32_t)(0x1u));
  /* 1289e3be call 0x128a1e00 */
  push32(0x1289e3c3u); f_128a1e00();
  /* 1289e3c3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e3c6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289e3c9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289e3cb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1289e3ce mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e3d1 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e3d4 push edx */
  push32((uint32_t)(EDX));
  /* 1289e3d5 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 1289e3d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289e3da push eax */
  push32((uint32_t)(EAX));
  /* 1289e3db push 1 */
  push32((uint32_t)(0x1u));
  /* 1289e3dd call 0x128a1e00 */
  push32(0x1289e3e2u); f_128a1e00();
  /* 1289e3e2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e3e5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289e3e8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289e3ea mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1289e3ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e3f0 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e3f3 push edx */
  push32((uint32_t)(EDX));
  /* 1289e3f4 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 1289e3f6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289e3f9 push eax */
  push32((uint32_t)(EAX));
  /* 1289e3fa push 1 */
  push32((uint32_t)(0x1u));
  /* 1289e3fc call 0x128a1e00 */
  push32(0x1289e401u); f_128a1e00();
  /* 1289e401 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e404 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289e407 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289e409 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1289e40c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e40f push edx */
  push32((uint32_t)(EDX));
  /* 1289e410 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 1289e412 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289e415 push eax */
  push32((uint32_t)(EAX));
  /* 1289e416 push 1 */
  push32((uint32_t)(0x1u));
  /* 1289e418 call 0x128a1e00 */
  push32(0x1289e41du); f_128a1e00();
  /* 1289e41d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e420 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289e423 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289e425 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1289e428 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e42b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e42e push edx */
  push32((uint32_t)(EDX));
  /* 1289e42f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 1289e431 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289e434 push eax */
  push32((uint32_t)(EAX));
  /* 1289e435 push 1 */
  push32((uint32_t)(0x1u));
  /* 1289e437 call 0x128a1e00 */
  push32(0x1289e43cu); f_128a1e00();
  /* 1289e43c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e43f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289e442 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289e444 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1289e447 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e44a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e44d push edx */
  push32((uint32_t)(EDX));
  /* 1289e44e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 1289e450 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289e453 push eax */
  push32((uint32_t)(EAX));
  /* 1289e454 push 1 */
  push32((uint32_t)(0x1u));
  /* 1289e456 call 0x128a1e00 */
  push32(0x1289e45bu); f_128a1e00();
  /* 1289e45b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e45e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289e461 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289e463 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1289e466 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e469 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e46c push edx */
  push32((uint32_t)(EDX));
  /* 1289e46d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 1289e46f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289e472 push eax */
  push32((uint32_t)(EAX));
  /* 1289e473 push 1 */
  push32((uint32_t)(0x1u));
  /* 1289e475 call 0x128a1e00 */
  push32(0x1289e47au); f_128a1e00();
  /* 1289e47a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e47d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289e480 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289e482 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1289e485 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e488 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e48b push edx */
  push32((uint32_t)(EDX));
  /* 1289e48c push 0x2d */
  push32((uint32_t)(0x2du));
  /* 1289e48e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289e491 push eax */
  push32((uint32_t)(EAX));
  /* 1289e492 push 1 */
  push32((uint32_t)(0x1u));
  /* 1289e494 call 0x128a1e00 */
  push32(0x1289e499u); f_128a1e00();
  /* 1289e499 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e49c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289e49f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289e4a1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1289e4a4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e4a7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e4aa push edx */
  push32((uint32_t)(EDX));
  /* 1289e4ab push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 1289e4ad mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289e4b0 push eax */
  push32((uint32_t)(EAX));
  /* 1289e4b1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1289e4b3 call 0x128a1e00 */
  push32(0x1289e4b8u); f_128a1e00();
  /* 1289e4b8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e4bb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289e4be or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289e4c0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1289e4c3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e4c6 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e4c9 push edx */
  push32((uint32_t)(EDX));
  /* 1289e4ca push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 1289e4cc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289e4cf push eax */
  push32((uint32_t)(EAX));
  /* 1289e4d0 push 1 */
  push32((uint32_t)(0x1u));
  /* 1289e4d2 call 0x128a1e00 */
  push32(0x1289e4d7u); f_128a1e00();
  /* 1289e4d7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e4da mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289e4dd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289e4df mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1289e4e2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e4e5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e4e8 push edx */
  push32((uint32_t)(EDX));
  /* 1289e4e9 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1289e4eb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289e4ee push eax */
  push32((uint32_t)(EAX));
  /* 1289e4ef push 1 */
  push32((uint32_t)(0x1u));
  /* 1289e4f1 call 0x128a1e00 */
  push32(0x1289e4f6u); f_128a1e00();
  /* 1289e4f6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e4f9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289e4fc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289e4fe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1289e501 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e504 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e507 push edx */
  push32((uint32_t)(EDX));
  /* 1289e508 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 1289e50a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289e50d push eax */
  push32((uint32_t)(EAX));
  /* 1289e50e push 1 */
  push32((uint32_t)(0x1u));
  /* 1289e510 call 0x128a1e00 */
  push32(0x1289e515u); f_128a1e00();
  /* 1289e515 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e518 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289e51b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289e51d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1289e520 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e523 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e526 push edx */
  push32((uint32_t)(EDX));
  /* 1289e527 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 1289e529 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289e52c push eax */
  push32((uint32_t)(EAX));
  /* 1289e52d push 1 */
  push32((uint32_t)(0x1u));
  /* 1289e52f call 0x128a1e00 */
  push32(0x1289e534u); f_128a1e00();
  /* 1289e534 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e537 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289e53a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289e53c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1289e53f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e542 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e545 push edx */
  push32((uint32_t)(EDX));
  /* 1289e546 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 1289e548 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289e54b push eax */
  push32((uint32_t)(EAX));
  /* 1289e54c push 1 */
  push32((uint32_t)(0x1u));
  /* 1289e54e call 0x128a1e00 */
  push32(0x1289e553u); f_128a1e00();
  /* 1289e553 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e556 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289e559 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289e55b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1289e55e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e561 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e564 push edx */
  push32((uint32_t)(EDX));
  /* 1289e565 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 1289e567 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289e56a push eax */
  push32((uint32_t)(EAX));
  /* 1289e56b push 1 */
  push32((uint32_t)(0x1u));
  /* 1289e56d call 0x128a1e00 */
  push32(0x1289e572u); f_128a1e00();
  /* 1289e572 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e575 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289e578 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289e57a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1289e57d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e580 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e583 push edx */
  push32((uint32_t)(EDX));
  /* 1289e584 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 1289e586 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289e589 push eax */
  push32((uint32_t)(EAX));
  /* 1289e58a push 1 */
  push32((uint32_t)(0x1u));
  /* 1289e58c call 0x128a1e00 */
  push32(0x1289e591u); f_128a1e00();
  /* 1289e591 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e594 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289e597 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289e599 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1289e59c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e59f add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e5a2 push edx */
  push32((uint32_t)(EDX));
  /* 1289e5a3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 1289e5a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289e5a8 push eax */
  push32((uint32_t)(EAX));
  /* 1289e5a9 push 1 */
  push32((uint32_t)(0x1u));
  /* 1289e5ab call 0x128a1e00 */
  push32(0x1289e5b0u); f_128a1e00();
  /* 1289e5b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e5b3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289e5b6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289e5b8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1289e5bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e5be add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e5c1 push edx */
  push32((uint32_t)(EDX));
  /* 1289e5c2 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1289e5c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289e5c7 push eax */
  push32((uint32_t)(EAX));
  /* 1289e5c8 push 1 */
  push32((uint32_t)(0x1u));
  /* 1289e5ca call 0x128a1e00 */
  push32(0x1289e5cfu); f_128a1e00();
  /* 1289e5cf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e5d2 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289e5d5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289e5d7 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1289e5da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e5dd add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e5e0 push edx */
  push32((uint32_t)(EDX));
  /* 1289e5e1 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 1289e5e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289e5e6 push eax */
  push32((uint32_t)(EAX));
  /* 1289e5e7 push 1 */
  push32((uint32_t)(0x1u));
  /* 1289e5e9 call 0x128a1e00 */
  push32(0x1289e5eeu); f_128a1e00();
  /* 1289e5ee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e5f1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289e5f4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289e5f6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1289e5f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e5fc add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e5ff push edx */
  push32((uint32_t)(EDX));
  /* 1289e600 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 1289e602 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289e605 push eax */
  push32((uint32_t)(EAX));
  /* 1289e606 push 1 */
  push32((uint32_t)(0x1u));
  /* 1289e608 call 0x128a1e00 */
  push32(0x1289e60du); f_128a1e00();
  /* 1289e60d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e610 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289e613 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289e615 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1289e618 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e61b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e61e push edx */
  push32((uint32_t)(EDX));
  /* 1289e61f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 1289e621 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289e624 push eax */
  push32((uint32_t)(EAX));
  /* 1289e625 push 1 */
  push32((uint32_t)(0x1u));
  /* 1289e627 call 0x128a1e00 */
  push32(0x1289e62cu); f_128a1e00();
  /* 1289e62c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e62f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289e632 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289e634 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1289e637 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e63a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e63d push edx */
  push32((uint32_t)(EDX));
  /* 1289e63e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 1289e640 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289e643 push eax */
  push32((uint32_t)(EAX));
  /* 1289e644 push 1 */
  push32((uint32_t)(0x1u));
  /* 1289e646 call 0x128a1e00 */
  push32(0x1289e64bu); f_128a1e00();
  /* 1289e64b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e64e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289e651 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289e653 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1289e656 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e659 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e65c push edx */
  push32((uint32_t)(EDX));
  /* 1289e65d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 1289e65f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289e662 push eax */
  push32((uint32_t)(EAX));
  /* 1289e663 push 1 */
  push32((uint32_t)(0x1u));
  /* 1289e665 call 0x128a1e00 */
  push32(0x1289e66au); f_128a1e00();
  /* 1289e66a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e66d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289e670 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289e672 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1289e675 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e678 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e67b push edx */
  push32((uint32_t)(EDX));
  /* 1289e67c push 0x38 */
  push32((uint32_t)(0x38u));
  /* 1289e67e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289e681 push eax */
  push32((uint32_t)(EAX));
  /* 1289e682 push 1 */
  push32((uint32_t)(0x1u));
  /* 1289e684 call 0x128a1e00 */
  push32(0x1289e689u); f_128a1e00();
  /* 1289e689 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e68c mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289e68f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289e691 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1289e694 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e697 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e69a push edx */
  push32((uint32_t)(EDX));
  /* 1289e69b push 0x39 */
  push32((uint32_t)(0x39u));
  /* 1289e69d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289e6a0 push eax */
  push32((uint32_t)(EAX));
  /* 1289e6a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 1289e6a3 call 0x128a1e00 */
  push32(0x1289e6a8u); f_128a1e00();
  /* 1289e6a8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e6ab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289e6ae or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289e6b0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1289e6b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e6b6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e6b9 push edx */
  push32((uint32_t)(EDX));
  /* 1289e6ba push 0x3a */
  push32((uint32_t)(0x3au));
  /* 1289e6bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289e6bf push eax */
  push32((uint32_t)(EAX));
  /* 1289e6c0 push 1 */
  push32((uint32_t)(0x1u));
  /* 1289e6c2 call 0x128a1e00 */
  push32(0x1289e6c7u); f_128a1e00();
  /* 1289e6c7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e6ca mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289e6cd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289e6cf mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1289e6d2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e6d5 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e6d8 push edx */
  push32((uint32_t)(EDX));
  /* 1289e6d9 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 1289e6db mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289e6de push eax */
  push32((uint32_t)(EAX));
  /* 1289e6df push 1 */
  push32((uint32_t)(0x1u));
  /* 1289e6e1 call 0x128a1e00 */
  push32(0x1289e6e6u); f_128a1e00();
  /* 1289e6e6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e6e9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289e6ec or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289e6ee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1289e6f1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e6f4 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e6f7 push edx */
  push32((uint32_t)(EDX));
  /* 1289e6f8 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 1289e6fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289e6fd push eax */
  push32((uint32_t)(EAX));
  /* 1289e6fe push 1 */
  push32((uint32_t)(0x1u));
  /* 1289e700 call 0x128a1e00 */
  push32(0x1289e705u); f_128a1e00();
  /* 1289e705 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e708 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289e70b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289e70d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1289e710 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e713 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e716 push edx */
  push32((uint32_t)(EDX));
  /* 1289e717 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 1289e719 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289e71c push eax */
  push32((uint32_t)(EAX));
  /* 1289e71d push 1 */
  push32((uint32_t)(0x1u));
  /* 1289e71f call 0x128a1e00 */
  push32(0x1289e724u); f_128a1e00();
  /* 1289e724 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e727 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289e72a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289e72c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1289e72f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e732 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e738 push edx */
  push32((uint32_t)(EDX));
  /* 1289e739 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 1289e73b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289e73e push eax */
  push32((uint32_t)(EAX));
  /* 1289e73f push 1 */
  push32((uint32_t)(0x1u));
  /* 1289e741 call 0x128a1e00 */
  push32(0x1289e746u); f_128a1e00();
  /* 1289e746 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e749 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289e74c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289e74e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1289e751 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e754 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e75a push edx */
  push32((uint32_t)(EDX));
  /* 1289e75b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1289e75d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289e760 push eax */
  push32((uint32_t)(EAX));
  /* 1289e761 push 1 */
  push32((uint32_t)(0x1u));
  /* 1289e763 call 0x128a1e00 */
  push32(0x1289e768u); f_128a1e00();
  /* 1289e768 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e76b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289e76e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289e770 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1289e773 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e776 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e77c push edx */
  push32((uint32_t)(EDX));
  /* 1289e77d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1289e77f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289e782 push eax */
  push32((uint32_t)(EAX));
  /* 1289e783 push 1 */
  push32((uint32_t)(0x1u));
  /* 1289e785 call 0x128a1e00 */
  push32(0x1289e78au); f_128a1e00();
  /* 1289e78a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e78d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289e790 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289e792 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1289e795 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e798 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e79e push edx */
  push32((uint32_t)(EDX));
  /* 1289e79f push 0x41 */
  push32((uint32_t)(0x41u));
  /* 1289e7a1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289e7a4 push eax */
  push32((uint32_t)(EAX));
  /* 1289e7a5 push 1 */
  push32((uint32_t)(0x1u));
  /* 1289e7a7 call 0x128a1e00 */
  push32(0x1289e7acu); f_128a1e00();
  /* 1289e7ac add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e7af mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289e7b2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289e7b4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1289e7b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e7ba add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e7c0 push edx */
  push32((uint32_t)(EDX));
  /* 1289e7c1 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 1289e7c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289e7c6 push eax */
  push32((uint32_t)(EAX));
  /* 1289e7c7 push 1 */
  push32((uint32_t)(0x1u));
  /* 1289e7c9 call 0x128a1e00 */
  push32(0x1289e7ceu); f_128a1e00();
  /* 1289e7ce add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e7d1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289e7d4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289e7d6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1289e7d9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e7dc add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e7e2 push edx */
  push32((uint32_t)(EDX));
  /* 1289e7e3 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 1289e7e5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289e7e8 push eax */
  push32((uint32_t)(EAX));
  /* 1289e7e9 push 1 */
  push32((uint32_t)(0x1u));
  /* 1289e7eb call 0x128a1e00 */
  push32(0x1289e7f0u); f_128a1e00();
  /* 1289e7f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e7f3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289e7f6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289e7f8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1289e7fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e7fe add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e804 push edx */
  push32((uint32_t)(EDX));
  /* 1289e805 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 1289e807 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289e80a push eax */
  push32((uint32_t)(EAX));
  /* 1289e80b push 1 */
  push32((uint32_t)(0x1u));
  /* 1289e80d call 0x128a1e00 */
  push32(0x1289e812u); f_128a1e00();
  /* 1289e812 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e815 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289e818 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289e81a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1289e81d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e820 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e826 push edx */
  push32((uint32_t)(EDX));
  /* 1289e827 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 1289e829 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289e82c push eax */
  push32((uint32_t)(EAX));
  /* 1289e82d push 1 */
  push32((uint32_t)(0x1u));
  /* 1289e82f call 0x128a1e00 */
  push32(0x1289e834u); f_128a1e00();
  /* 1289e834 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e837 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289e83a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289e83c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1289e83f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e842 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e848 push edx */
  push32((uint32_t)(EDX));
  /* 1289e849 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1289e84b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289e84e push eax */
  push32((uint32_t)(EAX));
  /* 1289e84f push 1 */
  push32((uint32_t)(0x1u));
  /* 1289e851 call 0x128a1e00 */
  push32(0x1289e856u); f_128a1e00();
  /* 1289e856 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e859 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289e85c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289e85e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1289e861 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e864 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e86a push edx */
  push32((uint32_t)(EDX));
  /* 1289e86b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1289e86d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289e870 push eax */
  push32((uint32_t)(EAX));
  /* 1289e871 push 1 */
  push32((uint32_t)(0x1u));
  /* 1289e873 call 0x128a1e00 */
  push32(0x1289e878u); f_128a1e00();
  /* 1289e878 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e87b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289e87e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289e880 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1289e883 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e886 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e88c push edx */
  push32((uint32_t)(EDX));
  /* 1289e88d push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 1289e892 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289e895 push eax */
  push32((uint32_t)(EAX));
  /* 1289e896 push 1 */
  push32((uint32_t)(0x1u));
  /* 1289e898 call 0x128a1e00 */
  push32(0x1289e89du); f_128a1e00();
  /* 1289e89d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e8a0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289e8a3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289e8a5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1289e8a8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1289e8ab:;
  /* 1289e8ab mov esp, ebp */
  ESP = (EBP);
  /* 1289e8ad pop ebp */
  EBP = (pop32());
  /* 1289e8ae ret  */
  ESPCHK(0x1289e320u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x1289e8b0 (779 bytes, 265 insns) */
void f_1289e8b0(void) {
  FTRACE(0x1289e8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289e8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1289e8b1 mov ebp, esp */
  EBP = (ESP);
  /* 1289e8b3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289e8b7 jne 0x1289e8be */
  if (!C.zf) goto L_1289e8be;
  /* 1289e8b9 jmp 0x1289ebb9 */
  goto L_1289ebb9;
L_1289e8be:;
  /* 1289e8be push 2 */
  push32((uint32_t)(0x2u));
  /* 1289e8c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e8c3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1289e8c6 push ecx */
  push32((uint32_t)(ECX));
  /* 1289e8c7 call 0x128958f0 */
  push32(0x1289e8ccu); f_128958f0();
  /* 1289e8cc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e8cf push 2 */
  push32((uint32_t)(0x2u));
  /* 1289e8d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e8d4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1289e8d7 push eax */
  push32((uint32_t)(EAX));
  /* 1289e8d8 call 0x128958f0 */
  push32(0x1289e8ddu); f_128958f0();
  /* 1289e8dd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e8e0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289e8e2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e8e5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1289e8e8 push edx */
  push32((uint32_t)(EDX));
  /* 1289e8e9 call 0x128958f0 */
  push32(0x1289e8eeu); f_128958f0();
  /* 1289e8ee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e8f1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289e8f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e8f6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1289e8f9 push ecx */
  push32((uint32_t)(ECX));
  /* 1289e8fa call 0x128958f0 */
  push32(0x1289e8ffu); f_128958f0();
  /* 1289e8ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e902 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289e904 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e907 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1289e90a push eax */
  push32((uint32_t)(EAX));
  /* 1289e90b call 0x128958f0 */
  push32(0x1289e910u); f_128958f0();
  /* 1289e910 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e913 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289e915 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e918 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1289e91b push edx */
  push32((uint32_t)(EDX));
  /* 1289e91c call 0x128958f0 */
  push32(0x1289e921u); f_128958f0();
  /* 1289e921 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e924 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289e926 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e929 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1289e92b push ecx */
  push32((uint32_t)(ECX));
  /* 1289e92c call 0x128958f0 */
  push32(0x1289e931u); f_128958f0();
  /* 1289e931 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e934 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289e936 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e939 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1289e93c push eax */
  push32((uint32_t)(EAX));
  /* 1289e93d call 0x128958f0 */
  push32(0x1289e942u); f_128958f0();
  /* 1289e942 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e945 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289e947 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e94a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1289e94d push edx */
  push32((uint32_t)(EDX));
  /* 1289e94e call 0x128958f0 */
  push32(0x1289e953u); f_128958f0();
  /* 1289e953 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e956 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289e958 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e95b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 1289e95e push ecx */
  push32((uint32_t)(ECX));
  /* 1289e95f call 0x128958f0 */
  push32(0x1289e964u); f_128958f0();
  /* 1289e964 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e967 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289e969 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e96c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 1289e96f push eax */
  push32((uint32_t)(EAX));
  /* 1289e970 call 0x128958f0 */
  push32(0x1289e975u); f_128958f0();
  /* 1289e975 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e978 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289e97a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e97d mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 1289e980 push edx */
  push32((uint32_t)(EDX));
  /* 1289e981 call 0x128958f0 */
  push32(0x1289e986u); f_128958f0();
  /* 1289e986 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e989 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289e98b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e98e mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 1289e991 push ecx */
  push32((uint32_t)(ECX));
  /* 1289e992 call 0x128958f0 */
  push32(0x1289e997u); f_128958f0();
  /* 1289e997 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e99a push 2 */
  push32((uint32_t)(0x2u));
  /* 1289e99c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e99f mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1289e9a2 push eax */
  push32((uint32_t)(EAX));
  /* 1289e9a3 call 0x128958f0 */
  push32(0x1289e9a8u); f_128958f0();
  /* 1289e9a8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e9ab push 2 */
  push32((uint32_t)(0x2u));
  /* 1289e9ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e9b0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 1289e9b3 push edx */
  push32((uint32_t)(EDX));
  /* 1289e9b4 call 0x128958f0 */
  push32(0x1289e9b9u); f_128958f0();
  /* 1289e9b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e9bc push 2 */
  push32((uint32_t)(0x2u));
  /* 1289e9be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e9c1 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 1289e9c4 push ecx */
  push32((uint32_t)(ECX));
  /* 1289e9c5 call 0x128958f0 */
  push32(0x1289e9cau); f_128958f0();
  /* 1289e9ca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e9cd push 2 */
  push32((uint32_t)(0x2u));
  /* 1289e9cf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e9d2 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 1289e9d5 push eax */
  push32((uint32_t)(EAX));
  /* 1289e9d6 call 0x128958f0 */
  push32(0x1289e9dbu); f_128958f0();
  /* 1289e9db add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e9de push 2 */
  push32((uint32_t)(0x2u));
  /* 1289e9e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e9e3 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 1289e9e6 push edx */
  push32((uint32_t)(EDX));
  /* 1289e9e7 call 0x128958f0 */
  push32(0x1289e9ecu); f_128958f0();
  /* 1289e9ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289e9ef push 2 */
  push32((uint32_t)(0x2u));
  /* 1289e9f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289e9f4 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 1289e9f7 push ecx */
  push32((uint32_t)(ECX));
  /* 1289e9f8 call 0x128958f0 */
  push32(0x1289e9fdu); f_128958f0();
  /* 1289e9fd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ea00 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289ea02 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289ea05 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 1289ea08 push eax */
  push32((uint32_t)(EAX));
  /* 1289ea09 call 0x128958f0 */
  push32(0x1289ea0eu); f_128958f0();
  /* 1289ea0e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ea11 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289ea13 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289ea16 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 1289ea19 push edx */
  push32((uint32_t)(EDX));
  /* 1289ea1a call 0x128958f0 */
  push32(0x1289ea1fu); f_128958f0();
  /* 1289ea1f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ea22 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289ea24 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289ea27 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 1289ea2a push ecx */
  push32((uint32_t)(ECX));
  /* 1289ea2b call 0x128958f0 */
  push32(0x1289ea30u); f_128958f0();
  /* 1289ea30 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ea33 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289ea35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289ea38 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 1289ea3b push eax */
  push32((uint32_t)(EAX));
  /* 1289ea3c call 0x128958f0 */
  push32(0x1289ea41u); f_128958f0();
  /* 1289ea41 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ea44 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289ea46 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289ea49 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 1289ea4c push edx */
  push32((uint32_t)(EDX));
  /* 1289ea4d call 0x128958f0 */
  push32(0x1289ea52u); f_128958f0();
  /* 1289ea52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ea55 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289ea57 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289ea5a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 1289ea5d push ecx */
  push32((uint32_t)(ECX));
  /* 1289ea5e call 0x128958f0 */
  push32(0x1289ea63u); f_128958f0();
  /* 1289ea63 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ea66 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289ea68 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289ea6b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 1289ea6e push eax */
  push32((uint32_t)(EAX));
  /* 1289ea6f call 0x128958f0 */
  push32(0x1289ea74u); f_128958f0();
  /* 1289ea74 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ea77 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289ea79 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289ea7c mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 1289ea7f push edx */
  push32((uint32_t)(EDX));
  /* 1289ea80 call 0x128958f0 */
  push32(0x1289ea85u); f_128958f0();
  /* 1289ea85 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ea88 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289ea8a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289ea8d mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 1289ea90 push ecx */
  push32((uint32_t)(ECX));
  /* 1289ea91 call 0x128958f0 */
  push32(0x1289ea96u); f_128958f0();
  /* 1289ea96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ea99 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289ea9b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289ea9e mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 1289eaa1 push eax */
  push32((uint32_t)(EAX));
  /* 1289eaa2 call 0x128958f0 */
  push32(0x1289eaa7u); f_128958f0();
  /* 1289eaa7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289eaaa push 2 */
  push32((uint32_t)(0x2u));
  /* 1289eaac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289eaaf mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 1289eab2 push edx */
  push32((uint32_t)(EDX));
  /* 1289eab3 call 0x128958f0 */
  push32(0x1289eab8u); f_128958f0();
  /* 1289eab8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289eabb push 2 */
  push32((uint32_t)(0x2u));
  /* 1289eabd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289eac0 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 1289eac3 push ecx */
  push32((uint32_t)(ECX));
  /* 1289eac4 call 0x128958f0 */
  push32(0x1289eac9u); f_128958f0();
  /* 1289eac9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289eacc push 2 */
  push32((uint32_t)(0x2u));
  /* 1289eace mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289ead1 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 1289ead4 push eax */
  push32((uint32_t)(EAX));
  /* 1289ead5 call 0x128958f0 */
  push32(0x1289eadau); f_128958f0();
  /* 1289eada add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289eadd push 2 */
  push32((uint32_t)(0x2u));
  /* 1289eadf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289eae2 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 1289eae8 push edx */
  push32((uint32_t)(EDX));
  /* 1289eae9 call 0x128958f0 */
  push32(0x1289eaeeu); f_128958f0();
  /* 1289eaee add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289eaf1 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289eaf3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289eaf6 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 1289eafc push ecx */
  push32((uint32_t)(ECX));
  /* 1289eafd call 0x128958f0 */
  push32(0x1289eb02u); f_128958f0();
  /* 1289eb02 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289eb05 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289eb07 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289eb0a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 1289eb10 push eax */
  push32((uint32_t)(EAX));
  /* 1289eb11 call 0x128958f0 */
  push32(0x1289eb16u); f_128958f0();
  /* 1289eb16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289eb19 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289eb1b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289eb1e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 1289eb24 push edx */
  push32((uint32_t)(EDX));
  /* 1289eb25 call 0x128958f0 */
  push32(0x1289eb2au); f_128958f0();
  /* 1289eb2a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289eb2d push 2 */
  push32((uint32_t)(0x2u));
  /* 1289eb2f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289eb32 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 1289eb38 push ecx */
  push32((uint32_t)(ECX));
  /* 1289eb39 call 0x128958f0 */
  push32(0x1289eb3eu); f_128958f0();
  /* 1289eb3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289eb41 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289eb43 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289eb46 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 1289eb4c push eax */
  push32((uint32_t)(EAX));
  /* 1289eb4d call 0x128958f0 */
  push32(0x1289eb52u); f_128958f0();
  /* 1289eb52 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289eb55 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289eb57 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289eb5a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 1289eb60 push edx */
  push32((uint32_t)(EDX));
  /* 1289eb61 call 0x128958f0 */
  push32(0x1289eb66u); f_128958f0();
  /* 1289eb66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289eb69 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289eb6b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289eb6e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 1289eb74 push ecx */
  push32((uint32_t)(ECX));
  /* 1289eb75 call 0x128958f0 */
  push32(0x1289eb7au); f_128958f0();
  /* 1289eb7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289eb7d push 2 */
  push32((uint32_t)(0x2u));
  /* 1289eb7f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289eb82 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 1289eb88 push eax */
  push32((uint32_t)(EAX));
  /* 1289eb89 call 0x128958f0 */
  push32(0x1289eb8eu); f_128958f0();
  /* 1289eb8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289eb91 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289eb93 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289eb96 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 1289eb9c push edx */
  push32((uint32_t)(EDX));
  /* 1289eb9d call 0x128958f0 */
  push32(0x1289eba2u); f_128958f0();
  /* 1289eba2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289eba5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289eba7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289ebaa mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 1289ebb0 push ecx */
  push32((uint32_t)(ECX));
  /* 1289ebb1 call 0x128958f0 */
  push32(0x1289ebb6u); f_128958f0();
  /* 1289ebb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1289ebb9:;
  /* 1289ebb9 pop ebp */
  EBP = (pop32());
  /* 1289ebba ret  */
  ESPCHK(0x1289e8b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ebc0 @ 0x1289ebc0 (678 bytes, 180 insns) */
void f_1289ebc0(void) {
  FTRACE(0x1289ebc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289ebc0 push ebp */
  push32((uint32_t)(EBP));
  /* 1289ebc1 mov ebp, esp */
  EBP = (ESP);
  /* 1289ebc3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289ebc6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1289ebcd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289ebcf mov ax, word ptr [0x128bf8fe] */
  AX = (r16((uint32_t)(0x128bf8fe)));
  /* 1289ebd5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1289ebd8 cmp dword ptr [0x128bf8b0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf8b0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289ebdf je 0x1289ed3a */
  if (C.zf) goto L_1289ed3a;
  /* 1289ebe5 push 0x128bf8cc */
  push32((uint32_t)(0x128bf8ccu));
  /* 1289ebea push 0xe */
  push32((uint32_t)(0xeu));
  /* 1289ebec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289ebef push ecx */
  push32((uint32_t)(ECX));
  /* 1289ebf0 push 1 */
  push32((uint32_t)(0x1u));
  /* 1289ebf2 call 0x128a1e00 */
  push32(0x1289ebf7u); f_128a1e00();
  /* 1289ebf7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ebfa mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289ebfd or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 1289ebff mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1289ec02 push 0x128bf8d0 */
  push32((uint32_t)(0x128bf8d0u));
  /* 1289ec07 push 0xf */
  push32((uint32_t)(0xfu));
  /* 1289ec09 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289ec0c push eax */
  push32((uint32_t)(EAX));
  /* 1289ec0d push 1 */
  push32((uint32_t)(0x1u));
  /* 1289ec0f call 0x128a1e00 */
  push32(0x1289ec14u); f_128a1e00();
  /* 1289ec14 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ec17 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289ec1a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289ec1c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1289ec1f push 0x128bf8d4 */
  push32((uint32_t)(0x128bf8d4u));
  /* 1289ec24 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1289ec26 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289ec29 push edx */
  push32((uint32_t)(EDX));
  /* 1289ec2a push 1 */
  push32((uint32_t)(0x1u));
  /* 1289ec2c call 0x128a1e00 */
  push32(0x1289ec31u); f_128a1e00();
  /* 1289ec31 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ec34 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289ec37 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289ec39 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1289ec3c mov edx, dword ptr [0x128bf8d4] */
  EDX = (r32((uint32_t)(0x128bf8d4)));
  /* 1289ec42 push edx */
  push32((uint32_t)(EDX));
  /* 1289ec43 call 0x1289ee70 */
  push32(0x1289ec48u); f_1289ee70();
  /* 1289ec48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ec4b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289ec4f je 0x1289eca9 */
  if (C.zf) goto L_1289eca9;
  /* 1289ec51 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289ec53 mov eax, dword ptr [0x128bf8cc] */
  EAX = (r32((uint32_t)(0x128bf8cc)));
  /* 1289ec58 push eax */
  push32((uint32_t)(EAX));
  /* 1289ec59 call 0x128958f0 */
  push32(0x1289ec5eu); f_128958f0();
  /* 1289ec5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ec61 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289ec63 mov ecx, dword ptr [0x128bf8d0] */
  ECX = (r32((uint32_t)(0x128bf8d0)));
  /* 1289ec69 push ecx */
  push32((uint32_t)(ECX));
  /* 1289ec6a call 0x128958f0 */
  push32(0x1289ec6fu); f_128958f0();
  /* 1289ec6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ec72 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289ec74 mov edx, dword ptr [0x128bf8d4] */
  EDX = (r32((uint32_t)(0x128bf8d4)));
  /* 1289ec7a push edx */
  push32((uint32_t)(EDX));
  /* 1289ec7b call 0x128958f0 */
  push32(0x1289ec80u); f_128958f0();
  /* 1289ec80 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ec83 mov dword ptr [0x128bf8cc], 0 */
  w32((uint32_t)(0x128bf8cc), (0x0u));
  /* 1289ec8d mov dword ptr [0x128bf8d0], 0 */
  w32((uint32_t)(0x128bf8d0), (0x0u));
  /* 1289ec97 mov dword ptr [0x128bf8d4], 0 */
  w32((uint32_t)(0x128bf8d4), (0x0u));
  /* 1289eca1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1289eca4 jmp 0x1289ee62 */
  goto L_1289ee62;
L_1289eca9:;
  /* 1289eca9 mov eax, dword ptr [0x128bed98] */
  EAX = (r32((uint32_t)(0x128bed98)));
  /* 1289ecae cmp dword ptr [eax], 0x128bed60 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x128bed60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289ecb4 je 0x1289ecf0 */
  if (C.zf) goto L_1289ecf0;
  /* 1289ecb6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289ecb8 mov ecx, dword ptr [0x128bed98] */
  ECX = (r32((uint32_t)(0x128bed98)));
  /* 1289ecbe mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1289ecc0 push edx */
  push32((uint32_t)(EDX));
  /* 1289ecc1 call 0x128958f0 */
  push32(0x1289ecc6u); f_128958f0();
  /* 1289ecc6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ecc9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289eccb mov eax, dword ptr [0x128bed98] */
  EAX = (r32((uint32_t)(0x128bed98)));
  /* 1289ecd0 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1289ecd3 push ecx */
  push32((uint32_t)(ECX));
  /* 1289ecd4 call 0x128958f0 */
  push32(0x1289ecd9u); f_128958f0();
  /* 1289ecd9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ecdc push 2 */
  push32((uint32_t)(0x2u));
  /* 1289ecde mov edx, dword ptr [0x128bed98] */
  EDX = (r32((uint32_t)(0x128bed98)));
  /* 1289ece4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1289ece7 push eax */
  push32((uint32_t)(EAX));
  /* 1289ece8 call 0x128958f0 */
  push32(0x1289ecedu); f_128958f0();
  /* 1289eced add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1289ecf0:;
  /* 1289ecf0 mov ecx, dword ptr [0x128bed98] */
  ECX = (r32((uint32_t)(0x128bed98)));
  /* 1289ecf6 mov edx, dword ptr [0x128bf8cc] */
  EDX = (r32((uint32_t)(0x128bf8cc)));
  /* 1289ecfc mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1289ecfe mov eax, dword ptr [0x128bed98] */
  EAX = (r32((uint32_t)(0x128bed98)));
  /* 1289ed03 mov ecx, dword ptr [0x128bf8d0] */
  ECX = (r32((uint32_t)(0x128bf8d0)));
  /* 1289ed09 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1289ed0c mov edx, dword ptr [0x128bed98] */
  EDX = (r32((uint32_t)(0x128bed98)));
  /* 1289ed12 mov eax, dword ptr [0x128bf8d4] */
  EAX = (r32((uint32_t)(0x128bf8d4)));
  /* 1289ed17 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 1289ed1a mov ecx, dword ptr [0x128bed98] */
  ECX = (r32((uint32_t)(0x128bed98)));
  /* 1289ed20 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1289ed22 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1289ed24 mov byte ptr [0x128be15c], al */
  w8((uint32_t)(0x128be15c), (AL));
  /* 1289ed29 mov dword ptr [0x128be160], 1 */
  w32((uint32_t)(0x128be160), (0x1u));
  /* 1289ed33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289ed35 jmp 0x1289ee62 */
  goto L_1289ee62;
L_1289ed3a:;
  /* 1289ed3a push 2 */
  push32((uint32_t)(0x2u));
  /* 1289ed3c mov ecx, dword ptr [0x128bf8cc] */
  ECX = (r32((uint32_t)(0x128bf8cc)));
  /* 1289ed42 push ecx */
  push32((uint32_t)(ECX));
  /* 1289ed43 call 0x128958f0 */
  push32(0x1289ed48u); f_128958f0();
  /* 1289ed48 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ed4b push 2 */
  push32((uint32_t)(0x2u));
  /* 1289ed4d mov edx, dword ptr [0x128bf8d0] */
  EDX = (r32((uint32_t)(0x128bf8d0)));
  /* 1289ed53 push edx */
  push32((uint32_t)(EDX));
  /* 1289ed54 call 0x128958f0 */
  push32(0x1289ed59u); f_128958f0();
  /* 1289ed59 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ed5c push 2 */
  push32((uint32_t)(0x2u));
  /* 1289ed5e mov eax, dword ptr [0x128bf8d4] */
  EAX = (r32((uint32_t)(0x128bf8d4)));
  /* 1289ed63 push eax */
  push32((uint32_t)(EAX));
  /* 1289ed64 call 0x128958f0 */
  push32(0x1289ed69u); f_128958f0();
  /* 1289ed69 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ed6c mov dword ptr [0x128bf8cc], 0 */
  w32((uint32_t)(0x128bf8cc), (0x0u));
  /* 1289ed76 mov dword ptr [0x128bf8d0], 0 */
  w32((uint32_t)(0x128bf8d0), (0x0u));
  /* 1289ed80 mov dword ptr [0x128bf8d4], 0 */
  w32((uint32_t)(0x128bf8d4), (0x0u));
  /* 1289ed8a push 0x88 */
  push32((uint32_t)(0x88u));
  /* 1289ed8f push 0x128bb7c8 */
  push32((uint32_t)(0x128bb7c8u));
  /* 1289ed94 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289ed96 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289ed98 call 0x12894e60 */
  push32(0x1289ed9du); f_12894e60();
  /* 1289ed9d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289eda0 mov ecx, dword ptr [0x128bed98] */
  ECX = (r32((uint32_t)(0x128bed98)));
  /* 1289eda6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1289eda8 mov edx, dword ptr [0x128bed98] */
  EDX = (r32((uint32_t)(0x128bed98)));
  /* 1289edae cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289edb1 jne 0x1289edbb */
  if (!C.zf) goto L_1289edbb;
  /* 1289edb3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1289edb6 jmp 0x1289ee62 */
  goto L_1289ee62;
L_1289edbb:;
  /* 1289edbb push 0x128bb764 */
  push32((uint32_t)(0x128bb764u));
  /* 1289edc0 mov eax, dword ptr [0x128bed98] */
  EAX = (r32((uint32_t)(0x128bed98)));
  /* 1289edc5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1289edc7 push ecx */
  push32((uint32_t)(ECX));
  /* 1289edc8 call 0x12897e10 */
  push32(0x1289edcdu); f_12897e10();
  /* 1289edcd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289edd0 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 1289edd5 push 0x128bb7c8 */
  push32((uint32_t)(0x128bb7c8u));
  /* 1289edda push 2 */
  push32((uint32_t)(0x2u));
  /* 1289eddc push 2 */
  push32((uint32_t)(0x2u));
  /* 1289edde call 0x12894e60 */
  push32(0x1289ede3u); f_12894e60();
  /* 1289ede3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ede6 mov edx, dword ptr [0x128bed98] */
  EDX = (r32((uint32_t)(0x128bed98)));
  /* 1289edec mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 1289edef mov eax, dword ptr [0x128bed98] */
  EAX = (r32((uint32_t)(0x128bed98)));
  /* 1289edf4 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289edf8 jne 0x1289edff */
  if (!C.zf) goto L_1289edff;
  /* 1289edfa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1289edfd jmp 0x1289ee62 */
  goto L_1289ee62;
L_1289edff:;
  /* 1289edff mov ecx, dword ptr [0x128bed98] */
  ECX = (r32((uint32_t)(0x128bed98)));
  /* 1289ee05 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1289ee08 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1289ee0b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 1289ee10 push 0x128bb7c8 */
  push32((uint32_t)(0x128bb7c8u));
  /* 1289ee15 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289ee17 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289ee19 call 0x12894e60 */
  push32(0x1289ee1eu); f_12894e60();
  /* 1289ee1e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ee21 mov ecx, dword ptr [0x128bed98] */
  ECX = (r32((uint32_t)(0x128bed98)));
  /* 1289ee27 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1289ee2a mov edx, dword ptr [0x128bed98] */
  EDX = (r32((uint32_t)(0x128bed98)));
  /* 1289ee30 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289ee34 jne 0x1289ee3b */
  if (!C.zf) goto L_1289ee3b;
  /* 1289ee36 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1289ee39 jmp 0x1289ee62 */
  goto L_1289ee62;
L_1289ee3b:;
  /* 1289ee3b mov eax, dword ptr [0x128bed98] */
  EAX = (r32((uint32_t)(0x128bed98)));
  /* 1289ee40 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1289ee43 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 1289ee46 mov edx, dword ptr [0x128bed98] */
  EDX = (r32((uint32_t)(0x128bed98)));
  /* 1289ee4c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1289ee4e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1289ee50 mov byte ptr [0x128be15c], cl */
  w8((uint32_t)(0x128be15c), (CL));
  /* 1289ee56 mov dword ptr [0x128be160], 1 */
  w32((uint32_t)(0x128be160), (0x1u));
  /* 1289ee60 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1289ee62:;
  /* 1289ee62 mov esp, ebp */
  ESP = (EBP);
  /* 1289ee64 pop ebp */
  EBP = (pop32());
  /* 1289ee65 ret  */
  ESPCHK(0x1289ebc0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x1289ee70 (125 bytes, 49 insns) */
void f_1289ee70(void) {
  FTRACE(0x1289ee70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289ee70 push ebp */
  push32((uint32_t)(EBP));
  /* 1289ee71 mov ebp, esp */
  EBP = (ESP);
  /* 1289ee73 push ecx */
  push32((uint32_t)(ECX));
L_1289ee74:;
  /* 1289ee74 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289ee77 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1289ee7a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1289ee7c je 0x1289eee9 */
  if (C.zf) goto L_1289eee9;
  /* 1289ee7e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289ee81 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1289ee84 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289ee87 jl 0x1289eead */
  if ((C.sf!=C.of)) goto L_1289eead;
  /* 1289ee89 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289ee8c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1289ee8f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289ee92 jg 0x1289eead */
  if ((!C.zf&&C.sf==C.of)) goto L_1289eead;
  /* 1289ee94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289ee97 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1289ee9a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289ee9d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289eea0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1289eea2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289eea5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289eea8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1289eeab jmp 0x1289eee7 */
  goto L_1289eee7;
L_1289eead:;
  /* 1289eead mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289eeb0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1289eeb3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289eeb6 jne 0x1289eede */
  if (!C.zf) goto L_1289eede;
  /* 1289eeb8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289eebb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1289eebe:;
  /* 1289eebe mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289eec1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289eec4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1289eec7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1289eec9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289eecc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289eecf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1289eed2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289eed5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1289eed8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289eeda jne 0x1289eebe */
  if (!C.zf) goto L_1289eebe;
  /* 1289eedc jmp 0x1289eee7 */
  goto L_1289eee7;
L_1289eede:;
  /* 1289eede mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289eee1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289eee4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1289eee7:;
  /* 1289eee7 jmp 0x1289ee74 */
  goto L_1289ee74;
L_1289eee9:;
  /* 1289eee9 mov esp, ebp */
  ESP = (EBP);
  /* 1289eeeb pop ebp */
  EBP = (pop32());
  /* 1289eeec ret  */
  ESPCHK(0x1289ee70u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eef0 @ 0x1289eef0 (304 bytes, 85 insns) */
void f_1289eef0(void) {
  FTRACE(0x1289eef0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289eef0 push ebp */
  push32((uint32_t)(EBP));
  /* 1289eef1 mov ebp, esp */
  EBP = (ESP);
  /* 1289eef3 push ecx */
  push32((uint32_t)(ECX));
  /* 1289eef4 cmp dword ptr [0x128bf8ac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf8ac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289eefb je 0x1289efbc */
  if (C.zf) goto L_1289efbc;
  /* 1289ef01 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 1289ef03 push 0x128bb7d4 */
  push32((uint32_t)(0x128bb7d4u));
  /* 1289ef08 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289ef0a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 1289ef0c push 1 */
  push32((uint32_t)(0x1u));
  /* 1289ef0e call 0x12895270 */
  push32(0x1289ef13u); f_12895270();
  /* 1289ef13 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ef16 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1289ef19 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289ef1d jne 0x1289ef29 */
  if (!C.zf) goto L_1289ef29;
  /* 1289ef1f mov eax, 1 */
  EAX = (0x1u);
  /* 1289ef24 jmp 0x1289f01c */
  goto L_1289f01c;
L_1289ef29:;
  /* 1289ef29 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289ef2c push eax */
  push32((uint32_t)(EAX));
  /* 1289ef2d call 0x1289f020 */
  push32(0x1289ef32u); f_1289f020();
  /* 1289ef32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ef35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289ef37 je 0x1289ef5d */
  if (C.zf) goto L_1289ef5d;
  /* 1289ef39 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289ef3c push ecx */
  push32((uint32_t)(ECX));
  /* 1289ef3d call 0x1289f2b0 */
  push32(0x1289ef42u); f_1289f2b0();
  /* 1289ef42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ef45 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289ef47 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289ef4a push edx */
  push32((uint32_t)(EDX));
  /* 1289ef4b call 0x128958f0 */
  push32(0x1289ef50u); f_128958f0();
  /* 1289ef50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ef53 mov eax, 1 */
  EAX = (0x1u);
  /* 1289ef58 jmp 0x1289f01c */
  goto L_1289f01c;
L_1289ef5d:;
  /* 1289ef5d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289ef60 mov ecx, dword ptr [0x128bed98] */
  ECX = (r32((uint32_t)(0x128bed98)));
  /* 1289ef66 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1289ef68 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1289ef6a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289ef6d mov ecx, dword ptr [0x128bed98] */
  ECX = (r32((uint32_t)(0x128bed98)));
  /* 1289ef73 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 1289ef76 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 1289ef79 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289ef7c mov ecx, dword ptr [0x128bed98] */
  ECX = (r32((uint32_t)(0x128bed98)));
  /* 1289ef82 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 1289ef85 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1289ef88 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289ef8b mov dword ptr [0x128bed98], eax */
  w32((uint32_t)(0x128bed98), (EAX));
  /* 1289ef90 mov ecx, dword ptr [0x128bf8d8] */
  ECX = (r32((uint32_t)(0x128bf8d8)));
  /* 1289ef96 push ecx */
  push32((uint32_t)(ECX));
  /* 1289ef97 call 0x1289f2b0 */
  push32(0x1289ef9cu); f_1289f2b0();
  /* 1289ef9c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ef9f push 2 */
  push32((uint32_t)(0x2u));
  /* 1289efa1 mov edx, dword ptr [0x128bf8d8] */
  EDX = (r32((uint32_t)(0x128bf8d8)));
  /* 1289efa7 push edx */
  push32((uint32_t)(EDX));
  /* 1289efa8 call 0x128958f0 */
  push32(0x1289efadu); f_128958f0();
  /* 1289efad add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289efb0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289efb3 mov dword ptr [0x128bf8d8], eax */
  w32((uint32_t)(0x128bf8d8), (EAX));
  /* 1289efb8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289efba jmp 0x1289f01c */
  goto L_1289f01c;
L_1289efbc:;
  /* 1289efbc mov ecx, dword ptr [0x128bed98] */
  ECX = (r32((uint32_t)(0x128bed98)));
  /* 1289efc2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1289efc4 mov dword ptr [0x128bed68], edx */
  w32((uint32_t)(0x128bed68), (EDX));
  /* 1289efca mov eax, dword ptr [0x128bed98] */
  EAX = (r32((uint32_t)(0x128bed98)));
  /* 1289efcf mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1289efd2 mov dword ptr [0x128bed6c], ecx */
  w32((uint32_t)(0x128bed6c), (ECX));
  /* 1289efd8 mov edx, dword ptr [0x128bed98] */
  EDX = (r32((uint32_t)(0x128bed98)));
  /* 1289efde mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 1289efe1 mov dword ptr [0x128bed70], eax */
  w32((uint32_t)(0x128bed70), (EAX));
  /* 1289efe6 mov dword ptr [0x128bed98], 0x128bed68 */
  w32((uint32_t)(0x128bed98), (0x128bed68u));
  /* 1289eff0 mov ecx, dword ptr [0x128bf8d8] */
  ECX = (r32((uint32_t)(0x128bf8d8)));
  /* 1289eff6 push ecx */
  push32((uint32_t)(ECX));
  /* 1289eff7 call 0x1289f2b0 */
  push32(0x1289effcu); f_1289f2b0();
  /* 1289effc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289efff push 2 */
  push32((uint32_t)(0x2u));
  /* 1289f001 mov edx, dword ptr [0x128bf8d8] */
  EDX = (r32((uint32_t)(0x128bf8d8)));
  /* 1289f007 push edx */
  push32((uint32_t)(EDX));
  /* 1289f008 call 0x128958f0 */
  push32(0x1289f00du); f_128958f0();
  /* 1289f00d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f010 mov dword ptr [0x128bf8d8], 0 */
  w32((uint32_t)(0x128bf8d8), (0x0u));
  /* 1289f01a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1289f01c:;
  /* 1289f01c mov esp, ebp */
  ESP = (EBP);
  /* 1289f01e pop ebp */
  EBP = (pop32());
  /* 1289f01f ret  */
  ESPCHK(0x1289eef0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f020 @ 0x1289f020 (525 bytes, 200 insns) */
void f_1289f020(void) {
  FTRACE(0x1289f020u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289f020 push ebp */
  push32((uint32_t)(EBP));
  /* 1289f021 mov ebp, esp */
  EBP = (ESP);
  /* 1289f023 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289f026 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 1289f02d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289f02f mov ax, word ptr [0x128bf8f8] */
  AX = (r16((uint32_t)(0x128bf8f8)));
  /* 1289f035 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1289f038 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289f03c jne 0x1289f046 */
  if (!C.zf) goto L_1289f046;
  /* 1289f03e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1289f041 jmp 0x1289f229 */
  goto L_1289f229;
L_1289f046:;
  /* 1289f046 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289f049 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f04c push ecx */
  push32((uint32_t)(ECX));
  /* 1289f04d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1289f04f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289f052 push edx */
  push32((uint32_t)(EDX));
  /* 1289f053 push 1 */
  push32((uint32_t)(0x1u));
  /* 1289f055 call 0x128a1e00 */
  push32(0x1289f05au); f_128a1e00();
  /* 1289f05a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f05d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289f060 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289f062 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1289f065 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289f068 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f06b push edx */
  push32((uint32_t)(EDX));
  /* 1289f06c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 1289f06e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289f071 push eax */
  push32((uint32_t)(EAX));
  /* 1289f072 push 1 */
  push32((uint32_t)(0x1u));
  /* 1289f074 call 0x128a1e00 */
  push32(0x1289f079u); f_128a1e00();
  /* 1289f079 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f07c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289f07f or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289f081 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1289f084 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289f087 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f08a push edx */
  push32((uint32_t)(EDX));
  /* 1289f08b push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1289f08d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289f090 push eax */
  push32((uint32_t)(EAX));
  /* 1289f091 push 1 */
  push32((uint32_t)(0x1u));
  /* 1289f093 call 0x128a1e00 */
  push32(0x1289f098u); f_128a1e00();
  /* 1289f098 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f09b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289f09e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289f0a0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1289f0a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289f0a6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f0a9 push edx */
  push32((uint32_t)(EDX));
  /* 1289f0aa push 0x17 */
  push32((uint32_t)(0x17u));
  /* 1289f0ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289f0af push eax */
  push32((uint32_t)(EAX));
  /* 1289f0b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 1289f0b2 call 0x128a1e00 */
  push32(0x1289f0b7u); f_128a1e00();
  /* 1289f0b7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f0ba mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289f0bd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289f0bf mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1289f0c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289f0c5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f0c8 push edx */
  push32((uint32_t)(EDX));
  /* 1289f0c9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1289f0cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289f0ce push eax */
  push32((uint32_t)(EAX));
  /* 1289f0cf push 1 */
  push32((uint32_t)(0x1u));
  /* 1289f0d1 call 0x128a1e00 */
  push32(0x1289f0d6u); f_128a1e00();
  /* 1289f0d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f0d9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289f0dc or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289f0de mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1289f0e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289f0e4 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 1289f0e7 push eax */
  push32((uint32_t)(EAX));
  /* 1289f0e8 call 0x1289f230 */
  push32(0x1289f0edu); f_1289f230();
  /* 1289f0ed add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f0f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289f0f3 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f0f6 push ecx */
  push32((uint32_t)(ECX));
  /* 1289f0f7 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 1289f0f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289f0fc push edx */
  push32((uint32_t)(EDX));
  /* 1289f0fd push 1 */
  push32((uint32_t)(0x1u));
  /* 1289f0ff call 0x128a1e00 */
  push32(0x1289f104u); f_128a1e00();
  /* 1289f104 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f107 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289f10a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289f10c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1289f10f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289f112 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f115 push edx */
  push32((uint32_t)(EDX));
  /* 1289f116 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 1289f118 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289f11b push eax */
  push32((uint32_t)(EAX));
  /* 1289f11c push 1 */
  push32((uint32_t)(0x1u));
  /* 1289f11e call 0x128a1e00 */
  push32(0x1289f123u); f_128a1e00();
  /* 1289f123 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f126 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289f129 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289f12b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1289f12e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289f131 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f134 push edx */
  push32((uint32_t)(EDX));
  /* 1289f135 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 1289f137 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289f13a push eax */
  push32((uint32_t)(EAX));
  /* 1289f13b push 0 */
  push32((uint32_t)(0x0u));
  /* 1289f13d call 0x128a1e00 */
  push32(0x1289f142u); f_128a1e00();
  /* 1289f142 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f145 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289f148 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289f14a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1289f14d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289f150 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f153 push edx */
  push32((uint32_t)(EDX));
  /* 1289f154 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1289f156 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289f159 push eax */
  push32((uint32_t)(EAX));
  /* 1289f15a push 0 */
  push32((uint32_t)(0x0u));
  /* 1289f15c call 0x128a1e00 */
  push32(0x1289f161u); f_128a1e00();
  /* 1289f161 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f164 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289f167 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289f169 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1289f16c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289f16f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f172 push edx */
  push32((uint32_t)(EDX));
  /* 1289f173 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 1289f175 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289f178 push eax */
  push32((uint32_t)(EAX));
  /* 1289f179 push 0 */
  push32((uint32_t)(0x0u));
  /* 1289f17b call 0x128a1e00 */
  push32(0x1289f180u); f_128a1e00();
  /* 1289f180 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f183 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289f186 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289f188 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1289f18b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289f18e add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f191 push edx */
  push32((uint32_t)(EDX));
  /* 1289f192 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 1289f194 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289f197 push eax */
  push32((uint32_t)(EAX));
  /* 1289f198 push 0 */
  push32((uint32_t)(0x0u));
  /* 1289f19a call 0x128a1e00 */
  push32(0x1289f19fu); f_128a1e00();
  /* 1289f19f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f1a2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289f1a5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289f1a7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1289f1aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289f1ad add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f1b0 push edx */
  push32((uint32_t)(EDX));
  /* 1289f1b1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 1289f1b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289f1b6 push eax */
  push32((uint32_t)(EAX));
  /* 1289f1b7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1289f1b9 call 0x128a1e00 */
  push32(0x1289f1beu); f_128a1e00();
  /* 1289f1be add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f1c1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289f1c4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289f1c6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1289f1c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289f1cc add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f1cf push edx */
  push32((uint32_t)(EDX));
  /* 1289f1d0 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 1289f1d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289f1d5 push eax */
  push32((uint32_t)(EAX));
  /* 1289f1d6 push 0 */
  push32((uint32_t)(0x0u));
  /* 1289f1d8 call 0x128a1e00 */
  push32(0x1289f1ddu); f_128a1e00();
  /* 1289f1dd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f1e0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289f1e3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289f1e5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1289f1e8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289f1eb add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f1ee push edx */
  push32((uint32_t)(EDX));
  /* 1289f1ef push 0x52 */
  push32((uint32_t)(0x52u));
  /* 1289f1f1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289f1f4 push eax */
  push32((uint32_t)(EAX));
  /* 1289f1f5 push 0 */
  push32((uint32_t)(0x0u));
  /* 1289f1f7 call 0x128a1e00 */
  push32(0x1289f1fcu); f_128a1e00();
  /* 1289f1fc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f1ff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289f202 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289f204 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1289f207 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289f20a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f20d push edx */
  push32((uint32_t)(EDX));
  /* 1289f20e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 1289f210 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289f213 push eax */
  push32((uint32_t)(EAX));
  /* 1289f214 push 0 */
  push32((uint32_t)(0x0u));
  /* 1289f216 call 0x128a1e00 */
  push32(0x1289f21bu); f_128a1e00();
  /* 1289f21b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f21e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289f221 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 1289f223 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1289f226 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_1289f229:;
  /* 1289f229 mov esp, ebp */
  ESP = (EBP);
  /* 1289f22b pop ebp */
  EBP = (pop32());
  /* 1289f22c ret  */
  ESPCHK(0x1289f020u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x1289f230 (125 bytes, 49 insns) */
void f_1289f230(void) {
  FTRACE(0x1289f230u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289f230 push ebp */
  push32((uint32_t)(EBP));
  /* 1289f231 mov ebp, esp */
  EBP = (ESP);
  /* 1289f233 push ecx */
  push32((uint32_t)(ECX));
L_1289f234:;
  /* 1289f234 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289f237 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1289f23a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1289f23c je 0x1289f2a9 */
  if (C.zf) goto L_1289f2a9;
  /* 1289f23e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289f241 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1289f244 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289f247 jl 0x1289f26d */
  if ((C.sf!=C.of)) goto L_1289f26d;
  /* 1289f249 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289f24c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1289f24f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289f252 jg 0x1289f26d */
  if ((!C.zf&&C.sf==C.of)) goto L_1289f26d;
  /* 1289f254 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289f257 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1289f25a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289f25d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289f260 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 1289f262 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289f265 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f268 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 1289f26b jmp 0x1289f2a7 */
  goto L_1289f2a7;
L_1289f26d:;
  /* 1289f26d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289f270 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1289f273 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289f276 jne 0x1289f29e */
  if (!C.zf) goto L_1289f29e;
  /* 1289f278 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289f27b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1289f27e:;
  /* 1289f27e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289f281 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289f284 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1289f287 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1289f289 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289f28c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f28f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1289f292 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289f295 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1289f298 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289f29a jne 0x1289f27e */
  if (!C.zf) goto L_1289f27e;
  /* 1289f29c jmp 0x1289f2a7 */
  goto L_1289f2a7;
L_1289f29e:;
  /* 1289f29e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289f2a1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f2a4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_1289f2a7:;
  /* 1289f2a7 jmp 0x1289f234 */
  goto L_1289f234;
L_1289f2a9:;
  /* 1289f2a9 mov esp, ebp */
  ESP = (EBP);
  /* 1289f2ab pop ebp */
  EBP = (pop32());
  /* 1289f2ac ret  */
  ESPCHK(0x1289f230u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f2b0 @ 0x1289f2b0 (147 bytes, 52 insns) */
void f_1289f2b0(void) {
  FTRACE(0x1289f2b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289f2b0 push ebp */
  push32((uint32_t)(EBP));
  /* 1289f2b1 mov ebp, esp */
  EBP = (ESP);
  /* 1289f2b3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289f2b7 jne 0x1289f2be */
  if (!C.zf) goto L_1289f2be;
  /* 1289f2b9 jmp 0x1289f341 */
  goto L_1289f341;
L_1289f2be:;
  /* 1289f2be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289f2c1 cmp dword ptr [eax + 0xc], 0x128bf934 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x128bf934u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289f2c8 je 0x1289f341 */
  if (C.zf) goto L_1289f341;
  /* 1289f2ca push 2 */
  push32((uint32_t)(0x2u));
  /* 1289f2cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289f2cf mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 1289f2d2 push edx */
  push32((uint32_t)(EDX));
  /* 1289f2d3 call 0x128958f0 */
  push32(0x1289f2d8u); f_128958f0();
  /* 1289f2d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f2db push 2 */
  push32((uint32_t)(0x2u));
  /* 1289f2dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289f2e0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1289f2e3 push ecx */
  push32((uint32_t)(ECX));
  /* 1289f2e4 call 0x128958f0 */
  push32(0x1289f2e9u); f_128958f0();
  /* 1289f2e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f2ec push 2 */
  push32((uint32_t)(0x2u));
  /* 1289f2ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289f2f1 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 1289f2f4 push eax */
  push32((uint32_t)(EAX));
  /* 1289f2f5 call 0x128958f0 */
  push32(0x1289f2fau); f_128958f0();
  /* 1289f2fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f2fd push 2 */
  push32((uint32_t)(0x2u));
  /* 1289f2ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289f302 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 1289f305 push edx */
  push32((uint32_t)(EDX));
  /* 1289f306 call 0x128958f0 */
  push32(0x1289f30bu); f_128958f0();
  /* 1289f30b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f30e push 2 */
  push32((uint32_t)(0x2u));
  /* 1289f310 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289f313 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 1289f316 push ecx */
  push32((uint32_t)(ECX));
  /* 1289f317 call 0x128958f0 */
  push32(0x1289f31cu); f_128958f0();
  /* 1289f31c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f31f push 2 */
  push32((uint32_t)(0x2u));
  /* 1289f321 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289f324 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 1289f327 push eax */
  push32((uint32_t)(EAX));
  /* 1289f328 call 0x128958f0 */
  push32(0x1289f32du); f_128958f0();
  /* 1289f32d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f330 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289f332 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289f335 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 1289f338 push edx */
  push32((uint32_t)(EDX));
  /* 1289f339 call 0x128958f0 */
  push32(0x1289f33eu); f_128958f0();
  /* 1289f33e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1289f341:;
  /* 1289f341 pop ebp */
  EBP = (pop32());
  /* 1289f342 ret  */
  ESPCHK(0x1289f2b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f350 @ 0x1289f350 (928 bytes, 284 insns) */
void f_1289f350(void) {
  FTRACE(0x1289f350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289f350 push ebp */
  push32((uint32_t)(EBP));
  /* 1289f351 mov ebp, esp */
  EBP = (ESP);
  /* 1289f353 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289f356 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 1289f35d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 1289f364 cmp dword ptr [0x128bf8a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf8a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289f36b je 0x1289f6a1 */
  if (C.zf) goto L_1289f6a1;
  /* 1289f371 cmp dword ptr [0x128bf8b8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf8b8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289f378 jne 0x1289f3a0 */
  if (!C.zf) goto L_1289f3a0;
  /* 1289f37a push 0x128bf8b8 */
  push32((uint32_t)(0x128bf8b8u));
  /* 1289f37f push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 1289f384 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289f386 mov ax, word ptr [0x128bf8f0] */
  AX = (r16((uint32_t)(0x128bf8f0)));
  /* 1289f38c push eax */
  push32((uint32_t)(EAX));
  /* 1289f38d push 0 */
  push32((uint32_t)(0x0u));
  /* 1289f38f call 0x128a1e00 */
  push32(0x1289f394u); f_128a1e00();
  /* 1289f394 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f397 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289f399 je 0x1289f3a0 */
  if (C.zf) goto L_1289f3a0;
  /* 1289f39b jmp 0x1289f662 */
  goto L_1289f662;
L_1289f3a0:;
  /* 1289f3a0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 1289f3a2 push 0x128bb7e0 */
  push32((uint32_t)(0x128bb7e0u));
  /* 1289f3a7 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289f3a9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1289f3ae call 0x12894e60 */
  push32(0x1289f3b3u); f_12894e60();
  /* 1289f3b3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f3b6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1289f3b9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 1289f3bb push 0x128bb7e0 */
  push32((uint32_t)(0x128bb7e0u));
  /* 1289f3c0 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289f3c2 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1289f3c7 call 0x12894e60 */
  push32(0x1289f3ccu); f_12894e60();
  /* 1289f3cc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f3cf mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1289f3d2 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 1289f3d4 push 0x128bb7e0 */
  push32((uint32_t)(0x128bb7e0u));
  /* 1289f3d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289f3db push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1289f3e0 call 0x12894e60 */
  push32(0x1289f3e5u); f_12894e60();
  /* 1289f3e5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f3e8 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1289f3eb push 0x62 */
  push32((uint32_t)(0x62u));
  /* 1289f3ed push 0x128bb7e0 */
  push32((uint32_t)(0x128bb7e0u));
  /* 1289f3f2 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289f3f4 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 1289f3f9 call 0x12894e60 */
  push32(0x1289f3feu); f_12894e60();
  /* 1289f3fe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f401 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1289f404 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289f408 je 0x1289f41c */
  if (C.zf) goto L_1289f41c;
  /* 1289f40a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289f40e je 0x1289f41c */
  if (C.zf) goto L_1289f41c;
  /* 1289f410 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289f414 je 0x1289f41c */
  if (C.zf) goto L_1289f41c;
  /* 1289f416 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289f41a jne 0x1289f421 */
  if (!C.zf) goto L_1289f421;
L_1289f41c:;
  /* 1289f41c jmp 0x1289f662 */
  goto L_1289f662;
L_1289f421:;
  /* 1289f421 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1289f424 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 1289f427 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1289f42e jmp 0x1289f439 */
  goto L_1289f439;
L_1289f430:;
  /* 1289f430 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1289f433 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f436 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1289f439:;
  /* 1289f439 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289f440 jge 0x1289f455 */
  if ((C.sf==C.of)) goto L_1289f455;
  /* 1289f442 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289f445 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 1289f448 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 1289f44a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289f44d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f450 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1289f453 jmp 0x1289f430 */
  goto L_1289f430;
L_1289f455:;
  /* 1289f455 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1289f458 push eax */
  push32((uint32_t)(EAX));
  /* 1289f459 mov ecx, dword ptr [0x128bf8b8] */
  ECX = (r32((uint32_t)(0x128bf8b8)));
  /* 1289f45f push ecx */
  push32((uint32_t)(ECX));
  /* 1289f460 call dword ptr [0x128c22c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22c0))), 0x1289f466u);
  /* 1289f466 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289f468 jne 0x1289f46f */
  if (!C.zf) goto L_1289f46f;
  /* 1289f46a jmp 0x1289f662 */
  goto L_1289f662;
L_1289f46f:;
  /* 1289f46f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289f473 jbe 0x1289f47a */
  if ((C.cf||C.zf)) goto L_1289f47a;
  /* 1289f475 jmp 0x1289f662 */
  goto L_1289f662;
L_1289f47a:;
  /* 1289f47a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 1289f47d and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1289f483 mov dword ptr [0x128be158], edx */
  w32((uint32_t)(0x128be158), (EDX));
  /* 1289f489 cmp dword ptr [0x128be158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x128be158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289f490 jle 0x1289f4e9 */
  if ((C.zf||C.sf!=C.of)) goto L_1289f4e9;
  /* 1289f492 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 1289f495 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 1289f498 jmp 0x1289f4a3 */
  goto L_1289f4a3;
L_1289f49a:;
  /* 1289f49a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289f49d add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f4a0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_1289f4a3:;
  /* 1289f4a3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289f4a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289f4a8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1289f4aa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289f4ac je 0x1289f4e9 */
  if (C.zf) goto L_1289f4e9;
  /* 1289f4ae mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289f4b1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1289f4b3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1289f4b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1289f4b8 je 0x1289f4e9 */
  if (C.zf) goto L_1289f4e9;
  /* 1289f4ba mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289f4bd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1289f4bf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 1289f4c1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 1289f4c4 jmp 0x1289f4cf */
  goto L_1289f4cf;
L_1289f4c6:;
  /* 1289f4c6 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 1289f4c9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f4cc mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1289f4cf:;
  /* 1289f4cf mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289f4d2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1289f4d4 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1289f4d7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289f4da jg 0x1289f4e7 */
  if ((!C.zf&&C.sf==C.of)) goto L_1289f4e7;
  /* 1289f4dc mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1289f4df add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f4e2 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 1289f4e5 jmp 0x1289f4c6 */
  goto L_1289f4c6;
L_1289f4e7:;
  /* 1289f4e7 jmp 0x1289f49a */
  goto L_1289f49a;
L_1289f4e9:;
  /* 1289f4e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1289f4eb push 0 */
  push32((uint32_t)(0x0u));
  /* 1289f4ed push 0 */
  push32((uint32_t)(0x0u));
  /* 1289f4ef mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289f4f2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f4f5 push eax */
  push32((uint32_t)(EAX));
  /* 1289f4f6 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1289f4fb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1289f4fe push ecx */
  push32((uint32_t)(ECX));
  /* 1289f4ff push 1 */
  push32((uint32_t)(0x1u));
  /* 1289f501 call 0x1289daf0 */
  push32(0x1289f506u); f_1289daf0();
  /* 1289f506 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f509 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289f50b jne 0x1289f512 */
  if (!C.zf) goto L_1289f512;
  /* 1289f50d jmp 0x1289f662 */
  goto L_1289f662;
L_1289f512:;
  /* 1289f512 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289f515 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 1289f51a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1289f51d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1289f520 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 1289f527 jmp 0x1289f532 */
  goto L_1289f532;
L_1289f529:;
  /* 1289f529 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1289f52c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f52f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1289f532:;
  /* 1289f532 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289f539 jge 0x1289f550 */
  if ((C.sf==C.of)) goto L_1289f550;
  /* 1289f53b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 1289f53e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 1289f542 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1289f545 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 1289f548 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f54b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 1289f54e jmp 0x1289f529 */
  goto L_1289f529;
L_1289f550:;
  /* 1289f550 push 0 */
  push32((uint32_t)(0x0u));
  /* 1289f552 push 0 */
  push32((uint32_t)(0x0u));
  /* 1289f554 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1289f557 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f55a push edx */
  push32((uint32_t)(EDX));
  /* 1289f55b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 1289f560 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 1289f563 push eax */
  push32((uint32_t)(EAX));
  /* 1289f564 push 1 */
  push32((uint32_t)(0x1u));
  /* 1289f566 call 0x128a20a0 */
  push32(0x1289f56bu); f_128a20a0();
  /* 1289f56b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f56e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289f570 jne 0x1289f577 */
  if (!C.zf) goto L_1289f577;
  /* 1289f572 jmp 0x1289f662 */
  goto L_1289f662;
L_1289f577:;
  /* 1289f577 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1289f57a mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 1289f57f cmp dword ptr [0x128be158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x128be158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289f586 jle 0x1289f5e3 */
  if ((C.zf||C.sf!=C.of)) goto L_1289f5e3;
  /* 1289f588 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 1289f58b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1289f58e jmp 0x1289f599 */
  goto L_1289f599;
L_1289f590:;
  /* 1289f590 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289f593 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f596 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1289f599:;
  /* 1289f599 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289f59c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1289f59e mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1289f5a0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1289f5a2 je 0x1289f5e3 */
  if (C.zf) goto L_1289f5e3;
  /* 1289f5a4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289f5a7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1289f5a9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 1289f5ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1289f5ae je 0x1289f5e3 */
  if (C.zf) goto L_1289f5e3;
  /* 1289f5b0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289f5b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289f5b5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1289f5b7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1289f5ba jmp 0x1289f5c5 */
  goto L_1289f5c5;
L_1289f5bc:;
  /* 1289f5bc mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1289f5bf add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f5c2 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_1289f5c5:;
  /* 1289f5c5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 1289f5c8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289f5ca mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 1289f5cd cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289f5d0 jg 0x1289f5e1 */
  if ((!C.zf&&C.sf==C.of)) goto L_1289f5e1;
  /* 1289f5d2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1289f5d5 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289f5d8 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 1289f5df jmp 0x1289f5bc */
  goto L_1289f5bc;
L_1289f5e1:;
  /* 1289f5e1 jmp 0x1289f590 */
  goto L_1289f590;
L_1289f5e3:;
  /* 1289f5e3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289f5e6 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f5e9 mov dword ptr [0x128bdde8], eax */
  w32((uint32_t)(0x128bdde8), (EAX));
  /* 1289f5ee mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1289f5f1 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f5f4 mov dword ptr [0x128bddec], ecx */
  w32((uint32_t)(0x128bddec), (ECX));
  /* 1289f5fa cmp dword ptr [0x128bf8dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf8dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289f601 je 0x1289f614 */
  if (C.zf) goto L_1289f614;
  /* 1289f603 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289f605 mov edx, dword ptr [0x128bf8dc] */
  EDX = (r32((uint32_t)(0x128bf8dc)));
  /* 1289f60b push edx */
  push32((uint32_t)(EDX));
  /* 1289f60c call 0x128958f0 */
  push32(0x1289f611u); f_128958f0();
  /* 1289f611 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1289f614:;
  /* 1289f614 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289f617 mov dword ptr [0x128bf8dc], eax */
  w32((uint32_t)(0x128bf8dc), (EAX));
  /* 1289f61c cmp dword ptr [0x128bf8e0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf8e0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289f623 je 0x1289f636 */
  if (C.zf) goto L_1289f636;
  /* 1289f625 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289f627 mov ecx, dword ptr [0x128bf8e0] */
  ECX = (r32((uint32_t)(0x128bf8e0)));
  /* 1289f62d push ecx */
  push32((uint32_t)(ECX));
  /* 1289f62e call 0x128958f0 */
  push32(0x1289f633u); f_128958f0();
  /* 1289f633 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1289f636:;
  /* 1289f636 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1289f639 mov dword ptr [0x128bf8e0], edx */
  w32((uint32_t)(0x128bf8e0), (EDX));
  /* 1289f63f push 2 */
  push32((uint32_t)(0x2u));
  /* 1289f641 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1289f644 push eax */
  push32((uint32_t)(EAX));
  /* 1289f645 call 0x128958f0 */
  push32(0x1289f64au); f_128958f0();
  /* 1289f64a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f64d push 2 */
  push32((uint32_t)(0x2u));
  /* 1289f64f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 1289f652 push ecx */
  push32((uint32_t)(ECX));
  /* 1289f653 call 0x128958f0 */
  push32(0x1289f658u); f_128958f0();
  /* 1289f658 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f65b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289f65d jmp 0x1289f6ec */
  goto L_1289f6ec;
L_1289f662:;
  /* 1289f662 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289f664 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 1289f667 push edx */
  push32((uint32_t)(EDX));
  /* 1289f668 call 0x128958f0 */
  push32(0x1289f66du); f_128958f0();
  /* 1289f66d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f670 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289f672 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1289f675 push eax */
  push32((uint32_t)(EAX));
  /* 1289f676 call 0x128958f0 */
  push32(0x1289f67bu); f_128958f0();
  /* 1289f67b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f67e push 2 */
  push32((uint32_t)(0x2u));
  /* 1289f680 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 1289f683 push ecx */
  push32((uint32_t)(ECX));
  /* 1289f684 call 0x128958f0 */
  push32(0x1289f689u); f_128958f0();
  /* 1289f689 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f68c push 2 */
  push32((uint32_t)(0x2u));
  /* 1289f68e mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 1289f691 push edx */
  push32((uint32_t)(EDX));
  /* 1289f692 call 0x128958f0 */
  push32(0x1289f697u); f_128958f0();
  /* 1289f697 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f69a mov eax, 1 */
  EAX = (0x1u);
  /* 1289f69f jmp 0x1289f6ec */
  goto L_1289f6ec;
L_1289f6a1:;
  /* 1289f6a1 mov dword ptr [0x128bdde8], 0x128bddf2 */
  w32((uint32_t)(0x128bdde8), (0x128bddf2u));
  /* 1289f6ab mov dword ptr [0x128bddec], 0x128bddf2 */
  w32((uint32_t)(0x128bddec), (0x128bddf2u));
  /* 1289f6b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289f6b7 mov eax, dword ptr [0x128bf8dc] */
  EAX = (r32((uint32_t)(0x128bf8dc)));
  /* 1289f6bc push eax */
  push32((uint32_t)(EAX));
  /* 1289f6bd call 0x128958f0 */
  push32(0x1289f6c2u); f_128958f0();
  /* 1289f6c2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f6c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 1289f6c7 mov ecx, dword ptr [0x128bf8e0] */
  ECX = (r32((uint32_t)(0x128bf8e0)));
  /* 1289f6cd push ecx */
  push32((uint32_t)(ECX));
  /* 1289f6ce call 0x128958f0 */
  push32(0x1289f6d3u); f_128958f0();
  /* 1289f6d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f6d6 mov dword ptr [0x128bf8dc], 0 */
  w32((uint32_t)(0x128bf8dc), (0x0u));
  /* 1289f6e0 mov dword ptr [0x128bf8e0], 0 */
  w32((uint32_t)(0x128bf8e0), (0x0u));
  /* 1289f6ea xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1289f6ec:;
  /* 1289f6ec mov esp, ebp */
  ESP = (EBP);
  /* 1289f6ee pop ebp */
  EBP = (pop32());
  /* 1289f6ef ret  */
  ESPCHK(0x1289f350u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f6f0 @ 0x1289f6f0 (7 bytes, 5 insns) */
void f_1289f6f0(void) {
  FTRACE(0x1289f6f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289f6f0 push ebp */
  push32((uint32_t)(EBP));
  /* 1289f6f1 mov ebp, esp */
  EBP = (ESP);
  /* 1289f6f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289f6f5 pop ebp */
  EBP = (pop32());
  /* 1289f6f6 ret  */
  ESPCHK(0x1289f6f0u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x1289f700 (129 bytes, 56 insns) */
void f_1289f700(void) {
  FTRACE(0x1289f700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289f700 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1289f704 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1289f708 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1289f70e jne 0x1289f74c */
  if (!C.zf) goto L_1289f74c;
L_1289f710:;
  /* 1289f710 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 1289f712 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1289f714 jne 0x1289f744 */
  if (!C.zf) goto L_1289f744;
  /* 1289f716 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1289f718 je 0x1289f740 */
  if (C.zf) goto L_1289f740;
  /* 1289f71a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1289f71d jne 0x1289f744 */
  if (!C.zf) goto L_1289f744;
  /* 1289f71f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1289f721 je 0x1289f740 */
  if (C.zf) goto L_1289f740;
  /* 1289f723 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1289f726 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1289f729 jne 0x1289f744 */
  if (!C.zf) goto L_1289f744;
  /* 1289f72b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1289f72d je 0x1289f740 */
  if (C.zf) goto L_1289f740;
  /* 1289f72f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1289f732 jne 0x1289f744 */
  if (!C.zf) goto L_1289f744;
  /* 1289f734 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f737 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f73a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1289f73c jne 0x1289f710 */
  if (!C.zf) goto L_1289f710;
  /* 1289f73e mov edi, edi */
  EDI = (EDI);
L_1289f740:;
  /* 1289f740 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289f742 ret  */
  ESPCHK(0x1289f700u, _esp0);
  ESP += 4; return;
  /* 1289f743 nop  */
  /* nop */
L_1289f744:;
  /* 1289f744 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289f746 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1289f748 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1289f749 ret  */
  ESPCHK(0x1289f700u, _esp0);
  ESP += 4; return;
  /* 1289f74a mov edi, edi */
  EDI = (EDI);
L_1289f74c:;
  /* 1289f74c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 1289f752 je 0x1289f768 */
  if (C.zf) goto L_1289f768;
  /* 1289f754 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1289f756 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1289f757 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1289f759 jne 0x1289f744 */
  if (!C.zf) goto L_1289f744;
  /* 1289f75b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1289f75c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1289f75e je 0x1289f740 */
  if (C.zf) goto L_1289f740;
  /* 1289f760 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 1289f766 je 0x1289f710 */
  if (C.zf) goto L_1289f710;
L_1289f768:;
  /* 1289f768 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 1289f76b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f76e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1289f770 jne 0x1289f744 */
  if (!C.zf) goto L_1289f744;
  /* 1289f772 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1289f774 je 0x1289f740 */
  if (C.zf) goto L_1289f740;
  /* 1289f776 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1289f779 jne 0x1289f744 */
  if (!C.zf) goto L_1289f744;
  /* 1289f77b or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1289f77d je 0x1289f740 */
  if (C.zf) goto L_1289f740;
  /* 1289f77f add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f782 jmp 0x1289f710 */
  goto L_1289f710;
}

/* FUN_1000f790 @ 0x1289f790 (62 bytes, 35 insns) */
void f_1289f790(void) {
  FTRACE(0x1289f790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289f790 push ebp */
  push32((uint32_t)(EBP));
  /* 1289f791 mov ebp, esp */
  EBP = (ESP);
  /* 1289f793 push esi */
  push32((uint32_t)(ESI));
  /* 1289f794 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289f796 push eax */
  push32((uint32_t)(EAX));
  /* 1289f797 push eax */
  push32((uint32_t)(EAX));
  /* 1289f798 push eax */
  push32((uint32_t)(EAX));
  /* 1289f799 push eax */
  push32((uint32_t)(EAX));
  /* 1289f79a push eax */
  push32((uint32_t)(EAX));
  /* 1289f79b push eax */
  push32((uint32_t)(EAX));
  /* 1289f79c push eax */
  push32((uint32_t)(EAX));
  /* 1289f79d push eax */
  push32((uint32_t)(EAX));
  /* 1289f79e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289f7a1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1289f7a4:;
  /* 1289f7a4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1289f7a6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1289f7a8 je 0x1289f7b1 */
  if (C.zf) goto L_1289f7b1;
  /* 1289f7aa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1289f7ab bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1289f7ab");
  /* 1289f7af jmp 0x1289f7a4 */
  goto L_1289f7a4;
L_1289f7b1:;
  /* 1289f7b1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1289f7b4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1289f7b7 nop  */
  /* nop */
L_1289f7b8:;
  /* 1289f7b8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1289f7b9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1289f7bb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1289f7bd je 0x1289f7c6 */
  if (C.zf) goto L_1289f7c6;
  /* 1289f7bf inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1289f7c0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1289f7c0");
  /* 1289f7c4 jae 0x1289f7b8 */
  if (!C.cf) goto L_1289f7b8;
L_1289f7c6:;
  /* 1289f7c6 mov eax, ecx */
  EAX = (ECX);
  /* 1289f7c8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f7cb pop esi */
  ESI = (pop32());
  /* 1289f7cc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1289f7cd ret  */
  ESPCHK(0x1289f790u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x1289f7d0 (56 bytes, 31 insns) */
void f_1289f7d0(void) {
  FTRACE(0x1289f7d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289f7d0 push ebp */
  push32((uint32_t)(EBP));
  /* 1289f7d1 mov ebp, esp */
  EBP = (ESP);
  /* 1289f7d3 push edi */
  push32((uint32_t)(EDI));
  /* 1289f7d4 push esi */
  push32((uint32_t)(ESI));
  /* 1289f7d5 push ebx */
  push32((uint32_t)(EBX));
  /* 1289f7d6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1289f7d9 jecxz 0x1289f801 */
  x86_unimpl("jecxz @ 0x1289f7d9");
  /* 1289f7db mov ebx, ecx */
  EBX = (ECX);
  /* 1289f7dd mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1289f7e0 mov esi, edi */
  ESI = (EDI);
  /* 1289f7e2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289f7e4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 1289f7e6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1289f7e8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f7ea mov edi, esi */
  EDI = (ESI);
  /* 1289f7ec mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1289f7ef repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 1289f7f1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 1289f7f4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1289f7f6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1289f7f9 ja 0x1289f7ff */
  if ((!C.cf&&!C.zf)) goto L_1289f7ff;
  /* 1289f7fb je 0x1289f801 */
  if (C.zf) goto L_1289f801;
  /* 1289f7fd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1289f7fe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_1289f7ff:;
  /* 1289f7ff not ecx */
  ECX = (~(ECX));
L_1289f801:;
  /* 1289f801 mov eax, ecx */
  EAX = (ECX);
  /* 1289f803 pop ebx */
  EBX = (pop32());
  /* 1289f804 pop esi */
  ESI = (pop32());
  /* 1289f805 pop edi */
  EDI = (pop32());
  /* 1289f806 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1289f807 ret  */
  ESPCHK(0x1289f7d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f810 @ 0x1289f810 (58 bytes, 32 insns) */
void f_1289f810(void) {
  FTRACE(0x1289f810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289f810 push ebp */
  push32((uint32_t)(EBP));
  /* 1289f811 mov ebp, esp */
  EBP = (ESP);
  /* 1289f813 push esi */
  push32((uint32_t)(ESI));
  /* 1289f814 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289f816 push eax */
  push32((uint32_t)(EAX));
  /* 1289f817 push eax */
  push32((uint32_t)(EAX));
  /* 1289f818 push eax */
  push32((uint32_t)(EAX));
  /* 1289f819 push eax */
  push32((uint32_t)(EAX));
  /* 1289f81a push eax */
  push32((uint32_t)(EAX));
  /* 1289f81b push eax */
  push32((uint32_t)(EAX));
  /* 1289f81c push eax */
  push32((uint32_t)(EAX));
  /* 1289f81d push eax */
  push32((uint32_t)(EAX));
  /* 1289f81e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289f821 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1289f824:;
  /* 1289f824 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1289f826 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1289f828 je 0x1289f831 */
  if (C.zf) goto L_1289f831;
  /* 1289f82a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1289f82b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1289f82b");
  /* 1289f82f jmp 0x1289f824 */
  goto L_1289f824;
L_1289f831:;
  /* 1289f831 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_1289f834:;
  /* 1289f834 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1289f836 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1289f838 je 0x1289f844 */
  if (C.zf) goto L_1289f844;
  /* 1289f83a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1289f83b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1289f83b");
  /* 1289f83f jae 0x1289f834 */
  if (!C.cf) goto L_1289f834;
  /* 1289f841 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_1289f844:;
  /* 1289f844 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f847 pop esi */
  ESI = (pop32());
  /* 1289f848 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1289f849 ret  */
  ESPCHK(0x1289f810u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f850 @ 0x1289f850 (512 bytes, 147 insns) */
void f_1289f850(void) {
  FTRACE(0x1289f850u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289f850 push ebp */
  push32((uint32_t)(EBP));
  /* 1289f851 mov ebp, esp */
  EBP = (ESP);
  /* 1289f853 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289f856 cmp dword ptr [0x128bf928], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf928))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289f85d jne 0x1289f882 */
  if (!C.zf) goto L_1289f882;
  /* 1289f85f call 0x128a0320 */
  push32(0x1289f864u); f_128a0320();
  /* 1289f864 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289f866 je 0x1289f872 */
  if (C.zf) goto L_1289f872;
  /* 1289f868 mov eax, dword ptr [0x128c22f4] */
  EAX = (r32((uint32_t)(0x128c22f4)));
  /* 1289f86d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1289f870 jmp 0x1289f879 */
  goto L_1289f879;
L_1289f872:;
  /* 1289f872 mov dword ptr [ebp - 8], 0x128a0370 */
  w32((uint32_t)(EBP + -0x8), (0x128a0370u));
L_1289f879:;
  /* 1289f879 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 1289f87c mov dword ptr [0x128bf928], ecx */
  w32((uint32_t)(0x128bf928), (ECX));
L_1289f882:;
  /* 1289f882 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289f886 jne 0x1289f892 */
  if (!C.zf) goto L_1289f892;
  /* 1289f888 call 0x128a0170 */
  push32(0x1289f88du); f_128a0170();
  /* 1289f88d jmp 0x1289f95e */
  goto L_1289f95e;
L_1289f892:;
  /* 1289f892 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289f895 mov dword ptr [0x128bf918], edx */
  w32((uint32_t)(0x128bf918), (EDX));
  /* 1289f89b cmp dword ptr [0x128bf918], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf918))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289f8a2 je 0x1289f8c4 */
  if (C.zf) goto L_1289f8c4;
  /* 1289f8a4 mov eax, dword ptr [0x128bf918] */
  EAX = (r32((uint32_t)(0x128bf918)));
  /* 1289f8a9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1289f8ac test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1289f8ae je 0x1289f8c4 */
  if (C.zf) goto L_1289f8c4;
  /* 1289f8b0 push 0x128bf918 */
  push32((uint32_t)(0x128bf918u));
  /* 1289f8b5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1289f8b7 push 0x128bea90 */
  push32((uint32_t)(0x128bea90u));
  /* 1289f8bc call 0x1289fa50 */
  push32(0x1289f8c1u); f_1289fa50();
  /* 1289f8c1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1289f8c4:;
  /* 1289f8c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289f8c7 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f8ca mov dword ptr [0x128bf91c], edx */
  w32((uint32_t)(0x128bf91c), (EDX));
  /* 1289f8d0 cmp dword ptr [0x128bf91c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf91c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289f8d7 je 0x1289f8f9 */
  if (C.zf) goto L_1289f8f9;
  /* 1289f8d9 mov eax, dword ptr [0x128bf91c] */
  EAX = (r32((uint32_t)(0x128bf91c)));
  /* 1289f8de movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1289f8e1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1289f8e3 je 0x1289f8f9 */
  if (C.zf) goto L_1289f8f9;
  /* 1289f8e5 push 0x128bf91c */
  push32((uint32_t)(0x128bf91cu));
  /* 1289f8ea push 0x16 */
  push32((uint32_t)(0x16u));
  /* 1289f8ec push 0x128be9d8 */
  push32((uint32_t)(0x128be9d8u));
  /* 1289f8f1 call 0x1289fa50 */
  push32(0x1289f8f6u); f_1289fa50();
  /* 1289f8f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1289f8f9:;
  /* 1289f8f9 mov dword ptr [0x128bf920], 0 */
  w32((uint32_t)(0x128bf920), (0x0u));
  /* 1289f903 cmp dword ptr [0x128bf918], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf918))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289f90a je 0x1289f93d */
  if (C.zf) goto L_1289f93d;
  /* 1289f90c mov edx, dword ptr [0x128bf918] */
  EDX = (r32((uint32_t)(0x128bf918)));
  /* 1289f912 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 1289f915 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289f917 je 0x1289f93d */
  if (C.zf) goto L_1289f93d;
  /* 1289f919 cmp dword ptr [0x128bf91c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf91c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289f920 je 0x1289f936 */
  if (C.zf) goto L_1289f936;
  /* 1289f922 mov ecx, dword ptr [0x128bf91c] */
  ECX = (r32((uint32_t)(0x128bf91c)));
  /* 1289f928 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 1289f92b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1289f92d je 0x1289f936 */
  if (C.zf) goto L_1289f936;
  /* 1289f92f call 0x1289fae0 */
  push32(0x1289f934u); f_1289fae0();
  /* 1289f934 jmp 0x1289f93b */
  goto L_1289f93b;
L_1289f936:;
  /* 1289f936 call 0x1289fed0 */
  push32(0x1289f93bu); f_1289fed0();
L_1289f93b:;
  /* 1289f93b jmp 0x1289f95e */
  goto L_1289f95e;
L_1289f93d:;
  /* 1289f93d cmp dword ptr [0x128bf91c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf91c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289f944 je 0x1289f959 */
  if (C.zf) goto L_1289f959;
  /* 1289f946 mov eax, dword ptr [0x128bf91c] */
  EAX = (r32((uint32_t)(0x128bf91c)));
  /* 1289f94b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1289f94e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1289f950 je 0x1289f959 */
  if (C.zf) goto L_1289f959;
  /* 1289f952 call 0x128a0070 */
  push32(0x1289f957u); f_128a0070();
  /* 1289f957 jmp 0x1289f95e */
  goto L_1289f95e;
L_1289f959:;
  /* 1289f959 call 0x128a0170 */
  push32(0x1289f95eu); f_128a0170();
L_1289f95e:;
  /* 1289f95e cmp dword ptr [0x128bf920], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf920))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289f965 jne 0x1289f96e */
  if (!C.zf) goto L_1289f96e;
  /* 1289f967 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289f969 jmp 0x1289fa4c */
  goto L_1289fa4c;
L_1289f96e:;
  /* 1289f96e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289f971 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f977 push edx */
  push32((uint32_t)(EDX));
  /* 1289f978 call 0x128a01a0 */
  push32(0x1289f97du); f_128a01a0();
  /* 1289f97d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289f980 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1289f983 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289f987 je 0x1289f99c */
  if (C.zf) goto L_1289f99c;
  /* 1289f989 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289f98c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1289f991 push eax */
  push32((uint32_t)(EAX));
  /* 1289f992 call dword ptr [0x128c22f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22f0))), 0x1289f998u);
  /* 1289f998 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289f99a jne 0x1289f9a3 */
  if (!C.zf) goto L_1289f9a3;
L_1289f99c:;
  /* 1289f99c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289f99e jmp 0x1289fa4c */
  goto L_1289fa4c;
L_1289f9a3:;
  /* 1289f9a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1289f9a5 mov ecx, dword ptr [0x128bf908] */
  ECX = (r32((uint32_t)(0x128bf908)));
  /* 1289f9ab push ecx */
  push32((uint32_t)(ECX));
  /* 1289f9ac call dword ptr [0x128c22ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22ec))), 0x1289f9b2u);
  /* 1289f9b2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289f9b4 jne 0x1289f9bd */
  if (!C.zf) goto L_1289f9bd;
  /* 1289f9b6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289f9b8 jmp 0x1289fa4c */
  goto L_1289fa4c;
L_1289f9bd:;
  /* 1289f9bd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289f9c1 je 0x1289f9e8 */
  if (C.zf) goto L_1289f9e8;
  /* 1289f9c3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289f9c6 mov ax, word ptr [0x128bf908] */
  AX = (r16((uint32_t)(0x128bf908)));
  /* 1289f9cc mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 1289f9cf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289f9d2 mov dx, word ptr [0x128bf924] */
  DX = (r16((uint32_t)(0x128bf924)));
  /* 1289f9d9 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 1289f9dd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1289f9e0 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 1289f9e4 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_1289f9e8:;
  /* 1289f9e8 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289f9ec je 0x1289fa47 */
  if (C.zf) goto L_1289fa47;
  /* 1289f9ee push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1289f9f0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1289f9f3 push edx */
  push32((uint32_t)(EDX));
  /* 1289f9f4 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 1289f9f9 mov eax, dword ptr [0x128bf908] */
  EAX = (r32((uint32_t)(0x128bf908)));
  /* 1289f9fe push eax */
  push32((uint32_t)(EAX));
  /* 1289f9ff call dword ptr [0x128bf928] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bf928))), 0x1289fa05u);
  /* 1289fa05 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289fa07 jne 0x1289fa0d */
  if (!C.zf) goto L_1289fa0d;
  /* 1289fa09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289fa0b jmp 0x1289fa4c */
  goto L_1289fa4c;
L_1289fa0d:;
  /* 1289fa0d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1289fa0f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1289fa12 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289fa15 push ecx */
  push32((uint32_t)(ECX));
  /* 1289fa16 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 1289fa1b mov edx, dword ptr [0x128bf924] */
  EDX = (r32((uint32_t)(0x128bf924)));
  /* 1289fa21 push edx */
  push32((uint32_t)(EDX));
  /* 1289fa22 call dword ptr [0x128bf928] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bf928))), 0x1289fa28u);
  /* 1289fa28 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289fa2a jne 0x1289fa30 */
  if (!C.zf) goto L_1289fa30;
  /* 1289fa2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1289fa2e jmp 0x1289fa4c */
  goto L_1289fa4c;
L_1289fa30:;
  /* 1289fa30 push 0xa */
  push32((uint32_t)(0xau));
  /* 1289fa32 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1289fa35 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289fa3a push eax */
  push32((uint32_t)(EAX));
  /* 1289fa3b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289fa3e push ecx */
  push32((uint32_t)(ECX));
  /* 1289fa3f call 0x128979a0 */
  push32(0x1289fa44u); f_128979a0();
  /* 1289fa44 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1289fa47:;
  /* 1289fa47 mov eax, 1 */
  EAX = (0x1u);
L_1289fa4c:;
  /* 1289fa4c mov esp, ebp */
  ESP = (EBP);
  /* 1289fa4e pop ebp */
  EBP = (pop32());
  /* 1289fa4f ret  */
  ESPCHK(0x1289f850u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fa50 @ 0x1289fa50 (130 bytes, 47 insns) */
void f_1289fa50(void) {
  FTRACE(0x1289fa50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289fa50 push ebp */
  push32((uint32_t)(EBP));
  /* 1289fa51 mov ebp, esp */
  EBP = (ESP);
  /* 1289fa53 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289fa56 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 1289fa5d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_1289fa64:;
  /* 1289fa64 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289fa67 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289fa6a jg 0x1289face */
  if ((!C.zf&&C.sf==C.of)) goto L_1289face;
  /* 1289fa6c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289fa70 je 0x1289face */
  if (C.zf) goto L_1289face;
  /* 1289fa72 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1289fa75 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289fa78 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1289fa79 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289fa7b sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1289fa7d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1289fa80 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289fa83 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289fa86 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 1289fa89 push eax */
  push32((uint32_t)(EAX));
  /* 1289fa8a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1289fa8d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 1289fa8f push edx */
  push32((uint32_t)(EDX));
  /* 1289fa90 call 0x128a2310 */
  push32(0x1289fa95u); f_128a2310();
  /* 1289fa95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289fa98 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1289fa9b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289fa9f jne 0x1289fab2 */
  if (!C.zf) goto L_1289fab2;
  /* 1289faa1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289faa4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289faa7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 1289faab mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1289faae mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1289fab0 jmp 0x1289facc */
  goto L_1289facc;
L_1289fab2:;
  /* 1289fab2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289fab6 jge 0x1289fac3 */
  if ((C.sf==C.of)) goto L_1289fac3;
  /* 1289fab8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289fabb sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289fabe mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 1289fac1 jmp 0x1289facc */
  goto L_1289facc;
L_1289fac3:;
  /* 1289fac3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289fac6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289fac9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_1289facc:;
  /* 1289facc jmp 0x1289fa64 */
  goto L_1289fa64;
L_1289face:;
  /* 1289face mov esp, ebp */
  ESP = (EBP);
  /* 1289fad0 pop ebp */
  EBP = (pop32());
  /* 1289fad1 ret  */
  ESPCHK(0x1289fa50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fae0 @ 0x1289fae0 (186 bytes, 50 insns) */
void f_1289fae0(void) {
  FTRACE(0x1289fae0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289fae0 push ebp */
  push32((uint32_t)(EBP));
  /* 1289fae1 mov ebp, esp */
  EBP = (ESP);
  /* 1289fae3 push ecx */
  push32((uint32_t)(ECX));
  /* 1289fae4 mov eax, dword ptr [0x128bf918] */
  EAX = (r32((uint32_t)(0x128bf918)));
  /* 1289fae9 push eax */
  push32((uint32_t)(EAX));
  /* 1289faea call 0x12897c90 */
  push32(0x1289faefu); f_12897c90();
  /* 1289faef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289faf2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1289faf4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289faf7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1289fafa mov dword ptr [0x128bf914], ecx */
  w32((uint32_t)(0x128bf914), (ECX));
  /* 1289fb00 mov edx, dword ptr [0x128bf91c] */
  EDX = (r32((uint32_t)(0x128bf91c)));
  /* 1289fb06 push edx */
  push32((uint32_t)(EDX));
  /* 1289fb07 call 0x12897c90 */
  push32(0x1289fb0cu); f_12897c90();
  /* 1289fb0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289fb0f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1289fb11 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289fb14 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1289fb17 mov dword ptr [0x128bf90c], ecx */
  w32((uint32_t)(0x128bf90c), (ECX));
  /* 1289fb1d mov dword ptr [0x128bf908], 0 */
  w32((uint32_t)(0x128bf908), (0x0u));
  /* 1289fb27 cmp dword ptr [0x128bf914], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf914))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289fb2e je 0x1289fb39 */
  if (C.zf) goto L_1289fb39;
  /* 1289fb30 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1289fb37 jmp 0x1289fb4b */
  goto L_1289fb4b;
L_1289fb39:;
  /* 1289fb39 mov edx, dword ptr [0x128bf918] */
  EDX = (r32((uint32_t)(0x128bf918)));
  /* 1289fb3f push edx */
  push32((uint32_t)(EDX));
  /* 1289fb40 call 0x128a0580 */
  push32(0x1289fb45u); f_128a0580();
  /* 1289fb45 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289fb48 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1289fb4b:;
  /* 1289fb4b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289fb4e mov dword ptr [0x128bf910], eax */
  w32((uint32_t)(0x128bf910), (EAX));
  /* 1289fb53 push 1 */
  push32((uint32_t)(0x1u));
  /* 1289fb55 push 0x1289fba0 */
  push32((uint32_t)(0x1289fba0u));
  /* 1289fb5a call dword ptr [0x128c22d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22d4))), 0x1289fb60u);
  /* 1289fb60 mov ecx, dword ptr [0x128bf920] */
  ECX = (r32((uint32_t)(0x128bf920)));
  /* 1289fb66 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 1289fb6c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1289fb6e je 0x1289fb8c */
  if (C.zf) goto L_1289fb8c;
  /* 1289fb70 mov edx, dword ptr [0x128bf920] */
  EDX = (r32((uint32_t)(0x128bf920)));
  /* 1289fb76 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 1289fb7c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1289fb7e je 0x1289fb8c */
  if (C.zf) goto L_1289fb8c;
  /* 1289fb80 mov eax, dword ptr [0x128bf920] */
  EAX = (r32((uint32_t)(0x128bf920)));
  /* 1289fb85 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 1289fb88 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289fb8a jne 0x1289fb96 */
  if (!C.zf) goto L_1289fb96;
L_1289fb8c:;
  /* 1289fb8c mov dword ptr [0x128bf920], 0 */
  w32((uint32_t)(0x128bf920), (0x0u));
L_1289fb96:;
  /* 1289fb96 mov esp, ebp */
  ESP = (EBP);
  /* 1289fb98 pop ebp */
  EBP = (pop32());
  /* 1289fb99 ret  */
  ESPCHK(0x1289fae0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fba0 @ 0x1289fba0 (804 bytes, 220 insns) */
void f_1289fba0(void) {
  FTRACE(0x1289fba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289fba0 push ebp */
  push32((uint32_t)(EBP));
  /* 1289fba1 mov ebp, esp */
  EBP = (ESP);
  /* 1289fba3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289fba6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289fba9 push eax */
  push32((uint32_t)(EAX));
  /* 1289fbaa call 0x128a0500 */
  push32(0x1289fbafu); f_128a0500();
  /* 1289fbaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289fbb2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 1289fbb5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1289fbb7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1289fbba push ecx */
  push32((uint32_t)(ECX));
  /* 1289fbbb mov edx, dword ptr [0x128bf90c] */
  EDX = (r32((uint32_t)(0x128bf90c)));
  /* 1289fbc1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1289fbc3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289fbc5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 1289fbcb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289fbd1 push edx */
  push32((uint32_t)(EDX));
  /* 1289fbd2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1289fbd5 push eax */
  push32((uint32_t)(EAX));
  /* 1289fbd6 call dword ptr [0x128bf928] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bf928))), 0x1289fbdcu);
  /* 1289fbdc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289fbde jne 0x1289fbf4 */
  if (!C.zf) goto L_1289fbf4;
  /* 1289fbe0 mov dword ptr [0x128bf920], 0 */
  w32((uint32_t)(0x128bf920), (0x0u));
  /* 1289fbea mov eax, 1 */
  EAX = (0x1u);
  /* 1289fbef jmp 0x1289febe */
  goto L_1289febe;
L_1289fbf4:;
  /* 1289fbf4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1289fbf7 push ecx */
  push32((uint32_t)(ECX));
  /* 1289fbf8 mov edx, dword ptr [0x128bf91c] */
  EDX = (r32((uint32_t)(0x128bf91c)));
  /* 1289fbfe push edx */
  push32((uint32_t)(EDX));
  /* 1289fbff call 0x128a2310 */
  push32(0x1289fc04u); f_128a2310();
  /* 1289fc04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289fc07 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289fc09 jne 0x1289fd2f */
  if (!C.zf) goto L_1289fd2f;
  /* 1289fc0f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1289fc11 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1289fc14 push eax */
  push32((uint32_t)(EAX));
  /* 1289fc15 mov ecx, dword ptr [0x128bf914] */
  ECX = (r32((uint32_t)(0x128bf914)));
  /* 1289fc1b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1289fc1d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289fc1f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1289fc25 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289fc2b push ecx */
  push32((uint32_t)(ECX));
  /* 1289fc2c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1289fc2f push edx */
  push32((uint32_t)(EDX));
  /* 1289fc30 call dword ptr [0x128bf928] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bf928))), 0x1289fc36u);
  /* 1289fc36 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289fc38 jne 0x1289fc4e */
  if (!C.zf) goto L_1289fc4e;
  /* 1289fc3a mov dword ptr [0x128bf920], 0 */
  w32((uint32_t)(0x128bf920), (0x0u));
  /* 1289fc44 mov eax, 1 */
  EAX = (0x1u);
  /* 1289fc49 jmp 0x1289febe */
  goto L_1289febe;
L_1289fc4e:;
  /* 1289fc4e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1289fc51 push eax */
  push32((uint32_t)(EAX));
  /* 1289fc52 mov ecx, dword ptr [0x128bf918] */
  ECX = (r32((uint32_t)(0x128bf918)));
  /* 1289fc58 push ecx */
  push32((uint32_t)(ECX));
  /* 1289fc59 call 0x128a2310 */
  push32(0x1289fc5eu); f_128a2310();
  /* 1289fc5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289fc61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289fc63 jne 0x1289fc90 */
  if (!C.zf) goto L_1289fc90;
  /* 1289fc65 mov edx, dword ptr [0x128bf920] */
  EDX = (r32((uint32_t)(0x128bf920)));
  /* 1289fc6b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 1289fc71 mov dword ptr [0x128bf920], edx */
  w32((uint32_t)(0x128bf920), (EDX));
  /* 1289fc77 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1289fc7a mov dword ptr [0x128bf924], eax */
  w32((uint32_t)(0x128bf924), (EAX));
  /* 1289fc7f mov ecx, dword ptr [0x128bf924] */
  ECX = (r32((uint32_t)(0x128bf924)));
  /* 1289fc85 mov dword ptr [0x128bf908], ecx */
  w32((uint32_t)(0x128bf908), (ECX));
  /* 1289fc8b jmp 0x1289fd2f */
  goto L_1289fd2f;
L_1289fc90:;
  /* 1289fc90 mov edx, dword ptr [0x128bf920] */
  EDX = (r32((uint32_t)(0x128bf920)));
  /* 1289fc96 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 1289fc99 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1289fc9b jne 0x1289fd2f */
  if (!C.zf) goto L_1289fd2f;
  /* 1289fca1 cmp dword ptr [0x128bf910], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf910))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289fca8 je 0x1289fcfd */
  if (C.zf) goto L_1289fcfd;
  /* 1289fcaa mov eax, dword ptr [0x128bf910] */
  EAX = (r32((uint32_t)(0x128bf910)));
  /* 1289fcaf push eax */
  push32((uint32_t)(EAX));
  /* 1289fcb0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1289fcb3 push ecx */
  push32((uint32_t)(ECX));
  /* 1289fcb4 mov edx, dword ptr [0x128bf918] */
  EDX = (r32((uint32_t)(0x128bf918)));
  /* 1289fcba push edx */
  push32((uint32_t)(EDX));
  /* 1289fcbb call 0x128a23e0 */
  push32(0x1289fcc0u); f_128a23e0();
  /* 1289fcc0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289fcc3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289fcc5 jne 0x1289fcfd */
  if (!C.zf) goto L_1289fcfd;
  /* 1289fcc7 mov eax, dword ptr [0x128bf920] */
  EAX = (r32((uint32_t)(0x128bf920)));
  /* 1289fccc or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1289fcce mov dword ptr [0x128bf920], eax */
  w32((uint32_t)(0x128bf920), (EAX));
  /* 1289fcd3 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1289fcd6 mov dword ptr [0x128bf924], ecx */
  w32((uint32_t)(0x128bf924), (ECX));
  /* 1289fcdc mov edx, dword ptr [0x128bf918] */
  EDX = (r32((uint32_t)(0x128bf918)));
  /* 1289fce2 push edx */
  push32((uint32_t)(EDX));
  /* 1289fce3 call 0x12897c90 */
  push32(0x1289fce8u); f_12897c90();
  /* 1289fce8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289fceb cmp eax, dword ptr [0x128bf910] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x128bf910))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289fcf1 jne 0x1289fcfb */
  if (!C.zf) goto L_1289fcfb;
  /* 1289fcf3 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1289fcf6 mov dword ptr [0x128bf908], eax */
  w32((uint32_t)(0x128bf908), (EAX));
L_1289fcfb:;
  /* 1289fcfb jmp 0x1289fd2f */
  goto L_1289fd2f;
L_1289fcfd:;
  /* 1289fcfd mov ecx, dword ptr [0x128bf920] */
  ECX = (r32((uint32_t)(0x128bf920)));
  /* 1289fd03 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 1289fd06 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1289fd08 jne 0x1289fd2f */
  if (!C.zf) goto L_1289fd2f;
  /* 1289fd0a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1289fd0d push edx */
  push32((uint32_t)(EDX));
  /* 1289fd0e call 0x128a0240 */
  push32(0x1289fd13u); f_128a0240();
  /* 1289fd13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289fd16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289fd18 je 0x1289fd2f */
  if (C.zf) goto L_1289fd2f;
  /* 1289fd1a mov eax, dword ptr [0x128bf920] */
  EAX = (r32((uint32_t)(0x128bf920)));
  /* 1289fd1f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 1289fd21 mov dword ptr [0x128bf920], eax */
  w32((uint32_t)(0x128bf920), (EAX));
  /* 1289fd26 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1289fd29 mov dword ptr [0x128bf924], ecx */
  w32((uint32_t)(0x128bf924), (ECX));
L_1289fd2f:;
  /* 1289fd2f mov edx, dword ptr [0x128bf920] */
  EDX = (r32((uint32_t)(0x128bf920)));
  /* 1289fd35 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 1289fd3b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289fd41 je 0x1289feb1 */
  if (C.zf) goto L_1289feb1;
  /* 1289fd47 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1289fd49 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1289fd4c push eax */
  push32((uint32_t)(EAX));
  /* 1289fd4d mov ecx, dword ptr [0x128bf914] */
  ECX = (r32((uint32_t)(0x128bf914)));
  /* 1289fd53 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1289fd55 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289fd57 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 1289fd5d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289fd63 push ecx */
  push32((uint32_t)(ECX));
  /* 1289fd64 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1289fd67 push edx */
  push32((uint32_t)(EDX));
  /* 1289fd68 call dword ptr [0x128bf928] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bf928))), 0x1289fd6eu);
  /* 1289fd6e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289fd70 jne 0x1289fd86 */
  if (!C.zf) goto L_1289fd86;
  /* 1289fd72 mov dword ptr [0x128bf920], 0 */
  w32((uint32_t)(0x128bf920), (0x0u));
  /* 1289fd7c mov eax, 1 */
  EAX = (0x1u);
  /* 1289fd81 jmp 0x1289febe */
  goto L_1289febe;
L_1289fd86:;
  /* 1289fd86 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1289fd89 push eax */
  push32((uint32_t)(EAX));
  /* 1289fd8a mov ecx, dword ptr [0x128bf918] */
  ECX = (r32((uint32_t)(0x128bf918)));
  /* 1289fd90 push ecx */
  push32((uint32_t)(ECX));
  /* 1289fd91 call 0x128a2310 */
  push32(0x1289fd96u); f_128a2310();
  /* 1289fd96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289fd99 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289fd9b jne 0x1289fe50 */
  if (!C.zf) goto L_1289fe50;
  /* 1289fda1 mov edx, dword ptr [0x128bf920] */
  EDX = (r32((uint32_t)(0x128bf920)));
  /* 1289fda7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 1289fdaa mov dword ptr [0x128bf920], edx */
  w32((uint32_t)(0x128bf920), (EDX));
  /* 1289fdb0 cmp dword ptr [0x128bf914], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf914))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289fdb7 je 0x1289fdda */
  if (C.zf) goto L_1289fdda;
  /* 1289fdb9 mov eax, dword ptr [0x128bf920] */
  EAX = (r32((uint32_t)(0x128bf920)));
  /* 1289fdbe or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1289fdc1 mov dword ptr [0x128bf920], eax */
  w32((uint32_t)(0x128bf920), (EAX));
  /* 1289fdc6 cmp dword ptr [0x128bf908], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf908))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289fdcd jne 0x1289fdd8 */
  if (!C.zf) goto L_1289fdd8;
  /* 1289fdcf mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1289fdd2 mov dword ptr [0x128bf908], ecx */
  w32((uint32_t)(0x128bf908), (ECX));
L_1289fdd8:;
  /* 1289fdd8 jmp 0x1289fe4e */
  goto L_1289fe4e;
L_1289fdda:;
  /* 1289fdda cmp dword ptr [0x128bf910], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf910))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289fde1 je 0x1289fe2f */
  if (C.zf) goto L_1289fe2f;
  /* 1289fde3 mov edx, dword ptr [0x128bf918] */
  EDX = (r32((uint32_t)(0x128bf918)));
  /* 1289fde9 push edx */
  push32((uint32_t)(EDX));
  /* 1289fdea call 0x12897c90 */
  push32(0x1289fdefu); f_12897c90();
  /* 1289fdef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289fdf2 cmp eax, dword ptr [0x128bf910] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x128bf910))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289fdf8 jne 0x1289fe2f */
  if (!C.zf) goto L_1289fe2f;
  /* 1289fdfa push 1 */
  push32((uint32_t)(0x1u));
  /* 1289fdfc mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1289fdff push eax */
  push32((uint32_t)(EAX));
  /* 1289fe00 call 0x128a0290 */
  push32(0x1289fe05u); f_128a0290();
  /* 1289fe05 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289fe08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289fe0a je 0x1289fe2d */
  if (C.zf) goto L_1289fe2d;
  /* 1289fe0c mov ecx, dword ptr [0x128bf920] */
  ECX = (r32((uint32_t)(0x128bf920)));
  /* 1289fe12 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 1289fe15 mov dword ptr [0x128bf920], ecx */
  w32((uint32_t)(0x128bf920), (ECX));
  /* 1289fe1b cmp dword ptr [0x128bf908], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf908))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289fe22 jne 0x1289fe2d */
  if (!C.zf) goto L_1289fe2d;
  /* 1289fe24 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1289fe27 mov dword ptr [0x128bf908], edx */
  w32((uint32_t)(0x128bf908), (EDX));
L_1289fe2d:;
  /* 1289fe2d jmp 0x1289fe4e */
  goto L_1289fe4e;
L_1289fe2f:;
  /* 1289fe2f mov eax, dword ptr [0x128bf920] */
  EAX = (r32((uint32_t)(0x128bf920)));
  /* 1289fe34 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1289fe37 mov dword ptr [0x128bf920], eax */
  w32((uint32_t)(0x128bf920), (EAX));
  /* 1289fe3c cmp dword ptr [0x128bf908], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf908))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289fe43 jne 0x1289fe4e */
  if (!C.zf) goto L_1289fe4e;
  /* 1289fe45 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1289fe48 mov dword ptr [0x128bf908], ecx */
  w32((uint32_t)(0x128bf908), (ECX));
L_1289fe4e:;
  /* 1289fe4e jmp 0x1289feb1 */
  goto L_1289feb1;
L_1289fe50:;
  /* 1289fe50 cmp dword ptr [0x128bf914], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf914))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289fe57 jne 0x1289feb1 */
  if (!C.zf) goto L_1289feb1;
  /* 1289fe59 cmp dword ptr [0x128bf910], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf910))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289fe60 je 0x1289feb1 */
  if (C.zf) goto L_1289feb1;
  /* 1289fe62 mov edx, dword ptr [0x128bf910] */
  EDX = (r32((uint32_t)(0x128bf910)));
  /* 1289fe68 push edx */
  push32((uint32_t)(EDX));
  /* 1289fe69 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 1289fe6c push eax */
  push32((uint32_t)(EAX));
  /* 1289fe6d mov ecx, dword ptr [0x128bf918] */
  ECX = (r32((uint32_t)(0x128bf918)));
  /* 1289fe73 push ecx */
  push32((uint32_t)(ECX));
  /* 1289fe74 call 0x128a23e0 */
  push32(0x1289fe79u); f_128a23e0();
  /* 1289fe79 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289fe7c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289fe7e jne 0x1289feb1 */
  if (!C.zf) goto L_1289feb1;
  /* 1289fe80 push 0 */
  push32((uint32_t)(0x0u));
  /* 1289fe82 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1289fe85 push edx */
  push32((uint32_t)(EDX));
  /* 1289fe86 call 0x128a0290 */
  push32(0x1289fe8bu); f_128a0290();
  /* 1289fe8b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289fe8e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289fe90 je 0x1289feb1 */
  if (C.zf) goto L_1289feb1;
  /* 1289fe92 mov eax, dword ptr [0x128bf920] */
  EAX = (r32((uint32_t)(0x128bf920)));
  /* 1289fe97 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 1289fe9a mov dword ptr [0x128bf920], eax */
  w32((uint32_t)(0x128bf920), (EAX));
  /* 1289fe9f cmp dword ptr [0x128bf908], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf908))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289fea6 jne 0x1289feb1 */
  if (!C.zf) goto L_1289feb1;
  /* 1289fea8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1289feab mov dword ptr [0x128bf908], ecx */
  w32((uint32_t)(0x128bf908), (ECX));
L_1289feb1:;
  /* 1289feb1 mov eax, dword ptr [0x128bf920] */
  EAX = (r32((uint32_t)(0x128bf920)));
  /* 1289feb6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 1289feb9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1289febb sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289febd inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_1289febe:;
  /* 1289febe mov esp, ebp */
  ESP = (EBP);
  /* 1289fec0 pop ebp */
  EBP = (pop32());
  /* 1289fec1 ret 4 */
  ESPCHK(0x1289fba0u, _esp0);
  ESP += 8; return;
}

/* FUN_1000fed0 @ 0x1289fed0 (116 bytes, 33 insns) */
void f_1289fed0(void) {
  FTRACE(0x1289fed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289fed0 push ebp */
  push32((uint32_t)(EBP));
  /* 1289fed1 mov ebp, esp */
  EBP = (ESP);
  /* 1289fed3 push ecx */
  push32((uint32_t)(ECX));
  /* 1289fed4 mov eax, dword ptr [0x128bf918] */
  EAX = (r32((uint32_t)(0x128bf918)));
  /* 1289fed9 push eax */
  push32((uint32_t)(EAX));
  /* 1289feda call 0x12897c90 */
  push32(0x1289fedfu); f_12897c90();
  /* 1289fedf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289fee2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1289fee4 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289fee7 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 1289feea mov dword ptr [0x128bf914], ecx */
  w32((uint32_t)(0x128bf914), (ECX));
  /* 1289fef0 cmp dword ptr [0x128bf914], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf914))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289fef7 je 0x1289ff02 */
  if (C.zf) goto L_1289ff02;
  /* 1289fef9 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 1289ff00 jmp 0x1289ff14 */
  goto L_1289ff14;
L_1289ff02:;
  /* 1289ff02 mov edx, dword ptr [0x128bf918] */
  EDX = (r32((uint32_t)(0x128bf918)));
  /* 1289ff08 push edx */
  push32((uint32_t)(EDX));
  /* 1289ff09 call 0x128a0580 */
  push32(0x1289ff0eu); f_128a0580();
  /* 1289ff0e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ff11 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1289ff14:;
  /* 1289ff14 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1289ff17 mov dword ptr [0x128bf910], eax */
  w32((uint32_t)(0x128bf910), (EAX));
  /* 1289ff1c push 1 */
  push32((uint32_t)(0x1u));
  /* 1289ff1e push 0x1289ff50 */
  push32((uint32_t)(0x1289ff50u));
  /* 1289ff23 call dword ptr [0x128c22d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22d4))), 0x1289ff29u);
  /* 1289ff29 mov ecx, dword ptr [0x128bf920] */
  ECX = (r32((uint32_t)(0x128bf920)));
  /* 1289ff2f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 1289ff32 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1289ff34 jne 0x1289ff40 */
  if (!C.zf) goto L_1289ff40;
  /* 1289ff36 mov dword ptr [0x128bf920], 0 */
  w32((uint32_t)(0x128bf920), (0x0u));
L_1289ff40:;
  /* 1289ff40 mov esp, ebp */
  ESP = (EBP);
  /* 1289ff42 pop ebp */
  EBP = (pop32());
  /* 1289ff43 ret  */
  ESPCHK(0x1289fed0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ff50 @ 0x1289ff50 (287 bytes, 86 insns) */
void f_1289ff50(void) {
  FTRACE(0x1289ff50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1289ff50 push ebp */
  push32((uint32_t)(EBP));
  /* 1289ff51 mov ebp, esp */
  EBP = (ESP);
  /* 1289ff53 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289ff56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1289ff59 push eax */
  push32((uint32_t)(EAX));
  /* 1289ff5a call 0x128a0500 */
  push32(0x1289ff5fu); f_128a0500();
  /* 1289ff5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ff62 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 1289ff65 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 1289ff67 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1289ff6a push ecx */
  push32((uint32_t)(ECX));
  /* 1289ff6b mov edx, dword ptr [0x128bf914] */
  EDX = (r32((uint32_t)(0x128bf914)));
  /* 1289ff71 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 1289ff73 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1289ff75 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 1289ff7b add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ff81 push edx */
  push32((uint32_t)(EDX));
  /* 1289ff82 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1289ff85 push eax */
  push32((uint32_t)(EAX));
  /* 1289ff86 call dword ptr [0x128bf928] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bf928))), 0x1289ff8cu);
  /* 1289ff8c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289ff8e jne 0x1289ffa4 */
  if (!C.zf) goto L_1289ffa4;
  /* 1289ff90 mov dword ptr [0x128bf920], 0 */
  w32((uint32_t)(0x128bf920), (0x0u));
  /* 1289ff9a mov eax, 1 */
  EAX = (0x1u);
  /* 1289ff9f jmp 0x128a0069 */
  goto L_128a0069;
L_1289ffa4:;
  /* 1289ffa4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 1289ffa7 push ecx */
  push32((uint32_t)(ECX));
  /* 1289ffa8 mov edx, dword ptr [0x128bf918] */
  EDX = (r32((uint32_t)(0x128bf918)));
  /* 1289ffae push edx */
  push32((uint32_t)(EDX));
  /* 1289ffaf call 0x128a2310 */
  push32(0x1289ffb4u); f_128a2310();
  /* 1289ffb4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ffb7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289ffb9 jne 0x1289fff9 */
  if (!C.zf) goto L_1289fff9;
  /* 1289ffbb cmp dword ptr [0x128bf914], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf914))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1289ffc2 jne 0x1289ffd6 */
  if (!C.zf) goto L_1289ffd6;
  /* 1289ffc4 push 1 */
  push32((uint32_t)(0x1u));
  /* 1289ffc6 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1289ffc9 push eax */
  push32((uint32_t)(EAX));
  /* 1289ffca call 0x128a0290 */
  push32(0x1289ffcfu); f_128a0290();
  /* 1289ffcf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1289ffd2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1289ffd4 je 0x1289fff7 */
  if (C.zf) goto L_1289fff7;
L_1289ffd6:;
  /* 1289ffd6 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 1289ffd9 mov dword ptr [0x128bf924], ecx */
  w32((uint32_t)(0x128bf924), (ECX));
  /* 1289ffdf mov edx, dword ptr [0x128bf924] */
  EDX = (r32((uint32_t)(0x128bf924)));
  /* 1289ffe5 mov dword ptr [0x128bf908], edx */
  w32((uint32_t)(0x128bf908), (EDX));
  /* 1289ffeb mov eax, dword ptr [0x128bf920] */
  EAX = (r32((uint32_t)(0x128bf920)));
  /* 1289fff0 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 1289fff2 mov dword ptr [0x128bf920], eax */
  w32((uint32_t)(0x128bf920), (EAX));
L_1289fff7:;
  /* 1289fff7 jmp 0x128a005c */
  goto L_128a005c;
L_1289fff9:;
  /* 1289fff9 cmp dword ptr [0x128bf914], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf914))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a0000 jne 0x128a005c */
  if (!C.zf) goto L_128a005c;
  /* 128a0002 cmp dword ptr [0x128bf910], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf910))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a0009 je 0x128a005c */
  if (C.zf) goto L_128a005c;
  /* 128a000b mov ecx, dword ptr [0x128bf910] */
  ECX = (r32((uint32_t)(0x128bf910)));
  /* 128a0011 push ecx */
  push32((uint32_t)(ECX));
  /* 128a0012 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 128a0015 push edx */
  push32((uint32_t)(EDX));
  /* 128a0016 mov eax, dword ptr [0x128bf918] */
  EAX = (r32((uint32_t)(0x128bf918)));
  /* 128a001b push eax */
  push32((uint32_t)(EAX));
  /* 128a001c call 0x128a23e0 */
  push32(0x128a0021u); f_128a23e0();
  /* 128a0021 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0024 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128a0026 jne 0x128a005c */
  if (!C.zf) goto L_128a005c;
  /* 128a0028 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a002a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 128a002d push ecx */
  push32((uint32_t)(ECX));
  /* 128a002e call 0x128a0290 */
  push32(0x128a0033u); f_128a0290();
  /* 128a0033 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0036 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128a0038 je 0x128a005c */
  if (C.zf) goto L_128a005c;
  /* 128a003a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 128a003d mov dword ptr [0x128bf924], edx */
  w32((uint32_t)(0x128bf924), (EDX));
  /* 128a0043 mov eax, dword ptr [0x128bf924] */
  EAX = (r32((uint32_t)(0x128bf924)));
  /* 128a0048 mov dword ptr [0x128bf908], eax */
  w32((uint32_t)(0x128bf908), (EAX));
  /* 128a004d mov ecx, dword ptr [0x128bf920] */
  ECX = (r32((uint32_t)(0x128bf920)));
  /* 128a0053 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 128a0056 mov dword ptr [0x128bf920], ecx */
  w32((uint32_t)(0x128bf920), (ECX));
L_128a005c:;
  /* 128a005c mov eax, dword ptr [0x128bf920] */
  EAX = (r32((uint32_t)(0x128bf920)));
  /* 128a0061 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 128a0064 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 128a0066 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a0068 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_128a0069:;
  /* 128a0069 mov esp, ebp */
  ESP = (EBP);
  /* 128a006b pop ebp */
  EBP = (pop32());
  /* 128a006c ret 4 */
  ESPCHK(0x1289ff50u, _esp0);
  ESP += 8; return;
}

/* FUN_10010070 @ 0x128a0070 (69 bytes, 20 insns) */
void f_128a0070(void) {
  FTRACE(0x128a0070u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a0070 push ebp */
  push32((uint32_t)(EBP));
  /* 128a0071 mov ebp, esp */
  EBP = (ESP);
  /* 128a0073 mov eax, dword ptr [0x128bf91c] */
  EAX = (r32((uint32_t)(0x128bf91c)));
  /* 128a0078 push eax */
  push32((uint32_t)(EAX));
  /* 128a0079 call 0x12897c90 */
  push32(0x128a007eu); f_12897c90();
  /* 128a007e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0081 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 128a0083 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a0086 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 128a0089 mov dword ptr [0x128bf90c], ecx */
  w32((uint32_t)(0x128bf90c), (ECX));
  /* 128a008f push 1 */
  push32((uint32_t)(0x1u));
  /* 128a0091 push 0x128a00c0 */
  push32((uint32_t)(0x128a00c0u));
  /* 128a0096 call dword ptr [0x128c22d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22d4))), 0x128a009cu);
  /* 128a009c mov edx, dword ptr [0x128bf920] */
  EDX = (r32((uint32_t)(0x128bf920)));
  /* 128a00a2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 128a00a5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128a00a7 jne 0x128a00b3 */
  if (!C.zf) goto L_128a00b3;
  /* 128a00a9 mov dword ptr [0x128bf920], 0 */
  w32((uint32_t)(0x128bf920), (0x0u));
L_128a00b3:;
  /* 128a00b3 pop ebp */
  EBP = (pop32());
  /* 128a00b4 ret  */
  ESPCHK(0x128a0070u, _esp0);
  ESP += 4; return;
}

/* FUN_100100c0 @ 0x128a00c0 (172 bytes, 54 insns) */
void f_128a00c0(void) {
  FTRACE(0x128a00c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a00c0 push ebp */
  push32((uint32_t)(EBP));
  /* 128a00c1 mov ebp, esp */
  EBP = (ESP);
  /* 128a00c3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a00c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a00c9 push eax */
  push32((uint32_t)(EAX));
  /* 128a00ca call 0x128a0500 */
  push32(0x128a00cfu); f_128a0500();
  /* 128a00cf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a00d2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 128a00d5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 128a00d7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 128a00da push ecx */
  push32((uint32_t)(ECX));
  /* 128a00db mov edx, dword ptr [0x128bf90c] */
  EDX = (r32((uint32_t)(0x128bf90c)));
  /* 128a00e1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 128a00e3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a00e5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 128a00eb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a00f1 push edx */
  push32((uint32_t)(EDX));
  /* 128a00f2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 128a00f5 push eax */
  push32((uint32_t)(EAX));
  /* 128a00f6 call dword ptr [0x128bf928] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bf928))), 0x128a00fcu);
  /* 128a00fc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128a00fe jne 0x128a0111 */
  if (!C.zf) goto L_128a0111;
  /* 128a0100 mov dword ptr [0x128bf920], 0 */
  w32((uint32_t)(0x128bf920), (0x0u));
  /* 128a010a mov eax, 1 */
  EAX = (0x1u);
  /* 128a010f jmp 0x128a0166 */
  goto L_128a0166;
L_128a0111:;
  /* 128a0111 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 128a0114 push ecx */
  push32((uint32_t)(ECX));
  /* 128a0115 mov edx, dword ptr [0x128bf91c] */
  EDX = (r32((uint32_t)(0x128bf91c)));
  /* 128a011b push edx */
  push32((uint32_t)(EDX));
  /* 128a011c call 0x128a2310 */
  push32(0x128a0121u); f_128a2310();
  /* 128a0121 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0124 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128a0126 jne 0x128a0159 */
  if (!C.zf) goto L_128a0159;
  /* 128a0128 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 128a012b push eax */
  push32((uint32_t)(EAX));
  /* 128a012c call 0x128a0240 */
  push32(0x128a0131u); f_128a0240();
  /* 128a0131 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0134 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128a0136 je 0x128a0159 */
  if (C.zf) goto L_128a0159;
  /* 128a0138 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 128a013b mov dword ptr [0x128bf924], ecx */
  w32((uint32_t)(0x128bf924), (ECX));
  /* 128a0141 mov edx, dword ptr [0x128bf924] */
  EDX = (r32((uint32_t)(0x128bf924)));
  /* 128a0147 mov dword ptr [0x128bf908], edx */
  w32((uint32_t)(0x128bf908), (EDX));
  /* 128a014d mov eax, dword ptr [0x128bf920] */
  EAX = (r32((uint32_t)(0x128bf920)));
  /* 128a0152 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 128a0154 mov dword ptr [0x128bf920], eax */
  w32((uint32_t)(0x128bf920), (EAX));
L_128a0159:;
  /* 128a0159 mov eax, dword ptr [0x128bf920] */
  EAX = (r32((uint32_t)(0x128bf920)));
  /* 128a015e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 128a0161 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 128a0163 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a0165 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_128a0166:;
  /* 128a0166 mov esp, ebp */
  ESP = (EBP);
  /* 128a0168 pop ebp */
  EBP = (pop32());
  /* 128a0169 ret 4 */
  ESPCHK(0x128a00c0u, _esp0);
  ESP += 8; return;
}

/* FUN_10010170 @ 0x128a0170 (43 bytes, 11 insns) */
void f_128a0170(void) {
  FTRACE(0x128a0170u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a0170 push ebp */
  push32((uint32_t)(EBP));
  /* 128a0171 mov ebp, esp */
  EBP = (ESP);
  /* 128a0173 mov eax, dword ptr [0x128bf920] */
  EAX = (r32((uint32_t)(0x128bf920)));
  /* 128a0178 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 128a017d mov dword ptr [0x128bf920], eax */
  w32((uint32_t)(0x128bf920), (EAX));
  /* 128a0182 call dword ptr [0x128c22d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22d8))), 0x128a0188u);
  /* 128a0188 mov dword ptr [0x128bf924], eax */
  w32((uint32_t)(0x128bf924), (EAX));
  /* 128a018d mov ecx, dword ptr [0x128bf924] */
  ECX = (r32((uint32_t)(0x128bf924)));
  /* 128a0193 mov dword ptr [0x128bf908], ecx */
  w32((uint32_t)(0x128bf908), (ECX));
  /* 128a0199 pop ebp */
  EBP = (pop32());
  /* 128a019a ret  */
  ESPCHK(0x128a0170u, _esp0);
  ESP += 4; return;
}

/* FUN_100101a0 @ 0x128a01a0 (155 bytes, 57 insns) */
void f_128a01a0(void) {
  FTRACE(0x128a01a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a01a0 push ebp */
  push32((uint32_t)(EBP));
  /* 128a01a1 mov ebp, esp */
  EBP = (ESP);
  /* 128a01a3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a01a6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a01aa je 0x128a01cb */
  if (C.zf) goto L_128a01cb;
  /* 128a01ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a01af movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 128a01b2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 128a01b4 je 0x128a01cb */
  if (C.zf) goto L_128a01cb;
  /* 128a01b6 push 0x128bbe70 */
  push32((uint32_t)(0x128bbe70u));
  /* 128a01bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a01be push edx */
  push32((uint32_t)(EDX));
  /* 128a01bf call 0x1289f700 */
  push32(0x128a01c4u); f_1289f700();
  /* 128a01c4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a01c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128a01c9 jne 0x128a01f3 */
  if (!C.zf) goto L_128a01f3;
L_128a01cb:;
  /* 128a01cb push 8 */
  push32((uint32_t)(0x8u));
  /* 128a01cd lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 128a01d0 push eax */
  push32((uint32_t)(EAX));
  /* 128a01d1 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 128a01d6 mov ecx, dword ptr [0x128bf924] */
  ECX = (r32((uint32_t)(0x128bf924)));
  /* 128a01dc push ecx */
  push32((uint32_t)(ECX));
  /* 128a01dd call dword ptr [0x128bf928] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bf928))), 0x128a01e3u);
  /* 128a01e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128a01e5 jne 0x128a01eb */
  if (!C.zf) goto L_128a01eb;
  /* 128a01e7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a01e9 jmp 0x128a0237 */
  goto L_128a0237;
L_128a01eb:;
  /* 128a01eb lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 128a01ee mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 128a01f1 jmp 0x128a022b */
  goto L_128a022b;
L_128a01f3:;
  /* 128a01f3 push 0x128bbe6c */
  push32((uint32_t)(0x128bbe6cu));
  /* 128a01f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a01fb push eax */
  push32((uint32_t)(EAX));
  /* 128a01fc call 0x1289f700 */
  push32(0x128a0201u); f_1289f700();
  /* 128a0201 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0204 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128a0206 jne 0x128a022b */
  if (!C.zf) goto L_128a022b;
  /* 128a0208 push 8 */
  push32((uint32_t)(0x8u));
  /* 128a020a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 128a020d push ecx */
  push32((uint32_t)(ECX));
  /* 128a020e push 0xb */
  push32((uint32_t)(0xbu));
  /* 128a0210 mov edx, dword ptr [0x128bf924] */
  EDX = (r32((uint32_t)(0x128bf924)));
  /* 128a0216 push edx */
  push32((uint32_t)(EDX));
  /* 128a0217 call dword ptr [0x128bf928] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bf928))), 0x128a021du);
  /* 128a021d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128a021f jne 0x128a0225 */
  if (!C.zf) goto L_128a0225;
  /* 128a0221 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a0223 jmp 0x128a0237 */
  goto L_128a0237;
L_128a0225:;
  /* 128a0225 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 128a0228 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_128a022b:;
  /* 128a022b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a022e push ecx */
  push32((uint32_t)(ECX));
  /* 128a022f call 0x128a24f0 */
  push32(0x128a0234u); f_128a24f0();
  /* 128a0234 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128a0237:;
  /* 128a0237 mov esp, ebp */
  ESP = (EBP);
  /* 128a0239 pop ebp */
  EBP = (pop32());
  /* 128a023a ret  */
  ESPCHK(0x128a01a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010240 @ 0x128a0240 (79 bytes, 26 insns) */
void f_128a0240(void) {
  FTRACE(0x128a0240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a0240 push ebp */
  push32((uint32_t)(EBP));
  /* 128a0241 mov ebp, esp */
  EBP = (ESP);
  /* 128a0243 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a0246 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 128a024a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 128a024e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 128a0255 jmp 0x128a0260 */
  goto L_128a0260;
L_128a0257:;
  /* 128a0257 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a025a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a025d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_128a0260:;
  /* 128a0260 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a0264 jae 0x128a0286 */
  if (!C.cf) goto L_128a0286;
  /* 128a0266 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a0269 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 128a026f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a0272 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 128a0274 mov cx, word ptr [eax*2 + 0x128be9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x128be9c4)));
  /* 128a027c cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a027e jne 0x128a0284 */
  if (!C.zf) goto L_128a0284;
  /* 128a0280 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a0282 jmp 0x128a028b */
  goto L_128a028b;
L_128a0284:;
  /* 128a0284 jmp 0x128a0257 */
  goto L_128a0257;
L_128a0286:;
  /* 128a0286 mov eax, 1 */
  EAX = (0x1u);
L_128a028b:;
  /* 128a028b mov esp, ebp */
  ESP = (EBP);
  /* 128a028d pop ebp */
  EBP = (pop32());
  /* 128a028e ret  */
  ESPCHK(0x128a0240u, _esp0);
  ESP += 4; return;
}

/* FUN_10010290 @ 0x128a0290 (135 bytes, 48 insns) */
void f_128a0290(void) {
  FTRACE(0x128a0290u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a0290 push ebp */
  push32((uint32_t)(EBP));
  /* 128a0291 mov ebp, esp */
  EBP = (ESP);
  /* 128a0293 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a0296 push esi */
  push32((uint32_t)(ESI));
  /* 128a0297 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a029a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 128a029f and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 128a02a4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 128a02a9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 128a02ac and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 128a02b1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 128a02b4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 128a02b6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 128a02b9 push ecx */
  push32((uint32_t)(ECX));
  /* 128a02ba push 1 */
  push32((uint32_t)(0x1u));
  /* 128a02bc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a02bf push edx */
  push32((uint32_t)(EDX));
  /* 128a02c0 call dword ptr [0x128bf928] */
  call_ind((uint32_t)(r32((uint32_t)(0x128bf928))), 0x128a02c6u);
  /* 128a02c6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128a02c8 jne 0x128a02ce */
  if (!C.zf) goto L_128a02ce;
  /* 128a02ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a02cc jmp 0x128a0312 */
  goto L_128a0312;
L_128a02ce:;
  /* 128a02ce lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 128a02d1 push eax */
  push32((uint32_t)(EAX));
  /* 128a02d2 call 0x128a0500 */
  push32(0x128a02d7u); f_128a0500();
  /* 128a02d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a02da cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a02dd je 0x128a030d */
  if (C.zf) goto L_128a030d;
  /* 128a02df cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a02e3 je 0x128a030d */
  if (C.zf) goto L_128a030d;
  /* 128a02e5 mov ecx, dword ptr [0x128bf918] */
  ECX = (r32((uint32_t)(0x128bf918)));
  /* 128a02eb push ecx */
  push32((uint32_t)(ECX));
  /* 128a02ec call 0x128a0580 */
  push32(0x128a02f1u); f_128a0580();
  /* 128a02f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a02f4 mov esi, eax */
  ESI = (EAX);
  /* 128a02f6 mov edx, dword ptr [0x128bf918] */
  EDX = (r32((uint32_t)(0x128bf918)));
  /* 128a02fc push edx */
  push32((uint32_t)(EDX));
  /* 128a02fd call 0x12897c90 */
  push32(0x128a0302u); f_12897c90();
  /* 128a0302 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0305 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a0307 jne 0x128a030d */
  if (!C.zf) goto L_128a030d;
  /* 128a0309 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a030b jmp 0x128a0312 */
  goto L_128a0312;
L_128a030d:;
  /* 128a030d mov eax, 1 */
  EAX = (0x1u);
L_128a0312:;
  /* 128a0312 pop esi */
  ESI = (pop32());
  /* 128a0313 mov esp, ebp */
  ESP = (EBP);
  /* 128a0315 pop ebp */
  EBP = (pop32());
  /* 128a0316 ret  */
  ESPCHK(0x128a0290u, _esp0);
  ESP += 4; return;
}

/* FUN_10010320 @ 0x128a0320 (77 bytes, 18 insns) */
void f_128a0320(void) {
  FTRACE(0x128a0320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a0320 push ebp */
  push32((uint32_t)(EBP));
  /* 128a0321 mov ebp, esp */
  EBP = (ESP);
  /* 128a0323 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a0329 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 128a0333 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 128a0339 push eax */
  push32((uint32_t)(EAX));
  /* 128a033a call dword ptr [0x128c22fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22fc))), 0x128a0340u);
  /* 128a0340 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128a0342 je 0x128a0359 */
  if (C.zf) goto L_128a0359;
  /* 128a0344 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a034b jne 0x128a0359 */
  if (!C.zf) goto L_128a0359;
  /* 128a034d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 128a0357 jmp 0x128a0363 */
  goto L_128a0363;
L_128a0359:;
  /* 128a0359 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_128a0363:;
  /* 128a0363 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 128a0369 mov esp, ebp */
  ESP = (EBP);
  /* 128a036b pop ebp */
  EBP = (pop32());
  /* 128a036c ret  */
  ESPCHK(0x128a0320u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x128a0370 (388 bytes, 118 insns) */
void f_128a0370(void) {
  FTRACE(0x128a0370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a0370 push ebp */
  push32((uint32_t)(EBP));
  /* 128a0371 mov ebp, esp */
  EBP = (ESP);
  /* 128a0373 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a0376 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 128a037d mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 128a0384 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_128a038b:;
  /* 128a038b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 128a038e cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a0391 jg 0x128a04d8 */
  if ((!C.zf&&C.sf==C.of)) goto L_128a04d8;
  /* 128a0397 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 128a039a add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a039d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 128a039e sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a03a0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 128a03a2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 128a03a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a03a8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 128a03ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a03ae cmp edx, dword ptr [ecx + 0x128be520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x128be520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a03b4 jne 0x128a04ae */
  if (!C.zf) goto L_128a04ae;
  /* 128a03ba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a03bd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 128a03c0 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a03c4 ja 0x128a03e7 */
  if ((!C.cf&&!C.zf)) goto L_128a03e7;
  /* 128a03c6 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a03ca je 0x128a0459 */
  if (C.zf) goto L_128a0459;
  /* 128a03d0 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a03d4 je 0x128a0404 */
  if (C.zf) goto L_128a0404;
  /* 128a03d6 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a03da je 0x128a0426 */
  if (C.zf) goto L_128a0426;
  /* 128a03dc cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a03e0 je 0x128a0448 */
  if (C.zf) goto L_128a0448;
  /* 128a03e2 jmp 0x128a0478 */
  goto L_128a0478;
L_128a03e7:;
  /* 128a03e7 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a03ee je 0x128a0415 */
  if (C.zf) goto L_128a0415;
  /* 128a03f0 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a03f7 je 0x128a0437 */
  if (C.zf) goto L_128a0437;
  /* 128a03f9 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a0400 je 0x128a046a */
  if (C.zf) goto L_128a046a;
  /* 128a0402 jmp 0x128a0478 */
  goto L_128a0478;
L_128a0404:;
  /* 128a0404 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a0407 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 128a040a add ecx, 0x128be524 */
  { uint32_t _a=(ECX),_b=(0x128be524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0410 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 128a0413 jmp 0x128a0478 */
  goto L_128a0478;
L_128a0415:;
  /* 128a0415 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a0418 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 128a041b mov eax, dword ptr [edx + 0x128be52c] */
  EAX = (r32((uint32_t)(EDX + 0x128be52c)));
  /* 128a0421 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 128a0424 jmp 0x128a0478 */
  goto L_128a0478;
L_128a0426:;
  /* 128a0426 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a0429 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 128a042c add ecx, 0x128be530 */
  { uint32_t _a=(ECX),_b=(0x128be530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0432 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 128a0435 jmp 0x128a0478 */
  goto L_128a0478;
L_128a0437:;
  /* 128a0437 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a043a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 128a043d mov eax, dword ptr [edx + 0x128be534] */
  EAX = (r32((uint32_t)(EDX + 0x128be534)));
  /* 128a0443 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 128a0446 jmp 0x128a0478 */
  goto L_128a0478;
L_128a0448:;
  /* 128a0448 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a044b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 128a044e add ecx, 0x128be538 */
  { uint32_t _a=(ECX),_b=(0x128be538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0454 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 128a0457 jmp 0x128a0478 */
  goto L_128a0478;
L_128a0459:;
  /* 128a0459 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a045c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 128a045f add edx, 0x128be53c */
  { uint32_t _a=(EDX),_b=(0x128be53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0465 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 128a0468 jmp 0x128a0478 */
  goto L_128a0478;
L_128a046a:;
  /* 128a046a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a046d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 128a0470 add eax, 0x128be544 */
  { uint32_t _a=(EAX),_b=(0x128be544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0475 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_128a0478:;
  /* 128a0478 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a047c je 0x128a0484 */
  if (C.zf) goto L_128a0484;
  /* 128a047e cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a0482 jge 0x128a0486 */
  if ((C.sf==C.of)) goto L_128a0486;
L_128a0484:;
  /* 128a0484 jmp 0x128a04d8 */
  goto L_128a04d8;
L_128a0486:;
  /* 128a0486 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a0489 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a048c push ecx */
  push32((uint32_t)(ECX));
  /* 128a048d mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a0490 push edx */
  push32((uint32_t)(EDX));
  /* 128a0491 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a0494 push eax */
  push32((uint32_t)(EAX));
  /* 128a0495 call 0x12898680 */
  push32(0x128a049au); f_12898680();
  /* 128a049a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a049d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a04a0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a04a3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 128a04a7 mov eax, 1 */
  EAX = (0x1u);
  /* 128a04ac jmp 0x128a04ee */
  goto L_128a04ee;
L_128a04ae:;
  /* 128a04ae mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a04b1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 128a04b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a04b7 cmp eax, dword ptr [edx + 0x128be520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x128be520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a04bd jae 0x128a04ca */
  if (!C.cf) goto L_128a04ca;
  /* 128a04bf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a04c2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a04c5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 128a04c8 jmp 0x128a04d3 */
  goto L_128a04d3;
L_128a04ca:;
  /* 128a04ca mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a04cd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a04d0 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_128a04d3:;
  /* 128a04d3 jmp 0x128a038b */
  goto L_128a038b;
L_128a04d8:;
  /* 128a04d8 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a04db push eax */
  push32((uint32_t)(EAX));
  /* 128a04dc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a04df push ecx */
  push32((uint32_t)(ECX));
  /* 128a04e0 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a04e3 push edx */
  push32((uint32_t)(EDX));
  /* 128a04e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a04e7 push eax */
  push32((uint32_t)(EAX));
  /* 128a04e8 call dword ptr [0x128c22f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22f4))), 0x128a04eeu);
L_128a04ee:;
  /* 128a04ee mov esp, ebp */
  ESP = (EBP);
  /* 128a04f0 pop ebp */
  EBP = (pop32());
  /* 128a04f1 ret 0x10 */
  ESPCHK(0x128a0370u, _esp0);
  ESP += 20; return;
}

/* FUN_10010500 @ 0x128a0500 (118 bytes, 42 insns) */
void f_128a0500(void) {
  FTRACE(0x128a0500u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a0500 push ebp */
  push32((uint32_t)(EBP));
  /* 128a0501 mov ebp, esp */
  EBP = (ESP);
  /* 128a0503 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a0506 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_128a050d:;
  /* 128a050d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a0510 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 128a0512 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 128a0515 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 128a0519 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a051c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a051f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 128a0522 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128a0524 je 0x128a056f */
  if (C.zf) goto L_128a056f;
  /* 128a0526 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 128a052a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a052d jl 0x128a0542 */
  if ((C.sf!=C.of)) goto L_128a0542;
  /* 128a052f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 128a0533 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a0536 jg 0x128a0542 */
  if ((!C.zf&&C.sf==C.of)) goto L_128a0542;
  /* 128a0538 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 128a053b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 128a053d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 128a0540 jmp 0x128a055c */
  goto L_128a055c;
L_128a0542:;
  /* 128a0542 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 128a0546 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a0549 jl 0x128a055c */
  if ((C.sf!=C.of)) goto L_128a055c;
  /* 128a054b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 128a054f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a0552 jg 0x128a055c */
  if ((!C.zf&&C.sf==C.of)) goto L_128a055c;
  /* 128a0554 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 128a0557 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 128a0559 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_128a055c:;
  /* 128a055c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a055f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 128a0562 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 128a0566 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 128a056a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 128a056d jmp 0x128a050d */
  goto L_128a050d;
L_128a056f:;
  /* 128a056f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a0572 mov esp, ebp */
  ESP = (EBP);
  /* 128a0574 pop ebp */
  EBP = (pop32());
  /* 128a0575 ret  */
  ESPCHK(0x128a0500u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x128a0580 (101 bytes, 36 insns) */
void f_128a0580(void) {
  FTRACE(0x128a0580u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a0580 push ebp */
  push32((uint32_t)(EBP));
  /* 128a0581 mov ebp, esp */
  EBP = (ESP);
  /* 128a0583 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a0586 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 128a058d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a0590 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 128a0592 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 128a0595 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a0598 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a059b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_128a059e:;
  /* 128a059e movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 128a05a2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a05a5 jl 0x128a05b0 */
  if ((C.sf!=C.of)) goto L_128a05b0;
  /* 128a05a7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 128a05ab cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a05ae jle 0x128a05c2 */
  if ((C.zf||C.sf!=C.of)) goto L_128a05c2;
L_128a05b0:;
  /* 128a05b0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 128a05b4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a05b7 jl 0x128a05de */
  if ((C.sf!=C.of)) goto L_128a05de;
  /* 128a05b9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 128a05bd cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a05c0 jg 0x128a05de */
  if ((!C.zf&&C.sf==C.of)) goto L_128a05de;
L_128a05c2:;
  /* 128a05c2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a05c5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a05c8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 128a05cb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a05ce mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 128a05d0 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 128a05d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a05d6 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a05d9 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 128a05dc jmp 0x128a059e */
  goto L_128a059e;
L_128a05de:;
  /* 128a05de mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a05e1 mov esp, ebp */
  ESP = (EBP);
  /* 128a05e3 pop ebp */
  EBP = (pop32());
  /* 128a05e4 ret  */
  ESPCHK(0x128a0580u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x128a05e8 (32 bytes, 18 insns) */
void f_128a05e8(void) {
  FTRACE(0x128a05e8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a05e8 push ebp */
  push32((uint32_t)(EBP));
  /* 128a05e9 mov ebp, esp */
  EBP = (ESP);
  /* 128a05eb push ebx */
  push32((uint32_t)(EBX));
  /* 128a05ec push esi */
  push32((uint32_t)(ESI));
  /* 128a05ed push edi */
  push32((uint32_t)(EDI));
  /* 128a05ee push ebp */
  push32((uint32_t)(EBP));
  /* 128a05ef push 0 */
  push32((uint32_t)(0x0u));
  /* 128a05f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a05f3 push 0x128a0600 */
  push32((uint32_t)(0x128a0600u));
  /* 128a05f8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 128a05fb call 0x128a43cc */
  push32(0x128a0600u); f_128a43cc();
  /* 128a0600 pop ebp */
  EBP = (pop32());
  /* 128a0601 pop edi */
  EDI = (pop32());
  /* 128a0602 pop esi */
  ESI = (pop32());
  /* 128a0603 pop ebx */
  EBX = (pop32());
  /* 128a0604 mov esp, ebp */
  ESP = (EBP);
  /* 128a0606 pop ebp */
  EBP = (pop32());
  /* 128a0607 ret  */
  ESPCHK(0x128a05e8u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x128a062a (104 bytes, 33 insns) */
void f_128a062a(void) {
  FTRACE(0x128a062au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a062a push ebx */
  push32((uint32_t)(EBX));
  /* 128a062b push esi */
  push32((uint32_t)(ESI));
  /* 128a062c push edi */
  push32((uint32_t)(EDI));
  /* 128a062d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 128a0631 push eax */
  push32((uint32_t)(EAX));
  /* 128a0632 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 128a0634 push 0x128a0608 */
  push32((uint32_t)(0x128a0608u));
  /* 128a0639 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 128a0640 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_128a0647:;
  /* 128a0647 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 128a064b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 128a064e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 128a0651 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a0654 je 0x128a0684 */
  if (C.zf) goto L_128a0684;
  /* 128a0656 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a065a je 0x128a0684 */
  if (C.zf) goto L_128a0684;
  /* 128a065c lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 128a065f mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 128a0662 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 128a0666 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 128a0669 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a066e jne 0x128a0682 */
  if (!C.zf) goto L_128a0682;
  /* 128a0670 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 128a0675 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 128a0679 call 0x128a06be */
  push32(0x128a067eu); f_128a06be();
  /* 128a067e call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x128a0682u);
L_128a0682:;
  /* 128a0682 jmp 0x128a0647 */
  goto L_128a0647;
L_128a0684:;
  /* 128a0684 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 128a068b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a068e pop edi */
  EDI = (pop32());
  /* 128a068f pop esi */
  ESI = (pop32());
  /* 128a0690 pop ebx */
  EBX = (pop32());
  /* 128a0691 ret  */
  ESPCHK(0x128a062au, _esp0);
  ESP += 4; return;
}

/* FUN_100106be @ 0x128a06be (24 bytes, 10 insns) */
void f_128a06be(void) {
  FTRACE(0x128a06beu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a06be push ebx */
  push32((uint32_t)(EBX));
  /* 128a06bf push ecx */
  push32((uint32_t)(ECX));
  /* 128a06c0 mov ebx, 0x128bec98 */
  EBX = (0x128bec98u);
  /* 128a06c5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a06c8 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 128a06cb mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 128a06ce mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 128a06d1 pop ecx */
  ECX = (pop32());
  /* 128a06d2 pop ebx */
  EBX = (pop32());
  /* 128a06d3 ret 4 */
  ESPCHK(0x128a06beu, _esp0);
  ESP += 8; return;
}

/* FUN_1001079d @ 0x128a079d (27 bytes, 11 insns) */
void f_128a079d(void) {
  FTRACE(0x128a079du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a079d push ebp */
  push32((uint32_t)(EBP));
  /* 128a079e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 128a07a2 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 128a07a4 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 128a07a7 push eax */
  push32((uint32_t)(EAX));
  /* 128a07a8 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 128a07ab push eax */
  push32((uint32_t)(EAX));
  /* 128a07ac call 0x128a062a */
  push32(0x128a07b1u); f_128a062a();
  /* 128a07b1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a07b4 pop ebp */
  EBP = (pop32());
  /* 128a07b5 ret 4 */
  ESPCHK(0x128a079du, _esp0);
  ESP += 8; return;
}

/* FUN_100107c0 @ 0x128a07c0 (122 bytes, 39 insns) */
void f_128a07c0(void) {
  FTRACE(0x128a07c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a07c0 push ebp */
  push32((uint32_t)(EBP));
  /* 128a07c1 mov ebp, esp */
  EBP = (ESP);
  /* 128a07c3 push ecx */
  push32((uint32_t)(ECX));
  /* 128a07c4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a07c7 cmp eax, dword ptr [0x128c119c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x128c119c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a07cd jae 0x128a07f1 */
  if (!C.cf) goto L_128a07f1;
  /* 128a07cf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a07d2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 128a07d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a07d8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 128a07db imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 128a07de mov eax, dword ptr [ecx*4 + 0x128c1060] */
  EAX = (r32((uint32_t)(ECX*4 + 0x128c1060)));
  /* 128a07e5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 128a07ea and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 128a07ed test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 128a07ef jne 0x128a080c */
  if (!C.zf) goto L_128a080c;
L_128a07f1:;
  /* 128a07f1 call 0x1289c3d0 */
  push32(0x128a07f6u); f_1289c3d0();
  /* 128a07f6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 128a07fc call 0x1289c3e0 */
  push32(0x128a0801u); f_1289c3e0();
  /* 128a0801 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 128a0807 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 128a080a jmp 0x128a0836 */
  goto L_128a0836;
L_128a080c:;
  /* 128a080c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a080f push edx */
  push32((uint32_t)(EDX));
  /* 128a0810 call 0x1289c900 */
  push32(0x128a0815u); f_1289c900();
  /* 128a0815 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0818 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a081b push eax */
  push32((uint32_t)(EAX));
  /* 128a081c call 0x128a0840 */
  push32(0x128a0821u); f_128a0840();
  /* 128a0821 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0824 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 128a0827 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a082a push ecx */
  push32((uint32_t)(ECX));
  /* 128a082b call 0x1289c990 */
  push32(0x128a0830u); f_1289c990();
  /* 128a0830 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0833 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_128a0836:;
  /* 128a0836 mov esp, ebp */
  ESP = (EBP);
  /* 128a0838 pop ebp */
  EBP = (pop32());
  /* 128a0839 ret  */
  ESPCHK(0x128a07c0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x128a0840 (170 bytes, 59 insns) */
void f_128a0840(void) {
  FTRACE(0x128a0840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a0840 push ebp */
  push32((uint32_t)(EBP));
  /* 128a0841 mov ebp, esp */
  EBP = (ESP);
  /* 128a0843 push ecx */
  push32((uint32_t)(ECX));
  /* 128a0844 push esi */
  push32((uint32_t)(ESI));
  /* 128a0845 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a0848 push eax */
  push32((uint32_t)(EAX));
  /* 128a0849 call 0x1289c780 */
  push32(0x128a084eu); f_1289c780();
  /* 128a084e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0851 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a0854 je 0x128a0893 */
  if (C.zf) goto L_128a0893;
  /* 128a0856 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a085a je 0x128a0862 */
  if (C.zf) goto L_128a0862;
  /* 128a085c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a0860 jne 0x128a087c */
  if (!C.zf) goto L_128a087c;
L_128a0862:;
  /* 128a0862 push 1 */
  push32((uint32_t)(0x1u));
  /* 128a0864 call 0x1289c780 */
  push32(0x128a0869u); f_1289c780();
  /* 128a0869 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a086c mov esi, eax */
  ESI = (EAX);
  /* 128a086e push 2 */
  push32((uint32_t)(0x2u));
  /* 128a0870 call 0x1289c780 */
  push32(0x128a0875u); f_1289c780();
  /* 128a0875 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0878 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a087a je 0x128a0893 */
  if (C.zf) goto L_128a0893;
L_128a087c:;
  /* 128a087c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a087f push ecx */
  push32((uint32_t)(ECX));
  /* 128a0880 call 0x1289c780 */
  push32(0x128a0885u); f_1289c780();
  /* 128a0885 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0888 push eax */
  push32((uint32_t)(EAX));
  /* 128a0889 call dword ptr [0x128c2304] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2304))), 0x128a088fu);
  /* 128a088f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128a0891 je 0x128a089c */
  if (C.zf) goto L_128a089c;
L_128a0893:;
  /* 128a0893 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 128a089a jmp 0x128a08a5 */
  goto L_128a08a5;
L_128a089c:;
  /* 128a089c call dword ptr [0x128c2250] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2250))), 0x128a08a2u);
  /* 128a08a2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_128a08a5:;
  /* 128a08a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a08a8 push edx */
  push32((uint32_t)(EDX));
  /* 128a08a9 call 0x1289c6a0 */
  push32(0x128a08aeu); f_1289c6a0();
  /* 128a08ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a08b1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a08b4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 128a08b7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a08ba and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 128a08bd imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 128a08c0 mov edx, dword ptr [eax*4 + 0x128c1060] */
  EDX = (r32((uint32_t)(EAX*4 + 0x128c1060)));
  /* 128a08c7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 128a08cc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a08d0 je 0x128a08e3 */
  if (C.zf) goto L_128a08e3;
  /* 128a08d2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a08d5 push eax */
  push32((uint32_t)(EAX));
  /* 128a08d6 call 0x1289c330 */
  push32(0x128a08dbu); f_1289c330();
  /* 128a08db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a08de or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 128a08e1 jmp 0x128a08e5 */
  goto L_128a08e5;
L_128a08e3:;
  /* 128a08e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_128a08e5:;
  /* 128a08e5 pop esi */
  ESI = (pop32());
  /* 128a08e6 mov esp, ebp */
  ESP = (EBP);
  /* 128a08e8 pop ebp */
  EBP = (pop32());
  /* 128a08e9 ret  */
  ESPCHK(0x128a0840u, _esp0);
  ESP += 4; return;
}

/* FUN_100108f0 @ 0x128a08f0 (146 bytes, 52 insns) */
void f_128a08f0(void) {
  FTRACE(0x128a08f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a08f0 push ebp */
  push32((uint32_t)(EBP));
  /* 128a08f1 mov ebp, esp */
  EBP = (ESP);
  /* 128a08f3 push ebx */
  push32((uint32_t)(EBX));
  /* 128a08f4 push esi */
  push32((uint32_t)(ESI));
  /* 128a08f5 push edi */
  push32((uint32_t)(EDI));
L_128a08f6:;
  /* 128a08f6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a08fa jne 0x128a091a */
  if (!C.zf) goto L_128a091a;
  /* 128a08fc push 0x128bb7ac */
  push32((uint32_t)(0x128bb7acu));
  /* 128a0901 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a0903 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 128a0905 push 0x128bbe74 */
  push32((uint32_t)(0x128bbe74u));
  /* 128a090a push 2 */
  push32((uint32_t)(0x2u));
  /* 128a090c call 0x12892e00 */
  push32(0x128a0911u); f_12892e00();
  /* 128a0911 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0914 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a0917 jne 0x128a091a */
  if (!C.zf) goto L_128a091a;
  /* 128a0919 int3  */
  x86_unimpl("int3 @ 0x128a0919");
L_128a091a:;
  /* 128a091a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a091c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128a091e jne 0x128a08f6 */
  if (!C.zf) goto L_128a08f6;
  /* 128a0920 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a0923 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 128a0926 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 128a092c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128a092e je 0x128a097d */
  if (C.zf) goto L_128a097d;
  /* 128a0930 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a0933 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 128a0936 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 128a0939 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 128a093b je 0x128a097d */
  if (C.zf) goto L_128a097d;
  /* 128a093d push 2 */
  push32((uint32_t)(0x2u));
  /* 128a093f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a0942 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 128a0945 push eax */
  push32((uint32_t)(EAX));
  /* 128a0946 call 0x128958f0 */
  push32(0x128a094bu); f_128958f0();
  /* 128a094b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a094e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a0951 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 128a0954 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 128a095a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a095d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 128a0960 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a0963 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 128a0969 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a096c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 128a0973 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a0976 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_128a097d:;
  /* 128a097d pop edi */
  EDI = (pop32());
  /* 128a097e pop esi */
  ESI = (pop32());
  /* 128a097f pop ebx */
  EBX = (pop32());
  /* 128a0980 pop ebp */
  EBP = (pop32());
  /* 128a0981 ret  */
  ESPCHK(0x128a08f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010990 @ 0x128a0990 (289 bytes, 97 insns) */
void f_128a0990(void) {
  FTRACE(0x128a0990u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a0990 push ebp */
  push32((uint32_t)(EBP));
  /* 128a0991 mov ebp, esp */
  EBP = (ESP);
  /* 128a0993 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a0996 push esi */
  push32((uint32_t)(ESI));
  /* 128a0997 mov eax, dword ptr [0x128beca8] */
  EAX = (r32((uint32_t)(0x128beca8)));
  /* 128a099c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 128a099f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 128a09a6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 128a09ad jmp 0x128a09b8 */
  goto L_128a09b8;
L_128a09af:;
  /* 128a09af mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 128a09b2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a09b5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_128a09b8:;
  /* 128a09b8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a09bc jae 0x128a09f1 */
  if (!C.cf) goto L_128a09f1;
  /* 128a09be mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 128a09c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a09c4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 128a09c7 push ecx */
  push32((uint32_t)(ECX));
  /* 128a09c8 call 0x12897c90 */
  push32(0x128a09cdu); f_12897c90();
  /* 128a09cd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a09d0 mov esi, eax */
  ESI = (EAX);
  /* 128a09d2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 128a09d5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a09d8 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 128a09dc push ecx */
  push32((uint32_t)(ECX));
  /* 128a09dd call 0x12897c90 */
  push32(0x128a09e2u); f_12897c90();
  /* 128a09e2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a09e5 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a09e8 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 128a09ec mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 128a09ef jmp 0x128a09af */
  goto L_128a09af;
L_128a09f1:;
  /* 128a09f1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a09f4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a09f7 push eax */
  push32((uint32_t)(EAX));
  /* 128a09f8 call 0x12894e40 */
  push32(0x128a09fdu); f_12894e40();
  /* 128a09fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0a00 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 128a0a03 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a0a07 je 0x128a0aa9 */
  if (C.zf) goto L_128a0aa9;
  /* 128a0a0d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a0a10 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 128a0a13 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 128a0a1a jmp 0x128a0a25 */
  goto L_128a0a25;
L_128a0a1c:;
  /* 128a0a1c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 128a0a1f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0a22 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_128a0a25:;
  /* 128a0a25 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a0a29 jae 0x128a0a9a */
  if (!C.cf) goto L_128a0a9a;
  /* 128a0a2b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 128a0a2e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 128a0a31 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 128a0a34 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0a37 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 128a0a3a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 128a0a3d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a0a40 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 128a0a43 push ecx */
  push32((uint32_t)(ECX));
  /* 128a0a44 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 128a0a47 push edx */
  push32((uint32_t)(EDX));
  /* 128a0a48 call 0x12897e10 */
  push32(0x128a0a4du); f_12897e10();
  /* 128a0a4d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0a50 push eax */
  push32((uint32_t)(EAX));
  /* 128a0a51 call 0x12897c90 */
  push32(0x128a0a56u); f_12897c90();
  /* 128a0a56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0a59 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 128a0a5c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0a5e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 128a0a61 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 128a0a64 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 128a0a67 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 128a0a6a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0a6d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 128a0a70 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 128a0a73 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a0a76 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 128a0a7a push eax */
  push32((uint32_t)(EAX));
  /* 128a0a7b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 128a0a7e push ecx */
  push32((uint32_t)(ECX));
  /* 128a0a7f call 0x12897e10 */
  push32(0x128a0a84u); f_12897e10();
  /* 128a0a84 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0a87 push eax */
  push32((uint32_t)(EAX));
  /* 128a0a88 call 0x12897c90 */
  push32(0x128a0a8du); f_12897c90();
  /* 128a0a8d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0a90 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 128a0a93 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0a95 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 128a0a98 jmp 0x128a0a1c */
  goto L_128a0a1c;
L_128a0a9a:;
  /* 128a0a9a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 128a0a9d mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 128a0aa0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 128a0aa3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0aa6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_128a0aa9:;
  /* 128a0aa9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a0aac pop esi */
  ESI = (pop32());
  /* 128a0aad mov esp, ebp */
  ESP = (EBP);
  /* 128a0aaf pop ebp */
  EBP = (pop32());
  /* 128a0ab0 ret  */
  ESPCHK(0x128a0990u, _esp0);
  ESP += 4; return;
}

/* FUN_10010ac0 @ 0x128a0ac0 (291 bytes, 97 insns) */
void f_128a0ac0(void) {
  FTRACE(0x128a0ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a0ac0 push ebp */
  push32((uint32_t)(EBP));
  /* 128a0ac1 mov ebp, esp */
  EBP = (ESP);
  /* 128a0ac3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a0ac6 push esi */
  push32((uint32_t)(ESI));
  /* 128a0ac7 mov eax, dword ptr [0x128beca8] */
  EAX = (r32((uint32_t)(0x128beca8)));
  /* 128a0acc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 128a0acf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 128a0ad6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 128a0add jmp 0x128a0ae8 */
  goto L_128a0ae8;
L_128a0adf:;
  /* 128a0adf mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 128a0ae2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0ae5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_128a0ae8:;
  /* 128a0ae8 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a0aec jae 0x128a0b22 */
  if (!C.cf) goto L_128a0b22;
  /* 128a0aee mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 128a0af1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a0af4 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 128a0af8 push ecx */
  push32((uint32_t)(ECX));
  /* 128a0af9 call 0x12897c90 */
  push32(0x128a0afeu); f_12897c90();
  /* 128a0afe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0b01 mov esi, eax */
  ESI = (EAX);
  /* 128a0b03 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 128a0b06 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a0b09 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 128a0b0d push ecx */
  push32((uint32_t)(ECX));
  /* 128a0b0e call 0x12897c90 */
  push32(0x128a0b13u); f_12897c90();
  /* 128a0b13 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0b16 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0b19 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 128a0b1d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 128a0b20 jmp 0x128a0adf */
  goto L_128a0adf;
L_128a0b22:;
  /* 128a0b22 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a0b25 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0b28 push eax */
  push32((uint32_t)(EAX));
  /* 128a0b29 call 0x12894e40 */
  push32(0x128a0b2eu); f_12894e40();
  /* 128a0b2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0b31 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 128a0b34 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a0b38 je 0x128a0bdb */
  if (C.zf) goto L_128a0bdb;
  /* 128a0b3e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a0b41 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 128a0b44 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 128a0b4b jmp 0x128a0b56 */
  goto L_128a0b56;
L_128a0b4d:;
  /* 128a0b4d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 128a0b50 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0b53 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_128a0b56:;
  /* 128a0b56 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a0b5a jae 0x128a0bcc */
  if (!C.cf) goto L_128a0bcc;
  /* 128a0b5c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 128a0b5f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 128a0b62 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 128a0b65 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0b68 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 128a0b6b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 128a0b6e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a0b71 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 128a0b75 push ecx */
  push32((uint32_t)(ECX));
  /* 128a0b76 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 128a0b79 push edx */
  push32((uint32_t)(EDX));
  /* 128a0b7a call 0x12897e10 */
  push32(0x128a0b7fu); f_12897e10();
  /* 128a0b7f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0b82 push eax */
  push32((uint32_t)(EAX));
  /* 128a0b83 call 0x12897c90 */
  push32(0x128a0b88u); f_12897c90();
  /* 128a0b88 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0b8b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 128a0b8e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0b90 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 128a0b93 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 128a0b96 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 128a0b99 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 128a0b9c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0b9f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 128a0ba2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 128a0ba5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a0ba8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 128a0bac push eax */
  push32((uint32_t)(EAX));
  /* 128a0bad mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 128a0bb0 push ecx */
  push32((uint32_t)(ECX));
  /* 128a0bb1 call 0x12897e10 */
  push32(0x128a0bb6u); f_12897e10();
  /* 128a0bb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0bb9 push eax */
  push32((uint32_t)(EAX));
  /* 128a0bba call 0x12897c90 */
  push32(0x128a0bbfu); f_12897c90();
  /* 128a0bbf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0bc2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 128a0bc5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0bc7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 128a0bca jmp 0x128a0b4d */
  goto L_128a0b4d;
L_128a0bcc:;
  /* 128a0bcc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 128a0bcf mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 128a0bd2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 128a0bd5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0bd8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_128a0bdb:;
  /* 128a0bdb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a0bde pop esi */
  ESI = (pop32());
  /* 128a0bdf mov esp, ebp */
  ESP = (EBP);
  /* 128a0be1 pop ebp */
  EBP = (pop32());
  /* 128a0be2 ret  */
  ESPCHK(0x128a0ac0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010bf0 @ 0x128a0bf0 (878 bytes, 273 insns) */
void f_128a0bf0(void) {
  FTRACE(0x128a0bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a0bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 128a0bf1 mov ebp, esp */
  EBP = (ESP);
  /* 128a0bf3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a0bf6 push esi */
  push32((uint32_t)(ESI));
  /* 128a0bf7 mov eax, dword ptr [0x128beca8] */
  EAX = (r32((uint32_t)(0x128beca8)));
  /* 128a0bfc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 128a0bff mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 128a0c06 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 128a0c0d jmp 0x128a0c18 */
  goto L_128a0c18;
L_128a0c0f:;
  /* 128a0c0f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 128a0c12 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0c15 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_128a0c18:;
  /* 128a0c18 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a0c1c jae 0x128a0c51 */
  if (!C.cf) goto L_128a0c51;
  /* 128a0c1e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 128a0c21 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a0c24 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 128a0c27 push ecx */
  push32((uint32_t)(ECX));
  /* 128a0c28 call 0x12897c90 */
  push32(0x128a0c2du); f_12897c90();
  /* 128a0c2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0c30 mov esi, eax */
  ESI = (EAX);
  /* 128a0c32 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 128a0c35 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a0c38 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 128a0c3c push ecx */
  push32((uint32_t)(ECX));
  /* 128a0c3d call 0x12897c90 */
  push32(0x128a0c42u); f_12897c90();
  /* 128a0c42 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0c45 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0c48 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 128a0c4c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 128a0c4f jmp 0x128a0c0f */
  goto L_128a0c0f;
L_128a0c51:;
  /* 128a0c51 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 128a0c58 jmp 0x128a0c63 */
  goto L_128a0c63;
L_128a0c5a:;
  /* 128a0c5a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 128a0c5d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0c60 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_128a0c63:;
  /* 128a0c63 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a0c67 jae 0x128a0c9d */
  if (!C.cf) goto L_128a0c9d;
  /* 128a0c69 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 128a0c6c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a0c6f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 128a0c73 push eax */
  push32((uint32_t)(EAX));
  /* 128a0c74 call 0x12897c90 */
  push32(0x128a0c79u); f_12897c90();
  /* 128a0c79 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0c7c mov esi, eax */
  ESI = (EAX);
  /* 128a0c7e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 128a0c81 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a0c84 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 128a0c88 push eax */
  push32((uint32_t)(EAX));
  /* 128a0c89 call 0x12897c90 */
  push32(0x128a0c8eu); f_12897c90();
  /* 128a0c8e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0c91 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0c94 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 128a0c98 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 128a0c9b jmp 0x128a0c5a */
  goto L_128a0c5a;
L_128a0c9d:;
  /* 128a0c9d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a0ca0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 128a0ca6 push eax */
  push32((uint32_t)(EAX));
  /* 128a0ca7 call 0x12897c90 */
  push32(0x128a0cacu); f_12897c90();
  /* 128a0cac add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0caf mov esi, eax */
  ESI = (EAX);
  /* 128a0cb1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a0cb4 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 128a0cba push edx */
  push32((uint32_t)(EDX));
  /* 128a0cbb call 0x12897c90 */
  push32(0x128a0cc0u); f_12897c90();
  /* 128a0cc0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0cc3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0cc6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 128a0cca mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 128a0ccd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a0cd0 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 128a0cd6 push edx */
  push32((uint32_t)(EDX));
  /* 128a0cd7 call 0x12897c90 */
  push32(0x128a0cdcu); f_12897c90();
  /* 128a0cdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0cdf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a0ce2 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 128a0ce6 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 128a0ce9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a0cec mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 128a0cf2 push ecx */
  push32((uint32_t)(ECX));
  /* 128a0cf3 call 0x12897c90 */
  push32(0x128a0cf8u); f_12897c90();
  /* 128a0cf8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0cfb mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a0cfe lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 128a0d02 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 128a0d05 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a0d08 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 128a0d0e push edx */
  push32((uint32_t)(EDX));
  /* 128a0d0f call 0x12897c90 */
  push32(0x128a0d14u); f_12897c90();
  /* 128a0d14 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0d17 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a0d1a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 128a0d1e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 128a0d21 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a0d24 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0d29 push eax */
  push32((uint32_t)(EAX));
  /* 128a0d2a call 0x12894e40 */
  push32(0x128a0d2fu); f_12894e40();
  /* 128a0d2f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0d32 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 128a0d35 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a0d39 je 0x128a0f56 */
  if (C.zf) goto L_128a0f56;
  /* 128a0d3f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a0d42 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 128a0d45 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a0d48 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0d4e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 128a0d51 push 0xac */
  push32((uint32_t)(0xacu));
  /* 128a0d56 mov eax, dword ptr [0x128beca8] */
  EAX = (r32((uint32_t)(0x128beca8)));
  /* 128a0d5b push eax */
  push32((uint32_t)(EAX));
  /* 128a0d5c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a0d5f push ecx */
  push32((uint32_t)(ECX));
  /* 128a0d60 call 0x1289bff0 */
  push32(0x128a0d65u); f_1289bff0();
  /* 128a0d65 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0d68 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 128a0d6f jmp 0x128a0d7a */
  goto L_128a0d7a;
L_128a0d71:;
  /* 128a0d71 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 128a0d74 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0d77 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_128a0d7a:;
  /* 128a0d7a cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a0d7e jae 0x128a0dee */
  if (!C.cf) goto L_128a0dee;
  /* 128a0d80 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 128a0d83 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 128a0d86 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 128a0d89 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 128a0d8c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 128a0d8f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a0d92 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 128a0d95 push edx */
  push32((uint32_t)(EDX));
  /* 128a0d96 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 128a0d99 push eax */
  push32((uint32_t)(EAX));
  /* 128a0d9a call 0x12897e10 */
  push32(0x128a0d9fu); f_12897e10();
  /* 128a0d9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0da2 push eax */
  push32((uint32_t)(EAX));
  /* 128a0da3 call 0x12897c90 */
  push32(0x128a0da8u); f_12897c90();
  /* 128a0da8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0dab mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 128a0dae lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 128a0db2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 128a0db5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 128a0db8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 128a0dbb mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 128a0dbe mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 128a0dc2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 128a0dc5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a0dc8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 128a0dcc push edx */
  push32((uint32_t)(EDX));
  /* 128a0dcd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 128a0dd0 push eax */
  push32((uint32_t)(EAX));
  /* 128a0dd1 call 0x12897e10 */
  push32(0x128a0dd6u); f_12897e10();
  /* 128a0dd6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0dd9 push eax */
  push32((uint32_t)(EAX));
  /* 128a0dda call 0x12897c90 */
  push32(0x128a0ddfu); f_12897c90();
  /* 128a0ddf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0de2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 128a0de5 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 128a0de9 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 128a0dec jmp 0x128a0d71 */
  goto L_128a0d71;
L_128a0dee:;
  /* 128a0dee mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 128a0df5 jmp 0x128a0e00 */
  goto L_128a0e00;
L_128a0df7:;
  /* 128a0df7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 128a0dfa add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0dfd mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_128a0e00:;
  /* 128a0e00 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a0e04 jae 0x128a0e76 */
  if (!C.cf) goto L_128a0e76;
  /* 128a0e06 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 128a0e09 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 128a0e0c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 128a0e0f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 128a0e13 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 128a0e16 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a0e19 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 128a0e1d push eax */
  push32((uint32_t)(EAX));
  /* 128a0e1e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 128a0e21 push ecx */
  push32((uint32_t)(ECX));
  /* 128a0e22 call 0x12897e10 */
  push32(0x128a0e27u); f_12897e10();
  /* 128a0e27 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0e2a push eax */
  push32((uint32_t)(EAX));
  /* 128a0e2b call 0x12897c90 */
  push32(0x128a0e30u); f_12897c90();
  /* 128a0e30 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0e33 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 128a0e36 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 128a0e3a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 128a0e3d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 128a0e40 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 128a0e43 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 128a0e46 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 128a0e4a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 128a0e4d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a0e50 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 128a0e54 push eax */
  push32((uint32_t)(EAX));
  /* 128a0e55 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 128a0e58 push ecx */
  push32((uint32_t)(ECX));
  /* 128a0e59 call 0x12897e10 */
  push32(0x128a0e5eu); f_12897e10();
  /* 128a0e5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0e61 push eax */
  push32((uint32_t)(EAX));
  /* 128a0e62 call 0x12897c90 */
  push32(0x128a0e67u); f_12897c90();
  /* 128a0e67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0e6a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 128a0e6d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 128a0e71 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 128a0e74 jmp 0x128a0df7 */
  goto L_128a0df7;
L_128a0e76:;
  /* 128a0e76 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 128a0e79 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 128a0e7c mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 128a0e82 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a0e85 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 128a0e8b push ecx */
  push32((uint32_t)(ECX));
  /* 128a0e8c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 128a0e8f push edx */
  push32((uint32_t)(EDX));
  /* 128a0e90 call 0x12897e10 */
  push32(0x128a0e95u); f_12897e10();
  /* 128a0e95 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0e98 push eax */
  push32((uint32_t)(EAX));
  /* 128a0e99 call 0x12897c90 */
  push32(0x128a0e9eu); f_12897c90();
  /* 128a0e9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0ea1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 128a0ea4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 128a0ea8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 128a0eab mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 128a0eae mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 128a0eb1 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 128a0eb7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a0eba mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 128a0ec0 push eax */
  push32((uint32_t)(EAX));
  /* 128a0ec1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 128a0ec4 push ecx */
  push32((uint32_t)(ECX));
  /* 128a0ec5 call 0x12897e10 */
  push32(0x128a0ecau); f_12897e10();
  /* 128a0eca add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0ecd push eax */
  push32((uint32_t)(EAX));
  /* 128a0ece call 0x12897c90 */
  push32(0x128a0ed3u); f_12897c90();
  /* 128a0ed3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0ed6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 128a0ed9 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 128a0edd mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 128a0ee0 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 128a0ee3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 128a0ee6 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 128a0eec mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a0eef mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 128a0ef5 push ecx */
  push32((uint32_t)(ECX));
  /* 128a0ef6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 128a0ef9 push edx */
  push32((uint32_t)(EDX));
  /* 128a0efa call 0x12897e10 */
  push32(0x128a0effu); f_12897e10();
  /* 128a0eff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0f02 push eax */
  push32((uint32_t)(EAX));
  /* 128a0f03 call 0x12897c90 */
  push32(0x128a0f08u); f_12897c90();
  /* 128a0f08 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0f0b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 128a0f0e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 128a0f12 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 128a0f15 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 128a0f18 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 128a0f1b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 128a0f21 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a0f24 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 128a0f2a push eax */
  push32((uint32_t)(EAX));
  /* 128a0f2b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 128a0f2e push ecx */
  push32((uint32_t)(ECX));
  /* 128a0f2f call 0x12897e10 */
  push32(0x128a0f34u); f_12897e10();
  /* 128a0f34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0f37 push eax */
  push32((uint32_t)(EAX));
  /* 128a0f38 call 0x12897c90 */
  push32(0x128a0f3du); f_12897c90();
  /* 128a0f3d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0f40 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 128a0f43 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 128a0f47 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 128a0f4a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 128a0f4d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 128a0f50 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_128a0f56:;
  /* 128a0f56 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a0f59 pop esi */
  ESI = (pop32());
  /* 128a0f5a mov esp, ebp */
  ESP = (EBP);
  /* 128a0f5c pop ebp */
  EBP = (pop32());
  /* 128a0f5d ret  */
  ESPCHK(0x128a0bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f60 @ 0x128a0f60 (31 bytes, 15 insns) */
void f_128a0f60(void) {
  FTRACE(0x128a0f60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a0f60 push ebp */
  push32((uint32_t)(EBP));
  /* 128a0f61 mov ebp, esp */
  EBP = (ESP);
  /* 128a0f63 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a0f65 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a0f68 push eax */
  push32((uint32_t)(EAX));
  /* 128a0f69 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a0f6c push ecx */
  push32((uint32_t)(ECX));
  /* 128a0f6d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a0f70 push edx */
  push32((uint32_t)(EDX));
  /* 128a0f71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a0f74 push eax */
  push32((uint32_t)(EAX));
  /* 128a0f75 call 0x128a0f80 */
  push32(0x128a0f7au); f_128a0f80();
  /* 128a0f7a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0f7d pop ebp */
  EBP = (pop32());
  /* 128a0f7e ret  */
  ESPCHK(0x128a0f60u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f80 @ 0x128a0f80 (393 bytes, 123 insns) */
void f_128a0f80(void) {
  FTRACE(0x128a0f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a0f80 push ebp */
  push32((uint32_t)(EBP));
  /* 128a0f81 mov ebp, esp */
  EBP = (ESP);
  /* 128a0f83 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a0f86 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a0f8a jne 0x128a0f96 */
  if (!C.zf) goto L_128a0f96;
  /* 128a0f8c mov eax, dword ptr [0x128beca8] */
  EAX = (r32((uint32_t)(0x128beca8)));
  /* 128a0f91 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 128a0f94 jmp 0x128a0f9c */
  goto L_128a0f9c;
L_128a0f96:;
  /* 128a0f96 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 128a0f99 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_128a0f9c:;
  /* 128a0f9c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 128a0f9f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 128a0fa2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a0fa5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 128a0fa8 push 0x128bfa2c */
  push32((uint32_t)(0x128bfa2cu));
  /* 128a0fad call dword ptr [0x128c2224] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2224))), 0x128a0fb3u);
  /* 128a0fb3 cmp dword ptr [0x128bfa1c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bfa1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a0fba je 0x128a0fda */
  if (C.zf) goto L_128a0fda;
  /* 128a0fbc push 0x128bfa2c */
  push32((uint32_t)(0x128bfa2cu));
  /* 128a0fc1 call dword ptr [0x128c2218] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2218))), 0x128a0fc7u);
  /* 128a0fc7 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 128a0fc9 call 0x12899210 */
  push32(0x128a0fceu); f_12899210();
  /* 128a0fce add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a0fd1 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 128a0fd8 jmp 0x128a0fe1 */
  goto L_128a0fe1;
L_128a0fda:;
  /* 128a0fda mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_128a0fe1:;
  /* 128a0fe1 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a0fe5 jbe 0x128a10d2 */
  if ((C.cf||C.zf)) goto L_128a10d2;
  /* 128a0feb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a0fee mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 128a0ff0 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 128a0ff3 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 128a0ff7 je 0x128a1001 */
  if (C.zf) goto L_128a1001;
  /* 128a0ff9 cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 128a0ffd je 0x128a1006 */
  if (C.zf) goto L_128a1006;
  /* 128a0fff jmp 0x128a1060 */
  goto L_128a1060;
L_128a1001:;
  /* 128a1001 jmp 0x128a10d2 */
  goto L_128a10d2;
L_128a1006:;
  /* 128a1006 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1009 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a100c mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 128a100f mov dword ptr [0x128bfa08], 0 */
  w32((uint32_t)(0x128bfa08), (0x0u));
  /* 128a1019 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a101c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 128a101f cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a1022 jne 0x128a1037 */
  if (!C.zf) goto L_128a1037;
  /* 128a1024 mov dword ptr [0x128bfa08], 1 */
  w32((uint32_t)(0x128bfa08), (0x1u));
  /* 128a102e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1031 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1034 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_128a1037:;
  /* 128a1037 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a103a push ecx */
  push32((uint32_t)(ECX));
  /* 128a103b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 128a103e push edx */
  push32((uint32_t)(EDX));
  /* 128a103f lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 128a1042 push eax */
  push32((uint32_t)(EAX));
  /* 128a1043 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a1046 push ecx */
  push32((uint32_t)(ECX));
  /* 128a1047 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a104a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 128a104c push eax */
  push32((uint32_t)(EAX));
  /* 128a104d call 0x128a1110 */
  push32(0x128a1052u); f_128a1110();
  /* 128a1052 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1055 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1058 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a105b mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 128a105e jmp 0x128a10cd */
  goto L_128a10cd;
L_128a1060:;
  /* 128a1060 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1063 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a1065 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 128a1067 mov ecx, dword ptr [0x128bdde8] */
  ECX = (r32((uint32_t)(0x128bdde8)));
  /* 128a106d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128a106f mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 128a1073 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 128a1079 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128a107b je 0x128a10a8 */
  if (C.zf) goto L_128a10a8;
  /* 128a107d cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a1081 jbe 0x128a10a8 */
  if ((C.cf||C.zf)) goto L_128a10a8;
  /* 128a1083 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a1086 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1089 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 128a108b mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 128a108d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a1090 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1093 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 128a1096 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1099 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a109c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 128a109f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a10a2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a10a5 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_128a10a8:;
  /* 128a10a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a10ab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a10ae mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 128a10b0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 128a10b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a10b5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a10b8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 128a10bb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a10be add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a10c1 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 128a10c4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a10c7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a10ca mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_128a10cd:;
  /* 128a10cd jmp 0x128a0fe1 */
  goto L_128a0fe1;
L_128a10d2:;
  /* 128a10d2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a10d6 je 0x128a10e4 */
  if (C.zf) goto L_128a10e4;
  /* 128a10d8 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 128a10da call 0x128992b0 */
  push32(0x128a10dfu); f_128992b0();
  /* 128a10df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a10e2 jmp 0x128a10ef */
  goto L_128a10ef;
L_128a10e4:;
  /* 128a10e4 push 0x128bfa2c */
  push32((uint32_t)(0x128bfa2cu));
  /* 128a10e9 call dword ptr [0x128c2218] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2218))), 0x128a10efu);
L_128a10ef:;
  /* 128a10ef cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a10f3 jbe 0x128a1103 */
  if ((C.cf||C.zf)) goto L_128a1103;
  /* 128a10f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a10f8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 128a10fb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a10fe sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a1101 jmp 0x128a1105 */
  goto L_128a1105;
L_128a1103:;
  /* 128a1103 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_128a1105:;
  /* 128a1105 mov esp, ebp */
  ESP = (EBP);
  /* 128a1107 pop ebp */
  EBP = (pop32());
  /* 128a1108 ret  */
  ESPCHK(0x128a0f80u, _esp0);
  ESP += 4; return;
}

/* FUN_10011110 @ 0x128a1110 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_128a1110(void) {
  FTRACE(0x128a1110u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a1110 push ebp */
  push32((uint32_t)(EBP));
  /* 128a1111 mov ebp, esp */
  EBP = (ESP);
  /* 128a1113 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a1116 push esi */
  push32((uint32_t)(ESI));
  /* 128a1117 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 128a111b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 128a111e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a1121 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a1124 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 128a1127 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a112b ja 0x128a1678 */
  if ((!C.cf&&!C.zf)) goto L_128a1678;
  /* 128a1131 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a1134 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128a1136 mov dl, byte ptr [eax + 0x128a16d9] */
  DL = (r8((uint32_t)(EAX + 0x128a16d9)));
  /* 128a113c jmp dword ptr [edx*4 + 0x128a167d] */
  switch (EDX) {
    case 0: goto L_128a1656;
    case 1: goto L_128a1165;
    case 2: goto L_128a11ab;
    case 3: goto L_128a12f8;
    case 4: goto L_128a1320;
    case 5: goto L_128a13bf;
    case 6: goto L_128a142b;
    case 7: goto L_128a1454;
    case 8: goto L_128a1495;
    case 9: goto L_128a1577;
    case 10: goto L_128a15de;
    case 11: goto L_128a162b;
    case 12: goto L_128a1143;
    case 13: goto L_128a1188;
    case 14: goto L_128a11ce;
    case 15: goto L_128a12ce;
    case 16: goto L_128a1365;
    case 17: goto L_128a1392;
    case 18: goto L_128a13e7;
    case 19: goto L_128a146b;
    case 20: goto L_128a1519;
    case 21: goto L_128a15a8;
    case 22: goto L_128a1678;
    default: x86_unimpl("switch@0x128a113c out of table"); return;
  }
L_128a1143:;
  /* 128a1143 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a1146 push ecx */
  push32((uint32_t)(ECX));
  /* 128a1147 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a114a push edx */
  push32((uint32_t)(EDX));
  /* 128a114b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a114e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 128a1151 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 128a1154 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 128a1157 push eax */
  push32((uint32_t)(EAX));
  /* 128a1158 call 0x128a1730 */
  push32(0x128a115du); f_128a1730();
  /* 128a115d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1160 jmp 0x128a1678 */
  goto L_128a1678;
L_128a1165:;
  /* 128a1165 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a1168 push ecx */
  push32((uint32_t)(ECX));
  /* 128a1169 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a116c push edx */
  push32((uint32_t)(EDX));
  /* 128a116d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a1170 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 128a1173 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 128a1176 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 128a117a push eax */
  push32((uint32_t)(EAX));
  /* 128a117b call 0x128a1730 */
  push32(0x128a1180u); f_128a1730();
  /* 128a1180 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1183 jmp 0x128a1678 */
  goto L_128a1678;
L_128a1188:;
  /* 128a1188 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a118b push ecx */
  push32((uint32_t)(ECX));
  /* 128a118c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a118f push edx */
  push32((uint32_t)(EDX));
  /* 128a1190 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a1193 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 128a1196 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 128a1199 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 128a119d push eax */
  push32((uint32_t)(EAX));
  /* 128a119e call 0x128a1730 */
  push32(0x128a11a3u); f_128a1730();
  /* 128a11a3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a11a6 jmp 0x128a1678 */
  goto L_128a1678;
L_128a11ab:;
  /* 128a11ab mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a11ae push ecx */
  push32((uint32_t)(ECX));
  /* 128a11af mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a11b2 push edx */
  push32((uint32_t)(EDX));
  /* 128a11b3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a11b6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 128a11b9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 128a11bc mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 128a11c0 push eax */
  push32((uint32_t)(EAX));
  /* 128a11c1 call 0x128a1730 */
  push32(0x128a11c6u); f_128a1730();
  /* 128a11c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a11c9 jmp 0x128a1678 */
  goto L_128a1678;
L_128a11ce:;
  /* 128a11ce cmp dword ptr [0x128bfa08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bfa08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a11d5 je 0x128a1256 */
  if (C.zf) goto L_128a1256;
  /* 128a11d7 mov dword ptr [0x128bfa08], 0 */
  w32((uint32_t)(0x128bfa08), (0x0u));
  /* 128a11e1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 128a11e4 push ecx */
  push32((uint32_t)(ECX));
  /* 128a11e5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a11e8 push edx */
  push32((uint32_t)(EDX));
  /* 128a11e9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a11ec push eax */
  push32((uint32_t)(EAX));
  /* 128a11ed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a11f0 push ecx */
  push32((uint32_t)(ECX));
  /* 128a11f1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 128a11f4 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 128a11fa push eax */
  push32((uint32_t)(EAX));
  /* 128a11fb call 0x128a18e0 */
  push32(0x128a1200u); f_128a18e0();
  /* 128a1200 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1203 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a1206 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a1209 jne 0x128a1210 */
  if (!C.zf) goto L_128a1210;
  /* 128a120b jmp 0x128a1678 */
  goto L_128a1678;
L_128a1210:;
  /* 128a1210 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1213 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 128a1215 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 128a1218 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a121b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 128a121d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1220 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1223 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 128a1225 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a1228 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 128a122a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a122d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a1230 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 128a1232 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 128a1235 push ecx */
  push32((uint32_t)(ECX));
  /* 128a1236 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a1239 push edx */
  push32((uint32_t)(EDX));
  /* 128a123a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a123d push eax */
  push32((uint32_t)(EAX));
  /* 128a123e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a1241 push ecx */
  push32((uint32_t)(ECX));
  /* 128a1242 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 128a1245 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 128a124b push eax */
  push32((uint32_t)(EAX));
  /* 128a124c call 0x128a18e0 */
  push32(0x128a1251u); f_128a18e0();
  /* 128a1251 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1254 jmp 0x128a12c9 */
  goto L_128a12c9;
L_128a1256:;
  /* 128a1256 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 128a1259 push ecx */
  push32((uint32_t)(ECX));
  /* 128a125a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a125d push edx */
  push32((uint32_t)(EDX));
  /* 128a125e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1261 push eax */
  push32((uint32_t)(EAX));
  /* 128a1262 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a1265 push ecx */
  push32((uint32_t)(ECX));
  /* 128a1266 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 128a1269 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 128a126f push eax */
  push32((uint32_t)(EAX));
  /* 128a1270 call 0x128a18e0 */
  push32(0x128a1275u); f_128a18e0();
  /* 128a1275 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1278 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a127b cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a127e jne 0x128a1285 */
  if (!C.zf) goto L_128a1285;
  /* 128a1280 jmp 0x128a1678 */
  goto L_128a1678;
L_128a1285:;
  /* 128a1285 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1288 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 128a128a mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 128a128d mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1290 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 128a1292 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1295 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1298 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 128a129a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a129d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 128a129f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a12a2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a12a5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 128a12a7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 128a12aa push ecx */
  push32((uint32_t)(ECX));
  /* 128a12ab mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a12ae push edx */
  push32((uint32_t)(EDX));
  /* 128a12af mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a12b2 push eax */
  push32((uint32_t)(EAX));
  /* 128a12b3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a12b6 push ecx */
  push32((uint32_t)(ECX));
  /* 128a12b7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 128a12ba mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 128a12c0 push eax */
  push32((uint32_t)(EAX));
  /* 128a12c1 call 0x128a18e0 */
  push32(0x128a12c6u); f_128a18e0();
  /* 128a12c6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128a12c9:;
  /* 128a12c9 jmp 0x128a1678 */
  goto L_128a1678;
L_128a12ce:;
  /* 128a12ce mov ecx, dword ptr [0x128bfa08] */
  ECX = (r32((uint32_t)(0x128bfa08)));
  /* 128a12d4 mov dword ptr [0x128bfa18], ecx */
  w32((uint32_t)(0x128bfa18), (ECX));
  /* 128a12da mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a12dd push edx */
  push32((uint32_t)(EDX));
  /* 128a12de mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a12e1 push eax */
  push32((uint32_t)(EAX));
  /* 128a12e2 push 2 */
  push32((uint32_t)(0x2u));
  /* 128a12e4 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a12e7 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 128a12ea push edx */
  push32((uint32_t)(EDX));
  /* 128a12eb call 0x128a1780 */
  push32(0x128a12f0u); f_128a1780();
  /* 128a12f0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a12f3 jmp 0x128a1678 */
  goto L_128a1678;
L_128a12f8:;
  /* 128a12f8 mov eax, dword ptr [0x128bfa08] */
  EAX = (r32((uint32_t)(0x128bfa08)));
  /* 128a12fd mov dword ptr [0x128bfa18], eax */
  w32((uint32_t)(0x128bfa18), (EAX));
  /* 128a1302 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a1305 push ecx */
  push32((uint32_t)(ECX));
  /* 128a1306 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1309 push edx */
  push32((uint32_t)(EDX));
  /* 128a130a push 2 */
  push32((uint32_t)(0x2u));
  /* 128a130c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a130f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 128a1312 push ecx */
  push32((uint32_t)(ECX));
  /* 128a1313 call 0x128a1780 */
  push32(0x128a1318u); f_128a1780();
  /* 128a1318 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a131b jmp 0x128a1678 */
  goto L_128a1678;
L_128a1320:;
  /* 128a1320 mov edx, dword ptr [0x128bfa08] */
  EDX = (r32((uint32_t)(0x128bfa08)));
  /* 128a1326 mov dword ptr [0x128bfa18], edx */
  w32((uint32_t)(0x128bfa18), (EDX));
  /* 128a132c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a132f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 128a1332 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 128a1333 mov ecx, 0xc */
  ECX = (0xcu);
  /* 128a1338 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 128a133a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 128a133d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a1341 jne 0x128a134a */
  if (!C.zf) goto L_128a134a;
  /* 128a1343 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_128a134a:;
  /* 128a134a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a134d push edx */
  push32((uint32_t)(EDX));
  /* 128a134e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1351 push eax */
  push32((uint32_t)(EAX));
  /* 128a1352 push 2 */
  push32((uint32_t)(0x2u));
  /* 128a1354 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a1357 push ecx */
  push32((uint32_t)(ECX));
  /* 128a1358 call 0x128a1780 */
  push32(0x128a135du); f_128a1780();
  /* 128a135d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1360 jmp 0x128a1678 */
  goto L_128a1678;
L_128a1365:;
  /* 128a1365 mov edx, dword ptr [0x128bfa08] */
  EDX = (r32((uint32_t)(0x128bfa08)));
  /* 128a136b mov dword ptr [0x128bfa18], edx */
  w32((uint32_t)(0x128bfa18), (EDX));
  /* 128a1371 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a1374 push eax */
  push32((uint32_t)(EAX));
  /* 128a1375 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1378 push ecx */
  push32((uint32_t)(ECX));
  /* 128a1379 push 3 */
  push32((uint32_t)(0x3u));
  /* 128a137b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a137e mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 128a1381 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1384 push eax */
  push32((uint32_t)(EAX));
  /* 128a1385 call 0x128a1780 */
  push32(0x128a138au); f_128a1780();
  /* 128a138a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a138d jmp 0x128a1678 */
  goto L_128a1678;
L_128a1392:;
  /* 128a1392 mov ecx, dword ptr [0x128bfa08] */
  ECX = (r32((uint32_t)(0x128bfa08)));
  /* 128a1398 mov dword ptr [0x128bfa18], ecx */
  w32((uint32_t)(0x128bfa18), (ECX));
  /* 128a139e mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a13a1 push edx */
  push32((uint32_t)(EDX));
  /* 128a13a2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a13a5 push eax */
  push32((uint32_t)(EAX));
  /* 128a13a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 128a13a8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a13ab mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 128a13ae add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a13b1 push edx */
  push32((uint32_t)(EDX));
  /* 128a13b2 call 0x128a1780 */
  push32(0x128a13b7u); f_128a1780();
  /* 128a13b7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a13ba jmp 0x128a1678 */
  goto L_128a1678;
L_128a13bf:;
  /* 128a13bf mov eax, dword ptr [0x128bfa08] */
  EAX = (r32((uint32_t)(0x128bfa08)));
  /* 128a13c4 mov dword ptr [0x128bfa18], eax */
  w32((uint32_t)(0x128bfa18), (EAX));
  /* 128a13c9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a13cc push ecx */
  push32((uint32_t)(ECX));
  /* 128a13cd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a13d0 push edx */
  push32((uint32_t)(EDX));
  /* 128a13d1 push 2 */
  push32((uint32_t)(0x2u));
  /* 128a13d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a13d6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 128a13d9 push ecx */
  push32((uint32_t)(ECX));
  /* 128a13da call 0x128a1780 */
  push32(0x128a13dfu); f_128a1780();
  /* 128a13df add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a13e2 jmp 0x128a1678 */
  goto L_128a1678;
L_128a13e7:;
  /* 128a13e7 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a13ea cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a13ee jg 0x128a140c */
  if ((!C.zf&&C.sf==C.of)) goto L_128a140c;
  /* 128a13f0 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a13f3 push eax */
  push32((uint32_t)(EAX));
  /* 128a13f4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a13f7 push ecx */
  push32((uint32_t)(ECX));
  /* 128a13f8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 128a13fb mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 128a1401 push eax */
  push32((uint32_t)(EAX));
  /* 128a1402 call 0x128a1730 */
  push32(0x128a1407u); f_128a1730();
  /* 128a1407 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a140a jmp 0x128a1426 */
  goto L_128a1426;
L_128a140c:;
  /* 128a140c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a140f push ecx */
  push32((uint32_t)(ECX));
  /* 128a1410 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1413 push edx */
  push32((uint32_t)(EDX));
  /* 128a1414 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 128a1417 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 128a141d push ecx */
  push32((uint32_t)(ECX));
  /* 128a141e call 0x128a1730 */
  push32(0x128a1423u); f_128a1730();
  /* 128a1423 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128a1426:;
  /* 128a1426 jmp 0x128a1678 */
  goto L_128a1678;
L_128a142b:;
  /* 128a142b mov edx, dword ptr [0x128bfa08] */
  EDX = (r32((uint32_t)(0x128bfa08)));
  /* 128a1431 mov dword ptr [0x128bfa18], edx */
  w32((uint32_t)(0x128bfa18), (EDX));
  /* 128a1437 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a143a push eax */
  push32((uint32_t)(EAX));
  /* 128a143b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a143e push ecx */
  push32((uint32_t)(ECX));
  /* 128a143f push 2 */
  push32((uint32_t)(0x2u));
  /* 128a1441 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a1444 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 128a1446 push eax */
  push32((uint32_t)(EAX));
  /* 128a1447 call 0x128a1780 */
  push32(0x128a144cu); f_128a1780();
  /* 128a144c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a144f jmp 0x128a1678 */
  goto L_128a1678;
L_128a1454:;
  /* 128a1454 mov ecx, dword ptr [0x128bfa08] */
  ECX = (r32((uint32_t)(0x128bfa08)));
  /* 128a145a mov dword ptr [0x128bfa18], ecx */
  w32((uint32_t)(0x128bfa18), (ECX));
  /* 128a1460 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a1463 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 128a1466 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 128a1469 jmp 0x128a14bd */
  goto L_128a14bd;
L_128a146b:;
  /* 128a146b mov ecx, dword ptr [0x128bfa08] */
  ECX = (r32((uint32_t)(0x128bfa08)));
  /* 128a1471 mov dword ptr [0x128bfa18], ecx */
  w32((uint32_t)(0x128bfa18), (ECX));
  /* 128a1477 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a147a push edx */
  push32((uint32_t)(EDX));
  /* 128a147b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a147e push eax */
  push32((uint32_t)(EAX));
  /* 128a147f push 1 */
  push32((uint32_t)(0x1u));
  /* 128a1481 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a1484 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 128a1487 push edx */
  push32((uint32_t)(EDX));
  /* 128a1488 call 0x128a1780 */
  push32(0x128a148du); f_128a1780();
  /* 128a148d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1490 jmp 0x128a1678 */
  goto L_128a1678;
L_128a1495:;
  /* 128a1495 mov eax, dword ptr [0x128bfa08] */
  EAX = (r32((uint32_t)(0x128bfa08)));
  /* 128a149a mov dword ptr [0x128bfa18], eax */
  w32((uint32_t)(0x128bfa18), (EAX));
  /* 128a149f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a14a2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a14a6 jne 0x128a14b1 */
  if (!C.zf) goto L_128a14b1;
  /* 128a14a8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 128a14af jmp 0x128a14bd */
  goto L_128a14bd;
L_128a14b1:;
  /* 128a14b1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a14b4 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 128a14b7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a14ba mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_128a14bd:;
  /* 128a14bd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a14c0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 128a14c3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a14c6 jge 0x128a14d1 */
  if ((C.sf==C.of)) goto L_128a14d1;
  /* 128a14c8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 128a14cf jmp 0x128a14fe */
  goto L_128a14fe;
L_128a14d1:;
  /* 128a14d1 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a14d4 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 128a14d7 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 128a14d8 mov ecx, 7 */
  ECX = (0x7u);
  /* 128a14dd idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 128a14df mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 128a14e2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a14e5 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 128a14e8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 128a14e9 mov ecx, 7 */
  ECX = (0x7u);
  /* 128a14ee idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 128a14f0 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a14f3 jl 0x128a14fe */
  if ((C.sf!=C.of)) goto L_128a14fe;
  /* 128a14f5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a14f8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a14fb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_128a14fe:;
  /* 128a14fe mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a1501 push eax */
  push32((uint32_t)(EAX));
  /* 128a1502 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1505 push ecx */
  push32((uint32_t)(ECX));
  /* 128a1506 push 2 */
  push32((uint32_t)(0x2u));
  /* 128a1508 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a150b push edx */
  push32((uint32_t)(EDX));
  /* 128a150c call 0x128a1780 */
  push32(0x128a1511u); f_128a1780();
  /* 128a1511 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1514 jmp 0x128a1678 */
  goto L_128a1678;
L_128a1519:;
  /* 128a1519 cmp dword ptr [0x128bfa08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bfa08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a1520 je 0x128a1550 */
  if (C.zf) goto L_128a1550;
  /* 128a1522 mov dword ptr [0x128bfa08], 0 */
  w32((uint32_t)(0x128bfa08), (0x0u));
  /* 128a152c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 128a152f push eax */
  push32((uint32_t)(EAX));
  /* 128a1530 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a1533 push ecx */
  push32((uint32_t)(ECX));
  /* 128a1534 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1537 push edx */
  push32((uint32_t)(EDX));
  /* 128a1538 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a153b push eax */
  push32((uint32_t)(EAX));
  /* 128a153c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 128a153f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 128a1545 push edx */
  push32((uint32_t)(EDX));
  /* 128a1546 call 0x128a18e0 */
  push32(0x128a154bu); f_128a18e0();
  /* 128a154b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a154e jmp 0x128a1572 */
  goto L_128a1572;
L_128a1550:;
  /* 128a1550 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 128a1553 push eax */
  push32((uint32_t)(EAX));
  /* 128a1554 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a1557 push ecx */
  push32((uint32_t)(ECX));
  /* 128a1558 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a155b push edx */
  push32((uint32_t)(EDX));
  /* 128a155c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a155f push eax */
  push32((uint32_t)(EAX));
  /* 128a1560 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 128a1563 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 128a1569 push edx */
  push32((uint32_t)(EDX));
  /* 128a156a call 0x128a18e0 */
  push32(0x128a156fu); f_128a18e0();
  /* 128a156f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128a1572:;
  /* 128a1572 jmp 0x128a1678 */
  goto L_128a1678;
L_128a1577:;
  /* 128a1577 mov dword ptr [0x128bfa08], 0 */
  w32((uint32_t)(0x128bfa08), (0x0u));
  /* 128a1581 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 128a1584 push eax */
  push32((uint32_t)(EAX));
  /* 128a1585 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a1588 push ecx */
  push32((uint32_t)(ECX));
  /* 128a1589 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a158c push edx */
  push32((uint32_t)(EDX));
  /* 128a158d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a1590 push eax */
  push32((uint32_t)(EAX));
  /* 128a1591 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 128a1594 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 128a159a push edx */
  push32((uint32_t)(EDX));
  /* 128a159b call 0x128a18e0 */
  push32(0x128a15a0u); f_128a18e0();
  /* 128a15a0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a15a3 jmp 0x128a1678 */
  goto L_128a1678;
L_128a15a8:;
  /* 128a15a8 mov eax, dword ptr [0x128bfa08] */
  EAX = (r32((uint32_t)(0x128bfa08)));
  /* 128a15ad mov dword ptr [0x128bfa18], eax */
  w32((uint32_t)(0x128bfa18), (EAX));
  /* 128a15b2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a15b5 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 128a15b8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 128a15b9 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 128a15be idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 128a15c0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 128a15c3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a15c6 push edx */
  push32((uint32_t)(EDX));
  /* 128a15c7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a15ca push eax */
  push32((uint32_t)(EAX));
  /* 128a15cb push 2 */
  push32((uint32_t)(0x2u));
  /* 128a15cd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a15d0 push ecx */
  push32((uint32_t)(ECX));
  /* 128a15d1 call 0x128a1780 */
  push32(0x128a15d6u); f_128a1780();
  /* 128a15d6 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a15d9 jmp 0x128a1678 */
  goto L_128a1678;
L_128a15de:;
  /* 128a15de mov edx, dword ptr [0x128bfa08] */
  EDX = (r32((uint32_t)(0x128bfa08)));
  /* 128a15e4 mov dword ptr [0x128bfa18], edx */
  w32((uint32_t)(0x128bfa18), (EDX));
  /* 128a15ea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a15ed mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 128a15f0 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 128a15f1 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 128a15f6 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 128a15f8 mov ecx, eax */
  ECX = (EAX);
  /* 128a15fa add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a15fd imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 128a1600 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a1603 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 128a1606 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 128a1607 mov esi, 0x64 */
  ESI = (0x64u);
  /* 128a160c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 128a160e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1610 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 128a1613 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a1616 push eax */
  push32((uint32_t)(EAX));
  /* 128a1617 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a161a push ecx */
  push32((uint32_t)(ECX));
  /* 128a161b push 4 */
  push32((uint32_t)(0x4u));
  /* 128a161d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a1620 push edx */
  push32((uint32_t)(EDX));
  /* 128a1621 call 0x128a1780 */
  push32(0x128a1626u); f_128a1780();
  /* 128a1626 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1629 jmp 0x128a1678 */
  goto L_128a1678;
L_128a162b:;
  /* 128a162b call 0x128a2740 */
  push32(0x128a1630u); f_128a2740();
  /* 128a1630 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a1633 push eax */
  push32((uint32_t)(EAX));
  /* 128a1634 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1637 push ecx */
  push32((uint32_t)(ECX));
  /* 128a1638 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a163b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a163d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a1641 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 128a1644 mov ecx, dword ptr [eax*4 + 0x128bee2c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x128bee2c)));
  /* 128a164b push ecx */
  push32((uint32_t)(ECX));
  /* 128a164c call 0x128a1730 */
  push32(0x128a1651u); f_128a1730();
  /* 128a1651 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1654 jmp 0x128a1678 */
  goto L_128a1678;
L_128a1656:;
  /* 128a1656 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1659 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 128a165b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 128a165e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1661 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 128a1663 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1666 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1669 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 128a166b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a166e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 128a1670 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a1673 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a1676 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_128a1678:;
  /* 128a1678 pop esi */
  ESI = (pop32());
  /* 128a1679 mov esp, ebp */
  ESP = (EBP);
  /* 128a167b pop ebp */
  EBP = (pop32());
  /* 128a167c ret  */
  ESPCHK(0x128a1110u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x128a1730 (72 bytes, 30 insns) */
void f_128a1730(void) {
  FTRACE(0x128a1730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a1730 push ebp */
  push32((uint32_t)(EBP));
  /* 128a1731 mov ebp, esp */
  EBP = (ESP);
L_128a1733:;
  /* 128a1733 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1736 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a1739 je 0x128a1776 */
  if (C.zf) goto L_128a1776;
  /* 128a173b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a173e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 128a1741 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128a1743 je 0x128a1776 */
  if (C.zf) goto L_128a1776;
  /* 128a1745 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a1748 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 128a174a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a174d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 128a174f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 128a1751 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a1754 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 128a1756 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1759 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a175c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 128a175e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a1761 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1764 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 128a1767 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a176a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 128a176c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a176f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1772 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 128a1774 jmp 0x128a1733 */
  goto L_128a1733;
L_128a1776:;
  /* 128a1776 pop ebp */
  EBP = (pop32());
  /* 128a1777 ret  */
  ESPCHK(0x128a1730u, _esp0);
  ESP += 4; return;
}

/* FUN_10011780 @ 0x128a1780 (173 bytes, 64 insns) */
void f_128a1780(void) {
  FTRACE(0x128a1780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a1780 push ebp */
  push32((uint32_t)(EBP));
  /* 128a1781 mov ebp, esp */
  EBP = (ESP);
  /* 128a1783 push ecx */
  push32((uint32_t)(ECX));
  /* 128a1784 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 128a178b cmp dword ptr [0x128bfa18], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bfa18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a1792 je 0x128a17aa */
  if (C.zf) goto L_128a17aa;
  /* 128a1794 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a1797 push eax */
  push32((uint32_t)(EAX));
  /* 128a1798 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a179b push ecx */
  push32((uint32_t)(ECX));
  /* 128a179c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a179f push edx */
  push32((uint32_t)(EDX));
  /* 128a17a0 call 0x128a1830 */
  push32(0x128a17a5u); f_128a1830();
  /* 128a17a5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a17a8 jmp 0x128a1829 */
  goto L_128a1829;
L_128a17aa:;
  /* 128a17aa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a17ad mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a17b0 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a17b2 jae 0x128a1820 */
  if (!C.cf) goto L_128a1820;
  /* 128a17b4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a17b7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a17ba mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 128a17bd jmp 0x128a17c8 */
  goto L_128a17c8;
L_128a17bf:;
  /* 128a17bf mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a17c2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a17c5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_128a17c8:;
  /* 128a17c8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a17cb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a17ce test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 128a17d0 je 0x128a1804 */
  if (C.zf) goto L_128a1804;
  /* 128a17d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a17d5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 128a17d6 mov ecx, 0xa */
  ECX = (0xau);
  /* 128a17db idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 128a17dd add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a17e0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a17e3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 128a17e5 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a17e8 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 128a17eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a17ee cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 128a17ef mov ecx, 0xa */
  ECX = (0xau);
  /* 128a17f4 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 128a17f6 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 128a17f9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a17fc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a17ff mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 128a1802 jmp 0x128a17bf */
  goto L_128a17bf;
L_128a1804:;
  /* 128a1804 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1807 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 128a1809 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a180c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a180f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 128a1811 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a1814 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 128a1816 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a1819 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a181c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 128a181e jmp 0x128a1829 */
  goto L_128a1829;
L_128a1820:;
  /* 128a1820 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a1823 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_128a1829:;
  /* 128a1829 mov esp, ebp */
  ESP = (EBP);
  /* 128a182b pop ebp */
  EBP = (pop32());
  /* 128a182c ret  */
  ESPCHK(0x128a1780u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x128a1830 (172 bytes, 65 insns) */
void f_128a1830(void) {
  FTRACE(0x128a1830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a1830 push ebp */
  push32((uint32_t)(EBP));
  /* 128a1831 mov ebp, esp */
  EBP = (ESP);
  /* 128a1833 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a1836 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a1839 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 128a183b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 128a183e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1841 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a1844 jbe 0x128a188b */
  if ((C.cf||C.zf)) goto L_128a188b;
L_128a1846:;
  /* 128a1846 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a1849 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 128a184a mov ecx, 0xa */
  ECX = (0xau);
  /* 128a184f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 128a1851 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1854 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a1857 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 128a1859 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a185c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a185f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 128a1862 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1865 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 128a1867 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a186a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a186d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 128a186f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a1872 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 128a1873 mov ecx, 0xa */
  ECX = (0xau);
  /* 128a1878 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 128a187a mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 128a187d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a1881 jle 0x128a188b */
  if ((C.zf||C.sf!=C.of)) goto L_128a188b;
  /* 128a1883 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1886 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a1889 ja 0x128a1846 */
  if ((!C.cf&&!C.zf)) goto L_128a1846;
L_128a188b:;
  /* 128a188b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a188e mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 128a1890 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 128a1893 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a1896 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a1899 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 128a189b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a189e sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a18a1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_128a18a4:;
  /* 128a18a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a18a7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 128a18a9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 128a18ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a18af mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a18b2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 128a18b4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 128a18b6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a18b9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a18bc mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 128a18bf mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a18c2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 128a18c5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 128a18c7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a18ca add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a18cd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 128a18d0 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a18d3 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a18d6 jb 0x128a18a4 */
  if (C.cf) goto L_128a18a4;
  /* 128a18d8 mov esp, ebp */
  ESP = (EBP);
  /* 128a18da pop ebp */
  EBP = (pop32());
  /* 128a18db ret  */
  ESPCHK(0x128a1830u, _esp0);
  ESP += 4; return;
}

/* FUN_100118e0 @ 0x128a18e0 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_128a18e0(void) {
  FTRACE(0x128a18e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a18e0 push ebp */
  push32((uint32_t)(EBP));
  /* 128a18e1 mov ebp, esp */
  EBP = (ESP);
  /* 128a18e3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_128a18e6:;
  /* 128a18e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a18e9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 128a18ec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 128a18ee je 0x128a1d5c */
  if (C.zf) goto L_128a1d5c;
  /* 128a18f4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a18f7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a18fa je 0x128a1d5c */
  if (C.zf) goto L_128a1d5c;
  /* 128a1900 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 128a1904 mov dword ptr [0x128bfa18], 0 */
  w32((uint32_t)(0x128bfa18), (0x0u));
  /* 128a190e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 128a1915 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a1918 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 128a191b jmp 0x128a1926 */
  goto L_128a1926;
L_128a191d:;
  /* 128a191d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a1920 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1923 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_128a1926:;
  /* 128a1926 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a1929 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 128a192c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a192f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 128a1932 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a1935 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1938 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 128a193b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a193d jne 0x128a1941 */
  if (!C.zf) goto L_128a1941;
  /* 128a193f jmp 0x128a191d */
  goto L_128a191d;
L_128a1941:;
  /* 128a1941 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a1944 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a1947 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 128a194a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a194d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 128a1950 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 128a1953 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 128a1956 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a1959 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 128a195c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a1960 ja 0x128a1cb0 */
  if ((!C.cf&&!C.zf)) goto L_128a1cb0;
  /* 128a1966 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 128a1969 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a196b mov al, byte ptr [ecx + 0x128a1d8c] */
  AL = (r8((uint32_t)(ECX + 0x128a1d8c)));
  /* 128a1971 jmp dword ptr [eax*4 + 0x128a1d60] */
  switch (EAX) {
    case 0: goto L_128a1bcf;
    case 1: goto L_128a1ab3;
    case 2: goto L_128a1a3e;
    case 3: goto L_128a1978;
    case 4: goto L_128a19b6;
    case 5: goto L_128a1a17;
    case 6: goto L_128a1a65;
    case 7: goto L_128a1a8c;
    case 8: goto L_128a1afa;
    case 9: goto L_128a19f4;
    case 10: goto L_128a1cb0;
    default: x86_unimpl("switch@0x128a1971 out of table"); return;
  }
L_128a1978:;
  /* 128a1978 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a197b mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 128a197e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 128a1981 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a1984 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 128a1987 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a198b ja 0x128a19b1 */
  if ((!C.cf&&!C.zf)) goto L_128a19b1;
  /* 128a198d mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 128a1990 jmp dword ptr [ecx*4 + 0x128a1ddf] */
  switch (ECX) {
    case 0: goto L_128a1997;
    case 1: goto L_128a19a1;
    case 2: goto L_128a19a7;
    case 3: goto L_128a19ad;
    case 4: goto L_128a19d5;
    case 5: goto L_128a19df;
    case 6: goto L_128a19e5;
    case 7: goto L_128a19eb;
    default: x86_unimpl("switch@0x128a1990 out of table"); return;
  }
L_128a1997:;
  /* 128a1997 mov dword ptr [0x128bfa18], 1 */
  w32((uint32_t)(0x128bfa18), (0x1u));
L_128a19a1:;
  /* 128a19a1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 128a19a5 jmp 0x128a19b1 */
  goto L_128a19b1;
L_128a19a7:;
  /* 128a19a7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 128a19ab jmp 0x128a19b1 */
  goto L_128a19b1;
L_128a19ad:;
  /* 128a19ad mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_128a19b1:;
  /* 128a19b1 jmp 0x128a1cb0 */
  goto L_128a1cb0;
L_128a19b6:;
  /* 128a19b6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a19b9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 128a19bc mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 128a19bf sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a19c2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 128a19c5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a19c9 ja 0x128a19ef */
  if ((!C.cf&&!C.zf)) goto L_128a19ef;
  /* 128a19cb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 128a19ce jmp dword ptr [ecx*4 + 0x128a1def] */
  switch (ECX) {
    case 0: goto L_128a19d5;
    case 1: goto L_128a19df;
    case 2: goto L_128a19e5;
    case 3: goto L_128a19eb;
    default: x86_unimpl("switch@0x128a19ce out of table"); return;
  }
L_128a19d5:;
  /* 128a19d5 mov dword ptr [0x128bfa18], 1 */
  w32((uint32_t)(0x128bfa18), (0x1u));
L_128a19df:;
  /* 128a19df mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 128a19e3 jmp 0x128a19ef */
  goto L_128a19ef;
L_128a19e5:;
  /* 128a19e5 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 128a19e9 jmp 0x128a19ef */
  goto L_128a19ef;
L_128a19eb:;
  /* 128a19eb mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_128a19ef:;
  /* 128a19ef jmp 0x128a1cb0 */
  goto L_128a1cb0;
L_128a19f4:;
  /* 128a19f4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a19f7 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 128a19fa cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a19fe je 0x128a1a08 */
  if (C.zf) goto L_128a1a08;
  /* 128a1a00 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a1a04 je 0x128a1a0e */
  if (C.zf) goto L_128a1a0e;
  /* 128a1a06 jmp 0x128a1a12 */
  goto L_128a1a12;
L_128a1a08:;
  /* 128a1a08 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 128a1a0c jmp 0x128a1a12 */
  goto L_128a1a12;
L_128a1a0e:;
  /* 128a1a0e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_128a1a12:;
  /* 128a1a12 jmp 0x128a1cb0 */
  goto L_128a1cb0;
L_128a1a17:;
  /* 128a1a17 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a1a1a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 128a1a1d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a1a21 je 0x128a1a2b */
  if (C.zf) goto L_128a1a2b;
  /* 128a1a23 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a1a27 je 0x128a1a35 */
  if (C.zf) goto L_128a1a35;
  /* 128a1a29 jmp 0x128a1a39 */
  goto L_128a1a39;
L_128a1a2b:;
  /* 128a1a2b mov dword ptr [0x128bfa18], 1 */
  w32((uint32_t)(0x128bfa18), (0x1u));
L_128a1a35:;
  /* 128a1a35 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_128a1a39:;
  /* 128a1a39 jmp 0x128a1cb0 */
  goto L_128a1cb0;
L_128a1a3e:;
  /* 128a1a3e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a1a41 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 128a1a44 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a1a48 je 0x128a1a52 */
  if (C.zf) goto L_128a1a52;
  /* 128a1a4a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a1a4e je 0x128a1a5c */
  if (C.zf) goto L_128a1a5c;
  /* 128a1a50 jmp 0x128a1a60 */
  goto L_128a1a60;
L_128a1a52:;
  /* 128a1a52 mov dword ptr [0x128bfa18], 1 */
  w32((uint32_t)(0x128bfa18), (0x1u));
L_128a1a5c:;
  /* 128a1a5c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_128a1a60:;
  /* 128a1a60 jmp 0x128a1cb0 */
  goto L_128a1cb0;
L_128a1a65:;
  /* 128a1a65 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a1a68 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 128a1a6b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a1a6f je 0x128a1a79 */
  if (C.zf) goto L_128a1a79;
  /* 128a1a71 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a1a75 je 0x128a1a83 */
  if (C.zf) goto L_128a1a83;
  /* 128a1a77 jmp 0x128a1a87 */
  goto L_128a1a87;
L_128a1a79:;
  /* 128a1a79 mov dword ptr [0x128bfa18], 1 */
  w32((uint32_t)(0x128bfa18), (0x1u));
L_128a1a83:;
  /* 128a1a83 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_128a1a87:;
  /* 128a1a87 jmp 0x128a1cb0 */
  goto L_128a1cb0;
L_128a1a8c:;
  /* 128a1a8c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a1a8f mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 128a1a92 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a1a96 je 0x128a1aa0 */
  if (C.zf) goto L_128a1aa0;
  /* 128a1a98 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a1a9c je 0x128a1aaa */
  if (C.zf) goto L_128a1aaa;
  /* 128a1a9e jmp 0x128a1aae */
  goto L_128a1aae;
L_128a1aa0:;
  /* 128a1aa0 mov dword ptr [0x128bfa18], 1 */
  w32((uint32_t)(0x128bfa18), (0x1u));
L_128a1aaa:;
  /* 128a1aaa mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_128a1aae:;
  /* 128a1aae jmp 0x128a1cb0 */
  goto L_128a1cb0;
L_128a1ab3:;
  /* 128a1ab3 push 0x128bbfa8 */
  push32((uint32_t)(0x128bbfa8u));
  /* 128a1ab8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a1abb push ecx */
  push32((uint32_t)(ECX));
  /* 128a1abc call 0x128a2310 */
  push32(0x128a1ac1u); f_128a2310();
  /* 128a1ac1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1ac4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128a1ac6 jne 0x128a1ad3 */
  if (!C.zf) goto L_128a1ad3;
  /* 128a1ac8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a1acb add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1ace mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 128a1ad1 jmp 0x128a1af1 */
  goto L_128a1af1;
L_128a1ad3:;
  /* 128a1ad3 push 0x128bbfa4 */
  push32((uint32_t)(0x128bbfa4u));
  /* 128a1ad8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a1adb push eax */
  push32((uint32_t)(EAX));
  /* 128a1adc call 0x128a2310 */
  push32(0x128a1ae1u); f_128a2310();
  /* 128a1ae1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1ae4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128a1ae6 jne 0x128a1af1 */
  if (!C.zf) goto L_128a1af1;
  /* 128a1ae8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a1aeb add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1aee mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_128a1af1:;
  /* 128a1af1 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 128a1af5 jmp 0x128a1cb0 */
  goto L_128a1cb0;
L_128a1afa:;
  /* 128a1afa mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a1afd cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a1b01 jg 0x128a1b11 */
  if ((!C.zf&&C.sf==C.of)) goto L_128a1b11;
  /* 128a1b03 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 128a1b06 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 128a1b0c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 128a1b0f jmp 0x128a1b1d */
  goto L_128a1b1d;
L_128a1b11:;
  /* 128a1b11 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 128a1b14 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 128a1b1a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_128a1b1d:;
  /* 128a1b1d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a1b21 jle 0x128a1bc4 */
  if ((C.zf||C.sf!=C.of)) goto L_128a1bc4;
  /* 128a1b27 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a1b2a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a1b2d jbe 0x128a1bc4 */
  if ((C.cf||C.zf)) goto L_128a1bc4;
  /* 128a1b33 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 128a1b36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a1b38 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 128a1b3a mov ecx, dword ptr [0x128bdde8] */
  ECX = (r32((uint32_t)(0x128bdde8)));
  /* 128a1b40 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128a1b42 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 128a1b46 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 128a1b4c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128a1b4e je 0x128a1b87 */
  if (C.zf) goto L_128a1b87;
  /* 128a1b50 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a1b53 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a1b56 jbe 0x128a1b87 */
  if ((C.cf||C.zf)) goto L_128a1b87;
  /* 128a1b58 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1b5b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 128a1b5d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 128a1b60 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 128a1b62 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 128a1b64 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1b67 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 128a1b69 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1b6c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1b6f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 128a1b71 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 128a1b74 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1b77 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 128a1b7a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a1b7d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 128a1b7f sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a1b82 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a1b85 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_128a1b87:;
  /* 128a1b87 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1b8a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 128a1b8c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 128a1b8f mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 128a1b91 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 128a1b93 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1b96 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 128a1b98 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1b9b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1b9e mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 128a1ba0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 128a1ba3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1ba6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 128a1ba9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a1bac mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 128a1bae sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a1bb1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a1bb4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 128a1bb6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a1bb9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a1bbc mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 128a1bbf jmp 0x128a1b1d */
  goto L_128a1b1d;
L_128a1bc4:;
  /* 128a1bc4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a1bc7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 128a1bca jmp 0x128a18e6 */
  goto L_128a18e6;
L_128a1bcf:;
  /* 128a1bcf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a1bd2 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 128a1bd5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 128a1bd7 je 0x128a1ca2 */
  if (C.zf) goto L_128a1ca2;
  /* 128a1bdd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a1be0 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1be3 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_128a1be6:;
  /* 128a1be6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a1be9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 128a1bec test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 128a1bee je 0x128a1ca0 */
  if (C.zf) goto L_128a1ca0;
  /* 128a1bf4 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a1bf7 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a1bfa je 0x128a1ca0 */
  if (C.zf) goto L_128a1ca0;
  /* 128a1c00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a1c03 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 128a1c06 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a1c09 jne 0x128a1c19 */
  if (!C.zf) goto L_128a1c19;
  /* 128a1c0b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a1c0e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1c11 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 128a1c14 jmp 0x128a1ca0 */
  goto L_128a1ca0;
L_128a1c19:;
  /* 128a1c19 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a1c1c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 128a1c1e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 128a1c20 mov edx, dword ptr [0x128bdde8] */
  EDX = (r32((uint32_t)(0x128bdde8)));
  /* 128a1c26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a1c28 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 128a1c2c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 128a1c31 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128a1c33 je 0x128a1c6c */
  if (C.zf) goto L_128a1c6c;
  /* 128a1c35 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a1c38 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a1c3b jbe 0x128a1c6c */
  if ((C.cf||C.zf)) goto L_128a1c6c;
  /* 128a1c3d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1c40 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 128a1c42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a1c45 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 128a1c47 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 128a1c49 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1c4c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 128a1c4e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1c51 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1c54 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 128a1c56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a1c59 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1c5c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 128a1c5f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a1c62 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 128a1c64 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a1c67 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a1c6a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_128a1c6c:;
  /* 128a1c6c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1c6f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 128a1c71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a1c74 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 128a1c76 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 128a1c78 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1c7b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 128a1c7d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1c80 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1c83 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 128a1c85 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a1c88 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1c8b mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 128a1c8e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a1c91 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 128a1c93 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a1c96 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a1c99 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 128a1c9b jmp 0x128a1be6 */
  goto L_128a1be6;
L_128a1ca0:;
  /* 128a1ca0 jmp 0x128a1cab */
  goto L_128a1cab;
L_128a1ca2:;
  /* 128a1ca2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a1ca5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1ca8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_128a1cab:;
  /* 128a1cab jmp 0x128a18e6 */
  goto L_128a18e6;
L_128a1cb0:;
  /* 128a1cb0 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 128a1cb4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 128a1cb6 je 0x128a1cdc */
  if (C.zf) goto L_128a1cdc;
  /* 128a1cb8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 128a1cbb push edx */
  push32((uint32_t)(EDX));
  /* 128a1cbc mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a1cbf push eax */
  push32((uint32_t)(EAX));
  /* 128a1cc0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1cc3 push ecx */
  push32((uint32_t)(ECX));
  /* 128a1cc4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a1cc7 push edx */
  push32((uint32_t)(EDX));
  /* 128a1cc8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 128a1ccb push eax */
  push32((uint32_t)(EAX));
  /* 128a1ccc call 0x128a1110 */
  push32(0x128a1cd1u); f_128a1110();
  /* 128a1cd1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1cd4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a1cd7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 128a1cda jmp 0x128a1d57 */
  goto L_128a1d57;
L_128a1cdc:;
  /* 128a1cdc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a1cdf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a1ce1 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 128a1ce3 mov ecx, dword ptr [0x128bdde8] */
  ECX = (r32((uint32_t)(0x128bdde8)));
  /* 128a1ce9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128a1ceb mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 128a1cef and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 128a1cf5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128a1cf7 je 0x128a1d28 */
  if (C.zf) goto L_128a1d28;
  /* 128a1cf9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1cfc mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 128a1cfe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a1d01 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 128a1d03 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 128a1d05 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1d08 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 128a1d0a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1d0d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1d10 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 128a1d12 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a1d15 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1d18 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 128a1d1b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a1d1e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 128a1d20 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a1d23 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a1d26 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_128a1d28:;
  /* 128a1d28 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1d2b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 128a1d2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a1d30 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 128a1d32 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 128a1d34 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1d37 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 128a1d39 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1d3c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1d3f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 128a1d41 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a1d44 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1d47 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 128a1d4a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a1d4d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 128a1d4f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a1d52 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a1d55 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_128a1d57:;
  /* 128a1d57 jmp 0x128a18e6 */
  goto L_128a18e6;
L_128a1d5c:;
  /* 128a1d5c mov esp, ebp */
  ESP = (EBP);
  /* 128a1d5e pop ebp */
  EBP = (pop32());
  /* 128a1d5f ret  */
  ESPCHK(0x128a18e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011e00 @ 0x128a1e00 (650 bytes, 178 insns) */
void f_128a1e00(void) {
  FTRACE(0x128a1e00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a1e00 push ebp */
  push32((uint32_t)(EBP));
  /* 128a1e01 mov ebp, esp */
  EBP = (ESP);
  /* 128a1e03 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a1e09 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a1e0d jne 0x128a1f69 */
  if (!C.zf) goto L_128a1f69;
  /* 128a1e13 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a1e16 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 128a1e1c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 128a1e22 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 128a1e25 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 128a1e2c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 128a1e36 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a1e38 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 128a1e3e push edx */
  push32((uint32_t)(EDX));
  /* 128a1e3f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a1e42 push eax */
  push32((uint32_t)(EAX));
  /* 128a1e43 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1e46 push ecx */
  push32((uint32_t)(ECX));
  /* 128a1e47 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a1e4a push edx */
  push32((uint32_t)(EDX));
  /* 128a1e4b call 0x128a3220 */
  push32(0x128a1e50u); f_128a3220();
  /* 128a1e50 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1e53 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 128a1e56 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a1e5a jne 0x128a1eef */
  if (!C.zf) goto L_128a1eef;
  /* 128a1e60 call dword ptr [0x128c2250] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2250))), 0x128a1e66u);
  /* 128a1e66 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a1e69 je 0x128a1e70 */
  if (C.zf) goto L_128a1e70;
  /* 128a1e6b jmp 0x128a1f4d */
  goto L_128a1f4d;
L_128a1e70:;
  /* 128a1e70 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a1e72 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a1e74 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a1e76 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1e79 push eax */
  push32((uint32_t)(EAX));
  /* 128a1e7a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a1e7d push ecx */
  push32((uint32_t)(ECX));
  /* 128a1e7e call 0x128a3220 */
  push32(0x128a1e83u); f_128a3220();
  /* 128a1e83 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1e86 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 128a1e8c cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a1e93 jne 0x128a1e9a */
  if (!C.zf) goto L_128a1e9a;
  /* 128a1e95 jmp 0x128a1f4d */
  goto L_128a1f4d;
L_128a1e9a:;
  /* 128a1e9a push 0x58 */
  push32((uint32_t)(0x58u));
  /* 128a1e9c push 0x128bbfb0 */
  push32((uint32_t)(0x128bbfb0u));
  /* 128a1ea1 push 2 */
  push32((uint32_t)(0x2u));
  /* 128a1ea3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 128a1ea9 push edx */
  push32((uint32_t)(EDX));
  /* 128a1eaa call 0x12894e60 */
  push32(0x128a1eafu); f_12894e60();
  /* 128a1eaf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1eb2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 128a1eb5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a1eb9 jne 0x128a1ec0 */
  if (!C.zf) goto L_128a1ec0;
  /* 128a1ebb jmp 0x128a1f4d */
  goto L_128a1f4d;
L_128a1ec0:;
  /* 128a1ec0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 128a1ec7 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a1ec9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 128a1ecf push eax */
  push32((uint32_t)(EAX));
  /* 128a1ed0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a1ed3 push ecx */
  push32((uint32_t)(ECX));
  /* 128a1ed4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1ed7 push edx */
  push32((uint32_t)(EDX));
  /* 128a1ed8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a1edb push eax */
  push32((uint32_t)(EAX));
  /* 128a1edc call 0x128a3220 */
  push32(0x128a1ee1u); f_128a3220();
  /* 128a1ee1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1ee4 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 128a1ee7 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a1eeb jne 0x128a1eef */
  if (!C.zf) goto L_128a1eef;
  /* 128a1eed jmp 0x128a1f4d */
  goto L_128a1f4d;
L_128a1eef:;
  /* 128a1eef push 0x63 */
  push32((uint32_t)(0x63u));
  /* 128a1ef1 push 0x128bbfb0 */
  push32((uint32_t)(0x128bbfb0u));
  /* 128a1ef6 push 2 */
  push32((uint32_t)(0x2u));
  /* 128a1ef8 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a1efb push ecx */
  push32((uint32_t)(ECX));
  /* 128a1efc call 0x12894e60 */
  push32(0x128a1f01u); f_12894e60();
  /* 128a1f01 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1f04 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 128a1f0a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 128a1f0c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 128a1f12 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a1f15 jne 0x128a1f19 */
  if (!C.zf) goto L_128a1f19;
  /* 128a1f17 jmp 0x128a1f4d */
  goto L_128a1f4d;
L_128a1f19:;
  /* 128a1f19 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a1f1c push ecx */
  push32((uint32_t)(ECX));
  /* 128a1f1d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a1f20 push edx */
  push32((uint32_t)(EDX));
  /* 128a1f21 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 128a1f27 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 128a1f29 push ecx */
  push32((uint32_t)(ECX));
  /* 128a1f2a call 0x12898680 */
  push32(0x128a1f2fu); f_12898680();
  /* 128a1f2f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1f32 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a1f36 je 0x128a1f46 */
  if (C.zf) goto L_128a1f46;
  /* 128a1f38 push 2 */
  push32((uint32_t)(0x2u));
  /* 128a1f3a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a1f3d push edx */
  push32((uint32_t)(EDX));
  /* 128a1f3e call 0x128958f0 */
  push32(0x128a1f43u); f_128958f0();
  /* 128a1f43 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128a1f46:;
  /* 128a1f46 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a1f48 jmp 0x128a2086 */
  goto L_128a2086;
L_128a1f4d:;
  /* 128a1f4d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a1f51 je 0x128a1f61 */
  if (C.zf) goto L_128a1f61;
  /* 128a1f53 push 2 */
  push32((uint32_t)(0x2u));
  /* 128a1f55 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a1f58 push eax */
  push32((uint32_t)(EAX));
  /* 128a1f59 call 0x128958f0 */
  push32(0x128a1f5eu); f_128958f0();
  /* 128a1f5e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128a1f61:;
  /* 128a1f61 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 128a1f64 jmp 0x128a2086 */
  goto L_128a2086;
L_128a1f69:;
  /* 128a1f69 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a1f6d jne 0x128a2083 */
  if (!C.zf) goto L_128a2083;
  /* 128a1f73 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 128a1f7d mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a1f80 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 128a1f86 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a1f88 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 128a1f8e push edx */
  push32((uint32_t)(EDX));
  /* 128a1f8f push 0x128bf92c */
  push32((uint32_t)(0x128bf92cu));
  /* 128a1f94 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a1f97 push eax */
  push32((uint32_t)(EAX));
  /* 128a1f98 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a1f9b push ecx */
  push32((uint32_t)(ECX));
  /* 128a1f9c call 0x128a3080 */
  push32(0x128a1fa1u); f_128a3080();
  /* 128a1fa1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1fa4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128a1fa6 jne 0x128a1fb0 */
  if (!C.zf) goto L_128a1fb0;
  /* 128a1fa8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 128a1fab jmp 0x128a2086 */
  goto L_128a2086;
L_128a1fb0:;
  /* 128a1fb0 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 128a1fb6 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 128a1fb9 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 128a1fc3 jmp 0x128a1fd4 */
  goto L_128a1fd4;
L_128a1fc5:;
  /* 128a1fc5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 128a1fcb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a1fce mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_128a1fd4:;
  /* 128a1fd4 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a1fdb jge 0x128a207f */
  if ((C.sf==C.of)) goto L_128a207f;
  /* 128a1fe1 cmp dword ptr [0x128be158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x128be158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a1fe8 jle 0x128a201b */
  if ((C.zf||C.sf!=C.of)) goto L_128a201b;
  /* 128a1fea push 4 */
  push32((uint32_t)(0x4u));
  /* 128a1fec mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 128a1ff2 mov dl, byte ptr [ecx*2 + 0x128bf92c] */
  DL = (r8((uint32_t)(ECX*2 + 0x128bf92c)));
  /* 128a1ff9 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 128a1fff mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 128a2005 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 128a200a push eax */
  push32((uint32_t)(EAX));
  /* 128a200b call 0x1289b720 */
  push32(0x128a2010u); f_1289b720();
  /* 128a2010 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2013 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 128a2019 jmp 0x128a204e */
  goto L_128a204e;
L_128a201b:;
  /* 128a201b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 128a2021 mov dl, byte ptr [ecx*2 + 0x128bf92c] */
  DL = (r8((uint32_t)(ECX*2 + 0x128bf92c)));
  /* 128a2028 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 128a202e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 128a2034 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 128a2039 mov ecx, dword ptr [0x128bdde8] */
  ECX = (r32((uint32_t)(0x128bdde8)));
  /* 128a203f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128a2041 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 128a2045 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 128a2048 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_128a204e:;
  /* 128a204e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a2055 je 0x128a2078 */
  if (C.zf) goto L_128a2078;
  /* 128a2057 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 128a205d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 128a2060 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 128a2063 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 128a206a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 128a206e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 128a2074 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 128a2076 jmp 0x128a207a */
  goto L_128a207a;
L_128a2078:;
  /* 128a2078 jmp 0x128a207f */
  goto L_128a207f;
L_128a207a:;
  /* 128a207a jmp 0x128a1fc5 */
  goto L_128a1fc5;
L_128a207f:;
  /* 128a207f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a2081 jmp 0x128a2086 */
  goto L_128a2086;
L_128a2083:;
  /* 128a2083 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_128a2086:;
  /* 128a2086 mov esp, ebp */
  ESP = (EBP);
  /* 128a2088 pop ebp */
  EBP = (pop32());
  /* 128a2089 ret  */
  ESPCHK(0x128a1e00u, _esp0);
  ESP += 4; return;
}

/* FUN_10012090 @ 0x128a2090 (10 bytes, 5 insns) */
void f_128a2090(void) {
  FTRACE(0x128a2090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a2090 push ebp */
  push32((uint32_t)(EBP));
  /* 128a2091 mov ebp, esp */
  EBP = (ESP);
  /* 128a2093 mov eax, dword ptr [0x128bed98] */
  EAX = (r32((uint32_t)(0x128bed98)));
  /* 128a2098 pop ebp */
  EBP = (pop32());
  /* 128a2099 ret  */
  ESPCHK(0x128a2090u, _esp0);
  ESP += 4; return;
}

/* FUN_100120a0 @ 0x128a20a0 (575 bytes, 196 insns) */
void f_128a20a0(void) {
  FTRACE(0x128a20a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a20a0 push ebp */
  push32((uint32_t)(EBP));
  /* 128a20a1 mov ebp, esp */
  EBP = (ESP);
  /* 128a20a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 128a20a5 push 0x128bbfc0 */
  push32((uint32_t)(0x128bbfc0u));
  /* 128a20aa push 0x128a06e0 */
  push32((uint32_t)(0x128a06e0u));
  /* 128a20af mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 128a20b5 push eax */
  push32((uint32_t)(EAX));
  /* 128a20b6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 128a20bd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a20c0 push ebx */
  push32((uint32_t)(EBX));
  /* 128a20c1 push esi */
  push32((uint32_t)(ESI));
  /* 128a20c2 push edi */
  push32((uint32_t)(EDI));
  /* 128a20c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 128a20c6 cmp dword ptr [0x128bf938], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf938))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a20cd jne 0x128a211e */
  if (!C.zf) goto L_128a211e;
  /* 128a20cf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 128a20d2 push eax */
  push32((uint32_t)(EAX));
  /* 128a20d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 128a20d5 push 0x128bb770 */
  push32((uint32_t)(0x128bb770u));
  /* 128a20da push 1 */
  push32((uint32_t)(0x1u));
  /* 128a20dc call dword ptr [0x128c22dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22dc))), 0x128a20e2u);
  /* 128a20e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128a20e4 je 0x128a20f2 */
  if (C.zf) goto L_128a20f2;
  /* 128a20e6 mov dword ptr [0x128bf938], 1 */
  w32((uint32_t)(0x128bf938), (0x1u));
  /* 128a20f0 jmp 0x128a211e */
  goto L_128a211e;
L_128a20f2:;
  /* 128a20f2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 128a20f5 push ecx */
  push32((uint32_t)(ECX));
  /* 128a20f6 push 1 */
  push32((uint32_t)(0x1u));
  /* 128a20f8 push 0x128bb76c */
  push32((uint32_t)(0x128bb76cu));
  /* 128a20fd push 1 */
  push32((uint32_t)(0x1u));
  /* 128a20ff push 0 */
  push32((uint32_t)(0x0u));
  /* 128a2101 call dword ptr [0x128c2290] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2290))), 0x128a2107u);
  /* 128a2107 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128a2109 je 0x128a2117 */
  if (C.zf) goto L_128a2117;
  /* 128a210b mov dword ptr [0x128bf938], 2 */
  w32((uint32_t)(0x128bf938), (0x2u));
  /* 128a2115 jmp 0x128a211e */
  goto L_128a211e;
L_128a2117:;
  /* 128a2117 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a2119 jmp 0x128a22f9 */
  goto L_128a22f9;
L_128a211e:;
  /* 128a211e cmp dword ptr [0x128bf938], 1 */
  { uint32_t _a=(r32((uint32_t)(0x128bf938))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a2125 jne 0x128a2142 */
  if (!C.zf) goto L_128a2142;
  /* 128a2127 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a212a push edx */
  push32((uint32_t)(EDX));
  /* 128a212b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a212e push eax */
  push32((uint32_t)(EAX));
  /* 128a212f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a2132 push ecx */
  push32((uint32_t)(ECX));
  /* 128a2133 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a2136 push edx */
  push32((uint32_t)(EDX));
  /* 128a2137 call dword ptr [0x128c22dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22dc))), 0x128a213du);
  /* 128a213d jmp 0x128a22f9 */
  goto L_128a22f9;
L_128a2142:;
  /* 128a2142 cmp dword ptr [0x128bf938], 2 */
  { uint32_t _a=(r32((uint32_t)(0x128bf938))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a2149 jne 0x128a22f7 */
  if (!C.zf) goto L_128a22f7;
  /* 128a214f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a2153 jne 0x128a215d */
  if (!C.zf) goto L_128a215d;
  /* 128a2155 mov eax, dword ptr [0x128bf8b8] */
  EAX = (r32((uint32_t)(0x128bf8b8)));
  /* 128a215a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_128a215d:;
  /* 128a215d push 0 */
  push32((uint32_t)(0x0u));
  /* 128a215f push 0 */
  push32((uint32_t)(0x0u));
  /* 128a2161 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a2163 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a2165 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a2168 push ecx */
  push32((uint32_t)(ECX));
  /* 128a2169 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a216c push edx */
  push32((uint32_t)(EDX));
  /* 128a216d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 128a2172 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 128a2175 push eax */
  push32((uint32_t)(EAX));
  /* 128a2176 call dword ptr [0x128c227c] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c227c))), 0x128a217cu);
  /* 128a217c mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 128a217f cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a2183 jne 0x128a218c */
  if (!C.zf) goto L_128a218c;
  /* 128a2185 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a2187 jmp 0x128a22f9 */
  goto L_128a22f9;
L_128a218c:;
  /* 128a218c mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 128a2193 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 128a2196 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2199 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 128a219b call 0x12898000 */
  push32(0x128a21a0u); f_12898000();
  /* 128a21a0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 128a21a3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 128a21a6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 128a21a9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 128a21ac mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 128a21af push edx */
  push32((uint32_t)(EDX));
  /* 128a21b0 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a21b2 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 128a21b5 push eax */
  push32((uint32_t)(EAX));
  /* 128a21b6 call 0x12899580 */
  push32(0x128a21bbu); f_12899580();
  /* 128a21bb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a21be mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 128a21c5 jmp 0x128a21de */
  goto L_128a21de;
  /* 128a21c7 mov eax, 1 */
  EAX = (0x1u);
  /* 128a21cc ret  */
  ESPCHK(0x128a20a0u, _esp0);
  ESP += 4; return;
  /* 128a21cd mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 128a21d0 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 128a21d7 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_128a21de:;
  /* 128a21de cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a21e2 jne 0x128a21eb */
  if (!C.zf) goto L_128a21eb;
  /* 128a21e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a21e6 jmp 0x128a22f9 */
  goto L_128a22f9;
L_128a21eb:;
  /* 128a21eb push 0 */
  push32((uint32_t)(0x0u));
  /* 128a21ed push 0 */
  push32((uint32_t)(0x0u));
  /* 128a21ef mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 128a21f2 push ecx */
  push32((uint32_t)(ECX));
  /* 128a21f3 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 128a21f6 push edx */
  push32((uint32_t)(EDX));
  /* 128a21f7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a21fa push eax */
  push32((uint32_t)(EAX));
  /* 128a21fb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a21fe push ecx */
  push32((uint32_t)(ECX));
  /* 128a21ff push 0x220 */
  push32((uint32_t)(0x220u));
  /* 128a2204 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 128a2207 push edx */
  push32((uint32_t)(EDX));
  /* 128a2208 call dword ptr [0x128c227c] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c227c))), 0x128a220eu);
  /* 128a220e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128a2210 jne 0x128a2219 */
  if (!C.zf) goto L_128a2219;
  /* 128a2212 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a2214 jmp 0x128a22f9 */
  goto L_128a22f9;
L_128a2219:;
  /* 128a2219 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 128a2220 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 128a2223 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 128a2227 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a222a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 128a222c call 0x12898000 */
  push32(0x128a2231u); f_12898000();
  /* 128a2231 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 128a2234 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 128a2237 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 128a223a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 128a223d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 128a2244 jmp 0x128a225d */
  goto L_128a225d;
  /* 128a2246 mov eax, 1 */
  EAX = (0x1u);
  /* 128a224b ret  */
  ESPCHK(0x128a20a0u, _esp0);
  ESP += 4; return;
  /* 128a224c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 128a224f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 128a2256 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_128a225d:;
  /* 128a225d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a2261 jne 0x128a226a */
  if (!C.zf) goto L_128a226a;
  /* 128a2263 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a2265 jmp 0x128a22f9 */
  goto L_128a22f9;
L_128a226a:;
  /* 128a226a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a226e jne 0x128a2279 */
  if (!C.zf) goto L_128a2279;
  /* 128a2270 mov edx, dword ptr [0x128bf8a8] */
  EDX = (r32((uint32_t)(0x128bf8a8)));
  /* 128a2276 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_128a2279:;
  /* 128a2279 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a227c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 128a227f mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 128a2285 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a2288 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 128a228b mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 128a2292 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 128a2295 push ecx */
  push32((uint32_t)(ECX));
  /* 128a2296 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 128a2299 push edx */
  push32((uint32_t)(EDX));
  /* 128a229a mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 128a229d push eax */
  push32((uint32_t)(EAX));
  /* 128a229e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a22a1 push ecx */
  push32((uint32_t)(ECX));
  /* 128a22a2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 128a22a5 push edx */
  push32((uint32_t)(EDX));
  /* 128a22a6 call dword ptr [0x128c2290] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2290))), 0x128a22acu);
  /* 128a22ac mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 128a22af mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a22b2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 128a22b5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128a22b7 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 128a22bc cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a22c2 je 0x128a22d8 */
  if (C.zf) goto L_128a22d8;
  /* 128a22c4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a22c7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 128a22ca xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128a22cc mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 128a22d0 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a22d6 je 0x128a22dc */
  if (C.zf) goto L_128a22dc;
L_128a22d8:;
  /* 128a22d8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a22da jmp 0x128a22f9 */
  goto L_128a22f9;
L_128a22dc:;
  /* 128a22dc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a22df shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 128a22e1 push eax */
  push32((uint32_t)(EAX));
  /* 128a22e2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 128a22e5 push ecx */
  push32((uint32_t)(ECX));
  /* 128a22e6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a22e9 push edx */
  push32((uint32_t)(EDX));
  /* 128a22ea call 0x1289d7b0 */
  push32(0x128a22efu); f_1289d7b0();
  /* 128a22ef add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a22f2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 128a22f5 jmp 0x128a22f9 */
  goto L_128a22f9;
L_128a22f7:;
  /* 128a22f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_128a22f9:;
  /* 128a22f9 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 128a22fc mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 128a22ff mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 128a2306 pop edi */
  EDI = (pop32());
  /* 128a2307 pop esi */
  ESI = (pop32());
  /* 128a2308 pop ebx */
  EBX = (pop32());
  /* 128a2309 mov esp, ebp */
  ESP = (EBP);
  /* 128a230b pop ebp */
  EBP = (pop32());
  /* 128a230c ret  */
  ESPCHK(0x128a20a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012310 @ 0x128a2310 (208 bytes, 85 insns) */
void f_128a2310(void) {
  FTRACE(0x128a2310u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a2310 push ebp */
  push32((uint32_t)(EBP));
  /* 128a2311 mov ebp, esp */
  EBP = (ESP);
  /* 128a2313 push edi */
  push32((uint32_t)(EDI));
  /* 128a2314 push esi */
  push32((uint32_t)(ESI));
  /* 128a2315 push ebx */
  push32((uint32_t)(EBX));
  /* 128a2316 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 128a2319 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 128a231c lea eax, [0x128bf8a0] */
  EAX = ((uint32_t)(0x128bf8a0));
  /* 128a2322 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a2326 jne 0x128a2363 */
  if (!C.zf) goto L_128a2363;
  /* 128a2328 mov al, 0xff */
  AL = (0xffu);
  /* 128a232a mov edi, edi */
  EDI = (EDI);
L_128a232c:;
  /* 128a232c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 128a232e je 0x128a235e */
  if (C.zf) goto L_128a235e;
  /* 128a2330 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 128a2332 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 128a2333 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 128a2335 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 128a2336 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 128a2338 je 0x128a232c */
  if (C.zf) goto L_128a232c;
  /* 128a233a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 128a233c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 128a233e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 128a2340 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 128a2343 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 128a2345 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 128a2347 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 128a2349 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 128a234b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 128a234d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 128a234f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 128a2352 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 128a2354 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 128a2356 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 128a2358 je 0x128a232c */
  if (C.zf) goto L_128a232c;
  /* 128a235a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 128a235c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_128a235e:;
  /* 128a235e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 128a2361 jmp 0x128a23db */
  goto L_128a23db;
L_128a2363:;
  /* 128a2363 lock inc dword ptr [0x128bfa2c] */
  x86_unimpl("lock inc @ 0x128a2363");
  /* 128a236a cmp dword ptr [0x128bfa1c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bfa1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a2371 jg 0x128a2377 */
  if ((!C.zf&&C.sf==C.of)) goto L_128a2377;
  /* 128a2373 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a2375 jmp 0x128a238c */
  goto L_128a238c;
L_128a2377:;
  /* 128a2377 lock dec dword ptr [0x128bfa2c] */
  x86_unimpl("lock dec @ 0x128a2377");
  /* 128a237e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 128a2380 call 0x12899210 */
  push32(0x128a2385u); f_12899210();
  /* 128a2385 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_128a238c:;
  /* 128a238c mov eax, 0xff */
  EAX = (0xffu);
  /* 128a2391 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 128a2393 nop  */
  /* nop */
L_128a2394:;
  /* 128a2394 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 128a2396 je 0x128a23bf */
  if (C.zf) goto L_128a23bf;
  /* 128a2398 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 128a239a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 128a239b mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 128a239d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 128a239e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 128a23a0 je 0x128a2394 */
  if (C.zf) goto L_128a2394;
  /* 128a23a2 push eax */
  push32((uint32_t)(EAX));
  /* 128a23a3 push ebx */
  push32((uint32_t)(EBX));
  /* 128a23a4 call 0x128a3480 */
  push32(0x128a23a9u); f_128a3480();
  /* 128a23a9 mov ebx, eax */
  EBX = (EAX);
  /* 128a23ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a23ae call 0x128a3480 */
  push32(0x128a23b3u); f_128a3480();
  /* 128a23b3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a23b6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 128a23b8 je 0x128a2394 */
  if (C.zf) goto L_128a2394;
  /* 128a23ba sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a23bc sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_128a23bf:;
  /* 128a23bf mov ebx, eax */
  EBX = (EAX);
  /* 128a23c1 pop eax */
  EAX = (pop32());
  /* 128a23c2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a23c4 jne 0x128a23cf */
  if (!C.zf) goto L_128a23cf;
  /* 128a23c6 lock dec dword ptr [0x128bfa2c] */
  x86_unimpl("lock dec @ 0x128a23c6");
  /* 128a23cd jmp 0x128a23d9 */
  goto L_128a23d9;
L_128a23cf:;
  /* 128a23cf push 0x13 */
  push32((uint32_t)(0x13u));
  /* 128a23d1 call 0x128992b0 */
  push32(0x128a23d6u); f_128992b0();
  /* 128a23d6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128a23d9:;
  /* 128a23d9 mov eax, ebx */
  EAX = (EBX);
L_128a23db:;
  /* 128a23db pop ebx */
  EBX = (pop32());
  /* 128a23dc pop esi */
  ESI = (pop32());
  /* 128a23dd pop edi */
  EDI = (pop32());
  /* 128a23de leave  */
  ESP = EBP;
  EBP = pop32();
  /* 128a23df ret  */
  ESPCHK(0x128a2310u, _esp0);
  ESP += 4; return;
}

/* FUN_100123e0 @ 0x128a23e0 (257 bytes, 103 insns) */
void f_128a23e0(void) {
  FTRACE(0x128a23e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a23e0 push ebp */
  push32((uint32_t)(EBP));
  /* 128a23e1 mov ebp, esp */
  EBP = (ESP);
  /* 128a23e3 push edi */
  push32((uint32_t)(EDI));
  /* 128a23e4 push esi */
  push32((uint32_t)(ESI));
  /* 128a23e5 push ebx */
  push32((uint32_t)(EBX));
  /* 128a23e6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a23e9 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 128a23eb je 0x128a24da */
  if (C.zf) goto L_128a24da;
  /* 128a23f1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 128a23f4 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 128a23f7 lea eax, [0x128bf8a0] */
  EAX = ((uint32_t)(0x128bf8a0));
  /* 128a23fd cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a2401 jne 0x128a2451 */
  if (!C.zf) goto L_128a2451;
  /* 128a2403 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 128a2405 mov bl, 0x5a */
  BL = (0x5au);
  /* 128a2407 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 128a2409 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_128a240c:;
  /* 128a240c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 128a240e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 128a2410 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 128a2412 je 0x128a2435 */
  if (C.zf) goto L_128a2435;
  /* 128a2414 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 128a2416 je 0x128a2435 */
  if (C.zf) goto L_128a2435;
  /* 128a2418 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 128a2419 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 128a241a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 128a241c jb 0x128a2424 */
  if (C.cf) goto L_128a2424;
  /* 128a241e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 128a2420 ja 0x128a2424 */
  if ((!C.cf&&!C.zf)) goto L_128a2424;
  /* 128a2422 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_128a2424:;
  /* 128a2424 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 128a2426 jb 0x128a242e */
  if (C.cf) goto L_128a242e;
  /* 128a2428 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 128a242a ja 0x128a242e */
  if ((!C.cf&&!C.zf)) goto L_128a242e;
  /* 128a242c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_128a242e:;
  /* 128a242e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 128a2430 jne 0x128a243f */
  if (!C.zf) goto L_128a243f;
  /* 128a2432 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 128a2433 jne 0x128a240c */
  if (!C.zf) goto L_128a240c;
L_128a2435:;
  /* 128a2435 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 128a2437 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 128a2439 je 0x128a24da */
  if (C.zf) goto L_128a24da;
L_128a243f:;
  /* 128a243f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 128a2444 jb 0x128a24da */
  if (C.cf) goto L_128a24da;
  /* 128a244a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 128a244c jmp 0x128a24da */
  goto L_128a24da;
L_128a2451:;
  /* 128a2451 lock inc dword ptr [0x128bfa2c] */
  x86_unimpl("lock inc @ 0x128a2451");
  /* 128a2458 cmp dword ptr [0x128bfa1c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bfa1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a245f jg 0x128a2465 */
  if ((!C.zf&&C.sf==C.of)) goto L_128a2465;
  /* 128a2461 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a2463 jmp 0x128a247e */
  goto L_128a247e;
L_128a2465:;
  /* 128a2465 lock dec dword ptr [0x128bfa2c] */
  x86_unimpl("lock dec @ 0x128a2465");
  /* 128a246c mov ebx, ecx */
  EBX = (ECX);
  /* 128a246e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 128a2470 call 0x12899210 */
  push32(0x128a2475u); f_12899210();
  /* 128a2475 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 128a247c mov ecx, ebx */
  ECX = (EBX);
L_128a247e:;
  /* 128a247e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a2480 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 128a2482 mov edi, edi */
  EDI = (EDI);
L_128a2484:;
  /* 128a2484 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 128a2486 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a2488 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 128a248a je 0x128a24af */
  if (C.zf) goto L_128a24af;
  /* 128a248c or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 128a248e je 0x128a24af */
  if (C.zf) goto L_128a24af;
  /* 128a2490 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 128a2491 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 128a2492 push ecx */
  push32((uint32_t)(ECX));
  /* 128a2493 push eax */
  push32((uint32_t)(EAX));
  /* 128a2494 push ebx */
  push32((uint32_t)(EBX));
  /* 128a2495 call 0x128a3480 */
  push32(0x128a249au); f_128a3480();
  /* 128a249a mov ebx, eax */
  EBX = (EAX);
  /* 128a249c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a249f call 0x128a3480 */
  push32(0x128a24a4u); f_128a3480();
  /* 128a24a4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a24a7 pop ecx */
  ECX = (pop32());
  /* 128a24a8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a24aa jne 0x128a24b5 */
  if (!C.zf) goto L_128a24b5;
  /* 128a24ac dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 128a24ad jne 0x128a2484 */
  if (!C.zf) goto L_128a2484;
L_128a24af:;
  /* 128a24af xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 128a24b1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a24b3 je 0x128a24be */
  if (C.zf) goto L_128a24be;
L_128a24b5:;
  /* 128a24b5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 128a24ba jb 0x128a24be */
  if (C.cf) goto L_128a24be;
  /* 128a24bc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_128a24be:;
  /* 128a24be pop eax */
  EAX = (pop32());
  /* 128a24bf or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a24c1 jne 0x128a24cc */
  if (!C.zf) goto L_128a24cc;
  /* 128a24c3 lock dec dword ptr [0x128bfa2c] */
  x86_unimpl("lock dec @ 0x128a24c3");
  /* 128a24ca jmp 0x128a24da */
  goto L_128a24da;
L_128a24cc:;
  /* 128a24cc mov ebx, ecx */
  EBX = (ECX);
  /* 128a24ce push 0x13 */
  push32((uint32_t)(0x13u));
  /* 128a24d0 call 0x128992b0 */
  push32(0x128a24d5u); f_128992b0();
  /* 128a24d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a24d8 mov ecx, ebx */
  ECX = (EBX);
L_128a24da:;
  /* 128a24da mov eax, ecx */
  EAX = (ECX);
  /* 128a24dc pop ebx */
  EBX = (pop32());
  /* 128a24dd pop esi */
  ESI = (pop32());
  /* 128a24de pop edi */
  EDI = (pop32());
  /* 128a24df leave  */
  ESP = EBP;
  EBP = pop32();
  /* 128a24e0 ret  */
  ESPCHK(0x128a23e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100124f0 @ 0x128a24f0 (255 bytes, 88 insns) */
void f_128a24f0(void) {
  FTRACE(0x128a24f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a24f0 push ebp */
  push32((uint32_t)(EBP));
  /* 128a24f1 mov ebp, esp */
  EBP = (ESP);
  /* 128a24f3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_128a24f6:;
  /* 128a24f6 cmp dword ptr [0x128be158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x128be158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a24fd jle 0x128a2516 */
  if ((C.zf||C.sf!=C.of)) goto L_128a2516;
  /* 128a24ff push 8 */
  push32((uint32_t)(0x8u));
  /* 128a2501 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a2504 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 128a2506 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 128a2508 push ecx */
  push32((uint32_t)(ECX));
  /* 128a2509 call 0x1289b720 */
  push32(0x128a250eu); f_1289b720();
  /* 128a250e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2511 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 128a2514 jmp 0x128a252f */
  goto L_128a252f;
L_128a2516:;
  /* 128a2516 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a2519 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a251b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 128a251d mov ecx, dword ptr [0x128bdde8] */
  ECX = (r32((uint32_t)(0x128bdde8)));
  /* 128a2523 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128a2525 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 128a2529 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 128a252c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_128a252f:;
  /* 128a252f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a2533 je 0x128a2540 */
  if (C.zf) goto L_128a2540;
  /* 128a2535 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a2538 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a253b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 128a253e jmp 0x128a24f6 */
  goto L_128a24f6;
L_128a2540:;
  /* 128a2540 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a2543 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128a2545 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 128a2547 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 128a254a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a254d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2550 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 128a2553 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a2556 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 128a2559 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a255d je 0x128a2565 */
  if (C.zf) goto L_128a2565;
  /* 128a255f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a2563 jne 0x128a2578 */
  if (!C.zf) goto L_128a2578;
L_128a2565:;
  /* 128a2565 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a2568 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a256a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 128a256c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 128a256f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a2572 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2575 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_128a2578:;
  /* 128a2578 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_128a257f:;
  /* 128a257f cmp dword ptr [0x128be158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x128be158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a2586 jle 0x128a259b */
  if ((C.zf||C.sf!=C.of)) goto L_128a259b;
  /* 128a2588 push 4 */
  push32((uint32_t)(0x4u));
  /* 128a258a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a258d push edx */
  push32((uint32_t)(EDX));
  /* 128a258e call 0x1289b720 */
  push32(0x128a2593u); f_1289b720();
  /* 128a2593 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2596 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 128a2599 jmp 0x128a25b0 */
  goto L_128a25b0;
L_128a259b:;
  /* 128a259b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a259e mov ecx, dword ptr [0x128bdde8] */
  ECX = (r32((uint32_t)(0x128bdde8)));
  /* 128a25a4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128a25a6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 128a25aa and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 128a25ad mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_128a25b0:;
  /* 128a25b0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a25b4 je 0x128a25db */
  if (C.zf) goto L_128a25db;
  /* 128a25b6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a25b9 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 128a25bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a25bf lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 128a25c3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 128a25c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a25c9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 128a25cb mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 128a25cd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 128a25d0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a25d3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a25d6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 128a25d9 jmp 0x128a257f */
  goto L_128a257f;
L_128a25db:;
  /* 128a25db cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a25df jne 0x128a25e8 */
  if (!C.zf) goto L_128a25e8;
  /* 128a25e1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a25e4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 128a25e6 jmp 0x128a25eb */
  goto L_128a25eb;
L_128a25e8:;
  /* 128a25e8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_128a25eb:;
  /* 128a25eb mov esp, ebp */
  ESP = (EBP);
  /* 128a25ed pop ebp */
  EBP = (pop32());
  /* 128a25ee ret  */
  ESPCHK(0x128a24f0u, _esp0);
  ESP += 4; return;
}

/* FUN_100125f0 @ 0x128a25f0 (17 bytes, 8 insns) */
void f_128a25f0(void) {
  FTRACE(0x128a25f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a25f0 push ebp */
  push32((uint32_t)(EBP));
  /* 128a25f1 mov ebp, esp */
  EBP = (ESP);
  /* 128a25f3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a25f6 push eax */
  push32((uint32_t)(EAX));
  /* 128a25f7 call 0x128a24f0 */
  push32(0x128a25fcu); f_128a24f0();
  /* 128a25fc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a25ff pop ebp */
  EBP = (pop32());
  /* 128a2600 ret  */
  ESPCHK(0x128a25f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012610 @ 0x128a2610 (297 bytes, 106 insns) */
void f_128a2610(void) {
  FTRACE(0x128a2610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a2610 push ebp */
  push32((uint32_t)(EBP));
  /* 128a2611 mov ebp, esp */
  EBP = (ESP);
  /* 128a2613 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a2616 push esi */
  push32((uint32_t)(ESI));
L_128a2617:;
  /* 128a2617 cmp dword ptr [0x128be158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x128be158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a261e jle 0x128a2637 */
  if ((C.zf||C.sf!=C.of)) goto L_128a2637;
  /* 128a2620 push 8 */
  push32((uint32_t)(0x8u));
  /* 128a2622 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a2625 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 128a2627 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 128a2629 push ecx */
  push32((uint32_t)(ECX));
  /* 128a262a call 0x1289b720 */
  push32(0x128a262fu); f_1289b720();
  /* 128a262f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2632 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 128a2635 jmp 0x128a2650 */
  goto L_128a2650;
L_128a2637:;
  /* 128a2637 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a263a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a263c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 128a263e mov ecx, dword ptr [0x128bdde8] */
  ECX = (r32((uint32_t)(0x128bdde8)));
  /* 128a2644 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128a2646 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 128a264a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 128a264d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_128a2650:;
  /* 128a2650 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a2654 je 0x128a2661 */
  if (C.zf) goto L_128a2661;
  /* 128a2656 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a2659 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a265c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 128a265f jmp 0x128a2617 */
  goto L_128a2617;
L_128a2661:;
  /* 128a2661 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a2664 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128a2666 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 128a2668 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 128a266b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a266e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2671 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 128a2674 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a2677 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 128a267a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a267e je 0x128a2686 */
  if (C.zf) goto L_128a2686;
  /* 128a2680 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a2684 jne 0x128a2699 */
  if (!C.zf) goto L_128a2699;
L_128a2686:;
  /* 128a2686 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a2689 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a268b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 128a268d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 128a2690 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a2693 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2696 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_128a2699:;
  /* 128a2699 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 128a26a0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_128a26a7:;
  /* 128a26a7 cmp dword ptr [0x128be158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x128be158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a26ae jle 0x128a26c3 */
  if ((C.zf||C.sf!=C.of)) goto L_128a26c3;
  /* 128a26b0 push 4 */
  push32((uint32_t)(0x4u));
  /* 128a26b2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a26b5 push edx */
  push32((uint32_t)(EDX));
  /* 128a26b6 call 0x1289b720 */
  push32(0x128a26bbu); f_1289b720();
  /* 128a26bb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a26be mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 128a26c1 jmp 0x128a26d8 */
  goto L_128a26d8;
L_128a26c3:;
  /* 128a26c3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a26c6 mov ecx, dword ptr [0x128bdde8] */
  ECX = (r32((uint32_t)(0x128bdde8)));
  /* 128a26cc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128a26ce mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 128a26d2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 128a26d5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_128a26d8:;
  /* 128a26d8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a26dc je 0x128a2719 */
  if (C.zf) goto L_128a2719;
  /* 128a26de push 0 */
  push32((uint32_t)(0x0u));
  /* 128a26e0 push 0xa */
  push32((uint32_t)(0xau));
  /* 128a26e2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a26e5 push eax */
  push32((uint32_t)(EAX));
  /* 128a26e6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a26e9 push ecx */
  push32((uint32_t)(ECX));
  /* 128a26ea call 0x128a35b0 */
  push32(0x128a26efu); f_128a35b0();
  /* 128a26ef mov ecx, eax */
  ECX = (EAX);
  /* 128a26f1 mov esi, edx */
  ESI = (EDX);
  /* 128a26f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a26f6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a26f9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 128a26fa add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a26fc adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 128a26fe mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 128a2701 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 128a2704 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a2707 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a2709 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 128a270b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 128a270e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a2711 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2714 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 128a2717 jmp 0x128a26a7 */
  goto L_128a26a7;
L_128a2719:;
  /* 128a2719 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a271d jne 0x128a272e */
  if (!C.zf) goto L_128a272e;
  /* 128a271f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a2722 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 128a2724 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a2727 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a272a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 128a272c jmp 0x128a2734 */
  goto L_128a2734;
L_128a272e:;
  /* 128a272e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a2731 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_128a2734:;
  /* 128a2734 pop esi */
  ESI = (pop32());
  /* 128a2735 mov esp, ebp */
  ESP = (EBP);
  /* 128a2737 pop ebp */
  EBP = (pop32());
  /* 128a2738 ret  */
  ESPCHK(0x128a2610u, _esp0);
  ESP += 4; return;
}

/* FUN_10012740 @ 0x128a2740 (61 bytes, 18 insns) */
void f_128a2740(void) {
  FTRACE(0x128a2740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a2740 push ebp */
  push32((uint32_t)(EBP));
  /* 128a2741 mov ebp, esp */
  EBP = (ESP);
  /* 128a2743 cmp dword ptr [0x128bf9f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf9f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a274a jne 0x128a277b */
  if (!C.zf) goto L_128a277b;
  /* 128a274c push 0xb */
  push32((uint32_t)(0xbu));
  /* 128a274e call 0x12899210 */
  push32(0x128a2753u); f_12899210();
  /* 128a2753 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2756 cmp dword ptr [0x128bf9f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf9f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a275d jne 0x128a2771 */
  if (!C.zf) goto L_128a2771;
  /* 128a275f call 0x128a27a0 */
  push32(0x128a2764u); f_128a27a0();
  /* 128a2764 mov eax, dword ptr [0x128bf9f8] */
  EAX = (r32((uint32_t)(0x128bf9f8)));
  /* 128a2769 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a276c mov dword ptr [0x128bf9f8], eax */
  w32((uint32_t)(0x128bf9f8), (EAX));
L_128a2771:;
  /* 128a2771 push 0xb */
  push32((uint32_t)(0xbu));
  /* 128a2773 call 0x128992b0 */
  push32(0x128a2778u); f_128992b0();
  /* 128a2778 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128a277b:;
  /* 128a277b pop ebp */
  EBP = (pop32());
  /* 128a277c ret  */
  ESPCHK(0x128a2740u, _esp0);
  ESP += 4; return;
}

/* FUN_10012780 @ 0x128a2780 (30 bytes, 11 insns) */
void f_128a2780(void) {
  FTRACE(0x128a2780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a2780 push ebp */
  push32((uint32_t)(EBP));
  /* 128a2781 mov ebp, esp */
  EBP = (ESP);
  /* 128a2783 push 0xb */
  push32((uint32_t)(0xbu));
  /* 128a2785 call 0x12899210 */
  push32(0x128a278au); f_12899210();
  /* 128a278a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a278d call 0x128a27a0 */
  push32(0x128a2792u); f_128a27a0();
  /* 128a2792 push 0xb */
  push32((uint32_t)(0xbu));
  /* 128a2794 call 0x128992b0 */
  push32(0x128a2799u); f_128992b0();
  /* 128a2799 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a279c pop ebp */
  EBP = (pop32());
  /* 128a279d ret  */
  ESPCHK(0x128a2780u, _esp0);
  ESP += 4; return;
}

/* FUN_100127a0 @ 0x128a27a0 (939 bytes, 266 insns) */
void f_128a27a0(void) {
  FTRACE(0x128a27a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a27a0 push ebp */
  push32((uint32_t)(EBP));
  /* 128a27a1 mov ebp, esp */
  EBP = (ESP);
  /* 128a27a3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a27a6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 128a27ad push 0xc */
  push32((uint32_t)(0xcu));
  /* 128a27af call 0x12899210 */
  push32(0x128a27b4u); f_12899210();
  /* 128a27b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a27b7 mov dword ptr [0x128bf940], 0 */
  w32((uint32_t)(0x128bf940), (0x0u));
  /* 128a27c1 mov dword ptr [0x128bee48], 0xffffffff */
  w32((uint32_t)(0x128bee48), (0xffffffffu));
  /* 128a27cb mov eax, dword ptr [0x128bee48] */
  EAX = (r32((uint32_t)(0x128bee48)));
  /* 128a27d0 mov dword ptr [0x128bee38], eax */
  w32((uint32_t)(0x128bee38), (EAX));
  /* 128a27d5 push 0x128bc020 */
  push32((uint32_t)(0x128bc020u));
  /* 128a27da call 0x128a3620 */
  push32(0x128a27dfu); f_128a3620();
  /* 128a27df add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a27e2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 128a27e5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a27e9 jne 0x128a2923 */
  if (!C.zf) goto L_128a2923;
  /* 128a27ef push 0xc */
  push32((uint32_t)(0xcu));
  /* 128a27f1 call 0x128992b0 */
  push32(0x128a27f6u); f_128992b0();
  /* 128a27f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a27f9 push 0x128bf948 */
  push32((uint32_t)(0x128bf948u));
  /* 128a27fe call dword ptr [0x128c22f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22f8))), 0x128a2804u);
  /* 128a2804 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a2807 je 0x128a291e */
  if (C.zf) goto L_128a291e;
  /* 128a280d mov dword ptr [0x128bf940], 1 */
  w32((uint32_t)(0x128bf940), (0x1u));
  /* 128a2817 mov ecx, dword ptr [0x128bf948] */
  ECX = (r32((uint32_t)(0x128bf948)));
  /* 128a281d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 128a2820 mov dword ptr [0x128beda0], ecx */
  w32((uint32_t)(0x128beda0), (ECX));
  /* 128a2826 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128a2828 mov dx, word ptr [0x128bf98e] */
  DX = (r16((uint32_t)(0x128bf98e)));
  /* 128a282f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128a2831 je 0x128a2849 */
  if (C.zf) goto L_128a2849;
  /* 128a2833 mov eax, dword ptr [0x128bf99c] */
  EAX = (r32((uint32_t)(0x128bf99c)));
  /* 128a2838 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 128a283b mov ecx, dword ptr [0x128beda0] */
  ECX = (r32((uint32_t)(0x128beda0)));
  /* 128a2841 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2843 mov dword ptr [0x128beda0], ecx */
  w32((uint32_t)(0x128beda0), (ECX));
L_128a2849:;
  /* 128a2849 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128a284b mov dx, word ptr [0x128bf9e2] */
  DX = (r16((uint32_t)(0x128bf9e2)));
  /* 128a2852 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128a2854 je 0x128a287e */
  if (C.zf) goto L_128a287e;
  /* 128a2856 cmp dword ptr [0x128bf9f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf9f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a285d je 0x128a287e */
  if (C.zf) goto L_128a287e;
  /* 128a285f mov dword ptr [0x128beda4], 1 */
  w32((uint32_t)(0x128beda4), (0x1u));
  /* 128a2869 mov eax, dword ptr [0x128bf9f0] */
  EAX = (r32((uint32_t)(0x128bf9f0)));
  /* 128a286e sub eax, dword ptr [0x128bf99c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x128bf99c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a2874 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 128a2877 mov dword ptr [0x128beda8], eax */
  w32((uint32_t)(0x128beda8), (EAX));
  /* 128a287c jmp 0x128a2892 */
  goto L_128a2892;
L_128a287e:;
  /* 128a287e mov dword ptr [0x128beda4], 0 */
  w32((uint32_t)(0x128beda4), (0x0u));
  /* 128a2888 mov dword ptr [0x128beda8], 0 */
  w32((uint32_t)(0x128beda8), (0x0u));
L_128a2892:;
  /* 128a2892 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 128a2895 push ecx */
  push32((uint32_t)(ECX));
  /* 128a2896 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a2898 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 128a289a mov edx, dword ptr [0x128bee2c] */
  EDX = (r32((uint32_t)(0x128bee2c)));
  /* 128a28a0 push edx */
  push32((uint32_t)(EDX));
  /* 128a28a1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 128a28a3 push 0x128bf94c */
  push32((uint32_t)(0x128bf94cu));
  /* 128a28a8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 128a28ad mov eax, dword ptr [0x128bf8b8] */
  EAX = (r32((uint32_t)(0x128bf8b8)));
  /* 128a28b2 push eax */
  push32((uint32_t)(EAX));
  /* 128a28b3 call dword ptr [0x128c227c] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c227c))), 0x128a28b9u);
  /* 128a28b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128a28bb je 0x128a28cf */
  if (C.zf) goto L_128a28cf;
  /* 128a28bd cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a28c1 jne 0x128a28cf */
  if (!C.zf) goto L_128a28cf;
  /* 128a28c3 mov ecx, dword ptr [0x128bee2c] */
  ECX = (r32((uint32_t)(0x128bee2c)));
  /* 128a28c9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 128a28cd jmp 0x128a28d8 */
  goto L_128a28d8;
L_128a28cf:;
  /* 128a28cf mov edx, dword ptr [0x128bee2c] */
  EDX = (r32((uint32_t)(0x128bee2c)));
  /* 128a28d5 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_128a28d8:;
  /* 128a28d8 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 128a28db push eax */
  push32((uint32_t)(EAX));
  /* 128a28dc push 0 */
  push32((uint32_t)(0x0u));
  /* 128a28de push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 128a28e0 mov ecx, dword ptr [0x128bee30] */
  ECX = (r32((uint32_t)(0x128bee30)));
  /* 128a28e6 push ecx */
  push32((uint32_t)(ECX));
  /* 128a28e7 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 128a28e9 push 0x128bf9a0 */
  push32((uint32_t)(0x128bf9a0u));
  /* 128a28ee push 0x220 */
  push32((uint32_t)(0x220u));
  /* 128a28f3 mov edx, dword ptr [0x128bf8b8] */
  EDX = (r32((uint32_t)(0x128bf8b8)));
  /* 128a28f9 push edx */
  push32((uint32_t)(EDX));
  /* 128a28fa call dword ptr [0x128c227c] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c227c))), 0x128a2900u);
  /* 128a2900 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128a2902 je 0x128a2915 */
  if (C.zf) goto L_128a2915;
  /* 128a2904 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a2908 jne 0x128a2915 */
  if (!C.zf) goto L_128a2915;
  /* 128a290a mov eax, dword ptr [0x128bee30] */
  EAX = (r32((uint32_t)(0x128bee30)));
  /* 128a290f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 128a2913 jmp 0x128a291e */
  goto L_128a291e;
L_128a2915:;
  /* 128a2915 mov ecx, dword ptr [0x128bee30] */
  ECX = (r32((uint32_t)(0x128bee30)));
  /* 128a291b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_128a291e:;
  /* 128a291e jmp 0x128a2b47 */
  goto L_128a2b47;
L_128a2923:;
  /* 128a2923 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a2926 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 128a2929 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128a292b je 0x128a294d */
  if (C.zf) goto L_128a294d;
  /* 128a292d cmp dword ptr [0x128bf9f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf9f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a2934 je 0x128a295c */
  if (C.zf) goto L_128a295c;
  /* 128a2936 mov ecx, dword ptr [0x128bf9f4] */
  ECX = (r32((uint32_t)(0x128bf9f4)));
  /* 128a293c push ecx */
  push32((uint32_t)(ECX));
  /* 128a293d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a2940 push edx */
  push32((uint32_t)(EDX));
  /* 128a2941 call 0x1289f700 */
  push32(0x128a2946u); f_1289f700();
  /* 128a2946 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2949 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128a294b jne 0x128a295c */
  if (!C.zf) goto L_128a295c;
L_128a294d:;
  /* 128a294d push 0xc */
  push32((uint32_t)(0xcu));
  /* 128a294f call 0x128992b0 */
  push32(0x128a2954u); f_128992b0();
  /* 128a2954 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2957 jmp 0x128a2b47 */
  goto L_128a2b47;
L_128a295c:;
  /* 128a295c push 2 */
  push32((uint32_t)(0x2u));
  /* 128a295e mov eax, dword ptr [0x128bf9f4] */
  EAX = (r32((uint32_t)(0x128bf9f4)));
  /* 128a2963 push eax */
  push32((uint32_t)(EAX));
  /* 128a2964 call 0x128958f0 */
  push32(0x128a2969u); f_128958f0();
  /* 128a2969 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a296c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 128a2971 push 0x128bc018 */
  push32((uint32_t)(0x128bc018u));
  /* 128a2976 push 2 */
  push32((uint32_t)(0x2u));
  /* 128a2978 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a297b push ecx */
  push32((uint32_t)(ECX));
  /* 128a297c call 0x12897c90 */
  push32(0x128a2981u); f_12897c90();
  /* 128a2981 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2984 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2987 push eax */
  push32((uint32_t)(EAX));
  /* 128a2988 call 0x12894e60 */
  push32(0x128a298du); f_12894e60();
  /* 128a298d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2990 mov dword ptr [0x128bf9f4], eax */
  w32((uint32_t)(0x128bf9f4), (EAX));
  /* 128a2995 cmp dword ptr [0x128bf9f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf9f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a299c jne 0x128a29ad */
  if (!C.zf) goto L_128a29ad;
  /* 128a299e push 0xc */
  push32((uint32_t)(0xcu));
  /* 128a29a0 call 0x128992b0 */
  push32(0x128a29a5u); f_128992b0();
  /* 128a29a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a29a8 jmp 0x128a2b47 */
  goto L_128a2b47;
L_128a29ad:;
  /* 128a29ad mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a29b0 push edx */
  push32((uint32_t)(EDX));
  /* 128a29b1 mov eax, dword ptr [0x128bf9f4] */
  EAX = (r32((uint32_t)(0x128bf9f4)));
  /* 128a29b6 push eax */
  push32((uint32_t)(EAX));
  /* 128a29b7 call 0x12897e10 */
  push32(0x128a29bcu); f_12897e10();
  /* 128a29bc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a29bf push 0xc */
  push32((uint32_t)(0xcu));
  /* 128a29c1 call 0x128992b0 */
  push32(0x128a29c6u); f_128992b0();
  /* 128a29c6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a29c9 push 3 */
  push32((uint32_t)(0x3u));
  /* 128a29cb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a29ce push ecx */
  push32((uint32_t)(ECX));
  /* 128a29cf mov edx, dword ptr [0x128bee2c] */
  EDX = (r32((uint32_t)(0x128bee2c)));
  /* 128a29d5 push edx */
  push32((uint32_t)(EDX));
  /* 128a29d6 call 0x12898680 */
  push32(0x128a29dbu); f_12898680();
  /* 128a29db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a29de mov eax, dword ptr [0x128bee2c] */
  EAX = (r32((uint32_t)(0x128bee2c)));
  /* 128a29e3 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 128a29e7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a29ea add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a29ed mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 128a29f0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a29f3 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 128a29f6 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a29f9 jne 0x128a2a0d */
  if (!C.zf) goto L_128a2a0d;
  /* 128a29fb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a29fe add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2a01 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 128a2a04 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a2a07 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2a0a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_128a2a0d:;
  /* 128a2a0d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a2a10 push eax */
  push32((uint32_t)(EAX));
  /* 128a2a11 call 0x128a24f0 */
  push32(0x128a2a16u); f_128a24f0();
  /* 128a2a16 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2a19 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 128a2a1f mov dword ptr [0x128beda0], eax */
  w32((uint32_t)(0x128beda0), (EAX));
L_128a2a24:;
  /* 128a2a24 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a2a27 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 128a2a2a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a2a2d je 0x128a2a45 */
  if (C.zf) goto L_128a2a45;
  /* 128a2a2f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a2a32 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 128a2a35 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a2a38 jl 0x128a2a50 */
  if ((C.sf!=C.of)) goto L_128a2a50;
  /* 128a2a3a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a2a3d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 128a2a40 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a2a43 jg 0x128a2a50 */
  if ((!C.zf&&C.sf==C.of)) goto L_128a2a50;
L_128a2a45:;
  /* 128a2a45 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a2a48 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2a4b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 128a2a4e jmp 0x128a2a24 */
  goto L_128a2a24;
L_128a2a50:;
  /* 128a2a50 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a2a53 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 128a2a56 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a2a59 jne 0x128a2af5 */
  if (!C.zf) goto L_128a2af5;
  /* 128a2a5f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a2a62 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2a65 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 128a2a68 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a2a6b push edx */
  push32((uint32_t)(EDX));
  /* 128a2a6c call 0x128a24f0 */
  push32(0x128a2a71u); f_128a24f0();
  /* 128a2a71 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2a74 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 128a2a77 mov ecx, dword ptr [0x128beda0] */
  ECX = (r32((uint32_t)(0x128beda0)));
  /* 128a2a7d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2a7f mov dword ptr [0x128beda0], ecx */
  w32((uint32_t)(0x128beda0), (ECX));
L_128a2a85:;
  /* 128a2a85 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a2a88 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 128a2a8b cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a2a8e jl 0x128a2aa6 */
  if ((C.sf!=C.of)) goto L_128a2aa6;
  /* 128a2a90 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a2a93 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 128a2a96 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a2a99 jg 0x128a2aa6 */
  if ((!C.zf&&C.sf==C.of)) goto L_128a2aa6;
  /* 128a2a9b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a2a9e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2aa1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 128a2aa4 jmp 0x128a2a85 */
  goto L_128a2a85;
L_128a2aa6:;
  /* 128a2aa6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a2aa9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 128a2aac cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a2aaf jne 0x128a2af5 */
  if (!C.zf) goto L_128a2af5;
  /* 128a2ab1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a2ab4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2ab7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 128a2aba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a2abd push ecx */
  push32((uint32_t)(ECX));
  /* 128a2abe call 0x128a24f0 */
  push32(0x128a2ac3u); f_128a24f0();
  /* 128a2ac3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2ac6 mov edx, dword ptr [0x128beda0] */
  EDX = (r32((uint32_t)(0x128beda0)));
  /* 128a2acc add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2ace mov dword ptr [0x128beda0], edx */
  w32((uint32_t)(0x128beda0), (EDX));
L_128a2ad4:;
  /* 128a2ad4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a2ad7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 128a2ada cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a2add jl 0x128a2af5 */
  if ((C.sf!=C.of)) goto L_128a2af5;
  /* 128a2adf mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a2ae2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 128a2ae5 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a2ae8 jg 0x128a2af5 */
  if ((!C.zf&&C.sf==C.of)) goto L_128a2af5;
  /* 128a2aea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a2aed add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2af0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 128a2af3 jmp 0x128a2ad4 */
  goto L_128a2ad4;
L_128a2af5:;
  /* 128a2af5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a2af9 je 0x128a2b09 */
  if (C.zf) goto L_128a2b09;
  /* 128a2afb mov edx, dword ptr [0x128beda0] */
  EDX = (r32((uint32_t)(0x128beda0)));
  /* 128a2b01 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 128a2b03 mov dword ptr [0x128beda0], edx */
  w32((uint32_t)(0x128beda0), (EDX));
L_128a2b09:;
  /* 128a2b09 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a2b0c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 128a2b0f mov dword ptr [0x128beda4], ecx */
  w32((uint32_t)(0x128beda4), (ECX));
  /* 128a2b15 cmp dword ptr [0x128beda4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128beda4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a2b1c je 0x128a2b3e */
  if (C.zf) goto L_128a2b3e;
  /* 128a2b1e push 3 */
  push32((uint32_t)(0x3u));
  /* 128a2b20 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a2b23 push edx */
  push32((uint32_t)(EDX));
  /* 128a2b24 mov eax, dword ptr [0x128bee30] */
  EAX = (r32((uint32_t)(0x128bee30)));
  /* 128a2b29 push eax */
  push32((uint32_t)(EAX));
  /* 128a2b2a call 0x12898680 */
  push32(0x128a2b2fu); f_12898680();
  /* 128a2b2f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2b32 mov ecx, dword ptr [0x128bee30] */
  ECX = (r32((uint32_t)(0x128bee30)));
  /* 128a2b38 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 128a2b3c jmp 0x128a2b47 */
  goto L_128a2b47;
L_128a2b3e:;
  /* 128a2b3e mov edx, dword ptr [0x128bee30] */
  EDX = (r32((uint32_t)(0x128bee30)));
  /* 128a2b44 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_128a2b47:;
  /* 128a2b47 mov esp, ebp */
  ESP = (EBP);
  /* 128a2b49 pop ebp */
  EBP = (pop32());
  /* 128a2b4a ret  */
  ESPCHK(0x128a27a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b50 @ 0x128a2b50 (46 bytes, 18 insns) */
void f_128a2b50(void) {
  FTRACE(0x128a2b50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a2b50 push ebp */
  push32((uint32_t)(EBP));
  /* 128a2b51 mov ebp, esp */
  EBP = (ESP);
  /* 128a2b53 push ecx */
  push32((uint32_t)(ECX));
  /* 128a2b54 push 0xb */
  push32((uint32_t)(0xbu));
  /* 128a2b56 call 0x12899210 */
  push32(0x128a2b5bu); f_12899210();
  /* 128a2b5b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2b5e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a2b61 push eax */
  push32((uint32_t)(EAX));
  /* 128a2b62 call 0x128a2b80 */
  push32(0x128a2b67u); f_128a2b80();
  /* 128a2b67 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2b6a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 128a2b6d push 0xb */
  push32((uint32_t)(0xbu));
  /* 128a2b6f call 0x128992b0 */
  push32(0x128a2b74u); f_128992b0();
  /* 128a2b74 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2b77 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a2b7a mov esp, ebp */
  ESP = (EBP);
  /* 128a2b7c pop ebp */
  EBP = (pop32());
  /* 128a2b7d ret  */
  ESPCHK(0x128a2b50u, _esp0);
  ESP += 4; return;
}

/* FUN_10012b80 @ 0x128a2b80 (762 bytes, 246 insns) */
void f_128a2b80(void) {
  FTRACE(0x128a2b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a2b80 push ebp */
  push32((uint32_t)(EBP));
  /* 128a2b81 mov ebp, esp */
  EBP = (ESP);
  /* 128a2b83 push ecx */
  push32((uint32_t)(ECX));
  /* 128a2b84 cmp dword ptr [0x128beda4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128beda4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a2b8b jne 0x128a2b94 */
  if (!C.zf) goto L_128a2b94;
  /* 128a2b8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a2b8f jmp 0x128a2e76 */
  goto L_128a2e76;
L_128a2b94:;
  /* 128a2b94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a2b97 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 128a2b9a cmp ecx, dword ptr [0x128bee38] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x128bee38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a2ba0 jne 0x128a2bb4 */
  if (!C.zf) goto L_128a2bb4;
  /* 128a2ba2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a2ba5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 128a2ba8 cmp eax, dword ptr [0x128bee48] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x128bee48))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a2bae je 0x128a2d7b */
  if (C.zf) goto L_128a2d7b;
L_128a2bb4:;
  /* 128a2bb4 cmp dword ptr [0x128bf940], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf940))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a2bbb je 0x128a2d35 */
  if (C.zf) goto L_128a2d35;
  /* 128a2bc1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 128a2bc3 mov cx, word ptr [0x128bf9e0] */
  CX = (r16((uint32_t)(0x128bf9e0)));
  /* 128a2bca test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 128a2bcc jne 0x128a2c29 */
  if (!C.zf) goto L_128a2c29;
  /* 128a2bce xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128a2bd0 mov dx, word ptr [0x128bf9ee] */
  DX = (r16((uint32_t)(0x128bf9ee)));
  /* 128a2bd7 push edx */
  push32((uint32_t)(EDX));
  /* 128a2bd8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a2bda mov ax, word ptr [0x128bf9ec] */
  AX = (r16((uint32_t)(0x128bf9ec)));
  /* 128a2be0 push eax */
  push32((uint32_t)(EAX));
  /* 128a2be1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 128a2be3 mov cx, word ptr [0x128bf9ea] */
  CX = (r16((uint32_t)(0x128bf9ea)));
  /* 128a2bea push ecx */
  push32((uint32_t)(ECX));
  /* 128a2beb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128a2bed mov dx, word ptr [0x128bf9e8] */
  DX = (r16((uint32_t)(0x128bf9e8)));
  /* 128a2bf4 push edx */
  push32((uint32_t)(EDX));
  /* 128a2bf5 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a2bf7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a2bf9 mov ax, word ptr [0x128bf9e4] */
  AX = (r16((uint32_t)(0x128bf9e4)));
  /* 128a2bff push eax */
  push32((uint32_t)(EAX));
  /* 128a2c00 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 128a2c02 mov cx, word ptr [0x128bf9e6] */
  CX = (r16((uint32_t)(0x128bf9e6)));
  /* 128a2c09 push ecx */
  push32((uint32_t)(ECX));
  /* 128a2c0a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128a2c0c mov dx, word ptr [0x128bf9e2] */
  DX = (r16((uint32_t)(0x128bf9e2)));
  /* 128a2c13 push edx */
  push32((uint32_t)(EDX));
  /* 128a2c14 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a2c17 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 128a2c1a push ecx */
  push32((uint32_t)(ECX));
  /* 128a2c1b push 1 */
  push32((uint32_t)(0x1u));
  /* 128a2c1d push 1 */
  push32((uint32_t)(0x1u));
  /* 128a2c1f call 0x128a2e80 */
  push32(0x128a2c24u); f_128a2e80();
  /* 128a2c24 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2c27 jmp 0x128a2c7a */
  goto L_128a2c7a;
L_128a2c29:;
  /* 128a2c29 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128a2c2b mov dx, word ptr [0x128bf9ee] */
  DX = (r16((uint32_t)(0x128bf9ee)));
  /* 128a2c32 push edx */
  push32((uint32_t)(EDX));
  /* 128a2c33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a2c35 mov ax, word ptr [0x128bf9ec] */
  AX = (r16((uint32_t)(0x128bf9ec)));
  /* 128a2c3b push eax */
  push32((uint32_t)(EAX));
  /* 128a2c3c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 128a2c3e mov cx, word ptr [0x128bf9ea] */
  CX = (r16((uint32_t)(0x128bf9ea)));
  /* 128a2c45 push ecx */
  push32((uint32_t)(ECX));
  /* 128a2c46 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128a2c48 mov dx, word ptr [0x128bf9e8] */
  DX = (r16((uint32_t)(0x128bf9e8)));
  /* 128a2c4f push edx */
  push32((uint32_t)(EDX));
  /* 128a2c50 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a2c52 mov ax, word ptr [0x128bf9e6] */
  AX = (r16((uint32_t)(0x128bf9e6)));
  /* 128a2c58 push eax */
  push32((uint32_t)(EAX));
  /* 128a2c59 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a2c5b push 0 */
  push32((uint32_t)(0x0u));
  /* 128a2c5d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 128a2c5f mov cx, word ptr [0x128bf9e2] */
  CX = (r16((uint32_t)(0x128bf9e2)));
  /* 128a2c66 push ecx */
  push32((uint32_t)(ECX));
  /* 128a2c67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a2c6a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 128a2c6d push eax */
  push32((uint32_t)(EAX));
  /* 128a2c6e push 0 */
  push32((uint32_t)(0x0u));
  /* 128a2c70 push 1 */
  push32((uint32_t)(0x1u));
  /* 128a2c72 call 0x128a2e80 */
  push32(0x128a2c77u); f_128a2e80();
  /* 128a2c77 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128a2c7a:;
  /* 128a2c7a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 128a2c7c mov cx, word ptr [0x128bf98c] */
  CX = (r16((uint32_t)(0x128bf98c)));
  /* 128a2c83 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 128a2c85 jne 0x128a2ce2 */
  if (!C.zf) goto L_128a2ce2;
  /* 128a2c87 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128a2c89 mov dx, word ptr [0x128bf99a] */
  DX = (r16((uint32_t)(0x128bf99a)));
  /* 128a2c90 push edx */
  push32((uint32_t)(EDX));
  /* 128a2c91 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a2c93 mov ax, word ptr [0x128bf998] */
  AX = (r16((uint32_t)(0x128bf998)));
  /* 128a2c99 push eax */
  push32((uint32_t)(EAX));
  /* 128a2c9a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 128a2c9c mov cx, word ptr [0x128bf996] */
  CX = (r16((uint32_t)(0x128bf996)));
  /* 128a2ca3 push ecx */
  push32((uint32_t)(ECX));
  /* 128a2ca4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128a2ca6 mov dx, word ptr [0x128bf994] */
  DX = (r16((uint32_t)(0x128bf994)));
  /* 128a2cad push edx */
  push32((uint32_t)(EDX));
  /* 128a2cae push 0 */
  push32((uint32_t)(0x0u));
  /* 128a2cb0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a2cb2 mov ax, word ptr [0x128bf990] */
  AX = (r16((uint32_t)(0x128bf990)));
  /* 128a2cb8 push eax */
  push32((uint32_t)(EAX));
  /* 128a2cb9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 128a2cbb mov cx, word ptr [0x128bf992] */
  CX = (r16((uint32_t)(0x128bf992)));
  /* 128a2cc2 push ecx */
  push32((uint32_t)(ECX));
  /* 128a2cc3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128a2cc5 mov dx, word ptr [0x128bf98e] */
  DX = (r16((uint32_t)(0x128bf98e)));
  /* 128a2ccc push edx */
  push32((uint32_t)(EDX));
  /* 128a2ccd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a2cd0 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 128a2cd3 push ecx */
  push32((uint32_t)(ECX));
  /* 128a2cd4 push 1 */
  push32((uint32_t)(0x1u));
  /* 128a2cd6 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a2cd8 call 0x128a2e80 */
  push32(0x128a2cddu); f_128a2e80();
  /* 128a2cdd add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2ce0 jmp 0x128a2d33 */
  goto L_128a2d33;
L_128a2ce2:;
  /* 128a2ce2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128a2ce4 mov dx, word ptr [0x128bf99a] */
  DX = (r16((uint32_t)(0x128bf99a)));
  /* 128a2ceb push edx */
  push32((uint32_t)(EDX));
  /* 128a2cec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a2cee mov ax, word ptr [0x128bf998] */
  AX = (r16((uint32_t)(0x128bf998)));
  /* 128a2cf4 push eax */
  push32((uint32_t)(EAX));
  /* 128a2cf5 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 128a2cf7 mov cx, word ptr [0x128bf996] */
  CX = (r16((uint32_t)(0x128bf996)));
  /* 128a2cfe push ecx */
  push32((uint32_t)(ECX));
  /* 128a2cff xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128a2d01 mov dx, word ptr [0x128bf994] */
  DX = (r16((uint32_t)(0x128bf994)));
  /* 128a2d08 push edx */
  push32((uint32_t)(EDX));
  /* 128a2d09 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a2d0b mov ax, word ptr [0x128bf992] */
  AX = (r16((uint32_t)(0x128bf992)));
  /* 128a2d11 push eax */
  push32((uint32_t)(EAX));
  /* 128a2d12 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a2d14 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a2d16 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 128a2d18 mov cx, word ptr [0x128bf98e] */
  CX = (r16((uint32_t)(0x128bf98e)));
  /* 128a2d1f push ecx */
  push32((uint32_t)(ECX));
  /* 128a2d20 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a2d23 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 128a2d26 push eax */
  push32((uint32_t)(EAX));
  /* 128a2d27 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a2d29 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a2d2b call 0x128a2e80 */
  push32(0x128a2d30u); f_128a2e80();
  /* 128a2d30 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128a2d33:;
  /* 128a2d33 jmp 0x128a2d7b */
  goto L_128a2d7b;
L_128a2d35:;
  /* 128a2d35 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a2d37 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a2d39 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a2d3b push 2 */
  push32((uint32_t)(0x2u));
  /* 128a2d3d push 0 */
  push32((uint32_t)(0x0u));
  /* 128a2d3f push 0 */
  push32((uint32_t)(0x0u));
  /* 128a2d41 push 1 */
  push32((uint32_t)(0x1u));
  /* 128a2d43 push 4 */
  push32((uint32_t)(0x4u));
  /* 128a2d45 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a2d48 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 128a2d4b push edx */
  push32((uint32_t)(EDX));
  /* 128a2d4c push 1 */
  push32((uint32_t)(0x1u));
  /* 128a2d4e push 1 */
  push32((uint32_t)(0x1u));
  /* 128a2d50 call 0x128a2e80 */
  push32(0x128a2d55u); f_128a2e80();
  /* 128a2d55 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2d58 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a2d5a push 0 */
  push32((uint32_t)(0x0u));
  /* 128a2d5c push 0 */
  push32((uint32_t)(0x0u));
  /* 128a2d5e push 2 */
  push32((uint32_t)(0x2u));
  /* 128a2d60 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a2d62 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a2d64 push 5 */
  push32((uint32_t)(0x5u));
  /* 128a2d66 push 0xa */
  push32((uint32_t)(0xau));
  /* 128a2d68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a2d6b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 128a2d6e push ecx */
  push32((uint32_t)(ECX));
  /* 128a2d6f push 1 */
  push32((uint32_t)(0x1u));
  /* 128a2d71 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a2d73 call 0x128a2e80 */
  push32(0x128a2d78u); f_128a2e80();
  /* 128a2d78 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128a2d7b:;
  /* 128a2d7b mov edx, dword ptr [0x128bee3c] */
  EDX = (r32((uint32_t)(0x128bee3c)));
  /* 128a2d81 cmp edx, dword ptr [0x128bee4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x128bee4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a2d87 jge 0x128a2dd4 */
  if ((C.sf==C.of)) goto L_128a2dd4;
  /* 128a2d89 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a2d8c mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 128a2d8f cmp ecx, dword ptr [0x128bee3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x128bee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a2d95 jl 0x128a2da5 */
  if ((C.sf!=C.of)) goto L_128a2da5;
  /* 128a2d97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a2d9a mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 128a2d9d cmp eax, dword ptr [0x128bee4c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x128bee4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a2da3 jle 0x128a2dac */
  if ((C.zf||C.sf!=C.of)) goto L_128a2dac;
L_128a2da5:;
  /* 128a2da5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a2da7 jmp 0x128a2e76 */
  goto L_128a2e76;
L_128a2dac:;
  /* 128a2dac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a2daf mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 128a2db2 cmp edx, dword ptr [0x128bee3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x128bee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a2db8 jle 0x128a2dd2 */
  if ((C.zf||C.sf!=C.of)) goto L_128a2dd2;
  /* 128a2dba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a2dbd mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 128a2dc0 cmp ecx, dword ptr [0x128bee4c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x128bee4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a2dc6 jge 0x128a2dd2 */
  if ((C.sf==C.of)) goto L_128a2dd2;
  /* 128a2dc8 mov eax, 1 */
  EAX = (0x1u);
  /* 128a2dcd jmp 0x128a2e76 */
  goto L_128a2e76;
L_128a2dd2:;
  /* 128a2dd2 jmp 0x128a2e17 */
  goto L_128a2e17;
L_128a2dd4:;
  /* 128a2dd4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a2dd7 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 128a2dda cmp eax, dword ptr [0x128bee4c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x128bee4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a2de0 jl 0x128a2df0 */
  if ((C.sf!=C.of)) goto L_128a2df0;
  /* 128a2de2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a2de5 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 128a2de8 cmp edx, dword ptr [0x128bee3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x128bee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a2dee jle 0x128a2df7 */
  if ((C.zf||C.sf!=C.of)) goto L_128a2df7;
L_128a2df0:;
  /* 128a2df0 mov eax, 1 */
  EAX = (0x1u);
  /* 128a2df5 jmp 0x128a2e76 */
  goto L_128a2e76;
L_128a2df7:;
  /* 128a2df7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a2dfa mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 128a2dfd cmp ecx, dword ptr [0x128bee4c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x128bee4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a2e03 jle 0x128a2e17 */
  if ((C.zf||C.sf!=C.of)) goto L_128a2e17;
  /* 128a2e05 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a2e08 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 128a2e0b cmp eax, dword ptr [0x128bee3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x128bee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a2e11 jge 0x128a2e17 */
  if ((C.sf==C.of)) goto L_128a2e17;
  /* 128a2e13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a2e15 jmp 0x128a2e76 */
  goto L_128a2e76;
L_128a2e17:;
  /* 128a2e17 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a2e1a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 128a2e1d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 128a2e20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a2e23 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 128a2e25 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2e27 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a2e2a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 128a2e2d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 128a2e33 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2e35 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 128a2e3b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 128a2e3e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a2e41 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 128a2e44 cmp edx, dword ptr [0x128bee3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x128bee3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a2e4a jne 0x128a2e62 */
  if (!C.zf) goto L_128a2e62;
  /* 128a2e4c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a2e4f cmp eax, dword ptr [0x128bee40] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x128bee40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a2e55 jl 0x128a2e5e */
  if ((C.sf!=C.of)) goto L_128a2e5e;
  /* 128a2e57 mov eax, 1 */
  EAX = (0x1u);
  /* 128a2e5c jmp 0x128a2e76 */
  goto L_128a2e76;
L_128a2e5e:;
  /* 128a2e5e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a2e60 jmp 0x128a2e76 */
  goto L_128a2e76;
L_128a2e62:;
  /* 128a2e62 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a2e65 cmp ecx, dword ptr [0x128bee50] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x128bee50))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a2e6b jge 0x128a2e74 */
  if ((C.sf==C.of)) goto L_128a2e74;
  /* 128a2e6d mov eax, 1 */
  EAX = (0x1u);
  /* 128a2e72 jmp 0x128a2e76 */
  goto L_128a2e76;
L_128a2e74:;
  /* 128a2e74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_128a2e76:;
  /* 128a2e76 mov esp, ebp */
  ESP = (EBP);
  /* 128a2e78 pop ebp */
  EBP = (pop32());
  /* 128a2e79 ret  */
  ESPCHK(0x128a2b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10012e80 @ 0x128a2e80 (504 bytes, 145 insns) */
void f_128a2e80(void) {
  FTRACE(0x128a2e80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a2e80 push ebp */
  push32((uint32_t)(EBP));
  /* 128a2e81 mov ebp, esp */
  EBP = (ESP);
  /* 128a2e83 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a2e86 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a2e8a jne 0x128a2f5c */
  if (!C.zf) goto L_128a2f5c;
  /* 128a2e90 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a2e93 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 128a2e96 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128a2e98 jne 0x128a2ea9 */
  if (!C.zf) goto L_128a2ea9;
  /* 128a2e9a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a2e9d mov edx, dword ptr [ecx*4 + 0x128bee5c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x128bee5c)));
  /* 128a2ea4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 128a2ea7 jmp 0x128a2eb6 */
  goto L_128a2eb6;
L_128a2ea9:;
  /* 128a2ea9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a2eac mov ecx, dword ptr [eax*4 + 0x128bee90] */
  ECX = (r32((uint32_t)(EAX*4 + 0x128bee90)));
  /* 128a2eb3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_128a2eb6:;
  /* 128a2eb6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a2eb9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2ebc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 128a2ebf mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a2ec2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a2ec5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 128a2ecb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a2ece add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2ed0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a2ed3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a2ed6 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 128a2ed9 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 128a2edd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 128a2ede mov ecx, 7 */
  ECX = (0x7u);
  /* 128a2ee3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 128a2ee5 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 128a2ee8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a2eeb cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a2eee jge 0x128a2f09 */
  if ((C.sf==C.of)) goto L_128a2f09;
  /* 128a2ef0 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 128a2ef3 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a2ef6 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 128a2ef9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a2efc imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 128a2eff add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2f02 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2f04 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 128a2f07 jmp 0x128a2f1d */
  goto L_128a2f1d;
L_128a2f09:;
  /* 128a2f09 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 128a2f0c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a2f0f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 128a2f12 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 128a2f15 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2f18 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2f1a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_128a2f1d:;
  /* 128a2f1d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a2f21 jne 0x128a2f5a */
  if (!C.zf) goto L_128a2f5a;
  /* 128a2f23 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a2f26 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 128a2f29 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 128a2f2b jne 0x128a2f3c */
  if (!C.zf) goto L_128a2f3c;
  /* 128a2f2d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a2f30 mov eax, dword ptr [edx*4 + 0x128bee60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x128bee60)));
  /* 128a2f37 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 128a2f3a jmp 0x128a2f49 */
  goto L_128a2f49;
L_128a2f3c:;
  /* 128a2f3c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a2f3f mov edx, dword ptr [ecx*4 + 0x128bee94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x128bee94)));
  /* 128a2f46 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_128a2f49:;
  /* 128a2f49 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a2f4c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a2f4f jle 0x128a2f5a */
  if ((C.zf||C.sf!=C.of)) goto L_128a2f5a;
  /* 128a2f51 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a2f54 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a2f57 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_128a2f5a:;
  /* 128a2f5a jmp 0x128a2f91 */
  goto L_128a2f91;
L_128a2f5c:;
  /* 128a2f5c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a2f5f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 128a2f62 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128a2f64 jne 0x128a2f75 */
  if (!C.zf) goto L_128a2f75;
  /* 128a2f66 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a2f69 mov ecx, dword ptr [eax*4 + 0x128bee5c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x128bee5c)));
  /* 128a2f70 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 128a2f73 jmp 0x128a2f82 */
  goto L_128a2f82;
L_128a2f75:;
  /* 128a2f75 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a2f78 mov eax, dword ptr [edx*4 + 0x128bee90] */
  EAX = (r32((uint32_t)(EDX*4 + 0x128bee90)));
  /* 128a2f7f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_128a2f82:;
  /* 128a2f82 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 128a2f85 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 128a2f88 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a2f8b add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2f8e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_128a2f91:;
  /* 128a2f91 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a2f95 jne 0x128a2fd1 */
  if (!C.zf) goto L_128a2fd1;
  /* 128a2f97 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a2f9a mov dword ptr [0x128bee3c], eax */
  w32((uint32_t)(0x128bee3c), (EAX));
  /* 128a2f9f mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 128a2fa2 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 128a2fa5 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 128a2fa8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2faa imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 128a2fad mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 128a2fb0 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2fb2 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 128a2fb8 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 128a2fbb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2fbd mov dword ptr [0x128bee40], ecx */
  w32((uint32_t)(0x128bee40), (ECX));
  /* 128a2fc3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a2fc6 mov dword ptr [0x128bee38], edx */
  w32((uint32_t)(0x128bee38), (EDX));
  /* 128a2fcc jmp 0x128a3074 */
  goto L_128a3074;
L_128a2fd1:;
  /* 128a2fd1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a2fd4 mov dword ptr [0x128bee4c], eax */
  w32((uint32_t)(0x128bee4c), (EAX));
  /* 128a2fd9 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 128a2fdc imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 128a2fdf mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 128a2fe2 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2fe4 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 128a2fe7 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 128a2fea add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2fec imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 128a2ff2 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 128a2ff5 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a2ff7 mov dword ptr [0x128bee50], ecx */
  w32((uint32_t)(0x128bee50), (ECX));
  /* 128a2ffd mov edx, dword ptr [0x128beda8] */
  EDX = (r32((uint32_t)(0x128beda8)));
  /* 128a3003 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 128a3009 mov eax, dword ptr [0x128bee50] */
  EAX = (r32((uint32_t)(0x128bee50)));
  /* 128a300e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a3010 mov dword ptr [0x128bee50], eax */
  w32((uint32_t)(0x128bee50), (EAX));
  /* 128a3015 cmp dword ptr [0x128bee50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bee50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a301c jge 0x128a3041 */
  if ((C.sf==C.of)) goto L_128a3041;
  /* 128a301e mov ecx, dword ptr [0x128bee50] */
  ECX = (r32((uint32_t)(0x128bee50)));
  /* 128a3024 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a302a mov dword ptr [0x128bee50], ecx */
  w32((uint32_t)(0x128bee50), (ECX));
  /* 128a3030 mov edx, dword ptr [0x128bee4c] */
  EDX = (r32((uint32_t)(0x128bee4c)));
  /* 128a3036 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a3039 mov dword ptr [0x128bee4c], edx */
  w32((uint32_t)(0x128bee4c), (EDX));
  /* 128a303f jmp 0x128a306b */
  goto L_128a306b;
L_128a3041:;
  /* 128a3041 cmp dword ptr [0x128bee50], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x128bee50))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a304b jl 0x128a306b */
  if ((C.sf!=C.of)) goto L_128a306b;
  /* 128a304d mov eax, dword ptr [0x128bee50] */
  EAX = (r32((uint32_t)(0x128bee50)));
  /* 128a3052 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a3057 mov dword ptr [0x128bee50], eax */
  w32((uint32_t)(0x128bee50), (EAX));
  /* 128a305c mov ecx, dword ptr [0x128bee4c] */
  ECX = (r32((uint32_t)(0x128bee4c)));
  /* 128a3062 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a3065 mov dword ptr [0x128bee4c], ecx */
  w32((uint32_t)(0x128bee4c), (ECX));
L_128a306b:;
  /* 128a306b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a306e mov dword ptr [0x128bee48], edx */
  w32((uint32_t)(0x128bee48), (EDX));
L_128a3074:;
  /* 128a3074 mov esp, ebp */
  ESP = (EBP);
  /* 128a3076 pop ebp */
  EBP = (pop32());
  /* 128a3077 ret  */
  ESPCHK(0x128a2e80u, _esp0);
  ESP += 4; return;
}

/* FUN_10013080 @ 0x128a3080 (382 bytes, 135 insns) */
void f_128a3080(void) {
  FTRACE(0x128a3080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a3080 push ebp */
  push32((uint32_t)(EBP));
  /* 128a3081 mov ebp, esp */
  EBP = (ESP);
  /* 128a3083 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 128a3085 push 0x128bc028 */
  push32((uint32_t)(0x128bc028u));
  /* 128a308a push 0x128a06e0 */
  push32((uint32_t)(0x128a06e0u));
  /* 128a308f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 128a3095 push eax */
  push32((uint32_t)(EAX));
  /* 128a3096 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 128a309d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a30a0 push ebx */
  push32((uint32_t)(EBX));
  /* 128a30a1 push esi */
  push32((uint32_t)(ESI));
  /* 128a30a2 push edi */
  push32((uint32_t)(EDI));
  /* 128a30a3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 128a30a6 cmp dword ptr [0x128bf9fc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf9fc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a30ad jne 0x128a30f2 */
  if (!C.zf) goto L_128a30f2;
  /* 128a30af push 0 */
  push32((uint32_t)(0x0u));
  /* 128a30b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a30b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 128a30b5 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a30b7 call dword ptr [0x128c230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c230c))), 0x128a30bdu);
  /* 128a30bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128a30bf je 0x128a30cd */
  if (C.zf) goto L_128a30cd;
  /* 128a30c1 mov dword ptr [0x128bf9fc], 1 */
  w32((uint32_t)(0x128bf9fc), (0x1u));
  /* 128a30cb jmp 0x128a30f2 */
  goto L_128a30f2;
L_128a30cd:;
  /* 128a30cd push 0 */
  push32((uint32_t)(0x0u));
  /* 128a30cf push 0 */
  push32((uint32_t)(0x0u));
  /* 128a30d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 128a30d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a30d5 call dword ptr [0x128c22f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22f4))), 0x128a30dbu);
  /* 128a30db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128a30dd je 0x128a30eb */
  if (C.zf) goto L_128a30eb;
  /* 128a30df mov dword ptr [0x128bf9fc], 2 */
  w32((uint32_t)(0x128bf9fc), (0x2u));
  /* 128a30e9 jmp 0x128a30f2 */
  goto L_128a30f2;
L_128a30eb:;
  /* 128a30eb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a30ed jmp 0x128a3201 */
  goto L_128a3201;
L_128a30f2:;
  /* 128a30f2 cmp dword ptr [0x128bf9fc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x128bf9fc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a30f9 jne 0x128a3116 */
  if (!C.zf) goto L_128a3116;
  /* 128a30fb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a30fe push eax */
  push32((uint32_t)(EAX));
  /* 128a30ff mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a3102 push ecx */
  push32((uint32_t)(ECX));
  /* 128a3103 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a3106 push edx */
  push32((uint32_t)(EDX));
  /* 128a3107 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a310a push eax */
  push32((uint32_t)(EAX));
  /* 128a310b call dword ptr [0x128c230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c230c))), 0x128a3111u);
  /* 128a3111 jmp 0x128a3201 */
  goto L_128a3201;
L_128a3116:;
  /* 128a3116 cmp dword ptr [0x128bf9fc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x128bf9fc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a311d jne 0x128a31ff */
  if (!C.zf) goto L_128a31ff;
  /* 128a3123 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3127 jne 0x128a3132 */
  if (!C.zf) goto L_128a3132;
  /* 128a3129 mov ecx, dword ptr [0x128bf8b8] */
  ECX = (r32((uint32_t)(0x128bf8b8)));
  /* 128a312f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_128a3132:;
  /* 128a3132 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a3134 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a3136 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a3139 push edx */
  push32((uint32_t)(EDX));
  /* 128a313a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a313d push eax */
  push32((uint32_t)(EAX));
  /* 128a313e call dword ptr [0x128c22f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22f4))), 0x128a3144u);
  /* 128a3144 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 128a3147 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a314b jne 0x128a3154 */
  if (!C.zf) goto L_128a3154;
  /* 128a314d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a314f jmp 0x128a3201 */
  goto L_128a3201;
L_128a3154:;
  /* 128a3154 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 128a315b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 128a315e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a3161 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 128a3163 call 0x12898000 */
  push32(0x128a3168u); f_12898000();
  /* 128a3168 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 128a316b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 128a316e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 128a3171 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 128a3174 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 128a317b jmp 0x128a3194 */
  goto L_128a3194;
  /* 128a317d mov eax, 1 */
  EAX = (0x1u);
  /* 128a3182 ret  */
  ESPCHK(0x128a3080u, _esp0);
  ESP += 4; return;
  /* 128a3183 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 128a3186 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 128a318d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_128a3194:;
  /* 128a3194 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3198 jne 0x128a319e */
  if (!C.zf) goto L_128a319e;
  /* 128a319a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a319c jmp 0x128a3201 */
  goto L_128a3201;
L_128a319e:;
  /* 128a319e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 128a31a1 push edx */
  push32((uint32_t)(EDX));
  /* 128a31a2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 128a31a5 push eax */
  push32((uint32_t)(EAX));
  /* 128a31a6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a31a9 push ecx */
  push32((uint32_t)(ECX));
  /* 128a31aa mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a31ad push edx */
  push32((uint32_t)(EDX));
  /* 128a31ae call dword ptr [0x128c22f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22f4))), 0x128a31b4u);
  /* 128a31b4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128a31b6 jne 0x128a31bc */
  if (!C.zf) goto L_128a31bc;
  /* 128a31b8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a31ba jmp 0x128a3201 */
  goto L_128a3201;
L_128a31bc:;
  /* 128a31bc cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a31c0 jne 0x128a31dd */
  if (!C.zf) goto L_128a31dd;
  /* 128a31c2 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a31c4 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a31c6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 128a31c8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 128a31cb push eax */
  push32((uint32_t)(EAX));
  /* 128a31cc push 1 */
  push32((uint32_t)(0x1u));
  /* 128a31ce mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 128a31d1 push ecx */
  push32((uint32_t)(ECX));
  /* 128a31d2 call dword ptr [0x128c228c] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c228c))), 0x128a31d8u);
  /* 128a31d8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 128a31db jmp 0x128a31fa */
  goto L_128a31fa;
L_128a31dd:;
  /* 128a31dd mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a31e0 push edx */
  push32((uint32_t)(EDX));
  /* 128a31e1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a31e4 push eax */
  push32((uint32_t)(EAX));
  /* 128a31e5 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 128a31e7 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 128a31ea push ecx */
  push32((uint32_t)(ECX));
  /* 128a31eb push 1 */
  push32((uint32_t)(0x1u));
  /* 128a31ed mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 128a31f0 push edx */
  push32((uint32_t)(EDX));
  /* 128a31f1 call dword ptr [0x128c228c] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c228c))), 0x128a31f7u);
  /* 128a31f7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_128a31fa:;
  /* 128a31fa mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 128a31fd jmp 0x128a3201 */
  goto L_128a3201;
L_128a31ff:;
  /* 128a31ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_128a3201:;
  /* 128a3201 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 128a3204 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 128a3207 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 128a320e pop edi */
  EDI = (pop32());
  /* 128a320f pop esi */
  ESI = (pop32());
  /* 128a3210 pop ebx */
  EBX = (pop32());
  /* 128a3211 mov esp, ebp */
  ESP = (EBP);
  /* 128a3213 pop ebp */
  EBP = (pop32());
  /* 128a3214 ret  */
  ESPCHK(0x128a3080u, _esp0);
  ESP += 4; return;
}

/* FUN_10013220 @ 0x128a3220 (398 bytes, 140 insns) */
void f_128a3220(void) {
  FTRACE(0x128a3220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a3220 push ebp */
  push32((uint32_t)(EBP));
  /* 128a3221 mov ebp, esp */
  EBP = (ESP);
  /* 128a3223 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 128a3225 push 0x128bc038 */
  push32((uint32_t)(0x128bc038u));
  /* 128a322a push 0x128a06e0 */
  push32((uint32_t)(0x128a06e0u));
  /* 128a322f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 128a3235 push eax */
  push32((uint32_t)(EAX));
  /* 128a3236 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 128a323d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a3240 push ebx */
  push32((uint32_t)(EBX));
  /* 128a3241 push esi */
  push32((uint32_t)(ESI));
  /* 128a3242 push edi */
  push32((uint32_t)(EDI));
  /* 128a3243 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 128a3246 cmp dword ptr [0x128bfa00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bfa00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a324d jne 0x128a3292 */
  if (!C.zf) goto L_128a3292;
  /* 128a324f push 0 */
  push32((uint32_t)(0x0u));
  /* 128a3251 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a3253 push 1 */
  push32((uint32_t)(0x1u));
  /* 128a3255 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a3257 call dword ptr [0x128c230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c230c))), 0x128a325du);
  /* 128a325d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128a325f je 0x128a326d */
  if (C.zf) goto L_128a326d;
  /* 128a3261 mov dword ptr [0x128bfa00], 1 */
  w32((uint32_t)(0x128bfa00), (0x1u));
  /* 128a326b jmp 0x128a3292 */
  goto L_128a3292;
L_128a326d:;
  /* 128a326d push 0 */
  push32((uint32_t)(0x0u));
  /* 128a326f push 0 */
  push32((uint32_t)(0x0u));
  /* 128a3271 push 1 */
  push32((uint32_t)(0x1u));
  /* 128a3273 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a3275 call dword ptr [0x128c22f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22f4))), 0x128a327bu);
  /* 128a327b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128a327d je 0x128a328b */
  if (C.zf) goto L_128a328b;
  /* 128a327f mov dword ptr [0x128bfa00], 2 */
  w32((uint32_t)(0x128bfa00), (0x2u));
  /* 128a3289 jmp 0x128a3292 */
  goto L_128a3292;
L_128a328b:;
  /* 128a328b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a328d jmp 0x128a33b1 */
  goto L_128a33b1;
L_128a3292:;
  /* 128a3292 cmp dword ptr [0x128bfa00], 2 */
  { uint32_t _a=(r32((uint32_t)(0x128bfa00))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3299 jne 0x128a32b6 */
  if (!C.zf) goto L_128a32b6;
  /* 128a329b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a329e push eax */
  push32((uint32_t)(EAX));
  /* 128a329f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a32a2 push ecx */
  push32((uint32_t)(ECX));
  /* 128a32a3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a32a6 push edx */
  push32((uint32_t)(EDX));
  /* 128a32a7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a32aa push eax */
  push32((uint32_t)(EAX));
  /* 128a32ab call dword ptr [0x128c22f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22f4))), 0x128a32b1u);
  /* 128a32b1 jmp 0x128a33b1 */
  goto L_128a33b1;
L_128a32b6:;
  /* 128a32b6 cmp dword ptr [0x128bfa00], 1 */
  { uint32_t _a=(r32((uint32_t)(0x128bfa00))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a32bd jne 0x128a33af */
  if (!C.zf) goto L_128a33af;
  /* 128a32c3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a32c7 jne 0x128a32d2 */
  if (!C.zf) goto L_128a32d2;
  /* 128a32c9 mov ecx, dword ptr [0x128bf8b8] */
  ECX = (r32((uint32_t)(0x128bf8b8)));
  /* 128a32cf mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_128a32d2:;
  /* 128a32d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a32d4 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a32d6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a32d9 push edx */
  push32((uint32_t)(EDX));
  /* 128a32da mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a32dd push eax */
  push32((uint32_t)(EAX));
  /* 128a32de call dword ptr [0x128c230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c230c))), 0x128a32e4u);
  /* 128a32e4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 128a32e7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a32eb jne 0x128a32f4 */
  if (!C.zf) goto L_128a32f4;
  /* 128a32ed xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a32ef jmp 0x128a33b1 */
  goto L_128a33b1;
L_128a32f4:;
  /* 128a32f4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 128a32fb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 128a32fe shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 128a3300 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a3303 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 128a3305 call 0x12898000 */
  push32(0x128a330au); f_12898000();
  /* 128a330a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 128a330d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 128a3310 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 128a3313 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 128a3316 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 128a331d jmp 0x128a3336 */
  goto L_128a3336;
  /* 128a331f mov eax, 1 */
  EAX = (0x1u);
  /* 128a3324 ret  */
  ESPCHK(0x128a3220u, _esp0);
  ESP += 4; return;
  /* 128a3325 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 128a3328 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 128a332f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_128a3336:;
  /* 128a3336 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a333a jne 0x128a3340 */
  if (!C.zf) goto L_128a3340;
  /* 128a333c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a333e jmp 0x128a33b1 */
  goto L_128a33b1;
L_128a3340:;
  /* 128a3340 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 128a3343 push edx */
  push32((uint32_t)(EDX));
  /* 128a3344 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 128a3347 push eax */
  push32((uint32_t)(EAX));
  /* 128a3348 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a334b push ecx */
  push32((uint32_t)(ECX));
  /* 128a334c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a334f push edx */
  push32((uint32_t)(EDX));
  /* 128a3350 call dword ptr [0x128c230c] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c230c))), 0x128a3356u);
  /* 128a3356 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128a3358 jne 0x128a335e */
  if (!C.zf) goto L_128a335e;
  /* 128a335a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a335c jmp 0x128a33b1 */
  goto L_128a33b1;
L_128a335e:;
  /* 128a335e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3362 jne 0x128a3386 */
  if (!C.zf) goto L_128a3386;
  /* 128a3364 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a3366 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a3368 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a336a push 0 */
  push32((uint32_t)(0x0u));
  /* 128a336c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 128a336e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 128a3371 push eax */
  push32((uint32_t)(EAX));
  /* 128a3372 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 128a3377 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 128a337a push ecx */
  push32((uint32_t)(ECX));
  /* 128a337b call dword ptr [0x128c227c] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c227c))), 0x128a3381u);
  /* 128a3381 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 128a3384 jmp 0x128a33aa */
  goto L_128a33aa;
L_128a3386:;
  /* 128a3386 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a3388 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a338a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a338d push edx */
  push32((uint32_t)(EDX));
  /* 128a338e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a3391 push eax */
  push32((uint32_t)(EAX));
  /* 128a3392 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 128a3394 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 128a3397 push ecx */
  push32((uint32_t)(ECX));
  /* 128a3398 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 128a339d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 128a33a0 push edx */
  push32((uint32_t)(EDX));
  /* 128a33a1 call dword ptr [0x128c227c] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c227c))), 0x128a33a7u);
  /* 128a33a7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_128a33aa:;
  /* 128a33aa mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 128a33ad jmp 0x128a33b1 */
  goto L_128a33b1;
L_128a33af:;
  /* 128a33af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_128a33b1:;
  /* 128a33b1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 128a33b4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 128a33b7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 128a33be pop edi */
  EDI = (pop32());
  /* 128a33bf pop esi */
  ESI = (pop32());
  /* 128a33c0 pop ebx */
  EBX = (pop32());
  /* 128a33c1 mov esp, ebp */
  ESP = (EBP);
  /* 128a33c3 pop ebp */
  EBP = (pop32());
  /* 128a33c4 ret  */
  ESPCHK(0x128a3220u, _esp0);
  ESP += 4; return;
}

/* FUN_100133d0 @ 0x128a33d0 (11 bytes, 6 insns) */
void f_128a33d0(void) {
  FTRACE(0x128a33d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a33d0 push ebp */
  push32((uint32_t)(EBP));
  /* 128a33d1 mov ebp, esp */
  EBP = (ESP);
  /* 128a33d3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a33d6 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a33d9 pop ebp */
  EBP = (pop32());
  /* 128a33da ret  */
  ESPCHK(0x128a33d0u, _esp0);
  ESP += 4; return;
}

/* FUN_100133e0 @ 0x128a33e0 (147 bytes, 43 insns) */
void f_128a33e0(void) {
  FTRACE(0x128a33e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a33e0 push ebp */
  push32((uint32_t)(EBP));
  /* 128a33e1 mov ebp, esp */
  EBP = (ESP);
  /* 128a33e3 push ecx */
  push32((uint32_t)(ECX));
  /* 128a33e4 cmp dword ptr [0x128bf8a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf8a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a33eb jne 0x128a3407 */
  if (!C.zf) goto L_128a3407;
  /* 128a33ed cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a33f1 jl 0x128a3402 */
  if ((C.sf!=C.of)) goto L_128a3402;
  /* 128a33f3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a33f7 jg 0x128a3402 */
  if ((!C.zf&&C.sf==C.of)) goto L_128a3402;
  /* 128a33f9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a33fc add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a33ff mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_128a3402:;
  /* 128a3402 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a3405 jmp 0x128a346f */
  goto L_128a346f;
L_128a3407:;
  /* 128a3407 push 0x128bfa2c */
  push32((uint32_t)(0x128bfa2cu));
  /* 128a340c call dword ptr [0x128c2224] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2224))), 0x128a3412u);
  /* 128a3412 cmp dword ptr [0x128bfa1c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bfa1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3419 je 0x128a3439 */
  if (C.zf) goto L_128a3439;
  /* 128a341b push 0x128bfa2c */
  push32((uint32_t)(0x128bfa2cu));
  /* 128a3420 call dword ptr [0x128c2218] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2218))), 0x128a3426u);
  /* 128a3426 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 128a3428 call 0x12899210 */
  push32(0x128a342du); f_12899210();
  /* 128a342d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a3430 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 128a3437 jmp 0x128a3440 */
  goto L_128a3440;
L_128a3439:;
  /* 128a3439 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_128a3440:;
  /* 128a3440 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a3443 push ecx */
  push32((uint32_t)(ECX));
  /* 128a3444 call 0x128a3480 */
  push32(0x128a3449u); f_128a3480();
  /* 128a3449 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a344c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 128a344f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3453 je 0x128a3461 */
  if (C.zf) goto L_128a3461;
  /* 128a3455 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 128a3457 call 0x128992b0 */
  push32(0x128a345cu); f_128992b0();
  /* 128a345c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a345f jmp 0x128a346c */
  goto L_128a346c;
L_128a3461:;
  /* 128a3461 push 0x128bfa2c */
  push32((uint32_t)(0x128bfa2cu));
  /* 128a3466 call dword ptr [0x128c2218] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2218))), 0x128a346cu);
L_128a346c:;
  /* 128a346c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_128a346f:;
  /* 128a346f mov esp, ebp */
  ESP = (EBP);
  /* 128a3471 pop ebp */
  EBP = (pop32());
  /* 128a3472 ret  */
  ESPCHK(0x128a33e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013480 @ 0x128a3480 (299 bytes, 91 insns) */
void f_128a3480(void) {
  FTRACE(0x128a3480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a3480 push ebp */
  push32((uint32_t)(EBP));
  /* 128a3481 mov ebp, esp */
  EBP = (ESP);
  /* 128a3483 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a3486 cmp dword ptr [0x128bf8a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf8a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a348d jne 0x128a34ac */
  if (!C.zf) goto L_128a34ac;
  /* 128a348f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3493 jl 0x128a34a4 */
  if ((C.sf!=C.of)) goto L_128a34a4;
  /* 128a3495 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3499 jg 0x128a34a4 */
  if ((!C.zf&&C.sf==C.of)) goto L_128a34a4;
  /* 128a349b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a349e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a34a1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_128a34a4:;
  /* 128a34a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a34a7 jmp 0x128a35a7 */
  goto L_128a35a7;
L_128a34ac:;
  /* 128a34ac cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a34b3 jge 0x128a34f3 */
  if ((C.sf==C.of)) goto L_128a34f3;
  /* 128a34b5 cmp dword ptr [0x128be158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x128be158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a34bc jle 0x128a34d1 */
  if ((C.zf||C.sf!=C.of)) goto L_128a34d1;
  /* 128a34be push 1 */
  push32((uint32_t)(0x1u));
  /* 128a34c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a34c3 push ecx */
  push32((uint32_t)(ECX));
  /* 128a34c4 call 0x1289b720 */
  push32(0x128a34c9u); f_1289b720();
  /* 128a34c9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a34cc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 128a34cf jmp 0x128a34e5 */
  goto L_128a34e5;
L_128a34d1:;
  /* 128a34d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a34d4 mov eax, dword ptr [0x128bdde8] */
  EAX = (r32((uint32_t)(0x128bdde8)));
  /* 128a34d9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 128a34db mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 128a34df and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 128a34e2 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_128a34e5:;
  /* 128a34e5 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a34e9 jne 0x128a34f3 */
  if (!C.zf) goto L_128a34f3;
  /* 128a34eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a34ee jmp 0x128a35a7 */
  goto L_128a35a7;
L_128a34f3:;
  /* 128a34f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a34f6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 128a34f9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 128a34ff and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 128a3505 mov eax, dword ptr [0x128bdde8] */
  EAX = (r32((uint32_t)(0x128bdde8)));
  /* 128a350a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 128a350c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 128a3510 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 128a3516 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 128a3518 je 0x128a353c */
  if (C.zf) goto L_128a353c;
  /* 128a351a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a351d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 128a3520 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 128a3526 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 128a3529 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 128a352c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 128a352f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 128a3533 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 128a353a jmp 0x128a354d */
  goto L_128a354d;
L_128a353c:;
  /* 128a353c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 128a353f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 128a3542 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 128a3546 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_128a354d:;
  /* 128a354d push 1 */
  push32((uint32_t)(0x1u));
  /* 128a354f push 0 */
  push32((uint32_t)(0x0u));
  /* 128a3551 push 3 */
  push32((uint32_t)(0x3u));
  /* 128a3553 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 128a3556 push edx */
  push32((uint32_t)(EDX));
  /* 128a3557 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a355a push eax */
  push32((uint32_t)(EAX));
  /* 128a355b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 128a355e push ecx */
  push32((uint32_t)(ECX));
  /* 128a355f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 128a3564 mov edx, dword ptr [0x128bf8a8] */
  EDX = (r32((uint32_t)(0x128bf8a8)));
  /* 128a356a push edx */
  push32((uint32_t)(EDX));
  /* 128a356b call 0x1289dcb0 */
  push32(0x128a3570u); f_1289dcb0();
  /* 128a3570 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a3573 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 128a3576 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a357a jne 0x128a3581 */
  if (!C.zf) goto L_128a3581;
  /* 128a357c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a357f jmp 0x128a35a7 */
  goto L_128a35a7;
L_128a3581:;
  /* 128a3581 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3585 jne 0x128a3591 */
  if (!C.zf) goto L_128a3591;
  /* 128a3587 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a358a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 128a358f jmp 0x128a35a7 */
  goto L_128a35a7;
L_128a3591:;
  /* 128a3591 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a3594 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 128a3599 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 128a359c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 128a35a2 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 128a35a5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_128a35a7:;
  /* 128a35a7 mov esp, ebp */
  ESP = (EBP);
  /* 128a35a9 pop ebp */
  EBP = (pop32());
  /* 128a35aa ret  */
  ESPCHK(0x128a3480u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x128a35b0 (52 bytes, 19 insns) */
void f_128a35b0(void) {
  FTRACE(0x128a35b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a35b0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 128a35b4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 128a35b8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 128a35ba mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 128a35be jne 0x128a35c9 */
  if (!C.zf) goto L_128a35c9;
  /* 128a35c0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 128a35c4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 128a35c6 ret 0x10 */
  ESPCHK(0x128a35b0u, _esp0);
  ESP += 20; return;
L_128a35c9:;
  /* 128a35c9 push ebx */
  push32((uint32_t)(EBX));
  /* 128a35ca mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 128a35cc mov ebx, eax */
  EBX = (EAX);
  /* 128a35ce mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 128a35d2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 128a35d6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a35d8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 128a35dc mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 128a35de add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a35e0 pop ebx */
  EBX = (pop32());
  /* 128a35e1 ret 0x10 */
  ESPCHK(0x128a35b0u, _esp0);
  ESP += 20; return;
}

/* FUN_100135f0 @ 0x128a35f0 (46 bytes, 18 insns) */
void f_128a35f0(void) {
  FTRACE(0x128a35f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a35f0 push ebp */
  push32((uint32_t)(EBP));
  /* 128a35f1 mov ebp, esp */
  EBP = (ESP);
  /* 128a35f3 push ecx */
  push32((uint32_t)(ECX));
  /* 128a35f4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 128a35f6 call 0x12899210 */
  push32(0x128a35fbu); f_12899210();
  /* 128a35fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a35fe mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a3601 push eax */
  push32((uint32_t)(EAX));
  /* 128a3602 call 0x128a3620 */
  push32(0x128a3607u); f_128a3620();
  /* 128a3607 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a360a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 128a360d push 0xc */
  push32((uint32_t)(0xcu));
  /* 128a360f call 0x128992b0 */
  push32(0x128a3614u); f_128992b0();
  /* 128a3614 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a3617 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a361a mov esp, ebp */
  ESP = (EBP);
  /* 128a361c pop ebp */
  EBP = (pop32());
  /* 128a361d ret  */
  ESPCHK(0x128a35f0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x128a3620 (198 bytes, 69 insns) */
void f_128a3620(void) {
  FTRACE(0x128a3620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a3620 push ebp */
  push32((uint32_t)(EBP));
  /* 128a3621 mov ebp, esp */
  EBP = (ESP);
  /* 128a3623 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a3626 mov eax, dword ptr [0x128bf6bc] */
  EAX = (r32((uint32_t)(0x128bf6bc)));
  /* 128a362b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 128a362e cmp dword ptr [0x128c11a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128c11a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3635 jne 0x128a363e */
  if (!C.zf) goto L_128a363e;
  /* 128a3637 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a3639 jmp 0x128a36e2 */
  goto L_128a36e2;
L_128a363e:;
  /* 128a363e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3642 jne 0x128a3666 */
  if (!C.zf) goto L_128a3666;
  /* 128a3644 cmp dword ptr [0x128bf6c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf6c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a364b je 0x128a3666 */
  if (C.zf) goto L_128a3666;
  /* 128a364d call 0x128a3740 */
  push32(0x128a3652u); f_128a3740();
  /* 128a3652 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128a3654 je 0x128a365d */
  if (C.zf) goto L_128a365d;
  /* 128a3656 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a3658 jmp 0x128a36e2 */
  goto L_128a36e2;
L_128a365d:;
  /* 128a365d mov ecx, dword ptr [0x128bf6bc] */
  ECX = (r32((uint32_t)(0x128bf6bc)));
  /* 128a3663 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_128a3666:;
  /* 128a3666 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a366a je 0x128a36e0 */
  if (C.zf) goto L_128a36e0;
  /* 128a366c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3670 je 0x128a36e0 */
  if (C.zf) goto L_128a36e0;
  /* 128a3672 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a3675 push edx */
  push32((uint32_t)(EDX));
  /* 128a3676 call 0x12897c90 */
  push32(0x128a367bu); f_12897c90();
  /* 128a367b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a367e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_128a3681:;
  /* 128a3681 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a3684 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3687 je 0x128a36e0 */
  if (C.zf) goto L_128a36e0;
  /* 128a3689 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a368c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 128a368e push edx */
  push32((uint32_t)(EDX));
  /* 128a368f call 0x12897c90 */
  push32(0x128a3694u); f_12897c90();
  /* 128a3694 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a3697 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a369a jbe 0x128a36d5 */
  if ((C.cf||C.zf)) goto L_128a36d5;
  /* 128a369c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a369f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 128a36a1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a36a4 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 128a36a8 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a36ab jne 0x128a36d5 */
  if (!C.zf) goto L_128a36d5;
  /* 128a36ad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a36b0 push ecx */
  push32((uint32_t)(ECX));
  /* 128a36b1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a36b4 push edx */
  push32((uint32_t)(EDX));
  /* 128a36b5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a36b8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 128a36ba push ecx */
  push32((uint32_t)(ECX));
  /* 128a36bb call 0x128a36f0 */
  push32(0x128a36c0u); f_128a36f0();
  /* 128a36c0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a36c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128a36c5 jne 0x128a36d5 */
  if (!C.zf) goto L_128a36d5;
  /* 128a36c7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a36ca mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 128a36cc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a36cf lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 128a36d3 jmp 0x128a36e2 */
  goto L_128a36e2;
L_128a36d5:;
  /* 128a36d5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a36d8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a36db mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 128a36de jmp 0x128a3681 */
  goto L_128a3681;
L_128a36e0:;
  /* 128a36e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_128a36e2:;
  /* 128a36e2 mov esp, ebp */
  ESP = (EBP);
  /* 128a36e4 pop ebp */
  EBP = (pop32());
  /* 128a36e5 ret  */
  ESPCHK(0x128a3620u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x128a36f0 (79 bytes, 32 insns) */
void f_128a36f0(void) {
  FTRACE(0x128a36f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a36f0 push ebp */
  push32((uint32_t)(EBP));
  /* 128a36f1 mov ebp, esp */
  EBP = (ESP);
  /* 128a36f3 push ecx */
  push32((uint32_t)(ECX));
  /* 128a36f4 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a36f8 jne 0x128a36fe */
  if (!C.zf) goto L_128a36fe;
  /* 128a36fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a36fc jmp 0x128a373b */
  goto L_128a373b;
L_128a36fe:;
  /* 128a36fe mov eax, dword ptr [0x128bfa30] */
  EAX = (r32((uint32_t)(0x128bfa30)));
  /* 128a3703 push eax */
  push32((uint32_t)(EAX));
  /* 128a3704 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a3707 push ecx */
  push32((uint32_t)(ECX));
  /* 128a3708 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a370b push edx */
  push32((uint32_t)(EDX));
  /* 128a370c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a370f push eax */
  push32((uint32_t)(EAX));
  /* 128a3710 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a3713 push ecx */
  push32((uint32_t)(ECX));
  /* 128a3714 push 1 */
  push32((uint32_t)(0x1u));
  /* 128a3716 mov edx, dword ptr [0x128bfcc4] */
  EDX = (r32((uint32_t)(0x128bfcc4)));
  /* 128a371c push edx */
  push32((uint32_t)(EDX));
  /* 128a371d call 0x128a37f0 */
  push32(0x128a3722u); f_128a37f0();
  /* 128a3722 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a3725 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 128a3728 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a372c jne 0x128a3735 */
  if (!C.zf) goto L_128a3735;
  /* 128a372e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 128a3733 jmp 0x128a373b */
  goto L_128a373b;
L_128a3735:;
  /* 128a3735 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a3738 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_128a373b:;
  /* 128a373b mov esp, ebp */
  ESP = (EBP);
  /* 128a373d pop ebp */
  EBP = (pop32());
  /* 128a373e ret  */
  ESPCHK(0x128a36f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013740 @ 0x128a3740 (174 bytes, 66 insns) */
void f_128a3740(void) {
  FTRACE(0x128a3740u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a3740 push ebp */
  push32((uint32_t)(EBP));
  /* 128a3741 mov ebp, esp */
  EBP = (ESP);
  /* 128a3743 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a3746 mov eax, dword ptr [0x128bf6c4] */
  EAX = (r32((uint32_t)(0x128bf6c4)));
  /* 128a374b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_128a374e:;
  /* 128a374e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a3751 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3754 je 0x128a37e8 */
  if (C.zf) goto L_128a37e8;
  /* 128a375a push 0 */
  push32((uint32_t)(0x0u));
  /* 128a375c push 0 */
  push32((uint32_t)(0x0u));
  /* 128a375e push 0 */
  push32((uint32_t)(0x0u));
  /* 128a3760 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a3762 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 128a3764 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a3767 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 128a3769 push eax */
  push32((uint32_t)(EAX));
  /* 128a376a push 0 */
  push32((uint32_t)(0x0u));
  /* 128a376c push 1 */
  push32((uint32_t)(0x1u));
  /* 128a376e call dword ptr [0x128c227c] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c227c))), 0x128a3774u);
  /* 128a3774 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 128a3777 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a377b jne 0x128a3782 */
  if (!C.zf) goto L_128a3782;
  /* 128a377d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 128a3780 jmp 0x128a37ea */
  goto L_128a37ea;
L_128a3782:;
  /* 128a3782 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 128a3784 push 0x128bc044 */
  push32((uint32_t)(0x128bc044u));
  /* 128a3789 push 2 */
  push32((uint32_t)(0x2u));
  /* 128a378b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a378e push ecx */
  push32((uint32_t)(ECX));
  /* 128a378f call 0x12894e60 */
  push32(0x128a3794u); f_12894e60();
  /* 128a3794 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a3797 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 128a379a cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a379e jne 0x128a37a5 */
  if (!C.zf) goto L_128a37a5;
  /* 128a37a0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 128a37a3 jmp 0x128a37ea */
  goto L_128a37ea;
L_128a37a5:;
  /* 128a37a5 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a37a7 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a37a9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a37ac push edx */
  push32((uint32_t)(EDX));
  /* 128a37ad mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a37b0 push eax */
  push32((uint32_t)(EAX));
  /* 128a37b1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 128a37b3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a37b6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 128a37b8 push edx */
  push32((uint32_t)(EDX));
  /* 128a37b9 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a37bb push 1 */
  push32((uint32_t)(0x1u));
  /* 128a37bd call dword ptr [0x128c227c] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c227c))), 0x128a37c3u);
  /* 128a37c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128a37c5 jne 0x128a37cc */
  if (!C.zf) goto L_128a37cc;
  /* 128a37c7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 128a37ca jmp 0x128a37ea */
  goto L_128a37ea;
L_128a37cc:;
  /* 128a37cc push 0 */
  push32((uint32_t)(0x0u));
  /* 128a37ce mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a37d1 push eax */
  push32((uint32_t)(EAX));
  /* 128a37d2 call 0x128a3c40 */
  push32(0x128a37d7u); f_128a3c40();
  /* 128a37d7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a37da mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a37dd add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a37e0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 128a37e3 jmp 0x128a374e */
  goto L_128a374e;
L_128a37e8:;
  /* 128a37e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_128a37ea:;
  /* 128a37ea mov esp, ebp */
  ESP = (EBP);
  /* 128a37ec pop ebp */
  EBP = (pop32());
  /* 128a37ed ret  */
  ESPCHK(0x128a3740u, _esp0);
  ESP += 4; return;
}

/* FUN_100137f0 @ 0x128a37f0 (970 bytes, 340 insns) */
void f_128a37f0(void) {
  FTRACE(0x128a37f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a37f0 push ebp */
  push32((uint32_t)(EBP));
  /* 128a37f1 mov ebp, esp */
  EBP = (ESP);
  /* 128a37f3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 128a37f5 push 0x128bc098 */
  push32((uint32_t)(0x128bc098u));
  /* 128a37fa push 0x128a06e0 */
  push32((uint32_t)(0x128a06e0u));
  /* 128a37ff mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 128a3805 push eax */
  push32((uint32_t)(EAX));
  /* 128a3806 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 128a380d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a3810 push ebx */
  push32((uint32_t)(EBX));
  /* 128a3811 push esi */
  push32((uint32_t)(ESI));
  /* 128a3812 push edi */
  push32((uint32_t)(EDI));
  /* 128a3813 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 128a3816 cmp dword ptr [0x128bfa04], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bfa04))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a381d jne 0x128a3876 */
  if (!C.zf) goto L_128a3876;
  /* 128a381f push 1 */
  push32((uint32_t)(0x1u));
  /* 128a3821 push 0x128bb770 */
  push32((uint32_t)(0x128bb770u));
  /* 128a3826 push 1 */
  push32((uint32_t)(0x1u));
  /* 128a3828 push 0x128bb770 */
  push32((uint32_t)(0x128bb770u));
  /* 128a382d push 0 */
  push32((uint32_t)(0x0u));
  /* 128a382f push 0 */
  push32((uint32_t)(0x0u));
  /* 128a3831 call dword ptr [0x128c2308] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2308))), 0x128a3837u);
  /* 128a3837 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128a3839 je 0x128a3847 */
  if (C.zf) goto L_128a3847;
  /* 128a383b mov dword ptr [0x128bfa04], 1 */
  w32((uint32_t)(0x128bfa04), (0x1u));
  /* 128a3845 jmp 0x128a3876 */
  goto L_128a3876;
L_128a3847:;
  /* 128a3847 push 1 */
  push32((uint32_t)(0x1u));
  /* 128a3849 push 0x128bb76c */
  push32((uint32_t)(0x128bb76cu));
  /* 128a384e push 1 */
  push32((uint32_t)(0x1u));
  /* 128a3850 push 0x128bb76c */
  push32((uint32_t)(0x128bb76cu));
  /* 128a3855 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a3857 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a3859 call dword ptr [0x128c2310] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2310))), 0x128a385fu);
  /* 128a385f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128a3861 je 0x128a386f */
  if (C.zf) goto L_128a386f;
  /* 128a3863 mov dword ptr [0x128bfa04], 2 */
  w32((uint32_t)(0x128bfa04), (0x2u));
  /* 128a386d jmp 0x128a3876 */
  goto L_128a3876;
L_128a386f:;
  /* 128a386f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a3871 jmp 0x128a3bd4 */
  goto L_128a3bd4;
L_128a3876:;
  /* 128a3876 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a387a jle 0x128a388f */
  if ((C.zf||C.sf!=C.of)) goto L_128a388f;
  /* 128a387c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a387f push eax */
  push32((uint32_t)(EAX));
  /* 128a3880 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a3883 push ecx */
  push32((uint32_t)(ECX));
  /* 128a3884 call 0x128a3bf0 */
  push32(0x128a3889u); f_128a3bf0();
  /* 128a3889 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a388c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_128a388f:;
  /* 128a388f cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3893 jle 0x128a38a8 */
  if ((C.zf||C.sf!=C.of)) goto L_128a38a8;
  /* 128a3895 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 128a3898 push edx */
  push32((uint32_t)(EDX));
  /* 128a3899 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 128a389c push eax */
  push32((uint32_t)(EAX));
  /* 128a389d call 0x128a3bf0 */
  push32(0x128a38a2u); f_128a3bf0();
  /* 128a38a2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a38a5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_128a38a8:;
  /* 128a38a8 cmp dword ptr [0x128bfa04], 2 */
  { uint32_t _a=(r32((uint32_t)(0x128bfa04))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a38af jne 0x128a38d4 */
  if (!C.zf) goto L_128a38d4;
  /* 128a38b1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 128a38b4 push ecx */
  push32((uint32_t)(ECX));
  /* 128a38b5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 128a38b8 push edx */
  push32((uint32_t)(EDX));
  /* 128a38b9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a38bc push eax */
  push32((uint32_t)(EAX));
  /* 128a38bd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a38c0 push ecx */
  push32((uint32_t)(ECX));
  /* 128a38c1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a38c4 push edx */
  push32((uint32_t)(EDX));
  /* 128a38c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a38c8 push eax */
  push32((uint32_t)(EAX));
  /* 128a38c9 call dword ptr [0x128c2310] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2310))), 0x128a38cfu);
  /* 128a38cf jmp 0x128a3bd4 */
  goto L_128a3bd4;
L_128a38d4:;
  /* 128a38d4 cmp dword ptr [0x128bfa04], 1 */
  { uint32_t _a=(r32((uint32_t)(0x128bfa04))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a38db jne 0x128a3bd2 */
  if (!C.zf) goto L_128a3bd2;
  /* 128a38e1 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a38e5 jne 0x128a38f0 */
  if (!C.zf) goto L_128a38f0;
  /* 128a38e7 mov ecx, dword ptr [0x128bf8b8] */
  ECX = (r32((uint32_t)(0x128bf8b8)));
  /* 128a38ed mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_128a38f0:;
  /* 128a38f0 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a38f4 je 0x128a3900 */
  if (C.zf) goto L_128a3900;
  /* 128a38f6 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a38fa jne 0x128a3a7c */
  if (!C.zf) goto L_128a3a7c;
L_128a3900:;
  /* 128a3900 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a3903 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3906 jne 0x128a3912 */
  if (!C.zf) goto L_128a3912;
  /* 128a3908 mov eax, 2 */
  EAX = (0x2u);
  /* 128a390d jmp 0x128a3bd4 */
  goto L_128a3bd4;
L_128a3912:;
  /* 128a3912 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3916 jle 0x128a3922 */
  if ((C.zf||C.sf!=C.of)) goto L_128a3922;
  /* 128a3918 mov eax, 1 */
  EAX = (0x1u);
  /* 128a391d jmp 0x128a3bd4 */
  goto L_128a3bd4;
L_128a3922:;
  /* 128a3922 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3926 jle 0x128a3932 */
  if ((C.zf||C.sf!=C.of)) goto L_128a3932;
  /* 128a3928 mov eax, 3 */
  EAX = (0x3u);
  /* 128a392d jmp 0x128a3bd4 */
  goto L_128a3bd4;
L_128a3932:;
  /* 128a3932 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 128a3935 push eax */
  push32((uint32_t)(EAX));
  /* 128a3936 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 128a3939 push ecx */
  push32((uint32_t)(ECX));
  /* 128a393a call dword ptr [0x128c22c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c22c0))), 0x128a3940u);
  /* 128a3940 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128a3942 jne 0x128a394b */
  if (!C.zf) goto L_128a394b;
  /* 128a3944 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a3946 jmp 0x128a3bd4 */
  goto L_128a3bd4;
L_128a394b:;
  /* 128a394b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a394f jne 0x128a3957 */
  if (!C.zf) goto L_128a3957;
  /* 128a3951 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3955 je 0x128a3984 */
  if (C.zf) goto L_128a3984;
L_128a3957:;
  /* 128a3957 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a395b jne 0x128a3963 */
  if (!C.zf) goto L_128a3963;
  /* 128a395d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3961 je 0x128a3984 */
  if (C.zf) goto L_128a3984;
L_128a3963:;
  /* 128a3963 push 0x128bc058 */
  push32((uint32_t)(0x128bc058u));
  /* 128a3968 push 0 */
  push32((uint32_t)(0x0u));
  /* 128a396a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 128a396f push 0x128bc050 */
  push32((uint32_t)(0x128bc050u));
  /* 128a3974 push 2 */
  push32((uint32_t)(0x2u));
  /* 128a3976 call 0x12892e00 */
  push32(0x128a397bu); f_12892e00();
  /* 128a397b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a397e cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3981 jne 0x128a3984 */
  if (!C.zf) goto L_128a3984;
  /* 128a3983 int3  */
  x86_unimpl("int3 @ 0x128a3983");
L_128a3984:;
  /* 128a3984 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128a3986 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128a3988 jne 0x128a394b */
  if (!C.zf) goto L_128a394b;
  /* 128a398a cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a398e jle 0x128a3a03 */
  if ((C.zf||C.sf!=C.of)) goto L_128a3a03;
  /* 128a3990 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3994 jae 0x128a39a0 */
  if (!C.cf) goto L_128a39a0;
  /* 128a3996 mov eax, 3 */
  EAX = (0x3u);
  /* 128a399b jmp 0x128a3bd4 */
  goto L_128a3bd4;
L_128a39a0:;
  /* 128a39a0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 128a39a3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 128a39a6 jmp 0x128a39b1 */
  goto L_128a39b1;
L_128a39a8:;
  /* 128a39a8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 128a39ab add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a39ae mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_128a39b1:;
  /* 128a39b1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 128a39b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a39b6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 128a39b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128a39ba je 0x128a39f9 */
  if (C.zf) goto L_128a39f9;
  /* 128a39bc mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 128a39bf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128a39c1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 128a39c4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128a39c6 je 0x128a39f9 */
  if (C.zf) goto L_128a39f9;
  /* 128a39c8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a39cb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 128a39cd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 128a39cf mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 128a39d2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a39d4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 128a39d6 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a39d8 jl 0x128a39f7 */
  if ((C.sf!=C.of)) goto L_128a39f7;
  /* 128a39da mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a39dd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128a39df mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 128a39e1 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 128a39e4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 128a39e6 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 128a39e9 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a39eb jg 0x128a39f7 */
  if ((!C.zf&&C.sf==C.of)) goto L_128a39f7;
  /* 128a39ed mov eax, 2 */
  EAX = (0x2u);
  /* 128a39f2 jmp 0x128a3bd4 */
  goto L_128a3bd4;
L_128a39f7:;
  /* 128a39f7 jmp 0x128a39a8 */
  goto L_128a39a8;
L_128a39f9:;
  /* 128a39f9 mov eax, 3 */
  EAX = (0x3u);
  /* 128a39fe jmp 0x128a3bd4 */
  goto L_128a3bd4;
L_128a3a03:;
  /* 128a3a03 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3a07 jle 0x128a3a7c */
  if ((C.zf||C.sf!=C.of)) goto L_128a3a7c;
  /* 128a3a09 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3a0d jae 0x128a3a19 */
  if (!C.cf) goto L_128a3a19;
  /* 128a3a0f mov eax, 1 */
  EAX = (0x1u);
  /* 128a3a14 jmp 0x128a3bd4 */
  goto L_128a3bd4;
L_128a3a19:;
  /* 128a3a19 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 128a3a1c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 128a3a1f jmp 0x128a3a2a */
  goto L_128a3a2a;
L_128a3a21:;
  /* 128a3a21 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 128a3a24 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a3a27 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_128a3a2a:;
  /* 128a3a2a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 128a3a2d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128a3a2f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 128a3a31 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128a3a33 je 0x128a3a72 */
  if (C.zf) goto L_128a3a72;
  /* 128a3a35 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 128a3a38 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 128a3a3a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 128a3a3d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 128a3a3f je 0x128a3a72 */
  if (C.zf) goto L_128a3a72;
  /* 128a3a41 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 128a3a44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a3a46 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 128a3a48 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 128a3a4b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 128a3a4d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 128a3a4f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3a51 jl 0x128a3a70 */
  if ((C.sf!=C.of)) goto L_128a3a70;
  /* 128a3a53 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 128a3a56 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 128a3a58 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 128a3a5a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 128a3a5d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a3a5f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 128a3a62 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3a64 jg 0x128a3a70 */
  if ((!C.zf&&C.sf==C.of)) goto L_128a3a70;
  /* 128a3a66 mov eax, 2 */
  EAX = (0x2u);
  /* 128a3a6b jmp 0x128a3bd4 */
  goto L_128a3bd4;
L_128a3a70:;
  /* 128a3a70 jmp 0x128a3a21 */
  goto L_128a3a21;
L_128a3a72:;
  /* 128a3a72 mov eax, 1 */
  EAX = (0x1u);
  /* 128a3a77 jmp 0x128a3bd4 */
  goto L_128a3bd4;
L_128a3a7c:;
  /* 128a3a7c push 0 */
  push32((uint32_t)(0x0u));
  /* 128a3a7e push 0 */
  push32((uint32_t)(0x0u));
  /* 128a3a80 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a3a83 push ecx */
  push32((uint32_t)(ECX));
  /* 128a3a84 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a3a87 push edx */
  push32((uint32_t)(EDX));
  /* 128a3a88 push 9 */
  push32((uint32_t)(0x9u));
  /* 128a3a8a mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 128a3a8d push eax */
  push32((uint32_t)(EAX));
  /* 128a3a8e call dword ptr [0x128c228c] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c228c))), 0x128a3a94u);
  /* 128a3a94 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 128a3a97 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3a9b jne 0x128a3aa4 */
  if (!C.zf) goto L_128a3aa4;
  /* 128a3a9d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a3a9f jmp 0x128a3bd4 */
  goto L_128a3bd4;
L_128a3aa4:;
  /* 128a3aa4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 128a3aab mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 128a3aae shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 128a3ab0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a3ab3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 128a3ab5 call 0x12898000 */
  push32(0x128a3abau); f_12898000();
  /* 128a3aba mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 128a3abd mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 128a3ac0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 128a3ac3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 128a3ac6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 128a3acd jmp 0x128a3ae6 */
  goto L_128a3ae6;
  /* 128a3acf mov eax, 1 */
  EAX = (0x1u);
  /* 128a3ad4 ret  */
  ESPCHK(0x128a37f0u, _esp0);
  ESP += 4; return;
  /* 128a3ad5 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 128a3ad8 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 128a3adf mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_128a3ae6:;
  /* 128a3ae6 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3aea jne 0x128a3af3 */
  if (!C.zf) goto L_128a3af3;
  /* 128a3aec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a3aee jmp 0x128a3bd4 */
  goto L_128a3bd4;
L_128a3af3:;
  /* 128a3af3 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 128a3af6 push edx */
  push32((uint32_t)(EDX));
  /* 128a3af7 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 128a3afa push eax */
  push32((uint32_t)(EAX));
  /* 128a3afb mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 128a3afe push ecx */
  push32((uint32_t)(ECX));
  /* 128a3aff mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 128a3b02 push edx */
  push32((uint32_t)(EDX));
  /* 128a3b03 push 1 */
  push32((uint32_t)(0x1u));
  /* 128a3b05 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 128a3b08 push eax */
  push32((uint32_t)(EAX));
  /* 128a3b09 call dword ptr [0x128c228c] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c228c))), 0x128a3b0fu);
  /* 128a3b0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128a3b11 jne 0x128a3b1a */
  if (!C.zf) goto L_128a3b1a;
  /* 128a3b13 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a3b15 jmp 0x128a3bd4 */
  goto L_128a3bd4;
L_128a3b1a:;
  /* 128a3b1a push 0 */
  push32((uint32_t)(0x0u));
  /* 128a3b1c push 0 */
  push32((uint32_t)(0x0u));
  /* 128a3b1e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 128a3b21 push ecx */
  push32((uint32_t)(ECX));
  /* 128a3b22 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 128a3b25 push edx */
  push32((uint32_t)(EDX));
  /* 128a3b26 push 9 */
  push32((uint32_t)(0x9u));
  /* 128a3b28 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 128a3b2b push eax */
  push32((uint32_t)(EAX));
  /* 128a3b2c call dword ptr [0x128c228c] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c228c))), 0x128a3b32u);
  /* 128a3b32 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 128a3b35 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3b39 jne 0x128a3b42 */
  if (!C.zf) goto L_128a3b42;
  /* 128a3b3b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a3b3d jmp 0x128a3bd4 */
  goto L_128a3bd4;
L_128a3b42:;
  /* 128a3b42 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 128a3b49 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 128a3b4c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 128a3b4e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a3b51 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 128a3b53 call 0x12898000 */
  push32(0x128a3b58u); f_12898000();
  /* 128a3b58 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 128a3b5b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 128a3b5e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 128a3b61 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 128a3b64 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 128a3b6b jmp 0x128a3b84 */
  goto L_128a3b84;
  /* 128a3b6d mov eax, 1 */
  EAX = (0x1u);
  /* 128a3b72 ret  */
  ESPCHK(0x128a37f0u, _esp0);
  ESP += 4; return;
  /* 128a3b73 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 128a3b76 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 128a3b7d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_128a3b84:;
  /* 128a3b84 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3b88 jne 0x128a3b8e */
  if (!C.zf) goto L_128a3b8e;
  /* 128a3b8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a3b8c jmp 0x128a3bd4 */
  goto L_128a3bd4;
L_128a3b8e:;
  /* 128a3b8e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 128a3b91 push edx */
  push32((uint32_t)(EDX));
  /* 128a3b92 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 128a3b95 push eax */
  push32((uint32_t)(EAX));
  /* 128a3b96 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 128a3b99 push ecx */
  push32((uint32_t)(ECX));
  /* 128a3b9a mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 128a3b9d push edx */
  push32((uint32_t)(EDX));
  /* 128a3b9e push 1 */
  push32((uint32_t)(0x1u));
  /* 128a3ba0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 128a3ba3 push eax */
  push32((uint32_t)(EAX));
  /* 128a3ba4 call dword ptr [0x128c228c] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c228c))), 0x128a3baau);
  /* 128a3baa test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128a3bac jne 0x128a3bb2 */
  if (!C.zf) goto L_128a3bb2;
  /* 128a3bae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a3bb0 jmp 0x128a3bd4 */
  goto L_128a3bd4;
L_128a3bb2:;
  /* 128a3bb2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 128a3bb5 push ecx */
  push32((uint32_t)(ECX));
  /* 128a3bb6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 128a3bb9 push edx */
  push32((uint32_t)(EDX));
  /* 128a3bba mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 128a3bbd push eax */
  push32((uint32_t)(EAX));
  /* 128a3bbe mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 128a3bc1 push ecx */
  push32((uint32_t)(ECX));
  /* 128a3bc2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a3bc5 push edx */
  push32((uint32_t)(EDX));
  /* 128a3bc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a3bc9 push eax */
  push32((uint32_t)(EAX));
  /* 128a3bca call dword ptr [0x128c2308] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2308))), 0x128a3bd0u);
  /* 128a3bd0 jmp 0x128a3bd4 */
  goto L_128a3bd4;
L_128a3bd2:;
  /* 128a3bd2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_128a3bd4:;
  /* 128a3bd4 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 128a3bd7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 128a3bda mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 128a3be1 pop edi */
  EDI = (pop32());
  /* 128a3be2 pop esi */
  ESI = (pop32());
  /* 128a3be3 pop ebx */
  EBX = (pop32());
  /* 128a3be4 mov esp, ebp */
  ESP = (EBP);
  /* 128a3be6 pop ebp */
  EBP = (pop32());
  /* 128a3be7 ret  */
  ESPCHK(0x128a37f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013bf0 @ 0x128a3bf0 (80 bytes, 32 insns) */
void f_128a3bf0(void) {
  FTRACE(0x128a3bf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a3bf0 push ebp */
  push32((uint32_t)(EBP));
  /* 128a3bf1 mov ebp, esp */
  EBP = (ESP);
  /* 128a3bf3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a3bf6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a3bf9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 128a3bfc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a3bff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_128a3c02:;
  /* 128a3c02 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a3c05 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a3c08 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a3c0b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 128a3c0e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128a3c10 je 0x128a3c27 */
  if (C.zf) goto L_128a3c27;
  /* 128a3c12 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a3c15 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 128a3c18 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128a3c1a je 0x128a3c27 */
  if (C.zf) goto L_128a3c27;
  /* 128a3c1c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a3c1f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a3c22 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 128a3c25 jmp 0x128a3c02 */
  goto L_128a3c02;
L_128a3c27:;
  /* 128a3c27 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a3c2a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 128a3c2d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128a3c2f jne 0x128a3c39 */
  if (!C.zf) goto L_128a3c39;
  /* 128a3c31 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a3c34 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a3c37 jmp 0x128a3c3c */
  goto L_128a3c3c;
L_128a3c39:;
  /* 128a3c39 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_128a3c3c:;
  /* 128a3c3c mov esp, ebp */
  ESP = (EBP);
  /* 128a3c3e pop ebp */
  EBP = (pop32());
  /* 128a3c3f ret  */
  ESPCHK(0x128a3bf0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013c40 @ 0x128a3c40 (736 bytes, 224 insns) */
void f_128a3c40(void) {
  FTRACE(0x128a3c40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a3c40 push ebp */
  push32((uint32_t)(EBP));
  /* 128a3c41 mov ebp, esp */
  EBP = (ESP);
  /* 128a3c43 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a3c46 push esi */
  push32((uint32_t)(ESI));
  /* 128a3c47 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3c4b je 0x128a3c6c */
  if (C.zf) goto L_128a3c6c;
  /* 128a3c4d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 128a3c4f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a3c52 push eax */
  push32((uint32_t)(EAX));
  /* 128a3c53 call 0x128a4090 */
  push32(0x128a3c58u); f_128a4090();
  /* 128a3c58 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a3c5b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 128a3c5e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3c62 je 0x128a3c6c */
  if (C.zf) goto L_128a3c6c;
  /* 128a3c64 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a3c67 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3c6a jne 0x128a3c74 */
  if (!C.zf) goto L_128a3c74;
L_128a3c6c:;
  /* 128a3c6c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 128a3c6f jmp 0x128a3f1b */
  goto L_128a3f1b;
L_128a3c74:;
  /* 128a3c74 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 128a3c77 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 128a3c7b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 128a3c7d sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a3c7f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 128a3c80 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 128a3c83 mov ecx, dword ptr [0x128bf6bc] */
  ECX = (r32((uint32_t)(0x128bf6bc)));
  /* 128a3c89 cmp ecx, dword ptr [0x128bf6c0] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x128bf6c0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3c8f jne 0x128a3ca5 */
  if (!C.zf) goto L_128a3ca5;
  /* 128a3c91 mov edx, dword ptr [0x128bf6bc] */
  EDX = (r32((uint32_t)(0x128bf6bc)));
  /* 128a3c97 push edx */
  push32((uint32_t)(EDX));
  /* 128a3c98 call 0x128a3fa0 */
  push32(0x128a3c9du); f_128a3fa0();
  /* 128a3c9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a3ca0 mov dword ptr [0x128bf6bc], eax */
  w32((uint32_t)(0x128bf6bc), (EAX));
L_128a3ca5:;
  /* 128a3ca5 cmp dword ptr [0x128bf6bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf6bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3cac jne 0x128a3d65 */
  if (!C.zf) goto L_128a3d65;
  /* 128a3cb2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3cb6 je 0x128a3cd7 */
  if (C.zf) goto L_128a3cd7;
  /* 128a3cb8 cmp dword ptr [0x128bf6c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf6c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3cbf je 0x128a3cd7 */
  if (C.zf) goto L_128a3cd7;
  /* 128a3cc1 call 0x128a3740 */
  push32(0x128a3cc6u); f_128a3740();
  /* 128a3cc6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128a3cc8 je 0x128a3cd2 */
  if (C.zf) goto L_128a3cd2;
  /* 128a3cca or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 128a3ccd jmp 0x128a3f1b */
  goto L_128a3f1b;
L_128a3cd2:;
  /* 128a3cd2 jmp 0x128a3d65 */
  goto L_128a3d65;
L_128a3cd7:;
  /* 128a3cd7 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3cdb je 0x128a3ce4 */
  if (C.zf) goto L_128a3ce4;
  /* 128a3cdd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a3cdf jmp 0x128a3f1b */
  goto L_128a3f1b;
L_128a3ce4:;
  /* 128a3ce4 cmp dword ptr [0x128bf6bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf6bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3ceb jne 0x128a3d24 */
  if (!C.zf) goto L_128a3d24;
  /* 128a3ced push 0x87 */
  push32((uint32_t)(0x87u));
  /* 128a3cf2 push 0x128bc0b0 */
  push32((uint32_t)(0x128bc0b0u));
  /* 128a3cf7 push 2 */
  push32((uint32_t)(0x2u));
  /* 128a3cf9 push 4 */
  push32((uint32_t)(0x4u));
  /* 128a3cfb call 0x12894e60 */
  push32(0x128a3d00u); f_12894e60();
  /* 128a3d00 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a3d03 mov dword ptr [0x128bf6bc], eax */
  w32((uint32_t)(0x128bf6bc), (EAX));
  /* 128a3d08 cmp dword ptr [0x128bf6bc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf6bc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3d0f jne 0x128a3d19 */
  if (!C.zf) goto L_128a3d19;
  /* 128a3d11 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 128a3d14 jmp 0x128a3f1b */
  goto L_128a3f1b;
L_128a3d19:;
  /* 128a3d19 mov eax, dword ptr [0x128bf6bc] */
  EAX = (r32((uint32_t)(0x128bf6bc)));
  /* 128a3d1e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_128a3d24:;
  /* 128a3d24 cmp dword ptr [0x128bf6c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf6c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3d2b jne 0x128a3d65 */
  if (!C.zf) goto L_128a3d65;
  /* 128a3d2d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 128a3d32 push 0x128bc0b0 */
  push32((uint32_t)(0x128bc0b0u));
  /* 128a3d37 push 2 */
  push32((uint32_t)(0x2u));
  /* 128a3d39 push 4 */
  push32((uint32_t)(0x4u));
  /* 128a3d3b call 0x12894e60 */
  push32(0x128a3d40u); f_12894e60();
  /* 128a3d40 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a3d43 mov dword ptr [0x128bf6c4], eax */
  w32((uint32_t)(0x128bf6c4), (EAX));
  /* 128a3d48 cmp dword ptr [0x128bf6c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bf6c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3d4f jne 0x128a3d59 */
  if (!C.zf) goto L_128a3d59;
  /* 128a3d51 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 128a3d54 jmp 0x128a3f1b */
  goto L_128a3f1b;
L_128a3d59:;
  /* 128a3d59 mov ecx, dword ptr [0x128bf6c4] */
  ECX = (r32((uint32_t)(0x128bf6c4)));
  /* 128a3d5f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_128a3d65:;
  /* 128a3d65 mov edx, dword ptr [0x128bf6bc] */
  EDX = (r32((uint32_t)(0x128bf6bc)));
  /* 128a3d6b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 128a3d6e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 128a3d71 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a3d74 push eax */
  push32((uint32_t)(EAX));
  /* 128a3d75 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a3d78 push ecx */
  push32((uint32_t)(ECX));
  /* 128a3d79 call 0x128a3f20 */
  push32(0x128a3d7eu); f_128a3f20();
  /* 128a3d7e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a3d81 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 128a3d84 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3d88 jl 0x128a3e21 */
  if ((C.sf!=C.of)) goto L_128a3e21;
  /* 128a3d8e mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a3d91 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3d94 je 0x128a3e21 */
  if (C.zf) goto L_128a3e21;
  /* 128a3d9a cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3d9e je 0x128a3e13 */
  if (C.zf) goto L_128a3e13;
  /* 128a3da0 push 2 */
  push32((uint32_t)(0x2u));
  /* 128a3da2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a3da5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a3da8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 128a3dab push edx */
  push32((uint32_t)(EDX));
  /* 128a3dac call 0x128958f0 */
  push32(0x128a3db1u); f_128958f0();
  /* 128a3db1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a3db4 jmp 0x128a3dbf */
  goto L_128a3dbf;
L_128a3db6:;
  /* 128a3db6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a3db9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a3dbc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_128a3dbf:;
  /* 128a3dbf mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a3dc2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a3dc5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3dc9 je 0x128a3de0 */
  if (C.zf) goto L_128a3de0;
  /* 128a3dcb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a3dce mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a3dd1 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a3dd4 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 128a3dd7 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 128a3ddb mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 128a3dde jmp 0x128a3db6 */
  goto L_128a3db6;
L_128a3de0:;
  /* 128a3de0 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 128a3de5 push 0x128bc0b0 */
  push32((uint32_t)(0x128bc0b0u));
  /* 128a3dea push 2 */
  push32((uint32_t)(0x2u));
  /* 128a3dec mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a3def shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 128a3df2 push eax */
  push32((uint32_t)(EAX));
  /* 128a3df3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a3df6 push ecx */
  push32((uint32_t)(ECX));
  /* 128a3df7 call 0x128952f0 */
  push32(0x128a3dfcu); f_128952f0();
  /* 128a3dfc add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a3dff mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 128a3e02 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3e06 je 0x128a3e11 */
  if (C.zf) goto L_128a3e11;
  /* 128a3e08 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a3e0b mov dword ptr [0x128bf6bc], edx */
  w32((uint32_t)(0x128bf6bc), (EDX));
L_128a3e11:;
  /* 128a3e11 jmp 0x128a3e1f */
  goto L_128a3e1f;
L_128a3e13:;
  /* 128a3e13 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a3e16 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a3e19 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a3e1c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_128a3e1f:;
  /* 128a3e1f jmp 0x128a3e94 */
  goto L_128a3e94;
L_128a3e21:;
  /* 128a3e21 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3e25 jne 0x128a3e8d */
  if (!C.zf) goto L_128a3e8d;
  /* 128a3e27 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3e2b jge 0x128a3e35 */
  if ((C.sf==C.of)) goto L_128a3e35;
  /* 128a3e2d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a3e30 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 128a3e32 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_128a3e35:;
  /* 128a3e35 push 0xce */
  push32((uint32_t)(0xceu));
  /* 128a3e3a push 0x128bc0b0 */
  push32((uint32_t)(0x128bc0b0u));
  /* 128a3e3f push 2 */
  push32((uint32_t)(0x2u));
  /* 128a3e41 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a3e44 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 128a3e4b push edx */
  push32((uint32_t)(EDX));
  /* 128a3e4c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a3e4f push eax */
  push32((uint32_t)(EAX));
  /* 128a3e50 call 0x128952f0 */
  push32(0x128a3e55u); f_128952f0();
  /* 128a3e55 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a3e58 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 128a3e5b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3e5f jne 0x128a3e69 */
  if (!C.zf) goto L_128a3e69;
  /* 128a3e61 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 128a3e64 jmp 0x128a3f1b */
  goto L_128a3f1b;
L_128a3e69:;
  /* 128a3e69 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a3e6c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a3e6f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a3e72 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 128a3e75 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a3e78 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a3e7b mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 128a3e83 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a3e86 mov dword ptr [0x128bf6bc], eax */
  w32((uint32_t)(0x128bf6bc), (EAX));
  /* 128a3e8b jmp 0x128a3e94 */
  goto L_128a3e94;
L_128a3e8d:;
  /* 128a3e8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a3e8f jmp 0x128a3f1b */
  goto L_128a3f1b;
L_128a3e94:;
  /* 128a3e94 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3e98 je 0x128a3f19 */
  if (C.zf) goto L_128a3f19;
  /* 128a3e9a push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 128a3e9f push 0x128bc0b0 */
  push32((uint32_t)(0x128bc0b0u));
  /* 128a3ea4 push 2 */
  push32((uint32_t)(0x2u));
  /* 128a3ea6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a3ea9 push ecx */
  push32((uint32_t)(ECX));
  /* 128a3eaa call 0x12897c90 */
  push32(0x128a3eafu); f_12897c90();
  /* 128a3eaf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a3eb2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a3eb5 push eax */
  push32((uint32_t)(EAX));
  /* 128a3eb6 call 0x12894e60 */
  push32(0x128a3ebbu); f_12894e60();
  /* 128a3ebb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a3ebe mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 128a3ec1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3ec5 je 0x128a3f19 */
  if (C.zf) goto L_128a3f19;
  /* 128a3ec7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a3eca push edx */
  push32((uint32_t)(EDX));
  /* 128a3ecb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 128a3ece push eax */
  push32((uint32_t)(EAX));
  /* 128a3ecf call 0x12897e10 */
  push32(0x128a3ed4u); f_12897e10();
  /* 128a3ed4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a3ed7 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 128a3eda sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a3edd mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 128a3ee0 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a3ee2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 128a3ee5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a3ee8 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 128a3eeb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a3eee add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a3ef1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 128a3ef4 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 128a3ef7 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 128a3ef9 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a3efb not edx */
  EDX = (~(EDX));
  /* 128a3efd and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 128a3f00 push edx */
  push32((uint32_t)(EDX));
  /* 128a3f01 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 128a3f04 push eax */
  push32((uint32_t)(EAX));
  /* 128a3f05 call dword ptr [0x128c2314] */
  call_ind((uint32_t)(r32((uint32_t)(0x128c2314))), 0x128a3f0bu);
  /* 128a3f0b push 2 */
  push32((uint32_t)(0x2u));
  /* 128a3f0d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 128a3f10 push ecx */
  push32((uint32_t)(ECX));
  /* 128a3f11 call 0x128958f0 */
  push32(0x128a3f16u); f_128958f0();
  /* 128a3f16 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128a3f19:;
  /* 128a3f19 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_128a3f1b:;
  /* 128a3f1b pop esi */
  ESI = (pop32());
  /* 128a3f1c mov esp, ebp */
  ESP = (EBP);
  /* 128a3f1e pop ebp */
  EBP = (pop32());
  /* 128a3f1f ret  */
  ESPCHK(0x128a3c40u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x128a3f20 (124 bytes, 47 insns) */
void f_128a3f20(void) {
  FTRACE(0x128a3f20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a3f20 push ebp */
  push32((uint32_t)(EBP));
  /* 128a3f21 mov ebp, esp */
  EBP = (ESP);
  /* 128a3f23 push ecx */
  push32((uint32_t)(ECX));
  /* 128a3f24 mov eax, dword ptr [0x128bf6bc] */
  EAX = (r32((uint32_t)(0x128bf6bc)));
  /* 128a3f29 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 128a3f2c jmp 0x128a3f37 */
  goto L_128a3f37;
L_128a3f2e:;
  /* 128a3f2e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a3f31 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a3f34 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_128a3f37:;
  /* 128a3f37 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a3f3a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3f3d je 0x128a3f8a */
  if (C.zf) goto L_128a3f8a;
  /* 128a3f3f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a3f42 push eax */
  push32((uint32_t)(EAX));
  /* 128a3f43 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a3f46 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 128a3f48 push edx */
  push32((uint32_t)(EDX));
  /* 128a3f49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a3f4c push eax */
  push32((uint32_t)(EAX));
  /* 128a3f4d call 0x128a36f0 */
  push32(0x128a3f52u); f_128a36f0();
  /* 128a3f52 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a3f55 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 128a3f57 jne 0x128a3f88 */
  if (!C.zf) goto L_128a3f88;
  /* 128a3f59 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a3f5c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 128a3f5e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a3f61 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 128a3f65 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3f68 je 0x128a3f7a */
  if (C.zf) goto L_128a3f7a;
  /* 128a3f6a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a3f6d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 128a3f6f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a3f72 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 128a3f76 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128a3f78 jne 0x128a3f88 */
  if (!C.zf) goto L_128a3f88;
L_128a3f7a:;
  /* 128a3f7a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a3f7d sub eax, dword ptr [0x128bf6bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x128bf6bc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a3f83 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 128a3f86 jmp 0x128a3f98 */
  goto L_128a3f98;
L_128a3f88:;
  /* 128a3f88 jmp 0x128a3f2e */
  goto L_128a3f2e;
L_128a3f8a:;
  /* 128a3f8a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a3f8d sub eax, dword ptr [0x128bf6bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x128bf6bc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a3f93 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 128a3f96 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_128a3f98:;
  /* 128a3f98 mov esp, ebp */
  ESP = (EBP);
  /* 128a3f9a pop ebp */
  EBP = (pop32());
  /* 128a3f9b ret  */
  ESPCHK(0x128a3f20u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x128a3fa0 (238 bytes, 80 insns) */
void f_128a3fa0(void) {
  FTRACE(0x128a3fa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a3fa0 push ebp */
  push32((uint32_t)(EBP));
  /* 128a3fa1 mov ebp, esp */
  EBP = (ESP);
  /* 128a3fa3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a3fa6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 128a3fad mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a3fb0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 128a3fb3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a3fb7 jne 0x128a3fc0 */
  if (!C.zf) goto L_128a3fc0;
  /* 128a3fb9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a3fbb jmp 0x128a408a */
  goto L_128a408a;
L_128a3fc0:;
  /* 128a3fc0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a3fc3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 128a3fc5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a3fc8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a3fcb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 128a3fce test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128a3fd0 je 0x128a3fdd */
  if (C.zf) goto L_128a3fdd;
  /* 128a3fd2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 128a3fd5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a3fd8 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 128a3fdb jmp 0x128a3fc0 */
  goto L_128a3fc0;
L_128a3fdd:;
  /* 128a3fdd push 0x146 */
  push32((uint32_t)(0x146u));
  /* 128a3fe2 push 0x128bc0b0 */
  push32((uint32_t)(0x128bc0b0u));
  /* 128a3fe7 push 2 */
  push32((uint32_t)(0x2u));
  /* 128a3fe9 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 128a3fec lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 128a3ff3 push eax */
  push32((uint32_t)(EAX));
  /* 128a3ff4 call 0x12894e60 */
  push32(0x128a3ff9u); f_12894e60();
  /* 128a3ff9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a3ffc mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 128a3fff mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a4002 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 128a4005 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a4009 jne 0x128a4015 */
  if (!C.zf) goto L_128a4015;
  /* 128a400b push 9 */
  push32((uint32_t)(0x9u));
  /* 128a400d call 0x12892cb0 */
  push32(0x128a4012u); f_12892cb0();
  /* 128a4012 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128a4015:;
  /* 128a4015 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a4018 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_128a401b:;
  /* 128a401b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a401e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a4021 je 0x128a407e */
  if (C.zf) goto L_128a407e;
  /* 128a4023 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 128a4028 push 0x128bc0b0 */
  push32((uint32_t)(0x128bc0b0u));
  /* 128a402d push 2 */
  push32((uint32_t)(0x2u));
  /* 128a402f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a4032 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 128a4034 push edx */
  push32((uint32_t)(EDX));
  /* 128a4035 call 0x12897c90 */
  push32(0x128a403au); f_12897c90();
  /* 128a403a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a403d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a4040 push eax */
  push32((uint32_t)(EAX));
  /* 128a4041 call 0x12894e60 */
  push32(0x128a4046u); f_12894e60();
  /* 128a4046 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a4049 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a404c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 128a404e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a4051 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a4054 je 0x128a406a */
  if (C.zf) goto L_128a406a;
  /* 128a4056 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a4059 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 128a405b push ecx */
  push32((uint32_t)(ECX));
  /* 128a405c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a405f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 128a4061 push eax */
  push32((uint32_t)(EAX));
  /* 128a4062 call 0x12897e10 */
  push32(0x128a4067u); f_12897e10();
  /* 128a4067 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_128a406a:;
  /* 128a406a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 128a406d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a4070 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 128a4073 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a4076 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a4079 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 128a407c jmp 0x128a401b */
  goto L_128a401b;
L_128a407e:;
  /* 128a407e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 128a4081 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 128a4087 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_128a408a:;
  /* 128a408a mov esp, ebp */
  ESP = (EBP);
  /* 128a408c pop ebp */
  EBP = (pop32());
  /* 128a408d ret  */
  ESPCHK(0x128a3fa0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014090 @ 0x128a4090 (237 bytes, 81 insns) */
void f_128a4090(void) {
  FTRACE(0x128a4090u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a4090 push ebp */
  push32((uint32_t)(EBP));
  /* 128a4091 mov ebp, esp */
  EBP = (ESP);
  /* 128a4093 push ecx */
  push32((uint32_t)(ECX));
  /* 128a4094 cmp dword ptr [0x128bfabc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x128bfabc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a409b jne 0x128a40b2 */
  if (!C.zf) goto L_128a40b2;
  /* 128a409d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 128a40a0 push eax */
  push32((uint32_t)(EAX));
  /* 128a40a1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a40a4 push ecx */
  push32((uint32_t)(ECX));
  /* 128a40a5 call 0x128a4190 */
  push32(0x128a40aau); f_128a4190();
  /* 128a40aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a40ad jmp 0x128a4179 */
  goto L_128a4179;
L_128a40b2:;
  /* 128a40b2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 128a40b4 call 0x12899210 */
  push32(0x128a40b9u); f_12899210();
  /* 128a40b9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a40bc jmp 0x128a40c7 */
  goto L_128a40c7;
L_128a40be:;
  /* 128a40be mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a40c1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a40c4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_128a40c7:;
  /* 128a40c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a40ca movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 128a40ce mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 128a40d2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a40d5 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 128a40db test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 128a40dd je 0x128a415b */
  if (C.zf) goto L_128a415b;
  /* 128a40df mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a40e2 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 128a40e7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 128a40e9 mov cl, byte ptr [eax + 0x128bfbc1] */
  CL = (r8((uint32_t)(EAX + 0x128bfbc1)));
  /* 128a40ef and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 128a40f2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 128a40f4 je 0x128a4146 */
  if (C.zf) goto L_128a4146;
  /* 128a40f6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a40f9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a40fc mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 128a40ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a4102 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 128a4104 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 128a4106 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 128a4108 jne 0x128a4118 */
  if (!C.zf) goto L_128a4118;
  /* 128a410a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 128a410c call 0x128992b0 */
  push32(0x128a4111u); f_128992b0();
  /* 128a4111 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a4114 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a4116 jmp 0x128a4179 */
  goto L_128a4179;
L_128a4118:;
  /* 128a4118 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a411b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 128a4121 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 128a4124 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a4127 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 128a4129 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 128a412b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 128a412d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a4130 jne 0x128a4144 */
  if (!C.zf) goto L_128a4144;
  /* 128a4132 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 128a4134 call 0x128992b0 */
  push32(0x128a4139u); f_128992b0();
  /* 128a4139 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a413c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a413f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 128a4142 jmp 0x128a4179 */
  goto L_128a4179;
L_128a4144:;
  /* 128a4144 jmp 0x128a4156 */
  goto L_128a4156;
L_128a4146:;
  /* 128a4146 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a4149 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 128a414f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a4152 jne 0x128a4156 */
  if (!C.zf) goto L_128a4156;
  /* 128a4154 jmp 0x128a415b */
  goto L_128a415b;
L_128a4156:;
  /* 128a4156 jmp 0x128a40be */
  goto L_128a40be;
L_128a415b:;
  /* 128a415b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 128a415d call 0x128992b0 */
  push32(0x128a4162u); f_128992b0();
  /* 128a4162 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 128a4165 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 128a4168 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 128a416d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 128a4170 jne 0x128a4177 */
  if (!C.zf) goto L_128a4177;
  /* 128a4172 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 128a4175 jmp 0x128a4179 */
  goto L_128a4179;
L_128a4177:;
  /* 128a4177 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_128a4179:;
  /* 128a4179 mov esp, ebp */
  ESP = (EBP);
  /* 128a417b pop ebp */
  EBP = (pop32());
  /* 128a417c ret  */
  ESPCHK(0x128a4090u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x128a4190 (193 bytes, 87 insns) */
void f_128a4190(void) {
  FTRACE(0x128a4190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a4190 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a4192 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 128a4196 push ebx */
  push32((uint32_t)(EBX));
  /* 128a4197 mov ebx, eax */
  EBX = (EAX);
  /* 128a4199 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 128a419c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 128a41a0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 128a41a6 je 0x128a41bb */
  if (C.zf) goto L_128a41bb;
L_128a41a8:;
  /* 128a41a8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 128a41aa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 128a41ab cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 128a41ad je 0x128a4180 */
  if (C.zf) { jmp_ind(0x128a4180u); return; }
  /* 128a41af test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 128a41b1 je 0x128a4204 */
  if (C.zf) goto L_128a4204;
  /* 128a41b3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 128a41b9 jne 0x128a41a8 */
  if (!C.zf) goto L_128a41a8;
L_128a41bb:;
  /* 128a41bb or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 128a41bd push edi */
  push32((uint32_t)(EDI));
  /* 128a41be mov eax, ebx */
  EAX = (EBX);
  /* 128a41c0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 128a41c3 push esi */
  push32((uint32_t)(ESI));
  /* 128a41c4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_128a41c6:;
  /* 128a41c6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 128a41c8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 128a41cd mov eax, ecx */
  EAX = (ECX);
  /* 128a41cf mov esi, edi */
  ESI = (EDI);
  /* 128a41d1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 128a41d3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 128a41d5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 128a41d7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 128a41da xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 128a41dd xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 128a41df xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 128a41e1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 128a41e4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 128a41ea jne 0x128a4208 */
  if (!C.zf) goto L_128a4208;
  /* 128a41ec and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 128a41f1 je 0x128a41c6 */
  if (C.zf) goto L_128a41c6;
  /* 128a41f3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 128a41f8 jne 0x128a4202 */
  if (!C.zf) goto L_128a4202;
  /* 128a41fa and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 128a4200 jne 0x128a41c6 */
  if (!C.zf) goto L_128a41c6;
L_128a4202:;
  /* 128a4202 pop esi */
  ESI = (pop32());
  /* 128a4203 pop edi */
  EDI = (pop32());
L_128a4204:;
  /* 128a4204 pop ebx */
  EBX = (pop32());
  /* 128a4205 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 128a4207 ret  */
  ESPCHK(0x128a4190u, _esp0);
  ESP += 4; return;
L_128a4208:;
  /* 128a4208 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 128a420b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 128a420d je 0x128a4245 */
  if (C.zf) goto L_128a4245;
  /* 128a420f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 128a4211 je 0x128a4202 */
  if (C.zf) goto L_128a4202;
  /* 128a4213 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 128a4215 je 0x128a423e */
  if (C.zf) goto L_128a423e;
  /* 128a4217 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 128a4219 je 0x128a4202 */
  if (C.zf) goto L_128a4202;
  /* 128a421b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 128a421e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 128a4220 je 0x128a4237 */
  if (C.zf) goto L_128a4237;
  /* 128a4222 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 128a4224 je 0x128a4202 */
  if (C.zf) goto L_128a4202;
  /* 128a4226 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 128a4228 je 0x128a4230 */
  if (C.zf) goto L_128a4230;
  /* 128a422a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 128a422c je 0x128a4202 */
  if (C.zf) goto L_128a4202;
  /* 128a422e jmp 0x128a41c6 */
  goto L_128a41c6;
L_128a4230:;
  /* 128a4230 pop esi */
  ESI = (pop32());
  /* 128a4231 pop edi */
  EDI = (pop32());
  /* 128a4232 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 128a4235 pop ebx */
  EBX = (pop32());
  /* 128a4236 ret  */
  ESPCHK(0x128a4190u, _esp0);
  ESP += 4; return;
L_128a4237:;
  /* 128a4237 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 128a423a pop esi */
  ESI = (pop32());
  /* 128a423b pop edi */
  EDI = (pop32());
  /* 128a423c pop ebx */
  EBX = (pop32());
  /* 128a423d ret  */
  ESPCHK(0x128a4190u, _esp0);
  ESP += 4; return;
L_128a423e:;
  /* 128a423e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 128a4241 pop esi */
  ESI = (pop32());
  /* 128a4242 pop edi */
  EDI = (pop32());
  /* 128a4243 pop ebx */
  EBX = (pop32());
  /* 128a4244 ret  */
  ESPCHK(0x128a4190u, _esp0);
  ESP += 4; return;
L_128a4245:;
  /* 128a4245 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 128a4248 pop esi */
  ESI = (pop32());
  /* 128a4249 pop edi */
  EDI = (pop32());
  /* 128a424a pop ebx */
  EBX = (pop32());
  /* 128a424b ret  */
  ESPCHK(0x128a4190u, _esp0);
  ESP += 4; return;
  /* 128a424c jmp dword ptr [0x128c2204] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x128c2204)))); return;
}

/* RtlUnwind @ 0x128a43cc (6 bytes, 1 insns) */
void f_128a43cc(void) {
  FTRACE(0x128a43ccu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 128a43cc jmp dword ptr [0x128c2300] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x128c2300)))); return;
}

