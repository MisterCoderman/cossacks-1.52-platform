#include "recomp.h"

/* FUN_1000a855 @ 0x11c6a855 (66 bytes, 19 insns) */
void f_11c6a855(void) {
  FTRACE(0x11c6a855u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6a855 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c6a859 cmp eax, dword ptr [0x11c88f60] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c88f60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a85f jae 0x11c6a880 */
  if (!C.cf) goto L_11c6a880;
  /* 11c6a861 mov ecx, eax */
  ECX = (EAX);
  /* 11c6a863 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11c6a866 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11c6a869 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11c6a86c mov ecx, dword ptr [ecx*4 + 0x11c88e60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11c88e60)));
  /* 11c6a873 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11c6a878 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 11c6a87b je 0x11c6a880 */
  if (C.zf) goto L_11c6a880;
  /* 11c6a87d mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 11c6a87f ret  */
  ESPCHK(0x11c6a855u, _esp0);
  ESP += 4; return;
L_11c6a880:;
  /* 11c6a880 call 0x11c6a7c4 */
  push32(0x11c6a885u); f_11c6a7c4();
  /* 11c6a885 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11c6a88b call 0x11c6a7cd */
  push32(0x11c6a890u); f_11c6a7cd();
  /* 11c6a890 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11c6a893 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c6a896 ret  */
  ESPCHK(0x11c6a855u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a897 @ 0x11c6a897 (95 bytes, 34 insns) */
void f_11c6a897(void) {
  FTRACE(0x11c6a897u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6a897 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c6a89b push ebx */
  push32((uint32_t)(EBX));
  /* 11c6a89c mov ecx, eax */
  ECX = (EAX);
  /* 11c6a89e and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11c6a8a1 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11c6a8a4 push esi */
  push32((uint32_t)(ESI));
  /* 11c6a8a5 push edi */
  push32((uint32_t)(EDI));
  /* 11c6a8a6 mov esi, dword ptr [ecx*4 + 0x11c88e60] */
  ESI = (r32((uint32_t)(ECX*4 + 0x11c88e60)));
  /* 11c6a8ad lea ebx, [ecx*4 + 0x11c88e60] */
  EBX = ((uint32_t)(ECX*4 + 0x11c88e60));
  /* 11c6a8b4 lea edi, [eax + eax*8] */
  EDI = ((uint32_t)(EAX + EAX*8));
  /* 11c6a8b7 shl edi, 2 */
  EDI = (sh_shl((uint32_t)(EDI), (0x2u)&0x1f, 32));
  /* 11c6a8ba add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6a8bc cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a8c0 jne 0x11c6a8e5 */
  if (!C.zf) goto L_11c6a8e5;
  /* 11c6a8c2 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11c6a8c4 call 0x11c66a86 */
  push32(0x11c6a8c9u); f_11c66a86();
  /* 11c6a8c9 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a8cd pop ecx */
  ECX = (pop32());
  /* 11c6a8ce jne 0x11c6a8dd */
  if (!C.zf) goto L_11c6a8dd;
  /* 11c6a8d0 lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 11c6a8d3 push eax */
  push32((uint32_t)(EAX));
  /* 11c6a8d4 call dword ptr [0x11c6e06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e06c))), 0x11c6a8dau);
  /* 11c6a8da inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_11c6a8dd:;
  /* 11c6a8dd push 0x11 */
  push32((uint32_t)(0x11u));
  /* 11c6a8df call 0x11c66ae7 */
  push32(0x11c6a8e4u); f_11c66ae7();
  /* 11c6a8e4 pop ecx */
  ECX = (pop32());
L_11c6a8e5:;
  /* 11c6a8e5 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11c6a8e7 lea eax, [eax + edi + 0xc] */
  EAX = ((uint32_t)(EAX + EDI*1 + 0xc));
  /* 11c6a8eb push eax */
  push32((uint32_t)(EAX));
  /* 11c6a8ec call dword ptr [0x11c6e068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e068))), 0x11c6a8f2u);
  /* 11c6a8f2 pop edi */
  EDI = (pop32());
  /* 11c6a8f3 pop esi */
  ESI = (pop32());
  /* 11c6a8f4 pop ebx */
  EBX = (pop32());
  /* 11c6a8f5 ret  */
  ESPCHK(0x11c6a897u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a8f6 @ 0x11c6a8f6 (34 bytes, 10 insns) */
void f_11c6a8f6(void) {
  FTRACE(0x11c6a8f6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6a8f6 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 11c6a8fa mov ecx, eax */
  ECX = (EAX);
  /* 11c6a8fc and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11c6a8ff sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11c6a902 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11c6a905 mov ecx, dword ptr [ecx*4 + 0x11c88e60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11c88e60)));
  /* 11c6a90c lea eax, [ecx + eax*4 + 0xc] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0xc));
  /* 11c6a910 push eax */
  push32((uint32_t)(EAX));
  /* 11c6a911 call dword ptr [0x11c6e064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e064))), 0x11c6a917u);
  /* 11c6a917 ret  */
  ESPCHK(0x11c6a8f6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a999 @ 0x11c6a999 (46 bytes, 22 insns) */
void f_11c6a999(void) {
  FTRACE(0x11c6a999u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6a999 push esi */
  push32((uint32_t)(ESI));
  /* 11c6a99a mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c6a99e push esi */
  push32((uint32_t)(ESI));
  /* 11c6a99f call 0x11c6a9c7 */
  push32(0x11c6a9a4u); f_11c6a9c7();
  /* 11c6a9a4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6a9a6 pop ecx */
  ECX = (pop32());
  /* 11c6a9a7 je 0x11c6a9ae */
  if (C.zf) goto L_11c6a9ae;
  /* 11c6a9a9 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c6a9ac pop esi */
  ESI = (pop32());
  /* 11c6a9ad ret  */
  ESPCHK(0x11c6a999u, _esp0);
  ESP += 4; return;
L_11c6a9ae:;
  /* 11c6a9ae test byte ptr [esi + 0xd], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xd)))&(0x40u); fl_logic(_r,8); }
  /* 11c6a9b2 je 0x11c6a9c3 */
  if (C.zf) goto L_11c6a9c3;
  /* 11c6a9b4 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11c6a9b7 call 0x11c6b08e */
  push32(0x11c6a9bcu); f_11c6b08e();
  /* 11c6a9bc neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c6a9be pop ecx */
  ECX = (pop32());
  /* 11c6a9bf pop esi */
  ESI = (pop32());
  /* 11c6a9c0 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6a9c2 ret  */
  ESPCHK(0x11c6a999u, _esp0);
  ESP += 4; return;
L_11c6a9c3:;
  /* 11c6a9c3 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c6a9c5 pop esi */
  ESI = (pop32());
  /* 11c6a9c6 ret  */
  ESPCHK(0x11c6a999u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a9c7 @ 0x11c6a9c7 (92 bytes, 40 insns) */
void f_11c6a9c7(void) {
  FTRACE(0x11c6a9c7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6a9c7 push ebx */
  push32((uint32_t)(EBX));
  /* 11c6a9c8 push esi */
  push32((uint32_t)(ESI));
  /* 11c6a9c9 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 11c6a9cd xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c6a9cf push edi */
  push32((uint32_t)(EDI));
  /* 11c6a9d0 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11c6a9d3 mov ecx, eax */
  ECX = (EAX);
  /* 11c6a9d5 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 11c6a9d8 cmp cl, 2 */
  { uint32_t _a=(CL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6a9db jne 0x11c6aa14 */
  if (!C.zf) goto L_11c6aa14;
  /* 11c6a9dd test ax, 0x108 */
  { uint32_t _r=(AX)&(0x108u); fl_logic(_r,16); }
  /* 11c6a9e1 je 0x11c6aa14 */
  if (C.zf) goto L_11c6aa14;
  /* 11c6a9e3 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 11c6a9e6 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 11c6a9e8 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6a9ea test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11c6a9ec jle 0x11c6aa14 */
  if ((C.zf||C.sf!=C.of)) goto L_11c6aa14;
  /* 11c6a9ee push edi */
  push32((uint32_t)(EDI));
  /* 11c6a9ef push eax */
  push32((uint32_t)(EAX));
  /* 11c6a9f0 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11c6a9f3 call 0x11c689c0 */
  push32(0x11c6a9f8u); f_11c689c0();
  /* 11c6a9f8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6a9fb cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6a9fd jne 0x11c6aa0d */
  if (!C.zf) goto L_11c6aa0d;
  /* 11c6a9ff mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11c6aa02 test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 11c6aa04 je 0x11c6aa14 */
  if (C.zf) goto L_11c6aa14;
  /* 11c6aa06 and al, 0xfd */
  { uint32_t _r=(AL)&(0xfdu); AL = (_r); fl_logic(_r,8); }
  /* 11c6aa08 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11c6aa0b jmp 0x11c6aa14 */
  goto L_11c6aa14;
L_11c6aa0d:;
  /* 11c6aa0d or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 11c6aa11 or ebx, 0xffffffff */
  { uint32_t _r=(EBX)|(0xffffffffu); EBX = (_r); fl_logic(_r,32); }
L_11c6aa14:;
  /* 11c6aa14 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 11c6aa17 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11c6aa1b mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11c6aa1d pop edi */
  EDI = (pop32());
  /* 11c6aa1e mov eax, ebx */
  EAX = (EBX);
  /* 11c6aa20 pop esi */
  ESI = (pop32());
  /* 11c6aa21 pop ebx */
  EBX = (pop32());
  /* 11c6aa22 ret  */
  ESPCHK(0x11c6a9c7u, _esp0);
  ESP += 4; return;
}

/* FUN_1000aa2c @ 0x11c6aa2c (164 bytes, 66 insns) */
void f_11c6aa2c(void) {
  FTRACE(0x11c6aa2cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6aa2c push ebx */
  push32((uint32_t)(EBX));
  /* 11c6aa2d push esi */
  push32((uint32_t)(ESI));
  /* 11c6aa2e push edi */
  push32((uint32_t)(EDI));
  /* 11c6aa2f push 2 */
  push32((uint32_t)(0x2u));
  /* 11c6aa31 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c6aa33 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c6aa35 call 0x11c66a86 */
  push32(0x11c6aa3au); f_11c66a86();
  /* 11c6aa3a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11c6aa3c pop ecx */
  ECX = (pop32());
  /* 11c6aa3d cmp dword ptr [0x11c88e20], esi */
  { uint32_t _a=(r32((uint32_t)(0x11c88e20))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6aa43 jle 0x11c6aab9 */
  if ((C.zf||C.sf!=C.of)) goto L_11c6aab9;
L_11c6aa45:;
  /* 11c6aa45 mov eax, dword ptr [0x11c87e08] */
  EAX = (r32((uint32_t)(0x11c87e08)));
  /* 11c6aa4a mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 11c6aa4d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6aa4f je 0x11c6aab0 */
  if (C.zf) goto L_11c6aab0;
  /* 11c6aa51 test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 11c6aa55 je 0x11c6aab0 */
  if (C.zf) goto L_11c6aab0;
  /* 11c6aa57 push eax */
  push32((uint32_t)(EAX));
  /* 11c6aa58 push esi */
  push32((uint32_t)(ESI));
  /* 11c6aa59 call 0x11c68c9b */
  push32(0x11c6aa5eu); f_11c68c9b();
  /* 11c6aa5e mov eax, dword ptr [0x11c87e08] */
  EAX = (r32((uint32_t)(0x11c87e08)));
  /* 11c6aa63 pop ecx */
  ECX = (pop32());
  /* 11c6aa64 pop ecx */
  ECX = (pop32());
  /* 11c6aa65 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 11c6aa68 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 11c6aa6b test cl, 0x83 */
  { uint32_t _r=(CL)&(0x83u); fl_logic(_r,8); }
  /* 11c6aa6e je 0x11c6aaa0 */
  if (C.zf) goto L_11c6aaa0;
  /* 11c6aa70 cmp dword ptr [esp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6aa75 jne 0x11c6aa86 */
  if (!C.zf) goto L_11c6aa86;
  /* 11c6aa77 push eax */
  push32((uint32_t)(EAX));
  /* 11c6aa78 call 0x11c6a999 */
  push32(0x11c6aa7du); f_11c6a999();
  /* 11c6aa7d cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6aa80 pop ecx */
  ECX = (pop32());
  /* 11c6aa81 je 0x11c6aaa0 */
  if (C.zf) goto L_11c6aaa0;
  /* 11c6aa83 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11c6aa84 jmp 0x11c6aaa0 */
  goto L_11c6aaa0;
L_11c6aa86:;
  /* 11c6aa86 cmp dword ptr [esp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6aa8b jne 0x11c6aaa0 */
  if (!C.zf) goto L_11c6aaa0;
  /* 11c6aa8d test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 11c6aa90 je 0x11c6aaa0 */
  if (C.zf) goto L_11c6aaa0;
  /* 11c6aa92 push eax */
  push32((uint32_t)(EAX));
  /* 11c6aa93 call 0x11c6a999 */
  push32(0x11c6aa98u); f_11c6a999();
  /* 11c6aa98 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6aa9b pop ecx */
  ECX = (pop32());
  /* 11c6aa9c jne 0x11c6aaa0 */
  if (!C.zf) goto L_11c6aaa0;
  /* 11c6aa9e or edi, eax */
  { uint32_t _r=(EDI)|(EAX); EDI = (_r); fl_logic(_r,32); }
L_11c6aaa0:;
  /* 11c6aaa0 mov eax, dword ptr [0x11c87e08] */
  EAX = (r32((uint32_t)(0x11c87e08)));
  /* 11c6aaa5 push dword ptr [eax + esi*4] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*4))));
  /* 11c6aaa8 push esi */
  push32((uint32_t)(ESI));
  /* 11c6aaa9 call 0x11c68ced */
  push32(0x11c6aaaeu); f_11c68ced();
  /* 11c6aaae pop ecx */
  ECX = (pop32());
  /* 11c6aaaf pop ecx */
  ECX = (pop32());
L_11c6aab0:;
  /* 11c6aab0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c6aab1 cmp esi, dword ptr [0x11c88e20] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11c88e20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6aab7 jl 0x11c6aa45 */
  if ((C.sf!=C.of)) goto L_11c6aa45;
L_11c6aab9:;
  /* 11c6aab9 push 2 */
  push32((uint32_t)(0x2u));
  /* 11c6aabb call 0x11c66ae7 */
  push32(0x11c6aac0u); f_11c66ae7();
  /* 11c6aac0 cmp dword ptr [esp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6aac5 pop ecx */
  ECX = (pop32());
  /* 11c6aac6 mov eax, ebx */
  EAX = (EBX);
  /* 11c6aac8 je 0x11c6aacc */
  if (C.zf) goto L_11c6aacc;
  /* 11c6aaca mov eax, edi */
  EAX = (EDI);
L_11c6aacc:;
  /* 11c6aacc pop edi */
  EDI = (pop32());
  /* 11c6aacd pop esi */
  ESI = (pop32());
  /* 11c6aace pop ebx */
  EBX = (pop32());
  /* 11c6aacf ret  */
  ESPCHK(0x11c6aa2cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000aad0 @ 0x11c6aad0 (111 bytes, 44 insns) */
void f_11c6aad0(void) {
  FTRACE(0x11c6aad0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6aad0 push ebx */
  push32((uint32_t)(EBX));
  /* 11c6aad1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c6aad3 cmp dword ptr [0x11c87b00], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11c87b00))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6aad9 jne 0x11c6aaee */
  if (!C.zf) goto L_11c6aaee;
  /* 11c6aadb mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c6aadf cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6aae2 jl 0x11c6ab3d */
  if ((C.sf!=C.of)) goto L_11c6ab3d;
  /* 11c6aae4 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6aae7 jg 0x11c6ab3d */
  if ((!C.zf&&C.sf==C.of)) goto L_11c6ab3d;
  /* 11c6aae9 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6aaec pop ebx */
  EBX = (pop32());
  /* 11c6aaed ret  */
  ESPCHK(0x11c6aad0u, _esp0);
  ESP += 4; return;
L_11c6aaee:;
  /* 11c6aaee push esi */
  push32((uint32_t)(ESI));
  /* 11c6aaef mov esi, 0x11c87be8 */
  ESI = (0x11c87be8u);
  /* 11c6aaf4 push edi */
  push32((uint32_t)(EDI));
  /* 11c6aaf5 push esi */
  push32((uint32_t)(ESI));
  /* 11c6aaf6 call dword ptr [0x11c6e070] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e070))), 0x11c6aafcu);
  /* 11c6aafc cmp dword ptr [0x11c87be4], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11c87be4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6ab02 mov edi, dword ptr [0x11c6e074] */
  EDI = (r32((uint32_t)(0x11c6e074)));
  /* 11c6ab08 je 0x11c6ab18 */
  if (C.zf) goto L_11c6ab18;
  /* 11c6ab0a push esi */
  push32((uint32_t)(ESI));
  /* 11c6ab0b call edi */
  call_ind((uint32_t)(EDI), 0x11c6ab0du);
  /* 11c6ab0d push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11c6ab0f call 0x11c66a86 */
  push32(0x11c6ab14u); f_11c66a86();
  /* 11c6ab14 pop ecx */
  ECX = (pop32());
  /* 11c6ab15 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6ab17 pop ebx */
  EBX = (pop32());
L_11c6ab18:;
  /* 11c6ab18 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 11c6ab1c call 0x11c6ab3f */
  push32(0x11c6ab21u); f_11c6ab3f();
  /* 11c6ab21 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c6ab23 pop ecx */
  ECX = (pop32());
  /* 11c6ab24 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11c6ab28 je 0x11c6ab34 */
  if (C.zf) goto L_11c6ab34;
  /* 11c6ab2a push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11c6ab2c call 0x11c66ae7 */
  push32(0x11c6ab31u); f_11c66ae7();
  /* 11c6ab31 pop ecx */
  ECX = (pop32());
  /* 11c6ab32 jmp 0x11c6ab37 */
  goto L_11c6ab37;
L_11c6ab34:;
  /* 11c6ab34 push esi */
  push32((uint32_t)(ESI));
  /* 11c6ab35 call edi */
  call_ind((uint32_t)(EDI), 0x11c6ab37u);
L_11c6ab37:;
  /* 11c6ab37 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11c6ab3b pop edi */
  EDI = (pop32());
  /* 11c6ab3c pop esi */
  ESI = (pop32());
L_11c6ab3d:;
  /* 11c6ab3d pop ebx */
  EBX = (pop32());
  /* 11c6ab3e ret  */
  ESPCHK(0x11c6aad0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab3f @ 0x11c6ab3f (204 bytes, 71 insns) */
void f_11c6ab3f(void) {
  FTRACE(0x11c6ab3fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6ab3f push ebp */
  push32((uint32_t)(EBP));
  /* 11c6ab40 mov ebp, esp */
  EBP = (ESP);
  /* 11c6ab42 push ecx */
  push32((uint32_t)(ECX));
  /* 11c6ab43 cmp dword ptr [0x11c87b00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c87b00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6ab4a push ebx */
  push32((uint32_t)(EBX));
  /* 11c6ab4b jne 0x11c6ab6a */
  if (!C.zf) goto L_11c6ab6a;
  /* 11c6ab4d mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c6ab50 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6ab53 jl 0x11c6ac08 */
  if ((C.sf!=C.of)) goto L_11c6ac08;
  /* 11c6ab59 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6ab5c jg 0x11c6ac08 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c6ac08;
  /* 11c6ab62 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6ab65 jmp 0x11c6ac08 */
  goto L_11c6ac08;
L_11c6ab6a:;
  /* 11c6ab6a mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c6ab6d cmp ebx, 0x100 */
  { uint32_t _a=(EBX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6ab73 jge 0x11c6ab9d */
  if ((C.sf==C.of)) goto L_11c6ab9d;
  /* 11c6ab75 cmp dword ptr [0x11c70760], 1 */
  { uint32_t _a=(r32((uint32_t)(0x11c70760))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6ab7c jle 0x11c6ab8a */
  if ((C.zf||C.sf!=C.of)) goto L_11c6ab8a;
  /* 11c6ab7e push 2 */
  push32((uint32_t)(0x2u));
  /* 11c6ab80 push ebx */
  push32((uint32_t)(EBX));
  /* 11c6ab81 call 0x11c65c75 */
  push32(0x11c6ab86u); f_11c65c75();
  /* 11c6ab86 pop ecx */
  ECX = (pop32());
  /* 11c6ab87 pop ecx */
  ECX = (pop32());
  /* 11c6ab88 jmp 0x11c6ab95 */
  goto L_11c6ab95;
L_11c6ab8a:;
  /* 11c6ab8a mov eax, dword ptr [0x11c7076c] */
  EAX = (r32((uint32_t)(0x11c7076c)));
  /* 11c6ab8f mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 11c6ab92 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
L_11c6ab95:;
  /* 11c6ab95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6ab97 jne 0x11c6ab9d */
  if (!C.zf) goto L_11c6ab9d;
L_11c6ab99:;
  /* 11c6ab99 mov eax, ebx */
  EAX = (EBX);
  /* 11c6ab9b jmp 0x11c6ac08 */
  goto L_11c6ac08;
L_11c6ab9d:;
  /* 11c6ab9d mov edx, dword ptr [0x11c7076c] */
  EDX = (r32((uint32_t)(0x11c7076c)));
  /* 11c6aba3 mov eax, ebx */
  EAX = (EBX);
  /* 11c6aba5 sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11c6aba8 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 11c6abab test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 11c6abb0 je 0x11c6abc0 */
  if (C.zf) goto L_11c6abc0;
  /* 11c6abb2 and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 11c6abb6 mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 11c6abb9 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 11c6abbc push 2 */
  push32((uint32_t)(0x2u));
  /* 11c6abbe jmp 0x11c6abc9 */
  goto L_11c6abc9;
L_11c6abc0:;
  /* 11c6abc0 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 11c6abc4 mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 11c6abc7 push 1 */
  push32((uint32_t)(0x1u));
L_11c6abc9:;
  /* 11c6abc9 pop eax */
  EAX = (pop32());
  /* 11c6abca lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 11c6abcd push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6abcf push 0 */
  push32((uint32_t)(0x0u));
  /* 11c6abd1 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c6abd3 push ecx */
  push32((uint32_t)(ECX));
  /* 11c6abd4 push eax */
  push32((uint32_t)(EAX));
  /* 11c6abd5 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 11c6abd8 push eax */
  push32((uint32_t)(EAX));
  /* 11c6abd9 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11c6abde push dword ptr [0x11c87b00] */
  push32((uint32_t)(r32((uint32_t)(0x11c87b00))));
  /* 11c6abe4 call 0x11c69a66 */
  push32(0x11c6abe9u); f_11c69a66();
  /* 11c6abe9 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6abec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6abee je 0x11c6ab99 */
  if (C.zf) goto L_11c6ab99;
  /* 11c6abf0 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6abf3 jne 0x11c6abfb */
  if (!C.zf) goto L_11c6abfb;
  /* 11c6abf5 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11c6abf9 jmp 0x11c6ac08 */
  goto L_11c6ac08;
L_11c6abfb:;
  /* 11c6abfb movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 11c6abff movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 11c6ac03 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 11c6ac06 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_11c6ac08:;
  /* 11c6ac08 pop ebx */
  EBX = (pop32());
  /* 11c6ac09 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c6ac0a ret  */
  ESPCHK(0x11c6ab3fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac10 @ 0x11c6ac10 (62 bytes, 35 insns) */
void f_11c6ac10(void) {
  FTRACE(0x11c6ac10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6ac10 push ebp */
  push32((uint32_t)(EBP));
  /* 11c6ac11 mov ebp, esp */
  EBP = (ESP);
  /* 11c6ac13 push esi */
  push32((uint32_t)(ESI));
  /* 11c6ac14 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c6ac16 push eax */
  push32((uint32_t)(EAX));
  /* 11c6ac17 push eax */
  push32((uint32_t)(EAX));
  /* 11c6ac18 push eax */
  push32((uint32_t)(EAX));
  /* 11c6ac19 push eax */
  push32((uint32_t)(EAX));
  /* 11c6ac1a push eax */
  push32((uint32_t)(EAX));
  /* 11c6ac1b push eax */
  push32((uint32_t)(EAX));
  /* 11c6ac1c push eax */
  push32((uint32_t)(EAX));
  /* 11c6ac1d push eax */
  push32((uint32_t)(EAX));
  /* 11c6ac1e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c6ac21 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c6ac24:;
  /* 11c6ac24 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11c6ac26 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11c6ac28 je 0x11c6ac31 */
  if (C.zf) goto L_11c6ac31;
  /* 11c6ac2a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11c6ac2b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11c6ac2b");
  /* 11c6ac2f jmp 0x11c6ac24 */
  goto L_11c6ac24;
L_11c6ac31:;
  /* 11c6ac31 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c6ac34 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 11c6ac37 nop  */
  /* nop */
L_11c6ac38:;
  /* 11c6ac38 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c6ac39 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c6ac3b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11c6ac3d je 0x11c6ac46 */
  if (C.zf) goto L_11c6ac46;
  /* 11c6ac3f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c6ac40 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11c6ac40");
  /* 11c6ac44 jae 0x11c6ac38 */
  if (!C.cf) goto L_11c6ac38;
L_11c6ac46:;
  /* 11c6ac46 mov eax, ecx */
  EAX = (ECX);
  /* 11c6ac48 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6ac4b pop esi */
  ESI = (pop32());
  /* 11c6ac4c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c6ac4d ret  */
  ESPCHK(0x11c6ac10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac50 @ 0x11c6ac50 (58 bytes, 32 insns) */
void f_11c6ac50(void) {
  FTRACE(0x11c6ac50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6ac50 push ebp */
  push32((uint32_t)(EBP));
  /* 11c6ac51 mov ebp, esp */
  EBP = (ESP);
  /* 11c6ac53 push esi */
  push32((uint32_t)(ESI));
  /* 11c6ac54 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c6ac56 push eax */
  push32((uint32_t)(EAX));
  /* 11c6ac57 push eax */
  push32((uint32_t)(EAX));
  /* 11c6ac58 push eax */
  push32((uint32_t)(EAX));
  /* 11c6ac59 push eax */
  push32((uint32_t)(EAX));
  /* 11c6ac5a push eax */
  push32((uint32_t)(EAX));
  /* 11c6ac5b push eax */
  push32((uint32_t)(EAX));
  /* 11c6ac5c push eax */
  push32((uint32_t)(EAX));
  /* 11c6ac5d push eax */
  push32((uint32_t)(EAX));
  /* 11c6ac5e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c6ac61 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c6ac64:;
  /* 11c6ac64 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 11c6ac66 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11c6ac68 je 0x11c6ac71 */
  if (C.zf) goto L_11c6ac71;
  /* 11c6ac6a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 11c6ac6b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x11c6ac6b");
  /* 11c6ac6f jmp 0x11c6ac64 */
  goto L_11c6ac64;
L_11c6ac71:;
  /* 11c6ac71 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_11c6ac74:;
  /* 11c6ac74 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c6ac76 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11c6ac78 je 0x11c6ac84 */
  if (C.zf) goto L_11c6ac84;
  /* 11c6ac7a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c6ac7b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x11c6ac7b");
  /* 11c6ac7f jae 0x11c6ac74 */
  if (!C.cf) goto L_11c6ac74;
  /* 11c6ac81 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_11c6ac84:;
  /* 11c6ac84 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6ac87 pop esi */
  ESI = (pop32());
  /* 11c6ac88 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c6ac89 ret  */
  ESPCHK(0x11c6ac50u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ac8a @ 0x11c6ac8a (544 bytes, 177 insns) */
void f_11c6ac8a(void) {
  FTRACE(0x11c6ac8au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6ac8a push ebp */
  push32((uint32_t)(EBP));
  /* 11c6ac8b mov ebp, esp */
  EBP = (ESP);
  /* 11c6ac8d sub esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6ac90 push ebx */
  push32((uint32_t)(EBX));
  /* 11c6ac91 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c6ac94 push esi */
  push32((uint32_t)(ESI));
  /* 11c6ac95 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c6ac98 mov cx, word ptr [ebx + 0xa] */
  CX = (r16((uint32_t)(EBX + 0xa)));
  /* 11c6ac9c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c6ac9e push edi */
  push32((uint32_t)(EDI));
  /* 11c6ac9f mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11c6aca2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11c6aca5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11c6aca8 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11c6acab mov ax, word ptr [esi + 0xa] */
  AX = (r16((uint32_t)(ESI + 0xa)));
  /* 11c6acaf mov edi, ecx */
  EDI = (ECX);
  /* 11c6acb1 mov edx, 0x7fff */
  EDX = (0x7fffu);
  /* 11c6acb6 xor edi, eax */
  { uint32_t _r=(EDI)^(EAX); EDI = (_r); fl_logic(_r,32); }
  /* 11c6acb8 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 11c6acba and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 11c6acbc and edi, 0x8000 */
  { uint32_t _r=(EDI)&(0x8000u); EDI = (_r); fl_logic(_r,32); }
  /* 11c6acc2 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c6acc6 lea edx, [ecx + eax] */
  EDX = ((uint32_t)(ECX + EAX*1));
  /* 11c6acc9 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 11c6accc jae 0x11c6ae8a */
  if (!C.cf) goto L_11c6ae8a;
  /* 11c6acd2 cmp cx, 0x7fff */
  { uint32_t _a=(CX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c6acd7 jae 0x11c6ae8a */
  if (!C.cf) goto L_11c6ae8a;
  /* 11c6acdd cmp dx, 0xbffd */
  { uint32_t _a=(DX),_b=(0xbffdu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c6ace2 ja 0x11c6ae8a */
  if ((!C.cf&&!C.zf)) goto L_11c6ae8a;
  /* 11c6ace8 cmp dx, 0x3fbf */
  { uint32_t _a=(DX),_b=(0x3fbfu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c6aced ja 0x11c6acf3 */
  if ((!C.cf&&!C.zf)) goto L_11c6acf3;
  /* 11c6acef xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c6acf1 jmp 0x11c6ad2d */
  goto L_11c6ad2d;
L_11c6acf3:;
  /* 11c6acf3 test ax, ax */
  { uint32_t _r=(AX)&(AX); fl_logic(_r,16); }
  /* 11c6acf6 mov edx, 0x7fffffff */
  EDX = (0x7fffffffu);
  /* 11c6acfb jne 0x11c6ad15 */
  if (!C.zf) goto L_11c6ad15;
  /* 11c6acfd inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 11c6ad00 test dword ptr [esi + 8], edx */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 11c6ad03 jne 0x11c6ad15 */
  if (!C.zf) goto L_11c6ad15;
  /* 11c6ad05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c6ad07 cmp dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6ad0a jne 0x11c6ad17 */
  if (!C.zf) goto L_11c6ad17;
  /* 11c6ad0c cmp dword ptr [esi], eax */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6ad0e jne 0x11c6ad17 */
  if (!C.zf) goto L_11c6ad17;
  /* 11c6ad10 jmp 0x11c6ae84 */
  goto L_11c6ae84;
L_11c6ad15:;
  /* 11c6ad15 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c6ad17:;
  /* 11c6ad17 cmp cx, ax */
  { uint32_t _a=(CX),_b=(AX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c6ad1a jne 0x11c6ad3a */
  if (!C.zf) goto L_11c6ad3a;
  /* 11c6ad1c inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 11c6ad1f test dword ptr [ebx + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 11c6ad22 jne 0x11c6ad3a */
  if (!C.zf) goto L_11c6ad3a;
  /* 11c6ad24 cmp dword ptr [ebx + 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6ad27 jne 0x11c6ad3a */
  if (!C.zf) goto L_11c6ad3a;
  /* 11c6ad29 cmp dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6ad2b jne 0x11c6ad3a */
  if (!C.zf) goto L_11c6ad3a;
L_11c6ad2d:;
  /* 11c6ad2d mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 11c6ad30 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 11c6ad33 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11c6ad35 jmp 0x11c6aea5 */
  goto L_11c6aea5;
L_11c6ad3a:;
  /* 11c6ad3a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11c6ad3d lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 11c6ad40 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11c6ad43 mov dword ptr [ebp + 0xc], 5 */
  w32((uint32_t)(EBP + 0xc), (0x5u));
L_11c6ad4a:;
  /* 11c6ad4a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11c6ad4d add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6ad4f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6ad53 jle 0x11c6ad9e */
  if ((C.zf||C.sf!=C.of)) goto L_11c6ad9e;
  /* 11c6ad55 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6ad57 lea ecx, [ebx + 8] */
  ECX = ((uint32_t)(EBX + 0x8));
  /* 11c6ad5a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11c6ad5d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c6ad60 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 11c6ad63 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_11c6ad66:;
  /* 11c6ad66 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11c6ad69 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c6ad6c movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 11c6ad6f movzx ecx, word ptr [ecx] */
  ECX = ((uint32_t)(r16((uint32_t)(ECX))));
  /* 11c6ad72 imul eax, ecx */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 11c6ad75 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c6ad78 add ecx, -4 */
  { uint32_t _a=(ECX),_b=(0xfffffffcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6ad7b push ecx */
  push32((uint32_t)(ECX));
  /* 11c6ad7c push eax */
  push32((uint32_t)(EAX));
  /* 11c6ad7d push dword ptr [ecx] */
  push32((uint32_t)(r32((uint32_t)(ECX))));
  /* 11c6ad7f call 0x11c69cb5 */
  push32(0x11c6ad84u); f_11c69cb5();
  /* 11c6ad84 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6ad87 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6ad89 je 0x11c6ad91 */
  if (C.zf) goto L_11c6ad91;
  /* 11c6ad8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c6ad8e inc word ptr [eax] */
  { uint32_t _r=(r16((uint32_t)(EAX)))+1; w16((uint32_t)(EAX), (_r)); fl_inc(_r,16); }
L_11c6ad91:;
  /* 11c6ad91 add dword ptr [ebp - 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c6ad95 sub dword ptr [ebp - 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2u),_r=_a-_b; w32((uint32_t)(EBP + -0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 11c6ad99 dec dword ptr [ebp - 0x18] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))-1; w32((uint32_t)(EBP + -0x18), (_r)); fl_dec(_r,32); }
  /* 11c6ad9c jne 0x11c6ad66 */
  if (!C.zf) goto L_11c6ad66;
L_11c6ad9e:;
  /* 11c6ad9e add dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c6ada2 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 11c6ada5 dec dword ptr [ebp + 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))-1; w32((uint32_t)(EBP + 0xc), (_r)); fl_dec(_r,32); }
  /* 11c6ada8 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6adac jg 0x11c6ad4a */
  if ((!C.zf&&C.sf==C.of)) goto L_11c6ad4a;
  /* 11c6adae add dword ptr [ebp + 8], 0xc002 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xc002u),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c6adb5 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c6adba jle 0x11c6ade1 */
  if ((C.zf||C.sf!=C.of)) goto L_11c6ade1;
L_11c6adbc:;
  /* 11c6adbc test byte ptr [ebp - 0x19], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x19)))&(0x80u); fl_logic(_r,8); }
  /* 11c6adc0 jne 0x11c6adda */
  if (!C.zf) goto L_11c6adda;
  /* 11c6adc2 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 11c6adc5 push eax */
  push32((uint32_t)(EAX));
  /* 11c6adc6 call 0x11c69d34 */
  push32(0x11c6adcbu); f_11c69d34();
  /* 11c6adcb add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c6add2 pop ecx */
  ECX = (pop32());
  /* 11c6add3 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c6add8 jg 0x11c6adbc */
  if ((!C.zf&&C.sf==C.of)) goto L_11c6adbc;
L_11c6adda:;
  /* 11c6adda cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c6addf jg 0x11c6ae1a */
  if ((!C.zf&&C.sf==C.of)) goto L_11c6ae1a;
L_11c6ade1:;
  /* 11c6ade1 add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c6ade8 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c6aded jge 0x11c6ae1a */
  if ((C.sf==C.of)) goto L_11c6ae1a;
  /* 11c6adef movsx eax, word ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + 0x8))));
  /* 11c6adf3 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c6adf5 add dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c6adf8 mov ebx, eax */
  EBX = (EAX);
L_11c6adfa:;
  /* 11c6adfa test byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))&(0x1u); fl_logic(_r,8); }
  /* 11c6adfe je 0x11c6ae03 */
  if (C.zf) goto L_11c6ae03;
  /* 11c6ae00 inc dword ptr [ebp - 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x14)))+1; w32((uint32_t)(EBP + -0x14), (_r)); fl_inc(_r,32); }
L_11c6ae03:;
  /* 11c6ae03 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 11c6ae06 push eax */
  push32((uint32_t)(EAX));
  /* 11c6ae07 call 0x11c69d62 */
  push32(0x11c6ae0cu); f_11c69d62();
  /* 11c6ae0c dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11c6ae0d pop ecx */
  ECX = (pop32());
  /* 11c6ae0e jne 0x11c6adfa */
  if (!C.zf) goto L_11c6adfa;
  /* 11c6ae10 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6ae14 je 0x11c6ae1a */
  if (C.zf) goto L_11c6ae1a;
  /* 11c6ae16 or byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))|(0x1u); w8((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,8); }
L_11c6ae1a:;
  /* 11c6ae1a cmp word ptr [ebp - 0x24], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x24))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c6ae20 ja 0x11c6ae31 */
  if ((!C.cf&&!C.zf)) goto L_11c6ae31;
  /* 11c6ae22 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 11c6ae25 and eax, 0x1ffff */
  { uint32_t _r=(EAX)&(0x1ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c6ae2a cmp eax, 0x18000 */
  { uint32_t _a=(EAX),_b=(0x18000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6ae2f jne 0x11c6ae66 */
  if (!C.zf) goto L_11c6ae66;
L_11c6ae31:;
  /* 11c6ae31 cmp dword ptr [ebp - 0x22], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6ae35 jne 0x11c6ae63 */
  if (!C.zf) goto L_11c6ae63;
  /* 11c6ae37 and dword ptr [ebp - 0x22], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))&(0x0u); w32((uint32_t)(EBP + -0x22), (_r)); fl_logic(_r,32); }
  /* 11c6ae3b cmp dword ptr [ebp - 0x1e], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1e))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6ae3f jne 0x11c6ae5e */
  if (!C.zf) goto L_11c6ae5e;
  /* 11c6ae41 and dword ptr [ebp - 0x1e], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))&(0x0u); w32((uint32_t)(EBP + -0x1e), (_r)); fl_logic(_r,32); }
  /* 11c6ae45 cmp word ptr [ebp - 0x1a], 0xffff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x1a))),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c6ae4b jne 0x11c6ae58 */
  if (!C.zf) goto L_11c6ae58;
  /* 11c6ae4d inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 11c6ae50 mov word ptr [ebp - 0x1a], 0x8000 */
  w16((uint32_t)(EBP + -0x1a), (0x8000u));
  /* 11c6ae56 jmp 0x11c6ae66 */
  goto L_11c6ae66;
L_11c6ae58:;
  /* 11c6ae58 inc word ptr [ebp - 0x1a] */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x1a)))+1; w16((uint32_t)(EBP + -0x1a), (_r)); fl_inc(_r,16); }
  /* 11c6ae5c jmp 0x11c6ae66 */
  goto L_11c6ae66;
L_11c6ae5e:;
  /* 11c6ae5e inc dword ptr [ebp - 0x1e] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))+1; w32((uint32_t)(EBP + -0x1e), (_r)); fl_inc(_r,32); }
  /* 11c6ae61 jmp 0x11c6ae66 */
  goto L_11c6ae66;
L_11c6ae63:;
  /* 11c6ae63 inc dword ptr [ebp - 0x22] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))+1; w32((uint32_t)(EBP + -0x22), (_r)); fl_inc(_r,32); }
L_11c6ae66:;
  /* 11c6ae66 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c6ae69 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c6ae6d jae 0x11c6ae8a */
  if (!C.cf) goto L_11c6ae8a;
  /* 11c6ae6f mov cx, word ptr [ebp - 0x22] */
  CX = (r16((uint32_t)(EBP + -0x22)));
  /* 11c6ae73 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 11c6ae75 mov word ptr [esi], cx */
  w16((uint32_t)(ESI), (CX));
  /* 11c6ae78 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11c6ae7b mov dword ptr [esi + 2], ecx */
  w32((uint32_t)(ESI + 0x2), (ECX));
  /* 11c6ae7e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11c6ae81 mov dword ptr [esi + 6], ecx */
  w32((uint32_t)(ESI + 0x6), (ECX));
L_11c6ae84:;
  /* 11c6ae84 mov word ptr [esi + 0xa], ax */
  w16((uint32_t)(ESI + 0xa), (AX));
  /* 11c6ae88 jmp 0x11c6aea5 */
  goto L_11c6aea5;
L_11c6ae8a:;
  /* 11c6ae8a neg di */
  { uint32_t _a=(DI),_r=0u-_a; DI = (_r); fl_sub(0,_a,_r,16); }
  /* 11c6ae8d sbb edi, edi */
  { uint32_t _a=(EDI),_b=(EDI),_r=_a-_b-C.cf; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6ae8f and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11c6ae93 and edi, 0x80000000 */
  { uint32_t _r=(EDI)&(0x80000000u); EDI = (_r); fl_logic(_r,32); }
  /* 11c6ae99 add edi, 0x7fff8000 */
  { uint32_t _a=(EDI),_b=(0x7fff8000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6ae9f and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11c6aea2 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
L_11c6aea5:;
  /* 11c6aea5 pop edi */
  EDI = (pop32());
  /* 11c6aea6 pop esi */
  ESI = (pop32());
  /* 11c6aea7 pop ebx */
  EBX = (pop32());
  /* 11c6aea8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c6aea9 ret  */
  ESPCHK(0x11c6ac8au, _esp0);
  ESP += 4; return;
}

/* FUN_1000aeaa @ 0x11c6aeaa (124 bytes, 52 insns) */
void f_11c6aeaa(void) {
  FTRACE(0x11c6aeaau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6aeaa push ebp */
  push32((uint32_t)(EBP));
  /* 11c6aeab mov ebp, esp */
  EBP = (ESP);
  /* 11c6aead sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6aeb0 push ebx */
  push32((uint32_t)(EBX));
  /* 11c6aeb1 mov ebx, 0x11c73350 */
  EBX = (0x11c73350u);
  /* 11c6aeb6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11c6aeb8 sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6aebb cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6aebe je 0x11c6af23 */
  if (C.zf) goto L_11c6af23;
  /* 11c6aec0 jge 0x11c6aed2 */
  if ((C.sf==C.of)) goto L_11c6aed2;
  /* 11c6aec2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c6aec5 mov ebx, 0x11c734b0 */
  EBX = (0x11c734b0u);
  /* 11c6aeca neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c6aecc mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 11c6aecf sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
L_11c6aed2:;
  /* 11c6aed2 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6aed5 jne 0x11c6aedd */
  if (!C.zf) goto L_11c6aedd;
  /* 11c6aed7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c6aeda mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
L_11c6aedd:;
  /* 11c6aedd cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6aee0 je 0x11c6af23 */
  if (C.zf) goto L_11c6af23;
  /* 11c6aee2 push esi */
  push32((uint32_t)(ESI));
  /* 11c6aee3 push edi */
  push32((uint32_t)(EDI));
L_11c6aee4:;
  /* 11c6aee4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c6aee7 add ebx, 0x54 */
  { uint32_t _a=(EBX),_b=(0x54u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6aeea sar dword ptr [ebp + 0xc], 3 */
  w32((uint32_t)(EBP + 0xc), (sh_sar((uint32_t)(r32((uint32_t)(EBP + 0xc))), (0x3u)&0x1f, 32)));
  /* 11c6aeee and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 11c6aef1 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6aef3 je 0x11c6af1c */
  if (C.zf) goto L_11c6af1c;
  /* 11c6aef5 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 11c6aef8 cmp word ptr [ebx + eax*4], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBX + EAX*4))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 11c6aefe lea esi, [ebx + eax*4] */
  ESI = ((uint32_t)(EBX + EAX*4));
  /* 11c6af01 jb 0x11c6af0f */
  if (C.cf) goto L_11c6af0f;
  /* 11c6af03 lea edi, [ebp - 0xc] */
  EDI = ((uint32_t)(EBP + -0xc));
  /* 11c6af06 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11c6af07 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11c6af08 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 11c6af09 dec dword ptr [ebp - 0xa] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xa)))-1; w32((uint32_t)(EBP + -0xa), (_r)); fl_dec(_r,32); }
  /* 11c6af0c lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
L_11c6af0f:;
  /* 11c6af0f push esi */
  push32((uint32_t)(ESI));
  /* 11c6af10 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c6af13 call 0x11c6ac8a */
  push32(0x11c6af18u); f_11c6ac8a();
  /* 11c6af18 pop ecx */
  ECX = (pop32());
  /* 11c6af19 pop ecx */
  ECX = (pop32());
  /* 11c6af1a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_11c6af1c:;
  /* 11c6af1c cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6af1f jne 0x11c6aee4 */
  if (!C.zf) goto L_11c6aee4;
  /* 11c6af21 pop edi */
  EDI = (pop32());
  /* 11c6af22 pop esi */
  ESI = (pop32());
L_11c6af23:;
  /* 11c6af23 pop ebx */
  EBX = (pop32());
  /* 11c6af24 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c6af25 ret  */
  ESPCHK(0x11c6aeaau, _esp0);
  ESP += 4; return;
}

/* __mbsnbicoll @ 0x11c6af64 (63 bytes, 24 insns) */
void f_11c6af64(void) {
  FTRACE(0x11c6af64u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6af64 push ebp */
  push32((uint32_t)(EBP));
  /* 11c6af65 mov ebp, esp */
  EBP = (ESP);
  /* 11c6af67 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6af6b jne 0x11c6af71 */
  if (!C.zf) goto L_11c6af71;
  /* 11c6af6d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c6af6f pop ebp */
  EBP = (pop32());
  /* 11c6af70 ret  */
  ESPCHK(0x11c6af64u, _esp0);
  ESP += 4; return;
L_11c6af71:;
  /* 11c6af71 push dword ptr [0x11c87bec] */
  push32((uint32_t)(r32((uint32_t)(0x11c87bec))));
  /* 11c6af77 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c6af7a push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c6af7d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c6af80 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c6af83 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6af85 push dword ptr [0x11c87e04] */
  push32((uint32_t)(r32((uint32_t)(0x11c87e04))));
  /* 11c6af8b call 0x11c6b301 */
  push32(0x11c6af90u); f_11c6b301();
  /* 11c6af90 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6af93 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6af95 jne 0x11c6af9e */
  if (!C.zf) goto L_11c6af9e;
  /* 11c6af97 mov eax, 0x7fffffff */
  EAX = (0x7fffffffu);
  /* 11c6af9c pop ebp */
  EBP = (pop32());
  /* 11c6af9d ret  */
  ESPCHK(0x11c6af64u, _esp0);
  ESP += 4; return;
L_11c6af9e:;
  /* 11c6af9e add eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6afa1 pop ebp */
  EBP = (pop32());
  /* 11c6afa2 ret  */
  ESPCHK(0x11c6af64u, _esp0);
  ESP += 4; return;
}

/* FUN_1000afa3 @ 0x11c6afa3 (110 bytes, 58 insns) */
void f_11c6afa3(void) {
  FTRACE(0x11c6afa3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6afa3 push ecx */
  push32((uint32_t)(ECX));
  /* 11c6afa4 push ebx */
  push32((uint32_t)(EBX));
  /* 11c6afa5 push ebp */
  push32((uint32_t)(EBP));
  /* 11c6afa6 push esi */
  push32((uint32_t)(ESI));
  /* 11c6afa7 mov esi, dword ptr [0x11c8786c] */
  ESI = (r32((uint32_t)(0x11c8786c)));
  /* 11c6afad push edi */
  push32((uint32_t)(EDI));
  /* 11c6afae xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c6afb0 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c6afb2 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6afb4 je 0x11c6b004 */
  if (C.zf) goto L_11c6b004;
  /* 11c6afb6 mov ebx, dword ptr [0x11c6e09c] */
  EBX = (r32((uint32_t)(0x11c6e09c)));
L_11c6afbc:;
  /* 11c6afbc push edi */
  push32((uint32_t)(EDI));
  /* 11c6afbd push edi */
  push32((uint32_t)(EDI));
  /* 11c6afbe push edi */
  push32((uint32_t)(EDI));
  /* 11c6afbf push edi */
  push32((uint32_t)(EDI));
  /* 11c6afc0 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c6afc2 push eax */
  push32((uint32_t)(EAX));
  /* 11c6afc3 push edi */
  push32((uint32_t)(EDI));
  /* 11c6afc4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6afc6 call ebx */
  call_ind((uint32_t)(EBX), 0x11c6afc8u);
  /* 11c6afc8 mov ebp, eax */
  EBP = (EAX);
  /* 11c6afca cmp ebp, edi */
  { uint32_t _a=(EBP),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6afcc je 0x11c6b00c */
  if (C.zf) goto L_11c6b00c;
  /* 11c6afce push ebp */
  push32((uint32_t)(EBP));
  /* 11c6afcf call 0x11c64f87 */
  push32(0x11c6afd4u); f_11c64f87();
  /* 11c6afd4 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6afd6 pop ecx */
  ECX = (pop32());
  /* 11c6afd7 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 11c6afdb je 0x11c6b00c */
  if (C.zf) goto L_11c6b00c;
  /* 11c6afdd push edi */
  push32((uint32_t)(EDI));
  /* 11c6afde push edi */
  push32((uint32_t)(EDI));
  /* 11c6afdf push ebp */
  push32((uint32_t)(EBP));
  /* 11c6afe0 push eax */
  push32((uint32_t)(EAX));
  /* 11c6afe1 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c6afe3 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11c6afe5 push edi */
  push32((uint32_t)(EDI));
  /* 11c6afe6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6afe8 call ebx */
  call_ind((uint32_t)(EBX), 0x11c6afeau);
  /* 11c6afea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6afec je 0x11c6b00c */
  if (C.zf) goto L_11c6b00c;
  /* 11c6afee push edi */
  push32((uint32_t)(EDI));
  /* 11c6afef push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 11c6aff3 call 0x11c6b57e */
  push32(0x11c6aff8u); f_11c6b57e();
  /* 11c6aff8 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11c6affb add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6affe pop ecx */
  ECX = (pop32());
  /* 11c6afff cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b001 pop ecx */
  ECX = (pop32());
  /* 11c6b002 jne 0x11c6afbc */
  if (!C.zf) goto L_11c6afbc;
L_11c6b004:;
  /* 11c6b004 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c6b006:;
  /* 11c6b006 pop edi */
  EDI = (pop32());
  /* 11c6b007 pop esi */
  ESI = (pop32());
  /* 11c6b008 pop ebp */
  EBP = (pop32());
  /* 11c6b009 pop ebx */
  EBX = (pop32());
  /* 11c6b00a pop ecx */
  ECX = (pop32());
  /* 11c6b00b ret  */
  ESPCHK(0x11c6afa3u, _esp0);
  ESP += 4; return;
L_11c6b00c:;
  /* 11c6b00c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c6b00f jmp 0x11c6b006 */
  goto L_11c6b006;
}

/* FUN_1000b011 @ 0x11c6b011 (49 bytes, 20 insns) */
void f_11c6b011(void) {
  FTRACE(0x11c6b011u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6b011 push esi */
  push32((uint32_t)(ESI));
  /* 11c6b012 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c6b016 push edi */
  push32((uint32_t)(EDI));
  /* 11c6b017 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 11c6b01a test byte ptr [esi + 0xc], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x40u); fl_logic(_r,8); }
  /* 11c6b01e je 0x11c6b026 */
  if (C.zf) goto L_11c6b026;
  /* 11c6b020 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 11c6b024 jmp 0x11c6b03d */
  goto L_11c6b03d;
L_11c6b026:;
  /* 11c6b026 push esi */
  push32((uint32_t)(ESI));
  /* 11c6b027 call 0x11c68c6c */
  push32(0x11c6b02cu); f_11c68c6c();
  /* 11c6b02c push esi */
  push32((uint32_t)(ESI));
  /* 11c6b02d call 0x11c6b042 */
  push32(0x11c6b032u); f_11c6b042();
  /* 11c6b032 push esi */
  push32((uint32_t)(ESI));
  /* 11c6b033 mov edi, eax */
  EDI = (EAX);
  /* 11c6b035 call 0x11c68cbe */
  push32(0x11c6b03au); f_11c68cbe();
  /* 11c6b03a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c6b03d:;
  /* 11c6b03d mov eax, edi */
  EAX = (EDI);
  /* 11c6b03f pop edi */
  EDI = (pop32());
  /* 11c6b040 pop esi */
  ESI = (pop32());
  /* 11c6b041 ret  */
  ESPCHK(0x11c6b011u, _esp0);
  ESP += 4; return;
}

/* __fclose_lk @ 0x11c6b042 (76 bytes, 30 insns) */
void f_11c6b042(void) {
  FTRACE(0x11c6b042u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6b042 push esi */
  push32((uint32_t)(ESI));
  /* 11c6b043 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c6b047 push edi */
  push32((uint32_t)(EDI));
  /* 11c6b048 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 11c6b04b test byte ptr [esi + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 11c6b04f je 0x11c6b085 */
  if (C.zf) goto L_11c6b085;
  /* 11c6b051 push esi */
  push32((uint32_t)(ESI));
  /* 11c6b052 call 0x11c6a9c7 */
  push32(0x11c6b057u); f_11c6a9c7();
  /* 11c6b057 push esi */
  push32((uint32_t)(ESI));
  /* 11c6b058 mov edi, eax */
  EDI = (EAX);
  /* 11c6b05a call 0x11c6b8a4 */
  push32(0x11c6b05fu); f_11c6b8a4();
  /* 11c6b05f push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 11c6b062 call 0x11c6b7c4 */
  push32(0x11c6b067u); f_11c6b7c4();
  /* 11c6b067 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6b06a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6b06c jge 0x11c6b073 */
  if ((C.sf==C.of)) goto L_11c6b073;
  /* 11c6b06e or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 11c6b071 jmp 0x11c6b085 */
  goto L_11c6b085;
L_11c6b073:;
  /* 11c6b073 mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 11c6b076 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6b078 je 0x11c6b085 */
  if (C.zf) goto L_11c6b085;
  /* 11c6b07a push eax */
  push32((uint32_t)(EAX));
  /* 11c6b07b call 0x11c66afc */
  push32(0x11c6b080u); f_11c66afc();
  /* 11c6b080 and dword ptr [esi + 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x1c)))&(0x0u); w32((uint32_t)(ESI + 0x1c), (_r)); fl_logic(_r,32); }
  /* 11c6b084 pop ecx */
  ECX = (pop32());
L_11c6b085:;
  /* 11c6b085 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 11c6b089 mov eax, edi */
  EAX = (EDI);
  /* 11c6b08b pop edi */
  EDI = (pop32());
  /* 11c6b08c pop esi */
  ESI = (pop32());
  /* 11c6b08d ret  */
  ESPCHK(0x11c6b042u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b08e @ 0x11c6b08e (147 bytes, 52 insns) */
void f_11c6b08e(void) {
  FTRACE(0x11c6b08eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6b08e push ebx */
  push32((uint32_t)(EBX));
  /* 11c6b08f mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c6b093 cmp ebx, dword ptr [0x11c88f60] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x11c88f60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b099 push esi */
  push32((uint32_t)(ESI));
  /* 11c6b09a push edi */
  push32((uint32_t)(EDI));
  /* 11c6b09b jae 0x11c6b10f */
  if (!C.cf) goto L_11c6b10f;
  /* 11c6b09d mov eax, ebx */
  EAX = (EBX);
  /* 11c6b09f sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11c6b0a2 lea edi, [eax*4 + 0x11c88e60] */
  EDI = ((uint32_t)(EAX*4 + 0x11c88e60));
  /* 11c6b0a9 mov eax, ebx */
  EAX = (EBX);
  /* 11c6b0ab and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11c6b0ae lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 11c6b0b1 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11c6b0b3 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11c6b0b6 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11c6b0bb je 0x11c6b10f */
  if (C.zf) goto L_11c6b10f;
  /* 11c6b0bd push ebx */
  push32((uint32_t)(EBX));
  /* 11c6b0be call 0x11c6a897 */
  push32(0x11c6b0c3u); f_11c6a897();
  /* 11c6b0c3 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11c6b0c5 pop ecx */
  ECX = (pop32());
  /* 11c6b0c6 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11c6b0cb je 0x11c6b0f6 */
  if (C.zf) goto L_11c6b0f6;
  /* 11c6b0cd push ebx */
  push32((uint32_t)(EBX));
  /* 11c6b0ce call 0x11c6a855 */
  push32(0x11c6b0d3u); f_11c6a855();
  /* 11c6b0d3 pop ecx */
  ECX = (pop32());
  /* 11c6b0d4 push eax */
  push32((uint32_t)(EAX));
  /* 11c6b0d5 call dword ptr [0x11c6e028] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e028))), 0x11c6b0dbu);
  /* 11c6b0db test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6b0dd jne 0x11c6b0e9 */
  if (!C.zf) goto L_11c6b0e9;
  /* 11c6b0df call dword ptr [0x11c6e104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e104))), 0x11c6b0e5u);
  /* 11c6b0e5 mov esi, eax */
  ESI = (EAX);
  /* 11c6b0e7 jmp 0x11c6b0eb */
  goto L_11c6b0eb;
L_11c6b0e9:;
  /* 11c6b0e9 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11c6b0eb:;
  /* 11c6b0eb test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c6b0ed je 0x11c6b104 */
  if (C.zf) goto L_11c6b104;
  /* 11c6b0ef call 0x11c6a7cd */
  push32(0x11c6b0f4u); f_11c6a7cd();
  /* 11c6b0f4 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_11c6b0f6:;
  /* 11c6b0f6 call 0x11c6a7c4 */
  push32(0x11c6b0fbu); f_11c6a7c4();
  /* 11c6b0fb mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11c6b101 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_11c6b104:;
  /* 11c6b104 push ebx */
  push32((uint32_t)(EBX));
  /* 11c6b105 call 0x11c6a8f6 */
  push32(0x11c6b10au); f_11c6a8f6();
  /* 11c6b10a pop ecx */
  ECX = (pop32());
  /* 11c6b10b mov eax, esi */
  EAX = (ESI);
  /* 11c6b10d jmp 0x11c6b11d */
  goto L_11c6b11d;
L_11c6b10f:;
  /* 11c6b10f call 0x11c6a7c4 */
  push32(0x11c6b114u); f_11c6a7c4();
  /* 11c6b114 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11c6b11a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11c6b11d:;
  /* 11c6b11d pop edi */
  EDI = (pop32());
  /* 11c6b11e pop esi */
  ESI = (pop32());
  /* 11c6b11f pop ebx */
  EBX = (pop32());
  /* 11c6b120 ret  */
  ESPCHK(0x11c6b08eu, _esp0);
  ESP += 4; return;
}

/* FUN_1000b130 @ 0x11c6b130 (208 bytes, 85 insns) */
void f_11c6b130(void) {
  FTRACE(0x11c6b130u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6b130 push ebp */
  push32((uint32_t)(EBP));
  /* 11c6b131 mov ebp, esp */
  EBP = (ESP);
  /* 11c6b133 push edi */
  push32((uint32_t)(EDI));
  /* 11c6b134 push esi */
  push32((uint32_t)(ESI));
  /* 11c6b135 push ebx */
  push32((uint32_t)(EBX));
  /* 11c6b136 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c6b139 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c6b13c lea eax, [0x11c87af8] */
  EAX = ((uint32_t)(0x11c87af8));
  /* 11c6b142 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b146 jne 0x11c6b183 */
  if (!C.zf) goto L_11c6b183;
  /* 11c6b148 mov al, 0xff */
  AL = (0xffu);
  /* 11c6b14a mov edi, edi */
  EDI = (EDI);
L_11c6b14c:;
  /* 11c6b14c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11c6b14e je 0x11c6b17e */
  if (C.zf) goto L_11c6b17e;
  /* 11c6b150 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c6b152 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c6b153 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 11c6b155 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c6b156 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6b158 je 0x11c6b14c */
  if (C.zf) goto L_11c6b14c;
  /* 11c6b15a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11c6b15c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6b15e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11c6b160 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11c6b163 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11c6b165 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11c6b167 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 11c6b169 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11c6b16b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6b16d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11c6b16f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 11c6b172 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11c6b174 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 11c6b176 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6b178 je 0x11c6b14c */
  if (C.zf) goto L_11c6b14c;
  /* 11c6b17a sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 11c6b17c sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_11c6b17e:;
  /* 11c6b17e movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 11c6b181 jmp 0x11c6b1fb */
  goto L_11c6b1fb;
L_11c6b183:;
  /* 11c6b183 lock inc dword ptr [0x11c87be8] */
  x86_unimpl("lock inc @ 0x11c6b183");
  /* 11c6b18a cmp dword ptr [0x11c87be4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c87be4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b191 jg 0x11c6b197 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c6b197;
  /* 11c6b193 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c6b195 jmp 0x11c6b1ac */
  goto L_11c6b1ac;
L_11c6b197:;
  /* 11c6b197 lock dec dword ptr [0x11c87be8] */
  x86_unimpl("lock dec @ 0x11c6b197");
  /* 11c6b19e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11c6b1a0 call 0x11c66a86 */
  push32(0x11c6b1a5u); f_11c66a86();
  /* 11c6b1a5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_11c6b1ac:;
  /* 11c6b1ac mov eax, 0xff */
  EAX = (0xffu);
  /* 11c6b1b1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c6b1b3 nop  */
  /* nop */
L_11c6b1b4:;
  /* 11c6b1b4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11c6b1b6 je 0x11c6b1df */
  if (C.zf) goto L_11c6b1df;
  /* 11c6b1b8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c6b1ba inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c6b1bb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11c6b1bd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c6b1be cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6b1c0 je 0x11c6b1b4 */
  if (C.zf) goto L_11c6b1b4;
  /* 11c6b1c2 push eax */
  push32((uint32_t)(EAX));
  /* 11c6b1c3 push ebx */
  push32((uint32_t)(EBX));
  /* 11c6b1c4 call 0x11c65d59 */
  push32(0x11c6b1c9u); f_11c65d59();
  /* 11c6b1c9 mov ebx, eax */
  EBX = (EAX);
  /* 11c6b1cb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6b1ce call 0x11c65d59 */
  push32(0x11c6b1d3u); f_11c65d59();
  /* 11c6b1d3 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6b1d6 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6b1d8 je 0x11c6b1b4 */
  if (C.zf) goto L_11c6b1b4;
  /* 11c6b1da sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6b1dc sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_11c6b1df:;
  /* 11c6b1df mov ebx, eax */
  EBX = (EAX);
  /* 11c6b1e1 pop eax */
  EAX = (pop32());
  /* 11c6b1e2 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c6b1e4 jne 0x11c6b1ef */
  if (!C.zf) goto L_11c6b1ef;
  /* 11c6b1e6 lock dec dword ptr [0x11c87be8] */
  x86_unimpl("lock dec @ 0x11c6b1e6");
  /* 11c6b1ed jmp 0x11c6b1f9 */
  goto L_11c6b1f9;
L_11c6b1ef:;
  /* 11c6b1ef push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11c6b1f1 call 0x11c66ae7 */
  push32(0x11c6b1f6u); f_11c66ae7();
  /* 11c6b1f6 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c6b1f9:;
  /* 11c6b1f9 mov eax, ebx */
  EAX = (EBX);
L_11c6b1fb:;
  /* 11c6b1fb pop ebx */
  EBX = (pop32());
  /* 11c6b1fc pop esi */
  ESI = (pop32());
  /* 11c6b1fd pop edi */
  EDI = (pop32());
  /* 11c6b1fe leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c6b1ff ret  */
  ESPCHK(0x11c6b130u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b200 @ 0x11c6b200 (257 bytes, 103 insns) */
void f_11c6b200(void) {
  FTRACE(0x11c6b200u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6b200 push ebp */
  push32((uint32_t)(EBP));
  /* 11c6b201 mov ebp, esp */
  EBP = (ESP);
  /* 11c6b203 push edi */
  push32((uint32_t)(EDI));
  /* 11c6b204 push esi */
  push32((uint32_t)(ESI));
  /* 11c6b205 push ebx */
  push32((uint32_t)(EBX));
  /* 11c6b206 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c6b209 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11c6b20b je 0x11c6b2fa */
  if (C.zf) goto L_11c6b2fa;
  /* 11c6b211 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c6b214 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c6b217 lea eax, [0x11c87af8] */
  EAX = ((uint32_t)(0x11c87af8));
  /* 11c6b21d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b221 jne 0x11c6b271 */
  if (!C.zf) goto L_11c6b271;
  /* 11c6b223 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 11c6b225 mov bl, 0x5a */
  BL = (0x5au);
  /* 11c6b227 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 11c6b229 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_11c6b22c:;
  /* 11c6b22c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 11c6b22e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 11c6b230 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 11c6b232 je 0x11c6b255 */
  if (C.zf) goto L_11c6b255;
  /* 11c6b234 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 11c6b236 je 0x11c6b255 */
  if (C.zf) goto L_11c6b255;
  /* 11c6b238 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c6b239 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c6b23a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6b23c jb 0x11c6b244 */
  if (C.cf) goto L_11c6b244;
  /* 11c6b23e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6b240 ja 0x11c6b244 */
  if ((!C.cf&&!C.zf)) goto L_11c6b244;
  /* 11c6b242 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_11c6b244:;
  /* 11c6b244 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6b246 jb 0x11c6b24e */
  if (C.cf) goto L_11c6b24e;
  /* 11c6b248 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6b24a ja 0x11c6b24e */
  if ((!C.cf&&!C.zf)) goto L_11c6b24e;
  /* 11c6b24c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_11c6b24e:;
  /* 11c6b24e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6b250 jne 0x11c6b25f */
  if (!C.zf) goto L_11c6b25f;
  /* 11c6b252 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c6b253 jne 0x11c6b22c */
  if (!C.zf) goto L_11c6b22c;
L_11c6b255:;
  /* 11c6b255 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11c6b257 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6b259 je 0x11c6b2fa */
  if (C.zf) goto L_11c6b2fa;
L_11c6b25f:;
  /* 11c6b25f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11c6b264 jb 0x11c6b2fa */
  if (C.cf) goto L_11c6b2fa;
  /* 11c6b26a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c6b26c jmp 0x11c6b2fa */
  goto L_11c6b2fa;
L_11c6b271:;
  /* 11c6b271 lock inc dword ptr [0x11c87be8] */
  x86_unimpl("lock inc @ 0x11c6b271");
  /* 11c6b278 cmp dword ptr [0x11c87be4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c87be4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b27f jg 0x11c6b285 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c6b285;
  /* 11c6b281 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c6b283 jmp 0x11c6b29e */
  goto L_11c6b29e;
L_11c6b285:;
  /* 11c6b285 lock dec dword ptr [0x11c87be8] */
  x86_unimpl("lock dec @ 0x11c6b285");
  /* 11c6b28c mov ebx, ecx */
  EBX = (ECX);
  /* 11c6b28e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11c6b290 call 0x11c66a86 */
  push32(0x11c6b295u); f_11c66a86();
  /* 11c6b295 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 11c6b29c mov ecx, ebx */
  ECX = (EBX);
L_11c6b29e:;
  /* 11c6b29e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c6b2a0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c6b2a2 mov edi, edi */
  EDI = (EDI);
L_11c6b2a4:;
  /* 11c6b2a4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c6b2a6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c6b2a8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 11c6b2aa je 0x11c6b2cf */
  if (C.zf) goto L_11c6b2cf;
  /* 11c6b2ac or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c6b2ae je 0x11c6b2cf */
  if (C.zf) goto L_11c6b2cf;
  /* 11c6b2b0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c6b2b1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c6b2b2 push ecx */
  push32((uint32_t)(ECX));
  /* 11c6b2b3 push eax */
  push32((uint32_t)(EAX));
  /* 11c6b2b4 push ebx */
  push32((uint32_t)(EBX));
  /* 11c6b2b5 call 0x11c65d59 */
  push32(0x11c6b2bau); f_11c65d59();
  /* 11c6b2ba mov ebx, eax */
  EBX = (EAX);
  /* 11c6b2bc add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6b2bf call 0x11c65d59 */
  push32(0x11c6b2c4u); f_11c65d59();
  /* 11c6b2c4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6b2c7 pop ecx */
  ECX = (pop32());
  /* 11c6b2c8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b2ca jne 0x11c6b2d5 */
  if (!C.zf) goto L_11c6b2d5;
  /* 11c6b2cc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c6b2cd jne 0x11c6b2a4 */
  if (!C.zf) goto L_11c6b2a4;
L_11c6b2cf:;
  /* 11c6b2cf xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11c6b2d1 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b2d3 je 0x11c6b2de */
  if (C.zf) goto L_11c6b2de;
L_11c6b2d5:;
  /* 11c6b2d5 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 11c6b2da jb 0x11c6b2de */
  if (C.cf) goto L_11c6b2de;
  /* 11c6b2dc neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_11c6b2de:;
  /* 11c6b2de pop eax */
  EAX = (pop32());
  /* 11c6b2df or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c6b2e1 jne 0x11c6b2ec */
  if (!C.zf) goto L_11c6b2ec;
  /* 11c6b2e3 lock dec dword ptr [0x11c87be8] */
  x86_unimpl("lock dec @ 0x11c6b2e3");
  /* 11c6b2ea jmp 0x11c6b2fa */
  goto L_11c6b2fa;
L_11c6b2ec:;
  /* 11c6b2ec mov ebx, ecx */
  EBX = (ECX);
  /* 11c6b2ee push 0x13 */
  push32((uint32_t)(0x13u));
  /* 11c6b2f0 call 0x11c66ae7 */
  push32(0x11c6b2f5u); f_11c66ae7();
  /* 11c6b2f5 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6b2f8 mov ecx, ebx */
  ECX = (EBX);
L_11c6b2fa:;
  /* 11c6b2fa mov eax, ecx */
  EAX = (ECX);
  /* 11c6b2fc pop ebx */
  EBX = (pop32());
  /* 11c6b2fd pop esi */
  ESI = (pop32());
  /* 11c6b2fe pop edi */
  EDI = (pop32());
  /* 11c6b2ff leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c6b300 ret  */
  ESPCHK(0x11c6b200u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b301 @ 0x11c6b301 (597 bytes, 239 insns) */
void f_11c6b301(void) {
  FTRACE(0x11c6b301u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6b301 push ebp */
  push32((uint32_t)(EBP));
  /* 11c6b302 mov ebp, esp */
  EBP = (ESP);
  /* 11c6b304 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c6b306 push 0x11c6e860 */
  push32((uint32_t)(0x11c6e860u));
  /* 11c6b30b push 0x11c68810 */
  push32((uint32_t)(0x11c68810u));
  /* 11c6b310 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11c6b316 push eax */
  push32((uint32_t)(EAX));
  /* 11c6b317 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11c6b31e sub esp, 0x30 */
  { uint32_t _a=(ESP),_b=(0x30u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6b321 push ebx */
  push32((uint32_t)(EBX));
  /* 11c6b322 push esi */
  push32((uint32_t)(ESI));
  /* 11c6b323 push edi */
  push32((uint32_t)(EDI));
  /* 11c6b324 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11c6b327 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c6b329 cmp dword ptr [0x11c87b90], ebx */
  { uint32_t _a=(r32((uint32_t)(0x11c87b90))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b32f push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6b331 pop edi */
  EDI = (pop32());
  /* 11c6b332 jne 0x11c6b374 */
  if (!C.zf) goto L_11c6b374;
  /* 11c6b334 push edi */
  push32((uint32_t)(EDI));
  /* 11c6b335 mov eax, 0x11c6e6ec */
  EAX = (0x11c6e6ecu);
  /* 11c6b33a push eax */
  push32((uint32_t)(EAX));
  /* 11c6b33b push edi */
  push32((uint32_t)(EDI));
  /* 11c6b33c push eax */
  push32((uint32_t)(EAX));
  /* 11c6b33d push ebx */
  push32((uint32_t)(EBX));
  /* 11c6b33e push ebx */
  push32((uint32_t)(EBX));
  /* 11c6b33f call dword ptr [0x11c6e020] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e020))), 0x11c6b345u);
  /* 11c6b345 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6b347 je 0x11c6b351 */
  if (C.zf) goto L_11c6b351;
  /* 11c6b349 mov dword ptr [0x11c87b90], edi */
  w32((uint32_t)(0x11c87b90), (EDI));
  /* 11c6b34f jmp 0x11c6b374 */
  goto L_11c6b374;
L_11c6b351:;
  /* 11c6b351 push edi */
  push32((uint32_t)(EDI));
  /* 11c6b352 mov eax, 0x11c6e6e8 */
  EAX = (0x11c6e6e8u);
  /* 11c6b357 push eax */
  push32((uint32_t)(EAX));
  /* 11c6b358 push edi */
  push32((uint32_t)(EDI));
  /* 11c6b359 push eax */
  push32((uint32_t)(EAX));
  /* 11c6b35a push ebx */
  push32((uint32_t)(EBX));
  /* 11c6b35b push ebx */
  push32((uint32_t)(EBX));
  /* 11c6b35c call dword ptr [0x11c6e024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e024))), 0x11c6b362u);
  /* 11c6b362 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6b364 je 0x11c6b56a */
  if (C.zf) goto L_11c6b56a;
  /* 11c6b36a mov dword ptr [0x11c87b90], 2 */
  w32((uint32_t)(0x11c87b90), (0x2u));
L_11c6b374:;
  /* 11c6b374 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 11c6b377 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b379 jle 0x11c6b38b */
  if ((C.zf||C.sf!=C.of)) goto L_11c6b38b;
  /* 11c6b37b push esi */
  push32((uint32_t)(ESI));
  /* 11c6b37c push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c6b37f call 0x11c69c8a */
  push32(0x11c6b384u); f_11c69c8a();
  /* 11c6b384 pop ecx */
  ECX = (pop32());
  /* 11c6b385 pop ecx */
  ECX = (pop32());
  /* 11c6b386 mov esi, eax */
  ESI = (EAX);
  /* 11c6b388 mov dword ptr [ebp + 0x14], esi */
  w32((uint32_t)(EBP + 0x14), (ESI));
L_11c6b38b:;
  /* 11c6b38b cmp dword ptr [ebp + 0x1c], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b38e jle 0x11c6b3a0 */
  if ((C.zf||C.sf!=C.of)) goto L_11c6b3a0;
  /* 11c6b390 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11c6b393 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11c6b396 call 0x11c69c8a */
  push32(0x11c6b39bu); f_11c69c8a();
  /* 11c6b39b pop ecx */
  ECX = (pop32());
  /* 11c6b39c pop ecx */
  ECX = (pop32());
  /* 11c6b39d mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
L_11c6b3a0:;
  /* 11c6b3a0 mov eax, dword ptr [0x11c87b90] */
  EAX = (r32((uint32_t)(0x11c87b90)));
  /* 11c6b3a5 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b3a8 jne 0x11c6b3c5 */
  if (!C.zf) goto L_11c6b3c5;
  /* 11c6b3aa push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11c6b3ad push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11c6b3b0 push esi */
  push32((uint32_t)(ESI));
  /* 11c6b3b1 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c6b3b4 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c6b3b7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c6b3ba call dword ptr [0x11c6e024] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e024))), 0x11c6b3c0u);
  /* 11c6b3c0 jmp 0x11c6b56c */
  goto L_11c6b56c;
L_11c6b3c5:;
  /* 11c6b3c5 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b3c7 jne 0x11c6b56a */
  if (!C.zf) goto L_11c6b56a;
  /* 11c6b3cd cmp dword ptr [ebp + 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b3d0 jne 0x11c6b3da */
  if (!C.zf) goto L_11c6b3da;
  /* 11c6b3d2 mov eax, dword ptr [0x11c87b10] */
  EAX = (r32((uint32_t)(0x11c87b10)));
  /* 11c6b3d7 mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_11c6b3da:;
  /* 11c6b3da cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b3dc je 0x11c6b3e7 */
  if (C.zf) goto L_11c6b3e7;
  /* 11c6b3de cmp dword ptr [ebp + 0x1c], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b3e1 jne 0x11c6b47f */
  if (!C.zf) goto L_11c6b47f;
L_11c6b3e7:;
  /* 11c6b3e7 cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b3ea jne 0x11c6b3f4 */
  if (!C.zf) goto L_11c6b3f4;
L_11c6b3ec:;
  /* 11c6b3ec push 2 */
  push32((uint32_t)(0x2u));
L_11c6b3ee:;
  /* 11c6b3ee pop eax */
  EAX = (pop32());
  /* 11c6b3ef jmp 0x11c6b56c */
  goto L_11c6b56c;
L_11c6b3f4:;
  /* 11c6b3f4 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b3f7 jle 0x11c6b400 */
  if ((C.zf||C.sf!=C.of)) goto L_11c6b400;
L_11c6b3f9:;
  /* 11c6b3f9 mov eax, edi */
  EAX = (EDI);
  /* 11c6b3fb jmp 0x11c6b56c */
  goto L_11c6b56c;
L_11c6b400:;
  /* 11c6b400 cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b402 jg 0x11c6b445 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c6b445;
  /* 11c6b404 lea eax, [ebp - 0x3c] */
  EAX = ((uint32_t)(EBP + -0x3c));
  /* 11c6b407 push eax */
  push32((uint32_t)(EAX));
  /* 11c6b408 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11c6b40b call dword ptr [0x11c6e050] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e050))), 0x11c6b411u);
  /* 11c6b411 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6b413 je 0x11c6b56a */
  if (C.zf) goto L_11c6b56a;
  /* 11c6b419 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b41b jle 0x11c6b449 */
  if ((C.zf||C.sf!=C.of)) goto L_11c6b449;
  /* 11c6b41d cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b421 jb 0x11c6b445 */
  if (C.cf) goto L_11c6b445;
  /* 11c6b423 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 11c6b426 cmp byte ptr [ebp - 0x36], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x36))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6b429 je 0x11c6b445 */
  if (C.zf) goto L_11c6b445;
L_11c6b42b:;
  /* 11c6b42b mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11c6b42e cmp dl, bl */
  { uint32_t _a=(DL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6b430 je 0x11c6b445 */
  if (C.zf) goto L_11c6b445;
  /* 11c6b432 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c6b435 mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 11c6b437 cmp cl, byte ptr [eax] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6b439 jb 0x11c6b43f */
  if (C.cf) goto L_11c6b43f;
  /* 11c6b43b cmp cl, dl */
  { uint32_t _a=(CL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6b43d jbe 0x11c6b3ec */
  if ((C.cf||C.zf)) goto L_11c6b3ec;
L_11c6b43f:;
  /* 11c6b43f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c6b440 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c6b441 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6b443 jne 0x11c6b42b */
  if (!C.zf) goto L_11c6b42b;
L_11c6b445:;
  /* 11c6b445 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c6b447 jmp 0x11c6b3ee */
  goto L_11c6b3ee;
L_11c6b449:;
  /* 11c6b449 cmp dword ptr [ebp + 0x1c], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b44c jle 0x11c6b47f */
  if ((C.zf||C.sf!=C.of)) goto L_11c6b47f;
  /* 11c6b44e cmp dword ptr [ebp - 0x3c], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x3c))),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b452 jb 0x11c6b3f9 */
  if (C.cf) goto L_11c6b3f9;
  /* 11c6b454 lea eax, [ebp - 0x36] */
  EAX = ((uint32_t)(EBP + -0x36));
  /* 11c6b457 cmp byte ptr [ebp - 0x36], bl */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x36))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6b45a je 0x11c6b3f9 */
  if (C.zf) goto L_11c6b3f9;
L_11c6b45c:;
  /* 11c6b45c mov dl, byte ptr [eax + 1] */
  DL = (r8((uint32_t)(EAX + 0x1)));
  /* 11c6b45f cmp dl, bl */
  { uint32_t _a=(DL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6b461 je 0x11c6b3f9 */
  if (C.zf) goto L_11c6b3f9;
  /* 11c6b463 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11c6b466 mov cl, byte ptr [ecx] */
  CL = (r8((uint32_t)(ECX)));
  /* 11c6b468 cmp cl, byte ptr [eax] */
  { uint32_t _a=(CL),_b=(r8((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6b46a jb 0x11c6b474 */
  if (C.cf) goto L_11c6b474;
  /* 11c6b46c cmp cl, dl */
  { uint32_t _a=(CL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6b46e jbe 0x11c6b3ec */
  if ((C.cf||C.zf)) goto L_11c6b3ec;
L_11c6b474:;
  /* 11c6b474 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c6b475 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c6b476 cmp byte ptr [eax], bl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6b478 jne 0x11c6b45c */
  if (!C.zf) goto L_11c6b45c;
  /* 11c6b47a jmp 0x11c6b3f9 */
  goto L_11c6b3f9;
L_11c6b47f:;
  /* 11c6b47f push ebx */
  push32((uint32_t)(EBX));
  /* 11c6b480 push ebx */
  push32((uint32_t)(EBX));
  /* 11c6b481 push esi */
  push32((uint32_t)(ESI));
  /* 11c6b482 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c6b485 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c6b487 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11c6b48a call dword ptr [0x11c6e040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e040))), 0x11c6b490u);
  /* 11c6b490 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11c6b493 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b495 je 0x11c6b56a */
  if (C.zf) goto L_11c6b56a;
  /* 11c6b49b mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 11c6b49e add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6b4a0 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6b4a3 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11c6b4a5 call 0x11c695a0 */
  push32(0x11c6b4aau); f_11c695a0();
  /* 11c6b4aa mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11c6b4ad mov eax, esp */
  EAX = (ESP);
  /* 11c6b4af mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 11c6b4b2 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c6b4b6 jmp 0x11c6b4ce */
  goto L_11c6b4ce;
  /* 11c6b4b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6b4ba pop eax */
  EAX = (pop32());
  /* 11c6b4bb ret  */
  ESPCHK(0x11c6b301u, _esp0);
  ESP += 4; return;
  /* 11c6b4bc mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11c6b4bf xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c6b4c1 mov dword ptr [ebp - 0x24], ebx */
  w32((uint32_t)(EBP + -0x24), (EBX));
  /* 11c6b4c4 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c6b4c8 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 11c6b4cb push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6b4cd pop edi */
  EDI = (pop32());
L_11c6b4ce:;
  /* 11c6b4ce cmp dword ptr [ebp - 0x24], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b4d1 je 0x11c6b56a */
  if (C.zf) goto L_11c6b56a;
  /* 11c6b4d7 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11c6b4da push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11c6b4dd push esi */
  push32((uint32_t)(ESI));
  /* 11c6b4de push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c6b4e1 push edi */
  push32((uint32_t)(EDI));
  /* 11c6b4e2 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11c6b4e5 mov esi, dword ptr [0x11c6e040] */
  ESI = (r32((uint32_t)(0x11c6e040)));
  /* 11c6b4eb call esi */
  call_ind((uint32_t)(ESI), 0x11c6b4edu);
  /* 11c6b4ed test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6b4ef je 0x11c6b56a */
  if (C.zf) goto L_11c6b56a;
  /* 11c6b4f1 push ebx */
  push32((uint32_t)(EBX));
  /* 11c6b4f2 push ebx */
  push32((uint32_t)(EBX));
  /* 11c6b4f3 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11c6b4f6 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11c6b4f9 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c6b4fb push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11c6b4fe call esi */
  call_ind((uint32_t)(ESI), 0x11c6b500u);
  /* 11c6b500 mov esi, eax */
  ESI = (EAX);
  /* 11c6b502 mov dword ptr [ebp - 0x20], esi */
  w32((uint32_t)(EBP + -0x20), (ESI));
  /* 11c6b505 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b507 je 0x11c6b56a */
  if (C.zf) goto L_11c6b56a;
  /* 11c6b509 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11c6b50c lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 11c6b50f add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6b512 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 11c6b514 call 0x11c695a0 */
  push32(0x11c6b519u); f_11c695a0();
  /* 11c6b519 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11c6b51c mov edi, esp */
  EDI = (ESP);
  /* 11c6b51e mov dword ptr [ebp - 0x28], edi */
  w32((uint32_t)(EBP + -0x28), (EDI));
  /* 11c6b521 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c6b525 jmp 0x11c6b539 */
  goto L_11c6b539;
  /* 11c6b527 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6b529 pop eax */
  EAX = (pop32());
  /* 11c6b52a ret  */
  ESPCHK(0x11c6b301u, _esp0);
  ESP += 4; return;
  /* 11c6b52b mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11c6b52e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c6b530 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c6b532 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c6b536 mov esi, dword ptr [ebp - 0x20] */
  ESI = (r32((uint32_t)(EBP + -0x20)));
L_11c6b539:;
  /* 11c6b539 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b53b je 0x11c6b56a */
  if (C.zf) goto L_11c6b56a;
  /* 11c6b53d push esi */
  push32((uint32_t)(ESI));
  /* 11c6b53e push edi */
  push32((uint32_t)(EDI));
  /* 11c6b53f push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11c6b542 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11c6b545 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6b547 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11c6b54a call dword ptr [0x11c6e040] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e040))), 0x11c6b550u);
  /* 11c6b550 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6b552 je 0x11c6b56a */
  if (C.zf) goto L_11c6b56a;
  /* 11c6b554 push esi */
  push32((uint32_t)(ESI));
  /* 11c6b555 push edi */
  push32((uint32_t)(EDI));
  /* 11c6b556 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 11c6b559 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 11c6b55c push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c6b55f push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c6b562 call dword ptr [0x11c6e020] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e020))), 0x11c6b568u);
  /* 11c6b568 jmp 0x11c6b56c */
  goto L_11c6b56c;
L_11c6b56a:;
  /* 11c6b56a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c6b56c:;
  /* 11c6b56c lea esp, [ebp - 0x4c] */
  ESP = ((uint32_t)(EBP + -0x4c));
  /* 11c6b56f mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11c6b572 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11c6b579 pop edi */
  EDI = (pop32());
  /* 11c6b57a pop esi */
  ESI = (pop32());
  /* 11c6b57b pop ebx */
  EBX = (pop32());
  /* 11c6b57c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c6b57d ret  */
  ESPCHK(0x11c6b301u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b57e @ 0x11c6b57e (391 bytes, 155 insns) */
void f_11c6b57e(void) {
  FTRACE(0x11c6b57eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6b57e push ebp */
  push32((uint32_t)(EBP));
  /* 11c6b57f mov ebp, esp */
  EBP = (ESP);
  /* 11c6b581 push ecx */
  push32((uint32_t)(ECX));
  /* 11c6b582 push ecx */
  push32((uint32_t)(ECX));
  /* 11c6b583 push ebx */
  push32((uint32_t)(EBX));
  /* 11c6b584 push esi */
  push32((uint32_t)(ESI));
  /* 11c6b585 push edi */
  push32((uint32_t)(EDI));
  /* 11c6b586 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c6b588 cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b58b je 0x11c6b5e2 */
  if (C.zf) goto L_11c6b5e2;
  /* 11c6b58d push 0x3d */
  push32((uint32_t)(0x3du));
  /* 11c6b58f push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c6b592 call 0x11c6b8cf */
  push32(0x11c6b597u); f_11c6b8cf();
  /* 11c6b597 mov esi, eax */
  ESI = (EAX);
  /* 11c6b599 pop ecx */
  ECX = (pop32());
  /* 11c6b59a cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b59c pop ecx */
  ECX = (pop32());
  /* 11c6b59d mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
  /* 11c6b5a0 je 0x11c6b5e2 */
  if (C.zf) goto L_11c6b5e2;
  /* 11c6b5a2 cmp dword ptr [ebp + 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b5a5 je 0x11c6b5e2 */
  if (C.zf) goto L_11c6b5e2;
  /* 11c6b5a7 mov eax, dword ptr [0x11c87864] */
  EAX = (r32((uint32_t)(0x11c87864)));
  /* 11c6b5ac xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c6b5ae cmp byte ptr [esi + 1], bl */
  { uint32_t _a=(r8((uint32_t)(ESI + 0x1))),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6b5b1 sete bl */
  BL = ((C.zf) ? 1u : 0u);
  /* 11c6b5b4 cmp eax, dword ptr [0x11c87868] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c87868))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b5ba jne 0x11c6b5c8 */
  if (!C.zf) goto L_11c6b5c8;
  /* 11c6b5bc push eax */
  push32((uint32_t)(EAX));
  /* 11c6b5bd call 0x11c6b75d */
  push32(0x11c6b5c2u); f_11c6b75d();
  /* 11c6b5c2 pop ecx */
  ECX = (pop32());
  /* 11c6b5c3 mov dword ptr [0x11c87864], eax */
  w32((uint32_t)(0x11c87864), (EAX));
L_11c6b5c8:;
  /* 11c6b5c8 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b5ca jne 0x11c6b620 */
  if (!C.zf) goto L_11c6b620;
  /* 11c6b5cc cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b5cf je 0x11c6b5ea */
  if (C.zf) goto L_11c6b5ea;
  /* 11c6b5d1 cmp dword ptr [0x11c8786c], edi */
  { uint32_t _a=(r32((uint32_t)(0x11c8786c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b5d7 je 0x11c6b5ea */
  if (C.zf) goto L_11c6b5ea;
  /* 11c6b5d9 call 0x11c6afa3 */
  push32(0x11c6b5deu); f_11c6afa3();
  /* 11c6b5de test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6b5e0 je 0x11c6b620 */
  if (C.zf) goto L_11c6b620;
L_11c6b5e2:;
  /* 11c6b5e2 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_11c6b5e5:;
  /* 11c6b5e5 pop edi */
  EDI = (pop32());
  /* 11c6b5e6 pop esi */
  ESI = (pop32());
  /* 11c6b5e7 pop ebx */
  EBX = (pop32());
  /* 11c6b5e8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c6b5e9 ret  */
  ESPCHK(0x11c6b57eu, _esp0);
  ESP += 4; return;
L_11c6b5ea:;
  /* 11c6b5ea cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b5ec jne 0x11c6b6fe */
  if (!C.zf) goto L_11c6b6fe;
  /* 11c6b5f2 push 4 */
  push32((uint32_t)(0x4u));
  /* 11c6b5f4 call 0x11c64f87 */
  push32(0x11c6b5f9u); f_11c64f87();
  /* 11c6b5f9 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b5fb pop ecx */
  ECX = (pop32());
  /* 11c6b5fc mov dword ptr [0x11c87864], eax */
  w32((uint32_t)(0x11c87864), (EAX));
  /* 11c6b601 je 0x11c6b5e2 */
  if (C.zf) goto L_11c6b5e2;
  /* 11c6b603 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 11c6b605 cmp dword ptr [0x11c8786c], edi */
  { uint32_t _a=(r32((uint32_t)(0x11c8786c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b60b jne 0x11c6b620 */
  if (!C.zf) goto L_11c6b620;
  /* 11c6b60d push 4 */
  push32((uint32_t)(0x4u));
  /* 11c6b60f call 0x11c64f87 */
  push32(0x11c6b614u); f_11c64f87();
  /* 11c6b614 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b616 pop ecx */
  ECX = (pop32());
  /* 11c6b617 mov dword ptr [0x11c8786c], eax */
  w32((uint32_t)(0x11c8786c), (EAX));
  /* 11c6b61c je 0x11c6b5e2 */
  if (C.zf) goto L_11c6b5e2;
  /* 11c6b61e mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_11c6b620:;
  /* 11c6b620 sub esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6b623 mov edi, dword ptr [0x11c87864] */
  EDI = (r32((uint32_t)(0x11c87864)));
  /* 11c6b629 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11c6b62c push esi */
  push32((uint32_t)(ESI));
  /* 11c6b62d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c6b630 call 0x11c6b705 */
  push32(0x11c6b635u); f_11c6b705();
  /* 11c6b635 mov esi, eax */
  ESI = (EAX);
  /* 11c6b637 pop ecx */
  ECX = (pop32());
  /* 11c6b638 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c6b63a pop ecx */
  ECX = (pop32());
  /* 11c6b63b jl 0x11c6b680 */
  if ((C.sf!=C.of)) goto L_11c6b680;
  /* 11c6b63d cmp dword ptr [edi], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b640 je 0x11c6b680 */
  if (C.zf) goto L_11c6b680;
  /* 11c6b642 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c6b644 je 0x11c6b678 */
  if (C.zf) goto L_11c6b678;
  /* 11c6b646 push dword ptr [edi + esi*4] */
  push32((uint32_t)(r32((uint32_t)(EDI + ESI*4))));
  /* 11c6b649 lea edi, [edi + esi*4] */
  EDI = ((uint32_t)(EDI + ESI*4));
  /* 11c6b64c call 0x11c66afc */
  push32(0x11c6b651u); f_11c66afc();
  /* 11c6b651 pop ecx */
  ECX = (pop32());
L_11c6b652:;
  /* 11c6b652 cmp dword ptr [edi], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b655 je 0x11c6b662 */
  if (C.zf) goto L_11c6b662;
  /* 11c6b657 mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 11c6b65a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c6b65b mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11c6b65d add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6b660 jmp 0x11c6b652 */
  goto L_11c6b652;
L_11c6b662:;
  /* 11c6b662 mov eax, esi */
  EAX = (ESI);
  /* 11c6b664 shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11c6b667 push eax */
  push32((uint32_t)(EAX));
  /* 11c6b668 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11c6b66b call 0x11c64b6a */
  push32(0x11c6b670u); f_11c64b6a();
  /* 11c6b670 pop ecx */
  ECX = (pop32());
  /* 11c6b671 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6b673 pop ecx */
  ECX = (pop32());
  /* 11c6b674 je 0x11c6b6b2 */
  if (C.zf) goto L_11c6b6b2;
  /* 11c6b676 jmp 0x11c6b6ad */
  goto L_11c6b6ad;
L_11c6b678:;
  /* 11c6b678 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c6b67b mov dword ptr [edi + esi*4], eax */
  w32((uint32_t)(EDI + ESI*4), (EAX));
  /* 11c6b67e jmp 0x11c6b6b2 */
  goto L_11c6b6b2;
L_11c6b680:;
  /* 11c6b680 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c6b682 jne 0x11c6b6fe */
  if (!C.zf) goto L_11c6b6fe;
  /* 11c6b684 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c6b686 jge 0x11c6b68a */
  if ((C.sf==C.of)) goto L_11c6b68a;
  /* 11c6b688 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
L_11c6b68a:;
  /* 11c6b68a lea eax, [esi*4 + 8] */
  EAX = ((uint32_t)(ESI*4 + 0x8));
  /* 11c6b691 push eax */
  push32((uint32_t)(EAX));
  /* 11c6b692 push edi */
  push32((uint32_t)(EDI));
  /* 11c6b693 call 0x11c64b6a */
  push32(0x11c6b698u); f_11c64b6a();
  /* 11c6b698 pop ecx */
  ECX = (pop32());
  /* 11c6b699 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6b69b pop ecx */
  ECX = (pop32());
  /* 11c6b69c je 0x11c6b5e2 */
  if (C.zf) goto L_11c6b5e2;
  /* 11c6b6a2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c6b6a5 mov dword ptr [eax + esi*4], ecx */
  w32((uint32_t)(EAX + ESI*4), (ECX));
  /* 11c6b6a8 and dword ptr [eax + esi*4 + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4 + 0x4)))&(0x0u); w32((uint32_t)(EAX + ESI*4 + 0x4), (_r)); fl_logic(_r,32); }
L_11c6b6ad:;
  /* 11c6b6ad mov dword ptr [0x11c87864], eax */
  w32((uint32_t)(0x11c87864), (EAX));
L_11c6b6b2:;
  /* 11c6b6b2 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b6b6 je 0x11c6b6fe */
  if (C.zf) goto L_11c6b6fe;
  /* 11c6b6b8 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c6b6bb call 0x11c66830 */
  push32(0x11c6b6c0u); f_11c66830();
  /* 11c6b6c0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c6b6c1 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c6b6c2 push eax */
  push32((uint32_t)(EAX));
  /* 11c6b6c3 call 0x11c64f87 */
  push32(0x11c6b6c8u); f_11c64f87();
  /* 11c6b6c8 mov esi, eax */
  ESI = (EAX);
  /* 11c6b6ca pop ecx */
  ECX = (pop32());
  /* 11c6b6cb test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c6b6cd pop ecx */
  ECX = (pop32());
  /* 11c6b6ce je 0x11c6b6fe */
  if (C.zf) goto L_11c6b6fe;
  /* 11c6b6d0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c6b6d3 push esi */
  push32((uint32_t)(ESI));
  /* 11c6b6d4 call 0x11c663a0 */
  push32(0x11c6b6d9u); f_11c663a0();
  /* 11c6b6d9 mov eax, esi */
  EAX = (ESI);
  /* 11c6b6db pop ecx */
  ECX = (pop32());
  /* 11c6b6dc sub eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6b6df pop ecx */
  ECX = (pop32());
  /* 11c6b6e0 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6b6e3 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 11c6b6e6 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c6b6e7 neg ebx */
  { uint32_t _a=(EBX),_r=0u-_a; EBX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c6b6e9 sbb ebx, ebx */
  { uint32_t _a=(EBX),_b=(EBX),_r=_a-_b-C.cf; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6b6eb not ebx */
  EBX = (~(EBX));
  /* 11c6b6ed and ebx, eax */
  { uint32_t _r=(EBX)&(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 11c6b6ef push ebx */
  push32((uint32_t)(EBX));
  /* 11c6b6f0 push esi */
  push32((uint32_t)(ESI));
  /* 11c6b6f1 call dword ptr [0x11c6e01c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e01c))), 0x11c6b6f7u);
  /* 11c6b6f7 push esi */
  push32((uint32_t)(ESI));
  /* 11c6b6f8 call 0x11c66afc */
  push32(0x11c6b6fdu); f_11c66afc();
  /* 11c6b6fd pop ecx */
  ECX = (pop32());
L_11c6b6fe:;
  /* 11c6b6fe xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c6b700 jmp 0x11c6b5e5 */
  goto L_11c6b5e5;
}

/* FUN_1000b705 @ 0x11c6b705 (88 bytes, 35 insns) */
void f_11c6b705(void) {
  FTRACE(0x11c6b705u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6b705 push esi */
  push32((uint32_t)(ESI));
  /* 11c6b706 mov esi, dword ptr [0x11c87864] */
  ESI = (r32((uint32_t)(0x11c87864)));
  /* 11c6b70c push edi */
  push32((uint32_t)(EDI));
  /* 11c6b70d mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c6b70f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6b711 je 0x11c6b740 */
  if (C.zf) goto L_11c6b740;
  /* 11c6b713 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
L_11c6b717:;
  /* 11c6b717 push edi */
  push32((uint32_t)(EDI));
  /* 11c6b718 push eax */
  push32((uint32_t)(EAX));
  /* 11c6b719 push dword ptr [esp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x14))));
  /* 11c6b71d call 0x11c6af64 */
  push32(0x11c6b722u); f_11c6af64();
  /* 11c6b722 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6b725 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6b727 jne 0x11c6b736 */
  if (!C.zf) goto L_11c6b736;
  /* 11c6b729 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c6b72b mov al, byte ptr [eax + edi] */
  AL = (r8((uint32_t)(EAX + EDI*1)));
  /* 11c6b72e cmp al, 0x3d */
  { uint32_t _a=(AL),_b=(0x3du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6b730 je 0x11c6b750 */
  if (C.zf) goto L_11c6b750;
  /* 11c6b732 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c6b734 je 0x11c6b750 */
  if (C.zf) goto L_11c6b750;
L_11c6b736:;
  /* 11c6b736 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11c6b739 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6b73c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6b73e jne 0x11c6b717 */
  if (!C.zf) goto L_11c6b717;
L_11c6b740:;
  /* 11c6b740 mov eax, esi */
  EAX = (ESI);
  /* 11c6b742 sub eax, dword ptr [0x11c87864] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c87864))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6b748 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11c6b74b neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_11c6b74d:;
  /* 11c6b74d pop edi */
  EDI = (pop32());
  /* 11c6b74e pop esi */
  ESI = (pop32());
  /* 11c6b74f ret  */
  ESPCHK(0x11c6b705u, _esp0);
  ESP += 4; return;
L_11c6b750:;
  /* 11c6b750 mov eax, esi */
  EAX = (ESI);
  /* 11c6b752 sub eax, dword ptr [0x11c87864] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x11c87864))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6b758 sar eax, 2 */
  EAX = (sh_sar((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 11c6b75b jmp 0x11c6b74d */
  goto L_11c6b74d;
}

/* FUN_1000b75d @ 0x11c6b75d (103 bytes, 49 insns) */
void f_11c6b75d(void) {
  FTRACE(0x11c6b75du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6b75d push edi */
  push32((uint32_t)(EDI));
  /* 11c6b75e mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c6b762 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 11c6b764 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11c6b766 jne 0x11c6b76c */
  if (!C.zf) goto L_11c6b76c;
  /* 11c6b768 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c6b76a pop edi */
  EDI = (pop32());
  /* 11c6b76b ret  */
  ESPCHK(0x11c6b75du, _esp0);
  ESP += 4; return;
L_11c6b76c:;
  /* 11c6b76c cmp dword ptr [edi], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b76f lea eax, [edi + 4] */
  EAX = ((uint32_t)(EDI + 0x4));
  /* 11c6b772 je 0x11c6b77e */
  if (C.zf) goto L_11c6b77e;
L_11c6b774:;
  /* 11c6b774 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 11c6b776 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c6b777 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6b77a test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11c6b77c jne 0x11c6b774 */
  if (!C.zf) goto L_11c6b774;
L_11c6b77e:;
  /* 11c6b77e push ebx */
  push32((uint32_t)(EBX));
  /* 11c6b77f push ebp */
  push32((uint32_t)(EBP));
  /* 11c6b780 lea eax, [ecx*4 + 4] */
  EAX = ((uint32_t)(ECX*4 + 0x4));
  /* 11c6b787 push esi */
  push32((uint32_t)(ESI));
  /* 11c6b788 push eax */
  push32((uint32_t)(EAX));
  /* 11c6b789 call 0x11c64f87 */
  push32(0x11c6b78eu); f_11c64f87();
  /* 11c6b78e mov esi, eax */
  ESI = (EAX);
  /* 11c6b790 pop ecx */
  ECX = (pop32());
  /* 11c6b791 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c6b793 mov ebp, esi */
  EBP = (ESI);
  /* 11c6b795 jne 0x11c6b79f */
  if (!C.zf) goto L_11c6b79f;
  /* 11c6b797 push 9 */
  push32((uint32_t)(0x9u));
  /* 11c6b799 call 0x11c6432c */
  push32(0x11c6b79eu); f_11c6432c();
  /* 11c6b79e pop ecx */
  ECX = (pop32());
L_11c6b79f:;
  /* 11c6b79f mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11c6b7a1 mov ebx, edi */
  EBX = (EDI);
L_11c6b7a3:;
  /* 11c6b7a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6b7a5 je 0x11c6b7ba */
  if (C.zf) goto L_11c6b7ba;
  /* 11c6b7a7 push eax */
  push32((uint32_t)(EAX));
  /* 11c6b7a8 add ebx, 4 */
  { uint32_t _a=(EBX),_b=(0x4u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6b7ab call 0x11c6b966 */
  push32(0x11c6b7b0u); f_11c6b966();
  /* 11c6b7b0 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11c6b7b2 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11c6b7b4 pop ecx */
  ECX = (pop32());
  /* 11c6b7b5 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6b7b8 jmp 0x11c6b7a3 */
  goto L_11c6b7a3;
L_11c6b7ba:;
  /* 11c6b7ba and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 11c6b7bd mov eax, ebp */
  EAX = (EBP);
  /* 11c6b7bf pop esi */
  ESI = (pop32());
  /* 11c6b7c0 pop ebp */
  EBP = (pop32());
  /* 11c6b7c1 pop ebx */
  EBX = (pop32());
  /* 11c6b7c2 pop edi */
  EDI = (pop32());
  /* 11c6b7c3 ret  */
  ESPCHK(0x11c6b75du, _esp0);
  ESP += 4; return;
}

/* FUN_1000b7c4 @ 0x11c6b7c4 (93 bytes, 32 insns) */
void f_11c6b7c4(void) {
  FTRACE(0x11c6b7c4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6b7c4 push esi */
  push32((uint32_t)(ESI));
  /* 11c6b7c5 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c6b7c9 cmp esi, dword ptr [0x11c88f60] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11c88f60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b7cf jae 0x11c6b809 */
  if (!C.cf) goto L_11c6b809;
  /* 11c6b7d1 mov ecx, esi */
  ECX = (ESI);
  /* 11c6b7d3 mov eax, esi */
  EAX = (ESI);
  /* 11c6b7d5 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11c6b7d8 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11c6b7db mov ecx, dword ptr [ecx*4 + 0x11c88e60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11c88e60)));
  /* 11c6b7e2 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11c6b7e5 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11c6b7ea je 0x11c6b809 */
  if (C.zf) goto L_11c6b809;
  /* 11c6b7ec push edi */
  push32((uint32_t)(EDI));
  /* 11c6b7ed push esi */
  push32((uint32_t)(ESI));
  /* 11c6b7ee call 0x11c6a897 */
  push32(0x11c6b7f3u); f_11c6a897();
  /* 11c6b7f3 push esi */
  push32((uint32_t)(ESI));
  /* 11c6b7f4 call 0x11c6b821 */
  push32(0x11c6b7f9u); f_11c6b821();
  /* 11c6b7f9 push esi */
  push32((uint32_t)(ESI));
  /* 11c6b7fa mov edi, eax */
  EDI = (EAX);
  /* 11c6b7fc call 0x11c6a8f6 */
  push32(0x11c6b801u); f_11c6a8f6();
  /* 11c6b801 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6b804 mov eax, edi */
  EAX = (EDI);
  /* 11c6b806 pop edi */
  EDI = (pop32());
  /* 11c6b807 pop esi */
  ESI = (pop32());
  /* 11c6b808 ret  */
  ESPCHK(0x11c6b7c4u, _esp0);
  ESP += 4; return;
L_11c6b809:;
  /* 11c6b809 call 0x11c6a7c4 */
  push32(0x11c6b80eu); f_11c6a7c4();
  /* 11c6b80e mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11c6b814 call 0x11c6a7cd */
  push32(0x11c6b819u); f_11c6a7cd();
  /* 11c6b819 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11c6b81c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c6b81f pop esi */
  ESI = (pop32());
  /* 11c6b820 ret  */
  ESPCHK(0x11c6b7c4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b821 @ 0x11c6b821 (131 bytes, 52 insns) */
void f_11c6b821(void) {
  FTRACE(0x11c6b821u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6b821 push esi */
  push32((uint32_t)(ESI));
  /* 11c6b822 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c6b826 push edi */
  push32((uint32_t)(EDI));
  /* 11c6b827 push esi */
  push32((uint32_t)(ESI));
  /* 11c6b828 call 0x11c6a855 */
  push32(0x11c6b82du); f_11c6a855();
  /* 11c6b82d cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b830 pop ecx */
  ECX = (pop32());
  /* 11c6b831 je 0x11c6b86f */
  if (C.zf) goto L_11c6b86f;
  /* 11c6b833 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b836 je 0x11c6b83d */
  if (C.zf) goto L_11c6b83d;
  /* 11c6b838 cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b83b jne 0x11c6b853 */
  if (!C.zf) goto L_11c6b853;
L_11c6b83d:;
  /* 11c6b83d push 2 */
  push32((uint32_t)(0x2u));
  /* 11c6b83f call 0x11c6a855 */
  push32(0x11c6b844u); f_11c6a855();
  /* 11c6b844 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6b846 mov edi, eax */
  EDI = (EAX);
  /* 11c6b848 call 0x11c6a855 */
  push32(0x11c6b84du); f_11c6a855();
  /* 11c6b84d pop ecx */
  ECX = (pop32());
  /* 11c6b84e cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b850 pop ecx */
  ECX = (pop32());
  /* 11c6b851 je 0x11c6b86f */
  if (C.zf) goto L_11c6b86f;
L_11c6b853:;
  /* 11c6b853 push esi */
  push32((uint32_t)(ESI));
  /* 11c6b854 call 0x11c6a855 */
  push32(0x11c6b859u); f_11c6a855();
  /* 11c6b859 pop ecx */
  ECX = (pop32());
  /* 11c6b85a push eax */
  push32((uint32_t)(EAX));
  /* 11c6b85b call dword ptr [0x11c6e018] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e018))), 0x11c6b861u);
  /* 11c6b861 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6b863 jne 0x11c6b86f */
  if (!C.zf) goto L_11c6b86f;
  /* 11c6b865 call dword ptr [0x11c6e104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e104))), 0x11c6b86bu);
  /* 11c6b86b mov edi, eax */
  EDI = (EAX);
  /* 11c6b86d jmp 0x11c6b871 */
  goto L_11c6b871;
L_11c6b86f:;
  /* 11c6b86f xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11c6b871:;
  /* 11c6b871 push esi */
  push32((uint32_t)(ESI));
  /* 11c6b872 call 0x11c6a7d6 */
  push32(0x11c6b877u); f_11c6a7d6();
  /* 11c6b877 mov eax, esi */
  EAX = (ESI);
  /* 11c6b879 and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 11c6b87c sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 11c6b87f pop ecx */
  ECX = (pop32());
  /* 11c6b880 mov eax, dword ptr [eax*4 + 0x11c88e60] */
  EAX = (r32((uint32_t)(EAX*4 + 0x11c88e60)));
  /* 11c6b887 lea ecx, [esi + esi*8] */
  ECX = ((uint32_t)(ESI + ESI*8));
  /* 11c6b88a and byte ptr [eax + ecx*4 + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + ECX*4 + 0x4)))&(0x0u); w8((uint32_t)(EAX + ECX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 11c6b88f test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11c6b891 je 0x11c6b89f */
  if (C.zf) goto L_11c6b89f;
  /* 11c6b893 push edi */
  push32((uint32_t)(EDI));
  /* 11c6b894 call 0x11c6a751 */
  push32(0x11c6b899u); f_11c6a751();
  /* 11c6b899 pop ecx */
  ECX = (pop32());
  /* 11c6b89a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c6b89d jmp 0x11c6b8a1 */
  goto L_11c6b8a1;
L_11c6b89f:;
  /* 11c6b89f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c6b8a1:;
  /* 11c6b8a1 pop edi */
  EDI = (pop32());
  /* 11c6b8a2 pop esi */
  ESI = (pop32());
  /* 11c6b8a3 ret  */
  ESPCHK(0x11c6b821u, _esp0);
  ESP += 4; return;
}

/* __freebuf @ 0x11c6b8a4 (43 bytes, 17 insns) */
void f_11c6b8a4(void) {
  FTRACE(0x11c6b8a4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6b8a4 push esi */
  push32((uint32_t)(ESI));
  /* 11c6b8a5 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c6b8a9 mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11c6b8ac test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 11c6b8ae je 0x11c6b8cd */
  if (C.zf) goto L_11c6b8cd;
  /* 11c6b8b0 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 11c6b8b2 je 0x11c6b8cd */
  if (C.zf) goto L_11c6b8cd;
  /* 11c6b8b4 push dword ptr [esi + 8] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x8))));
  /* 11c6b8b7 call 0x11c66afc */
  push32(0x11c6b8bcu); f_11c66afc();
  /* 11c6b8bc and word ptr [esi + 0xc], 0xfbf7 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0xfbf7u); w16((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,16); }
  /* 11c6b8c2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c6b8c4 pop ecx */
  ECX = (pop32());
  /* 11c6b8c5 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 11c6b8c7 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 11c6b8ca mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
L_11c6b8cd:;
  /* 11c6b8cd pop esi */
  ESI = (pop32());
  /* 11c6b8ce ret  */
  ESPCHK(0x11c6b8a4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8cf @ 0x11c6b8cf (151 bytes, 62 insns) */
void f_11c6b8cf(void) {
  FTRACE(0x11c6b8cfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6b8cf push ebp */
  push32((uint32_t)(EBP));
  /* 11c6b8d0 mov ebp, esp */
  EBP = (ESP);
  /* 11c6b8d2 cmp dword ptr [0x11c87bfc], 0 */
  { uint32_t _a=(r32((uint32_t)(0x11c87bfc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b8d9 push ebx */
  push32((uint32_t)(EBX));
  /* 11c6b8da push esi */
  push32((uint32_t)(ESI));
  /* 11c6b8db jne 0x11c6b8ec */
  if (!C.zf) goto L_11c6b8ec;
  /* 11c6b8dd push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c6b8e0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c6b8e3 call 0x11c69420 */
  push32(0x11c6b8e8u); f_11c69420();
  /* 11c6b8e8 pop ecx */
  ECX = (pop32());
  /* 11c6b8e9 pop ecx */
  ECX = (pop32());
  /* 11c6b8ea jmp 0x11c6b962 */
  goto L_11c6b962;
L_11c6b8ec:;
  /* 11c6b8ec push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11c6b8ee call 0x11c66a86 */
  push32(0x11c6b8f3u); f_11c66a86();
  /* 11c6b8f3 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c6b8f6 pop ecx */
  ECX = (pop32());
L_11c6b8f7:;
  /* 11c6b8f7 movzx bx, byte ptr [esi] */
  BX = ((uint32_t)(r8((uint32_t)(ESI))));
  /* 11c6b8fb test bx, bx */
  { uint32_t _r=(BX)&(BX); fl_logic(_r,16); }
  /* 11c6b8fe je 0x11c6b94a */
  if (C.zf) goto L_11c6b94a;
  /* 11c6b900 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 11c6b903 test byte ptr [eax + 0x11c87d01], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x11c87d01)))&(0x4u); fl_logic(_r,8); }
  /* 11c6b90a je 0x11c6b926 */
  if (C.zf) goto L_11c6b926;
  /* 11c6b90c mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 11c6b90f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c6b910 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 11c6b912 je 0x11c6b931 */
  if (C.zf) goto L_11c6b931;
  /* 11c6b914 movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 11c6b917 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 11c6b91a shl ecx, 8 */
  ECX = (sh_shl((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 11c6b91d or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 11c6b91f cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b922 je 0x11c6b93d */
  if (C.zf) goto L_11c6b93d;
  /* 11c6b924 jmp 0x11c6b92e */
  goto L_11c6b92e;
L_11c6b926:;
  /* 11c6b926 movzx eax, bx */
  EAX = ((uint32_t)(BX));
  /* 11c6b929 cmp dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b92c je 0x11c6b94a */
  if (C.zf) goto L_11c6b94a;
L_11c6b92e:;
  /* 11c6b92e inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c6b92f jmp 0x11c6b8f7 */
  goto L_11c6b8f7;
L_11c6b931:;
  /* 11c6b931 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11c6b933 call 0x11c66ae7 */
  push32(0x11c6b938u); f_11c66ae7();
  /* 11c6b938 pop ecx */
  ECX = (pop32());
  /* 11c6b939 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c6b93b jmp 0x11c6b962 */
  goto L_11c6b962;
L_11c6b93d:;
  /* 11c6b93d push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11c6b93f call 0x11c66ae7 */
  push32(0x11c6b944u); f_11c66ae7();
  /* 11c6b944 pop ecx */
  ECX = (pop32());
  /* 11c6b945 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
  /* 11c6b948 jmp 0x11c6b962 */
  goto L_11c6b962;
L_11c6b94a:;
  /* 11c6b94a push 0x19 */
  push32((uint32_t)(0x19u));
  /* 11c6b94c call 0x11c66ae7 */
  push32(0x11c6b951u); f_11c66ae7();
  /* 11c6b951 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c6b954 pop ecx */
  ECX = (pop32());
  /* 11c6b955 movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 11c6b958 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6b95a neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c6b95c sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6b95e not eax */
  EAX = (~(EAX));
  /* 11c6b960 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_11c6b962:;
  /* 11c6b962 pop esi */
  ESI = (pop32());
  /* 11c6b963 pop ebx */
  EBX = (pop32());
  /* 11c6b964 pop ebp */
  EBP = (pop32());
  /* 11c6b965 ret  */
  ESPCHK(0x11c6b8cfu, _esp0);
  ESP += 4; return;
}

/* FUN_1000b966 @ 0x11c6b966 (43 bytes, 23 insns) */
void f_11c6b966(void) {
  FTRACE(0x11c6b966u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6b966 push esi */
  push32((uint32_t)(ESI));
  /* 11c6b967 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c6b96b test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c6b96d je 0x11c6b98d */
  if (C.zf) goto L_11c6b98d;
  /* 11c6b96f push esi */
  push32((uint32_t)(ESI));
  /* 11c6b970 call 0x11c66830 */
  push32(0x11c6b975u); f_11c66830();
  /* 11c6b975 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c6b976 push eax */
  push32((uint32_t)(EAX));
  /* 11c6b977 call 0x11c64f87 */
  push32(0x11c6b97cu); f_11c64f87();
  /* 11c6b97c pop ecx */
  ECX = (pop32());
  /* 11c6b97d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6b97f pop ecx */
  ECX = (pop32());
  /* 11c6b980 je 0x11c6b98d */
  if (C.zf) goto L_11c6b98d;
  /* 11c6b982 push esi */
  push32((uint32_t)(ESI));
  /* 11c6b983 push eax */
  push32((uint32_t)(EAX));
  /* 11c6b984 call 0x11c663a0 */
  push32(0x11c6b989u); f_11c663a0();
  /* 11c6b989 pop ecx */
  ECX = (pop32());
  /* 11c6b98a pop ecx */
  ECX = (pop32());
  /* 11c6b98b pop esi */
  ESI = (pop32());
  /* 11c6b98c ret  */
  ESPCHK(0x11c6b966u, _esp0);
  ESP += 4; return;
L_11c6b98d:;
  /* 11c6b98d xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c6b98f pop esi */
  ESI = (pop32());
  /* 11c6b990 ret  */
  ESPCHK(0x11c6b966u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b991 @ 0x11c6b991 (150 bytes, 54 insns) */
void f_11c6b991(void) {
  FTRACE(0x11c6b991u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6b991 mov eax, 0x11c6d404 */
  EAX = (0x11c6d404u);
  /* 11c6b996 call 0x11c6c788 */
  push32(0x11c6b99bu); f_11c6c788();
  /* 11c6b99b push ecx */
  push32((uint32_t)(ECX));
  /* 11c6b99c push ecx */
  push32((uint32_t)(ECX));
  /* 11c6b99d push ebx */
  push32((uint32_t)(EBX));
  /* 11c6b99e push esi */
  push32((uint32_t)(ESI));
  /* 11c6b99f push edi */
  push32((uint32_t)(EDI));
  /* 11c6b9a0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c6b9a2 cmp dword ptr [ebp + 8], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b9a5 mov esi, ecx */
  ESI = (ECX);
  /* 11c6b9a7 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6b9a9 mov dword ptr [ebp - 0x14], esi */
  w32((uint32_t)(EBP + -0x14), (ESI));
  /* 11c6b9ac mov dword ptr [ebp - 0x10], ebx */
  w32((uint32_t)(EBP + -0x10), (EBX));
  /* 11c6b9af pop edi */
  EDI = (pop32());
  /* 11c6b9b0 je 0x11c6b9cd */
  if (C.zf) goto L_11c6b9cd;
  /* 11c6b9b2 lea ecx, [esi + 0x14] */
  ECX = ((uint32_t)(ESI + 0x14));
  /* 11c6b9b5 mov dword ptr [esi], 0x11c6e888 */
  w32((uint32_t)(ESI), (0x11c6e888u));
  /* 11c6b9bb mov dword ptr [esi + 0xc], 0x11c6e880 */
  w32((uint32_t)(ESI + 0xc), (0x11c6e880u));
  /* 11c6b9c2 call 0x11c6ba65 */
  push32(0x11c6b9c7u); f_11c6ba65();
  /* 11c6b9c7 mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 11c6b9ca mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
L_11c6b9cd:;
  /* 11c6b9cd push 0x54 */
  push32((uint32_t)(0x54u));
  /* 11c6b9cf call 0x11c6c493 */
  push32(0x11c6b9d4u); f_11c6c493();
  /* 11c6b9d4 pop ecx */
  ECX = (pop32());
  /* 11c6b9d5 mov ecx, eax */
  ECX = (EAX);
  /* 11c6b9d7 mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 11c6b9da cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6b9dc mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11c6b9df je 0x11c6b9e8 */
  if (C.zf) goto L_11c6b9e8;
  /* 11c6b9e1 call 0x11c6bc45 */
  push32(0x11c6b9e6u); f_11c6bc45();
  /* 11c6b9e6 jmp 0x11c6b9ea */
  goto L_11c6b9ea;
L_11c6b9e8:;
  /* 11c6b9e8 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c6b9ea:;
  /* 11c6b9ea push ebx */
  push32((uint32_t)(EBX));
  /* 11c6b9eb push eax */
  push32((uint32_t)(EAX));
  /* 11c6b9ec mov ecx, esi */
  ECX = (ESI);
  /* 11c6b9ee mov byte ptr [ebp - 4], bl */
  w8((uint32_t)(EBP + -0x4), (BL));
  /* 11c6b9f1 call 0x11c6bb83 */
  push32(0x11c6b9f6u); f_11c6bb83();
  /* 11c6b9f6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c6b9f8 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c6b9fb mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11c6b9fe mov dword ptr [eax + esi], 0x11c6e87c */
  w32((uint32_t)(EAX + ESI*1), (0x11c6e87cu));
  /* 11c6ba05 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c6ba07 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11c6ba0a mov dword ptr [eax + esi + 0x1c], edi */
  w32((uint32_t)(EAX + ESI*1 + 0x1c), (EDI));
  /* 11c6ba0e mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c6ba10 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11c6ba13 mov dword ptr [eax + esi + 0x1c], edi */
  w32((uint32_t)(EAX + ESI*1 + 0x1c), (EDI));
  /* 11c6ba17 mov eax, esi */
  EAX = (ESI);
  /* 11c6ba19 pop edi */
  EDI = (pop32());
  /* 11c6ba1a pop esi */
  ESI = (pop32());
  /* 11c6ba1b pop ebx */
  EBX = (pop32());
  /* 11c6ba1c mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11c6ba23 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c6ba24 ret 4 */
  ESPCHK(0x11c6b991u, _esp0);
  ESP += 8; return;
}

/* FUN_1000ba52 @ 0x11c6ba52 (19 bytes, 4 insns) */
void f_11c6ba52(void) {
  FTRACE(0x11c6ba52u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6ba52 mov eax, dword ptr [ecx - 0x14] */
  EAX = (r32((uint32_t)(ECX + -0x14)));
  /* 11c6ba55 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11c6ba58 mov dword ptr [eax + ecx - 0x14], 0x11c6e87c */
  w32((uint32_t)(EAX + ECX*1 + -0x14), (0x11c6e87cu));
  /* 11c6ba60 jmp 0x11c6bbf8 */
  f_11c6bbf8(); return;
}

/* FUN_1000ba65 @ 0x11c6ba65 (94 bytes, 29 insns) */
void f_11c6ba65(void) {
  FTRACE(0x11c6ba65u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6ba65 push esi */
  push32((uint32_t)(ESI));
  /* 11c6ba66 mov esi, ecx */
  ESI = (ECX);
  /* 11c6ba68 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c6ba6a or dword ptr [esi + 0x34], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x34)))|(0xffffffffu); w32((uint32_t)(ESI + 0x34), (_r)); fl_logic(_r,32); }
  /* 11c6ba6e mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 11c6ba71 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11c6ba74 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 11c6ba77 mov dword ptr [esi + 0x20], eax */
  w32((uint32_t)(ESI + 0x20), (EAX));
  /* 11c6ba7a mov dword ptr [esi + 0x24], eax */
  w32((uint32_t)(ESI + 0x24), (EAX));
  /* 11c6ba7d mov dword ptr [esi + 0x30], eax */
  w32((uint32_t)(ESI + 0x30), (EAX));
  /* 11c6ba80 mov dword ptr [esi + 0x1c], eax */
  w32((uint32_t)(ESI + 0x1c), (EAX));
  /* 11c6ba83 lea eax, [esi + 0x38] */
  EAX = ((uint32_t)(ESI + 0x38));
  /* 11c6ba86 mov dword ptr [esi], 0x11c6e8a0 */
  w32((uint32_t)(ESI), (0x11c6e8a0u));
  /* 11c6ba8c push eax */
  push32((uint32_t)(EAX));
  /* 11c6ba8d mov dword ptr [esi + 8], 4 */
  w32((uint32_t)(ESI + 0x8), (0x4u));
  /* 11c6ba94 mov dword ptr [esi + 0x28], 6 */
  w32((uint32_t)(ESI + 0x28), (0x6u));
  /* 11c6ba9b mov byte ptr [esi + 0x2c], 0x20 */
  w8((uint32_t)(ESI + 0x2c), (0x20u));
  /* 11c6ba9f call 0x11c6bfeb */
  push32(0x11c6baa4u); f_11c6bfeb();
  /* 11c6baa4 mov eax, dword ptr [0x11c87bd8] */
  EAX = (r32((uint32_t)(0x11c87bd8)));
  /* 11c6baa9 inc dword ptr [0x11c87bd8] */
  { uint32_t _r=(r32((uint32_t)(0x11c87bd8)))+1; w32((uint32_t)(0x11c87bd8), (_r)); fl_inc(_r,32); }
  /* 11c6baaf test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6bab1 pop ecx */
  ECX = (pop32());
  /* 11c6bab2 jne 0x11c6babf */
  if (!C.zf) goto L_11c6babf;
  /* 11c6bab4 push 0x11c87ba0 */
  push32((uint32_t)(0x11c87ba0u));
  /* 11c6bab9 call 0x11c6bfeb */
  push32(0x11c6babeu); f_11c6bfeb();
  /* 11c6babe pop ecx */
  ECX = (pop32());
L_11c6babf:;
  /* 11c6babf mov eax, esi */
  EAX = (ESI);
  /* 11c6bac1 pop esi */
  ESI = (pop32());
  /* 11c6bac2 ret  */
  ESPCHK(0x11c6ba65u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bac3 @ 0x11c6bac3 (28 bytes, 11 insns) */
void f_11c6bac3(void) {
  FTRACE(0x11c6bac3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6bac3 push esi */
  push32((uint32_t)(ESI));
  /* 11c6bac4 mov esi, ecx */
  ESI = (ECX);
  /* 11c6bac6 call 0x11c6badf */
  push32(0x11c6bacbu); f_11c6badf();
  /* 11c6bacb test byte ptr [esp + 8], 1 */
  { uint32_t _r=(r8((uint32_t)(ESP + 0x8)))&(0x1u); fl_logic(_r,8); }
  /* 11c6bad0 je 0x11c6bad9 */
  if (C.zf) goto L_11c6bad9;
  /* 11c6bad2 push esi */
  push32((uint32_t)(ESI));
  /* 11c6bad3 call 0x11c6c43d */
  push32(0x11c6bad8u); f_11c6c43d();
  /* 11c6bad8 pop ecx */
  ECX = (pop32());
L_11c6bad9:;
  /* 11c6bad9 mov eax, esi */
  EAX = (ESI);
  /* 11c6badb pop esi */
  ESI = (pop32());
  /* 11c6badc ret 4 */
  ESPCHK(0x11c6bac3u, _esp0);
  ESP += 8; return;
}

/* FUN_1000badf @ 0x11c6badf (74 bytes, 25 insns) */
void f_11c6badf(void) {
  FTRACE(0x11c6badfu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6badf push esi */
  push32((uint32_t)(ESI));
  /* 11c6bae0 mov esi, ecx */
  ESI = (ECX);
  /* 11c6bae2 or dword ptr [esi + 0x34], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x34)))|(0xffffffffu); w32((uint32_t)(ESI + 0x34), (_r)); fl_logic(_r,32); }
  /* 11c6bae6 mov dword ptr [esi], 0x11c6e8a0 */
  w32((uint32_t)(ESI), (0x11c6e8a0u));
  /* 11c6baec dec dword ptr [0x11c87bd8] */
  { uint32_t _r=(r32((uint32_t)(0x11c87bd8)))-1; w32((uint32_t)(0x11c87bd8), (_r)); fl_dec(_r,32); }
  /* 11c6baf2 jne 0x11c6baff */
  if (!C.zf) goto L_11c6baff;
  /* 11c6baf4 push 0x11c87ba0 */
  push32((uint32_t)(0x11c87ba0u));
  /* 11c6baf9 call 0x11c6bff6 */
  push32(0x11c6bafeu); f_11c6bff6();
  /* 11c6bafe pop ecx */
  ECX = (pop32());
L_11c6baff:;
  /* 11c6baff lea eax, [esi + 0x38] */
  EAX = ((uint32_t)(ESI + 0x38));
  /* 11c6bb02 push eax */
  push32((uint32_t)(EAX));
  /* 11c6bb03 call 0x11c6bff6 */
  push32(0x11c6bb08u); f_11c6bff6();
  /* 11c6bb08 cmp dword ptr [esi + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6bb0c pop ecx */
  ECX = (pop32());
  /* 11c6bb0d je 0x11c6bb1c */
  if (C.zf) goto L_11c6bb1c;
  /* 11c6bb0f mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11c6bb12 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11c6bb14 je 0x11c6bb1c */
  if (C.zf) goto L_11c6bb1c;
  /* 11c6bb16 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11c6bb18 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6bb1a call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x11c6bb1cu);
L_11c6bb1c:;
  /* 11c6bb1c and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11c6bb20 mov dword ptr [esi + 8], 4 */
  w32((uint32_t)(ESI + 0x8), (0x4u));
  /* 11c6bb27 pop esi */
  ESI = (pop32());
  /* 11c6bb28 ret  */
  ESPCHK(0x11c6badfu, _esp0);
  ESP += 4; return;
}

/* FUN_1000bb29 @ 0x11c6bb29 (47 bytes, 19 insns) */
void f_11c6bb29(void) {
  FTRACE(0x11c6bb29u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6bb29 push esi */
  push32((uint32_t)(ESI));
  /* 11c6bb2a mov esi, ecx */
  ESI = (ECX);
  /* 11c6bb2c cmp dword ptr [esi + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6bb30 je 0x11c6bb3f */
  if (C.zf) goto L_11c6bb3f;
  /* 11c6bb32 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11c6bb35 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11c6bb37 je 0x11c6bb3f */
  if (C.zf) goto L_11c6bb3f;
  /* 11c6bb39 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11c6bb3b push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6bb3d call dword ptr [eax] */
  call_ind((uint32_t)(r32((uint32_t)(EAX))), 0x11c6bb3fu);
L_11c6bb3f:;
  /* 11c6bb3f mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c6bb43 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6bb45 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 11c6bb48 je 0x11c6bb50 */
  if (C.zf) goto L_11c6bb50;
  /* 11c6bb4a and dword ptr [esi + 8], 0xfffffffb */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(0xfffffffbu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 11c6bb4e jmp 0x11c6bb54 */
  goto L_11c6bb54;
L_11c6bb50:;
  /* 11c6bb50 or dword ptr [esi + 8], 4 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0x4u); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
L_11c6bb54:;
  /* 11c6bb54 pop esi */
  ESI = (pop32());
  /* 11c6bb55 ret 4 */
  ESPCHK(0x11c6bb29u, _esp0);
  ESP += 8; return;
}

/* FUN_1000bb83 @ 0x11c6bb83 (117 bytes, 41 insns) */
void f_11c6bb83(void) {
  FTRACE(0x11c6bb83u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6bb83 mov eax, 0x11c6d435 */
  EAX = (0x11c6d435u);
  /* 11c6bb88 call 0x11c6c788 */
  push32(0x11c6bb8du); f_11c6c788();
  /* 11c6bb8d push ecx */
  push32((uint32_t)(ECX));
  /* 11c6bb8e push ecx */
  push32((uint32_t)(ECX));
  /* 11c6bb8f push ebx */
  push32((uint32_t)(EBX));
  /* 11c6bb90 push esi */
  push32((uint32_t)(ESI));
  /* 11c6bb91 push edi */
  push32((uint32_t)(EDI));
  /* 11c6bb92 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c6bb94 cmp dword ptr [ebp + 0xc], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6bb97 mov esi, ecx */
  ESI = (ECX);
  /* 11c6bb99 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6bb9b mov dword ptr [ebp - 0x14], esi */
  w32((uint32_t)(EBP + -0x14), (ESI));
  /* 11c6bb9e mov dword ptr [ebp - 0x10], ebx */
  w32((uint32_t)(EBP + -0x10), (EBX));
  /* 11c6bba1 pop edi */
  EDI = (pop32());
  /* 11c6bba2 je 0x11c6bbbf */
  if (C.zf) goto L_11c6bbbf;
  /* 11c6bba4 lea ecx, [esi + 0x14] */
  ECX = ((uint32_t)(ESI + 0x14));
  /* 11c6bba7 mov dword ptr [esi], 0x11c6e8b4 */
  w32((uint32_t)(ESI), (0x11c6e8b4u));
  /* 11c6bbad mov dword ptr [esi + 0xc], 0x11c6e8ac */
  w32((uint32_t)(ESI + 0xc), (0x11c6e8acu));
  /* 11c6bbb4 call 0x11c6ba65 */
  push32(0x11c6bbb9u); f_11c6ba65();
  /* 11c6bbb9 mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 11c6bbbc mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
L_11c6bbbf:;
  /* 11c6bbbf push ebx */
  push32((uint32_t)(EBX));
  /* 11c6bbc0 mov ecx, esi */
  ECX = (ESI);
  /* 11c6bbc2 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c6bbc5 call 0x11c6c042 */
  push32(0x11c6bbcau); f_11c6c042();
  /* 11c6bbca push ebx */
  push32((uint32_t)(EBX));
  /* 11c6bbcb lea ecx, [esi + 0xc] */
  ECX = ((uint32_t)(ESI + 0xc));
  /* 11c6bbce push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c6bbd1 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 11c6bbd4 call 0x11c6c117 */
  push32(0x11c6bbd9u); f_11c6c117();
  /* 11c6bbd9 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c6bbdb mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c6bbde pop edi */
  EDI = (pop32());
  /* 11c6bbdf mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11c6bbe2 mov dword ptr [eax + esi], 0x11c6e8a8 */
  w32((uint32_t)(EAX + ESI*1), (0x11c6e8a8u));
  /* 11c6bbe9 mov eax, esi */
  EAX = (ESI);
  /* 11c6bbeb pop esi */
  ESI = (pop32());
  /* 11c6bbec pop ebx */
  EBX = (pop32());
  /* 11c6bbed mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11c6bbf4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c6bbf5 ret 8 */
  ESPCHK(0x11c6bb83u, _esp0);
  ESP += 12; return;
}

/* FUN_1000bbf8 @ 0x11c6bbf8 (77 bytes, 24 insns) */
void f_11c6bbf8(void) {
  FTRACE(0x11c6bbf8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6bbf8 mov eax, 0x11c6d44b */
  EAX = (0x11c6d44bu);
  /* 11c6bbfd call 0x11c6c788 */
  push32(0x11c6bc02u); f_11c6c788();
  /* 11c6bc02 push ecx */
  push32((uint32_t)(ECX));
  /* 11c6bc03 mov eax, dword ptr [ecx - 0x14] */
  EAX = (r32((uint32_t)(ECX + -0x14)));
  /* 11c6bc06 push esi */
  push32((uint32_t)(ESI));
  /* 11c6bc07 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 11c6bc0a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11c6bc0d mov dword ptr [eax + ecx - 0x14], 0x11c6e8a8 */
  w32((uint32_t)(EAX + ECX*1 + -0x14), (0x11c6e8a8u));
  /* 11c6bc15 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c6bc19 lea esi, [ecx - 8] */
  ESI = ((uint32_t)(ECX + -0x8));
  /* 11c6bc1c add ecx, -0x14 */
  { uint32_t _a=(ECX),_b=(0xffffffecu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6bc1f neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c6bc21 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6bc23 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 11c6bc25 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6bc28 call 0x11c6c17c */
  push32(0x11c6bc2du); f_11c6c17c();
  /* 11c6bc2d or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c6bc31 mov ecx, esi */
  ECX = (ESI);
  /* 11c6bc33 call 0x11c6c0b8 */
  push32(0x11c6bc38u); f_11c6c0b8();
  /* 11c6bc38 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c6bc3b pop esi */
  ESI = (pop32());
  /* 11c6bc3c mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11c6bc43 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c6bc44 ret  */
  ESPCHK(0x11c6bbf8u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc45 @ 0x11c6bc45 (26 bytes, 9 insns) */
void f_11c6bc45(void) {
  FTRACE(0x11c6bc45u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6bc45 push esi */
  push32((uint32_t)(ESI));
  /* 11c6bc46 mov esi, ecx */
  ESI = (ECX);
  /* 11c6bc48 call 0x11c6c18b */
  push32(0x11c6bc4du); f_11c6c18b();
  /* 11c6bc4d and dword ptr [esi + 0x50], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x50)))&(0x0u); w32((uint32_t)(ESI + 0x50), (_r)); fl_logic(_r,32); }
  /* 11c6bc51 or dword ptr [esi + 0x4c], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4c)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4c), (_r)); fl_logic(_r,32); }
  /* 11c6bc55 mov dword ptr [esi], 0x11c6e8d8 */
  w32((uint32_t)(ESI), (0x11c6e8d8u));
  /* 11c6bc5b mov eax, esi */
  EAX = (ESI);
  /* 11c6bc5d pop esi */
  ESI = (pop32());
  /* 11c6bc5e ret  */
  ESPCHK(0x11c6bc45u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc5f @ 0x11c6bc5f (28 bytes, 11 insns) */
void f_11c6bc5f(void) {
  FTRACE(0x11c6bc5fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6bc5f push esi */
  push32((uint32_t)(ESI));
  /* 11c6bc60 mov esi, ecx */
  ESI = (ECX);
  /* 11c6bc62 call 0x11c6bc7b */
  push32(0x11c6bc67u); f_11c6bc7b();
  /* 11c6bc67 test byte ptr [esp + 8], 1 */
  { uint32_t _r=(r8((uint32_t)(ESP + 0x8)))&(0x1u); fl_logic(_r,8); }
  /* 11c6bc6c je 0x11c6bc75 */
  if (C.zf) goto L_11c6bc75;
  /* 11c6bc6e push esi */
  push32((uint32_t)(ESI));
  /* 11c6bc6f call 0x11c6c43d */
  push32(0x11c6bc74u); f_11c6c43d();
  /* 11c6bc74 pop ecx */
  ECX = (pop32());
L_11c6bc75:;
  /* 11c6bc75 mov eax, esi */
  EAX = (ESI);
  /* 11c6bc77 pop esi */
  ESI = (pop32());
  /* 11c6bc78 ret 4 */
  ESPCHK(0x11c6bc5fu, _esp0);
  ESP += 8; return;
}

/* FUN_1000bc7b @ 0x11c6bc7b (87 bytes, 28 insns) */
void f_11c6bc7b(void) {
  FTRACE(0x11c6bc7bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6bc7b mov eax, 0x11c6d460 */
  EAX = (0x11c6d460u);
  /* 11c6bc80 call 0x11c6c788 */
  push32(0x11c6bc85u); f_11c6c788();
  /* 11c6bc85 push ecx */
  push32((uint32_t)(ECX));
  /* 11c6bc86 push esi */
  push32((uint32_t)(ESI));
  /* 11c6bc87 mov esi, ecx */
  ESI = (ECX);
  /* 11c6bc89 mov dword ptr [ebp - 0x10], esi */
  w32((uint32_t)(EBP + -0x10), (ESI));
  /* 11c6bc8c mov dword ptr [esi], 0x11c6e8d8 */
  w32((uint32_t)(ESI), (0x11c6e8d8u));
  /* 11c6bc92 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c6bc96 cmp dword ptr [esi + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6bc9a jge 0x11c6bca6 */
  if ((C.sf==C.of)) goto L_11c6bca6;
  /* 11c6bc9c lea eax, [esi + 0x34] */
  EAX = ((uint32_t)(ESI + 0x34));
  /* 11c6bc9f push eax */
  push32((uint32_t)(EAX));
  /* 11c6bca0 call 0x11c6c001 */
  push32(0x11c6bca5u); f_11c6c001();
  /* 11c6bca5 pop ecx */
  ECX = (pop32());
L_11c6bca6:;
  /* 11c6bca6 cmp dword ptr [esi + 0x50], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x50))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6bcaa mov ecx, esi */
  ECX = (ESI);
  /* 11c6bcac je 0x11c6bcb5 */
  if (C.zf) goto L_11c6bcb5;
  /* 11c6bcae call 0x11c6bcd2 */
  push32(0x11c6bcb3u); f_11c6bcd2();
  /* 11c6bcb3 jmp 0x11c6bcba */
  goto L_11c6bcba;
L_11c6bcb5:;
  /* 11c6bcb5 call 0x11c6beac */
  push32(0x11c6bcbau); f_11c6beac();
L_11c6bcba:;
  /* 11c6bcba or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c6bcbe mov ecx, esi */
  ECX = (ESI);
  /* 11c6bcc0 call 0x11c6c1e6 */
  push32(0x11c6bcc5u); f_11c6c1e6();
  /* 11c6bcc5 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c6bcc8 pop esi */
  ESI = (pop32());
  /* 11c6bcc9 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11c6bcd0 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c6bcd1 ret  */
  ESPCHK(0x11c6bc7bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000bcd2 @ 0x11c6bcd2 (99 bytes, 41 insns) */
void f_11c6bcd2(void) {
  FTRACE(0x11c6bcd2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6bcd2 push esi */
  push32((uint32_t)(ESI));
  /* 11c6bcd3 mov esi, ecx */
  ESI = (ECX);
  /* 11c6bcd5 push edi */
  push32((uint32_t)(EDI));
  /* 11c6bcd6 cmp dword ptr [esi + 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6bcda je 0x11c6bd30 */
  if (C.zf) goto L_11c6bd30;
  /* 11c6bcdc cmp dword ptr [esi + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6bce0 jge 0x11c6bcec */
  if ((C.sf==C.of)) goto L_11c6bcec;
  /* 11c6bce2 lea eax, [esi + 0x34] */
  EAX = ((uint32_t)(ESI + 0x34));
  /* 11c6bce5 push eax */
  push32((uint32_t)(EAX));
  /* 11c6bce6 call 0x11c6c001 */
  push32(0x11c6bcebu); f_11c6c001();
  /* 11c6bceb pop ecx */
  ECX = (pop32());
L_11c6bcec:;
  /* 11c6bcec mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c6bcee mov ecx, esi */
  ECX = (ESI);
  /* 11c6bcf0 call dword ptr [eax + 4] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x4))), 0x11c6bcf3u);
  /* 11c6bcf3 push dword ptr [esi + 0x4c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4c))));
  /* 11c6bcf6 mov edi, eax */
  EDI = (EAX);
  /* 11c6bcf8 call 0x11c6b7c4 */
  push32(0x11c6bcfdu); f_11c6b7c4();
  /* 11c6bcfd cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6bd00 pop ecx */
  ECX = (pop32());
  /* 11c6bd01 je 0x11c6bd20 */
  if (C.zf) goto L_11c6bd20;
  /* 11c6bd03 cmp edi, -1 */
  { uint32_t _a=(EDI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6bd06 je 0x11c6bd20 */
  if (C.zf) goto L_11c6bd20;
  /* 11c6bd08 or dword ptr [esi + 0x4c], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4c)))|(0xffffffffu); w32((uint32_t)(ESI + 0x4c), (_r)); fl_logic(_r,32); }
  /* 11c6bd0c cmp dword ptr [esi + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6bd10 jge 0x11c6bd1c */
  if ((C.sf==C.of)) goto L_11c6bd1c;
  /* 11c6bd12 lea eax, [esi + 0x34] */
  EAX = ((uint32_t)(ESI + 0x34));
  /* 11c6bd15 push eax */
  push32((uint32_t)(EAX));
  /* 11c6bd16 call 0x11c6c00c */
  push32(0x11c6bd1bu); f_11c6c00c();
  /* 11c6bd1b pop ecx */
  ECX = (pop32());
L_11c6bd1c:;
  /* 11c6bd1c mov eax, esi */
  EAX = (ESI);
  /* 11c6bd1e jmp 0x11c6bd32 */
  goto L_11c6bd32;
L_11c6bd20:;
  /* 11c6bd20 cmp dword ptr [esi + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6bd24 jge 0x11c6bd30 */
  if ((C.sf==C.of)) goto L_11c6bd30;
  /* 11c6bd26 add esi, 0x34 */
  { uint32_t _a=(ESI),_b=(0x34u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6bd29 push esi */
  push32((uint32_t)(ESI));
  /* 11c6bd2a call 0x11c6c00c */
  push32(0x11c6bd2fu); f_11c6c00c();
  /* 11c6bd2f pop ecx */
  ECX = (pop32());
L_11c6bd30:;
  /* 11c6bd30 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c6bd32:;
  /* 11c6bd32 pop edi */
  EDI = (pop32());
  /* 11c6bd33 pop esi */
  ESI = (pop32());
  /* 11c6bd34 ret  */
  ESPCHK(0x11c6bcd2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bd35 @ 0x11c6bd35 (113 bytes, 44 insns) */
void f_11c6bd35(void) {
  FTRACE(0x11c6bd35u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6bd35 push esi */
  push32((uint32_t)(ESI));
  /* 11c6bd36 push edi */
  push32((uint32_t)(EDI));
  /* 11c6bd37 mov esi, ecx */
  ESI = (ECX);
  /* 11c6bd39 call 0x11c6c34e */
  push32(0x11c6bd3eu); f_11c6c34e();
  /* 11c6bd3e or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 11c6bd41 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6bd43 je 0x11c6bda2 */
  if (C.zf) goto L_11c6bda2;
  /* 11c6bd45 mov ecx, esi */
  ECX = (ESI);
  /* 11c6bd47 call 0x11c6beac */
  push32(0x11c6bd4cu); f_11c6beac();
  /* 11c6bd4c cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6bd4e je 0x11c6bda2 */
  if (C.zf) goto L_11c6bda2;
  /* 11c6bd50 mov ecx, dword ptr [esi + 8] */
  ECX = (r32((uint32_t)(ESI + 0x8)));
  /* 11c6bd53 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11c6bd55 jne 0x11c6bd66 */
  if (!C.zf) goto L_11c6bd66;
  /* 11c6bd57 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11c6bd5a mov dword ptr [esi + 0x18], eax */
  w32((uint32_t)(ESI + 0x18), (EAX));
  /* 11c6bd5d mov dword ptr [esi + 0x1c], eax */
  w32((uint32_t)(ESI + 0x1c), (EAX));
  /* 11c6bd60 mov eax, dword ptr [esi + 0x14] */
  EAX = (r32((uint32_t)(ESI + 0x14)));
  /* 11c6bd63 mov dword ptr [esi + 0x20], eax */
  w32((uint32_t)(ESI + 0x20), (EAX));
L_11c6bd66:;
  /* 11c6bd66 cmp dword ptr [esp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(ESP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6bd6a je 0x11c6bd83 */
  if (C.zf) goto L_11c6bd83;
  /* 11c6bd6c test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11c6bd6e jne 0x11c6bd8b */
  if (!C.zf) goto L_11c6bd8b;
  /* 11c6bd70 mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 11c6bd73 cmp eax, dword ptr [esi + 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6bd76 jae 0x11c6bd8b */
  if (!C.cf) goto L_11c6bd8b;
  /* 11c6bd78 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11c6bd7c mov ecx, esi */
  ECX = (ESI);
  /* 11c6bd7e call 0x11c6bda6 */
  push32(0x11c6bd83u); f_11c6bda6();
L_11c6bd83:;
  /* 11c6bd83 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6bd85 pop eax */
  EAX = (pop32());
L_11c6bd86:;
  /* 11c6bd86 pop edi */
  EDI = (pop32());
  /* 11c6bd87 pop esi */
  ESI = (pop32());
  /* 11c6bd88 ret 4 */
  ESPCHK(0x11c6bd35u, _esp0);
  ESP += 8; return;
L_11c6bd8b:;
  /* 11c6bd8b lea eax, [esp + 0xc] */
  EAX = ((uint32_t)(ESP + 0xc));
  /* 11c6bd8f push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6bd91 push eax */
  push32((uint32_t)(EAX));
  /* 11c6bd92 push dword ptr [esi + 0x4c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4c))));
  /* 11c6bd95 call 0x11c689c0 */
  push32(0x11c6bd9au); f_11c689c0();
  /* 11c6bd9a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6bd9d cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6bda0 je 0x11c6bd83 */
  if (C.zf) goto L_11c6bd83;
L_11c6bda2:;
  /* 11c6bda2 mov eax, edi */
  EAX = (EDI);
  /* 11c6bda4 jmp 0x11c6bd86 */
  goto L_11c6bd86;
}

/* FUN_1000bda6 @ 0x11c6bda6 (34 bytes, 12 insns) */
void f_11c6bda6(void) {
  FTRACE(0x11c6bda6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6bda6 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11c6bda9 cmp eax, dword ptr [ecx + 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6bdac jae 0x11c6bdbc */
  if (!C.cf) goto L_11c6bdbc;
  /* 11c6bdae mov dl, byte ptr [esp + 4] */
  DL = (r8((uint32_t)(ESP + 0x4)));
  /* 11c6bdb2 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 11c6bdb4 inc dword ptr [ecx + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x1c)))+1; w32((uint32_t)(ECX + 0x1c), (_r)); fl_inc(_r,32); }
  /* 11c6bdb7 movzx eax, dl */
  EAX = ((uint32_t)(DL));
  /* 11c6bdba jmp 0x11c6bdc5 */
  goto L_11c6bdc5;
L_11c6bdbc:;
  /* 11c6bdbc mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11c6bdbe push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11c6bdc2 call dword ptr [eax + 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x1c))), 0x11c6bdc5u);
L_11c6bdc5:;
  /* 11c6bdc5 ret 4 */
  ESPCHK(0x11c6bda6u, _esp0);
  ESP += 8; return;
}

/* FUN_1000bdc8 @ 0x11c6bdc8 (144 bytes, 60 insns) */
void f_11c6bdc8(void) {
  FTRACE(0x11c6bdc8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6bdc8 push ebp */
  push32((uint32_t)(EBP));
  /* 11c6bdc9 mov ebp, esp */
  EBP = (ESP);
  /* 11c6bdcb push ecx */
  push32((uint32_t)(ECX));
  /* 11c6bdcc push esi */
  push32((uint32_t)(ESI));
  /* 11c6bdcd push edi */
  push32((uint32_t)(EDI));
  /* 11c6bdce mov esi, ecx */
  ESI = (ECX);
  /* 11c6bdd0 call 0x11c6be58 */
  push32(0x11c6bdd5u); f_11c6be58();
  /* 11c6bdd5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6bdd7 je 0x11c6bde1 */
  if (C.zf) goto L_11c6bde1;
  /* 11c6bdd9 mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 11c6bddc movzx eax, byte ptr [eax] */
  EAX = ((uint32_t)(r8((uint32_t)(EAX))));
  /* 11c6bddf jmp 0x11c6be54 */
  goto L_11c6be54;
L_11c6bde1:;
  /* 11c6bde1 mov ecx, esi */
  ECX = (ESI);
  /* 11c6bde3 call 0x11c6c34e */
  push32(0x11c6bde8u); f_11c6c34e();
  /* 11c6bde8 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 11c6bdeb cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6bded je 0x11c6be3c */
  if (C.zf) goto L_11c6be3c;
  /* 11c6bdef mov ecx, esi */
  ECX = (ESI);
  /* 11c6bdf1 call 0x11c6beac */
  push32(0x11c6bdf6u); f_11c6beac();
  /* 11c6bdf6 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6bdf8 je 0x11c6be3c */
  if (C.zf) goto L_11c6be3c;
  /* 11c6bdfa cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6bdfe je 0x11c6be1b */
  if (C.zf) goto L_11c6be1b;
  /* 11c6be00 lea eax, [ebp - 1] */
  EAX = ((uint32_t)(EBP + -0x1));
  /* 11c6be03 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6be05 push eax */
  push32((uint32_t)(EAX));
  /* 11c6be06 push dword ptr [esi + 0x4c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4c))));
  /* 11c6be09 call 0x11c6c7a7 */
  push32(0x11c6be0eu); f_11c6c7a7();
  /* 11c6be0e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6be11 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6be13 jle 0x11c6be3c */
  if ((C.zf||C.sf!=C.of)) goto L_11c6be3c;
  /* 11c6be15 movzx eax, byte ptr [ebp - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x1))));
  /* 11c6be19 jmp 0x11c6be54 */
  goto L_11c6be54;
L_11c6be1b:;
  /* 11c6be1b mov eax, dword ptr [esi + 0x14] */
  EAX = (r32((uint32_t)(ESI + 0x14)));
  /* 11c6be1e mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 11c6be21 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6be23 jbe 0x11c6be29 */
  if ((C.cf||C.zf)) goto L_11c6be29;
  /* 11c6be25 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6be27 jmp 0x11c6be2b */
  goto L_11c6be2b;
L_11c6be29:;
  /* 11c6be29 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c6be2b:;
  /* 11c6be2b push eax */
  push32((uint32_t)(EAX));
  /* 11c6be2c push ecx */
  push32((uint32_t)(ECX));
  /* 11c6be2d push dword ptr [esi + 0x4c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x4c))));
  /* 11c6be30 call 0x11c6c7a7 */
  push32(0x11c6be35u); f_11c6c7a7();
  /* 11c6be35 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6be38 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6be3a jg 0x11c6be40 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c6be40;
L_11c6be3c:;
  /* 11c6be3c mov eax, edi */
  EAX = (EDI);
  /* 11c6be3e jmp 0x11c6be54 */
  goto L_11c6be54;
L_11c6be40:;
  /* 11c6be40 mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 11c6be43 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
  /* 11c6be46 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6be48 mov dword ptr [esi + 0x24], ecx */
  w32((uint32_t)(ESI + 0x24), (ECX));
  /* 11c6be4b mov dword ptr [esi + 0x28], ecx */
  w32((uint32_t)(ESI + 0x28), (ECX));
  /* 11c6be4e mov dword ptr [esi + 0x2c], eax */
  w32((uint32_t)(ESI + 0x2c), (EAX));
  /* 11c6be51 movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
L_11c6be54:;
  /* 11c6be54 pop edi */
  EDI = (pop32());
  /* 11c6be55 pop esi */
  ESI = (pop32());
  /* 11c6be56 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c6be57 ret  */
  ESPCHK(0x11c6bdc8u, _esp0);
  ESP += 4; return;
}

/* FUN_1000be58 @ 0x11c6be58 (16 bytes, 8 insns) */
void f_11c6be58(void) {
  FTRACE(0x11c6be58u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6be58 mov edx, dword ptr [ecx + 0x28] */
  EDX = (r32((uint32_t)(ECX + 0x28)));
  /* 11c6be5b mov eax, dword ptr [ecx + 0x2c] */
  EAX = (r32((uint32_t)(ECX + 0x2c)));
  /* 11c6be5e cmp edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6be60 jae 0x11c6be65 */
  if (!C.cf) goto L_11c6be65;
  /* 11c6be62 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6be64 ret  */
  ESPCHK(0x11c6be58u, _esp0);
  ESP += 4; return;
L_11c6be65:;
  /* 11c6be65 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c6be67 ret  */
  ESPCHK(0x11c6be58u, _esp0);
  ESP += 4; return;
}

/* FUN_1000beac @ 0x11c6beac (219 bytes, 90 insns) */
void f_11c6beac(void) {
  FTRACE(0x11c6beacu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6beac push ebx */
  push32((uint32_t)(EBX));
  /* 11c6bead push esi */
  push32((uint32_t)(ESI));
  /* 11c6beae mov esi, ecx */
  ESI = (ECX);
  /* 11c6beb0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c6beb3 push edi */
  push32((uint32_t)(EDI));
  /* 11c6beb4 mov ecx, dword ptr [esi + 0x4c] */
  ECX = (r32((uint32_t)(ESI + 0x4c)));
  /* 11c6beb7 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6beb9 je 0x11c6bf83 */
  if (C.zf) goto L_11c6bf83;
  /* 11c6bebf xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 11c6bec1 cmp dword ptr [esi + 8], ebx */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6bec4 jne 0x11c6bf81 */
  if (!C.zf) goto L_11c6bf81;
  /* 11c6beca mov edi, dword ptr [esi + 0x1c] */
  EDI = (r32((uint32_t)(ESI + 0x1c)));
  /* 11c6becd mov eax, dword ptr [esi + 0x18] */
  EAX = (r32((uint32_t)(ESI + 0x18)));
  /* 11c6bed0 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6bed2 jb 0x11c6bed8 */
  if (C.cf) goto L_11c6bed8;
  /* 11c6bed4 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6bed6 jmp 0x11c6beda */
  goto L_11c6beda;
L_11c6bed8:;
  /* 11c6bed8 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_11c6beda:;
  /* 11c6beda cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6bedc je 0x11c6bf0d */
  if (C.zf) goto L_11c6bf0d;
  /* 11c6bede push edi */
  push32((uint32_t)(EDI));
  /* 11c6bedf push eax */
  push32((uint32_t)(EAX));
  /* 11c6bee0 push ecx */
  push32((uint32_t)(ECX));
  /* 11c6bee1 call 0x11c689c0 */
  push32(0x11c6bee6u); f_11c689c0();
  /* 11c6bee6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6bee9 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6beeb je 0x11c6bf0d */
  if (C.zf) goto L_11c6bf0d;
  /* 11c6beed cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6beef jle 0x11c6bf6d */
  if ((C.zf||C.sf!=C.of)) goto L_11c6bf6d;
  /* 11c6bef1 cmp dword ptr [esi + 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6bef4 je 0x11c6bef9 */
  if (C.zf) goto L_11c6bef9;
  /* 11c6bef6 sub dword ptr [esi + 0x1c], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x1c))),_b=(EAX),_r=_a-_b; w32((uint32_t)(ESI + 0x1c), (_r)); fl_sub(_a,_b,_r,32); }
L_11c6bef9:;
  /* 11c6bef9 mov esi, dword ptr [esi + 0x18] */
  ESI = (r32((uint32_t)(ESI + 0x18)));
  /* 11c6befc sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6befe add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6bf00 push edi */
  push32((uint32_t)(EDI));
  /* 11c6bf01 push eax */
  push32((uint32_t)(EAX));
  /* 11c6bf02 push esi */
  push32((uint32_t)(ESI));
  /* 11c6bf03 call 0x11c664f0 */
  push32(0x11c6bf08u); f_11c664f0();
  /* 11c6bf08 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6bf0b jmp 0x11c6bf6d */
  goto L_11c6bf6d;
L_11c6bf0d:;
  /* 11c6bf0d mov ecx, esi */
  ECX = (ESI);
  /* 11c6bf0f mov dword ptr [esi + 0x18], ebx */
  w32((uint32_t)(ESI + 0x18), (EBX));
  /* 11c6bf12 mov dword ptr [esi + 0x1c], ebx */
  w32((uint32_t)(ESI + 0x1c), (EBX));
  /* 11c6bf15 mov dword ptr [esi + 0x20], ebx */
  w32((uint32_t)(ESI + 0x20), (EBX));
  /* 11c6bf18 call 0x11c6be58 */
  push32(0x11c6bf1du); f_11c6be58();
  /* 11c6bf1d cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6bf1f jle 0x11c6bf74 */
  if ((C.zf||C.sf!=C.of)) goto L_11c6bf74;
  /* 11c6bf21 mov edx, dword ptr [esi + 0x4c] */
  EDX = (r32((uint32_t)(ESI + 0x4c)));
  /* 11c6bf24 mov edi, edx */
  EDI = (EDX);
  /* 11c6bf26 mov ecx, edx */
  ECX = (EDX);
  /* 11c6bf28 sar edi, 5 */
  EDI = (sh_sar((uint32_t)(EDI), (0x5u)&0x1f, 32));
  /* 11c6bf2b and ecx, 0x1f */
  { uint32_t _r=(ECX)&(0x1fu); ECX = (_r); fl_logic(_r,32); }
  /* 11c6bf2e mov edi, dword ptr [edi*4 + 0x11c88e60] */
  EDI = (r32((uint32_t)(EDI*4 + 0x11c88e60)));
  /* 11c6bf35 lea ecx, [ecx + ecx*8] */
  ECX = ((uint32_t)(ECX + ECX*8));
  /* 11c6bf38 mov bl, byte ptr [edi + ecx*4 + 4] */
  BL = (r8((uint32_t)(EDI + ECX*4 + 0x4)));
  /* 11c6bf3c test bl, 0x80 */
  { uint32_t _r=(BL)&(0x80u); fl_logic(_r,8); }
  /* 11c6bf3f je 0x11c6bf5a */
  if (C.zf) goto L_11c6bf5a;
  /* 11c6bf41 mov ecx, dword ptr [esi + 0x28] */
  ECX = (r32((uint32_t)(ESI + 0x28)));
  /* 11c6bf44 mov edi, dword ptr [esi + 0x2c] */
  EDI = (r32((uint32_t)(ESI + 0x2c)));
L_11c6bf47:;
  /* 11c6bf47 cmp ecx, edi */
  { uint32_t _a=(ECX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6bf49 jae 0x11c6bf54 */
  if (!C.cf) goto L_11c6bf54;
  /* 11c6bf4b cmp byte ptr [ecx], 0xa */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6bf4e jne 0x11c6bf51 */
  if (!C.zf) goto L_11c6bf51;
  /* 11c6bf50 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11c6bf51:;
  /* 11c6bf51 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c6bf52 jmp 0x11c6bf47 */
  goto L_11c6bf47;
L_11c6bf54:;
  /* 11c6bf54 test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 11c6bf57 je 0x11c6bf5a */
  if (C.zf) goto L_11c6bf5a;
  /* 11c6bf59 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
L_11c6bf5a:;
  /* 11c6bf5a neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c6bf5c push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6bf5e push eax */
  push32((uint32_t)(EAX));
  /* 11c6bf5f push edx */
  push32((uint32_t)(EDX));
  /* 11c6bf60 call 0x11c688e8 */
  push32(0x11c6bf65u); f_11c688e8();
  /* 11c6bf65 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6bf68 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6bf6b jne 0x11c6bf72 */
  if (!C.zf) goto L_11c6bf72;
L_11c6bf6d:;
  /* 11c6bf6d or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c6bf70 jmp 0x11c6bf83 */
  goto L_11c6bf83;
L_11c6bf72:;
  /* 11c6bf72 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_11c6bf74:;
  /* 11c6bf74 or dword ptr [esi + 0xc], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0xffffffffu); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 11c6bf78 mov dword ptr [esi + 0x24], ebx */
  w32((uint32_t)(ESI + 0x24), (EBX));
  /* 11c6bf7b mov dword ptr [esi + 0x28], ebx */
  w32((uint32_t)(ESI + 0x28), (EBX));
  /* 11c6bf7e mov dword ptr [esi + 0x2c], ebx */
  w32((uint32_t)(ESI + 0x2c), (EBX));
L_11c6bf81:;
  /* 11c6bf81 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c6bf83:;
  /* 11c6bf83 pop edi */
  EDI = (pop32());
  /* 11c6bf84 pop esi */
  ESI = (pop32());
  /* 11c6bf85 pop ebx */
  EBX = (pop32());
  /* 11c6bf86 ret  */
  ESPCHK(0x11c6beacu, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf87 @ 0x11c6bf87 (100 bytes, 41 insns) */
void f_11c6bf87(void) {
  FTRACE(0x11c6bf87u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6bf87 push esi */
  push32((uint32_t)(ESI));
  /* 11c6bf88 mov esi, ecx */
  ESI = (ECX);
  /* 11c6bf8a cmp dword ptr [esi + 0x4c], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4c))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6bf8e je 0x11c6bf9a */
  if (C.zf) goto L_11c6bf9a;
  /* 11c6bf90 cmp dword ptr [esi + 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6bf94 je 0x11c6bf9a */
  if (C.zf) goto L_11c6bf9a;
  /* 11c6bf96 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c6bf98 jmp 0x11c6bfe7 */
  goto L_11c6bfe7;
L_11c6bf9a:;
  /* 11c6bf9a push ebx */
  push32((uint32_t)(EBX));
  /* 11c6bf9b push edi */
  push32((uint32_t)(EDI));
  /* 11c6bf9c mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 11c6bfa0 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11c6bfa2 je 0x11c6bfdc */
  if (C.zf) goto L_11c6bfdc;
  /* 11c6bfa4 mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 11c6bfa8 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c6bfaa jle 0x11c6bfdc */
  if ((C.zf||C.sf!=C.of)) goto L_11c6bfdc;
  /* 11c6bfac cmp dword ptr [esi + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6bfb0 jge 0x11c6bfbc */
  if ((C.sf==C.of)) goto L_11c6bfbc;
  /* 11c6bfb2 lea eax, [esi + 0x34] */
  EAX = ((uint32_t)(ESI + 0x34));
  /* 11c6bfb5 push eax */
  push32((uint32_t)(EAX));
  /* 11c6bfb6 call 0x11c6c001 */
  push32(0x11c6bfbbu); f_11c6c001();
  /* 11c6bfbb pop ecx */
  ECX = (pop32());
L_11c6bfbc:;
  /* 11c6bfbc lea eax, [edi + ebx] */
  EAX = ((uint32_t)(EDI + EBX*1));
  /* 11c6bfbf push 0 */
  push32((uint32_t)(0x0u));
  /* 11c6bfc1 push eax */
  push32((uint32_t)(EAX));
  /* 11c6bfc2 push edi */
  push32((uint32_t)(EDI));
  /* 11c6bfc3 mov ecx, esi */
  ECX = (ESI);
  /* 11c6bfc5 call 0x11c6c399 */
  push32(0x11c6bfcau); f_11c6c399();
  /* 11c6bfca cmp dword ptr [esi + 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6bfce jge 0x11c6bfe3 */
  if ((C.sf==C.of)) goto L_11c6bfe3;
  /* 11c6bfd0 lea eax, [esi + 0x34] */
  EAX = ((uint32_t)(ESI + 0x34));
  /* 11c6bfd3 push eax */
  push32((uint32_t)(EAX));
  /* 11c6bfd4 call 0x11c6c00c */
  push32(0x11c6bfd9u); f_11c6c00c();
  /* 11c6bfd9 pop ecx */
  ECX = (pop32());
  /* 11c6bfda jmp 0x11c6bfe3 */
  goto L_11c6bfe3;
L_11c6bfdc:;
  /* 11c6bfdc mov dword ptr [esi + 8], 1 */
  w32((uint32_t)(ESI + 0x8), (0x1u));
L_11c6bfe3:;
  /* 11c6bfe3 pop edi */
  EDI = (pop32());
  /* 11c6bfe4 mov eax, esi */
  EAX = (ESI);
  /* 11c6bfe6 pop ebx */
  EBX = (pop32());
L_11c6bfe7:;
  /* 11c6bfe7 pop esi */
  ESI = (pop32());
  /* 11c6bfe8 ret 8 */
  ESPCHK(0x11c6bf87u, _esp0);
  ESP += 12; return;
}

/* FUN_1000bfeb @ 0x11c6bfeb (11 bytes, 3 insns) */
void f_11c6bfeb(void) {
  FTRACE(0x11c6bfebu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6bfeb push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11c6bfef call dword ptr [0x11c6e06c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e06c))), 0x11c6bff5u);
  /* 11c6bff5 ret  */
  ESPCHK(0x11c6bfebu, _esp0);
  ESP += 4; return;
}

/* FUN_1000bff6 @ 0x11c6bff6 (11 bytes, 3 insns) */
void f_11c6bff6(void) {
  FTRACE(0x11c6bff6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6bff6 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11c6bffa call dword ptr [0x11c6e0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e0ac))), 0x11c6c000u);
  /* 11c6c000 ret  */
  ESPCHK(0x11c6bff6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c001 @ 0x11c6c001 (11 bytes, 3 insns) */
void f_11c6c001(void) {
  FTRACE(0x11c6c001u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6c001 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11c6c005 call dword ptr [0x11c6e068] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e068))), 0x11c6c00bu);
  /* 11c6c00b ret  */
  ESPCHK(0x11c6c001u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c00c @ 0x11c6c00c (11 bytes, 3 insns) */
void f_11c6c00c(void) {
  FTRACE(0x11c6c00cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6c00c push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11c6c010 call dword ptr [0x11c6e064] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e064))), 0x11c6c016u);
  /* 11c6c016 ret  */
  ESPCHK(0x11c6c00cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000c042 @ 0x11c6c042 (118 bytes, 38 insns) */
void f_11c6c042(void) {
  FTRACE(0x11c6c042u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6c042 mov eax, 0x11c6d486 */
  EAX = (0x11c6d486u);
  /* 11c6c047 call 0x11c6c788 */
  push32(0x11c6c04cu); f_11c6c788();
  /* 11c6c04c push ecx */
  push32((uint32_t)(ECX));
  /* 11c6c04d push ecx */
  push32((uint32_t)(ECX));
  /* 11c6c04e push esi */
  push32((uint32_t)(ESI));
  /* 11c6c04f push edi */
  push32((uint32_t)(EDI));
  /* 11c6c050 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 11c6c052 mov esi, ecx */
  ESI = (ECX);
  /* 11c6c054 cmp dword ptr [ebp + 0xc], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6c057 mov dword ptr [ebp - 0x14], esi */
  w32((uint32_t)(EBP + -0x14), (ESI));
  /* 11c6c05a mov dword ptr [ebp - 0x10], edi */
  w32((uint32_t)(EBP + -0x10), (EDI));
  /* 11c6c05d je 0x11c6c077 */
  if (C.zf) goto L_11c6c077;
  /* 11c6c05f lea ecx, [esi + 0xc] */
  ECX = ((uint32_t)(ESI + 0xc));
  /* 11c6c062 mov dword ptr [esi], 0x11c6e90c */
  w32((uint32_t)(ESI), (0x11c6e90cu));
  /* 11c6c068 call 0x11c6ba65 */
  push32(0x11c6c06du); f_11c6ba65();
  /* 11c6c06d mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11c6c074 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
L_11c6c077:;
  /* 11c6c077 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c6c079 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c6c07c mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11c6c07f mov dword ptr [eax + esi], 0x11c6e908 */
  w32((uint32_t)(EAX + ESI*1), (0x11c6e908u));
  /* 11c6c086 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c6c088 mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11c6c08b add ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6c08d call 0x11c6bb29 */
  push32(0x11c6c092u); f_11c6bb29();
  /* 11c6c092 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c6c094 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c6c097 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11c6c09a or dword ptr [eax + esi + 0x24], 1 */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*1 + 0x24)))|(0x1u); w32((uint32_t)(EAX + ESI*1 + 0x24), (_r)); fl_logic(_r,32); }
  /* 11c6c09f mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
  /* 11c6c0a2 mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 11c6c0a5 lea eax, [eax + esi + 0x24] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x24));
  /* 11c6c0a9 pop edi */
  EDI = (pop32());
  /* 11c6c0aa mov eax, esi */
  EAX = (ESI);
  /* 11c6c0ac pop esi */
  ESI = (pop32());
  /* 11c6c0ad mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11c6c0b4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c6c0b5 ret 8 */
  ESPCHK(0x11c6c042u, _esp0);
  ESP += 12; return;
}

/* FUN_1000c0b8 @ 0x11c6c0b8 (15 bytes, 4 insns) */
void f_11c6c0b8(void) {
  FTRACE(0x11c6c0b8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6c0b8 mov eax, dword ptr [ecx - 0xc] */
  EAX = (r32((uint32_t)(ECX + -0xc)));
  /* 11c6c0bb mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11c6c0be mov dword ptr [eax + ecx - 0xc], 0x11c6e908 */
  w32((uint32_t)(EAX + ECX*1 + -0xc), (0x11c6e908u));
  /* 11c6c0c6 ret  */
  ESPCHK(0x11c6c0b8u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0c7 @ 0x11c6c0c7 (37 bytes, 14 insns) */
void f_11c6c0c7(void) {
  FTRACE(0x11c6c0c7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6c0c7 mov eax, dword ptr [ecx + 0x28] */
  EAX = (r32((uint32_t)(ECX + 0x28)));
  /* 11c6c0ca cmp dword ptr [ecx + 0x24], eax */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x24))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6c0cd jae 0x11c6c0de */
  if (!C.cf) goto L_11c6c0de;
  /* 11c6c0cf dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c6c0d0 mov dword ptr [ecx + 0x28], eax */
  w32((uint32_t)(ECX + 0x28), (EAX));
  /* 11c6c0d3 mov cl, byte ptr [esp + 4] */
  CL = (r8((uint32_t)(ESP + 0x4)));
  /* 11c6c0d7 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11c6c0d9 movsx eax, cl */
  EAX = ((uint32_t)(int32_t)(int8_t)(CL));
  /* 11c6c0dc jmp 0x11c6c0e9 */
  goto L_11c6c0e9;
L_11c6c0de:;
  /* 11c6c0de movsx edx, byte ptr [esp + 4] */
  EDX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(ESP + 0x4))));
  /* 11c6c0e3 mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11c6c0e5 push edx */
  push32((uint32_t)(EDX));
  /* 11c6c0e6 call dword ptr [eax + 0x24] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x24))), 0x11c6c0e9u);
L_11c6c0e9:;
  /* 11c6c0e9 ret 4 */
  ESPCHK(0x11c6c0c7u, _esp0);
  ESP += 8; return;
}

/* FUN_1000c117 @ 0x11c6c117 (101 bytes, 30 insns) */
void f_11c6c117(void) {
  FTRACE(0x11c6c117u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6c117 mov eax, 0x11c6d4aa */
  EAX = (0x11c6d4aau);
  /* 11c6c11c call 0x11c6c788 */
  push32(0x11c6c121u); f_11c6c788();
  /* 11c6c121 push ecx */
  push32((uint32_t)(ECX));
  /* 11c6c122 push ecx */
  push32((uint32_t)(ECX));
  /* 11c6c123 and dword ptr [ebp - 0x10], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))&(0x0u); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 11c6c127 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6c12b push esi */
  push32((uint32_t)(ESI));
  /* 11c6c12c mov esi, ecx */
  ESI = (ECX);
  /* 11c6c12e mov dword ptr [ebp - 0x14], esi */
  w32((uint32_t)(EBP + -0x14), (ESI));
  /* 11c6c131 je 0x11c6c14c */
  if (C.zf) goto L_11c6c14c;
  /* 11c6c133 lea ecx, [esi + 8] */
  ECX = ((uint32_t)(ESI + 0x8));
  /* 11c6c136 mov dword ptr [esi], 0x11c6e91c */
  w32((uint32_t)(ESI), (0x11c6e91cu));
  /* 11c6c13c call 0x11c6ba65 */
  push32(0x11c6c141u); f_11c6ba65();
  /* 11c6c141 mov dword ptr [ebp - 0x10], 1 */
  w32((uint32_t)(EBP + -0x10), (0x1u));
  /* 11c6c148 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_11c6c14c:;
  /* 11c6c14c mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c6c14e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c6c151 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11c6c154 mov dword ptr [eax + esi], 0x11c6e918 */
  w32((uint32_t)(EAX + ESI*1), (0x11c6e918u));
  /* 11c6c15b mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c6c15d mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 11c6c160 add ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6c162 call 0x11c6bb29 */
  push32(0x11c6c167u); f_11c6bb29();
  /* 11c6c167 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c6c16a and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 11c6c16e mov eax, esi */
  EAX = (ESI);
  /* 11c6c170 pop esi */
  ESI = (pop32());
  /* 11c6c171 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11c6c178 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c6c179 ret 8 */
  ESPCHK(0x11c6c117u, _esp0);
  ESP += 12; return;
}

/* FUN_1000c17c @ 0x11c6c17c (15 bytes, 4 insns) */
void f_11c6c17c(void) {
  FTRACE(0x11c6c17cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6c17c mov eax, dword ptr [ecx - 8] */
  EAX = (r32((uint32_t)(ECX + -0x8)));
  /* 11c6c17f mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11c6c182 mov dword ptr [eax + ecx - 8], 0x11c6e918 */
  w32((uint32_t)(EAX + ECX*1 + -0x8), (0x11c6e918u));
  /* 11c6c18a ret  */
  ESPCHK(0x11c6c17cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000c18b @ 0x11c6c18b (63 bytes, 23 insns) */
void f_11c6c18b(void) {
  FTRACE(0x11c6c18bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6c18b push esi */
  push32((uint32_t)(ESI));
  /* 11c6c18c mov esi, ecx */
  ESI = (ECX);
  /* 11c6c18e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c6c190 or dword ptr [esi + 0xc], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0xffffffffu); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 11c6c194 or dword ptr [esi + 0x30], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x30)))|(0xffffffffu); w32((uint32_t)(ESI + 0x30), (_r)); fl_logic(_r,32); }
  /* 11c6c198 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 11c6c19b mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 11c6c19e mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 11c6c1a1 mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 11c6c1a4 mov dword ptr [esi + 0x18], eax */
  w32((uint32_t)(ESI + 0x18), (EAX));
  /* 11c6c1a7 mov dword ptr [esi + 0x1c], eax */
  w32((uint32_t)(ESI + 0x1c), (EAX));
  /* 11c6c1aa mov dword ptr [esi + 0x20], eax */
  w32((uint32_t)(ESI + 0x20), (EAX));
  /* 11c6c1ad mov dword ptr [esi + 0x24], eax */
  w32((uint32_t)(ESI + 0x24), (EAX));
  /* 11c6c1b0 mov dword ptr [esi + 0x28], eax */
  w32((uint32_t)(ESI + 0x28), (EAX));
  /* 11c6c1b3 mov dword ptr [esi + 0x2c], eax */
  w32((uint32_t)(ESI + 0x2c), (EAX));
  /* 11c6c1b6 lea eax, [esi + 0x34] */
  EAX = ((uint32_t)(ESI + 0x34));
  /* 11c6c1b9 mov dword ptr [esi], 0x11c6e928 */
  w32((uint32_t)(ESI), (0x11c6e928u));
  /* 11c6c1bf push eax */
  push32((uint32_t)(EAX));
  /* 11c6c1c0 call 0x11c6bfeb */
  push32(0x11c6c1c5u); f_11c6bfeb();
  /* 11c6c1c5 pop ecx */
  ECX = (pop32());
  /* 11c6c1c6 mov eax, esi */
  EAX = (ESI);
  /* 11c6c1c8 pop esi */
  ESI = (pop32());
  /* 11c6c1c9 ret  */
  ESPCHK(0x11c6c18bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1ca @ 0x11c6c1ca (28 bytes, 11 insns) */
void f_11c6c1ca(void) {
  FTRACE(0x11c6c1cau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6c1ca push esi */
  push32((uint32_t)(ESI));
  /* 11c6c1cb mov esi, ecx */
  ESI = (ECX);
  /* 11c6c1cd call 0x11c6c1e6 */
  push32(0x11c6c1d2u); f_11c6c1e6();
  /* 11c6c1d2 test byte ptr [esp + 8], 1 */
  { uint32_t _r=(r8((uint32_t)(ESP + 0x8)))&(0x1u); fl_logic(_r,8); }
  /* 11c6c1d7 je 0x11c6c1e0 */
  if (C.zf) goto L_11c6c1e0;
  /* 11c6c1d9 push esi */
  push32((uint32_t)(ESI));
  /* 11c6c1da call 0x11c6c43d */
  push32(0x11c6c1dfu); f_11c6c43d();
  /* 11c6c1df pop ecx */
  ECX = (pop32());
L_11c6c1e0:;
  /* 11c6c1e0 mov eax, esi */
  EAX = (ESI);
  /* 11c6c1e2 pop esi */
  ESI = (pop32());
  /* 11c6c1e3 ret 4 */
  ESPCHK(0x11c6c1cau, _esp0);
  ESP += 8; return;
}

/* FUN_1000c1e6 @ 0x11c6c1e6 (48 bytes, 19 insns) */
void f_11c6c1e6(void) {
  FTRACE(0x11c6c1e6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6c1e6 push esi */
  push32((uint32_t)(ESI));
  /* 11c6c1e7 mov esi, ecx */
  ESI = (ECX);
  /* 11c6c1e9 lea eax, [esi + 0x34] */
  EAX = ((uint32_t)(ESI + 0x34));
  /* 11c6c1ec mov dword ptr [esi], 0x11c6e928 */
  w32((uint32_t)(ESI), (0x11c6e928u));
  /* 11c6c1f2 push eax */
  push32((uint32_t)(EAX));
  /* 11c6c1f3 call 0x11c6bff6 */
  push32(0x11c6c1f8u); f_11c6bff6();
  /* 11c6c1f8 pop ecx */
  ECX = (pop32());
  /* 11c6c1f9 mov ecx, esi */
  ECX = (ESI);
  /* 11c6c1fb call 0x11c6c337 */
  push32(0x11c6c200u); f_11c6c337();
  /* 11c6c200 cmp dword ptr [esi + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6c204 je 0x11c6c214 */
  if (C.zf) goto L_11c6c214;
  /* 11c6c206 mov esi, dword ptr [esi + 0x10] */
  ESI = (r32((uint32_t)(ESI + 0x10)));
  /* 11c6c209 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c6c20b je 0x11c6c214 */
  if (C.zf) goto L_11c6c214;
  /* 11c6c20d push esi */
  push32((uint32_t)(ESI));
  /* 11c6c20e call 0x11c6c43d */
  push32(0x11c6c213u); f_11c6c43d();
  /* 11c6c213 pop ecx */
  ECX = (pop32());
L_11c6c214:;
  /* 11c6c214 pop esi */
  ESI = (pop32());
  /* 11c6c215 ret  */
  ESPCHK(0x11c6c1e6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c24a @ 0x11c6c24a (86 bytes, 42 insns) */
void f_11c6c24a(void) {
  FTRACE(0x11c6c24au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6c24a push ebp */
  push32((uint32_t)(EBP));
  /* 11c6c24b mov ebp, esp */
  EBP = (ESP);
  /* 11c6c24d push ecx */
  push32((uint32_t)(ECX));
  /* 11c6c24e and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c6c252 push ebx */
  push32((uint32_t)(EBX));
  /* 11c6c253 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c6c256 push esi */
  push32((uint32_t)(ESI));
  /* 11c6c257 mov eax, ebx */
  EAX = (EBX);
  /* 11c6c259 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11c6c25a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6c25c push edi */
  push32((uint32_t)(EDI));
  /* 11c6c25d mov esi, ecx */
  ESI = (ECX);
  /* 11c6c25f je 0x11c6c296 */
  if (C.zf) goto L_11c6c296;
  /* 11c6c261 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
L_11c6c264:;
  /* 11c6c264 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6c268 jne 0x11c6c27b */
  if (!C.zf) goto L_11c6c27b;
  /* 11c6c26a mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 11c6c26d cmp eax, dword ptr [esi + 0x20] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6c270 jae 0x11c6c27b */
  if (!C.cf) goto L_11c6c27b;
  /* 11c6c272 mov cl, byte ptr [edi] */
  CL = (r8((uint32_t)(EDI)));
  /* 11c6c274 mov byte ptr [eax], cl */
  w8((uint32_t)(EAX), (CL));
  /* 11c6c276 inc dword ptr [esi + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x1c)))+1; w32((uint32_t)(ESI + 0x1c), (_r)); fl_inc(_r,32); }
  /* 11c6c279 jmp 0x11c6c28b */
  goto L_11c6c28b;
L_11c6c27b:;
  /* 11c6c27b movzx ecx, byte ptr [edi] */
  ECX = ((uint32_t)(r8((uint32_t)(EDI))));
  /* 11c6c27e mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c6c280 push ecx */
  push32((uint32_t)(ECX));
  /* 11c6c281 mov ecx, esi */
  ECX = (ESI);
  /* 11c6c283 call dword ptr [eax + 0x1c] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x1c))), 0x11c6c286u);
  /* 11c6c286 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6c289 je 0x11c6c296 */
  if (C.zf) goto L_11c6c296;
L_11c6c28b:;
  /* 11c6c28b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c6c28c inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11c6c28f mov eax, ebx */
  EAX = (EBX);
  /* 11c6c291 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11c6c292 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6c294 jne 0x11c6c264 */
  if (!C.zf) goto L_11c6c264;
L_11c6c296:;
  /* 11c6c296 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c6c299 pop edi */
  EDI = (pop32());
  /* 11c6c29a pop esi */
  ESI = (pop32());
  /* 11c6c29b pop ebx */
  EBX = (pop32());
  /* 11c6c29c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c6c29d ret 8 */
  ESPCHK(0x11c6c24au, _esp0);
  ESP += 12; return;
}

/* FUN_1000c2a0 @ 0x11c6c2a0 (151 bytes, 67 insns) */
void f_11c6c2a0(void) {
  FTRACE(0x11c6c2a0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6c2a0 push ebp */
  push32((uint32_t)(EBP));
  /* 11c6c2a1 mov ebp, esp */
  EBP = (ESP);
  /* 11c6c2a3 push ecx */
  push32((uint32_t)(ECX));
  /* 11c6c2a4 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c6c2a8 push ebx */
  push32((uint32_t)(EBX));
  /* 11c6c2a9 push esi */
  push32((uint32_t)(ESI));
  /* 11c6c2aa mov esi, ecx */
  ESI = (ECX);
  /* 11c6c2ac push edi */
  push32((uint32_t)(EDI));
  /* 11c6c2ad cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6c2b1 je 0x11c6c2f8 */
  if (C.zf) goto L_11c6c2f8;
  /* 11c6c2b3 cmp dword ptr [esi + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6c2b7 jne 0x11c6c2c1 */
  if (!C.zf) goto L_11c6c2c1;
  /* 11c6c2b9 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c6c2bb call dword ptr [eax + 0x20] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x20))), 0x11c6c2beu);
  /* 11c6c2be mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
L_11c6c2c1:;
  /* 11c6c2c1 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c6c2c4 mov eax, ebx */
  EAX = (EBX);
  /* 11c6c2c6 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11c6c2c7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6c2c9 je 0x11c6c2ee */
  if (C.zf) goto L_11c6c2ee;
  /* 11c6c2cb mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
L_11c6c2ce:;
  /* 11c6c2ce cmp dword ptr [esi + 0xc], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0xc))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6c2d2 je 0x11c6c2ee */
  if (C.zf) goto L_11c6c2ee;
  /* 11c6c2d4 mov al, byte ptr [esi + 0xc] */
  AL = (r8((uint32_t)(ESI + 0xc)));
  /* 11c6c2d7 mov ecx, esi */
  ECX = (ESI);
  /* 11c6c2d9 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 11c6c2db mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c6c2dd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 11c6c2de inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11c6c2e1 call dword ptr [eax + 0x20] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x20))), 0x11c6c2e4u);
  /* 11c6c2e4 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 11c6c2e7 mov eax, ebx */
  EAX = (EBX);
  /* 11c6c2e9 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 11c6c2ea test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6c2ec jne 0x11c6c2ce */
  if (!C.zf) goto L_11c6c2ce;
L_11c6c2ee:;
  /* 11c6c2ee mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c6c2f1 pop edi */
  EDI = (pop32());
  /* 11c6c2f2 pop esi */
  ESI = (pop32());
  /* 11c6c2f3 pop ebx */
  EBX = (pop32());
  /* 11c6c2f4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c6c2f5 ret 8 */
  ESPCHK(0x11c6c2a0u, _esp0);
  ESP += 12; return;
L_11c6c2f8:;
  /* 11c6c2f8 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
L_11c6c2fb:;
  /* 11c6c2fb test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 11c6c2fd je 0x11c6c2ee */
  if (C.zf) goto L_11c6c2ee;
  /* 11c6c2ff mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c6c301 mov ecx, esi */
  ECX = (ESI);
  /* 11c6c303 call dword ptr [eax + 0x20] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x20))), 0x11c6c306u);
  /* 11c6c306 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6c309 je 0x11c6c2ee */
  if (C.zf) goto L_11c6c2ee;
  /* 11c6c30b mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 11c6c30e mov edi, dword ptr [esi + 0x2c] */
  EDI = (r32((uint32_t)(ESI + 0x2c)));
  /* 11c6c311 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6c313 cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6c315 jl 0x11c6c319 */
  if ((C.sf!=C.of)) goto L_11c6c319;
  /* 11c6c317 mov edi, ebx */
  EDI = (EBX);
L_11c6c319:;
  /* 11c6c319 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 11c6c31b jle 0x11c6c2fb */
  if ((C.zf||C.sf!=C.of)) goto L_11c6c2fb;
  /* 11c6c31d push edi */
  push32((uint32_t)(EDI));
  /* 11c6c31e push eax */
  push32((uint32_t)(EAX));
  /* 11c6c31f push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c6c322 call 0x11c683e0 */
  push32(0x11c6c327u); f_11c683e0();
  /* 11c6c327 add dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c6c32a add dword ptr [esi + 0x28], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x28))),_b=(EDI),_r=_a+_b; w32((uint32_t)(ESI + 0x28), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c6c32d add dword ptr [ebp - 4], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EDI),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c6c330 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6c333 sub ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6c335 jmp 0x11c6c2fb */
  goto L_11c6c2fb;
}

/* FUN_1000c337 @ 0x11c6c337 (23 bytes, 10 insns) */
void f_11c6c337(void) {
  FTRACE(0x11c6c337u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6c337 mov eax, dword ptr [ecx + 0x28] */
  EAX = (r32((uint32_t)(ECX + 0x28)));
  /* 11c6c33a cmp eax, dword ptr [ecx + 0x2c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x2c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6c33d jb 0x11c6c34a */
  if (C.cf) goto L_11c6c34a;
  /* 11c6c33f mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 11c6c342 cmp eax, dword ptr [ecx + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6c345 ja 0x11c6c34a */
  if ((!C.cf&&!C.zf)) goto L_11c6c34a;
  /* 11c6c347 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c6c349 ret  */
  ESPCHK(0x11c6c337u, _esp0);
  ESP += 4; return;
L_11c6c34a:;
  /* 11c6c34a or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c6c34d ret  */
  ESPCHK(0x11c6c337u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c34e @ 0x11c6c34e (30 bytes, 14 insns) */
void f_11c6c34e(void) {
  FTRACE(0x11c6c34eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6c34e cmp dword ptr [ecx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6c352 jne 0x11c6c369 */
  if (!C.zf) goto L_11c6c369;
  /* 11c6c354 cmp dword ptr [ecx + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6c358 jne 0x11c6c369 */
  if (!C.zf) goto L_11c6c369;
  /* 11c6c35a mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11c6c35c call dword ptr [eax + 0x28] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x28))), 0x11c6c35fu);
  /* 11c6c35f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c6c360 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 11c6c362 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6c364 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 11c6c367 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c6c368 ret  */
  ESPCHK(0x11c6c34eu, _esp0);
  ESP += 4; return;
L_11c6c369:;
  /* 11c6c369 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c6c36b ret  */
  ESPCHK(0x11c6c34eu, _esp0);
  ESP += 4; return;
}

/* FUN_1000c36c @ 0x11c6c36c (45 bytes, 20 insns) */
void f_11c6c36c(void) {
  FTRACE(0x11c6c36cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6c36c push esi */
  push32((uint32_t)(ESI));
  /* 11c6c36d mov esi, ecx */
  ESI = (ECX);
  /* 11c6c36f push 0x200 */
  push32((uint32_t)(0x200u));
  /* 11c6c374 call 0x11c6c493 */
  push32(0x11c6c379u); f_11c6c493();
  /* 11c6c379 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6c37b pop ecx */
  ECX = (pop32());
  /* 11c6c37c jne 0x11c6c383 */
  if (!C.zf) goto L_11c6c383;
  /* 11c6c37e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c6c381 pop esi */
  ESI = (pop32());
  /* 11c6c382 ret  */
  ESPCHK(0x11c6c36cu, _esp0);
  ESP += 4; return;
L_11c6c383:;
  /* 11c6c383 lea ecx, [eax + 0x200] */
  ECX = ((uint32_t)(EAX + 0x200));
  /* 11c6c389 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6c38b push ecx */
  push32((uint32_t)(ECX));
  /* 11c6c38c push eax */
  push32((uint32_t)(EAX));
  /* 11c6c38d mov ecx, esi */
  ECX = (ESI);
  /* 11c6c38f call 0x11c6c399 */
  push32(0x11c6c394u); f_11c6c399();
  /* 11c6c394 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6c396 pop eax */
  EAX = (pop32());
  /* 11c6c397 pop esi */
  ESI = (pop32());
  /* 11c6c398 ret  */
  ESPCHK(0x11c6c36cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000c399 @ 0x11c6c399 (48 bytes, 18 insns) */
void f_11c6c399(void) {
  FTRACE(0x11c6c399u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6c399 push esi */
  push32((uint32_t)(ESI));
  /* 11c6c39a mov esi, ecx */
  ESI = (ECX);
  /* 11c6c39c cmp dword ptr [esi + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6c3a0 je 0x11c6c3b0 */
  if (C.zf) goto L_11c6c3b0;
  /* 11c6c3a2 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 11c6c3a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6c3a7 je 0x11c6c3b0 */
  if (C.zf) goto L_11c6c3b0;
  /* 11c6c3a9 push eax */
  push32((uint32_t)(EAX));
  /* 11c6c3aa call 0x11c6c43d */
  push32(0x11c6c3afu); f_11c6c43d();
  /* 11c6c3af pop ecx */
  ECX = (pop32());
L_11c6c3b0:;
  /* 11c6c3b0 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c6c3b4 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 11c6c3b7 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 11c6c3bb mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 11c6c3be mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11c6c3c2 mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 11c6c3c5 pop esi */
  ESI = (pop32());
  /* 11c6c3c6 ret 0xc */
  ESPCHK(0x11c6c399u, _esp0);
  ESP += 16; return;
}

/* FUN_1000c3e1 @ 0x11c6c3e1 (92 bytes, 40 insns) */
void f_11c6c3e1(void) {
  FTRACE(0x11c6c3e1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6c3e1 push esi */
  push32((uint32_t)(ESI));
  /* 11c6c3e2 mov esi, ecx */
  ESI = (ECX);
  /* 11c6c3e4 mov eax, dword ptr [esi + 0x24] */
  EAX = (r32((uint32_t)(ESI + 0x24)));
  /* 11c6c3e7 cmp eax, dword ptr [esi + 0x28] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x28))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6c3ea jae 0x11c6c3f7 */
  if (!C.cf) goto L_11c6c3f7;
  /* 11c6c3ec push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11c6c3f0 call 0x11c6c0c7 */
  push32(0x11c6c3f5u); f_11c6c0c7();
  /* 11c6c3f5 jmp 0x11c6c439 */
  goto L_11c6c439;
L_11c6c3f7:;
  /* 11c6c3f7 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c6c3f9 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6c3fb push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6c3fd push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c6c3ff mov ecx, esi */
  ECX = (ESI);
  /* 11c6c401 call dword ptr [eax + 0xc] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0xc))), 0x11c6c404u);
  /* 11c6c404 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6c407 jne 0x11c6c40d */
  if (!C.zf) goto L_11c6c40d;
  /* 11c6c409 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c6c40b jmp 0x11c6c439 */
  goto L_11c6c439;
L_11c6c40d:;
  /* 11c6c40d cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6c411 push ebx */
  push32((uint32_t)(EBX));
  /* 11c6c412 mov ebx, dword ptr [esp + 0xc] */
  EBX = (r32((uint32_t)(ESP + 0xc)));
  /* 11c6c416 jne 0x11c6c436 */
  if (!C.zf) goto L_11c6c436;
  /* 11c6c418 mov eax, dword ptr [esi + 0x2c] */
  EAX = (r32((uint32_t)(ESI + 0x2c)));
  /* 11c6c41b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6c41d je 0x11c6c436 */
  if (C.zf) goto L_11c6c436;
  /* 11c6c41f mov ecx, dword ptr [esi + 0x28] */
  ECX = (r32((uint32_t)(ESI + 0x28)));
  /* 11c6c422 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6c424 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 11c6c425 push eax */
  push32((uint32_t)(EAX));
  /* 11c6c426 push ecx */
  push32((uint32_t)(ECX));
  /* 11c6c427 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 11c6c428 push ecx */
  push32((uint32_t)(ECX));
  /* 11c6c429 call 0x11c664f0 */
  push32(0x11c6c42eu); f_11c664f0();
  /* 11c6c42e mov eax, dword ptr [esi + 0x28] */
  EAX = (r32((uint32_t)(ESI + 0x28)));
  /* 11c6c431 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6c434 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
L_11c6c436:;
  /* 11c6c436 mov eax, ebx */
  EAX = (EBX);
  /* 11c6c438 pop ebx */
  EBX = (pop32());
L_11c6c439:;
  /* 11c6c439 pop esi */
  ESI = (pop32());
  /* 11c6c43a ret 4 */
  ESPCHK(0x11c6c3e1u, _esp0);
  ESP += 8; return;
}

/* FUN_1000c43d @ 0x11c6c43d (11 bytes, 4 insns) */
void f_11c6c43d(void) {
  FTRACE(0x11c6c43du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6c43d push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 11c6c441 call 0x11c66afc */
  push32(0x11c6c446u); f_11c66afc();
  /* 11c6c446 pop ecx */
  ECX = (pop32());
  /* 11c6c447 ret  */
  ESPCHK(0x11c6c43du, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x11c6c448 (6 bytes, 1 insns) */
void f_11c6c448(void) {
  FTRACE(0x11c6c448u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6c448 jmp dword ptr [0x11c6e058] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x11c6e058)))); return;
}

/* FUN_1000c44e @ 0x11c6c44e (41 bytes, 17 insns) */
void f_11c6c44e(void) {
  FTRACE(0x11c6c44eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6c44e push esi */
  push32((uint32_t)(ESI));
  /* 11c6c44f mov esi, ecx */
  ESI = (ECX);
  /* 11c6c451 push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11c6c453 mov dword ptr [esi], 0x11c6e958 */
  w32((uint32_t)(ESI), (0x11c6e958u));
  /* 11c6c459 call 0x11c66a86 */
  push32(0x11c6c45eu); f_11c66a86();
  /* 11c6c45e mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 11c6c461 pop ecx */
  ECX = (pop32());
  /* 11c6c462 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 11c6c464 je 0x11c6c46d */
  if (C.zf) goto L_11c6c46d;
  /* 11c6c466 push esi */
  push32((uint32_t)(ESI));
  /* 11c6c467 call 0x11c66afc */
  push32(0x11c6c46cu); f_11c66afc();
  /* 11c6c46c pop ecx */
  ECX = (pop32());
L_11c6c46d:;
  /* 11c6c46d push 0x1b */
  push32((uint32_t)(0x1bu));
  /* 11c6c46f call 0x11c66ae7 */
  push32(0x11c6c474u); f_11c66ae7();
  /* 11c6c474 pop ecx */
  ECX = (pop32());
  /* 11c6c475 pop esi */
  ESI = (pop32());
  /* 11c6c476 ret  */
  ESPCHK(0x11c6c44eu, _esp0);
  ESP += 4; return;
}

/* FUN_1000c477 @ 0x11c6c477 (28 bytes, 11 insns) */
void f_11c6c477(void) {
  FTRACE(0x11c6c477u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6c477 push esi */
  push32((uint32_t)(ESI));
  /* 11c6c478 mov esi, ecx */
  ESI = (ECX);
  /* 11c6c47a call 0x11c6c44e */
  push32(0x11c6c47fu); f_11c6c44e();
  /* 11c6c47f test byte ptr [esp + 8], 1 */
  { uint32_t _r=(r8((uint32_t)(ESP + 0x8)))&(0x1u); fl_logic(_r,8); }
  /* 11c6c484 je 0x11c6c48d */
  if (C.zf) goto L_11c6c48d;
  /* 11c6c486 push esi */
  push32((uint32_t)(ESI));
  /* 11c6c487 call 0x11c6c43d */
  push32(0x11c6c48cu); f_11c6c43d();
  /* 11c6c48c pop ecx */
  ECX = (pop32());
L_11c6c48d:;
  /* 11c6c48d mov eax, esi */
  EAX = (ESI);
  /* 11c6c48f pop esi */
  ESI = (pop32());
  /* 11c6c490 ret 4 */
  ESPCHK(0x11c6c477u, _esp0);
  ESP += 8; return;
}

/* operator_new @ 0x11c6c493 (14 bytes, 6 insns) */
void f_11c6c493(void) {
  FTRACE(0x11c6c493u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6c493 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6c495 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11c6c499 call 0x11c64f99 */
  push32(0x11c6c49eu); f_11c64f99();
  /* 11c6c49e pop ecx */
  ECX = (pop32());
  /* 11c6c49f pop ecx */
  ECX = (pop32());
  /* 11c6c4a0 ret  */
  ESPCHK(0x11c6c493u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c4a1 @ 0x11c6c4a1 (45 bytes, 17 insns) */
void f_11c6c4a1(void) {
  FTRACE(0x11c6c4a1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6c4a1 push ebp */
  push32((uint32_t)(EBP));
  /* 11c6c4a2 mov ebp, esp */
  EBP = (ESP);
  /* 11c6c4a4 push ecx */
  push32((uint32_t)(ECX));
  /* 11c6c4a5 push ebx */
  push32((uint32_t)(EBX));
  /* 11c6c4a6 push esi */
  push32((uint32_t)(ESI));
  /* 11c6c4a7 push edi */
  push32((uint32_t)(EDI));
  /* 11c6c4a8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c6c4ab add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6c4ae mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11c6c4b1 mov ebx, dword ptr fs:[0] */
  EBX = (r32((uint32_t)(0x0)));
  /* 11c6c4b8 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11c6c4ba mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 11c6c4c0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c6c4c3 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c6c4c6 mov esp, dword ptr [ebx - 4] */
  ESP = (r32((uint32_t)(EBX + -0x4)));
  /* 11c6c4c9 mov ebp, dword ptr [ebp - 4] */
  EBP = (r32((uint32_t)(EBP + -0x4)));
  /* 11c6c4cc jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_1000c4d5 @ 0x11c6c4d5 (7 bytes, 4 insns) */
void f_11c6c4d5(void) {
  FTRACE(0x11c6c4d5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6c4d5 pop eax */
  EAX = (pop32());
  /* 11c6c4d6 pop ecx */
  ECX = (pop32());
  /* 11c6c4d7 xchg dword ptr [esp], eax */
  { uint32_t _t=(r32((uint32_t)(ESP))); w32((uint32_t)(ESP), (EAX)); EAX = (_t); }
  /* 11c6c4da jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_1000c4dc @ 0x11c6c4dc (7 bytes, 4 insns) */
void f_11c6c4dc(void) {
  FTRACE(0x11c6c4dcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6c4dc pop eax */
  EAX = (pop32());
  /* 11c6c4dd pop ecx */
  ECX = (pop32());
  /* 11c6c4de xchg dword ptr [esp], eax */
  { uint32_t _t=(r32((uint32_t)(ESP))); w32((uint32_t)(ESP), (EAX)); EAX = (_t); }
  /* 11c6c4e1 jmp eax */
  jmp_ind((uint32_t)(EAX)); return;
}

/* FUN_1000c4e3 @ 0x11c6c4e3 (79 bytes, 29 insns) */
void f_11c6c4e3(void) {
  FTRACE(0x11c6c4e3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6c4e3 push ebp */
  push32((uint32_t)(EBP));
  /* 11c6c4e4 mov ebp, esp */
  EBP = (ESP);
  /* 11c6c4e6 push ecx */
  push32((uint32_t)(ECX));
  /* 11c6c4e7 push ecx */
  push32((uint32_t)(ECX));
  /* 11c6c4e8 push ebx */
  push32((uint32_t)(EBX));
  /* 11c6c4e9 push esi */
  push32((uint32_t)(ESI));
  /* 11c6c4ea push edi */
  push32((uint32_t)(EDI));
  /* 11c6c4eb mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11c6c4f1 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11c6c4f4 mov dword ptr [ebp - 4], 0x11c6c50b */
  w32((uint32_t)(EBP + -0x4), (0x11c6c50bu));
  /* 11c6c4fb push 0 */
  push32((uint32_t)(0x0u));
  /* 11c6c4fd push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c6c500 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11c6c503 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c6c506 call 0x11c6c448 */
  push32(0x11c6c50bu); f_11c6c448();
  /* 11c6c50b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c6c50e mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11c6c511 and al, 0xfd */
  { uint32_t _r=(AL)&(0xfdu); AL = (_r); fl_logic(_r,8); }
  /* 11c6c513 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c6c516 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 11c6c519 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11c6c51f mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 11c6c522 mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 11c6c524 mov dword ptr fs:[0], ebx */
  w32((uint32_t)(0x0), (EBX));
  /* 11c6c52b pop edi */
  EDI = (pop32());
  /* 11c6c52c pop esi */
  ESI = (pop32());
  /* 11c6c52d pop ebx */
  EBX = (pop32());
  /* 11c6c52e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c6c52f ret 8 */
  ESPCHK(0x11c6c4e3u, _esp0);
  ESP += 12; return;
}

/* FUN_1000c532 @ 0x11c6c532 (54 bytes, 27 insns) */
void f_11c6c532(void) {
  FTRACE(0x11c6c532u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6c532 push ebp */
  push32((uint32_t)(EBP));
  /* 11c6c533 mov ebp, esp */
  EBP = (ESP);
  /* 11c6c535 sub esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6c538 push ebx */
  push32((uint32_t)(EBX));
  /* 11c6c539 push esi */
  push32((uint32_t)(ESI));
  /* 11c6c53a push edi */
  push32((uint32_t)(EDI));
  /* 11c6c53b cld  */
  C.df=0;
  /* 11c6c53c mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11c6c53f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c6c541 push eax */
  push32((uint32_t)(EAX));
  /* 11c6c542 push eax */
  push32((uint32_t)(EAX));
  /* 11c6c543 push eax */
  push32((uint32_t)(EAX));
  /* 11c6c544 push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 11c6c547 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c6c54a push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c6c54d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c6c550 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c6c553 call 0x11c6c9ee */
  push32(0x11c6c558u); f_11c6c9ee();
  /* 11c6c558 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6c55b mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
  /* 11c6c55e pop edi */
  EDI = (pop32());
  /* 11c6c55f pop esi */
  ESI = (pop32());
  /* 11c6c560 pop ebx */
  EBX = (pop32());
  /* 11c6c561 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11c6c564 mov esp, ebp */
  ESP = (EBP);
  /* 11c6c566 pop ebp */
  EBP = (pop32());
  /* 11c6c567 ret  */
  ESPCHK(0x11c6c532u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c568 @ 0x11c6c568 (84 bytes, 26 insns) */
void f_11c6c568(void) {
  FTRACE(0x11c6c568u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6c568 push ebp */
  push32((uint32_t)(EBP));
  /* 11c6c569 mov ebp, esp */
  EBP = (ESP);
  /* 11c6c56b sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6c56e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c6c571 and dword ptr [ebp - 0x14], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x14)))&(0x0u); w32((uint32_t)(EBP + -0x14), (_r)); fl_logic(_r,32); }
  /* 11c6c575 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c6c578 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11c6c57b mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 11c6c57e mov dword ptr [ebp - 0x10], 0x11c6c5bc */
  w32((uint32_t)(EBP + -0x10), (0x11c6c5bcu));
  /* 11c6c585 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c6c586 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11c6c589 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11c6c58c mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11c6c592 mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11c6c595 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 11c6c59b mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 11c6c5a1 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11c6c5a4 push ecx */
  push32((uint32_t)(ECX));
  /* 11c6c5a5 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c6c5a8 call 0x11c6d210 */
  push32(0x11c6c5adu); f_11c6d210();
  /* 11c6c5ad mov ecx, eax */
  ECX = (EAX);
  /* 11c6c5af mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 11c6c5b2 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 11c6c5b8 mov eax, ecx */
  EAX = (ECX);
  /* 11c6c5ba leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c6c5bb ret  */
  ESPCHK(0x11c6c568u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c5bc @ 0x11c6c5bc (37 bytes, 16 insns) */
void f_11c6c5bc(void) {
  FTRACE(0x11c6c5bcu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6c5bc push ebp */
  push32((uint32_t)(EBP));
  /* 11c6c5bd mov ebp, esp */
  EBP = (ESP);
  /* 11c6c5bf cld  */
  C.df=0;
  /* 11c6c5c0 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c6c5c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c6c5c5 push eax */
  push32((uint32_t)(EAX));
  /* 11c6c5c6 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 11c6c5c9 push dword ptr [eax + 8] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x8))));
  /* 11c6c5cc push 0 */
  push32((uint32_t)(0x0u));
  /* 11c6c5ce push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c6c5d1 push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 11c6c5d4 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c6c5d7 call 0x11c6c9ee */
  push32(0x11c6c5dcu); f_11c6c9ee();
  /* 11c6c5dc add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6c5df pop ebp */
  EBP = (pop32());
  /* 11c6c5e0 ret  */
  ESPCHK(0x11c6c5bcu, _esp0);
  ESP += 4; return;
}

/* FUN_1000c5e1 @ 0x11c6c5e1 (182 bytes, 57 insns) */
void f_11c6c5e1(void) {
  FTRACE(0x11c6c5e1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6c5e1 push ebp */
  push32((uint32_t)(EBP));
  /* 11c6c5e2 mov ebp, esp */
  EBP = (ESP);
  /* 11c6c5e4 sub esp, 0x34 */
  { uint32_t _a=(ESP),_b=(0x34u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6c5e7 push ebx */
  push32((uint32_t)(EBX));
  /* 11c6c5e8 push esi */
  push32((uint32_t)(ESI));
  /* 11c6c5e9 push edi */
  push32((uint32_t)(EDI));
  /* 11c6c5ea and dword ptr [ebp - 0x28], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x28)))&(0x0u); w32((uint32_t)(EBP + -0x28), (_r)); fl_logic(_r,32); }
  /* 11c6c5ee mov dword ptr [ebp - 0x24], 0x11c6c697 */
  w32((uint32_t)(EBP + -0x24), (0x11c6c697u));
  /* 11c6c5f5 mov eax, dword ptr [ebp + 0x18] */
  EAX = (r32((uint32_t)(EBP + 0x18)));
  /* 11c6c5f8 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11c6c5fb mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c6c5fe mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11c6c601 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11c6c604 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
  /* 11c6c607 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 11c6c60a mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 11c6c60d and dword ptr [ebp - 0x10], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))&(0x0u); w32((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,32); }
  /* 11c6c611 and dword ptr [ebp - 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))&(0x0u); w32((uint32_t)(EBP + -0xc), (_r)); fl_logic(_r,32); }
  /* 11c6c615 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11c6c619 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c6c61d mov dword ptr [ebp - 0x10], 0x11c6c669 */
  w32((uint32_t)(EBP + -0x10), (0x11c6c669u));
  /* 11c6c624 mov dword ptr [ebp - 0xc], esp */
  w32((uint32_t)(EBP + -0xc), (ESP));
  /* 11c6c627 mov dword ptr [ebp - 8], ebp */
  w32((uint32_t)(EBP + -0x8), (EBP));
  /* 11c6c62a mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11c6c630 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11c6c633 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 11c6c639 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
  /* 11c6c63f mov dword ptr [ebp - 0x34], 1 */
  w32((uint32_t)(EBP + -0x34), (0x1u));
  /* 11c6c646 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c6c649 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 11c6c64c mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c6c64f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11c6c652 lea eax, [ebp - 0x30] */
  EAX = ((uint32_t)(EBP + -0x30));
  /* 11c6c655 push eax */
  push32((uint32_t)(EAX));
  /* 11c6c656 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c6c659 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 11c6c65b call 0x11c64883 */
  push32(0x11c6c660u); f_11c64883();
  /* 11c6c660 call dword ptr [eax + 0x68] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x68))), 0x11c6c663u);
  /* 11c6c663 pop ecx */
  ECX = (pop32());
  /* 11c6c664 pop ecx */
  ECX = (pop32());
  /* 11c6c665 and dword ptr [ebp - 0x34], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x34)))&(0x0u); w32((uint32_t)(EBP + -0x34), (_r)); fl_logic(_r,32); }
  /* 11c6c669 cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6c66d je 0x11c6c686 */
  if (C.zf) goto L_11c6c686;
  /* 11c6c66f mov ebx, dword ptr fs:[0] */
  EBX = (r32((uint32_t)(0x0)));
  /* 11c6c676 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 11c6c678 mov ebx, dword ptr [ebp - 0x28] */
  EBX = (r32((uint32_t)(EBP + -0x28)));
  /* 11c6c67b mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 11c6c67d mov dword ptr fs:[0], ebx */
  w32((uint32_t)(0x0), (EBX));
  /* 11c6c684 jmp 0x11c6c68f */
  goto L_11c6c68f;
L_11c6c686:;
  /* 11c6c686 mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11c6c689 mov dword ptr fs:[0], eax */
  w32((uint32_t)(0x0), (EAX));
L_11c6c68f:;
  /* 11c6c68f mov eax, dword ptr [ebp - 0x34] */
  EAX = (r32((uint32_t)(EBP + -0x34)));
  /* 11c6c692 pop edi */
  EDI = (pop32());
  /* 11c6c693 pop esi */
  ESI = (pop32());
  /* 11c6c694 pop ebx */
  EBX = (pop32());
  /* 11c6c695 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c6c696 ret  */
  ESPCHK(0x11c6c5e1u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c697 @ 0x11c6c697 (114 bytes, 47 insns) */
void f_11c6c697(void) {
  FTRACE(0x11c6c697u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6c697 push ebp */
  push32((uint32_t)(EBP));
  /* 11c6c698 mov ebp, esp */
  EBP = (ESP);
  /* 11c6c69a push ebx */
  push32((uint32_t)(EBX));
  /* 11c6c69b push esi */
  push32((uint32_t)(ESI));
  /* 11c6c69c push edi */
  push32((uint32_t)(EDI));
  /* 11c6c69d cld  */
  C.df=0;
  /* 11c6c69e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c6c6a1 mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 11c6c6a4 and eax, 0x66 */
  { uint32_t _r=(EAX)&(0x66u); EAX = (_r); fl_logic(_r,32); }
  /* 11c6c6a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6c6a9 je 0x11c6c6ba */
  if (C.zf) goto L_11c6c6ba;
  /* 11c6c6ab mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c6c6ae mov dword ptr [eax + 0x24], 1 */
  w32((uint32_t)(EAX + 0x24), (0x1u));
  /* 11c6c6b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6c6b7 pop eax */
  EAX = (pop32());
  /* 11c6c6b8 jmp 0x11c6c707 */
  goto L_11c6c707;
L_11c6c6ba:;
  /* 11c6c6ba push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6c6bc mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c6c6bf push dword ptr [eax + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x14))));
  /* 11c6c6c2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c6c6c5 push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 11c6c6c8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c6c6cb push dword ptr [eax + 8] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x8))));
  /* 11c6c6ce push 0 */
  push32((uint32_t)(0x0u));
  /* 11c6c6d0 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c6c6d3 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c6c6d6 push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 11c6c6d9 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c6c6dc call 0x11c6c9ee */
  push32(0x11c6c6e1u); f_11c6c9ee();
  /* 11c6c6e1 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6c6e4 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c6c6e7 cmp dword ptr [eax + 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6c6eb jne 0x11c6c6f8 */
  if (!C.zf) goto L_11c6c6f8;
  /* 11c6c6ed push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c6c6f0 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c6c6f3 call 0x11c6c4e3 */
  push32(0x11c6c6f8u); f_11c6c4e3();
L_11c6c6f8:;
  /* 11c6c6f8 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c6c6fb mov esp, dword ptr [ebx + 0x1c] */
  ESP = (r32((uint32_t)(EBX + 0x1c)));
  /* 11c6c6fe mov ebp, dword ptr [ebx + 0x20] */
  EBP = (r32((uint32_t)(EBX + 0x20)));
  /* 11c6c701 jmp dword ptr [ebx + 0x18] */
  jmp_ind((uint32_t)(r32((uint32_t)(EBX + 0x18)))); return;
  /* 11c6c704 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6c706 pop eax */
  EAX = (pop32());
L_11c6c707:;
  /* 11c6c707 pop edi */
  EDI = (pop32());
  /* 11c6c708 pop esi */
  ESI = (pop32());
  /* 11c6c709 pop ebx */
  EBX = (pop32());
  /* 11c6c70a pop ebp */
  EBP = (pop32());
  /* 11c6c70b ret  */
  ESPCHK(0x11c6c697u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c70c @ 0x11c6c70c (123 bytes, 51 insns) */
void f_11c6c70c(void) {
  FTRACE(0x11c6c70cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6c70c push ebp */
  push32((uint32_t)(EBP));
  /* 11c6c70d mov ebp, esp */
  EBP = (ESP);
  /* 11c6c70f push ecx */
  push32((uint32_t)(ECX));
  /* 11c6c710 push ebx */
  push32((uint32_t)(EBX));
  /* 11c6c711 push esi */
  push32((uint32_t)(ESI));
  /* 11c6c712 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6c716 push edi */
  push32((uint32_t)(EDI));
  /* 11c6c717 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c6c71a mov esi, dword ptr [edi + 0xc] */
  ESI = (r32((uint32_t)(EDI + 0xc)));
  /* 11c6c71d mov ebx, dword ptr [edi + 0x10] */
  EBX = (r32((uint32_t)(EDI + 0x10)));
  /* 11c6c720 mov eax, esi */
  EAX = (ESI);
  /* 11c6c722 mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 11c6c725 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11c6c728 jl 0x11c6c763 */
  if ((C.sf!=C.of)) goto L_11c6c763;
L_11c6c72a:;
  /* 11c6c72a cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6c72d jne 0x11c6c734 */
  if (!C.zf) goto L_11c6c734;
  /* 11c6c72f call 0x11c6d2bd */
  push32(0x11c6c734u); f_11c6d2bd();
L_11c6c734:;
  /* 11c6c734 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c6c737 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 11c6c738 lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 11c6c73b cmp dword ptr [ebx + eax*4 + 4], ecx */
  { uint32_t _a=(r32((uint32_t)(EBX + EAX*4 + 0x4))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6c73f lea eax, [ebx + eax*4] */
  EAX = ((uint32_t)(EBX + EAX*4));
  /* 11c6c742 jge 0x11c6c749 */
  if ((C.sf==C.of)) goto L_11c6c749;
  /* 11c6c744 cmp ecx, dword ptr [eax + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6c747 jle 0x11c6c74e */
  if ((C.zf||C.sf!=C.of)) goto L_11c6c74e;
L_11c6c749:;
  /* 11c6c749 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6c74c jne 0x11c6c75a */
  if (!C.zf) goto L_11c6c75a;
L_11c6c74e:;
  /* 11c6c74e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c6c751 dec dword ptr [ebp + 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))-1; w32((uint32_t)(EBP + 0xc), (_r)); fl_dec(_r,32); }
  /* 11c6c754 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11c6c757 mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
L_11c6c75a:;
  /* 11c6c75a cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6c75e jge 0x11c6c72a */
  if ((C.sf==C.of)) goto L_11c6c72a;
  /* 11c6c760 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_11c6c763:;
  /* 11c6c763 mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11c6c766 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 11c6c767 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
  /* 11c6c769 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11c6c76c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 11c6c76e cmp eax, dword ptr [edi + 0xc] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EDI + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6c771 ja 0x11c6c777 */
  if ((!C.cf&&!C.zf)) goto L_11c6c777;
  /* 11c6c773 cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6c775 jbe 0x11c6c77c */
  if ((C.cf||C.zf)) goto L_11c6c77c;
L_11c6c777:;
  /* 11c6c777 call 0x11c6d2bd */
  push32(0x11c6c77cu); f_11c6d2bd();
L_11c6c77c:;
  /* 11c6c77c lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 11c6c77f pop edi */
  EDI = (pop32());
  /* 11c6c780 pop esi */
  ESI = (pop32());
  /* 11c6c781 lea eax, [ebx + eax*4] */
  EAX = ((uint32_t)(EBX + EAX*4));
  /* 11c6c784 pop ebx */
  EBX = (pop32());
  /* 11c6c785 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c6c786 ret  */
  ESPCHK(0x11c6c70cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000c788 @ 0x11c6c788 (31 bytes, 10 insns) */
void f_11c6c788(void) {
  FTRACE(0x11c6c788u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6c788 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c6c78a push eax */
  push32((uint32_t)(EAX));
  /* 11c6c78b mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11c6c791 push eax */
  push32((uint32_t)(EAX));
  /* 11c6c792 mov eax, dword ptr [esp + 0xc] */
  EAX = (r32((uint32_t)(ESP + 0xc)));
  /* 11c6c796 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11c6c79d mov dword ptr [esp + 0xc], ebp */
  w32((uint32_t)(ESP + 0xc), (EBP));
  /* 11c6c7a1 lea ebp, [esp + 0xc] */
  EBP = ((uint32_t)(ESP + 0xc));
  /* 11c6c7a5 push eax */
  push32((uint32_t)(EAX));
  /* 11c6c7a6 ret  */
  ESPCHK(0x11c6c788u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7a7 @ 0x11c6c7a7 (101 bytes, 34 insns) */
void f_11c6c7a7(void) {
  FTRACE(0x11c6c7a7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6c7a7 push esi */
  push32((uint32_t)(ESI));
  /* 11c6c7a8 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c6c7ac cmp esi, dword ptr [0x11c88f60] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x11c88f60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6c7b2 jae 0x11c6c7f4 */
  if (!C.cf) goto L_11c6c7f4;
  /* 11c6c7b4 mov ecx, esi */
  ECX = (ESI);
  /* 11c6c7b6 mov eax, esi */
  EAX = (ESI);
  /* 11c6c7b8 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11c6c7bb and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11c6c7be mov ecx, dword ptr [ecx*4 + 0x11c88e60] */
  ECX = (r32((uint32_t)(ECX*4 + 0x11c88e60)));
  /* 11c6c7c5 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 11c6c7c8 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 11c6c7cd je 0x11c6c7f4 */
  if (C.zf) goto L_11c6c7f4;
  /* 11c6c7cf push edi */
  push32((uint32_t)(EDI));
  /* 11c6c7d0 push esi */
  push32((uint32_t)(ESI));
  /* 11c6c7d1 call 0x11c6a897 */
  push32(0x11c6c7d6u); f_11c6a897();
  /* 11c6c7d6 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11c6c7da push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 11c6c7de push esi */
  push32((uint32_t)(ESI));
  /* 11c6c7df call 0x11c6c80c */
  push32(0x11c6c7e4u); f_11c6c80c();
  /* 11c6c7e4 push esi */
  push32((uint32_t)(ESI));
  /* 11c6c7e5 mov edi, eax */
  EDI = (EAX);
  /* 11c6c7e7 call 0x11c6a8f6 */
  push32(0x11c6c7ecu); f_11c6a8f6();
  /* 11c6c7ec add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6c7ef mov eax, edi */
  EAX = (EDI);
  /* 11c6c7f1 pop edi */
  EDI = (pop32());
  /* 11c6c7f2 pop esi */
  ESI = (pop32());
  /* 11c6c7f3 ret  */
  ESPCHK(0x11c6c7a7u, _esp0);
  ESP += 4; return;
L_11c6c7f4:;
  /* 11c6c7f4 call 0x11c6a7c4 */
  push32(0x11c6c7f9u); f_11c6a7c4();
  /* 11c6c7f9 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11c6c7ff call 0x11c6a7cd */
  push32(0x11c6c804u); f_11c6a7cd();
  /* 11c6c804 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 11c6c807 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c6c80a pop esi */
  ESI = (pop32());
  /* 11c6c80b ret  */
  ESPCHK(0x11c6c7a7u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c80c @ 0x11c6c80c (473 bytes, 170 insns) */
void f_11c6c80c(void) {
  FTRACE(0x11c6c80cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6c80c push ebp */
  push32((uint32_t)(EBP));
  /* 11c6c80d mov ebp, esp */
  EBP = (ESP);
  /* 11c6c80f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6c812 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 11c6c816 cmp dword ptr [ebp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6c81a push ebx */
  push32((uint32_t)(EBX));
  /* 11c6c81b mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c6c81e push esi */
  push32((uint32_t)(ESI));
  /* 11c6c81f push edi */
  push32((uint32_t)(EDI));
  /* 11c6c820 mov edx, ebx */
  EDX = (EBX);
  /* 11c6c822 je 0x11c6c9de */
  if (C.zf) goto L_11c6c9de;
  /* 11c6c828 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c6c82b mov ecx, eax */
  ECX = (EAX);
  /* 11c6c82d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 11c6c830 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 11c6c833 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 11c6c836 mov eax, dword ptr [ecx*4 + 0x11c88e60] */
  EAX = (r32((uint32_t)(ECX*4 + 0x11c88e60)));
  /* 11c6c83d lea edi, [ecx*4 + 0x11c88e60] */
  EDI = ((uint32_t)(ECX*4 + 0x11c88e60));
  /* 11c6c844 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 11c6c847 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6c849 mov cl, byte ptr [eax + 4] */
  CL = (r8((uint32_t)(EAX + 0x4)));
  /* 11c6c84c test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 11c6c84f jne 0x11c6c9de */
  if (!C.zf) goto L_11c6c9de;
  /* 11c6c855 test cl, 0x48 */
  { uint32_t _r=(CL)&(0x48u); fl_logic(_r,8); }
  /* 11c6c858 je 0x11c6c877 */
  if (C.zf) goto L_11c6c877;
  /* 11c6c85a mov al, byte ptr [eax + 5] */
  AL = (r8((uint32_t)(EAX + 0x5)));
  /* 11c6c85d cmp al, 0xa */
  { uint32_t _a=(AL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6c85f je 0x11c6c877 */
  if (C.zf) goto L_11c6c877;
  /* 11c6c861 dec dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))-1; w32((uint32_t)(EBP + 0x10), (_r)); fl_dec(_r,32); }
  /* 11c6c864 mov byte ptr [ebx], al */
  w8((uint32_t)(EBX), (AL));
  /* 11c6c866 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11c6c868 lea edx, [ebx + 1] */
  EDX = ((uint32_t)(EBX + 0x1));
  /* 11c6c86b mov dword ptr [ebp - 8], 1 */
  w32((uint32_t)(EBP + -0x8), (0x1u));
  /* 11c6c872 mov byte ptr [eax + esi + 5], 0xa */
  w8((uint32_t)(EAX + ESI*1 + 0x5), (0xau));
L_11c6c877:;
  /* 11c6c877 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11c6c87a push 0 */
  push32((uint32_t)(0x0u));
  /* 11c6c87c push eax */
  push32((uint32_t)(EAX));
  /* 11c6c87d mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11c6c87f push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c6c882 push edx */
  push32((uint32_t)(EDX));
  /* 11c6c883 push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 11c6c886 call dword ptr [0x11c6e014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e014))), 0x11c6c88cu);
  /* 11c6c88c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6c88e jne 0x11c6c8c9 */
  if (!C.zf) goto L_11c6c8c9;
  /* 11c6c890 call dword ptr [0x11c6e104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e104))), 0x11c6c896u);
  /* 11c6c896 push 5 */
  push32((uint32_t)(0x5u));
  /* 11c6c898 pop esi */
  ESI = (pop32());
  /* 11c6c899 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6c89b jne 0x11c6c8b1 */
  if (!C.zf) goto L_11c6c8b1;
  /* 11c6c89d call 0x11c6a7c4 */
  push32(0x11c6c8a2u); f_11c6a7c4();
  /* 11c6c8a2 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 11c6c8a8 call 0x11c6a7cd */
  push32(0x11c6c8adu); f_11c6a7cd();
  /* 11c6c8ad mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 11c6c8af jmp 0x11c6c8c1 */
  goto L_11c6c8c1;
L_11c6c8b1:;
  /* 11c6c8b1 cmp eax, 0x6d */
  { uint32_t _a=(EAX),_b=(0x6du),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6c8b4 je 0x11c6c9de */
  if (C.zf) goto L_11c6c9de;
  /* 11c6c8ba push eax */
  push32((uint32_t)(EAX));
  /* 11c6c8bb call 0x11c6a751 */
  push32(0x11c6c8c0u); f_11c6a751();
  /* 11c6c8c0 pop ecx */
  ECX = (pop32());
L_11c6c8c1:;
  /* 11c6c8c1 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 11c6c8c4 jmp 0x11c6c9e0 */
  goto L_11c6c9e0;
L_11c6c8c9:;
  /* 11c6c8c9 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11c6c8cb mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 11c6c8ce add dword ptr [ebp - 8], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c6c8d1 lea ecx, [eax + esi + 4] */
  ECX = ((uint32_t)(EAX + ESI*1 + 0x4));
  /* 11c6c8d5 mov al, byte ptr [eax + esi + 4] */
  AL = (r8((uint32_t)(EAX + ESI*1 + 0x4)));
  /* 11c6c8d9 test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 11c6c8db je 0x11c6c9d9 */
  if (C.zf) goto L_11c6c9d9;
  /* 11c6c8e1 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11c6c8e3 je 0x11c6c8ee */
  if (C.zf) goto L_11c6c8ee;
  /* 11c6c8e5 cmp byte ptr [ebx], 0xa */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6c8e8 jne 0x11c6c8ee */
  if (!C.zf) goto L_11c6c8ee;
  /* 11c6c8ea or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
  /* 11c6c8ec jmp 0x11c6c8f0 */
  goto L_11c6c8f0;
L_11c6c8ee:;
  /* 11c6c8ee and al, 0xfb */
  { uint32_t _r=(AL)&(0xfbu); AL = (_r); fl_logic(_r,8); }
L_11c6c8f0:;
  /* 11c6c8f0 mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 11c6c8f2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c6c8f5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11c6c8f8 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11c6c8fb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6c8fd cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6c8ff mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 11c6c902 jae 0x11c6c9d3 */
  if (!C.cf) goto L_11c6c9d3;
L_11c6c908:;
  /* 11c6c908 mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c6c90b mov al, byte ptr [eax] */
  AL = (r8((uint32_t)(EAX)));
  /* 11c6c90d cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6c90f je 0x11c6c9c3 */
  if (C.zf) goto L_11c6c9c3;
  /* 11c6c915 cmp al, 0xd */
  { uint32_t _a=(AL),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6c917 je 0x11c6c924 */
  if (C.zf) goto L_11c6c924;
  /* 11c6c919 mov byte ptr [ebx], al */
  w8((uint32_t)(EBX), (AL));
  /* 11c6c91b inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11c6c91c inc dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))+1; w32((uint32_t)(EBP + 0x10), (_r)); fl_inc(_r,32); }
  /* 11c6c91f jmp 0x11c6c9b5 */
  goto L_11c6c9b5;
L_11c6c924:;
  /* 11c6c924 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 11c6c925 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6c928 jae 0x11c6c942 */
  if (!C.cf) goto L_11c6c942;
  /* 11c6c92a mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c6c92d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c6c92e cmp byte ptr [eax], 0xa */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6c931 jne 0x11c6c939 */
  if (!C.zf) goto L_11c6c939;
  /* 11c6c933 add dword ptr [ebp + 0x10], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + 0x10), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c6c937 jmp 0x11c6c997 */
  goto L_11c6c997;
L_11c6c939:;
  /* 11c6c939 mov byte ptr [ebx], 0xd */
  w8((uint32_t)(EBX), (0xdu));
  /* 11c6c93c inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11c6c93d mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11c6c940 jmp 0x11c6c9b5 */
  goto L_11c6c9b5;
L_11c6c942:;
  /* 11c6c942 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 11c6c945 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c6c947 push eax */
  push32((uint32_t)(EAX));
  /* 11c6c948 inc dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))+1; w32((uint32_t)(EBP + 0x10), (_r)); fl_inc(_r,32); }
  /* 11c6c94b lea eax, [ebp - 1] */
  EAX = ((uint32_t)(EBP + -0x1));
  /* 11c6c94e push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6c950 push eax */
  push32((uint32_t)(EAX));
  /* 11c6c951 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11c6c953 push dword ptr [eax + esi] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*1))));
  /* 11c6c956 call dword ptr [0x11c6e014] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e014))), 0x11c6c95cu);
  /* 11c6c95c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6c95e jne 0x11c6c96a */
  if (!C.zf) goto L_11c6c96a;
  /* 11c6c960 call dword ptr [0x11c6e104] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e104))), 0x11c6c966u);
  /* 11c6c966 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6c968 jne 0x11c6c9b1 */
  if (!C.zf) goto L_11c6c9b1;
L_11c6c96a:;
  /* 11c6c96a cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6c96e je 0x11c6c9b1 */
  if (C.zf) goto L_11c6c9b1;
  /* 11c6c970 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11c6c972 test byte ptr [eax + esi + 4], 0x48 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x48u); fl_logic(_r,8); }
  /* 11c6c977 je 0x11c6c98c */
  if (C.zf) goto L_11c6c98c;
  /* 11c6c979 mov al, byte ptr [ebp - 1] */
  AL = (r8((uint32_t)(EBP + -0x1)));
  /* 11c6c97c cmp al, 0xa */
  { uint32_t _a=(AL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6c97e je 0x11c6c997 */
  if (C.zf) goto L_11c6c997;
  /* 11c6c980 mov byte ptr [ebx], 0xd */
  w8((uint32_t)(EBX), (0xdu));
  /* 11c6c983 mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 11c6c985 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 11c6c986 mov byte ptr [ecx + esi + 5], al */
  w8((uint32_t)(ECX + ESI*1 + 0x5), (AL));
  /* 11c6c98a jmp 0x11c6c9b5 */
  goto L_11c6c9b5;
L_11c6c98c:;
  /* 11c6c98c cmp ebx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6c98f jne 0x11c6c99c */
  if (!C.zf) goto L_11c6c99c;
  /* 11c6c991 cmp byte ptr [ebp - 1], 0xa */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x1))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6c995 jne 0x11c6c99c */
  if (!C.zf) goto L_11c6c99c;
L_11c6c997:;
  /* 11c6c997 mov byte ptr [ebx], 0xa */
  w8((uint32_t)(EBX), (0xau));
  /* 11c6c99a jmp 0x11c6c9b4 */
  goto L_11c6c9b4;
L_11c6c99c:;
  /* 11c6c99c push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6c99e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c6c9a0 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c6c9a3 call 0x11c6894d */
  push32(0x11c6c9a8u); f_11c6894d();
  /* 11c6c9a8 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6c9ab cmp byte ptr [ebp - 1], 0xa */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x1))),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6c9af je 0x11c6c9b5 */
  if (C.zf) goto L_11c6c9b5;
L_11c6c9b1:;
  /* 11c6c9b1 mov byte ptr [ebx], 0xd */
  w8((uint32_t)(EBX), (0xdu));
L_11c6c9b4:;
  /* 11c6c9b4 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_11c6c9b5:;
  /* 11c6c9b5 mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
  /* 11c6c9b8 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6c9bb jb 0x11c6c908 */
  if (C.cf) goto L_11c6c908;
  /* 11c6c9c1 jmp 0x11c6c9d3 */
  goto L_11c6c9d3;
L_11c6c9c3:;
  /* 11c6c9c3 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11c6c9c5 lea esi, [eax + esi + 4] */
  ESI = ((uint32_t)(EAX + ESI*1 + 0x4));
  /* 11c6c9c9 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 11c6c9cb test al, 0x40 */
  { uint32_t _r=(AL)&(0x40u); fl_logic(_r,8); }
  /* 11c6c9cd jne 0x11c6c9d3 */
  if (!C.zf) goto L_11c6c9d3;
  /* 11c6c9cf or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 11c6c9d1 mov byte ptr [esi], al */
  w8((uint32_t)(ESI), (AL));
L_11c6c9d3:;
  /* 11c6c9d3 sub ebx, dword ptr [ebp + 0xc] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0xc))),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6c9d6 mov dword ptr [ebp - 8], ebx */
  w32((uint32_t)(EBP + -0x8), (EBX));
L_11c6c9d9:;
  /* 11c6c9d9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 11c6c9dc jmp 0x11c6c9e0 */
  goto L_11c6c9e0;
L_11c6c9de:;
  /* 11c6c9de xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c6c9e0:;
  /* 11c6c9e0 pop edi */
  EDI = (pop32());
  /* 11c6c9e1 pop esi */
  ESI = (pop32());
  /* 11c6c9e2 pop ebx */
  EBX = (pop32());
  /* 11c6c9e3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c6c9e4 ret  */
  ESPCHK(0x11c6c80cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000c9ee @ 0x11c6c9ee (155 bytes, 61 insns) */
void f_11c6c9ee(void) {
  FTRACE(0x11c6c9eeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6c9ee push ebp */
  push32((uint32_t)(EBP));
  /* 11c6c9ef mov ebp, esp */
  EBP = (ESP);
  /* 11c6c9f1 push esi */
  push32((uint32_t)(ESI));
  /* 11c6c9f2 mov esi, dword ptr [ebp + 0x18] */
  ESI = (r32((uint32_t)(EBP + 0x18)));
  /* 11c6c9f5 push edi */
  push32((uint32_t)(EDI));
  /* 11c6c9f6 mov edi, 0x19930520 */
  EDI = (0x19930520u);
  /* 11c6c9fb cmp dword ptr [esi], edi */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6c9fd je 0x11c6ca04 */
  if (C.zf) goto L_11c6ca04;
  /* 11c6c9ff call 0x11c6d2bd */
  push32(0x11c6ca04u); f_11c6d2bd();
L_11c6ca04:;
  /* 11c6ca04 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c6ca07 test byte ptr [eax + 4], 0x66 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x66u); fl_logic(_r,8); }
  /* 11c6ca0b je 0x11c6ca2c */
  if (C.zf) goto L_11c6ca2c;
  /* 11c6ca0d cmp dword ptr [esi + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6ca11 je 0x11c6ca82 */
  if (C.zf) goto L_11c6ca82;
  /* 11c6ca13 cmp dword ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6ca17 jne 0x11c6ca82 */
  if (!C.zf) goto L_11c6ca82;
  /* 11c6ca19 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c6ca1b push esi */
  push32((uint32_t)(ESI));
  /* 11c6ca1c push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c6ca1f push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c6ca22 call 0x11c6cd43 */
  push32(0x11c6ca27u); f_11c6cd43();
  /* 11c6ca27 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6ca2a jmp 0x11c6ca82 */
  goto L_11c6ca82;
L_11c6ca2c:;
  /* 11c6ca2c cmp dword ptr [esi + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6ca30 je 0x11c6ca82 */
  if (C.zf) goto L_11c6ca82;
  /* 11c6ca32 cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6ca38 jne 0x11c6ca66 */
  if (!C.zf) goto L_11c6ca66;
  /* 11c6ca3a cmp dword ptr [eax + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6ca3d jbe 0x11c6ca66 */
  if ((C.cf||C.zf)) goto L_11c6ca66;
  /* 11c6ca3f mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11c6ca42 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 11c6ca45 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11c6ca47 je 0x11c6ca66 */
  if (C.zf) goto L_11c6ca66;
  /* 11c6ca49 movzx edx, byte ptr [ebp + 0x24] */
  EDX = ((uint32_t)(r8((uint32_t)(EBP + 0x24))));
  /* 11c6ca4d push edx */
  push32((uint32_t)(EDX));
  /* 11c6ca4e push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11c6ca51 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11c6ca54 push esi */
  push32((uint32_t)(ESI));
  /* 11c6ca55 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c6ca58 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c6ca5b push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c6ca5e push eax */
  push32((uint32_t)(EAX));
  /* 11c6ca5f call ecx */
  call_ind((uint32_t)(ECX), 0x11c6ca61u);
  /* 11c6ca61 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6ca64 jmp 0x11c6ca85 */
  goto L_11c6ca85;
L_11c6ca66:;
  /* 11c6ca66 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11c6ca69 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11c6ca6c push dword ptr [ebp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x24))));
  /* 11c6ca6f push esi */
  push32((uint32_t)(ESI));
  /* 11c6ca70 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c6ca73 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c6ca76 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c6ca79 push eax */
  push32((uint32_t)(EAX));
  /* 11c6ca7a call 0x11c6ca89 */
  push32(0x11c6ca7fu); f_11c6ca89();
  /* 11c6ca7f add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c6ca82:;
  /* 11c6ca82 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6ca84 pop eax */
  EAX = (pop32());
L_11c6ca85:;
  /* 11c6ca85 pop edi */
  EDI = (pop32());
  /* 11c6ca86 pop esi */
  ESI = (pop32());
  /* 11c6ca87 pop ebp */
  EBP = (pop32());
  /* 11c6ca88 ret  */
  ESPCHK(0x11c6c9eeu, _esp0);
  ESP += 4; return;
}

/* FUN_1000ca89 @ 0x11c6ca89 (435 bytes, 149 insns) */
void f_11c6ca89(void) {
  FTRACE(0x11c6ca89u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6ca89 push ebp */
  push32((uint32_t)(EBP));
  /* 11c6ca8a mov ebp, esp */
  EBP = (ESP);
  /* 11c6ca8c sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6ca8f mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c6ca92 and byte ptr [ebp - 0x14], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x14)))&(0x0u); w8((uint32_t)(EBP + -0x14), (_r)); fl_logic(_r,8); }
  /* 11c6ca96 mov eax, dword ptr [eax + 8] */
  EAX = (r32((uint32_t)(EAX + 0x8)));
  /* 11c6ca99 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6ca9c mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 11c6ca9f jl 0x11c6caa9 */
  if ((C.sf!=C.of)) goto L_11c6caa9;
  /* 11c6caa1 mov ecx, dword ptr [ebp + 0x18] */
  ECX = (r32((uint32_t)(EBP + 0x18)));
  /* 11c6caa4 cmp eax, dword ptr [ecx + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6caa7 jl 0x11c6caae */
  if ((C.sf!=C.of)) goto L_11c6caae;
L_11c6caa9:;
  /* 11c6caa9 call 0x11c6d2bd */
  push32(0x11c6caaeu); f_11c6d2bd();
L_11c6caae:;
  /* 11c6caae push ebx */
  push32((uint32_t)(EBX));
  /* 11c6caaf push esi */
  push32((uint32_t)(ESI));
  /* 11c6cab0 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c6cab3 mov ebx, 0xe06d7363 */
  EBX = (0xe06d7363u);
  /* 11c6cab8 push edi */
  push32((uint32_t)(EDI));
  /* 11c6cab9 mov edi, 0x19930520 */
  EDI = (0x19930520u);
  /* 11c6cabe cmp dword ptr [esi], ebx */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6cac0 jne 0x11c6cc11 */
  if (!C.zf) goto L_11c6cc11;
  /* 11c6cac6 cmp dword ptr [esi + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6caca jne 0x11c6cb2e */
  if (!C.zf) goto L_11c6cb2e;
  /* 11c6cacc cmp dword ptr [esi + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6cacf jne 0x11c6cb2e */
  if (!C.zf) goto L_11c6cb2e;
  /* 11c6cad1 cmp dword ptr [esi + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6cad5 jne 0x11c6cb2e */
  if (!C.zf) goto L_11c6cb2e;
  /* 11c6cad7 call 0x11c64883 */
  push32(0x11c6cadcu); f_11c64883();
  /* 11c6cadc cmp dword ptr [eax + 0x6c], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x6c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6cae0 je 0x11c6cc0c */
  if (C.zf) goto L_11c6cc0c;
  /* 11c6cae6 call 0x11c64883 */
  push32(0x11c6caebu); f_11c64883();
  /* 11c6caeb mov esi, dword ptr [eax + 0x6c] */
  ESI = (r32((uint32_t)(EAX + 0x6c)));
  /* 11c6caee call 0x11c64883 */
  push32(0x11c6caf3u); f_11c64883();
  /* 11c6caf3 mov eax, dword ptr [eax + 0x70] */
  EAX = (r32((uint32_t)(EAX + 0x70)));
  /* 11c6caf6 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6caf8 push esi */
  push32((uint32_t)(ESI));
  /* 11c6caf9 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
  /* 11c6cafc mov byte ptr [ebp - 0x14], 1 */
  w8((uint32_t)(EBP + -0x14), (0x1u));
  /* 11c6cb00 call 0x11c6d377 */
  push32(0x11c6cb05u); f_11c6d377();
  /* 11c6cb05 pop ecx */
  ECX = (pop32());
  /* 11c6cb06 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6cb08 pop ecx */
  ECX = (pop32());
  /* 11c6cb09 jne 0x11c6cb10 */
  if (!C.zf) goto L_11c6cb10;
  /* 11c6cb0b call 0x11c6d2bd */
  push32(0x11c6cb10u); f_11c6d2bd();
L_11c6cb10:;
  /* 11c6cb10 cmp dword ptr [esi], ebx */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6cb12 jne 0x11c6cc11 */
  if (!C.zf) goto L_11c6cc11;
  /* 11c6cb18 cmp dword ptr [esi + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6cb1c jne 0x11c6cb2e */
  if (!C.zf) goto L_11c6cb2e;
  /* 11c6cb1e cmp dword ptr [esi + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6cb21 jne 0x11c6cb2e */
  if (!C.zf) goto L_11c6cb2e;
  /* 11c6cb23 cmp dword ptr [esi + 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6cb27 jne 0x11c6cb2e */
  if (!C.zf) goto L_11c6cb2e;
  /* 11c6cb29 call 0x11c6d2bd */
  push32(0x11c6cb2eu); f_11c6d2bd();
L_11c6cb2e:;
  /* 11c6cb2e cmp dword ptr [esi], ebx */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6cb30 jne 0x11c6cc11 */
  if (!C.zf) goto L_11c6cc11;
  /* 11c6cb36 cmp dword ptr [esi + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6cb3a jne 0x11c6cc11 */
  if (!C.zf) goto L_11c6cc11;
  /* 11c6cb40 cmp dword ptr [esi + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6cb43 jne 0x11c6cc11 */
  if (!C.zf) goto L_11c6cc11;
  /* 11c6cb49 mov edi, dword ptr [ebp - 0x10] */
  EDI = (r32((uint32_t)(EBP + -0x10)));
  /* 11c6cb4c lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 11c6cb4f push eax */
  push32((uint32_t)(EAX));
  /* 11c6cb50 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11c6cb53 push eax */
  push32((uint32_t)(EAX));
  /* 11c6cb54 push edi */
  push32((uint32_t)(EDI));
  /* 11c6cb55 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11c6cb58 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11c6cb5b call 0x11c6c70c */
  push32(0x11c6cb60u); f_11c6c70c();
  /* 11c6cb60 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6cb63 mov ebx, eax */
  EBX = (EAX);
L_11c6cb65:;
  /* 11c6cb65 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c6cb68 cmp eax, dword ptr [ebp - 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x18))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6cb6b jae 0x11c6cbfc */
  if (!C.cf) goto L_11c6cbfc;
  /* 11c6cb71 cmp dword ptr [ebx], edi */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6cb73 jg 0x11c6cbf1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c6cbf1;
  /* 11c6cb75 cmp edi, dword ptr [ebx + 4] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EBX + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6cb78 jg 0x11c6cbf1 */
  if ((!C.zf&&C.sf==C.of)) goto L_11c6cbf1;
  /* 11c6cb7a mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 11c6cb7d mov dword ptr [ebp + 8], eax */
  w32((uint32_t)(EBP + 0x8), (EAX));
  /* 11c6cb80 mov eax, dword ptr [ebx + 0xc] */
  EAX = (r32((uint32_t)(EBX + 0xc)));
  /* 11c6cb83 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6cb85 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 11c6cb88 jle 0x11c6cbee */
  if ((C.zf||C.sf!=C.of)) goto L_11c6cbee;
L_11c6cb8a:;
  /* 11c6cb8a mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 11c6cb8d mov eax, dword ptr [eax + 0xc] */
  EAX = (r32((uint32_t)(EAX + 0xc)));
  /* 11c6cb90 lea edi, [eax + 4] */
  EDI = ((uint32_t)(EAX + 0x4));
  /* 11c6cb93 mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 11c6cb95 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6cb97 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 11c6cb9a jle 0x11c6cbbb */
  if ((C.zf||C.sf!=C.of)) goto L_11c6cbbb;
L_11c6cb9c:;
  /* 11c6cb9c push dword ptr [esi + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x1c))));
  /* 11c6cb9f push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 11c6cba1 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c6cba4 call 0x11c6cce6 */
  push32(0x11c6cba9u); f_11c6cce6();
  /* 11c6cba9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6cbac test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6cbae jne 0x11c6cbca */
  if (!C.zf) goto L_11c6cbca;
  /* 11c6cbb0 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 11c6cbb3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6cbb6 cmp dword ptr [ebp - 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6cbb9 jg 0x11c6cb9c */
  if ((!C.zf&&C.sf==C.of)) goto L_11c6cb9c;
L_11c6cbbb:;
  /* 11c6cbbb dec dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))-1; w32((uint32_t)(EBP + -0xc), (_r)); fl_dec(_r,32); }
  /* 11c6cbbe add dword ptr [ebp + 8], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 11c6cbc2 cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6cbc6 jg 0x11c6cb8a */
  if ((!C.zf&&C.sf==C.of)) goto L_11c6cb8a;
  /* 11c6cbc8 jmp 0x11c6cbee */
  goto L_11c6cbee;
L_11c6cbca:;
  /* 11c6cbca push dword ptr [ebp - 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x14))));
  /* 11c6cbcd push dword ptr [ebp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x24))));
  /* 11c6cbd0 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11c6cbd3 push ebx */
  push32((uint32_t)(EBX));
  /* 11c6cbd4 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 11c6cbd6 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c6cbd9 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11c6cbdc push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c6cbdf push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c6cbe2 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c6cbe5 push esi */
  push32((uint32_t)(ESI));
  /* 11c6cbe6 call 0x11c6cdf7 */
  push32(0x11c6cbebu); f_11c6cdf7();
  /* 11c6cbeb add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c6cbee:;
  /* 11c6cbee mov edi, dword ptr [ebp - 0x10] */
  EDI = (r32((uint32_t)(EBP + -0x10)));
L_11c6cbf1:;
  /* 11c6cbf1 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11c6cbf4 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6cbf7 jmp 0x11c6cb65 */
  goto L_11c6cb65;
L_11c6cbfc:;
  /* 11c6cbfc cmp byte ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6cc00 je 0x11c6cc0c */
  if (C.zf) goto L_11c6cc0c;
  /* 11c6cc02 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6cc04 push esi */
  push32((uint32_t)(ESI));
  /* 11c6cc05 call 0x11c6d17b */
  push32(0x11c6cc0au); f_11c6d17b();
  /* 11c6cc0a pop ecx */
  ECX = (pop32());
  /* 11c6cc0b pop ecx */
  ECX = (pop32());
L_11c6cc0c:;
  /* 11c6cc0c pop edi */
  EDI = (pop32());
  /* 11c6cc0d pop esi */
  ESI = (pop32());
  /* 11c6cc0e pop ebx */
  EBX = (pop32());
  /* 11c6cc0f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c6cc10 ret  */
  ESPCHK(0x11c6ca89u, _esp0);
  ESP += 4; return;
L_11c6cc11:;
  /* 11c6cc11 cmp byte ptr [ebp + 0x1c], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6cc15 jne 0x11c6cc37 */
  if (!C.zf) goto L_11c6cc37;
  /* 11c6cc17 push dword ptr [ebp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x24))));
  /* 11c6cc1a push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11c6cc1d push dword ptr [ebp - 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x10))));
  /* 11c6cc20 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11c6cc23 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c6cc26 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c6cc29 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c6cc2c push esi */
  push32((uint32_t)(ESI));
  /* 11c6cc2d call 0x11c6cc3c */
  push32(0x11c6cc32u); f_11c6cc3c();
  /* 11c6cc32 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6cc35 jmp 0x11c6cc0c */
  goto L_11c6cc0c;
L_11c6cc37:;
  /* 11c6cc37 jmp 0x11c6d25c */
  f_11c6d25c(); return;
}

/* FUN_1000cc3c @ 0x11c6cc3c (170 bytes, 68 insns) */
void f_11c6cc3c(void) {
  FTRACE(0x11c6cc3cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6cc3c push ebp */
  push32((uint32_t)(EBP));
  /* 11c6cc3d mov ebp, esp */
  EBP = (ESP);
  /* 11c6cc3f push ecx */
  push32((uint32_t)(ECX));
  /* 11c6cc40 push ecx */
  push32((uint32_t)(ECX));
  /* 11c6cc41 push esi */
  push32((uint32_t)(ESI));
  /* 11c6cc42 push edi */
  push32((uint32_t)(EDI));
  /* 11c6cc43 call 0x11c64883 */
  push32(0x11c6cc48u); f_11c64883();
  /* 11c6cc48 cmp dword ptr [eax + 0x68], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x68))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6cc4c je 0x11c6cc6f */
  if (C.zf) goto L_11c6cc6f;
  /* 11c6cc4e push dword ptr [ebp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x24))));
  /* 11c6cc51 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11c6cc54 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11c6cc57 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c6cc5a push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c6cc5d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c6cc60 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c6cc63 call 0x11c6c5e1 */
  push32(0x11c6cc68u); f_11c6c5e1();
  /* 11c6cc68 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6cc6b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6cc6d jne 0x11c6cce2 */
  if (!C.zf) goto L_11c6cce2;
L_11c6cc6f:;
  /* 11c6cc6f mov edi, dword ptr [ebp + 0x1c] */
  EDI = (r32((uint32_t)(EBP + 0x1c)));
  /* 11c6cc72 lea eax, [ebp - 8] */
  EAX = ((uint32_t)(EBP + -0x8));
  /* 11c6cc75 push eax */
  push32((uint32_t)(EAX));
  /* 11c6cc76 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 11c6cc79 push eax */
  push32((uint32_t)(EAX));
  /* 11c6cc7a push edi */
  push32((uint32_t)(EDI));
  /* 11c6cc7b push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11c6cc7e push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11c6cc81 call 0x11c6c70c */
  push32(0x11c6cc86u); f_11c6c70c();
  /* 11c6cc86 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6cc89 mov esi, eax */
  ESI = (EAX);
L_11c6cc8b:;
  /* 11c6cc8b mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 11c6cc8e cmp eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6cc91 jae 0x11c6cce2 */
  if (!C.cf) goto L_11c6cce2;
  /* 11c6cc93 cmp edi, dword ptr [esi] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ESI))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6cc95 jl 0x11c6ccda */
  if ((C.sf!=C.of)) goto L_11c6ccda;
  /* 11c6cc97 cmp edi, dword ptr [esi + 4] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ESI + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6cc9a jg 0x11c6ccda */
  if ((!C.zf&&C.sf==C.of)) goto L_11c6ccda;
  /* 11c6cc9c mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 11c6cc9f mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 11c6cca2 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 11c6cca5 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6cca7 mov ecx, dword ptr [eax - 0xc] */
  ECX = (r32((uint32_t)(EAX + -0xc)));
  /* 11c6ccaa test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11c6ccac je 0x11c6ccb4 */
  if (C.zf) goto L_11c6ccb4;
  /* 11c6ccae cmp byte ptr [ecx + 8], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6ccb2 jne 0x11c6ccda */
  if (!C.zf) goto L_11c6ccda;
L_11c6ccb4:;
  /* 11c6ccb4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6ccb6 add eax, -0x10 */
  { uint32_t _a=(EAX),_b=(0xfffffff0u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6ccb9 push dword ptr [ebp + 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x24))));
  /* 11c6ccbc push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11c6ccbf push esi */
  push32((uint32_t)(ESI));
  /* 11c6ccc0 push 0 */
  push32((uint32_t)(0x0u));
  /* 11c6ccc2 push eax */
  push32((uint32_t)(EAX));
  /* 11c6ccc3 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11c6ccc6 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c6ccc9 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c6cccc push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 11c6cccf push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c6ccd2 call 0x11c6cdf7 */
  push32(0x11c6ccd7u); f_11c6cdf7();
  /* 11c6ccd7 add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c6ccda:;
  /* 11c6ccda inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 11c6ccdd add esi, 0x14 */
  { uint32_t _a=(ESI),_b=(0x14u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6cce0 jmp 0x11c6cc8b */
  goto L_11c6cc8b;
L_11c6cce2:;
  /* 11c6cce2 pop edi */
  EDI = (pop32());
  /* 11c6cce3 pop esi */
  ESI = (pop32());
  /* 11c6cce4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c6cce5 ret  */
  ESPCHK(0x11c6cc3cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000cce6 @ 0x11c6cce6 (93 bytes, 42 insns) */
void f_11c6cce6(void) {
  FTRACE(0x11c6cce6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6cce6 push esi */
  push32((uint32_t)(ESI));
  /* 11c6cce7 push edi */
  push32((uint32_t)(EDI));
  /* 11c6cce8 mov edi, dword ptr [esp + 0xc] */
  EDI = (r32((uint32_t)(ESP + 0xc)));
  /* 11c6ccec mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 11c6ccef test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6ccf1 je 0x11c6cd3d */
  if (C.zf) goto L_11c6cd3d;
  /* 11c6ccf3 cmp byte ptr [eax + 8], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6ccf7 lea edx, [eax + 8] */
  EDX = ((uint32_t)(EAX + 0x8));
  /* 11c6ccfa je 0x11c6cd3d */
  if (C.zf) goto L_11c6cd3d;
  /* 11c6ccfc mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 11c6cd00 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 11c6cd03 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6cd05 je 0x11c6cd17 */
  if (C.zf) goto L_11c6cd17;
  /* 11c6cd07 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6cd0a push ecx */
  push32((uint32_t)(ECX));
  /* 11c6cd0b push edx */
  push32((uint32_t)(EDX));
  /* 11c6cd0c call 0x11c6a650 */
  push32(0x11c6cd11u); f_11c6a650();
  /* 11c6cd11 pop ecx */
  ECX = (pop32());
  /* 11c6cd12 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6cd14 pop ecx */
  ECX = (pop32());
  /* 11c6cd15 jne 0x11c6cd39 */
  if (!C.zf) goto L_11c6cd39;
L_11c6cd17:;
  /* 11c6cd17 test byte ptr [esi], 2 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x2u); fl_logic(_r,8); }
  /* 11c6cd1a je 0x11c6cd21 */
  if (C.zf) goto L_11c6cd21;
  /* 11c6cd1c test byte ptr [edi], 8 */
  { uint32_t _r=(r8((uint32_t)(EDI)))&(0x8u); fl_logic(_r,8); }
  /* 11c6cd1f je 0x11c6cd39 */
  if (C.zf) goto L_11c6cd39;
L_11c6cd21:;
  /* 11c6cd21 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 11c6cd25 mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 11c6cd27 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 11c6cd29 je 0x11c6cd30 */
  if (C.zf) goto L_11c6cd30;
  /* 11c6cd2b test byte ptr [edi], 1 */
  { uint32_t _r=(r8((uint32_t)(EDI)))&(0x1u); fl_logic(_r,8); }
  /* 11c6cd2e je 0x11c6cd39 */
  if (C.zf) goto L_11c6cd39;
L_11c6cd30:;
  /* 11c6cd30 test al, 2 */
  { uint32_t _r=(AL)&(0x2u); fl_logic(_r,8); }
  /* 11c6cd32 je 0x11c6cd3d */
  if (C.zf) goto L_11c6cd3d;
  /* 11c6cd34 test byte ptr [edi], 2 */
  { uint32_t _r=(r8((uint32_t)(EDI)))&(0x2u); fl_logic(_r,8); }
  /* 11c6cd37 jne 0x11c6cd3d */
  if (!C.zf) goto L_11c6cd3d;
L_11c6cd39:;
  /* 11c6cd39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 11c6cd3b jmp 0x11c6cd40 */
  goto L_11c6cd40;
L_11c6cd3d:;
  /* 11c6cd3d push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6cd3f pop eax */
  EAX = (pop32());
L_11c6cd40:;
  /* 11c6cd40 pop edi */
  EDI = (pop32());
  /* 11c6cd41 pop esi */
  ESI = (pop32());
  /* 11c6cd42 ret  */
  ESPCHK(0x11c6cce6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cd43 @ 0x11c6cd43 (132 bytes, 56 insns) */
void f_11c6cd43(void) {
  FTRACE(0x11c6cd43u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6cd43 push ebp */
  push32((uint32_t)(EBP));
  /* 11c6cd44 mov ebp, esp */
  EBP = (ESP);
  /* 11c6cd46 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c6cd48 push 0x11c6e960 */
  push32((uint32_t)(0x11c6e960u));
  /* 11c6cd4d push 0x11c68810 */
  push32((uint32_t)(0x11c68810u));
  /* 11c6cd52 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11c6cd58 push eax */
  push32((uint32_t)(EAX));
  /* 11c6cd59 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11c6cd60 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6cd63 push ebx */
  push32((uint32_t)(EBX));
  /* 11c6cd64 push esi */
  push32((uint32_t)(ESI));
  /* 11c6cd65 push edi */
  push32((uint32_t)(EDI));
  /* 11c6cd66 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11c6cd69 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c6cd6c mov esi, dword ptr [ebx + 8] */
  ESI = (r32((uint32_t)(EBX + 0x8)));
  /* 11c6cd6f mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 11c6cd72 mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
L_11c6cd75:;
  /* 11c6cd75 cmp esi, dword ptr [ebp + 0x14] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6cd78 je 0x11c6cdcf */
  if (C.zf) goto L_11c6cdcf;
  /* 11c6cd7a cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6cd7d jle 0x11c6cd84 */
  if ((C.zf||C.sf!=C.of)) goto L_11c6cd84;
  /* 11c6cd7f cmp esi, dword ptr [edi + 4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI + 0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6cd82 jl 0x11c6cd89 */
  if ((C.sf!=C.of)) goto L_11c6cd89;
L_11c6cd84:;
  /* 11c6cd84 call 0x11c6d2bd */
  push32(0x11c6cd89u); f_11c6d2bd();
L_11c6cd89:;
  /* 11c6cd89 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c6cd8d mov eax, dword ptr [edi + 8] */
  EAX = (r32((uint32_t)(EDI + 0x8)));
  /* 11c6cd90 mov eax, dword ptr [eax + esi*8 + 4] */
  EAX = (r32((uint32_t)(EAX + ESI*8 + 0x4)));
  /* 11c6cd94 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6cd96 je 0x11c6cda4 */
  if (C.zf) goto L_11c6cda4;
  /* 11c6cd98 push 0x103 */
  push32((uint32_t)(0x103u));
  /* 11c6cd9d push ebx */
  push32((uint32_t)(EBX));
  /* 11c6cd9e push eax */
  push32((uint32_t)(EAX));
  /* 11c6cd9f call 0x11c6d210 */
  push32(0x11c6cda4u); f_11c6d210();
L_11c6cda4:;
  /* 11c6cda4 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c6cda8 jmp 0x11c6cdc4 */
  goto L_11c6cdc4;
  /* 11c6cdaa push dword ptr [ebp - 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x14))));
  /* 11c6cdad call 0x11c6cde1 */
  call_ind(0x11c6cde1u, 0x11c6cdb2u);
  /* 11c6cdb2 pop ecx */
  ECX = (pop32());
  /* 11c6cdb3 ret  */
  ESPCHK(0x11c6cd43u, _esp0);
  ESP += 4; return;
  /* 11c6cdb4 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11c6cdb7 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c6cdbb mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 11c6cdbe mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c6cdc1 mov esi, dword ptr [ebp - 0x1c] */
  ESI = (r32((uint32_t)(EBP + -0x1c)));
L_11c6cdc4:;
  /* 11c6cdc4 mov eax, dword ptr [edi + 8] */
  EAX = (r32((uint32_t)(EDI + 0x8)));
  /* 11c6cdc7 mov esi, dword ptr [eax + esi*8] */
  ESI = (r32((uint32_t)(EAX + ESI*8)));
  /* 11c6cdca mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 11c6cdcd jmp 0x11c6cd75 */
  goto L_11c6cd75;
L_11c6cdcf:;
  /* 11c6cdcf mov dword ptr [ebx + 8], esi */
  w32((uint32_t)(EBX + 0x8), (ESI));
  /* 11c6cdd2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11c6cdd5 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11c6cddc pop edi */
  EDI = (pop32());
  /* 11c6cddd pop esi */
  ESI = (pop32());
  /* 11c6cdde pop ebx */
  EBX = (pop32());
  /* 11c6cddf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c6cde0 ret  */
  ESPCHK(0x11c6cd43u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cdf7 @ 0x11c6cdf7 (123 bytes, 50 insns) */
void f_11c6cdf7(void) {
  FTRACE(0x11c6cdf7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6cdf7 push ebp */
  push32((uint32_t)(EBP));
  /* 11c6cdf8 mov ebp, esp */
  EBP = (ESP);
  /* 11c6cdfa cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6cdfe push ebx */
  push32((uint32_t)(EBX));
  /* 11c6cdff mov ebx, dword ptr [ebp + 0x1c] */
  EBX = (r32((uint32_t)(EBP + 0x1c)));
  /* 11c6ce02 push esi */
  push32((uint32_t)(ESI));
  /* 11c6ce03 push edi */
  push32((uint32_t)(EDI));
  /* 11c6ce04 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c6ce07 je 0x11c6ce19 */
  if (C.zf) goto L_11c6ce19;
  /* 11c6ce09 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11c6ce0c push ebx */
  push32((uint32_t)(EBX));
  /* 11c6ce0d push edi */
  push32((uint32_t)(EDI));
  /* 11c6ce0e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c6ce11 call 0x11c6cfb7 */
  push32(0x11c6ce16u); f_11c6cfb7();
  /* 11c6ce16 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_11c6ce19:;
  /* 11c6ce19 cmp dword ptr [ebp + 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6ce1d push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c6ce20 jne 0x11c6ce25 */
  if (!C.zf) goto L_11c6ce25;
  /* 11c6ce22 push edi */
  push32((uint32_t)(EDI));
  /* 11c6ce23 jmp 0x11c6ce28 */
  goto L_11c6ce28;
L_11c6ce25:;
  /* 11c6ce25 push dword ptr [ebp + 0x2c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x2c))));
L_11c6ce28:;
  /* 11c6ce28 call 0x11c6c4e3 */
  push32(0x11c6ce2du); f_11c6c4e3();
  /* 11c6ce2d mov esi, dword ptr [ebp + 0x24] */
  ESI = (r32((uint32_t)(EBP + 0x24)));
  /* 11c6ce30 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 11c6ce32 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11c6ce35 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c6ce38 push edi */
  push32((uint32_t)(EDI));
  /* 11c6ce39 call 0x11c6cd43 */
  push32(0x11c6ce3eu); f_11c6cd43();
  /* 11c6ce3e mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 11c6ce41 push 0x100 */
  push32((uint32_t)(0x100u));
  /* 11c6ce46 push dword ptr [ebp + 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x28))));
  /* 11c6ce49 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 11c6ce4a mov dword ptr [edi + 8], eax */
  w32((uint32_t)(EDI + 0x8), (EAX));
  /* 11c6ce4d push dword ptr [ebx + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0xc))));
  /* 11c6ce50 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 11c6ce53 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c6ce56 push edi */
  push32((uint32_t)(EDI));
  /* 11c6ce57 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c6ce5a call 0x11c6ce72 */
  push32(0x11c6ce5fu); f_11c6ce72();
  /* 11c6ce5f add esp, 0x2c */
  { uint32_t _a=(ESP),_b=(0x2cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6ce62 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6ce64 je 0x11c6ce6d */
  if (C.zf) goto L_11c6ce6d;
  /* 11c6ce66 push edi */
  push32((uint32_t)(EDI));
  /* 11c6ce67 push eax */
  push32((uint32_t)(EAX));
  /* 11c6ce68 call 0x11c6c4a1 */
  push32(0x11c6ce6du); f_11c6c4a1();
L_11c6ce6d:;
  /* 11c6ce6d pop edi */
  EDI = (pop32());
  /* 11c6ce6e pop esi */
  ESI = (pop32());
  /* 11c6ce6f pop ebx */
  EBX = (pop32());
  /* 11c6ce70 pop ebp */
  EBP = (pop32());
  /* 11c6ce71 ret  */
  ESPCHK(0x11c6cdf7u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ce72 @ 0x11c6ce72 (165 bytes, 52 insns) */
void f_11c6ce72(void) {
  FTRACE(0x11c6ce72u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6ce72 push ebp */
  push32((uint32_t)(EBP));
  /* 11c6ce73 mov ebp, esp */
  EBP = (ESP);
  /* 11c6ce75 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c6ce77 push 0x11c6e970 */
  push32((uint32_t)(0x11c6e970u));
  /* 11c6ce7c push 0x11c68810 */
  push32((uint32_t)(0x11c68810u));
  /* 11c6ce81 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11c6ce87 push eax */
  push32((uint32_t)(EAX));
  /* 11c6ce88 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11c6ce8f sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6ce92 push ebx */
  push32((uint32_t)(EBX));
  /* 11c6ce93 push esi */
  push32((uint32_t)(ESI));
  /* 11c6ce94 push edi */
  push32((uint32_t)(EDI));
  /* 11c6ce95 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11c6ce98 mov ebx, dword ptr [ebp + 0x18] */
  EBX = (r32((uint32_t)(EBP + 0x18)));
  /* 11c6ce9b mov dword ptr [ebp - 0x2c], ebx */
  w32((uint32_t)(EBP + -0x2c), (EBX));
  /* 11c6ce9e and dword ptr [ebp - 0x24], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x24)))&(0x0u); w32((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,32); }
  /* 11c6cea2 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 11c6cea5 mov eax, dword ptr [esi - 4] */
  EAX = (r32((uint32_t)(ESI + -0x4)));
  /* 11c6cea8 mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 11c6ceab call 0x11c64883 */
  push32(0x11c6ceb0u); f_11c64883();
  /* 11c6ceb0 mov eax, dword ptr [eax + 0x6c] */
  EAX = (r32((uint32_t)(EAX + 0x6c)));
  /* 11c6ceb3 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 11c6ceb6 call 0x11c64883 */
  push32(0x11c6cebbu); f_11c64883();
  /* 11c6cebb mov eax, dword ptr [eax + 0x70] */
  EAX = (r32((uint32_t)(EAX + 0x70)));
  /* 11c6cebe mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 11c6cec1 call 0x11c64883 */
  push32(0x11c6cec6u); f_11c64883();
  /* 11c6cec6 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c6cec9 mov dword ptr [eax + 0x6c], edi */
  w32((uint32_t)(EAX + 0x6c), (EDI));
  /* 11c6cecc call 0x11c64883 */
  push32(0x11c6ced1u); f_11c64883();
  /* 11c6ced1 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c6ced4 mov dword ptr [eax + 0x70], ecx */
  w32((uint32_t)(EAX + 0x70), (ECX));
  /* 11c6ced7 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c6cedb mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11c6cee2 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 11c6cee5 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 11c6cee8 push ebx */
  push32((uint32_t)(EBX));
  /* 11c6cee9 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 11c6ceec push esi */
  push32((uint32_t)(ESI));
  /* 11c6ceed call 0x11c6c568 */
  push32(0x11c6cef2u); f_11c6c568();
  /* 11c6cef2 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6cef5 mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 11c6cef8 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c6cefc or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c6cf00 call 0x11c6cf3f */
  push32(0x11c6cf05u); f_11c6cf3f();
  /* 11c6cf05 mov eax, dword ptr [ebp - 0x2c] */
  EAX = (r32((uint32_t)(EBP + -0x2c)));
  /* 11c6cf08 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11c6cf0b mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11c6cf12 pop edi */
  EDI = (pop32());
  /* 11c6cf13 pop esi */
  ESI = (pop32());
  /* 11c6cf14 pop ebx */
  EBX = (pop32());
  /* 11c6cf15 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c6cf16 ret  */
  ESPCHK(0x11c6ce72u, _esp0);
  ESP += 4; return;
}

/* FUN_1000cf3f @ 0x11c6cf3f (78 bytes, 25 insns) */
void f_11c6cf3f(void) {
  FTRACE(0x11c6cf3fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6cf3f mov eax, dword ptr [ebp - 0x28] */
  EAX = (r32((uint32_t)(EBP + -0x28)));
  /* 11c6cf42 mov dword ptr [esi - 4], eax */
  w32((uint32_t)(ESI + -0x4), (EAX));
  /* 11c6cf45 call 0x11c64883 */
  push32(0x11c6cf4au); f_11c64883();
  /* 11c6cf4a mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 11c6cf4d mov dword ptr [eax + 0x6c], ecx */
  w32((uint32_t)(EAX + 0x6c), (ECX));
  /* 11c6cf50 call 0x11c64883 */
  push32(0x11c6cf55u); f_11c64883();
  /* 11c6cf55 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 11c6cf58 mov dword ptr [eax + 0x70], ecx */
  w32((uint32_t)(EAX + 0x70), (ECX));
  /* 11c6cf5b cmp dword ptr [edi], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6cf61 jne 0x11c6cf8c */
  if (!C.zf) goto L_11c6cf8c;
  /* 11c6cf63 cmp dword ptr [edi + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6cf67 jne 0x11c6cf8c */
  if (!C.zf) goto L_11c6cf8c;
  /* 11c6cf69 cmp dword ptr [edi + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6cf70 jne 0x11c6cf8c */
  if (!C.zf) goto L_11c6cf8c;
  /* 11c6cf72 cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6cf76 jne 0x11c6cf8c */
  if (!C.zf) goto L_11c6cf8c;
  /* 11c6cf78 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6cf7c je 0x11c6cf8c */
  if (C.zf) goto L_11c6cf8c;
  /* 11c6cf7e call 0x11c687c2 */
  push32(0x11c6cf83u); f_11c687c2();
  /* 11c6cf83 push eax */
  push32((uint32_t)(EAX));
  /* 11c6cf84 push edi */
  push32((uint32_t)(EDI));
  /* 11c6cf85 call 0x11c6d17b */
  push32(0x11c6cf8au); f_11c6d17b();
  /* 11c6cf8a pop ecx */
  ECX = (pop32());
  /* 11c6cf8b pop ecx */
  ECX = (pop32());
L_11c6cf8c:;
  /* 11c6cf8c ret  */
  ESPCHK(0x11c6cf3fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000cfb7 @ 0x11c6cfb7 (440 bytes, 164 insns) */
void f_11c6cfb7(void) {
  FTRACE(0x11c6cfb7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6cfb7 push ebp */
  push32((uint32_t)(EBP));
  /* 11c6cfb8 mov ebp, esp */
  EBP = (ESP);
  /* 11c6cfba push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c6cfbc push 0x11c6e988 */
  push32((uint32_t)(0x11c6e988u));
  /* 11c6cfc1 push 0x11c68810 */
  push32((uint32_t)(0x11c68810u));
  /* 11c6cfc6 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11c6cfcc push eax */
  push32((uint32_t)(EAX));
  /* 11c6cfcd mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11c6cfd4 sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6cfd7 push ebx */
  push32((uint32_t)(EBX));
  /* 11c6cfd8 push esi */
  push32((uint32_t)(ESI));
  /* 11c6cfd9 push edi */
  push32((uint32_t)(EDI));
  /* 11c6cfda mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11c6cfdd mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c6cfe0 mov eax, dword ptr [ecx + 4] */
  EAX = (r32((uint32_t)(ECX + 0x4)));
  /* 11c6cfe3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6cfe5 je 0x11c6d160 */
  if (C.zf) goto L_11c6d160;
  /* 11c6cfeb cmp byte ptr [eax + 8], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 11c6cfef je 0x11c6d160 */
  if (C.zf) goto L_11c6d160;
  /* 11c6cff5 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 11c6cff8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6cffa je 0x11c6d160 */
  if (C.zf) goto L_11c6d160;
  /* 11c6d000 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c6d003 lea edi, [eax + edx + 0xc] */
  EDI = ((uint32_t)(EAX + EDX*1 + 0xc));
  /* 11c6d007 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c6d00b test byte ptr [ecx], 8 */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(0x8u); fl_logic(_r,8); }
  /* 11c6d00e je 0x11c6d054 */
  if (C.zf) goto L_11c6d054;
  /* 11c6d010 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 11c6d013 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6d015 push dword ptr [esi + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x18))));
  /* 11c6d018 call 0x11c6d377 */
  push32(0x11c6d01du); f_11c6d377();
  /* 11c6d01d pop ecx */
  ECX = (pop32());
  /* 11c6d01e pop ecx */
  ECX = (pop32());
  /* 11c6d01f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6d021 je 0x11c6d157 */
  if (C.zf) goto L_11c6d157;
  /* 11c6d027 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6d029 push edi */
  push32((uint32_t)(EDI));
  /* 11c6d02a call 0x11c6d393 */
  push32(0x11c6d02fu); f_11c6d393();
  /* 11c6d02f pop ecx */
  ECX = (pop32());
  /* 11c6d030 pop ecx */
  ECX = (pop32());
  /* 11c6d031 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6d033 je 0x11c6d157 */
  if (C.zf) goto L_11c6d157;
  /* 11c6d039 mov eax, dword ptr [esi + 0x18] */
  EAX = (r32((uint32_t)(ESI + 0x18)));
  /* 11c6d03c mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11c6d03e mov ecx, dword ptr [ebp + 0x14] */
  ECX = (r32((uint32_t)(EBP + 0x14)));
  /* 11c6d041 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6d044 push ecx */
  push32((uint32_t)(ECX));
L_11c6d045:;
  /* 11c6d045 push eax */
  push32((uint32_t)(EAX));
  /* 11c6d046 call 0x11c6d1e2 */
  push32(0x11c6d04bu); f_11c6d1e2();
  /* 11c6d04b pop ecx */
  ECX = (pop32());
  /* 11c6d04c pop ecx */
  ECX = (pop32());
  /* 11c6d04d mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 11c6d04f jmp 0x11c6d15c */
  goto L_11c6d15c;
L_11c6d054:;
  /* 11c6d054 mov esi, dword ptr [ebp + 0x14] */
  ESI = (r32((uint32_t)(EBP + 0x14)));
  /* 11c6d057 test byte ptr [esi], 1 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x1u); fl_logic(_r,8); }
  /* 11c6d05a je 0x11c6d0ae */
  if (C.zf) goto L_11c6d0ae;
  /* 11c6d05c mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c6d05f push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6d061 push dword ptr [ebx + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0x18))));
  /* 11c6d064 call 0x11c6d377 */
  push32(0x11c6d069u); f_11c6d377();
  /* 11c6d069 pop ecx */
  ECX = (pop32());
  /* 11c6d06a pop ecx */
  ECX = (pop32());
  /* 11c6d06b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6d06d je 0x11c6d157 */
  if (C.zf) goto L_11c6d157;
  /* 11c6d073 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6d075 push edi */
  push32((uint32_t)(EDI));
  /* 11c6d076 call 0x11c6d393 */
  push32(0x11c6d07bu); f_11c6d393();
  /* 11c6d07b pop ecx */
  ECX = (pop32());
  /* 11c6d07c pop ecx */
  ECX = (pop32());
  /* 11c6d07d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6d07f je 0x11c6d157 */
  if (C.zf) goto L_11c6d157;
  /* 11c6d085 push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 11c6d088 push dword ptr [ebx + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0x18))));
  /* 11c6d08b push edi */
  push32((uint32_t)(EDI));
  /* 11c6d08c call 0x11c664f0 */
  push32(0x11c6d091u); f_11c664f0();
  /* 11c6d091 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6d094 cmp dword ptr [esi + 0x14], 4 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x14))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6d098 jne 0x11c6d15c */
  if (!C.zf) goto L_11c6d15c;
  /* 11c6d09e mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 11c6d0a0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6d0a2 je 0x11c6d15c */
  if (C.zf) goto L_11c6d15c;
  /* 11c6d0a8 add esi, 8 */
  { uint32_t _a=(ESI),_b=(0x8u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6d0ab push esi */
  push32((uint32_t)(ESI));
  /* 11c6d0ac jmp 0x11c6d045 */
  goto L_11c6d045;
L_11c6d0ae:;
  /* 11c6d0ae cmp dword ptr [esi + 0x18], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x18))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6d0b2 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c6d0b5 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6d0b7 push dword ptr [ebx + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0x18))));
  /* 11c6d0ba jne 0x11c6d0f6 */
  if (!C.zf) goto L_11c6d0f6;
  /* 11c6d0bc call 0x11c6d377 */
  push32(0x11c6d0c1u); f_11c6d377();
  /* 11c6d0c1 pop ecx */
  ECX = (pop32());
  /* 11c6d0c2 pop ecx */
  ECX = (pop32());
  /* 11c6d0c3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6d0c5 je 0x11c6d157 */
  if (C.zf) goto L_11c6d157;
  /* 11c6d0cb push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6d0cd push edi */
  push32((uint32_t)(EDI));
  /* 11c6d0ce call 0x11c6d393 */
  push32(0x11c6d0d3u); f_11c6d393();
  /* 11c6d0d3 pop ecx */
  ECX = (pop32());
  /* 11c6d0d4 pop ecx */
  ECX = (pop32());
  /* 11c6d0d5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6d0d7 je 0x11c6d157 */
  if (C.zf) goto L_11c6d157;
  /* 11c6d0d9 push dword ptr [esi + 0x14] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x14))));
  /* 11c6d0dc add esi, 8 */
  { uint32_t _a=(ESI),_b=(0x8u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6d0df push esi */
  push32((uint32_t)(ESI));
  /* 11c6d0e0 push dword ptr [ebx + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0x18))));
  /* 11c6d0e3 call 0x11c6d1e2 */
  push32(0x11c6d0e8u); f_11c6d1e2();
  /* 11c6d0e8 pop ecx */
  ECX = (pop32());
  /* 11c6d0e9 pop ecx */
  ECX = (pop32());
  /* 11c6d0ea push eax */
  push32((uint32_t)(EAX));
  /* 11c6d0eb push edi */
  push32((uint32_t)(EDI));
  /* 11c6d0ec call 0x11c664f0 */
  push32(0x11c6d0f1u); f_11c664f0();
  /* 11c6d0f1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6d0f4 jmp 0x11c6d15c */
  goto L_11c6d15c;
L_11c6d0f6:;
  /* 11c6d0f6 call 0x11c6d377 */
  push32(0x11c6d0fbu); f_11c6d377();
  /* 11c6d0fb pop ecx */
  ECX = (pop32());
  /* 11c6d0fc pop ecx */
  ECX = (pop32());
  /* 11c6d0fd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6d0ff je 0x11c6d157 */
  if (C.zf) goto L_11c6d157;
  /* 11c6d101 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6d103 push edi */
  push32((uint32_t)(EDI));
  /* 11c6d104 call 0x11c6d393 */
  push32(0x11c6d109u); f_11c6d393();
  /* 11c6d109 pop ecx */
  ECX = (pop32());
  /* 11c6d10a pop ecx */
  ECX = (pop32());
  /* 11c6d10b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6d10d je 0x11c6d157 */
  if (C.zf) goto L_11c6d157;
  /* 11c6d10f push dword ptr [esi + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x18))));
  /* 11c6d112 call 0x11c6d3af */
  push32(0x11c6d117u); f_11c6d3af();
  /* 11c6d117 pop ecx */
  ECX = (pop32());
  /* 11c6d118 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6d11a je 0x11c6d157 */
  if (C.zf) goto L_11c6d157;
  /* 11c6d11c test byte ptr [esi], 4 */
  { uint32_t _r=(r8((uint32_t)(ESI)))&(0x4u); fl_logic(_r,8); }
  /* 11c6d11f je 0x11c6d13d */
  if (C.zf) goto L_11c6d13d;
  /* 11c6d121 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6d123 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 11c6d126 push eax */
  push32((uint32_t)(EAX));
  /* 11c6d127 push dword ptr [ebx + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0x18))));
  /* 11c6d12a call 0x11c6d1e2 */
  push32(0x11c6d12fu); f_11c6d1e2();
  /* 11c6d12f pop ecx */
  ECX = (pop32());
  /* 11c6d130 pop ecx */
  ECX = (pop32());
  /* 11c6d131 push eax */
  push32((uint32_t)(EAX));
  /* 11c6d132 push dword ptr [esi + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x18))));
  /* 11c6d135 push edi */
  push32((uint32_t)(EDI));
  /* 11c6d136 call 0x11c6c4dc */
  push32(0x11c6d13bu); f_11c6c4dc();
  /* 11c6d13b jmp 0x11c6d15c */
  goto L_11c6d15c;
L_11c6d13d:;
  /* 11c6d13d lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 11c6d140 push eax */
  push32((uint32_t)(EAX));
  /* 11c6d141 push dword ptr [ebx + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBX + 0x18))));
  /* 11c6d144 call 0x11c6d1e2 */
  push32(0x11c6d149u); f_11c6d1e2();
  /* 11c6d149 pop ecx */
  ECX = (pop32());
  /* 11c6d14a pop ecx */
  ECX = (pop32());
  /* 11c6d14b push eax */
  push32((uint32_t)(EAX));
  /* 11c6d14c push dword ptr [esi + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x18))));
  /* 11c6d14f push edi */
  push32((uint32_t)(EDI));
  /* 11c6d150 call 0x11c6c4d5 */
  push32(0x11c6d155u); f_11c6c4d5();
  /* 11c6d155 jmp 0x11c6d15c */
  goto L_11c6d15c;
L_11c6d157:;
  /* 11c6d157 call 0x11c6d2bd */
  push32(0x11c6d15cu); f_11c6d2bd();
L_11c6d15c:;
  /* 11c6d15c or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_11c6d160:;
  /* 11c6d160 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11c6d163 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11c6d16a pop edi */
  EDI = (pop32());
  /* 11c6d16b pop esi */
  ESI = (pop32());
  /* 11c6d16c pop ebx */
  EBX = (pop32());
  /* 11c6d16d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c6d16e ret  */
  ESPCHK(0x11c6cfb7u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d17b @ 0x11c6d17b (86 bytes, 33 insns) */
void f_11c6d17b(void) {
  FTRACE(0x11c6d17bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6d17b push ebp */
  push32((uint32_t)(EBP));
  /* 11c6d17c mov ebp, esp */
  EBP = (ESP);
  /* 11c6d17e push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c6d180 push 0x11c6e998 */
  push32((uint32_t)(0x11c6e998u));
  /* 11c6d185 push 0x11c68810 */
  push32((uint32_t)(0x11c68810u));
  /* 11c6d18a mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11c6d190 push eax */
  push32((uint32_t)(EAX));
  /* 11c6d191 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11c6d198 push ecx */
  push32((uint32_t)(ECX));
  /* 11c6d199 push ecx */
  push32((uint32_t)(ECX));
  /* 11c6d19a push ebx */
  push32((uint32_t)(EBX));
  /* 11c6d19b push esi */
  push32((uint32_t)(ESI));
  /* 11c6d19c push edi */
  push32((uint32_t)(EDI));
  /* 11c6d19d mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11c6d1a0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c6d1a3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6d1a5 je 0x11c6d1c2 */
  if (C.zf) goto L_11c6d1c2;
  /* 11c6d1a7 mov ecx, dword ptr [eax + 0x1c] */
  ECX = (r32((uint32_t)(EAX + 0x1c)));
  /* 11c6d1aa mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 11c6d1ad test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 11c6d1af je 0x11c6d1c2 */
  if (C.zf) goto L_11c6d1c2;
  /* 11c6d1b1 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c6d1b5 push ecx */
  push32((uint32_t)(ECX));
  /* 11c6d1b6 push dword ptr [eax + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x18))));
  /* 11c6d1b9 call 0x11c6c4d5 */
  push32(0x11c6d1beu); f_11c6c4d5();
  /* 11c6d1be or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_11c6d1c2:;
  /* 11c6d1c2 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11c6d1c5 mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 11c6d1cc pop edi */
  EDI = (pop32());
  /* 11c6d1cd pop esi */
  ESI = (pop32());
  /* 11c6d1ce pop ebx */
  EBX = (pop32());
  /* 11c6d1cf leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c6d1d0 ret  */
  ESPCHK(0x11c6d17bu, _esp0);
  ESP += 4; return;
}

/* FUN_1000d1e2 @ 0x11c6d1e2 (35 bytes, 15 insns) */
void f_11c6d1e2(void) {
  FTRACE(0x11c6d1e2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6d1e2 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 11c6d1e6 push esi */
  push32((uint32_t)(ESI));
  /* 11c6d1e7 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c6d1eb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 11c6d1ed mov edx, dword ptr [ecx + 4] */
  EDX = (r32((uint32_t)(ECX + 0x4)));
  /* 11c6d1f0 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6d1f2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 11c6d1f4 jl 0x11c6d203 */
  if ((C.sf!=C.of)) goto L_11c6d203;
  /* 11c6d1f6 mov esi, dword ptr [edx + esi] */
  ESI = (r32((uint32_t)(EDX + ESI*1)));
  /* 11c6d1f9 mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 11c6d1fc mov ecx, dword ptr [esi + ecx] */
  ECX = (r32((uint32_t)(ESI + ECX*1)));
  /* 11c6d1ff add ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6d201 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_11c6d203:;
  /* 11c6d203 pop esi */
  ESI = (pop32());
  /* 11c6d204 ret  */
  ESPCHK(0x11c6d1e2u, _esp0);
  ESP += 4; return;
}

/* __CallSettingFrame@12 @ 0x11c6d210 (76 bytes, 34 insns) */
void f_11c6d210(void) {
  FTRACE(0x11c6d210u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6d210 push ebp */
  push32((uint32_t)(EBP));
  /* 11c6d211 mov ebp, esp */
  EBP = (ESP);
  /* 11c6d213 sub esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6d216 push ebx */
  push32((uint32_t)(EBX));
  /* 11c6d217 push ecx */
  push32((uint32_t)(ECX));
  /* 11c6d218 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 11c6d21b add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6d21e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 11c6d221 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 11c6d224 push ebp */
  push32((uint32_t)(EBP));
  /* 11c6d225 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 11c6d228 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c6d22b mov ebp, dword ptr [ebp - 4] */
  EBP = (r32((uint32_t)(EBP + -0x4)));
  /* 11c6d22e call 0x11c687e5 */
  push32(0x11c6d233u); f_11c687e5();
  /* 11c6d233 push esi */
  push32((uint32_t)(ESI));
  /* 11c6d234 push edi */
  push32((uint32_t)(EDI));
  /* 11c6d235 call eax */
  call_ind((uint32_t)(EAX), 0x11c6d237u);
  /* 11c6d237 pop edi */
  EDI = (pop32());
  /* 11c6d238 pop esi */
  ESI = (pop32());
  /* 11c6d239 mov ebx, ebp */
  EBX = (EBP);
  /* 11c6d23b pop ebp */
  EBP = (pop32());
  /* 11c6d23c mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 11c6d23f push ebp */
  push32((uint32_t)(EBP));
  /* 11c6d240 mov ebp, ebx */
  EBP = (EBX);
  /* 11c6d242 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6d248 jne 0x11c6d24f */
  if (!C.zf) goto L_11c6d24f;
  /* 11c6d24a mov ecx, 2 */
  ECX = (0x2u);
L_11c6d24f:;
  /* 11c6d24f push ecx */
  push32((uint32_t)(ECX));
  /* 11c6d250 call 0x11c687e5 */
  push32(0x11c6d255u); f_11c687e5();
  /* 11c6d255 pop ebp */
  EBP = (pop32());
  /* 11c6d256 pop ecx */
  ECX = (pop32());
  /* 11c6d257 pop ebx */
  EBX = (pop32());
  /* 11c6d258 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 11c6d259 ret 0xc */
  ESPCHK(0x11c6d210u, _esp0);
  ESP += 16; return;
}

/* FUN_1000d25c @ 0x11c6d25c (86 bytes, 32 insns) */
void f_11c6d25c(void) {
  FTRACE(0x11c6d25cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6d25c push ebp */
  push32((uint32_t)(EBP));
  /* 11c6d25d mov ebp, esp */
  EBP = (ESP);
  /* 11c6d25f push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c6d261 push 0x11c6e9a8 */
  push32((uint32_t)(0x11c6e9a8u));
  /* 11c6d266 push 0x11c68810 */
  push32((uint32_t)(0x11c68810u));
  /* 11c6d26b mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11c6d271 push eax */
  push32((uint32_t)(EAX));
  /* 11c6d272 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11c6d279 push ecx */
  push32((uint32_t)(ECX));
  /* 11c6d27a push ecx */
  push32((uint32_t)(ECX));
  /* 11c6d27b push ebx */
  push32((uint32_t)(EBX));
  /* 11c6d27c push esi */
  push32((uint32_t)(ESI));
  /* 11c6d27d push edi */
  push32((uint32_t)(EDI));
  /* 11c6d27e mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11c6d281 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 11c6d283 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 11c6d286 call 0x11c64883 */
  push32(0x11c6d28bu); f_11c64883();
  /* 11c6d28b cmp dword ptr [eax + 0x60], esi */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x60))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6d28e je 0x11c6d2af */
  if (C.zf) goto L_11c6d2af;
  /* 11c6d290 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11c6d297 call 0x11c64883 */
  push32(0x11c6d29cu); f_11c64883();
  /* 11c6d29c call dword ptr [eax + 0x60] */
  call_ind((uint32_t)(r32((uint32_t)(EAX + 0x60))), 0x11c6d29fu);
  /* 11c6d29f mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 11c6d2a2 jmp 0x11c6d2af */
  goto L_11c6d2af;
  /* 11c6d2a4 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6d2a6 pop eax */
  EAX = (pop32());
  /* 11c6d2a7 ret  */
  ESPCHK(0x11c6d25cu, _esp0);
  ESP += 4; return;
  /* 11c6d2a8 mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 11c6d2ab and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_11c6d2af:;
  /* 11c6d2af or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c6d2b3 call 0x11c6d2b8 */
  call_ind(0x11c6d2b8u, 0x11c6d2b8u);
  /* 11c6d2b8 jmp 0x11c6d3c7 */
  f_11c6d3c7(); return;
}

/* FUN_1000d2bd @ 0x11c6d2bd (79 bytes, 29 insns) */
void f_11c6d2bd(void) {
  FTRACE(0x11c6d2bdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6d2bd push ebp */
  push32((uint32_t)(EBP));
  /* 11c6d2be mov ebp, esp */
  EBP = (ESP);
  /* 11c6d2c0 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 11c6d2c2 push 0x11c6e9c0 */
  push32((uint32_t)(0x11c6e9c0u));
  /* 11c6d2c7 push 0x11c68810 */
  push32((uint32_t)(0x11c68810u));
  /* 11c6d2cc mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 11c6d2d2 push eax */
  push32((uint32_t)(EAX));
  /* 11c6d2d3 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 11c6d2da push ecx */
  push32((uint32_t)(ECX));
  /* 11c6d2db push ecx */
  push32((uint32_t)(ECX));
  /* 11c6d2dc push ebx */
  push32((uint32_t)(EBX));
  /* 11c6d2dd push esi */
  push32((uint32_t)(ESI));
  /* 11c6d2de push edi */
  push32((uint32_t)(EDI));
  /* 11c6d2df mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 11c6d2e2 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c6d2e6 mov eax, dword ptr [0x11c736e0] */
  EAX = (r32((uint32_t)(0x11c736e0)));
  /* 11c6d2eb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6d2ed je 0x11c6d305 */
  if (C.zf) goto L_11c6d305;
  /* 11c6d2ef mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 11c6d2f6 call eax */
  call_ind((uint32_t)(EAX), 0x11c6d2f8u);
  /* 11c6d2f8 jmp 0x11c6d301 */
  goto L_11c6d301;
  /* 11c6d2fa push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6d2fc pop eax */
  EAX = (pop32());
  /* 11c6d2fd ret  */
  ESPCHK(0x11c6d2bdu, _esp0);
  ESP += 4; return;
  /* 11c6d2fe mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
L_11c6d301:;
  /* 11c6d301 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
L_11c6d305:;
  /* 11c6d305 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 11c6d309 call 0x11c6d30e */
  call_ind(0x11c6d30eu, 0x11c6d30eu);
  /* 11c6d30e jmp 0x11c6d25c */
  f_11c6d25c(); return;
}

/* FUN_1000d313 @ 0x11c6d313 (70 bytes, 24 insns) */
void f_11c6d313(void) {
  FTRACE(0x11c6d313u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6d313 push esi */
  push32((uint32_t)(ESI));
  /* 11c6d314 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 11c6d318 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 11c6d31a cmp dword ptr [eax], 0xe06d7363 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xe06d7363u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6d320 jne 0x11c6d336 */
  if (!C.zf) goto L_11c6d336;
  /* 11c6d322 cmp dword ptr [eax + 0x10], 3 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x10))),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6d326 jne 0x11c6d336 */
  if (!C.zf) goto L_11c6d336;
  /* 11c6d328 cmp dword ptr [eax + 0x14], 0x19930520 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x14))),_b=(0x19930520u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 11c6d32f jne 0x11c6d336 */
  if (!C.zf) goto L_11c6d336;
  /* 11c6d331 jmp 0x11c6d25c */
  f_11c6d25c(); return;
L_11c6d336:;
  /* 11c6d336 mov eax, dword ptr [0x11c87be0] */
  EAX = (r32((uint32_t)(0x11c87be0)));
  /* 11c6d33b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6d33d je 0x11c6d353 */
  if (C.zf) goto L_11c6d353;
  /* 11c6d33f push eax */
  push32((uint32_t)(EAX));
  /* 11c6d340 call 0x11c6d3af */
  push32(0x11c6d345u); f_11c6d3af();
  /* 11c6d345 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6d347 pop ecx */
  ECX = (pop32());
  /* 11c6d348 je 0x11c6d353 */
  if (C.zf) goto L_11c6d353;
  /* 11c6d34a push esi */
  push32((uint32_t)(ESI));
  /* 11c6d34b call dword ptr [0x11c87be0] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c87be0))), 0x11c6d351u);
  /* 11c6d351 jmp 0x11c6d355 */
  goto L_11c6d355;
L_11c6d353:;
  /* 11c6d353 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_11c6d355:;
  /* 11c6d355 pop esi */
  ESI = (pop32());
  /* 11c6d356 ret 4 */
  ESPCHK(0x11c6d313u, _esp0);
  ESP += 8; return;
}

/* FUN_1000d377 @ 0x11c6d377 (28 bytes, 12 insns) */
void f_11c6d377(void) {
  FTRACE(0x11c6d377u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6d377 push esi */
  push32((uint32_t)(ESI));
  /* 11c6d378 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6d37a pop esi */
  ESI = (pop32());
  /* 11c6d37b push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11c6d37f push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11c6d383 call dword ptr [0x11c6e00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e00c))), 0x11c6d389u);
  /* 11c6d389 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6d38b je 0x11c6d38f */
  if (C.zf) goto L_11c6d38f;
  /* 11c6d38d xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11c6d38f:;
  /* 11c6d38f mov eax, esi */
  EAX = (ESI);
  /* 11c6d391 pop esi */
  ESI = (pop32());
  /* 11c6d392 ret  */
  ESPCHK(0x11c6d377u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d393 @ 0x11c6d393 (28 bytes, 12 insns) */
void f_11c6d393(void) {
  FTRACE(0x11c6d393u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6d393 push esi */
  push32((uint32_t)(ESI));
  /* 11c6d394 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6d396 pop esi */
  ESI = (pop32());
  /* 11c6d397 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11c6d39b push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 11c6d39f call dword ptr [0x11c6e05c] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e05c))), 0x11c6d3a5u);
  /* 11c6d3a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6d3a7 je 0x11c6d3ab */
  if (C.zf) goto L_11c6d3ab;
  /* 11c6d3a9 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11c6d3ab:;
  /* 11c6d3ab mov eax, esi */
  EAX = (ESI);
  /* 11c6d3ad pop esi */
  ESI = (pop32());
  /* 11c6d3ae ret  */
  ESPCHK(0x11c6d393u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3af @ 0x11c6d3af (24 bytes, 11 insns) */
void f_11c6d3af(void) {
  FTRACE(0x11c6d3afu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6d3af push esi */
  push32((uint32_t)(ESI));
  /* 11c6d3b0 push 1 */
  push32((uint32_t)(0x1u));
  /* 11c6d3b2 pop esi */
  ESI = (pop32());
  /* 11c6d3b3 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 11c6d3b7 call dword ptr [0x11c6e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x11c6e008))), 0x11c6d3bdu);
  /* 11c6d3bd test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6d3bf je 0x11c6d3c3 */
  if (C.zf) goto L_11c6d3c3;
  /* 11c6d3c1 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_11c6d3c3:;
  /* 11c6d3c3 mov eax, esi */
  EAX = (ESI);
  /* 11c6d3c5 pop esi */
  ESI = (pop32());
  /* 11c6d3c6 ret  */
  ESPCHK(0x11c6d3afu, _esp0);
  ESP += 4; return;
}

/* FUN_1000d3c7 @ 0x11c6d3c7 (23 bytes, 10 insns) */
void f_11c6d3c7(void) {
  FTRACE(0x11c6d3c7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6d3c7 push 0xa */
  push32((uint32_t)(0xau));
  /* 11c6d3c9 call 0x11c659bc */
  push32(0x11c6d3ceu); f_11c659bc();
  /* 11c6d3ce push 0x16 */
  push32((uint32_t)(0x16u));
  /* 11c6d3d0 call 0x11c6975e */
  push32(0x11c6d3d5u); f_11c6975e();
  /* 11c6d3d5 pop ecx */
  ECX = (pop32());
  /* 11c6d3d6 pop ecx */
  ECX = (pop32());
  /* 11c6d3d7 push 3 */
  push32((uint32_t)(0x3u));
  /* 11c6d3d9 call 0x11c64a79 */
  push32(0x11c6d3deu); f_11c64a79();
  /* 11c6d3de int3  */
  x86_unimpl("int3 @ 0x11c6d3de");
  /* 11c6d3df int3  */
  x86_unimpl("int3 @ 0x11c6d3df");
}

/* Unwind@1000d3e0 @ 0x11c6d3e0 (26 bytes, 8 insns) */
void f_11c6d3e0(void) {
  FTRACE(0x11c6d3e0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6d3e0 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11c6d3e3 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11c6d3e6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6d3e8 je 0x11c6d3f9 */
  if (C.zf) goto L_11c6d3f9;
  /* 11c6d3ee mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11c6d3f1 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6d3f4 jmp 0x11c6badf */
  f_11c6badf(); return;
L_11c6d3f9:;
  /* 11c6d3f9 ret  */
  ESPCHK(0x11c6d3e0u, _esp0);
  ESP += 4; return;
}

/* Unwind@1000d3fa @ 0x11c6d3fa (10 bytes, 4 insns) */
void f_11c6d3fa(void) {
  FTRACE(0x11c6d3fau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6d3fa push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 11c6d3fd call 0x11c6c43d */
  push32(0x11c6d402u); f_11c6c43d();
  /* 11c6d402 pop ecx */
  ECX = (pop32());
  /* 11c6d403 ret  */
  ESPCHK(0x11c6d3fau, _esp0);
  ESP += 4; return;
}

/* Unwind@1000d410 @ 0x11c6d410 (26 bytes, 8 insns) */
void f_11c6d410(void) {
  FTRACE(0x11c6d410u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6d410 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11c6d413 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11c6d416 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6d418 je 0x11c6d429 */
  if (C.zf) goto L_11c6d429;
  /* 11c6d41e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11c6d421 add ecx, 0x14 */
  { uint32_t _a=(ECX),_b=(0x14u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6d424 jmp 0x11c6badf */
  f_11c6badf(); return;
L_11c6d429:;
  /* 11c6d429 ret  */
  ESPCHK(0x11c6d410u, _esp0);
  ESP += 4; return;
}

/* Unwind@1000d42a @ 0x11c6d42a (11 bytes, 3 insns) */
void f_11c6d42a(void) {
  FTRACE(0x11c6d42au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6d42a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11c6d42d add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6d430 jmp 0x11c6c0b8 */
  f_11c6c0b8(); return;
}

/* Unwind@1000d440 @ 0x11c6d440 (11 bytes, 3 insns) */
void f_11c6d440(void) {
  FTRACE(0x11c6d440u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6d440 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11c6d443 sub ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 11c6d446 jmp 0x11c6c0b8 */
  f_11c6c0b8(); return;
}

/* Unwind@1000d458 @ 0x11c6d458 (8 bytes, 2 insns) */
void f_11c6d458(void) {
  FTRACE(0x11c6d458u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6d458 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 11c6d45b jmp 0x11c6c1e6 */
  f_11c6c1e6(); return;
}

/* Unwind@1000d46c @ 0x11c6d46c (26 bytes, 8 insns) */
void f_11c6d46c(void) {
  FTRACE(0x11c6d46cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6d46c mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11c6d46f and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11c6d472 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6d474 je 0x11c6d485 */
  if (C.zf) goto L_11c6d485;
  /* 11c6d47a mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11c6d47d add ecx, 0xc */
  { uint32_t _a=(ECX),_b=(0xcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6d480 jmp 0x11c6badf */
  f_11c6badf(); return;
L_11c6d485:;
  /* 11c6d485 ret  */
  ESPCHK(0x11c6d46cu, _esp0);
  ESP += 4; return;
}

/* Unwind@1000d490 @ 0x11c6d490 (26 bytes, 8 insns) */
void f_11c6d490(void) {
  FTRACE(0x11c6d490u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 11c6d490 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 11c6d493 and eax, 1 */
  { uint32_t _r=(EAX)&(0x1u); EAX = (_r); fl_logic(_r,32); }
  /* 11c6d496 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 11c6d498 je 0x11c6d4a9 */
  if (C.zf) goto L_11c6d4a9;
  /* 11c6d49e mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 11c6d4a1 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 11c6d4a4 jmp 0x11c6badf */
  f_11c6badf(); return;
L_11c6d4a9:;
  /* 11c6d4a9 ret  */
  ESPCHK(0x11c6d490u, _esp0);
  ESP += 4; return;
}

