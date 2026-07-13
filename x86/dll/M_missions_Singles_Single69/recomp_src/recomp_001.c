#include "recomp.h"

/* x64toa @ 0x11b3b710 (242 bytes, 91 insns) */
void f_11b3b710(void) {
  FTRACE(0x11b3b710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3b710 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3b711 mov ebp, esp */
  EBP = (ESP);
  /* 11b3b713 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3b716 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3b719 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b3b71c cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3b720 je 0x11b3b744 */
  if (C.zf) goto L_11b3b744;
  /* 11b3b722 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3b725 mov byte ptr [ecx], 0x2d */
  w8((uint32_t)(ECX), (0x2du));
  /* 11b3b728 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3b72b add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3b72e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b3b731 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3b734 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b3b736 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3b739 adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3b73c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b3b73e mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11b3b741 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11b3b744:;
  /* 11b3b744 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3b747 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11b3b74a:;
  /* 11b3b74a mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b3b74d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3b74f push ecx */
  push32((uint32_t)(ECX));
  /* 11b3b750 push eax */
  push32((uint32_t)(EAX));
  /* 11b3b751 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3b754 push edx */
  push32((uint32_t)(EDX));
  /* 11b3b755 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3b758 push eax */
  push32((uint32_t)(EAX));
  /* 11b3b759 call 0x11b40b30 */
  push32(0x11b3b75eu); f_11b40b30();
  /* 11b3b75e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b3b761 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b3b764 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3b766 push edx */
  push32((uint32_t)(EDX));
  /* 11b3b767 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3b768 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3b76b push eax */
  push32((uint32_t)(EAX));
  /* 11b3b76c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3b76f push ecx */
  push32((uint32_t)(ECX));
  /* 11b3b770 call 0x11b40ac0 */
  push32(0x11b3b775u); f_11b40ac0();
  /* 11b3b775 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11b3b778 mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11b3b77b cmp dword ptr [ebp - 0xc], 9 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3b77f jbe 0x11b3b797 */
  if ((C.cf||C.zf)) goto L_11b3b797;
  /* 11b3b781 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3b784 add edx, 0x57 */
  { uint32_t _a=(EDX),_b=(0x57u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3b787 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3b78a mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11b3b78c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3b78f add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3b792 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b3b795 jmp 0x11b3b7ab */
  goto L_11b3b7ab;
L_11b3b797:;
  /* 11b3b797 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3b79a add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3b79d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3b7a0 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11b3b7a2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3b7a5 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3b7a8 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11b3b7ab:;
  /* 11b3b7ab cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3b7af ja 0x11b3b74a */
  if ((!C.cf&&!C.zf)) goto L_11b3b74a;
  /* 11b3b7b1 jb 0x11b3b7b9 */
  if (C.cf) goto L_11b3b7b9;
  /* 11b3b7b3 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3b7b7 ja 0x11b3b74a */
  if ((!C.cf&&!C.zf)) goto L_11b3b74a;
L_11b3b7b9:;
  /* 11b3b7b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3b7bc mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11b3b7bf mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3b7c2 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3b7c5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b3b7c8:;
  /* 11b3b7c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3b7cb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b3b7cd mov byte ptr [ebp - 0x10], dl */
  w8((uint32_t)(EBP + -0x10), (DL));
  /* 11b3b7d0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3b7d3 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3b7d6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b3b7d8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11b3b7da mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3b7dd mov cl, byte ptr [ebp - 0x10] */
  CL = (r8((uint32_t)(EBP + -0x10)));
  /* 11b3b7e0 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11b3b7e2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3b7e5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3b7e8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b3b7eb mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3b7ee add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3b7f1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b3b7f4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3b7f7 cmp ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3b7fa jb 0x11b3b7c8 */
  if (C.cf) goto L_11b3b7c8;
  /* 11b3b7fc mov esp, ebp */
  ESP = (EBP);
  /* 11b3b7fe pop ebp */
  EBP = (pop32());
  /* 11b3b7ff ret 0x14 */
  ESPCHK(0x11b3b710u, _esp0);
  ESP += 24; return;
}

/* __ui64toa @ 0x11b3b810 (31 bytes, 15 insns) */
void f_11b3b810(void) {
  FTRACE(0x11b3b810u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3b810 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3b811 mov ebp, esp */
  EBP = (ESP);
  /* 11b3b813 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3b815 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b3b818 push eax */
  push32((uint32_t)(EAX));
  /* 11b3b819 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3b81c push ecx */
  push32((uint32_t)(ECX));
  /* 11b3b81d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3b820 push edx */
  push32((uint32_t)(EDX));
  /* 11b3b821 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3b824 push eax */
  push32((uint32_t)(EAX));
  /* 11b3b825 call 0x11b3b710 */
  push32(0x11b3b82au); f_11b3b710();
  /* 11b3b82a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3b82d pop ebp */
  EBP = (pop32());
  /* 11b3b82e ret  */
  ESPCHK(0x11b3b810u, _esp0);
  ESP += 4; return;
}

/* _strlen @ 0x11b3b830 (123 bytes, 44 insns) */
void f_11b3b830(void) {
  FTRACE(0x11b3b830u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3b830 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b3b834 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11b3b83a je 0x11b3b850 */
  if (C.zf) goto L_11b3b850;
L_11b3b83c:;
  /* 11b3b83c mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11b3b83e inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b3b83f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b3b841 je 0x11b3b883 */
  if (C.zf) goto L_11b3b883;
  /* 11b3b843 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11b3b849 jne 0x11b3b83c */
  if (!C.zf) goto L_11b3b83c;
  /* 11b3b84b add eax, 0 */
  { uint32_t _a=(EAX),_b=(0x0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11b3b850:;
  /* 11b3b850 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11b3b852 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11b3b857 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3b859 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b3b85c xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3b85e add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3b861 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11b3b866 je 0x11b3b850 */
  if (C.zf) goto L_11b3b850;
  /* 11b3b868 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11b3b86b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b3b86d je 0x11b3b8a1 */
  if (C.zf) goto L_11b3b8a1;
  /* 11b3b86f test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11b3b871 je 0x11b3b897 */
  if (C.zf) goto L_11b3b897;
  /* 11b3b873 test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11b3b878 je 0x11b3b88d */
  if (C.zf) goto L_11b3b88d;
  /* 11b3b87a test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11b3b87f je 0x11b3b883 */
  if (C.zf) goto L_11b3b883;
  /* 11b3b881 jmp 0x11b3b850 */
  goto L_11b3b850;
L_11b3b883:;
  /* 11b3b883 lea eax, [ecx - 1] */
  EAX = ((uint32_t)(ECX + -0x1));
  /* 11b3b886 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b3b88a sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3b88c ret  */
  ESPCHK(0x11b3b830u, _esp0);
  ESP += 4; return;
L_11b3b88d:;
  /* 11b3b88d lea eax, [ecx - 2] */
  EAX = ((uint32_t)(ECX + -0x2));
  /* 11b3b890 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b3b894 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3b896 ret  */
  ESPCHK(0x11b3b830u, _esp0);
  ESP += 4; return;
L_11b3b897:;
  /* 11b3b897 lea eax, [ecx - 3] */
  EAX = ((uint32_t)(ECX + -0x3));
  /* 11b3b89a mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b3b89e sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3b8a0 ret  */
  ESPCHK(0x11b3b830u, _esp0);
  ESP += 4; return;
L_11b3b8a1:;
  /* 11b3b8a1 lea eax, [ecx - 4] */
  EAX = ((uint32_t)(ECX + -0x4));
  /* 11b3b8a4 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b3b8a8 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3b8aa ret  */
  ESPCHK(0x11b3b830u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8b0 @ 0x11b3b8b0 (249 bytes, 93 insns) */
void f_11b3b8b0(void) {
  FTRACE(0x11b3b8b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3b8b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3b8b1 mov ebp, esp */
  EBP = (ESP);
  /* 11b3b8b3 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3b8b6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b3b8b7 push esi */
  push32((uint32_t)(ESI));
  /* 11b3b8b8 push edi */
  push32((uint32_t)(EDI));
  /* 11b3b8b9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11b3b8bc mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11b3b8bf lea ecx, [ebp + 0x14] */
  ECX = ((uint32_t)(EBP + 0x14));
  /* 11b3b8c2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_11b3b8c5:;
  /* 11b3b8c5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3b8c9 jne 0x11b3b8e9 */
  if (!C.zf) goto L_11b3b8e9;
  /* 11b3b8cb push 0x11b63380 */
  push32((uint32_t)(0x11b63380u));
  /* 11b3b8d0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3b8d2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11b3b8d4 push 0x11b63374 */
  push32((uint32_t)(0x11b63374u));
  /* 11b3b8d9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b3b8db call 0x11b36850 */
  push32(0x11b3b8e0u); f_11b36850();
  /* 11b3b8e0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3b8e3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3b8e6 jne 0x11b3b8e9 */
  if (!C.zf) goto L_11b3b8e9;
  /* 11b3b8e8 int3  */
  x86_unimpl("int3 @ 0x11b3b8e8");
L_11b3b8e9:;
  /* 11b3b8e9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3b8eb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b3b8ed jne 0x11b3b8c5 */
  if (!C.zf) goto L_11b3b8c5;
L_11b3b8ef:;
  /* 11b3b8ef cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3b8f3 jne 0x11b3b913 */
  if (!C.zf) goto L_11b3b913;
  /* 11b3b8f5 push 0x11b63364 */
  push32((uint32_t)(0x11b63364u));
  /* 11b3b8fa push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3b8fc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11b3b8fe push 0x11b63374 */
  push32((uint32_t)(0x11b63374u));
  /* 11b3b903 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b3b905 call 0x11b36850 */
  push32(0x11b3b90au); f_11b36850();
  /* 11b3b90a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3b90d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3b910 jne 0x11b3b913 */
  if (!C.zf) goto L_11b3b913;
  /* 11b3b912 int3  */
  x86_unimpl("int3 @ 0x11b3b912");
L_11b3b913:;
  /* 11b3b913 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3b915 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3b917 jne 0x11b3b8ef */
  if (!C.zf) goto L_11b3b8ef;
  /* 11b3b919 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3b91c mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 11b3b923 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3b926 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3b929 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11b3b92c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3b92f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3b932 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11b3b934 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3b937 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3b93a mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11b3b93d mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b3b940 push edx */
  push32((uint32_t)(EDX));
  /* 11b3b941 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3b944 push eax */
  push32((uint32_t)(EAX));
  /* 11b3b945 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3b948 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3b949 call 0x11b40e30 */
  push32(0x11b3b94eu); f_11b40e30();
  /* 11b3b94e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3b951 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11b3b954 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3b957 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b3b95a sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3b95d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3b960 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11b3b963 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3b966 cmp dword ptr [edx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3b96a jl 0x11b3b98e */
  if ((C.sf!=C.of)) goto L_11b3b98e;
  /* 11b3b96c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3b96f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b3b971 mov byte ptr [ecx], 0 */
  w8((uint32_t)(ECX), (0x0u));
  /* 11b3b974 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3b976 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b3b97c mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11b3b97f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3b982 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b3b984 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3b987 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3b98a mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11b3b98c jmp 0x11b3b99f */
  goto L_11b3b99f;
L_11b3b98e:;
  /* 11b3b98e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3b991 push eax */
  push32((uint32_t)(EAX));
  /* 11b3b992 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3b994 call 0x11b40bb0 */
  push32(0x11b3b999u); f_11b40bb0();
  /* 11b3b999 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3b99c mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_11b3b99f:;
  /* 11b3b99f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b3b9a2 pop edi */
  EDI = (pop32());
  /* 11b3b9a3 pop esi */
  ESI = (pop32());
  /* 11b3b9a4 pop ebx */
  EBX = (pop32());
  /* 11b3b9a5 mov esp, ebp */
  ESP = (EBP);
  /* 11b3b9a7 pop ebp */
  EBP = (pop32());
  /* 11b3b9a8 ret  */
  ESPCHK(0x11b3b8b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9b0 @ 0x11b3b9b0 (7 bytes, 3 insns) */
void f_11b3b9b0(void) {
  FTRACE(0x11b3b9b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3b9b0 push edi */
  push32((uint32_t)(EDI));
  /* 11b3b9b1 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11b3b9b5 jmp 0x11b3ba21 */
  jmp_ind(0x11b3ba21u); return;
}

/* FUN_1000b9c0 @ 0x11b3b9c0 (224 bytes, 84 insns) */
void f_11b3b9c0(void) {
  FTRACE(0x11b3b9c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3b9c0 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b3b9c4 push edi */
  push32((uint32_t)(EDI));
  /* 11b3b9c5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11b3b9cb je 0x11b3b9dc */
  if (C.zf) goto L_11b3b9dc;
L_11b3b9cd:;
  /* 11b3b9cd mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 11b3b9cf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b3b9d0 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b3b9d2 je 0x11b3ba0f */
  if (C.zf) goto L_11b3ba0f;
  /* 11b3b9d4 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11b3b9da jne 0x11b3b9cd */
  if (!C.zf) goto L_11b3b9cd;
L_11b3b9dc:;
  /* 11b3b9dc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11b3b9de mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11b3b9e3 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3b9e5 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b3b9e8 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3b9ea add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3b9ed test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11b3b9f2 je 0x11b3b9dc */
  if (C.zf) goto L_11b3b9dc;
  /* 11b3b9f4 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11b3b9f7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b3b9f9 je 0x11b3ba1e */
  if (C.zf) goto L_11b3ba1e;
  /* 11b3b9fb test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 11b3b9fd je 0x11b3ba19 */
  if (C.zf) goto L_11b3ba19;
  /* 11b3b9ff test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 11b3ba04 je 0x11b3ba14 */
  if (C.zf) goto L_11b3ba14;
  /* 11b3ba06 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 11b3ba0b je 0x11b3ba0f */
  if (C.zf) goto L_11b3ba0f;
  /* 11b3ba0d jmp 0x11b3b9dc */
  goto L_11b3b9dc;
L_11b3ba0f:;
  /* 11b3ba0f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 11b3ba12 jmp 0x11b3ba21 */
  goto L_11b3ba21;
L_11b3ba14:;
  /* 11b3ba14 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 11b3ba17 jmp 0x11b3ba21 */
  goto L_11b3ba21;
L_11b3ba19:;
  /* 11b3ba19 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 11b3ba1c jmp 0x11b3ba21 */
  goto L_11b3ba21;
L_11b3ba1e:;
  /* 11b3ba1e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_11b3ba21:;
  /* 11b3ba21 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11b3ba25 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11b3ba2b je 0x11b3ba46 */
  if (C.zf) goto L_11b3ba46;
L_11b3ba2d:;
  /* 11b3ba2d mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b3ba2f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b3ba30 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11b3ba32 je 0x11b3ba98 */
  if (C.zf) goto L_11b3ba98;
  /* 11b3ba34 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11b3ba36 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b3ba37 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 11b3ba3d jne 0x11b3ba2d */
  if (!C.zf) goto L_11b3ba2d;
  /* 11b3ba3f jmp 0x11b3ba46 */
  goto L_11b3ba46;
L_11b3ba41:;
  /* 11b3ba41 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11b3ba43 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11b3ba46:;
  /* 11b3ba46 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11b3ba4b mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11b3ba4d add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3ba4f xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b3ba52 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3ba54 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b3ba56 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3ba59 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11b3ba5e je 0x11b3ba41 */
  if (C.zf) goto L_11b3ba41;
  /* 11b3ba60 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11b3ba62 je 0x11b3ba98 */
  if (C.zf) goto L_11b3ba98;
  /* 11b3ba64 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11b3ba66 je 0x11b3ba8f */
  if (C.zf) goto L_11b3ba8f;
  /* 11b3ba68 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11b3ba6e je 0x11b3ba82 */
  if (C.zf) goto L_11b3ba82;
  /* 11b3ba70 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11b3ba76 je 0x11b3ba7a */
  if (C.zf) goto L_11b3ba7a;
  /* 11b3ba78 jmp 0x11b3ba41 */
  goto L_11b3ba41;
L_11b3ba7a:;
  /* 11b3ba7a mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11b3ba7c mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b3ba80 pop edi */
  EDI = (pop32());
  /* 11b3ba81 ret  */
  ESPCHK(0x11b3b9c0u, _esp0);
  ESP += 4; return;
L_11b3ba82:;
  /* 11b3ba82 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11b3ba85 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b3ba89 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 11b3ba8d pop edi */
  EDI = (pop32());
  /* 11b3ba8e ret  */
  ESPCHK(0x11b3b9c0u, _esp0);
  ESP += 4; return;
L_11b3ba8f:;
  /* 11b3ba8f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 11b3ba92 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b3ba96 pop edi */
  EDI = (pop32());
  /* 11b3ba97 ret  */
  ESPCHK(0x11b3b9c0u, _esp0);
  ESP += 4; return;
L_11b3ba98:;
  /* 11b3ba98 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 11b3ba9a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b3ba9e pop edi */
  EDI = (pop32());
  /* 11b3ba9f ret  */
  ESPCHK(0x11b3b9c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000baa0 @ 0x11b3baa0 (243 bytes, 91 insns) */
void f_11b3baa0(void) {
  FTRACE(0x11b3baa0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3baa0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3baa1 mov ebp, esp */
  EBP = (ESP);
  /* 11b3baa3 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3baa6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b3baa7 push esi */
  push32((uint32_t)(ESI));
  /* 11b3baa8 push edi */
  push32((uint32_t)(EDI));
  /* 11b3baa9 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11b3baac mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11b3baaf:;
  /* 11b3baaf cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3bab3 jne 0x11b3bad3 */
  if (!C.zf) goto L_11b3bad3;
  /* 11b3bab5 push 0x11b63380 */
  push32((uint32_t)(0x11b63380u));
  /* 11b3baba push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3babc push 0x5a */
  push32((uint32_t)(0x5au));
  /* 11b3babe push 0x11b63390 */
  push32((uint32_t)(0x11b63390u));
  /* 11b3bac3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b3bac5 call 0x11b36850 */
  push32(0x11b3bacau); f_11b36850();
  /* 11b3baca add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3bacd cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3bad0 jne 0x11b3bad3 */
  if (!C.zf) goto L_11b3bad3;
  /* 11b3bad2 int3  */
  x86_unimpl("int3 @ 0x11b3bad2");
L_11b3bad3:;
  /* 11b3bad3 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3bad5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b3bad7 jne 0x11b3baaf */
  if (!C.zf) goto L_11b3baaf;
L_11b3bad9:;
  /* 11b3bad9 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3badd jne 0x11b3bafd */
  if (!C.zf) goto L_11b3bafd;
  /* 11b3badf push 0x11b63364 */
  push32((uint32_t)(0x11b63364u));
  /* 11b3bae4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3bae6 push 0x5b */
  push32((uint32_t)(0x5bu));
  /* 11b3bae8 push 0x11b63390 */
  push32((uint32_t)(0x11b63390u));
  /* 11b3baed push 2 */
  push32((uint32_t)(0x2u));
  /* 11b3baef call 0x11b36850 */
  push32(0x11b3baf4u); f_11b36850();
  /* 11b3baf4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3baf7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3bafa jne 0x11b3bafd */
  if (!C.zf) goto L_11b3bafd;
  /* 11b3bafc int3  */
  x86_unimpl("int3 @ 0x11b3bafc");
L_11b3bafd:;
  /* 11b3bafd xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3baff test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b3bb01 jne 0x11b3bad9 */
  if (!C.zf) goto L_11b3bad9;
  /* 11b3bb03 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3bb06 mov dword ptr [eax + 0xc], 0x42 */
  w32((uint32_t)(EAX + 0xc), (0x42u));
  /* 11b3bb0d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3bb10 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3bb13 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11b3bb16 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3bb19 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3bb1c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11b3bb1e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3bb21 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3bb24 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11b3bb27 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b3bb2a push ecx */
  push32((uint32_t)(ECX));
  /* 11b3bb2b mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3bb2e push edx */
  push32((uint32_t)(EDX));
  /* 11b3bb2f mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3bb32 push eax */
  push32((uint32_t)(EAX));
  /* 11b3bb33 call 0x11b40e30 */
  push32(0x11b3bb38u); f_11b40e30();
  /* 11b3bb38 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3bb3b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11b3bb3e mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3bb41 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b3bb44 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3bb47 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3bb4a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11b3bb4d mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3bb50 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3bb54 jl 0x11b3bb78 */
  if ((C.sf!=C.of)) goto L_11b3bb78;
  /* 11b3bb56 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3bb59 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b3bb5b mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11b3bb5e xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3bb60 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b3bb66 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11b3bb69 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3bb6c mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b3bb6e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3bb71 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3bb74 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11b3bb76 jmp 0x11b3bb89 */
  goto L_11b3bb89;
L_11b3bb78:;
  /* 11b3bb78 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3bb7b push edx */
  push32((uint32_t)(EDX));
  /* 11b3bb7c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3bb7e call 0x11b40bb0 */
  push32(0x11b3bb83u); f_11b40bb0();
  /* 11b3bb83 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3bb86 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
L_11b3bb89:;
  /* 11b3bb89 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b3bb8c pop edi */
  EDI = (pop32());
  /* 11b3bb8d pop esi */
  ESI = (pop32());
  /* 11b3bb8e pop ebx */
  EBX = (pop32());
  /* 11b3bb8f mov esp, ebp */
  ESP = (EBP);
  /* 11b3bb91 pop ebp */
  EBP = (pop32());
  /* 11b3bb92 ret  */
  ESPCHK(0x11b3baa0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bba0 @ 0x11b3bba0 (47 bytes, 17 insns) */
void f_11b3bba0(void) {
  FTRACE(0x11b3bba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3bba0 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3bba1 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3bba6 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 11b3bbaa jb 0x11b3bbc0 */
  if (C.cf) goto L_11b3bbc0;
L_11b3bbac:;
  /* 11b3bbac sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3bbb2 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3bbb7 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11b3bbb9 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3bbbe jae 0x11b3bbac */
  if (!C.cf) goto L_11b3bbac;
L_11b3bbc0:;
  /* 11b3bbc0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3bbc2 mov eax, esp */
  EAX = (ESP);
  /* 11b3bbc4 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 11b3bbc6 mov esp, ecx */
  ESP = (ECX);
  /* 11b3bbc8 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b3bbca mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b3bbcd push eax */
  push32((uint32_t)(EAX));
  /* 11b3bbce ret  */
  ESPCHK(0x11b3bba0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bbd0 @ 0x11b3bbd0 (507 bytes, 151 insns) [1 switch table(s)] */
void f_11b3bbd0(void) {
  FTRACE(0x11b3bbd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3bbd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3bbd1 mov ebp, esp */
  EBP = (ESP);
  /* 11b3bbd3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3bbd6 push esi */
  push32((uint32_t)(ESI));
  /* 11b3bbd7 cmp dword ptr [ebp + 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3bbdb je 0x11b3bbe3 */
  if (C.zf) goto L_11b3bbe3;
  /* 11b3bbdd cmp dword ptr [ebp + 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3bbe1 jne 0x11b3bbe8 */
  if (!C.zf) goto L_11b3bbe8;
L_11b3bbe3:;
  /* 11b3bbe3 jmp 0x11b3bdb8 */
  goto L_11b3bdb8;
L_11b3bbe8:;
  /* 11b3bbe8 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3bbec je 0x11b3bc04 */
  if (C.zf) goto L_11b3bc04;
  /* 11b3bbee cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3bbf2 je 0x11b3bc04 */
  if (C.zf) goto L_11b3bc04;
  /* 11b3bbf4 cmp dword ptr [ebp + 8], 0x16 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x16u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3bbf8 je 0x11b3bc04 */
  if (C.zf) goto L_11b3bc04;
  /* 11b3bbfa cmp dword ptr [ebp + 8], 0xf */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3bbfe jne 0x11b3bce1 */
  if (!C.zf) goto L_11b3bce1;
L_11b3bc04:;
  /* 11b3bc04 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b3bc06 call 0x11b3a900 */
  push32(0x11b3bc0bu); f_11b3a900();
  /* 11b3bc0b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3bc0e cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3bc12 je 0x11b3bc1a */
  if (C.zf) goto L_11b3bc1a;
  /* 11b3bc14 cmp dword ptr [ebp + 8], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3bc18 jne 0x11b3bc5f */
  if (!C.zf) goto L_11b3bc5f;
L_11b3bc1a:;
  /* 11b3bc1a cmp dword ptr [0x11b67da4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67da4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3bc21 jne 0x11b3bc5f */
  if (!C.zf) goto L_11b3bc5f;
  /* 11b3bc23 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b3bc25 push 0x11b3be00 */
  push32((uint32_t)(0x11b3be00u));
  /* 11b3bc2a call dword ptr [0x11b6a350] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a350))), 0x11b3bc30u);
  /* 11b3bc30 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3bc33 jne 0x11b3bc41 */
  if (!C.zf) goto L_11b3bc41;
  /* 11b3bc35 mov dword ptr [0x11b67da4], 1 */
  w32((uint32_t)(0x11b67da4), (0x1u));
  /* 11b3bc3f jmp 0x11b3bc5f */
  goto L_11b3bc5f;
L_11b3bc41:;
  /* 11b3bc41 call dword ptr [0x11b6a3cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3cc))), 0x11b3bc47u);
  /* 11b3bc47 mov esi, eax */
  ESI = (EAX);
  /* 11b3bc49 call 0x11b41d80 */
  push32(0x11b3bc4eu); f_11b41d80();
  /* 11b3bc4e mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 11b3bc50 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b3bc52 call 0x11b3a9a0 */
  push32(0x11b3bc57u); f_11b3a9a0();
  /* 11b3bc57 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3bc5a jmp 0x11b3bdb8 */
  goto L_11b3bdb8;
L_11b3bc5f:;
  /* 11b3bc5f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3bc62 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11b3bc65 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3bc68 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3bc6b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11b3bc6e cmp dword ptr [ebp - 0x10], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3bc72 ja 0x11b3bcd2 */
  if ((!C.cf&&!C.zf)) goto L_11b3bcd2;
  /* 11b3bc74 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3bc77 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3bc79 mov dl, byte ptr [eax + 0x11b3bddf] */
  DL = (r8((uint32_t)(EAX + 0x11b3bddf)));
  /* 11b3bc7f jmp dword ptr [edx*4 + 0x11b3bdcb] */
  switch (EDX) {
    case 0: goto L_11b3bc86;
    case 1: goto L_11b3bcc0;
    case 2: goto L_11b3bc9a;
    case 3: goto L_11b3bcad;
    case 4: goto L_11b3bcd2;
    default: x86_unimpl("switch@0x11b3bc7f out of table"); return;
  }
L_11b3bc86:;
  /* 11b3bc86 mov ecx, dword ptr [0x11b67d94] */
  ECX = (r32((uint32_t)(0x11b67d94)));
  /* 11b3bc8c mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b3bc8f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3bc92 mov dword ptr [0x11b67d94], edx */
  w32((uint32_t)(0x11b67d94), (EDX));
  /* 11b3bc98 jmp 0x11b3bcd2 */
  goto L_11b3bcd2;
L_11b3bc9a:;
  /* 11b3bc9a mov eax, dword ptr [0x11b67d98] */
  EAX = (r32((uint32_t)(0x11b67d98)));
  /* 11b3bc9f mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b3bca2 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3bca5 mov dword ptr [0x11b67d98], ecx */
  w32((uint32_t)(0x11b67d98), (ECX));
  /* 11b3bcab jmp 0x11b3bcd2 */
  goto L_11b3bcd2;
L_11b3bcad:;
  /* 11b3bcad mov edx, dword ptr [0x11b67d9c] */
  EDX = (r32((uint32_t)(0x11b67d9c)));
  /* 11b3bcb3 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11b3bcb6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3bcb9 mov dword ptr [0x11b67d9c], eax */
  w32((uint32_t)(0x11b67d9c), (EAX));
  /* 11b3bcbe jmp 0x11b3bcd2 */
  goto L_11b3bcd2;
L_11b3bcc0:;
  /* 11b3bcc0 mov ecx, dword ptr [0x11b67da0] */
  ECX = (r32((uint32_t)(0x11b67da0)));
  /* 11b3bcc6 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b3bcc9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3bccc mov dword ptr [0x11b67da0], edx */
  w32((uint32_t)(0x11b67da0), (EDX));
L_11b3bcd2:;
  /* 11b3bcd2 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b3bcd4 call 0x11b3a9a0 */
  push32(0x11b3bcd9u); f_11b3a9a0();
  /* 11b3bcd9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3bcdc jmp 0x11b3bdb3 */
  goto L_11b3bdb3;
L_11b3bce1:;
  /* 11b3bce1 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3bce5 je 0x11b3bcf8 */
  if (C.zf) goto L_11b3bcf8;
  /* 11b3bce7 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3bceb je 0x11b3bcf8 */
  if (C.zf) goto L_11b3bcf8;
  /* 11b3bced cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3bcf1 je 0x11b3bcf8 */
  if (C.zf) goto L_11b3bcf8;
  /* 11b3bcf3 jmp 0x11b3bdb8 */
  goto L_11b3bdb8;
L_11b3bcf8:;
  /* 11b3bcf8 call 0x11b36480 */
  push32(0x11b3bcfdu); f_11b36480();
  /* 11b3bcfd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b3bd00 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3bd03 cmp dword ptr [eax + 0x50], 0x11b65c30 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x11b65c30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3bd0a jne 0x11b3bd55 */
  if (!C.zf) goto L_11b3bd55;
  /* 11b3bd0c push 0x133 */
  push32((uint32_t)(0x133u));
  /* 11b3bd11 push 0x11b6339c */
  push32((uint32_t)(0x11b6339cu));
  /* 11b3bd16 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b3bd18 mov ecx, dword ptr [0x11b65cb0] */
  ECX = (r32((uint32_t)(0x11b65cb0)));
  /* 11b3bd1e push ecx */
  push32((uint32_t)(ECX));
  /* 11b3bd1f call 0x11b37ce0 */
  push32(0x11b3bd24u); f_11b37ce0();
  /* 11b3bd24 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3bd27 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3bd2a mov dword ptr [edx + 0x50], eax */
  w32((uint32_t)(EDX + 0x50), (EAX));
  /* 11b3bd2d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3bd30 cmp dword ptr [eax + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3bd34 je 0x11b3bd53 */
  if (C.zf) goto L_11b3bd53;
  /* 11b3bd36 mov ecx, dword ptr [0x11b65cb0] */
  ECX = (r32((uint32_t)(0x11b65cb0)));
  /* 11b3bd3c push ecx */
  push32((uint32_t)(ECX));
  /* 11b3bd3d push 0x11b65c30 */
  push32((uint32_t)(0x11b65c30u));
  /* 11b3bd42 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3bd45 mov eax, dword ptr [edx + 0x50] */
  EAX = (r32((uint32_t)(EDX + 0x50)));
  /* 11b3bd48 push eax */
  push32((uint32_t)(EAX));
  /* 11b3bd49 call 0x11b403a0 */
  push32(0x11b3bd4eu); f_11b403a0();
  /* 11b3bd4e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3bd51 jmp 0x11b3bd55 */
  goto L_11b3bd55;
L_11b3bd53:;
  /* 11b3bd53 jmp 0x11b3bdb8 */
  goto L_11b3bdb8;
L_11b3bd55:;
  /* 11b3bd55 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3bd58 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11b3bd5b push edx */
  push32((uint32_t)(EDX));
  /* 11b3bd5c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3bd5f push eax */
  push32((uint32_t)(EAX));
  /* 11b3bd60 call 0x11b3c0e0 */
  push32(0x11b3bd65u); f_11b3c0e0();
  /* 11b3bd65 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3bd68 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b3bd6b cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3bd6f jne 0x11b3bd73 */
  if (!C.zf) goto L_11b3bd73;
  /* 11b3bd71 jmp 0x11b3bdb8 */
  goto L_11b3bdb8;
L_11b3bd73:;
  /* 11b3bd73 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3bd76 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11b3bd79 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11b3bd7c:;
  /* 11b3bd7c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3bd7f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b3bd82 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3bd85 jne 0x11b3bdb3 */
  if (!C.zf) goto L_11b3bdb3;
  /* 11b3bd87 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3bd8a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3bd8d mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11b3bd90 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3bd93 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3bd96 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b3bd99 mov edx, dword ptr [0x11b65cb4] */
  EDX = (r32((uint32_t)(0x11b65cb4)));
  /* 11b3bd9f imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b3bda2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3bda5 mov ecx, dword ptr [eax + 0x50] */
  ECX = (r32((uint32_t)(EAX + 0x50)));
  /* 11b3bda8 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3bdaa cmp dword ptr [ebp - 8], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3bdad jb 0x11b3bdb1 */
  if (C.cf) goto L_11b3bdb1;
  /* 11b3bdaf jmp 0x11b3bdb3 */
  goto L_11b3bdb3;
L_11b3bdb1:;
  /* 11b3bdb1 jmp 0x11b3bd7c */
  goto L_11b3bd7c;
L_11b3bdb3:;
  /* 11b3bdb3 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3bdb6 jmp 0x11b3bdc6 */
  goto L_11b3bdc6;
L_11b3bdb8:;
  /* 11b3bdb8 call 0x11b41d70 */
  push32(0x11b3bdbdu); f_11b41d70();
  /* 11b3bdbd mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 11b3bdc3 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11b3bdc6:;
  /* 11b3bdc6 pop esi */
  ESI = (pop32());
  /* 11b3bdc7 mov esp, ebp */
  ESP = (EBP);
  /* 11b3bdc9 pop ebp */
  EBP = (pop32());
  /* 11b3bdca ret  */
  ESPCHK(0x11b3bbd0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be00 @ 0x11b3be00 (146 bytes, 45 insns) */
void f_11b3be00(void) {
  FTRACE(0x11b3be00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3be00 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3be01 mov ebp, esp */
  EBP = (ESP);
  /* 11b3be03 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3be06 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b3be08 call 0x11b3a900 */
  push32(0x11b3be0du); f_11b3a900();
  /* 11b3be0d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3be10 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3be14 jne 0x11b3be2e */
  if (!C.zf) goto L_11b3be2e;
  /* 11b3be16 mov dword ptr [ebp - 8], 0x11b67d94 */
  w32((uint32_t)(EBP + -0x8), (0x11b67d94u));
  /* 11b3be1d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3be20 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b3be22 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b3be25 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11b3be2c jmp 0x11b3be44 */
  goto L_11b3be44;
L_11b3be2e:;
  /* 11b3be2e mov dword ptr [ebp - 8], 0x11b67d98 */
  w32((uint32_t)(EBP + -0x8), (0x11b67d98u));
  /* 11b3be35 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3be38 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b3be3a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b3be3d mov dword ptr [ebp - 4], 0x15 */
  w32((uint32_t)(EBP + -0x4), (0x15u));
L_11b3be44:;
  /* 11b3be44 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3be48 jne 0x11b3be58 */
  if (!C.zf) goto L_11b3be58;
  /* 11b3be4a push 1 */
  push32((uint32_t)(0x1u));
  /* 11b3be4c call 0x11b3a9a0 */
  push32(0x11b3be51u); f_11b3a9a0();
  /* 11b3be51 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3be54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3be56 jmp 0x11b3be8c */
  goto L_11b3be8c;
L_11b3be58:;
  /* 11b3be58 cmp dword ptr [ebp - 0xc], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3be5c je 0x11b3be7d */
  if (C.zf) goto L_11b3be7d;
  /* 11b3be5e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3be61 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11b3be67 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b3be69 call 0x11b3a9a0 */
  push32(0x11b3be6eu); f_11b3a9a0();
  /* 11b3be6e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3be71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3be74 push edx */
  push32((uint32_t)(EDX));
  /* 11b3be75 call dword ptr [ebp - 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0xc))), 0x11b3be78u);
  /* 11b3be78 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3be7b jmp 0x11b3be87 */
  goto L_11b3be87;
L_11b3be7d:;
  /* 11b3be7d push 1 */
  push32((uint32_t)(0x1u));
  /* 11b3be7f call 0x11b3a9a0 */
  push32(0x11b3be84u); f_11b3a9a0();
  /* 11b3be84 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b3be87:;
  /* 11b3be87 mov eax, 1 */
  EAX = (0x1u);
L_11b3be8c:;
  /* 11b3be8c mov esp, ebp */
  ESP = (EBP);
  /* 11b3be8e pop ebp */
  EBP = (pop32());
  /* 11b3be8f ret 4 */
  ESPCHK(0x11b3be00u, _esp0);
  ESP += 8; return;
}

/* FUN_1000bea0 @ 0x11b3bea0 (522 bytes, 162 insns) [1 switch table(s)] */
void f_11b3bea0(void) {
  FTRACE(0x11b3bea0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3bea0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3bea1 mov ebp, esp */
  EBP = (ESP);
  /* 11b3bea3 sub esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3bea6 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11b3bead mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3beb0 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11b3beb3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b3beb6 sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3beb9 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11b3bebc cmp dword ptr [ebp - 0x20], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x14u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3bec0 ja 0x11b3bf6e */
  if ((!C.cf&&!C.zf)) goto L_11b3bf6e;
  /* 11b3bec6 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b3bec9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3becb mov dl, byte ptr [eax + 0x11b3c0c2] */
  DL = (r8((uint32_t)(EAX + 0x11b3c0c2)));
  /* 11b3bed1 jmp dword ptr [edx*4 + 0x11b3c0aa] */
  switch (EDX) {
    case 0: goto L_11b3bed8;
    case 1: goto L_11b3bf43;
    case 2: goto L_11b3bf29;
    case 3: goto L_11b3bef5;
    case 4: goto L_11b3bf0f;
    case 5: goto L_11b3bf6e;
    default: x86_unimpl("switch@0x11b3bed1 out of table"); return;
  }
L_11b3bed8:;
  /* 11b3bed8 mov dword ptr [ebp - 0x18], 0x11b67d94 */
  w32((uint32_t)(EBP + -0x18), (0x11b67d94u));
  /* 11b3bedf mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3bee2 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b3bee4 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11b3bee7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3beea add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3beed mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b3bef0 jmp 0x11b3bf76 */
  goto L_11b3bf76;
L_11b3bef5:;
  /* 11b3bef5 mov dword ptr [ebp - 0x18], 0x11b67d98 */
  w32((uint32_t)(EBP + -0x18), (0x11b67d98u));
  /* 11b3befc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3beff mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b3bf01 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11b3bf04 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3bf07 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3bf0a mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b3bf0d jmp 0x11b3bf76 */
  goto L_11b3bf76;
L_11b3bf0f:;
  /* 11b3bf0f mov dword ptr [ebp - 0x18], 0x11b67d9c */
  w32((uint32_t)(EBP + -0x18), (0x11b67d9cu));
  /* 11b3bf16 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3bf19 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b3bf1b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11b3bf1e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3bf21 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3bf24 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b3bf27 jmp 0x11b3bf76 */
  goto L_11b3bf76;
L_11b3bf29:;
  /* 11b3bf29 mov dword ptr [ebp - 0x18], 0x11b67da0 */
  w32((uint32_t)(EBP + -0x18), (0x11b67da0u));
  /* 11b3bf30 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3bf33 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b3bf35 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11b3bf38 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3bf3b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3bf3e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b3bf41 jmp 0x11b3bf76 */
  goto L_11b3bf76;
L_11b3bf43:;
  /* 11b3bf43 call 0x11b36480 */
  push32(0x11b3bf48u); f_11b36480();
  /* 11b3bf48 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b3bf4b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3bf4e mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11b3bf51 push edx */
  push32((uint32_t)(EDX));
  /* 11b3bf52 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3bf55 push eax */
  push32((uint32_t)(EAX));
  /* 11b3bf56 call 0x11b3c0e0 */
  push32(0x11b3bf5bu); f_11b3c0e0();
  /* 11b3bf5b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3bf5e add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3bf61 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11b3bf64 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3bf67 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b3bf69 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11b3bf6c jmp 0x11b3bf76 */
  goto L_11b3bf76;
L_11b3bf6e:;
  /* 11b3bf6e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b3bf71 jmp 0x11b3c0a6 */
  goto L_11b3c0a6;
L_11b3bf76:;
  /* 11b3bf76 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3bf7a je 0x11b3bf86 */
  if (C.zf) goto L_11b3bf86;
  /* 11b3bf7c push 1 */
  push32((uint32_t)(0x1u));
  /* 11b3bf7e call 0x11b3a900 */
  push32(0x11b3bf83u); f_11b3a900();
  /* 11b3bf83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b3bf86:;
  /* 11b3bf86 cmp dword ptr [ebp - 0x1c], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3bf8a jne 0x11b3bfa3 */
  if (!C.zf) goto L_11b3bfa3;
  /* 11b3bf8c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3bf90 je 0x11b3bf9c */
  if (C.zf) goto L_11b3bf9c;
  /* 11b3bf92 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b3bf94 call 0x11b3a9a0 */
  push32(0x11b3bf99u); f_11b3a9a0();
  /* 11b3bf99 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b3bf9c:;
  /* 11b3bf9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3bf9e jmp 0x11b3c0a6 */
  goto L_11b3c0a6;
L_11b3bfa3:;
  /* 11b3bfa3 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3bfa7 jne 0x11b3bfc0 */
  if (!C.zf) goto L_11b3bfc0;
  /* 11b3bfa9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3bfad je 0x11b3bfb9 */
  if (C.zf) goto L_11b3bfb9;
  /* 11b3bfaf push 1 */
  push32((uint32_t)(0x1u));
  /* 11b3bfb1 call 0x11b3a9a0 */
  push32(0x11b3bfb6u); f_11b3a9a0();
  /* 11b3bfb6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b3bfb9:;
  /* 11b3bfb9 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b3bfbb call 0x11b37750 */
  push32(0x11b3bfc0u); f_11b37750();
L_11b3bfc0:;
  /* 11b3bfc0 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3bfc4 je 0x11b3bfd2 */
  if (C.zf) goto L_11b3bfd2;
  /* 11b3bfc6 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3bfca je 0x11b3bfd2 */
  if (C.zf) goto L_11b3bfd2;
  /* 11b3bfcc cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3bfd0 jne 0x11b3bffe */
  if (!C.zf) goto L_11b3bffe;
L_11b3bfd2:;
  /* 11b3bfd2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3bfd5 mov ecx, dword ptr [eax + 0x54] */
  ECX = (r32((uint32_t)(EAX + 0x54)));
  /* 11b3bfd8 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11b3bfdb mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3bfde mov dword ptr [edx + 0x54], 0 */
  w32((uint32_t)(EDX + 0x54), (0x0u));
  /* 11b3bfe5 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3bfe9 jne 0x11b3bffe */
  if (!C.zf) goto L_11b3bffe;
  /* 11b3bfeb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3bfee mov ecx, dword ptr [eax + 0x58] */
  ECX = (r32((uint32_t)(EAX + 0x58)));
  /* 11b3bff1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b3bff4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3bff7 mov dword ptr [edx + 0x58], 0x8c */
  w32((uint32_t)(EDX + 0x58), (0x8cu));
L_11b3bffe:;
  /* 11b3bffe cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3c002 jne 0x11b3c040 */
  if (!C.zf) goto L_11b3c040;
  /* 11b3c004 mov eax, dword ptr [0x11b65ca8] */
  EAX = (r32((uint32_t)(0x11b65ca8)));
  /* 11b3c009 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11b3c00c jmp 0x11b3c017 */
  goto L_11b3c017;
L_11b3c00e:;
  /* 11b3c00e mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3c011 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3c014 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11b3c017:;
  /* 11b3c017 mov edx, dword ptr [0x11b65ca8] */
  EDX = (r32((uint32_t)(0x11b65ca8)));
  /* 11b3c01d add edx, dword ptr [0x11b65cac] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11b65cac))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3c023 cmp dword ptr [ebp - 0x10], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3c026 jge 0x11b3c03e */
  if ((C.sf==C.of)) goto L_11b3c03e;
  /* 11b3c028 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3c02b imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b3c02e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3c031 mov edx, dword ptr [ecx + 0x50] */
  EDX = (r32((uint32_t)(ECX + 0x50)));
  /* 11b3c034 mov dword ptr [edx + eax + 8], 0 */
  w32((uint32_t)(EDX + EAX*1 + 0x8), (0x0u));
  /* 11b3c03c jmp 0x11b3c00e */
  goto L_11b3c00e;
L_11b3c03e:;
  /* 11b3c03e jmp 0x11b3c049 */
  goto L_11b3c049;
L_11b3c040:;
  /* 11b3c040 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3c043 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11b3c049:;
  /* 11b3c049 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3c04d je 0x11b3c059 */
  if (C.zf) goto L_11b3c059;
  /* 11b3c04f push 1 */
  push32((uint32_t)(0x1u));
  /* 11b3c051 call 0x11b3a9a0 */
  push32(0x11b3c056u); f_11b3a9a0();
  /* 11b3c056 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b3c059:;
  /* 11b3c059 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3c05d jne 0x11b3c070 */
  if (!C.zf) goto L_11b3c070;
  /* 11b3c05f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3c062 mov edx, dword ptr [ecx + 0x58] */
  EDX = (r32((uint32_t)(ECX + 0x58)));
  /* 11b3c065 push edx */
  push32((uint32_t)(EDX));
  /* 11b3c066 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b3c068 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x11b3c06bu);
  /* 11b3c06b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3c06e jmp 0x11b3c07a */
  goto L_11b3c07a;
L_11b3c070:;
  /* 11b3c070 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3c073 push eax */
  push32((uint32_t)(EAX));
  /* 11b3c074 call dword ptr [ebp - 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x1c))), 0x11b3c077u);
  /* 11b3c077 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b3c07a:;
  /* 11b3c07a cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3c07e je 0x11b3c08c */
  if (C.zf) goto L_11b3c08c;
  /* 11b3c080 cmp dword ptr [ebp + 8], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3c084 je 0x11b3c08c */
  if (C.zf) goto L_11b3c08c;
  /* 11b3c086 cmp dword ptr [ebp + 8], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3c08a jne 0x11b3c0a4 */
  if (!C.zf) goto L_11b3c0a4;
L_11b3c08c:;
  /* 11b3c08c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3c08f mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3c092 mov dword ptr [ecx + 0x54], edx */
  w32((uint32_t)(ECX + 0x54), (EDX));
  /* 11b3c095 cmp dword ptr [ebp + 8], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3c099 jne 0x11b3c0a4 */
  if (!C.zf) goto L_11b3c0a4;
  /* 11b3c09b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3c09e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3c0a1 mov dword ptr [eax + 0x58], ecx */
  w32((uint32_t)(EAX + 0x58), (ECX));
L_11b3c0a4:;
  /* 11b3c0a4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b3c0a6:;
  /* 11b3c0a6 mov esp, ebp */
  ESP = (EBP);
  /* 11b3c0a8 pop ebp */
  EBP = (pop32());
  /* 11b3c0a9 ret  */
  ESPCHK(0x11b3bea0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0e0 @ 0x11b3c0e0 (91 bytes, 35 insns) */
void f_11b3c0e0(void) {
  FTRACE(0x11b3c0e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3c0e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3c0e1 mov ebp, esp */
  EBP = (ESP);
  /* 11b3c0e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3c0e4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3c0e7 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b3c0ea:;
  /* 11b3c0ea mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3c0ed mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b3c0f0 cmp edx, dword ptr [ebp + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3c0f3 je 0x11b3c113 */
  if (C.zf) goto L_11b3c113;
  /* 11b3c0f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3c0f8 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3c0fb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b3c0fe mov ecx, dword ptr [0x11b65cb4] */
  ECX = (r32((uint32_t)(0x11b65cb4)));
  /* 11b3c104 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b3c107 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3c10a add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3c10c cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3c10f jae 0x11b3c113 */
  if (!C.cf) goto L_11b3c113;
  /* 11b3c111 jmp 0x11b3c0ea */
  goto L_11b3c0ea;
L_11b3c113:;
  /* 11b3c113 mov eax, dword ptr [0x11b65cb4] */
  EAX = (r32((uint32_t)(0x11b65cb4)));
  /* 11b3c118 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b3c11b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3c11e add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3c120 cmp dword ptr [ebp - 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3c123 jae 0x11b3c135 */
  if (!C.cf) goto L_11b3c135;
  /* 11b3c125 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3c128 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b3c12b cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3c12e jne 0x11b3c135 */
  if (!C.zf) goto L_11b3c135;
  /* 11b3c130 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3c133 jmp 0x11b3c137 */
  goto L_11b3c137;
L_11b3c135:;
  /* 11b3c135 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b3c137:;
  /* 11b3c137 mov esp, ebp */
  ESP = (EBP);
  /* 11b3c139 pop ebp */
  EBP = (pop32());
  /* 11b3c13a ret  */
  ESPCHK(0x11b3c0e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c140 @ 0x11b3c140 (13 bytes, 6 insns) */
void f_11b3c140(void) {
  FTRACE(0x11b3c140u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3c140 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3c141 mov ebp, esp */
  EBP = (ESP);
  /* 11b3c143 call 0x11b36480 */
  push32(0x11b3c148u); f_11b36480();
  /* 11b3c148 add eax, 0x58 */
  { uint32_t _a=(EAX),_b=(0x58u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3c14b pop ebp */
  EBP = (pop32());
  /* 11b3c14c ret  */
  ESPCHK(0x11b3c140u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c150 @ 0x11b3c150 (13 bytes, 6 insns) */
void f_11b3c150(void) {
  FTRACE(0x11b3c150u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3c150 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3c151 mov ebp, esp */
  EBP = (ESP);
  /* 11b3c153 call 0x11b36480 */
  push32(0x11b3c158u); f_11b36480();
  /* 11b3c158 add eax, 0x54 */
  { uint32_t _a=(EAX),_b=(0x54u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3c15b pop ebp */
  EBP = (pop32());
  /* 11b3c15c ret  */
  ESPCHK(0x11b3c150u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c160 @ 0x11b3c160 (187 bytes, 54 insns) */
void f_11b3c160(void) {
  FTRACE(0x11b3c160u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3c160 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3c161 mov ebp, esp */
  EBP = (ESP);
  /* 11b3c163 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3c166 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b3c16d cmp dword ptr [0x11b67da8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67da8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3c174 jne 0x11b3c1d3 */
  if (!C.zf) goto L_11b3c1d3;
  /* 11b3c176 push 0x11b6273c */
  push32((uint32_t)(0x11b6273cu));
  /* 11b3c17b call dword ptr [0x11b6a3ec] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3ec))), 0x11b3c181u);
  /* 11b3c181 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b3c184 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3c188 je 0x11b3c1a7 */
  if (C.zf) goto L_11b3c1a7;
  /* 11b3c18a push 0x11b633cc */
  push32((uint32_t)(0x11b633ccu));
  /* 11b3c18f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3c192 push eax */
  push32((uint32_t)(EAX));
  /* 11b3c193 call dword ptr [0x11b6a3e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3e8))), 0x11b3c199u);
  /* 11b3c199 mov dword ptr [0x11b67da8], eax */
  w32((uint32_t)(0x11b67da8), (EAX));
  /* 11b3c19e cmp dword ptr [0x11b67da8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67da8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3c1a5 jne 0x11b3c1ab */
  if (!C.zf) goto L_11b3c1ab;
L_11b3c1a7:;
  /* 11b3c1a7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3c1a9 jmp 0x11b3c217 */
  goto L_11b3c217;
L_11b3c1ab:;
  /* 11b3c1ab push 0x11b633bc */
  push32((uint32_t)(0x11b633bcu));
  /* 11b3c1b0 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3c1b3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3c1b4 call dword ptr [0x11b6a3e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3e8))), 0x11b3c1bau);
  /* 11b3c1ba mov dword ptr [0x11b67dac], eax */
  w32((uint32_t)(0x11b67dac), (EAX));
  /* 11b3c1bf push 0x11b633a8 */
  push32((uint32_t)(0x11b633a8u));
  /* 11b3c1c4 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3c1c7 push edx */
  push32((uint32_t)(EDX));
  /* 11b3c1c8 call dword ptr [0x11b6a3e8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3e8))), 0x11b3c1ceu);
  /* 11b3c1ce mov dword ptr [0x11b67db0], eax */
  w32((uint32_t)(0x11b67db0), (EAX));
L_11b3c1d3:;
  /* 11b3c1d3 cmp dword ptr [0x11b67dac], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67dac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3c1da je 0x11b3c1e5 */
  if (C.zf) goto L_11b3c1e5;
  /* 11b3c1dc call dword ptr [0x11b67dac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b67dac))), 0x11b3c1e2u);
  /* 11b3c1e2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b3c1e5:;
  /* 11b3c1e5 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3c1e9 je 0x11b3c201 */
  if (C.zf) goto L_11b3c201;
  /* 11b3c1eb cmp dword ptr [0x11b67db0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67db0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3c1f2 je 0x11b3c201 */
  if (C.zf) goto L_11b3c201;
  /* 11b3c1f4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3c1f7 push eax */
  push32((uint32_t)(EAX));
  /* 11b3c1f8 call dword ptr [0x11b67db0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b67db0))), 0x11b3c1feu);
  /* 11b3c1fe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b3c201:;
  /* 11b3c201 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3c204 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3c205 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3c208 push edx */
  push32((uint32_t)(EDX));
  /* 11b3c209 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3c20c push eax */
  push32((uint32_t)(EAX));
  /* 11b3c20d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3c210 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3c211 call dword ptr [0x11b67da8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b67da8))), 0x11b3c217u);
L_11b3c217:;
  /* 11b3c217 mov esp, ebp */
  ESP = (EBP);
  /* 11b3c219 pop ebp */
  EBP = (pop32());
  /* 11b3c21a ret  */
  ESPCHK(0x11b3c160u, _esp0);
  ESP += 4; return;
}

/* _strncpy @ 0x11b3c220 (254 bytes, 109 insns) */
void f_11b3c220(void) {
  FTRACE(0x11b3c220u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3c220 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11b3c224 push edi */
  push32((uint32_t)(EDI));
  /* 11b3c225 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b3c227 je 0x11b3c2a3 */
  if (C.zf) goto L_11b3c2a3;
  /* 11b3c229 push esi */
  push32((uint32_t)(ESI));
  /* 11b3c22a push ebx */
  push32((uint32_t)(EBX));
  /* 11b3c22b mov ebx, ecx */
  EBX = (ECX);
  /* 11b3c22d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 11b3c231 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11b3c237 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11b3c23b jne 0x11b3c244 */
  if (!C.zf) goto L_11b3c244;
  /* 11b3c23d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b3c240 jne 0x11b3c2b1 */
  if (!C.zf) goto L_11b3c2b1;
  /* 11b3c242 jmp 0x11b3c265 */
  goto L_11b3c265;
L_11b3c244:;
  /* 11b3c244 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b3c246 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b3c247 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b3c249 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b3c24a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11b3c24b je 0x11b3c272 */
  if (C.zf) goto L_11b3c272;
  /* 11b3c24d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b3c24f je 0x11b3c27a */
  if (C.zf) goto L_11b3c27a;
  /* 11b3c251 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 11b3c257 jne 0x11b3c244 */
  if (!C.zf) goto L_11b3c244;
  /* 11b3c259 mov ebx, ecx */
  EBX = (ECX);
  /* 11b3c25b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b3c25e jne 0x11b3c2b1 */
  if (!C.zf) goto L_11b3c2b1;
L_11b3c260:;
  /* 11b3c260 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11b3c263 je 0x11b3c272 */
  if (C.zf) goto L_11b3c272;
L_11b3c265:;
  /* 11b3c265 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b3c267 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b3c268 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b3c26a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b3c26b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11b3c26d je 0x11b3c29e */
  if (C.zf) goto L_11b3c29e;
  /* 11b3c26f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11b3c270 jne 0x11b3c265 */
  if (!C.zf) goto L_11b3c265;
L_11b3c272:;
  /* 11b3c272 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11b3c276 pop ebx */
  EBX = (pop32());
  /* 11b3c277 pop esi */
  ESI = (pop32());
  /* 11b3c278 pop edi */
  EDI = (pop32());
  /* 11b3c279 ret  */
  ESPCHK(0x11b3c220u, _esp0);
  ESP += 4; return;
L_11b3c27a:;
  /* 11b3c27a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11b3c280 je 0x11b3c294 */
  if (C.zf) goto L_11b3c294;
L_11b3c282:;
  /* 11b3c282 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b3c284 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b3c285 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11b3c286 je 0x11b3c316 */
  if (C.zf) goto L_11b3c316;
  /* 11b3c28c test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11b3c292 jne 0x11b3c282 */
  if (!C.zf) goto L_11b3c282;
L_11b3c294:;
  /* 11b3c294 mov ebx, ecx */
  EBX = (ECX);
  /* 11b3c296 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b3c299 jne 0x11b3c307 */
  if (!C.zf) goto L_11b3c307;
L_11b3c29b:;
  /* 11b3c29b mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b3c29d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_11b3c29e:;
  /* 11b3c29e dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11b3c29f jne 0x11b3c29b */
  if (!C.zf) goto L_11b3c29b;
  /* 11b3c2a1 pop ebx */
  EBX = (pop32());
  /* 11b3c2a2 pop esi */
  ESI = (pop32());
L_11b3c2a3:;
  /* 11b3c2a3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b3c2a7 pop edi */
  EDI = (pop32());
  /* 11b3c2a8 ret  */
  ESPCHK(0x11b3c220u, _esp0);
  ESP += 4; return;
L_11b3c2a9:;
  /* 11b3c2a9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11b3c2ab add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3c2ae dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11b3c2af je 0x11b3c260 */
  if (C.zf) goto L_11b3c260;
L_11b3c2b1:;
  /* 11b3c2b1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 11b3c2b6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11b3c2b8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3c2ba xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b3c2bd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3c2bf mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 11b3c2c1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3c2c4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 11b3c2c9 je 0x11b3c2a9 */
  if (C.zf) goto L_11b3c2a9;
  /* 11b3c2cb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 11b3c2cd je 0x11b3c2fb */
  if (C.zf) goto L_11b3c2fb;
  /* 11b3c2cf test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 11b3c2d1 je 0x11b3c2f1 */
  if (C.zf) goto L_11b3c2f1;
  /* 11b3c2d3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 11b3c2d9 je 0x11b3c2e7 */
  if (C.zf) goto L_11b3c2e7;
  /* 11b3c2db test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 11b3c2e1 jne 0x11b3c2a9 */
  if (!C.zf) goto L_11b3c2a9;
  /* 11b3c2e3 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11b3c2e5 jmp 0x11b3c2ff */
  goto L_11b3c2ff;
L_11b3c2e7:;
  /* 11b3c2e7 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b3c2ed mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11b3c2ef jmp 0x11b3c2ff */
  goto L_11b3c2ff;
L_11b3c2f1:;
  /* 11b3c2f1 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b3c2f7 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 11b3c2f9 jmp 0x11b3c2ff */
  goto L_11b3c2ff;
L_11b3c2fb:;
  /* 11b3c2fb xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3c2fd mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_11b3c2ff:;
  /* 11b3c2ff add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3c302 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3c304 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11b3c305 je 0x11b3c311 */
  if (C.zf) goto L_11b3c311;
L_11b3c307:;
  /* 11b3c307 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b3c309:;
  /* 11b3c309 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11b3c30b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3c30e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11b3c30f jne 0x11b3c309 */
  if (!C.zf) goto L_11b3c309;
L_11b3c311:;
  /* 11b3c311 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 11b3c314 jne 0x11b3c29b */
  if (!C.zf) goto L_11b3c29b;
L_11b3c316:;
  /* 11b3c316 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11b3c31a pop ebx */
  EBX = (pop32());
  /* 11b3c31b pop esi */
  ESI = (pop32());
  /* 11b3c31c pop edi */
  EDI = (pop32());
  /* 11b3c31d ret  */
  ESPCHK(0x11b3c220u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c320 @ 0x11b3c320 (31 bytes, 18 insns) */
void f_11b3c320(void) {
  FTRACE(0x11b3c320u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3c320 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3c321 mov ebp, esp */
  EBP = (ESP);
  /* 11b3c323 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3c324 push ebx */
  push32((uint32_t)(EBX));
  /* 11b3c325 push esi */
  push32((uint32_t)(ESI));
  /* 11b3c326 push edi */
  push32((uint32_t)(EDI));
  /* 11b3c327 wait  */
  /* wait (no observable integer/reg state) */
  /* 11b3c328 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 11b3c32b mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11b3c32f push eax */
  push32((uint32_t)(EAX));
  /* 11b3c330 call 0x11b3c710 */
  push32(0x11b3c335u); f_11b3c710();
  /* 11b3c335 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3c338 pop edi */
  EDI = (pop32());
  /* 11b3c339 pop esi */
  ESI = (pop32());
  /* 11b3c33a pop ebx */
  EBX = (pop32());
  /* 11b3c33b mov esp, ebp */
  ESP = (EBP);
  /* 11b3c33d pop ebp */
  EBP = (pop32());
  /* 11b3c33e ret  */
  ESPCHK(0x11b3c320u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c340 @ 0x11b3c340 (32 bytes, 18 insns) */
void f_11b3c340(void) {
  FTRACE(0x11b3c340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3c340 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3c341 mov ebp, esp */
  EBP = (ESP);
  /* 11b3c343 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3c344 push ebx */
  push32((uint32_t)(EBX));
  /* 11b3c345 push esi */
  push32((uint32_t)(ESI));
  /* 11b3c346 push edi */
  push32((uint32_t)(EDI));
  /* 11b3c347 fnstsw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), fpu_status());
  /* 11b3c34a fnclex  */
  /* fnclex (no observable integer/reg state) */
  /* 11b3c34c mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11b3c350 push eax */
  push32((uint32_t)(EAX));
  /* 11b3c351 call 0x11b3c710 */
  push32(0x11b3c356u); f_11b3c710();
  /* 11b3c356 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3c359 pop edi */
  EDI = (pop32());
  /* 11b3c35a pop esi */
  ESI = (pop32());
  /* 11b3c35b pop ebx */
  EBX = (pop32());
  /* 11b3c35c mov esp, ebp */
  ESP = (EBP);
  /* 11b3c35e pop ebp */
  EBP = (pop32());
  /* 11b3c35f ret  */
  ESPCHK(0x11b3c340u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c360 @ 0x11b3c360 (79 bytes, 34 insns) */
void f_11b3c360(void) {
  FTRACE(0x11b3c360u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3c360 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3c361 mov ebp, esp */
  EBP = (ESP);
  /* 11b3c363 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3c366 push ebx */
  push32((uint32_t)(EBX));
  /* 11b3c367 push esi */
  push32((uint32_t)(ESI));
  /* 11b3c368 push edi */
  push32((uint32_t)(EDI));
  /* 11b3c369 wait  */
  /* wait (no observable integer/reg state) */
  /* 11b3c36a fnstcw word ptr [ebp - 0x10] */
  w16((uint32_t)(EBP + -0x10), C.fcw);
  /* 11b3c36d mov ax, word ptr [ebp - 0x10] */
  AX = (r16((uint32_t)(EBP + -0x10)));
  /* 11b3c371 push eax */
  push32((uint32_t)(EAX));
  /* 11b3c372 call 0x11b3c430 */
  push32(0x11b3c377u); f_11b3c430();
  /* 11b3c377 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3c37a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b3c37d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3c380 and ecx, dword ptr [ebp + 0xc] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + 0xc))); ECX = (_r); fl_logic(_r,32); }
  /* 11b3c383 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3c386 not edx */
  EDX = (~(EDX));
  /* 11b3c388 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3c38b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3c38d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3c38f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b3c392 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3c395 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3c396 call 0x11b3c5b0 */
  push32(0x11b3c39bu); f_11b3c5b0();
  /* 11b3c39b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3c39e mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11b3c3a2 fldcw word ptr [ebp - 4] */
  C.fcw = r16((uint32_t)(EBP + -0x4));
  /* 11b3c3a5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3c3a8 pop edi */
  EDI = (pop32());
  /* 11b3c3a9 pop esi */
  ESI = (pop32());
  /* 11b3c3aa pop ebx */
  EBX = (pop32());
  /* 11b3c3ab mov esp, ebp */
  ESP = (EBP);
  /* 11b3c3ad pop ebp */
  EBP = (pop32());
  /* 11b3c3ae ret  */
  ESPCHK(0x11b3c360u, _esp0);
  ESP += 4; return;
}

/* __controlfp @ 0x11b3c3b0 (26 bytes, 11 insns) */
void f_11b3c3b0(void) {
  FTRACE(0x11b3c3b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3c3b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3c3b1 mov ebp, esp */
  EBP = (ESP);
  /* 11b3c3b3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3c3b6 and eax, 0xfff7ffff */
  { uint32_t _r=(EAX)&(0xfff7ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b3c3bb push eax */
  push32((uint32_t)(EAX));
  /* 11b3c3bc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3c3bf push ecx */
  push32((uint32_t)(ECX));
  /* 11b3c3c0 call 0x11b3c360 */
  push32(0x11b3c3c5u); f_11b3c360();
  /* 11b3c3c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3c3c8 pop ebp */
  EBP = (pop32());
  /* 11b3c3c9 ret  */
  ESPCHK(0x11b3c3b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c3d0 @ 0x11b3c3d0 (88 bytes, 33 insns) */
void f_11b3c3d0(void) {
  FTRACE(0x11b3c3d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3c3d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3c3d1 mov ebp, esp */
  EBP = (ESP);
  /* 11b3c3d3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3c3d6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b3c3d7 push esi */
  push32((uint32_t)(ESI));
  /* 11b3c3d8 push edi */
  push32((uint32_t)(EDI));
  /* 11b3c3d9 call 0x11b3c150 */
  push32(0x11b3c3deu); f_11b3c150();
  /* 11b3c3de mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 11b3c3e0 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b3c3e3 fninit  */
  C.fptop=0; C.fcw=0x037f; C.fsw_c0=C.fsw_c1=C.fsw_c2=C.fsw_c3=0;
  /* 11b3c3e5 call 0x11b36ef0 */
  push32(0x11b3c3eau); f_11b36ef0();
  /* 11b3c3ea cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3c3ee je 0x11b3c421 */
  if (C.zf) goto L_11b3c421;
  /* 11b3c3f0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3c3f3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b3c3f6 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b3c3f8 and eax, 0x10008 */
  { uint32_t _r=(EAX)&(0x10008u); EAX = (_r); fl_logic(_r,32); }
  /* 11b3c3fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3c3ff je 0x11b3c421 */
  if (C.zf) goto L_11b3c421;
  /* 11b3c401 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3c404 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b3c407 add edx, 0x1c */
  { uint32_t _a=(EDX),_b=(0x1cu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3c40a mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11b3c40d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3c410 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11b3c417 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3c41a mov dword ptr [ecx + 8], 0xffff */
  w32((uint32_t)(ECX + 0x8), (0xffffu));
L_11b3c421:;
  /* 11b3c421 pop edi */
  EDI = (pop32());
  /* 11b3c422 pop esi */
  ESI = (pop32());
  /* 11b3c423 pop ebx */
  EBX = (pop32());
  /* 11b3c424 mov esp, ebp */
  ESP = (EBP);
  /* 11b3c426 pop ebp */
  EBP = (pop32());
  /* 11b3c427 ret  */
  ESPCHK(0x11b3c3d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c430 @ 0x11b3c430 (377 bytes, 115 insns) */
void f_11b3c430(void) {
  FTRACE(0x11b3c430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3c430 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3c431 mov ebp, esp */
  EBP = (ESP);
  /* 11b3c433 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3c436 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b3c43d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3c440 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b3c445 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11b3c448 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3c44a je 0x11b3c455 */
  if (C.zf) goto L_11b3c455;
  /* 11b3c44c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3c44f or ecx, 0x10 */
  { uint32_t _r=(ECX)|(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11b3c452 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11b3c455:;
  /* 11b3c455 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3c458 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b3c45e and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11b3c461 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b3c463 je 0x11b3c46d */
  if (C.zf) goto L_11b3c46d;
  /* 11b3c465 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3c468 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 11b3c46a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b3c46d:;
  /* 11b3c46d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3c470 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b3c476 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11b3c479 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b3c47b je 0x11b3c486 */
  if (C.zf) goto L_11b3c486;
  /* 11b3c47d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3c480 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11b3c483 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11b3c486:;
  /* 11b3c486 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3c489 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b3c48e and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11b3c491 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3c493 je 0x11b3c49e */
  if (C.zf) goto L_11b3c49e;
  /* 11b3c495 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3c498 or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11b3c49b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11b3c49e:;
  /* 11b3c49e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3c4a1 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b3c4a7 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11b3c4aa test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b3c4ac je 0x11b3c4b6 */
  if (C.zf) goto L_11b3c4b6;
  /* 11b3c4ae mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3c4b1 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11b3c4b3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b3c4b6:;
  /* 11b3c4b6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3c4b9 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b3c4bf and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11b3c4c2 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b3c4c4 je 0x11b3c4d2 */
  if (C.zf) goto L_11b3c4d2;
  /* 11b3c4c6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3c4c9 or edx, 0x80000 */
  { uint32_t _r=(EDX)|(0x80000u); EDX = (_r); fl_logic(_r,32); }
  /* 11b3c4cf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11b3c4d2:;
  /* 11b3c4d2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3c4d5 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b3c4da and eax, 0xc00 */
  { uint32_t _r=(EAX)&(0xc00u); EAX = (_r); fl_logic(_r,32); }
  /* 11b3c4df mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b3c4e2 cmp dword ptr [ebp - 8], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3c4e9 jg 0x11b3c505 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b3c505;
  /* 11b3c4eb cmp dword ptr [ebp - 8], 0x800 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3c4f2 je 0x11b3c518 */
  if (C.zf) goto L_11b3c518;
  /* 11b3c4f4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3c4f8 je 0x11b3c510 */
  if (C.zf) goto L_11b3c510;
  /* 11b3c4fa cmp dword ptr [ebp - 8], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3c501 je 0x11b3c523 */
  if (C.zf) goto L_11b3c523;
  /* 11b3c503 jmp 0x11b3c537 */
  goto L_11b3c537;
L_11b3c505:;
  /* 11b3c505 cmp dword ptr [ebp - 8], 0xc00 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0xc00u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3c50c je 0x11b3c52e */
  if (C.zf) goto L_11b3c52e;
  /* 11b3c50e jmp 0x11b3c537 */
  goto L_11b3c537;
L_11b3c510:;
  /* 11b3c510 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3c513 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b3c516 jmp 0x11b3c537 */
  goto L_11b3c537;
L_11b3c518:;
  /* 11b3c518 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3c51b or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11b3c51e mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b3c521 jmp 0x11b3c537 */
  goto L_11b3c537;
L_11b3c523:;
  /* 11b3c523 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3c526 or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
  /* 11b3c529 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b3c52c jmp 0x11b3c537 */
  goto L_11b3c537;
L_11b3c52e:;
  /* 11b3c52e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3c531 or ch, 3 */
  { uint32_t _r=(C.c.b.h)|(0x3u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11b3c534 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11b3c537:;
  /* 11b3c537 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3c53a and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b3c540 and edx, 0x300 */
  { uint32_t _r=(EDX)&(0x300u); EDX = (_r); fl_logic(_r,32); }
  /* 11b3c546 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11b3c549 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3c54d je 0x11b3c579 */
  if (C.zf) goto L_11b3c579;
  /* 11b3c54f cmp dword ptr [ebp - 0xc], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3c556 je 0x11b3c56b */
  if (C.zf) goto L_11b3c56b;
  /* 11b3c558 cmp dword ptr [ebp - 0xc], 0x300 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3c55f je 0x11b3c563 */
  if (C.zf) goto L_11b3c563;
  /* 11b3c561 jmp 0x11b3c585 */
  goto L_11b3c585;
L_11b3c563:;
  /* 11b3c563 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3c566 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b3c569 jmp 0x11b3c585 */
  goto L_11b3c585;
L_11b3c56b:;
  /* 11b3c56b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3c56e or ecx, 0x10000 */
  { uint32_t _r=(ECX)|(0x10000u); ECX = (_r); fl_logic(_r,32); }
  /* 11b3c574 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b3c577 jmp 0x11b3c585 */
  goto L_11b3c585;
L_11b3c579:;
  /* 11b3c579 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3c57c or edx, 0x20000 */
  { uint32_t _r=(EDX)|(0x20000u); EDX = (_r); fl_logic(_r,32); }
  /* 11b3c582 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11b3c585:;
  /* 11b3c585 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3c588 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b3c58d and eax, 0x1000 */
  { uint32_t _r=(EAX)&(0x1000u); EAX = (_r); fl_logic(_r,32); }
  /* 11b3c592 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3c594 je 0x11b3c5a2 */
  if (C.zf) goto L_11b3c5a2;
  /* 11b3c596 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3c599 or ecx, 0x40000 */
  { uint32_t _r=(ECX)|(0x40000u); ECX = (_r); fl_logic(_r,32); }
  /* 11b3c59f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11b3c5a2:;
  /* 11b3c5a2 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3c5a5 mov esp, ebp */
  ESP = (EBP);
  /* 11b3c5a7 pop ebp */
  EBP = (pop32());
  /* 11b3c5a8 ret  */
  ESPCHK(0x11b3c430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c5b0 @ 0x11b3c5b0 (346 bytes, 106 insns) */
void f_11b3c5b0(void) {
  FTRACE(0x11b3c5b0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3c5b0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3c5b1 mov ebp, esp */
  EBP = (ESP);
  /* 11b3c5b3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3c5b6 mov word ptr [ebp - 4], 0 */
  w16((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b3c5bc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3c5bf and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11b3c5c2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3c5c4 je 0x11b3c5d1 */
  if (C.zf) goto L_11b3c5d1;
  /* 11b3c5c6 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11b3c5ca or cl, 1 */
  { uint32_t _r=(CL)|(0x1u); CL = (_r); fl_logic(_r,8); }
  /* 11b3c5cd mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_11b3c5d1:;
  /* 11b3c5d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3c5d4 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11b3c5d7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b3c5d9 je 0x11b3c5e5 */
  if (C.zf) goto L_11b3c5e5;
  /* 11b3c5db mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11b3c5df or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11b3c5e1 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
L_11b3c5e5:;
  /* 11b3c5e5 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3c5e8 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11b3c5eb test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b3c5ed je 0x11b3c5fa */
  if (C.zf) goto L_11b3c5fa;
  /* 11b3c5ef mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11b3c5f3 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 11b3c5f6 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_11b3c5fa:;
  /* 11b3c5fa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3c5fd and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 11b3c600 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3c602 je 0x11b3c60f */
  if (C.zf) goto L_11b3c60f;
  /* 11b3c604 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11b3c608 or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 11b3c60b mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_11b3c60f:;
  /* 11b3c60f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3c612 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11b3c615 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b3c617 je 0x11b3c623 */
  if (C.zf) goto L_11b3c623;
  /* 11b3c619 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11b3c61d or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11b3c61f mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
L_11b3c623:;
  /* 11b3c623 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3c626 and ecx, 0x80000 */
  { uint32_t _r=(ECX)&(0x80000u); ECX = (_r); fl_logic(_r,32); }
  /* 11b3c62c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b3c62e je 0x11b3c63b */
  if (C.zf) goto L_11b3c63b;
  /* 11b3c630 mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11b3c634 or dl, 2 */
  { uint32_t _r=(DL)|(0x2u); DL = (_r); fl_logic(_r,8); }
  /* 11b3c637 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_11b3c63b:;
  /* 11b3c63b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3c63e and eax, 0x300 */
  { uint32_t _r=(EAX)&(0x300u); EAX = (_r); fl_logic(_r,32); }
  /* 11b3c643 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b3c646 cmp dword ptr [ebp - 8], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3c64d ja 0x11b3c669 */
  if ((!C.cf&&!C.zf)) goto L_11b3c669;
  /* 11b3c64f cmp dword ptr [ebp - 8], 0x200 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x200u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3c656 je 0x11b3c67e */
  if (C.zf) goto L_11b3c67e;
  /* 11b3c658 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3c65c je 0x11b3c674 */
  if (C.zf) goto L_11b3c674;
  /* 11b3c65e cmp dword ptr [ebp - 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3c665 je 0x11b3c68b */
  if (C.zf) goto L_11b3c68b;
  /* 11b3c667 jmp 0x11b3c6a3 */
  goto L_11b3c6a3;
L_11b3c669:;
  /* 11b3c669 cmp dword ptr [ebp - 8], 0x300 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x300u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3c670 je 0x11b3c698 */
  if (C.zf) goto L_11b3c698;
  /* 11b3c672 jmp 0x11b3c6a3 */
  goto L_11b3c6a3;
L_11b3c674:;
  /* 11b3c674 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11b3c678 mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11b3c67c jmp 0x11b3c6a3 */
  goto L_11b3c6a3;
L_11b3c67e:;
  /* 11b3c67e mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11b3c682 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11b3c685 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
  /* 11b3c689 jmp 0x11b3c6a3 */
  goto L_11b3c6a3;
L_11b3c68b:;
  /* 11b3c68b mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11b3c68f or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
  /* 11b3c692 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11b3c696 jmp 0x11b3c6a3 */
  goto L_11b3c6a3;
L_11b3c698:;
  /* 11b3c698 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11b3c69c or ch, 0xc */
  { uint32_t _r=(C.c.b.h)|(0xcu); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11b3c69f mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_11b3c6a3:;
  /* 11b3c6a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3c6a6 and edx, 0x30000 */
  { uint32_t _r=(EDX)&(0x30000u); EDX = (_r); fl_logic(_r,32); }
  /* 11b3c6ac mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11b3c6af cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3c6b3 je 0x11b3c6c9 */
  if (C.zf) goto L_11b3c6c9;
  /* 11b3c6b5 cmp dword ptr [ebp - 0xc], 0x10000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x10000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3c6bc je 0x11b3c6d6 */
  if (C.zf) goto L_11b3c6d6;
  /* 11b3c6be cmp dword ptr [ebp - 0xc], 0x20000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3c6c5 je 0x11b3c6e3 */
  if (C.zf) goto L_11b3c6e3;
  /* 11b3c6c7 jmp 0x11b3c6eb */
  goto L_11b3c6eb;
L_11b3c6c9:;
  /* 11b3c6c9 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11b3c6cd or ah, 3 */
  { uint32_t _r=(AH)|(0x3u); AH = (_r); fl_logic(_r,8); }
  /* 11b3c6d0 mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11b3c6d4 jmp 0x11b3c6eb */
  goto L_11b3c6eb;
L_11b3c6d6:;
  /* 11b3c6d6 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11b3c6da or ch, 2 */
  { uint32_t _r=(C.c.b.h)|(0x2u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11b3c6dd mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11b3c6e1 jmp 0x11b3c6eb */
  goto L_11b3c6eb;
L_11b3c6e3:;
  /* 11b3c6e3 mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11b3c6e7 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_11b3c6eb:;
  /* 11b3c6eb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3c6ee and eax, 0x40000 */
  { uint32_t _r=(EAX)&(0x40000u); EAX = (_r); fl_logic(_r,32); }
  /* 11b3c6f3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3c6f5 je 0x11b3c702 */
  if (C.zf) goto L_11b3c702;
  /* 11b3c6f7 mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11b3c6fb or ch, 0x10 */
  { uint32_t _r=(C.c.b.h)|(0x10u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11b3c6fe mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
L_11b3c702:;
  /* 11b3c702 mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 11b3c706 mov esp, ebp */
  ESP = (EBP);
  /* 11b3c708 pop ebp */
  EBP = (pop32());
  /* 11b3c709 ret  */
  ESPCHK(0x11b3c5b0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c710 @ 0x11b3c710 (167 bytes, 56 insns) */
void f_11b3c710(void) {
  FTRACE(0x11b3c710u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3c710 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3c711 mov ebp, esp */
  EBP = (ESP);
  /* 11b3c713 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3c714 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b3c71b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3c71e and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b3c723 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11b3c726 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3c728 je 0x11b3c733 */
  if (C.zf) goto L_11b3c733;
  /* 11b3c72a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3c72d or ecx, 0x10 */
  { uint32_t _r=(ECX)|(0x10u); ECX = (_r); fl_logic(_r,32); }
  /* 11b3c730 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11b3c733:;
  /* 11b3c733 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3c736 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b3c73c and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11b3c73f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b3c741 je 0x11b3c74b */
  if (C.zf) goto L_11b3c74b;
  /* 11b3c743 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3c746 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 11b3c748 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b3c74b:;
  /* 11b3c74b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3c74e and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b3c754 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11b3c757 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b3c759 je 0x11b3c764 */
  if (C.zf) goto L_11b3c764;
  /* 11b3c75b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3c75e or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11b3c761 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11b3c764:;
  /* 11b3c764 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3c767 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b3c76c and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11b3c76f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3c771 je 0x11b3c77c */
  if (C.zf) goto L_11b3c77c;
  /* 11b3c773 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3c776 or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11b3c779 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11b3c77c:;
  /* 11b3c77c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3c77f and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b3c785 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11b3c788 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b3c78a je 0x11b3c794 */
  if (C.zf) goto L_11b3c794;
  /* 11b3c78c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3c78f or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11b3c791 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b3c794:;
  /* 11b3c794 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3c797 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b3c79d and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11b3c7a0 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b3c7a2 je 0x11b3c7b0 */
  if (C.zf) goto L_11b3c7b0;
  /* 11b3c7a4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3c7a7 or edx, 0x80000 */
  { uint32_t _r=(EDX)|(0x80000u); EDX = (_r); fl_logic(_r,32); }
  /* 11b3c7ad mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11b3c7b0:;
  /* 11b3c7b0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3c7b3 mov esp, ebp */
  ESP = (EBP);
  /* 11b3c7b5 pop ebp */
  EBP = (pop32());
  /* 11b3c7b6 ret  */
  ESPCHK(0x11b3c710u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7c0 @ 0x11b3c7c0 (183 bytes, 58 insns) */
void f_11b3c7c0(void) {
  FTRACE(0x11b3c7c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3c7c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3c7c1 mov ebp, esp */
  EBP = (ESP);
  /* 11b3c7c3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3c7c6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3c7c9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3c7cc cmp eax, 0x100 */
  { uint32_t _a=(EAX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3c7d1 ja 0x11b3c7ea */
  if ((!C.cf&&!C.zf)) goto L_11b3c7ea;
  /* 11b3c7d3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3c7d6 mov edx, dword ptr [0x11b65dec] */
  EDX = (r32((uint32_t)(0x11b65dec)));
  /* 11b3c7dc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3c7de mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11b3c7e2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 11b3c7e5 jmp 0x11b3c873 */
  goto L_11b3c873;
L_11b3c7ea:;
  /* 11b3c7ea mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3c7ed sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11b3c7f0 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b3c7f6 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b3c7fc mov edx, dword ptr [0x11b65dec] */
  EDX = (r32((uint32_t)(0x11b65dec)));
  /* 11b3c802 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3c804 mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11b3c808 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11b3c80d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3c80f je 0x11b3c833 */
  if (C.zf) goto L_11b3c833;
  /* 11b3c811 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3c814 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11b3c817 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b3c81d mov byte ptr [ebp - 0xc], cl */
  w8((uint32_t)(EBP + -0xc), (CL));
  /* 11b3c820 mov dl, byte ptr [ebp + 8] */
  DL = (r8((uint32_t)(EBP + 0x8)));
  /* 11b3c823 mov byte ptr [ebp - 0xb], dl */
  w8((uint32_t)(EBP + -0xb), (DL));
  /* 11b3c826 mov byte ptr [ebp - 0xa], 0 */
  w8((uint32_t)(EBP + -0xa), (0x0u));
  /* 11b3c82a mov dword ptr [ebp - 8], 2 */
  w32((uint32_t)(EBP + -0x8), (0x2u));
  /* 11b3c831 jmp 0x11b3c844 */
  goto L_11b3c844;
L_11b3c833:;
  /* 11b3c833 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11b3c836 mov byte ptr [ebp - 0xc], al */
  w8((uint32_t)(EBP + -0xc), (AL));
  /* 11b3c839 mov byte ptr [ebp - 0xb], 0 */
  w8((uint32_t)(EBP + -0xb), (0x0u));
  /* 11b3c83d mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
L_11b3c844:;
  /* 11b3c844 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b3c846 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3c848 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3c84a lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11b3c84d push ecx */
  push32((uint32_t)(ECX));
  /* 11b3c84e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3c851 push edx */
  push32((uint32_t)(EDX));
  /* 11b3c852 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11b3c855 push eax */
  push32((uint32_t)(EAX));
  /* 11b3c856 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b3c858 call 0x11b41d90 */
  push32(0x11b3c85du); f_11b41d90();
  /* 11b3c85d add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3c860 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3c862 jne 0x11b3c868 */
  if (!C.zf) goto L_11b3c868;
  /* 11b3c864 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3c866 jmp 0x11b3c873 */
  goto L_11b3c873;
L_11b3c868:;
  /* 11b3c868 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3c86b and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b3c870 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
L_11b3c873:;
  /* 11b3c873 mov esp, ebp */
  ESP = (EBP);
  /* 11b3c875 pop ebp */
  EBP = (pop32());
  /* 11b3c876 ret  */
  ESPCHK(0x11b3c7c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c880 @ 0x11b3c880 (11 bytes, 6 insns) */
void f_11b3c880(void) {
  FTRACE(0x11b3c880u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3c880 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3c881 mov ebp, esp */
  EBP = (ESP);
  /* 11b3c883 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3c886 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3c889 pop ebp */
  EBP = (pop32());
  /* 11b3c88a ret  */
  ESPCHK(0x11b3c880u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c890 @ 0x11b3c890 (147 bytes, 43 insns) */
void f_11b3c890(void) {
  FTRACE(0x11b3c890u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3c890 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3c891 mov ebp, esp */
  EBP = (ESP);
  /* 11b3c893 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3c894 cmp dword ptr [0x11b67dc8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67dc8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3c89b jne 0x11b3c8b7 */
  if (!C.zf) goto L_11b3c8b7;
  /* 11b3c89d cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3c8a1 jl 0x11b3c8b2 */
  if ((C.sf!=C.of)) goto L_11b3c8b2;
  /* 11b3c8a3 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3c8a7 jg 0x11b3c8b2 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b3c8b2;
  /* 11b3c8a9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3c8ac add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3c8af mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11b3c8b2:;
  /* 11b3c8b2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3c8b5 jmp 0x11b3c91f */
  goto L_11b3c91f;
L_11b3c8b7:;
  /* 11b3c8b7 push 0x11b691f4 */
  push32((uint32_t)(0x11b691f4u));
  /* 11b3c8bc call dword ptr [0x11b6a3d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3d4))), 0x11b3c8c2u);
  /* 11b3c8c2 cmp dword ptr [0x11b691e4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b691e4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3c8c9 je 0x11b3c8e9 */
  if (C.zf) goto L_11b3c8e9;
  /* 11b3c8cb push 0x11b691f4 */
  push32((uint32_t)(0x11b691f4u));
  /* 11b3c8d0 call dword ptr [0x11b6a3e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3e0))), 0x11b3c8d6u);
  /* 11b3c8d6 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11b3c8d8 call 0x11b3a900 */
  push32(0x11b3c8ddu); f_11b3a900();
  /* 11b3c8dd add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3c8e0 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11b3c8e7 jmp 0x11b3c8f0 */
  goto L_11b3c8f0;
L_11b3c8e9:;
  /* 11b3c8e9 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11b3c8f0:;
  /* 11b3c8f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3c8f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3c8f4 call 0x11b3c930 */
  push32(0x11b3c8f9u); f_11b3c930();
  /* 11b3c8f9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3c8fc mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11b3c8ff cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3c903 je 0x11b3c911 */
  if (C.zf) goto L_11b3c911;
  /* 11b3c905 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11b3c907 call 0x11b3a9a0 */
  push32(0x11b3c90cu); f_11b3a9a0();
  /* 11b3c90c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3c90f jmp 0x11b3c91c */
  goto L_11b3c91c;
L_11b3c911:;
  /* 11b3c911 push 0x11b691f4 */
  push32((uint32_t)(0x11b691f4u));
  /* 11b3c916 call dword ptr [0x11b6a3e0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3e0))), 0x11b3c91cu);
L_11b3c91c:;
  /* 11b3c91c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11b3c91f:;
  /* 11b3c91f mov esp, ebp */
  ESP = (EBP);
  /* 11b3c921 pop ebp */
  EBP = (pop32());
  /* 11b3c922 ret  */
  ESPCHK(0x11b3c890u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c930 @ 0x11b3c930 (299 bytes, 91 insns) */
void f_11b3c930(void) {
  FTRACE(0x11b3c930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3c930 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3c931 mov ebp, esp */
  EBP = (ESP);
  /* 11b3c933 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3c936 cmp dword ptr [0x11b67dc8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67dc8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3c93d jne 0x11b3c95c */
  if (!C.zf) goto L_11b3c95c;
  /* 11b3c93f cmp dword ptr [ebp + 8], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3c943 jl 0x11b3c954 */
  if ((C.sf!=C.of)) goto L_11b3c954;
  /* 11b3c945 cmp dword ptr [ebp + 8], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3c949 jg 0x11b3c954 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b3c954;
  /* 11b3c94b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3c94e add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3c951 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11b3c954:;
  /* 11b3c954 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3c957 jmp 0x11b3ca57 */
  goto L_11b3ca57;
L_11b3c95c:;
  /* 11b3c95c cmp dword ptr [ebp + 8], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3c963 jge 0x11b3c9a3 */
  if ((C.sf==C.of)) goto L_11b3c9a3;
  /* 11b3c965 cmp dword ptr [0x11b65de0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b65de0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3c96c jle 0x11b3c981 */
  if ((C.zf||C.sf!=C.of)) goto L_11b3c981;
  /* 11b3c96e push 1 */
  push32((uint32_t)(0x1u));
  /* 11b3c970 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3c973 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3c974 call 0x11b3c7c0 */
  push32(0x11b3c979u); f_11b3c7c0();
  /* 11b3c979 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3c97c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11b3c97f jmp 0x11b3c995 */
  goto L_11b3c995;
L_11b3c981:;
  /* 11b3c981 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3c984 mov eax, dword ptr [0x11b65dec] */
  EAX = (r32((uint32_t)(0x11b65dec)));
  /* 11b3c989 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3c98b mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11b3c98f and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11b3c992 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11b3c995:;
  /* 11b3c995 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3c999 jne 0x11b3c9a3 */
  if (!C.zf) goto L_11b3c9a3;
  /* 11b3c99b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3c99e jmp 0x11b3ca57 */
  goto L_11b3ca57;
L_11b3c9a3:;
  /* 11b3c9a3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3c9a6 sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11b3c9a9 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b3c9af and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b3c9b5 mov eax, dword ptr [0x11b65dec] */
  EAX = (r32((uint32_t)(0x11b65dec)));
  /* 11b3c9ba xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3c9bc mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11b3c9c0 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11b3c9c6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b3c9c8 je 0x11b3c9ec */
  if (C.zf) goto L_11b3c9ec;
  /* 11b3c9ca mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3c9cd sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11b3c9d0 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b3c9d6 mov byte ptr [ebp - 8], dl */
  w8((uint32_t)(EBP + -0x8), (DL));
  /* 11b3c9d9 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11b3c9dc mov byte ptr [ebp - 7], al */
  w8((uint32_t)(EBP + -0x7), (AL));
  /* 11b3c9df mov byte ptr [ebp - 6], 0 */
  w8((uint32_t)(EBP + -0x6), (0x0u));
  /* 11b3c9e3 mov dword ptr [ebp - 4], 2 */
  w32((uint32_t)(EBP + -0x4), (0x2u));
  /* 11b3c9ea jmp 0x11b3c9fd */
  goto L_11b3c9fd;
L_11b3c9ec:;
  /* 11b3c9ec mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 11b3c9ef mov byte ptr [ebp - 8], cl */
  w8((uint32_t)(EBP + -0x8), (CL));
  /* 11b3c9f2 mov byte ptr [ebp - 7], 0 */
  w8((uint32_t)(EBP + -0x7), (0x0u));
  /* 11b3c9f6 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
L_11b3c9fd:;
  /* 11b3c9fd push 1 */
  push32((uint32_t)(0x1u));
  /* 11b3c9ff push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3ca01 push 3 */
  push32((uint32_t)(0x3u));
  /* 11b3ca03 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11b3ca06 push edx */
  push32((uint32_t)(EDX));
  /* 11b3ca07 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3ca0a push eax */
  push32((uint32_t)(EAX));
  /* 11b3ca0b lea ecx, [ebp - 8] */
  ECX = ((uint32_t)(EBP + -0x8));
  /* 11b3ca0e push ecx */
  push32((uint32_t)(ECX));
  /* 11b3ca0f push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11b3ca14 mov edx, dword ptr [0x11b67dc8] */
  EDX = (r32((uint32_t)(0x11b67dc8)));
  /* 11b3ca1a push edx */
  push32((uint32_t)(EDX));
  /* 11b3ca1b call 0x11b429a0 */
  push32(0x11b3ca20u); f_11b429a0();
  /* 11b3ca20 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3ca23 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b3ca26 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3ca2a jne 0x11b3ca31 */
  if (!C.zf) goto L_11b3ca31;
  /* 11b3ca2c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3ca2f jmp 0x11b3ca57 */
  goto L_11b3ca57;
L_11b3ca31:;
  /* 11b3ca31 cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3ca35 jne 0x11b3ca41 */
  if (!C.zf) goto L_11b3ca41;
  /* 11b3ca37 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3ca3a and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b3ca3f jmp 0x11b3ca57 */
  goto L_11b3ca57;
L_11b3ca41:;
  /* 11b3ca41 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3ca44 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b3ca49 mov ecx, dword ptr [ebp - 0xb] */
  ECX = (r32((uint32_t)(EBP + -0xb)));
  /* 11b3ca4c and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b3ca52 shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11b3ca55 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11b3ca57:;
  /* 11b3ca57 mov esp, ebp */
  ESP = (EBP);
  /* 11b3ca59 pop ebp */
  EBP = (pop32());
  /* 11b3ca5a ret  */
  ESPCHK(0x11b3c930u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca60 @ 0x11b3ca60 (132 bytes, 51 insns) */
void f_11b3ca60(void) {
  FTRACE(0x11b3ca60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3ca60 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3ca61 mov ebp, esp */
  EBP = (ESP);
  /* 11b3ca63 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3ca66 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3ca69 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b3ca6a and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11b3ca6d add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3ca6f sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11b3ca72 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b3ca75 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3ca78 and eax, 0x8000001f */
  { uint32_t _r=(EAX)&(0x8000001fu); EAX = (_r); fl_logic(_r,32); }
  /* 11b3ca7d jns 0x11b3ca84 */
  if (!C.sf) goto L_11b3ca84;
  /* 11b3ca7f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11b3ca80 or eax, 0xffffffe0 */
  { uint32_t _r=(EAX)|(0xffffffe0u); EAX = (_r); fl_logic(_r,32); }
  /* 11b3ca83 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11b3ca84:;
  /* 11b3ca84 mov ecx, 0x1f */
  ECX = (0x1fu);
  /* 11b3ca89 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3ca8b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b3ca8e or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b3ca91 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3ca94 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11b3ca96 not edx */
  EDX = (~(EDX));
  /* 11b3ca98 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11b3ca9b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3ca9e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3caa1 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11b3caa4 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11b3caa7 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b3caa9 je 0x11b3caaf */
  if (C.zf) goto L_11b3caaf;
  /* 11b3caab xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3caad jmp 0x11b3cae0 */
  goto L_11b3cae0;
L_11b3caaf:;
  /* 11b3caaf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3cab2 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3cab5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b3cab8 jmp 0x11b3cac3 */
  goto L_11b3cac3;
L_11b3caba:;
  /* 11b3caba mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3cabd add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3cac0 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11b3cac3:;
  /* 11b3cac3 cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3cac7 jge 0x11b3cadb */
  if ((C.sf==C.of)) goto L_11b3cadb;
  /* 11b3cac9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3cacc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3cacf cmp dword ptr [eax + edx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + EDX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3cad3 je 0x11b3cad9 */
  if (C.zf) goto L_11b3cad9;
  /* 11b3cad5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3cad7 jmp 0x11b3cae0 */
  goto L_11b3cae0;
L_11b3cad9:;
  /* 11b3cad9 jmp 0x11b3caba */
  goto L_11b3caba;
L_11b3cadb:;
  /* 11b3cadb mov eax, 1 */
  EAX = (0x1u);
L_11b3cae0:;
  /* 11b3cae0 mov esp, ebp */
  ESP = (EBP);
  /* 11b3cae2 pop ebp */
  EBP = (pop32());
  /* 11b3cae3 ret  */
  ESPCHK(0x11b3ca60u, _esp0);
  ESP += 4; return;
}

/* __IncMan @ 0x11b3caf0 (168 bytes, 63 insns) */
void f_11b3caf0(void) {
  FTRACE(0x11b3caf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3caf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3caf1 mov ebp, esp */
  EBP = (ESP);
  /* 11b3caf3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3caf6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3caf9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b3cafa and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11b3cafd add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3caff sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11b3cb02 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b3cb05 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3cb08 and eax, 0x8000001f */
  { uint32_t _r=(EAX)&(0x8000001fu); EAX = (_r); fl_logic(_r,32); }
  /* 11b3cb0d jns 0x11b3cb14 */
  if (!C.sf) goto L_11b3cb14;
  /* 11b3cb0f dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11b3cb10 or eax, 0xffffffe0 */
  { uint32_t _r=(EAX)|(0xffffffe0u); EAX = (_r); fl_logic(_r,32); }
  /* 11b3cb13 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11b3cb14:;
  /* 11b3cb14 mov ecx, 0x1f */
  ECX = (0x1fu);
  /* 11b3cb19 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3cb1b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b3cb1e mov edx, 1 */
  EDX = (0x1u);
  /* 11b3cb23 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3cb26 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11b3cb28 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11b3cb2b mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3cb2e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3cb31 lea edx, [ecx + eax*4] */
  EDX = ((uint32_t)(ECX + EAX*4));
  /* 11b3cb34 push edx */
  push32((uint32_t)(EDX));
  /* 11b3cb35 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3cb38 push eax */
  push32((uint32_t)(EAX));
  /* 11b3cb39 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3cb3c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3cb3f mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11b3cb42 push eax */
  push32((uint32_t)(EAX));
  /* 11b3cb43 call 0x11b42d00 */
  push32(0x11b3cb48u); f_11b42d00();
  /* 11b3cb48 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3cb4b mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11b3cb4e mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3cb51 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3cb54 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b3cb57 jmp 0x11b3cb62 */
  goto L_11b3cb62;
L_11b3cb59:;
  /* 11b3cb59 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3cb5c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3cb5f mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11b3cb62:;
  /* 11b3cb62 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3cb66 jl 0x11b3cb91 */
  if ((C.sf!=C.of)) goto L_11b3cb91;
  /* 11b3cb68 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3cb6c je 0x11b3cb91 */
  if (C.zf) goto L_11b3cb91;
  /* 11b3cb6e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3cb71 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3cb74 lea edx, [ecx + eax*4] */
  EDX = ((uint32_t)(ECX + EAX*4));
  /* 11b3cb77 push edx */
  push32((uint32_t)(EDX));
  /* 11b3cb78 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b3cb7a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3cb7d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3cb80 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11b3cb83 push edx */
  push32((uint32_t)(EDX));
  /* 11b3cb84 call 0x11b42d00 */
  push32(0x11b3cb89u); f_11b42d00();
  /* 11b3cb89 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3cb8c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11b3cb8f jmp 0x11b3cb59 */
  goto L_11b3cb59;
L_11b3cb91:;
  /* 11b3cb91 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3cb94 mov esp, ebp */
  ESP = (EBP);
  /* 11b3cb96 pop ebp */
  EBP = (pop32());
  /* 11b3cb97 ret  */
  ESPCHK(0x11b3caf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cba0 @ 0x11b3cba0 (219 bytes, 78 insns) */
void f_11b3cba0(void) {
  FTRACE(0x11b3cba0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3cba0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3cba1 mov ebp, esp */
  EBP = (ESP);
  /* 11b3cba3 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3cba6 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11b3cbad mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3cbb0 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3cbb3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b3cbb6 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3cbb9 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3cbbc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b3cbbf mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3cbc2 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b3cbc3 and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11b3cbc6 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3cbc8 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11b3cbcb mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11b3cbce mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3cbd1 and edx, 0x8000001f */
  { uint32_t _r=(EDX)&(0x8000001fu); EDX = (_r); fl_logic(_r,32); }
  /* 11b3cbd7 jns 0x11b3cbde */
  if (!C.sf) goto L_11b3cbde;
  /* 11b3cbd9 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11b3cbda or edx, 0xffffffe0 */
  { uint32_t _r=(EDX)|(0xffffffe0u); EDX = (_r); fl_logic(_r,32); }
  /* 11b3cbdd inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
L_11b3cbde:;
  /* 11b3cbde mov eax, 0x1f */
  EAX = (0x1fu);
  /* 11b3cbe3 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3cbe5 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b3cbe8 mov edx, 1 */
  EDX = (0x1u);
  /* 11b3cbed mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3cbf0 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11b3cbf2 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11b3cbf5 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3cbf8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3cbfb mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11b3cbfe and edx, dword ptr [ebp - 0x1c] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x1c))); EDX = (_r); fl_logic(_r,32); }
  /* 11b3cc01 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b3cc03 je 0x11b3cc2f */
  if (C.zf) goto L_11b3cc2f;
  /* 11b3cc05 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3cc08 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3cc0b push eax */
  push32((uint32_t)(EAX));
  /* 11b3cc0c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3cc0f push ecx */
  push32((uint32_t)(ECX));
  /* 11b3cc10 call 0x11b3ca60 */
  push32(0x11b3cc15u); f_11b3ca60();
  /* 11b3cc15 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3cc18 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3cc1a jne 0x11b3cc2f */
  if (!C.zf) goto L_11b3cc2f;
  /* 11b3cc1c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3cc1f push edx */
  push32((uint32_t)(EDX));
  /* 11b3cc20 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3cc23 push eax */
  push32((uint32_t)(EAX));
  /* 11b3cc24 call 0x11b3caf0 */
  push32(0x11b3cc29u); f_11b3caf0();
  /* 11b3cc29 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3cc2c mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11b3cc2f:;
  /* 11b3cc2f or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b3cc32 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3cc35 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11b3cc37 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3cc3a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3cc3d mov eax, dword ptr [ecx + eax*4] */
  EAX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11b3cc40 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3cc42 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3cc45 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3cc48 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11b3cc4b mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3cc4e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3cc51 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11b3cc54 jmp 0x11b3cc5f */
  goto L_11b3cc5f;
L_11b3cc56:;
  /* 11b3cc56 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3cc59 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3cc5c mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11b3cc5f:;
  /* 11b3cc5f cmp dword ptr [ebp - 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3cc63 jge 0x11b3cc74 */
  if ((C.sf==C.of)) goto L_11b3cc74;
  /* 11b3cc65 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3cc68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3cc6b mov dword ptr [eax + edx*4], 0 */
  w32((uint32_t)(EAX + EDX*4), (0x0u));
  /* 11b3cc72 jmp 0x11b3cc56 */
  goto L_11b3cc56;
L_11b3cc74:;
  /* 11b3cc74 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3cc77 mov esp, ebp */
  ESP = (EBP);
  /* 11b3cc79 pop ebp */
  EBP = (pop32());
  /* 11b3cc7a ret  */
  ESPCHK(0x11b3cba0u, _esp0);
  ESP += 4; return;
}

/* __CopyMan @ 0x11b3cc80 (76 bytes, 28 insns) */
void f_11b3cc80(void) {
  FTRACE(0x11b3cc80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3cc80 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3cc81 mov ebp, esp */
  EBP = (ESP);
  /* 11b3cc83 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3cc86 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3cc89 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b3cc8c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3cc8f mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b3cc92 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11b3cc99 jmp 0x11b3cca4 */
  goto L_11b3cca4;
L_11b3cc9b:;
  /* 11b3cc9b mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3cc9e add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3cca1 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11b3cca4:;
  /* 11b3cca4 cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3cca8 jge 0x11b3ccc8 */
  if ((C.sf==C.of)) goto L_11b3ccc8;
  /* 11b3ccaa mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3ccad mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3ccb0 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b3ccb2 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11b3ccb4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3ccb7 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3ccba mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b3ccbd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3ccc0 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3ccc3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b3ccc6 jmp 0x11b3cc9b */
  goto L_11b3cc9b;
L_11b3ccc8:;
  /* 11b3ccc8 mov esp, ebp */
  ESP = (EBP);
  /* 11b3ccca pop ebp */
  EBP = (pop32());
  /* 11b3cccb ret  */
  ESPCHK(0x11b3cc80u, _esp0);
  ESP += 4; return;
}

/* __FillZeroMan @ 0x11b3ccd0 (47 bytes, 17 insns) */
void f_11b3ccd0(void) {
  FTRACE(0x11b3ccd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3ccd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3ccd1 mov ebp, esp */
  EBP = (ESP);
  /* 11b3ccd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3ccd4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b3ccdb jmp 0x11b3cce6 */
  goto L_11b3cce6;
L_11b3ccdd:;
  /* 11b3ccdd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3cce0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3cce3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b3cce6:;
  /* 11b3cce6 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3ccea jge 0x11b3ccfb */
  if ((C.sf==C.of)) goto L_11b3ccfb;
  /* 11b3ccec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3ccef mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3ccf2 mov dword ptr [edx + ecx*4], 0 */
  w32((uint32_t)(EDX + ECX*4), (0x0u));
  /* 11b3ccf9 jmp 0x11b3ccdd */
  goto L_11b3ccdd;
L_11b3ccfb:;
  /* 11b3ccfb mov esp, ebp */
  ESP = (EBP);
  /* 11b3ccfd pop ebp */
  EBP = (pop32());
  /* 11b3ccfe ret  */
  ESPCHK(0x11b3ccd0u, _esp0);
  ESP += 4; return;
}

/* __IsZeroMan @ 0x11b3cd00 (55 bytes, 21 insns) */
void f_11b3cd00(void) {
  FTRACE(0x11b3cd00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3cd00 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3cd01 mov ebp, esp */
  EBP = (ESP);
  /* 11b3cd03 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3cd04 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b3cd0b jmp 0x11b3cd16 */
  goto L_11b3cd16;
L_11b3cd0d:;
  /* 11b3cd0d mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3cd10 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3cd13 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b3cd16:;
  /* 11b3cd16 cmp dword ptr [ebp - 4], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3cd1a jge 0x11b3cd2e */
  if ((C.sf==C.of)) goto L_11b3cd2e;
  /* 11b3cd1c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3cd1f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3cd22 cmp dword ptr [edx + ecx*4], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + ECX*4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3cd26 je 0x11b3cd2c */
  if (C.zf) goto L_11b3cd2c;
  /* 11b3cd28 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3cd2a jmp 0x11b3cd33 */
  goto L_11b3cd33;
L_11b3cd2c:;
  /* 11b3cd2c jmp 0x11b3cd0d */
  goto L_11b3cd0d;
L_11b3cd2e:;
  /* 11b3cd2e mov eax, 1 */
  EAX = (0x1u);
L_11b3cd33:;
  /* 11b3cd33 mov esp, ebp */
  ESP = (EBP);
  /* 11b3cd35 pop ebp */
  EBP = (pop32());
  /* 11b3cd36 ret  */
  ESPCHK(0x11b3cd00u, _esp0);
  ESP += 4; return;
}

/* __ShrMan @ 0x11b3cd40 (236 bytes, 82 insns) */
void f_11b3cd40(void) {
  FTRACE(0x11b3cd40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3cd40 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3cd41 mov ebp, esp */
  EBP = (ESP);
  /* 11b3cd43 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3cd46 push esi */
  push32((uint32_t)(ESI));
  /* 11b3cd47 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3cd4a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b3cd4b and edx, 0x1f */
  { uint32_t _r=(EDX)&(0x1fu); EDX = (_r); fl_logic(_r,32); }
  /* 11b3cd4e add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3cd50 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11b3cd53 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11b3cd56 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3cd59 and eax, 0x8000001f */
  { uint32_t _r=(EAX)&(0x8000001fu); EAX = (_r); fl_logic(_r,32); }
  /* 11b3cd5e jns 0x11b3cd65 */
  if (!C.sf) goto L_11b3cd65;
  /* 11b3cd60 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11b3cd61 or eax, 0xffffffe0 */
  { uint32_t _r=(EAX)|(0xffffffe0u); EAX = (_r); fl_logic(_r,32); }
  /* 11b3cd64 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11b3cd65:;
  /* 11b3cd65 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b3cd68 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b3cd6b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3cd6e shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11b3cd70 not edx */
  EDX = (~(EDX));
  /* 11b3cd72 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11b3cd75 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11b3cd7c mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11b3cd83 jmp 0x11b3cd8e */
  goto L_11b3cd8e;
L_11b3cd85:;
  /* 11b3cd85 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3cd88 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3cd8b mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11b3cd8e:;
  /* 11b3cd8e cmp dword ptr [ebp - 0xc], 3 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3cd92 jge 0x11b3cde1 */
  if ((C.sf==C.of)) goto L_11b3cde1;
  /* 11b3cd94 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3cd97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3cd9a mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11b3cd9d and eax, dword ptr [ebp - 0x14] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + -0x14))); EAX = (_r); fl_logic(_r,32); }
  /* 11b3cda0 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11b3cda3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3cda6 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3cda9 mov eax, dword ptr [edx + ecx*4] */
  EAX = (r32((uint32_t)(EDX + ECX*4)));
  /* 11b3cdac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3cdaf shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11b3cdb1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3cdb4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3cdb7 mov dword ptr [edx + ecx*4], eax */
  w32((uint32_t)(EDX + ECX*4), (EAX));
  /* 11b3cdba mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3cdbd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3cdc0 mov edx, dword ptr [ecx + eax*4] */
  EDX = (r32((uint32_t)(ECX + EAX*4)));
  /* 11b3cdc3 or edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11b3cdc6 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3cdc9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3cdcc mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11b3cdcf mov ecx, 0x20 */
  ECX = (0x20u);
  /* 11b3cdd4 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3cdd7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3cdda shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11b3cddc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11b3cddf jmp 0x11b3cd85 */
  goto L_11b3cd85;
L_11b3cde1:;
  /* 11b3cde1 mov dword ptr [ebp - 0xc], 2 */
  w32((uint32_t)(EBP + -0xc), (0x2u));
  /* 11b3cde8 jmp 0x11b3cdf3 */
  goto L_11b3cdf3;
L_11b3cdea:;
  /* 11b3cdea mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3cded sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3cdf0 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11b3cdf3:;
  /* 11b3cdf3 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3cdf7 jl 0x11b3ce27 */
  if ((C.sf!=C.of)) goto L_11b3ce27;
  /* 11b3cdf9 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3cdfc cmp ecx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3cdff jl 0x11b3ce18 */
  if ((C.sf!=C.of)) goto L_11b3ce18;
  /* 11b3ce01 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3ce04 sub edx, dword ptr [ebp - 0x18] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3ce07 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3ce0a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3ce0d mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3ce10 mov edx, dword ptr [esi + edx*4] */
  EDX = (r32((uint32_t)(ESI + EDX*4)));
  /* 11b3ce13 mov dword ptr [ecx + eax*4], edx */
  w32((uint32_t)(ECX + EAX*4), (EDX));
  /* 11b3ce16 jmp 0x11b3ce25 */
  goto L_11b3ce25;
L_11b3ce18:;
  /* 11b3ce18 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3ce1b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3ce1e mov dword ptr [ecx + eax*4], 0 */
  w32((uint32_t)(ECX + EAX*4), (0x0u));
L_11b3ce25:;
  /* 11b3ce25 jmp 0x11b3cdea */
  goto L_11b3cdea;
L_11b3ce27:;
  /* 11b3ce27 pop esi */
  ESI = (pop32());
  /* 11b3ce28 mov esp, ebp */
  ESP = (EBP);
  /* 11b3ce2a pop ebp */
  EBP = (pop32());
  /* 11b3ce2b ret  */
  ESPCHK(0x11b3cd40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce30 @ 0x11b3ce30 (578 bytes, 188 insns) */
void f_11b3ce30(void) {
  FTRACE(0x11b3ce30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3ce30 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3ce31 mov ebp, esp */
  EBP = (ESP);
  /* 11b3ce33 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3ce36 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3ce39 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3ce3b mov cx, word ptr [eax + 0xa] */
  CX = (r16((uint32_t)(EAX + 0xa)));
  /* 11b3ce3f and ecx, 0x7fff */
  { uint32_t _r=(ECX)&(0x7fffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b3ce45 sub ecx, 0x3fff */
  { uint32_t _a=(ECX),_b=(0x3fffu),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3ce4b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b3ce4e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3ce51 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3ce53 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 11b3ce57 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11b3ce5c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11b3ce5f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3ce62 mov edx, dword ptr [ecx + 6] */
  EDX = (r32((uint32_t)(ECX + 0x6)));
  /* 11b3ce65 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11b3ce68 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3ce6b mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 11b3ce6e mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11b3ce71 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3ce74 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3ce76 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11b3ce79 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11b3ce7c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11b3ce7f cmp dword ptr [ebp - 4], 0xffffc001 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffc001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3ce86 jne 0x11b3cec0 */
  if (!C.zf) goto L_11b3cec0;
  /* 11b3ce88 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11b3ce8f lea ecx, [ebp - 0x18] */
  ECX = ((uint32_t)(EBP + -0x18));
  /* 11b3ce92 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3ce93 call 0x11b3cd00 */
  push32(0x11b3ce98u); f_11b3cd00();
  /* 11b3ce98 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3ce9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3ce9d je 0x11b3cea8 */
  if (C.zf) goto L_11b3cea8;
  /* 11b3ce9f mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11b3cea6 jmp 0x11b3cebb */
  goto L_11b3cebb;
L_11b3cea8:;
  /* 11b3cea8 lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 11b3ceab push edx */
  push32((uint32_t)(EDX));
  /* 11b3ceac call 0x11b3ccd0 */
  push32(0x11b3ceb1u); f_11b3ccd0();
  /* 11b3ceb1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3ceb4 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
L_11b3cebb:;
  /* 11b3cebb jmp 0x11b3d00c */
  goto L_11b3d00c;
L_11b3cec0:;
  /* 11b3cec0 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11b3cec3 push eax */
  push32((uint32_t)(EAX));
  /* 11b3cec4 lea ecx, [ebp - 0x30] */
  ECX = ((uint32_t)(EBP + -0x30));
  /* 11b3cec7 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3cec8 call 0x11b3cc80 */
  push32(0x11b3cecdu); f_11b3cc80();
  /* 11b3cecd add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3ced0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3ced3 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11b3ced6 push eax */
  push32((uint32_t)(EAX));
  /* 11b3ced7 lea ecx, [ebp - 0x18] */
  ECX = ((uint32_t)(EBP + -0x18));
  /* 11b3ceda push ecx */
  push32((uint32_t)(ECX));
  /* 11b3cedb call 0x11b3cba0 */
  push32(0x11b3cee0u); f_11b3cba0();
  /* 11b3cee0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3cee3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3cee5 je 0x11b3cef0 */
  if (C.zf) goto L_11b3cef0;
  /* 11b3cee7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3ceea add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3ceed mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11b3cef0:;
  /* 11b3cef0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3cef3 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3cef6 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b3cef9 sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3cefc cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3ceff jge 0x11b3cf20 */
  if ((C.sf==C.of)) goto L_11b3cf20;
  /* 11b3cf01 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11b3cf04 push eax */
  push32((uint32_t)(EAX));
  /* 11b3cf05 call 0x11b3ccd0 */
  push32(0x11b3cf0au); f_11b3ccd0();
  /* 11b3cf0a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3cf0d mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11b3cf14 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 11b3cf1b jmp 0x11b3d00c */
  goto L_11b3d00c;
L_11b3cf20:;
  /* 11b3cf20 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3cf23 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3cf26 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3cf29 jg 0x11b3cf90 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b3cf90;
  /* 11b3cf2b mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3cf2e mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b3cf31 sub ecx, dword ptr [ebp - 4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3cf34 mov dword ptr [ebp - 0x34], ecx */
  w32((uint32_t)(EBP + -0x34), (ECX));
  /* 11b3cf37 lea edx, [ebp - 0x30] */
  EDX = ((uint32_t)(EBP + -0x30));
  /* 11b3cf3a push edx */
  push32((uint32_t)(EDX));
  /* 11b3cf3b lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11b3cf3e push eax */
  push32((uint32_t)(EAX));
  /* 11b3cf3f call 0x11b3cc80 */
  push32(0x11b3cf44u); f_11b3cc80();
  /* 11b3cf44 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3cf47 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11b3cf4a push ecx */
  push32((uint32_t)(ECX));
  /* 11b3cf4b lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 11b3cf4e push edx */
  push32((uint32_t)(EDX));
  /* 11b3cf4f call 0x11b3cd40 */
  push32(0x11b3cf54u); f_11b3cd40();
  /* 11b3cf54 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3cf57 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3cf5a mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11b3cf5d push ecx */
  push32((uint32_t)(ECX));
  /* 11b3cf5e lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 11b3cf61 push edx */
  push32((uint32_t)(EDX));
  /* 11b3cf62 call 0x11b3cba0 */
  push32(0x11b3cf67u); f_11b3cba0();
  /* 11b3cf67 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3cf6a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3cf6d mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11b3cf70 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3cf73 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3cf74 lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 11b3cf77 push edx */
  push32((uint32_t)(EDX));
  /* 11b3cf78 call 0x11b3cd40 */
  push32(0x11b3cf7du); f_11b3cd40();
  /* 11b3cf7d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3cf80 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11b3cf87 mov dword ptr [ebp - 0x1c], 2 */
  w32((uint32_t)(EBP + -0x1c), (0x2u));
  /* 11b3cf8e jmp 0x11b3d00c */
  goto L_11b3d00c;
L_11b3cf90:;
  /* 11b3cf90 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3cf93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3cf96 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3cf98 jl 0x11b3cfdb */
  if ((C.sf!=C.of)) goto L_11b3cfdb;
  /* 11b3cf9a lea edx, [ebp - 0x18] */
  EDX = ((uint32_t)(EBP + -0x18));
  /* 11b3cf9d push edx */
  push32((uint32_t)(EDX));
  /* 11b3cf9e call 0x11b3ccd0 */
  push32(0x11b3cfa3u); f_11b3ccd0();
  /* 11b3cfa3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3cfa6 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3cfa9 or eax, 0x80000000 */
  { uint32_t _r=(EAX)|(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 11b3cfae mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11b3cfb1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3cfb4 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11b3cfb7 push edx */
  push32((uint32_t)(EDX));
  /* 11b3cfb8 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11b3cfbb push eax */
  push32((uint32_t)(EAX));
  /* 11b3cfbc call 0x11b3cd40 */
  push32(0x11b3cfc1u); f_11b3cd40();
  /* 11b3cfc1 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3cfc4 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3cfc7 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b3cfc9 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3cfcc add edx, dword ptr [eax + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3cfcf mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11b3cfd2 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 11b3cfd9 jmp 0x11b3d00c */
  goto L_11b3d00c;
L_11b3cfdb:;
  /* 11b3cfdb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3cfde mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3cfe1 add edx, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3cfe4 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11b3cfe7 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3cfea and eax, 0x7fffffff */
  { uint32_t _r=(EAX)&(0x7fffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b3cfef mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11b3cff2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3cff5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11b3cff8 push edx */
  push32((uint32_t)(EDX));
  /* 11b3cff9 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11b3cffc push eax */
  push32((uint32_t)(EAX));
  /* 11b3cffd call 0x11b3cd40 */
  push32(0x11b3d002u); f_11b3cd40();
  /* 11b3d002 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3d005 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
L_11b3d00c:;
  /* 11b3d00c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3d00f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11b3d012 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3d015 mov eax, 0x20 */
  EAX = (0x20u);
  /* 11b3d01a sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3d01c mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b3d01f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3d022 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3d025 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11b3d027 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3d02a or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3d02c mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b3d02f neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b3d031 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3d033 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11b3d039 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3d03b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11b3d03e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3d041 cmp dword ptr [edx + 0x10], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3d045 jne 0x11b3d05a */
  if (!C.zf) goto L_11b3d05a;
  /* 11b3d047 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3d04a mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3d04d mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11b3d050 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3d053 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3d056 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11b3d058 jmp 0x11b3d06b */
  goto L_11b3d06b;
L_11b3d05a:;
  /* 11b3d05a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3d05d cmp dword ptr [ecx + 0x10], 0x20 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3d061 jne 0x11b3d06b */
  if (!C.zf) goto L_11b3d06b;
  /* 11b3d063 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3d066 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3d069 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
L_11b3d06b:;
  /* 11b3d06b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b3d06e mov esp, ebp */
  ESP = (EBP);
  /* 11b3d070 pop ebp */
  EBP = (pop32());
  /* 11b3d071 ret  */
  ESPCHK(0x11b3ce30u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d080 @ 0x11b3d080 (26 bytes, 11 insns) */
void f_11b3d080(void) {
  FTRACE(0x11b3d080u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3d080 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3d081 mov ebp, esp */
  EBP = (ESP);
  /* 11b3d083 push 0x11b65ff8 */
  push32((uint32_t)(0x11b65ff8u));
  /* 11b3d088 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3d08b push eax */
  push32((uint32_t)(EAX));
  /* 11b3d08c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3d08f push ecx */
  push32((uint32_t)(ECX));
  /* 11b3d090 call 0x11b3ce30 */
  push32(0x11b3d095u); f_11b3ce30();
  /* 11b3d095 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3d098 pop ebp */
  EBP = (pop32());
  /* 11b3d099 ret  */
  ESPCHK(0x11b3d080u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d0a0 @ 0x11b3d0a0 (26 bytes, 11 insns) */
void f_11b3d0a0(void) {
  FTRACE(0x11b3d0a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3d0a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3d0a1 mov ebp, esp */
  EBP = (ESP);
  /* 11b3d0a3 push 0x11b66010 */
  push32((uint32_t)(0x11b66010u));
  /* 11b3d0a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3d0ab push eax */
  push32((uint32_t)(EAX));
  /* 11b3d0ac mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3d0af push ecx */
  push32((uint32_t)(ECX));
  /* 11b3d0b0 call 0x11b3ce30 */
  push32(0x11b3d0b5u); f_11b3ce30();
  /* 11b3d0b5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3d0b8 pop ebp */
  EBP = (pop32());
  /* 11b3d0b9 ret  */
  ESPCHK(0x11b3d0a0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d0c0 @ 0x11b3d0c0 (191 bytes, 58 insns) */
void f_11b3d0c0(void) {
  FTRACE(0x11b3d0c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3d0c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3d0c1 mov ebp, esp */
  EBP = (ESP);
  /* 11b3d0c3 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3d0c6 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11b3d0cd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3d0d0 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3d0d2 mov cx, word ptr [eax + 0xa] */
  CX = (r16((uint32_t)(EAX + 0xa)));
  /* 11b3d0d6 and ecx, 0x7fff */
  { uint32_t _r=(ECX)&(0x7fffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b3d0dc mov word ptr [ebp - 4], cx */
  w16((uint32_t)(EBP + -0x4), (CX));
  /* 11b3d0e0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3d0e3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3d0e5 mov ax, word ptr [edx + 0xa] */
  AX = (r16((uint32_t)(EDX + 0xa)));
  /* 11b3d0e9 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11b3d0ee mov word ptr [ebp - 0x18], ax */
  w16((uint32_t)(EBP + -0x18), (AX));
  /* 11b3d0f2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3d0f5 mov edx, dword ptr [ecx + 6] */
  EDX = (r32((uint32_t)(ECX + 0x6)));
  /* 11b3d0f8 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11b3d0fb mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3d0fe mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 11b3d101 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b3d104 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3d107 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3d109 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11b3d10c shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11b3d10f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b3d112 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 11b3d114 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 11b3d117 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3d118 call 0x11b3cba0 */
  push32(0x11b3d11du); f_11b3cba0();
  /* 11b3d11d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3d120 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3d122 je 0x11b3d137 */
  if (C.zf) goto L_11b3d137;
  /* 11b3d124 mov dword ptr [ebp - 0x10], 0x80000000 */
  w32((uint32_t)(EBP + -0x10), (0x80000000u));
  /* 11b3d12b mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11b3d12f add dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a+_b; DX = (_r); fl_add(_a,_b,_r,16); }
  /* 11b3d133 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_11b3d137:;
  /* 11b3d137 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3d13a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b3d13f cmp eax, 0x7fff */
  { uint32_t _a=(EAX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3d144 jne 0x11b3d14d */
  if (!C.zf) goto L_11b3d14d;
  /* 11b3d146 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_11b3d14d:;
  /* 11b3d14d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3d150 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3d153 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11b3d156 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3d159 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3d15c mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11b3d15e mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3d161 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b3d167 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3d16a and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b3d16f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3d171 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3d174 mov word ptr [ecx + 8], dx */
  w16((uint32_t)(ECX + 0x8), (DX));
  /* 11b3d178 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3d17b mov esp, ebp */
  ESP = (EBP);
  /* 11b3d17d pop ebp */
  EBP = (pop32());
  /* 11b3d17e ret  */
  ESPCHK(0x11b3d0c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d180 @ 0x11b3d180 (54 bytes, 24 insns) */
void f_11b3d180(void) {
  FTRACE(0x11b3d180u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3d180 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3d181 mov ebp, esp */
  EBP = (ESP);
  /* 11b3d183 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3d186 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3d188 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3d18a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3d18c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3d18e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3d191 push eax */
  push32((uint32_t)(EAX));
  /* 11b3d192 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 11b3d195 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3d196 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11b3d199 push edx */
  push32((uint32_t)(EDX));
  /* 11b3d19a call 0x11b43000 */
  push32(0x11b3d19fu); f_11b43000();
  /* 11b3d19f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3d1a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3d1a5 push eax */
  push32((uint32_t)(EAX));
  /* 11b3d1a6 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11b3d1a9 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3d1aa call 0x11b3d080 */
  push32(0x11b3d1afu); f_11b3d080();
  /* 11b3d1af add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3d1b2 mov esp, ebp */
  ESP = (EBP);
  /* 11b3d1b4 pop ebp */
  EBP = (pop32());
  /* 11b3d1b5 ret  */
  ESPCHK(0x11b3d180u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d1c0 @ 0x11b3d1c0 (54 bytes, 24 insns) */
void f_11b3d1c0(void) {
  FTRACE(0x11b3d1c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3d1c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3d1c1 mov ebp, esp */
  EBP = (ESP);
  /* 11b3d1c3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3d1c6 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3d1c8 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3d1ca push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3d1cc push 1 */
  push32((uint32_t)(0x1u));
  /* 11b3d1ce mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3d1d1 push eax */
  push32((uint32_t)(EAX));
  /* 11b3d1d2 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 11b3d1d5 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3d1d6 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11b3d1d9 push edx */
  push32((uint32_t)(EDX));
  /* 11b3d1da call 0x11b43000 */
  push32(0x11b3d1dfu); f_11b43000();
  /* 11b3d1df add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3d1e2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3d1e5 push eax */
  push32((uint32_t)(EAX));
  /* 11b3d1e6 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11b3d1e9 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3d1ea call 0x11b3d0c0 */
  push32(0x11b3d1efu); f_11b3d0c0();
  /* 11b3d1ef add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3d1f2 mov esp, ebp */
  ESP = (EBP);
  /* 11b3d1f4 pop ebp */
  EBP = (pop32());
  /* 11b3d1f5 ret  */
  ESPCHK(0x11b3d1c0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d200 @ 0x11b3d200 (54 bytes, 24 insns) */
void f_11b3d200(void) {
  FTRACE(0x11b3d200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3d200 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3d201 mov ebp, esp */
  EBP = (ESP);
  /* 11b3d203 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3d206 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3d208 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3d20a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3d20c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3d20e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3d211 push eax */
  push32((uint32_t)(EAX));
  /* 11b3d212 lea ecx, [ebp - 0x10] */
  ECX = ((uint32_t)(EBP + -0x10));
  /* 11b3d215 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3d216 lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11b3d219 push edx */
  push32((uint32_t)(EDX));
  /* 11b3d21a call 0x11b43000 */
  push32(0x11b3d21fu); f_11b43000();
  /* 11b3d21f add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3d222 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3d225 push eax */
  push32((uint32_t)(EAX));
  /* 11b3d226 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11b3d229 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3d22a call 0x11b3d0a0 */
  push32(0x11b3d22fu); f_11b3d0a0();
  /* 11b3d22f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3d232 mov esp, ebp */
  ESP = (EBP);
  /* 11b3d234 pop ebp */
  EBP = (pop32());
  /* 11b3d235 ret  */
  ESPCHK(0x11b3d200u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d240 @ 0x11b3d240 (250 bytes, 90 insns) */
void f_11b3d240(void) {
  FTRACE(0x11b3d240u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3d240 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3d241 mov ebp, esp */
  EBP = (ESP);
  /* 11b3d243 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3d246 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3d249 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b3d24c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3d24f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11b3d252 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11b3d255 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3d258 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 11b3d25b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3d25e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3d261 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11b3d264:;
  /* 11b3d264 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3d268 jle 0x11b3d2ab */
  if ((C.zf||C.sf!=C.of)) goto L_11b3d2ab;
  /* 11b3d26a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3d26d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11b3d270 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3d272 je 0x11b3d288 */
  if (C.zf) goto L_11b3d288;
  /* 11b3d274 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3d277 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11b3d27a mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11b3d27d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3d280 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3d283 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b3d286 jmp 0x11b3d28f */
  goto L_11b3d28f;
L_11b3d288:;
  /* 11b3d288 mov dword ptr [ebp - 0xc], 0x30 */
  w32((uint32_t)(EBP + -0xc), (0x30u));
L_11b3d28f:;
  /* 11b3d28f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3d292 mov dl, byte ptr [ebp - 0xc] */
  DL = (r8((uint32_t)(EBP + -0xc)));
  /* 11b3d295 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11b3d297 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3d29a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3d29d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b3d2a0 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3d2a3 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3d2a6 mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11b3d2a9 jmp 0x11b3d264 */
  goto L_11b3d264;
L_11b3d2ab:;
  /* 11b3d2ab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3d2ae mov byte ptr [edx], 0 */
  w8((uint32_t)(EDX), (0x0u));
  /* 11b3d2b1 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3d2b5 jl 0x11b3d2f4 */
  if ((C.sf!=C.of)) goto L_11b3d2f4;
  /* 11b3d2b7 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3d2ba movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b3d2bd cmp ecx, 0x35 */
  { uint32_t _a=(ECX),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3d2c0 jl 0x11b3d2f4 */
  if ((C.sf!=C.of)) goto L_11b3d2f4;
  /* 11b3d2c2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3d2c5 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3d2c8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11b3d2cb:;
  /* 11b3d2cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3d2ce movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b3d2d1 cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3d2d4 jne 0x11b3d2e7 */
  if (!C.zf) goto L_11b3d2e7;
  /* 11b3d2d6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3d2d9 mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 11b3d2dc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3d2df sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3d2e2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b3d2e5 jmp 0x11b3d2cb */
  goto L_11b3d2cb;
L_11b3d2e7:;
  /* 11b3d2e7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3d2ea mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b3d2ec add dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 11b3d2ef mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3d2f2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
L_11b3d2f4:;
  /* 11b3d2f4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3d2f7 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11b3d2fa cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3d2fd jne 0x11b3d310 */
  if (!C.zf) goto L_11b3d310;
  /* 11b3d2ff mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3d302 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b3d305 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3d308 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3d30b mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11b3d30e jmp 0x11b3d336 */
  goto L_11b3d336;
L_11b3d310:;
  /* 11b3d310 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3d313 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3d316 push eax */
  push32((uint32_t)(EAX));
  /* 11b3d317 call 0x11b3b830 */
  push32(0x11b3d31cu); f_11b3b830();
  /* 11b3d31c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3d31f add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3d322 push eax */
  push32((uint32_t)(EAX));
  /* 11b3d323 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3d326 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3d329 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3d32a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3d32d push edx */
  push32((uint32_t)(EDX));
  /* 11b3d32e call 0x11b3d590 */
  push32(0x11b3d333u); f_11b3d590();
  /* 11b3d333 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b3d336:;
  /* 11b3d336 mov esp, ebp */
  ESP = (EBP);
  /* 11b3d338 pop ebp */
  EBP = (pop32());
  /* 11b3d339 ret  */
  ESPCHK(0x11b3d240u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d340 @ 0x11b3d340 (119 bytes, 44 insns) */
void f_11b3d340(void) {
  FTRACE(0x11b3d340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3d340 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3d341 mov ebp, esp */
  EBP = (ESP);
  /* 11b3d343 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3d346 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11b3d349 push eax */
  push32((uint32_t)(EAX));
  /* 11b3d34a lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11b3d34d push ecx */
  push32((uint32_t)(ECX));
  /* 11b3d34e call 0x11b3d3c0 */
  push32(0x11b3d353u); f_11b3d3c0();
  /* 11b3d353 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3d356 lea edx, [ebp - 0x28] */
  EDX = ((uint32_t)(EBP + -0x28));
  /* 11b3d359 push edx */
  push32((uint32_t)(EDX));
  /* 11b3d35a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3d35c push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11b3d35e sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3d361 mov eax, esp */
  EAX = (ESP);
  /* 11b3d363 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3d366 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11b3d368 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3d36b mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11b3d36e mov cx, word ptr [ebp - 4] */
  CX = (r16((uint32_t)(EBP + -0x4)));
  /* 11b3d372 mov word ptr [eax + 8], cx */
  w16((uint32_t)(EAX + 0x8), (CX));
  /* 11b3d376 call 0x11b43b80 */
  push32(0x11b3d37bu); f_11b43b80();
  /* 11b3d37b add esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3d37e mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3d381 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11b3d384 movsx eax, byte ptr [ebp - 0x26] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x26))));
  /* 11b3d388 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3d38b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11b3d38d movsx edx, word ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x28))));
  /* 11b3d391 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3d394 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11b3d397 lea ecx, [ebp - 0x24] */
  ECX = ((uint32_t)(EBP + -0x24));
  /* 11b3d39a push ecx */
  push32((uint32_t)(ECX));
  /* 11b3d39b mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b3d39e push edx */
  push32((uint32_t)(EDX));
  /* 11b3d39f call 0x11b3b9b0 */
  push32(0x11b3d3a4u); f_11b3b9b0();
  /* 11b3d3a4 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3d3a7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3d3aa mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b3d3ad mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 11b3d3b0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3d3b3 mov esp, ebp */
  ESP = (EBP);
  /* 11b3d3b5 pop ebp */
  EBP = (pop32());
  /* 11b3d3b6 ret  */
  ESPCHK(0x11b3d340u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3c0 @ 0x11b3d3c0 (354 bytes, 104 insns) */
void f_11b3d3c0(void) {
  FTRACE(0x11b3d3c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3d3c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3d3c1 mov ebp, esp */
  EBP = (ESP);
  /* 11b3d3c3 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3d3c6 mov dword ptr [ebp - 0xc], 0x80000000 */
  w32((uint32_t)(EBP + -0xc), (0x80000000u));
  /* 11b3d3cd mov word ptr [ebp - 4], 0 */
  w16((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b3d3d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3d3d6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3d3d8 mov cx, word ptr [eax + 6] */
  CX = (r16((uint32_t)(EAX + 0x6)));
  /* 11b3d3dc and ecx, 0x7ff0 */
  { uint32_t _r=(ECX)&(0x7ff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11b3d3e2 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11b3d3e5 mov word ptr [ebp - 0x14], cx */
  w16((uint32_t)(EBP + -0x14), (CX));
  /* 11b3d3e9 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3d3ec xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3d3ee mov ax, word ptr [edx + 6] */
  AX = (r16((uint32_t)(EDX + 0x6)));
  /* 11b3d3f2 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11b3d3f7 mov word ptr [ebp - 0x18], ax */
  w16((uint32_t)(EBP + -0x18), (AX));
  /* 11b3d3fb mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3d3fe mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b3d401 and edx, 0xfffff */
  { uint32_t _r=(EDX)&(0xfffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b3d407 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11b3d40a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3d40d mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b3d40f mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11b3d412 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3d415 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b3d41b mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11b3d41e cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3d422 je 0x11b3d437 */
  if (C.zf) goto L_11b3d437;
  /* 11b3d424 cmp dword ptr [ebp - 0x1c], 0x7ff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x7ffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3d42b je 0x11b3d42f */
  if (C.zf) goto L_11b3d42f;
  /* 11b3d42d jmp 0x11b3d47a */
  goto L_11b3d47a;
L_11b3d42f:;
  /* 11b3d42f mov word ptr [ebp - 4], 0x7fff */
  w16((uint32_t)(EBP + -0x4), (0x7fffu));
  /* 11b3d435 jmp 0x11b3d495 */
  goto L_11b3d495;
L_11b3d437:;
  /* 11b3d437 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3d43b jne 0x11b3d464 */
  if (!C.zf) goto L_11b3d464;
  /* 11b3d43d cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3d441 jne 0x11b3d464 */
  if (!C.zf) goto L_11b3d464;
  /* 11b3d443 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3d446 mov dword ptr [eax + 4], 0 */
  w32((uint32_t)(EAX + 0x4), (0x0u));
  /* 11b3d44d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3d450 mov dword ptr [ecx], 0 */
  w32((uint32_t)(ECX), (0x0u));
  /* 11b3d456 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3d459 mov word ptr [edx + 8], 0 */
  w16((uint32_t)(EDX + 0x8), (0x0u));
  /* 11b3d45f jmp 0x11b3d51e */
  goto L_11b3d51e;
L_11b3d464:;
  /* 11b3d464 movsx eax, word ptr [ebp - 0x14] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x14))));
  /* 11b3d468 add eax, 0x3c01 */
  { uint32_t _a=(EAX),_b=(0x3c01u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3d46d mov word ptr [ebp - 4], ax */
  w16((uint32_t)(EBP + -0x4), (AX));
  /* 11b3d471 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11b3d478 jmp 0x11b3d495 */
  goto L_11b3d495;
L_11b3d47a:;
  /* 11b3d47a mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 11b3d47e sub cx, 0x3ff */
  { uint32_t _a=(CX),_b=(0x3ffu),_r=_a-_b; CX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11b3d483 mov word ptr [ebp - 0x14], cx */
  w16((uint32_t)(EBP + -0x14), (CX));
  /* 11b3d487 movsx edx, word ptr [ebp - 0x14] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x14))));
  /* 11b3d48b add edx, 0x3fff */
  { uint32_t _a=(EDX),_b=(0x3fffu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3d491 mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
L_11b3d495:;
  /* 11b3d495 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3d498 shl eax, 0xb */
  EAX = (sh_shl((uint32_t)(EAX), (0xbu)&0x1f, 32));
  /* 11b3d49b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3d49e or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3d4a0 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3d4a3 shr edx, 0x15 */
  EDX = (sh_shr((uint32_t)(EDX), (0x15u)&0x1f, 32));
  /* 11b3d4a6 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3d4a8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3d4ab mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11b3d4ae mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3d4b1 shl ecx, 0xb */
  ECX = (sh_shl((uint32_t)(ECX), (0xbu)&0x1f, 32));
  /* 11b3d4b4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3d4b7 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11b3d4b9:;
  /* 11b3d4b9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3d4bc mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b3d4bf and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11b3d4c5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b3d4c7 jne 0x11b3d504 */
  if (!C.zf) goto L_11b3d504;
  /* 11b3d4c9 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3d4cc mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b3d4cf shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11b3d4d1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3d4d4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b3d4d6 and edx, 0x80000000 */
  { uint32_t _r=(EDX)&(0x80000000u); EDX = (_r); fl_logic(_r,32); }
  /* 11b3d4dc neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b3d4de sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3d4e0 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b3d4e2 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3d4e4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3d4e7 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11b3d4ea mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3d4ed mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b3d4ef shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11b3d4f1 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3d4f4 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11b3d4f6 mov dx, word ptr [ebp - 4] */
  DX = (r16((uint32_t)(EBP + -0x4)));
  /* 11b3d4fa sub dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11b3d4fe mov word ptr [ebp - 4], dx */
  w16((uint32_t)(EBP + -0x4), (DX));
  /* 11b3d502 jmp 0x11b3d4b9 */
  goto L_11b3d4b9;
L_11b3d504:;
  /* 11b3d504 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3d507 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b3d50c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3d50f and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b3d515 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3d517 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3d51a mov word ptr [edx + 8], ax */
  w16((uint32_t)(EDX + 0x8), (AX));
L_11b3d51e:;
  /* 11b3d51e mov esp, ebp */
  ESP = (EBP);
  /* 11b3d520 pop ebp */
  EBP = (pop32());
  /* 11b3d521 ret  */
  ESPCHK(0x11b3d3c0u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x11b3d530 (88 bytes, 40 insns) */
void f_11b3d530(void) {
  FTRACE(0x11b3d530u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3d530 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11b3d534 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b3d538 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b3d53a je 0x11b3d583 */
  if (C.zf) goto L_11b3d583;
  /* 11b3d53c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3d53e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 11b3d542 push edi */
  push32((uint32_t)(EDI));
  /* 11b3d543 mov edi, ecx */
  EDI = (ECX);
  /* 11b3d545 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3d548 jb 0x11b3d577 */
  if (C.cf) goto L_11b3d577;
  /* 11b3d54a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b3d54c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11b3d54f je 0x11b3d559 */
  if (C.zf) goto L_11b3d559;
  /* 11b3d551 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11b3d553:;
  /* 11b3d553 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b3d555 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b3d556 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11b3d557 jne 0x11b3d553 */
  if (!C.zf) goto L_11b3d553;
L_11b3d559:;
  /* 11b3d559 mov ecx, eax */
  ECX = (EAX);
  /* 11b3d55b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11b3d55e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3d560 mov ecx, eax */
  ECX = (EAX);
  /* 11b3d562 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11b3d565 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3d567 mov ecx, edx */
  ECX = (EDX);
  /* 11b3d569 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11b3d56c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b3d56f je 0x11b3d577 */
  if (C.zf) goto L_11b3d577;
  /* 11b3d571 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 11b3d573 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b3d575 je 0x11b3d57d */
  if (C.zf) goto L_11b3d57d;
L_11b3d577:;
  /* 11b3d577 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b3d579 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b3d57a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 11b3d57b jne 0x11b3d577 */
  if (!C.zf) goto L_11b3d577;
L_11b3d57d:;
  /* 11b3d57d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b3d581 pop edi */
  EDI = (pop32());
  /* 11b3d582 ret  */
  ESPCHK(0x11b3d530u, _esp0);
  ESP += 4; return;
L_11b3d583:;
  /* 11b3d583 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b3d587 ret  */
  ESPCHK(0x11b3d530u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d590 @ 0x11b3d590 (664 bytes, 262 insns) [15 switch table(s)] */
void f_11b3d590(void) {
  FTRACE(0x11b3d590u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3d590 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3d591 mov ebp, esp */
  EBP = (ESP);
  /* 11b3d593 push edi */
  push32((uint32_t)(EDI));
  /* 11b3d594 push esi */
  push32((uint32_t)(ESI));
  /* 11b3d595 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3d598 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3d59b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3d59e mov eax, ecx */
  EAX = (ECX);
  /* 11b3d5a0 mov edx, ecx */
  EDX = (ECX);
  /* 11b3d5a2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3d5a4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3d5a6 jbe 0x11b3d5b0 */
  if ((C.cf||C.zf)) goto L_11b3d5b0;
  /* 11b3d5a8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3d5aa jb 0x11b3d728 */
  if (C.cf) goto L_11b3d728;
L_11b3d5b0:;
  /* 11b3d5b0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11b3d5b6 jne 0x11b3d5cc */
  if (!C.zf) goto L_11b3d5cc;
  /* 11b3d5b8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b3d5bb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11b3d5be cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3d5c1 jb 0x11b3d5ec */
  if (C.cf) goto L_11b3d5ec;
  /* 11b3d5c3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b3d5c5 jmp dword ptr [edx*4 + 0x11b3d6d8] */
  switch (EDX) {
    case 0: goto L_11b3d6e8;
    case 1: goto L_11b3d6f0;
    case 2: goto L_11b3d6fc;
    case 3: goto L_11b3d710;
    default: x86_unimpl("switch@0x11b3d5c5 out of table"); return;
  }
L_11b3d5cc:;
  /* 11b3d5cc mov eax, edi */
  EAX = (EDI);
  /* 11b3d5ce mov edx, 3 */
  EDX = (0x3u);
  /* 11b3d5d3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3d5d6 jb 0x11b3d5e4 */
  if (C.cf) goto L_11b3d5e4;
  /* 11b3d5d8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11b3d5db add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3d5dd jmp dword ptr [eax*4 + 0x11b3d5f0] */
  switch (EAX) {
    case 1: goto L_11b3d600;
    case 2: goto L_11b3d62c;
    case 3: goto L_11b3d650;
    default: x86_unimpl("switch@0x11b3d5dd out of table"); return;
  }
L_11b3d5e4:;
  /* 11b3d5e4 jmp dword ptr [ecx*4 + 0x11b3d6e8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11b3d6e8)))); return;
  /* 11b3d5eb nop  */
  /* nop */
L_11b3d5ec:;
  /* 11b3d5ec jmp dword ptr [ecx*4 + 0x11b3d66c] */
  switch (ECX) {
    case 0: goto L_11b3d6cf;
    case 1: goto L_11b3d6bc;
    case 2: goto L_11b3d6b4;
    case 3: goto L_11b3d6ac;
    case 4: goto L_11b3d6a4;
    case 5: goto L_11b3d69c;
    case 6: goto L_11b3d694;
    case 7: goto L_11b3d68c;
    default: x86_unimpl("switch@0x11b3d5ec out of table"); return;
  }
  /* 11b3d5f3 nop  */
  /* nop */
L_11b3d600:;
  /* 11b3d600 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3d602 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b3d604 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b3d606 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b3d609 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11b3d60c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11b3d60f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b3d612 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11b3d615 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3d618 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3d61b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3d61e jb 0x11b3d5ec */
  if (C.cf) goto L_11b3d5ec;
  /* 11b3d620 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b3d622 jmp dword ptr [edx*4 + 0x11b3d6d8] */
  switch (EDX) {
    case 0: goto L_11b3d6e8;
    case 1: goto L_11b3d6f0;
    case 2: goto L_11b3d6fc;
    case 3: goto L_11b3d710;
    default: x86_unimpl("switch@0x11b3d622 out of table"); return;
  }
  /* 11b3d629 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b3d62c:;
  /* 11b3d62c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3d62e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b3d630 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b3d632 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b3d635 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b3d638 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11b3d63b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3d63e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3d641 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3d644 jb 0x11b3d5ec */
  if (C.cf) goto L_11b3d5ec;
  /* 11b3d646 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b3d648 jmp dword ptr [edx*4 + 0x11b3d6d8] */
  switch (EDX) {
    case 0: goto L_11b3d6e8;
    case 1: goto L_11b3d6f0;
    case 2: goto L_11b3d6fc;
    case 3: goto L_11b3d710;
    default: x86_unimpl("switch@0x11b3d648 out of table"); return;
  }
  /* 11b3d64f nop  */
  /* nop */
L_11b3d650:;
  /* 11b3d650 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3d652 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b3d654 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b3d656 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b3d657 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b3d65a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b3d65b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3d65e jb 0x11b3d5ec */
  if (C.cf) goto L_11b3d5ec;
  /* 11b3d660 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b3d662 jmp dword ptr [edx*4 + 0x11b3d6d8] */
  switch (EDX) {
    case 0: goto L_11b3d6e8;
    case 1: goto L_11b3d6f0;
    case 2: goto L_11b3d6fc;
    case 3: goto L_11b3d710;
    default: x86_unimpl("switch@0x11b3d662 out of table"); return;
  }
  /* 11b3d669 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b3d68c:;
  /* 11b3d68c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11b3d690 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11b3d694:;
  /* 11b3d694 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11b3d698 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11b3d69c:;
  /* 11b3d69c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11b3d6a0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11b3d6a4:;
  /* 11b3d6a4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11b3d6a8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11b3d6ac:;
  /* 11b3d6ac mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11b3d6b0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11b3d6b4:;
  /* 11b3d6b4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11b3d6b8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11b3d6bc:;
  /* 11b3d6bc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11b3d6c0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11b3d6c4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11b3d6cb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3d6cd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11b3d6cf:;
  /* 11b3d6cf jmp dword ptr [edx*4 + 0x11b3d6d8] */
  switch (EDX) {
    case 0: goto L_11b3d6e8;
    case 1: goto L_11b3d6f0;
    case 2: goto L_11b3d6fc;
    case 3: goto L_11b3d710;
    default: x86_unimpl("switch@0x11b3d6cf out of table"); return;
  }
  /* 11b3d6d6 mov edi, edi */
  EDI = (EDI);
L_11b3d6e8:;
  /* 11b3d6e8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3d6eb pop esi */
  ESI = (pop32());
  /* 11b3d6ec pop edi */
  EDI = (pop32());
  /* 11b3d6ed leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b3d6ee ret  */
  ESPCHK(0x11b3d590u, _esp0);
  ESP += 4; return;
  /* 11b3d6ef nop  */
  /* nop */
L_11b3d6f0:;
  /* 11b3d6f0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b3d6f2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b3d6f4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3d6f7 pop esi */
  ESI = (pop32());
  /* 11b3d6f8 pop edi */
  EDI = (pop32());
  /* 11b3d6f9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b3d6fa ret  */
  ESPCHK(0x11b3d590u, _esp0);
  ESP += 4; return;
  /* 11b3d6fb nop  */
  /* nop */
L_11b3d6fc:;
  /* 11b3d6fc mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b3d6fe mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b3d700 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b3d703 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11b3d706 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3d709 pop esi */
  ESI = (pop32());
  /* 11b3d70a pop edi */
  EDI = (pop32());
  /* 11b3d70b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b3d70c ret  */
  ESPCHK(0x11b3d590u, _esp0);
  ESP += 4; return;
  /* 11b3d70d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b3d710:;
  /* 11b3d710 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b3d712 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b3d714 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b3d717 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11b3d71a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11b3d71d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11b3d720 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3d723 pop esi */
  ESI = (pop32());
  /* 11b3d724 pop edi */
  EDI = (pop32());
  /* 11b3d725 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b3d726 ret  */
  ESPCHK(0x11b3d590u, _esp0);
  ESP += 4; return;
  /* 11b3d727 nop  */
  /* nop */
L_11b3d728:;
  /* 11b3d728 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11b3d72c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11b3d730 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11b3d736 jne 0x11b3d75c */
  if (!C.zf) goto L_11b3d75c;
  /* 11b3d738 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b3d73b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11b3d73e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3d741 jb 0x11b3d750 */
  if (C.cf) goto L_11b3d750;
  /* 11b3d743 std  */
  C.df=1;
  /* 11b3d744 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b3d746 cld  */
  C.df=0;
  /* 11b3d747 jmp dword ptr [edx*4 + 0x11b3d870] */
  switch (EDX) {
    case 0: goto L_11b3d880;
    case 1: goto L_11b3d888;
    case 2: goto L_11b3d898;
    case 3: goto L_11b3d8ac;
    default: x86_unimpl("switch@0x11b3d747 out of table"); return;
  }
  /* 11b3d74e mov edi, edi */
  EDI = (EDI);
L_11b3d750:;
  /* 11b3d750 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b3d752 jmp dword ptr [ecx*4 + 0x11b3d820] */
  switch (ECX) {
    case 0: goto L_11b3d867;
    default: x86_unimpl("switch@0x11b3d752 out of table"); return;
  }
  /* 11b3d759 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b3d75c:;
  /* 11b3d75c mov eax, edi */
  EAX = (EDI);
  /* 11b3d75e mov edx, 3 */
  EDX = (0x3u);
  /* 11b3d763 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3d766 jb 0x11b3d774 */
  if (C.cf) goto L_11b3d774;
  /* 11b3d768 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11b3d76b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3d76d jmp dword ptr [eax*4 + 0x11b3d778] */
  switch (EAX) {
    case 1: goto L_11b3d788;
    case 2: goto L_11b3d7a8;
    case 3: goto L_11b3d7d0;
    default: x86_unimpl("switch@0x11b3d76d out of table"); return;
  }
L_11b3d774:;
  /* 11b3d774 jmp dword ptr [ecx*4 + 0x11b3d870] */
  switch (ECX) {
    case 0: goto L_11b3d880;
    case 1: goto L_11b3d888;
    case 2: goto L_11b3d898;
    case 3: goto L_11b3d8ac;
    default: x86_unimpl("switch@0x11b3d774 out of table"); return;
  }
  /* 11b3d77b nop  */
  /* nop */
L_11b3d788:;
  /* 11b3d788 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11b3d78b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3d78d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11b3d790 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11b3d791 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b3d794 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11b3d795 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3d798 jb 0x11b3d750 */
  if (C.cf) goto L_11b3d750;
  /* 11b3d79a std  */
  C.df=1;
  /* 11b3d79b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b3d79d cld  */
  C.df=0;
  /* 11b3d79e jmp dword ptr [edx*4 + 0x11b3d870] */
  switch (EDX) {
    case 0: goto L_11b3d880;
    case 1: goto L_11b3d888;
    case 2: goto L_11b3d898;
    case 3: goto L_11b3d8ac;
    default: x86_unimpl("switch@0x11b3d79e out of table"); return;
  }
  /* 11b3d7a5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b3d7a8:;
  /* 11b3d7a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11b3d7ab and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3d7ad mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11b3d7b0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11b3d7b3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b3d7b6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11b3d7b9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3d7bc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3d7bf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3d7c2 jb 0x11b3d750 */
  if (C.cf) goto L_11b3d750;
  /* 11b3d7c4 std  */
  C.df=1;
  /* 11b3d7c5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b3d7c7 cld  */
  C.df=0;
  /* 11b3d7c8 jmp dword ptr [edx*4 + 0x11b3d870] */
  switch (EDX) {
    case 0: goto L_11b3d880;
    case 1: goto L_11b3d888;
    case 2: goto L_11b3d898;
    case 3: goto L_11b3d8ac;
    default: x86_unimpl("switch@0x11b3d7c8 out of table"); return;
  }
  /* 11b3d7cf nop  */
  /* nop */
L_11b3d7d0:;
  /* 11b3d7d0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11b3d7d3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3d7d5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11b3d7d8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11b3d7db mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11b3d7de mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b3d7e1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b3d7e4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11b3d7e7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3d7ea sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3d7ed cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3d7f0 jb 0x11b3d750 */
  if (C.cf) goto L_11b3d750;
  /* 11b3d7f6 std  */
  C.df=1;
  /* 11b3d7f7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b3d7f9 cld  */
  C.df=0;
  /* 11b3d7fa jmp dword ptr [edx*4 + 0x11b3d870] */
  switch (EDX) {
    case 0: goto L_11b3d880;
    case 1: goto L_11b3d888;
    case 2: goto L_11b3d898;
    case 3: goto L_11b3d8ac;
    default: x86_unimpl("switch@0x11b3d7fa out of table"); return;
  }
  /* 11b3d801 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11b3d804 and al, 0xd8 */
  { uint32_t _r=(AL)&(0xd8u); AL = (_r); fl_logic(_r,8); }
  /* 11b3d806 mov bl, 0x11 */
  BL = (0x11u);
  /* 11b3d808 sub al, 0xd8 */
  { uint32_t _a=(AL),_b=(0xd8u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11b3d80a mov bl, 0x11 */
  BL = (0x11u);
  /* 11b3d80c xor al, 0xd8 */
  { uint32_t _r=(AL)^(0xd8u); AL = (_r); fl_logic(_r,8); }
  /* 11b3d80e mov bl, 0x11 */
  BL = (0x11u);
  /* 11b3d810 cmp al, 0xd8 */
  { uint32_t _a=(AL),_b=(0xd8u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b3d812 mov bl, 0x11 */
  BL = (0x11u);
  /* 11b3d814 inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 11b3d815 fdiv dword ptr [ebx - 0x4c27b3ef] */
  FPU_ST(0) = FPU_ST(0) / ((double)rf32((uint32_t)(EBX + -0x4c27b3ef)));
  /* 11b3d81b adc dword ptr [eax + ebx*8 - 0x4d], edx */
  { uint32_t _a=(r32((uint32_t)(EAX + EBX*8 + -0x4d))),_b=(EDX),_r=_a+_b+C.cf; w32((uint32_t)(EAX + EBX*8 + -0x4d), (_r)); fl_add(_a,_b,_r,32); }
  /* 11b3d824 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11b3d828 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11b3d82c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11b3d830 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11b3d834 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11b3d838 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11b3d83c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11b3d840 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11b3d844 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11b3d848 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11b3d84c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11b3d850 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11b3d854 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11b3d858 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11b3d85c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11b3d863 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3d865 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11b3d867:;
  /* 11b3d867 jmp dword ptr [edx*4 + 0x11b3d870] */
  switch (EDX) {
    case 0: goto L_11b3d880;
    case 1: goto L_11b3d888;
    case 2: goto L_11b3d898;
    case 3: goto L_11b3d8ac;
    default: x86_unimpl("switch@0x11b3d867 out of table"); return;
  }
  /* 11b3d86e mov edi, edi */
  EDI = (EDI);
L_11b3d880:;
  /* 11b3d880 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3d883 pop esi */
  ESI = (pop32());
  /* 11b3d884 pop edi */
  EDI = (pop32());
  /* 11b3d885 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b3d886 ret  */
  ESPCHK(0x11b3d590u, _esp0);
  ESP += 4; return;
  /* 11b3d887 nop  */
  /* nop */
L_11b3d888:;
  /* 11b3d888 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11b3d88b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11b3d88e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3d891 pop esi */
  ESI = (pop32());
  /* 11b3d892 pop edi */
  EDI = (pop32());
  /* 11b3d893 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b3d894 ret  */
  ESPCHK(0x11b3d590u, _esp0);
  ESP += 4; return;
  /* 11b3d895 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b3d898:;
  /* 11b3d898 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11b3d89b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11b3d89e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11b3d8a1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11b3d8a4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3d8a7 pop esi */
  ESI = (pop32());
  /* 11b3d8a8 pop edi */
  EDI = (pop32());
  /* 11b3d8a9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b3d8aa ret  */
  ESPCHK(0x11b3d590u, _esp0);
  ESP += 4; return;
  /* 11b3d8ab nop  */
  /* nop */
L_11b3d8ac:;
  /* 11b3d8ac mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11b3d8af mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11b3d8b2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11b3d8b5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11b3d8b8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b3d8bb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11b3d8be mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3d8c1 pop esi */
  ESI = (pop32());
  /* 11b3d8c2 pop edi */
  EDI = (pop32());
  /* 11b3d8c3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b3d8c4 ret  */
  ESPCHK(0x11b3d590u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x11b3d8d0 (15 bytes, 7 insns) */
void f_11b3d8d0(void) {
  FTRACE(0x11b3d8d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3d8d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3d8d1 mov ebp, esp */
  EBP = (ESP);
  /* 11b3d8d3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b3d8d5 call 0x11b36360 */
  push32(0x11b3d8dau); f_11b36360();
  /* 11b3d8da add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3d8dd pop ebp */
  EBP = (pop32());
  /* 11b3d8de ret  */
  ESPCHK(0x11b3d8d0u, _esp0);
  ESP += 4; return;
}

/* _set_new_handler @ 0x11b3d8e0 (48 bytes, 17 insns) */
void f_11b3d8e0(void) {
  FTRACE(0x11b3d8e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3d8e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3d8e1 mov ebp, esp */
  EBP = (ESP);
  /* 11b3d8e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3d8e4 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b3d8e6 call 0x11b3a900 */
  push32(0x11b3d8ebu); f_11b3a900();
  /* 11b3d8eb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3d8ee mov eax, dword ptr [0x11b67db8] */
  EAX = (r32((uint32_t)(0x11b67db8)));
  /* 11b3d8f3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b3d8f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3d8f9 mov dword ptr [0x11b67db8], ecx */
  w32((uint32_t)(0x11b67db8), (ECX));
  /* 11b3d8ff push 9 */
  push32((uint32_t)(0x9u));
  /* 11b3d901 call 0x11b3a9a0 */
  push32(0x11b3d906u); f_11b3a9a0();
  /* 11b3d906 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3d909 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3d90c mov esp, ebp */
  ESP = (EBP);
  /* 11b3d90e pop ebp */
  EBP = (pop32());
  /* 11b3d90f ret  */
  ESPCHK(0x11b3d8e0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d910 @ 0x11b3d910 (10 bytes, 5 insns) */
void f_11b3d910(void) {
  FTRACE(0x11b3d910u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3d910 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3d911 mov ebp, esp */
  EBP = (ESP);
  /* 11b3d913 mov eax, dword ptr [0x11b67db8] */
  EAX = (r32((uint32_t)(0x11b67db8)));
  /* 11b3d918 pop ebp */
  EBP = (pop32());
  /* 11b3d919 ret  */
  ESPCHK(0x11b3d910u, _esp0);
  ESP += 4; return;
}

/* __callnewh @ 0x11b3d920 (45 bytes, 19 insns) */
void f_11b3d920(void) {
  FTRACE(0x11b3d920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3d920 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3d921 mov ebp, esp */
  EBP = (ESP);
  /* 11b3d923 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3d924 mov eax, dword ptr [0x11b67db8] */
  EAX = (r32((uint32_t)(0x11b67db8)));
  /* 11b3d929 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b3d92c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3d930 je 0x11b3d940 */
  if (C.zf) goto L_11b3d940;
  /* 11b3d932 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3d935 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3d936 call dword ptr [ebp - 4] */
  call_ind((uint32_t)(r32((uint32_t)(EBP + -0x4))), 0x11b3d939u);
  /* 11b3d939 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3d93c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3d93e jne 0x11b3d944 */
  if (!C.zf) goto L_11b3d944;
L_11b3d940:;
  /* 11b3d940 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3d942 jmp 0x11b3d949 */
  goto L_11b3d949;
L_11b3d944:;
  /* 11b3d944 mov eax, 1 */
  EAX = (0x1u);
L_11b3d949:;
  /* 11b3d949 mov esp, ebp */
  ESP = (EBP);
  /* 11b3d94b pop ebp */
  EBP = (pop32());
  /* 11b3d94c ret  */
  ESPCHK(0x11b3d920u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d950 @ 0x11b3d950 (23 bytes, 10 insns) */
void f_11b3d950(void) {
  FTRACE(0x11b3d950u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3d950 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3d951 mov ebp, esp */
  EBP = (ESP);
  /* 11b3d953 mov eax, dword ptr [0x11b67db4] */
  EAX = (r32((uint32_t)(0x11b67db4)));
  /* 11b3d958 push eax */
  push32((uint32_t)(EAX));
  /* 11b3d959 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3d95c push ecx */
  push32((uint32_t)(ECX));
  /* 11b3d95d call 0x11b3d970 */
  push32(0x11b3d962u); f_11b3d970();
  /* 11b3d962 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3d965 pop ebp */
  EBP = (pop32());
  /* 11b3d966 ret  */
  ESPCHK(0x11b3d950u, _esp0);
  ESP += 4; return;
}

/* __nh_malloc_base @ 0x11b3d970 (87 bytes, 34 insns) */
void f_11b3d970(void) {
  FTRACE(0x11b3d970u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3d970 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3d971 mov ebp, esp */
  EBP = (ESP);
  /* 11b3d973 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3d974 cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3d978 jbe 0x11b3d97e */
  if ((C.cf||C.zf)) goto L_11b3d97e;
  /* 11b3d97a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3d97c jmp 0x11b3d9c3 */
  goto L_11b3d9c3;
L_11b3d97e:;
  /* 11b3d97e cmp dword ptr [ebp + 8], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3d982 ja 0x11b3d995 */
  if ((!C.cf&&!C.zf)) goto L_11b3d995;
  /* 11b3d984 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3d987 push eax */
  push32((uint32_t)(EAX));
  /* 11b3d988 call 0x11b3d9d0 */
  push32(0x11b3d98du); f_11b3d9d0();
  /* 11b3d98d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3d990 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b3d993 jmp 0x11b3d99c */
  goto L_11b3d99c;
L_11b3d995:;
  /* 11b3d995 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
L_11b3d99c:;
  /* 11b3d99c cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3d9a0 jne 0x11b3d9a8 */
  if (!C.zf) goto L_11b3d9a8;
  /* 11b3d9a2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3d9a6 jne 0x11b3d9ad */
  if (!C.zf) goto L_11b3d9ad;
L_11b3d9a8:;
  /* 11b3d9a8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3d9ab jmp 0x11b3d9c3 */
  goto L_11b3d9c3;
L_11b3d9ad:;
  /* 11b3d9ad mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3d9b0 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3d9b1 call 0x11b3d920 */
  push32(0x11b3d9b6u); f_11b3d920();
  /* 11b3d9b6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3d9b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3d9bb jne 0x11b3d9c1 */
  if (!C.zf) goto L_11b3d9c1;
  /* 11b3d9bd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3d9bf jmp 0x11b3d9c3 */
  goto L_11b3d9c3;
L_11b3d9c1:;
  /* 11b3d9c1 jmp 0x11b3d97e */
  goto L_11b3d97e;
L_11b3d9c3:;
  /* 11b3d9c3 mov esp, ebp */
  ESP = (EBP);
  /* 11b3d9c5 pop ebp */
  EBP = (pop32());
  /* 11b3d9c6 ret  */
  ESPCHK(0x11b3d970u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d9d0 @ 0x11b3d9d0 (109 bytes, 37 insns) */
void f_11b3d9d0(void) {
  FTRACE(0x11b3d9d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3d9d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3d9d1 mov ebp, esp */
  EBP = (ESP);
  /* 11b3d9d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3d9d4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3d9d7 cmp eax, dword ptr [0x11b66034] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11b66034))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3d9dd ja 0x11b3da0d */
  if ((!C.cf&&!C.zf)) goto L_11b3da0d;
  /* 11b3d9df push 9 */
  push32((uint32_t)(0x9u));
  /* 11b3d9e1 call 0x11b3a900 */
  push32(0x11b3d9e6u); f_11b3a900();
  /* 11b3d9e6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3d9e9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3d9ec push ecx */
  push32((uint32_t)(ECX));
  /* 11b3d9ed call 0x11b3e510 */
  push32(0x11b3d9f2u); f_11b3e510();
  /* 11b3d9f2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3d9f5 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b3d9f8 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b3d9fa call 0x11b3a9a0 */
  push32(0x11b3d9ffu); f_11b3a9a0();
  /* 11b3d9ff add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3da02 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3da06 je 0x11b3da0d */
  if (C.zf) goto L_11b3da0d;
  /* 11b3da08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3da0b jmp 0x11b3da39 */
  goto L_11b3da39;
L_11b3da0d:;
  /* 11b3da0d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3da11 jne 0x11b3da1a */
  if (!C.zf) goto L_11b3da1a;
  /* 11b3da13 mov dword ptr [ebp + 8], 1 */
  w32((uint32_t)(EBP + 0x8), (0x1u));
L_11b3da1a:;
  /* 11b3da1a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3da1d add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3da20 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11b3da23 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11b3da26 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3da29 push eax */
  push32((uint32_t)(EAX));
  /* 11b3da2a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3da2c mov ecx, dword ptr [0x11b694ac] */
  ECX = (r32((uint32_t)(0x11b694ac)));
  /* 11b3da32 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3da33 call dword ptr [0x11b6a358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a358))), 0x11b3da39u);
L_11b3da39:;
  /* 11b3da39 mov esp, ebp */
  ESP = (EBP);
  /* 11b3da3b pop ebp */
  EBP = (pop32());
  /* 11b3da3c ret  */
  ESPCHK(0x11b3d9d0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da40 @ 0x11b3da40 (10 bytes, 5 insns) */
void f_11b3da40(void) {
  FTRACE(0x11b3da40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3da40 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3da41 mov ebp, esp */
  EBP = (ESP);
  /* 11b3da43 mov eax, 1 */
  EAX = (0x1u);
  /* 11b3da48 pop ebp */
  EBP = (pop32());
  /* 11b3da49 ret  */
  ESPCHK(0x11b3da40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000da50 @ 0x11b3da50 (173 bytes, 59 insns) */
void f_11b3da50(void) {
  FTRACE(0x11b3da50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3da50 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3da51 mov ebp, esp */
  EBP = (ESP);
  /* 11b3da53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3da56 cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3da5a jbe 0x11b3da63 */
  if ((C.cf||C.zf)) goto L_11b3da63;
  /* 11b3da5c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3da5e jmp 0x11b3daf9 */
  goto L_11b3daf9;
L_11b3da63:;
  /* 11b3da63 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b3da65 call 0x11b3a900 */
  push32(0x11b3da6au); f_11b3a900();
  /* 11b3da6a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3da6d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3da70 push eax */
  push32((uint32_t)(EAX));
  /* 11b3da71 call 0x11b3de80 */
  push32(0x11b3da76u); f_11b3de80();
  /* 11b3da76 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3da79 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b3da7c cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3da80 je 0x11b3dac1 */
  if (C.zf) goto L_11b3dac1;
  /* 11b3da82 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b3da89 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3da8c cmp ecx, dword ptr [0x11b66034] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11b66034))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3da92 ja 0x11b3dab2 */
  if ((!C.cf&&!C.zf)) goto L_11b3dab2;
  /* 11b3da94 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3da97 push edx */
  push32((uint32_t)(EDX));
  /* 11b3da98 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3da9b push eax */
  push32((uint32_t)(EAX));
  /* 11b3da9c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3da9f push ecx */
  push32((uint32_t)(ECX));
  /* 11b3daa0 call 0x11b3ed50 */
  push32(0x11b3daa5u); f_11b3ed50();
  /* 11b3daa5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3daa8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3daaa je 0x11b3dab2 */
  if (C.zf) goto L_11b3dab2;
  /* 11b3daac mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3daaf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11b3dab2:;
  /* 11b3dab2 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b3dab4 call 0x11b3a9a0 */
  push32(0x11b3dab9u); f_11b3a9a0();
  /* 11b3dab9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3dabc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3dabf jmp 0x11b3daf9 */
  goto L_11b3daf9;
L_11b3dac1:;
  /* 11b3dac1 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b3dac3 call 0x11b3a9a0 */
  push32(0x11b3dac8u); f_11b3a9a0();
  /* 11b3dac8 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3dacb cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3dacf jne 0x11b3dad8 */
  if (!C.zf) goto L_11b3dad8;
  /* 11b3dad1 mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11b3dad8:;
  /* 11b3dad8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3dadb add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3dade and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 11b3dae0 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11b3dae3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3dae6 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3dae7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3daea push edx */
  push32((uint32_t)(EDX));
  /* 11b3daeb push 0x10 */
  push32((uint32_t)(0x10u));
  /* 11b3daed mov eax, dword ptr [0x11b694ac] */
  EAX = (r32((uint32_t)(0x11b694ac)));
  /* 11b3daf2 push eax */
  push32((uint32_t)(EAX));
  /* 11b3daf3 call dword ptr [0x11b6a348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a348))), 0x11b3daf9u);
L_11b3daf9:;
  /* 11b3daf9 mov esp, ebp */
  ESP = (EBP);
  /* 11b3dafb pop ebp */
  EBP = (pop32());
  /* 11b3dafc ret  */
  ESPCHK(0x11b3da50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000db00 @ 0x11b3db00 (490 bytes, 165 insns) */
void f_11b3db00(void) {
  FTRACE(0x11b3db00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3db00 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3db01 mov ebp, esp */
  EBP = (ESP);
  /* 11b3db03 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3db06 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3db0a jne 0x11b3db1d */
  if (!C.zf) goto L_11b3db1d;
  /* 11b3db0c mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3db0f push eax */
  push32((uint32_t)(EAX));
  /* 11b3db10 call 0x11b3d950 */
  push32(0x11b3db15u); f_11b3d950();
  /* 11b3db15 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3db18 jmp 0x11b3dce6 */
  goto L_11b3dce6;
L_11b3db1d:;
  /* 11b3db1d cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3db21 jne 0x11b3db36 */
  if (!C.zf) goto L_11b3db36;
  /* 11b3db23 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3db26 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3db27 call 0x11b3dcf0 */
  push32(0x11b3db2cu); f_11b3dcf0();
  /* 11b3db2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3db2f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3db31 jmp 0x11b3dce6 */
  goto L_11b3dce6;
L_11b3db36:;
  /* 11b3db36 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11b3db3d cmp dword ptr [ebp + 0xc], -0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3db41 ja 0x11b3dcb9 */
  if ((!C.cf&&!C.zf)) goto L_11b3dcb9;
  /* 11b3db47 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b3db49 call 0x11b3a900 */
  push32(0x11b3db4eu); f_11b3a900();
  /* 11b3db4e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3db51 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3db54 push edx */
  push32((uint32_t)(EDX));
  /* 11b3db55 call 0x11b3de80 */
  push32(0x11b3db5au); f_11b3de80();
  /* 11b3db5a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3db5d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b3db60 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3db64 je 0x11b3dc7c */
  if (C.zf) goto L_11b3dc7c;
  /* 11b3db6a mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3db6d cmp eax, dword ptr [0x11b66034] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11b66034))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3db73 ja 0x11b3dbf0 */
  if ((!C.cf&&!C.zf)) goto L_11b3dbf0;
  /* 11b3db75 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3db78 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3db79 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3db7c push edx */
  push32((uint32_t)(EDX));
  /* 11b3db7d mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3db80 push eax */
  push32((uint32_t)(EAX));
  /* 11b3db81 call 0x11b3ed50 */
  push32(0x11b3db86u); f_11b3ed50();
  /* 11b3db86 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3db89 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3db8b je 0x11b3db95 */
  if (C.zf) goto L_11b3db95;
  /* 11b3db8d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3db90 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b3db93 jmp 0x11b3dbf0 */
  goto L_11b3dbf0;
L_11b3db95:;
  /* 11b3db95 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3db98 push edx */
  push32((uint32_t)(EDX));
  /* 11b3db99 call 0x11b3e510 */
  push32(0x11b3db9eu); f_11b3e510();
  /* 11b3db9e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3dba1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b3dba4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3dba8 je 0x11b3dbf0 */
  if (C.zf) goto L_11b3dbf0;
  /* 11b3dbaa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3dbad mov ecx, dword ptr [eax - 4] */
  ECX = (r32((uint32_t)(EAX + -0x4)));
  /* 11b3dbb0 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3dbb3 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b3dbb6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3dbb9 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3dbbc jae 0x11b3dbc6 */
  if (!C.cf) goto L_11b3dbc6;
  /* 11b3dbbe mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3dbc1 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11b3dbc4 jmp 0x11b3dbcc */
  goto L_11b3dbcc;
L_11b3dbc6:;
  /* 11b3dbc6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3dbc9 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
L_11b3dbcc:;
  /* 11b3dbcc mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3dbcf push edx */
  push32((uint32_t)(EDX));
  /* 11b3dbd0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3dbd3 push eax */
  push32((uint32_t)(EAX));
  /* 11b3dbd4 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3dbd7 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3dbd8 call 0x11b403a0 */
  push32(0x11b3dbddu); f_11b403a0();
  /* 11b3dbdd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3dbe0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3dbe3 push edx */
  push32((uint32_t)(EDX));
  /* 11b3dbe4 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3dbe7 push eax */
  push32((uint32_t)(EAX));
  /* 11b3dbe8 call 0x11b3df40 */
  push32(0x11b3dbedu); f_11b3df40();
  /* 11b3dbed add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b3dbf0:;
  /* 11b3dbf0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3dbf4 jne 0x11b3dc70 */
  if (!C.zf) goto L_11b3dc70;
  /* 11b3dbf6 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3dbfa jne 0x11b3dc03 */
  if (!C.zf) goto L_11b3dc03;
  /* 11b3dbfc mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11b3dc03:;
  /* 11b3dc03 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3dc06 add ecx, 0xf */
  { uint32_t _a=(ECX),_b=(0xfu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3dc09 and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 11b3dc0c mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11b3dc0f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3dc12 push edx */
  push32((uint32_t)(EDX));
  /* 11b3dc13 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3dc15 mov eax, dword ptr [0x11b694ac] */
  EAX = (r32((uint32_t)(0x11b694ac)));
  /* 11b3dc1a push eax */
  push32((uint32_t)(EAX));
  /* 11b3dc1b call dword ptr [0x11b6a358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a358))), 0x11b3dc21u);
  /* 11b3dc21 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b3dc24 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3dc28 je 0x11b3dc70 */
  if (C.zf) goto L_11b3dc70;
  /* 11b3dc2a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3dc2d mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11b3dc30 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3dc33 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b3dc36 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3dc39 cmp eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3dc3c jae 0x11b3dc46 */
  if (!C.cf) goto L_11b3dc46;
  /* 11b3dc3e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3dc41 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11b3dc44 jmp 0x11b3dc4c */
  goto L_11b3dc4c;
L_11b3dc46:;
  /* 11b3dc46 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3dc49 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11b3dc4c:;
  /* 11b3dc4c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3dc4f push eax */
  push32((uint32_t)(EAX));
  /* 11b3dc50 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3dc53 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3dc54 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3dc57 push edx */
  push32((uint32_t)(EDX));
  /* 11b3dc58 call 0x11b403a0 */
  push32(0x11b3dc5du); f_11b403a0();
  /* 11b3dc5d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3dc60 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3dc63 push eax */
  push32((uint32_t)(EAX));
  /* 11b3dc64 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3dc67 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3dc68 call 0x11b3df40 */
  push32(0x11b3dc6du); f_11b3df40();
  /* 11b3dc6d add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b3dc70:;
  /* 11b3dc70 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b3dc72 call 0x11b3a9a0 */
  push32(0x11b3dc77u); f_11b3a9a0();
  /* 11b3dc77 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3dc7a jmp 0x11b3dcb9 */
  goto L_11b3dcb9;
L_11b3dc7c:;
  /* 11b3dc7c push 9 */
  push32((uint32_t)(0x9u));
  /* 11b3dc7e call 0x11b3a9a0 */
  push32(0x11b3dc83u); f_11b3a9a0();
  /* 11b3dc83 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3dc86 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3dc8a jne 0x11b3dc93 */
  if (!C.zf) goto L_11b3dc93;
  /* 11b3dc8c mov dword ptr [ebp + 0xc], 1 */
  w32((uint32_t)(EBP + 0xc), (0x1u));
L_11b3dc93:;
  /* 11b3dc93 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3dc96 add edx, 0xf */
  { uint32_t _a=(EDX),_b=(0xfu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3dc99 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11b3dc9c mov dword ptr [ebp + 0xc], edx */
  w32((uint32_t)(EBP + 0xc), (EDX));
  /* 11b3dc9f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3dca2 push eax */
  push32((uint32_t)(EAX));
  /* 11b3dca3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3dca6 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3dca7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3dca9 mov edx, dword ptr [0x11b694ac] */
  EDX = (r32((uint32_t)(0x11b694ac)));
  /* 11b3dcaf push edx */
  push32((uint32_t)(EDX));
  /* 11b3dcb0 call dword ptr [0x11b6a348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a348))), 0x11b3dcb6u);
  /* 11b3dcb6 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11b3dcb9:;
  /* 11b3dcb9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3dcbd jne 0x11b3dcc8 */
  if (!C.zf) goto L_11b3dcc8;
  /* 11b3dcbf cmp dword ptr [0x11b67db4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67db4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3dcc6 jne 0x11b3dccd */
  if (!C.zf) goto L_11b3dccd;
L_11b3dcc8:;
  /* 11b3dcc8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3dccb jmp 0x11b3dce6 */
  goto L_11b3dce6;
L_11b3dccd:;
  /* 11b3dccd mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3dcd0 push eax */
  push32((uint32_t)(EAX));
  /* 11b3dcd1 call 0x11b3d920 */
  push32(0x11b3dcd6u); f_11b3d920();
  /* 11b3dcd6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3dcd9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3dcdb jne 0x11b3dce1 */
  if (!C.zf) goto L_11b3dce1;
  /* 11b3dcdd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3dcdf jmp 0x11b3dce6 */
  goto L_11b3dce6;
L_11b3dce1:;
  /* 11b3dce1 jmp 0x11b3db36 */
  goto L_11b3db36;
L_11b3dce6:;
  /* 11b3dce6 mov esp, ebp */
  ESP = (EBP);
  /* 11b3dce8 pop ebp */
  EBP = (pop32());
  /* 11b3dce9 ret  */
  ESPCHK(0x11b3db00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dcf0 @ 0x11b3dcf0 (104 bytes, 38 insns) */
void f_11b3dcf0(void) {
  FTRACE(0x11b3dcf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3dcf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3dcf1 mov ebp, esp */
  EBP = (ESP);
  /* 11b3dcf3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3dcf4 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3dcf8 jne 0x11b3dcfc */
  if (!C.zf) goto L_11b3dcfc;
  /* 11b3dcfa jmp 0x11b3dd54 */
  goto L_11b3dd54;
L_11b3dcfc:;
  /* 11b3dcfc push 9 */
  push32((uint32_t)(0x9u));
  /* 11b3dcfe call 0x11b3a900 */
  push32(0x11b3dd03u); f_11b3a900();
  /* 11b3dd03 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3dd06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3dd09 push eax */
  push32((uint32_t)(EAX));
  /* 11b3dd0a call 0x11b3de80 */
  push32(0x11b3dd0fu); f_11b3de80();
  /* 11b3dd0f add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3dd12 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b3dd15 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3dd19 je 0x11b3dd37 */
  if (C.zf) goto L_11b3dd37;
  /* 11b3dd1b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3dd1e push ecx */
  push32((uint32_t)(ECX));
  /* 11b3dd1f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3dd22 push edx */
  push32((uint32_t)(EDX));
  /* 11b3dd23 call 0x11b3df40 */
  push32(0x11b3dd28u); f_11b3df40();
  /* 11b3dd28 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3dd2b push 9 */
  push32((uint32_t)(0x9u));
  /* 11b3dd2d call 0x11b3a9a0 */
  push32(0x11b3dd32u); f_11b3a9a0();
  /* 11b3dd32 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3dd35 jmp 0x11b3dd54 */
  goto L_11b3dd54;
L_11b3dd37:;
  /* 11b3dd37 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b3dd39 call 0x11b3a9a0 */
  push32(0x11b3dd3eu); f_11b3a9a0();
  /* 11b3dd3e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3dd41 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3dd44 push eax */
  push32((uint32_t)(EAX));
  /* 11b3dd45 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3dd47 mov ecx, dword ptr [0x11b694ac] */
  ECX = (r32((uint32_t)(0x11b694ac)));
  /* 11b3dd4d push ecx */
  push32((uint32_t)(ECX));
  /* 11b3dd4e call dword ptr [0x11b6a36c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a36c))), 0x11b3dd54u);
L_11b3dd54:;
  /* 11b3dd54 mov esp, ebp */
  ESP = (EBP);
  /* 11b3dd56 pop ebp */
  EBP = (pop32());
  /* 11b3dd57 ret  */
  ESPCHK(0x11b3dcf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dd60 @ 0x11b3dd60 (116 bytes, 34 insns) */
void f_11b3dd60(void) {
  FTRACE(0x11b3dd60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3dd60 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3dd61 mov ebp, esp */
  EBP = (ESP);
  /* 11b3dd63 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3dd64 mov dword ptr [ebp - 4], 0xfffffffe */
  w32((uint32_t)(EBP + -0x4), (0xfffffffeu));
  /* 11b3dd6b push 9 */
  push32((uint32_t)(0x9u));
  /* 11b3dd6d call 0x11b3a900 */
  push32(0x11b3dd72u); f_11b3a900();
  /* 11b3dd72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3dd75 call 0x11b3f470 */
  push32(0x11b3dd7au); f_11b3f470();
  /* 11b3dd7a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3dd7c jge 0x11b3dd85 */
  if ((C.sf==C.of)) goto L_11b3dd85;
  /* 11b3dd7e mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_11b3dd85:;
  /* 11b3dd85 push 9 */
  push32((uint32_t)(0x9u));
  /* 11b3dd87 call 0x11b3a9a0 */
  push32(0x11b3dd8cu); f_11b3a9a0();
  /* 11b3dd8c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3dd8f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3dd91 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3dd93 mov eax, dword ptr [0x11b694ac] */
  EAX = (r32((uint32_t)(0x11b694ac)));
  /* 11b3dd98 push eax */
  push32((uint32_t)(EAX));
  /* 11b3dd99 call dword ptr [0x11b6a38c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a38c))), 0x11b3dd9fu);
  /* 11b3dd9f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3dda1 jne 0x11b3ddcd */
  if (!C.zf) goto L_11b3ddcd;
  /* 11b3dda3 call dword ptr [0x11b6a3cc] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3cc))), 0x11b3dda9u);
  /* 11b3dda9 cmp eax, 0x78 */
  { uint32_t _a=(EAX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3ddac jne 0x11b3ddc6 */
  if (!C.zf) goto L_11b3ddc6;
  /* 11b3ddae call 0x11b41d80 */
  push32(0x11b3ddb3u); f_11b41d80();
  /* 11b3ddb3 mov dword ptr [eax], 0x78 */
  w32((uint32_t)(EAX), (0x78u));
  /* 11b3ddb9 call 0x11b41d70 */
  push32(0x11b3ddbeu); f_11b41d70();
  /* 11b3ddbe mov dword ptr [eax], 0x28 */
  w32((uint32_t)(EAX), (0x28u));
  /* 11b3ddc4 jmp 0x11b3ddcd */
  goto L_11b3ddcd;
L_11b3ddc6:;
  /* 11b3ddc6 mov dword ptr [ebp - 4], 0xfffffffc */
  w32((uint32_t)(EBP + -0x4), (0xfffffffcu));
L_11b3ddcd:;
  /* 11b3ddcd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3ddd0 mov esp, ebp */
  ESP = (EBP);
  /* 11b3ddd2 pop ebp */
  EBP = (pop32());
  /* 11b3ddd3 ret  */
  ESPCHK(0x11b3dd60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dde0 @ 0x11b3dde0 (10 bytes, 5 insns) */
void f_11b3dde0(void) {
  FTRACE(0x11b3dde0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3dde0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3dde1 mov ebp, esp */
  EBP = (ESP);
  /* 11b3dde3 call 0x11b3dd60 */
  push32(0x11b3dde8u); f_11b3dd60();
  /* 11b3dde8 pop ebp */
  EBP = (pop32());
  /* 11b3dde9 ret  */
  ESPCHK(0x11b3dde0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ddf0 @ 0x11b3ddf0 (10 bytes, 5 insns) */
void f_11b3ddf0(void) {
  FTRACE(0x11b3ddf0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3ddf0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3ddf1 mov ebp, esp */
  EBP = (ESP);
  /* 11b3ddf3 mov eax, dword ptr [0x11b66034] */
  EAX = (r32((uint32_t)(0x11b66034)));
  /* 11b3ddf8 pop ebp */
  EBP = (pop32());
  /* 11b3ddf9 ret  */
  ESPCHK(0x11b3ddf0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de00 @ 0x11b3de00 (31 bytes, 11 insns) */
void f_11b3de00(void) {
  FTRACE(0x11b3de00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3de00 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3de01 mov ebp, esp */
  EBP = (ESP);
  /* 11b3de03 cmp dword ptr [ebp + 8], 0x3f8 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x3f8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3de0a jbe 0x11b3de10 */
  if ((C.cf||C.zf)) goto L_11b3de10;
  /* 11b3de0c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3de0e jmp 0x11b3de1d */
  goto L_11b3de1d;
L_11b3de10:;
  /* 11b3de10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3de13 mov dword ptr [0x11b66034], eax */
  w32((uint32_t)(0x11b66034), (EAX));
  /* 11b3de18 mov eax, 1 */
  EAX = (0x1u);
L_11b3de1d:;
  /* 11b3de1d pop ebp */
  EBP = (pop32());
  /* 11b3de1e ret  */
  ESPCHK(0x11b3de00u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de20 @ 0x11b3de20 (89 bytes, 20 insns) */
void f_11b3de20(void) {
  FTRACE(0x11b3de20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3de20 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3de21 mov ebp, esp */
  EBP = (ESP);
  /* 11b3de23 push 0x140 */
  push32((uint32_t)(0x140u));
  /* 11b3de28 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3de2a mov eax, dword ptr [0x11b694ac] */
  EAX = (r32((uint32_t)(0x11b694ac)));
  /* 11b3de2f push eax */
  push32((uint32_t)(EAX));
  /* 11b3de30 call dword ptr [0x11b6a358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a358))), 0x11b3de36u);
  /* 11b3de36 mov dword ptr [0x11b694a8], eax */
  w32((uint32_t)(0x11b694a8), (EAX));
  /* 11b3de3b cmp dword ptr [0x11b694a8], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b694a8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3de42 jne 0x11b3de48 */
  if (!C.zf) goto L_11b3de48;
  /* 11b3de44 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3de46 jmp 0x11b3de77 */
  goto L_11b3de77;
L_11b3de48:;
  /* 11b3de48 mov ecx, dword ptr [0x11b694a8] */
  ECX = (r32((uint32_t)(0x11b694a8)));
  /* 11b3de4e mov dword ptr [0x11b6949c], ecx */
  w32((uint32_t)(0x11b6949c), (ECX));
  /* 11b3de54 mov dword ptr [0x11b694a0], 0 */
  w32((uint32_t)(0x11b694a0), (0x0u));
  /* 11b3de5e mov dword ptr [0x11b694a4], 0 */
  w32((uint32_t)(0x11b694a4), (0x0u));
  /* 11b3de68 mov dword ptr [0x11b69488], 0x10 */
  w32((uint32_t)(0x11b69488), (0x10u));
  /* 11b3de72 mov eax, 1 */
  EAX = (0x1u);
L_11b3de77:;
  /* 11b3de77 pop ebp */
  EBP = (pop32());
  /* 11b3de78 ret  */
  ESPCHK(0x11b3de20u, _esp0);
  ESP += 4; return;
}

/* FUN_1000de80 @ 0x11b3de80 (85 bytes, 29 insns) */
void f_11b3de80(void) {
  FTRACE(0x11b3de80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3de80 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3de81 mov ebp, esp */
  EBP = (ESP);
  /* 11b3de83 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3de86 mov eax, dword ptr [0x11b694a4] */
  EAX = (r32((uint32_t)(0x11b694a4)));
  /* 11b3de8b imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b3de8e mov ecx, dword ptr [0x11b694a8] */
  ECX = (r32((uint32_t)(0x11b694a8)));
  /* 11b3de94 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3de96 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b3de99 mov edx, dword ptr [0x11b694a8] */
  EDX = (r32((uint32_t)(0x11b694a8)));
  /* 11b3de9f mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11b3dea2:;
  /* 11b3dea2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3dea5 cmp eax, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3dea8 jae 0x11b3decf */
  if (!C.cf) goto L_11b3decf;
  /* 11b3deaa mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3dead mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3deb0 sub edx, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3deb3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b3deb6 cmp dword ptr [ebp - 4], 0x100000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3debd jae 0x11b3dec4 */
  if (!C.cf) goto L_11b3dec4;
  /* 11b3debf mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3dec2 jmp 0x11b3ded1 */
  goto L_11b3ded1;
L_11b3dec4:;
  /* 11b3dec4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3dec7 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3deca mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b3decd jmp 0x11b3dea2 */
  goto L_11b3dea2;
L_11b3decf:;
  /* 11b3decf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b3ded1:;
  /* 11b3ded1 mov esp, ebp */
  ESP = (EBP);
  /* 11b3ded3 pop ebp */
  EBP = (pop32());
  /* 11b3ded4 ret  */
  ESPCHK(0x11b3de80u, _esp0);
  ESP += 4; return;
}

/* FUN_1000dee0 @ 0x11b3dee0 (95 bytes, 33 insns) */
void f_11b3dee0(void) {
  FTRACE(0x11b3dee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3dee0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3dee1 mov ebp, esp */
  EBP = (ESP);
  /* 11b3dee3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3dee6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3dee9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3deec sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3deef mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b3def2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3def5 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11b3def8 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b3defb mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11b3df00 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3df03 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11b3df05 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3df08 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11b3df0b and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3df0d test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b3df0f jne 0x11b3df31 */
  if (!C.zf) goto L_11b3df31;
  /* 11b3df11 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3df14 and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 11b3df17 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3df19 jne 0x11b3df31 */
  if (!C.zf) goto L_11b3df31;
  /* 11b3df1b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3df1e and ecx, 0xfff */
  { uint32_t _r=(ECX)&(0xfffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b3df24 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b3df26 je 0x11b3df31 */
  if (C.zf) goto L_11b3df31;
  /* 11b3df28 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 11b3df2f jmp 0x11b3df38 */
  goto L_11b3df38;
L_11b3df31:;
  /* 11b3df31 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
L_11b3df38:;
  /* 11b3df38 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3df3b mov esp, ebp */
  ESP = (EBP);
  /* 11b3df3d pop ebp */
  EBP = (pop32());
  /* 11b3df3e ret  */
  ESPCHK(0x11b3dee0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000df40 @ 0x11b3df40 (1485 bytes, 453 insns) */
void f_11b3df40(void) {
  FTRACE(0x11b3df40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3df40 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3df41 mov ebp, esp */
  EBP = (ESP);
  /* 11b3df43 sub esp, 0x3c */
  { uint32_t _a=(ESP),_b=(0x3cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3df46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3df49 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11b3df4c mov dword ptr [ebp - 0x3c], ecx */
  w32((uint32_t)(EBP + -0x3c), (ECX));
  /* 11b3df4f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3df52 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3df55 sub eax, dword ptr [edx + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0xc))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3df58 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11b3df5b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3df5e shr ecx, 0xf */
  ECX = (sh_shr((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 11b3df61 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b3df64 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3df67 imul edx, edx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x204u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b3df6d mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11b3df70 lea ecx, [eax + edx + 0x144] */
  ECX = ((uint32_t)(EAX + EDX*1 + 0x144));
  /* 11b3df77 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b3df7a mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3df7d sub edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3df80 mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11b3df83 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b3df86 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b3df88 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3df8b mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11b3df8e mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b3df91 add edx, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3df94 mov dword ptr [ebp - 0x38], edx */
  w32((uint32_t)(EBP + -0x38), (EDX));
  /* 11b3df97 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b3df9a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b3df9c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11b3df9f mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b3dfa2 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 11b3dfa5 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b3dfa8 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3dfab and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11b3dfae test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b3dfb0 jne 0x11b3e0d8 */
  if (!C.zf) goto L_11b3e0d8;
  /* 11b3dfb6 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3dfb9 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11b3dfbc sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3dfbf mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11b3dfc2 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3dfc6 jbe 0x11b3dfcf */
  if ((C.cf||C.zf)) goto L_11b3dfcf;
  /* 11b3dfc8 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_11b3dfcf:;
  /* 11b3dfcf mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b3dfd2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b3dfd5 mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b3dfd8 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3dfdb jne 0x11b3e0b1 */
  if (!C.zf) goto L_11b3e0b1;
  /* 11b3dfe1 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3dfe5 jae 0x11b3e046 */
  if (!C.cf) goto L_11b3e046;
  /* 11b3dfe7 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11b3dfec mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3dfef shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11b3dff1 not eax */
  EAX = (~(EAX));
  /* 11b3dff3 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3dff6 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11b3dff9 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11b3dffd and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3dfff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3e002 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11b3e005 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11b3e009 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11b3e00c add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e00f mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11b3e012 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11b3e015 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11b3e018 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e01b mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11b3e01e mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11b3e021 add ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e024 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11b3e028 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b3e02a jne 0x11b3e044 */
  if (!C.zf) goto L_11b3e044;
  /* 11b3e02c mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11b3e031 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3e034 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11b3e036 not eax */
  EAX = (~(EAX));
  /* 11b3e038 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3e03b mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b3e03d and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3e03f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3e042 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11b3e044:;
  /* 11b3e044 jmp 0x11b3e0b1 */
  goto L_11b3e0b1;
L_11b3e046:;
  /* 11b3e046 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3e049 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3e04c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11b3e051 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11b3e053 not edx */
  EDX = (~(EDX));
  /* 11b3e055 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3e058 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11b3e05b mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11b3e062 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3e064 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3e067 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11b3e06a mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 11b3e071 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11b3e074 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e077 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11b3e07a sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11b3e07d mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11b3e080 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e083 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11b3e086 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11b3e089 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e08c movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11b3e090 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b3e092 jne 0x11b3e0b1 */
  if (!C.zf) goto L_11b3e0b1;
  /* 11b3e094 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3e097 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3e09a mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11b3e09f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11b3e0a1 not edx */
  EDX = (~(EDX));
  /* 11b3e0a3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3e0a6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b3e0a9 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3e0ab mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3e0ae mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11b3e0b1:;
  /* 11b3e0b1 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b3e0b4 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11b3e0b7 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b3e0ba mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b3e0bd mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11b3e0c0 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b3e0c3 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b3e0c6 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b3e0c9 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11b3e0cc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11b3e0cf mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3e0d2 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e0d5 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
L_11b3e0d8:;
  /* 11b3e0d8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3e0db sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11b3e0de sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3e0e1 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11b3e0e4 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3e0e8 jbe 0x11b3e0f1 */
  if ((C.cf||C.zf)) goto L_11b3e0f1;
  /* 11b3e0ea mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_11b3e0f1:;
  /* 11b3e0f1 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3e0f4 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11b3e0f7 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b3e0f9 jne 0x11b3e255 */
  if (!C.zf) goto L_11b3e255;
  /* 11b3e0ff mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b3e102 sub edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3e105 mov dword ptr [ebp - 0x34], edx */
  w32((uint32_t)(EBP + -0x34), (EDX));
  /* 11b3e108 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3e10b sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11b3e10e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3e111 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11b3e114 cmp dword ptr [ebp - 0x2c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3e118 jbe 0x11b3e121 */
  if ((C.cf||C.zf)) goto L_11b3e121;
  /* 11b3e11a mov dword ptr [ebp - 0x2c], 0x3f */
  w32((uint32_t)(EBP + -0x2c), (0x3fu));
L_11b3e121:;
  /* 11b3e121 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3e124 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e127 mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11b3e12a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3e12d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11b3e130 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3e133 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11b3e136 cmp dword ptr [ebp - 0x28], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3e13a jbe 0x11b3e143 */
  if ((C.cf||C.zf)) goto L_11b3e143;
  /* 11b3e13c mov dword ptr [ebp - 0x28], 0x3f */
  w32((uint32_t)(EBP + -0x28), (0x3fu));
L_11b3e143:;
  /* 11b3e143 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b3e146 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3e149 je 0x11b3e24f */
  if (C.zf) goto L_11b3e24f;
  /* 11b3e14f mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11b3e152 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11b3e155 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b3e158 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3e15b jne 0x11b3e231 */
  if (!C.zf) goto L_11b3e231;
  /* 11b3e161 cmp dword ptr [ebp - 0x2c], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3e165 jae 0x11b3e1c6 */
  if (!C.cf) goto L_11b3e1c6;
  /* 11b3e167 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11b3e16c mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b3e16f shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11b3e171 not edx */
  EDX = (~(EDX));
  /* 11b3e173 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3e176 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11b3e179 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11b3e17d and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3e17f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3e182 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11b3e185 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11b3e189 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11b3e18c add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e18f mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11b3e192 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11b3e195 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11b3e198 add edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e19b mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11b3e19e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11b3e1a1 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e1a4 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11b3e1a8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b3e1aa jne 0x11b3e1c4 */
  if (!C.zf) goto L_11b3e1c4;
  /* 11b3e1ac mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11b3e1b1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b3e1b4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11b3e1b6 not edx */
  EDX = (~(EDX));
  /* 11b3e1b8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3e1bb mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b3e1bd and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3e1bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3e1c2 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11b3e1c4:;
  /* 11b3e1c4 jmp 0x11b3e231 */
  goto L_11b3e231;
L_11b3e1c6:;
  /* 11b3e1c6 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b3e1c9 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3e1cc mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11b3e1d1 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11b3e1d3 not eax */
  EAX = (~(EAX));
  /* 11b3e1d5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3e1d8 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11b3e1db mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11b3e1e2 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3e1e4 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3e1e7 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11b3e1ea mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11b3e1f1 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11b3e1f4 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e1f7 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11b3e1fa sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11b3e1fd mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11b3e200 add eax, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e203 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11b3e206 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11b3e209 add ecx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e20c movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11b3e210 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b3e212 jne 0x11b3e231 */
  if (!C.zf) goto L_11b3e231;
  /* 11b3e214 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b3e217 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3e21a mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11b3e21f shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11b3e221 not eax */
  EAX = (~(EAX));
  /* 11b3e223 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3e226 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b3e229 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3e22b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3e22e mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11b3e231:;
  /* 11b3e231 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11b3e234 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11b3e237 mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11b3e23a mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b3e23d mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11b3e240 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11b3e243 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b3e246 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11b3e249 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11b3e24c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_11b3e24f:;
  /* 11b3e24f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11b3e252 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
L_11b3e255:;
  /* 11b3e255 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3e258 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11b3e25b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b3e25d jne 0x11b3e26b */
  if (!C.zf) goto L_11b3e26b;
  /* 11b3e25f mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b3e262 cmp edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3e265 je 0x11b3e37b */
  if (C.zf) goto L_11b3e37b;
L_11b3e26b:;
  /* 11b3e26b mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b3e26e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3e271 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 11b3e274 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11b3e277 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b3e27a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b3e27d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b3e280 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11b3e283 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b3e286 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b3e289 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11b3e28c mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b3e28f mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b3e292 mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11b3e295 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b3e298 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b3e29b mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b3e29e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11b3e2a1 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b3e2a4 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b3e2a7 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b3e2aa cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3e2ad jne 0x11b3e37b */
  if (!C.zf) goto L_11b3e37b;
  /* 11b3e2b3 cmp dword ptr [ebp - 0x28], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3e2b7 jae 0x11b3e314 */
  if (!C.cf) goto L_11b3e314;
  /* 11b3e2b9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11b3e2bc add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e2bf movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11b3e2c3 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11b3e2c6 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e2c9 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11b3e2cc add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11b3e2cf mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11b3e2d2 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e2d5 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11b3e2d8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b3e2da jne 0x11b3e2f2 */
  if (!C.zf) goto L_11b3e2f2;
  /* 11b3e2dc mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11b3e2e1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b3e2e4 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11b3e2e6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3e2e9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b3e2eb or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3e2ed mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3e2f0 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11b3e2f2:;
  /* 11b3e2f2 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11b3e2f7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b3e2fa shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11b3e2fc mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3e2ff mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11b3e302 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11b3e306 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3e308 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3e30b mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11b3e30e mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11b3e312 jmp 0x11b3e37b */
  goto L_11b3e37b;
L_11b3e314:;
  /* 11b3e314 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11b3e317 add ecx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e31a movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11b3e31e mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11b3e321 add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e324 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11b3e327 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11b3e32a mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11b3e32d add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e330 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11b3e333 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b3e335 jne 0x11b3e352 */
  if (!C.zf) goto L_11b3e352;
  /* 11b3e337 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b3e33a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3e33d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11b3e342 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11b3e344 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3e347 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b3e34a or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3e34c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3e34f mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11b3e352:;
  /* 11b3e352 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b3e355 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3e358 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11b3e35d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11b3e35f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3e362 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11b3e365 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11b3e36c or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3e36e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3e371 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11b3e374 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_11b3e37b:;
  /* 11b3e37b mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b3e37e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3e381 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11b3e383 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b3e386 add eax, dword ptr [ebp - 0x30] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x30))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e389 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3e38c mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
  /* 11b3e38f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3e392 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b3e394 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3e397 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3e39a mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11b3e39c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3e39f cmp dword ptr [edx], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3e3a2 jne 0x11b3e509 */
  if (!C.zf) goto L_11b3e509;
  /* 11b3e3a8 cmp dword ptr [0x11b694a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b694a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3e3af je 0x11b3e4f8 */
  if (C.zf) goto L_11b3e4f8;
  /* 11b3e3b5 mov eax, dword ptr [0x11b69498] */
  EAX = (r32((uint32_t)(0x11b69498)));
  /* 11b3e3ba shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 11b3e3bd mov ecx, dword ptr [0x11b694a0] */
  ECX = (r32((uint32_t)(0x11b694a0)));
  /* 11b3e3c3 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11b3e3c6 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e3c8 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11b3e3cb push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11b3e3d0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11b3e3d5 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3e3d8 push eax */
  push32((uint32_t)(EAX));
  /* 11b3e3d9 call dword ptr [0x11b6a368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a368))), 0x11b3e3dfu);
  /* 11b3e3df mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11b3e3e4 mov ecx, dword ptr [0x11b69498] */
  ECX = (r32((uint32_t)(0x11b69498)));
  /* 11b3e3ea shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11b3e3ec mov eax, dword ptr [0x11b694a0] */
  EAX = (r32((uint32_t)(0x11b694a0)));
  /* 11b3e3f1 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11b3e3f4 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3e3f6 mov edx, dword ptr [0x11b694a0] */
  EDX = (r32((uint32_t)(0x11b694a0)));
  /* 11b3e3fc mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11b3e3ff mov eax, dword ptr [0x11b694a0] */
  EAX = (r32((uint32_t)(0x11b694a0)));
  /* 11b3e404 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11b3e407 mov edx, dword ptr [0x11b69498] */
  EDX = (r32((uint32_t)(0x11b69498)));
  /* 11b3e40d mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 11b3e418 mov eax, dword ptr [0x11b694a0] */
  EAX = (r32((uint32_t)(0x11b694a0)));
  /* 11b3e41d mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11b3e420 mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 11b3e423 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11b3e426 mov eax, dword ptr [0x11b694a0] */
  EAX = (r32((uint32_t)(0x11b694a0)));
  /* 11b3e42b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11b3e42e mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 11b3e431 mov edx, dword ptr [0x11b694a0] */
  EDX = (r32((uint32_t)(0x11b694a0)));
  /* 11b3e437 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11b3e43a movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 11b3e43e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b3e440 jne 0x11b3e456 */
  if (!C.zf) goto L_11b3e456;
  /* 11b3e442 mov edx, dword ptr [0x11b694a0] */
  EDX = (r32((uint32_t)(0x11b694a0)));
  /* 11b3e448 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b3e44b and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11b3e44d mov ecx, dword ptr [0x11b694a0] */
  ECX = (r32((uint32_t)(0x11b694a0)));
  /* 11b3e453 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11b3e456:;
  /* 11b3e456 mov edx, dword ptr [0x11b694a0] */
  EDX = (r32((uint32_t)(0x11b694a0)));
  /* 11b3e45c cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3e460 jne 0x11b3e4f8 */
  if (!C.zf) goto L_11b3e4f8;
  /* 11b3e466 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11b3e46b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3e46d mov eax, dword ptr [0x11b694a0] */
  EAX = (r32((uint32_t)(0x11b694a0)));
  /* 11b3e472 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11b3e475 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3e476 call dword ptr [0x11b6a368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a368))), 0x11b3e47cu);
  /* 11b3e47c mov edx, dword ptr [0x11b694a0] */
  EDX = (r32((uint32_t)(0x11b694a0)));
  /* 11b3e482 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11b3e485 push eax */
  push32((uint32_t)(EAX));
  /* 11b3e486 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3e488 mov ecx, dword ptr [0x11b694ac] */
  ECX = (r32((uint32_t)(0x11b694ac)));
  /* 11b3e48e push ecx */
  push32((uint32_t)(ECX));
  /* 11b3e48f call dword ptr [0x11b6a36c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a36c))), 0x11b3e495u);
  /* 11b3e495 mov edx, dword ptr [0x11b694a4] */
  EDX = (r32((uint32_t)(0x11b694a4)));
  /* 11b3e49b imul edx, edx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x14u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b3e49e mov eax, dword ptr [0x11b694a8] */
  EAX = (r32((uint32_t)(0x11b694a8)));
  /* 11b3e4a3 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e4a5 mov ecx, dword ptr [0x11b694a0] */
  ECX = (r32((uint32_t)(0x11b694a0)));
  /* 11b3e4ab add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e4ae sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3e4b0 push eax */
  push32((uint32_t)(EAX));
  /* 11b3e4b1 mov edx, dword ptr [0x11b694a0] */
  EDX = (r32((uint32_t)(0x11b694a0)));
  /* 11b3e4b7 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e4ba push edx */
  push32((uint32_t)(EDX));
  /* 11b3e4bb mov eax, dword ptr [0x11b694a0] */
  EAX = (r32((uint32_t)(0x11b694a0)));
  /* 11b3e4c0 push eax */
  push32((uint32_t)(EAX));
  /* 11b3e4c1 call 0x11b3d590 */
  push32(0x11b3e4c6u); f_11b3d590();
  /* 11b3e4c6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e4c9 mov ecx, dword ptr [0x11b694a4] */
  ECX = (r32((uint32_t)(0x11b694a4)));
  /* 11b3e4cf sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3e4d2 mov dword ptr [0x11b694a4], ecx */
  w32((uint32_t)(0x11b694a4), (ECX));
  /* 11b3e4d8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3e4db cmp edx, dword ptr [0x11b694a0] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(0x11b694a0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3e4e1 jbe 0x11b3e4ec */
  if ((C.cf||C.zf)) goto L_11b3e4ec;
  /* 11b3e4e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3e4e6 sub eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3e4e9 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
L_11b3e4ec:;
  /* 11b3e4ec mov ecx, dword ptr [0x11b694a8] */
  ECX = (r32((uint32_t)(0x11b694a8)));
  /* 11b3e4f2 mov dword ptr [0x11b6949c], ecx */
  w32((uint32_t)(0x11b6949c), (ECX));
L_11b3e4f8:;
  /* 11b3e4f8 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3e4fb mov dword ptr [0x11b694a0], edx */
  w32((uint32_t)(0x11b694a0), (EDX));
  /* 11b3e501 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3e504 mov dword ptr [0x11b69498], eax */
  w32((uint32_t)(0x11b69498), (EAX));
L_11b3e509:;
  /* 11b3e509 mov esp, ebp */
  ESP = (EBP);
  /* 11b3e50b pop ebp */
  EBP = (pop32());
  /* 11b3e50c ret  */
  ESPCHK(0x11b3df40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000e510 @ 0x11b3e510 (1334 bytes, 427 insns) */
void f_11b3e510(void) {
  FTRACE(0x11b3e510u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3e510 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3e511 mov ebp, esp */
  EBP = (ESP);
  /* 11b3e513 sub esp, 0x38 */
  { uint32_t _a=(ESP),_b=(0x38u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3e516 push esi */
  push32((uint32_t)(ESI));
  /* 11b3e517 mov eax, dword ptr [0x11b694a4] */
  EAX = (r32((uint32_t)(0x11b694a4)));
  /* 11b3e51c imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b3e51f mov ecx, dword ptr [0x11b694a8] */
  ECX = (r32((uint32_t)(0x11b694a8)));
  /* 11b3e525 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e527 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11b3e52a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3e52d add edx, 0x17 */
  { uint32_t _a=(EDX),_b=(0x17u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e530 and edx, 0xfffffff0 */
  { uint32_t _r=(EDX)&(0xfffffff0u); EDX = (_r); fl_logic(_r,32); }
  /* 11b3e533 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11b3e536 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b3e539 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11b3e53c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3e53f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11b3e542 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3e546 jge 0x11b3e55c */
  if ((C.sf==C.of)) goto L_11b3e55c;
  /* 11b3e548 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b3e54b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b3e54e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11b3e550 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11b3e553 mov dword ptr [ebp - 0x34], 0xffffffff */
  w32((uint32_t)(EBP + -0x34), (0xffffffffu));
  /* 11b3e55a jmp 0x11b3e571 */
  goto L_11b3e571;
L_11b3e55c:;
  /* 11b3e55c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11b3e563 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b3e566 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3e569 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b3e56c shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11b3e56e mov dword ptr [ebp - 0x34], eax */
  w32((uint32_t)(EBP + -0x34), (EAX));
L_11b3e571:;
  /* 11b3e571 mov ecx, dword ptr [0x11b6949c] */
  ECX = (r32((uint32_t)(0x11b6949c)));
  /* 11b3e577 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
L_11b3e57a:;
  /* 11b3e57a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3e57d cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3e580 jae 0x11b3e5a6 */
  if (!C.cf) goto L_11b3e5a6;
  /* 11b3e582 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3e585 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3e588 and ecx, dword ptr [eax] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EAX))); ECX = (_r); fl_logic(_r,32); }
  /* 11b3e58a mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3e58d mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11b3e590 and eax, dword ptr [edx + 4] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + 0x4))); EAX = (_r); fl_logic(_r,32); }
  /* 11b3e593 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3e595 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b3e597 je 0x11b3e59b */
  if (C.zf) goto L_11b3e59b;
  /* 11b3e599 jmp 0x11b3e5a6 */
  goto L_11b3e5a6;
L_11b3e59b:;
  /* 11b3e59b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3e59e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e5a1 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11b3e5a4 jmp 0x11b3e57a */
  goto L_11b3e57a;
L_11b3e5a6:;
  /* 11b3e5a6 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3e5a9 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3e5ac jne 0x11b3e68d */
  if (!C.zf) goto L_11b3e68d;
  /* 11b3e5b2 mov eax, dword ptr [0x11b694a8] */
  EAX = (r32((uint32_t)(0x11b694a8)));
  /* 11b3e5b7 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11b3e5ba:;
  /* 11b3e5ba mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3e5bd cmp ecx, dword ptr [0x11b6949c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11b6949c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3e5c3 jae 0x11b3e5e9 */
  if (!C.cf) goto L_11b3e5e9;
  /* 11b3e5c5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3e5c8 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3e5cb and eax, dword ptr [edx] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX))); EAX = (_r); fl_logic(_r,32); }
  /* 11b3e5cd mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3e5d0 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11b3e5d3 and edx, dword ptr [ecx + 4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + 0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11b3e5d6 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3e5d8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3e5da je 0x11b3e5de */
  if (C.zf) goto L_11b3e5de;
  /* 11b3e5dc jmp 0x11b3e5e9 */
  goto L_11b3e5e9;
L_11b3e5de:;
  /* 11b3e5de mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3e5e1 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e5e4 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11b3e5e7 jmp 0x11b3e5ba */
  goto L_11b3e5ba;
L_11b3e5e9:;
  /* 11b3e5e9 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3e5ec cmp ecx, dword ptr [0x11b6949c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11b6949c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3e5f2 jne 0x11b3e68d */
  if (!C.zf) goto L_11b3e68d;
L_11b3e5f8:;
  /* 11b3e5f8 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3e5fb cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3e5fe jae 0x11b3e616 */
  if (!C.cf) goto L_11b3e616;
  /* 11b3e600 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3e603 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3e607 je 0x11b3e60b */
  if (C.zf) goto L_11b3e60b;
  /* 11b3e609 jmp 0x11b3e616 */
  goto L_11b3e616;
L_11b3e60b:;
  /* 11b3e60b mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3e60e add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e611 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11b3e614 jmp 0x11b3e5f8 */
  goto L_11b3e5f8;
L_11b3e616:;
  /* 11b3e616 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3e619 cmp edx, dword ptr [ebp - 0x2c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3e61c jne 0x11b3e667 */
  if (!C.zf) goto L_11b3e667;
  /* 11b3e61e mov eax, dword ptr [0x11b694a8] */
  EAX = (r32((uint32_t)(0x11b694a8)));
  /* 11b3e623 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11b3e626:;
  /* 11b3e626 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3e629 cmp ecx, dword ptr [0x11b6949c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11b6949c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3e62f jae 0x11b3e647 */
  if (!C.cf) goto L_11b3e647;
  /* 11b3e631 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3e634 cmp dword ptr [edx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3e638 je 0x11b3e63c */
  if (C.zf) goto L_11b3e63c;
  /* 11b3e63a jmp 0x11b3e647 */
  goto L_11b3e647;
L_11b3e63c:;
  /* 11b3e63c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3e63f add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e642 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11b3e645 jmp 0x11b3e626 */
  goto L_11b3e626;
L_11b3e647:;
  /* 11b3e647 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3e64a cmp ecx, dword ptr [0x11b6949c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11b6949c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3e650 jne 0x11b3e667 */
  if (!C.zf) goto L_11b3e667;
  /* 11b3e652 call 0x11b3ea50 */
  push32(0x11b3e657u); f_11b3ea50();
  /* 11b3e657 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11b3e65a cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3e65e jne 0x11b3e667 */
  if (!C.zf) goto L_11b3e667;
  /* 11b3e660 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3e662 jmp 0x11b3ea41 */
  goto L_11b3ea41;
L_11b3e667:;
  /* 11b3e667 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3e66a push edx */
  push32((uint32_t)(EDX));
  /* 11b3e66b call 0x11b3eb60 */
  push32(0x11b3e670u); f_11b3eb60();
  /* 11b3e670 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e673 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3e676 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11b3e679 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11b3e67b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3e67e mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11b3e681 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3e684 jne 0x11b3e68d */
  if (!C.zf) goto L_11b3e68d;
  /* 11b3e686 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3e688 jmp 0x11b3ea41 */
  goto L_11b3ea41;
L_11b3e68d:;
  /* 11b3e68d mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3e690 mov dword ptr [0x11b6949c], edx */
  w32((uint32_t)(0x11b6949c), (EDX));
  /* 11b3e696 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3e699 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11b3e69c mov dword ptr [ebp - 0x38], ecx */
  w32((uint32_t)(EBP + -0x38), (ECX));
  /* 11b3e69f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b3e6a2 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b3e6a4 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11b3e6a7 cmp dword ptr [ebp - 0x30], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3e6ab je 0x11b3e6d0 */
  if (C.zf) goto L_11b3e6d0;
  /* 11b3e6ad mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3e6b0 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b3e6b3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3e6b6 and eax, dword ptr [edx + ecx*4 + 0x44] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EDX + ECX*4 + 0x44))); EAX = (_r); fl_logic(_r,32); }
  /* 11b3e6ba mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3e6bd mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b3e6c0 mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 11b3e6c3 and esi, dword ptr [edx + ecx*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EDX + ECX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 11b3e6ca or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 11b3e6cc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3e6ce jne 0x11b3e705 */
  if (!C.zf) goto L_11b3e705;
L_11b3e6d0:;
  /* 11b3e6d0 mov dword ptr [ebp - 0x30], 0 */
  w32((uint32_t)(EBP + -0x30), (0x0u));
L_11b3e6d7:;
  /* 11b3e6d7 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3e6da mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b3e6dd mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3e6e0 and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 11b3e6e4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3e6e7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b3e6ea mov esi, dword ptr [ebp - 0x34] */
  ESI = (r32((uint32_t)(EBP + -0x34)));
  /* 11b3e6ed and esi, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); ESI = (_r); fl_logic(_r,32); }
  /* 11b3e6f4 or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 11b3e6f6 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b3e6f8 jne 0x11b3e705 */
  if (!C.zf) goto L_11b3e705;
  /* 11b3e6fa mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3e6fd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e700 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11b3e703 jmp 0x11b3e6d7 */
  goto L_11b3e6d7;
L_11b3e705:;
  /* 11b3e705 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3e708 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b3e70e mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b3e711 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11b3e718 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b3e71b mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11b3e722 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3e725 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b3e728 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3e72b and edx, dword ptr [ecx + eax*4 + 0x44] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0x44))); EDX = (_r); fl_logic(_r,32); }
  /* 11b3e72f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
  /* 11b3e732 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3e736 jne 0x11b3e752 */
  if (!C.zf) goto L_11b3e752;
  /* 11b3e738 mov dword ptr [ebp - 0x20], 0x20 */
  w32((uint32_t)(EBP + -0x20), (0x20u));
  /* 11b3e73f mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3e742 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b3e745 mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11b3e748 and edx, dword ptr [ecx + eax*4 + 0xc4] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(ECX + EAX*4 + 0xc4))); EDX = (_r); fl_logic(_r,32); }
  /* 11b3e74f mov dword ptr [ebp - 0x1c], edx */
  w32((uint32_t)(EBP + -0x1c), (EDX));
L_11b3e752:;
  /* 11b3e752 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3e756 jl 0x11b3e76b */
  if ((C.sf!=C.of)) goto L_11b3e76b;
  /* 11b3e758 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b3e75b shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11b3e75d mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11b3e760 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b3e763 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e766 mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11b3e769 jmp 0x11b3e752 */
  goto L_11b3e752;
L_11b3e76b:;
  /* 11b3e76b mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b3e76e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3e771 mov ecx, dword ptr [eax + edx*8 + 4] */
  ECX = (r32((uint32_t)(EAX + EDX*8 + 0x4)));
  /* 11b3e775 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11b3e778 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3e77b mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b3e77d sub eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3e780 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b3e783 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3e786 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11b3e789 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3e78c mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11b3e78f cmp dword ptr [ebp - 0x14], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3e793 jle 0x11b3e79c */
  if ((C.zf||C.sf!=C.of)) goto L_11b3e79c;
  /* 11b3e795 mov dword ptr [ebp - 0x14], 0x3f */
  w32((uint32_t)(EBP + -0x14), (0x3fu));
L_11b3e79c:;
  /* 11b3e79c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3e79f cmp edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3e7a2 je 0x11b3e9c0 */
  if (C.zf) goto L_11b3e9c0;
  /* 11b3e7a8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3e7ab mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3e7ae mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b3e7b1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3e7b4 jne 0x11b3e88a */
  if (!C.zf) goto L_11b3e88a;
  /* 11b3e7ba cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3e7be jge 0x11b3e81f */
  if ((C.sf==C.of)) goto L_11b3e81f;
  /* 11b3e7c0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11b3e7c5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b3e7c8 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11b3e7ca not eax */
  EAX = (~(EAX));
  /* 11b3e7cc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3e7cf mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b3e7d2 mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11b3e7d6 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3e7d8 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3e7db mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b3e7de mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11b3e7e2 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b3e7e5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e7e8 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11b3e7eb sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11b3e7ee mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b3e7f1 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e7f4 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11b3e7f7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b3e7fa add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e7fd movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11b3e801 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b3e803 jne 0x11b3e81d */
  if (!C.zf) goto L_11b3e81d;
  /* 11b3e805 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11b3e80a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b3e80d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11b3e80f not eax */
  EAX = (~(EAX));
  /* 11b3e811 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3e814 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b3e816 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3e818 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3e81b mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11b3e81d:;
  /* 11b3e81d jmp 0x11b3e88a */
  goto L_11b3e88a;
L_11b3e81f:;
  /* 11b3e81f mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b3e822 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3e825 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11b3e82a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11b3e82c not edx */
  EDX = (~(EDX));
  /* 11b3e82e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3e831 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b3e834 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11b3e83b and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3e83d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3e840 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b3e843 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
  /* 11b3e84a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b3e84d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e850 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11b3e853 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11b3e856 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b3e859 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e85c mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11b3e85f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b3e862 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e865 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11b3e869 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b3e86b jne 0x11b3e88a */
  if (!C.zf) goto L_11b3e88a;
  /* 11b3e86d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b3e870 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3e873 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11b3e878 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11b3e87a not edx */
  EDX = (~(EDX));
  /* 11b3e87c mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3e87f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b3e882 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3e884 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3e887 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11b3e88a:;
  /* 11b3e88a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3e88d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11b3e890 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3e893 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b3e896 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11b3e899 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3e89c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b3e89f mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3e8a2 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11b3e8a5 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11b3e8a8 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3e8ac je 0x11b3e9c0 */
  if (C.zf) goto L_11b3e9c0;
  /* 11b3e8b2 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3e8b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3e8b8 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 11b3e8bb mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b3e8be mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3e8c1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3e8c4 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b3e8c7 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11b3e8ca mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3e8cd mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3e8d0 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11b3e8d3 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3e8d6 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3e8d9 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11b3e8dc mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3e8df mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b3e8e2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3e8e5 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11b3e8e8 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3e8eb mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3e8ee mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b3e8f1 cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3e8f4 jne 0x11b3e9c0 */
  if (!C.zf) goto L_11b3e9c0;
  /* 11b3e8fa cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3e8fe jge 0x11b3e95a */
  if ((C.sf==C.of)) goto L_11b3e95a;
  /* 11b3e900 mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b3e903 add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e906 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11b3e90a mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b3e90d add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e910 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11b3e913 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11b3e915 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b3e918 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e91b mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11b3e91e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b3e920 jne 0x11b3e938 */
  if (!C.zf) goto L_11b3e938;
  /* 11b3e922 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11b3e927 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3e92a shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11b3e92c mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3e92f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b3e931 or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3e933 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3e936 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11b3e938:;
  /* 11b3e938 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11b3e93d mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3e940 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11b3e942 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3e945 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b3e948 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11b3e94c or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3e94e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3e951 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b3e954 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11b3e958 jmp 0x11b3e9c0 */
  goto L_11b3e9c0;
L_11b3e95a:;
  /* 11b3e95a mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b3e95d add eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e960 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11b3e964 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b3e967 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e96a mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11b3e96d add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11b3e96f mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b3e972 add edx, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e975 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11b3e978 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b3e97a jne 0x11b3e997 */
  if (!C.zf) goto L_11b3e997;
  /* 11b3e97c mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3e97f sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3e982 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11b3e987 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11b3e989 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3e98c mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b3e98f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3e991 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3e994 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11b3e997:;
  /* 11b3e997 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3e99a sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3e99d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11b3e9a2 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11b3e9a4 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3e9a7 mov ecx, dword ptr [ebp - 0x38] */
  ECX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b3e9aa mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11b3e9b1 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3e9b3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3e9b6 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b3e9b9 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_11b3e9c0:;
  /* 11b3e9c0 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3e9c4 je 0x11b3e9da */
  if (C.zf) goto L_11b3e9da;
  /* 11b3e9c6 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3e9c9 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3e9cc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11b3e9ce mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3e9d1 add edx, dword ptr [ebp - 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e9d4 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3e9d7 mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_11b3e9da:;
  /* 11b3e9da mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3e9dd add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e9e0 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11b3e9e3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b3e9e6 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e9e9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3e9ec mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11b3e9ee mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b3e9f1 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e9f4 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3e9f7 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3e9fa mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 11b3e9fd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3ea00 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b3ea02 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3ea05 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b3ea07 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3ea0a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3ea0d mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11b3ea0f test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b3ea11 jne 0x11b3ea33 */
  if (!C.zf) goto L_11b3ea33;
  /* 11b3ea13 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3ea16 cmp eax, dword ptr [0x11b694a0] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11b694a0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3ea1c jne 0x11b3ea33 */
  if (!C.zf) goto L_11b3ea33;
  /* 11b3ea1e mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3ea21 cmp ecx, dword ptr [0x11b69498] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11b69498))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3ea27 jne 0x11b3ea33 */
  if (!C.zf) goto L_11b3ea33;
  /* 11b3ea29 mov dword ptr [0x11b694a0], 0 */
  w32((uint32_t)(0x11b694a0), (0x0u));
L_11b3ea33:;
  /* 11b3ea33 mov edx, dword ptr [ebp - 0x38] */
  EDX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b3ea36 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3ea39 mov dword ptr [edx], eax */
  w32((uint32_t)(EDX), (EAX));
  /* 11b3ea3b mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3ea3e add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11b3ea41:;
  /* 11b3ea41 pop esi */
  ESI = (pop32());
  /* 11b3ea42 mov esp, ebp */
  ESP = (EBP);
  /* 11b3ea44 pop ebp */
  EBP = (pop32());
  /* 11b3ea45 ret  */
  ESPCHK(0x11b3e510u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ea50 @ 0x11b3ea50 (271 bytes, 78 insns) */
void f_11b3ea50(void) {
  FTRACE(0x11b3ea50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3ea50 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3ea51 mov ebp, esp */
  EBP = (ESP);
  /* 11b3ea53 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3ea54 mov eax, dword ptr [0x11b694a4] */
  EAX = (r32((uint32_t)(0x11b694a4)));
  /* 11b3ea59 cmp eax, dword ptr [0x11b69488] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11b69488))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3ea5f jne 0x11b3eaab */
  if (!C.zf) goto L_11b3eaab;
  /* 11b3ea61 mov ecx, dword ptr [0x11b69488] */
  ECX = (r32((uint32_t)(0x11b69488)));
  /* 11b3ea67 add ecx, 0x10 */
  { uint32_t _a=(ECX),_b=(0x10u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3ea6a imul ecx, ecx, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x14u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b3ea6d push ecx */
  push32((uint32_t)(ECX));
  /* 11b3ea6e mov edx, dword ptr [0x11b694a8] */
  EDX = (r32((uint32_t)(0x11b694a8)));
  /* 11b3ea74 push edx */
  push32((uint32_t)(EDX));
  /* 11b3ea75 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3ea77 mov eax, dword ptr [0x11b694ac] */
  EAX = (r32((uint32_t)(0x11b694ac)));
  /* 11b3ea7c push eax */
  push32((uint32_t)(EAX));
  /* 11b3ea7d call dword ptr [0x11b6a348] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a348))), 0x11b3ea83u);
  /* 11b3ea83 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b3ea86 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3ea8a jne 0x11b3ea93 */
  if (!C.zf) goto L_11b3ea93;
  /* 11b3ea8c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3ea8e jmp 0x11b3eb5b */
  goto L_11b3eb5b;
L_11b3ea93:;
  /* 11b3ea93 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3ea96 mov dword ptr [0x11b694a8], ecx */
  w32((uint32_t)(0x11b694a8), (ECX));
  /* 11b3ea9c mov edx, dword ptr [0x11b69488] */
  EDX = (r32((uint32_t)(0x11b69488)));
  /* 11b3eaa2 add edx, 0x10 */
  { uint32_t _a=(EDX),_b=(0x10u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3eaa5 mov dword ptr [0x11b69488], edx */
  w32((uint32_t)(0x11b69488), (EDX));
L_11b3eaab:;
  /* 11b3eaab mov eax, dword ptr [0x11b694a4] */
  EAX = (r32((uint32_t)(0x11b694a4)));
  /* 11b3eab0 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b3eab3 mov ecx, dword ptr [0x11b694a8] */
  ECX = (r32((uint32_t)(0x11b694a8)));
  /* 11b3eab9 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3eabb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b3eabe push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11b3eac3 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b3eac5 mov edx, dword ptr [0x11b694ac] */
  EDX = (r32((uint32_t)(0x11b694ac)));
  /* 11b3eacb push edx */
  push32((uint32_t)(EDX));
  /* 11b3eacc call dword ptr [0x11b6a358] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a358))), 0x11b3ead2u);
  /* 11b3ead2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3ead5 mov dword ptr [ecx + 0x10], eax */
  w32((uint32_t)(ECX + 0x10), (EAX));
  /* 11b3ead8 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3eadb cmp dword ptr [edx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3eadf jne 0x11b3eae5 */
  if (!C.zf) goto L_11b3eae5;
  /* 11b3eae1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3eae3 jmp 0x11b3eb5b */
  goto L_11b3eb5b;
L_11b3eae5:;
  /* 11b3eae5 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b3eae7 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 11b3eaec push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 11b3eaf1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3eaf3 call dword ptr [0x11b6a344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a344))), 0x11b3eaf9u);
  /* 11b3eaf9 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3eafc mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 11b3eaff mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3eb02 cmp dword ptr [edx + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3eb06 jne 0x11b3eb22 */
  if (!C.zf) goto L_11b3eb22;
  /* 11b3eb08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3eb0b mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11b3eb0e push ecx */
  push32((uint32_t)(ECX));
  /* 11b3eb0f push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3eb11 mov edx, dword ptr [0x11b694ac] */
  EDX = (r32((uint32_t)(0x11b694ac)));
  /* 11b3eb17 push edx */
  push32((uint32_t)(EDX));
  /* 11b3eb18 call dword ptr [0x11b6a36c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a36c))), 0x11b3eb1eu);
  /* 11b3eb1e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3eb20 jmp 0x11b3eb5b */
  goto L_11b3eb5b;
L_11b3eb22:;
  /* 11b3eb22 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3eb25 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11b3eb2b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3eb2e mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11b3eb35 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3eb38 mov dword ptr [edx + 8], 0xffffffff */
  w32((uint32_t)(EDX + 0x8), (0xffffffffu));
  /* 11b3eb3f mov eax, dword ptr [0x11b694a4] */
  EAX = (r32((uint32_t)(0x11b694a4)));
  /* 11b3eb44 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3eb47 mov dword ptr [0x11b694a4], eax */
  w32((uint32_t)(0x11b694a4), (EAX));
  /* 11b3eb4c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3eb4f mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11b3eb52 mov dword ptr [edx], 0xffffffff */
  w32((uint32_t)(EDX), (0xffffffffu));
  /* 11b3eb58 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11b3eb5b:;
  /* 11b3eb5b mov esp, ebp */
  ESP = (EBP);
  /* 11b3eb5d pop ebp */
  EBP = (pop32());
  /* 11b3eb5e ret  */
  ESPCHK(0x11b3ea50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000eb60 @ 0x11b3eb60 (494 bytes, 149 insns) */
void f_11b3eb60(void) {
  FTRACE(0x11b3eb60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3eb60 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3eb61 mov ebp, esp */
  EBP = (ESP);
  /* 11b3eb63 sub esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3eb66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3eb69 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11b3eb6c mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11b3eb6f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3eb72 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11b3eb75 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b3eb78 mov dword ptr [ebp - 0x28], 0 */
  w32((uint32_t)(EBP + -0x28), (0x0u));
L_11b3eb7f:;
  /* 11b3eb7f cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3eb83 jl 0x11b3eb98 */
  if ((C.sf!=C.of)) goto L_11b3eb98;
  /* 11b3eb85 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3eb88 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11b3eb8a mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b3eb8d mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b3eb90 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3eb93 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11b3eb96 jmp 0x11b3eb7f */
  goto L_11b3eb7f;
L_11b3eb98:;
  /* 11b3eb98 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b3eb9b imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b3eba1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b3eba4 lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11b3ebab mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11b3ebae mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11b3ebb5 jmp 0x11b3ebc0 */
  goto L_11b3ebc0;
L_11b3ebb7:;
  /* 11b3ebb7 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b3ebba add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3ebbd mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11b3ebc0:;
  /* 11b3ebc0 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3ebc4 jge 0x11b3ebe6 */
  if ((C.sf==C.of)) goto L_11b3ebe6;
  /* 11b3ebc6 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b3ebc9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3ebcc lea eax, [edx + ecx*8] */
  EAX = ((uint32_t)(EDX + ECX*8));
  /* 11b3ebcf mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11b3ebd2 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3ebd5 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3ebd8 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11b3ebdb mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3ebde mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3ebe1 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 11b3ebe4 jmp 0x11b3ebb7 */
  goto L_11b3ebb7;
L_11b3ebe6:;
  /* 11b3ebe6 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b3ebe9 shl edx, 0xf */
  EDX = (sh_shl((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11b3ebec mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3ebef mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11b3ebf2 add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3ebf4 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11b3ebf7 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b3ebf9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 11b3ebfe push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11b3ec03 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3ec06 push edx */
  push32((uint32_t)(EDX));
  /* 11b3ec07 call dword ptr [0x11b6a344] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a344))), 0x11b3ec0du);
  /* 11b3ec0d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3ec0f jne 0x11b3ec19 */
  if (!C.zf) goto L_11b3ec19;
  /* 11b3ec11 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b3ec14 jmp 0x11b3ed4a */
  goto L_11b3ed4a;
L_11b3ec19:;
  /* 11b3ec19 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3ec1c add eax, 0x7000 */
  { uint32_t _a=(EAX),_b=(0x7000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3ec21 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11b3ec24 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3ec27 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b3ec2a jmp 0x11b3ec38 */
  goto L_11b3ec38;
L_11b3ec2c:;
  /* 11b3ec2c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3ec2f add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3ec35 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11b3ec38:;
  /* 11b3ec38 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3ec3b cmp eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3ec3e ja 0x11b3ec9d */
  if ((!C.cf&&!C.zf)) goto L_11b3ec9d;
  /* 11b3ec40 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3ec43 mov dword ptr [ecx + 8], 0xffffffff */
  w32((uint32_t)(ECX + 0x8), (0xffffffffu));
  /* 11b3ec4a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3ec4d mov dword ptr [edx + 0xffc], 0xffffffff */
  w32((uint32_t)(EDX + 0xffc), (0xffffffffu));
  /* 11b3ec57 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3ec5a add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3ec5d mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11b3ec60 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3ec63 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 11b3ec69 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3ec6c add edx, 0x1000 */
  { uint32_t _a=(EDX),_b=(0x1000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3ec72 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3ec75 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11b3ec78 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3ec7b sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3ec81 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3ec84 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11b3ec87 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3ec8a add eax, 0xfec */
  { uint32_t _a=(EAX),_b=(0xfecu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3ec8f mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11b3ec92 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3ec95 mov dword ptr [ecx], 0xff0 */
  w32((uint32_t)(ECX), (0xff0u));
  /* 11b3ec9b jmp 0x11b3ec2c */
  goto L_11b3ec2c;
L_11b3ec9d:;
  /* 11b3ec9d mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3eca0 add edx, 0x1f8 */
  { uint32_t _a=(EDX),_b=(0x1f8u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3eca6 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11b3eca9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3ecac add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3ecaf mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3ecb2 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11b3ecb5 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3ecb8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b3ecbb mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11b3ecbe mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3ecc1 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3ecc4 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11b3ecc7 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b3ecca add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3eccd mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3ecd0 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 11b3ecd3 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3ecd6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11b3ecd9 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11b3ecdc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3ecdf mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3ece2 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11b3ece5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b3ece8 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b3eceb mov dword ptr [ecx + eax*4 + 0x44], 0 */
  w32((uint32_t)(ECX + EAX*4 + 0x44), (0x0u));
  /* 11b3ecf3 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b3ecf6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b3ecf9 mov dword ptr [eax + edx*4 + 0xc4], 1 */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (0x1u));
  /* 11b3ed04 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b3ed07 movsx edx, byte ptr [ecx + 0x43] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x43))));
  /* 11b3ed0b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b3ed0e mov cl, byte ptr [eax + 0x43] */
  CL = (r8((uint32_t)(EAX + 0x43)));
  /* 11b3ed11 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11b3ed14 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b3ed17 mov byte ptr [eax + 0x43], cl */
  w8((uint32_t)(EAX + 0x43), (CL));
  /* 11b3ed1a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b3ed1c jne 0x11b3ed2d */
  if (!C.zf) goto L_11b3ed2d;
  /* 11b3ed1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3ed21 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b3ed24 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11b3ed27 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3ed2a mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11b3ed2d:;
  /* 11b3ed2d mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11b3ed32 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b3ed35 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11b3ed37 not edx */
  EDX = (~(EDX));
  /* 11b3ed39 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3ed3c mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11b3ed3f and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3ed41 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3ed44 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11b3ed47 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
L_11b3ed4a:;
  /* 11b3ed4a mov esp, ebp */
  ESP = (EBP);
  /* 11b3ed4c pop ebp */
  EBP = (pop32());
  /* 11b3ed4d ret  */
  ESPCHK(0x11b3eb60u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ed50 @ 0x11b3ed50 (1515 bytes, 489 insns) */
void f_11b3ed50(void) {
  FTRACE(0x11b3ed50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3ed50 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3ed51 mov ebp, esp */
  EBP = (ESP);
  /* 11b3ed53 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3ed56 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b3ed59 add eax, 0x17 */
  { uint32_t _a=(EAX),_b=(0x17u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3ed5c and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 11b3ed5e mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11b3ed61 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3ed64 mov edx, dword ptr [ecx + 0x10] */
  EDX = (r32((uint32_t)(ECX + 0x10)));
  /* 11b3ed67 mov dword ptr [ebp - 0x30], edx */
  w32((uint32_t)(EBP + -0x30), (EDX));
  /* 11b3ed6a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3ed6d mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3ed70 sub ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3ed73 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b3ed76 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3ed79 shr edx, 0xf */
  EDX = (sh_shr((uint32_t)(EDX), (0xfu)&0x1f, 32));
  /* 11b3ed7c mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b3ed7f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3ed82 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b3ed88 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3ed8b lea edx, [ecx + eax + 0x144] */
  EDX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 11b3ed92 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11b3ed95 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3ed98 sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3ed9b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11b3ed9e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3eda1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b3eda3 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3eda6 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
  /* 11b3eda9 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3edac add eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3edaf mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11b3edb2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b3edb5 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b3edb7 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11b3edba mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b3edbd cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3edc0 jle 0x11b3f076 */
  if ((C.zf||C.sf!=C.of)) goto L_11b3f076;
  /* 11b3edc6 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3edc9 and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11b3edcc test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b3edce jne 0x11b3eddb */
  if (!C.zf) goto L_11b3eddb;
  /* 11b3edd0 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b3edd3 add edx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3edd6 cmp dword ptr [ebp - 0x1c], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3edd9 jle 0x11b3ede2 */
  if ((C.zf||C.sf!=C.of)) goto L_11b3ede2;
L_11b3eddb:;
  /* 11b3eddb xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3eddd jmp 0x11b3f337 */
  goto L_11b3f337;
L_11b3ede2:;
  /* 11b3ede2 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3ede5 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11b3ede8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3edeb mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11b3edee cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3edf2 jbe 0x11b3edfb */
  if ((C.cf||C.zf)) goto L_11b3edfb;
  /* 11b3edf4 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_11b3edfb:;
  /* 11b3edfb mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b3edfe mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b3ee01 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b3ee04 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3ee07 jne 0x11b3eedd */
  if (!C.zf) goto L_11b3eedd;
  /* 11b3ee0d cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3ee11 jae 0x11b3ee72 */
  if (!C.cf) goto L_11b3ee72;
  /* 11b3ee13 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11b3ee18 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b3ee1b shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11b3ee1d not edx */
  EDX = (~(EDX));
  /* 11b3ee1f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3ee22 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3ee25 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11b3ee29 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3ee2b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3ee2e mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3ee31 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11b3ee35 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3ee38 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3ee3b mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11b3ee3e sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11b3ee41 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3ee44 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3ee47 mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11b3ee4a mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3ee4d add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3ee50 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11b3ee54 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b3ee56 jne 0x11b3ee70 */
  if (!C.zf) goto L_11b3ee70;
  /* 11b3ee58 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11b3ee5d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b3ee60 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11b3ee62 not edx */
  EDX = (~(EDX));
  /* 11b3ee64 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3ee67 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b3ee69 and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3ee6b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3ee6e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11b3ee70:;
  /* 11b3ee70 jmp 0x11b3eedd */
  goto L_11b3eedd;
L_11b3ee72:;
  /* 11b3ee72 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b3ee75 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3ee78 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11b3ee7d shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11b3ee7f not eax */
  EAX = (~(EAX));
  /* 11b3ee81 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3ee84 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3ee87 mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11b3ee8e and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3ee90 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3ee93 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3ee96 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11b3ee9d mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3eea0 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3eea3 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11b3eea6 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11b3eea9 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3eeac add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3eeaf mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11b3eeb2 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3eeb5 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3eeb8 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11b3eebc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b3eebe jne 0x11b3eedd */
  if (!C.zf) goto L_11b3eedd;
  /* 11b3eec0 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b3eec3 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3eec6 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11b3eecb shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11b3eecd not eax */
  EAX = (~(EAX));
  /* 11b3eecf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3eed2 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b3eed5 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3eed7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3eeda mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11b3eedd:;
  /* 11b3eedd mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b3eee0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11b3eee3 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b3eee6 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b3eee9 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11b3eeec mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b3eeef mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b3eef2 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b3eef5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11b3eef8 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11b3eefb mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b3eefe add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3ef01 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3ef04 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11b3ef07 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3ef0b jle 0x11b3f057 */
  if ((C.zf||C.sf!=C.of)) goto L_11b3f057;
  /* 11b3ef11 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3ef14 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3ef17 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11b3ef1a mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3ef1d sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11b3ef20 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3ef23 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11b3ef26 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3ef2a jbe 0x11b3ef33 */
  if ((C.cf||C.zf)) goto L_11b3ef33;
  /* 11b3ef2c mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_11b3ef33:;
  /* 11b3ef33 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b3ef36 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3ef39 lea edx, [ecx + eax*8] */
  EDX = ((uint32_t)(ECX + EAX*8));
  /* 11b3ef3c mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11b3ef3f mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b3ef42 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3ef45 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b3ef48 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11b3ef4b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b3ef4e mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3ef51 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 11b3ef54 mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3ef57 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b3ef5a mov dword ptr [edx + 4], eax */
  w32((uint32_t)(EDX + 0x4), (EAX));
  /* 11b3ef5d mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b3ef60 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b3ef63 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b3ef66 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11b3ef69 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b3ef6c mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b3ef6f mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b3ef72 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3ef75 jne 0x11b3f043 */
  if (!C.zf) goto L_11b3f043;
  /* 11b3ef7b cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3ef7f jae 0x11b3efdc */
  if (!C.cf) goto L_11b3efdc;
  /* 11b3ef81 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3ef84 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3ef87 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11b3ef8b mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3ef8e add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3ef91 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11b3ef94 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11b3ef97 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3ef9a add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3ef9d mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11b3efa0 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b3efa2 jne 0x11b3efba */
  if (!C.zf) goto L_11b3efba;
  /* 11b3efa4 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11b3efa9 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b3efac shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11b3efae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3efb1 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b3efb3 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3efb5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3efb8 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11b3efba:;
  /* 11b3efba mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11b3efbf mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b3efc2 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11b3efc4 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3efc7 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3efca mov ecx, dword ptr [edx + ecx*4 + 0x44] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0x44)));
  /* 11b3efce or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3efd0 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3efd3 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3efd6 mov dword ptr [eax + edx*4 + 0x44], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0x44), (ECX));
  /* 11b3efda jmp 0x11b3f043 */
  goto L_11b3f043;
L_11b3efdc:;
  /* 11b3efdc mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3efdf add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3efe2 movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11b3efe6 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3efe9 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3efec mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11b3efef add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11b3eff2 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3eff5 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3eff8 mov byte ptr [eax + 4], cl */
  w8((uint32_t)(EAX + 0x4), (CL));
  /* 11b3effb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b3effd jne 0x11b3f01a */
  if (!C.zf) goto L_11b3f01a;
  /* 11b3efff mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b3f002 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3f005 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11b3f00a shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11b3f00c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3f00f mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b3f012 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3f014 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3f017 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
L_11b3f01a:;
  /* 11b3f01a mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b3f01d sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3f020 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11b3f025 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11b3f027 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3f02a mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3f02d mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11b3f034 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3f036 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3f039 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3f03c mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
L_11b3f043:;
  /* 11b3f043 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b3f046 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3f049 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11b3f04b mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b3f04e add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3f051 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3f054 mov dword ptr [eax - 4], ecx */
  w32((uint32_t)(EAX + -0x4), (ECX));
L_11b3f057:;
  /* 11b3f057 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b3f05a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3f05d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3f060 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11b3f062 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b3f065 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3f068 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3f06b add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3f06e mov dword ptr [edx - 4], ecx */
  w32((uint32_t)(EDX + -0x4), (ECX));
  /* 11b3f071 jmp 0x11b3f332 */
  goto L_11b3f332;
L_11b3f076:;
  /* 11b3f076 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b3f079 cmp eax, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3f07c jge 0x11b3f332 */
  if ((C.sf==C.of)) goto L_11b3f332;
  /* 11b3f082 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b3f085 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3f088 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3f08b mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11b3f08d mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b3f090 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3f093 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3f096 add ecx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3f099 mov dword ptr [ecx - 4], eax */
  w32((uint32_t)(ECX + -0x4), (EAX));
  /* 11b3f09c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3f09f add edx, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3f0a2 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11b3f0a5 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b3f0a8 sub eax, dword ptr [ebp - 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3f0ab mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11b3f0ae mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b3f0b1 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11b3f0b4 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3f0b7 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11b3f0ba cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3f0be jbe 0x11b3f0c7 */
  if ((C.cf||C.zf)) goto L_11b3f0c7;
  /* 11b3f0c0 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_11b3f0c7:;
  /* 11b3f0c7 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3f0ca and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11b3f0cd test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b3f0cf jne 0x11b3f210 */
  if (!C.zf) goto L_11b3f210;
  /* 11b3f0d5 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3f0d8 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11b3f0db sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3f0de mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11b3f0e1 cmp dword ptr [ebp - 0x20], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3f0e5 jbe 0x11b3f0ee */
  if ((C.cf||C.zf)) goto L_11b3f0ee;
  /* 11b3f0e7 mov dword ptr [ebp - 0x20], 0x3f */
  w32((uint32_t)(EBP + -0x20), (0x3fu));
L_11b3f0ee:;
  /* 11b3f0ee mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b3f0f1 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b3f0f4 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b3f0f7 cmp eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3f0fa jne 0x11b3f1d0 */
  if (!C.zf) goto L_11b3f1d0;
  /* 11b3f100 cmp dword ptr [ebp - 0x20], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3f104 jae 0x11b3f165 */
  if (!C.cf) goto L_11b3f165;
  /* 11b3f106 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11b3f10b mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b3f10e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11b3f110 not edx */
  EDX = (~(EDX));
  /* 11b3f112 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3f115 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3f118 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11b3f11c and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3f11e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3f121 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3f124 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11b3f128 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3f12b add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3f12e mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11b3f131 sub cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11b3f134 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3f137 add edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3f13a mov byte ptr [edx + 4], cl */
  w8((uint32_t)(EDX + 0x4), (CL));
  /* 11b3f13d mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3f140 add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3f143 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11b3f147 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b3f149 jne 0x11b3f163 */
  if (!C.zf) goto L_11b3f163;
  /* 11b3f14b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11b3f150 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b3f153 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11b3f155 not edx */
  EDX = (~(EDX));
  /* 11b3f157 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3f15a mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b3f15c and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3f15e mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3f161 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
L_11b3f163:;
  /* 11b3f163 jmp 0x11b3f1d0 */
  goto L_11b3f1d0;
L_11b3f165:;
  /* 11b3f165 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b3f168 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3f16b mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11b3f170 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11b3f172 not eax */
  EAX = (~(EAX));
  /* 11b3f174 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3f177 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3f17a mov ecx, dword ptr [edx + ecx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EDX + ECX*4 + 0xc4)));
  /* 11b3f181 and ecx, eax */
  { uint32_t _r=(ECX)&(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3f183 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3f186 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3f189 mov dword ptr [eax + edx*4 + 0xc4], ecx */
  w32((uint32_t)(EAX + EDX*4 + 0xc4), (ECX));
  /* 11b3f190 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3f193 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3f196 mov dl, byte ptr [ecx + 4] */
  DL = (r8((uint32_t)(ECX + 0x4)));
  /* 11b3f199 sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11b3f19c mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3f19f add eax, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3f1a2 mov byte ptr [eax + 4], dl */
  w8((uint32_t)(EAX + 0x4), (DL));
  /* 11b3f1a5 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3f1a8 add ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3f1ab movsx edx, byte ptr [ecx + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x4))));
  /* 11b3f1af test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b3f1b1 jne 0x11b3f1d0 */
  if (!C.zf) goto L_11b3f1d0;
  /* 11b3f1b3 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b3f1b6 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3f1b9 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11b3f1be shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11b3f1c0 not eax */
  EAX = (~(EAX));
  /* 11b3f1c2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3f1c5 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b3f1c8 and edx, eax */
  { uint32_t _r=(EDX)&(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3f1ca mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3f1cd mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11b3f1d0:;
  /* 11b3f1d0 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b3f1d3 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11b3f1d6 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b3f1d9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b3f1dc mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11b3f1df mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b3f1e2 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b3f1e5 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b3f1e8 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11b3f1eb mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11b3f1ee mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b3f1f1 add eax, dword ptr [ebp - 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3f1f4 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11b3f1f7 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b3f1fa sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 11b3f1fd sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3f200 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11b3f203 cmp dword ptr [ebp - 0x24], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3f207 jbe 0x11b3f210 */
  if ((C.cf||C.zf)) goto L_11b3f210;
  /* 11b3f209 mov dword ptr [ebp - 0x24], 0x3f */
  w32((uint32_t)(EBP + -0x24), (0x3fu));
L_11b3f210:;
  /* 11b3f210 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3f213 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3f216 lea ecx, [eax + edx*8] */
  ECX = ((uint32_t)(EAX + EDX*8));
  /* 11b3f219 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11b3f21c mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3f21f mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3f222 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b3f225 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11b3f228 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3f22b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3f22e mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11b3f231 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3f234 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3f237 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 11b3f23a mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3f23d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b3f240 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3f243 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 11b3f246 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3f249 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3f24c mov edx, dword ptr [eax + 4] */
  EDX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b3f24f cmp edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3f252 jne 0x11b3f31e */
  if (!C.zf) goto L_11b3f31e;
  /* 11b3f258 cmp dword ptr [ebp - 0x24], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3f25c jae 0x11b3f2b8 */
  if (!C.cf) goto L_11b3f2b8;
  /* 11b3f25e mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3f261 add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3f264 movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11b3f268 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3f26b add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3f26e mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11b3f271 add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11b3f273 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3f276 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3f279 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11b3f27c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b3f27e jne 0x11b3f296 */
  if (!C.zf) goto L_11b3f296;
  /* 11b3f280 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11b3f285 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3f288 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11b3f28a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3f28d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b3f28f or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3f291 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3f294 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_11b3f296:;
  /* 11b3f296 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11b3f29b mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3f29e shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11b3f2a0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3f2a3 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3f2a6 mov eax, dword ptr [ecx + eax*4 + 0x44] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0x44)));
  /* 11b3f2aa or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3f2ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3f2af mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3f2b2 mov dword ptr [edx + ecx*4 + 0x44], eax */
  w32((uint32_t)(EDX + ECX*4 + 0x44), (EAX));
  /* 11b3f2b6 jmp 0x11b3f31e */
  goto L_11b3f31e;
L_11b3f2b8:;
  /* 11b3f2b8 mov eax, dword ptr [ebp - 0x30] */
  EAX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3f2bb add eax, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3f2be movsx ecx, byte ptr [eax + 4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x4))));
  /* 11b3f2c2 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3f2c5 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3f2c8 mov al, byte ptr [edx + 4] */
  AL = (r8((uint32_t)(EDX + 0x4)));
  /* 11b3f2cb add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11b3f2cd mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3f2d0 add edx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3f2d3 mov byte ptr [edx + 4], al */
  w8((uint32_t)(EDX + 0x4), (AL));
  /* 11b3f2d6 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b3f2d8 jne 0x11b3f2f5 */
  if (!C.zf) goto L_11b3f2f5;
  /* 11b3f2da mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3f2dd sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3f2e0 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 11b3f2e5 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 11b3f2e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3f2ea mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b3f2ed or edx, eax */
  { uint32_t _r=(EDX)|(EAX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3f2ef mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3f2f2 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
L_11b3f2f5:;
  /* 11b3f2f5 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3f2f8 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3f2fb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11b3f300 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11b3f302 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3f305 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3f308 mov eax, dword ptr [ecx + eax*4 + 0xc4] */
  EAX = (r32((uint32_t)(ECX + EAX*4 + 0xc4)));
  /* 11b3f30f or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3f311 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3f314 mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b3f317 mov dword ptr [edx + ecx*4 + 0xc4], eax */
  w32((uint32_t)(EDX + ECX*4 + 0xc4), (EAX));
L_11b3f31e:;
  /* 11b3f31e mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3f321 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b3f324 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11b3f326 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3f329 add edx, dword ptr [ebp - 0x28] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x28))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3f32c mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b3f32f mov dword ptr [edx - 4], eax */
  w32((uint32_t)(EDX + -0x4), (EAX));
L_11b3f332:;
  /* 11b3f332 mov eax, 1 */
  EAX = (0x1u);
L_11b3f337:;
  /* 11b3f337 mov esp, ebp */
  ESP = (EBP);
  /* 11b3f339 pop ebp */
  EBP = (pop32());
  /* 11b3f33a ret  */
  ESPCHK(0x11b3ed50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f340 @ 0x11b3f340 (304 bytes, 79 insns) */
void f_11b3f340(void) {
  FTRACE(0x11b3f340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3f340 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3f341 mov ebp, esp */
  EBP = (ESP);
  /* 11b3f343 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3f344 cmp dword ptr [0x11b694a0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b694a0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3f34b je 0x11b3f46c */
  if (C.zf) goto L_11b3f46c;
  /* 11b3f351 mov eax, dword ptr [0x11b69498] */
  EAX = (r32((uint32_t)(0x11b69498)));
  /* 11b3f356 shl eax, 0xf */
  EAX = (sh_shl((uint32_t)(EAX), (0xfu)&0x1f, 32));
  /* 11b3f359 mov ecx, dword ptr [0x11b694a0] */
  ECX = (r32((uint32_t)(0x11b694a0)));
  /* 11b3f35f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11b3f362 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3f364 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b3f367 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 11b3f36c push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11b3f371 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3f374 push eax */
  push32((uint32_t)(EAX));
  /* 11b3f375 call dword ptr [0x11b6a368] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a368))), 0x11b3f37bu);
  /* 11b3f37b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11b3f380 mov ecx, dword ptr [0x11b69498] */
  ECX = (r32((uint32_t)(0x11b69498)));
  /* 11b3f386 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11b3f388 mov eax, dword ptr [0x11b694a0] */
  EAX = (r32((uint32_t)(0x11b694a0)));
  /* 11b3f38d mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11b3f390 or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3f392 mov edx, dword ptr [0x11b694a0] */
  EDX = (r32((uint32_t)(0x11b694a0)));
  /* 11b3f398 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 11b3f39b mov eax, dword ptr [0x11b694a0] */
  EAX = (r32((uint32_t)(0x11b694a0)));
  /* 11b3f3a0 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11b3f3a3 mov edx, dword ptr [0x11b69498] */
  EDX = (r32((uint32_t)(0x11b69498)));
  /* 11b3f3a9 mov dword ptr [ecx + edx*4 + 0xc4], 0 */
  w32((uint32_t)(ECX + EDX*4 + 0xc4), (0x0u));
  /* 11b3f3b4 mov eax, dword ptr [0x11b694a0] */
  EAX = (r32((uint32_t)(0x11b694a0)));
  /* 11b3f3b9 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11b3f3bc mov dl, byte ptr [ecx + 0x43] */
  DL = (r8((uint32_t)(ECX + 0x43)));
  /* 11b3f3bf sub dl, 1 */
  { uint32_t _a=(DL),_b=(0x1u),_r=_a-_b; DL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11b3f3c2 mov eax, dword ptr [0x11b694a0] */
  EAX = (r32((uint32_t)(0x11b694a0)));
  /* 11b3f3c7 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11b3f3ca mov byte ptr [ecx + 0x43], dl */
  w8((uint32_t)(ECX + 0x43), (DL));
  /* 11b3f3cd mov edx, dword ptr [0x11b694a0] */
  EDX = (r32((uint32_t)(0x11b694a0)));
  /* 11b3f3d3 mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11b3f3d6 movsx ecx, byte ptr [eax + 0x43] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x43))));
  /* 11b3f3da test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b3f3dc jne 0x11b3f3f2 */
  if (!C.zf) goto L_11b3f3f2;
  /* 11b3f3de mov edx, dword ptr [0x11b694a0] */
  EDX = (r32((uint32_t)(0x11b694a0)));
  /* 11b3f3e4 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b3f3e7 and al, 0xfe */
  { uint32_t _r=(AL)&(0xfeu); AL = (_r); fl_logic(_r,8); }
  /* 11b3f3e9 mov ecx, dword ptr [0x11b694a0] */
  ECX = (r32((uint32_t)(0x11b694a0)));
  /* 11b3f3ef mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
L_11b3f3f2:;
  /* 11b3f3f2 mov edx, dword ptr [0x11b694a0] */
  EDX = (r32((uint32_t)(0x11b694a0)));
  /* 11b3f3f8 cmp dword ptr [edx + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3f3fc jne 0x11b3f462 */
  if (!C.zf) goto L_11b3f462;
  /* 11b3f3fe cmp dword ptr [0x11b694a4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b694a4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3f405 jle 0x11b3f462 */
  if ((C.zf||C.sf!=C.of)) goto L_11b3f462;
  /* 11b3f407 mov eax, dword ptr [0x11b694a0] */
  EAX = (r32((uint32_t)(0x11b694a0)));
  /* 11b3f40c mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 11b3f40f push ecx */
  push32((uint32_t)(ECX));
  /* 11b3f410 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3f412 mov edx, dword ptr [0x11b694ac] */
  EDX = (r32((uint32_t)(0x11b694ac)));
  /* 11b3f418 push edx */
  push32((uint32_t)(EDX));
  /* 11b3f419 call dword ptr [0x11b6a36c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a36c))), 0x11b3f41fu);
  /* 11b3f41f mov eax, dword ptr [0x11b694a4] */
  EAX = (r32((uint32_t)(0x11b694a4)));
  /* 11b3f424 imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b3f427 mov ecx, dword ptr [0x11b694a8] */
  ECX = (r32((uint32_t)(0x11b694a8)));
  /* 11b3f42d add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3f42f mov edx, dword ptr [0x11b694a0] */
  EDX = (r32((uint32_t)(0x11b694a0)));
  /* 11b3f435 add edx, 0x14 */
  { uint32_t _a=(EDX),_b=(0x14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3f438 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3f43a push ecx */
  push32((uint32_t)(ECX));
  /* 11b3f43b mov eax, dword ptr [0x11b694a0] */
  EAX = (r32((uint32_t)(0x11b694a0)));
  /* 11b3f440 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3f443 push eax */
  push32((uint32_t)(EAX));
  /* 11b3f444 mov ecx, dword ptr [0x11b694a0] */
  ECX = (r32((uint32_t)(0x11b694a0)));
  /* 11b3f44a push ecx */
  push32((uint32_t)(ECX));
  /* 11b3f44b call 0x11b3d590 */
  push32(0x11b3f450u); f_11b3d590();
  /* 11b3f450 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3f453 mov edx, dword ptr [0x11b694a4] */
  EDX = (r32((uint32_t)(0x11b694a4)));
  /* 11b3f459 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3f45c mov dword ptr [0x11b694a4], edx */
  w32((uint32_t)(0x11b694a4), (EDX));
L_11b3f462:;
  /* 11b3f462 mov dword ptr [0x11b694a0], 0 */
  w32((uint32_t)(0x11b694a0), (0x0u));
L_11b3f46c:;
  /* 11b3f46c mov esp, ebp */
  ESP = (EBP);
  /* 11b3f46e pop ebp */
  EBP = (pop32());
  /* 11b3f46f ret  */
  ESPCHK(0x11b3f340u, _esp0);
  ESP += 4; return;
}

/* FUN_1000f470 @ 0x11b3f470 (1565 bytes, 343 insns) */
void f_11b3f470(void) {
  FTRACE(0x11b3f470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3f470 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3f471 mov ebp, esp */
  EBP = (ESP);
  /* 11b3f473 sub esp, 0x168 */
  { uint32_t _a=(ESP),_b=(0x168u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3f479 mov eax, dword ptr [0x11b694a4] */
  EAX = (r32((uint32_t)(0x11b694a4)));
  /* 11b3f47e imul eax, eax, 0x14 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x14u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b3f481 push eax */
  push32((uint32_t)(EAX));
  /* 11b3f482 mov ecx, dword ptr [0x11b694a8] */
  ECX = (r32((uint32_t)(0x11b694a8)));
  /* 11b3f488 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3f489 call dword ptr [0x11b6a3d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3d8))), 0x11b3f48fu);
  /* 11b3f48f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3f491 je 0x11b3f49b */
  if (C.zf) goto L_11b3f49b;
  /* 11b3f493 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b3f496 jmp 0x11b3fa89 */
  goto L_11b3fa89;
L_11b3f49b:;
  /* 11b3f49b mov edx, dword ptr [0x11b694a8] */
  EDX = (r32((uint32_t)(0x11b694a8)));
  /* 11b3f4a1 mov dword ptr [ebp - 0x13c], edx */
  w32((uint32_t)(EBP + -0x13c), (EDX));
  /* 11b3f4a7 mov dword ptr [ebp - 0x120], 0 */
  w32((uint32_t)(EBP + -0x120), (0x0u));
  /* 11b3f4b1 jmp 0x11b3f4c2 */
  goto L_11b3f4c2;
L_11b3f4b3:;
  /* 11b3f4b3 mov eax, dword ptr [ebp - 0x120] */
  EAX = (r32((uint32_t)(EBP + -0x120)));
  /* 11b3f4b9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3f4bc mov dword ptr [ebp - 0x120], eax */
  w32((uint32_t)(EBP + -0x120), (EAX));
L_11b3f4c2:;
  /* 11b3f4c2 mov ecx, dword ptr [ebp - 0x120] */
  ECX = (r32((uint32_t)(EBP + -0x120)));
  /* 11b3f4c8 cmp ecx, dword ptr [0x11b694a4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11b694a4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3f4ce jge 0x11b3fa87 */
  if ((C.sf==C.of)) goto L_11b3fa87;
  /* 11b3f4d4 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11b3f4da mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11b3f4dd mov dword ptr [ebp - 0x160], eax */
  w32((uint32_t)(EBP + -0x160), (EAX));
  /* 11b3f4e3 push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 11b3f4e8 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 11b3f4ee push ecx */
  push32((uint32_t)(ECX));
  /* 11b3f4ef call dword ptr [0x11b6a3d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3d8))), 0x11b3f4f5u);
  /* 11b3f4f5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3f4f7 je 0x11b3f503 */
  if (C.zf) goto L_11b3f503;
  /* 11b3f4f9 mov eax, 0xfffffffe */
  EAX = (0xfffffffeu);
  /* 11b3f4fe jmp 0x11b3fa89 */
  goto L_11b3fa89;
L_11b3f503:;
  /* 11b3f503 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11b3f509 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11b3f50c mov dword ptr [ebp - 0x128], eax */
  w32((uint32_t)(EBP + -0x128), (EAX));
  /* 11b3f512 mov ecx, dword ptr [ebp - 0x160] */
  ECX = (r32((uint32_t)(EBP + -0x160)));
  /* 11b3f518 add ecx, 0x144 */
  { uint32_t _a=(ECX),_b=(0x144u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3f51e mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11b3f521 mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11b3f527 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11b3f52a mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b3f52d mov dword ptr [ebp - 0x144], 0 */
  w32((uint32_t)(EBP + -0x144), (0x0u));
  /* 11b3f537 mov dword ptr [ebp - 0x158], 0 */
  w32((uint32_t)(EBP + -0x158), (0x0u));
  /* 11b3f541 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11b3f548 jmp 0x11b3f553 */
  goto L_11b3f553;
L_11b3f54a:;
  /* 11b3f54a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3f54d add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3f550 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11b3f553:;
  /* 11b3f553 cmp dword ptr [ebp - 0xc], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3f557 jge 0x11b3fa4b */
  if ((C.sf==C.of)) goto L_11b3fa4b;
  /* 11b3f55d mov dword ptr [ebp - 0x11c], 0 */
  w32((uint32_t)(EBP + -0x11c), (0x0u));
  /* 11b3f567 mov dword ptr [ebp - 0x150], 0 */
  w32((uint32_t)(EBP + -0x150), (0x0u));
  /* 11b3f571 mov dword ptr [ebp - 0x12c], 0 */
  w32((uint32_t)(EBP + -0x12c), (0x0u));
  /* 11b3f57b mov dword ptr [ebp - 0x14c], 0 */
  w32((uint32_t)(EBP + -0x14c), (0x0u));
  /* 11b3f585 jmp 0x11b3f596 */
  goto L_11b3f596;
L_11b3f587:;
  /* 11b3f587 mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11b3f58d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3f590 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
L_11b3f596:;
  /* 11b3f596 cmp dword ptr [ebp - 0x14c], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3f59d jge 0x11b3f5b2 */
  if ((C.sf==C.of)) goto L_11b3f5b2;
  /* 11b3f59f mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11b3f5a5 mov dword ptr [ebp + eax*4 - 0x118], 0 */
  w32((uint32_t)(EBP + EAX*4 + -0x118), (0x0u));
  /* 11b3f5b0 jmp 0x11b3f587 */
  goto L_11b3f587;
L_11b3f5b2:;
  /* 11b3f5b2 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3f5b6 jl 0x11b3f9ed */
  if ((C.sf!=C.of)) goto L_11b3f9ed;
  /* 11b3f5bc push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 11b3f5c1 mov ecx, dword ptr [ebp - 0x128] */
  ECX = (r32((uint32_t)(EBP + -0x128)));
  /* 11b3f5c7 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3f5c8 call dword ptr [0x11b6a3d8] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a3d8))), 0x11b3f5ceu);
  /* 11b3f5ce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3f5d0 je 0x11b3f5dc */
  if (C.zf) goto L_11b3f5dc;
  /* 11b3f5d2 mov eax, 0xfffffffc */
  EAX = (0xfffffffcu);
  /* 11b3f5d7 jmp 0x11b3fa89 */
  goto L_11b3fa89;
L_11b3f5dc:;
  /* 11b3f5dc mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 11b3f5e2 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11b3f5e5 mov dword ptr [ebp - 0x140], 0 */
  w32((uint32_t)(EBP + -0x140), (0x0u));
  /* 11b3f5ef jmp 0x11b3f600 */
  goto L_11b3f600;
L_11b3f5f1:;
  /* 11b3f5f1 mov eax, dword ptr [ebp - 0x140] */
  EAX = (r32((uint32_t)(EBP + -0x140)));
  /* 11b3f5f7 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3f5fa mov dword ptr [ebp - 0x140], eax */
  w32((uint32_t)(EBP + -0x140), (EAX));
L_11b3f600:;
  /* 11b3f600 cmp dword ptr [ebp - 0x140], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x140))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3f607 jge 0x11b3f784 */
  if ((C.sf==C.of)) goto L_11b3f784;
  /* 11b3f60d mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3f610 add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3f613 mov dword ptr [ebp - 0x130], ecx */
  w32((uint32_t)(EBP + -0x130), (ECX));
  /* 11b3f619 mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11b3f61f add edx, 0xff0 */
  { uint32_t _a=(EDX),_b=(0xff0u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3f625 mov dword ptr [ebp - 0x138], edx */
  w32((uint32_t)(EBP + -0x138), (EDX));
  /* 11b3f62b mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11b3f631 cmp dword ptr [eax - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3f635 jne 0x11b3f642 */
  if (!C.zf) goto L_11b3f642;
  /* 11b3f637 mov ecx, dword ptr [ebp - 0x138] */
  ECX = (r32((uint32_t)(EBP + -0x138)));
  /* 11b3f63d cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3f640 je 0x11b3f64c */
  if (C.zf) goto L_11b3f64c;
L_11b3f642:;
  /* 11b3f642 mov eax, 0xfffffffb */
  EAX = (0xfffffffbu);
  /* 11b3f647 jmp 0x11b3fa89 */
  goto L_11b3fa89;
L_11b3f64c:;
  /* 11b3f64c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11b3f652 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b3f654 mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 11b3f65a mov ecx, dword ptr [ebp - 0x148] */
  ECX = (r32((uint32_t)(EBP + -0x148)));
  /* 11b3f660 mov dword ptr [ebp - 0x154], ecx */
  w32((uint32_t)(EBP + -0x154), (ECX));
  /* 11b3f666 mov edx, dword ptr [ebp - 0x154] */
  EDX = (r32((uint32_t)(EBP + -0x154)));
  /* 11b3f66c and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11b3f66f test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b3f671 je 0x11b3f6a9 */
  if (C.zf) goto L_11b3f6a9;
  /* 11b3f673 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 11b3f679 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3f67c mov dword ptr [ebp - 0x148], eax */
  w32((uint32_t)(EBP + -0x148), (EAX));
  /* 11b3f682 cmp dword ptr [ebp - 0x148], 0x400 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3f68c jle 0x11b3f698 */
  if ((C.zf||C.sf!=C.of)) goto L_11b3f698;
  /* 11b3f68e mov eax, 0xfffffffa */
  EAX = (0xfffffffau);
  /* 11b3f693 jmp 0x11b3fa89 */
  goto L_11b3fa89;
L_11b3f698:;
  /* 11b3f698 mov ecx, dword ptr [ebp - 0x12c] */
  ECX = (r32((uint32_t)(EBP + -0x12c)));
  /* 11b3f69e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3f6a1 mov dword ptr [ebp - 0x12c], ecx */
  w32((uint32_t)(EBP + -0x12c), (ECX));
  /* 11b3f6a7 jmp 0x11b3f6eb */
  goto L_11b3f6eb;
L_11b3f6a9:;
  /* 11b3f6a9 mov edx, dword ptr [ebp - 0x148] */
  EDX = (r32((uint32_t)(EBP + -0x148)));
  /* 11b3f6af sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11b3f6b2 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3f6b5 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 11b3f6bb cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3f6c2 jle 0x11b3f6ce */
  if ((C.zf||C.sf!=C.of)) goto L_11b3f6ce;
  /* 11b3f6c4 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_11b3f6ce:;
  /* 11b3f6ce mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11b3f6d4 mov ecx, dword ptr [ebp + eax*4 - 0x118] */
  ECX = (r32((uint32_t)(EBP + EAX*4 + -0x118)));
  /* 11b3f6db add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3f6de mov edx, dword ptr [ebp - 0x14c] */
  EDX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11b3f6e4 mov dword ptr [ebp + edx*4 - 0x118], ecx */
  w32((uint32_t)(EBP + EDX*4 + -0x118), (ECX));
L_11b3f6eb:;
  /* 11b3f6eb cmp dword ptr [ebp - 0x148], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3f6f2 jl 0x11b3f70d */
  if ((C.sf!=C.of)) goto L_11b3f70d;
  /* 11b3f6f4 mov eax, dword ptr [ebp - 0x148] */
  EAX = (r32((uint32_t)(EBP + -0x148)));
  /* 11b3f6fa and eax, 0xf */
  { uint32_t _r=(EAX)&(0xfu); EAX = (_r); fl_logic(_r,32); }
  /* 11b3f6fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3f6ff jne 0x11b3f70d */
  if (!C.zf) goto L_11b3f70d;
  /* 11b3f701 cmp dword ptr [ebp - 0x148], 0xff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x148))),_b=(0xff0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3f70b jle 0x11b3f717 */
  if ((C.zf||C.sf!=C.of)) goto L_11b3f717;
L_11b3f70d:;
  /* 11b3f70d mov eax, 0xfffffff9 */
  EAX = (0xfffffff9u);
  /* 11b3f712 jmp 0x11b3fa89 */
  goto L_11b3fa89;
L_11b3f717:;
  /* 11b3f717 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11b3f71d add ecx, dword ptr [ebp - 0x148] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3f723 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11b3f726 cmp edx, dword ptr [ebp - 0x154] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x154))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3f72c je 0x11b3f738 */
  if (C.zf) goto L_11b3f738;
  /* 11b3f72e mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 11b3f733 jmp 0x11b3fa89 */
  goto L_11b3fa89;
L_11b3f738:;
  /* 11b3f738 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11b3f73e add eax, dword ptr [ebp - 0x148] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x148))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3f744 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 11b3f74a mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11b3f750 cmp ecx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3f756 jb 0x11b3f64c */
  if (C.cf) goto L_11b3f64c;
  /* 11b3f75c mov edx, dword ptr [ebp - 0x130] */
  EDX = (r32((uint32_t)(EBP + -0x130)));
  /* 11b3f762 cmp edx, dword ptr [ebp - 0x138] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3f768 je 0x11b3f774 */
  if (C.zf) goto L_11b3f774;
  /* 11b3f76a mov eax, 0xfffffff8 */
  EAX = (0xfffffff8u);
  /* 11b3f76f jmp 0x11b3fa89 */
  goto L_11b3fa89;
L_11b3f774:;
  /* 11b3f774 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3f777 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3f77c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b3f77f jmp 0x11b3f5f1 */
  goto L_11b3f5f1;
L_11b3f784:;
  /* 11b3f784 mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3f787 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b3f789 cmp edx, dword ptr [ebp - 0x12c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x12c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3f78f je 0x11b3f79b */
  if (C.zf) goto L_11b3f79b;
  /* 11b3f791 mov eax, 0xfffffff7 */
  EAX = (0xfffffff7u);
  /* 11b3f796 jmp 0x11b3fa89 */
  goto L_11b3fa89;
L_11b3f79b:;
  /* 11b3f79b mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3f79e mov dword ptr [ebp - 0x134], eax */
  w32((uint32_t)(EBP + -0x134), (EAX));
  /* 11b3f7a4 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11b3f7ab jmp 0x11b3f7b6 */
  goto L_11b3f7b6;
L_11b3f7ad:;
  /* 11b3f7ad mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3f7b0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3f7b3 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11b3f7b6:;
  /* 11b3f7b6 cmp dword ptr [ebp - 0x14], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3f7ba jge 0x11b3f9ed */
  if ((C.sf==C.of)) goto L_11b3f9ed;
  /* 11b3f7c0 mov dword ptr [ebp - 0x168], 0 */
  w32((uint32_t)(EBP + -0x168), (0x0u));
  /* 11b3f7ca mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 11b3f7d0 mov dword ptr [ebp - 0x130], edx */
  w32((uint32_t)(EBP + -0x130), (EDX));
L_11b3f7d6:;
  /* 11b3f7d6 mov eax, dword ptr [ebp - 0x130] */
  EAX = (r32((uint32_t)(EBP + -0x130)));
  /* 11b3f7dc mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b3f7df mov dword ptr [ebp - 0x15c], ecx */
  w32((uint32_t)(EBP + -0x15c), (ECX));
  /* 11b3f7e5 mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11b3f7eb cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3f7f1 je 0x11b3f91a */
  if (C.zf) goto L_11b3f91a;
  /* 11b3f7f7 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3f7fa mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 11b3f800 cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3f807 je 0x11b3f91a */
  if (C.zf) goto L_11b3f91a;
  /* 11b3f80d mov edx, dword ptr [ebp - 0x15c] */
  EDX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11b3f813 cmp edx, dword ptr [ebp - 0x128] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x128))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3f819 jb 0x11b3f82e */
  if (C.cf) goto L_11b3f82e;
  /* 11b3f81b mov eax, dword ptr [ebp - 0x128] */
  EAX = (r32((uint32_t)(EBP + -0x128)));
  /* 11b3f821 add eax, 0x8000 */
  { uint32_t _a=(EAX),_b=(0x8000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3f826 cmp dword ptr [ebp - 0x15c], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x15c))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3f82c jb 0x11b3f838 */
  if (C.cf) goto L_11b3f838;
L_11b3f82e:;
  /* 11b3f82e mov eax, 0xfffffff6 */
  EAX = (0xfffffff6u);
  /* 11b3f833 jmp 0x11b3fa89 */
  goto L_11b3fa89;
L_11b3f838:;
  /* 11b3f838 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11b3f83e and ecx, 0xfffff000 */
  { uint32_t _r=(ECX)&(0xfffff000u); ECX = (_r); fl_logic(_r,32); }
  /* 11b3f844 mov dword ptr [ebp - 0x164], ecx */
  w32((uint32_t)(EBP + -0x164), (ECX));
  /* 11b3f84a mov edx, dword ptr [ebp - 0x164] */
  EDX = (r32((uint32_t)(EBP + -0x164)));
  /* 11b3f850 add edx, 0xc */
  { uint32_t _a=(EDX),_b=(0xcu),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3f853 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11b3f856 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3f859 add eax, 0xff0 */
  { uint32_t _a=(EAX),_b=(0xff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3f85e mov dword ptr [ebp - 0x124], eax */
  w32((uint32_t)(EBP + -0x124), (EAX));
L_11b3f864:;
  /* 11b3f864 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3f867 cmp ecx, dword ptr [ebp - 0x124] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3f86d je 0x11b3f88e */
  if (C.zf) goto L_11b3f88e;
  /* 11b3f86f mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3f872 cmp edx, dword ptr [ebp - 0x15c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x15c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3f878 jne 0x11b3f87c */
  if (!C.zf) goto L_11b3f87c;
  /* 11b3f87a jmp 0x11b3f88e */
  goto L_11b3f88e;
L_11b3f87c:;
  /* 11b3f87c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3f87f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b3f881 and ecx, 0xfffffffe */
  { uint32_t _r=(ECX)&(0xfffffffeu); ECX = (_r); fl_logic(_r,32); }
  /* 11b3f884 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3f887 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3f889 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11b3f88c jmp 0x11b3f864 */
  goto L_11b3f864;
L_11b3f88e:;
  /* 11b3f88e mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b3f891 cmp eax, dword ptr [ebp - 0x124] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x124))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3f897 jne 0x11b3f8a3 */
  if (!C.zf) goto L_11b3f8a3;
  /* 11b3f899 mov eax, 0xfffffff5 */
  EAX = (0xfffffff5u);
  /* 11b3f89e jmp 0x11b3fa89 */
  goto L_11b3fa89;
L_11b3f8a3:;
  /* 11b3f8a3 mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11b3f8a9 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b3f8ab sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11b3f8ae sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3f8b1 mov dword ptr [ebp - 0x14c], edx */
  w32((uint32_t)(EBP + -0x14c), (EDX));
  /* 11b3f8b7 cmp dword ptr [ebp - 0x14c], 0x3f */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14c))),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3f8be jle 0x11b3f8ca */
  if ((C.zf||C.sf!=C.of)) goto L_11b3f8ca;
  /* 11b3f8c0 mov dword ptr [ebp - 0x14c], 0x3f */
  w32((uint32_t)(EBP + -0x14c), (0x3fu));
L_11b3f8ca:;
  /* 11b3f8ca mov eax, dword ptr [ebp - 0x14c] */
  EAX = (r32((uint32_t)(EBP + -0x14c)));
  /* 11b3f8d0 cmp eax, dword ptr [ebp - 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3f8d3 je 0x11b3f8df */
  if (C.zf) goto L_11b3f8df;
  /* 11b3f8d5 mov eax, 0xfffffff4 */
  EAX = (0xfffffff4u);
  /* 11b3f8da jmp 0x11b3fa89 */
  goto L_11b3fa89;
L_11b3f8df:;
  /* 11b3f8df mov ecx, dword ptr [ebp - 0x15c] */
  ECX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11b3f8e5 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11b3f8e8 cmp edx, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3f8ee je 0x11b3f8fa */
  if (C.zf) goto L_11b3f8fa;
  /* 11b3f8f0 mov eax, 0xfffffff3 */
  EAX = (0xfffffff3u);
  /* 11b3f8f5 jmp 0x11b3fa89 */
  goto L_11b3fa89;
L_11b3f8fa:;
  /* 11b3f8fa mov eax, dword ptr [ebp - 0x15c] */
  EAX = (r32((uint32_t)(EBP + -0x15c)));
  /* 11b3f900 mov dword ptr [ebp - 0x130], eax */
  w32((uint32_t)(EBP + -0x130), (EAX));
  /* 11b3f906 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 11b3f90c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3f90f mov dword ptr [ebp - 0x168], ecx */
  w32((uint32_t)(EBP + -0x168), (ECX));
  /* 11b3f915 jmp 0x11b3f7d6 */
  goto L_11b3f7d6;
L_11b3f91a:;
  /* 11b3f91a cmp dword ptr [ebp - 0x168], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x168))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3f921 je 0x11b3f991 */
  if (C.zf) goto L_11b3f991;
  /* 11b3f923 cmp dword ptr [ebp - 0x14], 0x20 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3f927 jge 0x11b3f95b */
  if ((C.sf==C.of)) goto L_11b3f95b;
  /* 11b3f929 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11b3f92e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3f931 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11b3f933 mov eax, dword ptr [ebp - 0x11c] */
  EAX = (r32((uint32_t)(EBP + -0x11c)));
  /* 11b3f939 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3f93b mov dword ptr [ebp - 0x11c], eax */
  w32((uint32_t)(EBP + -0x11c), (EAX));
  /* 11b3f941 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11b3f946 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3f949 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11b3f94b mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 11b3f951 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3f953 mov dword ptr [ebp - 0x144], eax */
  w32((uint32_t)(EBP + -0x144), (EAX));
  /* 11b3f959 jmp 0x11b3f991 */
  goto L_11b3f991;
L_11b3f95b:;
  /* 11b3f95b mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3f95e sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3f961 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11b3f966 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11b3f968 mov eax, dword ptr [ebp - 0x150] */
  EAX = (r32((uint32_t)(EBP + -0x150)));
  /* 11b3f96e or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3f970 mov dword ptr [ebp - 0x150], eax */
  w32((uint32_t)(EBP + -0x150), (EAX));
  /* 11b3f976 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3f979 sub ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3f97c mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 11b3f981 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 11b3f983 mov eax, dword ptr [ebp - 0x158] */
  EAX = (r32((uint32_t)(EBP + -0x158)));
  /* 11b3f989 or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3f98b mov dword ptr [ebp - 0x158], eax */
  w32((uint32_t)(EBP + -0x158), (EAX));
L_11b3f991:;
  /* 11b3f991 mov ecx, dword ptr [ebp - 0x130] */
  ECX = (r32((uint32_t)(EBP + -0x130)));
  /* 11b3f997 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b3f99a cmp edx, dword ptr [ebp - 0x134] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x134))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3f9a0 jne 0x11b3f9b4 */
  if (!C.zf) goto L_11b3f9b4;
  /* 11b3f9a2 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b3f9a5 mov ecx, dword ptr [ebp - 0x168] */
  ECX = (r32((uint32_t)(EBP + -0x168)));
  /* 11b3f9ab cmp ecx, dword ptr [ebp + eax*4 - 0x118] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + EAX*4 + -0x118))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3f9b2 je 0x11b3f9be */
  if (C.zf) goto L_11b3f9be;
L_11b3f9b4:;
  /* 11b3f9b4 mov eax, 0xfffffff2 */
  EAX = (0xfffffff2u);
  /* 11b3f9b9 jmp 0x11b3fa89 */
  goto L_11b3fa89;
L_11b3f9be:;
  /* 11b3f9be mov edx, dword ptr [ebp - 0x134] */
  EDX = (r32((uint32_t)(EBP + -0x134)));
  /* 11b3f9c4 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11b3f9c7 cmp eax, dword ptr [ebp - 0x130] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x130))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3f9cd je 0x11b3f9d9 */
  if (C.zf) goto L_11b3f9d9;
  /* 11b3f9cf mov eax, 0xfffffff1 */
  EAX = (0xfffffff1u);
  /* 11b3f9d4 jmp 0x11b3fa89 */
  goto L_11b3fa89;
L_11b3f9d9:;
  /* 11b3f9d9 mov ecx, dword ptr [ebp - 0x134] */
  ECX = (r32((uint32_t)(EBP + -0x134)));
  /* 11b3f9df add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3f9e2 mov dword ptr [ebp - 0x134], ecx */
  w32((uint32_t)(EBP + -0x134), (ECX));
  /* 11b3f9e8 jmp 0x11b3f7ad */
  goto L_11b3f7ad;
L_11b3f9ed:;
  /* 11b3f9ed mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3f9f0 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 11b3f9f6 mov ecx, dword ptr [ebp - 0x11c] */
  ECX = (r32((uint32_t)(EBP + -0x11c)));
  /* 11b3f9fc cmp ecx, dword ptr [eax + edx*4 + 0x44] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0x44))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3fa00 jne 0x11b3fa1a */
  if (!C.zf) goto L_11b3fa1a;
  /* 11b3fa02 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3fa05 mov eax, dword ptr [ebp - 0x160] */
  EAX = (r32((uint32_t)(EBP + -0x160)));
  /* 11b3fa0b mov ecx, dword ptr [ebp - 0x150] */
  ECX = (r32((uint32_t)(EBP + -0x150)));
  /* 11b3fa11 cmp ecx, dword ptr [eax + edx*4 + 0xc4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + EDX*4 + 0xc4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3fa18 je 0x11b3fa21 */
  if (C.zf) goto L_11b3fa21;
L_11b3fa1a:;
  /* 11b3fa1a mov eax, 0xfffffff0 */
  EAX = (0xfffffff0u);
  /* 11b3fa1f jmp 0x11b3fa89 */
  goto L_11b3fa89;
L_11b3fa21:;
  /* 11b3fa21 mov edx, dword ptr [ebp - 0x128] */
  EDX = (r32((uint32_t)(EBP + -0x128)));
  /* 11b3fa27 add edx, 0x8000 */
  { uint32_t _a=(EDX),_b=(0x8000u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3fa2d mov dword ptr [ebp - 0x128], edx */
  w32((uint32_t)(EBP + -0x128), (EDX));
  /* 11b3fa33 mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b3fa36 add eax, 0x204 */
  { uint32_t _a=(EAX),_b=(0x204u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3fa3b mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11b3fa3e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3fa41 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11b3fa43 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b3fa46 jmp 0x11b3f54a */
  goto L_11b3f54a;
L_11b3fa4b:;
  /* 11b3fa4b mov edx, dword ptr [ebp - 0x13c] */
  EDX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11b3fa51 mov eax, dword ptr [ebp - 0x144] */
  EAX = (r32((uint32_t)(EBP + -0x144)));
  /* 11b3fa57 cmp eax, dword ptr [edx] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3fa59 jne 0x11b3fa6c */
  if (!C.zf) goto L_11b3fa6c;
  /* 11b3fa5b mov ecx, dword ptr [ebp - 0x13c] */
  ECX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11b3fa61 mov edx, dword ptr [ebp - 0x158] */
  EDX = (r32((uint32_t)(EBP + -0x158)));
  /* 11b3fa67 cmp edx, dword ptr [ecx + 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3fa6a je 0x11b3fa73 */
  if (C.zf) goto L_11b3fa73;
L_11b3fa6c:;
  /* 11b3fa6c mov eax, 0xffffffef */
  EAX = (0xffffffefu);
  /* 11b3fa71 jmp 0x11b3fa89 */
  goto L_11b3fa89;
L_11b3fa73:;
  /* 11b3fa73 mov eax, dword ptr [ebp - 0x13c] */
  EAX = (r32((uint32_t)(EBP + -0x13c)));
  /* 11b3fa79 add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3fa7c mov dword ptr [ebp - 0x13c], eax */
  w32((uint32_t)(EBP + -0x13c), (EAX));
  /* 11b3fa82 jmp 0x11b3f4b3 */
  goto L_11b3f4b3;
L_11b3fa87:;
  /* 11b3fa87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b3fa89:;
  /* 11b3fa89 mov esp, ebp */
  ESP = (EBP);
  /* 11b3fa8b pop ebp */
  EBP = (pop32());
  /* 11b3fa8c ret  */
  ESPCHK(0x11b3f470u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fa90 @ 0x11b3fa90 (250 bytes, 92 insns) */
void f_11b3fa90(void) {
  FTRACE(0x11b3fa90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3fa90 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3fa91 mov ebp, esp */
  EBP = (ESP);
  /* 11b3fa93 sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3fa96 push ebx */
  push32((uint32_t)(EBX));
  /* 11b3fa97 push esi */
  push32((uint32_t)(ESI));
  /* 11b3fa98 push edi */
  push32((uint32_t)(EDI));
  /* 11b3fa99 lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11b3fa9c mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11b3fa9f lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11b3faa2 mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
L_11b3faa5:;
  /* 11b3faa5 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3faa9 jne 0x11b3fac9 */
  if (!C.zf) goto L_11b3fac9;
  /* 11b3faab push 0x11b63380 */
  push32((uint32_t)(0x11b63380u));
  /* 11b3fab0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3fab2 push 0x5d */
  push32((uint32_t)(0x5du));
  /* 11b3fab4 push 0x11b63374 */
  push32((uint32_t)(0x11b63374u));
  /* 11b3fab9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b3fabb call 0x11b36850 */
  push32(0x11b3fac0u); f_11b36850();
  /* 11b3fac0 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3fac3 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3fac6 jne 0x11b3fac9 */
  if (!C.zf) goto L_11b3fac9;
  /* 11b3fac8 int3  */
  x86_unimpl("int3 @ 0x11b3fac8");
L_11b3fac9:;
  /* 11b3fac9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3facb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b3facd jne 0x11b3faa5 */
  if (!C.zf) goto L_11b3faa5;
L_11b3facf:;
  /* 11b3facf cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3fad3 jne 0x11b3faf3 */
  if (!C.zf) goto L_11b3faf3;
  /* 11b3fad5 push 0x11b63364 */
  push32((uint32_t)(0x11b63364u));
  /* 11b3fada push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3fadc push 0x5e */
  push32((uint32_t)(0x5eu));
  /* 11b3fade push 0x11b63374 */
  push32((uint32_t)(0x11b63374u));
  /* 11b3fae3 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b3fae5 call 0x11b36850 */
  push32(0x11b3faeau); f_11b36850();
  /* 11b3faea add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3faed cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3faf0 jne 0x11b3faf3 */
  if (!C.zf) goto L_11b3faf3;
  /* 11b3faf2 int3  */
  x86_unimpl("int3 @ 0x11b3faf2");
L_11b3faf3:;
  /* 11b3faf3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3faf5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3faf7 jne 0x11b3facf */
  if (!C.zf) goto L_11b3facf;
  /* 11b3faf9 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3fafc mov dword ptr [ecx + 0xc], 0x42 */
  w32((uint32_t)(ECX + 0xc), (0x42u));
  /* 11b3fb03 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3fb06 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3fb09 mov dword ptr [edx + 8], eax */
  w32((uint32_t)(EDX + 0x8), (EAX));
  /* 11b3fb0c mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3fb0f mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3fb12 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11b3fb14 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3fb17 mov dword ptr [eax + 4], 0x7fffffff */
  w32((uint32_t)(EAX + 0x4), (0x7fffffffu));
  /* 11b3fb1e mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b3fb21 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3fb22 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b3fb25 push edx */
  push32((uint32_t)(EDX));
  /* 11b3fb26 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3fb29 push eax */
  push32((uint32_t)(EAX));
  /* 11b3fb2a call 0x11b40e30 */
  push32(0x11b3fb2fu); f_11b40e30();
  /* 11b3fb2f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3fb32 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11b3fb35 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3fb38 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b3fb3b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3fb3e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3fb41 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11b3fb44 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3fb47 cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3fb4b jl 0x11b3fb6f */
  if ((C.sf!=C.of)) goto L_11b3fb6f;
  /* 11b3fb4d mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3fb50 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b3fb52 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11b3fb55 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3fb57 and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b3fb5d mov dword ptr [ebp - 0x30], ecx */
  w32((uint32_t)(EBP + -0x30), (ECX));
  /* 11b3fb60 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3fb63 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b3fb65 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3fb68 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3fb6b mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11b3fb6d jmp 0x11b3fb80 */
  goto L_11b3fb80;
L_11b3fb6f:;
  /* 11b3fb6f mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3fb72 push edx */
  push32((uint32_t)(EDX));
  /* 11b3fb73 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b3fb75 call 0x11b40bb0 */
  push32(0x11b3fb7au); f_11b40bb0();
  /* 11b3fb7a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3fb7d mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
L_11b3fb80:;
  /* 11b3fb80 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b3fb83 pop edi */
  EDI = (pop32());
  /* 11b3fb84 pop esi */
  ESI = (pop32());
  /* 11b3fb85 pop ebx */
  EBX = (pop32());
  /* 11b3fb86 mov esp, ebp */
  ESP = (EBP);
  /* 11b3fb88 pop ebp */
  EBP = (pop32());
  /* 11b3fb89 ret  */
  ESPCHK(0x11b3fa90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000fb90 @ 0x11b3fb90 (836 bytes, 238 insns) */
void f_11b3fb90(void) {
  FTRACE(0x11b3fb90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3fb90 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3fb91 mov ebp, esp */
  EBP = (ESP);
  /* 11b3fb93 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3fb96 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11b3fb98 call 0x11b3a900 */
  push32(0x11b3fb9du); f_11b3a900();
  /* 11b3fb9d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3fba0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3fba3 push eax */
  push32((uint32_t)(EAX));
  /* 11b3fba4 call 0x11b3fee0 */
  push32(0x11b3fba9u); f_11b3fee0();
  /* 11b3fba9 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3fbac mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11b3fbaf mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3fbb2 cmp ecx, dword ptr [0x11b691f8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x11b691f8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3fbb8 jne 0x11b3fbcb */
  if (!C.zf) goto L_11b3fbcb;
  /* 11b3fbba push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11b3fbbc call 0x11b3a9a0 */
  push32(0x11b3fbc1u); f_11b3a9a0();
  /* 11b3fbc1 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3fbc4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3fbc6 jmp 0x11b3fed0 */
  goto L_11b3fed0;
L_11b3fbcb:;
  /* 11b3fbcb cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3fbcf jne 0x11b3fbec */
  if (!C.zf) goto L_11b3fbec;
  /* 11b3fbd1 call 0x11b3ffc0 */
  push32(0x11b3fbd6u); f_11b3ffc0();
  /* 11b3fbd6 call 0x11b40040 */
  push32(0x11b3fbdbu); f_11b40040();
  /* 11b3fbdb push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11b3fbdd call 0x11b3a9a0 */
  push32(0x11b3fbe2u); f_11b3a9a0();
  /* 11b3fbe2 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3fbe5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3fbe7 jmp 0x11b3fed0 */
  goto L_11b3fed0;
L_11b3fbec:;
  /* 11b3fbec mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b3fbf3 jmp 0x11b3fbfe */
  goto L_11b3fbfe;
L_11b3fbf5:;
  /* 11b3fbf5 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3fbf8 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3fbfb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11b3fbfe:;
  /* 11b3fbfe cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3fc02 jae 0x11b3fd4f */
  if (!C.cf) goto L_11b3fd4f;
  /* 11b3fc08 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3fc0b imul eax, eax, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x30u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b3fc0e mov ecx, dword ptr [eax + 0x11b66040] */
  ECX = (r32((uint32_t)(EAX + 0x11b66040)));
  /* 11b3fc14 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3fc17 jne 0x11b3fd4a */
  if (!C.zf) goto L_11b3fd4a;
  /* 11b3fc1d mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11b3fc24 jmp 0x11b3fc2f */
  goto L_11b3fc2f;
L_11b3fc26:;
  /* 11b3fc26 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3fc29 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3fc2c mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_11b3fc2f:;
  /* 11b3fc2f cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3fc36 jae 0x11b3fc44 */
  if (!C.cf) goto L_11b3fc44;
  /* 11b3fc38 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3fc3b mov byte ptr [eax + 0x11b69380], 0 */
  w8((uint32_t)(EAX + 0x11b69380), (0x0u));
  /* 11b3fc42 jmp 0x11b3fc26 */
  goto L_11b3fc26;
L_11b3fc44:;
  /* 11b3fc44 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11b3fc4b jmp 0x11b3fc56 */
  goto L_11b3fc56;
L_11b3fc4d:;
  /* 11b3fc4d mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3fc50 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3fc53 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
L_11b3fc56:;
  /* 11b3fc56 cmp dword ptr [ebp - 0xc], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3fc5a jae 0x11b3fcd7 */
  if (!C.cf) goto L_11b3fcd7;
  /* 11b3fc5c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3fc5f imul edx, edx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x30u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b3fc62 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3fc65 lea ecx, [edx + eax*8 + 0x11b66050] */
  ECX = ((uint32_t)(EDX + EAX*8 + 0x11b66050));
  /* 11b3fc6c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b3fc6f jmp 0x11b3fc7a */
  goto L_11b3fc7a;
L_11b3fc71:;
  /* 11b3fc71 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3fc74 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3fc77 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11b3fc7a:;
  /* 11b3fc7a mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3fc7d xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3fc7f mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11b3fc81 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b3fc83 je 0x11b3fcd2 */
  if (C.zf) goto L_11b3fcd2;
  /* 11b3fc85 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3fc88 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3fc8a mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11b3fc8d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3fc8f je 0x11b3fcd2 */
  if (C.zf) goto L_11b3fcd2;
  /* 11b3fc91 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3fc94 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3fc96 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b3fc98 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11b3fc9b jmp 0x11b3fca6 */
  goto L_11b3fca6;
L_11b3fc9d:;
  /* 11b3fc9d mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3fca0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3fca3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11b3fca6:;
  /* 11b3fca6 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b3fca9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3fcab mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11b3fcae cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3fcb1 ja 0x11b3fcd0 */
  if ((!C.cf&&!C.zf)) goto L_11b3fcd0;
  /* 11b3fcb3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3fcb6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3fcb9 mov dl, byte ptr [eax + 0x11b69381] */
  DL = (r8((uint32_t)(EAX + 0x11b69381)));
  /* 11b3fcbf or dl, byte ptr [ecx + 0x11b66038] */
  { uint32_t _r=(DL)|(r8((uint32_t)(ECX + 0x11b66038))); DL = (_r); fl_logic(_r,8); }
  /* 11b3fcc5 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3fcc8 mov byte ptr [eax + 0x11b69381], dl */
  w8((uint32_t)(EAX + 0x11b69381), (DL));
  /* 11b3fcce jmp 0x11b3fc9d */
  goto L_11b3fc9d;
L_11b3fcd0:;
  /* 11b3fcd0 jmp 0x11b3fc71 */
  goto L_11b3fc71;
L_11b3fcd2:;
  /* 11b3fcd2 jmp 0x11b3fc4d */
  goto L_11b3fc4d;
L_11b3fcd7:;
  /* 11b3fcd7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3fcda mov dword ptr [0x11b691f8], ecx */
  w32((uint32_t)(0x11b691f8), (ECX));
  /* 11b3fce0 mov dword ptr [0x11b6927c], 1 */
  w32((uint32_t)(0x11b6927c), (0x1u));
  /* 11b3fcea mov edx, dword ptr [0x11b691f8] */
  EDX = (r32((uint32_t)(0x11b691f8)));
  /* 11b3fcf0 push edx */
  push32((uint32_t)(EDX));
  /* 11b3fcf1 call 0x11b3ff40 */
  push32(0x11b3fcf6u); f_11b3ff40();
  /* 11b3fcf6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3fcf9 mov dword ptr [0x11b69484], eax */
  w32((uint32_t)(0x11b69484), (EAX));
  /* 11b3fcfe mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11b3fd05 jmp 0x11b3fd10 */
  goto L_11b3fd10;
L_11b3fd07:;
  /* 11b3fd07 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3fd0a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3fd0d mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11b3fd10:;
  /* 11b3fd10 cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3fd14 jae 0x11b3fd34 */
  if (!C.cf) goto L_11b3fd34;
  /* 11b3fd16 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3fd19 imul ecx, ecx, 0x30 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x30u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b3fd1c mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3fd1f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3fd22 mov cx, word ptr [ecx + eax*2 + 0x11b66044] */
  CX = (r16((uint32_t)(ECX + EAX*2 + 0x11b66044)));
  /* 11b3fd2a mov word ptr [edx*2 + 0x11b69270], cx */
  w16((uint32_t)(EDX*2 + 0x11b69270), (CX));
  /* 11b3fd32 jmp 0x11b3fd07 */
  goto L_11b3fd07;
L_11b3fd34:;
  /* 11b3fd34 call 0x11b40040 */
  push32(0x11b3fd39u); f_11b40040();
  /* 11b3fd39 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11b3fd3b call 0x11b3a9a0 */
  push32(0x11b3fd40u); f_11b3a9a0();
  /* 11b3fd40 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3fd43 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3fd45 jmp 0x11b3fed0 */
  goto L_11b3fed0;
L_11b3fd4a:;
  /* 11b3fd4a jmp 0x11b3fbf5 */
  goto L_11b3fbf5;
L_11b3fd4f:;
  /* 11b3fd4f lea edx, [ebp - 0x20] */
  EDX = ((uint32_t)(EBP + -0x20));
  /* 11b3fd52 push edx */
  push32((uint32_t)(EDX));
  /* 11b3fd53 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3fd56 push eax */
  push32((uint32_t)(EAX));
  /* 11b3fd57 call dword ptr [0x11b6a34c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a34c))), 0x11b3fd5du);
  /* 11b3fd5d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3fd60 jne 0x11b3fea2 */
  if (!C.zf) goto L_11b3fea2;
  /* 11b3fd66 mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11b3fd6d jmp 0x11b3fd78 */
  goto L_11b3fd78;
L_11b3fd6f:;
  /* 11b3fd6f mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3fd72 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3fd75 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_11b3fd78:;
  /* 11b3fd78 cmp dword ptr [ebp - 0x24], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3fd7f jae 0x11b3fd8d */
  if (!C.cf) goto L_11b3fd8d;
  /* 11b3fd81 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3fd84 mov byte ptr [edx + 0x11b69380], 0 */
  w8((uint32_t)(EDX + 0x11b69380), (0x0u));
  /* 11b3fd8b jmp 0x11b3fd6f */
  goto L_11b3fd6f;
L_11b3fd8d:;
  /* 11b3fd8d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3fd90 mov dword ptr [0x11b691f8], eax */
  w32((uint32_t)(0x11b691f8), (EAX));
  /* 11b3fd95 mov dword ptr [0x11b69484], 0 */
  w32((uint32_t)(0x11b69484), (0x0u));
  /* 11b3fd9f cmp dword ptr [ebp - 0x20], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3fda3 jbe 0x11b3fe5e */
  if ((C.cf||C.zf)) goto L_11b3fe5e;
  /* 11b3fda9 lea ecx, [ebp - 0x1a] */
  ECX = ((uint32_t)(EBP + -0x1a));
  /* 11b3fdac mov dword ptr [ebp - 0x28], ecx */
  w32((uint32_t)(EBP + -0x28), (ECX));
  /* 11b3fdaf jmp 0x11b3fdba */
  goto L_11b3fdba;
L_11b3fdb1:;
  /* 11b3fdb1 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b3fdb4 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3fdb7 mov dword ptr [ebp - 0x28], edx */
  w32((uint32_t)(EBP + -0x28), (EDX));
L_11b3fdba:;
  /* 11b3fdba mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b3fdbd xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b3fdbf mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11b3fdc1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b3fdc3 je 0x11b3fe0c */
  if (C.zf) goto L_11b3fe0c;
  /* 11b3fdc5 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b3fdc8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3fdca mov al, byte ptr [edx + 1] */
  AL = (r8((uint32_t)(EDX + 0x1)));
  /* 11b3fdcd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b3fdcf je 0x11b3fe0c */
  if (C.zf) goto L_11b3fe0c;
  /* 11b3fdd1 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b3fdd4 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3fdd6 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b3fdd8 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11b3fddb jmp 0x11b3fde6 */
  goto L_11b3fde6;
L_11b3fddd:;
  /* 11b3fddd mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3fde0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3fde3 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11b3fde6:;
  /* 11b3fde6 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b3fde9 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3fdeb mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 11b3fdee cmp dword ptr [ebp - 0x24], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3fdf1 ja 0x11b3fe0a */
  if ((!C.cf&&!C.zf)) goto L_11b3fe0a;
  /* 11b3fdf3 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3fdf6 mov cl, byte ptr [eax + 0x11b69381] */
  CL = (r8((uint32_t)(EAX + 0x11b69381)));
  /* 11b3fdfc or cl, 4 */
  { uint32_t _r=(CL)|(0x4u); CL = (_r); fl_logic(_r,8); }
  /* 11b3fdff mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3fe02 mov byte ptr [edx + 0x11b69381], cl */
  w8((uint32_t)(EDX + 0x11b69381), (CL));
  /* 11b3fe08 jmp 0x11b3fddd */
  goto L_11b3fddd;
L_11b3fe0a:;
  /* 11b3fe0a jmp 0x11b3fdb1 */
  goto L_11b3fdb1;
L_11b3fe0c:;
  /* 11b3fe0c mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
  /* 11b3fe13 jmp 0x11b3fe1e */
  goto L_11b3fe1e;
L_11b3fe15:;
  /* 11b3fe15 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3fe18 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3fe1b mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11b3fe1e:;
  /* 11b3fe1e cmp dword ptr [ebp - 0x24], 0xff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3fe25 jae 0x11b3fe3e */
  if (!C.cf) goto L_11b3fe3e;
  /* 11b3fe27 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3fe2a mov dl, byte ptr [ecx + 0x11b69381] */
  DL = (r8((uint32_t)(ECX + 0x11b69381)));
  /* 11b3fe30 or dl, 8 */
  { uint32_t _r=(DL)|(0x8u); DL = (_r); fl_logic(_r,8); }
  /* 11b3fe33 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b3fe36 mov byte ptr [eax + 0x11b69381], dl */
  w8((uint32_t)(EAX + 0x11b69381), (DL));
  /* 11b3fe3c jmp 0x11b3fe15 */
  goto L_11b3fe15;
L_11b3fe3e:;
  /* 11b3fe3e mov ecx, dword ptr [0x11b691f8] */
  ECX = (r32((uint32_t)(0x11b691f8)));
  /* 11b3fe44 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3fe45 call 0x11b3ff40 */
  push32(0x11b3fe4au); f_11b3ff40();
  /* 11b3fe4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3fe4d mov dword ptr [0x11b69484], eax */
  w32((uint32_t)(0x11b69484), (EAX));
  /* 11b3fe52 mov dword ptr [0x11b6927c], 1 */
  w32((uint32_t)(0x11b6927c), (0x1u));
  /* 11b3fe5c jmp 0x11b3fe68 */
  goto L_11b3fe68;
L_11b3fe5e:;
  /* 11b3fe5e mov dword ptr [0x11b6927c], 0 */
  w32((uint32_t)(0x11b6927c), (0x0u));
L_11b3fe68:;
  /* 11b3fe68 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11b3fe6f jmp 0x11b3fe7a */
  goto L_11b3fe7a;
L_11b3fe71:;
  /* 11b3fe71 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3fe74 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3fe77 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
L_11b3fe7a:;
  /* 11b3fe7a cmp dword ptr [ebp - 0xc], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3fe7e jae 0x11b3fe8f */
  if (!C.cf) goto L_11b3fe8f;
  /* 11b3fe80 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b3fe83 mov word ptr [eax*2 + 0x11b69270], 0 */
  w16((uint32_t)(EAX*2 + 0x11b69270), (0x0u));
  /* 11b3fe8d jmp 0x11b3fe71 */
  goto L_11b3fe71;
L_11b3fe8f:;
  /* 11b3fe8f call 0x11b40040 */
  push32(0x11b3fe94u); f_11b40040();
  /* 11b3fe94 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11b3fe96 call 0x11b3a9a0 */
  push32(0x11b3fe9bu); f_11b3a9a0();
  /* 11b3fe9b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3fe9e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3fea0 jmp 0x11b3fed0 */
  goto L_11b3fed0;
L_11b3fea2:;
  /* 11b3fea2 cmp dword ptr [0x11b67dbc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67dbc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3fea9 je 0x11b3fec3 */
  if (C.zf) goto L_11b3fec3;
  /* 11b3feab call 0x11b3ffc0 */
  push32(0x11b3feb0u); f_11b3ffc0();
  /* 11b3feb0 call 0x11b40040 */
  push32(0x11b3feb5u); f_11b40040();
  /* 11b3feb5 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11b3feb7 call 0x11b3a9a0 */
  push32(0x11b3febcu); f_11b3a9a0();
  /* 11b3febc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3febf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b3fec1 jmp 0x11b3fed0 */
  goto L_11b3fed0;
L_11b3fec3:;
  /* 11b3fec3 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11b3fec5 call 0x11b3a9a0 */
  push32(0x11b3fecau); f_11b3a9a0();
  /* 11b3feca add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3fecd or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11b3fed0:;
  /* 11b3fed0 mov esp, ebp */
  ESP = (EBP);
  /* 11b3fed2 pop ebp */
  EBP = (pop32());
  /* 11b3fed3 ret  */
  ESPCHK(0x11b3fb90u, _esp0);
  ESP += 4; return;
}

/* getSystemCP @ 0x11b3fee0 (89 bytes, 21 insns) */
void f_11b3fee0(void) {
  FTRACE(0x11b3fee0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3fee0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3fee1 mov ebp, esp */
  EBP = (ESP);
  /* 11b3fee3 mov dword ptr [0x11b67dbc], 0 */
  w32((uint32_t)(0x11b67dbc), (0x0u));
  /* 11b3feed cmp dword ptr [ebp + 8], -2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3fef1 jne 0x11b3ff05 */
  if (!C.zf) goto L_11b3ff05;
  /* 11b3fef3 mov dword ptr [0x11b67dbc], 1 */
  w32((uint32_t)(0x11b67dbc), (0x1u));
  /* 11b3fefd call dword ptr [0x11b6a338] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a338))), 0x11b3ff03u);
  /* 11b3ff03 jmp 0x11b3ff37 */
  goto L_11b3ff37;
L_11b3ff05:;
  /* 11b3ff05 cmp dword ptr [ebp + 8], -3 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3ff09 jne 0x11b3ff1d */
  if (!C.zf) goto L_11b3ff1d;
  /* 11b3ff0b mov dword ptr [0x11b67dbc], 1 */
  w32((uint32_t)(0x11b67dbc), (0x1u));
  /* 11b3ff15 call dword ptr [0x11b6a33c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a33c))), 0x11b3ff1bu);
  /* 11b3ff1b jmp 0x11b3ff37 */
  goto L_11b3ff37;
L_11b3ff1d:;
  /* 11b3ff1d cmp dword ptr [ebp + 8], -4 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3ff21 jne 0x11b3ff34 */
  if (!C.zf) goto L_11b3ff34;
  /* 11b3ff23 mov dword ptr [0x11b67dbc], 1 */
  w32((uint32_t)(0x11b67dbc), (0x1u));
  /* 11b3ff2d mov eax, dword ptr [0x11b67dd8] */
  EAX = (r32((uint32_t)(0x11b67dd8)));
  /* 11b3ff32 jmp 0x11b3ff37 */
  goto L_11b3ff37;
L_11b3ff34:;
  /* 11b3ff34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
L_11b3ff37:;
  /* 11b3ff37 pop ebp */
  EBP = (pop32());
  /* 11b3ff38 ret  */
  ESPCHK(0x11b3fee0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ff40 @ 0x11b3ff40 (80 bytes, 26 insns) [1 switch table(s)] */
void f_11b3ff40(void) {
  FTRACE(0x11b3ff40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3ff40 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3ff41 mov ebp, esp */
  EBP = (ESP);
  /* 11b3ff43 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3ff44 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b3ff47 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b3ff4a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3ff4d sub ecx, 0x3a4 */
  { uint32_t _a=(ECX),_b=(0x3a4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b3ff53 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b3ff56 cmp dword ptr [ebp - 4], 0x12 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x12u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3ff5a ja 0x11b3ff8a */
  if ((!C.cf&&!C.zf)) goto L_11b3ff8a;
  /* 11b3ff5c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3ff5f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b3ff61 mov dl, byte ptr [eax + 0x11b3ffa4] */
  DL = (r8((uint32_t)(EAX + 0x11b3ffa4)));
  /* 11b3ff67 jmp dword ptr [edx*4 + 0x11b3ff90] */
  switch (EDX) {
    case 0: goto L_11b3ff6e;
    case 1: goto L_11b3ff75;
    case 2: goto L_11b3ff7c;
    case 3: goto L_11b3ff83;
    case 4: goto L_11b3ff8a;
    default: x86_unimpl("switch@0x11b3ff67 out of table"); return;
  }
L_11b3ff6e:;
  /* 11b3ff6e mov eax, 0x411 */
  EAX = (0x411u);
  /* 11b3ff73 jmp 0x11b3ff8c */
  goto L_11b3ff8c;
L_11b3ff75:;
  /* 11b3ff75 mov eax, 0x804 */
  EAX = (0x804u);
  /* 11b3ff7a jmp 0x11b3ff8c */
  goto L_11b3ff8c;
L_11b3ff7c:;
  /* 11b3ff7c mov eax, 0x412 */
  EAX = (0x412u);
  /* 11b3ff81 jmp 0x11b3ff8c */
  goto L_11b3ff8c;
L_11b3ff83:;
  /* 11b3ff83 mov eax, 0x404 */
  EAX = (0x404u);
  /* 11b3ff88 jmp 0x11b3ff8c */
  goto L_11b3ff8c;
L_11b3ff8a:;
  /* 11b3ff8a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b3ff8c:;
  /* 11b3ff8c mov esp, ebp */
  ESP = (EBP);
  /* 11b3ff8e pop ebp */
  EBP = (pop32());
  /* 11b3ff8f ret  */
  ESPCHK(0x11b3ff40u, _esp0);
  ESP += 4; return;
}

/* setSBCS @ 0x11b3ffc0 (116 bytes, 29 insns) */
void f_11b3ffc0(void) {
  FTRACE(0x11b3ffc0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b3ffc0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b3ffc1 mov ebp, esp */
  EBP = (ESP);
  /* 11b3ffc3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b3ffc4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b3ffcb jmp 0x11b3ffd6 */
  goto L_11b3ffd6;
L_11b3ffcd:;
  /* 11b3ffcd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3ffd0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b3ffd3 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b3ffd6:;
  /* 11b3ffd6 cmp dword ptr [ebp - 4], 0x101 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x101u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b3ffdd jge 0x11b3ffeb */
  if ((C.sf==C.of)) goto L_11b3ffeb;
  /* 11b3ffdf mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b3ffe2 mov byte ptr [ecx + 0x11b69380], 0 */
  w8((uint32_t)(ECX + 0x11b69380), (0x0u));
  /* 11b3ffe9 jmp 0x11b3ffcd */
  goto L_11b3ffcd;
L_11b3ffeb:;
  /* 11b3ffeb mov dword ptr [0x11b691f8], 0 */
  w32((uint32_t)(0x11b691f8), (0x0u));
  /* 11b3fff5 mov dword ptr [0x11b6927c], 0 */
  w32((uint32_t)(0x11b6927c), (0x0u));
  /* 11b3ffff mov dword ptr [0x11b69484], 0 */
  w32((uint32_t)(0x11b69484), (0x0u));
  /* 11b40009 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b40010 jmp 0x11b4001b */
  goto L_11b4001b;
L_11b40012:;
  /* 11b40012 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b40015 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b40018 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11b4001b:;
  /* 11b4001b cmp dword ptr [ebp - 4], 6 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4001f jge 0x11b40030 */
  if ((C.sf==C.of)) goto L_11b40030;
  /* 11b40021 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b40024 mov word ptr [eax*2 + 0x11b69270], 0 */
  w16((uint32_t)(EAX*2 + 0x11b69270), (0x0u));
  /* 11b4002e jmp 0x11b40012 */
  goto L_11b40012;
L_11b40030:;
  /* 11b40030 mov esp, ebp */
  ESP = (EBP);
  /* 11b40032 pop ebp */
  EBP = (pop32());
  /* 11b40033 ret  */
  ESPCHK(0x11b3ffc0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010040 @ 0x11b40040 (770 bytes, 175 insns) */
void f_11b40040(void) {
  FTRACE(0x11b40040u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b40040 push ebp */
  push32((uint32_t)(EBP));
  /* 11b40041 mov ebp, esp */
  EBP = (ESP);
  /* 11b40043 sub esp, 0x51c */
  { uint32_t _a=(ESP),_b=(0x51cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b40049 lea eax, [ebp - 0x318] */
  EAX = ((uint32_t)(EBP + -0x318));
  /* 11b4004f push eax */
  push32((uint32_t)(EAX));
  /* 11b40050 mov ecx, dword ptr [0x11b691f8] */
  ECX = (r32((uint32_t)(0x11b691f8)));
  /* 11b40056 push ecx */
  push32((uint32_t)(ECX));
  /* 11b40057 call dword ptr [0x11b6a34c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a34c))), 0x11b4005du);
  /* 11b4005d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b40060 jne 0x11b40279 */
  if (!C.zf) goto L_11b40279;
  /* 11b40066 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11b40070 jmp 0x11b40081 */
  goto L_11b40081;
L_11b40072:;
  /* 11b40072 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11b40078 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4007b mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_11b40081:;
  /* 11b40081 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4008b jae 0x11b400a2 */
  if (!C.cf) goto L_11b400a2;
  /* 11b4008d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11b40093 mov cl, byte ptr [ebp - 0x51c] */
  CL = (r8((uint32_t)(EBP + -0x51c)));
  /* 11b40099 mov byte ptr [ebp + eax - 0x304], cl */
  w8((uint32_t)(EBP + EAX*1 + -0x304), (CL));
  /* 11b400a0 jmp 0x11b40072 */
  goto L_11b40072;
L_11b400a2:;
  /* 11b400a2 mov byte ptr [ebp - 0x304], 0x20 */
  w8((uint32_t)(EBP + -0x304), (0x20u));
  /* 11b400a9 lea edx, [ebp - 0x312] */
  EDX = ((uint32_t)(EBP + -0x312));
  /* 11b400af mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b400b2 jmp 0x11b400bd */
  goto L_11b400bd;
L_11b400b4:;
  /* 11b400b4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b400b7 add eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b400ba mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b400bd:;
  /* 11b400bd mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b400c0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b400c2 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b400c4 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b400c6 je 0x11b40108 */
  if (C.zf) goto L_11b40108;
  /* 11b400c8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b400cb xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b400cd mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11b400cf mov dword ptr [ebp - 0x51c], ecx */
  w32((uint32_t)(EBP + -0x51c), (ECX));
  /* 11b400d5 jmp 0x11b400e6 */
  goto L_11b400e6;
L_11b400d7:;
  /* 11b400d7 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11b400dd add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b400e0 mov dword ptr [ebp - 0x51c], edx */
  w32((uint32_t)(EBP + -0x51c), (EDX));
L_11b400e6:;
  /* 11b400e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b400e9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b400eb mov cl, byte ptr [eax + 1] */
  CL = (r8((uint32_t)(EAX + 0x1)));
  /* 11b400ee cmp dword ptr [ebp - 0x51c], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b400f4 ja 0x11b40106 */
  if ((!C.cf&&!C.zf)) goto L_11b40106;
  /* 11b400f6 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11b400fc mov byte ptr [ebp + edx - 0x304], 0x20 */
  w8((uint32_t)(EBP + EDX*1 + -0x304), (0x20u));
  /* 11b40104 jmp 0x11b400d7 */
  goto L_11b400d7;
L_11b40106:;
  /* 11b40106 jmp 0x11b400b4 */
  goto L_11b400b4;
L_11b40108:;
  /* 11b40108 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b4010a mov eax, dword ptr [0x11b69484] */
  EAX = (r32((uint32_t)(0x11b69484)));
  /* 11b4010f push eax */
  push32((uint32_t)(EAX));
  /* 11b40110 mov ecx, dword ptr [0x11b691f8] */
  ECX = (r32((uint32_t)(0x11b691f8)));
  /* 11b40116 push ecx */
  push32((uint32_t)(ECX));
  /* 11b40117 lea edx, [ebp - 0x204] */
  EDX = ((uint32_t)(EBP + -0x204));
  /* 11b4011d push edx */
  push32((uint32_t)(EDX));
  /* 11b4011e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11b40123 lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 11b40129 push eax */
  push32((uint32_t)(EAX));
  /* 11b4012a push 1 */
  push32((uint32_t)(0x1u));
  /* 11b4012c call 0x11b41d90 */
  push32(0x11b40131u); f_11b41d90();
  /* 11b40131 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b40134 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b40136 mov ecx, dword ptr [0x11b691f8] */
  ECX = (r32((uint32_t)(0x11b691f8)));
  /* 11b4013c push ecx */
  push32((uint32_t)(ECX));
  /* 11b4013d push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11b40142 lea edx, [ebp - 0x418] */
  EDX = ((uint32_t)(EBP + -0x418));
  /* 11b40148 push edx */
  push32((uint32_t)(EDX));
  /* 11b40149 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11b4014e lea eax, [ebp - 0x304] */
  EAX = ((uint32_t)(EBP + -0x304));
  /* 11b40154 push eax */
  push32((uint32_t)(EAX));
  /* 11b40155 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11b4015a mov ecx, dword ptr [0x11b69484] */
  ECX = (r32((uint32_t)(0x11b69484)));
  /* 11b40160 push ecx */
  push32((uint32_t)(ECX));
  /* 11b40161 call 0x11b429a0 */
  push32(0x11b40166u); f_11b429a0();
  /* 11b40166 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b40169 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b4016b mov edx, dword ptr [0x11b691f8] */
  EDX = (r32((uint32_t)(0x11b691f8)));
  /* 11b40171 push edx */
  push32((uint32_t)(EDX));
  /* 11b40172 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11b40177 lea eax, [ebp - 0x518] */
  EAX = ((uint32_t)(EBP + -0x518));
  /* 11b4017d push eax */
  push32((uint32_t)(EAX));
  /* 11b4017e push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11b40183 lea ecx, [ebp - 0x304] */
  ECX = ((uint32_t)(EBP + -0x304));
  /* 11b40189 push ecx */
  push32((uint32_t)(ECX));
  /* 11b4018a push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11b4018f mov edx, dword ptr [0x11b69484] */
  EDX = (r32((uint32_t)(0x11b69484)));
  /* 11b40195 push edx */
  push32((uint32_t)(EDX));
  /* 11b40196 call 0x11b429a0 */
  push32(0x11b4019bu); f_11b429a0();
  /* 11b4019b add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4019e mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11b401a8 jmp 0x11b401b9 */
  goto L_11b401b9;
L_11b401aa:;
  /* 11b401aa mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11b401b0 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b401b3 mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_11b401b9:;
  /* 11b401b9 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b401c3 jae 0x11b40274 */
  if (!C.cf) goto L_11b40274;
  /* 11b401c9 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11b401cf xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b401d1 mov dx, word ptr [ebp + ecx*2 - 0x204] */
  DX = (r16((uint32_t)(EBP + ECX*2 + -0x204)));
  /* 11b401d9 and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11b401dc test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b401de je 0x11b40216 */
  if (C.zf) goto L_11b40216;
  /* 11b401e0 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11b401e6 mov cl, byte ptr [eax + 0x11b69381] */
  CL = (r8((uint32_t)(EAX + 0x11b69381)));
  /* 11b401ec or cl, 0x10 */
  { uint32_t _r=(CL)|(0x10u); CL = (_r); fl_logic(_r,8); }
  /* 11b401ef mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11b401f5 mov byte ptr [edx + 0x11b69381], cl */
  w8((uint32_t)(EDX + 0x11b69381), (CL));
  /* 11b401fb mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11b40201 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11b40207 mov dl, byte ptr [ebp + ecx - 0x418] */
  DL = (r8((uint32_t)(EBP + ECX*1 + -0x418)));
  /* 11b4020e mov byte ptr [eax + 0x11b69280], dl */
  w8((uint32_t)(EAX + 0x11b69280), (DL));
  /* 11b40214 jmp 0x11b4026f */
  goto L_11b4026f;
L_11b40216:;
  /* 11b40216 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11b4021c xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b4021e mov cx, word ptr [ebp + eax*2 - 0x204] */
  CX = (r16((uint32_t)(EBP + EAX*2 + -0x204)));
  /* 11b40226 and ecx, 2 */
  { uint32_t _r=(ECX)&(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11b40229 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b4022b je 0x11b40262 */
  if (C.zf) goto L_11b40262;
  /* 11b4022d mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11b40233 mov al, byte ptr [edx + 0x11b69381] */
  AL = (r8((uint32_t)(EDX + 0x11b69381)));
  /* 11b40239 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11b4023b mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11b40241 mov byte ptr [ecx + 0x11b69381], al */
  w8((uint32_t)(ECX + 0x11b69381), (AL));
  /* 11b40247 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11b4024d mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11b40253 mov cl, byte ptr [ebp + eax - 0x518] */
  CL = (r8((uint32_t)(EBP + EAX*1 + -0x518)));
  /* 11b4025a mov byte ptr [edx + 0x11b69280], cl */
  w8((uint32_t)(EDX + 0x11b69280), (CL));
  /* 11b40260 jmp 0x11b4026f */
  goto L_11b4026f;
L_11b40262:;
  /* 11b40262 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11b40268 mov byte ptr [edx + 0x11b69280], 0 */
  w8((uint32_t)(EDX + 0x11b69280), (0x0u));
L_11b4026f:;
  /* 11b4026f jmp 0x11b401aa */
  goto L_11b401aa;
L_11b40274:;
  /* 11b40274 jmp 0x11b4033e */
  goto L_11b4033e;
L_11b40279:;
  /* 11b40279 mov dword ptr [ebp - 0x51c], 0 */
  w32((uint32_t)(EBP + -0x51c), (0x0u));
  /* 11b40283 jmp 0x11b40294 */
  goto L_11b40294;
L_11b40285:;
  /* 11b40285 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11b4028b add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4028e mov dword ptr [ebp - 0x51c], eax */
  w32((uint32_t)(EBP + -0x51c), (EAX));
L_11b40294:;
  /* 11b40294 cmp dword ptr [ebp - 0x51c], 0x100 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4029e jae 0x11b4033e */
  if (!C.cf) goto L_11b4033e;
  /* 11b402a4 cmp dword ptr [ebp - 0x51c], 0x41 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b402ab jb 0x11b402e8 */
  if (C.cf) goto L_11b402e8;
  /* 11b402ad cmp dword ptr [ebp - 0x51c], 0x5a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b402b4 ja 0x11b402e8 */
  if ((!C.cf&&!C.zf)) goto L_11b402e8;
  /* 11b402b6 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11b402bc mov dl, byte ptr [ecx + 0x11b69381] */
  DL = (r8((uint32_t)(ECX + 0x11b69381)));
  /* 11b402c2 or dl, 0x10 */
  { uint32_t _r=(DL)|(0x10u); DL = (_r); fl_logic(_r,8); }
  /* 11b402c5 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11b402cb mov byte ptr [eax + 0x11b69381], dl */
  w8((uint32_t)(EAX + 0x11b69381), (DL));
  /* 11b402d1 mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11b402d7 add ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b402da mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11b402e0 mov byte ptr [edx + 0x11b69280], cl */
  w8((uint32_t)(EDX + 0x11b69280), (CL));
  /* 11b402e6 jmp 0x11b40339 */
  goto L_11b40339;
L_11b402e8:;
  /* 11b402e8 cmp dword ptr [ebp - 0x51c], 0x61 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b402ef jb 0x11b4032c */
  if (C.cf) goto L_11b4032c;
  /* 11b402f1 cmp dword ptr [ebp - 0x51c], 0x7a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x51c))),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b402f8 ja 0x11b4032c */
  if ((!C.cf&&!C.zf)) goto L_11b4032c;
  /* 11b402fa mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11b40300 mov cl, byte ptr [eax + 0x11b69381] */
  CL = (r8((uint32_t)(EAX + 0x11b69381)));
  /* 11b40306 or cl, 0x20 */
  { uint32_t _r=(CL)|(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11b40309 mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11b4030f mov byte ptr [edx + 0x11b69381], cl */
  w8((uint32_t)(EDX + 0x11b69381), (CL));
  /* 11b40315 mov eax, dword ptr [ebp - 0x51c] */
  EAX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11b4031b sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b4031e mov ecx, dword ptr [ebp - 0x51c] */
  ECX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11b40324 mov byte ptr [ecx + 0x11b69280], al */
  w8((uint32_t)(ECX + 0x11b69280), (AL));
  /* 11b4032a jmp 0x11b40339 */
  goto L_11b40339;
L_11b4032c:;
  /* 11b4032c mov edx, dword ptr [ebp - 0x51c] */
  EDX = (r32((uint32_t)(EBP + -0x51c)));
  /* 11b40332 mov byte ptr [edx + 0x11b69280], 0 */
  w8((uint32_t)(EDX + 0x11b69280), (0x0u));
L_11b40339:;
  /* 11b40339 jmp 0x11b40285 */
  goto L_11b40285;
L_11b4033e:;
  /* 11b4033e mov esp, ebp */
  ESP = (EBP);
  /* 11b40340 pop ebp */
  EBP = (pop32());
  /* 11b40341 ret  */
  ESPCHK(0x11b40040u, _esp0);
  ESP += 4; return;
}

/* FUN_10010350 @ 0x11b40350 (23 bytes, 9 insns) */
void f_11b40350(void) {
  FTRACE(0x11b40350u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b40350 push ebp */
  push32((uint32_t)(EBP));
  /* 11b40351 mov ebp, esp */
  EBP = (ESP);
  /* 11b40353 cmp dword ptr [0x11b6927c], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b6927c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4035a je 0x11b40363 */
  if (C.zf) goto L_11b40363;
  /* 11b4035c mov eax, dword ptr [0x11b691f8] */
  EAX = (r32((uint32_t)(0x11b691f8)));
  /* 11b40361 jmp 0x11b40365 */
  goto L_11b40365;
L_11b40363:;
  /* 11b40363 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b40365:;
  /* 11b40365 pop ebp */
  EBP = (pop32());
  /* 11b40366 ret  */
  ESPCHK(0x11b40350u, _esp0);
  ESP += 4; return;
}

/* FUN_10010370 @ 0x11b40370 (34 bytes, 10 insns) */
void f_11b40370(void) {
  FTRACE(0x11b40370u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b40370 push ebp */
  push32((uint32_t)(EBP));
  /* 11b40371 mov ebp, esp */
  EBP = (ESP);
  /* 11b40373 cmp dword ptr [0x11b69630], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b69630))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4037a jne 0x11b40390 */
  if (!C.zf) goto L_11b40390;
  /* 11b4037c push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 11b4037e call 0x11b3fb90 */
  push32(0x11b40383u); f_11b3fb90();
  /* 11b40383 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b40386 mov dword ptr [0x11b69630], 1 */
  w32((uint32_t)(0x11b69630), (0x1u));
L_11b40390:;
  /* 11b40390 pop ebp */
  EBP = (pop32());
  /* 11b40391 ret  */
  ESPCHK(0x11b40370u, _esp0);
  ESP += 4; return;
}

/* FUN_100103a0 @ 0x11b403a0 (664 bytes, 269 insns) [15 switch table(s)] */
void f_11b403a0(void) {
  FTRACE(0x11b403a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b403a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b403a1 mov ebp, esp */
  EBP = (ESP);
  /* 11b403a3 push edi */
  push32((uint32_t)(EDI));
  /* 11b403a4 push esi */
  push32((uint32_t)(ESI));
  /* 11b403a5 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11b403a8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b403ab mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11b403ae mov eax, ecx */
  EAX = (ECX);
  /* 11b403b0 mov edx, ecx */
  EDX = (ECX);
  /* 11b403b2 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b403b4 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b403b6 jbe 0x11b403c0 */
  if ((C.cf||C.zf)) goto L_11b403c0;
  /* 11b403b8 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b403ba jb 0x11b40538 */
  if (C.cf) goto L_11b40538;
L_11b403c0:;
  /* 11b403c0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11b403c6 jne 0x11b403dc */
  if (!C.zf) goto L_11b403dc;
  /* 11b403c8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b403cb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11b403ce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b403d1 jb 0x11b403fc */
  if (C.cf) goto L_11b403fc;
  /* 11b403d3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b403d5 jmp dword ptr [edx*4 + 0x11b404e8] */
  switch (EDX) {
    case 0: goto L_11b404f8;
    case 1: goto L_11b40500;
    case 2: goto L_11b4050c;
    case 3: goto L_11b40520;
    default: x86_unimpl("switch@0x11b403d5 out of table"); return;
  }
L_11b403dc:;
  /* 11b403dc mov eax, edi */
  EAX = (EDI);
  /* 11b403de mov edx, 3 */
  EDX = (0x3u);
  /* 11b403e3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b403e6 jb 0x11b403f4 */
  if (C.cf) goto L_11b403f4;
  /* 11b403e8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11b403eb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b403ed jmp dword ptr [eax*4 + 0x11b40400] */
  switch (EAX) {
    case 1: goto L_11b40410;
    case 2: goto L_11b4043c;
    case 3: goto L_11b40460;
    default: x86_unimpl("switch@0x11b403ed out of table"); return;
  }
L_11b403f4:;
  /* 11b403f4 jmp dword ptr [ecx*4 + 0x11b404f8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x11b404f8)))); return;
  /* 11b403fb nop  */
  /* nop */
L_11b403fc:;
  /* 11b403fc jmp dword ptr [ecx*4 + 0x11b4047c] */
  switch (ECX) {
    case 0: goto L_11b404df;
    case 1: goto L_11b404cc;
    case 2: goto L_11b404c4;
    case 3: goto L_11b404bc;
    case 4: goto L_11b404b4;
    case 5: goto L_11b404ac;
    case 6: goto L_11b404a4;
    case 7: goto L_11b4049c;
    default: x86_unimpl("switch@0x11b403fc out of table"); return;
  }
  /* 11b40403 nop  */
  /* nop */
L_11b40410:;
  /* 11b40410 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b40412 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b40414 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b40416 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b40419 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11b4041c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11b4041f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b40422 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11b40425 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b40428 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4042b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4042e jb 0x11b403fc */
  if (C.cf) goto L_11b403fc;
  /* 11b40430 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b40432 jmp dword ptr [edx*4 + 0x11b404e8] */
  switch (EDX) {
    case 0: goto L_11b404f8;
    case 1: goto L_11b40500;
    case 2: goto L_11b4050c;
    case 3: goto L_11b40520;
    default: x86_unimpl("switch@0x11b40432 out of table"); return;
  }
  /* 11b40439 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b4043c:;
  /* 11b4043c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b4043e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b40440 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b40442 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b40445 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b40448 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11b4044b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4044e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b40451 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b40454 jb 0x11b403fc */
  if (C.cf) goto L_11b403fc;
  /* 11b40456 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b40458 jmp dword ptr [edx*4 + 0x11b404e8] */
  switch (EDX) {
    case 0: goto L_11b404f8;
    case 1: goto L_11b40500;
    case 2: goto L_11b4050c;
    case 3: goto L_11b40520;
    default: x86_unimpl("switch@0x11b40458 out of table"); return;
  }
  /* 11b4045f nop  */
  /* nop */
L_11b40460:;
  /* 11b40460 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b40462 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b40464 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b40466 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11b40467 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b4046a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11b4046b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4046e jb 0x11b403fc */
  if (C.cf) goto L_11b403fc;
  /* 11b40470 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b40472 jmp dword ptr [edx*4 + 0x11b404e8] */
  switch (EDX) {
    case 0: goto L_11b404f8;
    case 1: goto L_11b40500;
    case 2: goto L_11b4050c;
    case 3: goto L_11b40520;
    default: x86_unimpl("switch@0x11b40472 out of table"); return;
  }
  /* 11b40479 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b4049c:;
  /* 11b4049c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 11b404a0 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_11b404a4:;
  /* 11b404a4 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 11b404a8 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_11b404ac:;
  /* 11b404ac mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 11b404b0 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_11b404b4:;
  /* 11b404b4 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 11b404b8 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_11b404bc:;
  /* 11b404bc mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 11b404c0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_11b404c4:;
  /* 11b404c4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 11b404c8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_11b404cc:;
  /* 11b404cc mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 11b404d0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 11b404d4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11b404db add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b404dd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11b404df:;
  /* 11b404df jmp dword ptr [edx*4 + 0x11b404e8] */
  switch (EDX) {
    case 0: goto L_11b404f8;
    case 1: goto L_11b40500;
    case 2: goto L_11b4050c;
    case 3: goto L_11b40520;
    default: x86_unimpl("switch@0x11b404df out of table"); return;
  }
  /* 11b404e6 mov edi, edi */
  EDI = (EDI);
L_11b404f8:;
  /* 11b404f8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b404fb pop esi */
  ESI = (pop32());
  /* 11b404fc pop edi */
  EDI = (pop32());
  /* 11b404fd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b404fe ret  */
  ESPCHK(0x11b403a0u, _esp0);
  ESP += 4; return;
  /* 11b404ff nop  */
  /* nop */
L_11b40500:;
  /* 11b40500 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b40502 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b40504 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b40507 pop esi */
  ESI = (pop32());
  /* 11b40508 pop edi */
  EDI = (pop32());
  /* 11b40509 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b4050a ret  */
  ESPCHK(0x11b403a0u, _esp0);
  ESP += 4; return;
  /* 11b4050b nop  */
  /* nop */
L_11b4050c:;
  /* 11b4050c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b4050e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b40510 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b40513 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11b40516 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b40519 pop esi */
  ESI = (pop32());
  /* 11b4051a pop edi */
  EDI = (pop32());
  /* 11b4051b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b4051c ret  */
  ESPCHK(0x11b403a0u, _esp0);
  ESP += 4; return;
  /* 11b4051d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b40520:;
  /* 11b40520 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11b40522 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11b40524 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b40527 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11b4052a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11b4052d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11b40530 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b40533 pop esi */
  ESI = (pop32());
  /* 11b40534 pop edi */
  EDI = (pop32());
  /* 11b40535 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b40536 ret  */
  ESPCHK(0x11b403a0u, _esp0);
  ESP += 4; return;
  /* 11b40537 nop  */
  /* nop */
L_11b40538:;
  /* 11b40538 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 11b4053c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 11b40540 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 11b40546 jne 0x11b4056c */
  if (!C.zf) goto L_11b4056c;
  /* 11b40548 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b4054b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 11b4054e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b40551 jb 0x11b40560 */
  if (C.cf) goto L_11b40560;
  /* 11b40553 std  */
  C.df=1;
  /* 11b40554 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b40556 cld  */
  C.df=0;
  /* 11b40557 jmp dword ptr [edx*4 + 0x11b40680] */
  switch (EDX) {
    case 0: goto L_11b40690;
    case 1: goto L_11b40698;
    case 2: goto L_11b406a8;
    case 3: goto L_11b406bc;
    default: x86_unimpl("switch@0x11b40557 out of table"); return;
  }
  /* 11b4055e mov edi, edi */
  EDI = (EDI);
L_11b40560:;
  /* 11b40560 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b40562 jmp dword ptr [ecx*4 + 0x11b40630] */
  switch (ECX) {
    case 0: goto L_11b40677;
    default: x86_unimpl("switch@0x11b40562 out of table"); return;
  }
  /* 11b40569 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b4056c:;
  /* 11b4056c mov eax, edi */
  EAX = (EDI);
  /* 11b4056e mov edx, 3 */
  EDX = (0x3u);
  /* 11b40573 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b40576 jb 0x11b40584 */
  if (C.cf) goto L_11b40584;
  /* 11b40578 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 11b4057b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b4057d jmp dword ptr [eax*4 + 0x11b40588] */
  switch (EAX) {
    case 1: goto L_11b40598;
    case 2: goto L_11b405b8;
    case 3: goto L_11b405e0;
    default: x86_unimpl("switch@0x11b4057d out of table"); return;
  }
L_11b40584:;
  /* 11b40584 jmp dword ptr [ecx*4 + 0x11b40680] */
  switch (ECX) {
    case 0: goto L_11b40690;
    case 1: goto L_11b40698;
    case 2: goto L_11b406a8;
    case 3: goto L_11b406bc;
    default: x86_unimpl("switch@0x11b40584 out of table"); return;
  }
  /* 11b4058b nop  */
  /* nop */
L_11b40598:;
  /* 11b40598 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11b4059b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b4059d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11b405a0 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11b405a1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b405a4 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 11b405a5 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b405a8 jb 0x11b40560 */
  if (C.cf) goto L_11b40560;
  /* 11b405aa std  */
  C.df=1;
  /* 11b405ab rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b405ad cld  */
  C.df=0;
  /* 11b405ae jmp dword ptr [edx*4 + 0x11b40680] */
  switch (EDX) {
    case 0: goto L_11b40690;
    case 1: goto L_11b40698;
    case 2: goto L_11b406a8;
    case 3: goto L_11b406bc;
    default: x86_unimpl("switch@0x11b405ae out of table"); return;
  }
  /* 11b405b5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b405b8:;
  /* 11b405b8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11b405bb and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b405bd mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11b405c0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11b405c3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b405c6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11b405c9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b405cc sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b405cf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b405d2 jb 0x11b40560 */
  if (C.cf) goto L_11b40560;
  /* 11b405d4 std  */
  C.df=1;
  /* 11b405d5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b405d7 cld  */
  C.df=0;
  /* 11b405d8 jmp dword ptr [edx*4 + 0x11b40680] */
  switch (EDX) {
    case 0: goto L_11b40690;
    case 1: goto L_11b40698;
    case 2: goto L_11b406a8;
    case 3: goto L_11b406bc;
    default: x86_unimpl("switch@0x11b405d8 out of table"); return;
  }
  /* 11b405df nop  */
  /* nop */
L_11b405e0:;
  /* 11b405e0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11b405e3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b405e5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11b405e8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11b405eb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11b405ee mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b405f1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 11b405f4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11b405f7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b405fa sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b405fd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b40600 jb 0x11b40560 */
  if (C.cf) goto L_11b40560;
  /* 11b40606 std  */
  C.df=1;
  /* 11b40607 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 11b40609 cld  */
  C.df=0;
  /* 11b4060a jmp dword ptr [edx*4 + 0x11b40680] */
  switch (EDX) {
    case 0: goto L_11b40690;
    case 1: goto L_11b40698;
    case 2: goto L_11b406a8;
    case 3: goto L_11b406bc;
    default: x86_unimpl("switch@0x11b4060a out of table"); return;
  }
  /* 11b40611 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 11b40614 xor al, 6 */
  { uint32_t _r=(AL)^(0x6u); AL = (_r); fl_logic(_r,8); }
  /* 11b40616 mov ah, 0x11 */
  AH = (0x11u);
  /* 11b40618 cmp al, 6 */
  { uint32_t _a=(AL),_b=(0x6u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b4061a mov ah, 0x11 */
  AH = (0x11u);
  /* 11b4061c inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 11b4061d push es */
  push32((uint32_t)(C.seg_es));
  /* 11b4061e mov ah, 0x11 */
  AH = (0x11u);
  /* 11b40620 dec esp */
  { uint32_t _r=(ESP)-1; ESP = (_r); fl_dec(_r,32); }
  /* 11b40621 push es */
  push32((uint32_t)(C.seg_es));
  /* 11b40622 mov ah, 0x11 */
  AH = (0x11u);
  /* 11b40624 push esp */
  push32((uint32_t)(ESP));
  /* 11b40625 push es */
  push32((uint32_t)(C.seg_es));
  /* 11b40626 mov ah, 0x11 */
  AH = (0x11u);
  /* 11b40628 pop esp */
  ESP = (pop32());
  /* 11b40629 push es */
  push32((uint32_t)(C.seg_es));
  /* 11b4062a mov ah, 0x11 */
  AH = (0x11u);
  /* 11b4062c push es */
  push32((uint32_t)(C.seg_es));
  /* 11b4062e mov ah, 0x11 */
  AH = (0x11u);
  /* 11b40634 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 11b40638 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 11b4063c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 11b40640 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 11b40644 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 11b40648 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 11b4064c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 11b40650 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 11b40654 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 11b40658 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 11b4065c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 11b40660 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 11b40664 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 11b40668 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 11b4066c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 11b40673 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b40675 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_11b40677:;
  /* 11b40677 jmp dword ptr [edx*4 + 0x11b40680] */
  switch (EDX) {
    case 0: goto L_11b40690;
    case 1: goto L_11b40698;
    case 2: goto L_11b406a8;
    case 3: goto L_11b406bc;
    default: x86_unimpl("switch@0x11b40677 out of table"); return;
  }
  /* 11b4067e mov edi, edi */
  EDI = (EDI);
L_11b40690:;
  /* 11b40690 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b40693 pop esi */
  ESI = (pop32());
  /* 11b40694 pop edi */
  EDI = (pop32());
  /* 11b40695 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b40696 ret  */
  ESPCHK(0x11b403a0u, _esp0);
  ESP += 4; return;
  /* 11b40697 nop  */
  /* nop */
L_11b40698:;
  /* 11b40698 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11b4069b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11b4069e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b406a1 pop esi */
  ESI = (pop32());
  /* 11b406a2 pop edi */
  EDI = (pop32());
  /* 11b406a3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b406a4 ret  */
  ESPCHK(0x11b403a0u, _esp0);
  ESP += 4; return;
  /* 11b406a5 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11b406a8:;
  /* 11b406a8 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11b406ab mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11b406ae mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11b406b1 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11b406b4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b406b7 pop esi */
  ESI = (pop32());
  /* 11b406b8 pop edi */
  EDI = (pop32());
  /* 11b406b9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b406ba ret  */
  ESPCHK(0x11b403a0u, _esp0);
  ESP += 4; return;
  /* 11b406bb nop  */
  /* nop */
L_11b406bc:;
  /* 11b406bc mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 11b406bf mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 11b406c2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 11b406c5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 11b406c8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11b406cb mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 11b406ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b406d1 pop esi */
  ESI = (pop32());
  /* 11b406d2 pop edi */
  EDI = (pop32());
  /* 11b406d3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11b406d4 ret  */
  ESPCHK(0x11b403a0u, _esp0);
  ESP += 4; return;
}

/* FUN_100106e0 @ 0x11b406e0 (255 bytes, 88 insns) */
void f_11b406e0(void) {
  FTRACE(0x11b406e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b406e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b406e1 mov ebp, esp */
  EBP = (ESP);
  /* 11b406e3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
L_11b406e6:;
  /* 11b406e6 cmp dword ptr [0x11b65de0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b65de0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b406ed jle 0x11b40706 */
  if ((C.zf||C.sf!=C.of)) goto L_11b40706;
  /* 11b406ef push 8 */
  push32((uint32_t)(0x8u));
  /* 11b406f1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b406f4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b406f6 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11b406f8 push ecx */
  push32((uint32_t)(ECX));
  /* 11b406f9 call 0x11b3c7c0 */
  push32(0x11b406feu); f_11b3c7c0();
  /* 11b406fe add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b40701 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11b40704 jmp 0x11b4071f */
  goto L_11b4071f;
L_11b40706:;
  /* 11b40706 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b40709 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b4070b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11b4070d mov ecx, dword ptr [0x11b65dec] */
  ECX = (r32((uint32_t)(0x11b65dec)));
  /* 11b40713 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b40715 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11b40719 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11b4071c mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11b4071f:;
  /* 11b4071f cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b40723 je 0x11b40730 */
  if (C.zf) goto L_11b40730;
  /* 11b40725 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b40728 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4072b mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11b4072e jmp 0x11b406e6 */
  goto L_11b406e6;
L_11b40730:;
  /* 11b40730 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b40733 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b40735 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b40737 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b4073a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4073d add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b40740 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11b40743 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b40746 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b40749 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4074d je 0x11b40755 */
  if (C.zf) goto L_11b40755;
  /* 11b4074f cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b40753 jne 0x11b40768 */
  if (!C.zf) goto L_11b40768;
L_11b40755:;
  /* 11b40755 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b40758 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b4075a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11b4075c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b4075f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b40762 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b40765 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11b40768:;
  /* 11b40768 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11b4076f:;
  /* 11b4076f cmp dword ptr [0x11b65de0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b65de0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b40776 jle 0x11b4078b */
  if ((C.zf||C.sf!=C.of)) goto L_11b4078b;
  /* 11b40778 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b4077a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4077d push edx */
  push32((uint32_t)(EDX));
  /* 11b4077e call 0x11b3c7c0 */
  push32(0x11b40783u); f_11b3c7c0();
  /* 11b40783 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b40786 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11b40789 jmp 0x11b407a0 */
  goto L_11b407a0;
L_11b4078b:;
  /* 11b4078b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4078e mov ecx, dword ptr [0x11b65dec] */
  ECX = (r32((uint32_t)(0x11b65dec)));
  /* 11b40794 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b40796 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11b4079a and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11b4079d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11b407a0:;
  /* 11b407a0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b407a4 je 0x11b407cb */
  if (C.zf) goto L_11b407cb;
  /* 11b407a6 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b407a9 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b407ac mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b407af lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 11b407b3 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11b407b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b407b9 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b407bb mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11b407bd mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b407c0 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b407c3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b407c6 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11b407c9 jmp 0x11b4076f */
  goto L_11b4076f;
L_11b407cb:;
  /* 11b407cb cmp dword ptr [ebp - 0xc], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b407cf jne 0x11b407d8 */
  if (!C.zf) goto L_11b407d8;
  /* 11b407d1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b407d4 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b407d6 jmp 0x11b407db */
  goto L_11b407db;
L_11b407d8:;
  /* 11b407d8 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11b407db:;
  /* 11b407db mov esp, ebp */
  ESP = (EBP);
  /* 11b407dd pop ebp */
  EBP = (pop32());
  /* 11b407de ret  */
  ESPCHK(0x11b406e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100107e0 @ 0x11b407e0 (17 bytes, 8 insns) */
void f_11b407e0(void) {
  FTRACE(0x11b407e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b407e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b407e1 mov ebp, esp */
  EBP = (ESP);
  /* 11b407e3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b407e6 push eax */
  push32((uint32_t)(EAX));
  /* 11b407e7 call 0x11b406e0 */
  push32(0x11b407ecu); f_11b406e0();
  /* 11b407ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b407ef pop ebp */
  EBP = (pop32());
  /* 11b407f0 ret  */
  ESPCHK(0x11b407e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010800 @ 0x11b40800 (297 bytes, 106 insns) */
void f_11b40800(void) {
  FTRACE(0x11b40800u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b40800 push ebp */
  push32((uint32_t)(EBP));
  /* 11b40801 mov ebp, esp */
  EBP = (ESP);
  /* 11b40803 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b40806 push esi */
  push32((uint32_t)(ESI));
L_11b40807:;
  /* 11b40807 cmp dword ptr [0x11b65de0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b65de0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4080e jle 0x11b40827 */
  if ((C.zf||C.sf!=C.of)) goto L_11b40827;
  /* 11b40810 push 8 */
  push32((uint32_t)(0x8u));
  /* 11b40812 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b40815 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b40817 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11b40819 push ecx */
  push32((uint32_t)(ECX));
  /* 11b4081a call 0x11b3c7c0 */
  push32(0x11b4081fu); f_11b3c7c0();
  /* 11b4081f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b40822 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11b40825 jmp 0x11b40840 */
  goto L_11b40840;
L_11b40827:;
  /* 11b40827 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4082a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b4082c mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11b4082e mov ecx, dword ptr [0x11b65dec] */
  ECX = (r32((uint32_t)(0x11b65dec)));
  /* 11b40834 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b40836 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11b4083a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11b4083d mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
L_11b40840:;
  /* 11b40840 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b40844 je 0x11b40851 */
  if (C.zf) goto L_11b40851;
  /* 11b40846 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b40849 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4084c mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11b4084f jmp 0x11b40807 */
  goto L_11b40807;
L_11b40851:;
  /* 11b40851 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b40854 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b40856 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b40858 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b4085b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4085e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b40861 mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11b40864 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b40867 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11b4086a cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4086e je 0x11b40876 */
  if (C.zf) goto L_11b40876;
  /* 11b40870 cmp dword ptr [ebp - 4], 0x2b */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b40874 jne 0x11b40889 */
  if (!C.zf) goto L_11b40889;
L_11b40876:;
  /* 11b40876 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b40879 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b4087b mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11b4087d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b40880 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b40883 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b40886 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11b40889:;
  /* 11b40889 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11b40890 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11b40897:;
  /* 11b40897 cmp dword ptr [0x11b65de0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b65de0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4089e jle 0x11b408b3 */
  if ((C.zf||C.sf!=C.of)) goto L_11b408b3;
  /* 11b408a0 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b408a2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b408a5 push edx */
  push32((uint32_t)(EDX));
  /* 11b408a6 call 0x11b3c7c0 */
  push32(0x11b408abu); f_11b3c7c0();
  /* 11b408ab add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b408ae mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11b408b1 jmp 0x11b408c8 */
  goto L_11b408c8;
L_11b408b3:;
  /* 11b408b3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b408b6 mov ecx, dword ptr [0x11b65dec] */
  ECX = (r32((uint32_t)(0x11b65dec)));
  /* 11b408bc xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b408be mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11b408c2 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11b408c5 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
L_11b408c8:;
  /* 11b408c8 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b408cc je 0x11b40909 */
  if (C.zf) goto L_11b40909;
  /* 11b408ce push 0 */
  push32((uint32_t)(0x0u));
  /* 11b408d0 push 0xa */
  push32((uint32_t)(0xau));
  /* 11b408d2 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b408d5 push eax */
  push32((uint32_t)(EAX));
  /* 11b408d6 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b408d9 push ecx */
  push32((uint32_t)(ECX));
  /* 11b408da call 0x11b440a0 */
  push32(0x11b408dfu); f_11b440a0();
  /* 11b408df mov ecx, eax */
  ECX = (EAX);
  /* 11b408e1 mov esi, edx */
  ESI = (EDX);
  /* 11b408e3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b408e6 sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b408e9 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b408ea add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b408ec adc esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a+_b+C.cf; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11b408ee mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b408f1 mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 11b408f4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b408f7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b408f9 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11b408fb mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b408fe mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b40901 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b40904 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11b40907 jmp 0x11b40897 */
  goto L_11b40897;
L_11b40909:;
  /* 11b40909 cmp dword ptr [ebp - 0x10], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4090d jne 0x11b4091e */
  if (!C.zf) goto L_11b4091e;
  /* 11b4090f mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b40912 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b40914 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b40917 adc edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a+_b+C.cf; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4091a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b4091c jmp 0x11b40924 */
  goto L_11b40924;
L_11b4091e:;
  /* 11b4091e mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b40921 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
L_11b40924:;
  /* 11b40924 pop esi */
  ESI = (pop32());
  /* 11b40925 mov esp, ebp */
  ESP = (EBP);
  /* 11b40927 pop ebp */
  EBP = (pop32());
  /* 11b40928 ret  */
  ESPCHK(0x11b40800u, _esp0);
  ESP += 4; return;
}

/* _strcmp @ 0x11b40930 (129 bytes, 56 insns) */
void f_11b40930(void) {
  FTRACE(0x11b40930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b40930 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b40934 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b40938 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 11b4093e jne 0x11b4097c */
  if (!C.zf) goto L_11b4097c;
L_11b40940:;
  /* 11b40940 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b40942 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b40944 jne 0x11b40974 */
  if (!C.zf) goto L_11b40974;
  /* 11b40946 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11b40948 je 0x11b40970 */
  if (C.zf) goto L_11b40970;
  /* 11b4094a cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b4094d jne 0x11b40974 */
  if (!C.zf) goto L_11b40974;
  /* 11b4094f or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11b40951 je 0x11b40970 */
  if (C.zf) goto L_11b40970;
  /* 11b40953 shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 11b40956 cmp al, byte ptr [ecx + 2] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX + 0x2))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b40959 jne 0x11b40974 */
  if (!C.zf) goto L_11b40974;
  /* 11b4095b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11b4095d je 0x11b40970 */
  if (C.zf) goto L_11b40970;
  /* 11b4095f cmp ah, byte ptr [ecx + 3] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x3))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b40962 jne 0x11b40974 */
  if (!C.zf) goto L_11b40974;
  /* 11b40964 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b40967 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4096a or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11b4096c jne 0x11b40940 */
  if (!C.zf) goto L_11b40940;
  /* 11b4096e mov edi, edi */
  EDI = (EDI);
L_11b40970:;
  /* 11b40970 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b40972 ret  */
  ESPCHK(0x11b40930u, _esp0);
  ESP += 4; return;
  /* 11b40973 nop  */
  /* nop */
L_11b40974:;
  /* 11b40974 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b40976 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11b40978 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11b40979 ret  */
  ESPCHK(0x11b40930u, _esp0);
  ESP += 4; return;
  /* 11b4097a mov edi, edi */
  EDI = (EDI);
L_11b4097c:;
  /* 11b4097c test edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); fl_logic(_r,32); }
  /* 11b40982 je 0x11b40998 */
  if (C.zf) goto L_11b40998;
  /* 11b40984 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11b40986 inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11b40987 cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b40989 jne 0x11b40974 */
  if (!C.zf) goto L_11b40974;
  /* 11b4098b inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11b4098c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11b4098e je 0x11b40970 */
  if (C.zf) goto L_11b40970;
  /* 11b40990 test edx, 2 */
  { uint32_t _r=(EDX)&(0x2u); fl_logic(_r,32); }
  /* 11b40996 je 0x11b40940 */
  if (C.zf) goto L_11b40940;
L_11b40998:;
  /* 11b40998 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11b4099b add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4099e cmp al, byte ptr [ecx] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(ECX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b409a0 jne 0x11b40974 */
  if (!C.zf) goto L_11b40974;
  /* 11b409a2 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11b409a4 je 0x11b40970 */
  if (C.zf) goto L_11b40970;
  /* 11b409a6 cmp ah, byte ptr [ecx + 1] */
  { uint32_t _a=(AH),_b=(r8((uint32_t)(ECX + 0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b409a9 jne 0x11b40974 */
  if (!C.zf) goto L_11b40974;
  /* 11b409ab or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11b409ad je 0x11b40970 */
  if (C.zf) goto L_11b40970;
  /* 11b409af add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b409b2 jmp 0x11b40940 */
  goto L_11b40940;
}

/* FUN_100109c0 @ 0x11b409c0 (46 bytes, 18 insns) */
void f_11b409c0(void) {
  FTRACE(0x11b409c0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b409c0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b409c1 mov ebp, esp */
  EBP = (ESP);
  /* 11b409c3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b409c4 push 0xc */
  push32((uint32_t)(0xcu));
  /* 11b409c6 call 0x11b3a900 */
  push32(0x11b409cbu); f_11b3a900();
  /* 11b409cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b409ce mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b409d1 push eax */
  push32((uint32_t)(EAX));
  /* 11b409d2 call 0x11b409f0 */
  push32(0x11b409d7u); f_11b409f0();
  /* 11b409d7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b409da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b409dd push 0xc */
  push32((uint32_t)(0xcu));
  /* 11b409df call 0x11b3a9a0 */
  push32(0x11b409e4u); f_11b3a9a0();
  /* 11b409e4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b409e7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b409ea mov esp, ebp */
  ESP = (EBP);
  /* 11b409ec pop ebp */
  EBP = (pop32());
  /* 11b409ed ret  */
  ESPCHK(0x11b409c0u, _esp0);
  ESP += 4; return;
}

/* FID_conflict:__getenv_lk @ 0x11b409f0 (198 bytes, 69 insns) */
void f_11b409f0(void) {
  FTRACE(0x11b409f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b409f0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b409f1 mov ebp, esp */
  EBP = (ESP);
  /* 11b409f3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b409f6 mov eax, dword ptr [0x11b67b30] */
  EAX = (r32((uint32_t)(0x11b67b30)));
  /* 11b409fb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b409fe cmp dword ptr [0x11b69620], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b69620))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b40a05 jne 0x11b40a0e */
  if (!C.zf) goto L_11b40a0e;
  /* 11b40a07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b40a09 jmp 0x11b40ab2 */
  goto L_11b40ab2;
L_11b40a0e:;
  /* 11b40a0e cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b40a12 jne 0x11b40a36 */
  if (!C.zf) goto L_11b40a36;
  /* 11b40a14 cmp dword ptr [0x11b67b38], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67b38))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b40a1b je 0x11b40a36 */
  if (C.zf) goto L_11b40a36;
  /* 11b40a1d call 0x11b44130 */
  push32(0x11b40a22u); f_11b44130();
  /* 11b40a22 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b40a24 je 0x11b40a2d */
  if (C.zf) goto L_11b40a2d;
  /* 11b40a26 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b40a28 jmp 0x11b40ab2 */
  goto L_11b40ab2;
L_11b40a2d:;
  /* 11b40a2d mov ecx, dword ptr [0x11b67b30] */
  ECX = (r32((uint32_t)(0x11b67b30)));
  /* 11b40a33 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11b40a36:;
  /* 11b40a36 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b40a3a je 0x11b40ab0 */
  if (C.zf) goto L_11b40ab0;
  /* 11b40a3c cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b40a40 je 0x11b40ab0 */
  if (C.zf) goto L_11b40ab0;
  /* 11b40a42 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b40a45 push edx */
  push32((uint32_t)(EDX));
  /* 11b40a46 call 0x11b3b830 */
  push32(0x11b40a4bu); f_11b3b830();
  /* 11b40a4b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b40a4e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b40a51:;
  /* 11b40a51 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b40a54 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b40a57 je 0x11b40ab0 */
  if (C.zf) goto L_11b40ab0;
  /* 11b40a59 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b40a5c mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b40a5e push edx */
  push32((uint32_t)(EDX));
  /* 11b40a5f call 0x11b3b830 */
  push32(0x11b40a64u); f_11b3b830();
  /* 11b40a64 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b40a67 cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b40a6a jbe 0x11b40aa5 */
  if ((C.cf||C.zf)) goto L_11b40aa5;
  /* 11b40a6c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b40a6f mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b40a71 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b40a74 movsx eax, byte ptr [ecx + edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EDX*1))));
  /* 11b40a78 cmp eax, 0x3d */
  { uint32_t _a=(EAX),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b40a7b jne 0x11b40aa5 */
  if (!C.zf) goto L_11b40aa5;
  /* 11b40a7d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b40a80 push ecx */
  push32((uint32_t)(ECX));
  /* 11b40a81 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b40a84 push edx */
  push32((uint32_t)(EDX));
  /* 11b40a85 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b40a88 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b40a8a push ecx */
  push32((uint32_t)(ECX));
  /* 11b40a8b call 0x11b440e0 */
  push32(0x11b40a90u); f_11b440e0();
  /* 11b40a90 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b40a93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b40a95 jne 0x11b40aa5 */
  if (!C.zf) goto L_11b40aa5;
  /* 11b40a97 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b40a9a mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b40a9c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b40a9f lea eax, [eax + ecx + 1] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x1));
  /* 11b40aa3 jmp 0x11b40ab2 */
  goto L_11b40ab2;
L_11b40aa5:;
  /* 11b40aa5 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b40aa8 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b40aab mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11b40aae jmp 0x11b40a51 */
  goto L_11b40a51;
L_11b40ab0:;
  /* 11b40ab0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b40ab2:;
  /* 11b40ab2 mov esp, ebp */
  ESP = (EBP);
  /* 11b40ab4 pop ebp */
  EBP = (pop32());
  /* 11b40ab5 ret  */
  ESPCHK(0x11b409f0u, _esp0);
  ESP += 4; return;
}

/* __aulldiv @ 0x11b40ac0 (104 bytes, 43 insns) */
void f_11b40ac0(void) {
  FTRACE(0x11b40ac0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b40ac0 push ebx */
  push32((uint32_t)(EBX));
  /* 11b40ac1 push esi */
  push32((uint32_t)(ESI));
  /* 11b40ac2 mov eax, dword ptr [esp + 0x18] */
  EAX = (r32((uint32_t)(ESP + 0x18)));
  /* 11b40ac6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b40ac8 jne 0x11b40ae2 */
  if (!C.zf) goto L_11b40ae2;
  /* 11b40aca mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 11b40ace mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11b40ad2 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b40ad4 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b40ad6 mov ebx, eax */
  EBX = (EAX);
  /* 11b40ad8 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11b40adc div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b40ade mov edx, ebx */
  EDX = (EBX);
  /* 11b40ae0 jmp 0x11b40b23 */
  goto L_11b40b23;
L_11b40ae2:;
  /* 11b40ae2 mov ecx, eax */
  ECX = (EAX);
  /* 11b40ae4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11b40ae8 mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 11b40aec mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
L_11b40af0:;
  /* 11b40af0 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11b40af2 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 11b40af4 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11b40af6 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 11b40af8 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b40afa jne 0x11b40af0 */
  if (!C.zf) goto L_11b40af0;
  /* 11b40afc div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b40afe mov esi, eax */
  ESI = (EAX);
  /* 11b40b00 mul dword ptr [esp + 0x18] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x18))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11b40b04 mov ecx, eax */
  ECX = (EAX);
  /* 11b40b06 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11b40b0a mul esi */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ESI); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11b40b0c add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b40b0e jb 0x11b40b1e */
  if (C.cf) goto L_11b40b1e;
  /* 11b40b10 cmp edx, dword ptr [esp + 0x10] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b40b14 ja 0x11b40b1e */
  if ((!C.cf&&!C.zf)) goto L_11b40b1e;
  /* 11b40b16 jb 0x11b40b1f */
  if (C.cf) goto L_11b40b1f;
  /* 11b40b18 cmp eax, dword ptr [esp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b40b1c jbe 0x11b40b1f */
  if ((C.cf||C.zf)) goto L_11b40b1f;
L_11b40b1e:;
  /* 11b40b1e dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
L_11b40b1f:;
  /* 11b40b1f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b40b21 mov eax, esi */
  EAX = (ESI);
L_11b40b23:;
  /* 11b40b23 pop esi */
  ESI = (pop32());
  /* 11b40b24 pop ebx */
  EBX = (pop32());
  /* 11b40b25 ret 0x10 */
  ESPCHK(0x11b40ac0u, _esp0);
  ESP += 20; return;
}

/* __aullrem @ 0x11b40b30 (117 bytes, 44 insns) */
void f_11b40b30(void) {
  FTRACE(0x11b40b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b40b30 push ebx */
  push32((uint32_t)(EBX));
  /* 11b40b31 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11b40b35 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b40b37 jne 0x11b40b51 */
  if (!C.zf) goto L_11b40b51;
  /* 11b40b39 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11b40b3d mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11b40b41 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b40b43 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b40b45 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b40b49 div ecx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b40b4b mov eax, edx */
  EAX = (EDX);
  /* 11b40b4d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b40b4f jmp 0x11b40ba1 */
  goto L_11b40ba1;
L_11b40b51:;
  /* 11b40b51 mov ecx, eax */
  ECX = (EAX);
  /* 11b40b53 mov ebx, dword ptr [esp + 0x10] */
  EBX = (r32((uint32_t)(ESP + 0x10)));
  /* 11b40b57 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 11b40b5b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
L_11b40b5f:;
  /* 11b40b5f shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 11b40b61 rcr ebx, 1 */
  { uint32_t _v=(EBX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EBX = (_v); C.cf=_cf; }
  /* 11b40b63 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11b40b65 rcr eax, 1 */
  { uint32_t _v=(EAX)&0xffffffffu, _cf=C.cf, _n=(0x1u)&0x1f; for(uint32_t _i=0;_i<_n;_i++){ uint32_t _b=_v&1; _v=(_v>>1)|(_cf<<31); _cf=_b; } EAX = (_v); C.cf=_cf; }
  /* 11b40b67 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b40b69 jne 0x11b40b5f */
  if (!C.zf) goto L_11b40b5f;
  /* 11b40b6b div ebx */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(EBX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 11b40b6d mov ecx, eax */
  ECX = (EAX);
  /* 11b40b6f mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11b40b73 xchg ecx, eax */
  { uint32_t _t=(ECX); ECX = (EAX); EAX = (_t); }
  /* 11b40b74 mul dword ptr [esp + 0x10] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x10))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11b40b78 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b40b7a jb 0x11b40b8a */
  if (C.cf) goto L_11b40b8a;
  /* 11b40b7c cmp edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b40b80 ja 0x11b40b8a */
  if ((!C.cf&&!C.zf)) goto L_11b40b8a;
  /* 11b40b82 jb 0x11b40b92 */
  if (C.cf) goto L_11b40b92;
  /* 11b40b84 cmp eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b40b88 jbe 0x11b40b92 */
  if ((C.cf||C.zf)) goto L_11b40b92;
L_11b40b8a:;
  /* 11b40b8a sub eax, dword ptr [esp + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x10))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b40b8e sbb edx, dword ptr [esp + 0x14] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0x14))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11b40b92:;
  /* 11b40b92 sub eax, dword ptr [esp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b40b96 sbb edx, dword ptr [esp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ESP + 0xc))),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b40b9a neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b40b9c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b40b9e sbb edx, 0 */
  { uint32_t _a=(EDX),_b=(0x0u),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_11b40ba1:;
  /* 11b40ba1 pop ebx */
  EBX = (pop32());
  /* 11b40ba2 ret 0x10 */
  ESPCHK(0x11b40b30u, _esp0);
  ESP += 20; return;
}

/* FUN_10010bb0 @ 0x11b40bb0 (628 bytes, 214 insns) */
void f_11b40bb0(void) {
  FTRACE(0x11b40bb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b40bb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b40bb1 mov ebp, esp */
  EBP = (ESP);
  /* 11b40bb3 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b40bb6 push ebx */
  push32((uint32_t)(EBX));
  /* 11b40bb7 push esi */
  push32((uint32_t)(ESI));
  /* 11b40bb8 push edi */
  push32((uint32_t)(EDI));
L_11b40bb9:;
  /* 11b40bb9 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b40bbd jne 0x11b40bdd */
  if (!C.zf) goto L_11b40bdd;
  /* 11b40bbf push 0x11b63424 */
  push32((uint32_t)(0x11b63424u));
  /* 11b40bc4 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b40bc6 push 0x69 */
  push32((uint32_t)(0x69u));
  /* 11b40bc8 push 0x11b63418 */
  push32((uint32_t)(0x11b63418u));
  /* 11b40bcd push 2 */
  push32((uint32_t)(0x2u));
  /* 11b40bcf call 0x11b36850 */
  push32(0x11b40bd4u); f_11b36850();
  /* 11b40bd4 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b40bd7 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b40bda jne 0x11b40bdd */
  if (!C.zf) goto L_11b40bdd;
  /* 11b40bdc int3  */
  x86_unimpl("int3 @ 0x11b40bdc");
L_11b40bdd:;
  /* 11b40bdd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b40bdf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b40be1 jne 0x11b40bb9 */
  if (!C.zf) goto L_11b40bb9;
  /* 11b40be3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b40be6 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b40be9 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b40bec mov eax, dword ptr [edx + 0x10] */
  EAX = (r32((uint32_t)(EDX + 0x10)));
  /* 11b40bef mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11b40bf2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b40bf5 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11b40bf8 and edx, 0x82 */
  { uint32_t _r=(EDX)&(0x82u); EDX = (_r); fl_logic(_r,32); }
  /* 11b40bfe test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b40c00 je 0x11b40c0f */
  if (C.zf) goto L_11b40c0f;
  /* 11b40c02 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b40c05 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11b40c08 and ecx, 0x40 */
  { uint32_t _r=(ECX)&(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 11b40c0b test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b40c0d je 0x11b40c25 */
  if (C.zf) goto L_11b40c25;
L_11b40c0f:;
  /* 11b40c0f mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b40c12 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11b40c15 or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11b40c17 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b40c1a mov dword ptr [ecx + 0xc], eax */
  w32((uint32_t)(ECX + 0xc), (EAX));
  /* 11b40c1d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b40c20 jmp 0x11b40e1d */
  goto L_11b40e1d;
L_11b40c25:;
  /* 11b40c25 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b40c28 mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11b40c2b and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11b40c2e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b40c30 je 0x11b40c7c */
  if (C.zf) goto L_11b40c7c;
  /* 11b40c32 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b40c35 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11b40c3c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b40c3f mov eax, dword ptr [edx + 0xc] */
  EAX = (r32((uint32_t)(EDX + 0xc)));
  /* 11b40c42 and eax, 0x10 */
  { uint32_t _r=(EAX)&(0x10u); EAX = (_r); fl_logic(_r,32); }
  /* 11b40c45 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b40c47 je 0x11b40c65 */
  if (C.zf) goto L_11b40c65;
  /* 11b40c49 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b40c4c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b40c4f mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11b40c52 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11b40c54 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b40c57 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11b40c5a and edx, 0xfffffffe */
  { uint32_t _r=(EDX)&(0xfffffffeu); EDX = (_r); fl_logic(_r,32); }
  /* 11b40c5d mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b40c60 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11b40c63 jmp 0x11b40c7c */
  goto L_11b40c7c;
L_11b40c65:;
  /* 11b40c65 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b40c68 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11b40c6b or edx, 0x20 */
  { uint32_t _r=(EDX)|(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11b40c6e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b40c71 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11b40c74 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b40c77 jmp 0x11b40e1d */
  goto L_11b40e1d;
L_11b40c7c:;
  /* 11b40c7c mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b40c7f mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11b40c82 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11b40c85 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b40c88 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11b40c8b mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b40c8e mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11b40c91 and edx, 0xffffffef */
  { uint32_t _r=(EDX)&(0xffffffefu); EDX = (_r); fl_logic(_r,32); }
  /* 11b40c94 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b40c97 mov dword ptr [eax + 0xc], edx */
  w32((uint32_t)(EAX + 0xc), (EDX));
  /* 11b40c9a mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b40c9d mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11b40ca4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b40cab mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b40cae mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11b40cb1 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b40cb4 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11b40cb7 and ecx, 0x10c */
  { uint32_t _r=(ECX)&(0x10cu); ECX = (_r); fl_logic(_r,32); }
  /* 11b40cbd test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b40cbf jne 0x11b40cef */
  if (!C.zf) goto L_11b40cef;
  /* 11b40cc1 cmp dword ptr [ebp - 8], 0x11b66420 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x11b66420u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b40cc8 je 0x11b40cd3 */
  if (C.zf) goto L_11b40cd3;
  /* 11b40cca cmp dword ptr [ebp - 8], 0x11b66440 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x11b66440u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b40cd1 jne 0x11b40ce3 */
  if (!C.zf) goto L_11b40ce3;
L_11b40cd3:;
  /* 11b40cd3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b40cd6 push edx */
  push32((uint32_t)(EDX));
  /* 11b40cd7 call 0x11b44710 */
  push32(0x11b40cdcu); f_11b44710();
  /* 11b40cdc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b40cdf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b40ce1 jne 0x11b40cef */
  if (!C.zf) goto L_11b40cef;
L_11b40ce3:;
  /* 11b40ce3 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b40ce6 push eax */
  push32((uint32_t)(EAX));
  /* 11b40ce7 call 0x11b44640 */
  push32(0x11b40cecu); f_11b44640();
  /* 11b40cec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b40cef:;
  /* 11b40cef mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b40cf2 mov edx, dword ptr [ecx + 0xc] */
  EDX = (r32((uint32_t)(ECX + 0xc)));
  /* 11b40cf5 and edx, 0x108 */
  { uint32_t _r=(EDX)&(0x108u); EDX = (_r); fl_logic(_r,32); }
  /* 11b40cfb test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b40cfd je 0x11b40ddb */
  if (C.zf) goto L_11b40ddb;
L_11b40d03:;
  /* 11b40d03 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b40d06 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b40d09 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11b40d0b sub edx, dword ptr [ecx + 8] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b40d0e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b40d10 jge 0x11b40d33 */
  if ((C.sf==C.of)) goto L_11b40d33;
  /* 11b40d12 push 0x11b633d8 */
  push32((uint32_t)(0x11b633d8u));
  /* 11b40d17 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b40d19 push 0xa0 */
  push32((uint32_t)(0xa0u));
  /* 11b40d1e push 0x11b63418 */
  push32((uint32_t)(0x11b63418u));
  /* 11b40d23 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b40d25 call 0x11b36850 */
  push32(0x11b40d2au); f_11b36850();
  /* 11b40d2a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b40d2d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b40d30 jne 0x11b40d33 */
  if (!C.zf) goto L_11b40d33;
  /* 11b40d32 int3  */
  x86_unimpl("int3 @ 0x11b40d32");
L_11b40d33:;
  /* 11b40d33 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b40d35 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b40d37 jne 0x11b40d03 */
  if (!C.zf) goto L_11b40d03;
  /* 11b40d39 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b40d3c mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b40d3f mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11b40d41 sub eax, dword ptr [edx + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b40d44 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b40d47 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b40d4a mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11b40d4d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b40d50 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b40d53 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11b40d55 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b40d58 mov edx, dword ptr [ecx + 0x18] */
  EDX = (r32((uint32_t)(ECX + 0x18)));
  /* 11b40d5b sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b40d5e mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b40d61 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11b40d64 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b40d68 jle 0x11b40d86 */
  if ((C.zf||C.sf!=C.of)) goto L_11b40d86;
  /* 11b40d6a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b40d6d push ecx */
  push32((uint32_t)(ECX));
  /* 11b40d6e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b40d71 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11b40d74 push eax */
  push32((uint32_t)(EAX));
  /* 11b40d75 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b40d78 push ecx */
  push32((uint32_t)(ECX));
  /* 11b40d79 call 0x11b44330 */
  push32(0x11b40d7eu); f_11b44330();
  /* 11b40d7e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b40d81 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b40d84 jmp 0x11b40dce */
  goto L_11b40dce;
L_11b40d86:;
  /* 11b40d86 cmp dword ptr [ebp - 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b40d8a je 0x11b40da9 */
  if (C.zf) goto L_11b40da9;
  /* 11b40d8c mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b40d8f sar edx, 5 */
  EDX = (sh_sar((uint32_t)(EDX), (0x5u)&0x1f, 32));
  /* 11b40d92 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b40d95 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11b40d98 imul eax, eax, 0x24 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x24u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b40d9b mov ecx, dword ptr [edx*4 + 0x11b694e0] */
  ECX = (r32((uint32_t)(EDX*4 + 0x11b694e0)));
  /* 11b40da2 add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b40da4 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
  /* 11b40da7 jmp 0x11b40db0 */
  goto L_11b40db0;
L_11b40da9:;
  /* 11b40da9 mov dword ptr [ebp - 0x14], 0x11b65a90 */
  w32((uint32_t)(EBP + -0x14), (0x11b65a90u));
L_11b40db0:;
  /* 11b40db0 mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b40db3 movsx eax, byte ptr [edx + 4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x4))));
  /* 11b40db7 and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11b40dba test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b40dbc je 0x11b40dce */
  if (C.zf) goto L_11b40dce;
  /* 11b40dbe push 2 */
  push32((uint32_t)(0x2u));
  /* 11b40dc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b40dc2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b40dc5 push ecx */
  push32((uint32_t)(ECX));
  /* 11b40dc6 call 0x11b441e0 */
  push32(0x11b40dcbu); f_11b441e0();
  /* 11b40dcb add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b40dce:;
  /* 11b40dce mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b40dd1 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11b40dd4 mov cl, byte ptr [ebp + 8] */
  CL = (r8((uint32_t)(EBP + 0x8)));
  /* 11b40dd7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11b40dd9 jmp 0x11b40df9 */
  goto L_11b40df9;
L_11b40ddb:;
  /* 11b40ddb mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11b40de2 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b40de5 push edx */
  push32((uint32_t)(EDX));
  /* 11b40de6 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11b40de9 push eax */
  push32((uint32_t)(EAX));
  /* 11b40dea mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b40ded push ecx */
  push32((uint32_t)(ECX));
  /* 11b40dee call 0x11b44330 */
  push32(0x11b40df3u); f_11b44330();
  /* 11b40df3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b40df6 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11b40df9:;
  /* 11b40df9 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b40dfc cmp edx, dword ptr [ebp - 4] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b40dff je 0x11b40e15 */
  if (C.zf) goto L_11b40e15;
  /* 11b40e01 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b40e04 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11b40e07 or ecx, 0x20 */
  { uint32_t _r=(ECX)|(0x20u); ECX = (_r); fl_logic(_r,32); }
  /* 11b40e0a mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b40e0d mov dword ptr [edx + 0xc], ecx */
  w32((uint32_t)(EDX + 0xc), (ECX));
  /* 11b40e10 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b40e13 jmp 0x11b40e1d */
  goto L_11b40e1d;
L_11b40e15:;
  /* 11b40e15 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b40e18 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
L_11b40e1d:;
  /* 11b40e1d pop edi */
  EDI = (pop32());
  /* 11b40e1e pop esi */
  ESI = (pop32());
  /* 11b40e1f pop ebx */
  EBX = (pop32());
  /* 11b40e20 mov esp, ebp */
  ESP = (EBP);
  /* 11b40e22 pop ebp */
  EBP = (pop32());
  /* 11b40e23 ret  */
  ESPCHK(0x11b40bb0u, _esp0);
  ESP += 4; return;
}

/* FUN_10010e30 @ 0x11b40e30 (3108 bytes, 821 insns) [4 switch table(s)] */
void f_11b40e30(void) {
  FTRACE(0x11b40e30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b40e30 push ebp */
  push32((uint32_t)(EBP));
  /* 11b40e31 mov ebp, esp */
  EBP = (ESP);
  /* 11b40e33 sub esp, 0x2a8 */
  { uint32_t _a=(ESP),_b=(0x2a8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b40e39 push ebx */
  push32((uint32_t)(EBX));
  /* 11b40e3a push esi */
  push32((uint32_t)(ESI));
  /* 11b40e3b push edi */
  push32((uint32_t)(EDI));
  /* 11b40e3c mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11b40e43 mov dword ptr [ebp - 0x22c], 0 */
  w32((uint32_t)(EBP + -0x22c), (0x0u));
  /* 11b40e4d mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
L_11b40e54:;
  /* 11b40e54 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b40e57 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11b40e59 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 11b40e5c movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11b40e60 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b40e63 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b40e66 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11b40e69 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b40e6b je 0x11b41a47 */
  if (C.zf) goto L_11b41a47;
  /* 11b40e71 cmp dword ptr [ebp - 0x22c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b40e78 jl 0x11b41a47 */
  if ((C.sf!=C.of)) goto L_11b41a47;
  /* 11b40e7e movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11b40e82 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b40e85 jl 0x11b40ea6 */
  if ((C.sf!=C.of)) goto L_11b40ea6;
  /* 11b40e87 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11b40e8b cmp edx, 0x78 */
  { uint32_t _a=(EDX),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b40e8e jg 0x11b40ea6 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b40ea6;
  /* 11b40e90 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11b40e94 movsx ecx, byte ptr [eax + 0x11b63410] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x11b63410))));
  /* 11b40e9b and ecx, 0xf */
  { uint32_t _r=(ECX)&(0xfu); ECX = (_r); fl_logic(_r,32); }
  /* 11b40e9e mov dword ptr [ebp - 0x290], ecx */
  w32((uint32_t)(EBP + -0x290), (ECX));
  /* 11b40ea4 jmp 0x11b40eb0 */
  goto L_11b40eb0;
L_11b40ea6:;
  /* 11b40ea6 mov dword ptr [ebp - 0x290], 0 */
  w32((uint32_t)(EBP + -0x290), (0x0u));
L_11b40eb0:;
  /* 11b40eb0 mov edx, dword ptr [ebp - 0x290] */
  EDX = (r32((uint32_t)(EBP + -0x290)));
  /* 11b40eb6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11b40eb9 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b40ebc mov ecx, dword ptr [ebp - 0x18] */
  ECX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b40ebf movsx edx, byte ptr [ecx + eax*8 + 0x11b63430] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + EAX*8 + 0x11b63430))));
  /* 11b40ec7 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 11b40eca mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 11b40ecd mov eax, dword ptr [ebp - 0x18] */
  EAX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b40ed0 mov dword ptr [ebp - 0x294], eax */
  w32((uint32_t)(EBP + -0x294), (EAX));
  /* 11b40ed6 cmp dword ptr [ebp - 0x294], 7 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x294))),_b=(0x7u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b40edd ja 0x11b41a42 */
  if ((!C.cf&&!C.zf)) goto L_11b41a42;
  /* 11b40ee3 mov ecx, dword ptr [ebp - 0x294] */
  ECX = (r32((uint32_t)(EBP + -0x294)));
  /* 11b40ee9 jmp dword ptr [ecx*4 + 0x11b41a54] */
  switch (ECX) {
    case 0: goto L_11b40ef0;
    case 1: goto L_11b40f8a;
    case 2: goto L_11b40fcc;
    case 3: goto L_11b4103b;
    case 4: goto L_11b41093;
    case 5: goto L_11b410a2;
    case 6: goto L_11b410ee;
    case 7: goto L_11b41181;
    case 8: goto L_11b41018;
    case 9: goto L_11b41023;
    case 10: goto L_11b4100e;
    case 11: goto L_11b41003;
    case 12: goto L_11b4102e;
    case 13: goto L_11b41036;
    default: x86_unimpl("switch@0x11b40ee9 out of table"); return;
  }
L_11b40ef0:;
  /* 11b40ef0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11b40ef7 mov edx, dword ptr [ebp - 0x28] */
  EDX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b40efa and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b40f00 mov eax, dword ptr [0x11b65dec] */
  EAX = (r32((uint32_t)(0x11b65dec)));
  /* 11b40f05 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b40f07 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11b40f0b and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 11b40f11 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b40f13 je 0x11b40f6d */
  if (C.zf) goto L_11b40f6d;
  /* 11b40f15 lea edx, [ebp - 0x22c] */
  EDX = ((uint32_t)(EBP + -0x22c));
  /* 11b40f1b push edx */
  push32((uint32_t)(EDX));
  /* 11b40f1c mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b40f1f push eax */
  push32((uint32_t)(EAX));
  /* 11b40f20 movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11b40f24 push ecx */
  push32((uint32_t)(ECX));
  /* 11b40f25 call 0x11b41b60 */
  push32(0x11b40f2au); f_11b41b60();
  /* 11b40f2a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b40f2d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b40f30 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11b40f32 mov byte ptr [ebp - 0x28], al */
  w8((uint32_t)(EBP + -0x28), (AL));
  /* 11b40f35 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b40f38 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b40f3b mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
L_11b40f3e:;
  /* 11b40f3e movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11b40f42 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b40f44 jne 0x11b40f67 */
  if (!C.zf) goto L_11b40f67;
  /* 11b40f46 push 0x11b634b0 */
  push32((uint32_t)(0x11b634b0u));
  /* 11b40f4b push 0 */
  push32((uint32_t)(0x0u));
  /* 11b40f4d push 0x186 */
  push32((uint32_t)(0x186u));
  /* 11b40f52 push 0x11b634a4 */
  push32((uint32_t)(0x11b634a4u));
  /* 11b40f57 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b40f59 call 0x11b36850 */
  push32(0x11b40f5eu); f_11b36850();
  /* 11b40f5e add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b40f61 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b40f64 jne 0x11b40f67 */
  if (!C.zf) goto L_11b40f67;
  /* 11b40f66 int3  */
  x86_unimpl("int3 @ 0x11b40f66");
L_11b40f67:;
  /* 11b40f67 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b40f69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b40f6b jne 0x11b40f3e */
  if (!C.zf) goto L_11b40f3e;
L_11b40f6d:;
  /* 11b40f6d lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 11b40f73 push ecx */
  push32((uint32_t)(ECX));
  /* 11b40f74 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b40f77 push edx */
  push32((uint32_t)(EDX));
  /* 11b40f78 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11b40f7c push eax */
  push32((uint32_t)(EAX));
  /* 11b40f7d call 0x11b41b60 */
  push32(0x11b40f82u); f_11b41b60();
  /* 11b40f82 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b40f85 jmp 0x11b41a42 */
  goto L_11b41a42;
L_11b40f8a:;
  /* 11b40f8a mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11b40f91 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b40f94 mov dword ptr [ebp - 0x23c], ecx */
  w32((uint32_t)(EBP + -0x23c), (ECX));
  /* 11b40f9a mov edx, dword ptr [ebp - 0x23c] */
  EDX = (r32((uint32_t)(EBP + -0x23c)));
  /* 11b40fa0 mov dword ptr [ebp - 0x244], edx */
  w32((uint32_t)(EBP + -0x244), (EDX));
  /* 11b40fa6 mov eax, dword ptr [ebp - 0x244] */
  EAX = (r32((uint32_t)(EBP + -0x244)));
  /* 11b40fac mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11b40faf mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b40fb6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
  /* 11b40fc0 mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11b40fc7 jmp 0x11b41a42 */
  goto L_11b41a42;
L_11b40fcc:;
  /* 11b40fcc movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11b40fd0 mov dword ptr [ebp - 0x298], ecx */
  w32((uint32_t)(EBP + -0x298), (ECX));
  /* 11b40fd6 mov edx, dword ptr [ebp - 0x298] */
  EDX = (r32((uint32_t)(EBP + -0x298)));
  /* 11b40fdc sub edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b40fdf mov dword ptr [ebp - 0x298], edx */
  w32((uint32_t)(EBP + -0x298), (EDX));
  /* 11b40fe5 cmp dword ptr [ebp - 0x298], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x298))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b40fec ja 0x11b41036 */
  if ((!C.cf&&!C.zf)) goto L_11b41036;
  /* 11b40fee mov ecx, dword ptr [ebp - 0x298] */
  ECX = (r32((uint32_t)(EBP + -0x298)));
  /* 11b40ff4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b40ff6 mov al, byte ptr [ecx + 0x11b41a8c] */
  AL = (r8((uint32_t)(ECX + 0x11b41a8c)));
  /* 11b40ffc jmp dword ptr [eax*4 + 0x11b41a74] */
  switch (EAX) {
    case 0: goto L_11b41018;
    case 1: goto L_11b41023;
    case 2: goto L_11b4100e;
    case 3: goto L_11b41003;
    case 4: goto L_11b4102e;
    case 5: goto L_11b41036;
    default: x86_unimpl("switch@0x11b40ffc out of table"); return;
  }
L_11b41003:;
  /* 11b41003 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b41006 or edx, 4 */
  { uint32_t _r=(EDX)|(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11b41009 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b4100c jmp 0x11b41036 */
  goto L_11b41036;
L_11b4100e:;
  /* 11b4100e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b41011 or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
  /* 11b41013 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b41016 jmp 0x11b41036 */
  goto L_11b41036;
L_11b41018:;
  /* 11b41018 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4101b or ecx, 2 */
  { uint32_t _r=(ECX)|(0x2u); ECX = (_r); fl_logic(_r,32); }
  /* 11b4101e mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b41021 jmp 0x11b41036 */
  goto L_11b41036;
L_11b41023:;
  /* 11b41023 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b41026 or dl, 0x80 */
  { uint32_t _r=(DL)|(0x80u); DL = (_r); fl_logic(_r,8); }
  /* 11b41029 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b4102c jmp 0x11b41036 */
  goto L_11b41036;
L_11b4102e:;
  /* 11b4102e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b41031 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
  /* 11b41033 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b41036:;
  /* 11b41036 jmp 0x11b41a42 */
  goto L_11b41a42;
L_11b4103b:;
  /* 11b4103b movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11b4103f cmp ecx, 0x2a */
  { uint32_t _a=(ECX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b41042 jne 0x11b41077 */
  if (!C.zf) goto L_11b41077;
  /* 11b41044 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11b41047 push edx */
  push32((uint32_t)(EDX));
  /* 11b41048 call 0x11b41c70 */
  push32(0x11b4104du); f_11b41c70();
  /* 11b4104d add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b41050 mov dword ptr [ebp - 0x244], eax */
  w32((uint32_t)(EBP + -0x244), (EAX));
  /* 11b41056 cmp dword ptr [ebp - 0x244], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x244))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4105d jge 0x11b41075 */
  if ((C.sf==C.of)) goto L_11b41075;
  /* 11b4105f mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b41062 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11b41064 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b41067 mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 11b4106d neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b4106f mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_11b41075:;
  /* 11b41075 jmp 0x11b4108e */
  goto L_11b4108e;
L_11b41077:;
  /* 11b41077 mov edx, dword ptr [ebp - 0x244] */
  EDX = (r32((uint32_t)(EBP + -0x244)));
  /* 11b4107d imul edx, edx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xau); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b41080 movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11b41084 lea ecx, [edx + eax - 0x30] */
  ECX = ((uint32_t)(EDX + EAX*1 + -0x30));
  /* 11b41088 mov dword ptr [ebp - 0x244], ecx */
  w32((uint32_t)(EBP + -0x244), (ECX));
L_11b4108e:;
  /* 11b4108e jmp 0x11b41a42 */
  goto L_11b41a42;
L_11b41093:;
  /* 11b41093 mov dword ptr [ebp - 0x234], 0 */
  w32((uint32_t)(EBP + -0x234), (0x0u));
  /* 11b4109d jmp 0x11b41a42 */
  goto L_11b41a42;
L_11b410a2:;
  /* 11b410a2 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11b410a6 cmp edx, 0x2a */
  { uint32_t _a=(EDX),_b=(0x2au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b410a9 jne 0x11b410d2 */
  if (!C.zf) goto L_11b410d2;
  /* 11b410ab lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11b410ae push eax */
  push32((uint32_t)(EAX));
  /* 11b410af call 0x11b41c70 */
  push32(0x11b410b4u); f_11b41c70();
  /* 11b410b4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b410b7 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 11b410bd cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b410c4 jge 0x11b410d0 */
  if ((C.sf==C.of)) goto L_11b410d0;
  /* 11b410c6 mov dword ptr [ebp - 0x234], 0xffffffff */
  w32((uint32_t)(EBP + -0x234), (0xffffffffu));
L_11b410d0:;
  /* 11b410d0 jmp 0x11b410e9 */
  goto L_11b410e9;
L_11b410d2:;
  /* 11b410d2 mov ecx, dword ptr [ebp - 0x234] */
  ECX = (r32((uint32_t)(EBP + -0x234)));
  /* 11b410d8 imul ecx, ecx, 0xa */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xau); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b410db movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11b410df lea eax, [ecx + edx - 0x30] */
  EAX = ((uint32_t)(ECX + EDX*1 + -0x30));
  /* 11b410e3 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
L_11b410e9:;
  /* 11b410e9 jmp 0x11b41a42 */
  goto L_11b41a42;
L_11b410ee:;
  /* 11b410ee movsx ecx, byte ptr [ebp - 0x28] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11b410f2 mov dword ptr [ebp - 0x29c], ecx */
  w32((uint32_t)(EBP + -0x29c), (ECX));
  /* 11b410f8 mov edx, dword ptr [ebp - 0x29c] */
  EDX = (r32((uint32_t)(EBP + -0x29c)));
  /* 11b410fe sub edx, 0x49 */
  { uint32_t _a=(EDX),_b=(0x49u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b41101 mov dword ptr [ebp - 0x29c], edx */
  w32((uint32_t)(EBP + -0x29c), (EDX));
  /* 11b41107 cmp dword ptr [ebp - 0x29c], 0x2e */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x29c))),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4110e ja 0x11b4117c */
  if ((!C.cf&&!C.zf)) goto L_11b4117c;
  /* 11b41110 mov ecx, dword ptr [ebp - 0x29c] */
  ECX = (r32((uint32_t)(EBP + -0x29c)));
  /* 11b41116 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b41118 mov al, byte ptr [ecx + 0x11b41ab1] */
  AL = (r8((uint32_t)(ECX + 0x11b41ab1)));
  /* 11b4111e jmp dword ptr [eax*4 + 0x11b41a9d] */
  switch (EAX) {
    case 0: goto L_11b41130;
    case 1: goto L_11b41169;
    case 2: goto L_11b41125;
    case 3: goto L_11b41173;
    case 4: goto L_11b4117c;
    default: x86_unimpl("switch@0x11b4111e out of table"); return;
  }
L_11b41125:;
  /* 11b41125 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b41128 or edx, 0x10 */
  { uint32_t _r=(EDX)|(0x10u); EDX = (_r); fl_logic(_r,32); }
  /* 11b4112b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b4112e jmp 0x11b4117c */
  goto L_11b4117c;
L_11b41130:;
  /* 11b41130 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b41133 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b41136 cmp ecx, 0x36 */
  { uint32_t _a=(ECX),_b=(0x36u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b41139 jne 0x11b4115b */
  if (!C.zf) goto L_11b4115b;
  /* 11b4113b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b4113e movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11b41142 cmp eax, 0x34 */
  { uint32_t _a=(EAX),_b=(0x34u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b41145 jne 0x11b4115b */
  if (!C.zf) goto L_11b4115b;
  /* 11b41147 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b4114a add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4114d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11b41150 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b41153 or dh, 0x80 */
  { uint32_t _r=(C.d.b.h)|(0x80u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11b41156 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b41159 jmp 0x11b41167 */
  goto L_11b41167;
L_11b4115b:;
  /* 11b4115b mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11b41162 jmp 0x11b40ef0 */
  goto L_11b40ef0;
L_11b41167:;
  /* 11b41167 jmp 0x11b4117c */
  goto L_11b4117c;
L_11b41169:;
  /* 11b41169 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4116c or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
  /* 11b4116e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b41171 jmp 0x11b4117c */
  goto L_11b4117c;
L_11b41173:;
  /* 11b41173 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b41176 or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11b41179 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11b4117c:;
  /* 11b4117c jmp 0x11b41a42 */
  goto L_11b41a42;
L_11b41181:;
  /* 11b41181 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11b41185 mov dword ptr [ebp - 0x2a0], edx */
  w32((uint32_t)(EBP + -0x2a0), (EDX));
  /* 11b4118b mov eax, dword ptr [ebp - 0x2a0] */
  EAX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 11b41191 sub eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b41194 mov dword ptr [ebp - 0x2a0], eax */
  w32((uint32_t)(EBP + -0x2a0), (EAX));
  /* 11b4119a cmp dword ptr [ebp - 0x2a0], 0x35 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2a0))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b411a1 ja 0x11b41867 */
  if ((!C.cf&&!C.zf)) goto L_11b41867;
  /* 11b411a7 mov edx, dword ptr [ebp - 0x2a0] */
  EDX = (r32((uint32_t)(EBP + -0x2a0)));
  /* 11b411ad xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b411af mov cl, byte ptr [edx + 0x11b41b1c] */
  CL = (r8((uint32_t)(EDX + 0x11b41b1c)));
  /* 11b411b5 jmp dword ptr [ecx*4 + 0x11b41ae0] */
  switch (ECX) {
    case 0: goto L_11b411bc;
    case 1: goto L_11b41450;
    case 2: goto L_11b412e0;
    case 3: goto L_11b41589;
    case 4: goto L_11b4124b;
    case 5: goto L_11b411d1;
    case 6: goto L_11b4155b;
    case 7: goto L_11b41460;
    case 8: goto L_11b41405;
    case 9: goto L_11b415d5;
    case 10: goto L_11b4157f;
    case 11: goto L_11b412f6;
    case 12: goto L_11b41573;
    case 13: goto L_11b41595;
    case 14: goto L_11b41867;
    default: x86_unimpl("switch@0x11b411b5 out of table"); return;
  }
L_11b411bc:;
  /* 11b411bc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b411bf and eax, 0x830 */
  { uint32_t _r=(EAX)&(0x830u); EAX = (_r); fl_logic(_r,32); }
  /* 11b411c4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b411c6 jne 0x11b411d1 */
  if (!C.zf) goto L_11b411d1;
  /* 11b411c8 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b411cb or ch, 8 */
  { uint32_t _r=(C.c.b.h)|(0x8u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11b411ce mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11b411d1:;
  /* 11b411d1 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b411d4 and edx, 0x810 */
  { uint32_t _r=(EDX)&(0x810u); EDX = (_r); fl_logic(_r,32); }
  /* 11b411da test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b411dc je 0x11b41217 */
  if (C.zf) goto L_11b41217;
  /* 11b411de lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11b411e1 push eax */
  push32((uint32_t)(EAX));
  /* 11b411e2 call 0x11b41cb0 */
  push32(0x11b411e7u); f_11b41cb0();
  /* 11b411e7 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b411ea mov word ptr [ebp - 0x14], ax */
  w16((uint32_t)(EBP + -0x14), (AX));
  /* 11b411ee mov cx, word ptr [ebp - 0x14] */
  CX = (r16((uint32_t)(EBP + -0x14)));
  /* 11b411f2 push ecx */
  push32((uint32_t)(ECX));
  /* 11b411f3 lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 11b411f9 push edx */
  push32((uint32_t)(EDX));
  /* 11b411fa call 0x11b44980 */
  push32(0x11b411ffu); f_11b44980();
  /* 11b411ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b41202 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11b41205 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b41209 jge 0x11b41215 */
  if ((C.sf==C.of)) goto L_11b41215;
  /* 11b4120b mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
L_11b41215:;
  /* 11b41215 jmp 0x11b4123d */
  goto L_11b4123d;
L_11b41217:;
  /* 11b41217 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11b4121a push eax */
  push32((uint32_t)(EAX));
  /* 11b4121b call 0x11b41c70 */
  push32(0x11b41220u); f_11b41c70();
  /* 11b41220 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b41223 mov word ptr [ebp - 0x248], ax */
  w16((uint32_t)(EBP + -0x248), (AX));
  /* 11b4122a mov cl, byte ptr [ebp - 0x248] */
  CL = (r8((uint32_t)(EBP + -0x248)));
  /* 11b41230 mov byte ptr [ebp - 0x228], cl */
  w8((uint32_t)(EBP + -0x228), (CL));
  /* 11b41236 mov dword ptr [ebp - 0x24], 1 */
  w32((uint32_t)(EBP + -0x24), (0x1u));
L_11b4123d:;
  /* 11b4123d lea edx, [ebp - 0x228] */
  EDX = ((uint32_t)(EBP + -0x228));
  /* 11b41243 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11b41246 jmp 0x11b41867 */
  goto L_11b41867;
L_11b4124b:;
  /* 11b4124b lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11b4124e push eax */
  push32((uint32_t)(EAX));
  /* 11b4124f call 0x11b41c70 */
  push32(0x11b41254u); f_11b41c70();
  /* 11b41254 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b41257 mov dword ptr [ebp - 0x24c], eax */
  w32((uint32_t)(EBP + -0x24c), (EAX));
  /* 11b4125d cmp dword ptr [ebp - 0x24c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b41264 je 0x11b41272 */
  if (C.zf) goto L_11b41272;
  /* 11b41266 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11b4126c cmp dword ptr [ecx + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b41270 jne 0x11b4128c */
  if (!C.zf) goto L_11b4128c;
L_11b41272:;
  /* 11b41272 mov edx, dword ptr [0x11b66130] */
  EDX = (r32((uint32_t)(0x11b66130)));
  /* 11b41278 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11b4127b mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b4127e push eax */
  push32((uint32_t)(EAX));
  /* 11b4127f call 0x11b3b830 */
  push32(0x11b41284u); f_11b3b830();
  /* 11b41284 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b41287 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11b4128a jmp 0x11b412db */
  goto L_11b412db;
L_11b4128c:;
  /* 11b4128c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4128f and ecx, 0x800 */
  { uint32_t _r=(ECX)&(0x800u); ECX = (_r); fl_logic(_r,32); }
  /* 11b41295 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b41297 je 0x11b412bc */
  if (C.zf) goto L_11b412bc;
  /* 11b41299 mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11b4129f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b412a2 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11b412a5 mov ecx, dword ptr [ebp - 0x24c] */
  ECX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11b412ab movsx edx, word ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(ECX))));
  /* 11b412ae shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11b412b0 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11b412b3 mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 11b412ba jmp 0x11b412db */
  goto L_11b412db;
L_11b412bc:;
  /* 11b412bc mov dword ptr [ebp - 0x1c], 0 */
  w32((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11b412c3 mov eax, dword ptr [ebp - 0x24c] */
  EAX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11b412c9 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b412cc mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11b412cf mov edx, dword ptr [ebp - 0x24c] */
  EDX = (r32((uint32_t)(EBP + -0x24c)));
  /* 11b412d5 movsx eax, word ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EDX))));
  /* 11b412d8 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
L_11b412db:;
  /* 11b412db jmp 0x11b41867 */
  goto L_11b41867;
L_11b412e0:;
  /* 11b412e0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b412e3 and ecx, 0x830 */
  { uint32_t _r=(ECX)&(0x830u); ECX = (_r); fl_logic(_r,32); }
  /* 11b412e9 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b412eb jne 0x11b412f6 */
  if (!C.zf) goto L_11b412f6;
  /* 11b412ed mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b412f0 or dh, 8 */
  { uint32_t _r=(C.d.b.h)|(0x8u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11b412f3 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11b412f6:;
  /* 11b412f6 cmp dword ptr [ebp - 0x234], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b412fd jne 0x11b4130b */
  if (!C.zf) goto L_11b4130b;
  /* 11b412ff mov dword ptr [ebp - 0x2a4], 0x7fffffff */
  w32((uint32_t)(EBP + -0x2a4), (0x7fffffffu));
  /* 11b41309 jmp 0x11b41317 */
  goto L_11b41317;
L_11b4130b:;
  /* 11b4130b mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 11b41311 mov dword ptr [ebp - 0x2a4], eax */
  w32((uint32_t)(EBP + -0x2a4), (EAX));
L_11b41317:;
  /* 11b41317 mov ecx, dword ptr [ebp - 0x2a4] */
  ECX = (r32((uint32_t)(EBP + -0x2a4)));
  /* 11b4131d mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 11b41323 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11b41326 push edx */
  push32((uint32_t)(EDX));
  /* 11b41327 call 0x11b41c70 */
  push32(0x11b4132cu); f_11b41c70();
  /* 11b4132c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4132f mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11b41332 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b41335 and eax, 0x810 */
  { uint32_t _r=(EAX)&(0x810u); EAX = (_r); fl_logic(_r,32); }
  /* 11b4133a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b4133c je 0x11b413a6 */
  if (C.zf) goto L_11b413a6;
  /* 11b4133e cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b41342 jne 0x11b4134d */
  if (!C.zf) goto L_11b4134d;
  /* 11b41344 mov ecx, dword ptr [0x11b66134] */
  ECX = (r32((uint32_t)(0x11b66134)));
  /* 11b4134a mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11b4134d:;
  /* 11b4134d mov dword ptr [ebp - 0x1c], 1 */
  w32((uint32_t)(EBP + -0x1c), (0x1u));
  /* 11b41354 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b41357 mov dword ptr [ebp - 0x254], edx */
  w32((uint32_t)(EBP + -0x254), (EDX));
L_11b4135d:;
  /* 11b4135d mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 11b41363 mov ecx, dword ptr [ebp - 0x258] */
  ECX = (r32((uint32_t)(EBP + -0x258)));
  /* 11b41369 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b4136c mov dword ptr [ebp - 0x258], ecx */
  w32((uint32_t)(EBP + -0x258), (ECX));
  /* 11b41372 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b41374 je 0x11b41396 */
  if (C.zf) goto L_11b41396;
  /* 11b41376 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 11b4137c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b4137e mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11b41381 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b41383 je 0x11b41396 */
  if (C.zf) goto L_11b41396;
  /* 11b41385 mov ecx, dword ptr [ebp - 0x254] */
  ECX = (r32((uint32_t)(EBP + -0x254)));
  /* 11b4138b add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4138e mov dword ptr [ebp - 0x254], ecx */
  w32((uint32_t)(EBP + -0x254), (ECX));
  /* 11b41394 jmp 0x11b4135d */
  goto L_11b4135d;
L_11b41396:;
  /* 11b41396 mov edx, dword ptr [ebp - 0x254] */
  EDX = (r32((uint32_t)(EBP + -0x254)));
  /* 11b4139c sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b4139f sar edx, 1 */
  EDX = (sh_sar((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11b413a1 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 11b413a4 jmp 0x11b41400 */
  goto L_11b41400;
L_11b413a6:;
  /* 11b413a6 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b413aa jne 0x11b413b4 */
  if (!C.zf) goto L_11b413b4;
  /* 11b413ac mov eax, dword ptr [0x11b66130] */
  EAX = (r32((uint32_t)(0x11b66130)));
  /* 11b413b1 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_11b413b4:;
  /* 11b413b4 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b413b7 mov dword ptr [ebp - 0x250], ecx */
  w32((uint32_t)(EBP + -0x250), (ECX));
L_11b413bd:;
  /* 11b413bd mov edx, dword ptr [ebp - 0x258] */
  EDX = (r32((uint32_t)(EBP + -0x258)));
  /* 11b413c3 mov eax, dword ptr [ebp - 0x258] */
  EAX = (r32((uint32_t)(EBP + -0x258)));
  /* 11b413c9 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b413cc mov dword ptr [ebp - 0x258], eax */
  w32((uint32_t)(EBP + -0x258), (EAX));
  /* 11b413d2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b413d4 je 0x11b413f4 */
  if (C.zf) goto L_11b413f4;
  /* 11b413d6 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 11b413dc movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11b413df test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b413e1 je 0x11b413f4 */
  if (C.zf) goto L_11b413f4;
  /* 11b413e3 mov eax, dword ptr [ebp - 0x250] */
  EAX = (r32((uint32_t)(EBP + -0x250)));
  /* 11b413e9 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b413ec mov dword ptr [ebp - 0x250], eax */
  w32((uint32_t)(EBP + -0x250), (EAX));
  /* 11b413f2 jmp 0x11b413bd */
  goto L_11b413bd;
L_11b413f4:;
  /* 11b413f4 mov ecx, dword ptr [ebp - 0x250] */
  ECX = (r32((uint32_t)(EBP + -0x250)));
  /* 11b413fa sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b413fd mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
L_11b41400:;
  /* 11b41400 jmp 0x11b41867 */
  goto L_11b41867;
L_11b41405:;
  /* 11b41405 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11b41408 push edx */
  push32((uint32_t)(EDX));
  /* 11b41409 call 0x11b41c70 */
  push32(0x11b4140eu); f_11b41c70();
  /* 11b4140e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b41411 mov dword ptr [ebp - 0x25c], eax */
  w32((uint32_t)(EBP + -0x25c), (EAX));
  /* 11b41417 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4141a and eax, 0x20 */
  { uint32_t _r=(EAX)&(0x20u); EAX = (_r); fl_logic(_r,32); }
  /* 11b4141d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b4141f je 0x11b41433 */
  if (C.zf) goto L_11b41433;
  /* 11b41421 mov ecx, dword ptr [ebp - 0x25c] */
  ECX = (r32((uint32_t)(EBP + -0x25c)));
  /* 11b41427 mov dx, word ptr [ebp - 0x22c] */
  DX = (r16((uint32_t)(EBP + -0x22c)));
  /* 11b4142e mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 11b41431 jmp 0x11b41441 */
  goto L_11b41441;
L_11b41433:;
  /* 11b41433 mov eax, dword ptr [ebp - 0x25c] */
  EAX = (r32((uint32_t)(EBP + -0x25c)));
  /* 11b41439 mov ecx, dword ptr [ebp - 0x22c] */
  ECX = (r32((uint32_t)(EBP + -0x22c)));
  /* 11b4143f mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
L_11b41441:;
  /* 11b41441 mov dword ptr [ebp - 0x23c], 1 */
  w32((uint32_t)(EBP + -0x23c), (0x1u));
  /* 11b4144b jmp 0x11b41867 */
  goto L_11b41867;
L_11b41450:;
  /* 11b41450 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11b41457 mov dl, byte ptr [ebp - 0x28] */
  DL = (r8((uint32_t)(EBP + -0x28)));
  /* 11b4145a add dl, 0x20 */
  { uint32_t _a=(DL),_b=(0x20u),_r=_a+_b; DL = (_r); fl_add(_a,_b,_r,8); }
  /* 11b4145d mov byte ptr [ebp - 0x28], dl */
  w8((uint32_t)(EBP + -0x28), (DL));
L_11b41460:;
  /* 11b41460 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b41463 or al, 0x40 */
  { uint32_t _r=(AL)|(0x40u); AL = (_r); fl_logic(_r,8); }
  /* 11b41465 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b41468 lea ecx, [ebp - 0x228] */
  ECX = ((uint32_t)(EBP + -0x228));
  /* 11b4146e mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
  /* 11b41471 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b41478 jge 0x11b41486 */
  if ((C.sf==C.of)) goto L_11b41486;
  /* 11b4147a mov dword ptr [ebp - 0x234], 6 */
  w32((uint32_t)(EBP + -0x234), (0x6u));
  /* 11b41484 jmp 0x11b414a2 */
  goto L_11b414a2;
L_11b41486:;
  /* 11b41486 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4148d jne 0x11b414a2 */
  if (!C.zf) goto L_11b414a2;
  /* 11b4148f movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11b41493 cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b41496 jne 0x11b414a2 */
  if (!C.zf) goto L_11b414a2;
  /* 11b41498 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
L_11b414a2:;
  /* 11b414a2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b414a5 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b414a8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11b414ab mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b414ae sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b414b1 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b414b3 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b414b6 mov dword ptr [ebp - 0x264], edx */
  w32((uint32_t)(EBP + -0x264), (EDX));
  /* 11b414bc mov dword ptr [ebp - 0x260], eax */
  w32((uint32_t)(EBP + -0x260), (EAX));
  /* 11b414c2 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b414c5 push ecx */
  push32((uint32_t)(ECX));
  /* 11b414c6 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 11b414cc push edx */
  push32((uint32_t)(EDX));
  /* 11b414cd movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11b414d1 push eax */
  push32((uint32_t)(EAX));
  /* 11b414d2 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b414d5 push ecx */
  push32((uint32_t)(ECX));
  /* 11b414d6 lea edx, [ebp - 0x264] */
  EDX = ((uint32_t)(EBP + -0x264));
  /* 11b414dc push edx */
  push32((uint32_t)(EDX));
  /* 11b414dd call dword ptr [0x11b65a74] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b65a74))), 0x11b414e3u);
  /* 11b414e3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b414e6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b414e9 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11b414ee test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b414f0 je 0x11b41508 */
  if (C.zf) goto L_11b41508;
  /* 11b414f2 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b414f9 jne 0x11b41508 */
  if (!C.zf) goto L_11b41508;
  /* 11b414fb mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b414fe push ecx */
  push32((uint32_t)(ECX));
  /* 11b414ff call dword ptr [0x11b65a80] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b65a80))), 0x11b41505u);
  /* 11b41505 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b41508:;
  /* 11b41508 movsx edx, byte ptr [ebp - 0x28] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11b4150c cmp edx, 0x67 */
  { uint32_t _a=(EDX),_b=(0x67u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4150f jne 0x11b4152a */
  if (!C.zf) goto L_11b4152a;
  /* 11b41511 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b41514 and eax, 0x80 */
  { uint32_t _r=(EAX)&(0x80u); EAX = (_r); fl_logic(_r,32); }
  /* 11b41519 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b4151b jne 0x11b4152a */
  if (!C.zf) goto L_11b4152a;
  /* 11b4151d mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b41520 push ecx */
  push32((uint32_t)(ECX));
  /* 11b41521 call dword ptr [0x11b65a78] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b65a78))), 0x11b41527u);
  /* 11b41527 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b4152a:;
  /* 11b4152a mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b4152d movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11b41530 cmp eax, 0x2d */
  { uint32_t _a=(EAX),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b41533 jne 0x11b41547 */
  if (!C.zf) goto L_11b41547;
  /* 11b41535 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b41538 or ch, 1 */
  { uint32_t _r=(C.c.b.h)|(0x1u); C.c.b.h = (_r); fl_logic(_r,8); }
  /* 11b4153b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b4153e mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b41541 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b41544 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_11b41547:;
  /* 11b41547 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b4154a push eax */
  push32((uint32_t)(EAX));
  /* 11b4154b call 0x11b3b830 */
  push32(0x11b41550u); f_11b3b830();
  /* 11b41550 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b41553 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11b41556 jmp 0x11b41867 */
  goto L_11b41867;
L_11b4155b:;
  /* 11b4155b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4155e or ecx, 0x40 */
  { uint32_t _r=(ECX)|(0x40u); ECX = (_r); fl_logic(_r,32); }
  /* 11b41561 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b41564 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 11b4156e jmp 0x11b415f5 */
  goto L_11b415f5;
L_11b41573:;
  /* 11b41573 mov dword ptr [ebp - 0x238], 0xa */
  w32((uint32_t)(EBP + -0x238), (0xau));
  /* 11b4157d jmp 0x11b415f5 */
  goto L_11b415f5;
L_11b4157f:;
  /* 11b4157f mov dword ptr [ebp - 0x234], 8 */
  w32((uint32_t)(EBP + -0x234), (0x8u));
L_11b41589:;
  /* 11b41589 mov dword ptr [ebp - 0x230], 7 */
  w32((uint32_t)(EBP + -0x230), (0x7u));
  /* 11b41593 jmp 0x11b4159f */
  goto L_11b4159f;
L_11b41595:;
  /* 11b41595 mov dword ptr [ebp - 0x230], 0x27 */
  w32((uint32_t)(EBP + -0x230), (0x27u));
L_11b4159f:;
  /* 11b4159f mov dword ptr [ebp - 0x238], 0x10 */
  w32((uint32_t)(EBP + -0x238), (0x10u));
  /* 11b415a9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b415ac and edx, 0x80 */
  { uint32_t _r=(EDX)&(0x80u); EDX = (_r); fl_logic(_r,32); }
  /* 11b415b2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b415b4 je 0x11b415d3 */
  if (C.zf) goto L_11b415d3;
  /* 11b415b6 mov byte ptr [ebp - 0x240], 0x30 */
  w8((uint32_t)(EBP + -0x240), (0x30u));
  /* 11b415bd mov eax, dword ptr [ebp - 0x230] */
  EAX = (r32((uint32_t)(EBP + -0x230)));
  /* 11b415c3 add eax, 0x51 */
  { uint32_t _a=(EAX),_b=(0x51u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b415c6 mov byte ptr [ebp - 0x23f], al */
  w8((uint32_t)(EBP + -0x23f), (AL));
  /* 11b415cc mov dword ptr [ebp - 0x10], 2 */
  w32((uint32_t)(EBP + -0x10), (0x2u));
L_11b415d3:;
  /* 11b415d3 jmp 0x11b415f5 */
  goto L_11b415f5;
L_11b415d5:;
  /* 11b415d5 mov dword ptr [ebp - 0x238], 8 */
  w32((uint32_t)(EBP + -0x238), (0x8u));
  /* 11b415df mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b415e2 and ecx, 0x80 */
  { uint32_t _r=(ECX)&(0x80u); ECX = (_r); fl_logic(_r,32); }
  /* 11b415e8 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b415ea je 0x11b415f5 */
  if (C.zf) goto L_11b415f5;
  /* 11b415ec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b415ef or dh, 2 */
  { uint32_t _r=(C.d.b.h)|(0x2u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11b415f2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11b415f5:;
  /* 11b415f5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b415f8 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11b415fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b415ff je 0x11b4161e */
  if (C.zf) goto L_11b4161e;
  /* 11b41601 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11b41604 push ecx */
  push32((uint32_t)(ECX));
  /* 11b41605 call 0x11b41c90 */
  push32(0x11b4160au); f_11b41c90();
  /* 11b4160a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4160d mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11b41613 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 11b41619 jmp 0x11b416af */
  goto L_11b416af;
L_11b4161e:;
  /* 11b4161e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b41621 and edx, 0x20 */
  { uint32_t _r=(EDX)&(0x20u); EDX = (_r); fl_logic(_r,32); }
  /* 11b41624 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b41626 je 0x11b41670 */
  if (C.zf) goto L_11b41670;
  /* 11b41628 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4162b and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11b4162e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b41630 je 0x11b41650 */
  if (C.zf) goto L_11b41650;
  /* 11b41632 lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11b41635 push ecx */
  push32((uint32_t)(ECX));
  /* 11b41636 call 0x11b41c70 */
  push32(0x11b4163bu); f_11b41c70();
  /* 11b4163b add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4163e movsx eax, ax */
  EAX = ((uint32_t)(int32_t)(int16_t)(AX));
  /* 11b41641 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b41642 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11b41648 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 11b4164e jmp 0x11b4166e */
  goto L_11b4166e;
L_11b41650:;
  /* 11b41650 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11b41653 push edx */
  push32((uint32_t)(EDX));
  /* 11b41654 call 0x11b41c70 */
  push32(0x11b41659u); f_11b41c70();
  /* 11b41659 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4165c and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b41661 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b41662 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11b41668 mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
L_11b4166e:;
  /* 11b4166e jmp 0x11b416af */
  goto L_11b416af;
L_11b41670:;
  /* 11b41670 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b41673 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11b41676 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b41678 je 0x11b41695 */
  if (C.zf) goto L_11b41695;
  /* 11b4167a lea ecx, [ebp + 0x10] */
  ECX = ((uint32_t)(EBP + 0x10));
  /* 11b4167d push ecx */
  push32((uint32_t)(ECX));
  /* 11b4167e call 0x11b41c70 */
  push32(0x11b41683u); f_11b41c70();
  /* 11b41683 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b41686 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b41687 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11b4168d mov dword ptr [ebp - 0x274], edx */
  w32((uint32_t)(EBP + -0x274), (EDX));
  /* 11b41693 jmp 0x11b416af */
  goto L_11b416af;
L_11b41695:;
  /* 11b41695 lea edx, [ebp + 0x10] */
  EDX = ((uint32_t)(EBP + 0x10));
  /* 11b41698 push edx */
  push32((uint32_t)(EDX));
  /* 11b41699 call 0x11b41c70 */
  push32(0x11b4169eu); f_11b41c70();
  /* 11b4169e add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b416a1 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b416a3 mov dword ptr [ebp - 0x278], eax */
  w32((uint32_t)(EBP + -0x278), (EAX));
  /* 11b416a9 mov dword ptr [ebp - 0x274], ecx */
  w32((uint32_t)(EBP + -0x274), (ECX));
L_11b416af:;
  /* 11b416af mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b416b2 and edx, 0x40 */
  { uint32_t _r=(EDX)&(0x40u); EDX = (_r); fl_logic(_r,32); }
  /* 11b416b5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b416b7 je 0x11b416f7 */
  if (C.zf) goto L_11b416f7;
  /* 11b416b9 cmp dword ptr [ebp - 0x274], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x274))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b416c0 jg 0x11b416f7 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b416f7;
  /* 11b416c2 jl 0x11b416cd */
  if ((C.sf!=C.of)) goto L_11b416cd;
  /* 11b416c4 cmp dword ptr [ebp - 0x278], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x278))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b416cb jae 0x11b416f7 */
  if (!C.cf) goto L_11b416f7;
L_11b416cd:;
  /* 11b416cd mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 11b416d3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b416d5 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 11b416db adc ecx, 0 */
  { uint32_t _a=(ECX),_b=(0x0u),_r=_a+_b+C.cf; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b416de neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b416e0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11b416e6 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
  /* 11b416ec mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b416ef or dh, 1 */
  { uint32_t _r=(C.d.b.h)|(0x1u); C.d.b.h = (_r); fl_logic(_r,8); }
  /* 11b416f2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b416f5 jmp 0x11b4170f */
  goto L_11b4170f;
L_11b416f7:;
  /* 11b416f7 mov eax, dword ptr [ebp - 0x278] */
  EAX = (r32((uint32_t)(EBP + -0x278)));
  /* 11b416fd mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11b41703 mov ecx, dword ptr [ebp - 0x274] */
  ECX = (r32((uint32_t)(EBP + -0x274)));
  /* 11b41709 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_11b4170f:;
  /* 11b4170f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b41712 and edx, 0x8000 */
  { uint32_t _r=(EDX)&(0x8000u); EDX = (_r); fl_logic(_r,32); }
  /* 11b41718 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b4171a jne 0x11b41737 */
  if (!C.zf) goto L_11b41737;
  /* 11b4171c mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11b41722 mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 11b41728 and ecx, 0 */
  { uint32_t _r=(ECX)&(0x0u); ECX = (_r); fl_logic(_r,32); }
  /* 11b4172b mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11b41731 mov dword ptr [ebp - 0x268], ecx */
  w32((uint32_t)(EBP + -0x268), (ECX));
L_11b41737:;
  /* 11b41737 cmp dword ptr [ebp - 0x234], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x234))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4173e jge 0x11b4174c */
  if ((C.sf==C.of)) goto L_11b4174c;
  /* 11b41740 mov dword ptr [ebp - 0x234], 1 */
  w32((uint32_t)(EBP + -0x234), (0x1u));
  /* 11b4174a jmp 0x11b41755 */
  goto L_11b41755;
L_11b4174c:;
  /* 11b4174c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4174f and edx, 0xfffffff7 */
  { uint32_t _r=(EDX)&(0xfffffff7u); EDX = (_r); fl_logic(_r,32); }
  /* 11b41752 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11b41755:;
  /* 11b41755 mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11b4175b or eax, dword ptr [ebp - 0x268] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x268))); EAX = (_r); fl_logic(_r,32); }
  /* 11b41761 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b41763 jne 0x11b4176c */
  if (!C.zf) goto L_11b4176c;
  /* 11b41765 mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
L_11b4176c:;
  /* 11b4176c lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 11b4176f mov dword ptr [ebp - 0x20], ecx */
  w32((uint32_t)(EBP + -0x20), (ECX));
L_11b41772:;
  /* 11b41772 mov edx, dword ptr [ebp - 0x234] */
  EDX = (r32((uint32_t)(EBP + -0x234)));
  /* 11b41778 mov eax, dword ptr [ebp - 0x234] */
  EAX = (r32((uint32_t)(EBP + -0x234)));
  /* 11b4177e sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b41781 mov dword ptr [ebp - 0x234], eax */
  w32((uint32_t)(EBP + -0x234), (EAX));
  /* 11b41787 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b41789 jg 0x11b4179f */
  if ((!C.zf&&C.sf==C.of)) goto L_11b4179f;
  /* 11b4178b mov ecx, dword ptr [ebp - 0x26c] */
  ECX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11b41791 or ecx, dword ptr [ebp - 0x268] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x268))); ECX = (_r); fl_logic(_r,32); }
  /* 11b41797 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b41799 je 0x11b41820 */
  if (C.zf) goto L_11b41820;
L_11b4179f:;
  /* 11b4179f mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 11b417a5 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b417a6 push edx */
  push32((uint32_t)(EDX));
  /* 11b417a7 push eax */
  push32((uint32_t)(EAX));
  /* 11b417a8 mov edx, dword ptr [ebp - 0x268] */
  EDX = (r32((uint32_t)(EBP + -0x268)));
  /* 11b417ae push edx */
  push32((uint32_t)(EDX));
  /* 11b417af mov eax, dword ptr [ebp - 0x26c] */
  EAX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11b417b5 push eax */
  push32((uint32_t)(EAX));
  /* 11b417b6 call 0x11b40b30 */
  push32(0x11b417bbu); f_11b40b30();
  /* 11b417bb add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b417be mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
  /* 11b417c4 mov eax, dword ptr [ebp - 0x238] */
  EAX = (r32((uint32_t)(EBP + -0x238)));
  /* 11b417ca cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 11b417cb push edx */
  push32((uint32_t)(EDX));
  /* 11b417cc push eax */
  push32((uint32_t)(EAX));
  /* 11b417cd mov ecx, dword ptr [ebp - 0x268] */
  ECX = (r32((uint32_t)(EBP + -0x268)));
  /* 11b417d3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b417d4 mov edx, dword ptr [ebp - 0x26c] */
  EDX = (r32((uint32_t)(EBP + -0x26c)));
  /* 11b417da push edx */
  push32((uint32_t)(EDX));
  /* 11b417db call 0x11b40ac0 */
  push32(0x11b417e0u); f_11b40ac0();
  /* 11b417e0 mov dword ptr [ebp - 0x26c], eax */
  w32((uint32_t)(EBP + -0x26c), (EAX));
  /* 11b417e6 mov dword ptr [ebp - 0x268], edx */
  w32((uint32_t)(EBP + -0x268), (EDX));
  /* 11b417ec cmp dword ptr [ebp - 0x270], 0x39 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x270))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b417f3 jle 0x11b41807 */
  if ((C.zf||C.sf!=C.of)) goto L_11b41807;
  /* 11b417f5 mov eax, dword ptr [ebp - 0x270] */
  EAX = (r32((uint32_t)(EBP + -0x270)));
  /* 11b417fb add eax, dword ptr [ebp - 0x230] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x230))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b41801 mov dword ptr [ebp - 0x270], eax */
  w32((uint32_t)(EBP + -0x270), (EAX));
L_11b41807:;
  /* 11b41807 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b4180a mov dl, byte ptr [ebp - 0x270] */
  DL = (r8((uint32_t)(EBP + -0x270)));
  /* 11b41810 mov byte ptr [ecx], dl */
  w8((uint32_t)(ECX), (DL));
  /* 11b41812 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b41815 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b41818 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11b4181b jmp 0x11b41772 */
  goto L_11b41772;
L_11b41820:;
  /* 11b41820 lea ecx, [ebp - 0x29] */
  ECX = ((uint32_t)(EBP + -0x29));
  /* 11b41823 sub ecx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b41826 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11b41829 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b4182c add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4182f mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11b41832 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b41835 and eax, 0x200 */
  { uint32_t _r=(EAX)&(0x200u); EAX = (_r); fl_logic(_r,32); }
  /* 11b4183a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b4183c je 0x11b41867 */
  if (C.zf) goto L_11b41867;
  /* 11b4183e mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b41841 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11b41844 cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b41847 jne 0x11b4184f */
  if (!C.zf) goto L_11b4184f;
  /* 11b41849 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4184d jne 0x11b41867 */
  if (!C.zf) goto L_11b41867;
L_11b4184f:;
  /* 11b4184f mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b41852 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b41855 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11b41858 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b4185b mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
  /* 11b4185e mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b41861 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b41864 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
L_11b41867:;
  /* 11b41867 cmp dword ptr [ebp - 0x23c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x23c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4186e jne 0x11b41a42 */
  if (!C.zf) goto L_11b41a42;
  /* 11b41874 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b41877 and eax, 0x40 */
  { uint32_t _r=(EAX)&(0x40u); EAX = (_r); fl_logic(_r,32); }
  /* 11b4187a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b4187c je 0x11b418cd */
  if (C.zf) goto L_11b418cd;
  /* 11b4187e mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b41881 and ecx, 0x100 */
  { uint32_t _r=(ECX)&(0x100u); ECX = (_r); fl_logic(_r,32); }
  /* 11b41887 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b41889 je 0x11b4189b */
  if (C.zf) goto L_11b4189b;
  /* 11b4188b mov byte ptr [ebp - 0x240], 0x2d */
  w8((uint32_t)(EBP + -0x240), (0x2du));
  /* 11b41892 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11b41899 jmp 0x11b418cd */
  goto L_11b418cd;
L_11b4189b:;
  /* 11b4189b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4189e and edx, 1 */
  { uint32_t _r=(EDX)&(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11b418a1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b418a3 je 0x11b418b5 */
  if (C.zf) goto L_11b418b5;
  /* 11b418a5 mov byte ptr [ebp - 0x240], 0x2b */
  w8((uint32_t)(EBP + -0x240), (0x2bu));
  /* 11b418ac mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11b418b3 jmp 0x11b418cd */
  goto L_11b418cd;
L_11b418b5:;
  /* 11b418b5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b418b8 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 11b418bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b418bd je 0x11b418cd */
  if (C.zf) goto L_11b418cd;
  /* 11b418bf mov byte ptr [ebp - 0x240], 0x20 */
  w8((uint32_t)(EBP + -0x240), (0x20u));
  /* 11b418c6 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
L_11b418cd:;
  /* 11b418cd mov ecx, dword ptr [ebp - 0x244] */
  ECX = (r32((uint32_t)(EBP + -0x244)));
  /* 11b418d3 sub ecx, dword ptr [ebp - 0x24] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x24))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b418d6 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b418d9 mov dword ptr [ebp - 0x27c], ecx */
  w32((uint32_t)(EBP + -0x27c), (ECX));
  /* 11b418df mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b418e2 and edx, 0xc */
  { uint32_t _r=(EDX)&(0xcu); EDX = (_r); fl_logic(_r,32); }
  /* 11b418e5 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b418e7 jne 0x11b41905 */
  if (!C.zf) goto L_11b41905;
  /* 11b418e9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11b418ef push eax */
  push32((uint32_t)(EAX));
  /* 11b418f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b418f3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b418f4 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11b418fa push edx */
  push32((uint32_t)(EDX));
  /* 11b418fb push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11b418fd call 0x11b41be0 */
  push32(0x11b41902u); f_11b41be0();
  /* 11b41902 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b41905:;
  /* 11b41905 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11b4190b push eax */
  push32((uint32_t)(EAX));
  /* 11b4190c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4190f push ecx */
  push32((uint32_t)(ECX));
  /* 11b41910 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b41913 push edx */
  push32((uint32_t)(EDX));
  /* 11b41914 lea eax, [ebp - 0x240] */
  EAX = ((uint32_t)(EBP + -0x240));
  /* 11b4191a push eax */
  push32((uint32_t)(EAX));
  /* 11b4191b call 0x11b41c20 */
  push32(0x11b41920u); f_11b41c20();
  /* 11b41920 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b41923 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b41926 and ecx, 8 */
  { uint32_t _r=(ECX)&(0x8u); ECX = (_r); fl_logic(_r,32); }
  /* 11b41929 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b4192b je 0x11b41953 */
  if (C.zf) goto L_11b41953;
  /* 11b4192d mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b41930 and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11b41933 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b41935 jne 0x11b41953 */
  if (!C.zf) goto L_11b41953;
  /* 11b41937 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11b4193d push eax */
  push32((uint32_t)(EAX));
  /* 11b4193e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b41941 push ecx */
  push32((uint32_t)(ECX));
  /* 11b41942 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11b41948 push edx */
  push32((uint32_t)(EDX));
  /* 11b41949 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 11b4194b call 0x11b41be0 */
  push32(0x11b41950u); f_11b41be0();
  /* 11b41950 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b41953:;
  /* 11b41953 cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b41957 je 0x11b41a01 */
  if (C.zf) goto L_11b41a01;
  /* 11b4195d cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b41961 jle 0x11b41a01 */
  if ((C.zf||C.sf!=C.of)) goto L_11b41a01;
  /* 11b41967 mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b4196a mov dword ptr [ebp - 0x280], eax */
  w32((uint32_t)(EBP + -0x280), (EAX));
  /* 11b41970 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b41973 mov dword ptr [ebp - 0x284], ecx */
  w32((uint32_t)(EBP + -0x284), (ECX));
L_11b41979:;
  /* 11b41979 mov edx, dword ptr [ebp - 0x284] */
  EDX = (r32((uint32_t)(EBP + -0x284)));
  /* 11b4197f mov eax, dword ptr [ebp - 0x284] */
  EAX = (r32((uint32_t)(EBP + -0x284)));
  /* 11b41985 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b41988 mov dword ptr [ebp - 0x284], eax */
  w32((uint32_t)(EBP + -0x284), (EAX));
  /* 11b4198e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b41990 je 0x11b419ff */
  if (C.zf) goto L_11b419ff;
  /* 11b41992 mov ecx, dword ptr [ebp - 0x280] */
  ECX = (r32((uint32_t)(EBP + -0x280)));
  /* 11b41998 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 11b4199b mov word ptr [ebp - 0x2a6], dx */
  w16((uint32_t)(EBP + -0x2a6), (DX));
  /* 11b419a2 mov ax, word ptr [ebp - 0x2a6] */
  AX = (r16((uint32_t)(EBP + -0x2a6)));
  /* 11b419a9 push eax */
  push32((uint32_t)(EAX));
  /* 11b419aa lea ecx, [ebp - 0x288] */
  ECX = ((uint32_t)(EBP + -0x288));
  /* 11b419b0 push ecx */
  push32((uint32_t)(ECX));
  /* 11b419b1 mov edx, dword ptr [ebp - 0x280] */
  EDX = (r32((uint32_t)(EBP + -0x280)));
  /* 11b419b7 add edx, 2 */
  { uint32_t _a=(EDX),_b=(0x2u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b419ba mov dword ptr [ebp - 0x280], edx */
  w32((uint32_t)(EBP + -0x280), (EDX));
  /* 11b419c0 call 0x11b44980 */
  push32(0x11b419c5u); f_11b44980();
  /* 11b419c5 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b419c8 mov dword ptr [ebp - 0x28c], eax */
  w32((uint32_t)(EBP + -0x28c), (EAX));
  /* 11b419ce cmp dword ptr [ebp - 0x28c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b419d5 jg 0x11b419d9 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b419d9;
  /* 11b419d7 jmp 0x11b419ff */
  goto L_11b419ff;
L_11b419d9:;
  /* 11b419d9 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11b419df push eax */
  push32((uint32_t)(EAX));
  /* 11b419e0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b419e3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b419e4 mov edx, dword ptr [ebp - 0x28c] */
  EDX = (r32((uint32_t)(EBP + -0x28c)));
  /* 11b419ea push edx */
  push32((uint32_t)(EDX));
  /* 11b419eb lea eax, [ebp - 0x288] */
  EAX = ((uint32_t)(EBP + -0x288));
  /* 11b419f1 push eax */
  push32((uint32_t)(EAX));
  /* 11b419f2 call 0x11b41c20 */
  push32(0x11b419f7u); f_11b41c20();
  /* 11b419f7 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b419fa jmp 0x11b41979 */
  goto L_11b41979;
L_11b419ff:;
  /* 11b419ff jmp 0x11b41a1c */
  goto L_11b41a1c;
L_11b41a01:;
  /* 11b41a01 lea ecx, [ebp - 0x22c] */
  ECX = ((uint32_t)(EBP + -0x22c));
  /* 11b41a07 push ecx */
  push32((uint32_t)(ECX));
  /* 11b41a08 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b41a0b push edx */
  push32((uint32_t)(EDX));
  /* 11b41a0c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b41a0f push eax */
  push32((uint32_t)(EAX));
  /* 11b41a10 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b41a13 push ecx */
  push32((uint32_t)(ECX));
  /* 11b41a14 call 0x11b41c20 */
  push32(0x11b41a19u); f_11b41c20();
  /* 11b41a19 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b41a1c:;
  /* 11b41a1c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b41a1f and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11b41a22 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b41a24 je 0x11b41a42 */
  if (C.zf) goto L_11b41a42;
  /* 11b41a26 lea eax, [ebp - 0x22c] */
  EAX = ((uint32_t)(EBP + -0x22c));
  /* 11b41a2c push eax */
  push32((uint32_t)(EAX));
  /* 11b41a2d mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b41a30 push ecx */
  push32((uint32_t)(ECX));
  /* 11b41a31 mov edx, dword ptr [ebp - 0x27c] */
  EDX = (r32((uint32_t)(EBP + -0x27c)));
  /* 11b41a37 push edx */
  push32((uint32_t)(EDX));
  /* 11b41a38 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 11b41a3a call 0x11b41be0 */
  push32(0x11b41a3fu); f_11b41be0();
  /* 11b41a3f add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b41a42:;
  /* 11b41a42 jmp 0x11b40e54 */
  goto L_11b40e54;
L_11b41a47:;
  /* 11b41a47 mov eax, dword ptr [ebp - 0x22c] */
  EAX = (r32((uint32_t)(EBP + -0x22c)));
  /* 11b41a4d pop edi */
  EDI = (pop32());
  /* 11b41a4e pop esi */
  ESI = (pop32());
  /* 11b41a4f pop ebx */
  EBX = (pop32());
  /* 11b41a50 mov esp, ebp */
  ESP = (EBP);
  /* 11b41a52 pop ebp */
  EBP = (pop32());
  /* 11b41a53 ret  */
  ESPCHK(0x11b40e30u, _esp0);
  ESP += 4; return;
}

/* FUN_10011b60 @ 0x11b41b60 (119 bytes, 44 insns) */
void f_11b41b60(void) {
  FTRACE(0x11b41b60u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b41b60 push ebp */
  push32((uint32_t)(EBP));
  /* 11b41b61 mov ebp, esp */
  EBP = (ESP);
  /* 11b41b63 push ecx */
  push32((uint32_t)(ECX));
  /* 11b41b64 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b41b67 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b41b6a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b41b6d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b41b70 mov dword ptr [edx + 4], ecx */
  w32((uint32_t)(EDX + 0x4), (ECX));
  /* 11b41b73 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b41b76 cmp dword ptr [eax + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b41b7a jl 0x11b41ba2 */
  if ((C.sf!=C.of)) goto L_11b41ba2;
  /* 11b41b7c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b41b7f mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b41b81 mov al, byte ptr [ebp + 8] */
  AL = (r8((uint32_t)(EBP + 0x8)));
  /* 11b41b84 mov byte ptr [edx], al */
  w8((uint32_t)(EDX), (AL));
  /* 11b41b86 movsx ecx, byte ptr [ebp + 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + 0x8))));
  /* 11b41b8a and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b41b90 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b41b93 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b41b96 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b41b98 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b41b9b mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b41b9e mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11b41ba0 jmp 0x11b41bb5 */
  goto L_11b41bb5;
L_11b41ba2:;
  /* 11b41ba2 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b41ba5 push edx */
  push32((uint32_t)(EDX));
  /* 11b41ba6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b41ba9 push eax */
  push32((uint32_t)(EAX));
  /* 11b41baa call 0x11b40bb0 */
  push32(0x11b41bafu); f_11b40bb0();
  /* 11b41baf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b41bb2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b41bb5:;
  /* 11b41bb5 cmp dword ptr [ebp - 4], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b41bb9 jne 0x11b41bc6 */
  if (!C.zf) goto L_11b41bc6;
  /* 11b41bbb mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b41bbe mov dword ptr [ecx], 0xffffffff */
  w32((uint32_t)(ECX), (0xffffffffu));
  /* 11b41bc4 jmp 0x11b41bd3 */
  goto L_11b41bd3;
L_11b41bc6:;
  /* 11b41bc6 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b41bc9 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b41bcb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b41bce mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b41bd1 mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_11b41bd3:;
  /* 11b41bd3 mov esp, ebp */
  ESP = (EBP);
  /* 11b41bd5 pop ebp */
  EBP = (pop32());
  /* 11b41bd6 ret  */
  ESPCHK(0x11b41b60u, _esp0);
  ESP += 4; return;
}

/* FUN_10011be0 @ 0x11b41be0 (53 bytes, 23 insns) */
void f_11b41be0(void) {
  FTRACE(0x11b41be0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b41be0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b41be1 mov ebp, esp */
  EBP = (ESP);
L_11b41be3:;
  /* 11b41be3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b41be6 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b41be9 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b41bec mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11b41bef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b41bf1 jle 0x11b41c13 */
  if ((C.zf||C.sf!=C.of)) goto L_11b41c13;
  /* 11b41bf3 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b41bf6 push edx */
  push32((uint32_t)(EDX));
  /* 11b41bf7 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b41bfa push eax */
  push32((uint32_t)(EAX));
  /* 11b41bfb mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b41bfe push ecx */
  push32((uint32_t)(ECX));
  /* 11b41bff call 0x11b41b60 */
  push32(0x11b41c04u); f_11b41b60();
  /* 11b41c04 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b41c07 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b41c0a cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b41c0d jne 0x11b41c11 */
  if (!C.zf) goto L_11b41c11;
  /* 11b41c0f jmp 0x11b41c13 */
  goto L_11b41c13;
L_11b41c11:;
  /* 11b41c11 jmp 0x11b41be3 */
  goto L_11b41be3;
L_11b41c13:;
  /* 11b41c13 pop ebp */
  EBP = (pop32());
  /* 11b41c14 ret  */
  ESPCHK(0x11b41be0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011c20 @ 0x11b41c20 (74 bytes, 31 insns) */
void f_11b41c20(void) {
  FTRACE(0x11b41c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b41c20 push ebp */
  push32((uint32_t)(EBP));
  /* 11b41c21 mov ebp, esp */
  EBP = (ESP);
  /* 11b41c23 push ecx */
  push32((uint32_t)(ECX));
L_11b41c24:;
  /* 11b41c24 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b41c27 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b41c2a sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b41c2d mov dword ptr [ebp + 0xc], ecx */
  w32((uint32_t)(EBP + 0xc), (ECX));
  /* 11b41c30 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b41c32 jle 0x11b41c66 */
  if ((C.zf||C.sf!=C.of)) goto L_11b41c66;
  /* 11b41c34 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b41c37 push edx */
  push32((uint32_t)(EDX));
  /* 11b41c38 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b41c3b push eax */
  push32((uint32_t)(EAX));
  /* 11b41c3c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b41c3f movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11b41c42 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b41c45 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b41c48 push eax */
  push32((uint32_t)(EAX));
  /* 11b41c49 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b41c4c add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b41c4f mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11b41c52 call 0x11b41b60 */
  push32(0x11b41c57u); f_11b41b60();
  /* 11b41c57 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b41c5a mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b41c5d cmp dword ptr [edx], -1 */
  { uint32_t _a=(r32((uint32_t)(EDX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b41c60 jne 0x11b41c64 */
  if (!C.zf) goto L_11b41c64;
  /* 11b41c62 jmp 0x11b41c66 */
  goto L_11b41c66;
L_11b41c64:;
  /* 11b41c64 jmp 0x11b41c24 */
  goto L_11b41c24;
L_11b41c66:;
  /* 11b41c66 mov esp, ebp */
  ESP = (EBP);
  /* 11b41c68 pop ebp */
  EBP = (pop32());
  /* 11b41c69 ret  */
  ESPCHK(0x11b41c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10011c70 @ 0x11b41c70 (26 bytes, 12 insns) */
void f_11b41c70(void) {
  FTRACE(0x11b41c70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b41c70 push ebp */
  push32((uint32_t)(EBP));
  /* 11b41c71 mov ebp, esp */
  EBP = (ESP);
  /* 11b41c73 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b41c76 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b41c78 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b41c7b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b41c7e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11b41c80 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b41c83 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b41c85 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 11b41c88 pop ebp */
  EBP = (pop32());
  /* 11b41c89 ret  */
  ESPCHK(0x11b41c70u, _esp0);
  ESP += 4; return;
}

/* FUN_10011c90 @ 0x11b41c90 (31 bytes, 14 insns) */
void f_11b41c90(void) {
  FTRACE(0x11b41c90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b41c90 push ebp */
  push32((uint32_t)(EBP));
  /* 11b41c91 mov ebp, esp */
  EBP = (ESP);
  /* 11b41c93 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b41c96 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b41c98 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b41c9b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b41c9e mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11b41ca0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b41ca3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b41ca5 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b41ca8 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11b41caa mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b41cad pop ebp */
  EBP = (pop32());
  /* 11b41cae ret  */
  ESPCHK(0x11b41c90u, _esp0);
  ESP += 4; return;
}

/* FUN_10011cb0 @ 0x11b41cb0 (27 bytes, 12 insns) */
void f_11b41cb0(void) {
  FTRACE(0x11b41cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b41cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b41cb1 mov ebp, esp */
  EBP = (ESP);
  /* 11b41cb3 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b41cb6 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b41cb8 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b41cbb mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b41cbe mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 11b41cc0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b41cc3 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b41cc5 mov ax, word ptr [ecx - 4] */
  AX = (r16((uint32_t)(ECX + -0x4)));
  /* 11b41cc9 pop ebp */
  EBP = (pop32());
  /* 11b41cca ret  */
  ESPCHK(0x11b41cb0u, _esp0);
  ESP += 4; return;
}

/* __dosmaperr @ 0x11b41cd0 (145 bytes, 42 insns) */
void f_11b41cd0(void) {
  FTRACE(0x11b41cd0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b41cd0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b41cd1 mov ebp, esp */
  EBP = (ESP);
  /* 11b41cd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11b41cd4 call 0x11b41d80 */
  push32(0x11b41cd9u); f_11b41d80();
  /* 11b41cd9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b41cdc mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11b41cde mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b41ce5 jmp 0x11b41cf0 */
  goto L_11b41cf0;
L_11b41ce7:;
  /* 11b41ce7 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b41cea add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b41ced mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11b41cf0:;
  /* 11b41cf0 cmp dword ptr [ebp - 4], 0x2d */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b41cf4 jae 0x11b41d1a */
  if (!C.cf) goto L_11b41d1a;
  /* 11b41cf6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b41cf9 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b41cfc cmp ecx, dword ptr [eax*8 + 0x11b66138] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX*8 + 0x11b66138))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b41d03 jne 0x11b41d18 */
  if (!C.zf) goto L_11b41d18;
  /* 11b41d05 call 0x11b41d70 */
  push32(0x11b41d0au); f_11b41d70();
  /* 11b41d0a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b41d0d mov ecx, dword ptr [edx*8 + 0x11b6613c] */
  ECX = (r32((uint32_t)(EDX*8 + 0x11b6613c)));
  /* 11b41d14 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 11b41d16 jmp 0x11b41d5d */
  goto L_11b41d5d;
L_11b41d18:;
  /* 11b41d18 jmp 0x11b41ce7 */
  goto L_11b41ce7;
L_11b41d1a:;
  /* 11b41d1a cmp dword ptr [ebp + 8], 0x13 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b41d1e jb 0x11b41d33 */
  if (C.cf) goto L_11b41d33;
  /* 11b41d20 cmp dword ptr [ebp + 8], 0x24 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b41d24 ja 0x11b41d33 */
  if ((!C.cf&&!C.zf)) goto L_11b41d33;
  /* 11b41d26 call 0x11b41d70 */
  push32(0x11b41d2bu); f_11b41d70();
  /* 11b41d2b mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 11b41d31 jmp 0x11b41d5d */
  goto L_11b41d5d;
L_11b41d33:;
  /* 11b41d33 cmp dword ptr [ebp + 8], 0xbc */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b41d3a jb 0x11b41d52 */
  if (C.cf) goto L_11b41d52;
  /* 11b41d3c cmp dword ptr [ebp + 8], 0xca */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b41d43 ja 0x11b41d52 */
  if ((!C.cf&&!C.zf)) goto L_11b41d52;
  /* 11b41d45 call 0x11b41d70 */
  push32(0x11b41d4au); f_11b41d70();
  /* 11b41d4a mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 11b41d50 jmp 0x11b41d5d */
  goto L_11b41d5d;
L_11b41d52:;
  /* 11b41d52 call 0x11b41d70 */
  push32(0x11b41d57u); f_11b41d70();
  /* 11b41d57 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
L_11b41d5d:;
  /* 11b41d5d mov esp, ebp */
  ESP = (EBP);
  /* 11b41d5f pop ebp */
  EBP = (pop32());
  /* 11b41d60 ret  */
  ESPCHK(0x11b41cd0u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d70 @ 0x11b41d70 (13 bytes, 6 insns) */
void f_11b41d70(void) {
  FTRACE(0x11b41d70u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b41d70 push ebp */
  push32((uint32_t)(EBP));
  /* 11b41d71 mov ebp, esp */
  EBP = (ESP);
  /* 11b41d73 call 0x11b36480 */
  push32(0x11b41d78u); f_11b36480();
  /* 11b41d78 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b41d7b pop ebp */
  EBP = (pop32());
  /* 11b41d7c ret  */
  ESPCHK(0x11b41d70u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d80 @ 0x11b41d80 (13 bytes, 6 insns) */
void f_11b41d80(void) {
  FTRACE(0x11b41d80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b41d80 push ebp */
  push32((uint32_t)(EBP));
  /* 11b41d81 mov ebp, esp */
  EBP = (ESP);
  /* 11b41d83 call 0x11b36480 */
  push32(0x11b41d88u); f_11b36480();
  /* 11b41d88 add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b41d8b pop ebp */
  EBP = (pop32());
  /* 11b41d8c ret  */
  ESPCHK(0x11b41d80u, _esp0);
  ESP += 4; return;
}

/* FUN_10011d90 @ 0x11b41d90 (421 bytes, 148 insns) */
void f_11b41d90(void) {
  FTRACE(0x11b41d90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b41d90 push ebp */
  push32((uint32_t)(EBP));
  /* 11b41d91 mov ebp, esp */
  EBP = (ESP);
  /* 11b41d93 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11b41d95 push 0x11b634c8 */
  push32((uint32_t)(0x11b634c8u));
  /* 11b41d9a push 0x11b44b98 */
  push32((uint32_t)(0x11b44b98u));
  /* 11b41d9f mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11b41da5 push eax */
  push32((uint32_t)(EAX));
  /* 11b41da6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11b41dad add esp, -0x1c */
  { uint32_t _a=(ESP),_b=(0xffffffe4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b41db0 push ebx */
  push32((uint32_t)(EBX));
  /* 11b41db1 push esi */
  push32((uint32_t)(ESI));
  /* 11b41db2 push edi */
  push32((uint32_t)(EDI));
  /* 11b41db3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11b41db6 cmp dword ptr [0x11b67de0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67de0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b41dbd jne 0x11b41e0e */
  if (!C.zf) goto L_11b41e0e;
  /* 11b41dbf lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 11b41dc2 push eax */
  push32((uint32_t)(EAX));
  /* 11b41dc3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b41dc5 push 0x11b634c4 */
  push32((uint32_t)(0x11b634c4u));
  /* 11b41dca push 1 */
  push32((uint32_t)(0x1u));
  /* 11b41dcc call dword ptr [0x11b6a32c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a32c))), 0x11b41dd2u);
  /* 11b41dd2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b41dd4 je 0x11b41de2 */
  if (C.zf) goto L_11b41de2;
  /* 11b41dd6 mov dword ptr [0x11b67de0], 1 */
  w32((uint32_t)(0x11b67de0), (0x1u));
  /* 11b41de0 jmp 0x11b41e0e */
  goto L_11b41e0e;
L_11b41de2:;
  /* 11b41de2 lea ecx, [ebp - 0x1c] */
  ECX = ((uint32_t)(EBP + -0x1c));
  /* 11b41de5 push ecx */
  push32((uint32_t)(ECX));
  /* 11b41de6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b41de8 push 0x11b634c0 */
  push32((uint32_t)(0x11b634c0u));
  /* 11b41ded push 1 */
  push32((uint32_t)(0x1u));
  /* 11b41def push 0 */
  push32((uint32_t)(0x0u));
  /* 11b41df1 call dword ptr [0x11b6a330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a330))), 0x11b41df7u);
  /* 11b41df7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b41df9 je 0x11b41e07 */
  if (C.zf) goto L_11b41e07;
  /* 11b41dfb mov dword ptr [0x11b67de0], 2 */
  w32((uint32_t)(0x11b67de0), (0x2u));
  /* 11b41e05 jmp 0x11b41e0e */
  goto L_11b41e0e;
L_11b41e07:;
  /* 11b41e07 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b41e09 jmp 0x11b41f38 */
  goto L_11b41f38;
L_11b41e0e:;
  /* 11b41e0e cmp dword ptr [0x11b67de0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11b67de0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b41e15 jne 0x11b41e45 */
  if (!C.zf) goto L_11b41e45;
  /* 11b41e17 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b41e1b jne 0x11b41e26 */
  if (!C.zf) goto L_11b41e26;
  /* 11b41e1d mov edx, dword ptr [0x11b67dc8] */
  EDX = (r32((uint32_t)(0x11b67dc8)));
  /* 11b41e23 mov dword ptr [ebp + 0x1c], edx */
  w32((uint32_t)(EBP + 0x1c), (EDX));
L_11b41e26:;
  /* 11b41e26 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b41e29 push eax */
  push32((uint32_t)(EAX));
  /* 11b41e2a mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b41e2d push ecx */
  push32((uint32_t)(ECX));
  /* 11b41e2e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b41e31 push edx */
  push32((uint32_t)(EDX));
  /* 11b41e32 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b41e35 push eax */
  push32((uint32_t)(EAX));
  /* 11b41e36 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b41e39 push ecx */
  push32((uint32_t)(ECX));
  /* 11b41e3a call dword ptr [0x11b6a330] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a330))), 0x11b41e40u);
  /* 11b41e40 jmp 0x11b41f38 */
  goto L_11b41f38;
L_11b41e45:;
  /* 11b41e45 cmp dword ptr [0x11b67de0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b67de0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b41e4c jne 0x11b41f36 */
  if (!C.zf) goto L_11b41f36;
  /* 11b41e52 cmp dword ptr [ebp + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b41e56 jne 0x11b41e61 */
  if (!C.zf) goto L_11b41e61;
  /* 11b41e58 mov edx, dword ptr [0x11b67dd8] */
  EDX = (r32((uint32_t)(0x11b67dd8)));
  /* 11b41e5e mov dword ptr [ebp + 0x18], edx */
  w32((uint32_t)(EBP + 0x18), (EDX));
L_11b41e61:;
  /* 11b41e61 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b41e63 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b41e65 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b41e68 push eax */
  push32((uint32_t)(EAX));
  /* 11b41e69 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b41e6c push ecx */
  push32((uint32_t)(ECX));
  /* 11b41e6d mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11b41e70 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b41e72 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b41e74 and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11b41e77 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b41e7a push edx */
  push32((uint32_t)(EDX));
  /* 11b41e7b mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b41e7e push eax */
  push32((uint32_t)(EAX));
  /* 11b41e7f call dword ptr [0x11b6a340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a340))), 0x11b41e85u);
  /* 11b41e85 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11b41e88 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b41e8c jne 0x11b41e95 */
  if (!C.zf) goto L_11b41e95;
  /* 11b41e8e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b41e90 jmp 0x11b41f38 */
  goto L_11b41f38;
L_11b41e95:;
  /* 11b41e95 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b41e9c mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b41e9f shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11b41ea1 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b41ea4 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11b41ea6 call 0x11b3bba0 */
  push32(0x11b41eabu); f_11b3bba0();
  /* 11b41eab mov dword ptr [ebp - 0x2c], esp */
  w32((uint32_t)(EBP + -0x2c), (ESP));
  /* 11b41eae mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11b41eb1 mov ecx, dword ptr [ebp - 0x2c] */
  ECX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b41eb4 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11b41eb7 mov edx, dword ptr [ebp - 0x20] */
  EDX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b41eba shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11b41ebc push edx */
  push32((uint32_t)(EDX));
  /* 11b41ebd push 0 */
  push32((uint32_t)(0x0u));
  /* 11b41ebf mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b41ec2 push eax */
  push32((uint32_t)(EAX));
  /* 11b41ec3 call 0x11b3d530 */
  push32(0x11b41ec8u); f_11b3d530();
  /* 11b41ec8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b41ecb mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11b41ed2 jmp 0x11b41eeb */
  goto L_11b41eeb;
  /* 11b41ed4 mov eax, 1 */
  EAX = (0x1u);
  /* 11b41ed9 ret  */
  ESPCHK(0x11b41d90u, _esp0);
  ESP += 4; return;
  /* 11b41eda mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11b41edd mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11b41ee4 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11b41eeb:;
  /* 11b41eeb cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b41eef jne 0x11b41ef5 */
  if (!C.zf) goto L_11b41ef5;
  /* 11b41ef1 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b41ef3 jmp 0x11b41f38 */
  goto L_11b41f38;
L_11b41ef5:;
  /* 11b41ef5 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b41ef8 push ecx */
  push32((uint32_t)(ECX));
  /* 11b41ef9 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b41efc push edx */
  push32((uint32_t)(EDX));
  /* 11b41efd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b41f00 push eax */
  push32((uint32_t)(EAX));
  /* 11b41f01 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b41f04 push ecx */
  push32((uint32_t)(ECX));
  /* 11b41f05 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b41f07 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b41f0a push edx */
  push32((uint32_t)(EDX));
  /* 11b41f0b call dword ptr [0x11b6a340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a340))), 0x11b41f11u);
  /* 11b41f11 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11b41f14 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b41f18 jne 0x11b41f1e */
  if (!C.zf) goto L_11b41f1e;
  /* 11b41f1a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b41f1c jmp 0x11b41f38 */
  goto L_11b41f38;
L_11b41f1e:;
  /* 11b41f1e mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b41f21 push eax */
  push32((uint32_t)(EAX));
  /* 11b41f22 mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b41f25 push ecx */
  push32((uint32_t)(ECX));
  /* 11b41f26 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b41f29 push edx */
  push32((uint32_t)(EDX));
  /* 11b41f2a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b41f2d push eax */
  push32((uint32_t)(EAX));
  /* 11b41f2e call dword ptr [0x11b6a32c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a32c))), 0x11b41f34u);
  /* 11b41f34 jmp 0x11b41f38 */
  goto L_11b41f38;
L_11b41f36:;
  /* 11b41f36 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b41f38:;
  /* 11b41f38 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 11b41f3b mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b41f3e mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11b41f45 pop edi */
  EDI = (pop32());
  /* 11b41f46 pop esi */
  ESI = (pop32());
  /* 11b41f47 pop ebx */
  EBX = (pop32());
  /* 11b41f48 mov esp, ebp */
  ESP = (EBP);
  /* 11b41f4a pop ebp */
  EBP = (pop32());
  /* 11b41f4b ret  */
  ESPCHK(0x11b41d90u, _esp0);
  ESP += 4; return;
}

/* FUN_10011f50 @ 0x11b41f50 (1007 bytes, 269 insns) */
void f_11b41f50(void) {
  FTRACE(0x11b41f50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b41f50 push ebp */
  push32((uint32_t)(EBP));
  /* 11b41f51 mov ebp, esp */
  EBP = (ESP);
  /* 11b41f53 sub esp, 0xb0 */
  { uint32_t _a=(ESP),_b=(0xb0u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b41f59 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b41f5d jl 0x11b41f65 */
  if ((C.sf!=C.of)) goto L_11b41f65;
  /* 11b41f5f cmp dword ptr [ebp + 8], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b41f63 jle 0x11b41f6c */
  if ((C.zf||C.sf!=C.of)) goto L_11b41f6c;
L_11b41f65:;
  /* 11b41f65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b41f67 jmp 0x11b4233b */
  goto L_11b4233b;
L_11b41f6c:;
  /* 11b41f6c push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11b41f6e call 0x11b3a900 */
  push32(0x11b41f73u); f_11b3a900();
  /* 11b41f73 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b41f76 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11b41f7d mov eax, dword ptr [0x11b691e4] */
  EAX = (r32((uint32_t)(0x11b691e4)));
  /* 11b41f82 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b41f85 mov dword ptr [0x11b691e4], eax */
  w32((uint32_t)(0x11b691e4), (EAX));
L_11b41f8a:;
  /* 11b41f8a cmp dword ptr [0x11b691f4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b691f4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b41f91 je 0x11b41f9d */
  if (C.zf) goto L_11b41f9d;
  /* 11b41f93 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b41f95 call dword ptr [0x11b6a334] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a334))), 0x11b41f9bu);
  /* 11b41f9b jmp 0x11b41f8a */
  goto L_11b41f8a;
L_11b41f9d:;
  /* 11b41f9d cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b41fa1 je 0x11b41fe1 */
  if (C.zf) goto L_11b41fe1;
  /* 11b41fa3 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b41fa7 je 0x11b41fc1 */
  if (C.zf) goto L_11b41fc1;
  /* 11b41fa9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b41fac push ecx */
  push32((uint32_t)(ECX));
  /* 11b41fad mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b41fb0 push edx */
  push32((uint32_t)(EDX));
  /* 11b41fb1 call 0x11b42340 */
  push32(0x11b41fb6u); f_11b42340();
  /* 11b41fb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b41fb9 mov dword ptr [ebp - 0xa8], eax */
  w32((uint32_t)(EBP + -0xa8), (EAX));
  /* 11b41fbf jmp 0x11b41fd3 */
  goto L_11b41fd3;
L_11b41fc1:;
  /* 11b41fc1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b41fc4 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b41fc7 mov ecx, dword ptr [eax + 0x11b663b4] */
  ECX = (r32((uint32_t)(EAX + 0x11b663b4)));
  /* 11b41fcd mov dword ptr [ebp - 0xa8], ecx */
  w32((uint32_t)(EBP + -0xa8), (ECX));
L_11b41fd3:;
  /* 11b41fd3 mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 11b41fd9 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11b41fdc jmp 0x11b4231b */
  goto L_11b4231b;
L_11b41fe1:;
  /* 11b41fe1 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
  /* 11b41fe8 mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11b41fef cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b41ff3 je 0x11b42313 */
  if (C.zf) goto L_11b42313;
  /* 11b41ff9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b41ffc movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b41fff cmp ecx, 0x4c */
  { uint32_t _a=(ECX),_b=(0x4cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b42002 jne 0x11b42224 */
  if (!C.zf) goto L_11b42224;
  /* 11b42008 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b4200b movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11b4200f cmp eax, 0x43 */
  { uint32_t _a=(EAX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b42012 jne 0x11b42224 */
  if (!C.zf) goto L_11b42224;
  /* 11b42018 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b4201b movsx edx, byte ptr [ecx + 2] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX + 0x2))));
  /* 11b4201f cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b42022 jne 0x11b42224 */
  if (!C.zf) goto L_11b42224;
  /* 11b42028 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b4202b mov dword ptr [ebp - 0x9c], eax */
  w32((uint32_t)(EBP + -0x9c), (EAX));
L_11b42031:;
  /* 11b42031 push 0x11b63518 */
  push32((uint32_t)(0x11b63518u));
  /* 11b42036 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11b4203c push ecx */
  push32((uint32_t)(ECX));
  /* 11b4203d call 0x11b461b0 */
  push32(0x11b42042u); f_11b461b0();
  /* 11b42042 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b42045 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 11b4204b cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b42052 je 0x11b4207d */
  if (C.zf) goto L_11b4207d;
  /* 11b42054 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11b4205a sub edx, dword ptr [ebp - 0x9c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x9c))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b42060 mov dword ptr [ebp - 0xa4], edx */
  w32((uint32_t)(EBP + -0xa4), (EDX));
  /* 11b42066 cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4206d je 0x11b4207d */
  if (C.zf) goto L_11b4207d;
  /* 11b4206f mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11b42075 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b42078 cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4207b jne 0x11b420a3 */
  if (!C.zf) goto L_11b420a3;
L_11b4207d:;
  /* 11b4207d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b42081 je 0x11b4209c */
  if (C.zf) goto L_11b4209c;
  /* 11b42083 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11b42085 call 0x11b3a9a0 */
  push32(0x11b4208au); f_11b3a9a0();
  /* 11b4208a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4208d mov edx, dword ptr [0x11b691e4] */
  EDX = (r32((uint32_t)(0x11b691e4)));
  /* 11b42093 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b42096 mov dword ptr [0x11b691e4], edx */
  w32((uint32_t)(0x11b691e4), (EDX));
L_11b4209c:;
  /* 11b4209c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b4209e jmp 0x11b4233b */
  goto L_11b4233b;
L_11b420a3:;
  /* 11b420a3 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11b420aa jmp 0x11b420b5 */
  goto L_11b420b5;
L_11b420ac:;
  /* 11b420ac mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b420af add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b420b2 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
L_11b420b5:;
  /* 11b420b5 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b420b9 jg 0x11b42103 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b42103;
  /* 11b420bb mov ecx, dword ptr [ebp - 0xa4] */
  ECX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11b420c1 push ecx */
  push32((uint32_t)(ECX));
  /* 11b420c2 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11b420c8 push edx */
  push32((uint32_t)(EDX));
  /* 11b420c9 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b420cc imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b420cf mov ecx, dword ptr [eax + 0x11b663b0] */
  ECX = (r32((uint32_t)(EAX + 0x11b663b0)));
  /* 11b420d5 push ecx */
  push32((uint32_t)(ECX));
  /* 11b420d6 call 0x11b46170 */
  push32(0x11b420dbu); f_11b46170();
  /* 11b420db add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b420de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b420e0 jne 0x11b42101 */
  if (!C.zf) goto L_11b42101;
  /* 11b420e2 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b420e5 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b420e8 mov eax, dword ptr [edx + 0x11b663b0] */
  EAX = (r32((uint32_t)(EDX + 0x11b663b0)));
  /* 11b420ee push eax */
  push32((uint32_t)(EAX));
  /* 11b420ef call 0x11b3b830 */
  push32(0x11b420f4u); f_11b3b830();
  /* 11b420f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b420f7 cmp dword ptr [ebp - 0xa4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b420fd jne 0x11b42101 */
  if (!C.zf) goto L_11b42101;
  /* 11b420ff jmp 0x11b42103 */
  goto L_11b42103;
L_11b42101:;
  /* 11b42101 jmp 0x11b420ac */
  goto L_11b420ac;
L_11b42103:;
  /* 11b42103 push 0x11b63514 */
  push32((uint32_t)(0x11b63514u));
  /* 11b42108 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11b4210e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b42111 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
  /* 11b42117 mov edx, dword ptr [ebp - 0xa0] */
  EDX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11b4211d push edx */
  push32((uint32_t)(EDX));
  /* 11b4211e call 0x11b46130 */
  push32(0x11b42123u); f_11b46130();
  /* 11b42123 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b42126 mov dword ptr [ebp - 0xa4], eax */
  w32((uint32_t)(EBP + -0xa4), (EAX));
  /* 11b4212c cmp dword ptr [ebp - 0xa4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b42133 jne 0x11b42169 */
  if (!C.zf) goto L_11b42169;
  /* 11b42135 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11b4213b movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b4213e cmp ecx, 0x3b */
  { uint32_t _a=(ECX),_b=(0x3bu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b42141 je 0x11b42169 */
  if (C.zf) goto L_11b42169;
  /* 11b42143 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b42147 je 0x11b42162 */
  if (C.zf) goto L_11b42162;
  /* 11b42149 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11b4214b call 0x11b3a9a0 */
  push32(0x11b42150u); f_11b3a9a0();
  /* 11b42150 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b42153 mov edx, dword ptr [0x11b691e4] */
  EDX = (r32((uint32_t)(0x11b691e4)));
  /* 11b42159 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b4215c mov dword ptr [0x11b691e4], edx */
  w32((uint32_t)(0x11b691e4), (EDX));
L_11b42162:;
  /* 11b42162 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b42164 jmp 0x11b4233b */
  goto L_11b4233b;
L_11b42169:;
  /* 11b42169 cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4216d jg 0x11b421ba */
  if ((!C.zf&&C.sf==C.of)) goto L_11b421ba;
  /* 11b4216f mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11b42175 push eax */
  push32((uint32_t)(EAX));
  /* 11b42176 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11b4217c push ecx */
  push32((uint32_t)(ECX));
  /* 11b4217d lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 11b42183 push edx */
  push32((uint32_t)(EDX));
  /* 11b42184 call 0x11b3c220 */
  push32(0x11b42189u); f_11b3c220();
  /* 11b42189 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4218c mov eax, dword ptr [ebp - 0xa4] */
  EAX = (r32((uint32_t)(EBP + -0xa4)));
  /* 11b42192 mov byte ptr [ebp + eax - 0x98], 0 */
  w8((uint32_t)(EBP + EAX*1 + -0x98), (0x0u));
  /* 11b4219a lea ecx, [ebp - 0x98] */
  ECX = ((uint32_t)(EBP + -0x98));
  /* 11b421a0 push ecx */
  push32((uint32_t)(ECX));
  /* 11b421a1 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b421a4 push edx */
  push32((uint32_t)(EDX));
  /* 11b421a5 call 0x11b42340 */
  push32(0x11b421aau); f_11b42340();
  /* 11b421aa add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b421ad test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b421af je 0x11b421ba */
  if (C.zf) goto L_11b421ba;
  /* 11b421b1 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b421b4 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b421b7 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11b421ba:;
  /* 11b421ba mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11b421c0 add ecx, dword ptr [ebp - 0xa4] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xa4))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b421c6 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11b421cc mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11b421d2 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11b421d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b421d7 je 0x11b421e8 */
  if (C.zf) goto L_11b421e8;
  /* 11b421d9 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11b421df add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b421e2 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
L_11b421e8:;
  /* 11b421e8 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11b421ee movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11b421f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b421f3 jne 0x11b42031 */
  if (!C.zf) goto L_11b42031;
  /* 11b421f9 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b421fd je 0x11b4220c */
  if (C.zf) goto L_11b4220c;
  /* 11b421ff call 0x11b424e0 */
  push32(0x11b42204u); f_11b424e0();
  /* 11b42204 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 11b4220a jmp 0x11b42216 */
  goto L_11b42216;
L_11b4220c:;
  /* 11b4220c mov dword ptr [ebp - 0xac], 0 */
  w32((uint32_t)(EBP + -0xac), (0x0u));
L_11b42216:;
  /* 11b42216 mov ecx, dword ptr [ebp - 0xac] */
  ECX = (r32((uint32_t)(EBP + -0xac)));
  /* 11b4221c mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b4221f jmp 0x11b42311 */
  goto L_11b42311;
L_11b42224:;
  /* 11b42224 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b42227 push edx */
  push32((uint32_t)(EDX));
  /* 11b42228 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b4222a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b4222c lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11b42232 push eax */
  push32((uint32_t)(EAX));
  /* 11b42233 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b42236 push ecx */
  push32((uint32_t)(ECX));
  /* 11b42237 call 0x11b425e0 */
  push32(0x11b4223cu); f_11b425e0();
  /* 11b4223c add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4223f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b42242 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b42246 je 0x11b42311 */
  if (C.zf) goto L_11b42311;
  /* 11b4224c mov dword ptr [ebp - 0x10], 0 */
  w32((uint32_t)(EBP + -0x10), (0x0u));
  /* 11b42253 jmp 0x11b4225e */
  goto L_11b4225e;
L_11b42255:;
  /* 11b42255 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b42258 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4225b mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11b4225e:;
  /* 11b4225e cmp dword ptr [ebp - 0x10], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b42262 jg 0x11b422c0 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b422c0;
  /* 11b42264 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b42268 je 0x11b422be */
  if (C.zf) goto L_11b422be;
  /* 11b4226a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b4226d imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b42270 mov ecx, dword ptr [eax + 0x11b663b4] */
  ECX = (r32((uint32_t)(EAX + 0x11b663b4)));
  /* 11b42276 push ecx */
  push32((uint32_t)(ECX));
  /* 11b42277 lea edx, [ebp - 0x98] */
  EDX = ((uint32_t)(EBP + -0x98));
  /* 11b4227d push edx */
  push32((uint32_t)(EDX));
  /* 11b4227e call 0x11b40930 */
  push32(0x11b42283u); f_11b40930();
  /* 11b42283 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b42286 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b42288 je 0x11b422b5 */
  if (C.zf) goto L_11b422b5;
  /* 11b4228a lea eax, [ebp - 0x98] */
  EAX = ((uint32_t)(EBP + -0x98));
  /* 11b42290 push eax */
  push32((uint32_t)(EAX));
  /* 11b42291 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b42294 push ecx */
  push32((uint32_t)(ECX));
  /* 11b42295 call 0x11b42340 */
  push32(0x11b4229au); f_11b42340();
  /* 11b4229a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4229d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b4229f je 0x11b422ac */
  if (C.zf) goto L_11b422ac;
  /* 11b422a1 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b422a4 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b422a7 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 11b422aa jmp 0x11b422b3 */
  goto L_11b422b3;
L_11b422ac:;
  /* 11b422ac mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
L_11b422b3:;
  /* 11b422b3 jmp 0x11b422be */
  goto L_11b422be;
L_11b422b5:;
  /* 11b422b5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b422b8 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b422bb mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_11b422be:;
  /* 11b422be jmp 0x11b42255 */
  goto L_11b42255;
L_11b422c0:;
  /* 11b422c0 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b422c4 je 0x11b422eb */
  if (C.zf) goto L_11b422eb;
  /* 11b422c6 call 0x11b424e0 */
  push32(0x11b422cbu); f_11b424e0();
  /* 11b422cb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b422ce push 2 */
  push32((uint32_t)(0x2u));
  /* 11b422d0 mov ecx, dword ptr [0x11b663b4] */
  ECX = (r32((uint32_t)(0x11b663b4)));
  /* 11b422d6 push ecx */
  push32((uint32_t)(ECX));
  /* 11b422d7 call 0x11b38770 */
  push32(0x11b422dcu); f_11b38770();
  /* 11b422dc add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b422df mov dword ptr [0x11b663b4], 0 */
  w32((uint32_t)(0x11b663b4), (0x0u));
  /* 11b422e9 jmp 0x11b42311 */
  goto L_11b42311;
L_11b422eb:;
  /* 11b422eb cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b422ef je 0x11b422fe */
  if (C.zf) goto L_11b422fe;
  /* 11b422f1 call 0x11b424e0 */
  push32(0x11b422f6u); f_11b424e0();
  /* 11b422f6 mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 11b422fc jmp 0x11b42308 */
  goto L_11b42308;
L_11b422fe:;
  /* 11b422fe mov dword ptr [ebp - 0xb0], 0 */
  w32((uint32_t)(EBP + -0xb0), (0x0u));
L_11b42308:;
  /* 11b42308 mov edx, dword ptr [ebp - 0xb0] */
  EDX = (r32((uint32_t)(EBP + -0xb0)));
  /* 11b4230e mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
L_11b42311:;
  /* 11b42311 jmp 0x11b4231b */
  goto L_11b4231b;
L_11b42313:;
  /* 11b42313 call 0x11b424e0 */
  push32(0x11b42318u); f_11b424e0();
  /* 11b42318 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11b4231b:;
  /* 11b4231b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4231f je 0x11b42338 */
  if (C.zf) goto L_11b42338;
  /* 11b42321 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11b42323 call 0x11b3a9a0 */
  push32(0x11b42328u); f_11b3a9a0();
  /* 11b42328 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4232b mov eax, dword ptr [0x11b691e4] */
  EAX = (r32((uint32_t)(0x11b691e4)));
  /* 11b42330 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b42333 mov dword ptr [0x11b691e4], eax */
  w32((uint32_t)(0x11b691e4), (EAX));
L_11b42338:;
  /* 11b42338 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
L_11b4233b:;
  /* 11b4233b mov esp, ebp */
  ESP = (EBP);
  /* 11b4233d pop ebp */
  EBP = (pop32());
  /* 11b4233e ret  */
  ESPCHK(0x11b41f50u, _esp0);
  ESP += 4; return;
}

/* FUN_10012340 @ 0x11b42340 (403 bytes, 117 insns) */
void f_11b42340(void) {
  FTRACE(0x11b42340u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b42340 push ebp */
  push32((uint32_t)(EBP));
  /* 11b42341 mov ebp, esp */
  EBP = (ESP);
  /* 11b42343 sub esp, 0xa8 */
  { uint32_t _a=(ESP),_b=(0xa8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b42349 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4234c push eax */
  push32((uint32_t)(EAX));
  /* 11b4234d lea ecx, [ebp - 0xa0] */
  ECX = ((uint32_t)(EBP + -0xa0));
  /* 11b42353 push ecx */
  push32((uint32_t)(ECX));
  /* 11b42354 lea edx, [ebp - 0xa8] */
  EDX = ((uint32_t)(EBP + -0xa8));
  /* 11b4235a push edx */
  push32((uint32_t)(EDX));
  /* 11b4235b lea eax, [ebp - 0x9c] */
  EAX = ((uint32_t)(EBP + -0x9c));
  /* 11b42361 push eax */
  push32((uint32_t)(EAX));
  /* 11b42362 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b42365 push ecx */
  push32((uint32_t)(ECX));
  /* 11b42366 call 0x11b425e0 */
  push32(0x11b4236bu); f_11b425e0();
  /* 11b4236b add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4236e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b42370 jne 0x11b42379 */
  if (!C.zf) goto L_11b42379;
  /* 11b42372 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b42374 jmp 0x11b424cf */
  goto L_11b424cf;
L_11b42379:;
  /* 11b42379 push 0x132 */
  push32((uint32_t)(0x132u));
  /* 11b4237e push 0x11b6351c */
  push32((uint32_t)(0x11b6351cu));
  /* 11b42383 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b42385 lea edx, [ebp - 0x9c] */
  EDX = ((uint32_t)(EBP + -0x9c));
  /* 11b4238b push edx */
  push32((uint32_t)(EDX));
  /* 11b4238c call 0x11b3b830 */
  push32(0x11b42391u); f_11b3b830();
  /* 11b42391 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b42394 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b42397 push eax */
  push32((uint32_t)(EAX));
  /* 11b42398 call 0x11b37ce0 */
  push32(0x11b4239du); f_11b37ce0();
  /* 11b4239d add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b423a0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b423a3 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b423a7 jne 0x11b423b0 */
  if (!C.zf) goto L_11b423b0;
  /* 11b423a9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b423ab jmp 0x11b424cf */
  goto L_11b424cf;
L_11b423b0:;
  /* 11b423b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b423b3 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b423b6 mov ecx, dword ptr [eax + 0x11b663b4] */
  ECX = (r32((uint32_t)(EAX + 0x11b663b4)));
  /* 11b423bc mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11b423bf mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b423c2 mov eax, dword ptr [edx*4 + 0x11b67dc0] */
  EAX = (r32((uint32_t)(EDX*4 + 0x11b67dc0)));
  /* 11b423c9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b423cc push 6 */
  push32((uint32_t)(0x6u));
  /* 11b423ce mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b423d1 imul ecx, ecx, 6 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x6u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b423d4 add ecx, 0x11b67e14 */
  { uint32_t _a=(ECX),_b=(0x11b67e14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b423da push ecx */
  push32((uint32_t)(ECX));
  /* 11b423db lea edx, [ebp - 0x14] */
  EDX = ((uint32_t)(EBP + -0x14));
  /* 11b423de push edx */
  push32((uint32_t)(EDX));
  /* 11b423df call 0x11b403a0 */
  push32(0x11b423e4u); f_11b403a0();
  /* 11b423e4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b423e7 mov eax, dword ptr [0x11b67dd8] */
  EAX = (r32((uint32_t)(0x11b67dd8)));
  /* 11b423ec mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11b423ef lea ecx, [ebp - 0x9c] */
  ECX = ((uint32_t)(EBP + -0x9c));
  /* 11b423f5 push ecx */
  push32((uint32_t)(ECX));
  /* 11b423f6 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b423f9 push edx */
  push32((uint32_t)(EDX));
  /* 11b423fa call 0x11b3b9b0 */
  push32(0x11b423ffu); f_11b3b9b0();
  /* 11b423ff add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b42402 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b42405 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b42408 mov dword ptr [ecx + 0x11b663b4], eax */
  w32((uint32_t)(ECX + 0x11b663b4), (EAX));
  /* 11b4240e mov edx, dword ptr [ebp - 0xa8] */
  EDX = (r32((uint32_t)(EBP + -0xa8)));
  /* 11b42414 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b4241a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4241d mov dword ptr [eax*4 + 0x11b67dc0], edx */
  w32((uint32_t)(EAX*4 + 0x11b67dc0), (EDX));
  /* 11b42424 push 6 */
  push32((uint32_t)(0x6u));
  /* 11b42426 lea ecx, [ebp - 0xa8] */
  ECX = ((uint32_t)(EBP + -0xa8));
  /* 11b4242c push ecx */
  push32((uint32_t)(ECX));
  /* 11b4242d mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b42430 imul edx, edx, 6 */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0x6u); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b42433 add edx, 0x11b67e14 */
  { uint32_t _a=(EDX),_b=(0x11b67e14u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b42439 push edx */
  push32((uint32_t)(EDX));
  /* 11b4243a call 0x11b403a0 */
  push32(0x11b4243fu); f_11b403a0();
  /* 11b4243f add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b42442 cmp dword ptr [ebp + 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b42446 jne 0x11b42453 */
  if (!C.zf) goto L_11b42453;
  /* 11b42448 mov eax, dword ptr [ebp - 0xa0] */
  EAX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11b4244e mov dword ptr [0x11b67dd8], eax */
  w32((uint32_t)(0x11b67dd8), (EAX));
L_11b42453:;
  /* 11b42453 cmp dword ptr [ebp + 8], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b42457 jne 0x11b42465 */
  if (!C.zf) goto L_11b42465;
  /* 11b42459 mov ecx, dword ptr [ebp - 0xa0] */
  ECX = (r32((uint32_t)(EBP + -0xa0)));
  /* 11b4245f mov dword ptr [0x11b67ddc], ecx */
  w32((uint32_t)(0x11b67ddc), (ECX));
L_11b42465:;
  /* 11b42465 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b42468 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b4246b call dword ptr [edx + 0x11b663b8] */
  call_ind((uint32_t)(r32((uint32_t)(EDX + 0x11b663b8))), 0x11b42471u);
  /* 11b42471 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b42473 je 0x11b424ac */
  if (C.zf) goto L_11b424ac;
  /* 11b42475 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b42478 imul eax, eax, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xcu); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b4247b mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b4247e mov dword ptr [eax + 0x11b663b4], ecx */
  w32((uint32_t)(EAX + 0x11b663b4), (ECX));
  /* 11b42484 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b42486 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b42489 push edx */
  push32((uint32_t)(EDX));
  /* 11b4248a call 0x11b38770 */
  push32(0x11b4248fu); f_11b38770();
  /* 11b4248f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b42492 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b42495 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b42498 mov dword ptr [eax*4 + 0x11b67dc0], ecx */
  w32((uint32_t)(EAX*4 + 0x11b67dc0), (ECX));
  /* 11b4249f mov edx, dword ptr [ebp - 0x18] */
  EDX = (r32((uint32_t)(EBP + -0x18)));
  /* 11b424a2 mov dword ptr [0x11b67dd8], edx */
  w32((uint32_t)(0x11b67dd8), (EDX));
  /* 11b424a8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b424aa jmp 0x11b424cf */
  goto L_11b424cf;
L_11b424ac:;
  /* 11b424ac cmp dword ptr [ebp - 0xc], 0x11b662a0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x11b662a0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b424b3 je 0x11b424c3 */
  if (C.zf) goto L_11b424c3;
  /* 11b424b5 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b424b7 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b424ba push eax */
  push32((uint32_t)(EAX));
  /* 11b424bb call 0x11b38770 */
  push32(0x11b424c0u); f_11b38770();
  /* 11b424c0 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b424c3:;
  /* 11b424c3 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b424c6 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b424c9 mov eax, dword ptr [ecx + 0x11b663b4] */
  EAX = (r32((uint32_t)(ECX + 0x11b663b4)));
L_11b424cf:;
  /* 11b424cf mov esp, ebp */
  ESP = (EBP);
  /* 11b424d1 pop ebp */
  EBP = (pop32());
  /* 11b424d2 ret  */
  ESPCHK(0x11b42340u, _esp0);
  ESP += 4; return;
}

/* FUN_100124e0 @ 0x11b424e0 (256 bytes, 72 insns) */
void f_11b424e0(void) {
  FTRACE(0x11b424e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b424e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b424e1 mov ebp, esp */
  EBP = (ESP);
  /* 11b424e3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b424e6 mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11b424ed cmp dword ptr [0x11b663b4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b663b4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b424f4 jne 0x11b42514 */
  if (!C.zf) goto L_11b42514;
  /* 11b424f6 push 0x167 */
  push32((uint32_t)(0x167u));
  /* 11b424fb push 0x11b6351c */
  push32((uint32_t)(0x11b6351cu));
  /* 11b42500 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b42502 push 0x351 */
  push32((uint32_t)(0x351u));
  /* 11b42507 call 0x11b37ce0 */
  push32(0x11b4250cu); f_11b37ce0();
  /* 11b4250c add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4250f mov dword ptr [0x11b663b4], eax */
  w32((uint32_t)(0x11b663b4), (EAX));
L_11b42514:;
  /* 11b42514 mov eax, dword ptr [0x11b663b4] */
  EAX = (r32((uint32_t)(0x11b663b4)));
  /* 11b42519 mov byte ptr [eax], 0 */
  w8((uint32_t)(EAX), (0x0u));
  /* 11b4251c mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11b42523 jmp 0x11b4252e */
  goto L_11b4252e;
L_11b42525:;
  /* 11b42525 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b42528 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4252b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11b4252e:;
  /* 11b4252e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b42531 imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b42534 mov eax, dword ptr [edx + 0x11b663b4] */
  EAX = (r32((uint32_t)(EDX + 0x11b663b4)));
  /* 11b4253a push eax */
  push32((uint32_t)(EAX));
  /* 11b4253b push 0x11b63528 */
  push32((uint32_t)(0x11b63528u));
  /* 11b42540 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b42543 imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b42546 mov edx, dword ptr [ecx + 0x11b663b0] */
  EDX = (r32((uint32_t)(ECX + 0x11b663b0)));
  /* 11b4254c push edx */
  push32((uint32_t)(EDX));
  /* 11b4254d push 3 */
  push32((uint32_t)(0x3u));
  /* 11b4254f mov eax, dword ptr [0x11b663b4] */
  EAX = (r32((uint32_t)(0x11b663b4)));
  /* 11b42554 push eax */
  push32((uint32_t)(EAX));
  /* 11b42555 call 0x11b42780 */
  push32(0x11b4255au); f_11b42780();
  /* 11b4255a add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4255d cmp dword ptr [ebp - 4], 5 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b42561 jge 0x11b425a9 */
  if ((C.sf==C.of)) goto L_11b425a9;
  /* 11b42563 push 0x11b63514 */
  push32((uint32_t)(0x11b63514u));
  /* 11b42568 mov ecx, dword ptr [0x11b663b4] */
  ECX = (r32((uint32_t)(0x11b663b4)));
  /* 11b4256e push ecx */
  push32((uint32_t)(ECX));
  /* 11b4256f call 0x11b3b9c0 */
  push32(0x11b42574u); f_11b3b9c0();
  /* 11b42574 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b42577 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4257a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4257d imul edx, edx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(EDX)*(int64_t)(int32_t)(0xcu); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b42580 mov eax, dword ptr [edx + 0x11b663b4] */
  EAX = (r32((uint32_t)(EDX + 0x11b663b4)));
  /* 11b42586 push eax */
  push32((uint32_t)(EAX));
  /* 11b42587 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4258a imul ecx, ecx, 0xc */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xcu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b4258d mov edx, dword ptr [ecx + 0x11b663b4] */
  EDX = (r32((uint32_t)(ECX + 0x11b663b4)));
  /* 11b42593 push edx */
  push32((uint32_t)(EDX));
  /* 11b42594 call 0x11b40930 */
  push32(0x11b42599u); f_11b40930();
  /* 11b42599 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4259c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b4259e je 0x11b425a7 */
  if (C.zf) goto L_11b425a7;
  /* 11b425a0 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
L_11b425a7:;
  /* 11b425a7 jmp 0x11b425d7 */
  goto L_11b425d7;
L_11b425a9:;
  /* 11b425a9 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b425ad jne 0x11b425b6 */
  if (!C.zf) goto L_11b425b6;
  /* 11b425af mov eax, dword ptr [0x11b663b4] */
  EAX = (r32((uint32_t)(0x11b663b4)));
  /* 11b425b4 jmp 0x11b425dc */
  goto L_11b425dc;
L_11b425b6:;
  /* 11b425b6 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b425b8 mov eax, dword ptr [0x11b663b4] */
  EAX = (r32((uint32_t)(0x11b663b4)));
  /* 11b425bd push eax */
  push32((uint32_t)(EAX));
  /* 11b425be call 0x11b38770 */
  push32(0x11b425c3u); f_11b38770();
  /* 11b425c3 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b425c6 mov dword ptr [0x11b663b4], 0 */
  w32((uint32_t)(0x11b663b4), (0x0u));
  /* 11b425d0 mov eax, dword ptr [0x11b663cc] */
  EAX = (r32((uint32_t)(0x11b663cc)));
  /* 11b425d5 jmp 0x11b425dc */
  goto L_11b425dc;
L_11b425d7:;
  /* 11b425d7 jmp 0x11b42525 */
  goto L_11b42525;
L_11b425dc:;
  /* 11b425dc mov esp, ebp */
  ESP = (EBP);
  /* 11b425de pop ebp */
  EBP = (pop32());
  /* 11b425df ret  */
  ESPCHK(0x11b424e0u, _esp0);
  ESP += 4; return;
}

/* FUN_100125e0 @ 0x11b425e0 (388 bytes, 115 insns) */
void f_11b425e0(void) {
  FTRACE(0x11b425e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b425e0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b425e1 mov ebp, esp */
  EBP = (ESP);
  /* 11b425e3 sub esp, 0x88 */
  { uint32_t _a=(ESP),_b=(0x88u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b425e9 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b425ed jne 0x11b425f6 */
  if (!C.zf) goto L_11b425f6;
  /* 11b425ef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b425f1 jmp 0x11b42760 */
  goto L_11b42760;
L_11b425f6:;
  /* 11b425f6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b425f9 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b425fc cmp ecx, 0x43 */
  { uint32_t _a=(ECX),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b425ff jne 0x11b42650 */
  if (!C.zf) goto L_11b42650;
  /* 11b42601 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b42604 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11b42608 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b4260a jne 0x11b42650 */
  if (!C.zf) goto L_11b42650;
  /* 11b4260c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b4260f mov byte ptr [ecx], 0x43 */
  w8((uint32_t)(ECX), (0x43u));
  /* 11b42612 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b42615 mov byte ptr [edx + 1], 0 */
  w8((uint32_t)(EDX + 0x1), (0x0u));
  /* 11b42619 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4261d je 0x11b42639 */
  if (C.zf) goto L_11b42639;
  /* 11b4261f mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b42622 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 11b42627 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b4262a mov word ptr [ecx + 2], 0 */
  w16((uint32_t)(ECX + 0x2), (0x0u));
  /* 11b42630 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b42633 mov word ptr [edx + 4], 0 */
  w16((uint32_t)(EDX + 0x4), (0x0u));
L_11b42639:;
  /* 11b42639 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4263d je 0x11b42648 */
  if (C.zf) goto L_11b42648;
  /* 11b4263f mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b42642 mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
L_11b42648:;
  /* 11b42648 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b4264b jmp 0x11b42760 */
  goto L_11b42760;
L_11b42650:;
  /* 11b42650 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b42653 push ecx */
  push32((uint32_t)(ECX));
  /* 11b42654 push 0x11b66328 */
  push32((uint32_t)(0x11b66328u));
  /* 11b42659 call 0x11b40930 */
  push32(0x11b4265eu); f_11b40930();
  /* 11b4265e add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b42661 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b42663 je 0x11b42718 */
  if (C.zf) goto L_11b42718;
  /* 11b42669 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4266c push edx */
  push32((uint32_t)(EDX));
  /* 11b4266d push 0x11b662a4 */
  push32((uint32_t)(0x11b662a4u));
  /* 11b42672 call 0x11b40930 */
  push32(0x11b42677u); f_11b40930();
  /* 11b42677 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4267a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b4267c je 0x11b42718 */
  if (C.zf) goto L_11b42718;
  /* 11b42682 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b42685 push eax */
  push32((uint32_t)(EAX));
  /* 11b42686 lea ecx, [ebp - 0x88] */
  ECX = ((uint32_t)(EBP + -0x88));
  /* 11b4268c push ecx */
  push32((uint32_t)(ECX));
  /* 11b4268d call 0x11b427d0 */
  push32(0x11b42692u); f_11b427d0();
  /* 11b42692 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b42695 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b42697 je 0x11b426a0 */
  if (C.zf) goto L_11b426a0;
  /* 11b42699 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b4269b jmp 0x11b42760 */
  goto L_11b42760;
L_11b426a0:;
  /* 11b426a0 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 11b426a6 push edx */
  push32((uint32_t)(EDX));
  /* 11b426a7 push 0x11b67de4 */
  push32((uint32_t)(0x11b67de4u));
  /* 11b426ac lea eax, [ebp - 0x88] */
  EAX = ((uint32_t)(EBP + -0x88));
  /* 11b426b2 push eax */
  push32((uint32_t)(EAX));
  /* 11b426b3 call 0x11b461f0 */
  push32(0x11b426b8u); f_11b461f0();
  /* 11b426b8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b426bb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b426bd jne 0x11b426c6 */
  if (!C.zf) goto L_11b426c6;
  /* 11b426bf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b426c1 jmp 0x11b42760 */
  goto L_11b42760;
L_11b426c6:;
  /* 11b426c6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b426c8 mov cx, word ptr [0x11b67de8] */
  CX = (r16((uint32_t)(0x11b67de8)));
  /* 11b426cf mov dword ptr [0x11b67dec], ecx */
  w32((uint32_t)(0x11b67dec), (ECX));
  /* 11b426d5 lea edx, [ebp - 0x88] */
  EDX = ((uint32_t)(EBP + -0x88));
  /* 11b426db push edx */
  push32((uint32_t)(EDX));
  /* 11b426dc push 0x11b66328 */
  push32((uint32_t)(0x11b66328u));
  /* 11b426e1 call 0x11b42930 */
  push32(0x11b426e6u); f_11b42930();
  /* 11b426e6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b426e9 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b426ec movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b426ef test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b426f1 je 0x11b42706 */
  if (C.zf) goto L_11b42706;
  /* 11b426f3 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b426f6 push edx */
  push32((uint32_t)(EDX));
  /* 11b426f7 push 0x11b662a4 */
  push32((uint32_t)(0x11b662a4u));
  /* 11b426fc call 0x11b3b9b0 */
  push32(0x11b42701u); f_11b3b9b0();
  /* 11b42701 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b42704 jmp 0x11b42718 */
  goto L_11b42718;
L_11b42706:;
  /* 11b42706 push 0x11b66328 */
  push32((uint32_t)(0x11b66328u));
  /* 11b4270b push 0x11b662a4 */
  push32((uint32_t)(0x11b662a4u));
  /* 11b42710 call 0x11b3b9b0 */
  push32(0x11b42715u); f_11b3b9b0();
  /* 11b42715 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b42718:;
  /* 11b42718 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4271c je 0x11b42731 */
  if (C.zf) goto L_11b42731;
  /* 11b4271e push 6 */
  push32((uint32_t)(0x6u));
  /* 11b42720 push 0x11b67de4 */
  push32((uint32_t)(0x11b67de4u));
  /* 11b42725 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b42728 push eax */
  push32((uint32_t)(EAX));
  /* 11b42729 call 0x11b403a0 */
  push32(0x11b4272eu); f_11b403a0();
  /* 11b4272e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b42731:;
  /* 11b42731 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b42735 je 0x11b4274a */
  if (C.zf) goto L_11b4274a;
  /* 11b42737 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b42739 push 0x11b67dec */
  push32((uint32_t)(0x11b67decu));
  /* 11b4273e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b42741 push ecx */
  push32((uint32_t)(ECX));
  /* 11b42742 call 0x11b403a0 */
  push32(0x11b42747u); f_11b403a0();
  /* 11b42747 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b4274a:;
  /* 11b4274a push 0x11b66328 */
  push32((uint32_t)(0x11b66328u));
  /* 11b4274f mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b42752 push edx */
  push32((uint32_t)(EDX));
  /* 11b42753 call 0x11b3b9b0 */
  push32(0x11b42758u); f_11b3b9b0();
  /* 11b42758 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4275b mov eax, 0x11b66328 */
  EAX = (0x11b66328u);
L_11b42760:;
  /* 11b42760 mov esp, ebp */
  ESP = (EBP);
  /* 11b42762 pop ebp */
  EBP = (pop32());
  /* 11b42763 ret  */
  ESPCHK(0x11b425e0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012770 @ 0x11b42770 (7 bytes, 5 insns) */
void f_11b42770(void) {
  FTRACE(0x11b42770u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b42770 push ebp */
  push32((uint32_t)(EBP));
  /* 11b42771 mov ebp, esp */
  EBP = (ESP);
  /* 11b42773 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b42775 pop ebp */
  EBP = (pop32());
  /* 11b42776 ret  */
  ESPCHK(0x11b42770u, _esp0);
  ESP += 4; return;
}

/* __strcats @ 0x11b42780 (79 bytes, 28 insns) */
void f_11b42780(void) {
  FTRACE(0x11b42780u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b42780 push ebp */
  push32((uint32_t)(EBP));
  /* 11b42781 mov ebp, esp */
  EBP = (ESP);
  /* 11b42783 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b42786 lea eax, [ebp + 0x10] */
  EAX = ((uint32_t)(EBP + 0x10));
  /* 11b42789 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b4278c mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11b42793 jmp 0x11b4279e */
  goto L_11b4279e;
L_11b42795:;
  /* 11b42795 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b42798 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4279b mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11b4279e:;
  /* 11b4279e mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b427a1 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b427a4 jge 0x11b427c4 */
  if ((C.sf==C.of)) goto L_11b427c4;
  /* 11b427a6 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b427a9 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b427ac mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b427af mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b427b2 mov edx, dword ptr [ecx - 4] */
  EDX = (r32((uint32_t)(ECX + -0x4)));
  /* 11b427b5 push edx */
  push32((uint32_t)(EDX));
  /* 11b427b6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b427b9 push eax */
  push32((uint32_t)(EAX));
  /* 11b427ba call 0x11b3b9c0 */
  push32(0x11b427bfu); f_11b3b9c0();
  /* 11b427bf add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b427c2 jmp 0x11b42795 */
  goto L_11b42795;
L_11b427c4:;
  /* 11b427c4 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b427cb mov esp, ebp */
  ESP = (EBP);
  /* 11b427cd pop ebp */
  EBP = (pop32());
  /* 11b427ce ret  */
  ESPCHK(0x11b42780u, _esp0);
  ESP += 4; return;
}

/* FUN_100127d0 @ 0x11b427d0 (349 bytes, 122 insns) */
void f_11b427d0(void) {
  FTRACE(0x11b427d0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b427d0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b427d1 mov ebp, esp */
  EBP = (ESP);
  /* 11b427d3 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b427d6 push 0x88 */
  push32((uint32_t)(0x88u));
  /* 11b427db push 0 */
  push32((uint32_t)(0x0u));
  /* 11b427dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b427e0 push eax */
  push32((uint32_t)(EAX));
  /* 11b427e1 call 0x11b3d530 */
  push32(0x11b427e6u); f_11b3d530();
  /* 11b427e6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b427e9 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b427ec movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11b427ef test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b427f1 jne 0x11b427fa */
  if (!C.zf) goto L_11b427fa;
  /* 11b427f3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b427f5 jmp 0x11b42929 */
  goto L_11b42929;
L_11b427fa:;
  /* 11b427fa mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b427fd movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b42800 cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b42803 jne 0x11b42830 */
  if (!C.zf) goto L_11b42830;
  /* 11b42805 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b42808 movsx eax, byte ptr [edx + 1] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x1))));
  /* 11b4280c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b4280e je 0x11b42830 */
  if (C.zf) goto L_11b42830;
  /* 11b42810 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b42813 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b42816 push ecx */
  push32((uint32_t)(ECX));
  /* 11b42817 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4281a add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b42820 push edx */
  push32((uint32_t)(EDX));
  /* 11b42821 call 0x11b3b9b0 */
  push32(0x11b42826u); f_11b3b9b0();
  /* 11b42826 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b42829 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b4282b jmp 0x11b42929 */
  goto L_11b42929;
L_11b42830:;
  /* 11b42830 mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b42837 jmp 0x11b42842 */
  goto L_11b42842;
L_11b42839:;
  /* 11b42839 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4283c add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4283f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b42842:;
  /* 11b42842 push 0x11b6352c */
  push32((uint32_t)(0x11b6352cu));
  /* 11b42847 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b4284a push ecx */
  push32((uint32_t)(ECX));
  /* 11b4284b call 0x11b46130 */
  push32(0x11b42850u); f_11b46130();
  /* 11b42850 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b42853 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b42856 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4285a jne 0x11b42864 */
  if (!C.zf) goto L_11b42864;
  /* 11b4285c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b4285f jmp 0x11b42929 */
  goto L_11b42929;
L_11b42864:;
  /* 11b42864 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b42867 add edx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4286a mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11b4286c mov byte ptr [ebp - 8], al */
  w8((uint32_t)(EBP + -0x8), (AL));
  /* 11b4286f cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b42873 jne 0x11b4289a */
  if (!C.zf) goto L_11b4289a;
  /* 11b42875 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b42879 jge 0x11b4289a */
  if ((C.sf==C.of)) goto L_11b4289a;
  /* 11b4287b movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11b4287f cmp ecx, 0x2e */
  { uint32_t _a=(ECX),_b=(0x2eu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b42882 je 0x11b4289a */
  if (C.zf) goto L_11b4289a;
  /* 11b42884 mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b42887 push edx */
  push32((uint32_t)(EDX));
  /* 11b42888 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b4288b push eax */
  push32((uint32_t)(EAX));
  /* 11b4288c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4288f push ecx */
  push32((uint32_t)(ECX));
  /* 11b42890 call 0x11b3c220 */
  push32(0x11b42895u); f_11b3c220();
  /* 11b42895 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b42898 jmp 0x11b42900 */
  goto L_11b42900;
L_11b4289a:;
  /* 11b4289a cmp dword ptr [ebp - 4], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4289e jne 0x11b428c8 */
  if (!C.zf) goto L_11b428c8;
  /* 11b428a0 cmp dword ptr [ebp - 0xc], 0x40 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b428a4 jge 0x11b428c8 */
  if ((C.sf==C.of)) goto L_11b428c8;
  /* 11b428a6 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11b428aa cmp edx, 0x5f */
  { uint32_t _a=(EDX),_b=(0x5fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b428ad je 0x11b428c8 */
  if (C.zf) goto L_11b428c8;
  /* 11b428af mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b428b2 push eax */
  push32((uint32_t)(EAX));
  /* 11b428b3 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b428b6 push ecx */
  push32((uint32_t)(ECX));
  /* 11b428b7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b428ba add edx, 0x40 */
  { uint32_t _a=(EDX),_b=(0x40u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b428bd push edx */
  push32((uint32_t)(EDX));
  /* 11b428be call 0x11b3c220 */
  push32(0x11b428c3u); f_11b3c220();
  /* 11b428c3 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b428c6 jmp 0x11b42900 */
  goto L_11b42900;
L_11b428c8:;
  /* 11b428c8 cmp dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b428cc jne 0x11b428fb */
  if (!C.zf) goto L_11b428fb;
  /* 11b428ce movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11b428d2 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b428d4 je 0x11b428df */
  if (C.zf) goto L_11b428df;
  /* 11b428d6 movsx ecx, byte ptr [ebp - 8] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11b428da cmp ecx, 0x2c */
  { uint32_t _a=(ECX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b428dd jne 0x11b428fb */
  if (!C.zf) goto L_11b428fb;
L_11b428df:;
  /* 11b428df mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b428e2 push edx */
  push32((uint32_t)(EDX));
  /* 11b428e3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b428e6 push eax */
  push32((uint32_t)(EAX));
  /* 11b428e7 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b428ea add ecx, 0x80 */
  { uint32_t _a=(ECX),_b=(0x80u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b428f0 push ecx */
  push32((uint32_t)(ECX));
  /* 11b428f1 call 0x11b3c220 */
  push32(0x11b428f6u); f_11b3c220();
  /* 11b428f6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b428f9 jmp 0x11b42900 */
  goto L_11b42900;
L_11b428fb:;
  /* 11b428fb or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b428fe jmp 0x11b42929 */
  goto L_11b42929;
L_11b42900:;
  /* 11b42900 movsx edx, byte ptr [ebp - 8] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11b42904 cmp edx, 0x2c */
  { uint32_t _a=(EDX),_b=(0x2cu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b42907 jne 0x11b4290b */
  if (!C.zf) goto L_11b4290b;
  /* 11b42909 jmp 0x11b42927 */
  goto L_11b42927;
L_11b4290b:;
  /* 11b4290b movsx eax, byte ptr [ebp - 8] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x8))));
  /* 11b4290f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b42911 jne 0x11b42915 */
  if (!C.zf) goto L_11b42915;
  /* 11b42913 jmp 0x11b42927 */
  goto L_11b42927;
L_11b42915:;
  /* 11b42915 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11b42918 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b4291b lea eax, [edx + ecx + 1] */
  EAX = ((uint32_t)(EDX + ECX*1 + 0x1));
  /* 11b4291f mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11b42922 jmp 0x11b42839 */
  goto L_11b42839;
L_11b42927:;
  /* 11b42927 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b42929:;
  /* 11b42929 mov esp, ebp */
  ESP = (EBP);
  /* 11b4292b pop ebp */
  EBP = (pop32());
  /* 11b4292c ret  */
  ESPCHK(0x11b427d0u, _esp0);
  ESP += 4; return;
}

/* ___lc_lctostr @ 0x11b42930 (101 bytes, 36 insns) */
void f_11b42930(void) {
  FTRACE(0x11b42930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b42930 push ebp */
  push32((uint32_t)(EBP));
  /* 11b42931 mov ebp, esp */
  EBP = (ESP);
  /* 11b42933 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b42936 push eax */
  push32((uint32_t)(EAX));
  /* 11b42937 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4293a push ecx */
  push32((uint32_t)(ECX));
  /* 11b4293b call 0x11b3b9b0 */
  push32(0x11b42940u); f_11b3b9b0();
  /* 11b42940 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b42943 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b42946 movsx eax, byte ptr [edx + 0x40] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX + 0x40))));
  /* 11b4294a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b4294c je 0x11b42968 */
  if (C.zf) goto L_11b42968;
  /* 11b4294e mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b42951 add ecx, 0x40 */
  { uint32_t _a=(ECX),_b=(0x40u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b42954 push ecx */
  push32((uint32_t)(ECX));
  /* 11b42955 push 0x11b63534 */
  push32((uint32_t)(0x11b63534u));
  /* 11b4295a push 2 */
  push32((uint32_t)(0x2u));
  /* 11b4295c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4295f push edx */
  push32((uint32_t)(EDX));
  /* 11b42960 call 0x11b42780 */
  push32(0x11b42965u); f_11b42780();
  /* 11b42965 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b42968:;
  /* 11b42968 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b4296b movsx ecx, byte ptr [eax + 0x80] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x80))));
  /* 11b42972 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b42974 je 0x11b42993 */
  if (C.zf) goto L_11b42993;
  /* 11b42976 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b42979 add edx, 0x80 */
  { uint32_t _a=(EDX),_b=(0x80u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4297f push edx */
  push32((uint32_t)(EDX));
  /* 11b42980 push 0x11b63530 */
  push32((uint32_t)(0x11b63530u));
  /* 11b42985 push 2 */
  push32((uint32_t)(0x2u));
  /* 11b42987 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b4298a push eax */
  push32((uint32_t)(EAX));
  /* 11b4298b call 0x11b42780 */
  push32(0x11b42990u); f_11b42780();
  /* 11b42990 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b42993:;
  /* 11b42993 pop ebp */
  EBP = (pop32());
  /* 11b42994 ret  */
  ESPCHK(0x11b42930u, _esp0);
  ESP += 4; return;
}

/* FUN_100129a0 @ 0x11b429a0 (727 bytes, 263 insns) */
void f_11b429a0(void) {
  FTRACE(0x11b429a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b429a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b429a1 mov ebp, esp */
  EBP = (ESP);
  /* 11b429a3 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11b429a5 push 0x11b63538 */
  push32((uint32_t)(0x11b63538u));
  /* 11b429aa push 0x11b44b98 */
  push32((uint32_t)(0x11b44b98u));
  /* 11b429af mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11b429b5 push eax */
  push32((uint32_t)(EAX));
  /* 11b429b6 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11b429bd add esp, -0x24 */
  { uint32_t _a=(ESP),_b=(0xffffffdcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b429c0 push ebx */
  push32((uint32_t)(EBX));
  /* 11b429c1 push esi */
  push32((uint32_t)(ESI));
  /* 11b429c2 push edi */
  push32((uint32_t)(EDI));
  /* 11b429c3 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11b429c6 cmp dword ptr [0x11b67df0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11b67df0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b429cd jne 0x11b42a26 */
  if (!C.zf) goto L_11b42a26;
  /* 11b429cf push 0 */
  push32((uint32_t)(0x0u));
  /* 11b429d1 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b429d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 11b429d5 push 0x11b634c4 */
  push32((uint32_t)(0x11b634c4u));
  /* 11b429da push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11b429df push 0 */
  push32((uint32_t)(0x0u));
  /* 11b429e1 call dword ptr [0x11b6a320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a320))), 0x11b429e7u);
  /* 11b429e7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b429e9 je 0x11b429f7 */
  if (C.zf) goto L_11b429f7;
  /* 11b429eb mov dword ptr [0x11b67df0], 1 */
  w32((uint32_t)(0x11b67df0), (0x1u));
  /* 11b429f5 jmp 0x11b42a26 */
  goto L_11b42a26;
L_11b429f7:;
  /* 11b429f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b429f9 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b429fb push 1 */
  push32((uint32_t)(0x1u));
  /* 11b429fd push 0x11b634c0 */
  push32((uint32_t)(0x11b634c0u));
  /* 11b42a02 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11b42a07 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b42a09 call dword ptr [0x11b6a324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a324))), 0x11b42a0fu);
  /* 11b42a0f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b42a11 je 0x11b42a1f */
  if (C.zf) goto L_11b42a1f;
  /* 11b42a13 mov dword ptr [0x11b67df0], 2 */
  w32((uint32_t)(0x11b67df0), (0x2u));
  /* 11b42a1d jmp 0x11b42a26 */
  goto L_11b42a26;
L_11b42a1f:;
  /* 11b42a1f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b42a21 jmp 0x11b42c91 */
  goto L_11b42c91;
L_11b42a26:;
  /* 11b42a26 cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b42a2a jle 0x11b42a3f */
  if ((C.zf||C.sf!=C.of)) goto L_11b42a3f;
  /* 11b42a2c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b42a2f push eax */
  push32((uint32_t)(EAX));
  /* 11b42a30 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b42a33 push ecx */
  push32((uint32_t)(ECX));
  /* 11b42a34 call 0x11b42cb0 */
  push32(0x11b42a39u); f_11b42cb0();
  /* 11b42a39 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b42a3c mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_11b42a3f:;
  /* 11b42a3f cmp dword ptr [0x11b67df0], 2 */
  { uint32_t _a=(r32((uint32_t)(0x11b67df0))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b42a46 jne 0x11b42a6b */
  if (!C.zf) goto L_11b42a6b;
  /* 11b42a48 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b42a4b push edx */
  push32((uint32_t)(EDX));
  /* 11b42a4c mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b42a4f push eax */
  push32((uint32_t)(EAX));
  /* 11b42a50 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b42a53 push ecx */
  push32((uint32_t)(ECX));
  /* 11b42a54 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b42a57 push edx */
  push32((uint32_t)(EDX));
  /* 11b42a58 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b42a5b push eax */
  push32((uint32_t)(EAX));
  /* 11b42a5c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b42a5f push ecx */
  push32((uint32_t)(ECX));
  /* 11b42a60 call dword ptr [0x11b6a324] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a324))), 0x11b42a66u);
  /* 11b42a66 jmp 0x11b42c91 */
  goto L_11b42c91;
L_11b42a6b:;
  /* 11b42a6b cmp dword ptr [0x11b67df0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b67df0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b42a72 jne 0x11b42c8f */
  if (!C.zf) goto L_11b42c8f;
  /* 11b42a78 cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b42a7c jne 0x11b42a87 */
  if (!C.zf) goto L_11b42a87;
  /* 11b42a7e mov edx, dword ptr [0x11b67dd8] */
  EDX = (r32((uint32_t)(0x11b67dd8)));
  /* 11b42a84 mov dword ptr [ebp + 0x20], edx */
  w32((uint32_t)(EBP + 0x20), (EDX));
L_11b42a87:;
  /* 11b42a87 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b42a89 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b42a8b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b42a8e push eax */
  push32((uint32_t)(EAX));
  /* 11b42a8f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b42a92 push ecx */
  push32((uint32_t)(ECX));
  /* 11b42a93 mov edx, dword ptr [ebp + 0x24] */
  EDX = (r32((uint32_t)(EBP + 0x24)));
  /* 11b42a96 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b42a98 sbb edx, edx */
  { uint32_t _a=(EDX),_b=(EDX),_r=_a-_b-C.cf; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b42a9a and edx, 8 */
  { uint32_t _r=(EDX)&(0x8u); EDX = (_r); fl_logic(_r,32); }
  /* 11b42a9d add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b42aa0 push edx */
  push32((uint32_t)(EDX));
  /* 11b42aa1 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11b42aa4 push eax */
  push32((uint32_t)(EAX));
  /* 11b42aa5 call dword ptr [0x11b6a340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a340))), 0x11b42aabu);
  /* 11b42aab mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11b42aae cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b42ab2 jne 0x11b42abb */
  if (!C.zf) goto L_11b42abb;
  /* 11b42ab4 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b42ab6 jmp 0x11b42c91 */
  goto L_11b42c91;
L_11b42abb:;
  /* 11b42abb mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b42ac2 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b42ac5 shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11b42ac7 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b42aca and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11b42acc call 0x11b3bba0 */
  push32(0x11b42ad1u); f_11b3bba0();
  /* 11b42ad1 mov dword ptr [ebp - 0x30], esp */
  w32((uint32_t)(EBP + -0x30), (ESP));
  /* 11b42ad4 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11b42ad7 mov ecx, dword ptr [ebp - 0x30] */
  ECX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b42ada mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11b42add mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11b42ae4 jmp 0x11b42afd */
  goto L_11b42afd;
  /* 11b42ae6 mov eax, 1 */
  EAX = (0x1u);
  /* 11b42aeb ret  */
  ESPCHK(0x11b429a0u, _esp0);
  ESP += 4; return;
  /* 11b42aec mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11b42aef mov dword ptr [ebp - 0x24], 0 */
  w32((uint32_t)(EBP + -0x24), (0x0u));
  /* 11b42af6 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11b42afd:;
  /* 11b42afd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b42b01 jne 0x11b42b0a */
  if (!C.zf) goto L_11b42b0a;
  /* 11b42b03 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b42b05 jmp 0x11b42c91 */
  goto L_11b42c91;
L_11b42b0a:;
  /* 11b42b0a mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b42b0d push edx */
  push32((uint32_t)(EDX));
  /* 11b42b0e mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b42b11 push eax */
  push32((uint32_t)(EAX));
  /* 11b42b12 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b42b15 push ecx */
  push32((uint32_t)(ECX));
  /* 11b42b16 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b42b19 push edx */
  push32((uint32_t)(EDX));
  /* 11b42b1a push 1 */
  push32((uint32_t)(0x1u));
  /* 11b42b1c mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11b42b1f push eax */
  push32((uint32_t)(EAX));
  /* 11b42b20 call dword ptr [0x11b6a340] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a340))), 0x11b42b26u);
  /* 11b42b26 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b42b28 jne 0x11b42b31 */
  if (!C.zf) goto L_11b42b31;
  /* 11b42b2a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b42b2c jmp 0x11b42c91 */
  goto L_11b42c91;
L_11b42b31:;
  /* 11b42b31 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b42b33 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b42b35 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b42b38 push ecx */
  push32((uint32_t)(ECX));
  /* 11b42b39 mov edx, dword ptr [ebp - 0x24] */
  EDX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b42b3c push edx */
  push32((uint32_t)(EDX));
  /* 11b42b3d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b42b40 push eax */
  push32((uint32_t)(EAX));
  /* 11b42b41 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b42b44 push ecx */
  push32((uint32_t)(ECX));
  /* 11b42b45 call dword ptr [0x11b6a320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a320))), 0x11b42b4bu);
  /* 11b42b4b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11b42b4e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b42b52 jne 0x11b42b5b */
  if (!C.zf) goto L_11b42b5b;
  /* 11b42b54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b42b56 jmp 0x11b42c91 */
  goto L_11b42c91;
L_11b42b5b:;
  /* 11b42b5b mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b42b5e and edx, 0x400 */
  { uint32_t _r=(EDX)&(0x400u); EDX = (_r); fl_logic(_r,32); }
  /* 11b42b64 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b42b66 je 0x11b42bab */
  if (C.zf) goto L_11b42bab;
  /* 11b42b68 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b42b6c je 0x11b42ba6 */
  if (C.zf) goto L_11b42ba6;
  /* 11b42b6e mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b42b71 cmp eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b42b74 jle 0x11b42b7d */
  if ((C.zf||C.sf!=C.of)) goto L_11b42b7d;
  /* 11b42b76 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b42b78 jmp 0x11b42c91 */
  goto L_11b42c91;
L_11b42b7d:;
  /* 11b42b7d mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b42b80 push ecx */
  push32((uint32_t)(ECX));
  /* 11b42b81 mov edx, dword ptr [ebp + 0x18] */
  EDX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b42b84 push edx */
  push32((uint32_t)(EDX));
  /* 11b42b85 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b42b88 push eax */
  push32((uint32_t)(EAX));
  /* 11b42b89 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b42b8c push ecx */
  push32((uint32_t)(ECX));
  /* 11b42b8d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b42b90 push edx */
  push32((uint32_t)(EDX));
  /* 11b42b91 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b42b94 push eax */
  push32((uint32_t)(EAX));
  /* 11b42b95 call dword ptr [0x11b6a320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a320))), 0x11b42b9bu);
  /* 11b42b9b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b42b9d jne 0x11b42ba6 */
  if (!C.zf) goto L_11b42ba6;
  /* 11b42b9f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b42ba1 jmp 0x11b42c91 */
  goto L_11b42c91;
L_11b42ba6:;
  /* 11b42ba6 jmp 0x11b42c8a */
  goto L_11b42c8a;
L_11b42bab:;
  /* 11b42bab mov ecx, dword ptr [ebp - 0x28] */
  ECX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b42bae mov dword ptr [ebp - 0x2c], ecx */
  w32((uint32_t)(EBP + -0x2c), (ECX));
  /* 11b42bb1 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11b42bb8 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b42bbb shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 11b42bbd add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b42bc0 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11b42bc2 call 0x11b3bba0 */
  push32(0x11b42bc7u); f_11b3bba0();
  /* 11b42bc7 mov dword ptr [ebp - 0x34], esp */
  w32((uint32_t)(EBP + -0x34), (ESP));
  /* 11b42bca mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11b42bcd mov edx, dword ptr [ebp - 0x34] */
  EDX = (r32((uint32_t)(EBP + -0x34)));
  /* 11b42bd0 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
  /* 11b42bd3 mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
  /* 11b42bda jmp 0x11b42bf3 */
  goto L_11b42bf3;
  /* 11b42bdc mov eax, 1 */
  EAX = (0x1u);
  /* 11b42be1 ret  */
  ESPCHK(0x11b429a0u, _esp0);
  ESP += 4; return;
  /* 11b42be2 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11b42be5 mov dword ptr [ebp - 0x20], 0 */
  w32((uint32_t)(EBP + -0x20), (0x0u));
  /* 11b42bec mov dword ptr [ebp - 4], 0xffffffff */
  w32((uint32_t)(EBP + -0x4), (0xffffffffu));
L_11b42bf3:;
  /* 11b42bf3 cmp dword ptr [ebp - 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b42bf7 jne 0x11b42c00 */
  if (!C.zf) goto L_11b42c00;
  /* 11b42bf9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b42bfb jmp 0x11b42c91 */
  goto L_11b42c91;
L_11b42c00:;
  /* 11b42c00 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b42c03 push eax */
  push32((uint32_t)(EAX));
  /* 11b42c04 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b42c07 push ecx */
  push32((uint32_t)(ECX));
  /* 11b42c08 mov edx, dword ptr [ebp - 0x1c] */
  EDX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b42c0b push edx */
  push32((uint32_t)(EDX));
  /* 11b42c0c mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b42c0f push eax */
  push32((uint32_t)(EAX));
  /* 11b42c10 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b42c13 push ecx */
  push32((uint32_t)(ECX));
  /* 11b42c14 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b42c17 push edx */
  push32((uint32_t)(EDX));
  /* 11b42c18 call dword ptr [0x11b6a320] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a320))), 0x11b42c1eu);
  /* 11b42c1e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b42c20 jne 0x11b42c26 */
  if (!C.zf) goto L_11b42c26;
  /* 11b42c22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b42c24 jmp 0x11b42c91 */
  goto L_11b42c91;
L_11b42c26:;
  /* 11b42c26 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b42c2a jne 0x11b42c5a */
  if (!C.zf) goto L_11b42c5a;
  /* 11b42c2c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b42c2e push 0 */
  push32((uint32_t)(0x0u));
  /* 11b42c30 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b42c32 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b42c34 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b42c37 push eax */
  push32((uint32_t)(EAX));
  /* 11b42c38 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b42c3b push ecx */
  push32((uint32_t)(ECX));
  /* 11b42c3c push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11b42c41 mov edx, dword ptr [ebp + 0x20] */
  EDX = (r32((uint32_t)(EBP + 0x20)));
  /* 11b42c44 push edx */
  push32((uint32_t)(EDX));
  /* 11b42c45 call dword ptr [0x11b6a380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a380))), 0x11b42c4bu);
  /* 11b42c4b mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11b42c4e cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b42c52 jne 0x11b42c58 */
  if (!C.zf) goto L_11b42c58;
  /* 11b42c54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b42c56 jmp 0x11b42c91 */
  goto L_11b42c91;
L_11b42c58:;
  /* 11b42c58 jmp 0x11b42c8a */
  goto L_11b42c8a;
L_11b42c5a:;
  /* 11b42c5a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b42c5c push 0 */
  push32((uint32_t)(0x0u));
  /* 11b42c5e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b42c61 push eax */
  push32((uint32_t)(EAX));
  /* 11b42c62 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b42c65 push ecx */
  push32((uint32_t)(ECX));
  /* 11b42c66 mov edx, dword ptr [ebp - 0x2c] */
  EDX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b42c69 push edx */
  push32((uint32_t)(EDX));
  /* 11b42c6a mov eax, dword ptr [ebp - 0x20] */
  EAX = (r32((uint32_t)(EBP + -0x20)));
  /* 11b42c6d push eax */
  push32((uint32_t)(EAX));
  /* 11b42c6e push 0x220 */
  push32((uint32_t)(0x220u));
  /* 11b42c73 mov ecx, dword ptr [ebp + 0x20] */
  ECX = (r32((uint32_t)(EBP + 0x20)));
  /* 11b42c76 push ecx */
  push32((uint32_t)(ECX));
  /* 11b42c77 call dword ptr [0x11b6a380] */
  call_ind((uint32_t)(r32((uint32_t)(0x11b6a380))), 0x11b42c7du);
  /* 11b42c7d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11b42c80 cmp dword ptr [ebp - 0x28], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x28))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b42c84 jne 0x11b42c8a */
  if (!C.zf) goto L_11b42c8a;
  /* 11b42c86 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b42c88 jmp 0x11b42c91 */
  goto L_11b42c91;
L_11b42c8a:;
  /* 11b42c8a mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11b42c8d jmp 0x11b42c91 */
  goto L_11b42c91;
L_11b42c8f:;
  /* 11b42c8f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11b42c91:;
  /* 11b42c91 lea esp, [ebp - 0x40] */
  ESP = ((uint32_t)(EBP + -0x40));
  /* 11b42c94 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b42c97 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11b42c9e pop edi */
  EDI = (pop32());
  /* 11b42c9f pop esi */
  ESI = (pop32());
  /* 11b42ca0 pop ebx */
  EBX = (pop32());
  /* 11b42ca1 mov esp, ebp */
  ESP = (EBP);
  /* 11b42ca3 pop ebp */
  EBP = (pop32());
  /* 11b42ca4 ret  */
  ESPCHK(0x11b429a0u, _esp0);
  ESP += 4; return;
}

/* FUN_10012cb0 @ 0x11b42cb0 (80 bytes, 32 insns) */
void f_11b42cb0(void) {
  FTRACE(0x11b42cb0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b42cb0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b42cb1 mov ebp, esp */
  EBP = (ESP);
  /* 11b42cb3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b42cb6 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b42cb9 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b42cbc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b42cbf mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11b42cc2:;
  /* 11b42cc2 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b42cc5 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b42cc8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b42ccb mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b42cce test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b42cd0 je 0x11b42ce7 */
  if (C.zf) goto L_11b42ce7;
  /* 11b42cd2 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b42cd5 movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11b42cd8 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b42cda je 0x11b42ce7 */
  if (C.zf) goto L_11b42ce7;
  /* 11b42cdc mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b42cdf add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b42ce2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b42ce5 jmp 0x11b42cc2 */
  goto L_11b42cc2;
L_11b42ce7:;
  /* 11b42ce7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b42cea movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11b42ced test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b42cef jne 0x11b42cf9 */
  if (!C.zf) goto L_11b42cf9;
  /* 11b42cf1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b42cf4 sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b42cf7 jmp 0x11b42cfc */
  goto L_11b42cfc;
L_11b42cf9:;
  /* 11b42cf9 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_11b42cfc:;
  /* 11b42cfc mov esp, ebp */
  ESP = (EBP);
  /* 11b42cfe pop ebp */
  EBP = (pop32());
  /* 11b42cff ret  */
  ESPCHK(0x11b42cb0u, _esp0);
  ESP += 4; return;
}

/* ___addl @ 0x11b42d00 (62 bytes, 23 insns) */
void f_11b42d00(void) {
  FTRACE(0x11b42d00u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b42d00 push ebp */
  push32((uint32_t)(EBP));
  /* 11b42d01 mov ebp, esp */
  EBP = (ESP);
  /* 11b42d03 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b42d06 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11b42d0d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b42d10 add eax, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b42d13 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b42d16 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b42d19 cmp ecx, dword ptr [ebp + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b42d1c jb 0x11b42d26 */
  if (C.cf) goto L_11b42d26;
  /* 11b42d1e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b42d21 cmp edx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b42d24 jae 0x11b42d2f */
  if (!C.cf) goto L_11b42d2f;
L_11b42d26:;
  /* 11b42d26 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b42d29 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b42d2c mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_11b42d2f:;
  /* 11b42d2f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b42d32 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b42d35 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11b42d37 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b42d3a mov esp, ebp */
  ESP = (EBP);
  /* 11b42d3c pop ebp */
  EBP = (pop32());
  /* 11b42d3d ret  */
  ESPCHK(0x11b42d00u, _esp0);
  ESP += 4; return;
}

/* ___add_12 @ 0x11b42d40 (173 bytes, 66 insns) */
void f_11b42d40(void) {
  FTRACE(0x11b42d40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b42d40 push ebp */
  push32((uint32_t)(EBP));
  /* 11b42d41 mov ebp, esp */
  EBP = (ESP);
  /* 11b42d43 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b42d46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b42d49 push eax */
  push32((uint32_t)(EAX));
  /* 11b42d4a mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b42d4d mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b42d4f push edx */
  push32((uint32_t)(EDX));
  /* 11b42d50 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b42d53 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b42d55 push ecx */
  push32((uint32_t)(ECX));
  /* 11b42d56 call 0x11b42d00 */
  push32(0x11b42d5bu); f_11b42d00();
  /* 11b42d5b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b42d5e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b42d61 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b42d65 je 0x11b42d97 */
  if (C.zf) goto L_11b42d97;
  /* 11b42d67 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b42d6a add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b42d6d push edx */
  push32((uint32_t)(EDX));
  /* 11b42d6e push 1 */
  push32((uint32_t)(0x1u));
  /* 11b42d70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b42d73 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b42d76 push ecx */
  push32((uint32_t)(ECX));
  /* 11b42d77 call 0x11b42d00 */
  push32(0x11b42d7cu); f_11b42d00();
  /* 11b42d7c add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b42d7f mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b42d82 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b42d86 je 0x11b42d97 */
  if (C.zf) goto L_11b42d97;
  /* 11b42d88 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b42d8b mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11b42d8e add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b42d91 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b42d94 mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
L_11b42d97:;
  /* 11b42d97 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b42d9a add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b42d9d push edx */
  push32((uint32_t)(EDX));
  /* 11b42d9e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b42da1 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11b42da4 push ecx */
  push32((uint32_t)(ECX));
  /* 11b42da5 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b42da8 mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b42dab push eax */
  push32((uint32_t)(EAX));
  /* 11b42dac call 0x11b42d00 */
  push32(0x11b42db1u); f_11b42d00();
  /* 11b42db1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b42db4 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b42db7 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b42dbb je 0x11b42dcc */
  if (C.zf) goto L_11b42dcc;
  /* 11b42dbd mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b42dc0 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11b42dc3 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b42dc6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b42dc9 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
L_11b42dcc:;
  /* 11b42dcc mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b42dcf add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b42dd2 push ecx */
  push32((uint32_t)(ECX));
  /* 11b42dd3 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b42dd6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11b42dd9 push eax */
  push32((uint32_t)(EAX));
  /* 11b42dda mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b42ddd mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11b42de0 push edx */
  push32((uint32_t)(EDX));
  /* 11b42de1 call 0x11b42d00 */
  push32(0x11b42de6u); f_11b42d00();
  /* 11b42de6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b42de9 mov esp, ebp */
  ESP = (EBP);
  /* 11b42deb pop ebp */
  EBP = (pop32());
  /* 11b42dec ret  */
  ESPCHK(0x11b42d40u, _esp0);
  ESP += 4; return;
}

/* ___shl_12 @ 0x11b42df0 (96 bytes, 37 insns) */
void f_11b42df0(void) {
  FTRACE(0x11b42df0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b42df0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b42df1 mov ebp, esp */
  EBP = (ESP);
  /* 11b42df3 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b42df6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b42df9 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b42dfb and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11b42e01 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b42e03 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b42e05 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b42e07 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b42e0a mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b42e0d mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b42e10 and eax, 0x80000000 */
  { uint32_t _r=(EAX)&(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 11b42e15 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b42e17 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b42e19 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b42e1b mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b42e1e mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b42e21 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b42e23 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11b42e25 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b42e28 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11b42e2a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b42e2d mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b42e30 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11b42e32 or edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11b42e35 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b42e38 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11b42e3b mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b42e3e mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11b42e41 shl edx, 1 */
  EDX = (sh_shl((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11b42e43 or edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11b42e46 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b42e49 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11b42e4c mov esp, ebp */
  ESP = (EBP);
  /* 11b42e4e pop ebp */
  EBP = (pop32());
  /* 11b42e4f ret  */
  ESPCHK(0x11b42df0u, _esp0);
  ESP += 4; return;
}

/* ___shr_12 @ 0x11b42e50 (99 bytes, 37 insns) */
void f_11b42e50(void) {
  FTRACE(0x11b42e50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b42e50 push ebp */
  push32((uint32_t)(EBP));
  /* 11b42e51 mov ebp, esp */
  EBP = (ESP);
  /* 11b42e53 sub esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b42e56 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b42e59 mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 11b42e5c and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11b42e5f neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b42e61 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b42e63 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11b42e69 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b42e6c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b42e6f mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b42e72 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11b42e75 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b42e77 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b42e79 and eax, 0x80000000 */
  { uint32_t _r=(EAX)&(0x80000000u); EAX = (_r); fl_logic(_r,32); }
  /* 11b42e7e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b42e81 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b42e84 mov edx, dword ptr [ecx + 8] */
  EDX = (r32((uint32_t)(ECX + 0x8)));
  /* 11b42e87 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11b42e89 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b42e8c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11b42e8f mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b42e92 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b42e95 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11b42e97 or edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 11b42e9a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b42e9d mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11b42ea0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b42ea3 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b42ea5 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 11b42ea7 or edx, dword ptr [ebp - 4] */
  { uint32_t _r=(EDX)|(r32((uint32_t)(EBP + -0x4))); EDX = (_r); fl_logic(_r,32); }
  /* 11b42eaa mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b42ead mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11b42eaf mov esp, ebp */
  ESP = (EBP);
  /* 11b42eb1 pop ebp */
  EBP = (pop32());
  /* 11b42eb2 ret  */
  ESPCHK(0x11b42e50u, _esp0);
  ESP += 4; return;
}

/* FUN_10012ec0 @ 0x11b42ec0 (315 bytes, 101 insns) */
void f_11b42ec0(void) {
  FTRACE(0x11b42ec0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b42ec0 push ebp */
  push32((uint32_t)(EBP));
  /* 11b42ec1 mov ebp, esp */
  EBP = (ESP);
  /* 11b42ec3 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b42ec6 mov word ptr [ebp - 0x10], 0x404e */
  w16((uint32_t)(EBP + -0x10), (0x404eu));
  /* 11b42ecc mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b42ecf mov dword ptr [eax], 0 */
  w32((uint32_t)(EAX), (0x0u));
  /* 11b42ed5 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b42ed8 mov dword ptr [ecx + 4], 0 */
  w32((uint32_t)(ECX + 0x4), (0x0u));
  /* 11b42edf mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b42ee2 mov dword ptr [edx + 8], 0 */
  w32((uint32_t)(EDX + 0x8), (0x0u));
  /* 11b42ee9 jmp 0x11b42efd */
  goto L_11b42efd;
L_11b42eeb:;
  /* 11b42eeb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b42eee sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b42ef1 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11b42ef4 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b42ef7 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b42efa mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
L_11b42efd:;
  /* 11b42efd cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b42f01 jbe 0x11b42f77 */
  if ((C.cf||C.zf)) goto L_11b42f77;
  /* 11b42f03 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b42f06 mov eax, dword ptr [edx] */
  EAX = (r32((uint32_t)(EDX)));
  /* 11b42f08 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b42f0b mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 11b42f0e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b42f11 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 11b42f14 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b42f17 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b42f1a push eax */
  push32((uint32_t)(EAX));
  /* 11b42f1b call 0x11b42df0 */
  push32(0x11b42f20u); f_11b42df0();
  /* 11b42f20 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b42f23 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b42f26 push ecx */
  push32((uint32_t)(ECX));
  /* 11b42f27 call 0x11b42df0 */
  push32(0x11b42f2cu); f_11b42df0();
  /* 11b42f2c add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b42f2f lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11b42f32 push edx */
  push32((uint32_t)(EDX));
  /* 11b42f33 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b42f36 push eax */
  push32((uint32_t)(EAX));
  /* 11b42f37 call 0x11b42d40 */
  push32(0x11b42f3cu); f_11b42d40();
  /* 11b42f3c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b42f3f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b42f42 push ecx */
  push32((uint32_t)(ECX));
  /* 11b42f43 call 0x11b42df0 */
  push32(0x11b42f48u); f_11b42df0();
  /* 11b42f48 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b42f4b mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b42f4e movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11b42f51 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11b42f54 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11b42f5b mov dword ptr [ebp - 4], 0 */
  w32((uint32_t)(EBP + -0x4), (0x0u));
  /* 11b42f62 lea ecx, [ebp - 0xc] */
  ECX = ((uint32_t)(EBP + -0xc));
  /* 11b42f65 push ecx */
  push32((uint32_t)(ECX));
  /* 11b42f66 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b42f69 push edx */
  push32((uint32_t)(EDX));
  /* 11b42f6a call 0x11b42d40 */
  push32(0x11b42f6fu); f_11b42d40();
  /* 11b42f6f add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b42f72 jmp 0x11b42eeb */
  goto L_11b42eeb;
L_11b42f77:;
  /* 11b42f77 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b42f7a cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b42f7e jne 0x11b42fc3 */
  if (!C.zf) goto L_11b42fc3;
  /* 11b42f80 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b42f83 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b42f86 shr edx, 0x10 */
  EDX = (sh_shr((uint32_t)(EDX), (0x10u)&0x1f, 32));
  /* 11b42f89 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b42f8c mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 11b42f8f mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b42f92 mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11b42f95 shl edx, 0x10 */
  EDX = (sh_shl((uint32_t)(EDX), (0x10u)&0x1f, 32));
  /* 11b42f98 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b42f9b mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 11b42f9d shr ecx, 0x10 */
  ECX = (sh_shr((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 11b42fa0 or edx, ecx */
  { uint32_t _r=(EDX)|(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 11b42fa2 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b42fa5 mov dword ptr [eax + 4], edx */
  w32((uint32_t)(EAX + 0x4), (EDX));
  /* 11b42fa8 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b42fab mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 11b42fad shl edx, 0x10 */
  EDX = (sh_shl((uint32_t)(EDX), (0x10u)&0x1f, 32));
  /* 11b42fb0 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b42fb3 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 11b42fb5 mov cx, word ptr [ebp - 0x10] */
  CX = (r16((uint32_t)(EBP + -0x10)));
  /* 11b42fb9 sub cx, 0x10 */
  { uint32_t _a=(CX),_b=(0x10u),_r=_a-_b; CX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11b42fbd mov word ptr [ebp - 0x10], cx */
  w16((uint32_t)(EBP + -0x10), (CX));
  /* 11b42fc1 jmp 0x11b42f77 */
  goto L_11b42f77;
L_11b42fc3:;
  /* 11b42fc3 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b42fc6 mov eax, dword ptr [edx + 8] */
  EAX = (r32((uint32_t)(EDX + 0x8)));
  /* 11b42fc9 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11b42fce test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11b42fd0 jne 0x11b42fec */
  if (!C.zf) goto L_11b42fec;
  /* 11b42fd2 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b42fd5 push ecx */
  push32((uint32_t)(ECX));
  /* 11b42fd6 call 0x11b42df0 */
  push32(0x11b42fdbu); f_11b42df0();
  /* 11b42fdb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b42fde mov dx, word ptr [ebp - 0x10] */
  DX = (r16((uint32_t)(EBP + -0x10)));
  /* 11b42fe2 sub dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a-_b; DX = (_r); fl_sub(_a,_b,_r,16); }
  /* 11b42fe6 mov word ptr [ebp - 0x10], dx */
  w16((uint32_t)(EBP + -0x10), (DX));
  /* 11b42fea jmp 0x11b42fc3 */
  goto L_11b42fc3;
L_11b42fec:;
  /* 11b42fec mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b42fef mov cx, word ptr [ebp - 0x10] */
  CX = (r16((uint32_t)(EBP + -0x10)));
  /* 11b42ff3 mov word ptr [eax + 0xa], cx */
  w16((uint32_t)(EAX + 0xa), (CX));
  /* 11b42ff7 mov esp, ebp */
  ESP = (EBP);
  /* 11b42ff9 pop ebp */
  EBP = (pop32());
  /* 11b42ffa ret  */
  ESPCHK(0x11b42ec0u, _esp0);
  ESP += 4; return;
}

/* FUN_10013000 @ 0x11b43000 (2586 bytes, 690 insns) [4 switch table(s)] */
void f_11b43000(void) {
  FTRACE(0x11b43000u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b43000 push ebp */
  push32((uint32_t)(EBP));
  /* 11b43001 mov ebp, esp */
  EBP = (ESP);
  /* 11b43003 sub esp, 0xb4 */
  { uint32_t _a=(ESP),_b=(0xb4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b43009 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11b4300c mov dword ptr [ebp - 0x68], eax */
  w32((uint32_t)(EBP + -0x68), (EAX));
  /* 11b4300f mov word ptr [ebp - 0x1c], 0 */
  w16((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11b43015 mov dword ptr [ebp - 0x74], 1 */
  w32((uint32_t)(EBP + -0x74), (0x1u));
  /* 11b4301c mov dword ptr [ebp - 0x70], 0 */
  w32((uint32_t)(EBP + -0x70), (0x0u));
  /* 11b43023 mov dword ptr [ebp - 0x54], 0 */
  w32((uint32_t)(EBP + -0x54), (0x0u));
  /* 11b4302a mov dword ptr [ebp - 0xc], 0 */
  w32((uint32_t)(EBP + -0xc), (0x0u));
  /* 11b43031 mov dword ptr [ebp - 0x18], 0 */
  w32((uint32_t)(EBP + -0x18), (0x0u));
  /* 11b43038 mov dword ptr [ebp - 0x40], 0 */
  w32((uint32_t)(EBP + -0x40), (0x0u));
  /* 11b4303f mov dword ptr [ebp - 0x78], 0 */
  w32((uint32_t)(EBP + -0x78), (0x0u));
  /* 11b43046 mov dword ptr [ebp - 0x14], 0 */
  w32((uint32_t)(EBP + -0x14), (0x0u));
  /* 11b4304d mov dword ptr [ebp - 0x6c], 0 */
  w32((uint32_t)(EBP + -0x6c), (0x0u));
  /* 11b43054 mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 11b4305b mov dword ptr [ebp - 0x4c], 0 */
  w32((uint32_t)(EBP + -0x4c), (0x0u));
  /* 11b43062 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b43065 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b43068 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4306b mov dword ptr [ebp - 0x64], edx */
  w32((uint32_t)(EBP + -0x64), (EDX));
  /* 11b4306e jmp 0x11b43079 */
  goto L_11b43079;
L_11b43070:;
  /* 11b43070 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b43073 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b43076 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b43079:;
  /* 11b43079 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4307c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11b4307f cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b43082 je 0x11b430a5 */
  if (C.zf) goto L_11b430a5;
  /* 11b43084 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b43087 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b4308a cmp ecx, 9 */
  { uint32_t _a=(ECX),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4308d je 0x11b430a5 */
  if (C.zf) goto L_11b430a5;
  /* 11b4308f mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b43092 movsx eax, byte ptr [edx] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EDX))));
  /* 11b43095 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b43098 je 0x11b430a5 */
  if (C.zf) goto L_11b430a5;
  /* 11b4309a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4309d movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11b430a0 cmp edx, 0xd */
  { uint32_t _a=(EDX),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b430a3 jne 0x11b430a7 */
  if (!C.zf) goto L_11b430a7;
L_11b430a5:;
  /* 11b430a5 jmp 0x11b43070 */
  goto L_11b43070;
L_11b430a7:;
  /* 11b430a7 cmp dword ptr [ebp - 0x4c], 0xa */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4c))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b430ab je 0x11b43808 */
  if (C.zf) goto L_11b43808;
  /* 11b430b1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b430b4 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11b430b6 mov byte ptr [ebp - 0x3c], cl */
  w8((uint32_t)(EBP + -0x3c), (CL));
  /* 11b430b9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b430bc add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b430bf mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b430c2 mov eax, dword ptr [ebp - 0x4c] */
  EAX = (r32((uint32_t)(EBP + -0x4c)));
  /* 11b430c5 mov dword ptr [ebp - 0x80], eax */
  w32((uint32_t)(EBP + -0x80), (EAX));
  /* 11b430c8 cmp dword ptr [ebp - 0x80], 0xb */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x80))),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b430cc ja 0x11b43803 */
  if ((!C.cf&&!C.zf)) goto L_11b43803;
  /* 11b430d2 mov ecx, dword ptr [ebp - 0x80] */
  ECX = (r32((uint32_t)(EBP + -0x80)));
  /* 11b430d5 jmp dword ptr [ecx*4 + 0x11b43a1a] */
  switch (ECX) {
    case 0: goto L_11b430dc;
    case 1: goto L_11b4317a;
    case 2: goto L_11b43230;
    case 3: goto L_11b4329b;
    case 4: goto L_11b433b3;
    case 5: goto L_11b434e5;
    case 6: goto L_11b4355b;
    case 7: goto L_11b43640;
    case 8: goto L_11b435e2;
    case 9: goto L_11b43693;
    case 10: goto L_11b43803;
    case 11: goto L_11b4379f;
    case 12: goto L_11b43209;
    case 13: goto L_11b431f7;
    case 14: goto L_11b43200;
    case 15: goto L_11b4321b;
    default: x86_unimpl("switch@0x11b430d5 out of table"); return;
  }
L_11b430dc:;
  /* 11b430dc movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11b430e0 cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b430e3 jl 0x11b43100 */
  if ((C.sf!=C.of)) goto L_11b43100;
  /* 11b430e5 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11b430e9 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b430ec jg 0x11b43100 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b43100;
  /* 11b430ee mov dword ptr [ebp - 0x4c], 3 */
  w32((uint32_t)(EBP + -0x4c), (0x3u));
  /* 11b430f5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b430f8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b430fb mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b430fe jmp 0x11b43175 */
  goto L_11b43175;
L_11b43100:;
  /* 11b43100 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11b43104 movsx eax, byte ptr [0x11b65de4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11b65de4))));
  /* 11b4310b cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4310d jne 0x11b43118 */
  if (!C.zf) goto L_11b43118;
  /* 11b4310f mov dword ptr [ebp - 0x4c], 5 */
  w32((uint32_t)(EBP + -0x4c), (0x5u));
  /* 11b43116 jmp 0x11b43175 */
  goto L_11b43175;
L_11b43118:;
  /* 11b43118 mov cl, byte ptr [ebp - 0x3c] */
  CL = (r8((uint32_t)(EBP + -0x3c)));
  /* 11b4311b mov byte ptr [ebp - 0x84], cl */
  w8((uint32_t)(EBP + -0x84), (CL));
  /* 11b43121 cmp byte ptr [ebp - 0x84], 0x2b */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x84))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b43128 je 0x11b43147 */
  if (C.zf) goto L_11b43147;
  /* 11b4312a cmp byte ptr [ebp - 0x84], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x84))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b43131 je 0x11b43156 */
  if (C.zf) goto L_11b43156;
  /* 11b43133 cmp byte ptr [ebp - 0x84], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x84))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b4313a je 0x11b4313e */
  if (C.zf) goto L_11b4313e;
  /* 11b4313c jmp 0x11b43165 */
  goto L_11b43165;
L_11b4313e:;
  /* 11b4313e mov dword ptr [ebp - 0x4c], 1 */
  w32((uint32_t)(EBP + -0x4c), (0x1u));
  /* 11b43145 jmp 0x11b43175 */
  goto L_11b43175;
L_11b43147:;
  /* 11b43147 mov dword ptr [ebp - 0x4c], 2 */
  w32((uint32_t)(EBP + -0x4c), (0x2u));
  /* 11b4314e mov word ptr [ebp - 0x1c], 0 */
  w16((uint32_t)(EBP + -0x1c), (0x0u));
  /* 11b43154 jmp 0x11b43175 */
  goto L_11b43175;
L_11b43156:;
  /* 11b43156 mov dword ptr [ebp - 0x4c], 2 */
  w32((uint32_t)(EBP + -0x4c), (0x2u));
  /* 11b4315d mov word ptr [ebp - 0x1c], 0x8000 */
  w16((uint32_t)(EBP + -0x1c), (0x8000u));
  /* 11b43163 jmp 0x11b43175 */
  goto L_11b43175;
L_11b43165:;
  /* 11b43165 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11b4316c mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4316f sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b43172 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11b43175:;
  /* 11b43175 jmp 0x11b43803 */
  goto L_11b43803;
L_11b4317a:;
  /* 11b4317a mov dword ptr [ebp - 0x54], 1 */
  w32((uint32_t)(EBP + -0x54), (0x1u));
  /* 11b43181 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11b43185 cmp eax, 0x31 */
  { uint32_t _a=(EAX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b43188 jl 0x11b431a8 */
  if ((C.sf!=C.of)) goto L_11b431a8;
  /* 11b4318a movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11b4318e cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b43191 jg 0x11b431a8 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b431a8;
  /* 11b43193 mov dword ptr [ebp - 0x4c], 3 */
  w32((uint32_t)(EBP + -0x4c), (0x3u));
  /* 11b4319a mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4319d sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b431a0 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b431a3 jmp 0x11b4322b */
  goto L_11b4322b;
L_11b431a8:;
  /* 11b431a8 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11b431ac movsx ecx, byte ptr [0x11b65de4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11b65de4))));
  /* 11b431b3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b431b5 jne 0x11b431c0 */
  if (!C.zf) goto L_11b431c0;
  /* 11b431b7 mov dword ptr [ebp - 0x4c], 4 */
  w32((uint32_t)(EBP + -0x4c), (0x4u));
  /* 11b431be jmp 0x11b4322b */
  goto L_11b4322b;
L_11b431c0:;
  /* 11b431c0 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11b431c4 mov dword ptr [ebp - 0x88], edx */
  w32((uint32_t)(EBP + -0x88), (EDX));
  /* 11b431ca mov eax, dword ptr [ebp - 0x88] */
  EAX = (r32((uint32_t)(EBP + -0x88)));
  /* 11b431d0 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b431d3 mov dword ptr [ebp - 0x88], eax */
  w32((uint32_t)(EBP + -0x88), (EAX));
  /* 11b431d9 cmp dword ptr [ebp - 0x88], 0x3a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x88))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b431e0 ja 0x11b4321b */
  if ((!C.cf&&!C.zf)) goto L_11b4321b;
  /* 11b431e2 mov edx, dword ptr [ebp - 0x88] */
  EDX = (r32((uint32_t)(EBP + -0x88)));
  /* 11b431e8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b431ea mov cl, byte ptr [edx + 0x11b43a5a] */
  CL = (r8((uint32_t)(EDX + 0x11b43a5a)));
  /* 11b431f0 jmp dword ptr [ecx*4 + 0x11b43a4a] */
  switch (ECX) {
    case 0: goto L_11b43209;
    case 1: goto L_11b431f7;
    case 2: goto L_11b43200;
    case 3: goto L_11b4321b;
    default: x86_unimpl("switch@0x11b431f0 out of table"); return;
  }
L_11b431f7:;
  /* 11b431f7 mov dword ptr [ebp - 0x4c], 1 */
  w32((uint32_t)(EBP + -0x4c), (0x1u));
  /* 11b431fe jmp 0x11b4322b */
  goto L_11b4322b;
L_11b43200:;
  /* 11b43200 mov dword ptr [ebp - 0x4c], 6 */
  w32((uint32_t)(EBP + -0x4c), (0x6u));
  /* 11b43207 jmp 0x11b4322b */
  goto L_11b4322b;
L_11b43209:;
  /* 11b43209 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4320c sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b4320f mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b43212 mov dword ptr [ebp - 0x4c], 0xb */
  w32((uint32_t)(EBP + -0x4c), (0xbu));
  /* 11b43219 jmp 0x11b4322b */
  goto L_11b4322b;
L_11b4321b:;
  /* 11b4321b mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11b43222 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b43225 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b43228 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11b4322b:;
  /* 11b4322b jmp 0x11b43803 */
  goto L_11b43803;
L_11b43230:;
  /* 11b43230 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11b43234 cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b43237 jl 0x11b43254 */
  if ((C.sf!=C.of)) goto L_11b43254;
  /* 11b43239 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11b4323d cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b43240 jg 0x11b43254 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b43254;
  /* 11b43242 mov dword ptr [ebp - 0x4c], 3 */
  w32((uint32_t)(EBP + -0x4c), (0x3u));
  /* 11b43249 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4324c sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b4324f mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b43252 jmp 0x11b43296 */
  goto L_11b43296;
L_11b43254:;
  /* 11b43254 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11b43258 movsx eax, byte ptr [0x11b65de4] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11b65de4))));
  /* 11b4325f cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b43261 jne 0x11b4326c */
  if (!C.zf) goto L_11b4326c;
  /* 11b43263 mov dword ptr [ebp - 0x4c], 5 */
  w32((uint32_t)(EBP + -0x4c), (0x5u));
  /* 11b4326a jmp 0x11b43296 */
  goto L_11b43296;
L_11b4326c:;
  /* 11b4326c mov cl, byte ptr [ebp - 0x3c] */
  CL = (r8((uint32_t)(EBP + -0x3c)));
  /* 11b4326f mov byte ptr [ebp - 0x8c], cl */
  w8((uint32_t)(EBP + -0x8c), (CL));
  /* 11b43275 cmp byte ptr [ebp - 0x8c], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x8c))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b4327c je 0x11b43280 */
  if (C.zf) goto L_11b43280;
  /* 11b4327e jmp 0x11b43289 */
  goto L_11b43289;
L_11b43280:;
  /* 11b43280 mov dword ptr [ebp - 0x4c], 1 */
  w32((uint32_t)(EBP + -0x4c), (0x1u));
  /* 11b43287 jmp 0x11b43296 */
  goto L_11b43296;
L_11b43289:;
  /* 11b43289 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11b43290 mov edx, dword ptr [ebp - 0x64] */
  EDX = (r32((uint32_t)(EBP + -0x64)));
  /* 11b43293 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11b43296:;
  /* 11b43296 jmp 0x11b43803 */
  goto L_11b43803;
L_11b4329b:;
  /* 11b4329b mov dword ptr [ebp - 0x54], 1 */
  w32((uint32_t)(EBP + -0x54), (0x1u));
  /* 11b432a2 jmp 0x11b432b5 */
  goto L_11b432b5;
L_11b432a4:;
  /* 11b432a4 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b432a7 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11b432a9 mov byte ptr [ebp - 0x3c], cl */
  w8((uint32_t)(EBP + -0x3c), (CL));
  /* 11b432ac mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b432af add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b432b2 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11b432b5:;
  /* 11b432b5 cmp dword ptr [0x11b65de0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b65de0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b432bc jle 0x11b432d9 */
  if ((C.zf||C.sf!=C.of)) goto L_11b432d9;
  /* 11b432be push 4 */
  push32((uint32_t)(0x4u));
  /* 11b432c0 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11b432c3 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b432c8 push eax */
  push32((uint32_t)(EAX));
  /* 11b432c9 call 0x11b3c7c0 */
  push32(0x11b432ceu); f_11b3c7c0();
  /* 11b432ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b432d1 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
  /* 11b432d7 jmp 0x11b432f7 */
  goto L_11b432f7;
L_11b432d9:;
  /* 11b432d9 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11b432dc and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b432e2 mov edx, dword ptr [0x11b65dec] */
  EDX = (r32((uint32_t)(0x11b65dec)));
  /* 11b432e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b432ea mov ax, word ptr [edx + ecx*2] */
  AX = (r16((uint32_t)(EDX + ECX*2)));
  /* 11b432ee and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
  /* 11b432f1 mov dword ptr [ebp - 0x90], eax */
  w32((uint32_t)(EBP + -0x90), (EAX));
L_11b432f7:;
  /* 11b432f7 cmp dword ptr [ebp - 0x90], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x90))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b432fe je 0x11b43334 */
  if (C.zf) goto L_11b43334;
  /* 11b43300 cmp dword ptr [ebp - 0x70], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b43304 jae 0x11b43326 */
  if (!C.cf) goto L_11b43326;
  /* 11b43306 mov ecx, dword ptr [ebp - 0x70] */
  ECX = (r32((uint32_t)(EBP + -0x70)));
  /* 11b43309 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4330c mov dword ptr [ebp - 0x70], ecx */
  w32((uint32_t)(EBP + -0x70), (ECX));
  /* 11b4330f movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11b43313 sub edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b43316 mov eax, dword ptr [ebp - 0x68] */
  EAX = (r32((uint32_t)(EBP + -0x68)));
  /* 11b43319 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11b4331b mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 11b4331e add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b43321 mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 11b43324 jmp 0x11b4332f */
  goto L_11b4332f;
L_11b43326:;
  /* 11b43326 mov edx, dword ptr [ebp - 0x6c] */
  EDX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11b43329 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4332c mov dword ptr [ebp - 0x6c], edx */
  w32((uint32_t)(EBP + -0x6c), (EDX));
L_11b4332f:;
  /* 11b4332f jmp 0x11b432a4 */
  goto L_11b432a4;
L_11b43334:;
  /* 11b43334 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11b43338 movsx ecx, byte ptr [0x11b65de4] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(0x11b65de4))));
  /* 11b4333f cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b43341 jne 0x11b4334c */
  if (!C.zf) goto L_11b4334c;
  /* 11b43343 mov dword ptr [ebp - 0x4c], 4 */
  w32((uint32_t)(EBP + -0x4c), (0x4u));
  /* 11b4334a jmp 0x11b433ae */
  goto L_11b433ae;
L_11b4334c:;
  /* 11b4334c movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11b43350 mov dword ptr [ebp - 0x94], edx */
  w32((uint32_t)(EBP + -0x94), (EDX));
  /* 11b43356 mov eax, dword ptr [ebp - 0x94] */
  EAX = (r32((uint32_t)(EBP + -0x94)));
  /* 11b4335c sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b4335f mov dword ptr [ebp - 0x94], eax */
  w32((uint32_t)(EBP + -0x94), (EAX));
  /* 11b43365 cmp dword ptr [ebp - 0x94], 0x3a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x94))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4336c ja 0x11b4339e */
  if ((!C.cf&&!C.zf)) goto L_11b4339e;
  /* 11b4336e mov edx, dword ptr [ebp - 0x94] */
  EDX = (r32((uint32_t)(EBP + -0x94)));
  /* 11b43374 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b43376 mov cl, byte ptr [edx + 0x11b43aa1] */
  CL = (r8((uint32_t)(EDX + 0x11b43aa1)));
  /* 11b4337c jmp dword ptr [ecx*4 + 0x11b43a95] */
  switch (ECX) {
    case 0: goto L_11b4338c;
    case 1: goto L_11b43383;
    case 2: goto L_11b4339e;
    default: x86_unimpl("switch@0x11b4337c out of table"); return;
  }
L_11b43383:;
  /* 11b43383 mov dword ptr [ebp - 0x4c], 6 */
  w32((uint32_t)(EBP + -0x4c), (0x6u));
  /* 11b4338a jmp 0x11b433ae */
  goto L_11b433ae;
L_11b4338c:;
  /* 11b4338c mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4338f sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b43392 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b43395 mov dword ptr [ebp - 0x4c], 0xb */
  w32((uint32_t)(EBP + -0x4c), (0xbu));
  /* 11b4339c jmp 0x11b433ae */
  goto L_11b433ae;
L_11b4339e:;
  /* 11b4339e mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11b433a5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b433a8 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b433ab mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11b433ae:;
  /* 11b433ae jmp 0x11b43803 */
  goto L_11b43803;
L_11b433b3:;
  /* 11b433b3 mov dword ptr [ebp - 0x54], 1 */
  w32((uint32_t)(EBP + -0x54), (0x1u));
  /* 11b433ba mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 11b433c1 cmp dword ptr [ebp - 0x70], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b433c5 jne 0x11b433ee */
  if (!C.zf) goto L_11b433ee;
  /* 11b433c7 jmp 0x11b433da */
  goto L_11b433da;
L_11b433c9:;
  /* 11b433c9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b433cc mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11b433ce mov byte ptr [ebp - 0x3c], al */
  w8((uint32_t)(EBP + -0x3c), (AL));
  /* 11b433d1 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b433d4 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b433d7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11b433da:;
  /* 11b433da movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11b433de cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b433e1 jne 0x11b433ee */
  if (!C.zf) goto L_11b433ee;
  /* 11b433e3 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11b433e6 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b433e9 mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
  /* 11b433ec jmp 0x11b433c9 */
  goto L_11b433c9;
L_11b433ee:;
  /* 11b433ee jmp 0x11b43401 */
  goto L_11b43401;
L_11b433f0:;
  /* 11b433f0 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b433f3 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b433f5 mov byte ptr [ebp - 0x3c], dl */
  w8((uint32_t)(EBP + -0x3c), (DL));
  /* 11b433f8 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b433fb add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b433fe mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b43401:;
  /* 11b43401 cmp dword ptr [0x11b65de0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b65de0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b43408 jle 0x11b43426 */
  if ((C.zf||C.sf!=C.of)) goto L_11b43426;
  /* 11b4340a push 4 */
  push32((uint32_t)(0x4u));
  /* 11b4340c mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11b4340f and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b43415 push ecx */
  push32((uint32_t)(ECX));
  /* 11b43416 call 0x11b3c7c0 */
  push32(0x11b4341bu); f_11b3c7c0();
  /* 11b4341b add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4341e mov dword ptr [ebp - 0x98], eax */
  w32((uint32_t)(EBP + -0x98), (EAX));
  /* 11b43424 jmp 0x11b43443 */
  goto L_11b43443;
L_11b43426:;
  /* 11b43426 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11b43429 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b4342f mov eax, dword ptr [0x11b65dec] */
  EAX = (r32((uint32_t)(0x11b65dec)));
  /* 11b43434 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b43436 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11b4343a and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11b4343d mov dword ptr [ebp - 0x98], ecx */
  w32((uint32_t)(EBP + -0x98), (ECX));
L_11b43443:;
  /* 11b43443 cmp dword ptr [ebp - 0x98], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x98))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4344a je 0x11b4347e */
  if (C.zf) goto L_11b4347e;
  /* 11b4344c cmp dword ptr [ebp - 0x70], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b43450 jae 0x11b43479 */
  if (!C.cf) goto L_11b43479;
  /* 11b43452 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11b43455 add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b43458 mov dword ptr [ebp - 0x70], edx */
  w32((uint32_t)(EBP + -0x70), (EDX));
  /* 11b4345b movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11b4345f sub eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b43462 mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 11b43465 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11b43467 mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11b4346a add edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4346d mov dword ptr [ebp - 0x68], edx */
  w32((uint32_t)(EBP + -0x68), (EDX));
  /* 11b43470 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11b43473 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b43476 mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
L_11b43479:;
  /* 11b43479 jmp 0x11b433f0 */
  goto L_11b433f0;
L_11b4347e:;
  /* 11b4347e movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11b43482 mov dword ptr [ebp - 0x9c], ecx */
  w32((uint32_t)(EBP + -0x9c), (ECX));
  /* 11b43488 mov edx, dword ptr [ebp - 0x9c] */
  EDX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11b4348e sub edx, 0x2b */
  { uint32_t _a=(EDX),_b=(0x2bu),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b43491 mov dword ptr [ebp - 0x9c], edx */
  w32((uint32_t)(EBP + -0x9c), (EDX));
  /* 11b43497 cmp dword ptr [ebp - 0x9c], 0x3a */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x9c))),_b=(0x3au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4349e ja 0x11b434d0 */
  if ((!C.cf&&!C.zf)) goto L_11b434d0;
  /* 11b434a0 mov ecx, dword ptr [ebp - 0x9c] */
  ECX = (r32((uint32_t)(EBP + -0x9c)));
  /* 11b434a6 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11b434a8 mov al, byte ptr [ecx + 0x11b43ae8] */
  AL = (r8((uint32_t)(ECX + 0x11b43ae8)));
  /* 11b434ae jmp dword ptr [eax*4 + 0x11b43adc] */
  switch (EAX) {
    case 0: goto L_11b434be;
    case 1: goto L_11b434b5;
    case 2: goto L_11b434d0;
    default: x86_unimpl("switch@0x11b434ae out of table"); return;
  }
L_11b434b5:;
  /* 11b434b5 mov dword ptr [ebp - 0x4c], 6 */
  w32((uint32_t)(EBP + -0x4c), (0x6u));
  /* 11b434bc jmp 0x11b434e0 */
  goto L_11b434e0;
L_11b434be:;
  /* 11b434be mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b434c1 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b434c4 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b434c7 mov dword ptr [ebp - 0x4c], 0xb */
  w32((uint32_t)(EBP + -0x4c), (0xbu));
  /* 11b434ce jmp 0x11b434e0 */
  goto L_11b434e0;
L_11b434d0:;
  /* 11b434d0 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11b434d7 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b434da sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b434dd mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b434e0:;
  /* 11b434e0 jmp 0x11b43803 */
  goto L_11b43803;
L_11b434e5:;
  /* 11b434e5 mov dword ptr [ebp - 0xc], 1 */
  w32((uint32_t)(EBP + -0xc), (0x1u));
  /* 11b434ec cmp dword ptr [0x11b65de0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b65de0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b434f3 jle 0x11b43511 */
  if ((C.zf||C.sf!=C.of)) goto L_11b43511;
  /* 11b434f5 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b434f7 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11b434fa and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b43500 push ecx */
  push32((uint32_t)(ECX));
  /* 11b43501 call 0x11b3c7c0 */
  push32(0x11b43506u); f_11b3c7c0();
  /* 11b43506 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b43509 mov dword ptr [ebp - 0xa0], eax */
  w32((uint32_t)(EBP + -0xa0), (EAX));
  /* 11b4350f jmp 0x11b4352e */
  goto L_11b4352e;
L_11b43511:;
  /* 11b43511 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11b43514 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b4351a mov eax, dword ptr [0x11b65dec] */
  EAX = (r32((uint32_t)(0x11b65dec)));
  /* 11b4351f xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b43521 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11b43525 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11b43528 mov dword ptr [ebp - 0xa0], ecx */
  w32((uint32_t)(EBP + -0xa0), (ECX));
L_11b4352e:;
  /* 11b4352e cmp dword ptr [ebp - 0xa0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xa0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b43535 je 0x11b43549 */
  if (C.zf) goto L_11b43549;
  /* 11b43537 mov dword ptr [ebp - 0x4c], 4 */
  w32((uint32_t)(EBP + -0x4c), (0x4u));
  /* 11b4353e mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b43541 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b43544 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b43547 jmp 0x11b43556 */
  goto L_11b43556;
L_11b43549:;
  /* 11b43549 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11b43550 mov eax, dword ptr [ebp - 0x64] */
  EAX = (r32((uint32_t)(EBP + -0x64)));
  /* 11b43553 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b43556:;
  /* 11b43556 jmp 0x11b43803 */
  goto L_11b43803;
L_11b4355b:;
  /* 11b4355b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4355e sub ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b43561 mov dword ptr [ebp - 0x64], ecx */
  w32((uint32_t)(EBP + -0x64), (ECX));
  /* 11b43564 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11b43568 cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4356b jl 0x11b43588 */
  if ((C.sf!=C.of)) goto L_11b43588;
  /* 11b4356d movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11b43571 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b43574 jg 0x11b43588 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b43588;
  /* 11b43576 mov dword ptr [ebp - 0x4c], 9 */
  w32((uint32_t)(EBP + -0x4c), (0x9u));
  /* 11b4357d mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b43580 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b43583 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b43586 jmp 0x11b435dd */
  goto L_11b435dd;
L_11b43588:;
  /* 11b43588 mov dl, byte ptr [ebp - 0x3c] */
  DL = (r8((uint32_t)(EBP + -0x3c)));
  /* 11b4358b mov byte ptr [ebp - 0xa4], dl */
  w8((uint32_t)(EBP + -0xa4), (DL));
  /* 11b43591 cmp byte ptr [ebp - 0xa4], 0x2b */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b43598 je 0x11b435c7 */
  if (C.zf) goto L_11b435c7;
  /* 11b4359a cmp byte ptr [ebp - 0xa4], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b435a1 je 0x11b435b7 */
  if (C.zf) goto L_11b435b7;
  /* 11b435a3 cmp byte ptr [ebp - 0xa4], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa4))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b435aa je 0x11b435ae */
  if (C.zf) goto L_11b435ae;
  /* 11b435ac jmp 0x11b435d0 */
  goto L_11b435d0;
L_11b435ae:;
  /* 11b435ae mov dword ptr [ebp - 0x4c], 8 */
  w32((uint32_t)(EBP + -0x4c), (0x8u));
  /* 11b435b5 jmp 0x11b435dd */
  goto L_11b435dd;
L_11b435b7:;
  /* 11b435b7 mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 11b435be mov dword ptr [ebp - 0x74], 0xffffffff */
  w32((uint32_t)(EBP + -0x74), (0xffffffffu));
  /* 11b435c5 jmp 0x11b435dd */
  goto L_11b435dd;
L_11b435c7:;
  /* 11b435c7 mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 11b435ce jmp 0x11b435dd */
  goto L_11b435dd;
L_11b435d0:;
  /* 11b435d0 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11b435d7 mov eax, dword ptr [ebp - 0x64] */
  EAX = (r32((uint32_t)(EBP + -0x64)));
  /* 11b435da mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b435dd:;
  /* 11b435dd jmp 0x11b43803 */
  goto L_11b43803;
L_11b435e2:;
  /* 11b435e2 mov dword ptr [ebp - 0x18], 1 */
  w32((uint32_t)(EBP + -0x18), (0x1u));
  /* 11b435e9 jmp 0x11b435fc */
  goto L_11b435fc;
L_11b435eb:;
  /* 11b435eb mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b435ee mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b435f0 mov byte ptr [ebp - 0x3c], dl */
  w8((uint32_t)(EBP + -0x3c), (DL));
  /* 11b435f3 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b435f6 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b435f9 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b435fc:;
  /* 11b435fc movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11b43600 cmp ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b43603 jne 0x11b43607 */
  if (!C.zf) goto L_11b43607;
  /* 11b43605 jmp 0x11b435eb */
  goto L_11b435eb;
L_11b43607:;
  /* 11b43607 movsx edx, byte ptr [ebp - 0x3c] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11b4360b cmp edx, 0x31 */
  { uint32_t _a=(EDX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4360e jl 0x11b4362b */
  if ((C.sf!=C.of)) goto L_11b4362b;
  /* 11b43610 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11b43614 cmp eax, 0x39 */
  { uint32_t _a=(EAX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b43617 jg 0x11b4362b */
  if ((!C.zf&&C.sf==C.of)) goto L_11b4362b;
  /* 11b43619 mov dword ptr [ebp - 0x4c], 9 */
  w32((uint32_t)(EBP + -0x4c), (0x9u));
  /* 11b43620 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b43623 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b43626 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b43629 jmp 0x11b4363b */
  goto L_11b4363b;
L_11b4362b:;
  /* 11b4362b mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11b43632 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b43635 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b43638 mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11b4363b:;
  /* 11b4363b jmp 0x11b43803 */
  goto L_11b43803;
L_11b43640:;
  /* 11b43640 movsx eax, byte ptr [ebp - 0x3c] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11b43644 cmp eax, 0x31 */
  { uint32_t _a=(EAX),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b43647 jl 0x11b43664 */
  if ((C.sf!=C.of)) goto L_11b43664;
  /* 11b43649 movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11b4364d cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b43650 jg 0x11b43664 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b43664;
  /* 11b43652 mov dword ptr [ebp - 0x4c], 9 */
  w32((uint32_t)(EBP + -0x4c), (0x9u));
  /* 11b43659 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4365c sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b4365f mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b43662 jmp 0x11b4368e */
  goto L_11b4368e;
L_11b43664:;
  /* 11b43664 mov al, byte ptr [ebp - 0x3c] */
  AL = (r8((uint32_t)(EBP + -0x3c)));
  /* 11b43667 mov byte ptr [ebp - 0xa8], al */
  w8((uint32_t)(EBP + -0xa8), (AL));
  /* 11b4366d cmp byte ptr [ebp - 0xa8], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xa8))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b43674 je 0x11b43678 */
  if (C.zf) goto L_11b43678;
  /* 11b43676 jmp 0x11b43681 */
  goto L_11b43681;
L_11b43678:;
  /* 11b43678 mov dword ptr [ebp - 0x4c], 8 */
  w32((uint32_t)(EBP + -0x4c), (0x8u));
  /* 11b4367f jmp 0x11b4368e */
  goto L_11b4368e;
L_11b43681:;
  /* 11b43681 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11b43688 mov ecx, dword ptr [ebp - 0x64] */
  ECX = (r32((uint32_t)(EBP + -0x64)));
  /* 11b4368b mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11b4368e:;
  /* 11b4368e jmp 0x11b43803 */
  goto L_11b43803;
L_11b43693:;
  /* 11b43693 mov dword ptr [ebp - 0x18], 1 */
  w32((uint32_t)(EBP + -0x18), (0x1u));
  /* 11b4369a mov dword ptr [ebp - 0x7c], 0 */
  w32((uint32_t)(EBP + -0x7c), (0x0u));
  /* 11b436a1 jmp 0x11b436b4 */
  goto L_11b436b4;
L_11b436a3:;
  /* 11b436a3 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b436a6 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11b436a8 mov byte ptr [ebp - 0x3c], al */
  w8((uint32_t)(EBP + -0x3c), (AL));
  /* 11b436ab mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b436ae add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b436b1 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11b436b4:;
  /* 11b436b4 cmp dword ptr [0x11b65de0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b65de0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b436bb jle 0x11b436d9 */
  if ((C.zf||C.sf!=C.of)) goto L_11b436d9;
  /* 11b436bd push 4 */
  push32((uint32_t)(0x4u));
  /* 11b436bf mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11b436c2 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b436c8 push edx */
  push32((uint32_t)(EDX));
  /* 11b436c9 call 0x11b3c7c0 */
  push32(0x11b436ceu); f_11b3c7c0();
  /* 11b436ce add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b436d1 mov dword ptr [ebp - 0xac], eax */
  w32((uint32_t)(EBP + -0xac), (EAX));
  /* 11b436d7 jmp 0x11b436f6 */
  goto L_11b436f6;
L_11b436d9:;
  /* 11b436d9 mov eax, dword ptr [ebp - 0x3c] */
  EAX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11b436dc and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b436e1 mov ecx, dword ptr [0x11b65dec] */
  ECX = (r32((uint32_t)(0x11b65dec)));
  /* 11b436e7 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 11b436e9 mov dx, word ptr [ecx + eax*2] */
  DX = (r16((uint32_t)(ECX + EAX*2)));
  /* 11b436ed and edx, 4 */
  { uint32_t _r=(EDX)&(0x4u); EDX = (_r); fl_logic(_r,32); }
  /* 11b436f0 mov dword ptr [ebp - 0xac], edx */
  w32((uint32_t)(EBP + -0xac), (EDX));
L_11b436f6:;
  /* 11b436f6 cmp dword ptr [ebp - 0xac], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xac))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b436fd je 0x11b43727 */
  if (C.zf) goto L_11b43727;
  /* 11b436ff mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11b43702 imul eax, eax, 0xa */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0xau); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b43705 movsx ecx, byte ptr [ebp - 0x3c] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x3c))));
  /* 11b43709 lea edx, [eax + ecx - 0x30] */
  EDX = ((uint32_t)(EAX + ECX*1 + -0x30));
  /* 11b4370d mov dword ptr [ebp - 0x7c], edx */
  w32((uint32_t)(EBP + -0x7c), (EDX));
  /* 11b43710 cmp dword ptr [ebp - 0x7c], 0x1450 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x7c))),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b43717 jle 0x11b43722 */
  if ((C.zf||C.sf!=C.of)) goto L_11b43722;
  /* 11b43719 mov dword ptr [ebp - 0x7c], 0x1451 */
  w32((uint32_t)(EBP + -0x7c), (0x1451u));
  /* 11b43720 jmp 0x11b43727 */
  goto L_11b43727;
L_11b43722:;
  /* 11b43722 jmp 0x11b436a3 */
  goto L_11b436a3;
L_11b43727:;
  /* 11b43727 mov eax, dword ptr [ebp - 0x7c] */
  EAX = (r32((uint32_t)(EBP + -0x7c)));
  /* 11b4372a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11b4372d jmp 0x11b43740 */
  goto L_11b43740;
L_11b4372f:;
  /* 11b4372f mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b43732 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 11b43734 mov byte ptr [ebp - 0x3c], dl */
  w8((uint32_t)(EBP + -0x3c), (DL));
  /* 11b43737 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4373a add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4373d mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b43740:;
  /* 11b43740 cmp dword ptr [0x11b65de0], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11b65de0))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b43747 jle 0x11b43765 */
  if ((C.zf||C.sf!=C.of)) goto L_11b43765;
  /* 11b43749 push 4 */
  push32((uint32_t)(0x4u));
  /* 11b4374b mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11b4374e and ecx, 0xff */
  { uint32_t _r=(ECX)&(0xffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b43754 push ecx */
  push32((uint32_t)(ECX));
  /* 11b43755 call 0x11b3c7c0 */
  push32(0x11b4375au); f_11b3c7c0();
  /* 11b4375a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4375d mov dword ptr [ebp - 0xb0], eax */
  w32((uint32_t)(EBP + -0xb0), (EAX));
  /* 11b43763 jmp 0x11b43782 */
  goto L_11b43782;
L_11b43765:;
  /* 11b43765 mov edx, dword ptr [ebp - 0x3c] */
  EDX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11b43768 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b4376e mov eax, dword ptr [0x11b65dec] */
  EAX = (r32((uint32_t)(0x11b65dec)));
  /* 11b43773 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11b43775 mov cx, word ptr [eax + edx*2] */
  CX = (r16((uint32_t)(EAX + EDX*2)));
  /* 11b43779 and ecx, 4 */
  { uint32_t _r=(ECX)&(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11b4377c mov dword ptr [ebp - 0xb0], ecx */
  w32((uint32_t)(EBP + -0xb0), (ECX));
L_11b43782:;
  /* 11b43782 cmp dword ptr [ebp - 0xb0], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b43789 je 0x11b4378d */
  if (C.zf) goto L_11b4378d;
  /* 11b4378b jmp 0x11b4372f */
  goto L_11b4372f;
L_11b4378d:;
  /* 11b4378d mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11b43794 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b43797 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b4379a mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b4379d jmp 0x11b43803 */
  goto L_11b43803;
L_11b4379f:;
  /* 11b4379f cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b437a3 je 0x11b437f3 */
  if (C.zf) goto L_11b437f3;
  /* 11b437a5 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b437a8 sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b437ab mov dword ptr [ebp - 0x64], eax */
  w32((uint32_t)(EBP + -0x64), (EAX));
  /* 11b437ae mov cl, byte ptr [ebp - 0x3c] */
  CL = (r8((uint32_t)(EBP + -0x3c)));
  /* 11b437b1 mov byte ptr [ebp - 0xb4], cl */
  w8((uint32_t)(EBP + -0xb4), (CL));
  /* 11b437b7 cmp byte ptr [ebp - 0xb4], 0x2b */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xb4))),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b437be je 0x11b437db */
  if (C.zf) goto L_11b437db;
  /* 11b437c0 cmp byte ptr [ebp - 0xb4], 0x2d */
  { uint32_t _a=(r8((uint32_t)(EBP + -0xb4))),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11b437c7 je 0x11b437cb */
  if (C.zf) goto L_11b437cb;
  /* 11b437c9 jmp 0x11b437e4 */
  goto L_11b437e4;
L_11b437cb:;
  /* 11b437cb mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 11b437d2 mov dword ptr [ebp - 0x74], 0xffffffff */
  w32((uint32_t)(EBP + -0x74), (0xffffffffu));
  /* 11b437d9 jmp 0x11b437f1 */
  goto L_11b437f1;
L_11b437db:;
  /* 11b437db mov dword ptr [ebp - 0x4c], 7 */
  w32((uint32_t)(EBP + -0x4c), (0x7u));
  /* 11b437e2 jmp 0x11b437f1 */
  goto L_11b437f1;
L_11b437e4:;
  /* 11b437e4 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11b437eb mov edx, dword ptr [ebp - 0x64] */
  EDX = (r32((uint32_t)(EBP + -0x64)));
  /* 11b437ee mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11b437f1:;
  /* 11b437f1 jmp 0x11b43803 */
  goto L_11b43803;
L_11b437f3:;
  /* 11b437f3 mov dword ptr [ebp - 0x4c], 0xa */
  w32((uint32_t)(EBP + -0x4c), (0xau));
  /* 11b437fa mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b437fd sub eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b43800 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_11b43803:;
  /* 11b43803 jmp 0x11b430a7 */
  goto L_11b430a7;
L_11b43808:;
  /* 11b43808 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b4380b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4380e mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 11b43810 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b43814 je 0x11b43957 */
  if (C.zf) goto L_11b43957;
  /* 11b4381a cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4381e jne 0x11b43957 */
  if (!C.zf) goto L_11b43957;
  /* 11b43824 cmp dword ptr [ebp - 0x78], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b43828 jne 0x11b43957 */
  if (!C.zf) goto L_11b43957;
  /* 11b4382e cmp dword ptr [ebp - 0x70], 0x18 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x18u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b43832 jbe 0x11b4385f */
  if ((C.cf||C.zf)) goto L_11b4385f;
  /* 11b43834 movsx eax, byte ptr [ebp - 0x21] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x21))));
  /* 11b43838 cmp eax, 5 */
  { uint32_t _a=(EAX),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4383b jl 0x11b43846 */
  if ((C.sf!=C.of)) goto L_11b43846;
  /* 11b4383d mov cl, byte ptr [ebp - 0x21] */
  CL = (r8((uint32_t)(EBP + -0x21)));
  /* 11b43840 add cl, 1 */
  { uint32_t _a=(CL),_b=(0x1u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
  /* 11b43843 mov byte ptr [ebp - 0x21], cl */
  w8((uint32_t)(EBP + -0x21), (CL));
L_11b43846:;
  /* 11b43846 mov dword ptr [ebp - 0x70], 0x18 */
  w32((uint32_t)(EBP + -0x70), (0x18u));
  /* 11b4384d mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11b43850 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b43853 mov dword ptr [ebp - 0x68], edx */
  w32((uint32_t)(EBP + -0x68), (EDX));
  /* 11b43856 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11b43859 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4385c mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
L_11b4385f:;
  /* 11b4385f cmp dword ptr [ebp - 0x70], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b43863 jbe 0x11b4393a */
  if ((C.cf||C.zf)) goto L_11b4393a;
  /* 11b43869 mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 11b4386c sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b4386f mov dword ptr [ebp - 0x68], ecx */
  w32((uint32_t)(EBP + -0x68), (ECX));
  /* 11b43872 jmp 0x11b4387d */
  goto L_11b4387d;
L_11b43874:;
  /* 11b43874 mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11b43877 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b4387a mov dword ptr [ebp - 0x68], edx */
  w32((uint32_t)(EBP + -0x68), (EDX));
L_11b4387d:;
  /* 11b4387d mov eax, dword ptr [ebp - 0x68] */
  EAX = (r32((uint32_t)(EBP + -0x68)));
  /* 11b43880 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b43883 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b43885 jne 0x11b4389b */
  if (!C.zf) goto L_11b4389b;
  /* 11b43887 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11b4388a sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b4388d mov dword ptr [ebp - 0x70], edx */
  w32((uint32_t)(EBP + -0x70), (EDX));
  /* 11b43890 mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11b43893 add eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b43896 mov dword ptr [ebp - 0x6c], eax */
  w32((uint32_t)(EBP + -0x6c), (EAX));
  /* 11b43899 jmp 0x11b43874 */
  goto L_11b43874;
L_11b4389b:;
  /* 11b4389b lea ecx, [ebp - 0x60] */
  ECX = ((uint32_t)(EBP + -0x60));
  /* 11b4389e push ecx */
  push32((uint32_t)(ECX));
  /* 11b4389f mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11b438a2 push edx */
  push32((uint32_t)(EDX));
  /* 11b438a3 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11b438a6 push eax */
  push32((uint32_t)(EAX));
  /* 11b438a7 call 0x11b42ec0 */
  push32(0x11b438acu); f_11b42ec0();
  /* 11b438ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b438af cmp dword ptr [ebp - 0x74], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b438b3 jge 0x11b438bd */
  if ((C.sf==C.of)) goto L_11b438bd;
  /* 11b438b5 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b438b8 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b438ba mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11b438bd:;
  /* 11b438bd mov edx, dword ptr [ebp - 0x14] */
  EDX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b438c0 add edx, dword ptr [ebp - 0x6c] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x6c))),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b438c3 mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11b438c6 cmp dword ptr [ebp - 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b438ca jne 0x11b438d5 */
  if (!C.zf) goto L_11b438d5;
  /* 11b438cc mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b438cf add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b438d2 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11b438d5:;
  /* 11b438d5 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b438d9 jne 0x11b438e4 */
  if (!C.zf) goto L_11b438e4;
  /* 11b438db mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b438de sub ecx, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b438e1 mov dword ptr [ebp - 0x14], ecx */
  w32((uint32_t)(EBP + -0x14), (ECX));
L_11b438e4:;
  /* 11b438e4 cmp dword ptr [ebp - 0x14], 0x1450 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b438eb jle 0x11b438f6 */
  if ((C.zf||C.sf!=C.of)) goto L_11b438f6;
  /* 11b438ed mov dword ptr [ebp - 0x40], 1 */
  w32((uint32_t)(EBP + -0x40), (0x1u));
  /* 11b438f4 jmp 0x11b43938 */
  goto L_11b43938;
L_11b438f6:;
  /* 11b438f6 cmp dword ptr [ebp - 0x14], 0xffffebb0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0xffffebb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b438fd jge 0x11b43908 */
  if ((C.sf==C.of)) goto L_11b43908;
  /* 11b438ff mov dword ptr [ebp - 0x78], 1 */
  w32((uint32_t)(EBP + -0x78), (0x1u));
  /* 11b43906 jmp 0x11b43938 */
  goto L_11b43938;
L_11b43908:;
  /* 11b43908 mov edx, dword ptr [ebp + 0x14] */
  EDX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b4390b push edx */
  push32((uint32_t)(EDX));
  /* 11b4390c mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b4390f push eax */
  push32((uint32_t)(EAX));
  /* 11b43910 lea ecx, [ebp - 0x60] */
  ECX = ((uint32_t)(EBP + -0x60));
  /* 11b43913 push ecx */
  push32((uint32_t)(ECX));
  /* 11b43914 call 0x11b473d0 */
  push32(0x11b43919u); f_11b473d0();
  /* 11b43919 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4391c mov dx, word ptr [ebp - 0x60] */
  DX = (r16((uint32_t)(EBP + -0x60)));
  /* 11b43920 mov word ptr [ebp - 0x48], dx */
  w16((uint32_t)(EBP + -0x48), (DX));
  /* 11b43924 mov eax, dword ptr [ebp - 0x5e] */
  EAX = (r32((uint32_t)(EBP + -0x5e)));
  /* 11b43927 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b4392a mov ecx, dword ptr [ebp - 0x5a] */
  ECX = (r32((uint32_t)(EBP + -0x5a)));
  /* 11b4392d mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11b43930 mov dx, word ptr [ebp - 0x56] */
  DX = (r16((uint32_t)(EBP + -0x56)));
  /* 11b43934 mov word ptr [ebp - 0x50], dx */
  w16((uint32_t)(EBP + -0x50), (DX));
L_11b43938:;
  /* 11b43938 jmp 0x11b43957 */
  goto L_11b43957;
L_11b4393a:;
  /* 11b4393a mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 11b43940 mov word ptr [ebp - 0x50], 0 */
  w16((uint32_t)(EBP + -0x50), (0x0u));
  /* 11b43946 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b43949 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b4394e mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11b43951 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b43954 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
L_11b43957:;
  /* 11b43957 cmp dword ptr [ebp - 0x54], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x54))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4395b jne 0x11b43986 */
  if (!C.zf) goto L_11b43986;
  /* 11b4395d mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 11b43963 mov word ptr [ebp - 0x50], 0 */
  w16((uint32_t)(EBP + -0x50), (0x0u));
  /* 11b43969 mov edx, dword ptr [ebp - 0x50] */
  EDX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b4396c and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b43972 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 11b43975 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b43978 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11b4397b mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11b4397e or ecx, 4 */
  { uint32_t _r=(ECX)|(0x4u); ECX = (_r); fl_logic(_r,32); }
  /* 11b43981 mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
  /* 11b43984 jmp 0x11b439dd */
  goto L_11b439dd;
L_11b43986:;
  /* 11b43986 cmp dword ptr [ebp - 0x40], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x40))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4398a je 0x11b439b1 */
  if (C.zf) goto L_11b439b1;
  /* 11b4398c mov word ptr [ebp - 0x50], 0x7fff */
  w16((uint32_t)(EBP + -0x50), (0x7fffu));
  /* 11b43992 mov dword ptr [ebp - 0x10], 0x80000000 */
  w32((uint32_t)(EBP + -0x10), (0x80000000u));
  /* 11b43999 mov dword ptr [ebp - 8], 0 */
  w32((uint32_t)(EBP + -0x8), (0x0u));
  /* 11b439a0 mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 11b439a6 mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 11b439a9 or edx, 2 */
  { uint32_t _r=(EDX)|(0x2u); EDX = (_r); fl_logic(_r,32); }
  /* 11b439ac mov dword ptr [ebp - 0x44], edx */
  w32((uint32_t)(EBP + -0x44), (EDX));
  /* 11b439af jmp 0x11b439dd */
  goto L_11b439dd;
L_11b439b1:;
  /* 11b439b1 cmp dword ptr [ebp - 0x78], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x78))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b439b5 je 0x11b439dd */
  if (C.zf) goto L_11b439dd;
  /* 11b439b7 mov word ptr [ebp - 0x48], 0 */
  w16((uint32_t)(EBP + -0x48), (0x0u));
  /* 11b439bd mov word ptr [ebp - 0x50], 0 */
  w16((uint32_t)(EBP + -0x50), (0x0u));
  /* 11b439c3 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b439c6 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b439cb mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11b439ce mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b439d1 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11b439d4 mov edx, dword ptr [ebp - 0x44] */
  EDX = (r32((uint32_t)(EBP + -0x44)));
  /* 11b439d7 or edx, 1 */
  { uint32_t _r=(EDX)|(0x1u); EDX = (_r); fl_logic(_r,32); }
  /* 11b439da mov dword ptr [ebp - 0x44], edx */
  w32((uint32_t)(EBP + -0x44), (EDX));
L_11b439dd:;
  /* 11b439dd mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b439e0 mov cx, word ptr [ebp - 0x48] */
  CX = (r16((uint32_t)(EBP + -0x48)));
  /* 11b439e4 mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
  /* 11b439e7 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b439ea mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b439ed mov dword ptr [edx + 2], eax */
  w32((uint32_t)(EDX + 0x2), (EAX));
  /* 11b439f0 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b439f3 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b439f6 mov dword ptr [ecx + 6], edx */
  w32((uint32_t)(ECX + 0x6), (EDX));
  /* 11b439f9 mov eax, dword ptr [ebp - 0x50] */
  EAX = (r32((uint32_t)(EBP + -0x50)));
  /* 11b439fc and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b43a01 mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11b43a04 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b43a0a or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 11b43a0c mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b43a0f mov word ptr [edx + 0xa], ax */
  w16((uint32_t)(EDX + 0xa), (AX));
  /* 11b43a13 mov eax, dword ptr [ebp - 0x44] */
  EAX = (r32((uint32_t)(EBP + -0x44)));
  /* 11b43a16 mov esp, ebp */
  ESP = (EBP);
  /* 11b43a18 pop ebp */
  EBP = (pop32());
  /* 11b43a19 ret  */
  ESPCHK(0x11b43000u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b30 @ 0x11b43b30 (79 bytes, 33 insns) */
void f_11b43b30(void) {
  FTRACE(0x11b43b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b43b30 push ebp */
  push32((uint32_t)(EBP));
  /* 11b43b31 mov ebp, esp */
  EBP = (ESP);
  /* 11b43b33 sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b43b36 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b43b38 push 0 */
  push32((uint32_t)(0x0u));
  /* 11b43b3a push 0 */
  push32((uint32_t)(0x0u));
  /* 11b43b3c mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b43b3f push eax */
  push32((uint32_t)(EAX));
  /* 11b43b40 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11b43b43 push ecx */
  push32((uint32_t)(ECX));
  /* 11b43b44 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b43b47 push edx */
  push32((uint32_t)(EDX));
  /* 11b43b48 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11b43b4b push eax */
  push32((uint32_t)(EAX));
  /* 11b43b4c call 0x11b43000 */
  push32(0x11b43b51u); f_11b43000();
  /* 11b43b51 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b43b54 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11b43b57 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b43b5a push ecx */
  push32((uint32_t)(ECX));
  /* 11b43b5b lea edx, [ebp - 0xc] */
  EDX = ((uint32_t)(EBP + -0xc));
  /* 11b43b5e push edx */
  push32((uint32_t)(EDX));
  /* 11b43b5f call 0x11b3d0c0 */
  push32(0x11b43b64u); f_11b3d0c0();
  /* 11b43b64 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b43b67 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11b43b6a cmp dword ptr [ebp - 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b43b6e jne 0x11b43b78 */
  if (!C.zf) goto L_11b43b78;
  /* 11b43b70 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b43b73 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11b43b75 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
L_11b43b78:;
  /* 11b43b78 mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11b43b7b mov esp, ebp */
  ESP = (EBP);
  /* 11b43b7d pop ebp */
  EBP = (pop32());
  /* 11b43b7e ret  */
  ESPCHK(0x11b43b30u, _esp0);
  ESP += 4; return;
}

/* FUN_10013b80 @ 0x11b43b80 (1302 bytes, 386 insns) */
void f_11b43b80(void) {
  FTRACE(0x11b43b80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b43b80 push ebp */
  push32((uint32_t)(EBP));
  /* 11b43b81 mov ebp, esp */
  EBP = (ESP);
  /* 11b43b83 sub esp, 0x74 */
  { uint32_t _a=(ESP),_b=(0x74u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b43b86 mov word ptr [ebp - 0x64], 0x4d10 */
  w16((uint32_t)(EBP + -0x64), (0x4d10u));
  /* 11b43b8c mov word ptr [ebp - 0x3c], 0x4d */
  w16((uint32_t)(EBP + -0x3c), (0x4du));
  /* 11b43b92 mov word ptr [ebp - 0x60], 0x9a */
  w16((uint32_t)(EBP + -0x60), (0x9au));
  /* 11b43b98 mov dword ptr [ebp - 0x20], 0x134312f4 */
  w32((uint32_t)(EBP + -0x20), (0x134312f4u));
  /* 11b43b9f mov byte ptr [ebp - 0x54], 0xcc */
  w8((uint32_t)(EBP + -0x54), (0xccu));
  /* 11b43ba3 mov byte ptr [ebp - 0x53], 0xcc */
  w8((uint32_t)(EBP + -0x53), (0xccu));
  /* 11b43ba7 mov byte ptr [ebp - 0x52], 0xcc */
  w8((uint32_t)(EBP + -0x52), (0xccu));
  /* 11b43bab mov byte ptr [ebp - 0x51], 0xcc */
  w8((uint32_t)(EBP + -0x51), (0xccu));
  /* 11b43baf mov byte ptr [ebp - 0x50], 0xcc */
  w8((uint32_t)(EBP + -0x50), (0xccu));
  /* 11b43bb3 mov byte ptr [ebp - 0x4f], 0xcc */
  w8((uint32_t)(EBP + -0x4f), (0xccu));
  /* 11b43bb7 mov byte ptr [ebp - 0x4e], 0xcc */
  w8((uint32_t)(EBP + -0x4e), (0xccu));
  /* 11b43bbb mov byte ptr [ebp - 0x4d], 0xcc */
  w8((uint32_t)(EBP + -0x4d), (0xccu));
  /* 11b43bbf mov byte ptr [ebp - 0x4c], 0xcc */
  w8((uint32_t)(EBP + -0x4c), (0xccu));
  /* 11b43bc3 mov byte ptr [ebp - 0x4b], 0xcc */
  w8((uint32_t)(EBP + -0x4b), (0xccu));
  /* 11b43bc7 mov byte ptr [ebp - 0x4a], 0xfb */
  w8((uint32_t)(EBP + -0x4a), (0xfbu));
  /* 11b43bcb mov byte ptr [ebp - 0x49], 0x3f */
  w8((uint32_t)(EBP + -0x49), (0x3fu));
  /* 11b43bcf mov dword ptr [ebp - 0x58], 1 */
  w32((uint32_t)(EBP + -0x58), (0x1u));
  /* 11b43bd6 mov ax, word ptr [ebp + 0x10] */
  AX = (r16((uint32_t)(EBP + 0x10)));
  /* 11b43bda mov word ptr [ebp - 0x70], ax */
  w16((uint32_t)(EBP + -0x70), (AX));
  /* 11b43bde mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11b43be1 mov dword ptr [ebp - 0x24], ecx */
  w32((uint32_t)(EBP + -0x24), (ECX));
  /* 11b43be4 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 11b43be7 mov dword ptr [ebp - 0x48], edx */
  w32((uint32_t)(EBP + -0x48), (EDX));
  /* 11b43bea mov eax, dword ptr [ebp - 0x70] */
  EAX = (r32((uint32_t)(EBP + -0x70)));
  /* 11b43bed and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b43bf2 and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 11b43bf7 mov word ptr [ebp - 0x68], ax */
  w16((uint32_t)(EBP + -0x68), (AX));
  /* 11b43bfb mov cx, word ptr [ebp - 0x70] */
  CX = (r16((uint32_t)(EBP + -0x70)));
  /* 11b43bff and cx, 0x7fff */
  { uint32_t _r=(CX)&(0x7fffu); CX = (_r); fl_logic(_r,16); }
  /* 11b43c04 mov word ptr [ebp - 0x70], cx */
  w16((uint32_t)(EBP + -0x70), (CX));
  /* 11b43c08 mov edx, dword ptr [ebp - 0x68] */
  EDX = (r32((uint32_t)(EBP + -0x68)));
  /* 11b43c0b and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b43c11 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b43c13 je 0x11b43c1e */
  if (C.zf) goto L_11b43c1e;
  /* 11b43c15 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b43c18 mov byte ptr [eax + 2], 0x2d */
  w8((uint32_t)(EAX + 0x2), (0x2du));
  /* 11b43c1c jmp 0x11b43c25 */
  goto L_11b43c25;
L_11b43c1e:;
  /* 11b43c1e mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b43c21 mov byte ptr [ecx + 2], 0x20 */
  w8((uint32_t)(ECX + 0x2), (0x20u));
L_11b43c25:;
  /* 11b43c25 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11b43c28 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b43c2e test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11b43c30 jne 0x11b43c6c */
  if (!C.zf) goto L_11b43c6c;
  /* 11b43c32 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b43c36 jne 0x11b43c6c */
  if (!C.zf) goto L_11b43c6c;
  /* 11b43c38 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b43c3c jne 0x11b43c6c */
  if (!C.zf) goto L_11b43c6c;
  /* 11b43c3e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b43c41 mov word ptr [eax], 0 */
  w16((uint32_t)(EAX), (0x0u));
  /* 11b43c46 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b43c49 mov byte ptr [ecx + 2], 0x20 */
  w8((uint32_t)(ECX + 0x2), (0x20u));
  /* 11b43c4d mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b43c50 mov byte ptr [edx + 3], 1 */
  w8((uint32_t)(EDX + 0x3), (0x1u));
  /* 11b43c54 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b43c57 mov byte ptr [eax + 4], 0x30 */
  w8((uint32_t)(EAX + 0x4), (0x30u));
  /* 11b43c5b mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b43c5e mov byte ptr [ecx + 5], 0 */
  w8((uint32_t)(ECX + 0x5), (0x0u));
  /* 11b43c62 mov eax, 1 */
  EAX = (0x1u);
  /* 11b43c67 jmp 0x11b44092 */
  goto L_11b44092;
L_11b43c6c:;
  /* 11b43c6c mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11b43c6f and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b43c75 cmp edx, 0x7fff */
  { uint32_t _a=(EDX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b43c7b jne 0x11b43d66 */
  if (!C.zf) goto L_11b43d66;
  /* 11b43c81 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b43c84 mov word ptr [eax], 1 */
  w16((uint32_t)(EAX), (0x1u));
  /* 11b43c89 cmp dword ptr [ebp - 0x24], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b43c90 jne 0x11b43c98 */
  if (!C.zf) goto L_11b43c98;
  /* 11b43c92 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b43c96 je 0x11b43ccc */
  if (C.zf) goto L_11b43ccc;
L_11b43c98:;
  /* 11b43c98 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b43c9b and ecx, 0x40000000 */
  { uint32_t _r=(ECX)&(0x40000000u); ECX = (_r); fl_logic(_r,32); }
  /* 11b43ca1 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b43ca3 jne 0x11b43ccc */
  if (!C.zf) goto L_11b43ccc;
  /* 11b43ca5 push 0x11b63568 */
  push32((uint32_t)(0x11b63568u));
  /* 11b43caa mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b43cad add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b43cb0 push edx */
  push32((uint32_t)(EDX));
  /* 11b43cb1 call 0x11b3b9b0 */
  push32(0x11b43cb6u); f_11b3b9b0();
  /* 11b43cb6 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b43cb9 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b43cbc mov byte ptr [eax + 3], 6 */
  w8((uint32_t)(EAX + 0x3), (0x6u));
  /* 11b43cc0 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11b43cc7 jmp 0x11b43d61 */
  goto L_11b43d61;
L_11b43ccc:;
  /* 11b43ccc mov ecx, dword ptr [ebp - 0x68] */
  ECX = (r32((uint32_t)(EBP + -0x68)));
  /* 11b43ccf and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b43cd5 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b43cd7 je 0x11b43d0c */
  if (C.zf) goto L_11b43d0c;
  /* 11b43cd9 cmp dword ptr [ebp - 0x24], 0xc0000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0xc0000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b43ce0 jne 0x11b43d0c */
  if (!C.zf) goto L_11b43d0c;
  /* 11b43ce2 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b43ce6 jne 0x11b43d0c */
  if (!C.zf) goto L_11b43d0c;
  /* 11b43ce8 push 0x11b63560 */
  push32((uint32_t)(0x11b63560u));
  /* 11b43ced mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b43cf0 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b43cf3 push edx */
  push32((uint32_t)(EDX));
  /* 11b43cf4 call 0x11b3b9b0 */
  push32(0x11b43cf9u); f_11b3b9b0();
  /* 11b43cf9 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b43cfc mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b43cff mov byte ptr [eax + 3], 5 */
  w8((uint32_t)(EAX + 0x3), (0x5u));
  /* 11b43d03 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11b43d0a jmp 0x11b43d61 */
  goto L_11b43d61;
L_11b43d0c:;
  /* 11b43d0c cmp dword ptr [ebp - 0x24], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b43d13 jne 0x11b43d3f */
  if (!C.zf) goto L_11b43d3f;
  /* 11b43d15 cmp dword ptr [ebp - 0x48], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x48))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b43d19 jne 0x11b43d3f */
  if (!C.zf) goto L_11b43d3f;
  /* 11b43d1b push 0x11b63558 */
  push32((uint32_t)(0x11b63558u));
  /* 11b43d20 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b43d23 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b43d26 push ecx */
  push32((uint32_t)(ECX));
  /* 11b43d27 call 0x11b3b9b0 */
  push32(0x11b43d2cu); f_11b3b9b0();
  /* 11b43d2c add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b43d2f mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b43d32 mov byte ptr [edx + 3], 5 */
  w8((uint32_t)(EDX + 0x3), (0x5u));
  /* 11b43d36 mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
  /* 11b43d3d jmp 0x11b43d61 */
  goto L_11b43d61;
L_11b43d3f:;
  /* 11b43d3f push 0x11b63550 */
  push32((uint32_t)(0x11b63550u));
  /* 11b43d44 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b43d47 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b43d4a push eax */
  push32((uint32_t)(EAX));
  /* 11b43d4b call 0x11b3b9b0 */
  push32(0x11b43d50u); f_11b3b9b0();
  /* 11b43d50 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b43d53 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b43d56 mov byte ptr [ecx + 3], 6 */
  w8((uint32_t)(ECX + 0x3), (0x6u));
  /* 11b43d5a mov dword ptr [ebp - 0x58], 0 */
  w32((uint32_t)(EBP + -0x58), (0x0u));
L_11b43d61:;
  /* 11b43d61 jmp 0x11b4408f */
  goto L_11b4408f;
L_11b43d66:;
  /* 11b43d66 mov edx, dword ptr [ebp - 0x70] */
  EDX = (r32((uint32_t)(EBP + -0x70)));
  /* 11b43d69 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b43d6f sar edx, 8 */
  EDX = (sh_sar((uint32_t)(EDX), (0x8u)&0x1f, 32));
  /* 11b43d72 mov word ptr [ebp - 0x6c], dx */
  w16((uint32_t)(EBP + -0x6c), (DX));
  /* 11b43d76 mov eax, dword ptr [ebp - 0x70] */
  EAX = (r32((uint32_t)(EBP + -0x70)));
  /* 11b43d79 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b43d7e and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b43d83 mov word ptr [ebp - 0xc], ax */
  w16((uint32_t)(EBP + -0xc), (AX));
  /* 11b43d87 mov ecx, dword ptr [ebp - 0x24] */
  ECX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b43d8a shr ecx, 0x18 */
  ECX = (sh_shr((uint32_t)(ECX), (0x18u)&0x1f, 32));
  /* 11b43d8d mov word ptr [ebp - 0x40], cx */
  w16((uint32_t)(EBP + -0x40), (CX));
  /* 11b43d91 mov edx, dword ptr [ebp - 0x64] */
  EDX = (r32((uint32_t)(EBP + -0x64)));
  /* 11b43d94 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b43d9a mov eax, dword ptr [ebp - 0x70] */
  EAX = (r32((uint32_t)(EBP + -0x70)));
  /* 11b43d9d and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b43da2 imul edx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(EDX); EDX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b43da5 mov ecx, dword ptr [ebp - 0x3c] */
  ECX = (r32((uint32_t)(EBP + -0x3c)));
  /* 11b43da8 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b43dae mov eax, dword ptr [ebp - 0x6c] */
  EAX = (r32((uint32_t)(EBP + -0x6c)));
  /* 11b43db1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b43db6 imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b43db9 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b43dbb mov ecx, dword ptr [ebp - 0x60] */
  ECX = (r32((uint32_t)(EBP + -0x60)));
  /* 11b43dbe and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b43dc4 mov eax, dword ptr [ebp - 0x40] */
  EAX = (r32((uint32_t)(EBP + -0x40)));
  /* 11b43dc7 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b43dcc imul ecx, eax */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(ECX); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11b43dcf add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b43dd1 sub edx, dword ptr [ebp - 0x20] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EBP + -0x20))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b43dd4 mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 11b43dd7 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11b43dda sar ecx, 0x10 */
  ECX = (sh_sar((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 11b43ddd mov word ptr [ebp - 0x5c], cx */
  w16((uint32_t)(EBP + -0x5c), (CX));
  /* 11b43de1 mov dx, word ptr [ebp - 0x70] */
  DX = (r16((uint32_t)(EBP + -0x70)));
  /* 11b43de5 mov word ptr [ebp - 0x2e], dx */
  w16((uint32_t)(EBP + -0x2e), (DX));
  /* 11b43de9 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11b43dec mov dword ptr [ebp - 0x32], eax */
  w32((uint32_t)(EBP + -0x32), (EAX));
  /* 11b43def mov ecx, dword ptr [ebp - 0x48] */
  ECX = (r32((uint32_t)(EBP + -0x48)));
  /* 11b43df2 mov dword ptr [ebp - 0x36], ecx */
  w32((uint32_t)(EBP + -0x36), (ECX));
  /* 11b43df5 mov word ptr [ebp - 0x38], 0 */
  w16((uint32_t)(EBP + -0x38), (0x0u));
  /* 11b43dfb push 1 */
  push32((uint32_t)(0x1u));
  /* 11b43dfd movsx edx, word ptr [ebp - 0x5c] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x5c))));
  /* 11b43e01 neg edx */
  { uint32_t _a=(EDX),_r=0u-_a; EDX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b43e03 push edx */
  push32((uint32_t)(EDX));
  /* 11b43e04 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11b43e07 push eax */
  push32((uint32_t)(EAX));
  /* 11b43e08 call 0x11b473d0 */
  push32(0x11b43e0du); f_11b473d0();
  /* 11b43e0d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b43e10 mov ecx, dword ptr [ebp - 0x2e] */
  ECX = (r32((uint32_t)(EBP + -0x2e)));
  /* 11b43e13 and ecx, 0xffff */
  { uint32_t _r=(ECX)&(0xffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11b43e19 cmp ecx, 0x3fff */
  { uint32_t _a=(ECX),_b=(0x3fffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b43e1f jl 0x11b43e3d */
  if ((C.sf!=C.of)) goto L_11b43e3d;
  /* 11b43e21 mov dx, word ptr [ebp - 0x5c] */
  DX = (r16((uint32_t)(EBP + -0x5c)));
  /* 11b43e25 add dx, 1 */
  { uint32_t _a=(DX),_b=(0x1u),_r=_a+_b; DX = (_r); fl_add(_a,_b,_r,16); }
  /* 11b43e29 mov word ptr [ebp - 0x5c], dx */
  w16((uint32_t)(EBP + -0x5c), (DX));
  /* 11b43e2d lea eax, [ebp - 0x54] */
  EAX = ((uint32_t)(EBP + -0x54));
  /* 11b43e30 push eax */
  push32((uint32_t)(EAX));
  /* 11b43e31 lea ecx, [ebp - 0x38] */
  ECX = ((uint32_t)(EBP + -0x38));
  /* 11b43e34 push ecx */
  push32((uint32_t)(ECX));
  /* 11b43e35 call 0x11b46f90 */
  push32(0x11b43e3au); f_11b46f90();
  /* 11b43e3a add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11b43e3d:;
  /* 11b43e3d mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b43e40 mov ax, word ptr [ebp - 0x5c] */
  AX = (r16((uint32_t)(EBP + -0x5c)));
  /* 11b43e44 mov word ptr [edx], ax */
  w16((uint32_t)(EDX), (AX));
  /* 11b43e47 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11b43e4a and ecx, 1 */
  { uint32_t _r=(ECX)&(0x1u); ECX = (_r); fl_logic(_r,32); }
  /* 11b43e4d test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11b43e4f je 0x11b43e91 */
  if (C.zf) goto L_11b43e91;
  /* 11b43e51 movsx edx, word ptr [ebp - 0x5c] */
  EDX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x5c))));
  /* 11b43e55 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b43e58 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b43e5a mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
  /* 11b43e5d cmp dword ptr [ebp + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b43e61 jg 0x11b43e91 */
  if ((!C.zf&&C.sf==C.of)) goto L_11b43e91;
  /* 11b43e63 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b43e66 mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 11b43e6b mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b43e6e mov byte ptr [edx + 2], 0x20 */
  w8((uint32_t)(EDX + 0x2), (0x20u));
  /* 11b43e72 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b43e75 mov byte ptr [eax + 3], 1 */
  w8((uint32_t)(EAX + 0x3), (0x1u));
  /* 11b43e79 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b43e7c mov byte ptr [ecx + 4], 0x30 */
  w8((uint32_t)(ECX + 0x4), (0x30u));
  /* 11b43e80 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b43e83 mov byte ptr [edx + 5], 0 */
  w8((uint32_t)(EDX + 0x5), (0x0u));
  /* 11b43e87 mov eax, 1 */
  EAX = (0x1u);
  /* 11b43e8c jmp 0x11b44092 */
  goto L_11b44092;
L_11b43e91:;
  /* 11b43e91 cmp dword ptr [ebp + 0x14], 0x15 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b43e95 jle 0x11b43e9e */
  if ((C.zf||C.sf!=C.of)) goto L_11b43e9e;
  /* 11b43e97 mov dword ptr [ebp + 0x14], 0x15 */
  w32((uint32_t)(EBP + 0x14), (0x15u));
L_11b43e9e:;
  /* 11b43e9e mov eax, dword ptr [ebp - 0x2e] */
  EAX = (r32((uint32_t)(EBP + -0x2e)));
  /* 11b43ea1 and eax, 0xffff */
  { uint32_t _r=(EAX)&(0xffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b43ea6 sub eax, 0x3ffe */
  { uint32_t _a=(EAX),_b=(0x3ffeu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b43eab mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11b43eae mov word ptr [ebp - 0x2e], 0 */
  w16((uint32_t)(EBP + -0x2e), (0x0u));
  /* 11b43eb4 mov dword ptr [ebp - 0x44], 0 */
  w32((uint32_t)(EBP + -0x44), (0x0u));
  /* 11b43ebb jmp 0x11b43ec6 */
  goto L_11b43ec6;
L_11b43ebd:;
  /* 11b43ebd mov ecx, dword ptr [ebp - 0x44] */
  ECX = (r32((uint32_t)(EBP + -0x44)));
  /* 11b43ec0 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b43ec3 mov dword ptr [ebp - 0x44], ecx */
  w32((uint32_t)(EBP + -0x44), (ECX));
L_11b43ec6:;
  /* 11b43ec6 cmp dword ptr [ebp - 0x44], 8 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x44))),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b43eca jge 0x11b43eda */
  if ((C.sf==C.of)) goto L_11b43eda;
  /* 11b43ecc lea edx, [ebp - 0x38] */
  EDX = ((uint32_t)(EBP + -0x38));
  /* 11b43ecf push edx */
  push32((uint32_t)(EDX));
  /* 11b43ed0 call 0x11b42df0 */
  push32(0x11b43ed5u); f_11b42df0();
  /* 11b43ed5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b43ed8 jmp 0x11b43ebd */
  goto L_11b43ebd;
L_11b43eda:;
  /* 11b43eda cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b43ede jge 0x11b43f0c */
  if ((C.sf==C.of)) goto L_11b43f0c;
  /* 11b43ee0 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11b43ee3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11b43ee5 and eax, 0xff */
  { uint32_t _r=(EAX)&(0xffu); EAX = (_r); fl_logic(_r,32); }
  /* 11b43eea mov dword ptr [ebp - 0x74], eax */
  w32((uint32_t)(EBP + -0x74), (EAX));
  /* 11b43eed jmp 0x11b43ef8 */
  goto L_11b43ef8;
L_11b43eef:;
  /* 11b43eef mov ecx, dword ptr [ebp - 0x74] */
  ECX = (r32((uint32_t)(EBP + -0x74)));
  /* 11b43ef2 sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b43ef5 mov dword ptr [ebp - 0x74], ecx */
  w32((uint32_t)(EBP + -0x74), (ECX));
L_11b43ef8:;
  /* 11b43ef8 cmp dword ptr [ebp - 0x74], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x74))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b43efc jle 0x11b43f0c */
  if ((C.zf||C.sf!=C.of)) goto L_11b43f0c;
  /* 11b43efe lea edx, [ebp - 0x38] */
  EDX = ((uint32_t)(EBP + -0x38));
  /* 11b43f01 push edx */
  push32((uint32_t)(EDX));
  /* 11b43f02 call 0x11b42e50 */
  push32(0x11b43f07u); f_11b42e50();
  /* 11b43f07 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b43f0a jmp 0x11b43eef */
  goto L_11b43eef;
L_11b43f0c:;
  /* 11b43f0c mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b43f0f add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b43f12 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11b43f15 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11b43f18 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b43f1b mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11b43f1e jmp 0x11b43f29 */
  goto L_11b43f29;
L_11b43f20:;
  /* 11b43f20 mov edx, dword ptr [ebp - 0x10] */
  EDX = (r32((uint32_t)(EBP + -0x10)));
  /* 11b43f23 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b43f26 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_11b43f29:;
  /* 11b43f29 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b43f2d jle 0x11b43f95 */
  if ((C.zf||C.sf!=C.of)) goto L_11b43f95;
  /* 11b43f2f mov eax, dword ptr [ebp - 0x38] */
  EAX = (r32((uint32_t)(EBP + -0x38)));
  /* 11b43f32 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11b43f35 mov ecx, dword ptr [ebp - 0x34] */
  ECX = (r32((uint32_t)(EBP + -0x34)));
  /* 11b43f38 mov dword ptr [ebp - 0x18], ecx */
  w32((uint32_t)(EBP + -0x18), (ECX));
  /* 11b43f3b mov edx, dword ptr [ebp - 0x30] */
  EDX = (r32((uint32_t)(EBP + -0x30)));
  /* 11b43f3e mov dword ptr [ebp - 0x14], edx */
  w32((uint32_t)(EBP + -0x14), (EDX));
  /* 11b43f41 lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11b43f44 push eax */
  push32((uint32_t)(EAX));
  /* 11b43f45 call 0x11b42df0 */
  push32(0x11b43f4au); f_11b42df0();
  /* 11b43f4a add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b43f4d lea ecx, [ebp - 0x38] */
  ECX = ((uint32_t)(EBP + -0x38));
  /* 11b43f50 push ecx */
  push32((uint32_t)(ECX));
  /* 11b43f51 call 0x11b42df0 */
  push32(0x11b43f56u); f_11b42df0();
  /* 11b43f56 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b43f59 lea edx, [ebp - 0x1c] */
  EDX = ((uint32_t)(EBP + -0x1c));
  /* 11b43f5c push edx */
  push32((uint32_t)(EDX));
  /* 11b43f5d lea eax, [ebp - 0x38] */
  EAX = ((uint32_t)(EBP + -0x38));
  /* 11b43f60 push eax */
  push32((uint32_t)(EAX));
  /* 11b43f61 call 0x11b42d40 */
  push32(0x11b43f66u); f_11b42d40();
  /* 11b43f66 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b43f69 lea ecx, [ebp - 0x38] */
  ECX = ((uint32_t)(EBP + -0x38));
  /* 11b43f6c push ecx */
  push32((uint32_t)(ECX));
  /* 11b43f6d call 0x11b42df0 */
  push32(0x11b43f72u); f_11b42df0();
  /* 11b43f72 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11b43f75 mov edx, dword ptr [ebp - 0x2d] */
  EDX = (r32((uint32_t)(EBP + -0x2d)));
  /* 11b43f78 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 11b43f7e add edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b43f81 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b43f84 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11b43f86 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b43f89 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b43f8c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b43f8f mov byte ptr [ebp - 0x2d], 0 */
  w8((uint32_t)(EBP + -0x2d), (0x0u));
  /* 11b43f93 jmp 0x11b43f20 */
  goto L_11b43f20;
L_11b43f95:;
  /* 11b43f95 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b43f98 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b43f9b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b43f9e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b43fa1 mov cl, byte ptr [eax] */
  CL = (r8((uint32_t)(EAX)));
  /* 11b43fa3 mov byte ptr [ebp - 0x28], cl */
  w8((uint32_t)(EBP + -0x28), (CL));
  /* 11b43fa6 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b43fa9 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b43fac mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 11b43faf movsx eax, byte ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x28))));
  /* 11b43fb3 cmp eax, 0x35 */
  { uint32_t _a=(EAX),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b43fb6 jl 0x11b44013 */
  if ((C.sf!=C.of)) goto L_11b44013;
  /* 11b43fb8 jmp 0x11b43fc3 */
  goto L_11b43fc3;
L_11b43fba:;
  /* 11b43fba mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b43fbd sub ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b43fc0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
L_11b43fc3:;
  /* 11b43fc3 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b43fc6 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b43fc9 cmp dword ptr [ebp - 4], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b43fcc jb 0x11b43fe1 */
  if (C.cf) goto L_11b43fe1;
  /* 11b43fce mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b43fd1 movsx ecx, byte ptr [eax] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 11b43fd4 cmp ecx, 0x39 */
  { uint32_t _a=(ECX),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b43fd7 jne 0x11b43fe1 */
  if (!C.zf) goto L_11b43fe1;
  /* 11b43fd9 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b43fdc mov byte ptr [edx], 0x30 */
  w8((uint32_t)(EDX), (0x30u));
  /* 11b43fdf jmp 0x11b43fba */
  goto L_11b43fba;
L_11b43fe1:;
  /* 11b43fe1 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b43fe4 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b43fe7 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b43fea jae 0x11b44005 */
  if (!C.cf) goto L_11b44005;
  /* 11b43fec mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b43fef add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b43ff2 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 11b43ff5 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b43ff8 mov ax, word ptr [edx] */
  AX = (r16((uint32_t)(EDX)));
  /* 11b43ffb add ax, 1 */
  { uint32_t _a=(AX),_b=(0x1u),_r=_a+_b; AX = (_r); fl_add(_a,_b,_r,16); }
  /* 11b43fff mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b44002 mov word ptr [ecx], ax */
  w16((uint32_t)(ECX), (AX));
L_11b44005:;
  /* 11b44005 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b44008 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11b4400a add al, 1 */
  { uint32_t _a=(AL),_b=(0x1u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11b4400c mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4400f mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11b44011 jmp 0x11b4406c */
  goto L_11b4406c;
L_11b44013:;
  /* 11b44013 jmp 0x11b4401e */
  goto L_11b4401e;
L_11b44015:;
  /* 11b44015 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b44018 sub edx, 1 */
  { uint32_t _a=(EDX),_b=(0x1u),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b4401b mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_11b4401e:;
  /* 11b4401e mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b44021 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44024 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b44027 jb 0x11b44036 */
  if (C.cf) goto L_11b44036;
  /* 11b44029 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b4402c movsx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ECX))));
  /* 11b4402f cmp edx, 0x30 */
  { uint32_t _a=(EDX),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b44032 jne 0x11b44036 */
  if (!C.zf) goto L_11b44036;
  /* 11b44034 jmp 0x11b44015 */
  goto L_11b44015;
L_11b44036:;
  /* 11b44036 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b44039 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4403c cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11b4403f jae 0x11b4406c */
  if (!C.cf) goto L_11b4406c;
  /* 11b44041 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b44044 mov word ptr [ecx], 0 */
  w16((uint32_t)(ECX), (0x0u));
  /* 11b44049 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b4404c mov byte ptr [edx + 2], 0x20 */
  w8((uint32_t)(EDX + 0x2), (0x20u));
  /* 11b44050 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b44053 mov byte ptr [eax + 3], 1 */
  w8((uint32_t)(EAX + 0x3), (0x1u));
  /* 11b44057 mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b4405a mov byte ptr [ecx + 4], 0x30 */
  w8((uint32_t)(ECX + 0x4), (0x30u));
  /* 11b4405e mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b44061 mov byte ptr [edx + 5], 0 */
  w8((uint32_t)(EDX + 0x5), (0x0u));
  /* 11b44065 mov eax, 1 */
  EAX = (0x1u);
  /* 11b4406a jmp 0x11b44092 */
  goto L_11b44092;
L_11b4406c:;
  /* 11b4406c mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b4406f add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b44072 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11b44075 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11b44077 add ecx, 1 */
  { uint32_t _a=(ECX),_b=(0x1u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b4407a mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b4407d mov byte ptr [edx + 3], cl */
  w8((uint32_t)(EDX + 0x3), (CL));
  /* 11b44080 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b44083 movsx ecx, byte ptr [eax + 3] */
  ECX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX + 0x3))));
  /* 11b44087 mov edx, dword ptr [ebp + 0x1c] */
  EDX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11b4408a mov byte ptr [edx + ecx + 4], 0 */
  w8((uint32_t)(EDX + ECX*1 + 0x4), (0x0u));
L_11b4408f:;
  /* 11b4408f mov eax, dword ptr [ebp - 0x58] */
  EAX = (r32((uint32_t)(EBP + -0x58)));
L_11b44092:;
  /* 11b44092 mov esp, ebp */
  ESP = (EBP);
  /* 11b44094 pop ebp */
  EBP = (pop32());
  /* 11b44095 ret  */
  ESPCHK(0x11b43b80u, _esp0);
  ESP += 4; return;
}

/* __allmul @ 0x11b440a0 (52 bytes, 19 insns) */
void f_11b440a0(void) {
  FTRACE(0x11b440a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11b440a0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b440a4 mov ecx, dword ptr [esp + 0x10] */
  ECX = (r32((uint32_t)(ESP + 0x10)));
  /* 11b440a8 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11b440aa mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 11b440ae jne 0x11b440b9 */
  if (!C.zf) goto L_11b440b9;
  /* 11b440b0 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11b440b4 mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11b440b6 ret 0x10 */
  ESPCHK(0x11b440a0u, _esp0);
  ESP += 20; return;
L_11b440b9:;
  /* 11b440b9 push ebx */
  push32((uint32_t)(EBX));
  /* 11b440ba mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11b440bc mov ebx, eax */
  EBX = (EAX);
  /* 11b440be mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b440c2 mul dword ptr [esp + 0x14] */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(r32((uint32_t)(ESP + 0x14))); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11b440c6 add ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b440c8 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11b440cc mul ecx */
  { uint64_t _p=(uint64_t)EAX*(uint64_t)(ECX); EAX=(uint32_t)_p; EDX=(uint32_t)(_p>>32); C.cf=C.of=(EDX!=0); }
  /* 11b440ce add edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 11b440d0 pop ebx */
  EBX = (pop32());
  /* 11b440d1 ret 0x10 */
  ESPCHK(0x11b440a0u, _esp0);
  ESP += 20; return;
}

