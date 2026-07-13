#include "recomp.h"

/* FUN_1000e5b0 @ 0x105ee5b0 (7 bytes, 5 insns) */
void f_105ee5b0(void) {
  FTRACE(0x105ee5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ee5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 105ee5b1 mov ebp, esp */
  EBP = (ESP);
  /* 105ee5b3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ee5b5 pop ebp */
  EBP = (pop32());
  /* 105ee5b6 ret  */
  ESPCHK(0x105ee5b0u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x105ee5c0 (79 bytes, 28 insns) */
void f_105ee5c0(void) {
  FTRACE(0x105ee5c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ee5c0 push ebp */
  push32((uint32_t)(EBP));
  /* 105ee5c1 mov ebp, esp */
  EBP = (ESP);
  /* 105ee5c3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ee5c6 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 105ee5c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105ee5cc mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 105ee5d3 jmp 0x105ee5de */
  goto L_105ee5de;
L_105ee5d5:;
  /* 105ee5d5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ee5d8 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee5db mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_105ee5de:;
  /* 105ee5de mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ee5e1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ee5e4 jge 0x105ee604 */
  if ((C.sf==C.of)) goto L_105ee604;
  /* 105ee5e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ee5e9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee5ec mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105ee5ef mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ee5f2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 105ee5f5 push edx */
  push32((uint32_t)(EDX));
  /* 105ee5f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ee5f9 push eax */
  push32((uint32_t)(EAX));
  /* 105ee5fa call 0x105e8e50 */
  push32(0x105ee5ffu); f_105e8e50();
  /* 105ee5ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee602 jmp 0x105ee5d5 */
  goto L_105ee5d5;
L_105ee604:;
  /* 105ee604 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105ee60b mov esp, ebp */
  ESP = (EBP);
  /* 105ee60d pop ebp */
  EBP = (pop32());
  /* 105ee60e ret  */
  ESPCHK(0x105ee5c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e610 @ 0x105ee610 (349 bytes, 122 insns) */
void f_105ee610(void) {
  FTRACE(0x105ee610u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ee610 push ebp */
  push32((uint32_t)(EBP));
  /* 105ee611 mov ebp, esp */
  EBP = (ESP);
  /* 105ee613 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ee616 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 105ee61b push 0 */
  push32((uint32_t)(0x0u));
  /* 105ee61d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ee620 push eax */
  push32((uint32_t)(EAX));
  /* 105ee621 call 0x105ea5b0 */
  push32(0x105ee626u); f_105ea5b0();
  /* 105ee626 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee629 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ee62c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 105ee62f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105ee631 jne 0x105ee63a */
  if (!C.zf) goto L_105ee63a;
  /* 105ee633 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ee635 jmp 0x105ee769 */
  goto L_105ee769;
L_105ee63a:;
  /* 105ee63a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ee63d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105ee640 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ee643 jne 0x105ee670 */
  if (!C.zf) goto L_105ee670;
  /* 105ee645 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ee648 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 105ee64c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ee64e je 0x105ee670 */
  if (C.zf) goto L_105ee670;
  /* 105ee650 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ee653 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee656 push ecx */
  push32((uint32_t)(ECX));
  /* 105ee657 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ee65a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee660 push edx */
  push32((uint32_t)(EDX));
  /* 105ee661 call 0x105e8e40 */
  push32(0x105ee666u); f_105e8e40();
  /* 105ee666 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee669 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ee66b jmp 0x105ee769 */
  goto L_105ee769;
L_105ee670:;
  /* 105ee670 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105ee677 jmp 0x105ee682 */
  goto L_105ee682;
L_105ee679:;
  /* 105ee679 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ee67c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee67f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105ee682:;
  /* 105ee682 push 0x1060c7c8 */
  push32((uint32_t)(0x1060c7c8u));
  /* 105ee687 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ee68a push ecx */
  push32((uint32_t)(ECX));
  /* 105ee68b call 0x105f07c0 */
  push32(0x105ee690u); f_105f07c0();
  /* 105ee690 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee693 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105ee696 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ee69a jne 0x105ee6a4 */
  if (!C.zf) goto L_105ee6a4;
  /* 105ee69c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105ee69f jmp 0x105ee769 */
  goto L_105ee769;
L_105ee6a4:;
  /* 105ee6a4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ee6a7 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee6aa mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105ee6ac mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 105ee6af cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ee6b3 jne 0x105ee6da */
  if (!C.zf) goto L_105ee6da;
  /* 105ee6b5 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ee6b9 jge 0x105ee6da */
  if ((C.sf==C.of)) goto L_105ee6da;
  /* 105ee6bb movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 105ee6bf cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ee6c2 je 0x105ee6da */
  if (C.zf) goto L_105ee6da;
  /* 105ee6c4 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ee6c7 push edx */
  push32((uint32_t)(EDX));
  /* 105ee6c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ee6cb push eax */
  push32((uint32_t)(EAX));
  /* 105ee6cc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ee6cf push ecx */
  push32((uint32_t)(ECX));
  /* 105ee6d0 call 0x105e96b0 */
  push32(0x105ee6d5u); f_105e96b0();
  /* 105ee6d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee6d8 jmp 0x105ee740 */
  goto L_105ee740;
L_105ee6da:;
  /* 105ee6da cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ee6de jne 0x105ee708 */
  if (!C.zf) goto L_105ee708;
  /* 105ee6e0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ee6e4 jge 0x105ee708 */
  if ((C.sf==C.of)) goto L_105ee708;
  /* 105ee6e6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 105ee6ea cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ee6ed je 0x105ee708 */
  if (C.zf) goto L_105ee708;
  /* 105ee6ef mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ee6f2 push eax */
  push32((uint32_t)(EAX));
  /* 105ee6f3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ee6f6 push ecx */
  push32((uint32_t)(ECX));
  /* 105ee6f7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ee6fa add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee6fd push edx */
  push32((uint32_t)(EDX));
  /* 105ee6fe call 0x105e96b0 */
  push32(0x105ee703u); f_105e96b0();
  /* 105ee703 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee706 jmp 0x105ee740 */
  goto L_105ee740;
L_105ee708:;
  /* 105ee708 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ee70c jne 0x105ee73b */
  if (!C.zf) goto L_105ee73b;
  /* 105ee70e movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 105ee712 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ee714 je 0x105ee71f */
  if (C.zf) goto L_105ee71f;
  /* 105ee716 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 105ee71a cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ee71d jne 0x105ee73b */
  if (!C.zf) goto L_105ee73b;
L_105ee71f:;
  /* 105ee71f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ee722 push edx */
  push32((uint32_t)(EDX));
  /* 105ee723 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ee726 push eax */
  push32((uint32_t)(EAX));
  /* 105ee727 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ee72a add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee730 push ecx */
  push32((uint32_t)(ECX));
  /* 105ee731 call 0x105e96b0 */
  push32(0x105ee736u); f_105e96b0();
  /* 105ee736 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee739 jmp 0x105ee740 */
  goto L_105ee740;
L_105ee73b:;
  /* 105ee73b or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105ee73e jmp 0x105ee769 */
  goto L_105ee769;
L_105ee740:;
  /* 105ee740 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 105ee744 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ee747 jne 0x105ee74b */
  if (!C.zf) goto L_105ee74b;
  /* 105ee749 jmp 0x105ee767 */
  goto L_105ee767;
L_105ee74b:;
  /* 105ee74b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 105ee74f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ee751 jne 0x105ee755 */
  if (!C.zf) goto L_105ee755;
  /* 105ee753 jmp 0x105ee767 */
  goto L_105ee767;
L_105ee755:;
  /* 105ee755 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ee758 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ee75b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 105ee75f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 105ee762 jmp 0x105ee679 */
  goto L_105ee679;
L_105ee767:;
  /* 105ee767 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105ee769:;
  /* 105ee769 mov esp, ebp */
  ESP = (EBP);
  /* 105ee76b pop ebp */
  EBP = (pop32());
  /* 105ee76c ret  */
  ESPCHK(0x105ee610u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x105ee770 (101 bytes, 36 insns) */
void f_105ee770(void) {
  FTRACE(0x105ee770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ee770 push ebp */
  push32((uint32_t)(EBP));
  /* 105ee771 mov ebp, esp */
  EBP = (ESP);
  /* 105ee773 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ee776 push eax */
  push32((uint32_t)(EAX));
  /* 105ee777 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ee77a push ecx */
  push32((uint32_t)(ECX));
  /* 105ee77b call 0x105e8e40 */
  push32(0x105ee780u); f_105e8e40();
  /* 105ee780 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee783 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ee786 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 105ee78a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ee78c je 0x105ee7a8 */
  if (C.zf) goto L_105ee7a8;
  /* 105ee78e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ee791 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee794 push ecx */
  push32((uint32_t)(ECX));
  /* 105ee795 push 0x1060c7d0 */
  push32((uint32_t)(0x1060c7d0u));
  /* 105ee79a push 2 */
  push32((uint32_t)(0x2u));
  /* 105ee79c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ee79f push edx */
  push32((uint32_t)(EDX));
  /* 105ee7a0 call 0x105ee5c0 */
  push32(0x105ee7a5u); f_105ee5c0();
  /* 105ee7a5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105ee7a8:;
  /* 105ee7a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ee7ab movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 105ee7b2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105ee7b4 je 0x105ee7d3 */
  if (C.zf) goto L_105ee7d3;
  /* 105ee7b6 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105ee7b9 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee7bf push edx */
  push32((uint32_t)(EDX));
  /* 105ee7c0 push 0x1060c7cc */
  push32((uint32_t)(0x1060c7ccu));
  /* 105ee7c5 push 2 */
  push32((uint32_t)(0x2u));
  /* 105ee7c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ee7ca push eax */
  push32((uint32_t)(EAX));
  /* 105ee7cb call 0x105ee5c0 */
  push32(0x105ee7d0u); f_105ee5c0();
  /* 105ee7d0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105ee7d3:;
  /* 105ee7d3 pop ebp */
  EBP = (pop32());
  /* 105ee7d4 ret  */
  ESPCHK(0x105ee770u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e7e0 @ 0x105ee7e0 (664 bytes, 260 insns) [15 switch table(s)] */
void f_105ee7e0(void) {
  FTRACE(0x105ee7e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ee7e0 push ebp */
  push32((uint32_t)(EBP));
  /* 105ee7e1 mov ebp, esp */
  EBP = (ESP);
  /* 105ee7e3 push edi */
  push32((uint32_t)(EDI));
  /* 105ee7e4 push esi */
  push32((uint32_t)(ESI));
  /* 105ee7e5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 105ee7e8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105ee7eb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 105ee7ee mov eax, ecx */
  EAX = (ECX);
  /* 105ee7f0 mov edx, ecx */
  EDX = (ECX);
  /* 105ee7f2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee7f4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ee7f6 jbe 0x105ee800 */
  if ((C.cf||C.zf)) goto L_105ee800;
  /* 105ee7f8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ee7fa jb 0x105ee978 */
  if (C.cf) goto L_105ee978;
L_105ee800:;
  /* 105ee800 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 105ee806 jne 0x105ee81c */
  if (!C.zf) goto L_105ee81c;
  /* 105ee808 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 105ee80b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 105ee80e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ee811 jb 0x105ee83c */
  if (C.cf) goto L_105ee83c;
  /* 105ee813 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 105ee815 jmp dword ptr [edx*4 + 0x105ee928] */
  switch (EDX) {
    case 0: goto L_105ee938;
    case 1: goto L_105ee940;
    case 2: goto L_105ee94c;
    case 3: goto L_105ee960;
    default: x86_unimpl("switch@0x105ee815 out of table"); return;
  }
L_105ee81c:;
  /* 105ee81c mov eax, edi */
  EAX = (EDI);
  /* 105ee81e mov edx, 3 */
  EDX = (0x3u);
  /* 105ee823 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ee826 jb 0x105ee834 */
  if (C.cf) goto L_105ee834;
  /* 105ee828 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 105ee82b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee82d jmp dword ptr [eax*4 + 0x105ee840] */
  switch (EAX) {
    case 1: goto L_105ee850;
    case 2: goto L_105ee87c;
    case 3: goto L_105ee8a0;
    default: x86_unimpl("switch@0x105ee82d out of table"); return;
  }
L_105ee834:;
  /* 105ee834 jmp dword ptr [ecx*4 + 0x105ee938] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x105ee938)))); return;
  /* 105ee83b nop  */
  /* nop */
L_105ee83c:;
  /* 105ee83c jmp dword ptr [ecx*4 + 0x105ee8bc] */
  switch (ECX) {
    case 0: goto L_105ee91f;
    case 1: goto L_105ee90c;
    case 2: goto L_105ee904;
    case 3: goto L_105ee8fc;
    case 4: goto L_105ee8f4;
    case 5: goto L_105ee8ec;
    case 6: goto L_105ee8e4;
    case 7: goto L_105ee8dc;
    default: x86_unimpl("switch@0x105ee83c out of table"); return;
  }
  /* 105ee843 nop  */
  /* nop */
L_105ee850:;
  /* 105ee850 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 105ee852 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 105ee854 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 105ee856 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 105ee859 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 105ee85c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 105ee85f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 105ee862 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 105ee865 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee868 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee86b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ee86e jb 0x105ee83c */
  if (C.cf) goto L_105ee83c;
  /* 105ee870 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 105ee872 jmp dword ptr [edx*4 + 0x105ee928] */
  switch (EDX) {
    case 0: goto L_105ee938;
    case 1: goto L_105ee940;
    case 2: goto L_105ee94c;
    case 3: goto L_105ee960;
    default: x86_unimpl("switch@0x105ee872 out of table"); return;
  }
  /* 105ee879 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_105ee87c:;
  /* 105ee87c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 105ee87e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 105ee880 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 105ee882 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 105ee885 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 105ee888 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 105ee88b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee88e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee891 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ee894 jb 0x105ee83c */
  if (C.cf) goto L_105ee83c;
  /* 105ee896 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 105ee898 jmp dword ptr [edx*4 + 0x105ee928] */
  switch (EDX) {
    case 0: goto L_105ee938;
    case 1: goto L_105ee940;
    case 2: goto L_105ee94c;
    case 3: goto L_105ee960;
    default: x86_unimpl("switch@0x105ee898 out of table"); return;
  }
  /* 105ee89f nop  */
  /* nop */
L_105ee8a0:;
  /* 105ee8a0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 105ee8a2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 105ee8a4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 105ee8a6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 105ee8a7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 105ee8aa inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 105ee8ab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ee8ae jb 0x105ee83c */
  if (C.cf) goto L_105ee83c;
  /* 105ee8b0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 105ee8b2 jmp dword ptr [edx*4 + 0x105ee928] */
  switch (EDX) {
    case 0: goto L_105ee938;
    case 1: goto L_105ee940;
    case 2: goto L_105ee94c;
    case 3: goto L_105ee960;
    default: x86_unimpl("switch@0x105ee8b2 out of table"); return;
  }
  /* 105ee8b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_105ee8dc:;
  /* 105ee8dc mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 105ee8e0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_105ee8e4:;
  /* 105ee8e4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 105ee8e8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_105ee8ec:;
  /* 105ee8ec mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 105ee8f0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_105ee8f4:;
  /* 105ee8f4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 105ee8f8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_105ee8fc:;
  /* 105ee8fc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 105ee900 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_105ee904:;
  /* 105ee904 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 105ee908 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_105ee90c:;
  /* 105ee90c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 105ee910 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 105ee914 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 105ee91b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 105ee91d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_105ee91f:;
  /* 105ee91f jmp dword ptr [edx*4 + 0x105ee928] */
  switch (EDX) {
    case 0: goto L_105ee938;
    case 1: goto L_105ee940;
    case 2: goto L_105ee94c;
    case 3: goto L_105ee960;
    default: x86_unimpl("switch@0x105ee91f out of table"); return;
  }
  /* 105ee926 mov edi, edi */
  EDI = (EDI);
L_105ee938:;
  /* 105ee938 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ee93b pop esi */
  ESI = (pop32());
  /* 105ee93c pop edi */
  EDI = (pop32());
  /* 105ee93d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 105ee93e ret  */
  ESPCHK(0x105ee7e0u, _esp0);
  ESP += 4; return;
  /* 105ee93f nop  */
  /* nop */
L_105ee940:;
  /* 105ee940 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 105ee942 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 105ee944 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ee947 pop esi */
  ESI = (pop32());
  /* 105ee948 pop edi */
  EDI = (pop32());
  /* 105ee949 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 105ee94a ret  */
  ESPCHK(0x105ee7e0u, _esp0);
  ESP += 4; return;
  /* 105ee94b nop  */
  /* nop */
L_105ee94c:;
  /* 105ee94c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 105ee94e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 105ee950 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 105ee953 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 105ee956 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ee959 pop esi */
  ESI = (pop32());
  /* 105ee95a pop edi */
  EDI = (pop32());
  /* 105ee95b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 105ee95c ret  */
  ESPCHK(0x105ee7e0u, _esp0);
  ESP += 4; return;
  /* 105ee95d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_105ee960:;
  /* 105ee960 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 105ee962 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 105ee964 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 105ee967 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 105ee96a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 105ee96d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 105ee970 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ee973 pop esi */
  ESI = (pop32());
  /* 105ee974 pop edi */
  EDI = (pop32());
  /* 105ee975 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 105ee976 ret  */
  ESPCHK(0x105ee7e0u, _esp0);
  ESP += 4; return;
  /* 105ee977 nop  */
  /* nop */
L_105ee978:;
  /* 105ee978 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 105ee97c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 105ee980 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 105ee986 jne 0x105ee9ac */
  if (!C.zf) goto L_105ee9ac;
  /* 105ee988 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 105ee98b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 105ee98e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ee991 jb 0x105ee9a0 */
  if (C.cf) goto L_105ee9a0;
  /* 105ee993 std  */
  C.df=1;
  /* 105ee994 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 105ee996 cld  */
  C.df=0;
  /* 105ee997 jmp dword ptr [edx*4 + 0x105eeac0] */
  switch (EDX) {
    case 0: goto L_105eead0;
    case 1: goto L_105eead8;
    case 2: goto L_105eeae8;
    case 3: goto L_105eeafc;
    default: x86_unimpl("switch@0x105ee997 out of table"); return;
  }
  /* 105ee99e mov edi, edi */
  EDI = (EDI);
L_105ee9a0:;
  /* 105ee9a0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 105ee9a2 jmp dword ptr [ecx*4 + 0x105eea70] */
  switch (ECX) {
    case 0: goto L_105eeab7;
    default: x86_unimpl("switch@0x105ee9a2 out of table"); return;
  }
  /* 105ee9a9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_105ee9ac:;
  /* 105ee9ac mov eax, edi */
  EAX = (EDI);
  /* 105ee9ae mov edx, 3 */
  EDX = (0x3u);
  /* 105ee9b3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ee9b6 jb 0x105ee9c4 */
  if (C.cf) goto L_105ee9c4;
  /* 105ee9b8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 105ee9bb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ee9bd jmp dword ptr [eax*4 + 0x105ee9c8] */
  switch (EAX) {
    case 1: goto L_105ee9d8;
    case 2: goto L_105ee9f8;
    case 3: goto L_105eea20;
    default: x86_unimpl("switch@0x105ee9bd out of table"); return;
  }
L_105ee9c4:;
  /* 105ee9c4 jmp dword ptr [ecx*4 + 0x105eeac0] */
  switch (ECX) {
    case 0: goto L_105eead0;
    case 1: goto L_105eead8;
    case 2: goto L_105eeae8;
    case 3: goto L_105eeafc;
    default: x86_unimpl("switch@0x105ee9c4 out of table"); return;
  }
  /* 105ee9cb nop  */
  /* nop */
L_105ee9d8:;
  /* 105ee9d8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 105ee9db and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 105ee9dd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 105ee9e0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 105ee9e1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 105ee9e4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 105ee9e5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ee9e8 jb 0x105ee9a0 */
  if (C.cf) goto L_105ee9a0;
  /* 105ee9ea std  */
  C.df=1;
  /* 105ee9eb rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 105ee9ed cld  */
  C.df=0;
  /* 105ee9ee jmp dword ptr [edx*4 + 0x105eeac0] */
  switch (EDX) {
    case 0: goto L_105eead0;
    case 1: goto L_105eead8;
    case 2: goto L_105eeae8;
    case 3: goto L_105eeafc;
    default: x86_unimpl("switch@0x105ee9ee out of table"); return;
  }
  /* 105ee9f5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_105ee9f8:;
  /* 105ee9f8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 105ee9fb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 105ee9fd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 105eea00 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 105eea03 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 105eea06 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 105eea09 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 105eea0c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 105eea0f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eea12 jb 0x105ee9a0 */
  if (C.cf) goto L_105ee9a0;
  /* 105eea14 std  */
  C.df=1;
  /* 105eea15 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 105eea17 cld  */
  C.df=0;
  /* 105eea18 jmp dword ptr [edx*4 + 0x105eeac0] */
  switch (EDX) {
    case 0: goto L_105eead0;
    case 1: goto L_105eead8;
    case 2: goto L_105eeae8;
    case 3: goto L_105eeafc;
    default: x86_unimpl("switch@0x105eea18 out of table"); return;
  }
  /* 105eea1f nop  */
  /* nop */
L_105eea20:;
  /* 105eea20 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 105eea23 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 105eea25 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 105eea28 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 105eea2b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 105eea2e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 105eea31 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 105eea34 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 105eea37 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 105eea3a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 105eea3d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_105eea40:;
  /* 105eea40 jb 0x105ee9a0 */
  if (C.cf) goto L_105ee9a0;
  /* 105eea46 std  */
  C.df=1;
  /* 105eea47 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 105eea49 cld  */
  C.df=0;
  /* 105eea4a jmp dword ptr [edx*4 + 0x105eeac0] */
  switch (EDX) {
    case 0: goto L_105eead0;
    case 1: goto L_105eead8;
    case 2: goto L_105eeae8;
    case 3: goto L_105eeafc;
    default: x86_unimpl("switch@0x105eea4a out of table"); return;
  }
  /* 105eea51 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 105eea54 je 0x105eea40 */
  if (C.zf) goto L_105eea40;
  /* 105eea56 pop esi */
  ESI = (pop32());
  /* 105eea57 adc byte ptr [edx + ebp*8 + 0x5e], bh */
  { uint32_t _a=(r8((uint32_t)(EDX + EBP*8 + 0x5e))),_b=(C.b.b.h),_r=_a+_b+C.cf; w8((uint32_t)(EDX + EBP*8 + 0x5e), (_r)); fl_add(_a,_b,_r,8); }
  /* 105eea5b adc byte ptr [edx + ebp*8 - 0x1573efa2], al */
  { uint32_t _a=(r8((uint32_t)(EDX + EBP*8 + -0x1573efa2))),_b=(AL),_r=_a+_b+C.cf; w8((uint32_t)(EDX + EBP*8 + -0x1573efa2), (_r)); fl_add(_a,_b,_r,8); }
  /* 105eea62 pop esi */
  ESI = (pop32());
  /* 105eea63 adc byte ptr [edx + ebp*8 - 0x1563efa2], dl */
  { uint32_t _a=(r8((uint32_t)(EDX + EBP*8 + -0x1563efa2))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(EDX + EBP*8 + -0x1563efa2), (_r)); fl_add(_a,_b,_r,8); }
  /* 105eea6a pop esi */
  ESI = (pop32());
  /* 105eea6c movsb byte ptr es:[edi], byte ptr [esi] */
  w8(EDI, r8(ESI)); ESI+=(C.df?-1:1); EDI+=(C.df?-1:1);
  /* 105eea6e pop esi */
  ESI = (pop32());
  /* 105eea74 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 105eea78 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 105eea7c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 105eea80 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 105eea84 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 105eea88 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 105eea8c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 105eea90 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 105eea94 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 105eea98 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 105eea9c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 105eeaa0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 105eeaa4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 105eeaa8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 105eeaac lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 105eeab3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 105eeab5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_105eeab7:;
  /* 105eeab7 jmp dword ptr [edx*4 + 0x105eeac0] */
  switch (EDX) {
    case 0: goto L_105eead0;
    case 1: goto L_105eead8;
    case 2: goto L_105eeae8;
    case 3: goto L_105eeafc;
    default: x86_unimpl("switch@0x105eeab7 out of table"); return;
  }
  /* 105eeabe mov edi, edi */
  EDI = (EDI);
L_105eead0:;
  /* 105eead0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105eead3 pop esi */
  ESI = (pop32());
  /* 105eead4 pop edi */
  EDI = (pop32());
  /* 105eead5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 105eead6 ret  */
  ESPCHK(0x105ee7e0u, _esp0);
  ESP += 4; return;
  /* 105eead7 nop  */
  /* nop */
L_105eead8:;
  /* 105eead8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 105eeadb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 105eeade mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105eeae1 pop esi */
  ESI = (pop32());
  /* 105eeae2 pop edi */
  EDI = (pop32());
  /* 105eeae3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 105eeae4 ret  */
  ESPCHK(0x105ee7e0u, _esp0);
  ESP += 4; return;
  /* 105eeae5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_105eeae8:;
  /* 105eeae8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 105eeaeb mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 105eeaee mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 105eeaf1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 105eeaf4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105eeaf7 pop esi */
  ESI = (pop32());
  /* 105eeaf8 pop edi */
  EDI = (pop32());
  /* 105eeaf9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 105eeafa ret  */
  ESPCHK(0x105ee7e0u, _esp0);
  ESP += 4; return;
  /* 105eeafb nop  */
  /* nop */
L_105eeafc:;
  /* 105eeafc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 105eeaff mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 105eeb02 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 105eeb05 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 105eeb08 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 105eeb0b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 105eeb0e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105eeb11 pop esi */
  ESI = (pop32());
  /* 105eeb12 pop edi */
  EDI = (pop32());
  /* 105eeb13 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 105eeb14 ret  */
  ESPCHK(0x105ee7e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb20 @ 0x105eeb20 (421 bytes, 148 insns) */
void f_105eeb20(void) {
  FTRACE(0x105eeb20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105eeb20 push ebp */
  push32((uint32_t)(EBP));
  /* 105eeb21 mov ebp, esp */
  EBP = (ESP);
  /* 105eeb23 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 105eeb25 push 0x1060c7e0 */
  push32((uint32_t)(0x1060c7e0u));
  /* 105eeb2a push 0x105f1710 */
  push32((uint32_t)(0x105f1710u));
  /* 105eeb2f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 105eeb35 push eax */
  push32((uint32_t)(EAX));
  /* 105eeb36 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 105eeb3d add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105eeb40 push ebx */
  push32((uint32_t)(EBX));
  /* 105eeb41 push esi */
  push32((uint32_t)(ESI));
  /* 105eeb42 push edi */
  push32((uint32_t)(EDI));
  /* 105eeb43 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 105eeb46 cmp dword ptr [0x106109d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106109d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eeb4d jne 0x105eeb9e */
  if (!C.zf) goto L_105eeb9e;
  /* 105eeb4f lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 105eeb52 push eax */
  push32((uint32_t)(EAX));
  /* 105eeb53 push 1 */
  push32((uint32_t)(0x1u));
  /* 105eeb55 push 0x1060c7d8 */
  push32((uint32_t)(0x1060c7d8u));
  /* 105eeb5a push 1 */
  push32((uint32_t)(0x1u));
  /* 105eeb5c call dword ptr [0x106132dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132dc))), 0x105eeb62u);
  /* 105eeb62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105eeb64 je 0x105eeb72 */
  if (C.zf) goto L_105eeb72;
  /* 105eeb66 mov dword ptr [0x106109d8], 1 */
  w32((uint32_t)(0x106109d8), (0x1u));
  /* 105eeb70 jmp 0x105eeb9e */
  goto L_105eeb9e;
L_105eeb72:;
  /* 105eeb72 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 105eeb75 push ecx */
  push32((uint32_t)(ECX));
  /* 105eeb76 push 1 */
  push32((uint32_t)(0x1u));
  /* 105eeb78 push 0x1060c7d4 */
  push32((uint32_t)(0x1060c7d4u));
  /* 105eeb7d push 1 */
  push32((uint32_t)(0x1u));
  /* 105eeb7f push 0 */
  push32((uint32_t)(0x0u));
  /* 105eeb81 call dword ptr [0x10613290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613290))), 0x105eeb87u);
  /* 105eeb87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105eeb89 je 0x105eeb97 */
  if (C.zf) goto L_105eeb97;
  /* 105eeb8b mov dword ptr [0x106109d8], 2 */
  w32((uint32_t)(0x106109d8), (0x2u));
  /* 105eeb95 jmp 0x105eeb9e */
  goto L_105eeb9e;
L_105eeb97:;
  /* 105eeb97 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105eeb99 jmp 0x105eecc8 */
  goto L_105eecc8;
L_105eeb9e:;
  /* 105eeb9e cmp dword ptr [0x106109d8], 2 */
  { uint32_t _a=(r32((uint32_t)(0x106109d8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eeba5 jne 0x105eebd5 */
  if (!C.zf) goto L_105eebd5;
  /* 105eeba7 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eebab jne 0x105eebb6 */
  if (!C.zf) goto L_105eebb6;
  /* 105eebad mov edx, dword ptr [0x106109c0] */
  EDX = (r32((uint32_t)(0x106109c0)));
  /* 105eebb3 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_105eebb6:;
  /* 105eebb6 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105eebb9 push eax */
  push32((uint32_t)(EAX));
  /* 105eebba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105eebbd push ecx */
  push32((uint32_t)(ECX));
  /* 105eebbe mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105eebc1 push edx */
  push32((uint32_t)(EDX));
  /* 105eebc2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105eebc5 push eax */
  push32((uint32_t)(EAX));
  /* 105eebc6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 105eebc9 push ecx */
  push32((uint32_t)(ECX));
  /* 105eebca call dword ptr [0x10613290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613290))), 0x105eebd0u);
  /* 105eebd0 jmp 0x105eecc8 */
  goto L_105eecc8;
L_105eebd5:;
  /* 105eebd5 cmp dword ptr [0x106109d8], 1 */
  { uint32_t _a=(r32((uint32_t)(0x106109d8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eebdc jne 0x105eecc6 */
  if (!C.zf) goto L_105eecc6;
  /* 105eebe2 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eebe6 jne 0x105eebf1 */
  if (!C.zf) goto L_105eebf1;
  /* 105eebe8 mov edx, dword ptr [0x106109d0] */
  EDX = (r32((uint32_t)(0x106109d0)));
  /* 105eebee mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_105eebf1:;
  /* 105eebf1 push 0 */
  push32((uint32_t)(0x0u));
  /* 105eebf3 push 0 */
  push32((uint32_t)(0x0u));
  /* 105eebf5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105eebf8 push eax */
  push32((uint32_t)(EAX));
  /* 105eebf9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105eebfc push ecx */
  push32((uint32_t)(ECX));
  /* 105eebfd mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 105eec00 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 105eec02 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105eec04 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 105eec07 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eec0a push edx */
  push32((uint32_t)(EDX));
  /* 105eec0b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105eec0e push eax */
  push32((uint32_t)(EAX));
  /* 105eec0f call dword ptr [0x1061328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1061328c))), 0x105eec15u);
  /* 105eec15 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 105eec18 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eec1c jne 0x105eec25 */
  if (!C.zf) goto L_105eec25;
  /* 105eec1e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105eec20 jmp 0x105eecc8 */
  goto L_105eecc8;
L_105eec25:;
  /* 105eec25 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105eec2c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 105eec2f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 105eec31 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eec34 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 105eec36 call 0x105e9030 */
  push32(0x105eec3bu); f_105e9030();
  /* 105eec3b mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 105eec3e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 105eec41 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105eec44 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 105eec47 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 105eec4a shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 105eec4c push edx */
  push32((uint32_t)(EDX));
  /* 105eec4d push 0 */
  push32((uint32_t)(0x0u));
  /* 105eec4f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105eec52 push eax */
  push32((uint32_t)(EAX));
  /* 105eec53 call 0x105ea5b0 */
  push32(0x105eec58u); f_105ea5b0();
  /* 105eec58 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105eec5b mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 105eec62 jmp 0x105eec7b */
  goto L_105eec7b;
  /* 105eec64 mov eax, 1 */
  EAX = (0x1u);
  /* 105eec69 ret  */
  ESPCHK(0x105eeb20u, _esp0);
  ESP += 4; return;
  /* 105eec6a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 105eec6d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 105eec74 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_105eec7b:;
  /* 105eec7b cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eec7f jne 0x105eec85 */
  if (!C.zf) goto L_105eec85;
  /* 105eec81 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105eec83 jmp 0x105eecc8 */
  goto L_105eecc8;
L_105eec85:;
  /* 105eec85 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105eec88 push ecx */
  push32((uint32_t)(ECX));
  /* 105eec89 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 105eec8c push edx */
  push32((uint32_t)(EDX));
  /* 105eec8d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105eec90 push eax */
  push32((uint32_t)(EAX));
  /* 105eec91 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105eec94 push ecx */
  push32((uint32_t)(ECX));
  /* 105eec95 push 1 */
  push32((uint32_t)(0x1u));
  /* 105eec97 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105eec9a push edx */
  push32((uint32_t)(EDX));
  /* 105eec9b call dword ptr [0x1061328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1061328c))), 0x105eeca1u);
  /* 105eeca1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 105eeca4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eeca8 jne 0x105eecae */
  if (!C.zf) goto L_105eecae;
  /* 105eecaa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105eecac jmp 0x105eecc8 */
  goto L_105eecc8;
L_105eecae:;
  /* 105eecae mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105eecb1 push eax */
  push32((uint32_t)(EAX));
  /* 105eecb2 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 105eecb5 push ecx */
  push32((uint32_t)(ECX));
  /* 105eecb6 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 105eecb9 push edx */
  push32((uint32_t)(EDX));
  /* 105eecba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105eecbd push eax */
  push32((uint32_t)(EAX));
  /* 105eecbe call dword ptr [0x106132dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132dc))), 0x105eecc4u);
  /* 105eecc4 jmp 0x105eecc8 */
  goto L_105eecc8;
L_105eecc6:;
  /* 105eecc6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105eecc8:;
  /* 105eecc8 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 105eeccb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105eecce mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 105eecd5 pop edi */
  EDI = (pop32());
  /* 105eecd6 pop esi */
  ESI = (pop32());
  /* 105eecd7 pop ebx */
  EBX = (pop32());
  /* 105eecd8 mov esp, ebp */
  ESP = (EBP);
  /* 105eecda pop ebp */
  EBP = (pop32());
  /* 105eecdb ret  */
  ESPCHK(0x105eeb20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ece0 @ 0x105eece0 (727 bytes, 263 insns) */
void f_105eece0(void) {
  FTRACE(0x105eece0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105eece0 push ebp */
  push32((uint32_t)(EBP));
  /* 105eece1 mov ebp, esp */
  EBP = (ESP);
  /* 105eece3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 105eece5 push 0x1060c7f0 */
  push32((uint32_t)(0x1060c7f0u));
  /* 105eecea push 0x105f1710 */
  push32((uint32_t)(0x105f1710u));
  /* 105eecef mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 105eecf5 push eax */
  push32((uint32_t)(EAX));
  /* 105eecf6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 105eecfd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105eed00 push ebx */
  push32((uint32_t)(EBX));
  /* 105eed01 push esi */
  push32((uint32_t)(ESI));
  /* 105eed02 push edi */
  push32((uint32_t)(EDI));
  /* 105eed03 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 105eed06 cmp dword ptr [0x106109dc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106109dc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eed0d jne 0x105eed66 */
  if (!C.zf) goto L_105eed66;
  /* 105eed0f push 0 */
  push32((uint32_t)(0x0u));
  /* 105eed11 push 0 */
  push32((uint32_t)(0x0u));
  /* 105eed13 push 1 */
  push32((uint32_t)(0x1u));
  /* 105eed15 push 0x1060c7d8 */
  push32((uint32_t)(0x1060c7d8u));
  /* 105eed1a push 0x100 */
  push32((uint32_t)(0x100u));
  /* 105eed1f push 0 */
  push32((uint32_t)(0x0u));
  /* 105eed21 call dword ptr [0x106132e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132e4))), 0x105eed27u);
  /* 105eed27 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105eed29 je 0x105eed37 */
  if (C.zf) goto L_105eed37;
  /* 105eed2b mov dword ptr [0x106109dc], 1 */
  w32((uint32_t)(0x106109dc), (0x1u));
  /* 105eed35 jmp 0x105eed66 */
  goto L_105eed66;
L_105eed37:;
  /* 105eed37 push 0 */
  push32((uint32_t)(0x0u));
  /* 105eed39 push 0 */
  push32((uint32_t)(0x0u));
  /* 105eed3b push 1 */
  push32((uint32_t)(0x1u));
  /* 105eed3d push 0x1060c7d4 */
  push32((uint32_t)(0x1060c7d4u));
  /* 105eed42 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 105eed47 push 0 */
  push32((uint32_t)(0x0u));
  /* 105eed49 call dword ptr [0x106132e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132e0))), 0x105eed4fu);
  /* 105eed4f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105eed51 je 0x105eed5f */
  if (C.zf) goto L_105eed5f;
  /* 105eed53 mov dword ptr [0x106109dc], 2 */
  w32((uint32_t)(0x106109dc), (0x2u));
  /* 105eed5d jmp 0x105eed66 */
  goto L_105eed66;
L_105eed5f:;
  /* 105eed5f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105eed61 jmp 0x105eefd1 */
  goto L_105eefd1;
L_105eed66:;
  /* 105eed66 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eed6a jle 0x105eed7f */
  if ((C.zf||C.sf!=C.of)) goto L_105eed7f;
  /* 105eed6c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105eed6f push eax */
  push32((uint32_t)(EAX));
  /* 105eed70 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105eed73 push ecx */
  push32((uint32_t)(ECX));
  /* 105eed74 call 0x105eeff0 */
  push32(0x105eed79u); f_105eeff0();
  /* 105eed79 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105eed7c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_105eed7f:;
  /* 105eed7f cmp dword ptr [0x106109dc], 2 */
  { uint32_t _a=(r32((uint32_t)(0x106109dc))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eed86 jne 0x105eedab */
  if (!C.zf) goto L_105eedab;
  /* 105eed88 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 105eed8b push edx */
  push32((uint32_t)(EDX));
  /* 105eed8c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105eed8f push eax */
  push32((uint32_t)(EAX));
  /* 105eed90 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105eed93 push ecx */
  push32((uint32_t)(ECX));
  /* 105eed94 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105eed97 push edx */
  push32((uint32_t)(EDX));
  /* 105eed98 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105eed9b push eax */
  push32((uint32_t)(EAX));
  /* 105eed9c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105eed9f push ecx */
  push32((uint32_t)(ECX));
  /* 105eeda0 call dword ptr [0x106132e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132e0))), 0x105eeda6u);
  /* 105eeda6 jmp 0x105eefd1 */
  goto L_105eefd1;
L_105eedab:;
  /* 105eedab cmp dword ptr [0x106109dc], 1 */
  { uint32_t _a=(r32((uint32_t)(0x106109dc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eedb2 jne 0x105eefcf */
  if (!C.zf) goto L_105eefcf;
  /* 105eedb8 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eedbc jne 0x105eedc7 */
  if (!C.zf) goto L_105eedc7;
  /* 105eedbe mov edx, dword ptr [0x106109d0] */
  EDX = (r32((uint32_t)(0x106109d0)));
  /* 105eedc4 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_105eedc7:;
  /* 105eedc7 push 0 */
  push32((uint32_t)(0x0u));
  /* 105eedc9 push 0 */
  push32((uint32_t)(0x0u));
  /* 105eedcb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105eedce push eax */
  push32((uint32_t)(EAX));
  /* 105eedcf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105eedd2 push ecx */
  push32((uint32_t)(ECX));
  /* 105eedd3 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 105eedd6 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 105eedd8 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105eedda and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 105eeddd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eede0 push edx */
  push32((uint32_t)(EDX));
  /* 105eede1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 105eede4 push eax */
  push32((uint32_t)(EAX));
  /* 105eede5 call dword ptr [0x1061328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1061328c))), 0x105eedebu);
  /* 105eedeb mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 105eedee cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eedf2 jne 0x105eedfb */
  if (!C.zf) goto L_105eedfb;
  /* 105eedf4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105eedf6 jmp 0x105eefd1 */
  goto L_105eefd1;
L_105eedfb:;
  /* 105eedfb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105eee02 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105eee05 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 105eee07 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eee0a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 105eee0c call 0x105e9030 */
  push32(0x105eee11u); f_105e9030();
  /* 105eee11 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 105eee14 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 105eee17 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105eee1a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 105eee1d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 105eee24 jmp 0x105eee3d */
  goto L_105eee3d;
  /* 105eee26 mov eax, 1 */
  EAX = (0x1u);
  /* 105eee2b ret  */
  ESPCHK(0x105eece0u, _esp0);
  ESP += 4; return;
  /* 105eee2c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 105eee2f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 105eee36 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_105eee3d:;
  /* 105eee3d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eee41 jne 0x105eee4a */
  if (!C.zf) goto L_105eee4a;
  /* 105eee43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105eee45 jmp 0x105eefd1 */
  goto L_105eefd1;
L_105eee4a:;
  /* 105eee4a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105eee4d push edx */
  push32((uint32_t)(EDX));
  /* 105eee4e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105eee51 push eax */
  push32((uint32_t)(EAX));
  /* 105eee52 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105eee55 push ecx */
  push32((uint32_t)(ECX));
  /* 105eee56 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105eee59 push edx */
  push32((uint32_t)(EDX));
  /* 105eee5a push 1 */
  push32((uint32_t)(0x1u));
  /* 105eee5c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 105eee5f push eax */
  push32((uint32_t)(EAX));
  /* 105eee60 call dword ptr [0x1061328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1061328c))), 0x105eee66u);
  /* 105eee66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105eee68 jne 0x105eee71 */
  if (!C.zf) goto L_105eee71;
  /* 105eee6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105eee6c jmp 0x105eefd1 */
  goto L_105eefd1;
L_105eee71:;
  /* 105eee71 push 0 */
  push32((uint32_t)(0x0u));
  /* 105eee73 push 0 */
  push32((uint32_t)(0x0u));
  /* 105eee75 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105eee78 push ecx */
  push32((uint32_t)(ECX));
  /* 105eee79 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 105eee7c push edx */
  push32((uint32_t)(EDX));
  /* 105eee7d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105eee80 push eax */
  push32((uint32_t)(EAX));
  /* 105eee81 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105eee84 push ecx */
  push32((uint32_t)(ECX));
  /* 105eee85 call dword ptr [0x106132e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132e4))), 0x105eee8bu);
  /* 105eee8b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 105eee8e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eee92 jne 0x105eee9b */
  if (!C.zf) goto L_105eee9b;
  /* 105eee94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105eee96 jmp 0x105eefd1 */
  goto L_105eefd1;
L_105eee9b:;
  /* 105eee9b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105eee9e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 105eeea4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105eeea6 je 0x105eeeeb */
  if (C.zf) goto L_105eeeeb;
  /* 105eeea8 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eeeac je 0x105eeee6 */
  if (C.zf) goto L_105eeee6;
  /* 105eeeae mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 105eeeb1 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eeeb4 jle 0x105eeebd */
  if ((C.zf||C.sf!=C.of)) goto L_105eeebd;
  /* 105eeeb6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105eeeb8 jmp 0x105eefd1 */
  goto L_105eefd1;
L_105eeebd:;
  /* 105eeebd mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 105eeec0 push ecx */
  push32((uint32_t)(ECX));
  /* 105eeec1 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105eeec4 push edx */
  push32((uint32_t)(EDX));
  /* 105eeec5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105eeec8 push eax */
  push32((uint32_t)(EAX));
  /* 105eeec9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105eeecc push ecx */
  push32((uint32_t)(ECX));
  /* 105eeecd mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105eeed0 push edx */
  push32((uint32_t)(EDX));
  /* 105eeed1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105eeed4 push eax */
  push32((uint32_t)(EAX));
  /* 105eeed5 call dword ptr [0x106132e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132e4))), 0x105eeedbu);
  /* 105eeedb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105eeedd jne 0x105eeee6 */
  if (!C.zf) goto L_105eeee6;
  /* 105eeedf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105eeee1 jmp 0x105eefd1 */
  goto L_105eefd1;
L_105eeee6:;
  /* 105eeee6 jmp 0x105eefca */
  goto L_105eefca;
L_105eeeeb:;
  /* 105eeeeb mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 105eeeee mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 105eeef1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 105eeef8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105eeefb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 105eeefd add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eef00 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 105eef02 call 0x105e9030 */
  push32(0x105eef07u); f_105e9030();
  /* 105eef07 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 105eef0a mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 105eef0d mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 105eef10 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 105eef13 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 105eef1a jmp 0x105eef33 */
  goto L_105eef33;
  /* 105eef1c mov eax, 1 */
  EAX = (0x1u);
  /* 105eef21 ret  */
  ESPCHK(0x105eece0u, _esp0);
  ESP += 4; return;
  /* 105eef22 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 105eef25 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 105eef2c mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_105eef33:;
  /* 105eef33 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eef37 jne 0x105eef40 */
  if (!C.zf) goto L_105eef40;
  /* 105eef39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105eef3b jmp 0x105eefd1 */
  goto L_105eefd1;
L_105eef40:;
  /* 105eef40 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105eef43 push eax */
  push32((uint32_t)(EAX));
  /* 105eef44 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105eef47 push ecx */
  push32((uint32_t)(ECX));
  /* 105eef48 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105eef4b push edx */
  push32((uint32_t)(EDX));
  /* 105eef4c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105eef4f push eax */
  push32((uint32_t)(EAX));
  /* 105eef50 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105eef53 push ecx */
  push32((uint32_t)(ECX));
  /* 105eef54 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105eef57 push edx */
  push32((uint32_t)(EDX));
  /* 105eef58 call dword ptr [0x106132e4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132e4))), 0x105eef5eu);
  /* 105eef5e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105eef60 jne 0x105eef66 */
  if (!C.zf) goto L_105eef66;
  /* 105eef62 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105eef64 jmp 0x105eefd1 */
  goto L_105eefd1;
L_105eef66:;
  /* 105eef66 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eef6a jne 0x105eef9a */
  if (!C.zf) goto L_105eef9a;
  /* 105eef6c push 0 */
  push32((uint32_t)(0x0u));
  /* 105eef6e push 0 */
  push32((uint32_t)(0x0u));
  /* 105eef70 push 0 */
  push32((uint32_t)(0x0u));
  /* 105eef72 push 0 */
  push32((uint32_t)(0x0u));
  /* 105eef74 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105eef77 push eax */
  push32((uint32_t)(EAX));
  /* 105eef78 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105eef7b push ecx */
  push32((uint32_t)(ECX));
  /* 105eef7c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 105eef81 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 105eef84 push edx */
  push32((uint32_t)(EDX));
  /* 105eef85 call dword ptr [0x1061327c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1061327c))), 0x105eef8bu);
  /* 105eef8b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 105eef8e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eef92 jne 0x105eef98 */
  if (!C.zf) goto L_105eef98;
  /* 105eef94 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105eef96 jmp 0x105eefd1 */
  goto L_105eefd1;
L_105eef98:;
  /* 105eef98 jmp 0x105eefca */
  goto L_105eefca;
L_105eef9a:;
  /* 105eef9a push 0 */
  push32((uint32_t)(0x0u));
  /* 105eef9c push 0 */
  push32((uint32_t)(0x0u));
  /* 105eef9e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 105eefa1 push eax */
  push32((uint32_t)(EAX));
  /* 105eefa2 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 105eefa5 push ecx */
  push32((uint32_t)(ECX));
  /* 105eefa6 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105eefa9 push edx */
  push32((uint32_t)(EDX));
  /* 105eefaa mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 105eefad push eax */
  push32((uint32_t)(EAX));
  /* 105eefae push 0x220 */
  push32((uint32_t)(0x220u));
  /* 105eefb3 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 105eefb6 push ecx */
  push32((uint32_t)(ECX));
  /* 105eefb7 call dword ptr [0x1061327c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1061327c))), 0x105eefbdu);
  /* 105eefbd mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 105eefc0 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eefc4 jne 0x105eefca */
  if (!C.zf) goto L_105eefca;
  /* 105eefc6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105eefc8 jmp 0x105eefd1 */
  goto L_105eefd1;
L_105eefca:;
  /* 105eefca mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 105eefcd jmp 0x105eefd1 */
  goto L_105eefd1;
L_105eefcf:;
  /* 105eefcf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105eefd1:;
  /* 105eefd1 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 105eefd4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105eefd7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 105eefde pop edi */
  EDI = (pop32());
  /* 105eefdf pop esi */
  ESI = (pop32());
  /* 105eefe0 pop ebx */
  EBX = (pop32());
  /* 105eefe1 mov esp, ebp */
  ESP = (EBP);
  /* 105eefe3 pop ebp */
  EBP = (pop32());
  /* 105eefe4 ret  */
  ESPCHK(0x105eece0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eff0 @ 0x105eeff0 (80 bytes, 32 insns) */
void f_105eeff0(void) {
  FTRACE(0x105eeff0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105eeff0 push ebp */
  push32((uint32_t)(EBP));
  /* 105eeff1 mov ebp, esp */
  EBP = (ESP);
  /* 105eeff3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105eeff6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105eeff9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105eeffc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105eefff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_105ef002:;
  /* 105ef002 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ef005 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ef008 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ef00b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105ef00e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105ef010 je 0x105ef027 */
  if (C.zf) goto L_105ef027;
  /* 105ef012 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef015 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 105ef018 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105ef01a je 0x105ef027 */
  if (C.zf) goto L_105ef027;
  /* 105ef01c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef01f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef022 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105ef025 jmp 0x105ef002 */
  goto L_105ef002;
L_105ef027:;
  /* 105ef027 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef02a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 105ef02d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105ef02f jne 0x105ef039 */
  if (!C.zf) goto L_105ef039;
  /* 105ef031 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef034 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ef037 jmp 0x105ef03c */
  goto L_105ef03c;
L_105ef039:;
  /* 105ef039 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_105ef03c:;
  /* 105ef03c mov esp, ebp */
  ESP = (EBP);
  /* 105ef03e pop ebp */
  EBP = (pop32());
  /* 105ef03f ret  */
  ESPCHK(0x105eeff0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f040 @ 0x105ef040 (130 bytes, 50 insns) */
void f_105ef040(void) {
  FTRACE(0x105ef040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ef040 push ebp */
  push32((uint32_t)(EBP));
  /* 105ef041 mov ebp, esp */
  EBP = (ESP);
  /* 105ef043 push ecx */
  push32((uint32_t)(ECX));
  /* 105ef044 push ebx */
  push32((uint32_t)(EBX));
  /* 105ef045 push esi */
  push32((uint32_t)(ESI));
  /* 105ef046 push edi */
  push32((uint32_t)(EDI));
  /* 105ef047 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_105ef04e:;
  /* 105ef04e cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ef052 jne 0x105ef072 */
  if (!C.zf) goto L_105ef072;
  /* 105ef054 push 0x1060c814 */
  push32((uint32_t)(0x1060c814u));
  /* 105ef059 push 0 */
  push32((uint32_t)(0x0u));
  /* 105ef05b push 0x3a */
  push32((uint32_t)(0x3au));
  /* 105ef05d push 0x1060c808 */
  push32((uint32_t)(0x1060c808u));
  /* 105ef062 push 2 */
  push32((uint32_t)(0x2u));
  /* 105ef064 call 0x105e3e30 */
  push32(0x105ef069u); f_105e3e30();
  /* 105ef069 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef06c cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ef06f jne 0x105ef072 */
  if (!C.zf) goto L_105ef072;
  /* 105ef071 int3  */
  x86_unimpl("int3 @ 0x105ef071");
L_105ef072:;
  /* 105ef072 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ef074 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ef076 jne 0x105ef04e */
  if (!C.zf) goto L_105ef04e;
  /* 105ef078 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef07b mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 105ef07e and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 105ef081 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105ef083 je 0x105ef091 */
  if (C.zf) goto L_105ef091;
  /* 105ef085 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef088 mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 105ef08f jmp 0x105ef0b8 */
  goto L_105ef0b8;
L_105ef091:;
  /* 105ef091 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef094 push ecx */
  push32((uint32_t)(ECX));
  /* 105ef095 call 0x105e9e70 */
  push32(0x105ef09au); f_105e9e70();
  /* 105ef09a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef09d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef0a0 push edx */
  push32((uint32_t)(EDX));
  /* 105ef0a1 call 0x105ef0d0 */
  push32(0x105ef0a6u); f_105ef0d0();
  /* 105ef0a6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef0a9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105ef0ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef0af push eax */
  push32((uint32_t)(EAX));
  /* 105ef0b0 call 0x105e9ee0 */
  push32(0x105ef0b5u); f_105e9ee0();
  /* 105ef0b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105ef0b8:;
  /* 105ef0b8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef0bb pop edi */
  EDI = (pop32());
  /* 105ef0bc pop esi */
  ESI = (pop32());
  /* 105ef0bd pop ebx */
  EBX = (pop32());
  /* 105ef0be mov esp, ebp */
  ESP = (EBP);
  /* 105ef0c0 pop ebp */
  EBP = (pop32());
  /* 105ef0c1 ret  */
  ESPCHK(0x105ef040u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f0d0 @ 0x105ef0d0 (190 bytes, 67 insns) */
void f_105ef0d0(void) {
  FTRACE(0x105ef0d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ef0d0 push ebp */
  push32((uint32_t)(EBP));
  /* 105ef0d1 mov ebp, esp */
  EBP = (ESP);
  /* 105ef0d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ef0d6 push ebx */
  push32((uint32_t)(EBX));
  /* 105ef0d7 push esi */
  push32((uint32_t)(ESI));
  /* 105ef0d8 push edi */
  push32((uint32_t)(EDI));
  /* 105ef0d9 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 105ef0e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef0e3 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_105ef0e6:;
  /* 105ef0e6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ef0ea jne 0x105ef10a */
  if (!C.zf) goto L_105ef10a;
  /* 105ef0ec push 0x1060bc30 */
  push32((uint32_t)(0x1060bc30u));
  /* 105ef0f1 push 0 */
  push32((uint32_t)(0x0u));
  /* 105ef0f3 push 0x77 */
  push32((uint32_t)(0x77u));
  /* 105ef0f5 push 0x1060c808 */
  push32((uint32_t)(0x1060c808u));
  /* 105ef0fa push 2 */
  push32((uint32_t)(0x2u));
  /* 105ef0fc call 0x105e3e30 */
  push32(0x105ef101u); f_105e3e30();
  /* 105ef101 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef104 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ef107 jne 0x105ef10a */
  if (!C.zf) goto L_105ef10a;
  /* 105ef109 int3  */
  x86_unimpl("int3 @ 0x105ef109");
L_105ef10a:;
  /* 105ef10a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105ef10c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105ef10e jne 0x105ef0e6 */
  if (!C.zf) goto L_105ef0e6;
  /* 105ef110 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ef113 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 105ef116 and eax, 0x83 */
  { uint32_t _r=(EAX)&(0x83u); EAX = (_r); fl_logic(_r,32); }
  /* 105ef11b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ef11d je 0x105ef17a */
  if (C.zf) goto L_105ef17a;
  /* 105ef11f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ef122 push ecx */
  push32((uint32_t)(ECX));
  /* 105ef123 call 0x105edb70 */
  push32(0x105ef128u); f_105edb70();
  /* 105ef128 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef12b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105ef12e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ef131 push edx */
  push32((uint32_t)(EDX));
  /* 105ef132 call 0x105f1920 */
  push32(0x105ef137u); f_105f1920();
  /* 105ef137 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef13a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ef13d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 105ef140 push ecx */
  push32((uint32_t)(ECX));
  /* 105ef141 call 0x105f17f0 */
  push32(0x105ef146u); f_105f17f0();
  /* 105ef146 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef149 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ef14b jge 0x105ef156 */
  if ((C.sf==C.of)) goto L_105ef156;
  /* 105ef14d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 105ef154 jmp 0x105ef17a */
  goto L_105ef17a;
L_105ef156:;
  /* 105ef156 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ef159 cmp dword ptr [edx + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ef15d je 0x105ef17a */
  if (C.zf) goto L_105ef17a;
  /* 105ef15f push 2 */
  push32((uint32_t)(0x2u));
  /* 105ef161 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ef164 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 105ef167 push ecx */
  push32((uint32_t)(ECX));
  /* 105ef168 call 0x105e6920 */
  push32(0x105ef16du); f_105e6920();
  /* 105ef16d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef170 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ef173 mov dword ptr [edx + 0x1c], 0 */
  w32((uint32_t)(EDX + 0x1c), (0x0u));
L_105ef17a:;
  /* 105ef17a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ef17d mov dword ptr [eax + 0xc], 0 */
  w32((uint32_t)(EAX + 0xc), (0x0u));
  /* 105ef184 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef187 pop edi */
  EDI = (pop32());
  /* 105ef188 pop esi */
  ESI = (pop32());
  /* 105ef189 pop ebx */
  EBX = (pop32());
  /* 105ef18a mov esp, ebp */
  ESP = (EBP);
  /* 105ef18c pop ebp */
  EBP = (pop32());
  /* 105ef18d ret  */
  ESPCHK(0x105ef0d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f190 @ 0x105ef190 (210 bytes, 63 insns) */
void f_105ef190(void) {
  FTRACE(0x105ef190u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ef190 push ebp */
  push32((uint32_t)(EBP));
  /* 105ef191 mov ebp, esp */
  EBP = (ESP);
  /* 105ef193 push ecx */
  push32((uint32_t)(ECX));
  /* 105ef194 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef197 cmp eax, dword ptr [0x106122bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x106122bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ef19d jae 0x105ef1c1 */
  if (!C.cf) goto L_105ef1c1;
  /* 105ef19f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef1a2 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 105ef1a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef1a8 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 105ef1ab imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ef1ae mov eax, dword ptr [ecx*4 + 0x10612180] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10612180)));
  /* 105ef1b5 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 105ef1ba and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 105ef1bd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105ef1bf jne 0x105ef1d4 */
  if (!C.zf) goto L_105ef1d4;
L_105ef1c1:;
  /* 105ef1c1 call 0x105ed400 */
  push32(0x105ef1c6u); f_105ed400();
  /* 105ef1c6 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 105ef1cc or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105ef1cf jmp 0x105ef25e */
  goto L_105ef25e;
L_105ef1d4:;
  /* 105ef1d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef1d7 push edx */
  push32((uint32_t)(EDX));
  /* 105ef1d8 call 0x105ed930 */
  push32(0x105ef1ddu); f_105ed930();
  /* 105ef1dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef1e0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef1e3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 105ef1e6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef1e9 and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 105ef1ec imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105ef1ef mov edx, dword ptr [eax*4 + 0x10612180] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10612180)));
  /* 105ef1f6 movsx eax, byte ptr [edx + ecx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + ECX*1 + 0x4))));
  /* 105ef1fb and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 105ef1fe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ef200 je 0x105ef23d */
  if (C.zf) goto L_105ef23d;
  /* 105ef202 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef205 push ecx */
  push32((uint32_t)(ECX));
  /* 105ef206 call 0x105ed7b0 */
  push32(0x105ef20bu); f_105ed7b0();
  /* 105ef20b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef20e push eax */
  push32((uint32_t)(EAX));
  /* 105ef20f call dword ptr [0x106132e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132e8))), 0x105ef215u);
  /* 105ef215 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ef217 jne 0x105ef224 */
  if (!C.zf) goto L_105ef224;
  /* 105ef219 call dword ptr [0x10613250] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613250))), 0x105ef21fu);
  /* 105ef21f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105ef222 jmp 0x105ef22b */
  goto L_105ef22b;
L_105ef224:;
  /* 105ef224 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_105ef22b:;
  /* 105ef22b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ef22f jne 0x105ef233 */
  if (!C.zf) goto L_105ef233;
  /* 105ef231 jmp 0x105ef24f */
  goto L_105ef24f;
L_105ef233:;
  /* 105ef233 call 0x105ed410 */
  push32(0x105ef238u); f_105ed410();
  /* 105ef238 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef23b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_105ef23d:;
  /* 105ef23d call 0x105ed400 */
  push32(0x105ef242u); f_105ed400();
  /* 105ef242 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 105ef248 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_105ef24f:;
  /* 105ef24f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef252 push eax */
  push32((uint32_t)(EAX));
  /* 105ef253 call 0x105ed9c0 */
  push32(0x105ef258u); f_105ed9c0();
  /* 105ef258 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef25b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_105ef25e:;
  /* 105ef25e mov esp, ebp */
  ESP = (EBP);
  /* 105ef260 pop ebp */
  EBP = (pop32());
  /* 105ef261 ret  */
  ESPCHK(0x105ef190u, _esp0);
  ESP += 4; return;
}

/* ___init_time @ 0x105ef270 (219 bytes, 64 insns) */
void f_105ef270(void) {
  FTRACE(0x105ef270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ef270 push ebp */
  push32((uint32_t)(EBP));
  /* 105ef271 mov ebp, esp */
  EBP = (ESP);
  /* 105ef273 push ecx */
  push32((uint32_t)(ECX));
  /* 105ef274 cmp dword ptr [0x106109cc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106109cc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ef27b je 0x105ef311 */
  if (C.zf) goto L_105ef311;
  /* 105ef281 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 105ef283 push 0x1060c824 */
  push32((uint32_t)(0x1060c824u));
  /* 105ef288 push 2 */
  push32((uint32_t)(0x2u));
  /* 105ef28a push 0xac */
  push32((uint32_t)(0xacu));
  /* 105ef28f push 1 */
  push32((uint32_t)(0x1u));
  /* 105ef291 call 0x105e62a0 */
  push32(0x105ef296u); f_105e62a0();
  /* 105ef296 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef299 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105ef29c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ef2a0 jne 0x105ef2ac */
  if (!C.zf) goto L_105ef2ac;
  /* 105ef2a2 mov eax, 1 */
  EAX = (0x1u);
  /* 105ef2a7 jmp 0x105ef347 */
  goto L_105ef347;
L_105ef2ac:;
  /* 105ef2ac mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef2af push eax */
  push32((uint32_t)(EAX));
  /* 105ef2b0 call 0x105ef350 */
  push32(0x105ef2b5u); f_105ef350();
  /* 105ef2b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef2b8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105ef2ba je 0x105ef2dd */
  if (C.zf) goto L_105ef2dd;
  /* 105ef2bc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef2bf push ecx */
  push32((uint32_t)(ECX));
  /* 105ef2c0 call 0x105ef8e0 */
  push32(0x105ef2c5u); f_105ef8e0();
  /* 105ef2c5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef2c8 push 2 */
  push32((uint32_t)(0x2u));
  /* 105ef2ca mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef2cd push edx */
  push32((uint32_t)(EDX));
  /* 105ef2ce call 0x105e6920 */
  push32(0x105ef2d3u); f_105e6920();
  /* 105ef2d3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef2d6 mov eax, 1 */
  EAX = (0x1u);
  /* 105ef2db jmp 0x105ef347 */
  goto L_105ef347;
L_105ef2dd:;
  /* 105ef2dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef2e0 mov dword ptr [0x1060fca8], eax */
  w32((uint32_t)(0x1060fca8), (EAX));
  /* 105ef2e5 mov ecx, dword ptr [0x106109e0] */
  ECX = (r32((uint32_t)(0x106109e0)));
  /* 105ef2eb push ecx */
  push32((uint32_t)(ECX));
  /* 105ef2ec call 0x105ef8e0 */
  push32(0x105ef2f1u); f_105ef8e0();
  /* 105ef2f1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef2f4 push 2 */
  push32((uint32_t)(0x2u));
  /* 105ef2f6 mov edx, dword ptr [0x106109e0] */
  EDX = (r32((uint32_t)(0x106109e0)));
  /* 105ef2fc push edx */
  push32((uint32_t)(EDX));
  /* 105ef2fd call 0x105e6920 */
  push32(0x105ef302u); f_105e6920();
  /* 105ef302 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef305 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef308 mov dword ptr [0x106109e0], eax */
  w32((uint32_t)(0x106109e0), (EAX));
  /* 105ef30d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ef30f jmp 0x105ef347 */
  goto L_105ef347;
L_105ef311:;
  /* 105ef311 mov dword ptr [0x1060fca8], 0x1060fcb0 */
  w32((uint32_t)(0x1060fca8), (0x1060fcb0u));
  /* 105ef31b mov ecx, dword ptr [0x106109e0] */
  ECX = (r32((uint32_t)(0x106109e0)));
  /* 105ef321 push ecx */
  push32((uint32_t)(ECX));
  /* 105ef322 call 0x105ef8e0 */
  push32(0x105ef327u); f_105ef8e0();
  /* 105ef327 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef32a push 2 */
  push32((uint32_t)(0x2u));
  /* 105ef32c mov edx, dword ptr [0x106109e0] */
  EDX = (r32((uint32_t)(0x106109e0)));
  /* 105ef332 push edx */
  push32((uint32_t)(EDX));
  /* 105ef333 call 0x105e6920 */
  push32(0x105ef338u); f_105e6920();
  /* 105ef338 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef33b mov dword ptr [0x106109e0], 0 */
  w32((uint32_t)(0x106109e0), (0x0u));
  /* 105ef345 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105ef347:;
  /* 105ef347 mov esp, ebp */
  ESP = (EBP);
  /* 105ef349 pop ebp */
  EBP = (pop32());
  /* 105ef34a ret  */
  ESPCHK(0x105ef270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f350 @ 0x105ef350 (1423 bytes, 533 insns) */
void f_105ef350(void) {
  FTRACE(0x105ef350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ef350 push ebp */
  push32((uint32_t)(EBP));
  /* 105ef351 mov ebp, esp */
  EBP = (ESP);
  /* 105ef353 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105ef356 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 105ef35d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105ef35f mov ax, word ptr [0x10610a1a] */
  AX = (r16((uint32_t)(0x10610a1a)));
  /* 105ef365 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105ef368 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105ef36a mov cx, word ptr [0x10610a1c] */
  CX = (r16((uint32_t)(0x10610a1c)));
  /* 105ef371 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105ef374 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ef378 jne 0x105ef382 */
  if (!C.zf) goto L_105ef382;
  /* 105ef37a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105ef37d jmp 0x105ef8db */
  goto L_105ef8db;
L_105ef382:;
  /* 105ef382 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef385 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef388 push edx */
  push32((uint32_t)(EDX));
  /* 105ef389 push 0x31 */
  push32((uint32_t)(0x31u));
  /* 105ef38b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef38e push eax */
  push32((uint32_t)(EAX));
  /* 105ef38f push 1 */
  push32((uint32_t)(0x1u));
  /* 105ef391 call 0x105f2e30 */
  push32(0x105ef396u); f_105f2e30();
  /* 105ef396 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef399 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ef39c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ef39e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105ef3a1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef3a4 add edx, 8 */
  { uint32_t _a=(EDX),_b=(0x8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef3a7 push edx */
  push32((uint32_t)(EDX));
  /* 105ef3a8 push 0x32 */
  push32((uint32_t)(0x32u));
  /* 105ef3aa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef3ad push eax */
  push32((uint32_t)(EAX));
  /* 105ef3ae push 1 */
  push32((uint32_t)(0x1u));
  /* 105ef3b0 call 0x105f2e30 */
  push32(0x105ef3b5u); f_105f2e30();
  /* 105ef3b5 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef3b8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ef3bb or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ef3bd mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105ef3c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef3c3 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef3c6 push edx */
  push32((uint32_t)(EDX));
  /* 105ef3c7 push 0x33 */
  push32((uint32_t)(0x33u));
  /* 105ef3c9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef3cc push eax */
  push32((uint32_t)(EAX));
  /* 105ef3cd push 1 */
  push32((uint32_t)(0x1u));
  /* 105ef3cf call 0x105f2e30 */
  push32(0x105ef3d4u); f_105f2e30();
  /* 105ef3d4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef3d7 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ef3da or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ef3dc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105ef3df mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef3e2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef3e5 push edx */
  push32((uint32_t)(EDX));
  /* 105ef3e6 push 0x34 */
  push32((uint32_t)(0x34u));
  /* 105ef3e8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef3eb push eax */
  push32((uint32_t)(EAX));
  /* 105ef3ec push 1 */
  push32((uint32_t)(0x1u));
  /* 105ef3ee call 0x105f2e30 */
  push32(0x105ef3f3u); f_105f2e30();
  /* 105ef3f3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef3f6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ef3f9 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ef3fb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105ef3fe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef401 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef404 push edx */
  push32((uint32_t)(EDX));
  /* 105ef405 push 0x35 */
  push32((uint32_t)(0x35u));
  /* 105ef407 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef40a push eax */
  push32((uint32_t)(EAX));
  /* 105ef40b push 1 */
  push32((uint32_t)(0x1u));
  /* 105ef40d call 0x105f2e30 */
  push32(0x105ef412u); f_105f2e30();
  /* 105ef412 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef415 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ef418 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ef41a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105ef41d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef420 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef423 push edx */
  push32((uint32_t)(EDX));
  /* 105ef424 push 0x36 */
  push32((uint32_t)(0x36u));
  /* 105ef426 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef429 push eax */
  push32((uint32_t)(EAX));
  /* 105ef42a push 1 */
  push32((uint32_t)(0x1u));
  /* 105ef42c call 0x105f2e30 */
  push32(0x105ef431u); f_105f2e30();
  /* 105ef431 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef434 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ef437 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ef439 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105ef43c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef43f push edx */
  push32((uint32_t)(EDX));
  /* 105ef440 push 0x37 */
  push32((uint32_t)(0x37u));
  /* 105ef442 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef445 push eax */
  push32((uint32_t)(EAX));
  /* 105ef446 push 1 */
  push32((uint32_t)(0x1u));
  /* 105ef448 call 0x105f2e30 */
  push32(0x105ef44du); f_105f2e30();
  /* 105ef44d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef450 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ef453 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ef455 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105ef458 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef45b add edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef45e push edx */
  push32((uint32_t)(EDX));
  /* 105ef45f push 0x2a */
  push32((uint32_t)(0x2au));
  /* 105ef461 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef464 push eax */
  push32((uint32_t)(EAX));
  /* 105ef465 push 1 */
  push32((uint32_t)(0x1u));
  /* 105ef467 call 0x105f2e30 */
  push32(0x105ef46cu); f_105f2e30();
  /* 105ef46c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef46f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ef472 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ef474 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105ef477 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef47a add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef47d push edx */
  push32((uint32_t)(EDX));
  /* 105ef47e push 0x2b */
  push32((uint32_t)(0x2bu));
  /* 105ef480 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef483 push eax */
  push32((uint32_t)(EAX));
  /* 105ef484 push 1 */
  push32((uint32_t)(0x1u));
  /* 105ef486 call 0x105f2e30 */
  push32(0x105ef48bu); f_105f2e30();
  /* 105ef48b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef48e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ef491 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ef493 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105ef496 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef499 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef49c push edx */
  push32((uint32_t)(EDX));
  /* 105ef49d push 0x2c */
  push32((uint32_t)(0x2cu));
  /* 105ef49f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef4a2 push eax */
  push32((uint32_t)(EAX));
  /* 105ef4a3 push 1 */
  push32((uint32_t)(0x1u));
  /* 105ef4a5 call 0x105f2e30 */
  push32(0x105ef4aau); f_105f2e30();
  /* 105ef4aa add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef4ad mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ef4b0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ef4b2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105ef4b5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef4b8 add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef4bb push edx */
  push32((uint32_t)(EDX));
  /* 105ef4bc push 0x2d */
  push32((uint32_t)(0x2du));
  /* 105ef4be mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef4c1 push eax */
  push32((uint32_t)(EAX));
  /* 105ef4c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 105ef4c4 call 0x105f2e30 */
  push32(0x105ef4c9u); f_105f2e30();
  /* 105ef4c9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef4cc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ef4cf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ef4d1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105ef4d4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef4d7 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef4da push edx */
  push32((uint32_t)(EDX));
  /* 105ef4db push 0x2e */
  push32((uint32_t)(0x2eu));
  /* 105ef4dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef4e0 push eax */
  push32((uint32_t)(EAX));
  /* 105ef4e1 push 1 */
  push32((uint32_t)(0x1u));
  /* 105ef4e3 call 0x105f2e30 */
  push32(0x105ef4e8u); f_105f2e30();
  /* 105ef4e8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef4eb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ef4ee or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ef4f0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105ef4f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef4f6 add edx, 0x34 */
  { uint32_t _a=(EDX),_b=(0x34u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef4f9 push edx */
  push32((uint32_t)(EDX));
  /* 105ef4fa push 0x2f */
  push32((uint32_t)(0x2fu));
  /* 105ef4fc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef4ff push eax */
  push32((uint32_t)(EAX));
  /* 105ef500 push 1 */
  push32((uint32_t)(0x1u));
  /* 105ef502 call 0x105f2e30 */
  push32(0x105ef507u); f_105f2e30();
  /* 105ef507 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef50a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ef50d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ef50f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105ef512 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef515 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef518 push edx */
  push32((uint32_t)(EDX));
  /* 105ef519 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 105ef51b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef51e push eax */
  push32((uint32_t)(EAX));
  /* 105ef51f push 1 */
  push32((uint32_t)(0x1u));
  /* 105ef521 call 0x105f2e30 */
  push32(0x105ef526u); f_105f2e30();
  /* 105ef526 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef529 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ef52c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ef52e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105ef531 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef534 add edx, 0x38 */
  { uint32_t _a=(EDX),_b=(0x38u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef537 push edx */
  push32((uint32_t)(EDX));
  /* 105ef538 push 0x44 */
  push32((uint32_t)(0x44u));
  /* 105ef53a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef53d push eax */
  push32((uint32_t)(EAX));
  /* 105ef53e push 1 */
  push32((uint32_t)(0x1u));
  /* 105ef540 call 0x105f2e30 */
  push32(0x105ef545u); f_105f2e30();
  /* 105ef545 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef548 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ef54b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ef54d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105ef550 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef553 add edx, 0x3c */
  { uint32_t _a=(EDX),_b=(0x3cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef556 push edx */
  push32((uint32_t)(EDX));
  /* 105ef557 push 0x45 */
  push32((uint32_t)(0x45u));
  /* 105ef559 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef55c push eax */
  push32((uint32_t)(EAX));
  /* 105ef55d push 1 */
  push32((uint32_t)(0x1u));
  /* 105ef55f call 0x105f2e30 */
  push32(0x105ef564u); f_105f2e30();
  /* 105ef564 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef567 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ef56a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ef56c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105ef56f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef572 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef575 push edx */
  push32((uint32_t)(EDX));
  /* 105ef576 push 0x46 */
  push32((uint32_t)(0x46u));
  /* 105ef578 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef57b push eax */
  push32((uint32_t)(EAX));
  /* 105ef57c push 1 */
  push32((uint32_t)(0x1u));
  /* 105ef57e call 0x105f2e30 */
  push32(0x105ef583u); f_105f2e30();
  /* 105ef583 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef586 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ef589 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ef58b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105ef58e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef591 add edx, 0x44 */
  { uint32_t _a=(EDX),_b=(0x44u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef594 push edx */
  push32((uint32_t)(EDX));
  /* 105ef595 push 0x47 */
  push32((uint32_t)(0x47u));
  /* 105ef597 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef59a push eax */
  push32((uint32_t)(EAX));
  /* 105ef59b push 1 */
  push32((uint32_t)(0x1u));
  /* 105ef59d call 0x105f2e30 */
  push32(0x105ef5a2u); f_105f2e30();
  /* 105ef5a2 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef5a5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ef5a8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ef5aa mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105ef5ad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef5b0 add edx, 0x48 */
  { uint32_t _a=(EDX),_b=(0x48u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef5b3 push edx */
  push32((uint32_t)(EDX));
  /* 105ef5b4 push 0x48 */
  push32((uint32_t)(0x48u));
  /* 105ef5b6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef5b9 push eax */
  push32((uint32_t)(EAX));
  /* 105ef5ba push 1 */
  push32((uint32_t)(0x1u));
  /* 105ef5bc call 0x105f2e30 */
  push32(0x105ef5c1u); f_105f2e30();
  /* 105ef5c1 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef5c4 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ef5c7 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ef5c9 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105ef5cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef5cf add edx, 0x4c */
  { uint32_t _a=(EDX),_b=(0x4cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef5d2 push edx */
  push32((uint32_t)(EDX));
  /* 105ef5d3 push 0x49 */
  push32((uint32_t)(0x49u));
  /* 105ef5d5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef5d8 push eax */
  push32((uint32_t)(EAX));
  /* 105ef5d9 push 1 */
  push32((uint32_t)(0x1u));
  /* 105ef5db call 0x105f2e30 */
  push32(0x105ef5e0u); f_105f2e30();
  /* 105ef5e0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef5e3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ef5e6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ef5e8 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105ef5eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef5ee add edx, 0x50 */
  { uint32_t _a=(EDX),_b=(0x50u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef5f1 push edx */
  push32((uint32_t)(EDX));
  /* 105ef5f2 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 105ef5f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef5f7 push eax */
  push32((uint32_t)(EAX));
  /* 105ef5f8 push 1 */
  push32((uint32_t)(0x1u));
  /* 105ef5fa call 0x105f2e30 */
  push32(0x105ef5ffu); f_105f2e30();
  /* 105ef5ff add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef602 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ef605 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ef607 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105ef60a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef60d add edx, 0x54 */
  { uint32_t _a=(EDX),_b=(0x54u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef610 push edx */
  push32((uint32_t)(EDX));
  /* 105ef611 push 0x4b */
  push32((uint32_t)(0x4bu));
  /* 105ef613 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef616 push eax */
  push32((uint32_t)(EAX));
  /* 105ef617 push 1 */
  push32((uint32_t)(0x1u));
  /* 105ef619 call 0x105f2e30 */
  push32(0x105ef61eu); f_105f2e30();
  /* 105ef61e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef621 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ef624 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ef626 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105ef629 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef62c add edx, 0x58 */
  { uint32_t _a=(EDX),_b=(0x58u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef62f push edx */
  push32((uint32_t)(EDX));
  /* 105ef630 push 0x4c */
  push32((uint32_t)(0x4cu));
  /* 105ef632 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef635 push eax */
  push32((uint32_t)(EAX));
  /* 105ef636 push 1 */
  push32((uint32_t)(0x1u));
  /* 105ef638 call 0x105f2e30 */
  push32(0x105ef63du); f_105f2e30();
  /* 105ef63d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef640 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ef643 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ef645 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105ef648 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef64b add edx, 0x5c */
  { uint32_t _a=(EDX),_b=(0x5cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef64e push edx */
  push32((uint32_t)(EDX));
  /* 105ef64f push 0x4d */
  push32((uint32_t)(0x4du));
  /* 105ef651 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef654 push eax */
  push32((uint32_t)(EAX));
  /* 105ef655 push 1 */
  push32((uint32_t)(0x1u));
  /* 105ef657 call 0x105f2e30 */
  push32(0x105ef65cu); f_105f2e30();
  /* 105ef65c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef65f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ef662 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ef664 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105ef667 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef66a add edx, 0x60 */
  { uint32_t _a=(EDX),_b=(0x60u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef66d push edx */
  push32((uint32_t)(EDX));
  /* 105ef66e push 0x4e */
  push32((uint32_t)(0x4eu));
  /* 105ef670 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef673 push eax */
  push32((uint32_t)(EAX));
  /* 105ef674 push 1 */
  push32((uint32_t)(0x1u));
  /* 105ef676 call 0x105f2e30 */
  push32(0x105ef67bu); f_105f2e30();
  /* 105ef67b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef67e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ef681 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ef683 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105ef686 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef689 add edx, 0x64 */
  { uint32_t _a=(EDX),_b=(0x64u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef68c push edx */
  push32((uint32_t)(EDX));
  /* 105ef68d push 0x4f */
  push32((uint32_t)(0x4fu));
  /* 105ef68f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef692 push eax */
  push32((uint32_t)(EAX));
  /* 105ef693 push 1 */
  push32((uint32_t)(0x1u));
  /* 105ef695 call 0x105f2e30 */
  push32(0x105ef69au); f_105f2e30();
  /* 105ef69a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef69d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ef6a0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ef6a2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105ef6a5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef6a8 add edx, 0x68 */
  { uint32_t _a=(EDX),_b=(0x68u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef6ab push edx */
  push32((uint32_t)(EDX));
  /* 105ef6ac push 0x38 */
  push32((uint32_t)(0x38u));
  /* 105ef6ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef6b1 push eax */
  push32((uint32_t)(EAX));
  /* 105ef6b2 push 1 */
  push32((uint32_t)(0x1u));
  /* 105ef6b4 call 0x105f2e30 */
  push32(0x105ef6b9u); f_105f2e30();
  /* 105ef6b9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef6bc mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ef6bf or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ef6c1 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105ef6c4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef6c7 add edx, 0x6c */
  { uint32_t _a=(EDX),_b=(0x6cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef6ca push edx */
  push32((uint32_t)(EDX));
  /* 105ef6cb push 0x39 */
  push32((uint32_t)(0x39u));
  /* 105ef6cd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef6d0 push eax */
  push32((uint32_t)(EAX));
  /* 105ef6d1 push 1 */
  push32((uint32_t)(0x1u));
  /* 105ef6d3 call 0x105f2e30 */
  push32(0x105ef6d8u); f_105f2e30();
  /* 105ef6d8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef6db mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ef6de or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ef6e0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105ef6e3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef6e6 add edx, 0x70 */
  { uint32_t _a=(EDX),_b=(0x70u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef6e9 push edx */
  push32((uint32_t)(EDX));
  /* 105ef6ea push 0x3a */
  push32((uint32_t)(0x3au));
  /* 105ef6ec mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef6ef push eax */
  push32((uint32_t)(EAX));
  /* 105ef6f0 push 1 */
  push32((uint32_t)(0x1u));
  /* 105ef6f2 call 0x105f2e30 */
  push32(0x105ef6f7u); f_105f2e30();
  /* 105ef6f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef6fa mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ef6fd or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ef6ff mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105ef702 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef705 add edx, 0x74 */
  { uint32_t _a=(EDX),_b=(0x74u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef708 push edx */
  push32((uint32_t)(EDX));
  /* 105ef709 push 0x3b */
  push32((uint32_t)(0x3bu));
  /* 105ef70b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef70e push eax */
  push32((uint32_t)(EAX));
  /* 105ef70f push 1 */
  push32((uint32_t)(0x1u));
  /* 105ef711 call 0x105f2e30 */
  push32(0x105ef716u); f_105f2e30();
  /* 105ef716 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef719 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ef71c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ef71e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105ef721 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef724 add edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef727 push edx */
  push32((uint32_t)(EDX));
  /* 105ef728 push 0x3c */
  push32((uint32_t)(0x3cu));
  /* 105ef72a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef72d push eax */
  push32((uint32_t)(EAX));
  /* 105ef72e push 1 */
  push32((uint32_t)(0x1u));
  /* 105ef730 call 0x105f2e30 */
  push32(0x105ef735u); f_105f2e30();
  /* 105ef735 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef738 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ef73b or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ef73d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105ef740 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef743 add edx, 0x7c */
  { uint32_t _a=(EDX),_b=(0x7cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef746 push edx */
  push32((uint32_t)(EDX));
  /* 105ef747 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 105ef749 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef74c push eax */
  push32((uint32_t)(EAX));
  /* 105ef74d push 1 */
  push32((uint32_t)(0x1u));
  /* 105ef74f call 0x105f2e30 */
  push32(0x105ef754u); f_105f2e30();
  /* 105ef754 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef757 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ef75a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ef75c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105ef75f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef762 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef768 push edx */
  push32((uint32_t)(EDX));
  /* 105ef769 push 0x3e */
  push32((uint32_t)(0x3eu));
  /* 105ef76b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef76e push eax */
  push32((uint32_t)(EAX));
  /* 105ef76f push 1 */
  push32((uint32_t)(0x1u));
  /* 105ef771 call 0x105f2e30 */
  push32(0x105ef776u); f_105f2e30();
  /* 105ef776 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef779 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ef77c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ef77e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105ef781 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef784 add edx, 0x84 */
  { uint32_t _a=(EDX),_b=(0x84u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef78a push edx */
  push32((uint32_t)(EDX));
  /* 105ef78b push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 105ef78d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef790 push eax */
  push32((uint32_t)(EAX));
  /* 105ef791 push 1 */
  push32((uint32_t)(0x1u));
  /* 105ef793 call 0x105f2e30 */
  push32(0x105ef798u); f_105f2e30();
  /* 105ef798 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef79b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ef79e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ef7a0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105ef7a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef7a6 add edx, 0x88 */
  { uint32_t _a=(EDX),_b=(0x88u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef7ac push edx */
  push32((uint32_t)(EDX));
  /* 105ef7ad push 0x40 */
  push32((uint32_t)(0x40u));
  /* 105ef7af mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef7b2 push eax */
  push32((uint32_t)(EAX));
  /* 105ef7b3 push 1 */
  push32((uint32_t)(0x1u));
  /* 105ef7b5 call 0x105f2e30 */
  push32(0x105ef7bau); f_105f2e30();
  /* 105ef7ba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef7bd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ef7c0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ef7c2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105ef7c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef7c8 add edx, 0x8c */
  { uint32_t _a=(EDX),_b=(0x8cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef7ce push edx */
  push32((uint32_t)(EDX));
  /* 105ef7cf push 0x41 */
  push32((uint32_t)(0x41u));
  /* 105ef7d1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef7d4 push eax */
  push32((uint32_t)(EAX));
  /* 105ef7d5 push 1 */
  push32((uint32_t)(0x1u));
  /* 105ef7d7 call 0x105f2e30 */
  push32(0x105ef7dcu); f_105f2e30();
  /* 105ef7dc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef7df mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ef7e2 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ef7e4 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105ef7e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef7ea add edx, 0x90 */
  { uint32_t _a=(EDX),_b=(0x90u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef7f0 push edx */
  push32((uint32_t)(EDX));
  /* 105ef7f1 push 0x42 */
  push32((uint32_t)(0x42u));
  /* 105ef7f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef7f6 push eax */
  push32((uint32_t)(EAX));
  /* 105ef7f7 push 1 */
  push32((uint32_t)(0x1u));
  /* 105ef7f9 call 0x105f2e30 */
  push32(0x105ef7feu); f_105f2e30();
  /* 105ef7fe add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef801 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ef804 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ef806 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105ef809 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef80c add edx, 0x94 */
  { uint32_t _a=(EDX),_b=(0x94u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef812 push edx */
  push32((uint32_t)(EDX));
  /* 105ef813 push 0x43 */
  push32((uint32_t)(0x43u));
  /* 105ef815 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef818 push eax */
  push32((uint32_t)(EAX));
  /* 105ef819 push 1 */
  push32((uint32_t)(0x1u));
  /* 105ef81b call 0x105f2e30 */
  push32(0x105ef820u); f_105f2e30();
  /* 105ef820 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef823 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ef826 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ef828 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105ef82b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef82e add edx, 0x98 */
  { uint32_t _a=(EDX),_b=(0x98u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef834 push edx */
  push32((uint32_t)(EDX));
  /* 105ef835 push 0x28 */
  push32((uint32_t)(0x28u));
  /* 105ef837 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef83a push eax */
  push32((uint32_t)(EAX));
  /* 105ef83b push 1 */
  push32((uint32_t)(0x1u));
  /* 105ef83d call 0x105f2e30 */
  push32(0x105ef842u); f_105f2e30();
  /* 105ef842 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef845 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ef848 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ef84a mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105ef84d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef850 add edx, 0x9c */
  { uint32_t _a=(EDX),_b=(0x9cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef856 push edx */
  push32((uint32_t)(EDX));
  /* 105ef857 push 0x29 */
  push32((uint32_t)(0x29u));
  /* 105ef859 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105ef85c push eax */
  push32((uint32_t)(EAX));
  /* 105ef85d push 1 */
  push32((uint32_t)(0x1u));
  /* 105ef85f call 0x105f2e30 */
  push32(0x105ef864u); f_105f2e30();
  /* 105ef864 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef867 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ef86a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ef86c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105ef86f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef872 add edx, 0xa0 */
  { uint32_t _a=(EDX),_b=(0xa0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef878 push edx */
  push32((uint32_t)(EDX));
  /* 105ef879 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 105ef87b mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ef87e push eax */
  push32((uint32_t)(EAX));
  /* 105ef87f push 1 */
  push32((uint32_t)(0x1u));
  /* 105ef881 call 0x105f2e30 */
  push32(0x105ef886u); f_105f2e30();
  /* 105ef886 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef889 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ef88c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ef88e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105ef891 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef894 add edx, 0xa4 */
  { uint32_t _a=(EDX),_b=(0xa4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef89a push edx */
  push32((uint32_t)(EDX));
  /* 105ef89b push 0x20 */
  push32((uint32_t)(0x20u));
  /* 105ef89d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ef8a0 push eax */
  push32((uint32_t)(EAX));
  /* 105ef8a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 105ef8a3 call 0x105f2e30 */
  push32(0x105ef8a8u); f_105f2e30();
  /* 105ef8a8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef8ab mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ef8ae or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ef8b0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105ef8b3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef8b6 add edx, 0xa8 */
  { uint32_t _a=(EDX),_b=(0xa8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef8bc push edx */
  push32((uint32_t)(EDX));
  /* 105ef8bd push 0x1003 */
  push32((uint32_t)(0x1003u));
  /* 105ef8c2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105ef8c5 push eax */
  push32((uint32_t)(EAX));
  /* 105ef8c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 105ef8c8 call 0x105f2e30 */
  push32(0x105ef8cdu); f_105f2e30();
  /* 105ef8cd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef8d0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105ef8d3 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105ef8d5 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105ef8d8 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_105ef8db:;
  /* 105ef8db mov esp, ebp */
  ESP = (EBP);
  /* 105ef8dd pop ebp */
  EBP = (pop32());
  /* 105ef8de ret  */
  ESPCHK(0x105ef350u, _esp0);
  ESP += 4; return;
}

/* ___free_lc_time @ 0x105ef8e0 (779 bytes, 265 insns) */
void f_105ef8e0(void) {
  FTRACE(0x105ef8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105ef8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 105ef8e1 mov ebp, esp */
  EBP = (ESP);
  /* 105ef8e3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105ef8e7 jne 0x105ef8ee */
  if (!C.zf) goto L_105ef8ee;
  /* 105ef8e9 jmp 0x105efbe9 */
  goto L_105efbe9;
L_105ef8ee:;
  /* 105ef8ee push 2 */
  push32((uint32_t)(0x2u));
  /* 105ef8f0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef8f3 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 105ef8f6 push ecx */
  push32((uint32_t)(ECX));
  /* 105ef8f7 call 0x105e6920 */
  push32(0x105ef8fcu); f_105e6920();
  /* 105ef8fc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef8ff push 2 */
  push32((uint32_t)(0x2u));
  /* 105ef901 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef904 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 105ef907 push eax */
  push32((uint32_t)(EAX));
  /* 105ef908 call 0x105e6920 */
  push32(0x105ef90du); f_105e6920();
  /* 105ef90d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef910 push 2 */
  push32((uint32_t)(0x2u));
  /* 105ef912 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef915 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 105ef918 push edx */
  push32((uint32_t)(EDX));
  /* 105ef919 call 0x105e6920 */
  push32(0x105ef91eu); f_105e6920();
  /* 105ef91e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef921 push 2 */
  push32((uint32_t)(0x2u));
  /* 105ef923 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef926 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 105ef929 push ecx */
  push32((uint32_t)(ECX));
  /* 105ef92a call 0x105e6920 */
  push32(0x105ef92fu); f_105e6920();
  /* 105ef92f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef932 push 2 */
  push32((uint32_t)(0x2u));
  /* 105ef934 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef937 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 105ef93a push eax */
  push32((uint32_t)(EAX));
  /* 105ef93b call 0x105e6920 */
  push32(0x105ef940u); f_105e6920();
  /* 105ef940 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef943 push 2 */
  push32((uint32_t)(0x2u));
  /* 105ef945 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef948 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 105ef94b push edx */
  push32((uint32_t)(EDX));
  /* 105ef94c call 0x105e6920 */
  push32(0x105ef951u); f_105e6920();
  /* 105ef951 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef954 push 2 */
  push32((uint32_t)(0x2u));
  /* 105ef956 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef959 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105ef95b push ecx */
  push32((uint32_t)(ECX));
  /* 105ef95c call 0x105e6920 */
  push32(0x105ef961u); f_105e6920();
  /* 105ef961 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef964 push 2 */
  push32((uint32_t)(0x2u));
  /* 105ef966 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef969 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 105ef96c push eax */
  push32((uint32_t)(EAX));
  /* 105ef96d call 0x105e6920 */
  push32(0x105ef972u); f_105e6920();
  /* 105ef972 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef975 push 2 */
  push32((uint32_t)(0x2u));
  /* 105ef977 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef97a mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 105ef97d push edx */
  push32((uint32_t)(EDX));
  /* 105ef97e call 0x105e6920 */
  push32(0x105ef983u); f_105e6920();
  /* 105ef983 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef986 push 2 */
  push32((uint32_t)(0x2u));
  /* 105ef988 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef98b mov ecx, dword ptr [eax + 0x28] */
  ECX = (r32((uint32_t)(EAX + 0x28)));
  /* 105ef98e push ecx */
  push32((uint32_t)(ECX));
  /* 105ef98f call 0x105e6920 */
  push32(0x105ef994u); f_105e6920();
  /* 105ef994 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef997 push 2 */
  push32((uint32_t)(0x2u));
  /* 105ef999 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef99c mov eax, dword ptr [edx + 0x2c] */
  EAX = (r32((uint32_t)(EDX + 0x2c)));
  /* 105ef99f push eax */
  push32((uint32_t)(EAX));
  /* 105ef9a0 call 0x105e6920 */
  push32(0x105ef9a5u); f_105e6920();
  /* 105ef9a5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef9a8 push 2 */
  push32((uint32_t)(0x2u));
  /* 105ef9aa mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef9ad mov edx, dword ptr [ecx + 0x30] */
  EDX = (r32((uint32_t)(ECX + 0x30)));
  /* 105ef9b0 push edx */
  push32((uint32_t)(EDX));
  /* 105ef9b1 call 0x105e6920 */
  push32(0x105ef9b6u); f_105e6920();
  /* 105ef9b6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef9b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 105ef9bb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef9be mov ecx, dword ptr [eax + 0x34] */
  ECX = (r32((uint32_t)(EAX + 0x34)));
  /* 105ef9c1 push ecx */
  push32((uint32_t)(ECX));
  /* 105ef9c2 call 0x105e6920 */
  push32(0x105ef9c7u); f_105e6920();
  /* 105ef9c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef9ca push 2 */
  push32((uint32_t)(0x2u));
  /* 105ef9cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef9cf mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 105ef9d2 push eax */
  push32((uint32_t)(EAX));
  /* 105ef9d3 call 0x105e6920 */
  push32(0x105ef9d8u); f_105e6920();
  /* 105ef9d8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef9db push 2 */
  push32((uint32_t)(0x2u));
  /* 105ef9dd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef9e0 mov edx, dword ptr [ecx + 0x38] */
  EDX = (r32((uint32_t)(ECX + 0x38)));
  /* 105ef9e3 push edx */
  push32((uint32_t)(EDX));
  /* 105ef9e4 call 0x105e6920 */
  push32(0x105ef9e9u); f_105e6920();
  /* 105ef9e9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef9ec push 2 */
  push32((uint32_t)(0x2u));
  /* 105ef9ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105ef9f1 mov ecx, dword ptr [eax + 0x3c] */
  ECX = (r32((uint32_t)(EAX + 0x3c)));
  /* 105ef9f4 push ecx */
  push32((uint32_t)(ECX));
  /* 105ef9f5 call 0x105e6920 */
  push32(0x105ef9fau); f_105e6920();
  /* 105ef9fa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105ef9fd push 2 */
  push32((uint32_t)(0x2u));
  /* 105ef9ff mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105efa02 mov eax, dword ptr [edx + 0x40] */
  EAX = (r32((uint32_t)(EDX + 0x40)));
  /* 105efa05 push eax */
  push32((uint32_t)(EAX));
  /* 105efa06 call 0x105e6920 */
  push32(0x105efa0bu); f_105e6920();
  /* 105efa0b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105efa0e push 2 */
  push32((uint32_t)(0x2u));
  /* 105efa10 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105efa13 mov edx, dword ptr [ecx + 0x44] */
  EDX = (r32((uint32_t)(ECX + 0x44)));
  /* 105efa16 push edx */
  push32((uint32_t)(EDX));
  /* 105efa17 call 0x105e6920 */
  push32(0x105efa1cu); f_105e6920();
  /* 105efa1c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105efa1f push 2 */
  push32((uint32_t)(0x2u));
  /* 105efa21 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105efa24 mov ecx, dword ptr [eax + 0x48] */
  ECX = (r32((uint32_t)(EAX + 0x48)));
  /* 105efa27 push ecx */
  push32((uint32_t)(ECX));
  /* 105efa28 call 0x105e6920 */
  push32(0x105efa2du); f_105e6920();
  /* 105efa2d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105efa30 push 2 */
  push32((uint32_t)(0x2u));
  /* 105efa32 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105efa35 mov eax, dword ptr [edx + 0x4c] */
  EAX = (r32((uint32_t)(EDX + 0x4c)));
  /* 105efa38 push eax */
  push32((uint32_t)(EAX));
  /* 105efa39 call 0x105e6920 */
  push32(0x105efa3eu); f_105e6920();
  /* 105efa3e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105efa41 push 2 */
  push32((uint32_t)(0x2u));
  /* 105efa43 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105efa46 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 105efa49 push edx */
  push32((uint32_t)(EDX));
  /* 105efa4a call 0x105e6920 */
  push32(0x105efa4fu); f_105e6920();
  /* 105efa4f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105efa52 push 2 */
  push32((uint32_t)(0x2u));
  /* 105efa54 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105efa57 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 105efa5a push ecx */
  push32((uint32_t)(ECX));
  /* 105efa5b call 0x105e6920 */
  push32(0x105efa60u); f_105e6920();
  /* 105efa60 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105efa63 push 2 */
  push32((uint32_t)(0x2u));
  /* 105efa65 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105efa68 mov eax, dword ptr [edx + 0x58] */
  EAX = (r32((uint32_t)(EDX + 0x58)));
  /* 105efa6b push eax */
  push32((uint32_t)(EAX));
  /* 105efa6c call 0x105e6920 */
  push32(0x105efa71u); f_105e6920();
  /* 105efa71 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105efa74 push 2 */
  push32((uint32_t)(0x2u));
  /* 105efa76 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105efa79 mov edx, dword ptr [ecx + 0x5c] */
  EDX = (r32((uint32_t)(ECX + 0x5c)));
  /* 105efa7c push edx */
  push32((uint32_t)(EDX));
  /* 105efa7d call 0x105e6920 */
  push32(0x105efa82u); f_105e6920();
  /* 105efa82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105efa85 push 2 */
  push32((uint32_t)(0x2u));
  /* 105efa87 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105efa8a mov ecx, dword ptr [eax + 0x60] */
  ECX = (r32((uint32_t)(EAX + 0x60)));
  /* 105efa8d push ecx */
  push32((uint32_t)(ECX));
  /* 105efa8e call 0x105e6920 */
  push32(0x105efa93u); f_105e6920();
  /* 105efa93 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105efa96 push 2 */
  push32((uint32_t)(0x2u));
  /* 105efa98 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105efa9b mov eax, dword ptr [edx + 0x64] */
  EAX = (r32((uint32_t)(EDX + 0x64)));
  /* 105efa9e push eax */
  push32((uint32_t)(EAX));
  /* 105efa9f call 0x105e6920 */
  push32(0x105efaa4u); f_105e6920();
  /* 105efaa4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105efaa7 push 2 */
  push32((uint32_t)(0x2u));
  /* 105efaa9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105efaac mov edx, dword ptr [ecx + 0x68] */
  EDX = (r32((uint32_t)(ECX + 0x68)));
  /* 105efaaf push edx */
  push32((uint32_t)(EDX));
  /* 105efab0 call 0x105e6920 */
  push32(0x105efab5u); f_105e6920();
  /* 105efab5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105efab8 push 2 */
  push32((uint32_t)(0x2u));
  /* 105efaba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105efabd mov ecx, dword ptr [eax + 0x6c] */
  ECX = (r32((uint32_t)(EAX + 0x6c)));
  /* 105efac0 push ecx */
  push32((uint32_t)(ECX));
  /* 105efac1 call 0x105e6920 */
  push32(0x105efac6u); f_105e6920();
  /* 105efac6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105efac9 push 2 */
  push32((uint32_t)(0x2u));
  /* 105efacb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105eface mov eax, dword ptr [edx + 0x70] */
  EAX = (r32((uint32_t)(EDX + 0x70)));
  /* 105efad1 push eax */
  push32((uint32_t)(EAX));
  /* 105efad2 call 0x105e6920 */
  push32(0x105efad7u); f_105e6920();
  /* 105efad7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105efada push 2 */
  push32((uint32_t)(0x2u));
  /* 105efadc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105efadf mov edx, dword ptr [ecx + 0x74] */
  EDX = (r32((uint32_t)(ECX + 0x74)));
  /* 105efae2 push edx */
  push32((uint32_t)(EDX));
  /* 105efae3 call 0x105e6920 */
  push32(0x105efae8u); f_105e6920();
  /* 105efae8 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105efaeb push 2 */
  push32((uint32_t)(0x2u));
  /* 105efaed mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105efaf0 mov ecx, dword ptr [eax + 0x78] */
  ECX = (r32((uint32_t)(EAX + 0x78)));
  /* 105efaf3 push ecx */
  push32((uint32_t)(ECX));
  /* 105efaf4 call 0x105e6920 */
  push32(0x105efaf9u); f_105e6920();
  /* 105efaf9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105efafc push 2 */
  push32((uint32_t)(0x2u));
  /* 105efafe mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105efb01 mov eax, dword ptr [edx + 0x7c] */
  EAX = (r32((uint32_t)(EDX + 0x7c)));
  /* 105efb04 push eax */
  push32((uint32_t)(EAX));
  /* 105efb05 call 0x105e6920 */
  push32(0x105efb0au); f_105e6920();
  /* 105efb0a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105efb0d push 2 */
  push32((uint32_t)(0x2u));
  /* 105efb0f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105efb12 mov edx, dword ptr [ecx + 0x80] */
  EDX = (r32((uint32_t)(ECX + 0x80)));
  /* 105efb18 push edx */
  push32((uint32_t)(EDX));
  /* 105efb19 call 0x105e6920 */
  push32(0x105efb1eu); f_105e6920();
  /* 105efb1e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105efb21 push 2 */
  push32((uint32_t)(0x2u));
  /* 105efb23 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105efb26 mov ecx, dword ptr [eax + 0x84] */
  ECX = (r32((uint32_t)(EAX + 0x84)));
  /* 105efb2c push ecx */
  push32((uint32_t)(ECX));
  /* 105efb2d call 0x105e6920 */
  push32(0x105efb32u); f_105e6920();
  /* 105efb32 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105efb35 push 2 */
  push32((uint32_t)(0x2u));
  /* 105efb37 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105efb3a mov eax, dword ptr [edx + 0x88] */
  EAX = (r32((uint32_t)(EDX + 0x88)));
  /* 105efb40 push eax */
  push32((uint32_t)(EAX));
  /* 105efb41 call 0x105e6920 */
  push32(0x105efb46u); f_105e6920();
  /* 105efb46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105efb49 push 2 */
  push32((uint32_t)(0x2u));
  /* 105efb4b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105efb4e mov edx, dword ptr [ecx + 0x8c] */
  EDX = (r32((uint32_t)(ECX + 0x8c)));
  /* 105efb54 push edx */
  push32((uint32_t)(EDX));
  /* 105efb55 call 0x105e6920 */
  push32(0x105efb5au); f_105e6920();
  /* 105efb5a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105efb5d push 2 */
  push32((uint32_t)(0x2u));
  /* 105efb5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105efb62 mov ecx, dword ptr [eax + 0x90] */
  ECX = (r32((uint32_t)(EAX + 0x90)));
  /* 105efb68 push ecx */
  push32((uint32_t)(ECX));
  /* 105efb69 call 0x105e6920 */
  push32(0x105efb6eu); f_105e6920();
  /* 105efb6e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105efb71 push 2 */
  push32((uint32_t)(0x2u));
  /* 105efb73 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105efb76 mov eax, dword ptr [edx + 0x94] */
  EAX = (r32((uint32_t)(EDX + 0x94)));
  /* 105efb7c push eax */
  push32((uint32_t)(EAX));
  /* 105efb7d call 0x105e6920 */
  push32(0x105efb82u); f_105e6920();
  /* 105efb82 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105efb85 push 2 */
  push32((uint32_t)(0x2u));
  /* 105efb87 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105efb8a mov edx, dword ptr [ecx + 0x98] */
  EDX = (r32((uint32_t)(ECX + 0x98)));
  /* 105efb90 push edx */
  push32((uint32_t)(EDX));
  /* 105efb91 call 0x105e6920 */
  push32(0x105efb96u); f_105e6920();
  /* 105efb96 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105efb99 push 2 */
  push32((uint32_t)(0x2u));
  /* 105efb9b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105efb9e mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 105efba4 push ecx */
  push32((uint32_t)(ECX));
  /* 105efba5 call 0x105e6920 */
  push32(0x105efbaau); f_105e6920();
  /* 105efbaa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105efbad push 2 */
  push32((uint32_t)(0x2u));
  /* 105efbaf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105efbb2 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 105efbb8 push eax */
  push32((uint32_t)(EAX));
  /* 105efbb9 call 0x105e6920 */
  push32(0x105efbbeu); f_105e6920();
  /* 105efbbe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105efbc1 push 2 */
  push32((uint32_t)(0x2u));
  /* 105efbc3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105efbc6 mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 105efbcc push edx */
  push32((uint32_t)(EDX));
  /* 105efbcd call 0x105e6920 */
  push32(0x105efbd2u); f_105e6920();
  /* 105efbd2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105efbd5 push 2 */
  push32((uint32_t)(0x2u));
  /* 105efbd7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105efbda mov ecx, dword ptr [eax + 0xa8] */
  ECX = (r32((uint32_t)(EAX + 0xa8)));
  /* 105efbe0 push ecx */
  push32((uint32_t)(ECX));
  /* 105efbe1 call 0x105e6920 */
  push32(0x105efbe6u); f_105e6920();
  /* 105efbe6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105efbe9:;
  /* 105efbe9 pop ebp */
  EBP = (pop32());
  /* 105efbea ret  */
  ESPCHK(0x105ef8e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fbf0 @ 0x105efbf0 (678 bytes, 180 insns) */
void f_105efbf0(void) {
  FTRACE(0x105efbf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105efbf0 push ebp */
  push32((uint32_t)(EBP));
  /* 105efbf1 mov ebp, esp */
  EBP = (ESP);
  /* 105efbf3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105efbf6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 105efbfd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105efbff mov ax, word ptr [0x10610a16] */
  AX = (r16((uint32_t)(0x10610a16)));
  /* 105efc05 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105efc08 cmp dword ptr [0x106109c8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106109c8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105efc0f je 0x105efd6a */
  if (C.zf) goto L_105efd6a;
  /* 105efc15 push 0x106109e4 */
  push32((uint32_t)(0x106109e4u));
  /* 105efc1a push 0xe */
  push32((uint32_t)(0xeu));
  /* 105efc1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105efc1f push ecx */
  push32((uint32_t)(ECX));
  /* 105efc20 push 1 */
  push32((uint32_t)(0x1u));
  /* 105efc22 call 0x105f2e30 */
  push32(0x105efc27u); f_105f2e30();
  /* 105efc27 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105efc2a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105efc2d or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 105efc2f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 105efc32 push 0x106109e8 */
  push32((uint32_t)(0x106109e8u));
  /* 105efc37 push 0xf */
  push32((uint32_t)(0xfu));
  /* 105efc39 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105efc3c push eax */
  push32((uint32_t)(EAX));
  /* 105efc3d push 1 */
  push32((uint32_t)(0x1u));
  /* 105efc3f call 0x105f2e30 */
  push32(0x105efc44u); f_105f2e30();
  /* 105efc44 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105efc47 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105efc4a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105efc4c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105efc4f push 0x106109ec */
  push32((uint32_t)(0x106109ecu));
  /* 105efc54 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 105efc56 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105efc59 push edx */
  push32((uint32_t)(EDX));
  /* 105efc5a push 1 */
  push32((uint32_t)(0x1u));
  /* 105efc5c call 0x105f2e30 */
  push32(0x105efc61u); f_105f2e30();
  /* 105efc61 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105efc64 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105efc67 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105efc69 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105efc6c mov edx, dword ptr [0x106109ec] */
  EDX = (r32((uint32_t)(0x106109ec)));
  /* 105efc72 push edx */
  push32((uint32_t)(EDX));
  /* 105efc73 call 0x105efea0 */
  push32(0x105efc78u); f_105efea0();
  /* 105efc78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105efc7b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105efc7f je 0x105efcd9 */
  if (C.zf) goto L_105efcd9;
  /* 105efc81 push 2 */
  push32((uint32_t)(0x2u));
  /* 105efc83 mov eax, dword ptr [0x106109e4] */
  EAX = (r32((uint32_t)(0x106109e4)));
  /* 105efc88 push eax */
  push32((uint32_t)(EAX));
  /* 105efc89 call 0x105e6920 */
  push32(0x105efc8eu); f_105e6920();
  /* 105efc8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105efc91 push 2 */
  push32((uint32_t)(0x2u));
  /* 105efc93 mov ecx, dword ptr [0x106109e8] */
  ECX = (r32((uint32_t)(0x106109e8)));
  /* 105efc99 push ecx */
  push32((uint32_t)(ECX));
  /* 105efc9a call 0x105e6920 */
  push32(0x105efc9fu); f_105e6920();
  /* 105efc9f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105efca2 push 2 */
  push32((uint32_t)(0x2u));
  /* 105efca4 mov edx, dword ptr [0x106109ec] */
  EDX = (r32((uint32_t)(0x106109ec)));
  /* 105efcaa push edx */
  push32((uint32_t)(EDX));
  /* 105efcab call 0x105e6920 */
  push32(0x105efcb0u); f_105e6920();
  /* 105efcb0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105efcb3 mov dword ptr [0x106109e4], 0 */
  w32((uint32_t)(0x106109e4), (0x0u));
  /* 105efcbd mov dword ptr [0x106109e8], 0 */
  w32((uint32_t)(0x106109e8), (0x0u));
  /* 105efcc7 mov dword ptr [0x106109ec], 0 */
  w32((uint32_t)(0x106109ec), (0x0u));
  /* 105efcd1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105efcd4 jmp 0x105efe92 */
  goto L_105efe92;
L_105efcd9:;
  /* 105efcd9 mov eax, dword ptr [0x1060fd98] */
  EAX = (r32((uint32_t)(0x1060fd98)));
  /* 105efcde cmp dword ptr [eax], 0x1060fd60 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1060fd60u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105efce4 je 0x105efd20 */
  if (C.zf) goto L_105efd20;
  /* 105efce6 push 2 */
  push32((uint32_t)(0x2u));
  /* 105efce8 mov ecx, dword ptr [0x1060fd98] */
  ECX = (r32((uint32_t)(0x1060fd98)));
  /* 105efcee mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105efcf0 push edx */
  push32((uint32_t)(EDX));
  /* 105efcf1 call 0x105e6920 */
  push32(0x105efcf6u); f_105e6920();
  /* 105efcf6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105efcf9 push 2 */
  push32((uint32_t)(0x2u));
  /* 105efcfb mov eax, dword ptr [0x1060fd98] */
  EAX = (r32((uint32_t)(0x1060fd98)));
  /* 105efd00 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 105efd03 push ecx */
  push32((uint32_t)(ECX));
  /* 105efd04 call 0x105e6920 */
  push32(0x105efd09u); f_105e6920();
  /* 105efd09 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105efd0c push 2 */
  push32((uint32_t)(0x2u));
  /* 105efd0e mov edx, dword ptr [0x1060fd98] */
  EDX = (r32((uint32_t)(0x1060fd98)));
  /* 105efd14 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 105efd17 push eax */
  push32((uint32_t)(EAX));
  /* 105efd18 call 0x105e6920 */
  push32(0x105efd1du); f_105e6920();
  /* 105efd1d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105efd20:;
  /* 105efd20 mov ecx, dword ptr [0x1060fd98] */
  ECX = (r32((uint32_t)(0x1060fd98)));
  /* 105efd26 mov edx, dword ptr [0x106109e4] */
  EDX = (r32((uint32_t)(0x106109e4)));
  /* 105efd2c mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 105efd2e mov eax, dword ptr [0x1060fd98] */
  EAX = (r32((uint32_t)(0x1060fd98)));
  /* 105efd33 mov ecx, dword ptr [0x106109e8] */
  ECX = (r32((uint32_t)(0x106109e8)));
  /* 105efd39 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 105efd3c mov edx, dword ptr [0x1060fd98] */
  EDX = (r32((uint32_t)(0x1060fd98)));
  /* 105efd42 mov eax, dword ptr [0x106109ec] */
  EAX = (r32((uint32_t)(0x106109ec)));
  /* 105efd47 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 105efd4a mov ecx, dword ptr [0x1060fd98] */
  ECX = (r32((uint32_t)(0x1060fd98)));
  /* 105efd50 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105efd52 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105efd54 mov byte ptr [0x1060f15c], al */
  w8((uint32_t)(0x1060f15c), (AL));
  /* 105efd59 mov dword ptr [0x1060f160], 1 */
  w32((uint32_t)(0x1060f160), (0x1u));
  /* 105efd63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105efd65 jmp 0x105efe92 */
  goto L_105efe92;
L_105efd6a:;
  /* 105efd6a push 2 */
  push32((uint32_t)(0x2u));
  /* 105efd6c mov ecx, dword ptr [0x106109e4] */
  ECX = (r32((uint32_t)(0x106109e4)));
  /* 105efd72 push ecx */
  push32((uint32_t)(ECX));
  /* 105efd73 call 0x105e6920 */
  push32(0x105efd78u); f_105e6920();
  /* 105efd78 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105efd7b push 2 */
  push32((uint32_t)(0x2u));
  /* 105efd7d mov edx, dword ptr [0x106109e8] */
  EDX = (r32((uint32_t)(0x106109e8)));
  /* 105efd83 push edx */
  push32((uint32_t)(EDX));
  /* 105efd84 call 0x105e6920 */
  push32(0x105efd89u); f_105e6920();
  /* 105efd89 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105efd8c push 2 */
  push32((uint32_t)(0x2u));
  /* 105efd8e mov eax, dword ptr [0x106109ec] */
  EAX = (r32((uint32_t)(0x106109ec)));
  /* 105efd93 push eax */
  push32((uint32_t)(EAX));
  /* 105efd94 call 0x105e6920 */
  push32(0x105efd99u); f_105e6920();
  /* 105efd99 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105efd9c mov dword ptr [0x106109e4], 0 */
  w32((uint32_t)(0x106109e4), (0x0u));
  /* 105efda6 mov dword ptr [0x106109e8], 0 */
  w32((uint32_t)(0x106109e8), (0x0u));
  /* 105efdb0 mov dword ptr [0x106109ec], 0 */
  w32((uint32_t)(0x106109ec), (0x0u));
  /* 105efdba push 0x88 */
  push32((uint32_t)(0x88u));
  /* 105efdbf push 0x1060c830 */
  push32((uint32_t)(0x1060c830u));
  /* 105efdc4 push 2 */
  push32((uint32_t)(0x2u));
  /* 105efdc6 push 2 */
  push32((uint32_t)(0x2u));
  /* 105efdc8 call 0x105e5e90 */
  push32(0x105efdcdu); f_105e5e90();
  /* 105efdcd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105efdd0 mov ecx, dword ptr [0x1060fd98] */
  ECX = (r32((uint32_t)(0x1060fd98)));
  /* 105efdd6 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 105efdd8 mov edx, dword ptr [0x1060fd98] */
  EDX = (r32((uint32_t)(0x1060fd98)));
  /* 105efdde cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105efde1 jne 0x105efdeb */
  if (!C.zf) goto L_105efdeb;
  /* 105efde3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105efde6 jmp 0x105efe92 */
  goto L_105efe92;
L_105efdeb:;
  /* 105efdeb push 0x1060c7cc */
  push32((uint32_t)(0x1060c7ccu));
  /* 105efdf0 mov eax, dword ptr [0x1060fd98] */
  EAX = (r32((uint32_t)(0x1060fd98)));
  /* 105efdf5 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105efdf7 push ecx */
  push32((uint32_t)(ECX));
  /* 105efdf8 call 0x105e8e40 */
  push32(0x105efdfdu); f_105e8e40();
  /* 105efdfd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105efe00 push 0x8d */
  push32((uint32_t)(0x8du));
  /* 105efe05 push 0x1060c830 */
  push32((uint32_t)(0x1060c830u));
  /* 105efe0a push 2 */
  push32((uint32_t)(0x2u));
  /* 105efe0c push 2 */
  push32((uint32_t)(0x2u));
  /* 105efe0e call 0x105e5e90 */
  push32(0x105efe13u); f_105e5e90();
  /* 105efe13 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105efe16 mov edx, dword ptr [0x1060fd98] */
  EDX = (r32((uint32_t)(0x1060fd98)));
  /* 105efe1c mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 105efe1f mov eax, dword ptr [0x1060fd98] */
  EAX = (r32((uint32_t)(0x1060fd98)));
  /* 105efe24 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105efe28 jne 0x105efe2f */
  if (!C.zf) goto L_105efe2f;
  /* 105efe2a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105efe2d jmp 0x105efe92 */
  goto L_105efe92;
L_105efe2f:;
  /* 105efe2f mov ecx, dword ptr [0x1060fd98] */
  ECX = (r32((uint32_t)(0x1060fd98)));
  /* 105efe35 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 105efe38 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 105efe3b push 0x92 */
  push32((uint32_t)(0x92u));
  /* 105efe40 push 0x1060c830 */
  push32((uint32_t)(0x1060c830u));
  /* 105efe45 push 2 */
  push32((uint32_t)(0x2u));
  /* 105efe47 push 2 */
  push32((uint32_t)(0x2u));
  /* 105efe49 call 0x105e5e90 */
  push32(0x105efe4eu); f_105e5e90();
  /* 105efe4e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105efe51 mov ecx, dword ptr [0x1060fd98] */
  ECX = (r32((uint32_t)(0x1060fd98)));
  /* 105efe57 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 105efe5a mov edx, dword ptr [0x1060fd98] */
  EDX = (r32((uint32_t)(0x1060fd98)));
  /* 105efe60 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105efe64 jne 0x105efe6b */
  if (!C.zf) goto L_105efe6b;
  /* 105efe66 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105efe69 jmp 0x105efe92 */
  goto L_105efe92;
L_105efe6b:;
  /* 105efe6b mov eax, dword ptr [0x1060fd98] */
  EAX = (r32((uint32_t)(0x1060fd98)));
  /* 105efe70 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 105efe73 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 105efe76 mov edx, dword ptr [0x1060fd98] */
  EDX = (r32((uint32_t)(0x1060fd98)));
  /* 105efe7c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105efe7e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 105efe80 mov byte ptr [0x1060f15c], cl */
  w8((uint32_t)(0x1060f15c), (CL));
  /* 105efe86 mov dword ptr [0x1060f160], 1 */
  w32((uint32_t)(0x1060f160), (0x1u));
  /* 105efe90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105efe92:;
  /* 105efe92 mov esp, ebp */
  ESP = (EBP);
  /* 105efe94 pop ebp */
  EBP = (pop32());
  /* 105efe95 ret  */
  ESPCHK(0x105efbf0u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x105efea0 (125 bytes, 49 insns) */
void f_105efea0(void) {
  FTRACE(0x105efea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105efea0 push ebp */
  push32((uint32_t)(EBP));
  /* 105efea1 mov ebp, esp */
  EBP = (ESP);
  /* 105efea3 push ecx */
  push32((uint32_t)(ECX));
L_105efea4:;
  /* 105efea4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105efea7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105efeaa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105efeac je 0x105eff19 */
  if (C.zf) goto L_105eff19;
  /* 105efeae mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105efeb1 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105efeb4 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105efeb7 jl 0x105efedd */
  if ((C.sf!=C.of)) goto L_105efedd;
  /* 105efeb9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105efebc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 105efebf cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105efec2 jg 0x105efedd */
  if ((!C.zf&&C.sf==C.of)) goto L_105efedd;
  /* 105efec4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105efec7 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105efeca sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105efecd mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105efed0 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 105efed2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105efed5 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105efed8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 105efedb jmp 0x105eff17 */
  goto L_105eff17;
L_105efedd:;
  /* 105efedd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105efee0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 105efee3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105efee6 jne 0x105eff0e */
  if (!C.zf) goto L_105eff0e;
  /* 105efee8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105efeeb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105efeee:;
  /* 105efeee mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105efef1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105efef4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 105efef7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 105efef9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105efefc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105efeff mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105eff02 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105eff05 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105eff08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105eff0a jne 0x105efeee */
  if (!C.zf) goto L_105efeee;
  /* 105eff0c jmp 0x105eff17 */
  goto L_105eff17;
L_105eff0e:;
  /* 105eff0e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105eff11 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105eff14 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_105eff17:;
  /* 105eff17 jmp 0x105efea4 */
  goto L_105efea4;
L_105eff19:;
  /* 105eff19 mov esp, ebp */
  ESP = (EBP);
  /* 105eff1b pop ebp */
  EBP = (pop32());
  /* 105eff1c ret  */
  ESPCHK(0x105efea0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ff20 @ 0x105eff20 (304 bytes, 85 insns) */
void f_105eff20(void) {
  FTRACE(0x105eff20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105eff20 push ebp */
  push32((uint32_t)(EBP));
  /* 105eff21 mov ebp, esp */
  EBP = (ESP);
  /* 105eff23 push ecx */
  push32((uint32_t)(ECX));
  /* 105eff24 cmp dword ptr [0x106109c4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106109c4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eff2b je 0x105effec */
  if (C.zf) goto L_105effec;
  /* 105eff31 push 0x4a */
  push32((uint32_t)(0x4au));
  /* 105eff33 push 0x1060c83c */
  push32((uint32_t)(0x1060c83cu));
  /* 105eff38 push 2 */
  push32((uint32_t)(0x2u));
  /* 105eff3a push 0x30 */
  push32((uint32_t)(0x30u));
  /* 105eff3c push 1 */
  push32((uint32_t)(0x1u));
  /* 105eff3e call 0x105e62a0 */
  push32(0x105eff43u); f_105e62a0();
  /* 105eff43 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105eff46 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105eff49 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105eff4d jne 0x105eff59 */
  if (!C.zf) goto L_105eff59;
  /* 105eff4f mov eax, 1 */
  EAX = (0x1u);
  /* 105eff54 jmp 0x105f004c */
  goto L_105f004c;
L_105eff59:;
  /* 105eff59 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105eff5c push eax */
  push32((uint32_t)(EAX));
  /* 105eff5d call 0x105f0050 */
  push32(0x105eff62u); f_105f0050();
  /* 105eff62 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105eff65 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105eff67 je 0x105eff8d */
  if (C.zf) goto L_105eff8d;
  /* 105eff69 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105eff6c push ecx */
  push32((uint32_t)(ECX));
  /* 105eff6d call 0x105f02e0 */
  push32(0x105eff72u); f_105f02e0();
  /* 105eff72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105eff75 push 2 */
  push32((uint32_t)(0x2u));
  /* 105eff77 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105eff7a push edx */
  push32((uint32_t)(EDX));
  /* 105eff7b call 0x105e6920 */
  push32(0x105eff80u); f_105e6920();
  /* 105eff80 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105eff83 mov eax, 1 */
  EAX = (0x1u);
  /* 105eff88 jmp 0x105f004c */
  goto L_105f004c;
L_105eff8d:;
  /* 105eff8d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105eff90 mov ecx, dword ptr [0x1060fd98] */
  ECX = (r32((uint32_t)(0x1060fd98)));
  /* 105eff96 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105eff98 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 105eff9a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105eff9d mov ecx, dword ptr [0x1060fd98] */
  ECX = (r32((uint32_t)(0x1060fd98)));
  /* 105effa3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 105effa6 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 105effa9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105effac mov ecx, dword ptr [0x1060fd98] */
  ECX = (r32((uint32_t)(0x1060fd98)));
  /* 105effb2 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 105effb5 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 105effb8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105effbb mov dword ptr [0x1060fd98], eax */
  w32((uint32_t)(0x1060fd98), (EAX));
  /* 105effc0 mov ecx, dword ptr [0x106109f0] */
  ECX = (r32((uint32_t)(0x106109f0)));
  /* 105effc6 push ecx */
  push32((uint32_t)(ECX));
  /* 105effc7 call 0x105f02e0 */
  push32(0x105effccu); f_105f02e0();
  /* 105effcc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105effcf push 2 */
  push32((uint32_t)(0x2u));
  /* 105effd1 mov edx, dword ptr [0x106109f0] */
  EDX = (r32((uint32_t)(0x106109f0)));
  /* 105effd7 push edx */
  push32((uint32_t)(EDX));
  /* 105effd8 call 0x105e6920 */
  push32(0x105effddu); f_105e6920();
  /* 105effdd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105effe0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105effe3 mov dword ptr [0x106109f0], eax */
  w32((uint32_t)(0x106109f0), (EAX));
  /* 105effe8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105effea jmp 0x105f004c */
  goto L_105f004c;
L_105effec:;
  /* 105effec mov ecx, dword ptr [0x1060fd98] */
  ECX = (r32((uint32_t)(0x1060fd98)));
  /* 105efff2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105efff4 mov dword ptr [0x1060fd68], edx */
  w32((uint32_t)(0x1060fd68), (EDX));
  /* 105efffa mov eax, dword ptr [0x1060fd98] */
  EAX = (r32((uint32_t)(0x1060fd98)));
  /* 105effff mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 105f0002 mov dword ptr [0x1060fd6c], ecx */
  w32((uint32_t)(0x1060fd6c), (ECX));
  /* 105f0008 mov edx, dword ptr [0x1060fd98] */
  EDX = (r32((uint32_t)(0x1060fd98)));
  /* 105f000e mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 105f0011 mov dword ptr [0x1060fd70], eax */
  w32((uint32_t)(0x1060fd70), (EAX));
  /* 105f0016 mov dword ptr [0x1060fd98], 0x1060fd68 */
  w32((uint32_t)(0x1060fd98), (0x1060fd68u));
  /* 105f0020 mov ecx, dword ptr [0x106109f0] */
  ECX = (r32((uint32_t)(0x106109f0)));
  /* 105f0026 push ecx */
  push32((uint32_t)(ECX));
  /* 105f0027 call 0x105f02e0 */
  push32(0x105f002cu); f_105f02e0();
  /* 105f002c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f002f push 2 */
  push32((uint32_t)(0x2u));
  /* 105f0031 mov edx, dword ptr [0x106109f0] */
  EDX = (r32((uint32_t)(0x106109f0)));
  /* 105f0037 push edx */
  push32((uint32_t)(EDX));
  /* 105f0038 call 0x105e6920 */
  push32(0x105f003du); f_105e6920();
  /* 105f003d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0040 mov dword ptr [0x106109f0], 0 */
  w32((uint32_t)(0x106109f0), (0x0u));
  /* 105f004a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105f004c:;
  /* 105f004c mov esp, ebp */
  ESP = (EBP);
  /* 105f004e pop ebp */
  EBP = (pop32());
  /* 105f004f ret  */
  ESPCHK(0x105eff20u, _esp0);
  ESP += 4; return;
}

/* FUN_10010050 @ 0x105f0050 (525 bytes, 200 insns) */
void f_105f0050(void) {
  FTRACE(0x105f0050u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f0050 push ebp */
  push32((uint32_t)(EBP));
  /* 105f0051 mov ebp, esp */
  EBP = (ESP);
  /* 105f0053 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f0056 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 105f005d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f005f mov ax, word ptr [0x10610a10] */
  AX = (r16((uint32_t)(0x10610a10)));
  /* 105f0065 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105f0068 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f006c jne 0x105f0076 */
  if (!C.zf) goto L_105f0076;
  /* 105f006e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105f0071 jmp 0x105f0259 */
  goto L_105f0259;
L_105f0076:;
  /* 105f0076 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f0079 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f007c push ecx */
  push32((uint32_t)(ECX));
  /* 105f007d push 0x15 */
  push32((uint32_t)(0x15u));
  /* 105f007f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f0082 push edx */
  push32((uint32_t)(EDX));
  /* 105f0083 push 1 */
  push32((uint32_t)(0x1u));
  /* 105f0085 call 0x105f2e30 */
  push32(0x105f008au); f_105f2e30();
  /* 105f008a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f008d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f0090 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105f0092 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105f0095 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f0098 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f009b push edx */
  push32((uint32_t)(EDX));
  /* 105f009c push 0x14 */
  push32((uint32_t)(0x14u));
  /* 105f009e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f00a1 push eax */
  push32((uint32_t)(EAX));
  /* 105f00a2 push 1 */
  push32((uint32_t)(0x1u));
  /* 105f00a4 call 0x105f2e30 */
  push32(0x105f00a9u); f_105f2e30();
  /* 105f00a9 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f00ac mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f00af or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105f00b1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105f00b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f00b7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f00ba push edx */
  push32((uint32_t)(EDX));
  /* 105f00bb push 0x16 */
  push32((uint32_t)(0x16u));
  /* 105f00bd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f00c0 push eax */
  push32((uint32_t)(EAX));
  /* 105f00c1 push 1 */
  push32((uint32_t)(0x1u));
  /* 105f00c3 call 0x105f2e30 */
  push32(0x105f00c8u); f_105f2e30();
  /* 105f00c8 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f00cb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f00ce or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105f00d0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105f00d3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f00d6 add edx, 0x18 */
  { uint32_t _a=(EDX),_b=(0x18u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f00d9 push edx */
  push32((uint32_t)(EDX));
  /* 105f00da push 0x17 */
  push32((uint32_t)(0x17u));
  /* 105f00dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f00df push eax */
  push32((uint32_t)(EAX));
  /* 105f00e0 push 1 */
  push32((uint32_t)(0x1u));
  /* 105f00e2 call 0x105f2e30 */
  push32(0x105f00e7u); f_105f2e30();
  /* 105f00e7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f00ea mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f00ed or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105f00ef mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105f00f2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f00f5 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f00f8 push edx */
  push32((uint32_t)(EDX));
  /* 105f00f9 push 0x18 */
  push32((uint32_t)(0x18u));
  /* 105f00fb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f00fe push eax */
  push32((uint32_t)(EAX));
  /* 105f00ff push 1 */
  push32((uint32_t)(0x1u));
  /* 105f0101 call 0x105f2e30 */
  push32(0x105f0106u); f_105f2e30();
  /* 105f0106 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0109 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f010c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105f010e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105f0111 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f0114 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 105f0117 push eax */
  push32((uint32_t)(EAX));
  /* 105f0118 call 0x105f0260 */
  push32(0x105f011du); f_105f0260();
  /* 105f011d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0120 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f0123 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0126 push ecx */
  push32((uint32_t)(ECX));
  /* 105f0127 push 0x50 */
  push32((uint32_t)(0x50u));
  /* 105f0129 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f012c push edx */
  push32((uint32_t)(EDX));
  /* 105f012d push 1 */
  push32((uint32_t)(0x1u));
  /* 105f012f call 0x105f2e30 */
  push32(0x105f0134u); f_105f2e30();
  /* 105f0134 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0137 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f013a or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105f013c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105f013f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f0142 add edx, 0x24 */
  { uint32_t _a=(EDX),_b=(0x24u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0145 push edx */
  push32((uint32_t)(EDX));
  /* 105f0146 push 0x51 */
  push32((uint32_t)(0x51u));
  /* 105f0148 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f014b push eax */
  push32((uint32_t)(EAX));
  /* 105f014c push 1 */
  push32((uint32_t)(0x1u));
  /* 105f014e call 0x105f2e30 */
  push32(0x105f0153u); f_105f2e30();
  /* 105f0153 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0156 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f0159 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105f015b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105f015e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f0161 add edx, 0x28 */
  { uint32_t _a=(EDX),_b=(0x28u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0164 push edx */
  push32((uint32_t)(EDX));
  /* 105f0165 push 0x1a */
  push32((uint32_t)(0x1au));
  /* 105f0167 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f016a push eax */
  push32((uint32_t)(EAX));
  /* 105f016b push 0 */
  push32((uint32_t)(0x0u));
  /* 105f016d call 0x105f2e30 */
  push32(0x105f0172u); f_105f2e30();
  /* 105f0172 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0175 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f0178 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105f017a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105f017d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f0180 add edx, 0x29 */
  { uint32_t _a=(EDX),_b=(0x29u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0183 push edx */
  push32((uint32_t)(EDX));
  /* 105f0184 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 105f0186 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f0189 push eax */
  push32((uint32_t)(EAX));
  /* 105f018a push 0 */
  push32((uint32_t)(0x0u));
  /* 105f018c call 0x105f2e30 */
  push32(0x105f0191u); f_105f2e30();
  /* 105f0191 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0194 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f0197 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105f0199 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105f019c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f019f add edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f01a2 push edx */
  push32((uint32_t)(EDX));
  /* 105f01a3 push 0x54 */
  push32((uint32_t)(0x54u));
  /* 105f01a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f01a8 push eax */
  push32((uint32_t)(EAX));
  /* 105f01a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f01ab call 0x105f2e30 */
  push32(0x105f01b0u); f_105f2e30();
  /* 105f01b0 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f01b3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f01b6 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105f01b8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105f01bb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f01be add edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f01c1 push edx */
  push32((uint32_t)(EDX));
  /* 105f01c2 push 0x55 */
  push32((uint32_t)(0x55u));
  /* 105f01c4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f01c7 push eax */
  push32((uint32_t)(EAX));
  /* 105f01c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f01ca call 0x105f2e30 */
  push32(0x105f01cfu); f_105f2e30();
  /* 105f01cf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f01d2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f01d5 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105f01d7 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105f01da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f01dd add edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f01e0 push edx */
  push32((uint32_t)(EDX));
  /* 105f01e1 push 0x56 */
  push32((uint32_t)(0x56u));
  /* 105f01e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f01e6 push eax */
  push32((uint32_t)(EAX));
  /* 105f01e7 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f01e9 call 0x105f2e30 */
  push32(0x105f01eeu); f_105f2e30();
  /* 105f01ee add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f01f1 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f01f4 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105f01f6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105f01f9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f01fc add edx, 0x2d */
  { uint32_t _a=(EDX),_b=(0x2du),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f01ff push edx */
  push32((uint32_t)(EDX));
  /* 105f0200 push 0x57 */
  push32((uint32_t)(0x57u));
  /* 105f0202 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f0205 push eax */
  push32((uint32_t)(EAX));
  /* 105f0206 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f0208 call 0x105f2e30 */
  push32(0x105f020du); f_105f2e30();
  /* 105f020d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0210 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f0213 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105f0215 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105f0218 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f021b add edx, 0x2e */
  { uint32_t _a=(EDX),_b=(0x2eu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f021e push edx */
  push32((uint32_t)(EDX));
  /* 105f021f push 0x52 */
  push32((uint32_t)(0x52u));
  /* 105f0221 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f0224 push eax */
  push32((uint32_t)(EAX));
  /* 105f0225 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f0227 call 0x105f2e30 */
  push32(0x105f022cu); f_105f2e30();
  /* 105f022c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f022f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f0232 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105f0234 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105f0237 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f023a add edx, 0x2f */
  { uint32_t _a=(EDX),_b=(0x2fu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f023d push edx */
  push32((uint32_t)(EDX));
  /* 105f023e push 0x53 */
  push32((uint32_t)(0x53u));
  /* 105f0240 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f0243 push eax */
  push32((uint32_t)(EAX));
  /* 105f0244 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f0246 call 0x105f2e30 */
  push32(0x105f024bu); f_105f2e30();
  /* 105f024b add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f024e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f0251 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105f0253 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105f0256 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_105f0259:;
  /* 105f0259 mov esp, ebp */
  ESP = (EBP);
  /* 105f025b pop ebp */
  EBP = (pop32());
  /* 105f025c ret  */
  ESPCHK(0x105f0050u, _esp0);
  ESP += 4; return;
}

/* fix_grouping @ 0x105f0260 (125 bytes, 49 insns) */
void f_105f0260(void) {
  FTRACE(0x105f0260u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f0260 push ebp */
  push32((uint32_t)(EBP));
  /* 105f0261 mov ebp, esp */
  EBP = (ESP);
  /* 105f0263 push ecx */
  push32((uint32_t)(ECX));
L_105f0264:;
  /* 105f0264 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f0267 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105f026a test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105f026c je 0x105f02d9 */
  if (C.zf) goto L_105f02d9;
  /* 105f026e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f0271 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105f0274 cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f0277 jl 0x105f029d */
  if ((C.sf!=C.of)) goto L_105f029d;
  /* 105f0279 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f027c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 105f027f cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f0282 jg 0x105f029d */
  if ((!C.zf&&C.sf==C.of)) goto L_105f029d;
  /* 105f0284 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f0287 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105f028a sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f028d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f0290 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 105f0292 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f0295 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0298 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 105f029b jmp 0x105f02d7 */
  goto L_105f02d7;
L_105f029d:;
  /* 105f029d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f02a0 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 105f02a3 cmp edx, 0x3b */
  { uint32_t _a=(EDX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f02a6 jne 0x105f02ce */
  if (!C.zf) goto L_105f02ce;
  /* 105f02a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f02ab mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105f02ae:;
  /* 105f02ae mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f02b1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f02b4 mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 105f02b7 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 105f02b9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f02bc add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f02bf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105f02c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f02c5 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105f02c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f02ca jne 0x105f02ae */
  if (!C.zf) goto L_105f02ae;
  /* 105f02cc jmp 0x105f02d7 */
  goto L_105f02d7;
L_105f02ce:;
  /* 105f02ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f02d1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f02d4 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_105f02d7:;
  /* 105f02d7 jmp 0x105f0264 */
  goto L_105f0264;
L_105f02d9:;
  /* 105f02d9 mov esp, ebp */
  ESP = (EBP);
  /* 105f02db pop ebp */
  EBP = (pop32());
  /* 105f02dc ret  */
  ESPCHK(0x105f0260u, _esp0);
  ESP += 4; return;
}

/* FUN_100102e0 @ 0x105f02e0 (147 bytes, 52 insns) */
void f_105f02e0(void) {
  FTRACE(0x105f02e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f02e0 push ebp */
  push32((uint32_t)(EBP));
  /* 105f02e1 mov ebp, esp */
  EBP = (ESP);
  /* 105f02e3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f02e7 jne 0x105f02ee */
  if (!C.zf) goto L_105f02ee;
  /* 105f02e9 jmp 0x105f0371 */
  goto L_105f0371;
L_105f02ee:;
  /* 105f02ee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f02f1 cmp dword ptr [eax + 0xc], 0x10610a4c */
  { uint32_t _a=(r32((uint32_t)(EAX + 0xc))),_b=(0x10610a4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f02f8 je 0x105f0371 */
  if (C.zf) goto L_105f0371;
  /* 105f02fa push 2 */
  push32((uint32_t)(0x2u));
  /* 105f02fc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f02ff mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 105f0302 push edx */
  push32((uint32_t)(EDX));
  /* 105f0303 call 0x105e6920 */
  push32(0x105f0308u); f_105e6920();
  /* 105f0308 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f030b push 2 */
  push32((uint32_t)(0x2u));
  /* 105f030d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f0310 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 105f0313 push ecx */
  push32((uint32_t)(ECX));
  /* 105f0314 call 0x105e6920 */
  push32(0x105f0319u); f_105e6920();
  /* 105f0319 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f031c push 2 */
  push32((uint32_t)(0x2u));
  /* 105f031e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f0321 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 105f0324 push eax */
  push32((uint32_t)(EAX));
  /* 105f0325 call 0x105e6920 */
  push32(0x105f032au); f_105e6920();
  /* 105f032a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f032d push 2 */
  push32((uint32_t)(0x2u));
  /* 105f032f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f0332 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 105f0335 push edx */
  push32((uint32_t)(EDX));
  /* 105f0336 call 0x105e6920 */
  push32(0x105f033bu); f_105e6920();
  /* 105f033b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f033e push 2 */
  push32((uint32_t)(0x2u));
  /* 105f0340 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f0343 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 105f0346 push ecx */
  push32((uint32_t)(ECX));
  /* 105f0347 call 0x105e6920 */
  push32(0x105f034cu); f_105e6920();
  /* 105f034c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f034f push 2 */
  push32((uint32_t)(0x2u));
  /* 105f0351 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f0354 mov eax, dword ptr [edx + 0x20] */
  EAX = (r32((uint32_t)(EDX + 0x20)));
  /* 105f0357 push eax */
  push32((uint32_t)(EAX));
  /* 105f0358 call 0x105e6920 */
  push32(0x105f035du); f_105e6920();
  /* 105f035d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0360 push 2 */
  push32((uint32_t)(0x2u));
  /* 105f0362 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f0365 mov edx, dword ptr [ecx + 0x24] */
  EDX = (r32((uint32_t)(ECX + 0x24)));
  /* 105f0368 push edx */
  push32((uint32_t)(EDX));
  /* 105f0369 call 0x105e6920 */
  push32(0x105f036eu); f_105e6920();
  /* 105f036e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105f0371:;
  /* 105f0371 pop ebp */
  EBP = (pop32());
  /* 105f0372 ret  */
  ESPCHK(0x105f02e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010380 @ 0x105f0380 (928 bytes, 284 insns) */
void f_105f0380(void) {
  FTRACE(0x105f0380u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f0380 push ebp */
  push32((uint32_t)(EBP));
  /* 105f0381 mov ebp, esp */
  EBP = (ESP);
  /* 105f0383 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f0386 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 105f038d mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 105f0394 cmp dword ptr [0x106109c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106109c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f039b je 0x105f06d1 */
  if (C.zf) goto L_105f06d1;
  /* 105f03a1 cmp dword ptr [0x106109d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106109d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f03a8 jne 0x105f03d0 */
  if (!C.zf) goto L_105f03d0;
  /* 105f03aa push 0x106109d0 */
  push32((uint32_t)(0x106109d0u));
  /* 105f03af push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 105f03b4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f03b6 mov ax, word ptr [0x10610a08] */
  AX = (r16((uint32_t)(0x10610a08)));
  /* 105f03bc push eax */
  push32((uint32_t)(EAX));
  /* 105f03bd push 0 */
  push32((uint32_t)(0x0u));
  /* 105f03bf call 0x105f2e30 */
  push32(0x105f03c4u); f_105f2e30();
  /* 105f03c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f03c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f03c9 je 0x105f03d0 */
  if (C.zf) goto L_105f03d0;
  /* 105f03cb jmp 0x105f0692 */
  goto L_105f0692;
L_105f03d0:;
  /* 105f03d0 push 0x5c */
  push32((uint32_t)(0x5cu));
  /* 105f03d2 push 0x1060c848 */
  push32((uint32_t)(0x1060c848u));
  /* 105f03d7 push 2 */
  push32((uint32_t)(0x2u));
  /* 105f03d9 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 105f03de call 0x105e5e90 */
  push32(0x105f03e3u); f_105e5e90();
  /* 105f03e3 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f03e6 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 105f03e9 push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 105f03eb push 0x1060c848 */
  push32((uint32_t)(0x1060c848u));
  /* 105f03f0 push 2 */
  push32((uint32_t)(0x2u));
  /* 105f03f2 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 105f03f7 call 0x105e5e90 */
  push32(0x105f03fcu); f_105e5e90();
  /* 105f03fc add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f03ff mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 105f0402 push 0x60 */
  push32((uint32_t)(0x60u));
  /* 105f0404 push 0x1060c848 */
  push32((uint32_t)(0x1060c848u));
  /* 105f0409 push 2 */
  push32((uint32_t)(0x2u));
  /* 105f040b push 0x101 */
  push32((uint32_t)(0x101u));
  /* 105f0410 call 0x105e5e90 */
  push32(0x105f0415u); f_105e5e90();
  /* 105f0415 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0418 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 105f041b push 0x62 */
  push32((uint32_t)(0x62u));
  /* 105f041d push 0x1060c848 */
  push32((uint32_t)(0x1060c848u));
  /* 105f0422 push 2 */
  push32((uint32_t)(0x2u));
  /* 105f0424 push 0x202 */
  push32((uint32_t)(0x202u));
  /* 105f0429 call 0x105e5e90 */
  push32(0x105f042eu); f_105e5e90();
  /* 105f042e add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0431 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 105f0434 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f0438 je 0x105f044c */
  if (C.zf) goto L_105f044c;
  /* 105f043a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f043e je 0x105f044c */
  if (C.zf) goto L_105f044c;
  /* 105f0440 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f0444 je 0x105f044c */
  if (C.zf) goto L_105f044c;
  /* 105f0446 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f044a jne 0x105f0451 */
  if (!C.zf) goto L_105f0451;
L_105f044c:;
  /* 105f044c jmp 0x105f0692 */
  goto L_105f0692;
L_105f0451:;
  /* 105f0451 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105f0454 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 105f0457 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 105f045e jmp 0x105f0469 */
  goto L_105f0469;
L_105f0460:;
  /* 105f0460 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 105f0463 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0466 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_105f0469:;
  /* 105f0469 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f0470 jge 0x105f0485 */
  if ((C.sf==C.of)) goto L_105f0485;
  /* 105f0472 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105f0475 mov cl, byte ptr [ebp - 0x20] */
  CL = (r8((uint32_t)(EBP + -0x20)));
  /* 105f0478 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 105f047a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105f047d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0480 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 105f0483 jmp 0x105f0460 */
  goto L_105f0460;
L_105f0485:;
  /* 105f0485 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 105f0488 push eax */
  push32((uint32_t)(EAX));
  /* 105f0489 mov ecx, dword ptr [0x106109d0] */
  ECX = (r32((uint32_t)(0x106109d0)));
  /* 105f048f push ecx */
  push32((uint32_t)(ECX));
  /* 105f0490 call dword ptr [0x106132c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132c0))), 0x105f0496u);
  /* 105f0496 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f0498 jne 0x105f049f */
  if (!C.zf) goto L_105f049f;
  /* 105f049a jmp 0x105f0692 */
  goto L_105f0692;
L_105f049f:;
  /* 105f049f cmp dword ptr [ebp - 0x14], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f04a3 jbe 0x105f04aa */
  if ((C.cf||C.zf)) goto L_105f04aa;
  /* 105f04a5 jmp 0x105f0692 */
  goto L_105f0692;
L_105f04aa:;
  /* 105f04aa mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105f04ad and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 105f04b3 mov dword ptr [0x1060f158], edx */
  w32((uint32_t)(0x1060f158), (EDX));
  /* 105f04b9 cmp dword ptr [0x1060f158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1060f158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f04c0 jle 0x105f0519 */
  if ((C.zf||C.sf!=C.of)) goto L_105f0519;
  /* 105f04c2 lea eax, [ebp - 0xe] */
  EAX = ((uint32_t)(EBP + -0xe));
  /* 105f04c5 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 105f04c8 jmp 0x105f04d3 */
  goto L_105f04d3;
L_105f04ca:;
  /* 105f04ca mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105f04cd add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f04d0 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_105f04d3:;
  /* 105f04d3 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105f04d6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f04d8 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105f04da test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f04dc je 0x105f0519 */
  if (C.zf) goto L_105f0519;
  /* 105f04de mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105f04e1 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105f04e3 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 105f04e6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105f04e8 je 0x105f0519 */
  if (C.zf) goto L_105f0519;
  /* 105f04ea mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105f04ed xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105f04ef mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 105f04f1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 105f04f4 jmp 0x105f04ff */
  goto L_105f04ff;
L_105f04f6:;
  /* 105f04f6 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 105f04f9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f04fc mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_105f04ff:;
  /* 105f04ff mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105f0502 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105f0504 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 105f0507 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f050a jg 0x105f0517 */
  if ((!C.zf&&C.sf==C.of)) goto L_105f0517;
  /* 105f050c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105f050f add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0512 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 105f0515 jmp 0x105f04f6 */
  goto L_105f04f6;
L_105f0517:;
  /* 105f0517 jmp 0x105f04ca */
  goto L_105f04ca;
L_105f0519:;
  /* 105f0519 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f051b push 0 */
  push32((uint32_t)(0x0u));
  /* 105f051d push 0 */
  push32((uint32_t)(0x0u));
  /* 105f051f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105f0522 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0525 push eax */
  push32((uint32_t)(EAX));
  /* 105f0526 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 105f052b mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105f052e push ecx */
  push32((uint32_t)(ECX));
  /* 105f052f push 1 */
  push32((uint32_t)(0x1u));
  /* 105f0531 call 0x105eeb20 */
  push32(0x105f0536u); f_105eeb20();
  /* 105f0536 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0539 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f053b jne 0x105f0542 */
  if (!C.zf) goto L_105f0542;
  /* 105f053d jmp 0x105f0692 */
  goto L_105f0692;
L_105f0542:;
  /* 105f0542 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105f0545 mov word ptr [edx], 0 */
  w16((uint32_t)(EDX), (0x0u));
  /* 105f054a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 105f054d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 105f0550 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 105f0557 jmp 0x105f0562 */
  goto L_105f0562;
L_105f0559:;
  /* 105f0559 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105f055c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f055f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_105f0562:;
  /* 105f0562 cmp dword ptr [ebp - 0x20], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f0569 jge 0x105f0580 */
  if ((C.sf==C.of)) goto L_105f0580;
  /* 105f056b mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 105f056e mov ax, word ptr [ebp - 0x20] */
  AX = (r16((uint32_t)(EBP + -0x20)));
  /* 105f0572 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 105f0575 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105f0578 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f057b mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 105f057e jmp 0x105f0559 */
  goto L_105f0559;
L_105f0580:;
  /* 105f0580 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f0582 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f0584 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105f0587 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f058a push edx */
  push32((uint32_t)(EDX));
  /* 105f058b push 0x100 */
  push32((uint32_t)(0x100u));
  /* 105f0590 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 105f0593 push eax */
  push32((uint32_t)(EAX));
  /* 105f0594 push 1 */
  push32((uint32_t)(0x1u));
  /* 105f0596 call 0x105f30d0 */
  push32(0x105f059bu); f_105f30d0();
  /* 105f059b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f059e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f05a0 jne 0x105f05a7 */
  if (!C.zf) goto L_105f05a7;
  /* 105f05a2 jmp 0x105f0692 */
  goto L_105f0692;
L_105f05a7:;
  /* 105f05a7 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105f05aa mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 105f05af cmp dword ptr [0x1060f158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1060f158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f05b6 jle 0x105f0613 */
  if ((C.zf||C.sf!=C.of)) goto L_105f0613;
  /* 105f05b8 lea edx, [ebp - 0xe] */
  EDX = ((uint32_t)(EBP + -0xe));
  /* 105f05bb mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 105f05be jmp 0x105f05c9 */
  goto L_105f05c9;
L_105f05c0:;
  /* 105f05c0 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105f05c3 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f05c6 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_105f05c9:;
  /* 105f05c9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105f05cc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105f05ce mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105f05d0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105f05d2 je 0x105f0613 */
  if (C.zf) goto L_105f0613;
  /* 105f05d4 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105f05d7 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105f05d9 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 105f05dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105f05de je 0x105f0613 */
  if (C.zf) goto L_105f0613;
  /* 105f05e0 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105f05e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f05e5 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105f05e7 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 105f05ea jmp 0x105f05f5 */
  goto L_105f05f5;
L_105f05ec:;
  /* 105f05ec mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105f05ef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f05f2 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_105f05f5:;
  /* 105f05f5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105f05f8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f05fa mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 105f05fd cmp dword ptr [ebp - 0x20], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f0600 jg 0x105f0611 */
  if ((!C.zf&&C.sf==C.of)) goto L_105f0611;
  /* 105f0602 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105f0605 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105f0608 mov word ptr [edx + ecx*2 + 2], 0x8000 */
  w16((uint32_t)(EDX + ECX*2 + 0x2), (0x8000u));
  /* 105f060f jmp 0x105f05ec */
  goto L_105f05ec;
L_105f0611:;
  /* 105f0611 jmp 0x105f05c0 */
  goto L_105f05c0;
L_105f0613:;
  /* 105f0613 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105f0616 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0619 mov dword ptr [0x1060ede8], eax */
  w32((uint32_t)(0x1060ede8), (EAX));
  /* 105f061e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105f0621 add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0624 mov dword ptr [0x1060edec], ecx */
  w32((uint32_t)(0x1060edec), (ECX));
  /* 105f062a cmp dword ptr [0x106109f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106109f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f0631 je 0x105f0644 */
  if (C.zf) goto L_105f0644;
  /* 105f0633 push 2 */
  push32((uint32_t)(0x2u));
  /* 105f0635 mov edx, dword ptr [0x106109f4] */
  EDX = (r32((uint32_t)(0x106109f4)));
  /* 105f063b push edx */
  push32((uint32_t)(EDX));
  /* 105f063c call 0x105e6920 */
  push32(0x105f0641u); f_105e6920();
  /* 105f0641 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105f0644:;
  /* 105f0644 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 105f0647 mov dword ptr [0x106109f4], eax */
  w32((uint32_t)(0x106109f4), (EAX));
  /* 105f064c cmp dword ptr [0x106109f8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106109f8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f0653 je 0x105f0666 */
  if (C.zf) goto L_105f0666;
  /* 105f0655 push 2 */
  push32((uint32_t)(0x2u));
  /* 105f0657 mov ecx, dword ptr [0x106109f8] */
  ECX = (r32((uint32_t)(0x106109f8)));
  /* 105f065d push ecx */
  push32((uint32_t)(ECX));
  /* 105f065e call 0x105e6920 */
  push32(0x105f0663u); f_105e6920();
  /* 105f0663 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105f0666:;
  /* 105f0666 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105f0669 mov dword ptr [0x106109f8], edx */
  w32((uint32_t)(0x106109f8), (EDX));
  /* 105f066f push 2 */
  push32((uint32_t)(0x2u));
  /* 105f0671 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105f0674 push eax */
  push32((uint32_t)(EAX));
  /* 105f0675 call 0x105e6920 */
  push32(0x105f067au); f_105e6920();
  /* 105f067a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f067d push 2 */
  push32((uint32_t)(0x2u));
  /* 105f067f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 105f0682 push ecx */
  push32((uint32_t)(ECX));
  /* 105f0683 call 0x105e6920 */
  push32(0x105f0688u); f_105e6920();
  /* 105f0688 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f068b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f068d jmp 0x105f071c */
  goto L_105f071c;
L_105f0692:;
  /* 105f0692 push 2 */
  push32((uint32_t)(0x2u));
  /* 105f0694 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 105f0697 push edx */
  push32((uint32_t)(EDX));
  /* 105f0698 call 0x105e6920 */
  push32(0x105f069du); f_105e6920();
  /* 105f069d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f06a0 push 2 */
  push32((uint32_t)(0x2u));
  /* 105f06a2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105f06a5 push eax */
  push32((uint32_t)(EAX));
  /* 105f06a6 call 0x105e6920 */
  push32(0x105f06abu); f_105e6920();
  /* 105f06ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f06ae push 2 */
  push32((uint32_t)(0x2u));
  /* 105f06b0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105f06b3 push ecx */
  push32((uint32_t)(ECX));
  /* 105f06b4 call 0x105e6920 */
  push32(0x105f06b9u); f_105e6920();
  /* 105f06b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f06bc push 2 */
  push32((uint32_t)(0x2u));
  /* 105f06be mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 105f06c1 push edx */
  push32((uint32_t)(EDX));
  /* 105f06c2 call 0x105e6920 */
  push32(0x105f06c7u); f_105e6920();
  /* 105f06c7 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f06ca mov eax, 1 */
  EAX = (0x1u);
  /* 105f06cf jmp 0x105f071c */
  goto L_105f071c;
L_105f06d1:;
  /* 105f06d1 mov dword ptr [0x1060ede8], 0x1060edf2 */
  w32((uint32_t)(0x1060ede8), (0x1060edf2u));
  /* 105f06db mov dword ptr [0x1060edec], 0x1060edf2 */
  w32((uint32_t)(0x1060edec), (0x1060edf2u));
  /* 105f06e5 push 2 */
  push32((uint32_t)(0x2u));
  /* 105f06e7 mov eax, dword ptr [0x106109f4] */
  EAX = (r32((uint32_t)(0x106109f4)));
  /* 105f06ec push eax */
  push32((uint32_t)(EAX));
  /* 105f06ed call 0x105e6920 */
  push32(0x105f06f2u); f_105e6920();
  /* 105f06f2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f06f5 push 2 */
  push32((uint32_t)(0x2u));
  /* 105f06f7 mov ecx, dword ptr [0x106109f8] */
  ECX = (r32((uint32_t)(0x106109f8)));
  /* 105f06fd push ecx */
  push32((uint32_t)(ECX));
  /* 105f06fe call 0x105e6920 */
  push32(0x105f0703u); f_105e6920();
  /* 105f0703 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0706 mov dword ptr [0x106109f4], 0 */
  w32((uint32_t)(0x106109f4), (0x0u));
  /* 105f0710 mov dword ptr [0x106109f8], 0 */
  w32((uint32_t)(0x106109f8), (0x0u));
  /* 105f071a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105f071c:;
  /* 105f071c mov esp, ebp */
  ESP = (EBP);
  /* 105f071e pop ebp */
  EBP = (pop32());
  /* 105f071f ret  */
  ESPCHK(0x105f0380u, _esp0);
  ESP += 4; return;
}

/* FUN_10010720 @ 0x105f0720 (7 bytes, 5 insns) */
void f_105f0720(void) {
  FTRACE(0x105f0720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f0720 push ebp */
  push32((uint32_t)(EBP));
  /* 105f0721 mov ebp, esp */
  EBP = (ESP);
  /* 105f0723 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f0725 pop ebp */
  EBP = (pop32());
  /* 105f0726 ret  */
  ESPCHK(0x105f0720u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x105f0730 (129 bytes, 56 insns) */
void f_105f0730(void) {
  FTRACE(0x105f0730u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f0730 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 105f0734 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 105f0738 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 105f073e jne 0x105f077c */
  if (!C.zf) goto L_105f077c;
L_105f0740:;
  /* 105f0740 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105f0742 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105f0744 jne 0x105f0774 */
  if (!C.zf) goto L_105f0774;
  /* 105f0746 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 105f0748 je 0x105f0770 */
  if (C.zf) goto L_105f0770;
  /* 105f074a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105f074d jne 0x105f0774 */
  if (!C.zf) goto L_105f0774;
  /* 105f074f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 105f0751 je 0x105f0770 */
  if (C.zf) goto L_105f0770;
  /* 105f0753 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 105f0756 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105f0759 jne 0x105f0774 */
  if (!C.zf) goto L_105f0774;
  /* 105f075b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 105f075d je 0x105f0770 */
  if (C.zf) goto L_105f0770;
  /* 105f075f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105f0762 jne 0x105f0774 */
  if (!C.zf) goto L_105f0774;
  /* 105f0764 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0767 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f076a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 105f076c jne 0x105f0740 */
  if (!C.zf) goto L_105f0740;
  /* 105f076e mov edi, edi */
  EDI = (EDI);
L_105f0770:;
  /* 105f0770 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f0772 ret  */
  ESPCHK(0x105f0730u, _esp0);
  ESP += 4; return;
  /* 105f0773 nop  */
  /* nop */
L_105f0774:;
  /* 105f0774 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f0776 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 105f0778 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 105f0779 ret  */
  ESPCHK(0x105f0730u, _esp0);
  ESP += 4; return;
  /* 105f077a mov edi, edi */
  EDI = (EDI);
L_105f077c:;
  /* 105f077c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 105f0782 je 0x105f0798 */
  if (C.zf) goto L_105f0798;
  /* 105f0784 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105f0786 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 105f0787 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105f0789 jne 0x105f0774 */
  if (!C.zf) goto L_105f0774;
  /* 105f078b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 105f078c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 105f078e je 0x105f0770 */
  if (C.zf) goto L_105f0770;
  /* 105f0790 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 105f0796 je 0x105f0740 */
  if (C.zf) goto L_105f0740;
L_105f0798:;
  /* 105f0798 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 105f079b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f079e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105f07a0 jne 0x105f0774 */
  if (!C.zf) goto L_105f0774;
  /* 105f07a2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 105f07a4 je 0x105f0770 */
  if (C.zf) goto L_105f0770;
  /* 105f07a6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105f07a9 jne 0x105f0774 */
  if (!C.zf) goto L_105f0774;
  /* 105f07ab or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 105f07ad je 0x105f0770 */
  if (C.zf) goto L_105f0770;
  /* 105f07af add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f07b2 jmp 0x105f0740 */
  goto L_105f0740;
}

/* FUN_100107c0 @ 0x105f07c0 (62 bytes, 35 insns) */
void f_105f07c0(void) {
  FTRACE(0x105f07c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f07c0 push ebp */
  push32((uint32_t)(EBP));
  /* 105f07c1 mov ebp, esp */
  EBP = (ESP);
  /* 105f07c3 push esi */
  push32((uint32_t)(ESI));
  /* 105f07c4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f07c6 push eax */
  push32((uint32_t)(EAX));
  /* 105f07c7 push eax */
  push32((uint32_t)(EAX));
  /* 105f07c8 push eax */
  push32((uint32_t)(EAX));
  /* 105f07c9 push eax */
  push32((uint32_t)(EAX));
  /* 105f07ca push eax */
  push32((uint32_t)(EAX));
  /* 105f07cb push eax */
  push32((uint32_t)(EAX));
  /* 105f07cc push eax */
  push32((uint32_t)(EAX));
  /* 105f07cd push eax */
  push32((uint32_t)(EAX));
  /* 105f07ce mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f07d1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_105f07d4:;
  /* 105f07d4 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105f07d6 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 105f07d8 je 0x105f07e1 */
  if (C.zf) goto L_105f07e1;
  /* 105f07da inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 105f07db bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x105f07db");
  /* 105f07df jmp 0x105f07d4 */
  goto L_105f07d4;
L_105f07e1:;
  /* 105f07e1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 105f07e4 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 105f07e7 nop  */
  /* nop */
L_105f07e8:;
  /* 105f07e8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 105f07e9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 105f07eb or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 105f07ed je 0x105f07f6 */
  if (C.zf) goto L_105f07f6;
  /* 105f07ef inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 105f07f0 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x105f07f0");
  /* 105f07f4 jae 0x105f07e8 */
  if (!C.cf) goto L_105f07e8;
L_105f07f6:;
  /* 105f07f6 mov eax, ecx */
  EAX = (ECX);
  /* 105f07f8 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f07fb pop esi */
  ESI = (pop32());
  /* 105f07fc leave  */
  ESP = EBP;
  EBP = pop32();
  /* 105f07fd ret  */
  ESPCHK(0x105f07c0u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x105f0800 (56 bytes, 31 insns) */
void f_105f0800(void) {
  FTRACE(0x105f0800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f0800 push ebp */
  push32((uint32_t)(EBP));
  /* 105f0801 mov ebp, esp */
  EBP = (ESP);
  /* 105f0803 push edi */
  push32((uint32_t)(EDI));
  /* 105f0804 push esi */
  push32((uint32_t)(ESI));
  /* 105f0805 push ebx */
  push32((uint32_t)(EBX));
  /* 105f0806 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f0809 jecxz 0x105f0831 */
  x86_unimpl("jecxz @ 0x105f0809");
  /* 105f080b mov ebx, ecx */
  EBX = (ECX);
  /* 105f080d mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 105f0810 mov esi, edi */
  ESI = (EDI);
  /* 105f0812 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f0814 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 105f0816 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 105f0818 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f081a mov edi, esi */
  EDI = (ESI);
  /* 105f081c mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 105f081f repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 105f0821 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 105f0824 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105f0826 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105f0829 ja 0x105f082f */
  if ((!C.cf&&!C.zf)) goto L_105f082f;
  /* 105f082b je 0x105f0831 */
  if (C.zf) goto L_105f0831;
  /* 105f082d dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 105f082e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_105f082f:;
  /* 105f082f not ecx */
  ECX = (~(ECX));
L_105f0831:;
  /* 105f0831 mov eax, ecx */
  EAX = (ECX);
  /* 105f0833 pop ebx */
  EBX = (pop32());
  /* 105f0834 pop esi */
  ESI = (pop32());
  /* 105f0835 pop edi */
  EDI = (pop32());
  /* 105f0836 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 105f0837 ret  */
  ESPCHK(0x105f0800u, _esp0);
  ESP += 4; return;
}

/* FUN_10010840 @ 0x105f0840 (58 bytes, 32 insns) */
void f_105f0840(void) {
  FTRACE(0x105f0840u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f0840 push ebp */
  push32((uint32_t)(EBP));
  /* 105f0841 mov ebp, esp */
  EBP = (ESP);
  /* 105f0843 push esi */
  push32((uint32_t)(ESI));
  /* 105f0844 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f0846 push eax */
  push32((uint32_t)(EAX));
  /* 105f0847 push eax */
  push32((uint32_t)(EAX));
  /* 105f0848 push eax */
  push32((uint32_t)(EAX));
  /* 105f0849 push eax */
  push32((uint32_t)(EAX));
  /* 105f084a push eax */
  push32((uint32_t)(EAX));
  /* 105f084b push eax */
  push32((uint32_t)(EAX));
  /* 105f084c push eax */
  push32((uint32_t)(EAX));
  /* 105f084d push eax */
  push32((uint32_t)(EAX));
  /* 105f084e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f0851 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_105f0854:;
  /* 105f0854 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105f0856 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 105f0858 je 0x105f0861 */
  if (C.zf) goto L_105f0861;
  /* 105f085a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 105f085b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x105f085b");
  /* 105f085f jmp 0x105f0854 */
  goto L_105f0854;
L_105f0861:;
  /* 105f0861 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_105f0864:;
  /* 105f0864 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 105f0866 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 105f0868 je 0x105f0874 */
  if (C.zf) goto L_105f0874;
  /* 105f086a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 105f086b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x105f086b");
  /* 105f086f jae 0x105f0864 */
  if (!C.cf) goto L_105f0864;
  /* 105f0871 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_105f0874:;
  /* 105f0874 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0877 pop esi */
  ESI = (pop32());
  /* 105f0878 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 105f0879 ret  */
  ESPCHK(0x105f0840u, _esp0);
  ESP += 4; return;
}

/* FUN_10010880 @ 0x105f0880 (512 bytes, 147 insns) */
void f_105f0880(void) {
  FTRACE(0x105f0880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f0880 push ebp */
  push32((uint32_t)(EBP));
  /* 105f0881 mov ebp, esp */
  EBP = (ESP);
  /* 105f0883 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f0886 cmp dword ptr [0x10610a40], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610a40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f088d jne 0x105f08b2 */
  if (!C.zf) goto L_105f08b2;
  /* 105f088f call 0x105f1350 */
  push32(0x105f0894u); f_105f1350();
  /* 105f0894 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f0896 je 0x105f08a2 */
  if (C.zf) goto L_105f08a2;
  /* 105f0898 mov eax, dword ptr [0x106132f4] */
  EAX = (r32((uint32_t)(0x106132f4)));
  /* 105f089d mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105f08a0 jmp 0x105f08a9 */
  goto L_105f08a9;
L_105f08a2:;
  /* 105f08a2 mov dword ptr [ebp - 8], 0x105f13a0 */
  w32((uint32_t)(EBP + -0x8), (0x105f13a0u));
L_105f08a9:;
  /* 105f08a9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f08ac mov dword ptr [0x10610a40], ecx */
  w32((uint32_t)(0x10610a40), (ECX));
L_105f08b2:;
  /* 105f08b2 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f08b6 jne 0x105f08c2 */
  if (!C.zf) goto L_105f08c2;
  /* 105f08b8 call 0x105f11a0 */
  push32(0x105f08bdu); f_105f11a0();
  /* 105f08bd jmp 0x105f098e */
  goto L_105f098e;
L_105f08c2:;
  /* 105f08c2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f08c5 mov dword ptr [0x10610a30], edx */
  w32((uint32_t)(0x10610a30), (EDX));
  /* 105f08cb cmp dword ptr [0x10610a30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610a30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f08d2 je 0x105f08f4 */
  if (C.zf) goto L_105f08f4;
  /* 105f08d4 mov eax, dword ptr [0x10610a30] */
  EAX = (r32((uint32_t)(0x10610a30)));
  /* 105f08d9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105f08dc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105f08de je 0x105f08f4 */
  if (C.zf) goto L_105f08f4;
  /* 105f08e0 push 0x10610a30 */
  push32((uint32_t)(0x10610a30u));
  /* 105f08e5 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 105f08e7 push 0x1060fa90 */
  push32((uint32_t)(0x1060fa90u));
  /* 105f08ec call 0x105f0a80 */
  push32(0x105f08f1u); f_105f0a80();
  /* 105f08f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105f08f4:;
  /* 105f08f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f08f7 add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f08fa mov dword ptr [0x10610a34], edx */
  w32((uint32_t)(0x10610a34), (EDX));
  /* 105f0900 cmp dword ptr [0x10610a34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610a34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f0907 je 0x105f0929 */
  if (C.zf) goto L_105f0929;
  /* 105f0909 mov eax, dword ptr [0x10610a34] */
  EAX = (r32((uint32_t)(0x10610a34)));
  /* 105f090e movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105f0911 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105f0913 je 0x105f0929 */
  if (C.zf) goto L_105f0929;
  /* 105f0915 push 0x10610a34 */
  push32((uint32_t)(0x10610a34u));
  /* 105f091a push 0x16 */
  push32((uint32_t)(0x16u));
  /* 105f091c push 0x1060f9d8 */
  push32((uint32_t)(0x1060f9d8u));
  /* 105f0921 call 0x105f0a80 */
  push32(0x105f0926u); f_105f0a80();
  /* 105f0926 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105f0929:;
  /* 105f0929 mov dword ptr [0x10610a38], 0 */
  w32((uint32_t)(0x10610a38), (0x0u));
  /* 105f0933 cmp dword ptr [0x10610a30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610a30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f093a je 0x105f096d */
  if (C.zf) goto L_105f096d;
  /* 105f093c mov edx, dword ptr [0x10610a30] */
  EDX = (r32((uint32_t)(0x10610a30)));
  /* 105f0942 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105f0945 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f0947 je 0x105f096d */
  if (C.zf) goto L_105f096d;
  /* 105f0949 cmp dword ptr [0x10610a34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610a34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f0950 je 0x105f0966 */
  if (C.zf) goto L_105f0966;
  /* 105f0952 mov ecx, dword ptr [0x10610a34] */
  ECX = (r32((uint32_t)(0x10610a34)));
  /* 105f0958 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 105f095b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105f095d je 0x105f0966 */
  if (C.zf) goto L_105f0966;
  /* 105f095f call 0x105f0b10 */
  push32(0x105f0964u); f_105f0b10();
  /* 105f0964 jmp 0x105f096b */
  goto L_105f096b;
L_105f0966:;
  /* 105f0966 call 0x105f0f00 */
  push32(0x105f096bu); f_105f0f00();
L_105f096b:;
  /* 105f096b jmp 0x105f098e */
  goto L_105f098e;
L_105f096d:;
  /* 105f096d cmp dword ptr [0x10610a34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610a34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f0974 je 0x105f0989 */
  if (C.zf) goto L_105f0989;
  /* 105f0976 mov eax, dword ptr [0x10610a34] */
  EAX = (r32((uint32_t)(0x10610a34)));
  /* 105f097b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105f097e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105f0980 je 0x105f0989 */
  if (C.zf) goto L_105f0989;
  /* 105f0982 call 0x105f10a0 */
  push32(0x105f0987u); f_105f10a0();
  /* 105f0987 jmp 0x105f098e */
  goto L_105f098e;
L_105f0989:;
  /* 105f0989 call 0x105f11a0 */
  push32(0x105f098eu); f_105f11a0();
L_105f098e:;
  /* 105f098e cmp dword ptr [0x10610a38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610a38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f0995 jne 0x105f099e */
  if (!C.zf) goto L_105f099e;
  /* 105f0997 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f0999 jmp 0x105f0a7c */
  goto L_105f0a7c;
L_105f099e:;
  /* 105f099e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f09a1 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f09a7 push edx */
  push32((uint32_t)(EDX));
  /* 105f09a8 call 0x105f11d0 */
  push32(0x105f09adu); f_105f11d0();
  /* 105f09ad add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f09b0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105f09b3 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f09b7 je 0x105f09cc */
  if (C.zf) goto L_105f09cc;
  /* 105f09b9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f09bc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105f09c1 push eax */
  push32((uint32_t)(EAX));
  /* 105f09c2 call dword ptr [0x106132f0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132f0))), 0x105f09c8u);
  /* 105f09c8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f09ca jne 0x105f09d3 */
  if (!C.zf) goto L_105f09d3;
L_105f09cc:;
  /* 105f09cc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f09ce jmp 0x105f0a7c */
  goto L_105f0a7c;
L_105f09d3:;
  /* 105f09d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 105f09d5 mov ecx, dword ptr [0x10610a20] */
  ECX = (r32((uint32_t)(0x10610a20)));
  /* 105f09db push ecx */
  push32((uint32_t)(ECX));
  /* 105f09dc call dword ptr [0x106132ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132ec))), 0x105f09e2u);
  /* 105f09e2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f09e4 jne 0x105f09ed */
  if (!C.zf) goto L_105f09ed;
  /* 105f09e6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f09e8 jmp 0x105f0a7c */
  goto L_105f0a7c;
L_105f09ed:;
  /* 105f09ed cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f09f1 je 0x105f0a18 */
  if (C.zf) goto L_105f0a18;
  /* 105f09f3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f09f6 mov ax, word ptr [0x10610a20] */
  AX = (r16((uint32_t)(0x10610a20)));
  /* 105f09fc mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 105f09ff mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f0a02 mov dx, word ptr [0x10610a3c] */
  DX = (r16((uint32_t)(0x10610a3c)));
  /* 105f0a09 mov word ptr [ecx + 2], dx */
  w16((uint32_t)(ECX + 0x2), (DX));
  /* 105f0a0d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f0a10 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 105f0a14 mov word ptr [eax + 4], cx */
  w16((uint32_t)(EAX + 0x4), (CX));
L_105f0a18:;
  /* 105f0a18 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f0a1c je 0x105f0a77 */
  if (C.zf) goto L_105f0a77;
  /* 105f0a1e push 0x40 */
  push32((uint32_t)(0x40u));
  /* 105f0a20 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f0a23 push edx */
  push32((uint32_t)(EDX));
  /* 105f0a24 push 0x1001 */
  push32((uint32_t)(0x1001u));
  /* 105f0a29 mov eax, dword ptr [0x10610a20] */
  EAX = (r32((uint32_t)(0x10610a20)));
  /* 105f0a2e push eax */
  push32((uint32_t)(EAX));
  /* 105f0a2f call dword ptr [0x10610a40] */
  call_ind((uint32_t)(r32((uint32_t)(0x10610a40))), 0x105f0a35u);
  /* 105f0a35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f0a37 jne 0x105f0a3d */
  if (!C.zf) goto L_105f0a3d;
  /* 105f0a39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f0a3b jmp 0x105f0a7c */
  goto L_105f0a7c;
L_105f0a3d:;
  /* 105f0a3d push 0x40 */
  push32((uint32_t)(0x40u));
  /* 105f0a3f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f0a42 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0a45 push ecx */
  push32((uint32_t)(ECX));
  /* 105f0a46 push 0x1002 */
  push32((uint32_t)(0x1002u));
  /* 105f0a4b mov edx, dword ptr [0x10610a3c] */
  EDX = (r32((uint32_t)(0x10610a3c)));
  /* 105f0a51 push edx */
  push32((uint32_t)(EDX));
  /* 105f0a52 call dword ptr [0x10610a40] */
  call_ind((uint32_t)(r32((uint32_t)(0x10610a40))), 0x105f0a58u);
  /* 105f0a58 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f0a5a jne 0x105f0a60 */
  if (!C.zf) goto L_105f0a60;
  /* 105f0a5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f0a5e jmp 0x105f0a7c */
  goto L_105f0a7c;
L_105f0a60:;
  /* 105f0a60 push 0xa */
  push32((uint32_t)(0xau));
  /* 105f0a62 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f0a65 add eax, 0x80 */
  { uint32_t _a=(EAX),_b=(0x80u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0a6a push eax */
  push32((uint32_t)(EAX));
  /* 105f0a6b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f0a6e push ecx */
  push32((uint32_t)(ECX));
  /* 105f0a6f call 0x105e89d0 */
  push32(0x105f0a74u); f_105e89d0();
  /* 105f0a74 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105f0a77:;
  /* 105f0a77 mov eax, 1 */
  EAX = (0x1u);
L_105f0a7c:;
  /* 105f0a7c mov esp, ebp */
  ESP = (EBP);
  /* 105f0a7e pop ebp */
  EBP = (pop32());
  /* 105f0a7f ret  */
  ESPCHK(0x105f0880u, _esp0);
  ESP += 4; return;
}

/* FUN_10010a80 @ 0x105f0a80 (130 bytes, 47 insns) */
void f_105f0a80(void) {
  FTRACE(0x105f0a80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f0a80 push ebp */
  push32((uint32_t)(EBP));
  /* 105f0a81 mov ebp, esp */
  EBP = (ESP);
  /* 105f0a83 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f0a86 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 105f0a8d mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_105f0a94:;
  /* 105f0a94 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f0a97 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f0a9a jg 0x105f0afe */
  if ((!C.zf&&C.sf==C.of)) goto L_105f0afe;
  /* 105f0a9c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f0aa0 je 0x105f0afe */
  if (C.zf) goto L_105f0afe;
  /* 105f0aa2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f0aa5 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0aa8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 105f0aa9 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f0aab sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 105f0aad mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105f0ab0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f0ab3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f0ab6 mov eax, dword ptr [edx + ecx*8] */
  EAX = (r32((uint32_t)(EDX + ECX*8)));
  /* 105f0ab9 push eax */
  push32((uint32_t)(EAX));
  /* 105f0aba mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f0abd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105f0abf push edx */
  push32((uint32_t)(EDX));
  /* 105f0ac0 call 0x105f3340 */
  push32(0x105f0ac5u); f_105f3340();
  /* 105f0ac5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0ac8 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105f0acb cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f0acf jne 0x105f0ae2 */
  if (!C.zf) goto L_105f0ae2;
  /* 105f0ad1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f0ad4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f0ad7 lea edx, [ecx + eax*8 + 4] */
  EDX = ((uint32_t)(ECX + EAX*8 + 0x4));
  /* 105f0adb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f0ade mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 105f0ae0 jmp 0x105f0afc */
  goto L_105f0afc;
L_105f0ae2:;
  /* 105f0ae2 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f0ae6 jge 0x105f0af3 */
  if ((C.sf==C.of)) goto L_105f0af3;
  /* 105f0ae8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f0aeb sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f0aee mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 105f0af1 jmp 0x105f0afc */
  goto L_105f0afc;
L_105f0af3:;
  /* 105f0af3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f0af6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0af9 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_105f0afc:;
  /* 105f0afc jmp 0x105f0a94 */
  goto L_105f0a94;
L_105f0afe:;
  /* 105f0afe mov esp, ebp */
  ESP = (EBP);
  /* 105f0b00 pop ebp */
  EBP = (pop32());
  /* 105f0b01 ret  */
  ESPCHK(0x105f0a80u, _esp0);
  ESP += 4; return;
}

/* FUN_10010b10 @ 0x105f0b10 (186 bytes, 50 insns) */
void f_105f0b10(void) {
  FTRACE(0x105f0b10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f0b10 push ebp */
  push32((uint32_t)(EBP));
  /* 105f0b11 mov ebp, esp */
  EBP = (ESP);
  /* 105f0b13 push ecx */
  push32((uint32_t)(ECX));
  /* 105f0b14 mov eax, dword ptr [0x10610a30] */
  EAX = (r32((uint32_t)(0x10610a30)));
  /* 105f0b19 push eax */
  push32((uint32_t)(EAX));
  /* 105f0b1a call 0x105e8cc0 */
  push32(0x105f0b1fu); f_105e8cc0();
  /* 105f0b1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0b22 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105f0b24 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f0b27 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 105f0b2a mov dword ptr [0x10610a2c], ecx */
  w32((uint32_t)(0x10610a2c), (ECX));
  /* 105f0b30 mov edx, dword ptr [0x10610a34] */
  EDX = (r32((uint32_t)(0x10610a34)));
  /* 105f0b36 push edx */
  push32((uint32_t)(EDX));
  /* 105f0b37 call 0x105e8cc0 */
  push32(0x105f0b3cu); f_105e8cc0();
  /* 105f0b3c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0b3f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105f0b41 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f0b44 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 105f0b47 mov dword ptr [0x10610a24], ecx */
  w32((uint32_t)(0x10610a24), (ECX));
  /* 105f0b4d mov dword ptr [0x10610a20], 0 */
  w32((uint32_t)(0x10610a20), (0x0u));
  /* 105f0b57 cmp dword ptr [0x10610a2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610a2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f0b5e je 0x105f0b69 */
  if (C.zf) goto L_105f0b69;
  /* 105f0b60 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 105f0b67 jmp 0x105f0b7b */
  goto L_105f0b7b;
L_105f0b69:;
  /* 105f0b69 mov edx, dword ptr [0x10610a30] */
  EDX = (r32((uint32_t)(0x10610a30)));
  /* 105f0b6f push edx */
  push32((uint32_t)(EDX));
  /* 105f0b70 call 0x105f15b0 */
  push32(0x105f0b75u); f_105f15b0();
  /* 105f0b75 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0b78 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105f0b7b:;
  /* 105f0b7b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f0b7e mov dword ptr [0x10610a28], eax */
  w32((uint32_t)(0x10610a28), (EAX));
  /* 105f0b83 push 1 */
  push32((uint32_t)(0x1u));
  /* 105f0b85 push 0x105f0bd0 */
  push32((uint32_t)(0x105f0bd0u));
  /* 105f0b8a call dword ptr [0x106132d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132d4))), 0x105f0b90u);
  /* 105f0b90 mov ecx, dword ptr [0x10610a38] */
  ECX = (r32((uint32_t)(0x10610a38)));
  /* 105f0b96 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 105f0b9c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105f0b9e je 0x105f0bbc */
  if (C.zf) goto L_105f0bbc;
  /* 105f0ba0 mov edx, dword ptr [0x10610a38] */
  EDX = (r32((uint32_t)(0x10610a38)));
  /* 105f0ba6 and edx, 0x200 */
  { uint32_t _r=(EDX)&(0x200u); EDX = (_r); fl_logic(_r,32); }
  /* 105f0bac test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105f0bae je 0x105f0bbc */
  if (C.zf) goto L_105f0bbc;
  /* 105f0bb0 mov eax, dword ptr [0x10610a38] */
  EAX = (r32((uint32_t)(0x10610a38)));
  /* 105f0bb5 and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 105f0bb8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f0bba jne 0x105f0bc6 */
  if (!C.zf) goto L_105f0bc6;
L_105f0bbc:;
  /* 105f0bbc mov dword ptr [0x10610a38], 0 */
  w32((uint32_t)(0x10610a38), (0x0u));
L_105f0bc6:;
  /* 105f0bc6 mov esp, ebp */
  ESP = (EBP);
  /* 105f0bc8 pop ebp */
  EBP = (pop32());
  /* 105f0bc9 ret  */
  ESPCHK(0x105f0b10u, _esp0);
  ESP += 4; return;
}

/* FUN_10010bd0 @ 0x105f0bd0 (804 bytes, 220 insns) */
void f_105f0bd0(void) {
  FTRACE(0x105f0bd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f0bd0 push ebp */
  push32((uint32_t)(EBP));
  /* 105f0bd1 mov ebp, esp */
  EBP = (ESP);
  /* 105f0bd3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f0bd6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f0bd9 push eax */
  push32((uint32_t)(EAX));
  /* 105f0bda call 0x105f1530 */
  push32(0x105f0bdfu); f_105f1530();
  /* 105f0bdf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0be2 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 105f0be5 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 105f0be7 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 105f0bea push ecx */
  push32((uint32_t)(ECX));
  /* 105f0beb mov edx, dword ptr [0x10610a24] */
  EDX = (r32((uint32_t)(0x10610a24)));
  /* 105f0bf1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 105f0bf3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f0bf5 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 105f0bfb add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0c01 push edx */
  push32((uint32_t)(EDX));
  /* 105f0c02 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105f0c05 push eax */
  push32((uint32_t)(EAX));
  /* 105f0c06 call dword ptr [0x10610a40] */
  call_ind((uint32_t)(r32((uint32_t)(0x10610a40))), 0x105f0c0cu);
  /* 105f0c0c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f0c0e jne 0x105f0c24 */
  if (!C.zf) goto L_105f0c24;
  /* 105f0c10 mov dword ptr [0x10610a38], 0 */
  w32((uint32_t)(0x10610a38), (0x0u));
  /* 105f0c1a mov eax, 1 */
  EAX = (0x1u);
  /* 105f0c1f jmp 0x105f0eee */
  goto L_105f0eee;
L_105f0c24:;
  /* 105f0c24 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 105f0c27 push ecx */
  push32((uint32_t)(ECX));
  /* 105f0c28 mov edx, dword ptr [0x10610a34] */
  EDX = (r32((uint32_t)(0x10610a34)));
  /* 105f0c2e push edx */
  push32((uint32_t)(EDX));
  /* 105f0c2f call 0x105f3340 */
  push32(0x105f0c34u); f_105f3340();
  /* 105f0c34 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0c37 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f0c39 jne 0x105f0d5f */
  if (!C.zf) goto L_105f0d5f;
  /* 105f0c3f push 0x78 */
  push32((uint32_t)(0x78u));
  /* 105f0c41 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 105f0c44 push eax */
  push32((uint32_t)(EAX));
  /* 105f0c45 mov ecx, dword ptr [0x10610a2c] */
  ECX = (r32((uint32_t)(0x10610a2c)));
  /* 105f0c4b neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 105f0c4d sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f0c4f and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 105f0c55 add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0c5b push ecx */
  push32((uint32_t)(ECX));
  /* 105f0c5c mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105f0c5f push edx */
  push32((uint32_t)(EDX));
  /* 105f0c60 call dword ptr [0x10610a40] */
  call_ind((uint32_t)(r32((uint32_t)(0x10610a40))), 0x105f0c66u);
  /* 105f0c66 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f0c68 jne 0x105f0c7e */
  if (!C.zf) goto L_105f0c7e;
  /* 105f0c6a mov dword ptr [0x10610a38], 0 */
  w32((uint32_t)(0x10610a38), (0x0u));
  /* 105f0c74 mov eax, 1 */
  EAX = (0x1u);
  /* 105f0c79 jmp 0x105f0eee */
  goto L_105f0eee;
L_105f0c7e:;
  /* 105f0c7e lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 105f0c81 push eax */
  push32((uint32_t)(EAX));
  /* 105f0c82 mov ecx, dword ptr [0x10610a30] */
  ECX = (r32((uint32_t)(0x10610a30)));
  /* 105f0c88 push ecx */
  push32((uint32_t)(ECX));
  /* 105f0c89 call 0x105f3340 */
  push32(0x105f0c8eu); f_105f3340();
  /* 105f0c8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0c91 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f0c93 jne 0x105f0cc0 */
  if (!C.zf) goto L_105f0cc0;
  /* 105f0c95 mov edx, dword ptr [0x10610a38] */
  EDX = (r32((uint32_t)(0x10610a38)));
  /* 105f0c9b or edx, 0x304 */
  { uint32_t _r=(EDX)|(0x304u); EDX = (_r); fl_logic(_r,32); }
  /* 105f0ca1 mov dword ptr [0x10610a38], edx */
  w32((uint32_t)(0x10610a38), (EDX));
  /* 105f0ca7 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105f0caa mov dword ptr [0x10610a3c], eax */
  w32((uint32_t)(0x10610a3c), (EAX));
  /* 105f0caf mov ecx, dword ptr [0x10610a3c] */
  ECX = (r32((uint32_t)(0x10610a3c)));
  /* 105f0cb5 mov dword ptr [0x10610a20], ecx */
  w32((uint32_t)(0x10610a20), (ECX));
  /* 105f0cbb jmp 0x105f0d5f */
  goto L_105f0d5f;
L_105f0cc0:;
  /* 105f0cc0 mov edx, dword ptr [0x10610a38] */
  EDX = (r32((uint32_t)(0x10610a38)));
  /* 105f0cc6 and edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 105f0cc9 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105f0ccb jne 0x105f0d5f */
  if (!C.zf) goto L_105f0d5f;
  /* 105f0cd1 cmp dword ptr [0x10610a28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610a28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f0cd8 je 0x105f0d2d */
  if (C.zf) goto L_105f0d2d;
  /* 105f0cda mov eax, dword ptr [0x10610a28] */
  EAX = (r32((uint32_t)(0x10610a28)));
  /* 105f0cdf push eax */
  push32((uint32_t)(EAX));
  /* 105f0ce0 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 105f0ce3 push ecx */
  push32((uint32_t)(ECX));
  /* 105f0ce4 mov edx, dword ptr [0x10610a30] */
  EDX = (r32((uint32_t)(0x10610a30)));
  /* 105f0cea push edx */
  push32((uint32_t)(EDX));
  /* 105f0ceb call 0x105f3410 */
  push32(0x105f0cf0u); f_105f3410();
  /* 105f0cf0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0cf3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f0cf5 jne 0x105f0d2d */
  if (!C.zf) goto L_105f0d2d;
  /* 105f0cf7 mov eax, dword ptr [0x10610a38] */
  EAX = (r32((uint32_t)(0x10610a38)));
  /* 105f0cfc or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 105f0cfe mov dword ptr [0x10610a38], eax */
  w32((uint32_t)(0x10610a38), (EAX));
  /* 105f0d03 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105f0d06 mov dword ptr [0x10610a3c], ecx */
  w32((uint32_t)(0x10610a3c), (ECX));
  /* 105f0d0c mov edx, dword ptr [0x10610a30] */
  EDX = (r32((uint32_t)(0x10610a30)));
  /* 105f0d12 push edx */
  push32((uint32_t)(EDX));
  /* 105f0d13 call 0x105e8cc0 */
  push32(0x105f0d18u); f_105e8cc0();
  /* 105f0d18 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0d1b cmp eax, dword ptr [0x10610a28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10610a28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f0d21 jne 0x105f0d2b */
  if (!C.zf) goto L_105f0d2b;
  /* 105f0d23 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105f0d26 mov dword ptr [0x10610a20], eax */
  w32((uint32_t)(0x10610a20), (EAX));
L_105f0d2b:;
  /* 105f0d2b jmp 0x105f0d5f */
  goto L_105f0d5f;
L_105f0d2d:;
  /* 105f0d2d mov ecx, dword ptr [0x10610a38] */
  ECX = (r32((uint32_t)(0x10610a38)));
  /* 105f0d33 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 105f0d36 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105f0d38 jne 0x105f0d5f */
  if (!C.zf) goto L_105f0d5f;
  /* 105f0d3a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105f0d3d push edx */
  push32((uint32_t)(EDX));
  /* 105f0d3e call 0x105f1270 */
  push32(0x105f0d43u); f_105f1270();
  /* 105f0d43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0d46 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f0d48 je 0x105f0d5f */
  if (C.zf) goto L_105f0d5f;
  /* 105f0d4a mov eax, dword ptr [0x10610a38] */
  EAX = (r32((uint32_t)(0x10610a38)));
  /* 105f0d4f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 105f0d51 mov dword ptr [0x10610a38], eax */
  w32((uint32_t)(0x10610a38), (EAX));
  /* 105f0d56 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105f0d59 mov dword ptr [0x10610a3c], ecx */
  w32((uint32_t)(0x10610a3c), (ECX));
L_105f0d5f:;
  /* 105f0d5f mov edx, dword ptr [0x10610a38] */
  EDX = (r32((uint32_t)(0x10610a38)));
  /* 105f0d65 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 105f0d6b cmp edx, 0x300 */
  { uint32_t _a=(EDX),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f0d71 je 0x105f0ee1 */
  if (C.zf) goto L_105f0ee1;
  /* 105f0d77 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 105f0d79 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 105f0d7c push eax */
  push32((uint32_t)(EAX));
  /* 105f0d7d mov ecx, dword ptr [0x10610a2c] */
  ECX = (r32((uint32_t)(0x10610a2c)));
  /* 105f0d83 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 105f0d85 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f0d87 and ecx, 0xfffff002 */
  { uint32_t _r=(ECX)&(0xfffff002u); ECX = (_r); fl_logic(_r,32); }
  /* 105f0d8d add ecx, 0x1001 */
  { uint32_t _a=(ECX),_b=(0x1001u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0d93 push ecx */
  push32((uint32_t)(ECX));
  /* 105f0d94 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105f0d97 push edx */
  push32((uint32_t)(EDX));
  /* 105f0d98 call dword ptr [0x10610a40] */
  call_ind((uint32_t)(r32((uint32_t)(0x10610a40))), 0x105f0d9eu);
  /* 105f0d9e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f0da0 jne 0x105f0db6 */
  if (!C.zf) goto L_105f0db6;
  /* 105f0da2 mov dword ptr [0x10610a38], 0 */
  w32((uint32_t)(0x10610a38), (0x0u));
  /* 105f0dac mov eax, 1 */
  EAX = (0x1u);
  /* 105f0db1 jmp 0x105f0eee */
  goto L_105f0eee;
L_105f0db6:;
  /* 105f0db6 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 105f0db9 push eax */
  push32((uint32_t)(EAX));
  /* 105f0dba mov ecx, dword ptr [0x10610a30] */
  ECX = (r32((uint32_t)(0x10610a30)));
  /* 105f0dc0 push ecx */
  push32((uint32_t)(ECX));
  /* 105f0dc1 call 0x105f3340 */
  push32(0x105f0dc6u); f_105f3340();
  /* 105f0dc6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0dc9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f0dcb jne 0x105f0e80 */
  if (!C.zf) goto L_105f0e80;
  /* 105f0dd1 mov edx, dword ptr [0x10610a38] */
  EDX = (r32((uint32_t)(0x10610a38)));
  /* 105f0dd7 or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 105f0dda mov dword ptr [0x10610a38], edx */
  w32((uint32_t)(0x10610a38), (EDX));
  /* 105f0de0 cmp dword ptr [0x10610a2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610a2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f0de7 je 0x105f0e0a */
  if (C.zf) goto L_105f0e0a;
  /* 105f0de9 mov eax, dword ptr [0x10610a38] */
  EAX = (r32((uint32_t)(0x10610a38)));
  /* 105f0dee or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 105f0df1 mov dword ptr [0x10610a38], eax */
  w32((uint32_t)(0x10610a38), (EAX));
  /* 105f0df6 cmp dword ptr [0x10610a20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610a20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f0dfd jne 0x105f0e08 */
  if (!C.zf) goto L_105f0e08;
  /* 105f0dff mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105f0e02 mov dword ptr [0x10610a20], ecx */
  w32((uint32_t)(0x10610a20), (ECX));
L_105f0e08:;
  /* 105f0e08 jmp 0x105f0e7e */
  goto L_105f0e7e;
L_105f0e0a:;
  /* 105f0e0a cmp dword ptr [0x10610a28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610a28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f0e11 je 0x105f0e5f */
  if (C.zf) goto L_105f0e5f;
  /* 105f0e13 mov edx, dword ptr [0x10610a30] */
  EDX = (r32((uint32_t)(0x10610a30)));
  /* 105f0e19 push edx */
  push32((uint32_t)(EDX));
  /* 105f0e1a call 0x105e8cc0 */
  push32(0x105f0e1fu); f_105e8cc0();
  /* 105f0e1f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0e22 cmp eax, dword ptr [0x10610a28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10610a28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f0e28 jne 0x105f0e5f */
  if (!C.zf) goto L_105f0e5f;
  /* 105f0e2a push 1 */
  push32((uint32_t)(0x1u));
  /* 105f0e2c mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105f0e2f push eax */
  push32((uint32_t)(EAX));
  /* 105f0e30 call 0x105f12c0 */
  push32(0x105f0e35u); f_105f12c0();
  /* 105f0e35 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0e38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f0e3a je 0x105f0e5d */
  if (C.zf) goto L_105f0e5d;
  /* 105f0e3c mov ecx, dword ptr [0x10610a38] */
  ECX = (r32((uint32_t)(0x10610a38)));
  /* 105f0e42 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 105f0e45 mov dword ptr [0x10610a38], ecx */
  w32((uint32_t)(0x10610a38), (ECX));
  /* 105f0e4b cmp dword ptr [0x10610a20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610a20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f0e52 jne 0x105f0e5d */
  if (!C.zf) goto L_105f0e5d;
  /* 105f0e54 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105f0e57 mov dword ptr [0x10610a20], edx */
  w32((uint32_t)(0x10610a20), (EDX));
L_105f0e5d:;
  /* 105f0e5d jmp 0x105f0e7e */
  goto L_105f0e7e;
L_105f0e5f:;
  /* 105f0e5f mov eax, dword ptr [0x10610a38] */
  EAX = (r32((uint32_t)(0x10610a38)));
  /* 105f0e64 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 105f0e67 mov dword ptr [0x10610a38], eax */
  w32((uint32_t)(0x10610a38), (EAX));
  /* 105f0e6c cmp dword ptr [0x10610a20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610a20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f0e73 jne 0x105f0e7e */
  if (!C.zf) goto L_105f0e7e;
  /* 105f0e75 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105f0e78 mov dword ptr [0x10610a20], ecx */
  w32((uint32_t)(0x10610a20), (ECX));
L_105f0e7e:;
  /* 105f0e7e jmp 0x105f0ee1 */
  goto L_105f0ee1;
L_105f0e80:;
  /* 105f0e80 cmp dword ptr [0x10610a2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610a2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f0e87 jne 0x105f0ee1 */
  if (!C.zf) goto L_105f0ee1;
  /* 105f0e89 cmp dword ptr [0x10610a28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610a28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f0e90 je 0x105f0ee1 */
  if (C.zf) goto L_105f0ee1;
  /* 105f0e92 mov edx, dword ptr [0x10610a28] */
  EDX = (r32((uint32_t)(0x10610a28)));
  /* 105f0e98 push edx */
  push32((uint32_t)(EDX));
  /* 105f0e99 lea eax, [ebp - 0x78] */
  EAX = ((uint32_t)(EBP + -0x78));
  /* 105f0e9c push eax */
  push32((uint32_t)(EAX));
  /* 105f0e9d mov ecx, dword ptr [0x10610a30] */
  ECX = (r32((uint32_t)(0x10610a30)));
  /* 105f0ea3 push ecx */
  push32((uint32_t)(ECX));
  /* 105f0ea4 call 0x105f3410 */
  push32(0x105f0ea9u); f_105f3410();
  /* 105f0ea9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0eac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f0eae jne 0x105f0ee1 */
  if (!C.zf) goto L_105f0ee1;
  /* 105f0eb0 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f0eb2 mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105f0eb5 push edx */
  push32((uint32_t)(EDX));
  /* 105f0eb6 call 0x105f12c0 */
  push32(0x105f0ebbu); f_105f12c0();
  /* 105f0ebb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0ebe test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f0ec0 je 0x105f0ee1 */
  if (C.zf) goto L_105f0ee1;
  /* 105f0ec2 mov eax, dword ptr [0x10610a38] */
  EAX = (r32((uint32_t)(0x10610a38)));
  /* 105f0ec7 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 105f0eca mov dword ptr [0x10610a38], eax */
  w32((uint32_t)(0x10610a38), (EAX));
  /* 105f0ecf cmp dword ptr [0x10610a20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610a20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f0ed6 jne 0x105f0ee1 */
  if (!C.zf) goto L_105f0ee1;
  /* 105f0ed8 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105f0edb mov dword ptr [0x10610a20], ecx */
  w32((uint32_t)(0x10610a20), (ECX));
L_105f0ee1:;
  /* 105f0ee1 mov eax, dword ptr [0x10610a38] */
  EAX = (r32((uint32_t)(0x10610a38)));
  /* 105f0ee6 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 105f0ee9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 105f0eeb sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f0eed inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_105f0eee:;
  /* 105f0eee mov esp, ebp */
  ESP = (EBP);
  /* 105f0ef0 pop ebp */
  EBP = (pop32());
  /* 105f0ef1 ret 4 */
  ESPCHK(0x105f0bd0u, _esp0);
  ESP += 8; return;
}

/* FUN_10010f00 @ 0x105f0f00 (116 bytes, 33 insns) */
void f_105f0f00(void) {
  FTRACE(0x105f0f00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f0f00 push ebp */
  push32((uint32_t)(EBP));
  /* 105f0f01 mov ebp, esp */
  EBP = (ESP);
  /* 105f0f03 push ecx */
  push32((uint32_t)(ECX));
  /* 105f0f04 mov eax, dword ptr [0x10610a30] */
  EAX = (r32((uint32_t)(0x10610a30)));
  /* 105f0f09 push eax */
  push32((uint32_t)(EAX));
  /* 105f0f0a call 0x105e8cc0 */
  push32(0x105f0f0fu); f_105e8cc0();
  /* 105f0f0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0f12 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105f0f14 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f0f17 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 105f0f1a mov dword ptr [0x10610a2c], ecx */
  w32((uint32_t)(0x10610a2c), (ECX));
  /* 105f0f20 cmp dword ptr [0x10610a2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610a2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f0f27 je 0x105f0f32 */
  if (C.zf) goto L_105f0f32;
  /* 105f0f29 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 105f0f30 jmp 0x105f0f44 */
  goto L_105f0f44;
L_105f0f32:;
  /* 105f0f32 mov edx, dword ptr [0x10610a30] */
  EDX = (r32((uint32_t)(0x10610a30)));
  /* 105f0f38 push edx */
  push32((uint32_t)(EDX));
  /* 105f0f39 call 0x105f15b0 */
  push32(0x105f0f3eu); f_105f15b0();
  /* 105f0f3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0f41 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105f0f44:;
  /* 105f0f44 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f0f47 mov dword ptr [0x10610a28], eax */
  w32((uint32_t)(0x10610a28), (EAX));
  /* 105f0f4c push 1 */
  push32((uint32_t)(0x1u));
  /* 105f0f4e push 0x105f0f80 */
  push32((uint32_t)(0x105f0f80u));
  /* 105f0f53 call dword ptr [0x106132d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132d4))), 0x105f0f59u);
  /* 105f0f59 mov ecx, dword ptr [0x10610a38] */
  ECX = (r32((uint32_t)(0x10610a38)));
  /* 105f0f5f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 105f0f62 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105f0f64 jne 0x105f0f70 */
  if (!C.zf) goto L_105f0f70;
  /* 105f0f66 mov dword ptr [0x10610a38], 0 */
  w32((uint32_t)(0x10610a38), (0x0u));
L_105f0f70:;
  /* 105f0f70 mov esp, ebp */
  ESP = (EBP);
  /* 105f0f72 pop ebp */
  EBP = (pop32());
  /* 105f0f73 ret  */
  ESPCHK(0x105f0f00u, _esp0);
  ESP += 4; return;
}

/* FUN_10010f80 @ 0x105f0f80 (287 bytes, 86 insns) */
void f_105f0f80(void) {
  FTRACE(0x105f0f80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f0f80 push ebp */
  push32((uint32_t)(EBP));
  /* 105f0f81 mov ebp, esp */
  EBP = (ESP);
  /* 105f0f83 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f0f86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f0f89 push eax */
  push32((uint32_t)(EAX));
  /* 105f0f8a call 0x105f1530 */
  push32(0x105f0f8fu); f_105f1530();
  /* 105f0f8f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0f92 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 105f0f95 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 105f0f97 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 105f0f9a push ecx */
  push32((uint32_t)(ECX));
  /* 105f0f9b mov edx, dword ptr [0x10610a2c] */
  EDX = (r32((uint32_t)(0x10610a2c)));
  /* 105f0fa1 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 105f0fa3 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f0fa5 and edx, 0xfffff002 */
  { uint32_t _r=(EDX)&(0xfffff002u); EDX = (_r); fl_logic(_r,32); }
  /* 105f0fab add edx, 0x1001 */
  { uint32_t _a=(EDX),_b=(0x1001u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0fb1 push edx */
  push32((uint32_t)(EDX));
  /* 105f0fb2 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105f0fb5 push eax */
  push32((uint32_t)(EAX));
  /* 105f0fb6 call dword ptr [0x10610a40] */
  call_ind((uint32_t)(r32((uint32_t)(0x10610a40))), 0x105f0fbcu);
  /* 105f0fbc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f0fbe jne 0x105f0fd4 */
  if (!C.zf) goto L_105f0fd4;
  /* 105f0fc0 mov dword ptr [0x10610a38], 0 */
  w32((uint32_t)(0x10610a38), (0x0u));
  /* 105f0fca mov eax, 1 */
  EAX = (0x1u);
  /* 105f0fcf jmp 0x105f1099 */
  goto L_105f1099;
L_105f0fd4:;
  /* 105f0fd4 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 105f0fd7 push ecx */
  push32((uint32_t)(ECX));
  /* 105f0fd8 mov edx, dword ptr [0x10610a30] */
  EDX = (r32((uint32_t)(0x10610a30)));
  /* 105f0fde push edx */
  push32((uint32_t)(EDX));
  /* 105f0fdf call 0x105f3340 */
  push32(0x105f0fe4u); f_105f3340();
  /* 105f0fe4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f0fe7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f0fe9 jne 0x105f1029 */
  if (!C.zf) goto L_105f1029;
  /* 105f0feb cmp dword ptr [0x10610a2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610a2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f0ff2 jne 0x105f1006 */
  if (!C.zf) goto L_105f1006;
  /* 105f0ff4 push 1 */
  push32((uint32_t)(0x1u));
  /* 105f0ff6 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105f0ff9 push eax */
  push32((uint32_t)(EAX));
  /* 105f0ffa call 0x105f12c0 */
  push32(0x105f0fffu); f_105f12c0();
  /* 105f0fff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1002 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f1004 je 0x105f1027 */
  if (C.zf) goto L_105f1027;
L_105f1006:;
  /* 105f1006 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105f1009 mov dword ptr [0x10610a3c], ecx */
  w32((uint32_t)(0x10610a3c), (ECX));
  /* 105f100f mov edx, dword ptr [0x10610a3c] */
  EDX = (r32((uint32_t)(0x10610a3c)));
  /* 105f1015 mov dword ptr [0x10610a20], edx */
  w32((uint32_t)(0x10610a20), (EDX));
  /* 105f101b mov eax, dword ptr [0x10610a38] */
  EAX = (r32((uint32_t)(0x10610a38)));
  /* 105f1020 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 105f1022 mov dword ptr [0x10610a38], eax */
  w32((uint32_t)(0x10610a38), (EAX));
L_105f1027:;
  /* 105f1027 jmp 0x105f108c */
  goto L_105f108c;
L_105f1029:;
  /* 105f1029 cmp dword ptr [0x10610a2c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610a2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f1030 jne 0x105f108c */
  if (!C.zf) goto L_105f108c;
  /* 105f1032 cmp dword ptr [0x10610a28], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610a28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f1039 je 0x105f108c */
  if (C.zf) goto L_105f108c;
  /* 105f103b mov ecx, dword ptr [0x10610a28] */
  ECX = (r32((uint32_t)(0x10610a28)));
  /* 105f1041 push ecx */
  push32((uint32_t)(ECX));
  /* 105f1042 lea edx, [ebp - 0x78] */
  EDX = ((uint32_t)(EBP + -0x78));
  /* 105f1045 push edx */
  push32((uint32_t)(EDX));
  /* 105f1046 mov eax, dword ptr [0x10610a30] */
  EAX = (r32((uint32_t)(0x10610a30)));
  /* 105f104b push eax */
  push32((uint32_t)(EAX));
  /* 105f104c call 0x105f3410 */
  push32(0x105f1051u); f_105f3410();
  /* 105f1051 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1054 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f1056 jne 0x105f108c */
  if (!C.zf) goto L_105f108c;
  /* 105f1058 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f105a mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105f105d push ecx */
  push32((uint32_t)(ECX));
  /* 105f105e call 0x105f12c0 */
  push32(0x105f1063u); f_105f12c0();
  /* 105f1063 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1066 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f1068 je 0x105f108c */
  if (C.zf) goto L_105f108c;
  /* 105f106a mov edx, dword ptr [ebp - 0x7c] */
  EDX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105f106d mov dword ptr [0x10610a3c], edx */
  w32((uint32_t)(0x10610a3c), (EDX));
  /* 105f1073 mov eax, dword ptr [0x10610a3c] */
  EAX = (r32((uint32_t)(0x10610a3c)));
  /* 105f1078 mov dword ptr [0x10610a20], eax */
  w32((uint32_t)(0x10610a20), (EAX));
  /* 105f107d mov ecx, dword ptr [0x10610a38] */
  ECX = (r32((uint32_t)(0x10610a38)));
  /* 105f1083 or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 105f1086 mov dword ptr [0x10610a38], ecx */
  w32((uint32_t)(0x10610a38), (ECX));
L_105f108c:;
  /* 105f108c mov eax, dword ptr [0x10610a38] */
  EAX = (r32((uint32_t)(0x10610a38)));
  /* 105f1091 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 105f1094 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 105f1096 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f1098 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_105f1099:;
  /* 105f1099 mov esp, ebp */
  ESP = (EBP);
  /* 105f109b pop ebp */
  EBP = (pop32());
  /* 105f109c ret 4 */
  ESPCHK(0x105f0f80u, _esp0);
  ESP += 8; return;
}

/* FUN_100110a0 @ 0x105f10a0 (69 bytes, 20 insns) */
void f_105f10a0(void) {
  FTRACE(0x105f10a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f10a0 push ebp */
  push32((uint32_t)(EBP));
  /* 105f10a1 mov ebp, esp */
  EBP = (ESP);
  /* 105f10a3 mov eax, dword ptr [0x10610a34] */
  EAX = (r32((uint32_t)(0x10610a34)));
  /* 105f10a8 push eax */
  push32((uint32_t)(EAX));
  /* 105f10a9 call 0x105e8cc0 */
  push32(0x105f10aeu); f_105e8cc0();
  /* 105f10ae add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f10b1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105f10b3 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f10b6 sete cl */
  CL = ((C.zf) ? 1u : 0u);
  /* 105f10b9 mov dword ptr [0x10610a24], ecx */
  w32((uint32_t)(0x10610a24), (ECX));
  /* 105f10bf push 1 */
  push32((uint32_t)(0x1u));
  /* 105f10c1 push 0x105f10f0 */
  push32((uint32_t)(0x105f10f0u));
  /* 105f10c6 call dword ptr [0x106132d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132d4))), 0x105f10ccu);
  /* 105f10cc mov edx, dword ptr [0x10610a38] */
  EDX = (r32((uint32_t)(0x10610a38)));
  /* 105f10d2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 105f10d5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105f10d7 jne 0x105f10e3 */
  if (!C.zf) goto L_105f10e3;
  /* 105f10d9 mov dword ptr [0x10610a38], 0 */
  w32((uint32_t)(0x10610a38), (0x0u));
L_105f10e3:;
  /* 105f10e3 pop ebp */
  EBP = (pop32());
  /* 105f10e4 ret  */
  ESPCHK(0x105f10a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100110f0 @ 0x105f10f0 (172 bytes, 54 insns) */
void f_105f10f0(void) {
  FTRACE(0x105f10f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f10f0 push ebp */
  push32((uint32_t)(EBP));
  /* 105f10f1 mov ebp, esp */
  EBP = (ESP);
  /* 105f10f3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f10f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f10f9 push eax */
  push32((uint32_t)(EAX));
  /* 105f10fa call 0x105f1530 */
  push32(0x105f10ffu); f_105f1530();
  /* 105f10ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1102 mov dword ptr [ebp - 0x7c], eax */
  w32((uint32_t)(EBP + -0x7c), (EAX));
  /* 105f1105 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 105f1107 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 105f110a push ecx */
  push32((uint32_t)(ECX));
  /* 105f110b mov edx, dword ptr [0x10610a24] */
  EDX = (r32((uint32_t)(0x10610a24)));
  /* 105f1111 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 105f1113 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f1115 and edx, 0xfffff005 */
  { uint32_t _r=(EDX)&(0xfffff005u); EDX = (_r); fl_logic(_r,32); }
  /* 105f111b add edx, 0x1002 */
  { uint32_t _a=(EDX),_b=(0x1002u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1121 push edx */
  push32((uint32_t)(EDX));
  /* 105f1122 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105f1125 push eax */
  push32((uint32_t)(EAX));
  /* 105f1126 call dword ptr [0x10610a40] */
  call_ind((uint32_t)(r32((uint32_t)(0x10610a40))), 0x105f112cu);
  /* 105f112c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f112e jne 0x105f1141 */
  if (!C.zf) goto L_105f1141;
  /* 105f1130 mov dword ptr [0x10610a38], 0 */
  w32((uint32_t)(0x10610a38), (0x0u));
  /* 105f113a mov eax, 1 */
  EAX = (0x1u);
  /* 105f113f jmp 0x105f1196 */
  goto L_105f1196;
L_105f1141:;
  /* 105f1141 lea ecx, [ebp - 0x78] */
  ECX = ((uint32_t)(EBP + -0x78));
  /* 105f1144 push ecx */
  push32((uint32_t)(ECX));
  /* 105f1145 mov edx, dword ptr [0x10610a34] */
  EDX = (r32((uint32_t)(0x10610a34)));
  /* 105f114b push edx */
  push32((uint32_t)(EDX));
  /* 105f114c call 0x105f3340 */
  push32(0x105f1151u); f_105f3340();
  /* 105f1151 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1154 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f1156 jne 0x105f1189 */
  if (!C.zf) goto L_105f1189;
  /* 105f1158 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105f115b push eax */
  push32((uint32_t)(EAX));
  /* 105f115c call 0x105f1270 */
  push32(0x105f1161u); f_105f1270();
  /* 105f1161 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1164 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f1166 je 0x105f1189 */
  if (C.zf) goto L_105f1189;
  /* 105f1168 mov ecx, dword ptr [ebp - 0x7c] */
  ECX = (r32((uint32_t)(EBP + -0x7c)));
  /* 105f116b mov dword ptr [0x10610a3c], ecx */
  w32((uint32_t)(0x10610a3c), (ECX));
  /* 105f1171 mov edx, dword ptr [0x10610a3c] */
  EDX = (r32((uint32_t)(0x10610a3c)));
  /* 105f1177 mov dword ptr [0x10610a20], edx */
  w32((uint32_t)(0x10610a20), (EDX));
  /* 105f117d mov eax, dword ptr [0x10610a38] */
  EAX = (r32((uint32_t)(0x10610a38)));
  /* 105f1182 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 105f1184 mov dword ptr [0x10610a38], eax */
  w32((uint32_t)(0x10610a38), (EAX));
L_105f1189:;
  /* 105f1189 mov eax, dword ptr [0x10610a38] */
  EAX = (r32((uint32_t)(0x10610a38)));
  /* 105f118e and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 105f1191 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 105f1193 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f1195 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_105f1196:;
  /* 105f1196 mov esp, ebp */
  ESP = (EBP);
  /* 105f1198 pop ebp */
  EBP = (pop32());
  /* 105f1199 ret 4 */
  ESPCHK(0x105f10f0u, _esp0);
  ESP += 8; return;
}

/* FUN_100111a0 @ 0x105f11a0 (43 bytes, 11 insns) */
void f_105f11a0(void) {
  FTRACE(0x105f11a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f11a0 push ebp */
  push32((uint32_t)(EBP));
  /* 105f11a1 mov ebp, esp */
  EBP = (ESP);
  /* 105f11a3 mov eax, dword ptr [0x10610a38] */
  EAX = (r32((uint32_t)(0x10610a38)));
  /* 105f11a8 or eax, 0x104 */
  { uint32_t _r=(EAX)|(0x104u); EAX = (_r); fl_logic(_r,32); }
  /* 105f11ad mov dword ptr [0x10610a38], eax */
  w32((uint32_t)(0x10610a38), (EAX));
  /* 105f11b2 call dword ptr [0x106132d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132d8))), 0x105f11b8u);
  /* 105f11b8 mov dword ptr [0x10610a3c], eax */
  w32((uint32_t)(0x10610a3c), (EAX));
  /* 105f11bd mov ecx, dword ptr [0x10610a3c] */
  ECX = (r32((uint32_t)(0x10610a3c)));
  /* 105f11c3 mov dword ptr [0x10610a20], ecx */
  w32((uint32_t)(0x10610a20), (ECX));
  /* 105f11c9 pop ebp */
  EBP = (pop32());
  /* 105f11ca ret  */
  ESPCHK(0x105f11a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100111d0 @ 0x105f11d0 (155 bytes, 57 insns) */
void f_105f11d0(void) {
  FTRACE(0x105f11d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f11d0 push ebp */
  push32((uint32_t)(EBP));
  /* 105f11d1 mov ebp, esp */
  EBP = (ESP);
  /* 105f11d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f11d6 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f11da je 0x105f11fb */
  if (C.zf) goto L_105f11fb;
  /* 105f11dc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f11df movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105f11e2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105f11e4 je 0x105f11fb */
  if (C.zf) goto L_105f11fb;
  /* 105f11e6 push 0x1060ced8 */
  push32((uint32_t)(0x1060ced8u));
  /* 105f11eb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f11ee push edx */
  push32((uint32_t)(EDX));
  /* 105f11ef call 0x105f0730 */
  push32(0x105f11f4u); f_105f0730();
  /* 105f11f4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f11f7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f11f9 jne 0x105f1223 */
  if (!C.zf) goto L_105f1223;
L_105f11fb:;
  /* 105f11fb push 8 */
  push32((uint32_t)(0x8u));
  /* 105f11fd lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 105f1200 push eax */
  push32((uint32_t)(EAX));
  /* 105f1201 push 0x1004 */
  push32((uint32_t)(0x1004u));
  /* 105f1206 mov ecx, dword ptr [0x10610a3c] */
  ECX = (r32((uint32_t)(0x10610a3c)));
  /* 105f120c push ecx */
  push32((uint32_t)(ECX));
  /* 105f120d call dword ptr [0x10610a40] */
  call_ind((uint32_t)(r32((uint32_t)(0x10610a40))), 0x105f1213u);
  /* 105f1213 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f1215 jne 0x105f121b */
  if (!C.zf) goto L_105f121b;
  /* 105f1217 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f1219 jmp 0x105f1267 */
  goto L_105f1267;
L_105f121b:;
  /* 105f121b lea edx, [ebp - 8] */
  EDX = ((uint32_t)(EBP + -0x8));
  /* 105f121e mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 105f1221 jmp 0x105f125b */
  goto L_105f125b;
L_105f1223:;
  /* 105f1223 push 0x1060ced4 */
  push32((uint32_t)(0x1060ced4u));
  /* 105f1228 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f122b push eax */
  push32((uint32_t)(EAX));
  /* 105f122c call 0x105f0730 */
  push32(0x105f1231u); f_105f0730();
  /* 105f1231 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1234 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f1236 jne 0x105f125b */
  if (!C.zf) goto L_105f125b;
  /* 105f1238 push 8 */
  push32((uint32_t)(0x8u));
  /* 105f123a lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 105f123d push ecx */
  push32((uint32_t)(ECX));
  /* 105f123e push 0xb */
  push32((uint32_t)(0xbu));
  /* 105f1240 mov edx, dword ptr [0x10610a3c] */
  EDX = (r32((uint32_t)(0x10610a3c)));
  /* 105f1246 push edx */
  push32((uint32_t)(EDX));
  /* 105f1247 call dword ptr [0x10610a40] */
  call_ind((uint32_t)(r32((uint32_t)(0x10610a40))), 0x105f124du);
  /* 105f124d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f124f jne 0x105f1255 */
  if (!C.zf) goto L_105f1255;
  /* 105f1251 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f1253 jmp 0x105f1267 */
  goto L_105f1267;
L_105f1255:;
  /* 105f1255 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 105f1258 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_105f125b:;
  /* 105f125b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f125e push ecx */
  push32((uint32_t)(ECX));
  /* 105f125f call 0x105f3520 */
  push32(0x105f1264u); f_105f3520();
  /* 105f1264 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105f1267:;
  /* 105f1267 mov esp, ebp */
  ESP = (EBP);
  /* 105f1269 pop ebp */
  EBP = (pop32());
  /* 105f126a ret  */
  ESPCHK(0x105f11d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011270 @ 0x105f1270 (79 bytes, 26 insns) */
void f_105f1270(void) {
  FTRACE(0x105f1270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f1270 push ebp */
  push32((uint32_t)(EBP));
  /* 105f1271 mov ebp, esp */
  EBP = (ESP);
  /* 105f1273 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f1276 mov ax, word ptr [ebp + 8] */
  AX = (r16((uint32_t)(EBP + 0x8)));
  /* 105f127a mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 105f127e mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 105f1285 jmp 0x105f1290 */
  goto L_105f1290;
L_105f1287:;
  /* 105f1287 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f128a add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f128d mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_105f1290:;
  /* 105f1290 cmp dword ptr [ebp - 8], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f1294 jae 0x105f12b6 */
  if (!C.cf) goto L_105f12b6;
  /* 105f1296 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f1299 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 105f129f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f12a2 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105f12a4 mov cx, word ptr [eax*2 + 0x1060f9c4] */
  CX = (r16((uint32_t)(EAX*2 + 0x1060f9c4)));
  /* 105f12ac cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f12ae jne 0x105f12b4 */
  if (!C.zf) goto L_105f12b4;
  /* 105f12b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f12b2 jmp 0x105f12bb */
  goto L_105f12bb;
L_105f12b4:;
  /* 105f12b4 jmp 0x105f1287 */
  goto L_105f1287;
L_105f12b6:;
  /* 105f12b6 mov eax, 1 */
  EAX = (0x1u);
L_105f12bb:;
  /* 105f12bb mov esp, ebp */
  ESP = (EBP);
  /* 105f12bd pop ebp */
  EBP = (pop32());
  /* 105f12be ret  */
  ESPCHK(0x105f1270u, _esp0);
  ESP += 4; return;
}

/* FUN_100112c0 @ 0x105f12c0 (135 bytes, 48 insns) */
void f_105f12c0(void) {
  FTRACE(0x105f12c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f12c0 push ebp */
  push32((uint32_t)(EBP));
  /* 105f12c1 mov ebp, esp */
  EBP = (ESP);
  /* 105f12c3 sub esp, 0x7c */
  { uint32_t _a=(ESP),_b=(0x7cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f12c6 push esi */
  push32((uint32_t)(ESI));
  /* 105f12c7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f12ca and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105f12cf and eax, 0x3ff */
  { uint32_t _r=(EAX)&(0x3ffu); EAX = (_r); fl_logic(_r,32); }
  /* 105f12d4 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105f12d9 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 105f12dc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105f12e1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105f12e4 push 0x78 */
  push32((uint32_t)(0x78u));
  /* 105f12e6 lea ecx, [ebp - 0x7c] */
  ECX = ((uint32_t)(EBP + -0x7c));
  /* 105f12e9 push ecx */
  push32((uint32_t)(ECX));
  /* 105f12ea push 1 */
  push32((uint32_t)(0x1u));
  /* 105f12ec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f12ef push edx */
  push32((uint32_t)(EDX));
  /* 105f12f0 call dword ptr [0x10610a40] */
  call_ind((uint32_t)(r32((uint32_t)(0x10610a40))), 0x105f12f6u);
  /* 105f12f6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f12f8 jne 0x105f12fe */
  if (!C.zf) goto L_105f12fe;
  /* 105f12fa xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f12fc jmp 0x105f1342 */
  goto L_105f1342;
L_105f12fe:;
  /* 105f12fe lea eax, [ebp - 0x7c] */
  EAX = ((uint32_t)(EBP + -0x7c));
  /* 105f1301 push eax */
  push32((uint32_t)(EAX));
  /* 105f1302 call 0x105f1530 */
  push32(0x105f1307u); f_105f1530();
  /* 105f1307 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f130a cmp dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f130d je 0x105f133d */
  if (C.zf) goto L_105f133d;
  /* 105f130f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f1313 je 0x105f133d */
  if (C.zf) goto L_105f133d;
  /* 105f1315 mov ecx, dword ptr [0x10610a30] */
  ECX = (r32((uint32_t)(0x10610a30)));
  /* 105f131b push ecx */
  push32((uint32_t)(ECX));
  /* 105f131c call 0x105f15b0 */
  push32(0x105f1321u); f_105f15b0();
  /* 105f1321 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1324 mov esi, eax */
  ESI = (EAX);
  /* 105f1326 mov edx, dword ptr [0x10610a30] */
  EDX = (r32((uint32_t)(0x10610a30)));
  /* 105f132c push edx */
  push32((uint32_t)(EDX));
  /* 105f132d call 0x105e8cc0 */
  push32(0x105f1332u); f_105e8cc0();
  /* 105f1332 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1335 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f1337 jne 0x105f133d */
  if (!C.zf) goto L_105f133d;
  /* 105f1339 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f133b jmp 0x105f1342 */
  goto L_105f1342;
L_105f133d:;
  /* 105f133d mov eax, 1 */
  EAX = (0x1u);
L_105f1342:;
  /* 105f1342 pop esi */
  ESI = (pop32());
  /* 105f1343 mov esp, ebp */
  ESP = (EBP);
  /* 105f1345 pop ebp */
  EBP = (pop32());
  /* 105f1346 ret  */
  ESPCHK(0x105f12c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011350 @ 0x105f1350 (77 bytes, 18 insns) */
void f_105f1350(void) {
  FTRACE(0x105f1350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f1350 push ebp */
  push32((uint32_t)(EBP));
  /* 105f1351 mov ebp, esp */
  EBP = (ESP);
  /* 105f1353 sub esp, 0x98 */
  { uint32_t _a=(ESP),_b=(0x98u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f1359 mov dword ptr [ebp - 0x94], 0x94 */
  w32((uint32_t)(EBP + -0x94), (0x94u));
  /* 105f1363 lea eax, [ebp - 0x94] */
  EAX = ((uint32_t)(EBP + -0x94));
  /* 105f1369 push eax */
  push32((uint32_t)(EAX));
  /* 105f136a call dword ptr [0x106132fc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132fc))), 0x105f1370u);
  /* 105f1370 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f1372 je 0x105f1389 */
  if (C.zf) goto L_105f1389;
  /* 105f1374 cmp dword ptr [ebp - 0x84], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x84))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f137b jne 0x105f1389 */
  if (!C.zf) goto L_105f1389;
  /* 105f137d mov dword ptr [ebp - 0x98], 1 */
  w32((uint32_t)(EBP + -0x98), (0x1u));
  /* 105f1387 jmp 0x105f1393 */
  goto L_105f1393;
L_105f1389:;
  /* 105f1389 mov dword ptr [ebp - 0x98], 0 */
  w32((uint32_t)(EBP + -0x98), (0x0u));
L_105f1393:;
  /* 105f1393 mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 105f1399 mov esp, ebp */
  ESP = (EBP);
  /* 105f139b pop ebp */
  EBP = (pop32());
  /* 105f139c ret  */
  ESPCHK(0x105f1350u, _esp0);
  ESP += 4; return;
}

/* crtGetLocaleInfoA @ 0x105f13a0 (388 bytes, 118 insns) */
void f_105f13a0(void) {
  FTRACE(0x105f13a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f13a0 push ebp */
  push32((uint32_t)(EBP));
  /* 105f13a1 mov ebp, esp */
  EBP = (ESP);
  /* 105f13a3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f13a6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 105f13ad mov dword ptr [ebp - 4], 0x1a */
  w32((uint32_t)(EBP + -0x4), (0x1au));
  /* 105f13b4 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_105f13bb:;
  /* 105f13bb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105f13be cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f13c1 jg 0x105f1508 */
  if ((!C.zf&&C.sf==C.of)) goto L_105f1508;
  /* 105f13c7 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105f13ca add eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f13cd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 105f13ce sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f13d0 sar eax, 1 */
  EAX = (sh_sar((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 105f13d2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105f13d5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f13d8 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105f13db mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f13de cmp edx, dword ptr [ecx + 0x1060f520] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x1060f520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f13e4 jne 0x105f14de */
  if (!C.zf) goto L_105f14de;
  /* 105f13ea mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f13ed mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 105f13f0 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f13f4 ja 0x105f1417 */
  if ((!C.cf&&!C.zf)) goto L_105f1417;
  /* 105f13f6 cmp dword ptr [ebp - 0x14], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f13fa je 0x105f1489 */
  if (C.zf) goto L_105f1489;
  /* 105f1400 cmp dword ptr [ebp - 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f1404 je 0x105f1434 */
  if (C.zf) goto L_105f1434;
  /* 105f1406 cmp dword ptr [ebp - 0x14], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f140a je 0x105f1456 */
  if (C.zf) goto L_105f1456;
  /* 105f140c cmp dword ptr [ebp - 0x14], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f1410 je 0x105f1478 */
  if (C.zf) goto L_105f1478;
  /* 105f1412 jmp 0x105f14a8 */
  goto L_105f14a8;
L_105f1417:;
  /* 105f1417 cmp dword ptr [ebp - 0x14], 0x1001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f141e je 0x105f1445 */
  if (C.zf) goto L_105f1445;
  /* 105f1420 cmp dword ptr [ebp - 0x14], 0x1002 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1002u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f1427 je 0x105f1467 */
  if (C.zf) goto L_105f1467;
  /* 105f1429 cmp dword ptr [ebp - 0x14], 0x1004 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1004u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f1430 je 0x105f149a */
  if (C.zf) goto L_105f149a;
  /* 105f1432 jmp 0x105f14a8 */
  goto L_105f14a8;
L_105f1434:;
  /* 105f1434 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f1437 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105f143a add ecx, 0x1060f524 */
  { uint32_t _a=(ECX),_b=(0x1060f524u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1440 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105f1443 jmp 0x105f14a8 */
  goto L_105f14a8;
L_105f1445:;
  /* 105f1445 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f1448 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105f144b mov eax, dword ptr [edx + 0x1060f52c] */
  EAX = (r32((uint32_t)(EDX + 0x1060f52c)));
  /* 105f1451 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105f1454 jmp 0x105f14a8 */
  goto L_105f14a8;
L_105f1456:;
  /* 105f1456 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f1459 imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105f145c add ecx, 0x1060f530 */
  { uint32_t _a=(ECX),_b=(0x1060f530u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1462 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105f1465 jmp 0x105f14a8 */
  goto L_105f14a8;
L_105f1467:;
  /* 105f1467 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f146a imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105f146d mov eax, dword ptr [edx + 0x1060f534] */
  EAX = (r32((uint32_t)(EDX + 0x1060f534)));
  /* 105f1473 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105f1476 jmp 0x105f14a8 */
  goto L_105f14a8;
L_105f1478:;
  /* 105f1478 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f147b imul ecx, ecx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x2cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105f147e add ecx, 0x1060f538 */
  { uint32_t _a=(ECX),_b=(0x1060f538u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1484 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105f1487 jmp 0x105f14a8 */
  goto L_105f14a8;
L_105f1489:;
  /* 105f1489 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f148c imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105f148f add edx, 0x1060f53c */
  { uint32_t _a=(EDX),_b=(0x1060f53cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1495 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 105f1498 jmp 0x105f14a8 */
  goto L_105f14a8;
L_105f149a:;
  /* 105f149a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f149d imul eax, eax, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x2cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105f14a0 add eax, 0x1060f544 */
  { uint32_t _a=(EAX),_b=(0x1060f544u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f14a5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_105f14a8:;
  /* 105f14a8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f14ac je 0x105f14b4 */
  if (C.zf) goto L_105f14b4;
  /* 105f14ae cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f14b2 jge 0x105f14b6 */
  if ((C.sf==C.of)) goto L_105f14b6;
L_105f14b4:;
  /* 105f14b4 jmp 0x105f1508 */
  goto L_105f1508;
L_105f14b6:;
  /* 105f14b6 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f14b9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f14bc push ecx */
  push32((uint32_t)(ECX));
  /* 105f14bd mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f14c0 push edx */
  push32((uint32_t)(EDX));
  /* 105f14c1 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f14c4 push eax */
  push32((uint32_t)(EAX));
  /* 105f14c5 call 0x105e96b0 */
  push32(0x105f14cau); f_105e96b0();
  /* 105f14ca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f14cd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f14d0 add ecx, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f14d3 mov byte ptr [ecx - 1], 0 */
  w8((uint32_t)(ECX + -0x1), (0x0u));
  /* 105f14d7 mov eax, 1 */
  EAX = (0x1u);
  /* 105f14dc jmp 0x105f151e */
  goto L_105f151e;
L_105f14de:;
  /* 105f14de mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f14e1 imul edx, edx, 0x2c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x2cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105f14e4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f14e7 cmp eax, dword ptr [edx + 0x1060f520] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x1060f520))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f14ed jae 0x105f14fa */
  if (!C.cf) goto L_105f14fa;
  /* 105f14ef mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f14f2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f14f5 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105f14f8 jmp 0x105f1503 */
  goto L_105f1503;
L_105f14fa:;
  /* 105f14fa mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f14fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1500 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_105f1503:;
  /* 105f1503 jmp 0x105f13bb */
  goto L_105f13bb;
L_105f1508:;
  /* 105f1508 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f150b push eax */
  push32((uint32_t)(EAX));
  /* 105f150c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f150f push ecx */
  push32((uint32_t)(ECX));
  /* 105f1510 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f1513 push edx */
  push32((uint32_t)(EDX));
  /* 105f1514 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f1517 push eax */
  push32((uint32_t)(EAX));
  /* 105f1518 call dword ptr [0x106132f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132f4))), 0x105f151eu);
L_105f151e:;
  /* 105f151e mov esp, ebp */
  ESP = (EBP);
  /* 105f1520 pop ebp */
  EBP = (pop32());
  /* 105f1521 ret 0x10 */
  ESPCHK(0x105f13a0u, _esp0);
  ESP += 20; return;
}

/* FUN_10011530 @ 0x105f1530 (118 bytes, 42 insns) */
void f_105f1530(void) {
  FTRACE(0x105f1530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f1530 push ebp */
  push32((uint32_t)(EBP));
  /* 105f1531 mov ebp, esp */
  EBP = (ESP);
  /* 105f1533 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f1536 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_105f153d:;
  /* 105f153d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f1540 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 105f1542 mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 105f1545 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 105f1549 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f154c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f154f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 105f1552 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105f1554 je 0x105f159f */
  if (C.zf) goto L_105f159f;
  /* 105f1556 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 105f155a cmp ecx, 0x61 */
  { uint32_t _a=(ECX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f155d jl 0x105f1572 */
  if ((C.sf!=C.of)) goto L_105f1572;
  /* 105f155f movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 105f1563 cmp edx, 0x66 */
  { uint32_t _a=(EDX),_b=(0x66u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f1566 jg 0x105f1572 */
  if ((!C.zf&&C.sf==C.of)) goto L_105f1572;
  /* 105f1568 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 105f156b add al, 0xd9 */
  { uint32_t _a=(AL),_b=(0xd9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 105f156d mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 105f1570 jmp 0x105f158c */
  goto L_105f158c;
L_105f1572:;
  /* 105f1572 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 105f1576 cmp ecx, 0x41 */
  { uint32_t _a=(ECX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f1579 jl 0x105f158c */
  if ((C.sf!=C.of)) goto L_105f158c;
  /* 105f157b movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 105f157f cmp edx, 0x46 */
  { uint32_t _a=(EDX),_b=(0x46u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f1582 jg 0x105f158c */
  if ((!C.zf&&C.sf==C.of)) goto L_105f158c;
  /* 105f1584 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 105f1587 add al, 0xf9 */
  { uint32_t _a=(AL),_b=(0xf9u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 105f1589 mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
L_105f158c:;
  /* 105f158c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f158f shl ecx, 4 */
  ECX = (sh_shl((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 105f1592 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 105f1596 lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 105f159a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105f159d jmp 0x105f153d */
  goto L_105f153d;
L_105f159f:;
  /* 105f159f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f15a2 mov esp, ebp */
  ESP = (EBP);
  /* 105f15a4 pop ebp */
  EBP = (pop32());
  /* 105f15a5 ret  */
  ESPCHK(0x105f1530u, _esp0);
  ESP += 4; return;
}

/* _GetPrimaryLen @ 0x105f15b0 (101 bytes, 36 insns) */
void f_105f15b0(void) {
  FTRACE(0x105f15b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f15b0 push ebp */
  push32((uint32_t)(EBP));
  /* 105f15b1 mov ebp, esp */
  EBP = (ESP);
  /* 105f15b3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f15b6 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 105f15bd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f15c0 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 105f15c2 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 105f15c5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f15c8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f15cb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_105f15ce:;
  /* 105f15ce movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 105f15d2 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f15d5 jl 0x105f15e0 */
  if ((C.sf!=C.of)) goto L_105f15e0;
  /* 105f15d7 movsx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 105f15db cmp ecx, 0x5a */
  { uint32_t _a=(ECX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f15de jle 0x105f15f2 */
  if ((C.zf||C.sf!=C.of)) goto L_105f15f2;
L_105f15e0:;
  /* 105f15e0 movsx edx, byte ptr [ebp - 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 105f15e4 cmp edx, 0x61 */
  { uint32_t _a=(EDX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f15e7 jl 0x105f160e */
  if ((C.sf!=C.of)) goto L_105f160e;
  /* 105f15e9 movsx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x4))));
  /* 105f15ed cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f15f0 jg 0x105f160e */
  if ((!C.zf&&C.sf==C.of)) goto L_105f160e;
L_105f15f2:;
  /* 105f15f2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f15f5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f15f8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105f15fb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f15fe mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105f1600 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 105f1603 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f1606 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1609 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 105f160c jmp 0x105f15ce */
  goto L_105f15ce;
L_105f160e:;
  /* 105f160e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f1611 mov esp, ebp */
  ESP = (EBP);
  /* 105f1613 pop ebp */
  EBP = (pop32());
  /* 105f1614 ret  */
  ESPCHK(0x105f15b0u, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x105f1618 (32 bytes, 18 insns) */
void f_105f1618(void) {
  FTRACE(0x105f1618u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f1618 push ebp */
  push32((uint32_t)(EBP));
  /* 105f1619 mov ebp, esp */
  EBP = (ESP);
  /* 105f161b push ebx */
  push32((uint32_t)(EBX));
  /* 105f161c push esi */
  push32((uint32_t)(ESI));
  /* 105f161d push edi */
  push32((uint32_t)(EDI));
  /* 105f161e push ebp */
  push32((uint32_t)(EBP));
  /* 105f161f push 0 */
  push32((uint32_t)(0x0u));
  /* 105f1621 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f1623 push 0x105f1630 */
  push32((uint32_t)(0x105f1630u));
  /* 105f1628 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 105f162b call 0x105f53fc */
  push32(0x105f1630u); f_105f53fc();
  /* 105f1630 pop ebp */
  EBP = (pop32());
  /* 105f1631 pop edi */
  EDI = (pop32());
  /* 105f1632 pop esi */
  ESI = (pop32());
  /* 105f1633 pop ebx */
  EBX = (pop32());
  /* 105f1634 mov esp, ebp */
  ESP = (EBP);
  /* 105f1636 pop ebp */
  EBP = (pop32());
  /* 105f1637 ret  */
  ESPCHK(0x105f1618u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x105f165a (104 bytes, 33 insns) */
void f_105f165a(void) {
  FTRACE(0x105f165au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f165a push ebx */
  push32((uint32_t)(EBX));
  /* 105f165b push esi */
  push32((uint32_t)(ESI));
  /* 105f165c push edi */
  push32((uint32_t)(EDI));
  /* 105f165d mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 105f1661 push eax */
  push32((uint32_t)(EAX));
  /* 105f1662 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 105f1664 push 0x105f1638 */
  push32((uint32_t)(0x105f1638u));
  /* 105f1669 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 105f1670 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_105f1677:;
  /* 105f1677 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 105f167b mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 105f167e mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 105f1681 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f1684 je 0x105f16b4 */
  if (C.zf) goto L_105f16b4;
  /* 105f1686 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f168a je 0x105f16b4 */
  if (C.zf) goto L_105f16b4;
  /* 105f168c lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 105f168f mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 105f1692 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 105f1696 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 105f1699 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f169e jne 0x105f16b2 */
  if (!C.zf) goto L_105f16b2;
  /* 105f16a0 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 105f16a5 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 105f16a9 call 0x105f16ee */
  push32(0x105f16aeu); f_105f16ee();
  /* 105f16ae call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x105f16b2u);
L_105f16b2:;
  /* 105f16b2 jmp 0x105f1677 */
  goto L_105f1677;
L_105f16b4:;
  /* 105f16b4 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 105f16bb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f16be pop edi */
  EDI = (pop32());
  /* 105f16bf pop esi */
  ESI = (pop32());
  /* 105f16c0 pop ebx */
  EBX = (pop32());
  /* 105f16c1 ret  */
  ESPCHK(0x105f165au, _esp0);
  ESP += 4; return;
}

/* FUN_100116ee @ 0x105f16ee (24 bytes, 10 insns) */
void f_105f16ee(void) {
  FTRACE(0x105f16eeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f16ee push ebx */
  push32((uint32_t)(EBX));
  /* 105f16ef push ecx */
  push32((uint32_t)(ECX));
  /* 105f16f0 mov ebx, 0x1060fc98 */
  EBX = (0x1060fc98u);
  /* 105f16f5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f16f8 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 105f16fb mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 105f16fe mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 105f1701 pop ecx */
  ECX = (pop32());
  /* 105f1702 pop ebx */
  EBX = (pop32());
  /* 105f1703 ret 4 */
  ESPCHK(0x105f16eeu, _esp0);
  ESP += 8; return;
}

/* FUN_100117cd @ 0x105f17cd (27 bytes, 11 insns) */
void f_105f17cd(void) {
  FTRACE(0x105f17cdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f17cd push ebp */
  push32((uint32_t)(EBP));
  /* 105f17ce mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 105f17d2 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 105f17d4 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 105f17d7 push eax */
  push32((uint32_t)(EAX));
  /* 105f17d8 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 105f17db push eax */
  push32((uint32_t)(EAX));
  /* 105f17dc call 0x105f165a */
  push32(0x105f17e1u); f_105f165a();
  /* 105f17e1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f17e4 pop ebp */
  EBP = (pop32());
  /* 105f17e5 ret 4 */
  ESPCHK(0x105f17cdu, _esp0);
  ESP += 8; return;
}

/* FUN_100117f0 @ 0x105f17f0 (122 bytes, 39 insns) */
void f_105f17f0(void) {
  FTRACE(0x105f17f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f17f0 push ebp */
  push32((uint32_t)(EBP));
  /* 105f17f1 mov ebp, esp */
  EBP = (ESP);
  /* 105f17f3 push ecx */
  push32((uint32_t)(ECX));
  /* 105f17f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f17f7 cmp eax, dword ptr [0x106122bc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x106122bc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f17fd jae 0x105f1821 */
  if (!C.cf) goto L_105f1821;
  /* 105f17ff mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f1802 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 105f1805 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f1808 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 105f180b imul edx, edx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x24u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105f180e mov eax, dword ptr [ecx*4 + 0x10612180] */
  EAX = (r32((uint32_t)(ECX*4 + 0x10612180)));
  /* 105f1815 movsx ecx, byte ptr [eax + edx + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + EDX*1 + 0x4))));
  /* 105f181a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 105f181d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105f181f jne 0x105f183c */
  if (!C.zf) goto L_105f183c;
L_105f1821:;
  /* 105f1821 call 0x105ed400 */
  push32(0x105f1826u); f_105ed400();
  /* 105f1826 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 105f182c call 0x105ed410 */
  push32(0x105f1831u); f_105ed410();
  /* 105f1831 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 105f1837 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105f183a jmp 0x105f1866 */
  goto L_105f1866;
L_105f183c:;
  /* 105f183c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f183f push edx */
  push32((uint32_t)(EDX));
  /* 105f1840 call 0x105ed930 */
  push32(0x105f1845u); f_105ed930();
  /* 105f1845 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1848 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f184b push eax */
  push32((uint32_t)(EAX));
  /* 105f184c call 0x105f1870 */
  push32(0x105f1851u); f_105f1870();
  /* 105f1851 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1854 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105f1857 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f185a push ecx */
  push32((uint32_t)(ECX));
  /* 105f185b call 0x105ed9c0 */
  push32(0x105f1860u); f_105ed9c0();
  /* 105f1860 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1863 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_105f1866:;
  /* 105f1866 mov esp, ebp */
  ESP = (EBP);
  /* 105f1868 pop ebp */
  EBP = (pop32());
  /* 105f1869 ret  */
  ESPCHK(0x105f17f0u, _esp0);
  ESP += 4; return;
}

/* __close_lk @ 0x105f1870 (170 bytes, 59 insns) */
void f_105f1870(void) {
  FTRACE(0x105f1870u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f1870 push ebp */
  push32((uint32_t)(EBP));
  /* 105f1871 mov ebp, esp */
  EBP = (ESP);
  /* 105f1873 push ecx */
  push32((uint32_t)(ECX));
  /* 105f1874 push esi */
  push32((uint32_t)(ESI));
  /* 105f1875 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f1878 push eax */
  push32((uint32_t)(EAX));
  /* 105f1879 call 0x105ed7b0 */
  push32(0x105f187eu); f_105ed7b0();
  /* 105f187e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1881 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f1884 je 0x105f18c3 */
  if (C.zf) goto L_105f18c3;
  /* 105f1886 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f188a je 0x105f1892 */
  if (C.zf) goto L_105f1892;
  /* 105f188c cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f1890 jne 0x105f18ac */
  if (!C.zf) goto L_105f18ac;
L_105f1892:;
  /* 105f1892 push 1 */
  push32((uint32_t)(0x1u));
  /* 105f1894 call 0x105ed7b0 */
  push32(0x105f1899u); f_105ed7b0();
  /* 105f1899 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f189c mov esi, eax */
  ESI = (EAX);
  /* 105f189e push 2 */
  push32((uint32_t)(0x2u));
  /* 105f18a0 call 0x105ed7b0 */
  push32(0x105f18a5u); f_105ed7b0();
  /* 105f18a5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f18a8 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f18aa je 0x105f18c3 */
  if (C.zf) goto L_105f18c3;
L_105f18ac:;
  /* 105f18ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f18af push ecx */
  push32((uint32_t)(ECX));
  /* 105f18b0 call 0x105ed7b0 */
  push32(0x105f18b5u); f_105ed7b0();
  /* 105f18b5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f18b8 push eax */
  push32((uint32_t)(EAX));
  /* 105f18b9 call dword ptr [0x10613304] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613304))), 0x105f18bfu);
  /* 105f18bf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f18c1 je 0x105f18cc */
  if (C.zf) goto L_105f18cc;
L_105f18c3:;
  /* 105f18c3 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105f18ca jmp 0x105f18d5 */
  goto L_105f18d5;
L_105f18cc:;
  /* 105f18cc call dword ptr [0x10613250] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613250))), 0x105f18d2u);
  /* 105f18d2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105f18d5:;
  /* 105f18d5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f18d8 push edx */
  push32((uint32_t)(EDX));
  /* 105f18d9 call 0x105ed6d0 */
  push32(0x105f18deu); f_105ed6d0();
  /* 105f18de add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f18e1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f18e4 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 105f18e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f18ea and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 105f18ed imul ecx, ecx, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x24u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105f18f0 mov edx, dword ptr [eax*4 + 0x10612180] */
  EDX = (r32((uint32_t)(EAX*4 + 0x10612180)));
  /* 105f18f7 mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
  /* 105f18fc cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f1900 je 0x105f1913 */
  if (C.zf) goto L_105f1913;
  /* 105f1902 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f1905 push eax */
  push32((uint32_t)(EAX));
  /* 105f1906 call 0x105ed360 */
  push32(0x105f190bu); f_105ed360();
  /* 105f190b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f190e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105f1911 jmp 0x105f1915 */
  goto L_105f1915;
L_105f1913:;
  /* 105f1913 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105f1915:;
  /* 105f1915 pop esi */
  ESI = (pop32());
  /* 105f1916 mov esp, ebp */
  ESP = (EBP);
  /* 105f1918 pop ebp */
  EBP = (pop32());
  /* 105f1919 ret  */
  ESPCHK(0x105f1870u, _esp0);
  ESP += 4; return;
}

/* FUN_10011920 @ 0x105f1920 (146 bytes, 52 insns) */
void f_105f1920(void) {
  FTRACE(0x105f1920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f1920 push ebp */
  push32((uint32_t)(EBP));
  /* 105f1921 mov ebp, esp */
  EBP = (ESP);
  /* 105f1923 push ebx */
  push32((uint32_t)(EBX));
  /* 105f1924 push esi */
  push32((uint32_t)(ESI));
  /* 105f1925 push edi */
  push32((uint32_t)(EDI));
L_105f1926:;
  /* 105f1926 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f192a jne 0x105f194a */
  if (!C.zf) goto L_105f194a;
  /* 105f192c push 0x1060c814 */
  push32((uint32_t)(0x1060c814u));
  /* 105f1931 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f1933 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 105f1935 push 0x1060cedc */
  push32((uint32_t)(0x1060cedcu));
  /* 105f193a push 2 */
  push32((uint32_t)(0x2u));
  /* 105f193c call 0x105e3e30 */
  push32(0x105f1941u); f_105e3e30();
  /* 105f1941 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1944 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f1947 jne 0x105f194a */
  if (!C.zf) goto L_105f194a;
  /* 105f1949 int3  */
  x86_unimpl("int3 @ 0x105f1949");
L_105f194a:;
  /* 105f194a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f194c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f194e jne 0x105f1926 */
  if (!C.zf) goto L_105f1926;
  /* 105f1950 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f1953 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 105f1956 and edx, 0x83 */
  { uint32_t _r=(EDX)&(0x83u); EDX = (_r); fl_logic(_r,32); }
  /* 105f195c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105f195e je 0x105f19ad */
  if (C.zf) goto L_105f19ad;
  /* 105f1960 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f1963 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 105f1966 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 105f1969 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105f196b je 0x105f19ad */
  if (C.zf) goto L_105f19ad;
  /* 105f196d push 2 */
  push32((uint32_t)(0x2u));
  /* 105f196f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f1972 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 105f1975 push eax */
  push32((uint32_t)(EAX));
  /* 105f1976 call 0x105e6920 */
  push32(0x105f197bu); f_105e6920();
  /* 105f197b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f197e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f1981 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 105f1984 and edx, 0xfffffbf7 */
  { uint32_t _r=(EDX)&(0xfffffbf7u); EDX = (_r); fl_logic(_r,32); }
  /* 105f198a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f198d mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 105f1990 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f1993 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 105f1999 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f199c mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 105f19a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f19a6 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
L_105f19ad:;
  /* 105f19ad pop edi */
  EDI = (pop32());
  /* 105f19ae pop esi */
  ESI = (pop32());
  /* 105f19af pop ebx */
  EBX = (pop32());
  /* 105f19b0 pop ebp */
  EBP = (pop32());
  /* 105f19b1 ret  */
  ESPCHK(0x105f1920u, _esp0);
  ESP += 4; return;
}

/* FUN_100119c0 @ 0x105f19c0 (289 bytes, 97 insns) */
void f_105f19c0(void) {
  FTRACE(0x105f19c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f19c0 push ebp */
  push32((uint32_t)(EBP));
  /* 105f19c1 mov ebp, esp */
  EBP = (ESP);
  /* 105f19c3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f19c6 push esi */
  push32((uint32_t)(ESI));
  /* 105f19c7 mov eax, dword ptr [0x1060fca8] */
  EAX = (r32((uint32_t)(0x1060fca8)));
  /* 105f19cc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105f19cf mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 105f19d6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 105f19dd jmp 0x105f19e8 */
  goto L_105f19e8;
L_105f19df:;
  /* 105f19df mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105f19e2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f19e5 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_105f19e8:;
  /* 105f19e8 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f19ec jae 0x105f1a21 */
  if (!C.cf) goto L_105f1a21;
  /* 105f19ee mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105f19f1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f19f4 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 105f19f7 push ecx */
  push32((uint32_t)(ECX));
  /* 105f19f8 call 0x105e8cc0 */
  push32(0x105f19fdu); f_105e8cc0();
  /* 105f19fd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1a00 mov esi, eax */
  ESI = (EAX);
  /* 105f1a02 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105f1a05 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f1a08 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 105f1a0c push ecx */
  push32((uint32_t)(ECX));
  /* 105f1a0d call 0x105e8cc0 */
  push32(0x105f1a12u); f_105e8cc0();
  /* 105f1a12 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1a15 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1a18 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 105f1a1c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 105f1a1f jmp 0x105f19df */
  goto L_105f19df;
L_105f1a21:;
  /* 105f1a21 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f1a24 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1a27 push eax */
  push32((uint32_t)(EAX));
  /* 105f1a28 call 0x105e5e70 */
  push32(0x105f1a2du); f_105e5e70();
  /* 105f1a2d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1a30 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105f1a33 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f1a37 je 0x105f1ad9 */
  if (C.zf) goto L_105f1ad9;
  /* 105f1a3d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f1a40 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 105f1a43 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 105f1a4a jmp 0x105f1a55 */
  goto L_105f1a55;
L_105f1a4c:;
  /* 105f1a4c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105f1a4f add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1a52 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_105f1a55:;
  /* 105f1a55 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f1a59 jae 0x105f1aca */
  if (!C.cf) goto L_105f1aca;
  /* 105f1a5b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105f1a5e mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 105f1a61 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105f1a64 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1a67 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 105f1a6a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105f1a6d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f1a70 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 105f1a73 push ecx */
  push32((uint32_t)(ECX));
  /* 105f1a74 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105f1a77 push edx */
  push32((uint32_t)(EDX));
  /* 105f1a78 call 0x105e8e40 */
  push32(0x105f1a7du); f_105e8e40();
  /* 105f1a7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1a80 push eax */
  push32((uint32_t)(EAX));
  /* 105f1a81 call 0x105e8cc0 */
  push32(0x105f1a86u); f_105e8cc0();
  /* 105f1a86 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1a89 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105f1a8c add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1a8e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 105f1a91 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105f1a94 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 105f1a97 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105f1a9a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1a9d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 105f1aa0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105f1aa3 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f1aa6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 105f1aaa push eax */
  push32((uint32_t)(EAX));
  /* 105f1aab mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105f1aae push ecx */
  push32((uint32_t)(ECX));
  /* 105f1aaf call 0x105e8e40 */
  push32(0x105f1ab4u); f_105e8e40();
  /* 105f1ab4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1ab7 push eax */
  push32((uint32_t)(EAX));
  /* 105f1ab8 call 0x105e8cc0 */
  push32(0x105f1abdu); f_105e8cc0();
  /* 105f1abd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1ac0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105f1ac3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1ac5 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 105f1ac8 jmp 0x105f1a4c */
  goto L_105f1a4c;
L_105f1aca:;
  /* 105f1aca mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105f1acd mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 105f1ad0 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105f1ad3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1ad6 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_105f1ad9:;
  /* 105f1ad9 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f1adc pop esi */
  ESI = (pop32());
  /* 105f1add mov esp, ebp */
  ESP = (EBP);
  /* 105f1adf pop ebp */
  EBP = (pop32());
  /* 105f1ae0 ret  */
  ESPCHK(0x105f19c0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011af0 @ 0x105f1af0 (291 bytes, 97 insns) */
void f_105f1af0(void) {
  FTRACE(0x105f1af0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f1af0 push ebp */
  push32((uint32_t)(EBP));
  /* 105f1af1 mov ebp, esp */
  EBP = (ESP);
  /* 105f1af3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f1af6 push esi */
  push32((uint32_t)(ESI));
  /* 105f1af7 mov eax, dword ptr [0x1060fca8] */
  EAX = (r32((uint32_t)(0x1060fca8)));
  /* 105f1afc mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105f1aff mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 105f1b06 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 105f1b0d jmp 0x105f1b18 */
  goto L_105f1b18;
L_105f1b0f:;
  /* 105f1b0f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105f1b12 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1b15 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_105f1b18:;
  /* 105f1b18 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f1b1c jae 0x105f1b52 */
  if (!C.cf) goto L_105f1b52;
  /* 105f1b1e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105f1b21 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f1b24 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 105f1b28 push ecx */
  push32((uint32_t)(ECX));
  /* 105f1b29 call 0x105e8cc0 */
  push32(0x105f1b2eu); f_105e8cc0();
  /* 105f1b2e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1b31 mov esi, eax */
  ESI = (EAX);
  /* 105f1b33 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105f1b36 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f1b39 mov ecx, dword ptr [eax + edx*4 + 0x68] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x68)));
  /* 105f1b3d push ecx */
  push32((uint32_t)(ECX));
  /* 105f1b3e call 0x105e8cc0 */
  push32(0x105f1b43u); f_105e8cc0();
  /* 105f1b43 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1b46 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1b49 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 105f1b4d mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 105f1b50 jmp 0x105f1b0f */
  goto L_105f1b0f;
L_105f1b52:;
  /* 105f1b52 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f1b55 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1b58 push eax */
  push32((uint32_t)(EAX));
  /* 105f1b59 call 0x105e5e70 */
  push32(0x105f1b5eu); f_105e5e70();
  /* 105f1b5e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1b61 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105f1b64 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f1b68 je 0x105f1c0b */
  if (C.zf) goto L_105f1c0b;
  /* 105f1b6e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f1b71 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 105f1b74 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 105f1b7b jmp 0x105f1b86 */
  goto L_105f1b86;
L_105f1b7d:;
  /* 105f1b7d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105f1b80 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1b83 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_105f1b86:;
  /* 105f1b86 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f1b8a jae 0x105f1bfc */
  if (!C.cf) goto L_105f1bfc;
  /* 105f1b8c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105f1b8f mov byte ptr [eax], 0x3a */
  w8((uint32_t)(EAX), (0x3au));
  /* 105f1b92 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105f1b95 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1b98 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 105f1b9b mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105f1b9e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f1ba1 mov ecx, dword ptr [eax + edx*4 + 0x38] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x38)));
  /* 105f1ba5 push ecx */
  push32((uint32_t)(ECX));
  /* 105f1ba6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105f1ba9 push edx */
  push32((uint32_t)(EDX));
  /* 105f1baa call 0x105e8e40 */
  push32(0x105f1bafu); f_105e8e40();
  /* 105f1baf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1bb2 push eax */
  push32((uint32_t)(EAX));
  /* 105f1bb3 call 0x105e8cc0 */
  push32(0x105f1bb8u); f_105e8cc0();
  /* 105f1bb8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1bbb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105f1bbe add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1bc0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 105f1bc3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105f1bc6 mov byte ptr [edx], 0x3a */
  w8((uint32_t)(EDX), (0x3au));
  /* 105f1bc9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105f1bcc add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1bcf mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 105f1bd2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105f1bd5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f1bd8 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 105f1bdc push eax */
  push32((uint32_t)(EAX));
  /* 105f1bdd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105f1be0 push ecx */
  push32((uint32_t)(ECX));
  /* 105f1be1 call 0x105e8e40 */
  push32(0x105f1be6u); f_105e8e40();
  /* 105f1be6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1be9 push eax */
  push32((uint32_t)(EAX));
  /* 105f1bea call 0x105e8cc0 */
  push32(0x105f1befu); f_105e8cc0();
  /* 105f1bef add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1bf2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105f1bf5 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1bf7 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 105f1bfa jmp 0x105f1b7d */
  goto L_105f1b7d;
L_105f1bfc:;
  /* 105f1bfc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105f1bff mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 105f1c02 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105f1c05 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1c08 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_105f1c0b:;
  /* 105f1c0b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f1c0e pop esi */
  ESI = (pop32());
  /* 105f1c0f mov esp, ebp */
  ESP = (EBP);
  /* 105f1c11 pop ebp */
  EBP = (pop32());
  /* 105f1c12 ret  */
  ESPCHK(0x105f1af0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011c20 @ 0x105f1c20 (878 bytes, 273 insns) */
void f_105f1c20(void) {
  FTRACE(0x105f1c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f1c20 push ebp */
  push32((uint32_t)(EBP));
  /* 105f1c21 mov ebp, esp */
  EBP = (ESP);
  /* 105f1c23 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f1c26 push esi */
  push32((uint32_t)(ESI));
  /* 105f1c27 mov eax, dword ptr [0x1060fca8] */
  EAX = (r32((uint32_t)(0x1060fca8)));
  /* 105f1c2c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105f1c2f mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 105f1c36 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 105f1c3d jmp 0x105f1c48 */
  goto L_105f1c48;
L_105f1c3f:;
  /* 105f1c3f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105f1c42 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1c45 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_105f1c48:;
  /* 105f1c48 cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f1c4c jae 0x105f1c81 */
  if (!C.cf) goto L_105f1c81;
  /* 105f1c4e mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105f1c51 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f1c54 mov ecx, dword ptr [eax + edx*4] */
  ECX = (r32((uint32_t)(EAX + EDX*4)));
  /* 105f1c57 push ecx */
  push32((uint32_t)(ECX));
  /* 105f1c58 call 0x105e8cc0 */
  push32(0x105f1c5du); f_105e8cc0();
  /* 105f1c5d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1c60 mov esi, eax */
  ESI = (EAX);
  /* 105f1c62 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105f1c65 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f1c68 mov ecx, dword ptr [eax + edx*4 + 0x1c] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x1c)));
  /* 105f1c6c push ecx */
  push32((uint32_t)(ECX));
  /* 105f1c6d call 0x105e8cc0 */
  push32(0x105f1c72u); f_105e8cc0();
  /* 105f1c72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1c75 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1c78 lea edx, [eax + esi + 2] */
  EDX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 105f1c7c mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 105f1c7f jmp 0x105f1c3f */
  goto L_105f1c3f;
L_105f1c81:;
  /* 105f1c81 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 105f1c88 jmp 0x105f1c93 */
  goto L_105f1c93;
L_105f1c8a:;
  /* 105f1c8a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105f1c8d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1c90 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_105f1c93:;
  /* 105f1c93 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f1c97 jae 0x105f1ccd */
  if (!C.cf) goto L_105f1ccd;
  /* 105f1c99 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105f1c9c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f1c9f mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 105f1ca3 push eax */
  push32((uint32_t)(EAX));
  /* 105f1ca4 call 0x105e8cc0 */
  push32(0x105f1ca9u); f_105e8cc0();
  /* 105f1ca9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1cac mov esi, eax */
  ESI = (EAX);
  /* 105f1cae mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105f1cb1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f1cb4 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 105f1cb8 push eax */
  push32((uint32_t)(EAX));
  /* 105f1cb9 call 0x105e8cc0 */
  push32(0x105f1cbeu); f_105e8cc0();
  /* 105f1cbe add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1cc1 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1cc4 lea ecx, [eax + esi + 2] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 105f1cc8 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105f1ccb jmp 0x105f1c8a */
  goto L_105f1c8a;
L_105f1ccd:;
  /* 105f1ccd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f1cd0 mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 105f1cd6 push eax */
  push32((uint32_t)(EAX));
  /* 105f1cd7 call 0x105e8cc0 */
  push32(0x105f1cdcu); f_105e8cc0();
  /* 105f1cdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1cdf mov esi, eax */
  ESI = (EAX);
  /* 105f1ce1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f1ce4 mov edx, dword ptr [ecx + 0x9c] */
  EDX = (r32((uint32_t)(ECX + 0x9c)));
  /* 105f1cea push edx */
  push32((uint32_t)(EDX));
  /* 105f1ceb call 0x105e8cc0 */
  push32(0x105f1cf0u); f_105e8cc0();
  /* 105f1cf0 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1cf3 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1cf6 lea eax, [eax + esi + 2] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x2));
  /* 105f1cfa mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105f1cfd mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f1d00 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 105f1d06 push edx */
  push32((uint32_t)(EDX));
  /* 105f1d07 call 0x105e8cc0 */
  push32(0x105f1d0cu); f_105e8cc0();
  /* 105f1d0c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1d0f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f1d12 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 105f1d16 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 105f1d19 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f1d1c mov ecx, dword ptr [eax + 0xa4] */
  ECX = (r32((uint32_t)(EAX + 0xa4)));
  /* 105f1d22 push ecx */
  push32((uint32_t)(ECX));
  /* 105f1d23 call 0x105e8cc0 */
  push32(0x105f1d28u); f_105e8cc0();
  /* 105f1d28 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1d2b mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f1d2e lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 105f1d32 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105f1d35 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f1d38 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 105f1d3e push edx */
  push32((uint32_t)(EDX));
  /* 105f1d3f call 0x105e8cc0 */
  push32(0x105f1d44u); f_105e8cc0();
  /* 105f1d44 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1d47 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f1d4a lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 105f1d4e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 105f1d51 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f1d54 add eax, 0xac */
  { uint32_t _a=(EAX),_b=(0xacu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1d59 push eax */
  push32((uint32_t)(EAX));
  /* 105f1d5a call 0x105e5e70 */
  push32(0x105f1d5fu); f_105e5e70();
  /* 105f1d5f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1d62 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105f1d65 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f1d69 je 0x105f1f86 */
  if (C.zf) goto L_105f1f86;
  /* 105f1d6f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f1d72 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 105f1d75 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f1d78 add edx, 0xac */
  { uint32_t _a=(EDX),_b=(0xacu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1d7e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 105f1d81 push 0xac */
  push32((uint32_t)(0xacu));
  /* 105f1d86 mov eax, dword ptr [0x1060fca8] */
  EAX = (r32((uint32_t)(0x1060fca8)));
  /* 105f1d8b push eax */
  push32((uint32_t)(EAX));
  /* 105f1d8c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f1d8f push ecx */
  push32((uint32_t)(ECX));
  /* 105f1d90 call 0x105ed020 */
  push32(0x105f1d95u); f_105ed020();
  /* 105f1d95 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1d98 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 105f1d9f jmp 0x105f1daa */
  goto L_105f1daa;
L_105f1da1:;
  /* 105f1da1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105f1da4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1da7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_105f1daa:;
  /* 105f1daa cmp dword ptr [ebp - 0x10], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f1dae jae 0x105f1e1e */
  if (!C.cf) goto L_105f1e1e;
  /* 105f1db0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105f1db3 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105f1db6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105f1db9 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 105f1dbc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105f1dbf mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f1dc2 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 105f1dc5 push edx */
  push32((uint32_t)(EDX));
  /* 105f1dc6 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105f1dc9 push eax */
  push32((uint32_t)(EAX));
  /* 105f1dca call 0x105e8e40 */
  push32(0x105f1dcfu); f_105e8e40();
  /* 105f1dcf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1dd2 push eax */
  push32((uint32_t)(EAX));
  /* 105f1dd3 call 0x105e8cc0 */
  push32(0x105f1dd8u); f_105e8cc0();
  /* 105f1dd8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1ddb mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105f1dde lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 105f1de2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 105f1de5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105f1de8 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105f1deb mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105f1dee mov dword ptr [ecx + eax*4 + 0x1c], edx */
  w32((uint32_t)(ECX + EAX*4 + 0x1c), (EDX));
  /* 105f1df2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105f1df5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f1df8 mov edx, dword ptr [ecx + eax*4 + 0x1c] */
  EDX = (r32((uint32_t)(ECX + EAX*4 + 0x1c)));
  /* 105f1dfc push edx */
  push32((uint32_t)(EDX));
  /* 105f1dfd mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105f1e00 push eax */
  push32((uint32_t)(EAX));
  /* 105f1e01 call 0x105e8e40 */
  push32(0x105f1e06u); f_105e8e40();
  /* 105f1e06 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1e09 push eax */
  push32((uint32_t)(EAX));
  /* 105f1e0a call 0x105e8cc0 */
  push32(0x105f1e0fu); f_105e8cc0();
  /* 105f1e0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1e12 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105f1e15 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 105f1e19 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 105f1e1c jmp 0x105f1da1 */
  goto L_105f1da1;
L_105f1e1e:;
  /* 105f1e1e mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 105f1e25 jmp 0x105f1e30 */
  goto L_105f1e30;
L_105f1e27:;
  /* 105f1e27 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105f1e2a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1e2d mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_105f1e30:;
  /* 105f1e30 cmp dword ptr [ebp - 0x10], 0xc */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f1e34 jae 0x105f1ea6 */
  if (!C.cf) goto L_105f1ea6;
  /* 105f1e36 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105f1e39 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105f1e3c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105f1e3f mov dword ptr [edx + ecx*4 + 0x38], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x38), (EAX));
  /* 105f1e43 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105f1e46 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f1e49 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 105f1e4d push eax */
  push32((uint32_t)(EAX));
  /* 105f1e4e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105f1e51 push ecx */
  push32((uint32_t)(ECX));
  /* 105f1e52 call 0x105e8e40 */
  push32(0x105f1e57u); f_105e8e40();
  /* 105f1e57 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1e5a push eax */
  push32((uint32_t)(EAX));
  /* 105f1e5b call 0x105e8cc0 */
  push32(0x105f1e60u); f_105e8cc0();
  /* 105f1e60 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1e63 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105f1e66 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 105f1e6a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 105f1e6d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105f1e70 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105f1e73 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 105f1e76 mov dword ptr [edx + ecx*4 + 0x68], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x68), (EAX));
  /* 105f1e7a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105f1e7d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f1e80 mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 105f1e84 push eax */
  push32((uint32_t)(EAX));
  /* 105f1e85 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105f1e88 push ecx */
  push32((uint32_t)(ECX));
  /* 105f1e89 call 0x105e8e40 */
  push32(0x105f1e8eu); f_105e8e40();
  /* 105f1e8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1e91 push eax */
  push32((uint32_t)(EAX));
  /* 105f1e92 call 0x105e8cc0 */
  push32(0x105f1e97u); f_105e8cc0();
  /* 105f1e97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1e9a mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105f1e9d lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 105f1ea1 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 105f1ea4 jmp 0x105f1e27 */
  goto L_105f1e27;
L_105f1ea6:;
  /* 105f1ea6 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105f1ea9 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105f1eac mov dword ptr [ecx + 0x98], edx */
  w32((uint32_t)(ECX + 0x98), (EDX));
  /* 105f1eb2 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f1eb5 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 105f1ebb push ecx */
  push32((uint32_t)(ECX));
  /* 105f1ebc mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105f1ebf push edx */
  push32((uint32_t)(EDX));
  /* 105f1ec0 call 0x105e8e40 */
  push32(0x105f1ec5u); f_105e8e40();
  /* 105f1ec5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1ec8 push eax */
  push32((uint32_t)(EAX));
  /* 105f1ec9 call 0x105e8cc0 */
  push32(0x105f1eceu); f_105e8cc0();
  /* 105f1ece add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1ed1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105f1ed4 lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 105f1ed8 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 105f1edb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105f1ede mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105f1ee1 mov dword ptr [eax + 0x9c], ecx */
  w32((uint32_t)(EAX + 0x9c), (ECX));
  /* 105f1ee7 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f1eea mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 105f1ef0 push eax */
  push32((uint32_t)(EAX));
  /* 105f1ef1 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105f1ef4 push ecx */
  push32((uint32_t)(ECX));
  /* 105f1ef5 call 0x105e8e40 */
  push32(0x105f1efau); f_105e8e40();
  /* 105f1efa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1efd push eax */
  push32((uint32_t)(EAX));
  /* 105f1efe call 0x105e8cc0 */
  push32(0x105f1f03u); f_105e8cc0();
  /* 105f1f03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1f06 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105f1f09 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 105f1f0d mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 105f1f10 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105f1f13 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105f1f16 mov dword ptr [ecx + 0xa0], edx */
  w32((uint32_t)(ECX + 0xa0), (EDX));
  /* 105f1f1c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f1f1f mov ecx, dword ptr [eax + 0xa0] */
  ECX = (r32((uint32_t)(EAX + 0xa0)));
  /* 105f1f25 push ecx */
  push32((uint32_t)(ECX));
  /* 105f1f26 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105f1f29 push edx */
  push32((uint32_t)(EDX));
  /* 105f1f2a call 0x105e8e40 */
  push32(0x105f1f2fu); f_105e8e40();
  /* 105f1f2f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1f32 push eax */
  push32((uint32_t)(EAX));
  /* 105f1f33 call 0x105e8cc0 */
  push32(0x105f1f38u); f_105e8cc0();
  /* 105f1f38 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1f3b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105f1f3e lea edx, [ecx + eax + 1] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x1));
  /* 105f1f42 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 105f1f45 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105f1f48 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105f1f4b mov dword ptr [eax + 0xa4], ecx */
  w32((uint32_t)(EAX + 0xa4), (ECX));
  /* 105f1f51 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f1f54 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 105f1f5a push eax */
  push32((uint32_t)(EAX));
  /* 105f1f5b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105f1f5e push ecx */
  push32((uint32_t)(ECX));
  /* 105f1f5f call 0x105e8e40 */
  push32(0x105f1f64u); f_105e8e40();
  /* 105f1f64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1f67 push eax */
  push32((uint32_t)(EAX));
  /* 105f1f68 call 0x105e8cc0 */
  push32(0x105f1f6du); f_105e8cc0();
  /* 105f1f6d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1f70 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105f1f73 lea eax, [edx + eax + 1] */
  EAX = ((uint32_t)(EDX + EAX*1 + 0x1));
  /* 105f1f77 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 105f1f7a mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105f1f7d mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105f1f80 mov dword ptr [ecx + 0xa8], edx */
  w32((uint32_t)(ECX + 0xa8), (EDX));
L_105f1f86:;
  /* 105f1f86 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f1f89 pop esi */
  ESI = (pop32());
  /* 105f1f8a mov esp, ebp */
  ESP = (EBP);
  /* 105f1f8c pop ebp */
  EBP = (pop32());
  /* 105f1f8d ret  */
  ESPCHK(0x105f1c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f90 @ 0x105f1f90 (31 bytes, 15 insns) */
void f_105f1f90(void) {
  FTRACE(0x105f1f90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f1f90 push ebp */
  push32((uint32_t)(EBP));
  /* 105f1f91 mov ebp, esp */
  EBP = (ESP);
  /* 105f1f93 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f1f95 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f1f98 push eax */
  push32((uint32_t)(EAX));
  /* 105f1f99 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f1f9c push ecx */
  push32((uint32_t)(ECX));
  /* 105f1f9d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f1fa0 push edx */
  push32((uint32_t)(EDX));
  /* 105f1fa1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f1fa4 push eax */
  push32((uint32_t)(EAX));
  /* 105f1fa5 call 0x105f1fb0 */
  push32(0x105f1faau); f_105f1fb0();
  /* 105f1faa add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1fad pop ebp */
  EBP = (pop32());
  /* 105f1fae ret  */
  ESPCHK(0x105f1f90u, _esp0);
  ESP += 4; return;
}

/* FUN_10011fb0 @ 0x105f1fb0 (394 bytes, 123 insns) */
void f_105f1fb0(void) {
  FTRACE(0x105f1fb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f1fb0 push ebp */
  push32((uint32_t)(EBP));
  /* 105f1fb1 mov ebp, esp */
  EBP = (ESP);
  /* 105f1fb3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f1fb6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f1fb9 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105f1fbc push 0x10610b44 */
  push32((uint32_t)(0x10610b44u));
  /* 105f1fc1 call dword ptr [0x10613224] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613224))), 0x105f1fc7u);
  /* 105f1fc7 cmp dword ptr [0x10610b34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610b34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f1fce je 0x105f1fee */
  if (C.zf) goto L_105f1fee;
  /* 105f1fd0 push 0x10610b44 */
  push32((uint32_t)(0x10610b44u));
  /* 105f1fd5 call dword ptr [0x10613218] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613218))), 0x105f1fdbu);
  /* 105f1fdb push 0x13 */
  push32((uint32_t)(0x13u));
  /* 105f1fdd call 0x105ea240 */
  push32(0x105f1fe2u); f_105ea240();
  /* 105f1fe2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f1fe5 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 105f1fec jmp 0x105f1ff5 */
  goto L_105f1ff5;
L_105f1fee:;
  /* 105f1fee mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_105f1ff5:;
  /* 105f1ff5 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f1ff9 jne 0x105f2006 */
  if (!C.zf) goto L_105f2006;
  /* 105f1ffb mov ecx, dword ptr [0x1060fca8] */
  ECX = (r32((uint32_t)(0x1060fca8)));
  /* 105f2001 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 105f2004 jmp 0x105f200c */
  goto L_105f200c;
L_105f2006:;
  /* 105f2006 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105f2009 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_105f200c:;
  /* 105f200c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105f200f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105f2012:;
  /* 105f2012 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f2016 jbe 0x105f2103 */
  if ((C.cf||C.zf)) goto L_105f2103;
  /* 105f201c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f201f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105f2021 mov byte ptr [ebp - 0x14], dl */
  w8((uint32_t)(EBP + -0x14), (DL));
  /* 105f2024 cmp byte ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105f2028 je 0x105f2032 */
  if (C.zf) goto L_105f2032;
  /* 105f202a cmp byte ptr [ebp - 0x14], 0x25 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x14))),_b=(0x25u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105f202e je 0x105f2037 */
  if (C.zf) goto L_105f2037;
  /* 105f2030 jmp 0x105f2091 */
  goto L_105f2091;
L_105f2032:;
  /* 105f2032 jmp 0x105f2103 */
  goto L_105f2103;
L_105f2037:;
  /* 105f2037 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f203a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f203d mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 105f2040 mov dword ptr [0x10610b20], 0 */
  w32((uint32_t)(0x10610b20), (0x0u));
  /* 105f204a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f204d movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 105f2050 cmp edx, 0x23 */
  { uint32_t _a=(EDX),_b=(0x23u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f2053 jne 0x105f2068 */
  if (!C.zf) goto L_105f2068;
  /* 105f2055 mov dword ptr [0x10610b20], 1 */
  w32((uint32_t)(0x10610b20), (0x1u));
  /* 105f205f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f2062 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f2065 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_105f2068:;
  /* 105f2068 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f206b push ecx */
  push32((uint32_t)(ECX));
  /* 105f206c lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 105f206f push edx */
  push32((uint32_t)(EDX));
  /* 105f2070 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 105f2073 push eax */
  push32((uint32_t)(EAX));
  /* 105f2074 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f2077 push ecx */
  push32((uint32_t)(ECX));
  /* 105f2078 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f207b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105f207d push eax */
  push32((uint32_t)(EAX));
  /* 105f207e call 0x105f2140 */
  push32(0x105f2083u); f_105f2140();
  /* 105f2083 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f2086 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f2089 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f208c mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 105f208f jmp 0x105f20fe */
  goto L_105f20fe;
L_105f2091:;
  /* 105f2091 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f2094 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f2096 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105f2098 mov ecx, dword ptr [0x1060ede8] */
  ECX = (r32((uint32_t)(0x1060ede8)));
  /* 105f209e xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105f20a0 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 105f20a4 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 105f20aa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105f20ac je 0x105f20d9 */
  if (C.zf) goto L_105f20d9;
  /* 105f20ae cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f20b2 jbe 0x105f20d9 */
  if ((C.cf||C.zf)) goto L_105f20d9;
  /* 105f20b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f20b7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f20ba mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105f20bc mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 105f20be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f20c1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f20c4 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 105f20c7 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f20ca add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f20cd mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 105f20d0 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f20d3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f20d6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_105f20d9:;
  /* 105f20d9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f20dc mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f20df mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105f20e1 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 105f20e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f20e6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f20e9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 105f20ec mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f20ef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f20f2 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 105f20f5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f20f8 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f20fb mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_105f20fe:;
  /* 105f20fe jmp 0x105f2012 */
  goto L_105f2012;
L_105f2103:;
  /* 105f2103 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f2107 je 0x105f2115 */
  if (C.zf) goto L_105f2115;
  /* 105f2109 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 105f210b call 0x105ea2e0 */
  push32(0x105f2110u); f_105ea2e0();
  /* 105f2110 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f2113 jmp 0x105f2120 */
  goto L_105f2120;
L_105f2115:;
  /* 105f2115 push 0x10610b44 */
  push32((uint32_t)(0x10610b44u));
  /* 105f211a call dword ptr [0x10613218] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613218))), 0x105f2120u);
L_105f2120:;
  /* 105f2120 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f2124 jbe 0x105f2134 */
  if ((C.cf||C.zf)) goto L_105f2134;
  /* 105f2126 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f2129 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 105f212c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f212f sub eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f2132 jmp 0x105f2136 */
  goto L_105f2136;
L_105f2134:;
  /* 105f2134 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105f2136:;
  /* 105f2136 mov esp, ebp */
  ESP = (EBP);
  /* 105f2138 pop ebp */
  EBP = (pop32());
  /* 105f2139 ret  */
  ESPCHK(0x105f1fb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012140 @ 0x105f2140 (1389 bytes, 462 insns) [1 switch table(s)] */
void f_105f2140(void) {
  FTRACE(0x105f2140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f2140 push ebp */
  push32((uint32_t)(EBP));
  /* 105f2141 mov ebp, esp */
  EBP = (ESP);
  /* 105f2143 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f2146 push esi */
  push32((uint32_t)(ESI));
  /* 105f2147 movsx eax, byte ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 105f214b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105f214e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f2151 sub ecx, 0x25 */
  { uint32_t _a=(ECX),_b=(0x25u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f2154 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105f2157 cmp dword ptr [ebp - 0xc], 0x55 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x55u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f215b ja 0x105f26a8 */
  if ((!C.cf&&!C.zf)) goto L_105f26a8;
  /* 105f2161 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f2164 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105f2166 mov dl, byte ptr [eax + 0x105f2709] */
  DL = (r8((uint32_t)(EAX + 0x105f2709)));
  /* 105f216c jmp dword ptr [edx*4 + 0x105f26ad] */
  switch (EDX) {
    case 0: goto L_105f2686;
    case 1: goto L_105f2195;
    case 2: goto L_105f21db;
    case 3: goto L_105f2328;
    case 4: goto L_105f2350;
    case 5: goto L_105f23ef;
    case 6: goto L_105f245b;
    case 7: goto L_105f2484;
    case 8: goto L_105f24c5;
    case 9: goto L_105f25a7;
    case 10: goto L_105f260e;
    case 11: goto L_105f265b;
    case 12: goto L_105f2173;
    case 13: goto L_105f21b8;
    case 14: goto L_105f21fe;
    case 15: goto L_105f22fe;
    case 16: goto L_105f2395;
    case 17: goto L_105f23c2;
    case 18: goto L_105f2417;
    case 19: goto L_105f249b;
    case 20: goto L_105f2549;
    case 21: goto L_105f25d8;
    case 22: goto L_105f26a8;
    default: x86_unimpl("switch@0x105f216c out of table"); return;
  }
L_105f2173:;
  /* 105f2173 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f2176 push ecx */
  push32((uint32_t)(ECX));
  /* 105f2177 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f217a push edx */
  push32((uint32_t)(EDX));
  /* 105f217b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f217e mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 105f2181 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105f2184 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 105f2187 push eax */
  push32((uint32_t)(EAX));
  /* 105f2188 call 0x105f2760 */
  push32(0x105f218du); f_105f2760();
  /* 105f218d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f2190 jmp 0x105f26a8 */
  goto L_105f26a8;
L_105f2195:;
  /* 105f2195 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f2198 push ecx */
  push32((uint32_t)(ECX));
  /* 105f2199 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f219c push edx */
  push32((uint32_t)(EDX));
  /* 105f219d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f21a0 mov ecx, dword ptr [eax + 0x18] */
  ECX = (r32((uint32_t)(EAX + 0x18)));
  /* 105f21a3 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105f21a6 mov eax, dword ptr [edx + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x1c)));
  /* 105f21aa push eax */
  push32((uint32_t)(EAX));
  /* 105f21ab call 0x105f2760 */
  push32(0x105f21b0u); f_105f2760();
  /* 105f21b0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f21b3 jmp 0x105f26a8 */
  goto L_105f26a8;
L_105f21b8:;
  /* 105f21b8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f21bb push ecx */
  push32((uint32_t)(ECX));
  /* 105f21bc mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f21bf push edx */
  push32((uint32_t)(EDX));
  /* 105f21c0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f21c3 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 105f21c6 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105f21c9 mov eax, dword ptr [edx + ecx*4 + 0x38] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x38)));
  /* 105f21cd push eax */
  push32((uint32_t)(EAX));
  /* 105f21ce call 0x105f2760 */
  push32(0x105f21d3u); f_105f2760();
  /* 105f21d3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f21d6 jmp 0x105f26a8 */
  goto L_105f26a8;
L_105f21db:;
  /* 105f21db mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f21de push ecx */
  push32((uint32_t)(ECX));
  /* 105f21df mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f21e2 push edx */
  push32((uint32_t)(EDX));
  /* 105f21e3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f21e6 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 105f21e9 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105f21ec mov eax, dword ptr [edx + ecx*4 + 0x68] */
  EAX = (r32((uint32_t)(EDX + ECX*4 + 0x68)));
  /* 105f21f0 push eax */
  push32((uint32_t)(EAX));
  /* 105f21f1 call 0x105f2760 */
  push32(0x105f21f6u); f_105f2760();
  /* 105f21f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f21f9 jmp 0x105f26a8 */
  goto L_105f26a8;
L_105f21fe:;
  /* 105f21fe cmp dword ptr [0x10610b20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610b20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f2205 je 0x105f2286 */
  if (C.zf) goto L_105f2286;
  /* 105f2207 mov dword ptr [0x10610b20], 0 */
  w32((uint32_t)(0x10610b20), (0x0u));
  /* 105f2211 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 105f2214 push ecx */
  push32((uint32_t)(ECX));
  /* 105f2215 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f2218 push edx */
  push32((uint32_t)(EDX));
  /* 105f2219 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f221c push eax */
  push32((uint32_t)(EAX));
  /* 105f221d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f2220 push ecx */
  push32((uint32_t)(ECX));
  /* 105f2221 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105f2224 mov eax, dword ptr [edx + 0xa4] */
  EAX = (r32((uint32_t)(EDX + 0xa4)));
  /* 105f222a push eax */
  push32((uint32_t)(EAX));
  /* 105f222b call 0x105f2910 */
  push32(0x105f2230u); f_105f2910();
  /* 105f2230 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f2233 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f2236 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f2239 jne 0x105f2240 */
  if (!C.zf) goto L_105f2240;
  /* 105f223b jmp 0x105f26a8 */
  goto L_105f26a8;
L_105f2240:;
  /* 105f2240 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f2243 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105f2245 mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 105f2248 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f224b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105f224d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f2250 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f2253 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 105f2255 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f2258 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105f225a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f225d mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f2260 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 105f2262 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 105f2265 push ecx */
  push32((uint32_t)(ECX));
  /* 105f2266 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f2269 push edx */
  push32((uint32_t)(EDX));
  /* 105f226a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f226d push eax */
  push32((uint32_t)(EAX));
  /* 105f226e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f2271 push ecx */
  push32((uint32_t)(ECX));
  /* 105f2272 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105f2275 mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 105f227b push eax */
  push32((uint32_t)(EAX));
  /* 105f227c call 0x105f2910 */
  push32(0x105f2281u); f_105f2910();
  /* 105f2281 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f2284 jmp 0x105f22f9 */
  goto L_105f22f9;
L_105f2286:;
  /* 105f2286 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 105f2289 push ecx */
  push32((uint32_t)(ECX));
  /* 105f228a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f228d push edx */
  push32((uint32_t)(EDX));
  /* 105f228e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f2291 push eax */
  push32((uint32_t)(EAX));
  /* 105f2292 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f2295 push ecx */
  push32((uint32_t)(ECX));
  /* 105f2296 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105f2299 mov eax, dword ptr [edx + 0xa0] */
  EAX = (r32((uint32_t)(EDX + 0xa0)));
  /* 105f229f push eax */
  push32((uint32_t)(EAX));
  /* 105f22a0 call 0x105f2910 */
  push32(0x105f22a5u); f_105f2910();
  /* 105f22a5 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f22a8 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f22ab cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f22ae jne 0x105f22b5 */
  if (!C.zf) goto L_105f22b5;
  /* 105f22b0 jmp 0x105f26a8 */
  goto L_105f26a8;
L_105f22b5:;
  /* 105f22b5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f22b8 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105f22ba mov byte ptr [eax], 0x20 */
  w8((uint32_t)(EAX), (0x20u));
  /* 105f22bd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f22c0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105f22c2 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f22c5 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f22c8 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 105f22ca mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f22cd mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105f22cf sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f22d2 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f22d5 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 105f22d7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 105f22da push ecx */
  push32((uint32_t)(ECX));
  /* 105f22db mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f22de push edx */
  push32((uint32_t)(EDX));
  /* 105f22df mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f22e2 push eax */
  push32((uint32_t)(EAX));
  /* 105f22e3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f22e6 push ecx */
  push32((uint32_t)(ECX));
  /* 105f22e7 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105f22ea mov eax, dword ptr [edx + 0xa8] */
  EAX = (r32((uint32_t)(EDX + 0xa8)));
  /* 105f22f0 push eax */
  push32((uint32_t)(EAX));
  /* 105f22f1 call 0x105f2910 */
  push32(0x105f22f6u); f_105f2910();
  /* 105f22f6 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105f22f9:;
  /* 105f22f9 jmp 0x105f26a8 */
  goto L_105f26a8;
L_105f22fe:;
  /* 105f22fe mov ecx, dword ptr [0x10610b20] */
  ECX = (r32((uint32_t)(0x10610b20)));
  /* 105f2304 mov dword ptr [0x10610b30], ecx */
  w32((uint32_t)(0x10610b30), (ECX));
  /* 105f230a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f230d push edx */
  push32((uint32_t)(EDX));
  /* 105f230e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f2311 push eax */
  push32((uint32_t)(EAX));
  /* 105f2312 push 2 */
  push32((uint32_t)(0x2u));
  /* 105f2314 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f2317 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 105f231a push edx */
  push32((uint32_t)(EDX));
  /* 105f231b call 0x105f27b0 */
  push32(0x105f2320u); f_105f27b0();
  /* 105f2320 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f2323 jmp 0x105f26a8 */
  goto L_105f26a8;
L_105f2328:;
  /* 105f2328 mov eax, dword ptr [0x10610b20] */
  EAX = (r32((uint32_t)(0x10610b20)));
  /* 105f232d mov dword ptr [0x10610b30], eax */
  w32((uint32_t)(0x10610b30), (EAX));
  /* 105f2332 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f2335 push ecx */
  push32((uint32_t)(ECX));
  /* 105f2336 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f2339 push edx */
  push32((uint32_t)(EDX));
  /* 105f233a push 2 */
  push32((uint32_t)(0x2u));
  /* 105f233c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f233f mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 105f2342 push ecx */
  push32((uint32_t)(ECX));
  /* 105f2343 call 0x105f27b0 */
  push32(0x105f2348u); f_105f27b0();
  /* 105f2348 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f234b jmp 0x105f26a8 */
  goto L_105f26a8;
L_105f2350:;
  /* 105f2350 mov edx, dword ptr [0x10610b20] */
  EDX = (r32((uint32_t)(0x10610b20)));
  /* 105f2356 mov dword ptr [0x10610b30], edx */
  w32((uint32_t)(0x10610b30), (EDX));
  /* 105f235c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f235f mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 105f2362 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 105f2363 mov ecx, 0xc */
  ECX = (0xcu);
  /* 105f2368 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105f236a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105f236d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f2371 jne 0x105f237a */
  if (!C.zf) goto L_105f237a;
  /* 105f2373 mov dword ptr [ebp - 4], 0xc */
  w32((uint32_t)(EBP + -0x4), (0xcu));
L_105f237a:;
  /* 105f237a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f237d push edx */
  push32((uint32_t)(EDX));
  /* 105f237e mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f2381 push eax */
  push32((uint32_t)(EAX));
  /* 105f2382 push 2 */
  push32((uint32_t)(0x2u));
  /* 105f2384 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f2387 push ecx */
  push32((uint32_t)(ECX));
  /* 105f2388 call 0x105f27b0 */
  push32(0x105f238du); f_105f27b0();
  /* 105f238d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f2390 jmp 0x105f26a8 */
  goto L_105f26a8;
L_105f2395:;
  /* 105f2395 mov edx, dword ptr [0x10610b20] */
  EDX = (r32((uint32_t)(0x10610b20)));
  /* 105f239b mov dword ptr [0x10610b30], edx */
  w32((uint32_t)(0x10610b30), (EDX));
  /* 105f23a1 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f23a4 push eax */
  push32((uint32_t)(EAX));
  /* 105f23a5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f23a8 push ecx */
  push32((uint32_t)(ECX));
  /* 105f23a9 push 3 */
  push32((uint32_t)(0x3u));
  /* 105f23ab mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f23ae mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 105f23b1 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f23b4 push eax */
  push32((uint32_t)(EAX));
  /* 105f23b5 call 0x105f27b0 */
  push32(0x105f23bau); f_105f27b0();
  /* 105f23ba add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f23bd jmp 0x105f26a8 */
  goto L_105f26a8;
L_105f23c2:;
  /* 105f23c2 mov ecx, dword ptr [0x10610b20] */
  ECX = (r32((uint32_t)(0x10610b20)));
  /* 105f23c8 mov dword ptr [0x10610b30], ecx */
  w32((uint32_t)(0x10610b30), (ECX));
  /* 105f23ce mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f23d1 push edx */
  push32((uint32_t)(EDX));
  /* 105f23d2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f23d5 push eax */
  push32((uint32_t)(EAX));
  /* 105f23d6 push 2 */
  push32((uint32_t)(0x2u));
  /* 105f23d8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f23db mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 105f23de add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f23e1 push edx */
  push32((uint32_t)(EDX));
  /* 105f23e2 call 0x105f27b0 */
  push32(0x105f23e7u); f_105f27b0();
  /* 105f23e7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f23ea jmp 0x105f26a8 */
  goto L_105f26a8;
L_105f23ef:;
  /* 105f23ef mov eax, dword ptr [0x10610b20] */
  EAX = (r32((uint32_t)(0x10610b20)));
  /* 105f23f4 mov dword ptr [0x10610b30], eax */
  w32((uint32_t)(0x10610b30), (EAX));
  /* 105f23f9 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f23fc push ecx */
  push32((uint32_t)(ECX));
  /* 105f23fd mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f2400 push edx */
  push32((uint32_t)(EDX));
  /* 105f2401 push 2 */
  push32((uint32_t)(0x2u));
  /* 105f2403 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f2406 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 105f2409 push ecx */
  push32((uint32_t)(ECX));
  /* 105f240a call 0x105f27b0 */
  push32(0x105f240fu); f_105f27b0();
  /* 105f240f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f2412 jmp 0x105f26a8 */
  goto L_105f26a8;
L_105f2417:;
  /* 105f2417 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f241a cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f241e jg 0x105f243c */
  if ((!C.zf&&C.sf==C.of)) goto L_105f243c;
  /* 105f2420 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f2423 push eax */
  push32((uint32_t)(EAX));
  /* 105f2424 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f2427 push ecx */
  push32((uint32_t)(ECX));
  /* 105f2428 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105f242b mov eax, dword ptr [edx + 0x98] */
  EAX = (r32((uint32_t)(EDX + 0x98)));
  /* 105f2431 push eax */
  push32((uint32_t)(EAX));
  /* 105f2432 call 0x105f2760 */
  push32(0x105f2437u); f_105f2760();
  /* 105f2437 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f243a jmp 0x105f2456 */
  goto L_105f2456;
L_105f243c:;
  /* 105f243c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f243f push ecx */
  push32((uint32_t)(ECX));
  /* 105f2440 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f2443 push edx */
  push32((uint32_t)(EDX));
  /* 105f2444 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105f2447 mov ecx, dword ptr [eax + 0x9c] */
  ECX = (r32((uint32_t)(EAX + 0x9c)));
  /* 105f244d push ecx */
  push32((uint32_t)(ECX));
  /* 105f244e call 0x105f2760 */
  push32(0x105f2453u); f_105f2760();
  /* 105f2453 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105f2456:;
  /* 105f2456 jmp 0x105f26a8 */
  goto L_105f26a8;
L_105f245b:;
  /* 105f245b mov edx, dword ptr [0x10610b20] */
  EDX = (r32((uint32_t)(0x10610b20)));
  /* 105f2461 mov dword ptr [0x10610b30], edx */
  w32((uint32_t)(0x10610b30), (EDX));
  /* 105f2467 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f246a push eax */
  push32((uint32_t)(EAX));
  /* 105f246b mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f246e push ecx */
  push32((uint32_t)(ECX));
  /* 105f246f push 2 */
  push32((uint32_t)(0x2u));
  /* 105f2471 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f2474 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105f2476 push eax */
  push32((uint32_t)(EAX));
  /* 105f2477 call 0x105f27b0 */
  push32(0x105f247cu); f_105f27b0();
  /* 105f247c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f247f jmp 0x105f26a8 */
  goto L_105f26a8;
L_105f2484:;
  /* 105f2484 mov ecx, dword ptr [0x10610b20] */
  ECX = (r32((uint32_t)(0x10610b20)));
  /* 105f248a mov dword ptr [0x10610b30], ecx */
  w32((uint32_t)(0x10610b30), (ECX));
  /* 105f2490 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f2493 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 105f2496 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105f2499 jmp 0x105f24ed */
  goto L_105f24ed;
L_105f249b:;
  /* 105f249b mov ecx, dword ptr [0x10610b20] */
  ECX = (r32((uint32_t)(0x10610b20)));
  /* 105f24a1 mov dword ptr [0x10610b30], ecx */
  w32((uint32_t)(0x10610b30), (ECX));
  /* 105f24a7 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f24aa push edx */
  push32((uint32_t)(EDX));
  /* 105f24ab mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f24ae push eax */
  push32((uint32_t)(EAX));
  /* 105f24af push 1 */
  push32((uint32_t)(0x1u));
  /* 105f24b1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f24b4 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 105f24b7 push edx */
  push32((uint32_t)(EDX));
  /* 105f24b8 call 0x105f27b0 */
  push32(0x105f24bdu); f_105f27b0();
  /* 105f24bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f24c0 jmp 0x105f26a8 */
  goto L_105f26a8;
L_105f24c5:;
  /* 105f24c5 mov eax, dword ptr [0x10610b20] */
  EAX = (r32((uint32_t)(0x10610b20)));
  /* 105f24ca mov dword ptr [0x10610b30], eax */
  w32((uint32_t)(0x10610b30), (EAX));
  /* 105f24cf mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f24d2 cmp dword ptr [ecx + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f24d6 jne 0x105f24e1 */
  if (!C.zf) goto L_105f24e1;
  /* 105f24d8 mov dword ptr [ebp - 8], 6 */
  w32((uint32_t)(EBP + -0x8), (0x6u));
  /* 105f24df jmp 0x105f24ed */
  goto L_105f24ed;
L_105f24e1:;
  /* 105f24e1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f24e4 mov eax, dword ptr [edx + 0x18] */
  EAX = (r32((uint32_t)(EDX + 0x18)));
  /* 105f24e7 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f24ea mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_105f24ed:;
  /* 105f24ed mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f24f0 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 105f24f3 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f24f6 jge 0x105f2501 */
  if ((C.sf==C.of)) goto L_105f2501;
  /* 105f24f8 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105f24ff jmp 0x105f252e */
  goto L_105f252e;
L_105f2501:;
  /* 105f2501 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f2504 mov eax, dword ptr [eax + 0x1c] */
  EAX = (r32((uint32_t)(EAX + 0x1c)));
  /* 105f2507 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 105f2508 mov ecx, 7 */
  ECX = (0x7u);
  /* 105f250d idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105f250f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105f2512 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f2515 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 105f2518 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 105f2519 mov ecx, 7 */
  ECX = (0x7u);
  /* 105f251e idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105f2520 cmp edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f2523 jl 0x105f252e */
  if ((C.sf!=C.of)) goto L_105f252e;
  /* 105f2525 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f2528 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f252b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_105f252e:;
  /* 105f252e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f2531 push eax */
  push32((uint32_t)(EAX));
  /* 105f2532 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f2535 push ecx */
  push32((uint32_t)(ECX));
  /* 105f2536 push 2 */
  push32((uint32_t)(0x2u));
  /* 105f2538 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f253b push edx */
  push32((uint32_t)(EDX));
  /* 105f253c call 0x105f27b0 */
  push32(0x105f2541u); f_105f27b0();
  /* 105f2541 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f2544 jmp 0x105f26a8 */
  goto L_105f26a8;
L_105f2549:;
  /* 105f2549 cmp dword ptr [0x10610b20], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610b20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f2550 je 0x105f2580 */
  if (C.zf) goto L_105f2580;
  /* 105f2552 mov dword ptr [0x10610b20], 0 */
  w32((uint32_t)(0x10610b20), (0x0u));
  /* 105f255c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105f255f push eax */
  push32((uint32_t)(EAX));
  /* 105f2560 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f2563 push ecx */
  push32((uint32_t)(ECX));
  /* 105f2564 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f2567 push edx */
  push32((uint32_t)(EDX));
  /* 105f2568 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f256b push eax */
  push32((uint32_t)(EAX));
  /* 105f256c mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 105f256f mov edx, dword ptr [ecx + 0xa4] */
  EDX = (r32((uint32_t)(ECX + 0xa4)));
  /* 105f2575 push edx */
  push32((uint32_t)(EDX));
  /* 105f2576 call 0x105f2910 */
  push32(0x105f257bu); f_105f2910();
  /* 105f257b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f257e jmp 0x105f25a2 */
  goto L_105f25a2;
L_105f2580:;
  /* 105f2580 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105f2583 push eax */
  push32((uint32_t)(EAX));
  /* 105f2584 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f2587 push ecx */
  push32((uint32_t)(ECX));
  /* 105f2588 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f258b push edx */
  push32((uint32_t)(EDX));
  /* 105f258c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f258f push eax */
  push32((uint32_t)(EAX));
  /* 105f2590 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 105f2593 mov edx, dword ptr [ecx + 0xa0] */
  EDX = (r32((uint32_t)(ECX + 0xa0)));
  /* 105f2599 push edx */
  push32((uint32_t)(EDX));
  /* 105f259a call 0x105f2910 */
  push32(0x105f259fu); f_105f2910();
  /* 105f259f add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105f25a2:;
  /* 105f25a2 jmp 0x105f26a8 */
  goto L_105f26a8;
L_105f25a7:;
  /* 105f25a7 mov dword ptr [0x10610b20], 0 */
  w32((uint32_t)(0x10610b20), (0x0u));
  /* 105f25b1 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105f25b4 push eax */
  push32((uint32_t)(EAX));
  /* 105f25b5 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f25b8 push ecx */
  push32((uint32_t)(ECX));
  /* 105f25b9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f25bc push edx */
  push32((uint32_t)(EDX));
  /* 105f25bd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f25c0 push eax */
  push32((uint32_t)(EAX));
  /* 105f25c1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 105f25c4 mov edx, dword ptr [ecx + 0xa8] */
  EDX = (r32((uint32_t)(ECX + 0xa8)));
  /* 105f25ca push edx */
  push32((uint32_t)(EDX));
  /* 105f25cb call 0x105f2910 */
  push32(0x105f25d0u); f_105f2910();
  /* 105f25d0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f25d3 jmp 0x105f26a8 */
  goto L_105f26a8;
L_105f25d8:;
  /* 105f25d8 mov eax, dword ptr [0x10610b20] */
  EAX = (r32((uint32_t)(0x10610b20)));
  /* 105f25dd mov dword ptr [0x10610b30], eax */
  w32((uint32_t)(0x10610b30), (EAX));
  /* 105f25e2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f25e5 mov eax, dword ptr [ecx + 0x14] */
  EAX = (r32((uint32_t)(ECX + 0x14)));
  /* 105f25e8 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 105f25e9 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 105f25ee idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105f25f0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105f25f3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f25f6 push edx */
  push32((uint32_t)(EDX));
  /* 105f25f7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f25fa push eax */
  push32((uint32_t)(EAX));
  /* 105f25fb push 2 */
  push32((uint32_t)(0x2u));
  /* 105f25fd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f2600 push ecx */
  push32((uint32_t)(ECX));
  /* 105f2601 call 0x105f27b0 */
  push32(0x105f2606u); f_105f27b0();
  /* 105f2606 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f2609 jmp 0x105f26a8 */
  goto L_105f26a8;
L_105f260e:;
  /* 105f260e mov edx, dword ptr [0x10610b20] */
  EDX = (r32((uint32_t)(0x10610b20)));
  /* 105f2614 mov dword ptr [0x10610b30], edx */
  w32((uint32_t)(0x10610b30), (EDX));
  /* 105f261a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f261d mov eax, dword ptr [eax + 0x14] */
  EAX = (r32((uint32_t)(EAX + 0x14)));
  /* 105f2620 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 105f2621 mov ecx, 0x64 */
  ECX = (0x64u);
  /* 105f2626 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105f2628 mov ecx, eax */
  ECX = (EAX);
  /* 105f262a add ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f262d imul ecx, ecx, 0x64 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x64u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105f2630 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f2633 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 105f2636 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 105f2637 mov esi, 0x64 */
  ESI = (0x64u);
  /* 105f263c idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105f263e add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f2640 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105f2643 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f2646 push eax */
  push32((uint32_t)(EAX));
  /* 105f2647 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f264a push ecx */
  push32((uint32_t)(ECX));
  /* 105f264b push 4 */
  push32((uint32_t)(0x4u));
  /* 105f264d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f2650 push edx */
  push32((uint32_t)(EDX));
  /* 105f2651 call 0x105f27b0 */
  push32(0x105f2656u); f_105f27b0();
  /* 105f2656 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f2659 jmp 0x105f26a8 */
  goto L_105f26a8;
L_105f265b:;
  /* 105f265b call 0x105f3770 */
  push32(0x105f2660u); f_105f3770();
  /* 105f2660 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f2663 push eax */
  push32((uint32_t)(EAX));
  /* 105f2664 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f2667 push ecx */
  push32((uint32_t)(ECX));
  /* 105f2668 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f266b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f266d cmp dword ptr [edx + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f2671 setne al */
  AL = ((!C.zf) ? 1u : 0u);
  /* 105f2674 mov ecx, dword ptr [eax*4 + 0x1060fe2c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1060fe2c)));
  /* 105f267b push ecx */
  push32((uint32_t)(ECX));
  /* 105f267c call 0x105f2760 */
  push32(0x105f2681u); f_105f2760();
  /* 105f2681 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f2684 jmp 0x105f26a8 */
  goto L_105f26a8;
L_105f2686:;
  /* 105f2686 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f2689 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105f268b mov byte ptr [eax], 0x25 */
  w8((uint32_t)(EAX), (0x25u));
  /* 105f268e mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f2691 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105f2693 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f2696 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f2699 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 105f269b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f269e mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105f26a0 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f26a3 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f26a6 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_105f26a8:;
  /* 105f26a8 pop esi */
  ESI = (pop32());
  /* 105f26a9 mov esp, ebp */
  ESP = (EBP);
  /* 105f26ab pop ebp */
  EBP = (pop32());
  /* 105f26ac ret  */
  ESPCHK(0x105f2140u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_str @ 0x105f2760 (72 bytes, 30 insns) */
void f_105f2760(void) {
  FTRACE(0x105f2760u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f2760 push ebp */
  push32((uint32_t)(EBP));
  /* 105f2761 mov ebp, esp */
  EBP = (ESP);
L_105f2763:;
  /* 105f2763 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f2766 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f2769 je 0x105f27a6 */
  if (C.zf) goto L_105f27a6;
  /* 105f276b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f276e movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 105f2771 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105f2773 je 0x105f27a6 */
  if (C.zf) goto L_105f27a6;
  /* 105f2775 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f2778 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105f277a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f277d mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105f277f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 105f2781 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f2784 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105f2786 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f2789 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f278c mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 105f278e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f2791 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f2794 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 105f2797 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f279a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105f279c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f279f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f27a2 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 105f27a4 jmp 0x105f2763 */
  goto L_105f2763;
L_105f27a6:;
  /* 105f27a6 pop ebp */
  EBP = (pop32());
  /* 105f27a7 ret  */
  ESPCHK(0x105f2760u, _esp0);
  ESP += 4; return;
}

/* FUN_100127b0 @ 0x105f27b0 (173 bytes, 64 insns) */
void f_105f27b0(void) {
  FTRACE(0x105f27b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f27b0 push ebp */
  push32((uint32_t)(EBP));
  /* 105f27b1 mov ebp, esp */
  EBP = (ESP);
  /* 105f27b3 push ecx */
  push32((uint32_t)(ECX));
  /* 105f27b4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105f27bb cmp dword ptr [0x10610b30], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610b30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f27c2 je 0x105f27da */
  if (C.zf) goto L_105f27da;
  /* 105f27c4 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f27c7 push eax */
  push32((uint32_t)(EAX));
  /* 105f27c8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f27cb push ecx */
  push32((uint32_t)(ECX));
  /* 105f27cc mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f27cf push edx */
  push32((uint32_t)(EDX));
  /* 105f27d0 call 0x105f2860 */
  push32(0x105f27d5u); f_105f2860();
  /* 105f27d5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f27d8 jmp 0x105f2859 */
  goto L_105f2859;
L_105f27da:;
  /* 105f27da mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f27dd mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f27e0 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f27e2 jae 0x105f2850 */
  if (!C.cf) goto L_105f2850;
  /* 105f27e4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f27e7 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f27ea mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 105f27ed jmp 0x105f27f8 */
  goto L_105f27f8;
L_105f27ef:;
  /* 105f27ef mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f27f2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f27f5 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
L_105f27f8:;
  /* 105f27f8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f27fb add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f27fe test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105f2800 je 0x105f2834 */
  if (C.zf) goto L_105f2834;
  /* 105f2802 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f2805 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 105f2806 mov ecx, 0xa */
  ECX = (0xau);
  /* 105f280b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105f280d add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f2810 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f2813 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105f2815 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f2818 mov byte ptr [ecx + eax], dl */
  w8((uint32_t)(ECX + EAX*1), (DL));
  /* 105f281b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f281e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 105f281f mov ecx, 0xa */
  ECX = (0xau);
  /* 105f2824 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105f2826 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 105f2829 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f282c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f282f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105f2832 jmp 0x105f27ef */
  goto L_105f27ef;
L_105f2834:;
  /* 105f2834 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f2837 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105f2839 add ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f283c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f283f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 105f2841 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f2844 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105f2846 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f2849 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f284c mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 105f284e jmp 0x105f2859 */
  goto L_105f2859;
L_105f2850:;
  /* 105f2850 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f2853 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_105f2859:;
  /* 105f2859 mov esp, ebp */
  ESP = (EBP);
  /* 105f285b pop ebp */
  EBP = (pop32());
  /* 105f285c ret  */
  ESPCHK(0x105f27b0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:_store_number @ 0x105f2860 (172 bytes, 65 insns) */
void f_105f2860(void) {
  FTRACE(0x105f2860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f2860 push ebp */
  push32((uint32_t)(EBP));
  /* 105f2861 mov ebp, esp */
  EBP = (ESP);
  /* 105f2863 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f2866 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f2869 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105f286b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105f286e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f2871 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f2874 jbe 0x105f28bb */
  if ((C.cf||C.zf)) goto L_105f28bb;
L_105f2876:;
  /* 105f2876 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f2879 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 105f287a mov ecx, 0xa */
  ECX = (0xau);
  /* 105f287f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105f2881 add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f2884 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f2887 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 105f2889 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f288c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f288f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105f2892 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f2895 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105f2897 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f289a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f289d mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 105f289f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f28a2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 105f28a3 mov ecx, 0xa */
  ECX = (0xau);
  /* 105f28a8 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105f28aa mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 105f28ad cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f28b1 jle 0x105f28bb */
  if ((C.zf||C.sf!=C.of)) goto L_105f28bb;
  /* 105f28b3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f28b6 cmp dword ptr [edx], 1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f28b9 ja 0x105f2876 */
  if ((!C.cf&&!C.zf)) goto L_105f2876;
L_105f28bb:;
  /* 105f28bb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f28be mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105f28c0 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105f28c3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f28c6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f28c9 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 105f28cb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f28ce sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f28d1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_105f28d4:;
  /* 105f28d4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f28d7 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105f28d9 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 105f28dc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f28df mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f28e2 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105f28e4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 105f28e6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f28e9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f28ec mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105f28ef mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f28f2 mov al, byte ptr [ebp - 0xc] */
  AL = (r8((uint32_t)(EBP + -0xc)));
  /* 105f28f5 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 105f28f7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f28fa add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f28fd mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105f2900 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f2903 cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f2906 jb 0x105f28d4 */
  if (C.cf) goto L_105f28d4;
  /* 105f2908 mov esp, ebp */
  ESP = (EBP);
  /* 105f290a pop ebp */
  EBP = (pop32());
  /* 105f290b ret  */
  ESPCHK(0x105f2860u, _esp0);
  ESP += 4; return;
}

/* FUN_10012910 @ 0x105f2910 (1152 bytes, 363 insns) [3 switch table(s)] */
void f_105f2910(void) {
  FTRACE(0x105f2910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f2910 push ebp */
  push32((uint32_t)(EBP));
  /* 105f2911 mov ebp, esp */
  EBP = (ESP);
  /* 105f2913 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_105f2916:;
  /* 105f2916 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f2919 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105f291c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105f291e je 0x105f2d8c */
  if (C.zf) goto L_105f2d8c;
  /* 105f2924 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f2927 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f292a je 0x105f2d8c */
  if (C.zf) goto L_105f2d8c;
  /* 105f2930 mov byte ptr [ebp - 8], 0 */
  w8((uint32_t)(EBP + -0x8), (0x0u));
  /* 105f2934 mov dword ptr [0x10610b30], 0 */
  w32((uint32_t)(0x10610b30), (0x0u));
  /* 105f293e mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 105f2945 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f2948 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105f294b jmp 0x105f2956 */
  goto L_105f2956;
L_105f294d:;
  /* 105f294d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f2950 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f2953 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_105f2956:;
  /* 105f2956 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f2959 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105f295c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f295f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 105f2962 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f2965 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f2968 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105f296b cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f296d jne 0x105f2971 */
  if (!C.zf) goto L_105f2971;
  /* 105f296f jmp 0x105f294d */
  goto L_105f294d;
L_105f2971:;
  /* 105f2971 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f2974 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f2977 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105f297a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f297d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105f2980 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 105f2983 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105f2986 sub edx, 0x27 */
  { uint32_t _a=(EDX),_b=(0x27u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f2989 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 105f298c cmp dword ptr [ebp - 0x14], 0x52 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x52u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f2990 ja 0x105f2ce0 */
  if ((!C.cf&&!C.zf)) goto L_105f2ce0;
  /* 105f2996 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105f2999 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f299b mov al, byte ptr [ecx + 0x105f2dbc] */
  AL = (r8((uint32_t)(ECX + 0x105f2dbc)));
  /* 105f29a1 jmp dword ptr [eax*4 + 0x105f2d90] */
  switch (EAX) {
    case 0: goto L_105f2bff;
    case 1: goto L_105f2ae3;
    case 2: goto L_105f2a6e;
    case 3: goto L_105f29a8;
    case 4: goto L_105f29e6;
    case 5: goto L_105f2a47;
    case 6: goto L_105f2a95;
    case 7: goto L_105f2abc;
    case 8: goto L_105f2b2a;
    case 9: goto L_105f2a24;
    case 10: goto L_105f2ce0;
    default: x86_unimpl("switch@0x105f29a1 out of table"); return;
  }
L_105f29a8:;
  /* 105f29a8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f29ab mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 105f29ae mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105f29b1 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f29b4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 105f29b7 cmp dword ptr [ebp - 0x18], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f29bb ja 0x105f29e1 */
  if ((!C.cf&&!C.zf)) goto L_105f29e1;
  /* 105f29bd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105f29c0 jmp dword ptr [ecx*4 + 0x105f2e0f] */
  switch (ECX) {
    case 0: goto L_105f29c7;
    case 1: goto L_105f29d1;
    case 2: goto L_105f29d7;
    case 3: goto L_105f29dd;
    case 4: goto L_105f2a05;
    case 5: goto L_105f2a0f;
    case 6: goto L_105f2a15;
    case 7: goto L_105f2a1b;
    default: x86_unimpl("switch@0x105f29c0 out of table"); return;
  }
L_105f29c7:;
  /* 105f29c7 mov dword ptr [0x10610b30], 1 */
  w32((uint32_t)(0x10610b30), (0x1u));
L_105f29d1:;
  /* 105f29d1 mov byte ptr [ebp - 8], 0x6d */
  w8((uint32_t)(EBP + -0x8), (0x6du));
  /* 105f29d5 jmp 0x105f29e1 */
  goto L_105f29e1;
L_105f29d7:;
  /* 105f29d7 mov byte ptr [ebp - 8], 0x62 */
  w8((uint32_t)(EBP + -0x8), (0x62u));
  /* 105f29db jmp 0x105f29e1 */
  goto L_105f29e1;
L_105f29dd:;
  /* 105f29dd mov byte ptr [ebp - 8], 0x42 */
  w8((uint32_t)(EBP + -0x8), (0x42u));
L_105f29e1:;
  /* 105f29e1 jmp 0x105f2ce0 */
  goto L_105f2ce0;
L_105f29e6:;
  /* 105f29e6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f29e9 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 105f29ec mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105f29ef sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f29f2 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 105f29f5 cmp dword ptr [ebp - 0x1c], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f29f9 ja 0x105f2a1f */
  if ((!C.cf&&!C.zf)) goto L_105f2a1f;
  /* 105f29fb mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105f29fe jmp dword ptr [ecx*4 + 0x105f2e1f] */
  switch (ECX) {
    case 0: goto L_105f2a05;
    case 1: goto L_105f2a0f;
    case 2: goto L_105f2a15;
    case 3: goto L_105f2a1b;
    default: x86_unimpl("switch@0x105f29fe out of table"); return;
  }
L_105f2a05:;
  /* 105f2a05 mov dword ptr [0x10610b30], 1 */
  w32((uint32_t)(0x10610b30), (0x1u));
L_105f2a0f:;
  /* 105f2a0f mov byte ptr [ebp - 8], 0x64 */
  w8((uint32_t)(EBP + -0x8), (0x64u));
  /* 105f2a13 jmp 0x105f2a1f */
  goto L_105f2a1f;
L_105f2a15:;
  /* 105f2a15 mov byte ptr [ebp - 8], 0x61 */
  w8((uint32_t)(EBP + -0x8), (0x61u));
  /* 105f2a19 jmp 0x105f2a1f */
  goto L_105f2a1f;
L_105f2a1b:;
  /* 105f2a1b mov byte ptr [ebp - 8], 0x41 */
  w8((uint32_t)(EBP + -0x8), (0x41u));
L_105f2a1f:;
  /* 105f2a1f jmp 0x105f2ce0 */
  goto L_105f2ce0;
L_105f2a24:;
  /* 105f2a24 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f2a27 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 105f2a2a cmp dword ptr [ebp - 0x20], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f2a2e je 0x105f2a38 */
  if (C.zf) goto L_105f2a38;
  /* 105f2a30 cmp dword ptr [ebp - 0x20], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f2a34 je 0x105f2a3e */
  if (C.zf) goto L_105f2a3e;
  /* 105f2a36 jmp 0x105f2a42 */
  goto L_105f2a42;
L_105f2a38:;
  /* 105f2a38 mov byte ptr [ebp - 8], 0x79 */
  w8((uint32_t)(EBP + -0x8), (0x79u));
  /* 105f2a3c jmp 0x105f2a42 */
  goto L_105f2a42;
L_105f2a3e:;
  /* 105f2a3e mov byte ptr [ebp - 8], 0x59 */
  w8((uint32_t)(EBP + -0x8), (0x59u));
L_105f2a42:;
  /* 105f2a42 jmp 0x105f2ce0 */
  goto L_105f2ce0;
L_105f2a47:;
  /* 105f2a47 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f2a4a mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 105f2a4d cmp dword ptr [ebp - 0x24], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f2a51 je 0x105f2a5b */
  if (C.zf) goto L_105f2a5b;
  /* 105f2a53 cmp dword ptr [ebp - 0x24], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f2a57 je 0x105f2a65 */
  if (C.zf) goto L_105f2a65;
  /* 105f2a59 jmp 0x105f2a69 */
  goto L_105f2a69;
L_105f2a5b:;
  /* 105f2a5b mov dword ptr [0x10610b30], 1 */
  w32((uint32_t)(0x10610b30), (0x1u));
L_105f2a65:;
  /* 105f2a65 mov byte ptr [ebp - 8], 0x49 */
  w8((uint32_t)(EBP + -0x8), (0x49u));
L_105f2a69:;
  /* 105f2a69 jmp 0x105f2ce0 */
  goto L_105f2ce0;
L_105f2a6e:;
  /* 105f2a6e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f2a71 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 105f2a74 cmp dword ptr [ebp - 0x28], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f2a78 je 0x105f2a82 */
  if (C.zf) goto L_105f2a82;
  /* 105f2a7a cmp dword ptr [ebp - 0x28], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f2a7e je 0x105f2a8c */
  if (C.zf) goto L_105f2a8c;
  /* 105f2a80 jmp 0x105f2a90 */
  goto L_105f2a90;
L_105f2a82:;
  /* 105f2a82 mov dword ptr [0x10610b30], 1 */
  w32((uint32_t)(0x10610b30), (0x1u));
L_105f2a8c:;
  /* 105f2a8c mov byte ptr [ebp - 8], 0x48 */
  w8((uint32_t)(EBP + -0x8), (0x48u));
L_105f2a90:;
  /* 105f2a90 jmp 0x105f2ce0 */
  goto L_105f2ce0;
L_105f2a95:;
  /* 105f2a95 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f2a98 mov dword ptr [ebp - 0x2c], edx */
  w32((uint32_t)(EBP + -0x2c), (EDX));
  /* 105f2a9b cmp dword ptr [ebp - 0x2c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f2a9f je 0x105f2aa9 */
  if (C.zf) goto L_105f2aa9;
  /* 105f2aa1 cmp dword ptr [ebp - 0x2c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f2aa5 je 0x105f2ab3 */
  if (C.zf) goto L_105f2ab3;
  /* 105f2aa7 jmp 0x105f2ab7 */
  goto L_105f2ab7;
L_105f2aa9:;
  /* 105f2aa9 mov dword ptr [0x10610b30], 1 */
  w32((uint32_t)(0x10610b30), (0x1u));
L_105f2ab3:;
  /* 105f2ab3 mov byte ptr [ebp - 8], 0x4d */
  w8((uint32_t)(EBP + -0x8), (0x4du));
L_105f2ab7:;
  /* 105f2ab7 jmp 0x105f2ce0 */
  goto L_105f2ce0;
L_105f2abc:;
  /* 105f2abc mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f2abf mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 105f2ac2 cmp dword ptr [ebp - 0x30], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f2ac6 je 0x105f2ad0 */
  if (C.zf) goto L_105f2ad0;
  /* 105f2ac8 cmp dword ptr [ebp - 0x30], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f2acc je 0x105f2ada */
  if (C.zf) goto L_105f2ada;
  /* 105f2ace jmp 0x105f2ade */
  goto L_105f2ade;
L_105f2ad0:;
  /* 105f2ad0 mov dword ptr [0x10610b30], 1 */
  w32((uint32_t)(0x10610b30), (0x1u));
L_105f2ada:;
  /* 105f2ada mov byte ptr [ebp - 8], 0x53 */
  w8((uint32_t)(EBP + -0x8), (0x53u));
L_105f2ade:;
  /* 105f2ade jmp 0x105f2ce0 */
  goto L_105f2ce0;
L_105f2ae3:;
  /* 105f2ae3 push 0x1060d010 */
  push32((uint32_t)(0x1060d010u));
  /* 105f2ae8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f2aeb push ecx */
  push32((uint32_t)(ECX));
  /* 105f2aec call 0x105f3340 */
  push32(0x105f2af1u); f_105f3340();
  /* 105f2af1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f2af4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f2af6 jne 0x105f2b03 */
  if (!C.zf) goto L_105f2b03;
  /* 105f2af8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f2afb add edx, 5 */
  { uint32_t _a=(EDX),_b=(0x5u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f2afe mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105f2b01 jmp 0x105f2b21 */
  goto L_105f2b21;
L_105f2b03:;
  /* 105f2b03 push 0x1060d00c */
  push32((uint32_t)(0x1060d00cu));
  /* 105f2b08 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f2b0b push eax */
  push32((uint32_t)(EAX));
  /* 105f2b0c call 0x105f3340 */
  push32(0x105f2b11u); f_105f3340();
  /* 105f2b11 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f2b14 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f2b16 jne 0x105f2b21 */
  if (!C.zf) goto L_105f2b21;
  /* 105f2b18 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f2b1b add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f2b1e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_105f2b21:;
  /* 105f2b21 mov byte ptr [ebp - 8], 0x70 */
  w8((uint32_t)(EBP + -0x8), (0x70u));
  /* 105f2b25 jmp 0x105f2ce0 */
  goto L_105f2ce0;
L_105f2b2a:;
  /* 105f2b2a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f2b2d cmp dword ptr [edx + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f2b31 jg 0x105f2b41 */
  if ((!C.zf&&C.sf==C.of)) goto L_105f2b41;
  /* 105f2b33 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105f2b36 mov ecx, dword ptr [eax + 0x98] */
  ECX = (r32((uint32_t)(EAX + 0x98)));
  /* 105f2b3c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 105f2b3f jmp 0x105f2b4d */
  goto L_105f2b4d;
L_105f2b41:;
  /* 105f2b41 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105f2b44 mov eax, dword ptr [edx + 0x9c] */
  EAX = (r32((uint32_t)(EDX + 0x9c)));
  /* 105f2b4a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_105f2b4d:;
  /* 105f2b4d cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f2b51 jle 0x105f2bf4 */
  if ((C.zf||C.sf!=C.of)) goto L_105f2bf4;
  /* 105f2b57 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f2b5a cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f2b5d jbe 0x105f2bf4 */
  if ((C.cf||C.zf)) goto L_105f2bf4;
  /* 105f2b63 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105f2b66 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f2b68 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105f2b6a mov ecx, dword ptr [0x1060ede8] */
  ECX = (r32((uint32_t)(0x1060ede8)));
  /* 105f2b70 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105f2b72 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 105f2b76 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 105f2b7c test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105f2b7e je 0x105f2bb7 */
  if (C.zf) goto L_105f2bb7;
  /* 105f2b80 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f2b83 cmp dword ptr [eax], 1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f2b86 jbe 0x105f2bb7 */
  if ((C.cf||C.zf)) goto L_105f2bb7;
  /* 105f2b88 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f2b8b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105f2b8d mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105f2b90 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 105f2b92 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 105f2b94 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f2b97 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105f2b99 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f2b9c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f2b9f mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 105f2ba1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105f2ba4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f2ba7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 105f2baa mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f2bad mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105f2baf sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f2bb2 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f2bb5 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_105f2bb7:;
  /* 105f2bb7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f2bba mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105f2bbc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105f2bbf mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105f2bc1 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 105f2bc3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f2bc6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105f2bc8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f2bcb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f2bce mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 105f2bd0 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105f2bd3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f2bd6 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 105f2bd9 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f2bdc mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105f2bde sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f2be1 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f2be4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 105f2be6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f2be9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f2bec mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 105f2bef jmp 0x105f2b4d */
  goto L_105f2b4d;
L_105f2bf4:;
  /* 105f2bf4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f2bf7 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 105f2bfa jmp 0x105f2916 */
  goto L_105f2916;
L_105f2bff:;
  /* 105f2bff mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f2c02 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 105f2c05 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105f2c07 je 0x105f2cd2 */
  if (C.zf) goto L_105f2cd2;
  /* 105f2c0d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f2c10 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f2c13 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_105f2c16:;
  /* 105f2c16 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f2c19 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105f2c1c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105f2c1e je 0x105f2cd0 */
  if (C.zf) goto L_105f2cd0;
  /* 105f2c24 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f2c27 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f2c2a je 0x105f2cd0 */
  if (C.zf) goto L_105f2cd0;
  /* 105f2c30 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f2c33 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105f2c36 cmp ecx, 0x27 */
  { uint32_t _a=(ECX),_b=(0x27u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f2c39 jne 0x105f2c49 */
  if (!C.zf) goto L_105f2c49;
  /* 105f2c3b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f2c3e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f2c41 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 105f2c44 jmp 0x105f2cd0 */
  goto L_105f2cd0;
L_105f2c49:;
  /* 105f2c49 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f2c4c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105f2c4e mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 105f2c50 mov edx, dword ptr [0x1060ede8] */
  EDX = (r32((uint32_t)(0x1060ede8)));
  /* 105f2c56 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f2c58 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 105f2c5c and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 105f2c61 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f2c63 je 0x105f2c9c */
  if (C.zf) goto L_105f2c9c;
  /* 105f2c65 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f2c68 cmp dword ptr [ecx], 1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f2c6b jbe 0x105f2c9c */
  if ((C.cf||C.zf)) goto L_105f2c9c;
  /* 105f2c6d mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f2c70 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105f2c72 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f2c75 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105f2c77 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 105f2c79 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f2c7c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105f2c7e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f2c81 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f2c84 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 105f2c86 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f2c89 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f2c8c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 105f2c8f mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f2c92 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105f2c94 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f2c97 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f2c9a mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_105f2c9c:;
  /* 105f2c9c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f2c9f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105f2ca1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f2ca4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 105f2ca6 mov byte ptr [edx], cl */
  w8((uint32_t)(EDX), (CL));
  /* 105f2ca8 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f2cab mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105f2cad add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f2cb0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f2cb3 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 105f2cb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f2cb8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f2cbb mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 105f2cbe mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f2cc1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105f2cc3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f2cc6 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f2cc9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 105f2ccb jmp 0x105f2c16 */
  goto L_105f2c16;
L_105f2cd0:;
  /* 105f2cd0 jmp 0x105f2cdb */
  goto L_105f2cdb;
L_105f2cd2:;
  /* 105f2cd2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f2cd5 add eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f2cd8 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_105f2cdb:;
  /* 105f2cdb jmp 0x105f2916 */
  goto L_105f2916;
L_105f2ce0:;
  /* 105f2ce0 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 105f2ce4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105f2ce6 je 0x105f2d0c */
  if (C.zf) goto L_105f2d0c;
  /* 105f2ce8 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105f2ceb push edx */
  push32((uint32_t)(EDX));
  /* 105f2cec mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f2cef push eax */
  push32((uint32_t)(EAX));
  /* 105f2cf0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f2cf3 push ecx */
  push32((uint32_t)(ECX));
  /* 105f2cf4 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f2cf7 push edx */
  push32((uint32_t)(EDX));
  /* 105f2cf8 mov al, byte ptr [ebp - 8] */
  AL = (r8((uint32_t)(EBP + -0x8)));
  /* 105f2cfb push eax */
  push32((uint32_t)(EAX));
  /* 105f2cfc call 0x105f2140 */
  push32(0x105f2d01u); f_105f2140();
  /* 105f2d01 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f2d04 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f2d07 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 105f2d0a jmp 0x105f2d87 */
  goto L_105f2d87;
L_105f2d0c:;
  /* 105f2d0c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f2d0f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f2d11 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105f2d13 mov ecx, dword ptr [0x1060ede8] */
  ECX = (r32((uint32_t)(0x1060ede8)));
  /* 105f2d19 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105f2d1b mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 105f2d1f and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 105f2d25 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105f2d27 je 0x105f2d58 */
  if (C.zf) goto L_105f2d58;
  /* 105f2d29 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f2d2c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105f2d2e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f2d31 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105f2d33 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 105f2d35 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f2d38 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105f2d3a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f2d3d mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f2d40 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 105f2d42 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f2d45 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f2d48 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 105f2d4b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f2d4e mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105f2d50 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f2d53 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f2d56 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_105f2d58:;
  /* 105f2d58 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f2d5b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105f2d5d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f2d60 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105f2d62 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 105f2d64 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f2d67 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105f2d69 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f2d6c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f2d6f mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 105f2d71 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f2d74 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f2d77 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 105f2d7a mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f2d7d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105f2d7f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f2d82 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f2d85 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_105f2d87:;
  /* 105f2d87 jmp 0x105f2916 */
  goto L_105f2916;
L_105f2d8c:;
  /* 105f2d8c mov esp, ebp */
  ESP = (EBP);
  /* 105f2d8e pop ebp */
  EBP = (pop32());
  /* 105f2d8f ret  */
  ESPCHK(0x105f2910u, _esp0);
  ESP += 4; return;
}

/* FUN_10012e30 @ 0x105f2e30 (650 bytes, 178 insns) */
void f_105f2e30(void) {
  FTRACE(0x105f2e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f2e30 push ebp */
  push32((uint32_t)(EBP));
  /* 105f2e31 mov ebp, esp */
  EBP = (ESP);
  /* 105f2e33 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f2e39 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f2e3d jne 0x105f2f99 */
  if (!C.zf) goto L_105f2f99;
  /* 105f2e43 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f2e46 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 105f2e4c lea ecx, [ebp - 0x8c] */
  ECX = ((uint32_t)(EBP + -0x8c));
  /* 105f2e52 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105f2e55 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105f2e5c mov dword ptr [ebp - 0x94], 0x80 */
  w32((uint32_t)(EBP + -0x94), (0x80u));
  /* 105f2e66 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f2e68 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 105f2e6e push edx */
  push32((uint32_t)(EDX));
  /* 105f2e6f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f2e72 push eax */
  push32((uint32_t)(EAX));
  /* 105f2e73 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f2e76 push ecx */
  push32((uint32_t)(ECX));
  /* 105f2e77 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f2e7a push edx */
  push32((uint32_t)(EDX));
  /* 105f2e7b call 0x105f4250 */
  push32(0x105f2e80u); f_105f4250();
  /* 105f2e80 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f2e83 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105f2e86 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f2e8a jne 0x105f2f1f */
  if (!C.zf) goto L_105f2f1f;
  /* 105f2e90 call dword ptr [0x10613250] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613250))), 0x105f2e96u);
  /* 105f2e96 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f2e99 je 0x105f2ea0 */
  if (C.zf) goto L_105f2ea0;
  /* 105f2e9b jmp 0x105f2f7d */
  goto L_105f2f7d;
L_105f2ea0:;
  /* 105f2ea0 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f2ea2 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f2ea4 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f2ea6 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f2ea9 push eax */
  push32((uint32_t)(EAX));
  /* 105f2eaa mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f2ead push ecx */
  push32((uint32_t)(ECX));
  /* 105f2eae call 0x105f4250 */
  push32(0x105f2eb3u); f_105f4250();
  /* 105f2eb3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f2eb6 mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 105f2ebc cmp dword ptr [ebp - 0x94], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f2ec3 jne 0x105f2eca */
  if (!C.zf) goto L_105f2eca;
  /* 105f2ec5 jmp 0x105f2f7d */
  goto L_105f2f7d;
L_105f2eca:;
  /* 105f2eca push 0x58 */
  push32((uint32_t)(0x58u));
  /* 105f2ecc push 0x1060d018 */
  push32((uint32_t)(0x1060d018u));
  /* 105f2ed1 push 2 */
  push32((uint32_t)(0x2u));
  /* 105f2ed3 mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 105f2ed9 push edx */
  push32((uint32_t)(EDX));
  /* 105f2eda call 0x105e5e90 */
  push32(0x105f2edfu); f_105e5e90();
  /* 105f2edf add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f2ee2 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105f2ee5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f2ee9 jne 0x105f2ef0 */
  if (!C.zf) goto L_105f2ef0;
  /* 105f2eeb jmp 0x105f2f7d */
  goto L_105f2f7d;
L_105f2ef0:;
  /* 105f2ef0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 105f2ef7 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f2ef9 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 105f2eff push eax */
  push32((uint32_t)(EAX));
  /* 105f2f00 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f2f03 push ecx */
  push32((uint32_t)(ECX));
  /* 105f2f04 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f2f07 push edx */
  push32((uint32_t)(EDX));
  /* 105f2f08 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f2f0b push eax */
  push32((uint32_t)(EAX));
  /* 105f2f0c call 0x105f4250 */
  push32(0x105f2f11u); f_105f4250();
  /* 105f2f11 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f2f14 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105f2f17 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f2f1b jne 0x105f2f1f */
  if (!C.zf) goto L_105f2f1f;
  /* 105f2f1d jmp 0x105f2f7d */
  goto L_105f2f7d;
L_105f2f1f:;
  /* 105f2f1f push 0x63 */
  push32((uint32_t)(0x63u));
  /* 105f2f21 push 0x1060d018 */
  push32((uint32_t)(0x1060d018u));
  /* 105f2f26 push 2 */
  push32((uint32_t)(0x2u));
  /* 105f2f28 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f2f2b push ecx */
  push32((uint32_t)(ECX));
  /* 105f2f2c call 0x105e5e90 */
  push32(0x105f2f31u); f_105e5e90();
  /* 105f2f31 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f2f34 mov edx, dword ptr [ebp - 0x90] */
  EDX = (r32((uint32_t)(EBP + -0x90)));
  /* 105f2f3a mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 105f2f3c mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 105f2f42 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f2f45 jne 0x105f2f49 */
  if (!C.zf) goto L_105f2f49;
  /* 105f2f47 jmp 0x105f2f7d */
  goto L_105f2f7d;
L_105f2f49:;
  /* 105f2f49 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f2f4c push ecx */
  push32((uint32_t)(ECX));
  /* 105f2f4d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f2f50 push edx */
  push32((uint32_t)(EDX));
  /* 105f2f51 mov eax, dword ptr [ebp - 0x90] */
  EAX = (r32((uint32_t)(EBP + -0x90)));
  /* 105f2f57 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105f2f59 push ecx */
  push32((uint32_t)(ECX));
  /* 105f2f5a call 0x105e96b0 */
  push32(0x105f2f5fu); f_105e96b0();
  /* 105f2f5f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f2f62 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f2f66 je 0x105f2f76 */
  if (C.zf) goto L_105f2f76;
  /* 105f2f68 push 2 */
  push32((uint32_t)(0x2u));
  /* 105f2f6a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f2f6d push edx */
  push32((uint32_t)(EDX));
  /* 105f2f6e call 0x105e6920 */
  push32(0x105f2f73u); f_105e6920();
  /* 105f2f73 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105f2f76:;
  /* 105f2f76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f2f78 jmp 0x105f30b6 */
  goto L_105f30b6;
L_105f2f7d:;
  /* 105f2f7d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f2f81 je 0x105f2f91 */
  if (C.zf) goto L_105f2f91;
  /* 105f2f83 push 2 */
  push32((uint32_t)(0x2u));
  /* 105f2f85 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f2f88 push eax */
  push32((uint32_t)(EAX));
  /* 105f2f89 call 0x105e6920 */
  push32(0x105f2f8eu); f_105e6920();
  /* 105f2f8e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105f2f91:;
  /* 105f2f91 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105f2f94 jmp 0x105f30b6 */
  goto L_105f30b6;
L_105f2f99:;
  /* 105f2f99 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f2f9d jne 0x105f30b3 */
  if (!C.zf) goto L_105f30b3;
  /* 105f2fa3 mov dword ptr [ebp - 0xa4], 4 */
  w32((uint32_t)(EBP + -0xa4), (0x4u));
  /* 105f2fad mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f2fb0 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 105f2fb6 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f2fb8 mov edx, dword ptr [ebp - 0xa4] */
  EDX = (r32((uint32_t)(EBP + -0xa4)));
  /* 105f2fbe push edx */
  push32((uint32_t)(EDX));
  /* 105f2fbf push 0x10610a44 */
  push32((uint32_t)(0x10610a44u));
  /* 105f2fc4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f2fc7 push eax */
  push32((uint32_t)(EAX));
  /* 105f2fc8 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f2fcb push ecx */
  push32((uint32_t)(ECX));
  /* 105f2fcc call 0x105f40b0 */
  push32(0x105f2fd1u); f_105f40b0();
  /* 105f2fd1 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f2fd4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f2fd6 jne 0x105f2fe0 */
  if (!C.zf) goto L_105f2fe0;
  /* 105f2fd8 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105f2fdb jmp 0x105f30b6 */
  goto L_105f30b6;
L_105f2fe0:;
  /* 105f2fe0 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 105f2fe6 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 105f2fe9 mov dword ptr [ebp - 0xa0], 0 */
  w32((uint32_t)(EBP + -0xa0), (0x0u));
  /* 105f2ff3 jmp 0x105f3004 */
  goto L_105f3004;
L_105f2ff5:;
  /* 105f2ff5 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 105f2ffb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f2ffe mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
L_105f3004:;
  /* 105f3004 cmp dword ptr [ebp - 0xa0], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f300b jge 0x105f30af */
  if ((C.sf==C.of)) goto L_105f30af;
  /* 105f3011 cmp dword ptr [0x1060f158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1060f158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f3018 jle 0x105f304b */
  if ((C.zf||C.sf!=C.of)) goto L_105f304b;
  /* 105f301a push 4 */
  push32((uint32_t)(0x4u));
  /* 105f301c mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 105f3022 mov dl, byte ptr [ecx*2 + 0x10610a44] */
  DL = (r8((uint32_t)(ECX*2 + 0x10610a44)));
  /* 105f3029 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 105f302f mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 105f3035 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 105f303a push eax */
  push32((uint32_t)(EAX));
  /* 105f303b call 0x105ec750 */
  push32(0x105f3040u); f_105ec750();
  /* 105f3040 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f3043 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 105f3049 jmp 0x105f307e */
  goto L_105f307e;
L_105f304b:;
  /* 105f304b mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 105f3051 mov dl, byte ptr [ecx*2 + 0x10610a44] */
  DL = (r8((uint32_t)(ECX*2 + 0x10610a44)));
  /* 105f3058 mov byte ptr [ebp - 0x98], dl */
  w8((uint32_t)(EBP + -0x98), (DL));
  /* 105f305e mov eax, dword ptr [ebp - 0x98] */
  EAX = (r32((uint32_t)(EBP + -0x98)));
  /* 105f3064 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 105f3069 mov ecx, dword ptr [0x1060ede8] */
  ECX = (r32((uint32_t)(0x1060ede8)));
  /* 105f306f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105f3071 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 105f3075 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 105f3078 mov dword ptr [ebp - 0xa8], edx */
  w32((uint32_t)(EBP + -0xa8), (EDX));
L_105f307e:;
  /* 105f307e cmp dword ptr [ebp - 0xa8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f3085 je 0x105f30a8 */
  if (C.zf) goto L_105f30a8;
  /* 105f3087 mov eax, dword ptr [ebp - 0x9c] */
  EAX = (r32((uint32_t)(EBP + -0x9c)));
  /* 105f308d movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105f3090 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105f3093 movsx edx, byte ptr [ebp - 0x98] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x98))));
  /* 105f309a lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 105f309e mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 105f30a4 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 105f30a6 jmp 0x105f30aa */
  goto L_105f30aa;
L_105f30a8:;
  /* 105f30a8 jmp 0x105f30af */
  goto L_105f30af;
L_105f30aa:;
  /* 105f30aa jmp 0x105f2ff5 */
  goto L_105f2ff5;
L_105f30af:;
  /* 105f30af xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f30b1 jmp 0x105f30b6 */
  goto L_105f30b6;
L_105f30b3:;
  /* 105f30b3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_105f30b6:;
  /* 105f30b6 mov esp, ebp */
  ESP = (EBP);
  /* 105f30b8 pop ebp */
  EBP = (pop32());
  /* 105f30b9 ret  */
  ESPCHK(0x105f2e30u, _esp0);
  ESP += 4; return;
}

/* FUN_100130c0 @ 0x105f30c0 (10 bytes, 5 insns) */
void f_105f30c0(void) {
  FTRACE(0x105f30c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f30c0 push ebp */
  push32((uint32_t)(EBP));
  /* 105f30c1 mov ebp, esp */
  EBP = (ESP);
  /* 105f30c3 mov eax, dword ptr [0x1060fd98] */
  EAX = (r32((uint32_t)(0x1060fd98)));
  /* 105f30c8 pop ebp */
  EBP = (pop32());
  /* 105f30c9 ret  */
  ESPCHK(0x105f30c0u, _esp0);
  ESP += 4; return;
}

/* FUN_100130d0 @ 0x105f30d0 (575 bytes, 196 insns) */
void f_105f30d0(void) {
  FTRACE(0x105f30d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f30d0 push ebp */
  push32((uint32_t)(EBP));
  /* 105f30d1 mov ebp, esp */
  EBP = (ESP);
  /* 105f30d3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 105f30d5 push 0x1060d028 */
  push32((uint32_t)(0x1060d028u));
  /* 105f30da push 0x105f1710 */
  push32((uint32_t)(0x105f1710u));
  /* 105f30df mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 105f30e5 push eax */
  push32((uint32_t)(EAX));
  /* 105f30e6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 105f30ed add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f30f0 push ebx */
  push32((uint32_t)(EBX));
  /* 105f30f1 push esi */
  push32((uint32_t)(ESI));
  /* 105f30f2 push edi */
  push32((uint32_t)(EDI));
  /* 105f30f3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 105f30f6 cmp dword ptr [0x10610a50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610a50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f30fd jne 0x105f314e */
  if (!C.zf) goto L_105f314e;
  /* 105f30ff lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 105f3102 push eax */
  push32((uint32_t)(EAX));
  /* 105f3103 push 1 */
  push32((uint32_t)(0x1u));
  /* 105f3105 push 0x1060c7d8 */
  push32((uint32_t)(0x1060c7d8u));
  /* 105f310a push 1 */
  push32((uint32_t)(0x1u));
  /* 105f310c call dword ptr [0x106132dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132dc))), 0x105f3112u);
  /* 105f3112 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f3114 je 0x105f3122 */
  if (C.zf) goto L_105f3122;
  /* 105f3116 mov dword ptr [0x10610a50], 1 */
  w32((uint32_t)(0x10610a50), (0x1u));
  /* 105f3120 jmp 0x105f314e */
  goto L_105f314e;
L_105f3122:;
  /* 105f3122 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 105f3125 push ecx */
  push32((uint32_t)(ECX));
  /* 105f3126 push 1 */
  push32((uint32_t)(0x1u));
  /* 105f3128 push 0x1060c7d4 */
  push32((uint32_t)(0x1060c7d4u));
  /* 105f312d push 1 */
  push32((uint32_t)(0x1u));
  /* 105f312f push 0 */
  push32((uint32_t)(0x0u));
  /* 105f3131 call dword ptr [0x10613290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613290))), 0x105f3137u);
  /* 105f3137 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f3139 je 0x105f3147 */
  if (C.zf) goto L_105f3147;
  /* 105f313b mov dword ptr [0x10610a50], 2 */
  w32((uint32_t)(0x10610a50), (0x2u));
  /* 105f3145 jmp 0x105f314e */
  goto L_105f314e;
L_105f3147:;
  /* 105f3147 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f3149 jmp 0x105f3329 */
  goto L_105f3329;
L_105f314e:;
  /* 105f314e cmp dword ptr [0x10610a50], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10610a50))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f3155 jne 0x105f3172 */
  if (!C.zf) goto L_105f3172;
  /* 105f3157 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f315a push edx */
  push32((uint32_t)(EDX));
  /* 105f315b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f315e push eax */
  push32((uint32_t)(EAX));
  /* 105f315f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f3162 push ecx */
  push32((uint32_t)(ECX));
  /* 105f3163 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f3166 push edx */
  push32((uint32_t)(EDX));
  /* 105f3167 call dword ptr [0x106132dc] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132dc))), 0x105f316du);
  /* 105f316d jmp 0x105f3329 */
  goto L_105f3329;
L_105f3172:;
  /* 105f3172 cmp dword ptr [0x10610a50], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10610a50))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f3179 jne 0x105f3327 */
  if (!C.zf) goto L_105f3327;
  /* 105f317f cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f3183 jne 0x105f318d */
  if (!C.zf) goto L_105f318d;
  /* 105f3185 mov eax, dword ptr [0x106109d0] */
  EAX = (r32((uint32_t)(0x106109d0)));
  /* 105f318a mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_105f318d:;
  /* 105f318d push 0 */
  push32((uint32_t)(0x0u));
  /* 105f318f push 0 */
  push32((uint32_t)(0x0u));
  /* 105f3191 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f3193 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f3195 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f3198 push ecx */
  push32((uint32_t)(ECX));
  /* 105f3199 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f319c push edx */
  push32((uint32_t)(EDX));
  /* 105f319d push 0x220 */
  push32((uint32_t)(0x220u));
  /* 105f31a2 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105f31a5 push eax */
  push32((uint32_t)(EAX));
  /* 105f31a6 call dword ptr [0x1061327c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1061327c))), 0x105f31acu);
  /* 105f31ac mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 105f31af cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f31b3 jne 0x105f31bc */
  if (!C.zf) goto L_105f31bc;
  /* 105f31b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f31b7 jmp 0x105f3329 */
  goto L_105f3329;
L_105f31bc:;
  /* 105f31bc mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105f31c3 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 105f31c6 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f31c9 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 105f31cb call 0x105e9030 */
  push32(0x105f31d0u); f_105e9030();
  /* 105f31d0 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 105f31d3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 105f31d6 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 105f31d9 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 105f31dc mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 105f31df push edx */
  push32((uint32_t)(EDX));
  /* 105f31e0 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f31e2 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105f31e5 push eax */
  push32((uint32_t)(EAX));
  /* 105f31e6 call 0x105ea5b0 */
  push32(0x105f31ebu); f_105ea5b0();
  /* 105f31eb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f31ee mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 105f31f5 jmp 0x105f320e */
  goto L_105f320e;
  /* 105f31f7 mov eax, 1 */
  EAX = (0x1u);
  /* 105f31fc ret  */
  ESPCHK(0x105f30d0u, _esp0);
  ESP += 4; return;
  /* 105f31fd mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 105f3200 mov dword ptr [ebp - 0x2c], 0 */
  w32((uint32_t)(EBP + -0x2c), (0x0u));
  /* 105f3207 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_105f320e:;
  /* 105f320e cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f3212 jne 0x105f321b */
  if (!C.zf) goto L_105f321b;
  /* 105f3214 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f3216 jmp 0x105f3329 */
  goto L_105f3329;
L_105f321b:;
  /* 105f321b push 0 */
  push32((uint32_t)(0x0u));
  /* 105f321d push 0 */
  push32((uint32_t)(0x0u));
  /* 105f321f mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 105f3222 push ecx */
  push32((uint32_t)(ECX));
  /* 105f3223 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105f3226 push edx */
  push32((uint32_t)(EDX));
  /* 105f3227 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f322a push eax */
  push32((uint32_t)(EAX));
  /* 105f322b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f322e push ecx */
  push32((uint32_t)(ECX));
  /* 105f322f push 0x220 */
  push32((uint32_t)(0x220u));
  /* 105f3234 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105f3237 push edx */
  push32((uint32_t)(EDX));
  /* 105f3238 call dword ptr [0x1061327c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1061327c))), 0x105f323eu);
  /* 105f323e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f3240 jne 0x105f3249 */
  if (!C.zf) goto L_105f3249;
  /* 105f3242 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f3244 jmp 0x105f3329 */
  goto L_105f3329;
L_105f3249:;
  /* 105f3249 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 105f3250 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 105f3253 lea eax, [eax + eax + 2] */
  EAX = ((uint32_t)(EAX + EAX*1 + 0x2));
  /* 105f3257 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f325a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 105f325c call 0x105e9030 */
  push32(0x105f3261u); f_105e9030();
  /* 105f3261 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 105f3264 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 105f3267 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 105f326a mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 105f326d mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 105f3274 jmp 0x105f328d */
  goto L_105f328d;
  /* 105f3276 mov eax, 1 */
  EAX = (0x1u);
  /* 105f327b ret  */
  ESPCHK(0x105f30d0u, _esp0);
  ESP += 4; return;
  /* 105f327c mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 105f327f mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 105f3286 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_105f328d:;
  /* 105f328d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f3291 jne 0x105f329a */
  if (!C.zf) goto L_105f329a;
  /* 105f3293 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f3295 jmp 0x105f3329 */
  goto L_105f3329;
L_105f329a:;
  /* 105f329a cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f329e jne 0x105f32a9 */
  if (!C.zf) goto L_105f32a9;
  /* 105f32a0 mov edx, dword ptr [0x106109c0] */
  EDX = (r32((uint32_t)(0x106109c0)));
  /* 105f32a6 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_105f32a9:;
  /* 105f32a9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f32ac mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105f32af mov word ptr [ecx + eax*2], 0xffff */
  w16((uint32_t)(ECX + EAX*2), (0xffffu));
  /* 105f32b5 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f32b8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105f32bb mov word ptr [eax + edx*2 - 2], 0xffff */
  w16((uint32_t)(EAX + EDX*2 + -0x2), (0xffffu));
  /* 105f32c2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105f32c5 push ecx */
  push32((uint32_t)(ECX));
  /* 105f32c6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 105f32c9 push edx */
  push32((uint32_t)(EDX));
  /* 105f32ca mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 105f32cd push eax */
  push32((uint32_t)(EAX));
  /* 105f32ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f32d1 push ecx */
  push32((uint32_t)(ECX));
  /* 105f32d2 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 105f32d5 push edx */
  push32((uint32_t)(EDX));
  /* 105f32d6 call dword ptr [0x10613290] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613290))), 0x105f32dcu);
  /* 105f32dc mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 105f32df mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f32e2 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105f32e5 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105f32e7 mov dx, word ptr [ecx + eax*2 - 2] */
  DX = (r16((uint32_t)(ECX + EAX*2 + -0x2)));
  /* 105f32ec cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f32f2 je 0x105f3308 */
  if (C.zf) goto L_105f3308;
  /* 105f32f4 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f32f7 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105f32fa xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105f32fc mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 105f3300 cmp edx, 0xffff */
  { uint32_t _a=(EDX),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f3306 je 0x105f330c */
  if (C.zf) goto L_105f330c;
L_105f3308:;
  /* 105f3308 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f330a jmp 0x105f3329 */
  goto L_105f3329;
L_105f330c:;
  /* 105f330c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f330f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 105f3311 push eax */
  push32((uint32_t)(EAX));
  /* 105f3312 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105f3315 push ecx */
  push32((uint32_t)(ECX));
  /* 105f3316 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f3319 push edx */
  push32((uint32_t)(EDX));
  /* 105f331a call 0x105ee7e0 */
  push32(0x105f331fu); f_105ee7e0();
  /* 105f331f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f3322 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 105f3325 jmp 0x105f3329 */
  goto L_105f3329;
L_105f3327:;
  /* 105f3327 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105f3329:;
  /* 105f3329 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 105f332c mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105f332f mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 105f3336 pop edi */
  EDI = (pop32());
  /* 105f3337 pop esi */
  ESI = (pop32());
  /* 105f3338 pop ebx */
  EBX = (pop32());
  /* 105f3339 mov esp, ebp */
  ESP = (EBP);
  /* 105f333b pop ebp */
  EBP = (pop32());
  /* 105f333c ret  */
  ESPCHK(0x105f30d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013340 @ 0x105f3340 (208 bytes, 85 insns) */
void f_105f3340(void) {
  FTRACE(0x105f3340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f3340 push ebp */
  push32((uint32_t)(EBP));
  /* 105f3341 mov ebp, esp */
  EBP = (ESP);
  /* 105f3343 push edi */
  push32((uint32_t)(EDI));
  /* 105f3344 push esi */
  push32((uint32_t)(ESI));
  /* 105f3345 push ebx */
  push32((uint32_t)(EBX));
  /* 105f3346 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 105f3349 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 105f334c lea eax, [0x106109b8] */
  EAX = ((uint32_t)(0x106109b8));
  /* 105f3352 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f3356 jne 0x105f3393 */
  if (!C.zf) goto L_105f3393;
  /* 105f3358 mov al, 0xff */
  AL = (0xffu);
  /* 105f335a mov edi, edi */
  EDI = (EDI);
L_105f335c:;
  /* 105f335c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 105f335e je 0x105f338e */
  if (C.zf) goto L_105f338e;
  /* 105f3360 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 105f3362 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 105f3363 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 105f3365 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 105f3366 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105f3368 je 0x105f335c */
  if (C.zf) goto L_105f335c;
  /* 105f336a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 105f336c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105f336e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 105f3370 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 105f3373 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 105f3375 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 105f3377 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 105f3379 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 105f337b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105f337d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 105f337f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 105f3382 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 105f3384 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 105f3386 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105f3388 je 0x105f335c */
  if (C.zf) goto L_105f335c;
  /* 105f338a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 105f338c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_105f338e:;
  /* 105f338e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 105f3391 jmp 0x105f340b */
  goto L_105f340b;
L_105f3393:;
  /* 105f3393 lock inc dword ptr [0x10610b44] */
  x86_unimpl("lock inc @ 0x105f3393");
  /* 105f339a cmp dword ptr [0x10610b34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610b34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f33a1 jg 0x105f33a7 */
  if ((!C.zf&&C.sf==C.of)) goto L_105f33a7;
  /* 105f33a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f33a5 jmp 0x105f33bc */
  goto L_105f33bc;
L_105f33a7:;
  /* 105f33a7 lock dec dword ptr [0x10610b44] */
  x86_unimpl("lock dec @ 0x105f33a7");
  /* 105f33ae push 0x13 */
  push32((uint32_t)(0x13u));
  /* 105f33b0 call 0x105ea240 */
  push32(0x105f33b5u); f_105ea240();
  /* 105f33b5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_105f33bc:;
  /* 105f33bc mov eax, 0xff */
  EAX = (0xffu);
  /* 105f33c1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 105f33c3 nop  */
  /* nop */
L_105f33c4:;
  /* 105f33c4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 105f33c6 je 0x105f33ef */
  if (C.zf) goto L_105f33ef;
  /* 105f33c8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 105f33ca inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 105f33cb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 105f33cd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 105f33ce cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105f33d0 je 0x105f33c4 */
  if (C.zf) goto L_105f33c4;
  /* 105f33d2 push eax */
  push32((uint32_t)(EAX));
  /* 105f33d3 push ebx */
  push32((uint32_t)(EBX));
  /* 105f33d4 call 0x105f44b0 */
  push32(0x105f33d9u); f_105f44b0();
  /* 105f33d9 mov ebx, eax */
  EBX = (EAX);
  /* 105f33db add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f33de call 0x105f44b0 */
  push32(0x105f33e3u); f_105f44b0();
  /* 105f33e3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f33e6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105f33e8 je 0x105f33c4 */
  if (C.zf) goto L_105f33c4;
  /* 105f33ea sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f33ec sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_105f33ef:;
  /* 105f33ef mov ebx, eax */
  EBX = (EAX);
  /* 105f33f1 pop eax */
  EAX = (pop32());
  /* 105f33f2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f33f4 jne 0x105f33ff */
  if (!C.zf) goto L_105f33ff;
  /* 105f33f6 lock dec dword ptr [0x10610b44] */
  x86_unimpl("lock dec @ 0x105f33f6");
  /* 105f33fd jmp 0x105f3409 */
  goto L_105f3409;
L_105f33ff:;
  /* 105f33ff push 0x13 */
  push32((uint32_t)(0x13u));
  /* 105f3401 call 0x105ea2e0 */
  push32(0x105f3406u); f_105ea2e0();
  /* 105f3406 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105f3409:;
  /* 105f3409 mov eax, ebx */
  EAX = (EBX);
L_105f340b:;
  /* 105f340b pop ebx */
  EBX = (pop32());
  /* 105f340c pop esi */
  ESI = (pop32());
  /* 105f340d pop edi */
  EDI = (pop32());
  /* 105f340e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 105f340f ret  */
  ESPCHK(0x105f3340u, _esp0);
  ESP += 4; return;
}

/* FUN_10013410 @ 0x105f3410 (257 bytes, 103 insns) */
void f_105f3410(void) {
  FTRACE(0x105f3410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f3410 push ebp */
  push32((uint32_t)(EBP));
  /* 105f3411 mov ebp, esp */
  EBP = (ESP);
  /* 105f3413 push edi */
  push32((uint32_t)(EDI));
  /* 105f3414 push esi */
  push32((uint32_t)(ESI));
  /* 105f3415 push ebx */
  push32((uint32_t)(EBX));
  /* 105f3416 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f3419 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105f341b je 0x105f350a */
  if (C.zf) goto L_105f350a;
  /* 105f3421 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 105f3424 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 105f3427 lea eax, [0x106109b8] */
  EAX = ((uint32_t)(0x106109b8));
  /* 105f342d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f3431 jne 0x105f3481 */
  if (!C.zf) goto L_105f3481;
  /* 105f3433 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 105f3435 mov bl, 0x5a */
  BL = (0x5au);
  /* 105f3437 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 105f3439 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_105f343c:;
  /* 105f343c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 105f343e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 105f3440 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 105f3442 je 0x105f3465 */
  if (C.zf) goto L_105f3465;
  /* 105f3444 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 105f3446 je 0x105f3465 */
  if (C.zf) goto L_105f3465;
  /* 105f3448 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 105f3449 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 105f344a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105f344c jb 0x105f3454 */
  if (C.cf) goto L_105f3454;
  /* 105f344e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105f3450 ja 0x105f3454 */
  if ((!C.cf&&!C.zf)) goto L_105f3454;
  /* 105f3452 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_105f3454:;
  /* 105f3454 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105f3456 jb 0x105f345e */
  if (C.cf) goto L_105f345e;
  /* 105f3458 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105f345a ja 0x105f345e */
  if ((!C.cf&&!C.zf)) goto L_105f345e;
  /* 105f345c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_105f345e:;
  /* 105f345e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105f3460 jne 0x105f346f */
  if (!C.zf) goto L_105f346f;
  /* 105f3462 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 105f3463 jne 0x105f343c */
  if (!C.zf) goto L_105f343c;
L_105f3465:;
  /* 105f3465 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105f3467 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105f3469 je 0x105f350a */
  if (C.zf) goto L_105f350a;
L_105f346f:;
  /* 105f346f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 105f3474 jb 0x105f350a */
  if (C.cf) goto L_105f350a;
  /* 105f347a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 105f347c jmp 0x105f350a */
  goto L_105f350a;
L_105f3481:;
  /* 105f3481 lock inc dword ptr [0x10610b44] */
  x86_unimpl("lock inc @ 0x105f3481");
  /* 105f3488 cmp dword ptr [0x10610b34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610b34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f348f jg 0x105f3495 */
  if ((!C.zf&&C.sf==C.of)) goto L_105f3495;
  /* 105f3491 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f3493 jmp 0x105f34ae */
  goto L_105f34ae;
L_105f3495:;
  /* 105f3495 lock dec dword ptr [0x10610b44] */
  x86_unimpl("lock dec @ 0x105f3495");
  /* 105f349c mov ebx, ecx */
  EBX = (ECX);
  /* 105f349e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 105f34a0 call 0x105ea240 */
  push32(0x105f34a5u); f_105ea240();
  /* 105f34a5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 105f34ac mov ecx, ebx */
  ECX = (EBX);
L_105f34ae:;
  /* 105f34ae xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f34b0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 105f34b2 mov edi, edi */
  EDI = (EDI);
L_105f34b4:;
  /* 105f34b4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 105f34b6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f34b8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 105f34ba je 0x105f34df */
  if (C.zf) goto L_105f34df;
  /* 105f34bc or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 105f34be je 0x105f34df */
  if (C.zf) goto L_105f34df;
  /* 105f34c0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 105f34c1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 105f34c2 push ecx */
  push32((uint32_t)(ECX));
  /* 105f34c3 push eax */
  push32((uint32_t)(EAX));
  /* 105f34c4 push ebx */
  push32((uint32_t)(EBX));
  /* 105f34c5 call 0x105f44b0 */
  push32(0x105f34cau); f_105f44b0();
  /* 105f34ca mov ebx, eax */
  EBX = (EAX);
  /* 105f34cc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f34cf call 0x105f44b0 */
  push32(0x105f34d4u); f_105f44b0();
  /* 105f34d4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f34d7 pop ecx */
  ECX = (pop32());
  /* 105f34d8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f34da jne 0x105f34e5 */
  if (!C.zf) goto L_105f34e5;
  /* 105f34dc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 105f34dd jne 0x105f34b4 */
  if (!C.zf) goto L_105f34b4;
L_105f34df:;
  /* 105f34df xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105f34e1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f34e3 je 0x105f34ee */
  if (C.zf) goto L_105f34ee;
L_105f34e5:;
  /* 105f34e5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 105f34ea jb 0x105f34ee */
  if (C.cf) goto L_105f34ee;
  /* 105f34ec neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_105f34ee:;
  /* 105f34ee pop eax */
  EAX = (pop32());
  /* 105f34ef or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f34f1 jne 0x105f34fc */
  if (!C.zf) goto L_105f34fc;
  /* 105f34f3 lock dec dword ptr [0x10610b44] */
  x86_unimpl("lock dec @ 0x105f34f3");
  /* 105f34fa jmp 0x105f350a */
  goto L_105f350a;
L_105f34fc:;
  /* 105f34fc mov ebx, ecx */
  EBX = (ECX);
  /* 105f34fe push 0x13 */
  push32((uint32_t)(0x13u));
  /* 105f3500 call 0x105ea2e0 */
  push32(0x105f3505u); f_105ea2e0();
  /* 105f3505 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f3508 mov ecx, ebx */
  ECX = (EBX);
L_105f350a:;
  /* 105f350a mov eax, ecx */
  EAX = (ECX);
  /* 105f350c pop ebx */
  EBX = (pop32());
  /* 105f350d pop esi */
  ESI = (pop32());
  /* 105f350e pop edi */
  EDI = (pop32());
  /* 105f350f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 105f3510 ret  */
  ESPCHK(0x105f3410u, _esp0);
  ESP += 4; return;
}

/* FUN_10013520 @ 0x105f3520 (255 bytes, 88 insns) */
void f_105f3520(void) {
  FTRACE(0x105f3520u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f3520 push ebp */
  push32((uint32_t)(EBP));
  /* 105f3521 mov ebp, esp */
  EBP = (ESP);
  /* 105f3523 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_105f3526:;
  /* 105f3526 cmp dword ptr [0x1060f158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1060f158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f352d jle 0x105f3546 */
  if ((C.zf||C.sf!=C.of)) goto L_105f3546;
  /* 105f352f push 8 */
  push32((uint32_t)(0x8u));
  /* 105f3531 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f3534 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105f3536 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 105f3538 push ecx */
  push32((uint32_t)(ECX));
  /* 105f3539 call 0x105ec750 */
  push32(0x105f353eu); f_105ec750();
  /* 105f353e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f3541 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 105f3544 jmp 0x105f355f */
  goto L_105f355f;
L_105f3546:;
  /* 105f3546 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f3549 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f354b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105f354d mov ecx, dword ptr [0x1060ede8] */
  ECX = (r32((uint32_t)(0x1060ede8)));
  /* 105f3553 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105f3555 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 105f3559 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 105f355c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_105f355f:;
  /* 105f355f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f3563 je 0x105f3570 */
  if (C.zf) goto L_105f3570;
  /* 105f3565 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f3568 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f356b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 105f356e jmp 0x105f3526 */
  goto L_105f3526;
L_105f3570:;
  /* 105f3570 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f3573 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105f3575 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105f3577 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105f357a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f357d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f3580 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 105f3583 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f3586 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105f3589 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f358d je 0x105f3595 */
  if (C.zf) goto L_105f3595;
  /* 105f358f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f3593 jne 0x105f35a8 */
  if (!C.zf) goto L_105f35a8;
L_105f3595:;
  /* 105f3595 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f3598 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f359a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105f359c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105f359f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f35a2 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f35a5 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_105f35a8:;
  /* 105f35a8 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_105f35af:;
  /* 105f35af cmp dword ptr [0x1060f158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1060f158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f35b6 jle 0x105f35cb */
  if ((C.zf||C.sf!=C.of)) goto L_105f35cb;
  /* 105f35b8 push 4 */
  push32((uint32_t)(0x4u));
  /* 105f35ba mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f35bd push edx */
  push32((uint32_t)(EDX));
  /* 105f35be call 0x105ec750 */
  push32(0x105f35c3u); f_105ec750();
  /* 105f35c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f35c6 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 105f35c9 jmp 0x105f35e0 */
  goto L_105f35e0;
L_105f35cb:;
  /* 105f35cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f35ce mov ecx, dword ptr [0x1060ede8] */
  ECX = (r32((uint32_t)(0x1060ede8)));
  /* 105f35d4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105f35d6 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 105f35da and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 105f35dd mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_105f35e0:;
  /* 105f35e0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f35e4 je 0x105f360b */
  if (C.zf) goto L_105f360b;
  /* 105f35e6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f35e9 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105f35ec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f35ef lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 105f35f3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 105f35f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f35f9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105f35fb mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 105f35fd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105f3600 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f3603 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f3606 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 105f3609 jmp 0x105f35af */
  goto L_105f35af;
L_105f360b:;
  /* 105f360b cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f360f jne 0x105f3618 */
  if (!C.zf) goto L_105f3618;
  /* 105f3611 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f3614 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 105f3616 jmp 0x105f361b */
  goto L_105f361b;
L_105f3618:;
  /* 105f3618 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_105f361b:;
  /* 105f361b mov esp, ebp */
  ESP = (EBP);
  /* 105f361d pop ebp */
  EBP = (pop32());
  /* 105f361e ret  */
  ESPCHK(0x105f3520u, _esp0);
  ESP += 4; return;
}

/* FUN_10013620 @ 0x105f3620 (17 bytes, 8 insns) */
void f_105f3620(void) {
  FTRACE(0x105f3620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f3620 push ebp */
  push32((uint32_t)(EBP));
  /* 105f3621 mov ebp, esp */
  EBP = (ESP);
  /* 105f3623 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f3626 push eax */
  push32((uint32_t)(EAX));
  /* 105f3627 call 0x105f3520 */
  push32(0x105f362cu); f_105f3520();
  /* 105f362c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f362f pop ebp */
  EBP = (pop32());
  /* 105f3630 ret  */
  ESPCHK(0x105f3620u, _esp0);
  ESP += 4; return;
}

/* FUN_10013640 @ 0x105f3640 (297 bytes, 106 insns) */
void f_105f3640(void) {
  FTRACE(0x105f3640u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f3640 push ebp */
  push32((uint32_t)(EBP));
  /* 105f3641 mov ebp, esp */
  EBP = (ESP);
  /* 105f3643 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f3646 push esi */
  push32((uint32_t)(ESI));
L_105f3647:;
  /* 105f3647 cmp dword ptr [0x1060f158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1060f158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f364e jle 0x105f3667 */
  if ((C.zf||C.sf!=C.of)) goto L_105f3667;
  /* 105f3650 push 8 */
  push32((uint32_t)(0x8u));
  /* 105f3652 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f3655 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105f3657 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 105f3659 push ecx */
  push32((uint32_t)(ECX));
  /* 105f365a call 0x105ec750 */
  push32(0x105f365fu); f_105ec750();
  /* 105f365f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f3662 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 105f3665 jmp 0x105f3680 */
  goto L_105f3680;
L_105f3667:;
  /* 105f3667 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f366a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f366c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105f366e mov ecx, dword ptr [0x1060ede8] */
  ECX = (r32((uint32_t)(0x1060ede8)));
  /* 105f3674 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105f3676 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 105f367a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 105f367d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_105f3680:;
  /* 105f3680 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f3684 je 0x105f3691 */
  if (C.zf) goto L_105f3691;
  /* 105f3686 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f3689 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f368c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 105f368f jmp 0x105f3647 */
  goto L_105f3647;
L_105f3691:;
  /* 105f3691 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f3694 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105f3696 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105f3698 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105f369b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f369e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f36a1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 105f36a4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f36a7 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 105f36aa cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f36ae je 0x105f36b6 */
  if (C.zf) goto L_105f36b6;
  /* 105f36b0 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f36b4 jne 0x105f36c9 */
  if (!C.zf) goto L_105f36c9;
L_105f36b6:;
  /* 105f36b6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f36b9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f36bb mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105f36bd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105f36c0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f36c3 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f36c6 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_105f36c9:;
  /* 105f36c9 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 105f36d0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_105f36d7:;
  /* 105f36d7 cmp dword ptr [0x1060f158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1060f158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f36de jle 0x105f36f3 */
  if ((C.zf||C.sf!=C.of)) goto L_105f36f3;
  /* 105f36e0 push 4 */
  push32((uint32_t)(0x4u));
  /* 105f36e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f36e5 push edx */
  push32((uint32_t)(EDX));
  /* 105f36e6 call 0x105ec750 */
  push32(0x105f36ebu); f_105ec750();
  /* 105f36eb add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f36ee mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 105f36f1 jmp 0x105f3708 */
  goto L_105f3708;
L_105f36f3:;
  /* 105f36f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f36f6 mov ecx, dword ptr [0x1060ede8] */
  ECX = (r32((uint32_t)(0x1060ede8)));
  /* 105f36fc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105f36fe mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 105f3702 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 105f3705 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_105f3708:;
  /* 105f3708 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f370c je 0x105f3749 */
  if (C.zf) goto L_105f3749;
  /* 105f370e push 0 */
  push32((uint32_t)(0x0u));
  /* 105f3710 push 0xa */
  push32((uint32_t)(0xau));
  /* 105f3712 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f3715 push eax */
  push32((uint32_t)(EAX));
  /* 105f3716 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f3719 push ecx */
  push32((uint32_t)(ECX));
  /* 105f371a call 0x105f45e0 */
  push32(0x105f371fu); f_105f45e0();
  /* 105f371f mov ecx, eax */
  ECX = (EAX);
  /* 105f3721 mov esi, edx */
  ESI = (EDX);
  /* 105f3723 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f3726 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f3729 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 105f372a add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f372c adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 105f372e mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105f3731 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 105f3734 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f3737 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f3739 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105f373b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105f373e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f3741 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f3744 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 105f3747 jmp 0x105f36d7 */
  goto L_105f36d7;
L_105f3749:;
  /* 105f3749 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f374d jne 0x105f375e */
  if (!C.zf) goto L_105f375e;
  /* 105f374f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f3752 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 105f3754 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f3757 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f375a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 105f375c jmp 0x105f3764 */
  goto L_105f3764;
L_105f375e:;
  /* 105f375e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f3761 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_105f3764:;
  /* 105f3764 pop esi */
  ESI = (pop32());
  /* 105f3765 mov esp, ebp */
  ESP = (EBP);
  /* 105f3767 pop ebp */
  EBP = (pop32());
  /* 105f3768 ret  */
  ESPCHK(0x105f3640u, _esp0);
  ESP += 4; return;
}

/* FUN_10013770 @ 0x105f3770 (61 bytes, 18 insns) */
void f_105f3770(void) {
  FTRACE(0x105f3770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f3770 push ebp */
  push32((uint32_t)(EBP));
  /* 105f3771 mov ebp, esp */
  EBP = (ESP);
  /* 105f3773 cmp dword ptr [0x10610b10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610b10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f377a jne 0x105f37ab */
  if (!C.zf) goto L_105f37ab;
  /* 105f377c push 0xb */
  push32((uint32_t)(0xbu));
  /* 105f377e call 0x105ea240 */
  push32(0x105f3783u); f_105ea240();
  /* 105f3783 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f3786 cmp dword ptr [0x10610b10], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610b10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f378d jne 0x105f37a1 */
  if (!C.zf) goto L_105f37a1;
  /* 105f378f call 0x105f37d0 */
  push32(0x105f3794u); f_105f37d0();
  /* 105f3794 mov eax, dword ptr [0x10610b10] */
  EAX = (r32((uint32_t)(0x10610b10)));
  /* 105f3799 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f379c mov dword ptr [0x10610b10], eax */
  w32((uint32_t)(0x10610b10), (EAX));
L_105f37a1:;
  /* 105f37a1 push 0xb */
  push32((uint32_t)(0xbu));
  /* 105f37a3 call 0x105ea2e0 */
  push32(0x105f37a8u); f_105ea2e0();
  /* 105f37a8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105f37ab:;
  /* 105f37ab pop ebp */
  EBP = (pop32());
  /* 105f37ac ret  */
  ESPCHK(0x105f3770u, _esp0);
  ESP += 4; return;
}

/* FUN_100137b0 @ 0x105f37b0 (30 bytes, 11 insns) */
void f_105f37b0(void) {
  FTRACE(0x105f37b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f37b0 push ebp */
  push32((uint32_t)(EBP));
  /* 105f37b1 mov ebp, esp */
  EBP = (ESP);
  /* 105f37b3 push 0xb */
  push32((uint32_t)(0xbu));
  /* 105f37b5 call 0x105ea240 */
  push32(0x105f37bau); f_105ea240();
  /* 105f37ba add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f37bd call 0x105f37d0 */
  push32(0x105f37c2u); f_105f37d0();
  /* 105f37c2 push 0xb */
  push32((uint32_t)(0xbu));
  /* 105f37c4 call 0x105ea2e0 */
  push32(0x105f37c9u); f_105ea2e0();
  /* 105f37c9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f37cc pop ebp */
  EBP = (pop32());
  /* 105f37cd ret  */
  ESPCHK(0x105f37b0u, _esp0);
  ESP += 4; return;
}

/* FUN_100137d0 @ 0x105f37d0 (939 bytes, 266 insns) */
void f_105f37d0(void) {
  FTRACE(0x105f37d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f37d0 push ebp */
  push32((uint32_t)(EBP));
  /* 105f37d1 mov ebp, esp */
  EBP = (ESP);
  /* 105f37d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f37d6 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105f37dd push 0xc */
  push32((uint32_t)(0xcu));
  /* 105f37df call 0x105ea240 */
  push32(0x105f37e4u); f_105ea240();
  /* 105f37e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f37e7 mov dword ptr [0x10610a58], 0 */
  w32((uint32_t)(0x10610a58), (0x0u));
  /* 105f37f1 mov dword ptr [0x1060fe48], 0xffffffff */
  w32((uint32_t)(0x1060fe48), (0xffffffffu));
  /* 105f37fb mov eax, dword ptr [0x1060fe48] */
  EAX = (r32((uint32_t)(0x1060fe48)));
  /* 105f3800 mov dword ptr [0x1060fe38], eax */
  w32((uint32_t)(0x1060fe38), (EAX));
  /* 105f3805 push 0x1060d088 */
  push32((uint32_t)(0x1060d088u));
  /* 105f380a call 0x105f4650 */
  push32(0x105f380fu); f_105f4650();
  /* 105f380f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f3812 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105f3815 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f3819 jne 0x105f3953 */
  if (!C.zf) goto L_105f3953;
  /* 105f381f push 0xc */
  push32((uint32_t)(0xcu));
  /* 105f3821 call 0x105ea2e0 */
  push32(0x105f3826u); f_105ea2e0();
  /* 105f3826 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f3829 push 0x10610a60 */
  push32((uint32_t)(0x10610a60u));
  /* 105f382e call dword ptr [0x106132f8] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132f8))), 0x105f3834u);
  /* 105f3834 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f3837 je 0x105f394e */
  if (C.zf) goto L_105f394e;
  /* 105f383d mov dword ptr [0x10610a58], 1 */
  w32((uint32_t)(0x10610a58), (0x1u));
  /* 105f3847 mov ecx, dword ptr [0x10610a60] */
  ECX = (r32((uint32_t)(0x10610a60)));
  /* 105f384d imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105f3850 mov dword ptr [0x1060fda0], ecx */
  w32((uint32_t)(0x1060fda0), (ECX));
  /* 105f3856 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105f3858 mov dx, word ptr [0x10610aa6] */
  DX = (r16((uint32_t)(0x10610aa6)));
  /* 105f385f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105f3861 je 0x105f3879 */
  if (C.zf) goto L_105f3879;
  /* 105f3863 mov eax, dword ptr [0x10610ab4] */
  EAX = (r32((uint32_t)(0x10610ab4)));
  /* 105f3868 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105f386b mov ecx, dword ptr [0x1060fda0] */
  ECX = (r32((uint32_t)(0x1060fda0)));
  /* 105f3871 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f3873 mov dword ptr [0x1060fda0], ecx */
  w32((uint32_t)(0x1060fda0), (ECX));
L_105f3879:;
  /* 105f3879 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105f387b mov dx, word ptr [0x10610afa] */
  DX = (r16((uint32_t)(0x10610afa)));
  /* 105f3882 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105f3884 je 0x105f38ae */
  if (C.zf) goto L_105f38ae;
  /* 105f3886 cmp dword ptr [0x10610b08], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610b08))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f388d je 0x105f38ae */
  if (C.zf) goto L_105f38ae;
  /* 105f388f mov dword ptr [0x1060fda4], 1 */
  w32((uint32_t)(0x1060fda4), (0x1u));
  /* 105f3899 mov eax, dword ptr [0x10610b08] */
  EAX = (r32((uint32_t)(0x10610b08)));
  /* 105f389e sub eax, dword ptr [0x10610ab4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10610ab4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f38a4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105f38a7 mov dword ptr [0x1060fda8], eax */
  w32((uint32_t)(0x1060fda8), (EAX));
  /* 105f38ac jmp 0x105f38c2 */
  goto L_105f38c2;
L_105f38ae:;
  /* 105f38ae mov dword ptr [0x1060fda4], 0 */
  w32((uint32_t)(0x1060fda4), (0x0u));
  /* 105f38b8 mov dword ptr [0x1060fda8], 0 */
  w32((uint32_t)(0x1060fda8), (0x0u));
L_105f38c2:;
  /* 105f38c2 lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 105f38c5 push ecx */
  push32((uint32_t)(ECX));
  /* 105f38c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f38c8 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 105f38ca mov edx, dword ptr [0x1060fe2c] */
  EDX = (r32((uint32_t)(0x1060fe2c)));
  /* 105f38d0 push edx */
  push32((uint32_t)(EDX));
  /* 105f38d1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 105f38d3 push 0x10610a64 */
  push32((uint32_t)(0x10610a64u));
  /* 105f38d8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 105f38dd mov eax, dword ptr [0x106109d0] */
  EAX = (r32((uint32_t)(0x106109d0)));
  /* 105f38e2 push eax */
  push32((uint32_t)(EAX));
  /* 105f38e3 call dword ptr [0x1061327c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1061327c))), 0x105f38e9u);
  /* 105f38e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f38eb je 0x105f38ff */
  if (C.zf) goto L_105f38ff;
  /* 105f38ed cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f38f1 jne 0x105f38ff */
  if (!C.zf) goto L_105f38ff;
  /* 105f38f3 mov ecx, dword ptr [0x1060fe2c] */
  ECX = (r32((uint32_t)(0x1060fe2c)));
  /* 105f38f9 mov byte ptr [ecx + 0x3f], 0 */
  w8((uint32_t)(ECX + 0x3f), (0x0u));
  /* 105f38fd jmp 0x105f3908 */
  goto L_105f3908;
L_105f38ff:;
  /* 105f38ff mov edx, dword ptr [0x1060fe2c] */
  EDX = (r32((uint32_t)(0x1060fe2c)));
  /* 105f3905 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_105f3908:;
  /* 105f3908 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 105f390b push eax */
  push32((uint32_t)(EAX));
  /* 105f390c push 0 */
  push32((uint32_t)(0x0u));
  /* 105f390e push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 105f3910 mov ecx, dword ptr [0x1060fe30] */
  ECX = (r32((uint32_t)(0x1060fe30)));
  /* 105f3916 push ecx */
  push32((uint32_t)(ECX));
  /* 105f3917 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 105f3919 push 0x10610ab8 */
  push32((uint32_t)(0x10610ab8u));
  /* 105f391e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 105f3923 mov edx, dword ptr [0x106109d0] */
  EDX = (r32((uint32_t)(0x106109d0)));
  /* 105f3929 push edx */
  push32((uint32_t)(EDX));
  /* 105f392a call dword ptr [0x1061327c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1061327c))), 0x105f3930u);
  /* 105f3930 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f3932 je 0x105f3945 */
  if (C.zf) goto L_105f3945;
  /* 105f3934 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f3938 jne 0x105f3945 */
  if (!C.zf) goto L_105f3945;
  /* 105f393a mov eax, dword ptr [0x1060fe30] */
  EAX = (r32((uint32_t)(0x1060fe30)));
  /* 105f393f mov byte ptr [eax + 0x3f], 0 */
  w8((uint32_t)(EAX + 0x3f), (0x0u));
  /* 105f3943 jmp 0x105f394e */
  goto L_105f394e;
L_105f3945:;
  /* 105f3945 mov ecx, dword ptr [0x1060fe30] */
  ECX = (r32((uint32_t)(0x1060fe30)));
  /* 105f394b mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
L_105f394e:;
  /* 105f394e jmp 0x105f3b77 */
  goto L_105f3b77;
L_105f3953:;
  /* 105f3953 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f3956 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105f3959 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f395b je 0x105f397d */
  if (C.zf) goto L_105f397d;
  /* 105f395d cmp dword ptr [0x10610b0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610b0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f3964 je 0x105f398c */
  if (C.zf) goto L_105f398c;
  /* 105f3966 mov ecx, dword ptr [0x10610b0c] */
  ECX = (r32((uint32_t)(0x10610b0c)));
  /* 105f396c push ecx */
  push32((uint32_t)(ECX));
  /* 105f396d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f3970 push edx */
  push32((uint32_t)(EDX));
  /* 105f3971 call 0x105f0730 */
  push32(0x105f3976u); f_105f0730();
  /* 105f3976 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f3979 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f397b jne 0x105f398c */
  if (!C.zf) goto L_105f398c;
L_105f397d:;
  /* 105f397d push 0xc */
  push32((uint32_t)(0xcu));
  /* 105f397f call 0x105ea2e0 */
  push32(0x105f3984u); f_105ea2e0();
  /* 105f3984 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f3987 jmp 0x105f3b77 */
  goto L_105f3b77;
L_105f398c:;
  /* 105f398c push 2 */
  push32((uint32_t)(0x2u));
  /* 105f398e mov eax, dword ptr [0x10610b0c] */
  EAX = (r32((uint32_t)(0x10610b0c)));
  /* 105f3993 push eax */
  push32((uint32_t)(EAX));
  /* 105f3994 call 0x105e6920 */
  push32(0x105f3999u); f_105e6920();
  /* 105f3999 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f399c push 0x10c */
  push32((uint32_t)(0x10cu));
  /* 105f39a1 push 0x1060d080 */
  push32((uint32_t)(0x1060d080u));
  /* 105f39a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 105f39a8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f39ab push ecx */
  push32((uint32_t)(ECX));
  /* 105f39ac call 0x105e8cc0 */
  push32(0x105f39b1u); f_105e8cc0();
  /* 105f39b1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f39b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f39b7 push eax */
  push32((uint32_t)(EAX));
  /* 105f39b8 call 0x105e5e90 */
  push32(0x105f39bdu); f_105e5e90();
  /* 105f39bd add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f39c0 mov dword ptr [0x10610b0c], eax */
  w32((uint32_t)(0x10610b0c), (EAX));
  /* 105f39c5 cmp dword ptr [0x10610b0c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610b0c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f39cc jne 0x105f39dd */
  if (!C.zf) goto L_105f39dd;
  /* 105f39ce push 0xc */
  push32((uint32_t)(0xcu));
  /* 105f39d0 call 0x105ea2e0 */
  push32(0x105f39d5u); f_105ea2e0();
  /* 105f39d5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f39d8 jmp 0x105f3b77 */
  goto L_105f3b77;
L_105f39dd:;
  /* 105f39dd mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f39e0 push edx */
  push32((uint32_t)(EDX));
  /* 105f39e1 mov eax, dword ptr [0x10610b0c] */
  EAX = (r32((uint32_t)(0x10610b0c)));
  /* 105f39e6 push eax */
  push32((uint32_t)(EAX));
  /* 105f39e7 call 0x105e8e40 */
  push32(0x105f39ecu); f_105e8e40();
  /* 105f39ec add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f39ef push 0xc */
  push32((uint32_t)(0xcu));
  /* 105f39f1 call 0x105ea2e0 */
  push32(0x105f39f6u); f_105ea2e0();
  /* 105f39f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f39f9 push 3 */
  push32((uint32_t)(0x3u));
  /* 105f39fb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f39fe push ecx */
  push32((uint32_t)(ECX));
  /* 105f39ff mov edx, dword ptr [0x1060fe2c] */
  EDX = (r32((uint32_t)(0x1060fe2c)));
  /* 105f3a05 push edx */
  push32((uint32_t)(EDX));
  /* 105f3a06 call 0x105e96b0 */
  push32(0x105f3a0bu); f_105e96b0();
  /* 105f3a0b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f3a0e mov eax, dword ptr [0x1060fe2c] */
  EAX = (r32((uint32_t)(0x1060fe2c)));
  /* 105f3a13 mov byte ptr [eax + 3], 0 */
  w8((uint32_t)(EAX + 0x3), (0x0u));
  /* 105f3a17 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f3a1a add ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f3a1d mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105f3a20 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f3a23 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105f3a26 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f3a29 jne 0x105f3a3d */
  if (!C.zf) goto L_105f3a3d;
  /* 105f3a2b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f3a2e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f3a31 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105f3a34 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f3a37 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f3a3a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_105f3a3d:;
  /* 105f3a3d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f3a40 push eax */
  push32((uint32_t)(EAX));
  /* 105f3a41 call 0x105f3520 */
  push32(0x105f3a46u); f_105f3520();
  /* 105f3a46 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f3a49 imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105f3a4f mov dword ptr [0x1060fda0], eax */
  w32((uint32_t)(0x1060fda0), (EAX));
L_105f3a54:;
  /* 105f3a54 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f3a57 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 105f3a5a cmp edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f3a5d je 0x105f3a75 */
  if (C.zf) goto L_105f3a75;
  /* 105f3a5f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f3a62 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105f3a65 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f3a68 jl 0x105f3a80 */
  if ((C.sf!=C.of)) goto L_105f3a80;
  /* 105f3a6a mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f3a6d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105f3a70 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f3a73 jg 0x105f3a80 */
  if ((!C.zf&&C.sf==C.of)) goto L_105f3a80;
L_105f3a75:;
  /* 105f3a75 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f3a78 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f3a7b mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105f3a7e jmp 0x105f3a54 */
  goto L_105f3a54;
L_105f3a80:;
  /* 105f3a80 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f3a83 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105f3a86 cmp eax, 0x3a */
  { uint32_t _a=(EAX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f3a89 jne 0x105f3b25 */
  if (!C.zf) goto L_105f3b25;
  /* 105f3a8f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f3a92 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f3a95 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105f3a98 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f3a9b push edx */
  push32((uint32_t)(EDX));
  /* 105f3a9c call 0x105f3520 */
  push32(0x105f3aa1u); f_105f3520();
  /* 105f3aa1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f3aa4 imul eax, eax, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3cu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105f3aa7 mov ecx, dword ptr [0x1060fda0] */
  ECX = (r32((uint32_t)(0x1060fda0)));
  /* 105f3aad add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f3aaf mov dword ptr [0x1060fda0], ecx */
  w32((uint32_t)(0x1060fda0), (ECX));
L_105f3ab5:;
  /* 105f3ab5 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f3ab8 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105f3abb cmp eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f3abe jl 0x105f3ad6 */
  if ((C.sf!=C.of)) goto L_105f3ad6;
  /* 105f3ac0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f3ac3 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 105f3ac6 cmp edx, 0x39 */
  { uint32_t _a=(EDX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f3ac9 jg 0x105f3ad6 */
  if ((!C.zf&&C.sf==C.of)) goto L_105f3ad6;
  /* 105f3acb mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f3ace add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f3ad1 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105f3ad4 jmp 0x105f3ab5 */
  goto L_105f3ab5;
L_105f3ad6:;
  /* 105f3ad6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f3ad9 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 105f3adc cmp edx, 0x3a */
  { uint32_t _a=(EDX),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f3adf jne 0x105f3b25 */
  if (!C.zf) goto L_105f3b25;
  /* 105f3ae1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f3ae4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f3ae7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105f3aea mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f3aed push ecx */
  push32((uint32_t)(ECX));
  /* 105f3aee call 0x105f3520 */
  push32(0x105f3af3u); f_105f3520();
  /* 105f3af3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f3af6 mov edx, dword ptr [0x1060fda0] */
  EDX = (r32((uint32_t)(0x1060fda0)));
  /* 105f3afc add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f3afe mov dword ptr [0x1060fda0], edx */
  w32((uint32_t)(0x1060fda0), (EDX));
L_105f3b04:;
  /* 105f3b04 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f3b07 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105f3b0a cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f3b0d jl 0x105f3b25 */
  if ((C.sf!=C.of)) goto L_105f3b25;
  /* 105f3b0f mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f3b12 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 105f3b15 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f3b18 jg 0x105f3b25 */
  if ((!C.zf&&C.sf==C.of)) goto L_105f3b25;
  /* 105f3b1a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f3b1d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f3b20 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105f3b23 jmp 0x105f3b04 */
  goto L_105f3b04;
L_105f3b25:;
  /* 105f3b25 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f3b29 je 0x105f3b39 */
  if (C.zf) goto L_105f3b39;
  /* 105f3b2b mov edx, dword ptr [0x1060fda0] */
  EDX = (r32((uint32_t)(0x1060fda0)));
  /* 105f3b31 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 105f3b33 mov dword ptr [0x1060fda0], edx */
  w32((uint32_t)(0x1060fda0), (EDX));
L_105f3b39:;
  /* 105f3b39 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f3b3c movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 105f3b3f mov dword ptr [0x1060fda4], ecx */
  w32((uint32_t)(0x1060fda4), (ECX));
  /* 105f3b45 cmp dword ptr [0x1060fda4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1060fda4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f3b4c je 0x105f3b6e */
  if (C.zf) goto L_105f3b6e;
  /* 105f3b4e push 3 */
  push32((uint32_t)(0x3u));
  /* 105f3b50 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f3b53 push edx */
  push32((uint32_t)(EDX));
  /* 105f3b54 mov eax, dword ptr [0x1060fe30] */
  EAX = (r32((uint32_t)(0x1060fe30)));
  /* 105f3b59 push eax */
  push32((uint32_t)(EAX));
  /* 105f3b5a call 0x105e96b0 */
  push32(0x105f3b5fu); f_105e96b0();
  /* 105f3b5f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f3b62 mov ecx, dword ptr [0x1060fe30] */
  ECX = (r32((uint32_t)(0x1060fe30)));
  /* 105f3b68 mov byte ptr [ecx + 3], 0 */
  w8((uint32_t)(ECX + 0x3), (0x0u));
  /* 105f3b6c jmp 0x105f3b77 */
  goto L_105f3b77;
L_105f3b6e:;
  /* 105f3b6e mov edx, dword ptr [0x1060fe30] */
  EDX = (r32((uint32_t)(0x1060fe30)));
  /* 105f3b74 mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
L_105f3b77:;
  /* 105f3b77 mov esp, ebp */
  ESP = (EBP);
  /* 105f3b79 pop ebp */
  EBP = (pop32());
  /* 105f3b7a ret  */
  ESPCHK(0x105f37d0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b80 @ 0x105f3b80 (46 bytes, 18 insns) */
void f_105f3b80(void) {
  FTRACE(0x105f3b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f3b80 push ebp */
  push32((uint32_t)(EBP));
  /* 105f3b81 mov ebp, esp */
  EBP = (ESP);
  /* 105f3b83 push ecx */
  push32((uint32_t)(ECX));
  /* 105f3b84 push 0xb */
  push32((uint32_t)(0xbu));
  /* 105f3b86 call 0x105ea240 */
  push32(0x105f3b8bu); f_105ea240();
  /* 105f3b8b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f3b8e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f3b91 push eax */
  push32((uint32_t)(EAX));
  /* 105f3b92 call 0x105f3bb0 */
  push32(0x105f3b97u); f_105f3bb0();
  /* 105f3b97 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f3b9a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105f3b9d push 0xb */
  push32((uint32_t)(0xbu));
  /* 105f3b9f call 0x105ea2e0 */
  push32(0x105f3ba4u); f_105ea2e0();
  /* 105f3ba4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f3ba7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f3baa mov esp, ebp */
  ESP = (EBP);
  /* 105f3bac pop ebp */
  EBP = (pop32());
  /* 105f3bad ret  */
  ESPCHK(0x105f3b80u, _esp0);
  ESP += 4; return;
}

/* FUN_10013bb0 @ 0x105f3bb0 (762 bytes, 246 insns) */
void f_105f3bb0(void) {
  FTRACE(0x105f3bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f3bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 105f3bb1 mov ebp, esp */
  EBP = (ESP);
  /* 105f3bb3 push ecx */
  push32((uint32_t)(ECX));
  /* 105f3bb4 cmp dword ptr [0x1060fda4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1060fda4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f3bbb jne 0x105f3bc4 */
  if (!C.zf) goto L_105f3bc4;
  /* 105f3bbd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f3bbf jmp 0x105f3ea6 */
  goto L_105f3ea6;
L_105f3bc4:;
  /* 105f3bc4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f3bc7 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 105f3bca cmp ecx, dword ptr [0x1060fe38] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1060fe38))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f3bd0 jne 0x105f3be4 */
  if (!C.zf) goto L_105f3be4;
  /* 105f3bd2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f3bd5 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 105f3bd8 cmp eax, dword ptr [0x1060fe48] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1060fe48))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f3bde je 0x105f3dab */
  if (C.zf) goto L_105f3dab;
L_105f3be4:;
  /* 105f3be4 cmp dword ptr [0x10610a58], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610a58))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f3beb je 0x105f3d65 */
  if (C.zf) goto L_105f3d65;
  /* 105f3bf1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105f3bf3 mov cx, word ptr [0x10610af8] */
  CX = (r16((uint32_t)(0x10610af8)));
  /* 105f3bfa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105f3bfc jne 0x105f3c59 */
  if (!C.zf) goto L_105f3c59;
  /* 105f3bfe xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105f3c00 mov dx, word ptr [0x10610b06] */
  DX = (r16((uint32_t)(0x10610b06)));
  /* 105f3c07 push edx */
  push32((uint32_t)(EDX));
  /* 105f3c08 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f3c0a mov ax, word ptr [0x10610b04] */
  AX = (r16((uint32_t)(0x10610b04)));
  /* 105f3c10 push eax */
  push32((uint32_t)(EAX));
  /* 105f3c11 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105f3c13 mov cx, word ptr [0x10610b02] */
  CX = (r16((uint32_t)(0x10610b02)));
  /* 105f3c1a push ecx */
  push32((uint32_t)(ECX));
  /* 105f3c1b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105f3c1d mov dx, word ptr [0x10610b00] */
  DX = (r16((uint32_t)(0x10610b00)));
  /* 105f3c24 push edx */
  push32((uint32_t)(EDX));
  /* 105f3c25 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f3c27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f3c29 mov ax, word ptr [0x10610afc] */
  AX = (r16((uint32_t)(0x10610afc)));
  /* 105f3c2f push eax */
  push32((uint32_t)(EAX));
  /* 105f3c30 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105f3c32 mov cx, word ptr [0x10610afe] */
  CX = (r16((uint32_t)(0x10610afe)));
  /* 105f3c39 push ecx */
  push32((uint32_t)(ECX));
  /* 105f3c3a xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105f3c3c mov dx, word ptr [0x10610afa] */
  DX = (r16((uint32_t)(0x10610afa)));
  /* 105f3c43 push edx */
  push32((uint32_t)(EDX));
  /* 105f3c44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f3c47 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 105f3c4a push ecx */
  push32((uint32_t)(ECX));
  /* 105f3c4b push 1 */
  push32((uint32_t)(0x1u));
  /* 105f3c4d push 1 */
  push32((uint32_t)(0x1u));
  /* 105f3c4f call 0x105f3eb0 */
  push32(0x105f3c54u); f_105f3eb0();
  /* 105f3c54 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f3c57 jmp 0x105f3caa */
  goto L_105f3caa;
L_105f3c59:;
  /* 105f3c59 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105f3c5b mov dx, word ptr [0x10610b06] */
  DX = (r16((uint32_t)(0x10610b06)));
  /* 105f3c62 push edx */
  push32((uint32_t)(EDX));
  /* 105f3c63 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f3c65 mov ax, word ptr [0x10610b04] */
  AX = (r16((uint32_t)(0x10610b04)));
  /* 105f3c6b push eax */
  push32((uint32_t)(EAX));
  /* 105f3c6c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105f3c6e mov cx, word ptr [0x10610b02] */
  CX = (r16((uint32_t)(0x10610b02)));
  /* 105f3c75 push ecx */
  push32((uint32_t)(ECX));
  /* 105f3c76 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105f3c78 mov dx, word ptr [0x10610b00] */
  DX = (r16((uint32_t)(0x10610b00)));
  /* 105f3c7f push edx */
  push32((uint32_t)(EDX));
  /* 105f3c80 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f3c82 mov ax, word ptr [0x10610afe] */
  AX = (r16((uint32_t)(0x10610afe)));
  /* 105f3c88 push eax */
  push32((uint32_t)(EAX));
  /* 105f3c89 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f3c8b push 0 */
  push32((uint32_t)(0x0u));
  /* 105f3c8d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105f3c8f mov cx, word ptr [0x10610afa] */
  CX = (r16((uint32_t)(0x10610afa)));
  /* 105f3c96 push ecx */
  push32((uint32_t)(ECX));
  /* 105f3c97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f3c9a mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 105f3c9d push eax */
  push32((uint32_t)(EAX));
  /* 105f3c9e push 0 */
  push32((uint32_t)(0x0u));
  /* 105f3ca0 push 1 */
  push32((uint32_t)(0x1u));
  /* 105f3ca2 call 0x105f3eb0 */
  push32(0x105f3ca7u); f_105f3eb0();
  /* 105f3ca7 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105f3caa:;
  /* 105f3caa xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105f3cac mov cx, word ptr [0x10610aa4] */
  CX = (r16((uint32_t)(0x10610aa4)));
  /* 105f3cb3 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105f3cb5 jne 0x105f3d12 */
  if (!C.zf) goto L_105f3d12;
  /* 105f3cb7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105f3cb9 mov dx, word ptr [0x10610ab2] */
  DX = (r16((uint32_t)(0x10610ab2)));
  /* 105f3cc0 push edx */
  push32((uint32_t)(EDX));
  /* 105f3cc1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f3cc3 mov ax, word ptr [0x10610ab0] */
  AX = (r16((uint32_t)(0x10610ab0)));
  /* 105f3cc9 push eax */
  push32((uint32_t)(EAX));
  /* 105f3cca xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105f3ccc mov cx, word ptr [0x10610aae] */
  CX = (r16((uint32_t)(0x10610aae)));
  /* 105f3cd3 push ecx */
  push32((uint32_t)(ECX));
  /* 105f3cd4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105f3cd6 mov dx, word ptr [0x10610aac] */
  DX = (r16((uint32_t)(0x10610aac)));
  /* 105f3cdd push edx */
  push32((uint32_t)(EDX));
  /* 105f3cde push 0 */
  push32((uint32_t)(0x0u));
  /* 105f3ce0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f3ce2 mov ax, word ptr [0x10610aa8] */
  AX = (r16((uint32_t)(0x10610aa8)));
  /* 105f3ce8 push eax */
  push32((uint32_t)(EAX));
  /* 105f3ce9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105f3ceb mov cx, word ptr [0x10610aaa] */
  CX = (r16((uint32_t)(0x10610aaa)));
  /* 105f3cf2 push ecx */
  push32((uint32_t)(ECX));
  /* 105f3cf3 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105f3cf5 mov dx, word ptr [0x10610aa6] */
  DX = (r16((uint32_t)(0x10610aa6)));
  /* 105f3cfc push edx */
  push32((uint32_t)(EDX));
  /* 105f3cfd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f3d00 mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 105f3d03 push ecx */
  push32((uint32_t)(ECX));
  /* 105f3d04 push 1 */
  push32((uint32_t)(0x1u));
  /* 105f3d06 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f3d08 call 0x105f3eb0 */
  push32(0x105f3d0du); f_105f3eb0();
  /* 105f3d0d add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f3d10 jmp 0x105f3d63 */
  goto L_105f3d63;
L_105f3d12:;
  /* 105f3d12 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105f3d14 mov dx, word ptr [0x10610ab2] */
  DX = (r16((uint32_t)(0x10610ab2)));
  /* 105f3d1b push edx */
  push32((uint32_t)(EDX));
  /* 105f3d1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f3d1e mov ax, word ptr [0x10610ab0] */
  AX = (r16((uint32_t)(0x10610ab0)));
  /* 105f3d24 push eax */
  push32((uint32_t)(EAX));
  /* 105f3d25 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105f3d27 mov cx, word ptr [0x10610aae] */
  CX = (r16((uint32_t)(0x10610aae)));
  /* 105f3d2e push ecx */
  push32((uint32_t)(ECX));
  /* 105f3d2f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105f3d31 mov dx, word ptr [0x10610aac] */
  DX = (r16((uint32_t)(0x10610aac)));
  /* 105f3d38 push edx */
  push32((uint32_t)(EDX));
  /* 105f3d39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f3d3b mov ax, word ptr [0x10610aaa] */
  AX = (r16((uint32_t)(0x10610aaa)));
  /* 105f3d41 push eax */
  push32((uint32_t)(EAX));
  /* 105f3d42 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f3d44 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f3d46 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105f3d48 mov cx, word ptr [0x10610aa6] */
  CX = (r16((uint32_t)(0x10610aa6)));
  /* 105f3d4f push ecx */
  push32((uint32_t)(ECX));
  /* 105f3d50 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f3d53 mov eax, dword ptr [edx + 0x14] */
  EAX = (r32((uint32_t)(EDX + 0x14)));
  /* 105f3d56 push eax */
  push32((uint32_t)(EAX));
  /* 105f3d57 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f3d59 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f3d5b call 0x105f3eb0 */
  push32(0x105f3d60u); f_105f3eb0();
  /* 105f3d60 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105f3d63:;
  /* 105f3d63 jmp 0x105f3dab */
  goto L_105f3dab;
L_105f3d65:;
  /* 105f3d65 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f3d67 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f3d69 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f3d6b push 2 */
  push32((uint32_t)(0x2u));
  /* 105f3d6d push 0 */
  push32((uint32_t)(0x0u));
  /* 105f3d6f push 0 */
  push32((uint32_t)(0x0u));
  /* 105f3d71 push 1 */
  push32((uint32_t)(0x1u));
  /* 105f3d73 push 4 */
  push32((uint32_t)(0x4u));
  /* 105f3d75 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f3d78 mov edx, dword ptr [ecx + 0x14] */
  EDX = (r32((uint32_t)(ECX + 0x14)));
  /* 105f3d7b push edx */
  push32((uint32_t)(EDX));
  /* 105f3d7c push 1 */
  push32((uint32_t)(0x1u));
  /* 105f3d7e push 1 */
  push32((uint32_t)(0x1u));
  /* 105f3d80 call 0x105f3eb0 */
  push32(0x105f3d85u); f_105f3eb0();
  /* 105f3d85 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f3d88 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f3d8a push 0 */
  push32((uint32_t)(0x0u));
  /* 105f3d8c push 0 */
  push32((uint32_t)(0x0u));
  /* 105f3d8e push 2 */
  push32((uint32_t)(0x2u));
  /* 105f3d90 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f3d92 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f3d94 push 5 */
  push32((uint32_t)(0x5u));
  /* 105f3d96 push 0xa */
  push32((uint32_t)(0xau));
  /* 105f3d98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f3d9b mov ecx, dword ptr [eax + 0x14] */
  ECX = (r32((uint32_t)(EAX + 0x14)));
  /* 105f3d9e push ecx */
  push32((uint32_t)(ECX));
  /* 105f3d9f push 1 */
  push32((uint32_t)(0x1u));
  /* 105f3da1 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f3da3 call 0x105f3eb0 */
  push32(0x105f3da8u); f_105f3eb0();
  /* 105f3da8 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105f3dab:;
  /* 105f3dab mov edx, dword ptr [0x1060fe3c] */
  EDX = (r32((uint32_t)(0x1060fe3c)));
  /* 105f3db1 cmp edx, dword ptr [0x1060fe4c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1060fe4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f3db7 jge 0x105f3e04 */
  if ((C.sf==C.of)) goto L_105f3e04;
  /* 105f3db9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f3dbc mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 105f3dbf cmp ecx, dword ptr [0x1060fe3c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1060fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f3dc5 jl 0x105f3dd5 */
  if ((C.sf!=C.of)) goto L_105f3dd5;
  /* 105f3dc7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f3dca mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 105f3dcd cmp eax, dword ptr [0x1060fe4c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1060fe4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f3dd3 jle 0x105f3ddc */
  if ((C.zf||C.sf!=C.of)) goto L_105f3ddc;
L_105f3dd5:;
  /* 105f3dd5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f3dd7 jmp 0x105f3ea6 */
  goto L_105f3ea6;
L_105f3ddc:;
  /* 105f3ddc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f3ddf mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 105f3de2 cmp edx, dword ptr [0x1060fe3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1060fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f3de8 jle 0x105f3e02 */
  if ((C.zf||C.sf!=C.of)) goto L_105f3e02;
  /* 105f3dea mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f3ded mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 105f3df0 cmp ecx, dword ptr [0x1060fe4c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1060fe4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f3df6 jge 0x105f3e02 */
  if ((C.sf==C.of)) goto L_105f3e02;
  /* 105f3df8 mov eax, 1 */
  EAX = (0x1u);
  /* 105f3dfd jmp 0x105f3ea6 */
  goto L_105f3ea6;
L_105f3e02:;
  /* 105f3e02 jmp 0x105f3e47 */
  goto L_105f3e47;
L_105f3e04:;
  /* 105f3e04 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f3e07 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 105f3e0a cmp eax, dword ptr [0x1060fe4c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1060fe4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f3e10 jl 0x105f3e20 */
  if ((C.sf!=C.of)) goto L_105f3e20;
  /* 105f3e12 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f3e15 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 105f3e18 cmp edx, dword ptr [0x1060fe3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1060fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f3e1e jle 0x105f3e27 */
  if ((C.zf||C.sf!=C.of)) goto L_105f3e27;
L_105f3e20:;
  /* 105f3e20 mov eax, 1 */
  EAX = (0x1u);
  /* 105f3e25 jmp 0x105f3ea6 */
  goto L_105f3ea6;
L_105f3e27:;
  /* 105f3e27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f3e2a mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 105f3e2d cmp ecx, dword ptr [0x1060fe4c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1060fe4c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f3e33 jle 0x105f3e47 */
  if ((C.zf||C.sf!=C.of)) goto L_105f3e47;
  /* 105f3e35 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f3e38 mov eax, dword ptr [edx + 0x1c] */
  EAX = (r32((uint32_t)(EDX + 0x1c)));
  /* 105f3e3b cmp eax, dword ptr [0x1060fe3c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1060fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f3e41 jge 0x105f3e47 */
  if ((C.sf==C.of)) goto L_105f3e47;
  /* 105f3e43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f3e45 jmp 0x105f3ea6 */
  goto L_105f3ea6;
L_105f3e47:;
  /* 105f3e47 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f3e4a mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 105f3e4d imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105f3e50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f3e53 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105f3e55 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f3e57 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f3e5a mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 105f3e5d imul eax, eax, 0xe10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xe10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105f3e63 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f3e65 imul ecx, ecx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3e8u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105f3e6b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105f3e6e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f3e71 mov edx, dword ptr [ecx + 0x1c] */
  EDX = (r32((uint32_t)(ECX + 0x1c)));
  /* 105f3e74 cmp edx, dword ptr [0x1060fe3c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x1060fe3c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f3e7a jne 0x105f3e92 */
  if (!C.zf) goto L_105f3e92;
  /* 105f3e7c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f3e7f cmp eax, dword ptr [0x1060fe40] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x1060fe40))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f3e85 jl 0x105f3e8e */
  if ((C.sf!=C.of)) goto L_105f3e8e;
  /* 105f3e87 mov eax, 1 */
  EAX = (0x1u);
  /* 105f3e8c jmp 0x105f3ea6 */
  goto L_105f3ea6;
L_105f3e8e:;
  /* 105f3e8e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f3e90 jmp 0x105f3ea6 */
  goto L_105f3ea6;
L_105f3e92:;
  /* 105f3e92 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f3e95 cmp ecx, dword ptr [0x1060fe50] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x1060fe50))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f3e9b jge 0x105f3ea4 */
  if ((C.sf==C.of)) goto L_105f3ea4;
  /* 105f3e9d mov eax, 1 */
  EAX = (0x1u);
  /* 105f3ea2 jmp 0x105f3ea6 */
  goto L_105f3ea6;
L_105f3ea4:;
  /* 105f3ea4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105f3ea6:;
  /* 105f3ea6 mov esp, ebp */
  ESP = (EBP);
  /* 105f3ea8 pop ebp */
  EBP = (pop32());
  /* 105f3ea9 ret  */
  ESPCHK(0x105f3bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013eb0 @ 0x105f3eb0 (504 bytes, 145 insns) */
void f_105f3eb0(void) {
  FTRACE(0x105f3eb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f3eb0 push ebp */
  push32((uint32_t)(EBP));
  /* 105f3eb1 mov ebp, esp */
  EBP = (ESP);
  /* 105f3eb3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f3eb6 cmp dword ptr [ebp + 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f3eba jne 0x105f3f8c */
  if (!C.zf) goto L_105f3f8c;
  /* 105f3ec0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f3ec3 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 105f3ec6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f3ec8 jne 0x105f3ed9 */
  if (!C.zf) goto L_105f3ed9;
  /* 105f3eca mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f3ecd mov edx, dword ptr [ecx*4 + 0x1060fe5c] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1060fe5c)));
  /* 105f3ed4 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 105f3ed7 jmp 0x105f3ee6 */
  goto L_105f3ee6;
L_105f3ed9:;
  /* 105f3ed9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f3edc mov ecx, dword ptr [eax*4 + 0x1060fe90] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1060fe90)));
  /* 105f3ee3 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_105f3ee6:;
  /* 105f3ee6 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f3ee9 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f3eec mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 105f3eef mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f3ef2 sub eax, 0x46 */
  { uint32_t _a=(EAX),_b=(0x46u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f3ef5 imul eax, eax, 0x16d */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x16du); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105f3efb mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f3efe add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f3f00 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f3f03 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f3f06 sar edx, 2 */
  EDX = (sh_sar((uint32_t)(EDX), (0x2u)&0x1f, 32));
  /* 105f3f09 lea eax, [ecx + edx - 0xd] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0xd));
  /* 105f3f0d cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 105f3f0e mov ecx, 7 */
  ECX = (0x7u);
  /* 105f3f13 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 105f3f15 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105f3f18 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f3f1b cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f3f1e jg 0x105f3f39 */
  if ((!C.zf&&C.sf==C.of)) goto L_105f3f39;
  /* 105f3f20 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 105f3f23 sub eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f3f26 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 105f3f29 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f3f2c imul ecx, ecx, 7 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x7u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105f3f2f add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f3f32 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f3f34 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105f3f37 jmp 0x105f3f4d */
  goto L_105f3f4d;
L_105f3f39:;
  /* 105f3f39 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 105f3f3c sub edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f3f3f mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105f3f42 imul eax, eax, 7 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x7u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105f3f45 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f3f48 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f3f4a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_105f3f4d:;
  /* 105f3f4d cmp dword ptr [ebp + 0x18], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f3f51 jne 0x105f3f8a */
  if (!C.zf) goto L_105f3f8a;
  /* 105f3f53 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f3f56 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 105f3f59 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105f3f5b jne 0x105f3f6c */
  if (!C.zf) goto L_105f3f6c;
  /* 105f3f5d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f3f60 mov eax, dword ptr [edx*4 + 0x1060fe60] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1060fe60)));
  /* 105f3f67 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 105f3f6a jmp 0x105f3f79 */
  goto L_105f3f79;
L_105f3f6c:;
  /* 105f3f6c mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f3f6f mov edx, dword ptr [ecx*4 + 0x1060fe94] */
  EDX = (r32((uint32_t)(ECX*4 + 0x1060fe94)));
  /* 105f3f76 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_105f3f79:;
  /* 105f3f79 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f3f7c cmp eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f3f7f jle 0x105f3f8a */
  if ((C.zf||C.sf!=C.of)) goto L_105f3f8a;
  /* 105f3f81 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f3f84 sub ecx, 7 */
  { uint32_t _a=(ECX),_b=(0x7u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f3f87 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_105f3f8a:;
  /* 105f3f8a jmp 0x105f3fc1 */
  goto L_105f3fc1;
L_105f3f8c:;
  /* 105f3f8c mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f3f8f and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 105f3f92 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105f3f94 jne 0x105f3fa5 */
  if (!C.zf) goto L_105f3fa5;
  /* 105f3f96 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f3f99 mov ecx, dword ptr [eax*4 + 0x1060fe5c] */
  ECX = (r32((uint32_t)(EAX*4 + 0x1060fe5c)));
  /* 105f3fa0 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 105f3fa3 jmp 0x105f3fb2 */
  goto L_105f3fb2;
L_105f3fa5:;
  /* 105f3fa5 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f3fa8 mov eax, dword ptr [edx*4 + 0x1060fe90] */
  EAX = (r32((uint32_t)(EDX*4 + 0x1060fe90)));
  /* 105f3faf mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_105f3fb2:;
  /* 105f3fb2 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 105f3fb5 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 105f3fb8 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f3fbb add edx, dword ptr [ebp + 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f3fbe mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_105f3fc1:;
  /* 105f3fc1 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f3fc5 jne 0x105f4001 */
  if (!C.zf) goto L_105f4001;
  /* 105f3fc7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f3fca mov dword ptr [0x1060fe3c], eax */
  w32((uint32_t)(0x1060fe3c), (EAX));
  /* 105f3fcf mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 105f3fd2 imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105f3fd5 mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 105f3fd8 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f3fda imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105f3fdd mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 105f3fe0 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f3fe2 imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105f3fe8 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 105f3feb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f3fed mov dword ptr [0x1060fe40], ecx */
  w32((uint32_t)(0x1060fe40), (ECX));
  /* 105f3ff3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f3ff6 mov dword ptr [0x1060fe38], edx */
  w32((uint32_t)(0x1060fe38), (EDX));
  /* 105f3ffc jmp 0x105f40a4 */
  goto L_105f40a4;
L_105f4001:;
  /* 105f4001 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f4004 mov dword ptr [0x1060fe4c], eax */
  w32((uint32_t)(0x1060fe4c), (EAX));
  /* 105f4009 mov ecx, dword ptr [ebp + 0x24] */
  ECX = (r32((uint32_t)(EBP + 0x24)));
  /* 105f400c imul ecx, ecx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x3cu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105f400f mov edx, dword ptr [ebp + 0x28] */
  EDX = (r32((uint32_t)(EBP + 0x28)));
  /* 105f4012 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f4014 imul edx, edx, 0x3c */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3cu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105f4017 mov eax, dword ptr [ebp + 0x2c] */
  EAX = (r32((uint32_t)(EBP + 0x2c)));
  /* 105f401a add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f401c imul eax, eax, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x3e8u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105f4022 mov ecx, dword ptr [ebp + 0x30] */
  ECX = (r32((uint32_t)(EBP + 0x30)));
  /* 105f4025 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f4027 mov dword ptr [0x1060fe50], ecx */
  w32((uint32_t)(0x1060fe50), (ECX));
  /* 105f402d mov edx, dword ptr [0x1060fda8] */
  EDX = (r32((uint32_t)(0x1060fda8)));
  /* 105f4033 imul edx, edx, 0x3e8 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x3e8u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 105f4039 mov eax, dword ptr [0x1060fe50] */
  EAX = (r32((uint32_t)(0x1060fe50)));
  /* 105f403e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f4040 mov dword ptr [0x1060fe50], eax */
  w32((uint32_t)(0x1060fe50), (EAX));
  /* 105f4045 cmp dword ptr [0x1060fe50], 0 */
  { uint32_t _a=(r32((uint32_t)(0x1060fe50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f404c jge 0x105f4071 */
  if ((C.sf==C.of)) goto L_105f4071;
  /* 105f404e mov ecx, dword ptr [0x1060fe50] */
  ECX = (r32((uint32_t)(0x1060fe50)));
  /* 105f4054 add ecx, 0x5265c00 */
  { uint32_t _a=(ECX),_b=(0x5265c00u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f405a mov dword ptr [0x1060fe50], ecx */
  w32((uint32_t)(0x1060fe50), (ECX));
  /* 105f4060 mov edx, dword ptr [0x1060fe4c] */
  EDX = (r32((uint32_t)(0x1060fe4c)));
  /* 105f4066 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f4069 mov dword ptr [0x1060fe4c], edx */
  w32((uint32_t)(0x1060fe4c), (EDX));
  /* 105f406f jmp 0x105f409b */
  goto L_105f409b;
L_105f4071:;
  /* 105f4071 cmp dword ptr [0x1060fe50], 0x5265c00 */
  { uint32_t _a=(r32((uint32_t)(0x1060fe50))),_b=(0x5265c00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f407b jl 0x105f409b */
  if ((C.sf!=C.of)) goto L_105f409b;
  /* 105f407d mov eax, dword ptr [0x1060fe50] */
  EAX = (r32((uint32_t)(0x1060fe50)));
  /* 105f4082 sub eax, 0x5265c00 */
  { uint32_t _a=(EAX),_b=(0x5265c00u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f4087 mov dword ptr [0x1060fe50], eax */
  w32((uint32_t)(0x1060fe50), (EAX));
  /* 105f408c mov ecx, dword ptr [0x1060fe4c] */
  ECX = (r32((uint32_t)(0x1060fe4c)));
  /* 105f4092 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f4095 mov dword ptr [0x1060fe4c], ecx */
  w32((uint32_t)(0x1060fe4c), (ECX));
L_105f409b:;
  /* 105f409b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f409e mov dword ptr [0x1060fe48], edx */
  w32((uint32_t)(0x1060fe48), (EDX));
L_105f40a4:;
  /* 105f40a4 mov esp, ebp */
  ESP = (EBP);
  /* 105f40a6 pop ebp */
  EBP = (pop32());
  /* 105f40a7 ret  */
  ESPCHK(0x105f3eb0u, _esp0);
  ESP += 4; return;
}

/* FUN_100140b0 @ 0x105f40b0 (382 bytes, 135 insns) */
void f_105f40b0(void) {
  FTRACE(0x105f40b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f40b0 push ebp */
  push32((uint32_t)(EBP));
  /* 105f40b1 mov ebp, esp */
  EBP = (ESP);
  /* 105f40b3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 105f40b5 push 0x1060d090 */
  push32((uint32_t)(0x1060d090u));
  /* 105f40ba push 0x105f1710 */
  push32((uint32_t)(0x105f1710u));
  /* 105f40bf mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 105f40c5 push eax */
  push32((uint32_t)(EAX));
  /* 105f40c6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 105f40cd add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f40d0 push ebx */
  push32((uint32_t)(EBX));
  /* 105f40d1 push esi */
  push32((uint32_t)(ESI));
  /* 105f40d2 push edi */
  push32((uint32_t)(EDI));
  /* 105f40d3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 105f40d6 cmp dword ptr [0x10610b14], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610b14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f40dd jne 0x105f4122 */
  if (!C.zf) goto L_105f4122;
  /* 105f40df push 0 */
  push32((uint32_t)(0x0u));
  /* 105f40e1 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f40e3 push 1 */
  push32((uint32_t)(0x1u));
  /* 105f40e5 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f40e7 call dword ptr [0x1061330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1061330c))), 0x105f40edu);
  /* 105f40ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f40ef je 0x105f40fd */
  if (C.zf) goto L_105f40fd;
  /* 105f40f1 mov dword ptr [0x10610b14], 1 */
  w32((uint32_t)(0x10610b14), (0x1u));
  /* 105f40fb jmp 0x105f4122 */
  goto L_105f4122;
L_105f40fd:;
  /* 105f40fd push 0 */
  push32((uint32_t)(0x0u));
  /* 105f40ff push 0 */
  push32((uint32_t)(0x0u));
  /* 105f4101 push 1 */
  push32((uint32_t)(0x1u));
  /* 105f4103 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f4105 call dword ptr [0x106132f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132f4))), 0x105f410bu);
  /* 105f410b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f410d je 0x105f411b */
  if (C.zf) goto L_105f411b;
  /* 105f410f mov dword ptr [0x10610b14], 2 */
  w32((uint32_t)(0x10610b14), (0x2u));
  /* 105f4119 jmp 0x105f4122 */
  goto L_105f4122;
L_105f411b:;
  /* 105f411b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f411d jmp 0x105f4231 */
  goto L_105f4231;
L_105f4122:;
  /* 105f4122 cmp dword ptr [0x10610b14], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10610b14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4129 jne 0x105f4146 */
  if (!C.zf) goto L_105f4146;
  /* 105f412b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f412e push eax */
  push32((uint32_t)(EAX));
  /* 105f412f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f4132 push ecx */
  push32((uint32_t)(ECX));
  /* 105f4133 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f4136 push edx */
  push32((uint32_t)(EDX));
  /* 105f4137 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f413a push eax */
  push32((uint32_t)(EAX));
  /* 105f413b call dword ptr [0x1061330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1061330c))), 0x105f4141u);
  /* 105f4141 jmp 0x105f4231 */
  goto L_105f4231;
L_105f4146:;
  /* 105f4146 cmp dword ptr [0x10610b14], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10610b14))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f414d jne 0x105f422f */
  if (!C.zf) goto L_105f422f;
  /* 105f4153 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4157 jne 0x105f4162 */
  if (!C.zf) goto L_105f4162;
  /* 105f4159 mov ecx, dword ptr [0x106109d0] */
  ECX = (r32((uint32_t)(0x106109d0)));
  /* 105f415f mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_105f4162:;
  /* 105f4162 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f4164 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f4166 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f4169 push edx */
  push32((uint32_t)(EDX));
  /* 105f416a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f416d push eax */
  push32((uint32_t)(EAX));
  /* 105f416e call dword ptr [0x106132f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132f4))), 0x105f4174u);
  /* 105f4174 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 105f4177 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f417b jne 0x105f4184 */
  if (!C.zf) goto L_105f4184;
  /* 105f417d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f417f jmp 0x105f4231 */
  goto L_105f4231;
L_105f4184:;
  /* 105f4184 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105f418b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105f418e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f4191 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 105f4193 call 0x105e9030 */
  push32(0x105f4198u); f_105e9030();
  /* 105f4198 mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 105f419b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 105f419e mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 105f41a1 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 105f41a4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 105f41ab jmp 0x105f41c4 */
  goto L_105f41c4;
  /* 105f41ad mov eax, 1 */
  EAX = (0x1u);
  /* 105f41b2 ret  */
  ESPCHK(0x105f40b0u, _esp0);
  ESP += 4; return;
  /* 105f41b3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 105f41b6 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 105f41bd mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_105f41c4:;
  /* 105f41c4 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f41c8 jne 0x105f41ce */
  if (!C.zf) goto L_105f41ce;
  /* 105f41ca xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f41cc jmp 0x105f4231 */
  goto L_105f4231;
L_105f41ce:;
  /* 105f41ce mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105f41d1 push edx */
  push32((uint32_t)(EDX));
  /* 105f41d2 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 105f41d5 push eax */
  push32((uint32_t)(EAX));
  /* 105f41d6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f41d9 push ecx */
  push32((uint32_t)(ECX));
  /* 105f41da mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f41dd push edx */
  push32((uint32_t)(EDX));
  /* 105f41de call dword ptr [0x106132f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132f4))), 0x105f41e4u);
  /* 105f41e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f41e6 jne 0x105f41ec */
  if (!C.zf) goto L_105f41ec;
  /* 105f41e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f41ea jmp 0x105f4231 */
  goto L_105f4231;
L_105f41ec:;
  /* 105f41ec cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f41f0 jne 0x105f420d */
  if (!C.zf) goto L_105f420d;
  /* 105f41f2 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f41f4 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f41f6 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 105f41f8 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 105f41fb push eax */
  push32((uint32_t)(EAX));
  /* 105f41fc push 1 */
  push32((uint32_t)(0x1u));
  /* 105f41fe mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 105f4201 push ecx */
  push32((uint32_t)(ECX));
  /* 105f4202 call dword ptr [0x1061328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1061328c))), 0x105f4208u);
  /* 105f4208 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 105f420b jmp 0x105f422a */
  goto L_105f422a;
L_105f420d:;
  /* 105f420d mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f4210 push edx */
  push32((uint32_t)(EDX));
  /* 105f4211 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f4214 push eax */
  push32((uint32_t)(EAX));
  /* 105f4215 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 105f4217 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105f421a push ecx */
  push32((uint32_t)(ECX));
  /* 105f421b push 1 */
  push32((uint32_t)(0x1u));
  /* 105f421d mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105f4220 push edx */
  push32((uint32_t)(EDX));
  /* 105f4221 call dword ptr [0x1061328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1061328c))), 0x105f4227u);
  /* 105f4227 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_105f422a:;
  /* 105f422a mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105f422d jmp 0x105f4231 */
  goto L_105f4231;
L_105f422f:;
  /* 105f422f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105f4231:;
  /* 105f4231 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 105f4234 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105f4237 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 105f423e pop edi */
  EDI = (pop32());
  /* 105f423f pop esi */
  ESI = (pop32());
  /* 105f4240 pop ebx */
  EBX = (pop32());
  /* 105f4241 mov esp, ebp */
  ESP = (EBP);
  /* 105f4243 pop ebp */
  EBP = (pop32());
  /* 105f4244 ret  */
  ESPCHK(0x105f40b0u, _esp0);
  ESP += 4; return;
}

/* FUN_10014250 @ 0x105f4250 (398 bytes, 140 insns) */
void f_105f4250(void) {
  FTRACE(0x105f4250u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f4250 push ebp */
  push32((uint32_t)(EBP));
  /* 105f4251 mov ebp, esp */
  EBP = (ESP);
  /* 105f4253 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 105f4255 push 0x1060d0a0 */
  push32((uint32_t)(0x1060d0a0u));
  /* 105f425a push 0x105f1710 */
  push32((uint32_t)(0x105f1710u));
  /* 105f425f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 105f4265 push eax */
  push32((uint32_t)(EAX));
  /* 105f4266 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 105f426d add esp, -0x18 */
  { uint32_t _a=(ESP),_b=(0xffffffe8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f4270 push ebx */
  push32((uint32_t)(EBX));
  /* 105f4271 push esi */
  push32((uint32_t)(ESI));
  /* 105f4272 push edi */
  push32((uint32_t)(EDI));
  /* 105f4273 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 105f4276 cmp dword ptr [0x10610b18], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610b18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f427d jne 0x105f42c2 */
  if (!C.zf) goto L_105f42c2;
  /* 105f427f push 0 */
  push32((uint32_t)(0x0u));
  /* 105f4281 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f4283 push 1 */
  push32((uint32_t)(0x1u));
  /* 105f4285 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f4287 call dword ptr [0x1061330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1061330c))), 0x105f428du);
  /* 105f428d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f428f je 0x105f429d */
  if (C.zf) goto L_105f429d;
  /* 105f4291 mov dword ptr [0x10610b18], 1 */
  w32((uint32_t)(0x10610b18), (0x1u));
  /* 105f429b jmp 0x105f42c2 */
  goto L_105f42c2;
L_105f429d:;
  /* 105f429d push 0 */
  push32((uint32_t)(0x0u));
  /* 105f429f push 0 */
  push32((uint32_t)(0x0u));
  /* 105f42a1 push 1 */
  push32((uint32_t)(0x1u));
  /* 105f42a3 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f42a5 call dword ptr [0x106132f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132f4))), 0x105f42abu);
  /* 105f42ab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f42ad je 0x105f42bb */
  if (C.zf) goto L_105f42bb;
  /* 105f42af mov dword ptr [0x10610b18], 2 */
  w32((uint32_t)(0x10610b18), (0x2u));
  /* 105f42b9 jmp 0x105f42c2 */
  goto L_105f42c2;
L_105f42bb:;
  /* 105f42bb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f42bd jmp 0x105f43e1 */
  goto L_105f43e1;
L_105f42c2:;
  /* 105f42c2 cmp dword ptr [0x10610b18], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10610b18))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f42c9 jne 0x105f42e6 */
  if (!C.zf) goto L_105f42e6;
  /* 105f42cb mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f42ce push eax */
  push32((uint32_t)(EAX));
  /* 105f42cf mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f42d2 push ecx */
  push32((uint32_t)(ECX));
  /* 105f42d3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f42d6 push edx */
  push32((uint32_t)(EDX));
  /* 105f42d7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f42da push eax */
  push32((uint32_t)(EAX));
  /* 105f42db call dword ptr [0x106132f4] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132f4))), 0x105f42e1u);
  /* 105f42e1 jmp 0x105f43e1 */
  goto L_105f43e1;
L_105f42e6:;
  /* 105f42e6 cmp dword ptr [0x10610b18], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10610b18))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f42ed jne 0x105f43df */
  if (!C.zf) goto L_105f43df;
  /* 105f42f3 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f42f7 jne 0x105f4302 */
  if (!C.zf) goto L_105f4302;
  /* 105f42f9 mov ecx, dword ptr [0x106109d0] */
  ECX = (r32((uint32_t)(0x106109d0)));
  /* 105f42ff mov dword ptr [ebp + 0x18], ecx */
  w32((uint32_t)(EBP + 0x18), (ECX));
L_105f4302:;
  /* 105f4302 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f4304 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f4306 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f4309 push edx */
  push32((uint32_t)(EDX));
  /* 105f430a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f430d push eax */
  push32((uint32_t)(EAX));
  /* 105f430e call dword ptr [0x1061330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1061330c))), 0x105f4314u);
  /* 105f4314 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 105f4317 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f431b jne 0x105f4324 */
  if (!C.zf) goto L_105f4324;
  /* 105f431d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f431f jmp 0x105f43e1 */
  goto L_105f43e1;
L_105f4324:;
  /* 105f4324 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105f432b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105f432e shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 105f4330 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f4333 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 105f4335 call 0x105e9030 */
  push32(0x105f433au); f_105e9030();
  /* 105f433a mov dword ptr [ebp - 0x28], esp */
  w32((uint32_t)(EBP + -0x28), (ESP));
  /* 105f433d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 105f4340 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 105f4343 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 105f4346 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 105f434d jmp 0x105f4366 */
  goto L_105f4366;
  /* 105f434f mov eax, 1 */
  EAX = (0x1u);
  /* 105f4354 ret  */
  ESPCHK(0x105f4250u, _esp0);
  ESP += 4; return;
  /* 105f4355 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 105f4358 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 105f435f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_105f4366:;
  /* 105f4366 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f436a jne 0x105f4370 */
  if (!C.zf) goto L_105f4370;
  /* 105f436c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f436e jmp 0x105f43e1 */
  goto L_105f43e1;
L_105f4370:;
  /* 105f4370 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105f4373 push edx */
  push32((uint32_t)(EDX));
  /* 105f4374 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 105f4377 push eax */
  push32((uint32_t)(EAX));
  /* 105f4378 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f437b push ecx */
  push32((uint32_t)(ECX));
  /* 105f437c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f437f push edx */
  push32((uint32_t)(EDX));
  /* 105f4380 call dword ptr [0x1061330c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1061330c))), 0x105f4386u);
  /* 105f4386 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f4388 jne 0x105f438e */
  if (!C.zf) goto L_105f438e;
  /* 105f438a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f438c jmp 0x105f43e1 */
  goto L_105f43e1;
L_105f438e:;
  /* 105f438e cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4392 jne 0x105f43b6 */
  if (!C.zf) goto L_105f43b6;
  /* 105f4394 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f4396 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f4398 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f439a push 0 */
  push32((uint32_t)(0x0u));
  /* 105f439c push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 105f439e mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 105f43a1 push eax */
  push32((uint32_t)(EAX));
  /* 105f43a2 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 105f43a7 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 105f43aa push ecx */
  push32((uint32_t)(ECX));
  /* 105f43ab call dword ptr [0x1061327c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1061327c))), 0x105f43b1u);
  /* 105f43b1 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 105f43b4 jmp 0x105f43da */
  goto L_105f43da;
L_105f43b6:;
  /* 105f43b6 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f43b8 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f43ba mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f43bd push edx */
  push32((uint32_t)(EDX));
  /* 105f43be mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f43c1 push eax */
  push32((uint32_t)(EAX));
  /* 105f43c2 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 105f43c4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105f43c7 push ecx */
  push32((uint32_t)(ECX));
  /* 105f43c8 push 0x220 */
  push32((uint32_t)(0x220u));
  /* 105f43cd mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105f43d0 push edx */
  push32((uint32_t)(EDX));
  /* 105f43d1 call dword ptr [0x1061327c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1061327c))), 0x105f43d7u);
  /* 105f43d7 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_105f43da:;
  /* 105f43da mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105f43dd jmp 0x105f43e1 */
  goto L_105f43e1;
L_105f43df:;
  /* 105f43df xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105f43e1:;
  /* 105f43e1 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 105f43e4 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105f43e7 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 105f43ee pop edi */
  EDI = (pop32());
  /* 105f43ef pop esi */
  ESI = (pop32());
  /* 105f43f0 pop ebx */
  EBX = (pop32());
  /* 105f43f1 mov esp, ebp */
  ESP = (EBP);
  /* 105f43f3 pop ebp */
  EBP = (pop32());
  /* 105f43f4 ret  */
  ESPCHK(0x105f4250u, _esp0);
  ESP += 4; return;
}

/* FUN_10014400 @ 0x105f4400 (11 bytes, 6 insns) */
void f_105f4400(void) {
  FTRACE(0x105f4400u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f4400 push ebp */
  push32((uint32_t)(EBP));
  /* 105f4401 mov ebp, esp */
  EBP = (ESP);
  /* 105f4403 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f4406 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f4409 pop ebp */
  EBP = (pop32());
  /* 105f440a ret  */
  ESPCHK(0x105f4400u, _esp0);
  ESP += 4; return;
}

/* FUN_10014410 @ 0x105f4410 (147 bytes, 43 insns) */
void f_105f4410(void) {
  FTRACE(0x105f4410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f4410 push ebp */
  push32((uint32_t)(EBP));
  /* 105f4411 mov ebp, esp */
  EBP = (ESP);
  /* 105f4413 push ecx */
  push32((uint32_t)(ECX));
  /* 105f4414 cmp dword ptr [0x106109c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106109c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f441b jne 0x105f4437 */
  if (!C.zf) goto L_105f4437;
  /* 105f441d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4421 jl 0x105f4432 */
  if ((C.sf!=C.of)) goto L_105f4432;
  /* 105f4423 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4427 jg 0x105f4432 */
  if ((!C.zf&&C.sf==C.of)) goto L_105f4432;
  /* 105f4429 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f442c add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f442f mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_105f4432:;
  /* 105f4432 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f4435 jmp 0x105f449f */
  goto L_105f449f;
L_105f4437:;
  /* 105f4437 push 0x10610b44 */
  push32((uint32_t)(0x10610b44u));
  /* 105f443c call dword ptr [0x10613224] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613224))), 0x105f4442u);
  /* 105f4442 cmp dword ptr [0x10610b34], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610b34))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4449 je 0x105f4469 */
  if (C.zf) goto L_105f4469;
  /* 105f444b push 0x10610b44 */
  push32((uint32_t)(0x10610b44u));
  /* 105f4450 call dword ptr [0x10613218] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613218))), 0x105f4456u);
  /* 105f4456 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 105f4458 call 0x105ea240 */
  push32(0x105f445du); f_105ea240();
  /* 105f445d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f4460 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 105f4467 jmp 0x105f4470 */
  goto L_105f4470;
L_105f4469:;
  /* 105f4469 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_105f4470:;
  /* 105f4470 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f4473 push ecx */
  push32((uint32_t)(ECX));
  /* 105f4474 call 0x105f44b0 */
  push32(0x105f4479u); f_105f44b0();
  /* 105f4479 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f447c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 105f447f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4483 je 0x105f4491 */
  if (C.zf) goto L_105f4491;
  /* 105f4485 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 105f4487 call 0x105ea2e0 */
  push32(0x105f448cu); f_105ea2e0();
  /* 105f448c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f448f jmp 0x105f449c */
  goto L_105f449c;
L_105f4491:;
  /* 105f4491 push 0x10610b44 */
  push32((uint32_t)(0x10610b44u));
  /* 105f4496 call dword ptr [0x10613218] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613218))), 0x105f449cu);
L_105f449c:;
  /* 105f449c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_105f449f:;
  /* 105f449f mov esp, ebp */
  ESP = (EBP);
  /* 105f44a1 pop ebp */
  EBP = (pop32());
  /* 105f44a2 ret  */
  ESPCHK(0x105f4410u, _esp0);
  ESP += 4; return;
}

/* FUN_100144b0 @ 0x105f44b0 (299 bytes, 91 insns) */
void f_105f44b0(void) {
  FTRACE(0x105f44b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f44b0 push ebp */
  push32((uint32_t)(EBP));
  /* 105f44b1 mov ebp, esp */
  EBP = (ESP);
  /* 105f44b3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f44b6 cmp dword ptr [0x106109c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106109c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f44bd jne 0x105f44dc */
  if (!C.zf) goto L_105f44dc;
  /* 105f44bf cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f44c3 jl 0x105f44d4 */
  if ((C.sf!=C.of)) goto L_105f44d4;
  /* 105f44c5 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f44c9 jg 0x105f44d4 */
  if ((!C.zf&&C.sf==C.of)) goto L_105f44d4;
  /* 105f44cb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f44ce add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f44d1 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_105f44d4:;
  /* 105f44d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f44d7 jmp 0x105f45d7 */
  goto L_105f45d7;
L_105f44dc:;
  /* 105f44dc cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f44e3 jge 0x105f4523 */
  if ((C.sf==C.of)) goto L_105f4523;
  /* 105f44e5 cmp dword ptr [0x1060f158], 1 */
  { uint32_t _a=(r32((uint32_t)(0x1060f158))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f44ec jle 0x105f4501 */
  if ((C.zf||C.sf!=C.of)) goto L_105f4501;
  /* 105f44ee push 1 */
  push32((uint32_t)(0x1u));
  /* 105f44f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f44f3 push ecx */
  push32((uint32_t)(ECX));
  /* 105f44f4 call 0x105ec750 */
  push32(0x105f44f9u); f_105ec750();
  /* 105f44f9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f44fc mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 105f44ff jmp 0x105f4515 */
  goto L_105f4515;
L_105f4501:;
  /* 105f4501 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f4504 mov eax, dword ptr [0x1060ede8] */
  EAX = (r32((uint32_t)(0x1060ede8)));
  /* 105f4509 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105f450b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 105f450f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 105f4512 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_105f4515:;
  /* 105f4515 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4519 jne 0x105f4523 */
  if (!C.zf) goto L_105f4523;
  /* 105f451b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f451e jmp 0x105f45d7 */
  goto L_105f45d7;
L_105f4523:;
  /* 105f4523 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f4526 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 105f4529 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 105f452f and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 105f4535 mov eax, dword ptr [0x1060ede8] */
  EAX = (r32((uint32_t)(0x1060ede8)));
  /* 105f453a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105f453c mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 105f4540 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 105f4546 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105f4548 je 0x105f456c */
  if (C.zf) goto L_105f456c;
  /* 105f454a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f454d sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 105f4550 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 105f4556 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 105f4559 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 105f455c mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 105f455f mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 105f4563 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 105f456a jmp 0x105f457d */
  goto L_105f457d;
L_105f456c:;
  /* 105f456c mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 105f456f mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 105f4572 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 105f4576 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_105f457d:;
  /* 105f457d push 1 */
  push32((uint32_t)(0x1u));
  /* 105f457f push 0 */
  push32((uint32_t)(0x0u));
  /* 105f4581 push 3 */
  push32((uint32_t)(0x3u));
  /* 105f4583 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 105f4586 push edx */
  push32((uint32_t)(EDX));
  /* 105f4587 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f458a push eax */
  push32((uint32_t)(EAX));
  /* 105f458b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 105f458e push ecx */
  push32((uint32_t)(ECX));
  /* 105f458f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 105f4594 mov edx, dword ptr [0x106109c0] */
  EDX = (r32((uint32_t)(0x106109c0)));
  /* 105f459a push edx */
  push32((uint32_t)(EDX));
  /* 105f459b call 0x105eece0 */
  push32(0x105f45a0u); f_105eece0();
  /* 105f45a0 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f45a3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105f45a6 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f45aa jne 0x105f45b1 */
  if (!C.zf) goto L_105f45b1;
  /* 105f45ac mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f45af jmp 0x105f45d7 */
  goto L_105f45d7;
L_105f45b1:;
  /* 105f45b1 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f45b5 jne 0x105f45c1 */
  if (!C.zf) goto L_105f45c1;
  /* 105f45b7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f45ba and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 105f45bf jmp 0x105f45d7 */
  goto L_105f45d7;
L_105f45c1:;
  /* 105f45c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f45c4 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 105f45c9 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 105f45cc and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 105f45d2 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 105f45d5 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_105f45d7:;
  /* 105f45d7 mov esp, ebp */
  ESP = (EBP);
  /* 105f45d9 pop ebp */
  EBP = (pop32());
  /* 105f45da ret  */
  ESPCHK(0x105f44b0u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x105f45e0 (52 bytes, 19 insns) */
void f_105f45e0(void) {
  FTRACE(0x105f45e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f45e0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 105f45e4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 105f45e8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 105f45ea mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 105f45ee jne 0x105f45f9 */
  if (!C.zf) goto L_105f45f9;
  /* 105f45f0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 105f45f4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 105f45f6 ret 0x10 */
  ESPCHK(0x105f45e0u, _esp0);
  ESP += 20; return;
L_105f45f9:;
  /* 105f45f9 push ebx */
  push32((uint32_t)(EBX));
  /* 105f45fa mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 105f45fc mov ebx, eax */
  EBX = (EAX);
  /* 105f45fe mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 105f4602 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 105f4606 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f4608 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 105f460c mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 105f460e add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f4610 pop ebx */
  EBX = (pop32());
  /* 105f4611 ret 0x10 */
  ESPCHK(0x105f45e0u, _esp0);
  ESP += 20; return;
}

/* FUN_10014620 @ 0x105f4620 (46 bytes, 18 insns) */
void f_105f4620(void) {
  FTRACE(0x105f4620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f4620 push ebp */
  push32((uint32_t)(EBP));
  /* 105f4621 mov ebp, esp */
  EBP = (ESP);
  /* 105f4623 push ecx */
  push32((uint32_t)(ECX));
  /* 105f4624 push 0xc */
  push32((uint32_t)(0xcu));
  /* 105f4626 call 0x105ea240 */
  push32(0x105f462bu); f_105ea240();
  /* 105f462b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f462e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f4631 push eax */
  push32((uint32_t)(EAX));
  /* 105f4632 call 0x105f4650 */
  push32(0x105f4637u); f_105f4650();
  /* 105f4637 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f463a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105f463d push 0xc */
  push32((uint32_t)(0xcu));
  /* 105f463f call 0x105ea2e0 */
  push32(0x105f4644u); f_105ea2e0();
  /* 105f4644 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f4647 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f464a mov esp, ebp */
  ESP = (EBP);
  /* 105f464c pop ebp */
  EBP = (pop32());
  /* 105f464d ret  */
  ESPCHK(0x105f4620u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x105f4650 (198 bytes, 69 insns) */
void f_105f4650(void) {
  FTRACE(0x105f4650u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f4650 push ebp */
  push32((uint32_t)(EBP));
  /* 105f4651 mov ebp, esp */
  EBP = (ESP);
  /* 105f4653 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f4656 mov eax, dword ptr [0x106107d0] */
  EAX = (r32((uint32_t)(0x106107d0)));
  /* 105f465b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105f465e cmp dword ptr [0x106122c0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106122c0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4665 jne 0x105f466e */
  if (!C.zf) goto L_105f466e;
  /* 105f4667 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f4669 jmp 0x105f4712 */
  goto L_105f4712;
L_105f466e:;
  /* 105f466e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4672 jne 0x105f4696 */
  if (!C.zf) goto L_105f4696;
  /* 105f4674 cmp dword ptr [0x106107d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106107d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f467b je 0x105f4696 */
  if (C.zf) goto L_105f4696;
  /* 105f467d call 0x105f4770 */
  push32(0x105f4682u); f_105f4770();
  /* 105f4682 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f4684 je 0x105f468d */
  if (C.zf) goto L_105f468d;
  /* 105f4686 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f4688 jmp 0x105f4712 */
  goto L_105f4712;
L_105f468d:;
  /* 105f468d mov ecx, dword ptr [0x106107d0] */
  ECX = (r32((uint32_t)(0x106107d0)));
  /* 105f4693 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_105f4696:;
  /* 105f4696 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f469a je 0x105f4710 */
  if (C.zf) goto L_105f4710;
  /* 105f469c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f46a0 je 0x105f4710 */
  if (C.zf) goto L_105f4710;
  /* 105f46a2 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f46a5 push edx */
  push32((uint32_t)(EDX));
  /* 105f46a6 call 0x105e8cc0 */
  push32(0x105f46abu); f_105e8cc0();
  /* 105f46ab add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f46ae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105f46b1:;
  /* 105f46b1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f46b4 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f46b7 je 0x105f4710 */
  if (C.zf) goto L_105f4710;
  /* 105f46b9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f46bc mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105f46be push edx */
  push32((uint32_t)(EDX));
  /* 105f46bf call 0x105e8cc0 */
  push32(0x105f46c4u); f_105e8cc0();
  /* 105f46c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f46c7 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f46ca jbe 0x105f4705 */
  if ((C.cf||C.zf)) goto L_105f4705;
  /* 105f46cc mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f46cf mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105f46d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f46d4 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 105f46d8 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f46db jne 0x105f4705 */
  if (!C.zf) goto L_105f4705;
  /* 105f46dd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f46e0 push ecx */
  push32((uint32_t)(ECX));
  /* 105f46e1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f46e4 push edx */
  push32((uint32_t)(EDX));
  /* 105f46e5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f46e8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105f46ea push ecx */
  push32((uint32_t)(ECX));
  /* 105f46eb call 0x105f4720 */
  push32(0x105f46f0u); f_105f4720();
  /* 105f46f0 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f46f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f46f5 jne 0x105f4705 */
  if (!C.zf) goto L_105f4705;
  /* 105f46f7 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f46fa mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105f46fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f46ff lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 105f4703 jmp 0x105f4712 */
  goto L_105f4712;
L_105f4705:;
  /* 105f4705 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f4708 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f470b mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 105f470e jmp 0x105f46b1 */
  goto L_105f46b1;
L_105f4710:;
  /* 105f4710 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105f4712:;
  /* 105f4712 mov esp, ebp */
  ESP = (EBP);
  /* 105f4714 pop ebp */
  EBP = (pop32());
  /* 105f4715 ret  */
  ESPCHK(0x105f4650u, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x105f4720 (79 bytes, 32 insns) */
void f_105f4720(void) {
  FTRACE(0x105f4720u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f4720 push ebp */
  push32((uint32_t)(EBP));
  /* 105f4721 mov ebp, esp */
  EBP = (ESP);
  /* 105f4723 push ecx */
  push32((uint32_t)(ECX));
  /* 105f4724 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4728 jne 0x105f472e */
  if (!C.zf) goto L_105f472e;
  /* 105f472a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f472c jmp 0x105f476b */
  goto L_105f476b;
L_105f472e:;
  /* 105f472e mov eax, dword ptr [0x10610b48] */
  EAX = (r32((uint32_t)(0x10610b48)));
  /* 105f4733 push eax */
  push32((uint32_t)(EAX));
  /* 105f4734 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f4737 push ecx */
  push32((uint32_t)(ECX));
  /* 105f4738 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f473b push edx */
  push32((uint32_t)(EDX));
  /* 105f473c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f473f push eax */
  push32((uint32_t)(EAX));
  /* 105f4740 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f4743 push ecx */
  push32((uint32_t)(ECX));
  /* 105f4744 push 1 */
  push32((uint32_t)(0x1u));
  /* 105f4746 mov edx, dword ptr [0x10610de4] */
  EDX = (r32((uint32_t)(0x10610de4)));
  /* 105f474c push edx */
  push32((uint32_t)(EDX));
  /* 105f474d call 0x105f4820 */
  push32(0x105f4752u); f_105f4820();
  /* 105f4752 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f4755 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105f4758 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f475c jne 0x105f4765 */
  if (!C.zf) goto L_105f4765;
  /* 105f475e mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 105f4763 jmp 0x105f476b */
  goto L_105f476b;
L_105f4765:;
  /* 105f4765 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f4768 sub eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_105f476b:;
  /* 105f476b mov esp, ebp */
  ESP = (EBP);
  /* 105f476d pop ebp */
  EBP = (pop32());
  /* 105f476e ret  */
  ESPCHK(0x105f4720u, _esp0);
  ESP += 4; return;
}

/* FUN_10014770 @ 0x105f4770 (174 bytes, 66 insns) */
void f_105f4770(void) {
  FTRACE(0x105f4770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f4770 push ebp */
  push32((uint32_t)(EBP));
  /* 105f4771 mov ebp, esp */
  EBP = (ESP);
  /* 105f4773 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f4776 mov eax, dword ptr [0x106107d8] */
  EAX = (r32((uint32_t)(0x106107d8)));
  /* 105f477b mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_105f477e:;
  /* 105f477e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f4781 cmp dword ptr [ecx], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4784 je 0x105f4818 */
  if (C.zf) goto L_105f4818;
  /* 105f478a push 0 */
  push32((uint32_t)(0x0u));
  /* 105f478c push 0 */
  push32((uint32_t)(0x0u));
  /* 105f478e push 0 */
  push32((uint32_t)(0x0u));
  /* 105f4790 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f4792 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 105f4794 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f4797 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105f4799 push eax */
  push32((uint32_t)(EAX));
  /* 105f479a push 0 */
  push32((uint32_t)(0x0u));
  /* 105f479c push 1 */
  push32((uint32_t)(0x1u));
  /* 105f479e call dword ptr [0x1061327c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1061327c))), 0x105f47a4u);
  /* 105f47a4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105f47a7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f47ab jne 0x105f47b2 */
  if (!C.zf) goto L_105f47b2;
  /* 105f47ad or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105f47b0 jmp 0x105f481a */
  goto L_105f481a;
L_105f47b2:;
  /* 105f47b2 push 0x3d */
  push32((uint32_t)(0x3du));
  /* 105f47b4 push 0x1060d0ac */
  push32((uint32_t)(0x1060d0acu));
  /* 105f47b9 push 2 */
  push32((uint32_t)(0x2u));
  /* 105f47bb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f47be push ecx */
  push32((uint32_t)(ECX));
  /* 105f47bf call 0x105e5e90 */
  push32(0x105f47c4u); f_105e5e90();
  /* 105f47c4 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f47c7 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105f47ca cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f47ce jne 0x105f47d5 */
  if (!C.zf) goto L_105f47d5;
  /* 105f47d0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105f47d3 jmp 0x105f481a */
  goto L_105f481a;
L_105f47d5:;
  /* 105f47d5 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f47d7 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f47d9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f47dc push edx */
  push32((uint32_t)(EDX));
  /* 105f47dd mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f47e0 push eax */
  push32((uint32_t)(EAX));
  /* 105f47e1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 105f47e3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f47e6 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105f47e8 push edx */
  push32((uint32_t)(EDX));
  /* 105f47e9 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f47eb push 1 */
  push32((uint32_t)(0x1u));
  /* 105f47ed call dword ptr [0x1061327c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1061327c))), 0x105f47f3u);
  /* 105f47f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f47f5 jne 0x105f47fc */
  if (!C.zf) goto L_105f47fc;
  /* 105f47f7 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105f47fa jmp 0x105f481a */
  goto L_105f481a;
L_105f47fc:;
  /* 105f47fc push 0 */
  push32((uint32_t)(0x0u));
  /* 105f47fe mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f4801 push eax */
  push32((uint32_t)(EAX));
  /* 105f4802 call 0x105f4c70 */
  push32(0x105f4807u); f_105f4c70();
  /* 105f4807 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f480a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f480d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f4810 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105f4813 jmp 0x105f477e */
  goto L_105f477e;
L_105f4818:;
  /* 105f4818 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105f481a:;
  /* 105f481a mov esp, ebp */
  ESP = (EBP);
  /* 105f481c pop ebp */
  EBP = (pop32());
  /* 105f481d ret  */
  ESPCHK(0x105f4770u, _esp0);
  ESP += 4; return;
}

/* FUN_10014820 @ 0x105f4820 (970 bytes, 340 insns) */
void f_105f4820(void) {
  FTRACE(0x105f4820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f4820 push ebp */
  push32((uint32_t)(EBP));
  /* 105f4821 mov ebp, esp */
  EBP = (ESP);
  /* 105f4823 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 105f4825 push 0x1060d100 */
  push32((uint32_t)(0x1060d100u));
  /* 105f482a push 0x105f1710 */
  push32((uint32_t)(0x105f1710u));
  /* 105f482f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 105f4835 push eax */
  push32((uint32_t)(EAX));
  /* 105f4836 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 105f483d add esp, -0x38 */
  { uint32_t _a=(ESP),_b=(0xffffffc8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f4840 push ebx */
  push32((uint32_t)(EBX));
  /* 105f4841 push esi */
  push32((uint32_t)(ESI));
  /* 105f4842 push edi */
  push32((uint32_t)(EDI));
  /* 105f4843 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 105f4846 cmp dword ptr [0x10610b1c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610b1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f484d jne 0x105f48a6 */
  if (!C.zf) goto L_105f48a6;
  /* 105f484f push 1 */
  push32((uint32_t)(0x1u));
  /* 105f4851 push 0x1060c7d8 */
  push32((uint32_t)(0x1060c7d8u));
  /* 105f4856 push 1 */
  push32((uint32_t)(0x1u));
  /* 105f4858 push 0x1060c7d8 */
  push32((uint32_t)(0x1060c7d8u));
  /* 105f485d push 0 */
  push32((uint32_t)(0x0u));
  /* 105f485f push 0 */
  push32((uint32_t)(0x0u));
  /* 105f4861 call dword ptr [0x10613308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613308))), 0x105f4867u);
  /* 105f4867 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f4869 je 0x105f4877 */
  if (C.zf) goto L_105f4877;
  /* 105f486b mov dword ptr [0x10610b1c], 1 */
  w32((uint32_t)(0x10610b1c), (0x1u));
  /* 105f4875 jmp 0x105f48a6 */
  goto L_105f48a6;
L_105f4877:;
  /* 105f4877 push 1 */
  push32((uint32_t)(0x1u));
  /* 105f4879 push 0x1060c7d4 */
  push32((uint32_t)(0x1060c7d4u));
  /* 105f487e push 1 */
  push32((uint32_t)(0x1u));
  /* 105f4880 push 0x1060c7d4 */
  push32((uint32_t)(0x1060c7d4u));
  /* 105f4885 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f4887 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f4889 call dword ptr [0x10613310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613310))), 0x105f488fu);
  /* 105f488f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f4891 je 0x105f489f */
  if (C.zf) goto L_105f489f;
  /* 105f4893 mov dword ptr [0x10610b1c], 2 */
  w32((uint32_t)(0x10610b1c), (0x2u));
  /* 105f489d jmp 0x105f48a6 */
  goto L_105f48a6;
L_105f489f:;
  /* 105f489f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f48a1 jmp 0x105f4c04 */
  goto L_105f4c04;
L_105f48a6:;
  /* 105f48a6 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f48aa jle 0x105f48bf */
  if ((C.zf||C.sf!=C.of)) goto L_105f48bf;
  /* 105f48ac mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f48af push eax */
  push32((uint32_t)(EAX));
  /* 105f48b0 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f48b3 push ecx */
  push32((uint32_t)(ECX));
  /* 105f48b4 call 0x105f4c20 */
  push32(0x105f48b9u); f_105f4c20();
  /* 105f48b9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f48bc mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_105f48bf:;
  /* 105f48bf cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f48c3 jle 0x105f48d8 */
  if ((C.zf||C.sf!=C.of)) goto L_105f48d8;
  /* 105f48c5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 105f48c8 push edx */
  push32((uint32_t)(EDX));
  /* 105f48c9 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105f48cc push eax */
  push32((uint32_t)(EAX));
  /* 105f48cd call 0x105f4c20 */
  push32(0x105f48d2u); f_105f4c20();
  /* 105f48d2 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f48d5 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_105f48d8:;
  /* 105f48d8 cmp dword ptr [0x10610b1c], 2 */
  { uint32_t _a=(r32((uint32_t)(0x10610b1c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f48df jne 0x105f4904 */
  if (!C.zf) goto L_105f4904;
  /* 105f48e1 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 105f48e4 push ecx */
  push32((uint32_t)(ECX));
  /* 105f48e5 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105f48e8 push edx */
  push32((uint32_t)(EDX));
  /* 105f48e9 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f48ec push eax */
  push32((uint32_t)(EAX));
  /* 105f48ed mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f48f0 push ecx */
  push32((uint32_t)(ECX));
  /* 105f48f1 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f48f4 push edx */
  push32((uint32_t)(EDX));
  /* 105f48f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f48f8 push eax */
  push32((uint32_t)(EAX));
  /* 105f48f9 call dword ptr [0x10613310] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613310))), 0x105f48ffu);
  /* 105f48ff jmp 0x105f4c04 */
  goto L_105f4c04;
L_105f4904:;
  /* 105f4904 cmp dword ptr [0x10610b1c], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10610b1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f490b jne 0x105f4c02 */
  if (!C.zf) goto L_105f4c02;
  /* 105f4911 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4915 jne 0x105f4920 */
  if (!C.zf) goto L_105f4920;
  /* 105f4917 mov ecx, dword ptr [0x106109d0] */
  ECX = (r32((uint32_t)(0x106109d0)));
  /* 105f491d mov dword ptr [ebp + 0x20], ecx */
  w32((uint32_t)(EBP + 0x20), (ECX));
L_105f4920:;
  /* 105f4920 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4924 je 0x105f4930 */
  if (C.zf) goto L_105f4930;
  /* 105f4926 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f492a jne 0x105f4aac */
  if (!C.zf) goto L_105f4aac;
L_105f4930:;
  /* 105f4930 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f4933 cmp edx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4936 jne 0x105f4942 */
  if (!C.zf) goto L_105f4942;
  /* 105f4938 mov eax, 2 */
  EAX = (0x2u);
  /* 105f493d jmp 0x105f4c04 */
  goto L_105f4c04;
L_105f4942:;
  /* 105f4942 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4946 jle 0x105f4952 */
  if ((C.zf||C.sf!=C.of)) goto L_105f4952;
  /* 105f4948 mov eax, 1 */
  EAX = (0x1u);
  /* 105f494d jmp 0x105f4c04 */
  goto L_105f4c04;
L_105f4952:;
  /* 105f4952 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4956 jle 0x105f4962 */
  if ((C.zf||C.sf!=C.of)) goto L_105f4962;
  /* 105f4958 mov eax, 3 */
  EAX = (0x3u);
  /* 105f495d jmp 0x105f4c04 */
  goto L_105f4c04;
L_105f4962:;
  /* 105f4962 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 105f4965 push eax */
  push32((uint32_t)(EAX));
  /* 105f4966 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 105f4969 push ecx */
  push32((uint32_t)(ECX));
  /* 105f496a call dword ptr [0x106132c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x106132c0))), 0x105f4970u);
  /* 105f4970 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f4972 jne 0x105f497b */
  if (!C.zf) goto L_105f497b;
  /* 105f4974 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f4976 jmp 0x105f4c04 */
  goto L_105f4c04;
L_105f497b:;
  /* 105f497b cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f497f jne 0x105f4987 */
  if (!C.zf) goto L_105f4987;
  /* 105f4981 cmp dword ptr [ebp + 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4985 je 0x105f49b4 */
  if (C.zf) goto L_105f49b4;
L_105f4987:;
  /* 105f4987 cmp dword ptr [ebp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f498b jne 0x105f4993 */
  if (!C.zf) goto L_105f4993;
  /* 105f498d cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4991 je 0x105f49b4 */
  if (C.zf) goto L_105f49b4;
L_105f4993:;
  /* 105f4993 push 0x1060d0c0 */
  push32((uint32_t)(0x1060d0c0u));
  /* 105f4998 push 0 */
  push32((uint32_t)(0x0u));
  /* 105f499a push 0xb6 */
  push32((uint32_t)(0xb6u));
  /* 105f499f push 0x1060d0b8 */
  push32((uint32_t)(0x1060d0b8u));
  /* 105f49a4 push 2 */
  push32((uint32_t)(0x2u));
  /* 105f49a6 call 0x105e3e30 */
  push32(0x105f49abu); f_105e3e30();
  /* 105f49ab add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f49ae cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f49b1 jne 0x105f49b4 */
  if (!C.zf) goto L_105f49b4;
  /* 105f49b3 int3  */
  x86_unimpl("int3 @ 0x105f49b3");
L_105f49b4:;
  /* 105f49b4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105f49b6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105f49b8 jne 0x105f497b */
  if (!C.zf) goto L_105f497b;
  /* 105f49ba cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f49be jle 0x105f4a33 */
  if ((C.zf||C.sf!=C.of)) goto L_105f4a33;
  /* 105f49c0 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f49c4 jae 0x105f49d0 */
  if (!C.cf) goto L_105f49d0;
  /* 105f49c6 mov eax, 3 */
  EAX = (0x3u);
  /* 105f49cb jmp 0x105f4c04 */
  goto L_105f4c04;
L_105f49d0:;
  /* 105f49d0 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 105f49d3 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
  /* 105f49d6 jmp 0x105f49e1 */
  goto L_105f49e1;
L_105f49d8:;
  /* 105f49d8 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 105f49db add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f49de mov dword ptr [ebp - 0x40], ecx */
  w32((uint32_t)(EBP + -0x40), (ECX));
L_105f49e1:;
  /* 105f49e1 mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 105f49e4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f49e6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105f49e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f49ea je 0x105f4a29 */
  if (C.zf) goto L_105f4a29;
  /* 105f49ec mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 105f49ef xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105f49f1 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 105f49f4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105f49f6 je 0x105f4a29 */
  if (C.zf) goto L_105f4a29;
  /* 105f49f8 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f49fb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105f49fd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 105f49ff mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 105f4a02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f4a04 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105f4a06 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4a08 jl 0x105f4a27 */
  if ((C.sf!=C.of)) goto L_105f4a27;
  /* 105f4a0a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f4a0d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105f4a0f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105f4a11 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 105f4a14 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105f4a16 mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 105f4a19 cmp edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4a1b jg 0x105f4a27 */
  if ((!C.zf&&C.sf==C.of)) goto L_105f4a27;
  /* 105f4a1d mov eax, 2 */
  EAX = (0x2u);
  /* 105f4a22 jmp 0x105f4c04 */
  goto L_105f4c04;
L_105f4a27:;
  /* 105f4a27 jmp 0x105f49d8 */
  goto L_105f49d8;
L_105f4a29:;
  /* 105f4a29 mov eax, 3 */
  EAX = (0x3u);
  /* 105f4a2e jmp 0x105f4c04 */
  goto L_105f4c04;
L_105f4a33:;
  /* 105f4a33 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4a37 jle 0x105f4aac */
  if ((C.zf||C.sf!=C.of)) goto L_105f4aac;
  /* 105f4a39 cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4a3d jae 0x105f4a49 */
  if (!C.cf) goto L_105f4a49;
  /* 105f4a3f mov eax, 1 */
  EAX = (0x1u);
  /* 105f4a44 jmp 0x105f4c04 */
  goto L_105f4c04;
L_105f4a49:;
  /* 105f4a49 lea edx, [ebp - 0x36] */
  EDX = ((uint32_t)(EBP + -0x36));
  /* 105f4a4c mov dword ptr [ebp - 0x40], edx */
  w32((uint32_t)(EBP + -0x40), (EDX));
  /* 105f4a4f jmp 0x105f4a5a */
  goto L_105f4a5a;
L_105f4a51:;
  /* 105f4a51 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 105f4a54 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f4a57 mov dword ptr [ebp - 0x40], eax */
  w32((uint32_t)(EBP + -0x40), (EAX));
L_105f4a5a:;
  /* 105f4a5a mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 105f4a5d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105f4a5f mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105f4a61 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105f4a63 je 0x105f4aa2 */
  if (C.zf) goto L_105f4aa2;
  /* 105f4a65 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 105f4a68 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105f4a6a mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 105f4a6d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105f4a6f je 0x105f4aa2 */
  if (C.zf) goto L_105f4aa2;
  /* 105f4a71 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105f4a74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f4a76 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 105f4a78 mov ecx, dword ptr [ebp - 0x40] */
  ECX = (r32((uint32_t)(EBP + -0x40)));
  /* 105f4a7b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 105f4a7d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 105f4a7f cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4a81 jl 0x105f4aa0 */
  if ((C.sf!=C.of)) goto L_105f4aa0;
  /* 105f4a83 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 105f4a86 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105f4a88 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 105f4a8a mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 105f4a8d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f4a8f mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 105f4a92 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4a94 jg 0x105f4aa0 */
  if ((!C.zf&&C.sf==C.of)) goto L_105f4aa0;
  /* 105f4a96 mov eax, 2 */
  EAX = (0x2u);
  /* 105f4a9b jmp 0x105f4c04 */
  goto L_105f4c04;
L_105f4aa0:;
  /* 105f4aa0 jmp 0x105f4a51 */
  goto L_105f4a51;
L_105f4aa2:;
  /* 105f4aa2 mov eax, 1 */
  EAX = (0x1u);
  /* 105f4aa7 jmp 0x105f4c04 */
  goto L_105f4c04;
L_105f4aac:;
  /* 105f4aac push 0 */
  push32((uint32_t)(0x0u));
  /* 105f4aae push 0 */
  push32((uint32_t)(0x0u));
  /* 105f4ab0 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f4ab3 push ecx */
  push32((uint32_t)(ECX));
  /* 105f4ab4 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f4ab7 push edx */
  push32((uint32_t)(EDX));
  /* 105f4ab8 push 9 */
  push32((uint32_t)(0x9u));
  /* 105f4aba mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 105f4abd push eax */
  push32((uint32_t)(EAX));
  /* 105f4abe call dword ptr [0x1061328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1061328c))), 0x105f4ac4u);
  /* 105f4ac4 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 105f4ac7 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4acb jne 0x105f4ad4 */
  if (!C.zf) goto L_105f4ad4;
  /* 105f4acd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f4acf jmp 0x105f4c04 */
  goto L_105f4c04;
L_105f4ad4:;
  /* 105f4ad4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 105f4adb mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105f4ade shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 105f4ae0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f4ae3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 105f4ae5 call 0x105e9030 */
  push32(0x105f4aeau); f_105e9030();
  /* 105f4aea mov dword ptr [ebp - 0x44], esp */
  w32((uint32_t)(EBP + -0x44), (ESP));
  /* 105f4aed mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 105f4af0 mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 105f4af3 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 105f4af6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 105f4afd jmp 0x105f4b16 */
  goto L_105f4b16;
  /* 105f4aff mov eax, 1 */
  EAX = (0x1u);
  /* 105f4b04 ret  */
  ESPCHK(0x105f4820u, _esp0);
  ESP += 4; return;
  /* 105f4b05 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 105f4b08 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 105f4b0f mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_105f4b16:;
  /* 105f4b16 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4b1a jne 0x105f4b23 */
  if (!C.zf) goto L_105f4b23;
  /* 105f4b1c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f4b1e jmp 0x105f4c04 */
  goto L_105f4c04;
L_105f4b23:;
  /* 105f4b23 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105f4b26 push edx */
  push32((uint32_t)(EDX));
  /* 105f4b27 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 105f4b2a push eax */
  push32((uint32_t)(EAX));
  /* 105f4b2b mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 105f4b2e push ecx */
  push32((uint32_t)(ECX));
  /* 105f4b2f mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 105f4b32 push edx */
  push32((uint32_t)(EDX));
  /* 105f4b33 push 1 */
  push32((uint32_t)(0x1u));
  /* 105f4b35 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 105f4b38 push eax */
  push32((uint32_t)(EAX));
  /* 105f4b39 call dword ptr [0x1061328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1061328c))), 0x105f4b3fu);
  /* 105f4b3f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f4b41 jne 0x105f4b4a */
  if (!C.zf) goto L_105f4b4a;
  /* 105f4b43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f4b45 jmp 0x105f4c04 */
  goto L_105f4c04;
L_105f4b4a:;
  /* 105f4b4a push 0 */
  push32((uint32_t)(0x0u));
  /* 105f4b4c push 0 */
  push32((uint32_t)(0x0u));
  /* 105f4b4e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 105f4b51 push ecx */
  push32((uint32_t)(ECX));
  /* 105f4b52 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105f4b55 push edx */
  push32((uint32_t)(EDX));
  /* 105f4b56 push 9 */
  push32((uint32_t)(0x9u));
  /* 105f4b58 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 105f4b5b push eax */
  push32((uint32_t)(EAX));
  /* 105f4b5c call dword ptr [0x1061328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1061328c))), 0x105f4b62u);
  /* 105f4b62 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 105f4b65 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4b69 jne 0x105f4b72 */
  if (!C.zf) goto L_105f4b72;
  /* 105f4b6b xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f4b6d jmp 0x105f4c04 */
  goto L_105f4c04;
L_105f4b72:;
  /* 105f4b72 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 105f4b79 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 105f4b7c shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 105f4b7e add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f4b81 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 105f4b83 call 0x105e9030 */
  push32(0x105f4b88u); f_105e9030();
  /* 105f4b88 mov dword ptr [ebp - 0x48], esp */
  w32((uint32_t)(EBP + -0x48), (ESP));
  /* 105f4b8b mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 105f4b8e mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 105f4b91 mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 105f4b94 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 105f4b9b jmp 0x105f4bb4 */
  goto L_105f4bb4;
  /* 105f4b9d mov eax, 1 */
  EAX = (0x1u);
  /* 105f4ba2 ret  */
  ESPCHK(0x105f4820u, _esp0);
  ESP += 4; return;
  /* 105f4ba3 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 105f4ba6 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
  /* 105f4bad mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_105f4bb4:;
  /* 105f4bb4 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4bb8 jne 0x105f4bbe */
  if (!C.zf) goto L_105f4bbe;
  /* 105f4bba xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f4bbc jmp 0x105f4c04 */
  goto L_105f4c04;
L_105f4bbe:;
  /* 105f4bbe mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 105f4bc1 push edx */
  push32((uint32_t)(EDX));
  /* 105f4bc2 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 105f4bc5 push eax */
  push32((uint32_t)(EAX));
  /* 105f4bc6 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 105f4bc9 push ecx */
  push32((uint32_t)(ECX));
  /* 105f4bca mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 105f4bcd push edx */
  push32((uint32_t)(EDX));
  /* 105f4bce push 1 */
  push32((uint32_t)(0x1u));
  /* 105f4bd0 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 105f4bd3 push eax */
  push32((uint32_t)(EAX));
  /* 105f4bd4 call dword ptr [0x1061328c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1061328c))), 0x105f4bdau);
  /* 105f4bda test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f4bdc jne 0x105f4be2 */
  if (!C.zf) goto L_105f4be2;
  /* 105f4bde xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f4be0 jmp 0x105f4c04 */
  goto L_105f4c04;
L_105f4be2:;
  /* 105f4be2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 105f4be5 push ecx */
  push32((uint32_t)(ECX));
  /* 105f4be6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 105f4be9 push edx */
  push32((uint32_t)(EDX));
  /* 105f4bea mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 105f4bed push eax */
  push32((uint32_t)(EAX));
  /* 105f4bee mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 105f4bf1 push ecx */
  push32((uint32_t)(ECX));
  /* 105f4bf2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f4bf5 push edx */
  push32((uint32_t)(EDX));
  /* 105f4bf6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f4bf9 push eax */
  push32((uint32_t)(EAX));
  /* 105f4bfa call dword ptr [0x10613308] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613308))), 0x105f4c00u);
  /* 105f4c00 jmp 0x105f4c04 */
  goto L_105f4c04;
L_105f4c02:;
  /* 105f4c02 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105f4c04:;
  /* 105f4c04 lea esp, [ebp - 0x54] */
  ESP = ((uint32_t)(EBP + -0x54));
  /* 105f4c07 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105f4c0a mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 105f4c11 pop edi */
  EDI = (pop32());
  /* 105f4c12 pop esi */
  ESI = (pop32());
  /* 105f4c13 pop ebx */
  EBX = (pop32());
  /* 105f4c14 mov esp, ebp */
  ESP = (EBP);
  /* 105f4c16 pop ebp */
  EBP = (pop32());
  /* 105f4c17 ret  */
  ESPCHK(0x105f4820u, _esp0);
  ESP += 4; return;
}

/* FUN_10014c20 @ 0x105f4c20 (80 bytes, 32 insns) */
void f_105f4c20(void) {
  FTRACE(0x105f4c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f4c20 push ebp */
  push32((uint32_t)(EBP));
  /* 105f4c21 mov ebp, esp */
  EBP = (ESP);
  /* 105f4c23 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f4c26 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f4c29 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105f4c2c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f4c2f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_105f4c32:;
  /* 105f4c32 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f4c35 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f4c38 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f4c3b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105f4c3e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105f4c40 je 0x105f4c57 */
  if (C.zf) goto L_105f4c57;
  /* 105f4c42 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f4c45 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 105f4c48 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105f4c4a je 0x105f4c57 */
  if (C.zf) goto L_105f4c57;
  /* 105f4c4c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f4c4f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f4c52 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105f4c55 jmp 0x105f4c32 */
  goto L_105f4c32;
L_105f4c57:;
  /* 105f4c57 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f4c5a movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 105f4c5d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105f4c5f jne 0x105f4c69 */
  if (!C.zf) goto L_105f4c69;
  /* 105f4c61 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f4c64 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f4c67 jmp 0x105f4c6c */
  goto L_105f4c6c;
L_105f4c69:;
  /* 105f4c69 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_105f4c6c:;
  /* 105f4c6c mov esp, ebp */
  ESP = (EBP);
  /* 105f4c6e pop ebp */
  EBP = (pop32());
  /* 105f4c6f ret  */
  ESPCHK(0x105f4c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10014c70 @ 0x105f4c70 (736 bytes, 224 insns) */
void f_105f4c70(void) {
  FTRACE(0x105f4c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f4c70 push ebp */
  push32((uint32_t)(EBP));
  /* 105f4c71 mov ebp, esp */
  EBP = (ESP);
  /* 105f4c73 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f4c76 push esi */
  push32((uint32_t)(ESI));
  /* 105f4c77 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4c7b je 0x105f4c9c */
  if (C.zf) goto L_105f4c9c;
  /* 105f4c7d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 105f4c7f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f4c82 push eax */
  push32((uint32_t)(EAX));
  /* 105f4c83 call 0x105f50c0 */
  push32(0x105f4c88u); f_105f50c0();
  /* 105f4c88 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f4c8b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 105f4c8e cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4c92 je 0x105f4c9c */
  if (C.zf) goto L_105f4c9c;
  /* 105f4c94 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f4c97 cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4c9a jne 0x105f4ca4 */
  if (!C.zf) goto L_105f4ca4;
L_105f4c9c:;
  /* 105f4c9c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105f4c9f jmp 0x105f4f4b */
  goto L_105f4f4b;
L_105f4ca4:;
  /* 105f4ca4 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 105f4ca7 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 105f4cab neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 105f4cad sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f4caf inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 105f4cb0 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 105f4cb3 mov ecx, dword ptr [0x106107d0] */
  ECX = (r32((uint32_t)(0x106107d0)));
  /* 105f4cb9 cmp ecx, dword ptr [0x106107d4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x106107d4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4cbf jne 0x105f4cd5 */
  if (!C.zf) goto L_105f4cd5;
  /* 105f4cc1 mov edx, dword ptr [0x106107d0] */
  EDX = (r32((uint32_t)(0x106107d0)));
  /* 105f4cc7 push edx */
  push32((uint32_t)(EDX));
  /* 105f4cc8 call 0x105f4fd0 */
  push32(0x105f4ccdu); f_105f4fd0();
  /* 105f4ccd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f4cd0 mov dword ptr [0x106107d0], eax */
  w32((uint32_t)(0x106107d0), (EAX));
L_105f4cd5:;
  /* 105f4cd5 cmp dword ptr [0x106107d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106107d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4cdc jne 0x105f4d95 */
  if (!C.zf) goto L_105f4d95;
  /* 105f4ce2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4ce6 je 0x105f4d07 */
  if (C.zf) goto L_105f4d07;
  /* 105f4ce8 cmp dword ptr [0x106107d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106107d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4cef je 0x105f4d07 */
  if (C.zf) goto L_105f4d07;
  /* 105f4cf1 call 0x105f4770 */
  push32(0x105f4cf6u); f_105f4770();
  /* 105f4cf6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f4cf8 je 0x105f4d02 */
  if (C.zf) goto L_105f4d02;
  /* 105f4cfa or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105f4cfd jmp 0x105f4f4b */
  goto L_105f4f4b;
L_105f4d02:;
  /* 105f4d02 jmp 0x105f4d95 */
  goto L_105f4d95;
L_105f4d07:;
  /* 105f4d07 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4d0b je 0x105f4d14 */
  if (C.zf) goto L_105f4d14;
  /* 105f4d0d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f4d0f jmp 0x105f4f4b */
  goto L_105f4f4b;
L_105f4d14:;
  /* 105f4d14 cmp dword ptr [0x106107d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106107d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4d1b jne 0x105f4d54 */
  if (!C.zf) goto L_105f4d54;
  /* 105f4d1d push 0x87 */
  push32((uint32_t)(0x87u));
  /* 105f4d22 push 0x1060d118 */
  push32((uint32_t)(0x1060d118u));
  /* 105f4d27 push 2 */
  push32((uint32_t)(0x2u));
  /* 105f4d29 push 4 */
  push32((uint32_t)(0x4u));
  /* 105f4d2b call 0x105e5e90 */
  push32(0x105f4d30u); f_105e5e90();
  /* 105f4d30 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f4d33 mov dword ptr [0x106107d0], eax */
  w32((uint32_t)(0x106107d0), (EAX));
  /* 105f4d38 cmp dword ptr [0x106107d0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106107d0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4d3f jne 0x105f4d49 */
  if (!C.zf) goto L_105f4d49;
  /* 105f4d41 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105f4d44 jmp 0x105f4f4b */
  goto L_105f4f4b;
L_105f4d49:;
  /* 105f4d49 mov eax, dword ptr [0x106107d0] */
  EAX = (r32((uint32_t)(0x106107d0)));
  /* 105f4d4e mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_105f4d54:;
  /* 105f4d54 cmp dword ptr [0x106107d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106107d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4d5b jne 0x105f4d95 */
  if (!C.zf) goto L_105f4d95;
  /* 105f4d5d push 0x8e */
  push32((uint32_t)(0x8eu));
  /* 105f4d62 push 0x1060d118 */
  push32((uint32_t)(0x1060d118u));
  /* 105f4d67 push 2 */
  push32((uint32_t)(0x2u));
  /* 105f4d69 push 4 */
  push32((uint32_t)(0x4u));
  /* 105f4d6b call 0x105e5e90 */
  push32(0x105f4d70u); f_105e5e90();
  /* 105f4d70 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f4d73 mov dword ptr [0x106107d8], eax */
  w32((uint32_t)(0x106107d8), (EAX));
  /* 105f4d78 cmp dword ptr [0x106107d8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x106107d8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4d7f jne 0x105f4d89 */
  if (!C.zf) goto L_105f4d89;
  /* 105f4d81 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105f4d84 jmp 0x105f4f4b */
  goto L_105f4f4b;
L_105f4d89:;
  /* 105f4d89 mov ecx, dword ptr [0x106107d8] */
  ECX = (r32((uint32_t)(0x106107d8)));
  /* 105f4d8f mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
L_105f4d95:;
  /* 105f4d95 mov edx, dword ptr [0x106107d0] */
  EDX = (r32((uint32_t)(0x106107d0)));
  /* 105f4d9b mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 105f4d9e mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 105f4da1 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f4da4 push eax */
  push32((uint32_t)(EAX));
  /* 105f4da5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f4da8 push ecx */
  push32((uint32_t)(ECX));
  /* 105f4da9 call 0x105f4f50 */
  push32(0x105f4daeu); f_105f4f50();
  /* 105f4dae add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f4db1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105f4db4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4db8 jl 0x105f4e51 */
  if ((C.sf!=C.of)) goto L_105f4e51;
  /* 105f4dbe mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f4dc1 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4dc4 je 0x105f4e51 */
  if (C.zf) goto L_105f4e51;
  /* 105f4dca cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4dce je 0x105f4e43 */
  if (C.zf) goto L_105f4e43;
  /* 105f4dd0 push 2 */
  push32((uint32_t)(0x2u));
  /* 105f4dd2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f4dd5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f4dd8 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 105f4ddb push edx */
  push32((uint32_t)(EDX));
  /* 105f4ddc call 0x105e6920 */
  push32(0x105f4de1u); f_105e6920();
  /* 105f4de1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f4de4 jmp 0x105f4def */
  goto L_105f4def;
L_105f4de6:;
  /* 105f4de6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f4de9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f4dec mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_105f4def:;
  /* 105f4def mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f4df2 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f4df5 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4df9 je 0x105f4e10 */
  if (C.zf) goto L_105f4e10;
  /* 105f4dfb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f4dfe mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f4e01 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f4e04 mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 105f4e07 mov edx, dword ptr [esi + edx*4 + 4] */
  EDX = (r32((uint32_t)(ESI + EDX*4 + 0x4)));
  /* 105f4e0b mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 105f4e0e jmp 0x105f4de6 */
  goto L_105f4de6;
L_105f4e10:;
  /* 105f4e10 push 0xb9 */
  push32((uint32_t)(0xb9u));
  /* 105f4e15 push 0x1060d118 */
  push32((uint32_t)(0x1060d118u));
  /* 105f4e1a push 2 */
  push32((uint32_t)(0x2u));
  /* 105f4e1c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f4e1f shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 105f4e22 push eax */
  push32((uint32_t)(EAX));
  /* 105f4e23 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f4e26 push ecx */
  push32((uint32_t)(ECX));
  /* 105f4e27 call 0x105e6320 */
  push32(0x105f4e2cu); f_105e6320();
  /* 105f4e2c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f4e2f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105f4e32 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4e36 je 0x105f4e41 */
  if (C.zf) goto L_105f4e41;
  /* 105f4e38 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f4e3b mov dword ptr [0x106107d0], edx */
  w32((uint32_t)(0x106107d0), (EDX));
L_105f4e41:;
  /* 105f4e41 jmp 0x105f4e4f */
  goto L_105f4e4f;
L_105f4e43:;
  /* 105f4e43 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f4e46 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f4e49 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f4e4c mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
L_105f4e4f:;
  /* 105f4e4f jmp 0x105f4ec4 */
  goto L_105f4ec4;
L_105f4e51:;
  /* 105f4e51 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4e55 jne 0x105f4ebd */
  if (!C.zf) goto L_105f4ebd;
  /* 105f4e57 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4e5b jge 0x105f4e65 */
  if ((C.sf==C.of)) goto L_105f4e65;
  /* 105f4e5d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f4e60 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 105f4e62 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_105f4e65:;
  /* 105f4e65 push 0xce */
  push32((uint32_t)(0xceu));
  /* 105f4e6a push 0x1060d118 */
  push32((uint32_t)(0x1060d118u));
  /* 105f4e6f push 2 */
  push32((uint32_t)(0x2u));
  /* 105f4e71 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f4e74 lea edx, [ecx*4 + 8] */
  EDX = ((uint32_t)(ECX*4 + 0x8));
  /* 105f4e7b push edx */
  push32((uint32_t)(EDX));
  /* 105f4e7c mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f4e7f push eax */
  push32((uint32_t)(EAX));
  /* 105f4e80 call 0x105e6320 */
  push32(0x105f4e85u); f_105e6320();
  /* 105f4e85 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f4e88 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105f4e8b cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4e8f jne 0x105f4e99 */
  if (!C.zf) goto L_105f4e99;
  /* 105f4e91 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105f4e94 jmp 0x105f4f4b */
  goto L_105f4f4b;
L_105f4e99:;
  /* 105f4e99 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f4e9c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f4e9f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f4ea2 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 105f4ea5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f4ea8 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f4eab mov dword ptr [edx + ecx*4 + 4], 0 */
  w32((uint32_t)(EDX + ECX*4 + 0x4), (0x0u));
  /* 105f4eb3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f4eb6 mov dword ptr [0x106107d0], eax */
  w32((uint32_t)(0x106107d0), (EAX));
  /* 105f4ebb jmp 0x105f4ec4 */
  goto L_105f4ec4;
L_105f4ebd:;
  /* 105f4ebd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f4ebf jmp 0x105f4f4b */
  goto L_105f4f4b;
L_105f4ec4:;
  /* 105f4ec4 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4ec8 je 0x105f4f49 */
  if (C.zf) goto L_105f4f49;
  /* 105f4eca push 0xe5 */
  push32((uint32_t)(0xe5u));
  /* 105f4ecf push 0x1060d118 */
  push32((uint32_t)(0x1060d118u));
  /* 105f4ed4 push 2 */
  push32((uint32_t)(0x2u));
  /* 105f4ed6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f4ed9 push ecx */
  push32((uint32_t)(ECX));
  /* 105f4eda call 0x105e8cc0 */
  push32(0x105f4edfu); f_105e8cc0();
  /* 105f4edf add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f4ee2 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f4ee5 push eax */
  push32((uint32_t)(EAX));
  /* 105f4ee6 call 0x105e5e90 */
  push32(0x105f4eebu); f_105e5e90();
  /* 105f4eeb add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f4eee mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 105f4ef1 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4ef5 je 0x105f4f49 */
  if (C.zf) goto L_105f4f49;
  /* 105f4ef7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f4efa push edx */
  push32((uint32_t)(EDX));
  /* 105f4efb mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105f4efe push eax */
  push32((uint32_t)(EAX));
  /* 105f4eff call 0x105e8e40 */
  push32(0x105f4f04u); f_105e8e40();
  /* 105f4f04 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f4f07 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 105f4f0a sub ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f4f0d mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105f4f10 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f4f12 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 105f4f15 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f4f18 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 105f4f1b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f4f1e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f4f21 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105f4f24 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 105f4f27 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 105f4f29 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f4f2b not edx */
  EDX = (~(EDX));
  /* 105f4f2d and edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 105f4f30 push edx */
  push32((uint32_t)(EDX));
  /* 105f4f31 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 105f4f34 push eax */
  push32((uint32_t)(EAX));
  /* 105f4f35 call dword ptr [0x10613314] */
  call_ind((uint32_t)(r32((uint32_t)(0x10613314))), 0x105f4f3bu);
  /* 105f4f3b push 2 */
  push32((uint32_t)(0x2u));
  /* 105f4f3d mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105f4f40 push ecx */
  push32((uint32_t)(ECX));
  /* 105f4f41 call 0x105e6920 */
  push32(0x105f4f46u); f_105e6920();
  /* 105f4f46 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105f4f49:;
  /* 105f4f49 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105f4f4b:;
  /* 105f4f4b pop esi */
  ESI = (pop32());
  /* 105f4f4c mov esp, ebp */
  ESP = (EBP);
  /* 105f4f4e pop ebp */
  EBP = (pop32());
  /* 105f4f4f ret  */
  ESPCHK(0x105f4c70u, _esp0);
  ESP += 4; return;
}

/* findenv @ 0x105f4f50 (124 bytes, 47 insns) */
void f_105f4f50(void) {
  FTRACE(0x105f4f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f4f50 push ebp */
  push32((uint32_t)(EBP));
  /* 105f4f51 mov ebp, esp */
  EBP = (ESP);
  /* 105f4f53 push ecx */
  push32((uint32_t)(ECX));
  /* 105f4f54 mov eax, dword ptr [0x106107d0] */
  EAX = (r32((uint32_t)(0x106107d0)));
  /* 105f4f59 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 105f4f5c jmp 0x105f4f67 */
  goto L_105f4f67;
L_105f4f5e:;
  /* 105f4f5e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f4f61 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f4f64 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_105f4f67:;
  /* 105f4f67 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f4f6a cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4f6d je 0x105f4fba */
  if (C.zf) goto L_105f4fba;
  /* 105f4f6f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f4f72 push eax */
  push32((uint32_t)(EAX));
  /* 105f4f73 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f4f76 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105f4f78 push edx */
  push32((uint32_t)(EDX));
  /* 105f4f79 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f4f7c push eax */
  push32((uint32_t)(EAX));
  /* 105f4f7d call 0x105f4720 */
  push32(0x105f4f82u); f_105f4720();
  /* 105f4f82 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f4f85 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 105f4f87 jne 0x105f4fb8 */
  if (!C.zf) goto L_105f4fb8;
  /* 105f4f89 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f4f8c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105f4f8e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f4f91 movsx ecx, byte ptr [edx + eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + EAX*1))));
  /* 105f4f95 cmp ecx, 0x3d */
  { uint32_t _a=(ECX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4f98 je 0x105f4faa */
  if (C.zf) goto L_105f4faa;
  /* 105f4f9a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f4f9d mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105f4f9f mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f4fa2 movsx edx, byte ptr [eax + ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + ECX*1))));
  /* 105f4fa6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105f4fa8 jne 0x105f4fb8 */
  if (!C.zf) goto L_105f4fb8;
L_105f4faa:;
  /* 105f4faa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f4fad sub eax, dword ptr [0x106107d0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x106107d0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f4fb3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 105f4fb6 jmp 0x105f4fc8 */
  goto L_105f4fc8;
L_105f4fb8:;
  /* 105f4fb8 jmp 0x105f4f5e */
  goto L_105f4f5e;
L_105f4fba:;
  /* 105f4fba mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f4fbd sub eax, dword ptr [0x106107d0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x106107d0))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f4fc3 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 105f4fc6 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_105f4fc8:;
  /* 105f4fc8 mov esp, ebp */
  ESP = (EBP);
  /* 105f4fca pop ebp */
  EBP = (pop32());
  /* 105f4fcb ret  */
  ESPCHK(0x105f4f50u, _esp0);
  ESP += 4; return;
}

/* copy_environ @ 0x105f4fd0 (238 bytes, 80 insns) */
void f_105f4fd0(void) {
  FTRACE(0x105f4fd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f4fd0 push ebp */
  push32((uint32_t)(EBP));
  /* 105f4fd1 mov ebp, esp */
  EBP = (ESP);
  /* 105f4fd3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f4fd6 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 105f4fdd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f4fe0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105f4fe3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f4fe7 jne 0x105f4ff0 */
  if (!C.zf) goto L_105f4ff0;
  /* 105f4fe9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f4feb jmp 0x105f50ba */
  goto L_105f50ba;
L_105f4ff0:;
  /* 105f4ff0 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f4ff3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105f4ff5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f4ff8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f4ffb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 105f4ffe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105f5000 je 0x105f500d */
  if (C.zf) goto L_105f500d;
  /* 105f5002 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 105f5005 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f5008 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 105f500b jmp 0x105f4ff0 */
  goto L_105f4ff0;
L_105f500d:;
  /* 105f500d push 0x146 */
  push32((uint32_t)(0x146u));
  /* 105f5012 push 0x1060d118 */
  push32((uint32_t)(0x1060d118u));
  /* 105f5017 push 2 */
  push32((uint32_t)(0x2u));
  /* 105f5019 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 105f501c lea eax, [edx*4 + 4] */
  EAX = ((uint32_t)(EDX*4 + 0x4));
  /* 105f5023 push eax */
  push32((uint32_t)(EAX));
  /* 105f5024 call 0x105e5e90 */
  push32(0x105f5029u); f_105e5e90();
  /* 105f5029 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f502c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 105f502f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f5032 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 105f5035 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f5039 jne 0x105f5045 */
  if (!C.zf) goto L_105f5045;
  /* 105f503b push 9 */
  push32((uint32_t)(0x9u));
  /* 105f503d call 0x105e3ce0 */
  push32(0x105f5042u); f_105e3ce0();
  /* 105f5042 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105f5045:;
  /* 105f5045 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f5048 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_105f504b:;
  /* 105f504b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f504e cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f5051 je 0x105f50ae */
  if (C.zf) goto L_105f50ae;
  /* 105f5053 push 0x14f */
  push32((uint32_t)(0x14fu));
  /* 105f5058 push 0x1060d118 */
  push32((uint32_t)(0x1060d118u));
  /* 105f505d push 2 */
  push32((uint32_t)(0x2u));
  /* 105f505f mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f5062 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 105f5064 push edx */
  push32((uint32_t)(EDX));
  /* 105f5065 call 0x105e8cc0 */
  push32(0x105f506au); f_105e8cc0();
  /* 105f506a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f506d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f5070 push eax */
  push32((uint32_t)(EAX));
  /* 105f5071 call 0x105e5e90 */
  push32(0x105f5076u); f_105e5e90();
  /* 105f5076 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f5079 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f507c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 105f507e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f5081 cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f5084 je 0x105f509a */
  if (C.zf) goto L_105f509a;
  /* 105f5086 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f5089 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 105f508b push ecx */
  push32((uint32_t)(ECX));
  /* 105f508c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f508f mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 105f5091 push eax */
  push32((uint32_t)(EAX));
  /* 105f5092 call 0x105e8e40 */
  push32(0x105f5097u); f_105e8e40();
  /* 105f5097 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_105f509a:;
  /* 105f509a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 105f509d add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f50a0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 105f50a3 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f50a6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f50a9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 105f50ac jmp 0x105f504b */
  goto L_105f504b;
L_105f50ae:;
  /* 105f50ae mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 105f50b1 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 105f50b7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_105f50ba:;
  /* 105f50ba mov esp, ebp */
  ESP = (EBP);
  /* 105f50bc pop ebp */
  EBP = (pop32());
  /* 105f50bd ret  */
  ESPCHK(0x105f4fd0u, _esp0);
  ESP += 4; return;
}

/* FUN_100150c0 @ 0x105f50c0 (237 bytes, 81 insns) */
void f_105f50c0(void) {
  FTRACE(0x105f50c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f50c0 push ebp */
  push32((uint32_t)(EBP));
  /* 105f50c1 mov ebp, esp */
  EBP = (ESP);
  /* 105f50c3 push ecx */
  push32((uint32_t)(ECX));
  /* 105f50c4 cmp dword ptr [0x10610bcc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10610bcc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f50cb jne 0x105f50e2 */
  if (!C.zf) goto L_105f50e2;
  /* 105f50cd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 105f50d0 push eax */
  push32((uint32_t)(EAX));
  /* 105f50d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f50d4 push ecx */
  push32((uint32_t)(ECX));
  /* 105f50d5 call 0x105f51c0 */
  push32(0x105f50dau); f_105f51c0();
  /* 105f50da add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f50dd jmp 0x105f51a9 */
  goto L_105f51a9;
L_105f50e2:;
  /* 105f50e2 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 105f50e4 call 0x105ea240 */
  push32(0x105f50e9u); f_105ea240();
  /* 105f50e9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f50ec jmp 0x105f50f7 */
  goto L_105f50f7;
L_105f50ee:;
  /* 105f50ee mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f50f1 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f50f4 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
L_105f50f7:;
  /* 105f50f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f50fa movzx cx, byte ptr [eax] */
  CX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 105f50fe mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 105f5102 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f5105 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 105f510b test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 105f510d je 0x105f518b */
  if (C.zf) goto L_105f518b;
  /* 105f510f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f5112 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 105f5117 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105f5119 mov cl, byte ptr [eax + 0x10610ce1] */
  CL = (r8((uint32_t)(EAX + 0x10610ce1)));
  /* 105f511f and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 105f5122 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105f5124 je 0x105f5176 */
  if (C.zf) goto L_105f5176;
  /* 105f5126 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f5129 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f512c mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 105f512f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f5132 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105f5134 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 105f5136 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 105f5138 jne 0x105f5148 */
  if (!C.zf) goto L_105f5148;
  /* 105f513a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 105f513c call 0x105ea2e0 */
  push32(0x105f5141u); f_105ea2e0();
  /* 105f5141 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f5144 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f5146 jmp 0x105f51a9 */
  goto L_105f51a9;
L_105f5148:;
  /* 105f5148 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f514b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 105f5151 shl edx, 8 */
  EDX = (sh_shl((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 105f5154 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f5157 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 105f5159 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 105f515b or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 105f515d cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f5160 jne 0x105f5174 */
  if (!C.zf) goto L_105f5174;
  /* 105f5162 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 105f5164 call 0x105ea2e0 */
  push32(0x105f5169u); f_105ea2e0();
  /* 105f5169 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f516c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f516f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 105f5172 jmp 0x105f51a9 */
  goto L_105f51a9;
L_105f5174:;
  /* 105f5174 jmp 0x105f5186 */
  goto L_105f5186;
L_105f5176:;
  /* 105f5176 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f5179 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 105f517f cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f5182 jne 0x105f5186 */
  if (!C.zf) goto L_105f5186;
  /* 105f5184 jmp 0x105f518b */
  goto L_105f518b;
L_105f5186:;
  /* 105f5186 jmp 0x105f50ee */
  goto L_105f50ee;
L_105f518b:;
  /* 105f518b push 0x19 */
  push32((uint32_t)(0x19u));
  /* 105f518d call 0x105ea2e0 */
  push32(0x105f5192u); f_105ea2e0();
  /* 105f5192 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 105f5195 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 105f5198 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105f519d cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 105f51a0 jne 0x105f51a7 */
  if (!C.zf) goto L_105f51a7;
  /* 105f51a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 105f51a5 jmp 0x105f51a9 */
  goto L_105f51a9;
L_105f51a7:;
  /* 105f51a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_105f51a9:;
  /* 105f51a9 mov esp, ebp */
  ESP = (EBP);
  /* 105f51ab pop ebp */
  EBP = (pop32());
  /* 105f51ac ret  */
  ESPCHK(0x105f50c0u, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x105f51c0 (193 bytes, 87 insns) */
void f_105f51c0(void) {
  FTRACE(0x105f51c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f51c0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f51c2 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 105f51c6 push ebx */
  push32((uint32_t)(EBX));
  /* 105f51c7 mov ebx, eax */
  EBX = (EAX);
  /* 105f51c9 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 105f51cc mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 105f51d0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 105f51d6 je 0x105f51eb */
  if (C.zf) goto L_105f51eb;
L_105f51d8:;
  /* 105f51d8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 105f51da inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 105f51db cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105f51dd je 0x105f51b0 */
  if (C.zf) { jmp_ind(0x105f51b0u); return; }
  /* 105f51df test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 105f51e1 je 0x105f5234 */
  if (C.zf) goto L_105f5234;
  /* 105f51e3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 105f51e9 jne 0x105f51d8 */
  if (!C.zf) goto L_105f51d8;
L_105f51eb:;
  /* 105f51eb or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 105f51ed push edi */
  push32((uint32_t)(EDI));
  /* 105f51ee mov eax, ebx */
  EAX = (EBX);
  /* 105f51f0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 105f51f3 push esi */
  push32((uint32_t)(ESI));
  /* 105f51f4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_105f51f6:;
  /* 105f51f6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 105f51f8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 105f51fd mov eax, ecx */
  EAX = (ECX);
  /* 105f51ff mov esi, edi */
  ESI = (EDI);
  /* 105f5201 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 105f5203 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 105f5205 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 105f5207 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 105f520a xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 105f520d xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 105f520f xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 105f5211 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 105f5214 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 105f521a jne 0x105f5238 */
  if (!C.zf) goto L_105f5238;
  /* 105f521c and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 105f5221 je 0x105f51f6 */
  if (C.zf) goto L_105f51f6;
  /* 105f5223 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 105f5228 jne 0x105f5232 */
  if (!C.zf) goto L_105f5232;
  /* 105f522a and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 105f5230 jne 0x105f51f6 */
  if (!C.zf) goto L_105f51f6;
L_105f5232:;
  /* 105f5232 pop esi */
  ESI = (pop32());
  /* 105f5233 pop edi */
  EDI = (pop32());
L_105f5234:;
  /* 105f5234 pop ebx */
  EBX = (pop32());
  /* 105f5235 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 105f5237 ret  */
  ESPCHK(0x105f51c0u, _esp0);
  ESP += 4; return;
L_105f5238:;
  /* 105f5238 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 105f523b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105f523d je 0x105f5275 */
  if (C.zf) goto L_105f5275;
  /* 105f523f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 105f5241 je 0x105f5232 */
  if (C.zf) goto L_105f5232;
  /* 105f5243 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105f5245 je 0x105f526e */
  if (C.zf) goto L_105f526e;
  /* 105f5247 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 105f5249 je 0x105f5232 */
  if (C.zf) goto L_105f5232;
  /* 105f524b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 105f524e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105f5250 je 0x105f5267 */
  if (C.zf) goto L_105f5267;
  /* 105f5252 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 105f5254 je 0x105f5232 */
  if (C.zf) goto L_105f5232;
  /* 105f5256 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 105f5258 je 0x105f5260 */
  if (C.zf) goto L_105f5260;
  /* 105f525a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 105f525c je 0x105f5232 */
  if (C.zf) goto L_105f5232;
  /* 105f525e jmp 0x105f51f6 */
  goto L_105f51f6;
L_105f5260:;
  /* 105f5260 pop esi */
  ESI = (pop32());
  /* 105f5261 pop edi */
  EDI = (pop32());
  /* 105f5262 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 105f5265 pop ebx */
  EBX = (pop32());
  /* 105f5266 ret  */
  ESPCHK(0x105f51c0u, _esp0);
  ESP += 4; return;
L_105f5267:;
  /* 105f5267 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 105f526a pop esi */
  ESI = (pop32());
  /* 105f526b pop edi */
  EDI = (pop32());
  /* 105f526c pop ebx */
  EBX = (pop32());
  /* 105f526d ret  */
  ESPCHK(0x105f51c0u, _esp0);
  ESP += 4; return;
L_105f526e:;
  /* 105f526e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 105f5271 pop esi */
  ESI = (pop32());
  /* 105f5272 pop edi */
  EDI = (pop32());
  /* 105f5273 pop ebx */
  EBX = (pop32());
  /* 105f5274 ret  */
  ESPCHK(0x105f51c0u, _esp0);
  ESP += 4; return;
L_105f5275:;
  /* 105f5275 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 105f5278 pop esi */
  ESI = (pop32());
  /* 105f5279 pop edi */
  EDI = (pop32());
  /* 105f527a pop ebx */
  EBX = (pop32());
  /* 105f527b ret  */
  ESPCHK(0x105f51c0u, _esp0);
  ESP += 4; return;
  /* 105f527c jmp dword ptr [0x10613204] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10613204)))); return;
}

/* RtlUnwind @ 0x105f53fc (6 bytes, 1 insns) */
void f_105f53fc(void) {
  FTRACE(0x105f53fcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 105f53fc jmp dword ptr [0x10613300] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x10613300)))); return;
}

