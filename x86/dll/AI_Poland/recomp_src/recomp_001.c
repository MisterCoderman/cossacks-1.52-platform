#include "recomp.h"

/* FUN_100092a5 @ 0x101092a5 (53 bytes, 25 insns) */
void f_101092a5(void) {
  FTRACE(0x101092a5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101092a5 push ebp */
  push32((uint32_t)(EBP));
  /* 101092a6 mov ebp, esp */
  EBP = (ESP);
  /* 101092a8 push ecx */
  push32((uint32_t)(ECX));
  /* 101092a9 push esi */
  push32((uint32_t)(ESI));
  /* 101092aa wait  */
  /* wait (no observable integer/reg state) */
  /* 101092ab fnstcw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), C.fcw);
  /* 101092ae push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 101092b1 call 0x101092f0 */
  push32(0x101092b6u); f_101092f0();
  /* 101092b6 mov esi, eax */
  ESI = (EAX);
  /* 101092b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 101092bb not eax */
  EAX = (~(EAX));
  /* 101092bd and esi, eax */
  { uint32_t _r=(ESI)&(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 101092bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101092c2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 101092c5 or esi, eax */
  { uint32_t _r=(ESI)|(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 101092c7 push esi */
  push32((uint32_t)(ESI));
  /* 101092c8 call 0x10109382 */
  push32(0x101092cdu); f_10109382();
  /* 101092cd pop ecx */
  ECX = (pop32());
  /* 101092ce mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 101092d1 pop ecx */
  ECX = (pop32());
  /* 101092d2 fldcw word ptr [ebp + 0xc] */
  C.fcw = r16((uint32_t)(EBP + 0xc));
  /* 101092d5 mov eax, esi */
  EAX = (ESI);
  /* 101092d7 pop esi */
  ESI = (pop32());
  /* 101092d8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101092d9 ret  */
  ESPCHK(0x101092a5u, _esp0);
  ESP += 4; return;
}

/* FUN_100092da @ 0x101092da (22 bytes, 8 insns) */
void f_101092da(void) {
  FTRACE(0x101092dau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101092da mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101092de and eax, 0xfff7ffff */
  { uint32_t _r=(EAX)&(0xfff7ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 101092e3 push eax */
  push32((uint32_t)(EAX));
  /* 101092e4 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 101092e8 call 0x101092a5 */
  push32(0x101092edu); f_101092a5();
  /* 101092ed pop ecx */
  ECX = (pop32());
  /* 101092ee pop ecx */
  ECX = (pop32());
  /* 101092ef ret  */
  ESPCHK(0x101092dau, _esp0);
  ESP += 4; return;
}

/* FUN_100092f0 @ 0x101092f0 (146 bytes, 58 insns) */
void f_101092f0(void) {
  FTRACE(0x101092f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101092f0 push ebx */
  push32((uint32_t)(EBX));
  /* 101092f1 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 101092f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101092f7 push ebp */
  push32((uint32_t)(EBP));
  /* 101092f8 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 101092fb push edi */
  push32((uint32_t)(EDI));
  /* 101092fc je 0x10109301 */
  if (C.zf) goto L_10109301;
  /* 101092fe push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10109300 pop eax */
  EAX = (pop32());
L_10109301:;
  /* 10109301 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 10109304 je 0x10109308 */
  if (C.zf) goto L_10109308;
  /* 10109306 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_10109308:;
  /* 10109308 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 1010930b je 0x1010930f */
  if (C.zf) goto L_1010930f;
  /* 1010930d or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_1010930f:;
  /* 1010930f test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 10109312 je 0x10109316 */
  if (C.zf) goto L_10109316;
  /* 10109314 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_10109316:;
  /* 10109316 test bl, 0x20 */
  { uint32_t _r=(BL)&(0x20u); fl_logic(_r,8); }
  /* 10109319 je 0x1010931d */
  if (C.zf) goto L_1010931d;
  /* 1010931b or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
L_1010931d:;
  /* 1010931d test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 10109320 je 0x10109327 */
  if (C.zf) goto L_10109327;
  /* 10109322 or eax, 0x80000 */
  { uint32_t _r=(EAX)|(0x80000u); EAX = (_r); fl_logic(_r,32); }
L_10109327:;
  /* 10109327 movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 1010932a push esi */
  push32((uint32_t)(ESI));
  /* 1010932b mov edx, ecx */
  EDX = (ECX);
  /* 1010932d mov esi, 0xc00 */
  ESI = (0xc00u);
  /* 10109332 mov edi, 0x300 */
  EDI = (0x300u);
  /* 10109337 and edx, esi */
  { uint32_t _r=(EDX)&(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 10109339 mov ebp, 0x200 */
  EBP = (0x200u);
  /* 1010933e je 0x1010935f */
  if (C.zf) goto L_1010935f;
  /* 10109340 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10109346 je 0x1010935c */
  if (C.zf) goto L_1010935c;
  /* 10109348 cmp edx, 0x800 */
  { uint32_t _a=(EDX),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010934e je 0x10109358 */
  if (C.zf) goto L_10109358;
  /* 10109350 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10109352 jne 0x1010935f */
  if (!C.zf) goto L_1010935f;
  /* 10109354 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 10109356 jmp 0x1010935f */
  goto L_1010935f;
L_10109358:;
  /* 10109358 or eax, ebp */
  { uint32_t _r=(EAX)|(EBP); EAX = (_r); fl_logic(_r,32); }
  /* 1010935a jmp 0x1010935f */
  goto L_1010935f;
L_1010935c:;
  /* 1010935c or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
L_1010935f:;
  /* 1010935f and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10109361 pop esi */
  ESI = (pop32());
  /* 10109362 je 0x1010936f */
  if (C.zf) goto L_1010936f;
  /* 10109364 cmp ecx, ebp */
  { uint32_t _a=(ECX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10109366 jne 0x10109374 */
  if (!C.zf) goto L_10109374;
  /* 10109368 or eax, 0x10000 */
  { uint32_t _r=(EAX)|(0x10000u); EAX = (_r); fl_logic(_r,32); }
  /* 1010936d jmp 0x10109374 */
  goto L_10109374;
L_1010936f:;
  /* 1010936f or eax, 0x20000 */
  { uint32_t _r=(EAX)|(0x20000u); EAX = (_r); fl_logic(_r,32); }
L_10109374:;
  /* 10109374 pop edi */
  EDI = (pop32());
  /* 10109375 pop ebp */
  EBP = (pop32());
  /* 10109376 test bh, 0x10 */
  { uint32_t _r=(C.b.b.h)&(0x10u); fl_logic(_r,8); }
  /* 10109379 pop ebx */
  EBX = (pop32());
  /* 1010937a je 0x10109381 */
  if (C.zf) goto L_10109381;
  /* 1010937c or eax, 0x40000 */
  { uint32_t _r=(EAX)|(0x40000u); EAX = (_r); fl_logic(_r,32); }
L_10109381:;
  /* 10109381 ret  */
  ESPCHK(0x101092f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009382 @ 0x10109382 (137 bytes, 53 insns) */
void f_10109382(void) {
  FTRACE(0x10109382u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10109382 push ebx */
  push32((uint32_t)(EBX));
  /* 10109383 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 10109387 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10109389 push esi */
  push32((uint32_t)(ESI));
  /* 1010938a test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 1010938d je 0x10109392 */
  if (C.zf) goto L_10109392;
  /* 1010938f push 1 */
  push32((uint32_t)(0x1u));
  /* 10109391 pop eax */
  EAX = (pop32());
L_10109392:;
  /* 10109392 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 10109395 je 0x10109399 */
  if (C.zf) goto L_10109399;
  /* 10109397 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_10109399:;
  /* 10109399 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 1010939c je 0x101093a0 */
  if (C.zf) goto L_101093a0;
  /* 1010939e or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_101093a0:;
  /* 101093a0 test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 101093a3 je 0x101093a7 */
  if (C.zf) goto L_101093a7;
  /* 101093a5 or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
L_101093a7:;
  /* 101093a7 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 101093aa je 0x101093ae */
  if (C.zf) goto L_101093ae;
  /* 101093ac or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
L_101093ae:;
  /* 101093ae test ebx, 0x80000 */
  { uint32_t _r=(EBX)&(0x80000u); fl_logic(_r,32); }
  /* 101093b4 je 0x101093b8 */
  if (C.zf) goto L_101093b8;
  /* 101093b6 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_101093b8:;
  /* 101093b8 mov ecx, ebx */
  ECX = (EBX);
  /* 101093ba mov edx, 0x300 */
  EDX = (0x300u);
  /* 101093bf and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 101093c1 mov esi, 0x200 */
  ESI = (0x200u);
  /* 101093c6 je 0x101093e5 */
  if (C.zf) goto L_101093e5;
  /* 101093c8 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101093ce je 0x101093e2 */
  if (C.zf) goto L_101093e2;
  /* 101093d0 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101093d2 je 0x101093dd */
  if (C.zf) goto L_101093dd;
  /* 101093d4 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101093d6 jne 0x101093e5 */
  if (!C.zf) goto L_101093e5;
  /* 101093d8 or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 101093db jmp 0x101093e5 */
  goto L_101093e5;
L_101093dd:;
  /* 101093dd or ah, 8 */
  { uint32_t _r=(AH)|(0x8u); AH = (_r); fl_logic(_r,8); }
  /* 101093e0 jmp 0x101093e5 */
  goto L_101093e5;
L_101093e2:;
  /* 101093e2 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
L_101093e5:;
  /* 101093e5 mov ecx, ebx */
  ECX = (EBX);
  /* 101093e7 and ecx, 0x30000 */
  { uint32_t _r=(ECX)&(0x30000u); ECX = (_r); fl_logic(_r,32); }
  /* 101093ed je 0x101093fb */
  if (C.zf) goto L_101093fb;
  /* 101093ef cmp ecx, 0x10000 */
  { uint32_t _a=(ECX),_b=(0x10000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101093f5 jne 0x101093fd */
  if (!C.zf) goto L_101093fd;
  /* 101093f7 or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 101093f9 jmp 0x101093fd */
  goto L_101093fd;
L_101093fb:;
  /* 101093fb or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
L_101093fd:;
  /* 101093fd pop esi */
  ESI = (pop32());
  /* 101093fe test ebx, 0x40000 */
  { uint32_t _r=(EBX)&(0x40000u); fl_logic(_r,32); }
  /* 10109404 pop ebx */
  EBX = (pop32());
  /* 10109405 je 0x1010940a */
  if (C.zf) goto L_1010940a;
  /* 10109407 or ah, 0x10 */
  { uint32_t _r=(AH)|(0x10u); AH = (_r); fl_logic(_r,8); }
L_1010940a:;
  /* 1010940a ret  */
  ESPCHK(0x10109382u, _esp0);
  ESP += 4; return;
}

/* FUN_1000940b @ 0x1010940b (117 bytes, 46 insns) */
void f_1010940b(void) {
  FTRACE(0x1010940bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010940b push ebp */
  push32((uint32_t)(EBP));
  /* 1010940c mov ebp, esp */
  EBP = (ESP);
  /* 1010940e push ecx */
  push32((uint32_t)(ECX));
  /* 1010940f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10109412 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 10109415 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010941b ja 0x10109429 */
  if ((!C.cf&&!C.zf)) goto L_10109429;
  /* 1010941d mov ecx, dword ptr [0x10110b20] */
  ECX = (r32((uint32_t)(0x10110b20)));
  /* 10109423 movzx eax, word ptr [ecx + eax*2] */
  EAX = ((uint32_t)(r16((uint32_t)(ECX + EAX*2))));
  /* 10109427 jmp 0x1010947b */
  goto L_1010947b;
L_10109429:;
  /* 10109429 mov ecx, eax */
  ECX = (EAX);
  /* 1010942b push esi */
  push32((uint32_t)(ESI));
  /* 1010942c mov esi, dword ptr [0x10110b20] */
  ESI = (r32((uint32_t)(0x10110b20)));
  /* 10109432 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10109435 movzx edx, cl */
  EDX = ((uint32_t)(CL));
  /* 10109438 test byte ptr [esi + edx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EDX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 1010943d pop esi */
  ESI = (pop32());
  /* 1010943e je 0x1010944e */
  if (C.zf) goto L_1010944e;
  /* 10109440 and byte ptr [ebp - 2], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2)))&(0x0u); w8((uint32_t)(EBP + -0x2), (_r)); fl_logic(_r,8); }
  /* 10109444 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 10109447 mov byte ptr [ebp - 3], al */
  w8((uint32_t)(EBP + -0x3), (AL));
  /* 1010944a push 2 */
  push32((uint32_t)(0x2u));
  /* 1010944c jmp 0x10109457 */
  goto L_10109457;
L_1010944e:;
  /* 1010944e and byte ptr [ebp - 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x0u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 10109452 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 10109455 push 1 */
  push32((uint32_t)(0x1u));
L_10109457:;
  /* 10109457 pop eax */
  EAX = (pop32());
  /* 10109458 lea ecx, [ebp + 0xa] */
  ECX = ((uint32_t)(EBP + 0xa));
  /* 1010945b push 1 */
  push32((uint32_t)(0x1u));
  /* 1010945d push 0 */
  push32((uint32_t)(0x0u));
  /* 1010945f push 0 */
  push32((uint32_t)(0x0u));
  /* 10109461 push ecx */
  push32((uint32_t)(ECX));
  /* 10109462 push eax */
  push32((uint32_t)(EAX));
  /* 10109463 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10109466 push eax */
  push32((uint32_t)(EAX));
  /* 10109467 push 1 */
  push32((uint32_t)(0x1u));
  /* 10109469 call 0x1010c2bd */
  push32(0x1010946eu); f_1010c2bd();
  /* 1010946e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10109471 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10109473 jne 0x10109477 */
  if (!C.zf) goto L_10109477;
  /* 10109475 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10109476 ret  */
  ESPCHK(0x1010940bu, _esp0);
  ESP += 4; return;
L_10109477:;
  /* 10109477 movzx eax, word ptr [ebp + 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + 0xa))));
L_1010947b:;
  /* 1010947b and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1010947e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1010947f ret  */
  ESPCHK(0x1010940bu, _esp0);
  ESP += 4; return;
}

/* FUN_10009480 @ 0x10109480 (111 bytes, 44 insns) */
void f_10109480(void) {
  FTRACE(0x10109480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10109480 push ebx */
  push32((uint32_t)(EBX));
  /* 10109481 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10109483 cmp dword ptr [0x10116988], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10116988))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10109489 jne 0x1010949e */
  if (!C.zf) goto L_1010949e;
  /* 1010948b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1010948f cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10109492 jl 0x101094ed */
  if ((C.sf!=C.of)) goto L_101094ed;
  /* 10109494 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10109497 jg 0x101094ed */
  if ((!C.zf&&C.sf==C.of)) goto L_101094ed;
  /* 10109499 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010949c pop ebx */
  EBX = (pop32());
  /* 1010949d ret  */
  ESPCHK(0x10109480u, _esp0);
  ESP += 4; return;
L_1010949e:;
  /* 1010949e push esi */
  push32((uint32_t)(ESI));
  /* 1010949f mov esi, 0x10116b04 */
  ESI = (0x10116b04u);
  /* 101094a4 push edi */
  push32((uint32_t)(EDI));
  /* 101094a5 push esi */
  push32((uint32_t)(ESI));
  /* 101094a6 call dword ptr [0x1010e090] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e090))), 0x101094acu);
  /* 101094ac cmp dword ptr [0x10116b00], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10116b00))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101094b2 mov edi, dword ptr [0x1010e08c] */
  EDI = (r32((uint32_t)(0x1010e08c)));
  /* 101094b8 je 0x101094c8 */
  if (C.zf) goto L_101094c8;
  /* 101094ba push esi */
  push32((uint32_t)(ESI));
  /* 101094bb call edi */
  call_ind((uint32_t)(EDI), 0x101094bdu);
  /* 101094bd push 0x13 */
  push32((uint32_t)(0x13u));
  /* 101094bf call 0x1010a053 */
  push32(0x101094c4u); f_1010a053();
  /* 101094c4 pop ecx */
  ECX = (pop32());
  /* 101094c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 101094c7 pop ebx */
  EBX = (pop32());
L_101094c8:;
  /* 101094c8 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 101094cc call 0x101094ef */
  push32(0x101094d1u); f_101094ef();
  /* 101094d1 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101094d3 pop ecx */
  ECX = (pop32());
  /* 101094d4 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 101094d8 je 0x101094e4 */
  if (C.zf) goto L_101094e4;
  /* 101094da push 0x13 */
  push32((uint32_t)(0x13u));
  /* 101094dc call 0x1010a0b4 */
  push32(0x101094e1u); f_1010a0b4();
  /* 101094e1 pop ecx */
  ECX = (pop32());
  /* 101094e2 jmp 0x101094e7 */
  goto L_101094e7;
L_101094e4:;
  /* 101094e4 push esi */
  push32((uint32_t)(ESI));
  /* 101094e5 call edi */
  call_ind((uint32_t)(EDI), 0x101094e7u);
L_101094e7:;
  /* 101094e7 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 101094eb pop edi */
  EDI = (pop32());
  /* 101094ec pop esi */
  ESI = (pop32());
L_101094ed:;
  /* 101094ed pop ebx */
  EBX = (pop32());
  /* 101094ee ret  */
  ESPCHK(0x10109480u, _esp0);
  ESP += 4; return;
}

/* FUN_100094ef @ 0x101094ef (203 bytes, 78 insns) */
void f_101094ef(void) {
  FTRACE(0x101094efu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101094ef push ebp */
  push32((uint32_t)(EBP));
  /* 101094f0 mov ebp, esp */
  EBP = (ESP);
  /* 101094f2 push ecx */
  push32((uint32_t)(ECX));
  /* 101094f3 cmp dword ptr [0x10116988], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10116988))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101094fa push ebx */
  push32((uint32_t)(EBX));
  /* 101094fb push esi */
  push32((uint32_t)(ESI));
  /* 101094fc push edi */
  push32((uint32_t)(EDI));
  /* 101094fd jne 0x1010951c */
  if (!C.zf) goto L_1010951c;
  /* 101094ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10109502 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10109505 jl 0x101095b5 */
  if ((C.sf!=C.of)) goto L_101095b5;
  /* 1010950b cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010950e jg 0x101095b5 */
  if ((!C.zf&&C.sf==C.of)) goto L_101095b5;
  /* 10109514 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10109517 jmp 0x101095b5 */
  goto L_101095b5;
L_1010951c:;
  /* 1010951c mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1010951f mov edi, 0x100 */
  EDI = (0x100u);
  /* 10109524 push 1 */
  push32((uint32_t)(0x1u));
  /* 10109526 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10109528 pop esi */
  ESI = (pop32());
  /* 10109529 jge 0x10109550 */
  if ((C.sf==C.of)) goto L_10109550;
  /* 1010952b cmp dword ptr [0x10110d30], esi */
  { uint32_t _a=(r32((uint32_t)(0x10110d30))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10109531 jle 0x1010953e */
  if ((C.zf||C.sf!=C.of)) goto L_1010953e;
  /* 10109533 push esi */
  push32((uint32_t)(ESI));
  /* 10109534 push ebx */
  push32((uint32_t)(EBX));
  /* 10109535 call 0x1010940b */
  push32(0x1010953au); f_1010940b();
  /* 1010953a pop ecx */
  ECX = (pop32());
  /* 1010953b pop ecx */
  ECX = (pop32());
  /* 1010953c jmp 0x10109548 */
  goto L_10109548;
L_1010953e:;
  /* 1010953e mov eax, dword ptr [0x10110b20] */
  EAX = (r32((uint32_t)(0x10110b20)));
  /* 10109543 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 10109546 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_10109548:;
  /* 10109548 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010954a jne 0x10109550 */
  if (!C.zf) goto L_10109550;
L_1010954c:;
  /* 1010954c mov eax, ebx */
  EAX = (EBX);
  /* 1010954e jmp 0x101095b5 */
  goto L_101095b5;
L_10109550:;
  /* 10109550 mov edx, dword ptr [0x10110b20] */
  EDX = (r32((uint32_t)(0x10110b20)));
  /* 10109556 mov eax, ebx */
  EAX = (EBX);
  /* 10109558 sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1010955b movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 1010955e test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 10109563 je 0x10109574 */
  if (C.zf) goto L_10109574;
  /* 10109565 and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 10109569 push 2 */
  push32((uint32_t)(0x2u));
  /* 1010956b mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 1010956e mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 10109571 pop eax */
  EAX = (pop32());
  /* 10109572 jmp 0x1010957d */
  goto L_1010957d;
L_10109574:;
  /* 10109574 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 10109578 mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 1010957b mov eax, esi */
  EAX = (ESI);
L_1010957d:;
  /* 1010957d push esi */
  push32((uint32_t)(ESI));
  /* 1010957e push 0 */
  push32((uint32_t)(0x0u));
  /* 10109580 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10109583 push 3 */
  push32((uint32_t)(0x3u));
  /* 10109585 push ecx */
  push32((uint32_t)(ECX));
  /* 10109586 push eax */
  push32((uint32_t)(EAX));
  /* 10109587 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1010958a push eax */
  push32((uint32_t)(EAX));
  /* 1010958b push edi */
  push32((uint32_t)(EDI));
  /* 1010958c push dword ptr [0x10116988] */
  push32((uint32_t)(r32((uint32_t)(0x10116988))));
  /* 10109592 call 0x1010c406 */
  push32(0x10109597u); f_1010c406();
  /* 10109597 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010959a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010959c je 0x1010954c */
  if (C.zf) goto L_1010954c;
  /* 1010959e cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101095a0 jne 0x101095a8 */
  if (!C.zf) goto L_101095a8;
  /* 101095a2 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 101095a6 jmp 0x101095b5 */
  goto L_101095b5;
L_101095a8:;
  /* 101095a8 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 101095ac movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 101095b0 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 101095b3 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_101095b5:;
  /* 101095b5 pop edi */
  EDI = (pop32());
  /* 101095b6 pop esi */
  ESI = (pop32());
  /* 101095b7 pop ebx */
  EBX = (pop32());
  /* 101095b8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101095b9 ret  */
  ESPCHK(0x101094efu, _esp0);
  ESP += 4; return;
}

/* FUN_100095ba @ 0x101095ba (73 bytes, 36 insns) */
void f_101095ba(void) {
  FTRACE(0x101095bau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101095ba mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101095be push esi */
  push32((uint32_t)(ESI));
  /* 101095bf push 0x20 */
  push32((uint32_t)(0x20u));
  /* 101095c1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101095c2 pop ecx */
  ECX = (pop32());
  /* 101095c3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101095c5 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 101095c7 mov esi, eax */
  ESI = (EAX);
  /* 101095c9 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 101095cd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 101095ce idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 101095d0 pop ecx */
  ECX = (pop32());
  /* 101095d1 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101095d5 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101095d7 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 101095da shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 101095dc not edx */
  EDX = (~(EDX));
  /* 101095de test dword ptr [eax + esi*4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4)))&(EDX); fl_logic(_r,32); }
  /* 101095e1 jne 0x101095ff */
  if (!C.zf) goto L_101095ff;
  /* 101095e3 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101095e4 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101095e7 jge 0x101095fa */
  if ((C.sf==C.of)) goto L_101095fa;
  /* 101095e9 lea eax, [eax + esi*4] */
  EAX = ((uint32_t)(EAX + ESI*4));
L_101095ec:;
  /* 101095ec cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101095ef jne 0x101095ff */
  if (!C.zf) goto L_101095ff;
  /* 101095f1 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 101095f2 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101095f5 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101095f8 jl 0x101095ec */
  if ((C.sf!=C.of)) goto L_101095ec;
L_101095fa:;
  /* 101095fa push 1 */
  push32((uint32_t)(0x1u));
  /* 101095fc pop eax */
  EAX = (pop32());
  /* 101095fd pop esi */
  ESI = (pop32());
  /* 101095fe ret  */
  ESPCHK(0x101095bau, _esp0);
  ESP += 4; return;
L_101095ff:;
  /* 101095ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10109601 pop esi */
  ESI = (pop32());
  /* 10109602 ret  */
  ESPCHK(0x101095bau, _esp0);
  ESP += 4; return;
}

/* FUN_10009603 @ 0x10109603 (86 bytes, 43 insns) */
void f_10109603(void) {
  FTRACE(0x10109603u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10109603 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10109607 push ebx */
  push32((uint32_t)(EBX));
  /* 10109608 push esi */
  push32((uint32_t)(ESI));
  /* 10109609 push edi */
  push32((uint32_t)(EDI));
  /* 1010960a push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1010960c mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10109610 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10109611 pop ecx */
  ECX = (pop32());
  /* 10109612 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10109614 mov esi, eax */
  ESI = (EAX);
  /* 10109616 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1010961a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1010961b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1010961d lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
  /* 10109620 push edi */
  push32((uint32_t)(EDI));
  /* 10109621 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10109623 pop ecx */
  ECX = (pop32());
  /* 10109624 push 1 */
  push32((uint32_t)(0x1u));
  /* 10109626 pop eax */
  EAX = (pop32());
  /* 10109627 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10109629 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1010962b push eax */
  push32((uint32_t)(EAX));
  /* 1010962c push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 1010962e call 0x1010c655 */
  push32(0x10109633u); f_1010c655();
  /* 10109633 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10109636 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10109637 js 0x10109655 */
  if (C.sf) goto L_10109655;
  /* 10109639 lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
L_1010963c:;
  /* 1010963c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010963e je 0x10109655 */
  if (C.zf) goto L_10109655;
  /* 10109640 push edi */
  push32((uint32_t)(EDI));
  /* 10109641 push 1 */
  push32((uint32_t)(0x1u));
  /* 10109643 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 10109645 call 0x1010c655 */
  push32(0x1010964au); f_1010c655();
  /* 1010964a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010964d dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1010964e sub edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10109651 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10109653 jge 0x1010963c */
  if ((C.sf==C.of)) goto L_1010963c;
L_10109655:;
  /* 10109655 pop edi */
  EDI = (pop32());
  /* 10109656 pop esi */
  ESI = (pop32());
  /* 10109657 pop ebx */
  EBX = (pop32());
  /* 10109658 ret  */
  ESPCHK(0x10109603u, _esp0);
  ESP += 4; return;
}

/* FUN_10009659 @ 0x10109659 (140 bytes, 71 insns) */
void f_10109659(void) {
  FTRACE(0x10109659u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10109659 push ebp */
  push32((uint32_t)(EBP));
  /* 1010965a mov ebp, esp */
  EBP = (ESP);
  /* 1010965c push ecx */
  push32((uint32_t)(ECX));
  /* 1010965d push ecx */
  push32((uint32_t)(ECX));
  /* 1010965e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10109661 push ebx */
  push32((uint32_t)(EBX));
  /* 10109662 push esi */
  push32((uint32_t)(ESI));
  /* 10109663 push edi */
  push32((uint32_t)(EDI));
  /* 10109664 lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
  /* 10109667 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10109669 pop ecx */
  ECX = (pop32());
  /* 1010966a and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1010966e lea ebx, [edi + 1] */
  EBX = ((uint32_t)(EDI + 0x1));
  /* 10109671 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10109673 mov eax, ebx */
  EAX = (EBX);
  /* 10109675 pop esi */
  ESI = (pop32());
  /* 10109676 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10109677 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10109679 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1010967b mov ecx, eax */
  ECX = (EAX);
  /* 1010967d mov eax, ebx */
  EAX = (EBX);
  /* 1010967f cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10109680 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10109682 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10109685 pop esi */
  ESI = (pop32());
  /* 10109686 push 1 */
  push32((uint32_t)(0x1u));
  /* 10109688 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1010968b lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 1010968e mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10109691 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10109693 pop edx */
  EDX = (pop32());
  /* 10109694 mov ecx, esi */
  ECX = (ESI);
  /* 10109696 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10109698 test dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); fl_logic(_r,32); }
  /* 1010969a je 0x101096bd */
  if (C.zf) goto L_101096bd;
  /* 1010969c inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1010969d push ebx */
  push32((uint32_t)(EBX));
  /* 1010969e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101096a1 call 0x101095ba */
  push32(0x101096a6u); f_101095ba();
  /* 101096a6 pop ecx */
  ECX = (pop32());
  /* 101096a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 101096a9 pop ecx */
  ECX = (pop32());
  /* 101096aa jne 0x101096ba */
  if (!C.zf) goto L_101096ba;
  /* 101096ac push edi */
  push32((uint32_t)(EDI));
  /* 101096ad push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 101096b0 call 0x10109603 */
  push32(0x101096b5u); f_10109603();
  /* 101096b5 pop ecx */
  ECX = (pop32());
  /* 101096b6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 101096b9 pop ecx */
  ECX = (pop32());
L_101096ba:;
  /* 101096ba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_101096bd:;
  /* 101096bd or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 101096c0 mov ecx, esi */
  ECX = (ESI);
  /* 101096c2 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 101096c4 push 3 */
  push32((uint32_t)(0x3u));
  /* 101096c6 pop ecx */
  ECX = (pop32());
  /* 101096c7 and dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 101096c9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 101096cc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101096cd cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101096cf jge 0x101096dd */
  if ((C.sf==C.of)) goto L_101096dd;
  /* 101096d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 101096d4 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101096d6 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 101096d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 101096db rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
L_101096dd:;
  /* 101096dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 101096e0 pop edi */
  EDI = (pop32());
  /* 101096e1 pop esi */
  ESI = (pop32());
  /* 101096e2 pop ebx */
  EBX = (pop32());
  /* 101096e3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101096e4 ret  */
  ESPCHK(0x10109659u, _esp0);
  ESP += 4; return;
}

/* FUN_100096e5 @ 0x101096e5 (27 bytes, 13 insns) */
void f_101096e5(void) {
  FTRACE(0x101096e5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101096e5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 101096e9 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 101096ed push esi */
  push32((uint32_t)(ESI));
  /* 101096ee push 3 */
  push32((uint32_t)(0x3u));
  /* 101096f0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101096f2 pop edx */
  EDX = (pop32());
L_101096f3:;
  /* 101096f3 mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 101096f5 mov dword ptr [ecx + eax], esi */
  w32((uint32_t)(ECX + EAX*1), (ESI));
  /* 101096f8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 101096fb dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 101096fc jne 0x101096f3 */
  if (!C.zf) goto L_101096f3;
  /* 101096fe pop esi */
  ESI = (pop32());
  /* 101096ff ret  */
  ESPCHK(0x101096e5u, _esp0);
  ESP += 4; return;
}

/* FUN_10009700 @ 0x10109700 (12 bytes, 8 insns) */
void f_10109700(void) {
  FTRACE(0x10109700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10109700 push edi */
  push32((uint32_t)(EDI));
  /* 10109701 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10109705 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10109707 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10109708 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10109709 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1010970a pop edi */
  EDI = (pop32());
  /* 1010970b ret  */
  ESPCHK(0x10109700u, _esp0);
  ESP += 4; return;
}

/* FUN_1000970c @ 0x1010970c (27 bytes, 13 insns) */
void f_1010970c(void) {
  FTRACE(0x1010970cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010970c mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10109710 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_10109712:;
  /* 10109712 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10109715 jne 0x10109724 */
  if (!C.zf) goto L_10109724;
  /* 10109717 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10109718 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010971b cmp ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010971e jl 0x10109712 */
  if ((C.sf!=C.of)) goto L_10109712;
  /* 10109720 push 1 */
  push32((uint32_t)(0x1u));
  /* 10109722 pop eax */
  EAX = (pop32());
  /* 10109723 ret  */
  ESPCHK(0x1010970cu, _esp0);
  ESP += 4; return;
L_10109724:;
  /* 10109724 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10109726 ret  */
  ESPCHK(0x1010970cu, _esp0);
  ESP += 4; return;
}

/* FUN_10009727 @ 0x10109727 (141 bytes, 64 insns) */
void f_10109727(void) {
  FTRACE(0x10109727u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10109727 push ebp */
  push32((uint32_t)(EBP));
  /* 10109728 mov ebp, esp */
  EBP = (ESP);
  /* 1010972a sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010972d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10109730 push ebx */
  push32((uint32_t)(EBX));
  /* 10109731 push esi */
  push32((uint32_t)(ESI));
  /* 10109732 push edi */
  push32((uint32_t)(EDI));
  /* 10109733 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10109735 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10109738 pop ebx */
  EBX = (pop32());
  /* 10109739 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 1010973c cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1010973d mov ecx, ebx */
  ECX = (EBX);
  /* 1010973f mov dword ptr [ebp - 4], 3 */
  w32((uint32_t)(EBP + -0x4), (0x3u));
  /* 10109746 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10109748 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1010974b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1010974e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1010974f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10109751 and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 10109755 mov ecx, edx */
  ECX = (EDX);
  /* 10109757 shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 10109759 sub ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010975b not esi */
  ESI = (~(ESI));
L_1010975d:;
  /* 1010975d mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1010975f mov ecx, eax */
  ECX = (EAX);
  /* 10109761 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 10109763 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10109766 mov ecx, edx */
  ECX = (EDX);
  /* 10109768 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1010976a or eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1010976d mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1010976f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10109772 mov ecx, ebx */
  ECX = (EBX);
  /* 10109774 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10109777 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10109779 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 1010977c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1010977f jne 0x1010975d */
  if (!C.zf) goto L_1010975d;
  /* 10109781 mov edi, dword ptr [ebp - 0xc] */
  EDI = (r32((uint32_t)(EBP + -0xc)));
  /* 10109784 push 2 */
  push32((uint32_t)(0x2u));
  /* 10109786 pop ebx */
  EBX = (pop32());
  /* 10109787 mov esi, edi */
  ESI = (EDI);
  /* 10109789 push 8 */
  push32((uint32_t)(0x8u));
  /* 1010978b pop ecx */
  ECX = (pop32());
  /* 1010978c shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
L_1010978f:;
  /* 1010978f cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10109791 jl 0x101097a2 */
  if ((C.sf!=C.of)) goto L_101097a2;
  /* 10109793 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10109796 mov eax, ecx */
  EAX = (ECX);
  /* 10109798 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010979a mov eax, dword ptr [eax + edx] */
  EAX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1010979d mov dword ptr [ecx + edx], eax */
  w32((uint32_t)(ECX + EDX*1), (EAX));
  /* 101097a0 jmp 0x101097a9 */
  goto L_101097a9;
L_101097a2:;
  /* 101097a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101097a5 and dword ptr [ecx + eax], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + EAX*1)))&(0x0u); w32((uint32_t)(ECX + EAX*1), (_r)); fl_logic(_r,32); }
L_101097a9:;
  /* 101097a9 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 101097aa sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101097ad jns 0x1010978f */
  if (!C.sf) goto L_1010978f;
  /* 101097af pop edi */
  EDI = (pop32());
  /* 101097b0 pop esi */
  ESI = (pop32());
  /* 101097b1 pop ebx */
  EBX = (pop32());
  /* 101097b2 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101097b3 ret  */
  ESPCHK(0x10109727u, _esp0);
  ESP += 4; return;
}

/* FUN_100097b4 @ 0x101097b4 (364 bytes, 138 insns) */
void f_101097b4(void) {
  FTRACE(0x101097b4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101097b4 push ebp */
  push32((uint32_t)(EBP));
  /* 101097b5 mov ebp, esp */
  EBP = (ESP);
  /* 101097b7 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 101097ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 101097bd push ebx */
  push32((uint32_t)(EBX));
  /* 101097be push esi */
  push32((uint32_t)(ESI));
  /* 101097bf push edi */
  push32((uint32_t)(EDI));
  /* 101097c0 movzx ecx, word ptr [eax + 0xa] */
  ECX = ((uint32_t)(r16((uint32_t)(EAX + 0xa))));
  /* 101097c4 mov ebx, ecx */
  EBX = (ECX);
  /* 101097c6 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 101097cc mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 101097cf mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 101097d2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 101097d5 mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 101097d8 movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 101097db mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 101097de and ebx, 0x7fff */
  { uint32_t _r=(EBX)&(0x7fffu); EBX = (_r); fl_logic(_r,32); }
  /* 101097e4 sub ebx, 0x3fff */
  { uint32_t _a=(EBX),_b=(0x3fffu),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101097ea mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 101097ed shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 101097f0 cmp ebx, 0xffffc001 */
  { uint32_t _a=(EBX),_b=(0xffffc001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 101097f6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 101097f9 jne 0x10109821 */
  if (!C.zf) goto L_10109821;
  /* 101097fb lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101097fe xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10109800 push eax */
  push32((uint32_t)(EAX));
  /* 10109801 call 0x1010970c */
  push32(0x10109806u); f_1010970c();
  /* 10109806 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10109808 pop ecx */
  ECX = (pop32());
  /* 10109809 jne 0x101098e0 */
  if (!C.zf) goto L_101098e0;
  /* 1010980f lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10109812 push eax */
  push32((uint32_t)(EAX));
  /* 10109813 call 0x10109700 */
  push32(0x10109818u); f_10109700();
  /* 10109818 pop ecx */
  ECX = (pop32());
L_10109819:;
  /* 10109819 push 2 */
  push32((uint32_t)(0x2u));
L_1010981b:;
  /* 1010981b pop eax */
  EAX = (pop32());
  /* 1010981c jmp 0x101098e2 */
  goto L_101098e2;
L_10109821:;
  /* 10109821 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10109824 push eax */
  push32((uint32_t)(EAX));
  /* 10109825 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 10109828 push eax */
  push32((uint32_t)(EAX));
  /* 10109829 call 0x101096e5 */
  push32(0x1010982eu); f_101096e5();
  /* 1010982e push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 10109831 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10109834 push eax */
  push32((uint32_t)(EAX));
  /* 10109835 call 0x10109659 */
  push32(0x1010983au); f_10109659();
  /* 1010983a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010983d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010983f je 0x10109842 */
  if (C.zf) goto L_10109842;
  /* 10109841 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_10109842:;
  /* 10109842 mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 10109845 mov ecx, eax */
  ECX = (EAX);
  /* 10109847 sub ecx, dword ptr [edi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010984a cmp ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010984c jge 0x1010985a */
  if ((C.sf==C.of)) goto L_1010985a;
  /* 1010984e lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10109851 push eax */
  push32((uint32_t)(EAX));
  /* 10109852 call 0x10109700 */
  push32(0x10109857u); f_10109700();
  /* 10109857 pop ecx */
  ECX = (pop32());
  /* 10109858 jmp 0x10109896 */
  goto L_10109896;
L_1010985a:;
  /* 1010985a cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010985c jg 0x1010989d */
  if ((!C.zf&&C.sf==C.of)) goto L_1010989d;
  /* 1010985e sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10109860 mov esi, eax */
  ESI = (EAX);
  /* 10109862 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 10109865 push eax */
  push32((uint32_t)(EAX));
  /* 10109866 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10109869 push eax */
  push32((uint32_t)(EAX));
  /* 1010986a call 0x101096e5 */
  push32(0x1010986fu); f_101096e5();
  /* 1010986f lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10109872 push esi */
  push32((uint32_t)(ESI));
  /* 10109873 push eax */
  push32((uint32_t)(EAX));
  /* 10109874 call 0x10109727 */
  push32(0x10109879u); f_10109727();
  /* 10109879 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 1010987c lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1010987f push eax */
  push32((uint32_t)(EAX));
  /* 10109880 call 0x10109659 */
  push32(0x10109885u); f_10109659();
  /* 10109885 mov eax, dword ptr [edi + 0xc] */
  EAX = (r32((uint32_t)(EDI + 0xc)));
  /* 10109888 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10109889 push eax */
  push32((uint32_t)(EAX));
  /* 1010988a lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1010988d push eax */
  push32((uint32_t)(EAX));
  /* 1010988e call 0x10109727 */
  push32(0x10109893u); f_10109727();
  /* 10109893 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10109896:;
  /* 10109896 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10109898 jmp 0x10109819 */
  goto L_10109819;
L_1010989d:;
  /* 1010989d cmp ebx, dword ptr [edi] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EDI))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010989f jl 0x101098c9 */
  if ((C.sf!=C.of)) goto L_101098c9;
  /* 101098a1 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101098a4 push eax */
  push32((uint32_t)(EAX));
  /* 101098a5 call 0x10109700 */
  push32(0x101098aau); f_10109700();
  /* 101098aa push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 101098ad or byte ptr [ebp - 9], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))|(0x80u); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 101098b1 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101098b4 push eax */
  push32((uint32_t)(EAX));
  /* 101098b5 call 0x10109727 */
  push32(0x101098bau); f_10109727();
  /* 101098ba mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 101098bd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101098c0 add esi, dword ptr [edi] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101098c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 101098c4 jmp 0x1010981b */
  goto L_1010981b;
L_101098c9:;
  /* 101098c9 push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 101098cc mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 101098cf and byte ptr [ebp - 9], 0x7f */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))&(0x7fu); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 101098d3 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 101098d6 push eax */
  push32((uint32_t)(EAX));
  /* 101098d7 add esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 101098d9 call 0x10109727 */
  push32(0x101098deu); f_10109727();
  /* 101098de pop ecx */
  ECX = (pop32());
  /* 101098df pop ecx */
  ECX = (pop32());
L_101098e0:;
  /* 101098e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_101098e2:;
  /* 101098e2 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 101098e4 pop ecx */
  ECX = (pop32());
  /* 101098e5 sub ecx, dword ptr [edi + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101098e8 mov edi, dword ptr [edi + 0x10] */
  EDI = (r32((uint32_t)(EDI + 0x10)));
  /* 101098eb shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 101098ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 101098f0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 101098f2 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 101098f4 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 101098fa or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 101098fc or esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)|(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 101098ff cmp edi, 0x40 */
  { uint32_t _a=(EDI),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10109902 jne 0x10109911 */
  if (!C.zf) goto L_10109911;
  /* 10109904 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10109907 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1010990a mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 1010990d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1010990f jmp 0x1010991b */
  goto L_1010991b;
L_10109911:;
  /* 10109911 cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10109914 jne 0x1010991b */
  if (!C.zf) goto L_1010991b;
  /* 10109916 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10109919 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_1010991b:;
  /* 1010991b pop edi */
  EDI = (pop32());
  /* 1010991c pop esi */
  ESI = (pop32());
  /* 1010991d pop ebx */
  EBX = (pop32());
  /* 1010991e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1010991f ret  */
  ESPCHK(0x101097b4u, _esp0);
  ESP += 4; return;
}

/* FUN_10009920 @ 0x10109920 (22 bytes, 6 insns) */
void f_10109920(void) {
  FTRACE(0x10109920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10109920 push 0x10110d40 */
  push32((uint32_t)(0x10110d40u));
  /* 10109925 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10109929 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 1010992d call 0x101097b4 */
  push32(0x10109932u); f_101097b4();
  /* 10109932 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10109935 ret  */
  ESPCHK(0x10109920u, _esp0);
  ESP += 4; return;
}

/* FUN_10009936 @ 0x10109936 (22 bytes, 6 insns) */
void f_10109936(void) {
  FTRACE(0x10109936u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10109936 push 0x10110d58 */
  push32((uint32_t)(0x10110d58u));
  /* 1010993b push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 1010993f push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10109943 call 0x101097b4 */
  push32(0x10109948u); f_101097b4();
  /* 10109948 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010994b ret  */
  ESPCHK(0x10109936u, _esp0);
  ESP += 4; return;
}

/* FUN_1000994c @ 0x1010994c (45 bytes, 21 insns) */
void f_1010994c(void) {
  FTRACE(0x1010994cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010994c push ebp */
  push32((uint32_t)(EBP));
  /* 1010994d mov ebp, esp */
  EBP = (ESP);
  /* 1010994f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10109952 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10109954 push eax */
  push32((uint32_t)(EAX));
  /* 10109955 push eax */
  push32((uint32_t)(EAX));
  /* 10109956 push eax */
  push32((uint32_t)(EAX));
  /* 10109957 push eax */
  push32((uint32_t)(EAX));
  /* 10109958 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1010995b lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1010995e push eax */
  push32((uint32_t)(EAX));
  /* 1010995f lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10109962 push eax */
  push32((uint32_t)(EAX));
  /* 10109963 call 0x1010c7f6 */
  push32(0x10109968u); f_1010c7f6();
  /* 10109968 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1010996b lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1010996e push eax */
  push32((uint32_t)(EAX));
  /* 1010996f call 0x10109920 */
  push32(0x10109974u); f_10109920();
  /* 10109974 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10109977 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10109978 ret  */
  ESPCHK(0x1010994cu, _esp0);
  ESP += 4; return;
}

/* FUN_10009979 @ 0x10109979 (45 bytes, 21 insns) */
void f_10109979(void) {
  FTRACE(0x10109979u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10109979 push ebp */
  push32((uint32_t)(EBP));
  /* 1010997a mov ebp, esp */
  EBP = (ESP);
  /* 1010997c sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010997f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10109981 push eax */
  push32((uint32_t)(EAX));
  /* 10109982 push eax */
  push32((uint32_t)(EAX));
  /* 10109983 push eax */
  push32((uint32_t)(EAX));
  /* 10109984 push eax */
  push32((uint32_t)(EAX));
  /* 10109985 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10109988 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1010998b push eax */
  push32((uint32_t)(EAX));
  /* 1010998c lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1010998f push eax */
  push32((uint32_t)(EAX));
  /* 10109990 call 0x1010c7f6 */
  push32(0x10109995u); f_1010c7f6();
  /* 10109995 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10109998 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1010999b push eax */
  push32((uint32_t)(EAX));
  /* 1010999c call 0x10109936 */
  push32(0x101099a1u); f_10109936();
  /* 101099a1 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 101099a4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 101099a5 ret  */
  ESPCHK(0x10109979u, _esp0);
  ESP += 4; return;
}

/* FUN_100099a6 @ 0x101099a6 (119 bytes, 57 insns) */
void f_101099a6(void) {
  FTRACE(0x101099a6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 101099a6 push ebp */
  push32((uint32_t)(EBP));
  /* 101099a7 mov ebp, esp */
  EBP = (ESP);
  /* 101099a9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 101099ac push ebx */
  push32((uint32_t)(EBX));
  /* 101099ad mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 101099b0 push esi */
  push32((uint32_t)(ESI));
  /* 101099b1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 101099b4 mov ecx, dword ptr [edx + 0xc] */
  ECX = (r32((uint32_t)(EDX + 0xc)));
  /* 101099b7 push edi */
  push32((uint32_t)(EDI));
  /* 101099b8 lea edi, [esi + 1] */
  EDI = ((uint32_t)(ESI + 0x1));
  /* 101099bb mov byte ptr [esi], 0x30 */
  w8((uint32_t)(ESI), (0x30u));
  /* 101099be test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101099c0 mov eax, edi */
  EAX = (EDI);
  /* 101099c2 jle 0x101099e3 */
  if ((C.zf||C.sf!=C.of)) goto L_101099e3;
  /* 101099c4 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 101099c7 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_101099c9:;
  /* 101099c9 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 101099cb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 101099cd je 0x101099d5 */
  if (C.zf) goto L_101099d5;
  /* 101099cf movsx edx, dl */
  EDX = ((uint32_t)(int32_t)(int8_t)(DL));
  /* 101099d2 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 101099d3 jmp 0x101099d8 */
  goto L_101099d8;
L_101099d5:;
  /* 101099d5 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 101099d7 pop edx */
  EDX = (pop32());
L_101099d8:;
  /* 101099d8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 101099da inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 101099db dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 101099de jne 0x101099c9 */
  if (!C.zf) goto L_101099c9;
  /* 101099e0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_101099e3:;
  /* 101099e3 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 101099e6 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 101099e8 jl 0x101099fc */
  if ((C.sf!=C.of)) goto L_101099fc;
  /* 101099ea cmp byte ptr [ecx], 0x35 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101099ed jl 0x101099fc */
  if ((C.sf!=C.of)) goto L_101099fc;
L_101099ef:;
  /* 101099ef dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 101099f0 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101099f3 jne 0x101099fa */
  if (!C.zf) goto L_101099fa;
  /* 101099f5 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 101099f8 jmp 0x101099ef */
  goto L_101099ef;
L_101099fa:;
  /* 101099fa inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_101099fc:;
  /* 101099fc cmp byte ptr [esi], 0x31 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 101099ff jne 0x10109a06 */
  if (!C.zf) goto L_10109a06;
  /* 10109a01 inc dword ptr [edx + 4] */
  { uint32_t _r=(r32((uint32_t)(EDX + 0x4)))+1; w32((uint32_t)(EDX + 0x4), (_r)); fl_inc(_r,32); }
  /* 10109a04 jmp 0x10109a18 */
  goto L_10109a18;
L_10109a06:;
  /* 10109a06 push edi */
  push32((uint32_t)(EDI));
  /* 10109a07 call 0x10109080 */
  push32(0x10109a0cu); f_10109080();
  /* 10109a0c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10109a0d push eax */
  push32((uint32_t)(EAX));
  /* 10109a0e push edi */
  push32((uint32_t)(EDI));
  /* 10109a0f push esi */
  push32((uint32_t)(ESI));
  /* 10109a10 call 0x10109c80 */
  push32(0x10109a15u); f_10109c80();
  /* 10109a15 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10109a18:;
  /* 10109a18 pop edi */
  EDI = (pop32());
  /* 10109a19 pop esi */
  ESI = (pop32());
  /* 10109a1a pop ebx */
  EBX = (pop32());
  /* 10109a1b pop ebp */
  EBP = (pop32());
  /* 10109a1c ret  */
  ESPCHK(0x101099a6u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a1d @ 0x10109a1d (92 bytes, 41 insns) */
void f_10109a1d(void) {
  FTRACE(0x10109a1du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10109a1d push ebp */
  push32((uint32_t)(EBP));
  /* 10109a1e mov ebp, esp */
  EBP = (ESP);
  /* 10109a20 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10109a23 push esi */
  push32((uint32_t)(ESI));
  /* 10109a24 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10109a27 push edi */
  push32((uint32_t)(EDI));
  /* 10109a28 push eax */
  push32((uint32_t)(EAX));
  /* 10109a29 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10109a2c push eax */
  push32((uint32_t)(EAX));
  /* 10109a2d call 0x10109a79 */
  push32(0x10109a32u); f_10109a79();
  /* 10109a32 pop ecx */
  ECX = (pop32());
  /* 10109a33 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 10109a36 pop ecx */
  ECX = (pop32());
  /* 10109a37 lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
  /* 10109a3a push eax */
  push32((uint32_t)(EAX));
  /* 10109a3b push 0 */
  push32((uint32_t)(0x0u));
  /* 10109a3d push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10109a3f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10109a42 mov edi, esp */
  EDI = (ESP);
  /* 10109a44 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10109a45 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10109a46 movsw word ptr es:[edi], word ptr [esi] */
  w16(EDI, r16(ESI)); ESI+=(C.df?-2:2); EDI+=(C.df?-2:2);
  /* 10109a48 call 0x1010ccc7 */
  push32(0x10109a4du); f_1010ccc7();
  /* 10109a4d mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10109a50 mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 10109a53 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 10109a56 movsx eax, byte ptr [ebp - 0x26] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x26))));
  /* 10109a5a mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10109a5c movsx eax, word ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x28))));
  /* 10109a60 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 10109a63 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 10109a66 push eax */
  push32((uint32_t)(EAX));
  /* 10109a67 push edi */
  push32((uint32_t)(EDI));
  /* 10109a68 call 0x10109b30 */
  push32(0x10109a6du); f_10109b30();
  /* 10109a6d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10109a70 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
  /* 10109a73 mov eax, esi */
  EAX = (ESI);
  /* 10109a75 pop edi */
  EDI = (pop32());
  /* 10109a76 pop esi */
  ESI = (pop32());
  /* 10109a77 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10109a78 ret  */
  ESPCHK(0x10109a1du, _esp0);
  ESP += 4; return;
}

/* FUN_10009a79 @ 0x10109a79 (182 bytes, 70 insns) */
void f_10109a79(void) {
  FTRACE(0x10109a79u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10109a79 push ebp */
  push32((uint32_t)(EBP));
  /* 10109a7a mov ebp, esp */
  EBP = (ESP);
  /* 10109a7c push ecx */
  push32((uint32_t)(ECX));
  /* 10109a7d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10109a80 push ebx */
  push32((uint32_t)(EBX));
  /* 10109a81 push esi */
  push32((uint32_t)(ESI));
  /* 10109a82 push edi */
  push32((uint32_t)(EDI));
  /* 10109a83 mov ax, word ptr [edx + 6] */
  AX = (r16((uint32_t)(EDX + 0x6)));
  /* 10109a87 mov edi, 0x7ff */
  EDI = (0x7ffu);
  /* 10109a8c mov ecx, eax */
  ECX = (EAX);
  /* 10109a8e and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10109a93 shr ecx, 4 */
  ECX = (sh_shr((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10109a96 and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10109a98 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10109a9b mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10109a9e mov edx, dword ptr [edx] */
  EDX = (r32((uint32_t)(EDX)));
  /* 10109aa0 movzx ebx, cx */
  EBX = ((uint32_t)(CX));
  /* 10109aa3 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 10109aa8 and eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10109aad test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10109aaf mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 10109ab2 je 0x10109ac7 */
  if (C.zf) goto L_10109ac7;
  /* 10109ab4 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10109ab6 je 0x10109ac0 */
  if (C.zf) goto L_10109ac0;
  /* 10109ab8 lea edi, [ecx + 0x3c00] */
  EDI = ((uint32_t)(ECX + 0x3c00));
  /* 10109abe jmp 0x10109ae8 */
  goto L_10109ae8;
L_10109ac0:;
  /* 10109ac0 mov edi, 0x7fff */
  EDI = (0x7fffu);
  /* 10109ac5 jmp 0x10109ae8 */
  goto L_10109ae8;
L_10109ac7:;
  /* 10109ac7 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10109ac9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10109acb jne 0x10109adf */
  if (!C.zf) goto L_10109adf;
  /* 10109acd cmp edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10109acf jne 0x10109adf */
  if (!C.zf) goto L_10109adf;
  /* 10109ad1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10109ad4 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 10109ad7 mov dword ptr [eax], ebx */
  w32((uint32_t)(EAX), (EBX));
  /* 10109ad9 mov word ptr [eax + 8], bx */
  w16((uint32_t)(EAX + 0x8), (BX));
  /* 10109add jmp 0x10109b2a */
  goto L_10109b2a;
L_10109adf:;
  /* 10109adf lea edi, [ecx + 0x3c01] */
  EDI = ((uint32_t)(ECX + 0x3c01));
  /* 10109ae5 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
L_10109ae8:;
  /* 10109ae8 mov ecx, edx */
  ECX = (EDX);
  /* 10109aea shr ecx, 0x15 */
  ECX = (sh_shr((uint32_t)(ECX), (0x15u)&0x1f, 32));
  /* 10109aed shl eax, 0xb */
  EAX = (sh_shl((uint32_t)(EAX), (0xbu)&0x1f, 32));
  /* 10109af0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10109af2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10109af5 or ecx, dword ptr [ebp - 4] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x4))); ECX = (_r); fl_logic(_r,32); }
  /* 10109af8 shl edx, 0xb */
  EDX = (sh_shl((uint32_t)(EDX), (0xbu)&0x1f, 32));
  /* 10109afb mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10109afe mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10109b00:;
  /* 10109b00 test esi, ecx */
  { uint32_t _r=(ESI)&(ECX); fl_logic(_r,32); }
  /* 10109b02 jne 0x10109b21 */
  if (!C.zf) goto L_10109b21;
  /* 10109b04 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10109b06 add ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10109b08 mov ebx, edx */
  EBX = (EDX);
  /* 10109b0a shr ebx, 0x1f */
  EBX = (sh_shr((uint32_t)(EBX), (0x1fu)&0x1f, 32));
  /* 10109b0d or ebx, ecx */
  { uint32_t _r=(EBX)|(ECX); EBX = (_r); fl_logic(_r,32); }
  /* 10109b0f lea ecx, [edx + edx] */
  ECX = ((uint32_t)(EDX + EDX*1));
  /* 10109b12 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10109b14 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 10109b17 add edi, 0xffff */
  { uint32_t _a=(EDI),_b=(0xffffu),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10109b1d mov ecx, ebx */
  ECX = (EBX);
  /* 10109b1f jmp 0x10109b00 */
  goto L_10109b00;
L_10109b21:;
  /* 10109b21 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10109b24 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10109b26 mov word ptr [eax + 8], cx */
  w16((uint32_t)(EAX + 0x8), (CX));
L_10109b2a:;
  /* 10109b2a pop edi */
  EDI = (pop32());
  /* 10109b2b pop esi */
  ESI = (pop32());
  /* 10109b2c pop ebx */
  EBX = (pop32());
  /* 10109b2d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10109b2e ret  */
  ESPCHK(0x10109a79u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b30 @ 0x10109b30 (7 bytes, 3 insns) */
void f_10109b30(void) {
  FTRACE(0x10109b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10109b30 push edi */
  push32((uint32_t)(EDI));
  /* 10109b31 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10109b35 jmp 0x10109ba1 */
  jmp_ind(0x10109ba1u); return;
}

/* FUN_10009b40 @ 0x10109b40 (224 bytes, 84 insns) */
void f_10109b40(void) {
  FTRACE(0x10109b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10109b40 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10109b44 push edi */
  push32((uint32_t)(EDI));
  /* 10109b45 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10109b4b je 0x10109b5c */
  if (C.zf) goto L_10109b5c;
L_10109b4d:;
  /* 10109b4d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10109b4f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10109b50 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10109b52 je 0x10109b8f */
  if (C.zf) goto L_10109b8f;
  /* 10109b54 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10109b5a jne 0x10109b4d */
  if (!C.zf) goto L_10109b4d;
L_10109b5c:;
  /* 10109b5c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10109b5e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10109b63 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10109b65 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10109b68 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10109b6a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10109b6d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10109b72 je 0x10109b5c */
  if (C.zf) goto L_10109b5c;
  /* 10109b74 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10109b77 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10109b79 je 0x10109b9e */
  if (C.zf) goto L_10109b9e;
  /* 10109b7b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10109b7d je 0x10109b99 */
  if (C.zf) goto L_10109b99;
  /* 10109b7f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10109b84 je 0x10109b94 */
  if (C.zf) goto L_10109b94;
  /* 10109b86 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10109b8b je 0x10109b8f */
  if (C.zf) goto L_10109b8f;
  /* 10109b8d jmp 0x10109b5c */
  goto L_10109b5c;
L_10109b8f:;
  /* 10109b8f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10109b92 jmp 0x10109ba1 */
  goto L_10109ba1;
L_10109b94:;
  /* 10109b94 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10109b97 jmp 0x10109ba1 */
  goto L_10109ba1;
L_10109b99:;
  /* 10109b99 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10109b9c jmp 0x10109ba1 */
  goto L_10109ba1;
L_10109b9e:;
  /* 10109b9e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10109ba1:;
  /* 10109ba1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10109ba5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10109bab je 0x10109bc6 */
  if (C.zf) goto L_10109bc6;
L_10109bad:;
  /* 10109bad mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10109baf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10109bb0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10109bb2 je 0x10109c18 */
  if (C.zf) goto L_10109c18;
  /* 10109bb4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10109bb6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10109bb7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10109bbd jne 0x10109bad */
  if (!C.zf) goto L_10109bad;
  /* 10109bbf jmp 0x10109bc6 */
  goto L_10109bc6;
L_10109bc1:;
  /* 10109bc1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10109bc3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10109bc6:;
  /* 10109bc6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10109bcb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10109bcd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10109bcf xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10109bd2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10109bd4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10109bd6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10109bd9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10109bde je 0x10109bc1 */
  if (C.zf) goto L_10109bc1;
  /* 10109be0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10109be2 je 0x10109c18 */
  if (C.zf) goto L_10109c18;
  /* 10109be4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10109be6 je 0x10109c0f */
  if (C.zf) goto L_10109c0f;
  /* 10109be8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10109bee je 0x10109c02 */
  if (C.zf) goto L_10109c02;
  /* 10109bf0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10109bf6 je 0x10109bfa */
  if (C.zf) goto L_10109bfa;
  /* 10109bf8 jmp 0x10109bc1 */
  goto L_10109bc1;
L_10109bfa:;
  /* 10109bfa mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10109bfc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10109c00 pop edi */
  EDI = (pop32());
  /* 10109c01 ret  */
  ESPCHK(0x10109b40u, _esp0);
  ESP += 4; return;
L_10109c02:;
  /* 10109c02 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10109c05 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10109c09 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10109c0d pop edi */
  EDI = (pop32());
  /* 10109c0e ret  */
  ESPCHK(0x10109b40u, _esp0);
  ESP += 4; return;
L_10109c0f:;
  /* 10109c0f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10109c12 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10109c16 pop edi */
  EDI = (pop32());
  /* 10109c17 ret  */
  ESPCHK(0x10109b40u, _esp0);
  ESP += 4; return;
L_10109c18:;
  /* 10109c18 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10109c1a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10109c1e pop edi */
  EDI = (pop32());
  /* 10109c1f ret  */
  ESPCHK(0x10109b40u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10109c20 (88 bytes, 40 insns) */
void f_10109c20(void) {
  FTRACE(0x10109c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10109c20 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10109c24 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10109c28 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10109c2a je 0x10109c73 */
  if (C.zf) goto L_10109c73;
  /* 10109c2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10109c2e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10109c32 push edi */
  push32((uint32_t)(EDI));
  /* 10109c33 mov edi, ecx */
  EDI = (ECX);
  /* 10109c35 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10109c38 jb 0x10109c67 */
  if (C.cf) goto L_10109c67;
  /* 10109c3a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10109c3c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10109c3f je 0x10109c49 */
  if (C.zf) goto L_10109c49;
  /* 10109c41 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10109c43:;
  /* 10109c43 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10109c45 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10109c46 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10109c47 jne 0x10109c43 */
  if (!C.zf) goto L_10109c43;
L_10109c49:;
  /* 10109c49 mov ecx, eax */
  ECX = (EAX);
  /* 10109c4b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10109c4e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10109c50 mov ecx, eax */
  ECX = (EAX);
  /* 10109c52 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10109c55 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10109c57 mov ecx, edx */
  ECX = (EDX);
  /* 10109c59 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10109c5c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10109c5f je 0x10109c67 */
  if (C.zf) goto L_10109c67;
  /* 10109c61 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10109c63 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10109c65 je 0x10109c6d */
  if (C.zf) goto L_10109c6d;
L_10109c67:;
  /* 10109c67 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10109c69 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10109c6a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10109c6b jne 0x10109c67 */
  if (!C.zf) goto L_10109c67;
L_10109c6d:;
  /* 10109c6d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10109c71 pop edi */
  EDI = (pop32());
  /* 10109c72 ret  */
  ESPCHK(0x10109c20u, _esp0);
  ESP += 4; return;
L_10109c73:;
  /* 10109c73 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10109c77 ret  */
  ESPCHK(0x10109c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c80 @ 0x10109c80 (664 bytes, 266 insns) [15 switch table(s)] */
void f_10109c80(void) {
  FTRACE(0x10109c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10109c80 push ebp */
  push32((uint32_t)(EBP));
  /* 10109c81 mov ebp, esp */
  EBP = (ESP);
  /* 10109c83 push edi */
  push32((uint32_t)(EDI));
  /* 10109c84 push esi */
  push32((uint32_t)(ESI));
  /* 10109c85 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10109c88 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10109c8b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10109c8e mov eax, ecx */
  EAX = (ECX);
  /* 10109c90 mov edx, ecx */
  EDX = (ECX);
  /* 10109c92 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10109c94 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10109c96 jbe 0x10109ca0 */
  if ((C.cf||C.zf)) goto L_10109ca0;
  /* 10109c98 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10109c9a jb 0x10109e18 */
  if (C.cf) goto L_10109e18;
L_10109ca0:;
  /* 10109ca0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10109ca6 jne 0x10109cbc */
  if (!C.zf) goto L_10109cbc;
  /* 10109ca8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10109cab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10109cae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10109cb1 jb 0x10109cdc */
  if (C.cf) goto L_10109cdc;
  /* 10109cb3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10109cb5 jmp dword ptr [edx*4 + 0x10109dc8] */
  switch (EDX) {
    case 0: goto L_10109dd8;
    case 1: goto L_10109de0;
    case 2: goto L_10109dec;
    case 3: goto L_10109e00;
    default: x86_unimpl("switch@0x10109cb5 out of table"); return;
  }
L_10109cbc:;
  /* 10109cbc mov eax, edi */
  EAX = (EDI);
  /* 10109cbe mov edx, 3 */
  EDX = (0x3u);
  /* 10109cc3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10109cc6 jb 0x10109cd4 */
  if (C.cf) goto L_10109cd4;
  /* 10109cc8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10109ccb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10109ccd jmp dword ptr [eax*4 + 0x10109ce0] */
  switch (EAX) {
    case 1: goto L_10109cf0;
    case 2: goto L_10109d1c;
    case 3: goto L_10109d40;
    default: x86_unimpl("switch@0x10109ccd out of table"); return;
  }
L_10109cd4:;
  /* 10109cd4 jmp dword ptr [ecx*4 + 0x10109dd8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10109dd8)))); return;
  /* 10109cdb nop  */
  /* nop */
L_10109cdc:;
  /* 10109cdc jmp dword ptr [ecx*4 + 0x10109d5c] */
  switch (ECX) {
    case 0: goto L_10109dbf;
    case 1: goto L_10109dac;
    case 2: goto L_10109da4;
    case 3: goto L_10109d9c;
    case 4: goto L_10109d94;
    case 5: goto L_10109d8c;
    case 6: goto L_10109d84;
    case 7: goto L_10109d7c;
    default: x86_unimpl("switch@0x10109cdc out of table"); return;
  }
  /* 10109ce3 nop  */
  /* nop */
L_10109cf0:;
  /* 10109cf0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10109cf2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10109cf4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10109cf6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10109cf9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10109cfc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10109cff shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10109d02 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10109d05 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10109d08 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10109d0b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10109d0e jb 0x10109cdc */
  if (C.cf) goto L_10109cdc;
  /* 10109d10 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10109d12 jmp dword ptr [edx*4 + 0x10109dc8] */
  switch (EDX) {
    case 0: goto L_10109dd8;
    case 1: goto L_10109de0;
    case 2: goto L_10109dec;
    case 3: goto L_10109e00;
    default: x86_unimpl("switch@0x10109d12 out of table"); return;
  }
  /* 10109d19 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10109d1c:;
  /* 10109d1c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10109d1e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10109d20 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10109d22 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10109d25 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10109d28 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10109d2b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10109d2e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10109d31 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10109d34 jb 0x10109cdc */
  if (C.cf) goto L_10109cdc;
  /* 10109d36 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10109d38 jmp dword ptr [edx*4 + 0x10109dc8] */
  switch (EDX) {
    case 0: goto L_10109dd8;
    case 1: goto L_10109de0;
    case 2: goto L_10109dec;
    case 3: goto L_10109e00;
    default: x86_unimpl("switch@0x10109d38 out of table"); return;
  }
  /* 10109d3f nop  */
  /* nop */
L_10109d40:;
  /* 10109d40 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10109d42 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10109d44 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10109d46 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10109d47 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10109d4a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10109d4b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10109d4e jb 0x10109cdc */
  if (C.cf) goto L_10109cdc;
  /* 10109d50 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10109d52 jmp dword ptr [edx*4 + 0x10109dc8] */
  switch (EDX) {
    case 0: goto L_10109dd8;
    case 1: goto L_10109de0;
    case 2: goto L_10109dec;
    case 3: goto L_10109e00;
    default: x86_unimpl("switch@0x10109d52 out of table"); return;
  }
  /* 10109d59 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10109d7c:;
  /* 10109d7c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10109d80 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10109d84:;
  /* 10109d84 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10109d88 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10109d8c:;
  /* 10109d8c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10109d90 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10109d94:;
  /* 10109d94 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10109d98 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10109d9c:;
  /* 10109d9c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10109da0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10109da4:;
  /* 10109da4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10109da8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10109dac:;
  /* 10109dac mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10109db0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10109db4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10109dbb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10109dbd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10109dbf:;
  /* 10109dbf jmp dword ptr [edx*4 + 0x10109dc8] */
  switch (EDX) {
    case 0: goto L_10109dd8;
    case 1: goto L_10109de0;
    case 2: goto L_10109dec;
    case 3: goto L_10109e00;
    default: x86_unimpl("switch@0x10109dbf out of table"); return;
  }
  /* 10109dc6 mov edi, edi */
  EDI = (EDI);
L_10109dd8:;
  /* 10109dd8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10109ddb pop esi */
  ESI = (pop32());
  /* 10109ddc pop edi */
  EDI = (pop32());
  /* 10109ddd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10109dde ret  */
  ESPCHK(0x10109c80u, _esp0);
  ESP += 4; return;
  /* 10109ddf nop  */
  /* nop */
L_10109de0:;
  /* 10109de0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10109de2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10109de4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10109de7 pop esi */
  ESI = (pop32());
  /* 10109de8 pop edi */
  EDI = (pop32());
  /* 10109de9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10109dea ret  */
  ESPCHK(0x10109c80u, _esp0);
  ESP += 4; return;
  /* 10109deb nop  */
  /* nop */
L_10109dec:;
  /* 10109dec mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10109dee mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10109df0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10109df3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10109df6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10109df9 pop esi */
  ESI = (pop32());
  /* 10109dfa pop edi */
  EDI = (pop32());
  /* 10109dfb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10109dfc ret  */
  ESPCHK(0x10109c80u, _esp0);
  ESP += 4; return;
  /* 10109dfd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10109e00:;
  /* 10109e00 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10109e02 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10109e04 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10109e07 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10109e0a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10109e0d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10109e10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10109e13 pop esi */
  ESI = (pop32());
  /* 10109e14 pop edi */
  EDI = (pop32());
  /* 10109e15 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10109e16 ret  */
  ESPCHK(0x10109c80u, _esp0);
  ESP += 4; return;
  /* 10109e17 nop  */
  /* nop */
L_10109e18:;
  /* 10109e18 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10109e1c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10109e20 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10109e26 jne 0x10109e4c */
  if (!C.zf) goto L_10109e4c;
  /* 10109e28 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10109e2b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10109e2e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10109e31 jb 0x10109e40 */
  if (C.cf) goto L_10109e40;
  /* 10109e33 std  */
  C.df=1;
  /* 10109e34 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10109e36 cld  */
  C.df=0;
  /* 10109e37 jmp dword ptr [edx*4 + 0x10109f60] */
  switch (EDX) {
    case 0: goto L_10109f70;
    case 1: goto L_10109f78;
    case 2: goto L_10109f88;
    case 3: goto L_10109f9c;
    default: x86_unimpl("switch@0x10109e37 out of table"); return;
  }
  /* 10109e3e mov edi, edi */
  EDI = (EDI);
L_10109e40:;
  /* 10109e40 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10109e42 jmp dword ptr [ecx*4 + 0x10109f10] */
  switch (ECX) {
    case 0: goto L_10109f57;
    default: x86_unimpl("switch@0x10109e42 out of table"); return;
  }
  /* 10109e49 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10109e4c:;
  /* 10109e4c mov eax, edi */
  EAX = (EDI);
  /* 10109e4e mov edx, 3 */
  EDX = (0x3u);
  /* 10109e53 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10109e56 jb 0x10109e64 */
  if (C.cf) goto L_10109e64;
  /* 10109e58 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10109e5b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10109e5d jmp dword ptr [eax*4 + 0x10109e68] */
  switch (EAX) {
    case 1: goto L_10109e78;
    case 2: goto L_10109e98;
    case 3: goto L_10109ec0;
    default: x86_unimpl("switch@0x10109e5d out of table"); return;
  }
L_10109e64:;
  /* 10109e64 jmp dword ptr [ecx*4 + 0x10109f60] */
  switch (ECX) {
    case 0: goto L_10109f70;
    case 1: goto L_10109f78;
    case 2: goto L_10109f88;
    case 3: goto L_10109f9c;
    default: x86_unimpl("switch@0x10109e64 out of table"); return;
  }
  /* 10109e6b nop  */
  /* nop */
L_10109e78:;
  /* 10109e78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10109e7b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10109e7d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10109e80 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10109e81 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10109e84 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10109e85 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10109e88 jb 0x10109e40 */
  if (C.cf) goto L_10109e40;
  /* 10109e8a std  */
  C.df=1;
  /* 10109e8b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10109e8d cld  */
  C.df=0;
  /* 10109e8e jmp dword ptr [edx*4 + 0x10109f60] */
  switch (EDX) {
    case 0: goto L_10109f70;
    case 1: goto L_10109f78;
    case 2: goto L_10109f88;
    case 3: goto L_10109f9c;
    default: x86_unimpl("switch@0x10109e8e out of table"); return;
  }
  /* 10109e95 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10109e98:;
  /* 10109e98 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10109e9b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10109e9d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10109ea0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10109ea3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10109ea6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10109ea9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10109eac sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10109eaf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10109eb2 jb 0x10109e40 */
  if (C.cf) goto L_10109e40;
  /* 10109eb4 std  */
  C.df=1;
  /* 10109eb5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10109eb7 cld  */
  C.df=0;
  /* 10109eb8 jmp dword ptr [edx*4 + 0x10109f60] */
  switch (EDX) {
    case 0: goto L_10109f70;
    case 1: goto L_10109f78;
    case 2: goto L_10109f88;
    case 3: goto L_10109f9c;
    default: x86_unimpl("switch@0x10109eb8 out of table"); return;
  }
  /* 10109ebf nop  */
  /* nop */
L_10109ec0:;
  /* 10109ec0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10109ec3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10109ec5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10109ec8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10109ecb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10109ece mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10109ed1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10109ed4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10109ed7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10109eda sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10109edd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10109ee0 jb 0x10109e40 */
  if (C.cf) goto L_10109e40;
  /* 10109ee6 std  */
  C.df=1;
  /* 10109ee7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10109ee9 cld  */
  C.df=0;
  /* 10109eea jmp dword ptr [edx*4 + 0x10109f60] */
  switch (EDX) {
    case 0: goto L_10109f70;
    case 1: goto L_10109f78;
    case 2: goto L_10109f88;
    case 3: goto L_10109f9c;
    default: x86_unimpl("switch@0x10109eea out of table"); return;
  }
  /* 10109ef1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10109ef4 adc al, 0x9f */
  { uint32_t _a=(AL),_b=(0x9fu),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10109ef6 adc byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10109ef8 sbb al, 0x9f */
  { uint32_t _a=(AL),_b=(0x9fu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10109efa adc byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10109efc and al, 0x9f */
  { uint32_t _r=(AL)&(0x9fu); AL = (_r); fl_logic(_r,8); }
  /* 10109efe adc byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10109f00 sub al, 0x9f */
  { uint32_t _a=(AL),_b=(0x9fu),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10109f02 adc byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10109f04 xor al, 0x9f */
  { uint32_t _r=(AL)^(0x9fu); AL = (_r); fl_logic(_r,8); }
  /* 10109f06 adc byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10109f08 cmp al, 0x9f */
  { uint32_t _a=(AL),_b=(0x9fu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10109f0a adc byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10109f0c inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 10109f0d lahf  */
  AH=(uint8_t)((C.sf<<7)|(C.zf<<6)|(C.af<<4)|(C.pf<<2)|0x02u|C.cf);
  /* 10109f0e adc byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 10109f14 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10109f18 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10109f1c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10109f20 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10109f24 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10109f28 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10109f2c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10109f30 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10109f34 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10109f38 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10109f3c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10109f40 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10109f44 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10109f48 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10109f4c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10109f53 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10109f55 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10109f57:;
  /* 10109f57 jmp dword ptr [edx*4 + 0x10109f60] */
  switch (EDX) {
    case 0: goto L_10109f70;
    case 1: goto L_10109f78;
    case 2: goto L_10109f88;
    case 3: goto L_10109f9c;
    default: x86_unimpl("switch@0x10109f57 out of table"); return;
  }
  /* 10109f5e mov edi, edi */
  EDI = (EDI);
L_10109f70:;
  /* 10109f70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10109f73 pop esi */
  ESI = (pop32());
  /* 10109f74 pop edi */
  EDI = (pop32());
  /* 10109f75 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10109f76 ret  */
  ESPCHK(0x10109c80u, _esp0);
  ESP += 4; return;
  /* 10109f77 nop  */
  /* nop */
L_10109f78:;
  /* 10109f78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10109f7b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10109f7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10109f81 pop esi */
  ESI = (pop32());
  /* 10109f82 pop edi */
  EDI = (pop32());
  /* 10109f83 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10109f84 ret  */
  ESPCHK(0x10109c80u, _esp0);
  ESP += 4; return;
  /* 10109f85 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10109f88:;
  /* 10109f88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10109f8b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10109f8e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10109f91 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10109f94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10109f97 pop esi */
  ESI = (pop32());
  /* 10109f98 pop edi */
  EDI = (pop32());
  /* 10109f99 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10109f9a ret  */
  ESPCHK(0x10109c80u, _esp0);
  ESP += 4; return;
  /* 10109f9b nop  */
  /* nop */
L_10109f9c:;
  /* 10109f9c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10109f9f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10109fa2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10109fa5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10109fa8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10109fab mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10109fae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10109fb1 pop esi */
  ESI = (pop32());
  /* 10109fb2 pop edi */
  EDI = (pop32());
  /* 10109fb3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10109fb4 ret  */
  ESPCHK(0x10109c80u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x10109fb5 (9 bytes, 4 insns) */
void f_10109fb5(void) {
  FTRACE(0x10109fb5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10109fb5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10109fb7 call 0x101070f1 */
  push32(0x10109fbcu); f_101070f1();
  /* 10109fbc pop ecx */
  ECX = (pop32());
  /* 10109fbd ret  */
  ESPCHK(0x10109fb5u, _esp0);
  ESP += 4; return;
}

/* FUN_10009fbe @ 0x10109fbe (41 bytes, 12 insns) */
void f_10109fbe(void) {
  FTRACE(0x10109fbeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10109fbe push esi */
  push32((uint32_t)(ESI));
  /* 10109fbf mov esi, dword ptr [0x1010e094] */
  ESI = (r32((uint32_t)(0x1010e094)));
  /* 10109fc5 push dword ptr [0x10110db4] */
  push32((uint32_t)(r32((uint32_t)(0x10110db4))));
  /* 10109fcb call esi */
  call_ind((uint32_t)(ESI), 0x10109fcdu);
  /* 10109fcd push dword ptr [0x10110da4] */
  push32((uint32_t)(r32((uint32_t)(0x10110da4))));
  /* 10109fd3 call esi */
  call_ind((uint32_t)(ESI), 0x10109fd5u);
  /* 10109fd5 push dword ptr [0x10110d94] */
  push32((uint32_t)(r32((uint32_t)(0x10110d94))));
  /* 10109fdb call esi */
  call_ind((uint32_t)(ESI), 0x10109fddu);
  /* 10109fdd push dword ptr [0x10110d74] */
  push32((uint32_t)(r32((uint32_t)(0x10110d74))));
  /* 10109fe3 call esi */
  call_ind((uint32_t)(ESI), 0x10109fe5u);
  /* 10109fe5 pop esi */
  ESI = (pop32());
  /* 10109fe6 ret  */
  ESPCHK(0x10109fbeu, _esp0);
  ESP += 4; return;
}

/* FUN_10009fe7 @ 0x10109fe7 (108 bytes, 34 insns) */
void f_10109fe7(void) {
  FTRACE(0x10109fe7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10109fe7 push esi */
  push32((uint32_t)(ESI));
  /* 10109fe8 push edi */
  push32((uint32_t)(EDI));
  /* 10109fe9 mov edi, dword ptr [0x1010e050] */
  EDI = (r32((uint32_t)(0x1010e050)));
  /* 10109fef mov esi, 0x10110d70 */
  ESI = (0x10110d70u);
L_10109ff4:;
  /* 10109ff4 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10109ff6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10109ff8 je 0x1010a025 */
  if (C.zf) goto L_1010a025;
  /* 10109ffa cmp esi, 0x10110db4 */
  { uint32_t _a=(ESI),_b=(0x10110db4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a000 je 0x1010a025 */
  if (C.zf) goto L_1010a025;
  /* 1010a002 cmp esi, 0x10110da4 */
  { uint32_t _a=(ESI),_b=(0x10110da4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a008 je 0x1010a025 */
  if (C.zf) goto L_1010a025;
  /* 1010a00a cmp esi, 0x10110d94 */
  { uint32_t _a=(ESI),_b=(0x10110d94u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a010 je 0x1010a025 */
  if (C.zf) goto L_1010a025;
  /* 1010a012 cmp esi, 0x10110d74 */
  { uint32_t _a=(ESI),_b=(0x10110d74u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a018 je 0x1010a025 */
  if (C.zf) goto L_1010a025;
  /* 1010a01a push eax */
  push32((uint32_t)(EAX));
  /* 1010a01b call edi */
  call_ind((uint32_t)(EDI), 0x1010a01du);
  /* 1010a01d push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1010a01f call 0x1010a206 */
  push32(0x1010a024u); f_1010a206();
  /* 1010a024 pop ecx */
  ECX = (pop32());
L_1010a025:;
  /* 1010a025 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1010a028 cmp esi, 0x10110e30 */
  { uint32_t _a=(ESI),_b=(0x10110e30u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a02e jl 0x10109ff4 */
  if ((C.sf!=C.of)) goto L_10109ff4;
  /* 1010a030 push dword ptr [0x10110d94] */
  push32((uint32_t)(r32((uint32_t)(0x10110d94))));
  /* 1010a036 call edi */
  call_ind((uint32_t)(EDI), 0x1010a038u);
  /* 1010a038 push dword ptr [0x10110da4] */
  push32((uint32_t)(r32((uint32_t)(0x10110da4))));
  /* 1010a03e call edi */
  call_ind((uint32_t)(EDI), 0x1010a040u);
  /* 1010a040 push dword ptr [0x10110db4] */
  push32((uint32_t)(r32((uint32_t)(0x10110db4))));
  /* 1010a046 call edi */
  call_ind((uint32_t)(EDI), 0x1010a048u);
  /* 1010a048 push dword ptr [0x10110d74] */
  push32((uint32_t)(r32((uint32_t)(0x10110d74))));
  /* 1010a04e call edi */
  call_ind((uint32_t)(EDI), 0x1010a050u);
  /* 1010a050 pop edi */
  EDI = (pop32());
  /* 1010a051 pop esi */
  ESI = (pop32());
  /* 1010a052 ret  */
  ESPCHK(0x10109fe7u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a053 @ 0x1010a053 (97 bytes, 37 insns) */
void f_1010a053(void) {
  FTRACE(0x1010a053u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010a053 push ebp */
  push32((uint32_t)(EBP));
  /* 1010a054 mov ebp, esp */
  EBP = (ESP);
  /* 1010a056 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1010a059 push esi */
  push32((uint32_t)(ESI));
  /* 1010a05a cmp dword ptr [eax*4 + 0x10110d70], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10110d70))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a062 lea esi, [eax*4 + 0x10110d70] */
  ESI = ((uint32_t)(EAX*4 + 0x10110d70));
  /* 1010a069 jne 0x1010a0a9 */
  if (!C.zf) goto L_1010a0a9;
  /* 1010a06b push edi */
  push32((uint32_t)(EDI));
  /* 1010a06c push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1010a06e call 0x1010a2ef */
  push32(0x1010a073u); f_1010a2ef();
  /* 1010a073 mov edi, eax */
  EDI = (EAX);
  /* 1010a075 pop ecx */
  ECX = (pop32());
  /* 1010a076 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1010a078 jne 0x1010a082 */
  if (!C.zf) goto L_1010a082;
  /* 1010a07a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1010a07c call 0x101070f1 */
  push32(0x1010a081u); f_101070f1();
  /* 1010a081 pop ecx */
  ECX = (pop32());
L_1010a082:;
  /* 1010a082 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1010a084 call 0x1010a053 */
  push32(0x1010a089u); f_1010a053();
  /* 1010a089 cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a08c pop ecx */
  ECX = (pop32());
  /* 1010a08d push edi */
  push32((uint32_t)(EDI));
  /* 1010a08e jne 0x1010a09a */
  if (!C.zf) goto L_1010a09a;
  /* 1010a090 call dword ptr [0x1010e094] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e094))), 0x1010a096u);
  /* 1010a096 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1010a098 jmp 0x1010a0a0 */
  goto L_1010a0a0;
L_1010a09a:;
  /* 1010a09a call 0x1010a206 */
  push32(0x1010a09fu); f_1010a206();
  /* 1010a09f pop ecx */
  ECX = (pop32());
L_1010a0a0:;
  /* 1010a0a0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1010a0a2 call 0x1010a0b4 */
  push32(0x1010a0a7u); f_1010a0b4();
  /* 1010a0a7 pop ecx */
  ECX = (pop32());
  /* 1010a0a8 pop edi */
  EDI = (pop32());
L_1010a0a9:;
  /* 1010a0a9 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1010a0ab call dword ptr [0x1010e00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e00c))), 0x1010a0b1u);
  /* 1010a0b1 pop esi */
  ESI = (pop32());
  /* 1010a0b2 pop ebp */
  EBP = (pop32());
  /* 1010a0b3 ret  */
  ESPCHK(0x1010a053u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a0b4 @ 0x1010a0b4 (21 bytes, 7 insns) */
void f_1010a0b4(void) {
  FTRACE(0x1010a0b4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010a0b4 push ebp */
  push32((uint32_t)(EBP));
  /* 1010a0b5 mov ebp, esp */
  EBP = (ESP);
  /* 1010a0b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1010a0ba push dword ptr [eax*4 + 0x10110d70] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x10110d70))));
  /* 1010a0c1 call dword ptr [0x1010e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e008))), 0x1010a0c7u);
  /* 1010a0c7 pop ebp */
  EBP = (pop32());
  /* 1010a0c8 ret  */
  ESPCHK(0x1010a0b4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a0c9 @ 0x1010a0c9 (289 bytes, 98 insns) */
void f_1010a0c9(void) {
  FTRACE(0x1010a0c9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010a0c9 push ebp */
  push32((uint32_t)(EBP));
  /* 1010a0ca mov ebp, esp */
  EBP = (ESP);
  /* 1010a0cc push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1010a0ce push 0x1010e4d0 */
  push32((uint32_t)(0x1010e4d0u));
  /* 1010a0d3 push 0x1010d070 */
  push32((uint32_t)(0x1010d070u));
  /* 1010a0d8 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1010a0de push eax */
  push32((uint32_t)(EAX));
  /* 1010a0df mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1010a0e6 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010a0e9 push ebx */
  push32((uint32_t)(EBX));
  /* 1010a0ea push esi */
  push32((uint32_t)(ESI));
  /* 1010a0eb push edi */
  push32((uint32_t)(EDI));
  /* 1010a0ec mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1010a0ef imul esi, dword ptr [ebp + 0xc] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0xc)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1010a0f3 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 1010a0f6 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 1010a0f9 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a0fc ja 0x1010a112 */
  if ((!C.cf&&!C.zf)) goto L_1010a112;
  /* 1010a0fe xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1010a100 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a102 jne 0x1010a107 */
  if (!C.zf) goto L_1010a107;
  /* 1010a104 push 1 */
  push32((uint32_t)(0x1u));
  /* 1010a106 pop esi */
  ESI = (pop32());
L_1010a107:;
  /* 1010a107 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1010a10a and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 1010a10d mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 1010a110 jmp 0x1010a114 */
  goto L_1010a114;
L_1010a112:;
  /* 1010a112 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_1010a114:;
  /* 1010a114 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 1010a117 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a11a ja 0x1010a1c8 */
  if ((!C.cf&&!C.zf)) goto L_1010a1c8;
  /* 1010a120 mov eax, dword ptr [0x10117d68] */
  EAX = (r32((uint32_t)(0x10117d68)));
  /* 1010a125 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a128 jne 0x1010a16b */
  if (!C.zf) goto L_1010a16b;
  /* 1010a12a mov edi, dword ptr [ebp - 0x1c] */
  EDI = (r32((uint32_t)(EBP + -0x1c)));
  /* 1010a12d cmp edi, dword ptr [0x10116b20] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(0x10116b20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a133 ja 0x1010a1b1 */
  if ((!C.cf&&!C.zf)) goto L_1010a1b1;
  /* 1010a135 push 9 */
  push32((uint32_t)(0x9u));
  /* 1010a137 call 0x1010a053 */
  push32(0x1010a13cu); f_1010a053();
  /* 1010a13c pop ecx */
  ECX = (pop32());
  /* 1010a13d mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 1010a140 push edi */
  push32((uint32_t)(EDI));
  /* 1010a141 call 0x1010b2db */
  push32(0x1010a146u); f_1010b2db();
  /* 1010a146 pop ecx */
  ECX = (pop32());
  /* 1010a147 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1010a14a or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1010a14e call 0x1010a162 */
  push32(0x1010a153u); f_1010a162();
  /* 1010a153 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a156 je 0x1010a1b6 */
  if (C.zf) goto L_1010a1b6;
  /* 1010a158 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 1010a15b jmp 0x1010a1a5 */
  goto L_1010a1a5;
  /* 1010a15d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1010a15f mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1010a162 push 9 */
  push32((uint32_t)(0x9u));
  /* 1010a164 call 0x1010a0b4 */
  push32(0x1010a169u); f_1010a0b4();
  /* 1010a169 pop ecx */
  ECX = (pop32());
  /* 1010a16a ret  */
  ESPCHK(0x1010a0c9u, _esp0);
  ESP += 4; return;
L_1010a16b:;
  /* 1010a16b cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a16e jne 0x1010a1b1 */
  if (!C.zf) goto L_1010a1b1;
  /* 1010a170 cmp esi, dword ptr [0x10112fd4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10112fd4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a176 ja 0x1010a1b1 */
  if ((!C.cf&&!C.zf)) goto L_1010a1b1;
  /* 1010a178 push 9 */
  push32((uint32_t)(0x9u));
  /* 1010a17a call 0x1010a053 */
  push32(0x1010a17fu); f_1010a053();
  /* 1010a17f pop ecx */
  ECX = (pop32());
  /* 1010a180 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1010a187 mov eax, esi */
  EAX = (ESI);
  /* 1010a189 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1010a18c push eax */
  push32((uint32_t)(EAX));
  /* 1010a18d call 0x1010ba88 */
  push32(0x1010a192u); f_1010ba88();
  /* 1010a192 pop ecx */
  ECX = (pop32());
  /* 1010a193 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1010a196 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1010a19a call 0x1010a1eb */
  push32(0x1010a19fu); f_1010a1eb();
  /* 1010a19f cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a1a2 je 0x1010a1b6 */
  if (C.zf) goto L_1010a1b6;
  /* 1010a1a4 push esi */
  push32((uint32_t)(ESI));
L_1010a1a5:;
  /* 1010a1a5 push ebx */
  push32((uint32_t)(EBX));
  /* 1010a1a6 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 1010a1a9 call 0x10109c20 */
  push32(0x1010a1aeu); f_10109c20();
  /* 1010a1ae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1010a1b1:;
  /* 1010a1b1 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a1b4 jne 0x1010a1f4 */
  if (!C.zf) { jmp_ind(0x1010a1f4u); return; }
L_1010a1b6:;
  /* 1010a1b6 push esi */
  push32((uint32_t)(ESI));
  /* 1010a1b7 push 8 */
  push32((uint32_t)(0x8u));
  /* 1010a1b9 push dword ptr [0x10117d64] */
  push32((uint32_t)(r32((uint32_t)(0x10117d64))));
  /* 1010a1bf call dword ptr [0x1010e098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e098))), 0x1010a1c5u);
  /* 1010a1c5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1010a1c8:;
  /* 1010a1c8 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a1cb jne 0x1010a1f4 */
  if (!C.zf) { jmp_ind(0x1010a1f4u); return; }
  /* 1010a1cd cmp dword ptr [0x101169c0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x101169c0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a1d3 je 0x1010a1f4 */
  if (C.zf) { jmp_ind(0x1010a1f4u); return; }
  /* 1010a1d5 push esi */
  push32((uint32_t)(ESI));
  /* 1010a1d6 call 0x1010cf5a */
  push32(0x1010a1dbu); f_1010cf5a();
  /* 1010a1db pop ecx */
  ECX = (pop32());
  /* 1010a1dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010a1de jne 0x1010a114 */
  if (!C.zf) goto L_1010a114;
  /* 1010a1e4 jmp 0x1010a1f7 */
  jmp_ind(0x1010a1f7u); return;
  /* 1010a1e6 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
}

/* FUN_1000a162 @ 0x1010a162 (9 bytes, 4 insns) */
void f_1010a162(void) {
  FTRACE(0x1010a162u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010a162 push 9 */
  push32((uint32_t)(0x9u));
  /* 1010a164 call 0x1010a0b4 */
  push32(0x1010a169u); f_1010a0b4();
  /* 1010a169 pop ecx */
  ECX = (pop32());
  /* 1010a16a ret  */
  ESPCHK(0x1010a162u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1eb @ 0x1010a1eb (9 bytes, 4 insns) */
void f_1010a1eb(void) {
  FTRACE(0x1010a1ebu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010a1eb push 9 */
  push32((uint32_t)(0x9u));
  /* 1010a1ed call 0x1010a0b4 */
  push32(0x1010a1f2u); f_1010a0b4();
  /* 1010a1f2 pop ecx */
  ECX = (pop32());
  /* 1010a1f3 ret  */
  ESPCHK(0x1010a1ebu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a206 @ 0x1010a206 (215 bytes, 75 insns) */
void f_1010a206(void) {
  FTRACE(0x1010a206u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010a206 push ebp */
  push32((uint32_t)(EBP));
  /* 1010a207 mov ebp, esp */
  EBP = (ESP);
  /* 1010a209 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1010a20b push 0x1010e4e8 */
  push32((uint32_t)(0x1010e4e8u));
  /* 1010a210 push 0x1010d070 */
  push32((uint32_t)(0x1010d070u));
  /* 1010a215 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1010a21b push eax */
  push32((uint32_t)(EAX));
  /* 1010a21c mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1010a223 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010a226 push ebx */
  push32((uint32_t)(EBX));
  /* 1010a227 push esi */
  push32((uint32_t)(ESI));
  /* 1010a228 push edi */
  push32((uint32_t)(EDI));
  /* 1010a229 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1010a22c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1010a22e je 0x1010a2e0 */
  if (C.zf) { jmp_ind(0x1010a2e0u); return; }
  /* 1010a234 mov eax, dword ptr [0x10117d68] */
  EAX = (r32((uint32_t)(0x10117d68)));
  /* 1010a239 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a23c jne 0x1010a279 */
  if (!C.zf) goto L_1010a279;
  /* 1010a23e push 9 */
  push32((uint32_t)(0x9u));
  /* 1010a240 call 0x1010a053 */
  push32(0x1010a245u); f_1010a053();
  /* 1010a245 pop ecx */
  ECX = (pop32());
  /* 1010a246 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1010a24a push esi */
  push32((uint32_t)(ESI));
  /* 1010a24b call 0x1010af87 */
  push32(0x1010a250u); f_1010af87();
  /* 1010a250 pop ecx */
  ECX = (pop32());
  /* 1010a251 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1010a254 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010a256 je 0x1010a261 */
  if (C.zf) goto L_1010a261;
  /* 1010a258 push esi */
  push32((uint32_t)(ESI));
  /* 1010a259 push eax */
  push32((uint32_t)(EAX));
  /* 1010a25a call 0x1010afb2 */
  push32(0x1010a25fu); f_1010afb2();
  /* 1010a25f pop ecx */
  ECX = (pop32());
  /* 1010a260 pop ecx */
  ECX = (pop32());
L_1010a261:;
  /* 1010a261 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1010a265 call 0x1010a270 */
  push32(0x1010a26au); f_1010a270();
  /* 1010a26a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a26e jmp 0x1010a2c1 */
  goto L_1010a2c1;
  /* 1010a270 push 9 */
  push32((uint32_t)(0x9u));
  /* 1010a272 call 0x1010a0b4 */
  push32(0x1010a277u); f_1010a0b4();
  /* 1010a277 pop ecx */
  ECX = (pop32());
  /* 1010a278 ret  */
  ESPCHK(0x1010a206u, _esp0);
  ESP += 4; return;
L_1010a279:;
  /* 1010a279 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a27c jne 0x1010a2d1 */
  if (!C.zf) goto L_1010a2d1;
  /* 1010a27e push 9 */
  push32((uint32_t)(0x9u));
  /* 1010a280 call 0x1010a053 */
  push32(0x1010a285u); f_1010a053();
  /* 1010a285 pop ecx */
  ECX = (pop32());
  /* 1010a286 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1010a28d lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1010a290 push eax */
  push32((uint32_t)(EAX));
  /* 1010a291 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 1010a294 push eax */
  push32((uint32_t)(EAX));
  /* 1010a295 push esi */
  push32((uint32_t)(ESI));
  /* 1010a296 call 0x1010b9ec */
  push32(0x1010a29bu); f_1010b9ec();
  /* 1010a29b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010a29e mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1010a2a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010a2a3 je 0x1010a2b4 */
  if (C.zf) goto L_1010a2b4;
  /* 1010a2a5 push eax */
  push32((uint32_t)(EAX));
  /* 1010a2a6 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 1010a2a9 push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 1010a2ac call 0x1010ba43 */
  push32(0x1010a2b1u); f_1010ba43();
  /* 1010a2b1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1010a2b4:;
  /* 1010a2b4 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1010a2b8 call 0x1010a2c8 */
  push32(0x1010a2bdu); f_1010a2c8();
  /* 1010a2bd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1010a2c1:;
  /* 1010a2c1 jne 0x1010a2e0 */
  if (!C.zf) { jmp_ind(0x1010a2e0u); return; }
  /* 1010a2c3 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1010a2c6 jmp 0x1010a2d2 */
  goto L_1010a2d2;
  /* 1010a2c8 push 9 */
  push32((uint32_t)(0x9u));
  /* 1010a2ca call 0x1010a0b4 */
  push32(0x1010a2cfu); f_1010a0b4();
  /* 1010a2cf pop ecx */
  ECX = (pop32());
  /* 1010a2d0 ret  */
  ESPCHK(0x1010a206u, _esp0);
  ESP += 4; return;
L_1010a2d1:;
  /* 1010a2d1 push esi */
  push32((uint32_t)(ESI));
L_1010a2d2:;
  /* 1010a2d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1010a2d4 push dword ptr [0x10117d64] */
  push32((uint32_t)(r32((uint32_t)(0x10117d64))));
}

/* FUN_1000a270 @ 0x1010a270 (9 bytes, 4 insns) */
void f_1010a270(void) {
  FTRACE(0x1010a270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010a270 push 9 */
  push32((uint32_t)(0x9u));
  /* 1010a272 call 0x1010a0b4 */
  push32(0x1010a277u); f_1010a0b4();
  /* 1010a277 pop ecx */
  ECX = (pop32());
  /* 1010a278 ret  */
  ESPCHK(0x1010a270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2c8 @ 0x1010a2c8 (9 bytes, 4 insns) */
void f_1010a2c8(void) {
  FTRACE(0x1010a2c8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010a2c8 push 9 */
  push32((uint32_t)(0x9u));
  /* 1010a2ca call 0x1010a0b4 */
  push32(0x1010a2cfu); f_1010a0b4();
  /* 1010a2cf pop ecx */
  ECX = (pop32());
  /* 1010a2d0 ret  */
  ESPCHK(0x1010a2c8u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x1010a2ef (18 bytes, 6 insns) */
void f_1010a2ef(void) {
  FTRACE(0x1010a2efu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010a2ef push dword ptr [0x101169c0] */
  push32((uint32_t)(r32((uint32_t)(0x101169c0))));
  /* 1010a2f5 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 1010a2f9 call 0x1010a301 */
  push32(0x1010a2feu); f_1010a301();
  /* 1010a2fe pop ecx */
  ECX = (pop32());
  /* 1010a2ff pop ecx */
  ECX = (pop32());
  /* 1010a300 ret  */
  ESPCHK(0x1010a2efu, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x1010a301 (44 bytes, 16 insns) */
void f_1010a301(void) {
  FTRACE(0x1010a301u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010a301 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a306 ja 0x1010a32a */
  if ((!C.cf&&!C.zf)) goto L_1010a32a;
L_1010a308:;
  /* 1010a308 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1010a30c call 0x1010a32d */
  push32(0x1010a311u); f_1010a32d();
  /* 1010a311 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010a313 pop ecx */
  ECX = (pop32());
  /* 1010a314 jne 0x1010a32c */
  if (!C.zf) goto L_1010a32c;
  /* 1010a316 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a31a je 0x1010a32c */
  if (C.zf) goto L_1010a32c;
  /* 1010a31c push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1010a320 call 0x1010cf5a */
  push32(0x1010a325u); f_1010cf5a();
  /* 1010a325 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010a327 pop ecx */
  ECX = (pop32());
  /* 1010a328 jne 0x1010a308 */
  if (!C.zf) goto L_1010a308;
L_1010a32a:;
  /* 1010a32a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1010a32c:;
  /* 1010a32c ret  */
  ESPCHK(0x1010a301u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a32d @ 0x1010a32d (231 bytes, 81 insns) */
void f_1010a32d(void) {
  FTRACE(0x1010a32du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010a32d push ebp */
  push32((uint32_t)(EBP));
  /* 1010a32e mov ebp, esp */
  EBP = (ESP);
  /* 1010a330 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1010a332 push 0x1010e500 */
  push32((uint32_t)(0x1010e500u));
  /* 1010a337 push 0x1010d070 */
  push32((uint32_t)(0x1010d070u));
  /* 1010a33c mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1010a342 push eax */
  push32((uint32_t)(EAX));
  /* 1010a343 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1010a34a sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010a34d push ebx */
  push32((uint32_t)(EBX));
  /* 1010a34e push esi */
  push32((uint32_t)(ESI));
  /* 1010a34f push edi */
  push32((uint32_t)(EDI));
  /* 1010a350 mov eax, dword ptr [0x10117d68] */
  EAX = (r32((uint32_t)(0x10117d68)));
  /* 1010a355 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a358 jne 0x1010a39d */
  if (!C.zf) goto L_1010a39d;
  /* 1010a35a mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1010a35d cmp esi, dword ptr [0x10116b20] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10116b20))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a363 ja 0x1010a3fc */
  if ((!C.cf&&!C.zf)) goto L_1010a3fc;
  /* 1010a369 push 9 */
  push32((uint32_t)(0x9u));
  /* 1010a36b call 0x1010a053 */
  push32(0x1010a370u); f_1010a053();
  /* 1010a370 pop ecx */
  ECX = (pop32());
  /* 1010a371 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1010a375 push esi */
  push32((uint32_t)(ESI));
  /* 1010a376 call 0x1010b2db */
  push32(0x1010a37bu); f_1010b2db();
  /* 1010a37b pop ecx */
  ECX = (pop32());
  /* 1010a37c mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1010a37f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1010a383 call 0x1010a394 */
  push32(0x1010a388u); f_1010a394();
  /* 1010a388 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1010a38b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010a38d je 0x1010a3fc */
  if (C.zf) goto L_1010a3fc;
  /* 1010a38f jmp 0x1010a41a */
  jmp_ind(0x1010a41au); return;
  /* 1010a394 push 9 */
  push32((uint32_t)(0x9u));
  /* 1010a396 call 0x1010a0b4 */
  push32(0x1010a39bu); f_1010a0b4();
  /* 1010a39b pop ecx */
  ECX = (pop32());
  /* 1010a39c ret  */
  ESPCHK(0x1010a32du, _esp0);
  ESP += 4; return;
L_1010a39d:;
  /* 1010a39d cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a3a0 jne 0x1010a3fc */
  if (!C.zf) goto L_1010a3fc;
  /* 1010a3a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1010a3a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010a3a7 je 0x1010a3b1 */
  if (C.zf) goto L_1010a3b1;
  /* 1010a3a9 lea esi, [eax + 0xf] */
  ESI = ((uint32_t)(EAX + 0xf));
  /* 1010a3ac and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 1010a3af jmp 0x1010a3b4 */
  goto L_1010a3b4;
L_1010a3b1:;
  /* 1010a3b1 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1010a3b3 pop esi */
  ESI = (pop32());
L_1010a3b4:;
  /* 1010a3b4 mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 1010a3b7 cmp esi, dword ptr [0x10112fd4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10112fd4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a3bd ja 0x1010a3ed */
  if ((!C.cf&&!C.zf)) goto L_1010a3ed;
  /* 1010a3bf push 9 */
  push32((uint32_t)(0x9u));
  /* 1010a3c1 call 0x1010a053 */
  push32(0x1010a3c6u); f_1010a053();
  /* 1010a3c6 pop ecx */
  ECX = (pop32());
  /* 1010a3c7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1010a3ce mov eax, esi */
  EAX = (ESI);
  /* 1010a3d0 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1010a3d3 push eax */
  push32((uint32_t)(EAX));
  /* 1010a3d4 call 0x1010ba88 */
  push32(0x1010a3d9u); f_1010ba88();
  /* 1010a3d9 pop ecx */
  ECX = (pop32());
  /* 1010a3da mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1010a3dd or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1010a3e1 call 0x1010a3f3 */
  push32(0x1010a3e6u); f_1010a3f3();
  /* 1010a3e6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1010a3e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010a3eb jne 0x1010a41a */
  if (!C.zf) { jmp_ind(0x1010a41au); return; }
L_1010a3ed:;
  /* 1010a3ed push esi */
  push32((uint32_t)(ESI));
  /* 1010a3ee jmp 0x1010a40c */
  goto L_1010a40c;
  /* 1010a3f0 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1010a3f3 push 9 */
  push32((uint32_t)(0x9u));
  /* 1010a3f5 call 0x1010a0b4 */
  push32(0x1010a3fau); f_1010a0b4();
  /* 1010a3fa pop ecx */
  ECX = (pop32());
  /* 1010a3fb ret  */
  ESPCHK(0x1010a32du, _esp0);
  ESP += 4; return;
L_1010a3fc:;
  /* 1010a3fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1010a3ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010a401 jne 0x1010a406 */
  if (!C.zf) goto L_1010a406;
  /* 1010a403 push 1 */
  push32((uint32_t)(0x1u));
  /* 1010a405 pop eax */
  EAX = (pop32());
L_1010a406:;
  /* 1010a406 add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010a409 and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1010a40b push eax */
  push32((uint32_t)(EAX));
L_1010a40c:;
  /* 1010a40c push 0 */
  push32((uint32_t)(0x0u));
  /* 1010a40e push dword ptr [0x10117d64] */
  push32((uint32_t)(r32((uint32_t)(0x10117d64))));
}

/* FUN_1000a394 @ 0x1010a394 (9 bytes, 4 insns) */
void f_1010a394(void) {
  FTRACE(0x1010a394u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010a394 push 9 */
  push32((uint32_t)(0x9u));
  /* 1010a396 call 0x1010a0b4 */
  push32(0x1010a39bu); f_1010a0b4();
  /* 1010a39b pop ecx */
  ECX = (pop32());
  /* 1010a39c ret  */
  ESPCHK(0x1010a394u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a3f3 @ 0x1010a3f3 (9 bytes, 4 insns) */
void f_1010a3f3(void) {
  FTRACE(0x1010a3f3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010a3f3 push 9 */
  push32((uint32_t)(0x9u));
  /* 1010a3f5 call 0x1010a0b4 */
  push32(0x1010a3fau); f_1010a0b4();
  /* 1010a3fa pop ecx */
  ECX = (pop32());
  /* 1010a3fb ret  */
  ESPCHK(0x1010a3f3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a429 @ 0x1010a429 (429 bytes, 143 insns) */
void f_1010a429(void) {
  FTRACE(0x1010a429u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010a429 push ebp */
  push32((uint32_t)(EBP));
  /* 1010a42a mov ebp, esp */
  EBP = (ESP);
  /* 1010a42c sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010a42f push ebx */
  push32((uint32_t)(EBX));
  /* 1010a430 push esi */
  push32((uint32_t)(ESI));
  /* 1010a431 push edi */
  push32((uint32_t)(EDI));
  /* 1010a432 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1010a434 call 0x1010a053 */
  push32(0x1010a439u); f_1010a053();
  /* 1010a439 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1010a43c call 0x1010a5d6 */
  push32(0x1010a441u); f_1010a5d6();
  /* 1010a441 mov ebx, eax */
  EBX = (EAX);
  /* 1010a443 pop ecx */
  ECX = (pop32());
  /* 1010a444 cmp ebx, dword ptr [0x10116b24] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10116b24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a44a pop ecx */
  ECX = (pop32());
  /* 1010a44b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1010a44e jne 0x1010a457 */
  if (!C.zf) goto L_1010a457;
L_1010a450:;
  /* 1010a450 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1010a452 jmp 0x1010a5c7 */
  goto L_1010a5c7;
L_1010a457:;
  /* 1010a457 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1010a459 je 0x1010a5b5 */
  if (C.zf) goto L_1010a5b5;
  /* 1010a45f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1010a461 mov eax, 0x10110ec0 */
  EAX = (0x10110ec0u);
L_1010a466:;
  /* 1010a466 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a468 je 0x1010a4de */
  if (C.zf) goto L_1010a4de;
  /* 1010a46a add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010a46d inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1010a46e cmp eax, 0x10110fb0 */
  { uint32_t _a=(EAX),_b=(0x10110fb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a473 jl 0x1010a466 */
  if ((C.sf!=C.of)) goto L_1010a466;
  /* 1010a475 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 1010a478 push eax */
  push32((uint32_t)(EAX));
  /* 1010a479 push ebx */
  push32((uint32_t)(EBX));
  /* 1010a47a call dword ptr [0x1010e09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e09c))), 0x1010a480u);
  /* 1010a480 push 1 */
  push32((uint32_t)(0x1u));
  /* 1010a482 pop esi */
  ESI = (pop32());
  /* 1010a483 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a485 jne 0x1010a5ac */
  if (!C.zf) goto L_1010a5ac;
  /* 1010a48b push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1010a48d and dword ptr [0x10116d44], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10116d44)))&(0x0u); w32((uint32_t)(0x10116d44), (_r)); fl_logic(_r,32); }
  /* 1010a494 pop ecx */
  ECX = (pop32());
  /* 1010a495 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1010a497 mov edi, 0x10116c40 */
  EDI = (0x10116c40u);
  /* 1010a49c cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a49f rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1010a4a1 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1010a4a2 mov dword ptr [0x10116b24], ebx */
  w32((uint32_t)(0x10116b24), (EBX));
  /* 1010a4a8 jbe 0x1010a599 */
  if ((C.cf||C.zf)) goto L_1010a599;
  /* 1010a4ae cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010a4b2 je 0x1010a574 */
  if (C.zf) goto L_1010a574;
  /* 1010a4b8 lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_1010a4bb:;
  /* 1010a4bb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1010a4bd test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1010a4bf je 0x1010a574 */
  if (C.zf) goto L_1010a574;
  /* 1010a4c5 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 1010a4c9 movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_1010a4cc:;
  /* 1010a4cc cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a4ce ja 0x1010a568 */
  if ((!C.cf&&!C.zf)) goto L_1010a568;
  /* 1010a4d4 or byte ptr [eax + 0x10116c41], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10116c41)))|(0x4u); w8((uint32_t)(EAX + 0x10116c41), (_r)); fl_logic(_r,8); }
  /* 1010a4db inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1010a4dc jmp 0x1010a4cc */
  goto L_1010a4cc;
L_1010a4de:;
  /* 1010a4de and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1010a4e2 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1010a4e4 pop ecx */
  ECX = (pop32());
  /* 1010a4e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1010a4e7 mov edi, 0x10116c40 */
  EDI = (0x10116c40u);
  /* 1010a4ec lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 1010a4ef rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1010a4f1 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 1010a4f4 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1010a4f5 lea ebx, [esi + 0x10110ed0] */
  EBX = ((uint32_t)(ESI + 0x10110ed0));
L_1010a4fb:;
  /* 1010a4fb cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010a4fe mov ecx, ebx */
  ECX = (EBX);
  /* 1010a500 je 0x1010a52e */
  if (C.zf) goto L_1010a52e;
L_1010a502:;
  /* 1010a502 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1010a505 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1010a507 je 0x1010a52e */
  if (C.zf) goto L_1010a52e;
  /* 1010a509 movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 1010a50c movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 1010a50f cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a511 ja 0x1010a527 */
  if ((!C.cf&&!C.zf)) goto L_1010a527;
  /* 1010a513 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1010a516 mov dl, byte ptr [edx + 0x10110eb8] */
  DL = (r8((uint32_t)(EDX + 0x10110eb8)));
L_1010a51c:;
  /* 1010a51c or byte ptr [eax + 0x10116c41], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10116c41)))|(DL); w8((uint32_t)(EAX + 0x10116c41), (_r)); fl_logic(_r,8); }
  /* 1010a522 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1010a523 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a525 jbe 0x1010a51c */
  if ((C.cf||C.zf)) goto L_1010a51c;
L_1010a527:;
  /* 1010a527 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1010a528 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1010a529 cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010a52c jne 0x1010a502 */
  if (!C.zf) goto L_1010a502;
L_1010a52e:;
  /* 1010a52e inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1010a531 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010a534 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a538 jb 0x1010a4fb */
  if (C.cf) goto L_1010a4fb;
  /* 1010a53a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1010a53d mov dword ptr [0x10116b3c], 1 */
  w32((uint32_t)(0x10116b3c), (0x1u));
  /* 1010a547 push eax */
  push32((uint32_t)(EAX));
  /* 1010a548 mov dword ptr [0x10116b24], eax */
  w32((uint32_t)(0x10116b24), (EAX));
  /* 1010a54d call 0x1010a620 */
  push32(0x1010a552u); f_1010a620();
  /* 1010a552 lea esi, [esi + 0x10110ec4] */
  ESI = ((uint32_t)(ESI + 0x10110ec4));
  /* 1010a558 mov edi, 0x10116b30 */
  EDI = (0x10116b30u);
  /* 1010a55d movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1010a55e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1010a55f pop ecx */
  ECX = (pop32());
  /* 1010a560 mov dword ptr [0x10116d44], eax */
  w32((uint32_t)(0x10116d44), (EAX));
  /* 1010a565 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1010a566 jmp 0x1010a5ba */
  goto L_1010a5ba;
L_1010a568:;
  /* 1010a568 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1010a569 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1010a56a cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010a56e jne 0x1010a4bb */
  if (!C.zf) goto L_1010a4bb;
L_1010a574:;
  /* 1010a574 mov eax, esi */
  EAX = (ESI);
L_1010a576:;
  /* 1010a576 or byte ptr [eax + 0x10116c41], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10116c41)))|(0x8u); w8((uint32_t)(EAX + 0x10116c41), (_r)); fl_logic(_r,8); }
  /* 1010a57d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1010a57e cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a583 jb 0x1010a576 */
  if (C.cf) goto L_1010a576;
  /* 1010a585 push ebx */
  push32((uint32_t)(EBX));
  /* 1010a586 call 0x1010a620 */
  push32(0x1010a58bu); f_1010a620();
  /* 1010a58b pop ecx */
  ECX = (pop32());
  /* 1010a58c mov dword ptr [0x10116d44], eax */
  w32((uint32_t)(0x10116d44), (EAX));
  /* 1010a591 mov dword ptr [0x10116b3c], esi */
  w32((uint32_t)(0x10116b3c), (ESI));
  /* 1010a597 jmp 0x1010a5a0 */
  goto L_1010a5a0;
L_1010a599:;
  /* 1010a599 and dword ptr [0x10116b3c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10116b3c)))&(0x0u); w32((uint32_t)(0x10116b3c), (_r)); fl_logic(_r,32); }
L_1010a5a0:;
  /* 1010a5a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1010a5a2 mov edi, 0x10116b30 */
  EDI = (0x10116b30u);
  /* 1010a5a7 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1010a5a8 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1010a5a9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1010a5aa jmp 0x1010a5ba */
  goto L_1010a5ba;
L_1010a5ac:;
  /* 1010a5ac cmp dword ptr [0x10116960], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10116960))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a5b3 je 0x1010a5c4 */
  if (C.zf) goto L_1010a5c4;
L_1010a5b5:;
  /* 1010a5b5 call 0x1010a653 */
  push32(0x1010a5bau); f_1010a653();
L_1010a5ba:;
  /* 1010a5ba call 0x1010a67c */
  push32(0x1010a5bfu); f_1010a67c();
  /* 1010a5bf jmp 0x1010a450 */
  goto L_1010a450;
L_1010a5c4:;
  /* 1010a5c4 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_1010a5c7:;
  /* 1010a5c7 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1010a5c9 call 0x1010a0b4 */
  push32(0x1010a5ceu); f_1010a0b4();
  /* 1010a5ce pop ecx */
  ECX = (pop32());
  /* 1010a5cf mov eax, esi */
  EAX = (ESI);
  /* 1010a5d1 pop edi */
  EDI = (pop32());
  /* 1010a5d2 pop esi */
  ESI = (pop32());
  /* 1010a5d3 pop ebx */
  EBX = (pop32());
  /* 1010a5d4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1010a5d5 ret  */
  ESPCHK(0x1010a429u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5d6 @ 0x1010a5d6 (74 bytes, 15 insns) */
void f_1010a5d6(void) {
  FTRACE(0x1010a5d6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010a5d6 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1010a5da and dword ptr [0x10116960], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10116960)))&(0x0u); w32((uint32_t)(0x10116960), (_r)); fl_logic(_r,32); }
  /* 1010a5e1 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a5e4 jne 0x1010a5f6 */
  if (!C.zf) goto L_1010a5f6;
  /* 1010a5e6 mov dword ptr [0x10116960], 1 */
  w32((uint32_t)(0x10116960), (0x1u));
  /* 1010a5f0 jmp dword ptr [0x1010e0a4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1010e0a4)))); return;
L_1010a5f6:;
  /* 1010a5f6 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a5f9 jne 0x1010a60b */
  if (!C.zf) goto L_1010a60b;
  /* 1010a5fb mov dword ptr [0x10116960], 1 */
  w32((uint32_t)(0x10116960), (0x1u));
  /* 1010a605 jmp dword ptr [0x1010e0a0] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1010e0a0)))); return;
L_1010a60b:;
  /* 1010a60b cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a60e jne 0x1010a61f */
  if (!C.zf) goto L_1010a61f;
  /* 1010a610 mov eax, dword ptr [0x10116998] */
  EAX = (r32((uint32_t)(0x10116998)));
  /* 1010a615 mov dword ptr [0x10116960], 1 */
  w32((uint32_t)(0x10116960), (0x1u));
L_1010a61f:;
  /* 1010a61f ret  */
  ESPCHK(0x1010a5d6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a620 @ 0x1010a620 (51 bytes, 19 insns) */
void f_1010a620(void) {
  FTRACE(0x1010a620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010a620 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1010a624 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010a629 je 0x1010a64d */
  if (C.zf) goto L_1010a64d;
  /* 1010a62b sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010a62e je 0x1010a647 */
  if (C.zf) goto L_1010a647;
  /* 1010a630 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010a633 je 0x1010a641 */
  if (C.zf) goto L_1010a641;
  /* 1010a635 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1010a636 je 0x1010a63b */
  if (C.zf) goto L_1010a63b;
  /* 1010a638 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1010a63a ret  */
  ESPCHK(0x1010a620u, _esp0);
  ESP += 4; return;
L_1010a63b:;
  /* 1010a63b mov eax, 0x404 */
  EAX = (0x404u);
  /* 1010a640 ret  */
  ESPCHK(0x1010a620u, _esp0);
  ESP += 4; return;
L_1010a641:;
  /* 1010a641 mov eax, 0x412 */
  EAX = (0x412u);
  /* 1010a646 ret  */
  ESPCHK(0x1010a620u, _esp0);
  ESP += 4; return;
L_1010a647:;
  /* 1010a647 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1010a64c ret  */
  ESPCHK(0x1010a620u, _esp0);
  ESP += 4; return;
L_1010a64d:;
  /* 1010a64d mov eax, 0x411 */
  EAX = (0x411u);
  /* 1010a652 ret  */
  ESPCHK(0x1010a620u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a653 @ 0x1010a653 (41 bytes, 17 insns) */
void f_1010a653(void) {
  FTRACE(0x1010a653u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010a653 push edi */
  push32((uint32_t)(EDI));
  /* 1010a654 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1010a656 pop ecx */
  ECX = (pop32());
  /* 1010a657 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1010a659 mov edi, 0x10116c40 */
  EDI = (0x10116c40u);
  /* 1010a65e rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1010a660 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1010a661 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1010a663 mov edi, 0x10116b30 */
  EDI = (0x10116b30u);
  /* 1010a668 mov dword ptr [0x10116b24], eax */
  w32((uint32_t)(0x10116b24), (EAX));
  /* 1010a66d mov dword ptr [0x10116b3c], eax */
  w32((uint32_t)(0x10116b3c), (EAX));
  /* 1010a672 mov dword ptr [0x10116d44], eax */
  w32((uint32_t)(0x10116d44), (EAX));
  /* 1010a677 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1010a678 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1010a679 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1010a67a pop edi */
  EDI = (pop32());
  /* 1010a67b ret  */
  ESPCHK(0x1010a653u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a67c @ 0x1010a67c (389 bytes, 124 insns) */
void f_1010a67c(void) {
  FTRACE(0x1010a67cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010a67c push ebp */
  push32((uint32_t)(EBP));
  /* 1010a67d mov ebp, esp */
  EBP = (ESP);
  /* 1010a67f sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010a685 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1010a688 push esi */
  push32((uint32_t)(ESI));
  /* 1010a689 push eax */
  push32((uint32_t)(EAX));
  /* 1010a68a push dword ptr [0x10116b24] */
  push32((uint32_t)(r32((uint32_t)(0x10116b24))));
  /* 1010a690 call dword ptr [0x1010e09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e09c))), 0x1010a696u);
  /* 1010a696 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a699 jne 0x1010a7b5 */
  if (!C.zf) goto L_1010a7b5;
  /* 1010a69f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1010a6a1 mov esi, 0x100 */
  ESI = (0x100u);
L_1010a6a6:;
  /* 1010a6a6 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 1010a6ad inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1010a6ae cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a6b0 jb 0x1010a6a6 */
  if (C.cf) goto L_1010a6a6;
  /* 1010a6b2 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 1010a6b5 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 1010a6bc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1010a6be je 0x1010a6f7 */
  if (C.zf) goto L_1010a6f7;
  /* 1010a6c0 push ebx */
  push32((uint32_t)(EBX));
  /* 1010a6c1 push edi */
  push32((uint32_t)(EDI));
  /* 1010a6c2 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_1010a6c5:;
  /* 1010a6c5 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 1010a6c8 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 1010a6cb cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a6cd ja 0x1010a6ec */
  if ((!C.cf&&!C.zf)) goto L_1010a6ec;
  /* 1010a6cf sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010a6d1 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 1010a6d8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1010a6d9 mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 1010a6de mov ebx, ecx */
  EBX = (ECX);
  /* 1010a6e0 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1010a6e3 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1010a6e5 mov ecx, ebx */
  ECX = (EBX);
  /* 1010a6e7 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1010a6ea rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_1010a6ec:;
  /* 1010a6ec inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1010a6ed inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1010a6ee mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 1010a6f1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1010a6f3 jne 0x1010a6c5 */
  if (!C.zf) goto L_1010a6c5;
  /* 1010a6f5 pop edi */
  EDI = (pop32());
  /* 1010a6f6 pop ebx */
  EBX = (pop32());
L_1010a6f7:;
  /* 1010a6f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1010a6f9 lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 1010a6ff push dword ptr [0x10116d44] */
  push32((uint32_t)(r32((uint32_t)(0x10116d44))));
  /* 1010a705 push dword ptr [0x10116b24] */
  push32((uint32_t)(r32((uint32_t)(0x10116b24))));
  /* 1010a70b push eax */
  push32((uint32_t)(EAX));
  /* 1010a70c lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 1010a712 push esi */
  push32((uint32_t)(ESI));
  /* 1010a713 push eax */
  push32((uint32_t)(EAX));
  /* 1010a714 push 1 */
  push32((uint32_t)(0x1u));
  /* 1010a716 call 0x1010c2bd */
  push32(0x1010a71bu); f_1010c2bd();
  /* 1010a71b push 0 */
  push32((uint32_t)(0x0u));
  /* 1010a71d lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 1010a723 push dword ptr [0x10116b24] */
  push32((uint32_t)(r32((uint32_t)(0x10116b24))));
  /* 1010a729 push esi */
  push32((uint32_t)(ESI));
  /* 1010a72a push eax */
  push32((uint32_t)(EAX));
  /* 1010a72b lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 1010a731 push esi */
  push32((uint32_t)(ESI));
  /* 1010a732 push eax */
  push32((uint32_t)(EAX));
  /* 1010a733 push esi */
  push32((uint32_t)(ESI));
  /* 1010a734 push dword ptr [0x10116d44] */
  push32((uint32_t)(r32((uint32_t)(0x10116d44))));
  /* 1010a73a call 0x1010c406 */
  push32(0x1010a73fu); f_1010c406();
  /* 1010a73f push 0 */
  push32((uint32_t)(0x0u));
  /* 1010a741 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 1010a747 push dword ptr [0x10116b24] */
  push32((uint32_t)(r32((uint32_t)(0x10116b24))));
  /* 1010a74d push esi */
  push32((uint32_t)(ESI));
  /* 1010a74e push eax */
  push32((uint32_t)(EAX));
  /* 1010a74f lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 1010a755 push esi */
  push32((uint32_t)(ESI));
  /* 1010a756 push eax */
  push32((uint32_t)(EAX));
  /* 1010a757 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1010a75c push dword ptr [0x10116d44] */
  push32((uint32_t)(r32((uint32_t)(0x10116d44))));
  /* 1010a762 call 0x1010c406 */
  push32(0x1010a767u); f_1010c406();
  /* 1010a767 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010a76a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1010a76c lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_1010a772:;
  /* 1010a772 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1010a775 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 1010a778 je 0x1010a790 */
  if (C.zf) goto L_1010a790;
  /* 1010a77a or byte ptr [eax + 0x10116c41], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10116c41)))|(0x10u); w8((uint32_t)(EAX + 0x10116c41), (_r)); fl_logic(_r,8); }
  /* 1010a781 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_1010a788:;
  /* 1010a788 mov byte ptr [eax + 0x10116b40], dl */
  w8((uint32_t)(EAX + 0x10116b40), (DL));
  /* 1010a78e jmp 0x1010a7ac */
  goto L_1010a7ac;
L_1010a790:;
  /* 1010a790 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 1010a793 je 0x1010a7a5 */
  if (C.zf) goto L_1010a7a5;
  /* 1010a795 or byte ptr [eax + 0x10116c41], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10116c41)))|(0x20u); w8((uint32_t)(EAX + 0x10116c41), (_r)); fl_logic(_r,8); }
  /* 1010a79c mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 1010a7a3 jmp 0x1010a788 */
  goto L_1010a788;
L_1010a7a5:;
  /* 1010a7a5 and byte ptr [eax + 0x10116b40], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10116b40)))&(0x0u); w8((uint32_t)(EAX + 0x10116b40), (_r)); fl_logic(_r,8); }
L_1010a7ac:;
  /* 1010a7ac inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1010a7ad inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1010a7ae inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1010a7af cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a7b1 jb 0x1010a772 */
  if (C.cf) goto L_1010a772;
  /* 1010a7b3 jmp 0x1010a7fe */
  goto L_1010a7fe;
L_1010a7b5:;
  /* 1010a7b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1010a7b7 mov esi, 0x100 */
  ESI = (0x100u);
L_1010a7bc:;
  /* 1010a7bc cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a7bf jb 0x1010a7da */
  if (C.cf) goto L_1010a7da;
  /* 1010a7c1 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a7c4 ja 0x1010a7da */
  if ((!C.cf&&!C.zf)) goto L_1010a7da;
  /* 1010a7c6 or byte ptr [eax + 0x10116c41], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10116c41)))|(0x10u); w8((uint32_t)(EAX + 0x10116c41), (_r)); fl_logic(_r,8); }
  /* 1010a7cd mov cl, al */
  CL = (AL);
  /* 1010a7cf add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_1010a7d2:;
  /* 1010a7d2 mov byte ptr [eax + 0x10116b40], cl */
  w8((uint32_t)(EAX + 0x10116b40), (CL));
  /* 1010a7d8 jmp 0x1010a7f9 */
  goto L_1010a7f9;
L_1010a7da:;
  /* 1010a7da cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a7dd jb 0x1010a7f2 */
  if (C.cf) goto L_1010a7f2;
  /* 1010a7df cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a7e2 ja 0x1010a7f2 */
  if ((!C.cf&&!C.zf)) goto L_1010a7f2;
  /* 1010a7e4 or byte ptr [eax + 0x10116c41], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10116c41)))|(0x20u); w8((uint32_t)(EAX + 0x10116c41), (_r)); fl_logic(_r,8); }
  /* 1010a7eb mov cl, al */
  CL = (AL);
  /* 1010a7ed sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1010a7f0 jmp 0x1010a7d2 */
  goto L_1010a7d2;
L_1010a7f2:;
  /* 1010a7f2 and byte ptr [eax + 0x10116b40], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10116b40)))&(0x0u); w8((uint32_t)(EAX + 0x10116b40), (_r)); fl_logic(_r,8); }
L_1010a7f9:;
  /* 1010a7f9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1010a7fa cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a7fc jb 0x1010a7bc */
  if (C.cf) goto L_1010a7bc;
L_1010a7fe:;
  /* 1010a7fe pop esi */
  ESI = (pop32());
  /* 1010a7ff leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1010a800 ret  */
  ESPCHK(0x1010a67cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a801 @ 0x1010a801 (28 bytes, 7 insns) */
void f_1010a801(void) {
  FTRACE(0x1010a801u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010a801 cmp dword ptr [0x10117e88], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10117e88))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a808 jne 0x1010a81c */
  if (!C.zf) goto L_1010a81c;
  /* 1010a80a push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1010a80c call 0x1010a429 */
  push32(0x1010a811u); f_1010a429();
  /* 1010a811 pop ecx */
  ECX = (pop32());
  /* 1010a812 mov dword ptr [0x10117e88], 1 */
  w32((uint32_t)(0x10117e88), (0x1u));
L_1010a81c:;
  /* 1010a81c ret  */
  ESPCHK(0x1010a801u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a820 @ 0x1010a820 (664 bytes, 263 insns) [15 switch table(s)] */
void f_1010a820(void) {
  FTRACE(0x1010a820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010a820 push ebp */
  push32((uint32_t)(EBP));
  /* 1010a821 mov ebp, esp */
  EBP = (ESP);
  /* 1010a823 push edi */
  push32((uint32_t)(EDI));
  /* 1010a824 push esi */
  push32((uint32_t)(ESI));
  /* 1010a825 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1010a828 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1010a82b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1010a82e mov eax, ecx */
  EAX = (ECX);
  /* 1010a830 mov edx, ecx */
  EDX = (ECX);
  /* 1010a832 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010a834 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a836 jbe 0x1010a840 */
  if ((C.cf||C.zf)) goto L_1010a840;
  /* 1010a838 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a83a jb 0x1010a9b8 */
  if (C.cf) goto L_1010a9b8;
L_1010a840:;
  /* 1010a840 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1010a846 jne 0x1010a85c */
  if (!C.zf) goto L_1010a85c;
  /* 1010a848 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1010a84b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1010a84e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a851 jb 0x1010a87c */
  if (C.cf) goto L_1010a87c;
  /* 1010a853 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1010a855 jmp dword ptr [edx*4 + 0x1010a968] */
  switch (EDX) {
    case 0: goto L_1010a978;
    case 1: goto L_1010a980;
    case 2: goto L_1010a98c;
    case 3: goto L_1010a9a0;
    default: x86_unimpl("switch@0x1010a855 out of table"); return;
  }
L_1010a85c:;
  /* 1010a85c mov eax, edi */
  EAX = (EDI);
  /* 1010a85e mov edx, 3 */
  EDX = (0x3u);
  /* 1010a863 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010a866 jb 0x1010a874 */
  if (C.cf) goto L_1010a874;
  /* 1010a868 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1010a86b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010a86d jmp dword ptr [eax*4 + 0x1010a880] */
  switch (EAX) {
    case 1: goto L_1010a890;
    case 2: goto L_1010a8bc;
    case 3: goto L_1010a8e0;
    default: x86_unimpl("switch@0x1010a86d out of table"); return;
  }
L_1010a874:;
  /* 1010a874 jmp dword ptr [ecx*4 + 0x1010a978] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1010a978)))); return;
  /* 1010a87b nop  */
  /* nop */
L_1010a87c:;
  /* 1010a87c jmp dword ptr [ecx*4 + 0x1010a8fc] */
  switch (ECX) {
    case 0: goto L_1010a95f;
    case 1: goto L_1010a94c;
    case 2: goto L_1010a944;
    case 3: goto L_1010a93c;
    case 4: goto L_1010a934;
    case 5: goto L_1010a92c;
    case 6: goto L_1010a924;
    case 7: goto L_1010a91c;
    default: x86_unimpl("switch@0x1010a87c out of table"); return;
  }
  /* 1010a883 nop  */
  /* nop */
L_1010a890:;
  /* 1010a890 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1010a892 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1010a894 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1010a896 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1010a899 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1010a89c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1010a89f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1010a8a2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1010a8a5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1010a8a8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1010a8ab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a8ae jb 0x1010a87c */
  if (C.cf) goto L_1010a87c;
  /* 1010a8b0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1010a8b2 jmp dword ptr [edx*4 + 0x1010a968] */
  switch (EDX) {
    case 0: goto L_1010a978;
    case 1: goto L_1010a980;
    case 2: goto L_1010a98c;
    case 3: goto L_1010a9a0;
    default: x86_unimpl("switch@0x1010a8b2 out of table"); return;
  }
  /* 1010a8b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1010a8bc:;
  /* 1010a8bc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1010a8be mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1010a8c0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1010a8c2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1010a8c5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1010a8c8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1010a8cb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1010a8ce add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1010a8d1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a8d4 jb 0x1010a87c */
  if (C.cf) goto L_1010a87c;
  /* 1010a8d6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1010a8d8 jmp dword ptr [edx*4 + 0x1010a968] */
  switch (EDX) {
    case 0: goto L_1010a978;
    case 1: goto L_1010a980;
    case 2: goto L_1010a98c;
    case 3: goto L_1010a9a0;
    default: x86_unimpl("switch@0x1010a8d8 out of table"); return;
  }
  /* 1010a8df nop  */
  /* nop */
L_1010a8e0:;
  /* 1010a8e0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1010a8e2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1010a8e4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1010a8e6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1010a8e7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1010a8ea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1010a8eb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a8ee jb 0x1010a87c */
  if (C.cf) goto L_1010a87c;
  /* 1010a8f0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1010a8f2 jmp dword ptr [edx*4 + 0x1010a968] */
  switch (EDX) {
    case 0: goto L_1010a978;
    case 1: goto L_1010a980;
    case 2: goto L_1010a98c;
    case 3: goto L_1010a9a0;
    default: x86_unimpl("switch@0x1010a8f2 out of table"); return;
  }
  /* 1010a8f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1010a91c:;
  /* 1010a91c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1010a920 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1010a924:;
  /* 1010a924 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1010a928 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1010a92c:;
  /* 1010a92c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1010a930 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1010a934:;
  /* 1010a934 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1010a938 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1010a93c:;
  /* 1010a93c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1010a940 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1010a944:;
  /* 1010a944 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1010a948 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1010a94c:;
  /* 1010a94c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1010a950 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1010a954 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1010a95b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1010a95d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1010a95f:;
  /* 1010a95f jmp dword ptr [edx*4 + 0x1010a968] */
  switch (EDX) {
    case 0: goto L_1010a978;
    case 1: goto L_1010a980;
    case 2: goto L_1010a98c;
    case 3: goto L_1010a9a0;
    default: x86_unimpl("switch@0x1010a95f out of table"); return;
  }
  /* 1010a966 mov edi, edi */
  EDI = (EDI);
L_1010a978:;
  /* 1010a978 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1010a97b pop esi */
  ESI = (pop32());
  /* 1010a97c pop edi */
  EDI = (pop32());
  /* 1010a97d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1010a97e ret  */
  ESPCHK(0x1010a820u, _esp0);
  ESP += 4; return;
  /* 1010a97f nop  */
  /* nop */
L_1010a980:;
  /* 1010a980 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1010a982 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1010a984 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1010a987 pop esi */
  ESI = (pop32());
  /* 1010a988 pop edi */
  EDI = (pop32());
  /* 1010a989 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1010a98a ret  */
  ESPCHK(0x1010a820u, _esp0);
  ESP += 4; return;
  /* 1010a98b nop  */
  /* nop */
L_1010a98c:;
  /* 1010a98c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1010a98e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1010a990 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1010a993 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1010a996 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1010a999 pop esi */
  ESI = (pop32());
  /* 1010a99a pop edi */
  EDI = (pop32());
  /* 1010a99b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1010a99c ret  */
  ESPCHK(0x1010a820u, _esp0);
  ESP += 4; return;
  /* 1010a99d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1010a9a0:;
  /* 1010a9a0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1010a9a2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1010a9a4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1010a9a7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1010a9aa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1010a9ad mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1010a9b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1010a9b3 pop esi */
  ESI = (pop32());
  /* 1010a9b4 pop edi */
  EDI = (pop32());
  /* 1010a9b5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1010a9b6 ret  */
  ESPCHK(0x1010a820u, _esp0);
  ESP += 4; return;
  /* 1010a9b7 nop  */
  /* nop */
L_1010a9b8:;
  /* 1010a9b8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1010a9bc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1010a9c0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1010a9c6 jne 0x1010a9ec */
  if (!C.zf) goto L_1010a9ec;
  /* 1010a9c8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1010a9cb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1010a9ce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a9d1 jb 0x1010a9e0 */
  if (C.cf) goto L_1010a9e0;
  /* 1010a9d3 std  */
  C.df=1;
  /* 1010a9d4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1010a9d6 cld  */
  C.df=0;
  /* 1010a9d7 jmp dword ptr [edx*4 + 0x1010ab00] */
  switch (EDX) {
    case 0: goto L_1010ab10;
    case 1: goto L_1010ab18;
    case 2: goto L_1010ab28;
    case 3: goto L_1010ab3c;
    default: x86_unimpl("switch@0x1010a9d7 out of table"); return;
  }
  /* 1010a9de mov edi, edi */
  EDI = (EDI);
L_1010a9e0:;
  /* 1010a9e0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1010a9e2 jmp dword ptr [ecx*4 + 0x1010aab0] */
  switch (ECX) {
    case 0: goto L_1010aaf7;
    default: x86_unimpl("switch@0x1010a9e2 out of table"); return;
  }
  /* 1010a9e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1010a9ec:;
  /* 1010a9ec mov eax, edi */
  EAX = (EDI);
  /* 1010a9ee mov edx, 3 */
  EDX = (0x3u);
  /* 1010a9f3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010a9f6 jb 0x1010aa04 */
  if (C.cf) goto L_1010aa04;
  /* 1010a9f8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1010a9fb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010a9fd jmp dword ptr [eax*4 + 0x1010aa08] */
  switch (EAX) {
    case 1: goto L_1010aa18;
    case 2: goto L_1010aa38;
    case 3: goto L_1010aa60;
    default: x86_unimpl("switch@0x1010a9fd out of table"); return;
  }
L_1010aa04:;
  /* 1010aa04 jmp dword ptr [ecx*4 + 0x1010ab00] */
  switch (ECX) {
    case 0: goto L_1010ab10;
    case 1: goto L_1010ab18;
    case 2: goto L_1010ab28;
    case 3: goto L_1010ab3c;
    default: x86_unimpl("switch@0x1010aa04 out of table"); return;
  }
  /* 1010aa0b nop  */
  /* nop */
L_1010aa18:;
  /* 1010aa18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1010aa1b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1010aa1d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1010aa20 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1010aa21 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1010aa24 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1010aa25 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010aa28 jb 0x1010a9e0 */
  if (C.cf) goto L_1010a9e0;
  /* 1010aa2a std  */
  C.df=1;
  /* 1010aa2b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1010aa2d cld  */
  C.df=0;
  /* 1010aa2e jmp dword ptr [edx*4 + 0x1010ab00] */
  switch (EDX) {
    case 0: goto L_1010ab10;
    case 1: goto L_1010ab18;
    case 2: goto L_1010ab28;
    case 3: goto L_1010ab3c;
    default: x86_unimpl("switch@0x1010aa2e out of table"); return;
  }
  /* 1010aa35 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1010aa38:;
  /* 1010aa38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1010aa3b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1010aa3d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1010aa40 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1010aa43 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1010aa46 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1010aa49 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010aa4c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010aa4f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010aa52 jb 0x1010a9e0 */
  if (C.cf) goto L_1010a9e0;
  /* 1010aa54 std  */
  C.df=1;
  /* 1010aa55 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1010aa57 cld  */
  C.df=0;
  /* 1010aa58 jmp dword ptr [edx*4 + 0x1010ab00] */
  switch (EDX) {
    case 0: goto L_1010ab10;
    case 1: goto L_1010ab18;
    case 2: goto L_1010ab28;
    case 3: goto L_1010ab3c;
    default: x86_unimpl("switch@0x1010aa58 out of table"); return;
  }
  /* 1010aa5f nop  */
  /* nop */
L_1010aa60:;
  /* 1010aa60 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1010aa63 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1010aa65 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1010aa68 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1010aa6b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1010aa6e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1010aa71 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1010aa74 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1010aa77 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010aa7a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010aa7d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010aa80 jb 0x1010a9e0 */
  if (C.cf) goto L_1010a9e0;
  /* 1010aa86 std  */
  C.df=1;
  /* 1010aa87 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1010aa89 cld  */
  C.df=0;
  /* 1010aa8a jmp dword ptr [edx*4 + 0x1010ab00] */
  switch (EDX) {
    case 0: goto L_1010ab10;
    case 1: goto L_1010ab18;
    case 2: goto L_1010ab28;
    case 3: goto L_1010ab3c;
    default: x86_unimpl("switch@0x1010aa8a out of table"); return;
  }
  /* 1010aa91 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1010aa94 mov ah, 0xaa */
  AH = (0xaau);
  /* 1010aa96 adc byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1010aa98 mov esp, 0xc41010aa */
  ESP = (0xc41010aau);
  /* 1010aa9d stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1010aa9e adc byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1010aaa0 int3  */
  x86_unimpl("int3 @ 0x1010aaa0");
  /* 1010aaa1 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1010aaa2 adc byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1010aaa4 aam 0xaa */
  x86_unimpl("aam @ 0x1010aaa4");
  /* 1010aaa6 adc byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1010aaa8 fsubr qword ptr [edx - 0x551beff0] */
  FPU_ST(0) = (rf64((uint32_t)(EDX + -0x551beff0))) - FPU_ST(0);
  /* 1010aaae adc byte ptr [eax], dl */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(DL),_r=_a+_b+C.cf; w8((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,8); }
  /* 1010aab4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1010aab8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1010aabc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1010aac0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1010aac4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1010aac8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1010aacc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1010aad0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1010aad4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1010aad8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1010aadc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1010aae0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1010aae4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1010aae8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1010aaec lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1010aaf3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1010aaf5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1010aaf7:;
  /* 1010aaf7 jmp dword ptr [edx*4 + 0x1010ab00] */
  switch (EDX) {
    case 0: goto L_1010ab10;
    case 1: goto L_1010ab18;
    case 2: goto L_1010ab28;
    case 3: goto L_1010ab3c;
    default: x86_unimpl("switch@0x1010aaf7 out of table"); return;
  }
  /* 1010aafe mov edi, edi */
  EDI = (EDI);
L_1010ab10:;
  /* 1010ab10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1010ab13 pop esi */
  ESI = (pop32());
  /* 1010ab14 pop edi */
  EDI = (pop32());
  /* 1010ab15 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1010ab16 ret  */
  ESPCHK(0x1010a820u, _esp0);
  ESP += 4; return;
  /* 1010ab17 nop  */
  /* nop */
L_1010ab18:;
  /* 1010ab18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1010ab1b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1010ab1e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1010ab21 pop esi */
  ESI = (pop32());
  /* 1010ab22 pop edi */
  EDI = (pop32());
  /* 1010ab23 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1010ab24 ret  */
  ESPCHK(0x1010a820u, _esp0);
  ESP += 4; return;
  /* 1010ab25 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1010ab28:;
  /* 1010ab28 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1010ab2b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1010ab2e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1010ab31 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1010ab34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1010ab37 pop esi */
  ESI = (pop32());
  /* 1010ab38 pop edi */
  EDI = (pop32());
  /* 1010ab39 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1010ab3a ret  */
  ESPCHK(0x1010a820u, _esp0);
  ESP += 4; return;
  /* 1010ab3b nop  */
  /* nop */
L_1010ab3c:;
  /* 1010ab3c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1010ab3f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1010ab42 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1010ab45 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1010ab48 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1010ab4b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1010ab4e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1010ab51 pop esi */
  ESI = (pop32());
  /* 1010ab52 pop edi */
  EDI = (pop32());
  /* 1010ab53 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1010ab54 ret  */
  ESPCHK(0x1010a820u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab55 @ 0x1010ab55 (23 bytes, 7 insns) */
void f_1010ab55(void) {
  FTRACE(0x1010ab55u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010ab55 push 0 */
  push32((uint32_t)(0x0u));
  /* 1010ab57 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1010ab5b push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1010ab5f push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1010ab63 call 0x1010ab6c */
  push32(0x1010ab68u); f_1010ab6c();
  /* 1010ab68 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010ab6b ret  */
  ESPCHK(0x1010ab55u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab6c @ 0x1010ab6c (517 bytes, 195 insns) */
void f_1010ab6c(void) {
  FTRACE(0x1010ab6cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010ab6c push ebp */
  push32((uint32_t)(EBP));
  /* 1010ab6d mov ebp, esp */
  EBP = (ESP);
  /* 1010ab6f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010ab72 push ebx */
  push32((uint32_t)(EBX));
  /* 1010ab73 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1010ab77 push esi */
  push32((uint32_t)(ESI));
  /* 1010ab78 push edi */
  push32((uint32_t)(EDI));
  /* 1010ab79 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1010ab7c mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1010ab7e lea esi, [edi + 1] */
  ESI = ((uint32_t)(EDI + 0x1));
  /* 1010ab81 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_1010ab84:;
  /* 1010ab84 cmp dword ptr [0x10110d30], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10110d30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010ab8b jle 0x1010ab9c */
  if ((C.zf||C.sf!=C.of)) goto L_1010ab9c;
  /* 1010ab8d movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1010ab90 push 8 */
  push32((uint32_t)(0x8u));
  /* 1010ab92 push eax */
  push32((uint32_t)(EAX));
  /* 1010ab93 call 0x1010940b */
  push32(0x1010ab98u); f_1010940b();
  /* 1010ab98 pop ecx */
  ECX = (pop32());
  /* 1010ab99 pop ecx */
  ECX = (pop32());
  /* 1010ab9a jmp 0x1010abab */
  goto L_1010abab;
L_1010ab9c:;
  /* 1010ab9c mov ecx, dword ptr [0x10110b20] */
  ECX = (r32((uint32_t)(0x10110b20)));
  /* 1010aba2 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1010aba5 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1010aba8 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_1010abab:;
  /* 1010abab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010abad je 0x1010abb4 */
  if (C.zf) goto L_1010abb4;
  /* 1010abaf mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 1010abb1 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1010abb2 jmp 0x1010ab84 */
  goto L_1010ab84;
L_1010abb4:;
  /* 1010abb4 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010abb7 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 1010abba jne 0x1010abc2 */
  if (!C.zf) goto L_1010abc2;
  /* 1010abbc or dword ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x2u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 1010abc0 jmp 0x1010abc7 */
  goto L_1010abc7;
L_1010abc2:;
  /* 1010abc2 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010abc5 jne 0x1010abcd */
  if (!C.zf) goto L_1010abcd;
L_1010abc7:;
  /* 1010abc7 mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 1010abc9 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1010abca mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_1010abcd:;
  /* 1010abcd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1010abd0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010abd2 jl 0x1010ad61 */
  if ((C.sf!=C.of)) goto L_1010ad61;
  /* 1010abd8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010abdb je 0x1010ad61 */
  if (C.zf) goto L_1010ad61;
  /* 1010abe1 cmp eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010abe4 jg 0x1010ad61 */
  if ((!C.zf&&C.sf==C.of)) goto L_1010ad61;
  /* 1010abea push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1010abec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010abee pop ecx */
  ECX = (pop32());
  /* 1010abef jne 0x1010ac15 */
  if (!C.zf) goto L_1010ac15;
  /* 1010abf1 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010abf4 je 0x1010abff */
  if (C.zf) goto L_1010abff;
  /* 1010abf6 mov dword ptr [ebp + 0x10], 0xa */
  w32((uint32_t)(EBP + 0x10), (0xau));
  /* 1010abfd jmp 0x1010ac31 */
  goto L_1010ac31;
L_1010abff:;
  /* 1010abff mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1010ac01 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010ac03 je 0x1010ac12 */
  if (C.zf) goto L_1010ac12;
  /* 1010ac05 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010ac07 je 0x1010ac12 */
  if (C.zf) goto L_1010ac12;
  /* 1010ac09 mov dword ptr [ebp + 0x10], 8 */
  w32((uint32_t)(EBP + 0x10), (0x8u));
  /* 1010ac10 jmp 0x1010ac31 */
  goto L_1010ac31;
L_1010ac12:;
  /* 1010ac12 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_1010ac15:;
  /* 1010ac15 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010ac18 jne 0x1010ac31 */
  if (!C.zf) goto L_1010ac31;
  /* 1010ac1a cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010ac1d jne 0x1010ac31 */
  if (!C.zf) goto L_1010ac31;
  /* 1010ac1f mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1010ac21 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010ac23 je 0x1010ac29 */
  if (C.zf) goto L_1010ac29;
  /* 1010ac25 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010ac27 jne 0x1010ac31 */
  if (!C.zf) goto L_1010ac31;
L_1010ac29:;
  /* 1010ac29 mov bl, byte ptr [esi + 1] */
  BL = (r8((uint32_t)(ESI + 0x1)));
  /* 1010ac2c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1010ac2d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1010ac2e mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_1010ac31:;
  /* 1010ac31 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1010ac34 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1010ac36 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1010ac39 mov edi, 0x103 */
  EDI = (0x103u);
  /* 1010ac3e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1010ac41:;
  /* 1010ac41 cmp dword ptr [0x10110d30], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10110d30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010ac48 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 1010ac4b jle 0x1010ac59 */
  if ((C.zf||C.sf!=C.of)) goto L_1010ac59;
  /* 1010ac4d push 4 */
  push32((uint32_t)(0x4u));
  /* 1010ac4f push esi */
  push32((uint32_t)(ESI));
  /* 1010ac50 call 0x1010940b */
  push32(0x1010ac55u); f_1010940b();
  /* 1010ac55 pop ecx */
  ECX = (pop32());
  /* 1010ac56 pop ecx */
  ECX = (pop32());
  /* 1010ac57 jmp 0x1010ac64 */
  goto L_1010ac64;
L_1010ac59:;
  /* 1010ac59 mov eax, dword ptr [0x10110b20] */
  EAX = (r32((uint32_t)(0x10110b20)));
  /* 1010ac5e mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 1010ac61 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_1010ac64:;
  /* 1010ac64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010ac66 je 0x1010ac70 */
  if (C.zf) goto L_1010ac70;
  /* 1010ac68 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1010ac6b sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010ac6e jmp 0x1010aca2 */
  goto L_1010aca2;
L_1010ac70:;
  /* 1010ac70 cmp dword ptr [0x10110d30], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10110d30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010ac77 jle 0x1010ac84 */
  if ((C.zf||C.sf!=C.of)) goto L_1010ac84;
  /* 1010ac79 push edi */
  push32((uint32_t)(EDI));
  /* 1010ac7a push esi */
  push32((uint32_t)(ESI));
  /* 1010ac7b call 0x1010940b */
  push32(0x1010ac80u); f_1010940b();
  /* 1010ac80 pop ecx */
  ECX = (pop32());
  /* 1010ac81 pop ecx */
  ECX = (pop32());
  /* 1010ac82 jmp 0x1010ac8f */
  goto L_1010ac8f;
L_1010ac84:;
  /* 1010ac84 mov eax, dword ptr [0x10110b20] */
  EAX = (r32((uint32_t)(0x10110b20)));
  /* 1010ac89 mov ax, word ptr [eax + esi*2] */
  AX = (r16((uint32_t)(EAX + ESI*2)));
  /* 1010ac8d and eax, edi */
  { uint32_t _r=(EAX)&(EDI); EAX = (_r); fl_logic(_r,32); }
L_1010ac8f:;
  /* 1010ac8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010ac91 je 0x1010acdd */
  if (C.zf) goto L_1010acdd;
  /* 1010ac93 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1010ac96 push eax */
  push32((uint32_t)(EAX));
  /* 1010ac97 call 0x1010d148 */
  push32(0x1010ac9cu); f_1010d148();
  /* 1010ac9c pop ecx */
  ECX = (pop32());
  /* 1010ac9d mov ecx, eax */
  ECX = (EAX);
  /* 1010ac9f sub ecx, 0x37 */
  { uint32_t _a=(ECX),_b=(0x37u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
L_1010aca2:;
  /* 1010aca2 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010aca5 jae 0x1010acdd */
  if (!C.cf) goto L_1010acdd;
  /* 1010aca7 mov esi, dword ptr [ebp - 8] */
  ESI = (r32((uint32_t)(EBP + -0x8)));
  /* 1010acaa or dword ptr [ebp + 0x14], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x8u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 1010acae cmp esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010acb1 jb 0x1010acc7 */
  if (C.cf) goto L_1010acc7;
  /* 1010acb3 jne 0x1010acc1 */
  if (!C.zf) goto L_1010acc1;
  /* 1010acb5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1010acb8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1010acba div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1010acbd cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010acbf jbe 0x1010acc7 */
  if ((C.cf||C.zf)) goto L_1010acc7;
L_1010acc1:;
  /* 1010acc1 or dword ptr [ebp + 0x14], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x4u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 1010acc5 jmp 0x1010acd0 */
  goto L_1010acd0;
L_1010acc7:;
  /* 1010acc7 imul esi, dword ptr [ebp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x10)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1010accb add esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1010accd mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
L_1010acd0:;
  /* 1010acd0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1010acd3 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1010acd6 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 1010acd8 jmp 0x1010ac41 */
  goto L_1010ac41;
L_1010acdd:;
  /* 1010acdd mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1010ace0 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 1010ace3 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 1010ace6 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 1010ace8 jne 0x1010acfa */
  if (!C.zf) goto L_1010acfa;
  /* 1010acea test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1010acec je 0x1010acf4 */
  if (C.zf) goto L_1010acf4;
  /* 1010acee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1010acf1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1010acf4:;
  /* 1010acf4 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1010acf8 jmp 0x1010ad45 */
  goto L_1010ad45;
L_1010acfa:;
  /* 1010acfa test al, 4 */
  { uint32_t _r=(AL)&(0x4u); fl_logic(_r,8); }
  /* 1010acfc mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
  /* 1010ad01 jne 0x1010ad1e */
  if (!C.zf) goto L_1010ad1e;
  /* 1010ad03 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 1010ad05 jne 0x1010ad45 */
  if (!C.zf) goto L_1010ad45;
  /* 1010ad07 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1010ad0a je 0x1010ad15 */
  if (C.zf) goto L_1010ad15;
  /* 1010ad0c cmp dword ptr [ebp - 8], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010ad13 ja 0x1010ad1e */
  if ((!C.cf&&!C.zf)) goto L_1010ad1e;
L_1010ad15:;
  /* 1010ad15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010ad17 jne 0x1010ad45 */
  if (!C.zf) goto L_1010ad45;
  /* 1010ad19 cmp dword ptr [ebp - 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010ad1c jbe 0x1010ad45 */
  if ((C.cf||C.zf)) goto L_1010ad45;
L_1010ad1e:;
  /* 1010ad1e call 0x1010bfb1 */
  push32(0x1010ad23u); f_1010bfb1();
  /* 1010ad23 test byte ptr [ebp + 0x14], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x1u); fl_logic(_r,8); }
  /* 1010ad27 mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
  /* 1010ad2d je 0x1010ad35 */
  if (C.zf) goto L_1010ad35;
  /* 1010ad2f or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1010ad33 jmp 0x1010ad45 */
  goto L_1010ad45;
L_1010ad35:;
  /* 1010ad35 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1010ad38 and al, 2 */
  { uint32_t _r=(AL)&(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1010ad3a neg al */
  { uint32_t _a=(AL),_r=0u-_a; AL = (_r); fl_sub(0,_a,_r,8); }
  /* 1010ad3c sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010ad3e neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1010ad40 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010ad42 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1010ad45:;
  /* 1010ad45 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1010ad47 je 0x1010ad4e */
  if (C.zf) goto L_1010ad4e;
  /* 1010ad49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1010ad4c mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_1010ad4e:;
  /* 1010ad4e test byte ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x2u); fl_logic(_r,8); }
  /* 1010ad52 je 0x1010ad5c */
  if (C.zf) goto L_1010ad5c;
  /* 1010ad54 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1010ad57 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1010ad59 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1010ad5c:;
  /* 1010ad5c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1010ad5f jmp 0x1010ad6c */
  goto L_1010ad6c;
L_1010ad61:;
  /* 1010ad61 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1010ad64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010ad66 je 0x1010ad6a */
  if (C.zf) goto L_1010ad6a;
  /* 1010ad68 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_1010ad6a:;
  /* 1010ad6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1010ad6c:;
  /* 1010ad6c pop edi */
  EDI = (pop32());
  /* 1010ad6d pop esi */
  ESI = (pop32());
  /* 1010ad6e pop ebx */
  EBX = (pop32());
  /* 1010ad6f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1010ad70 ret  */
  ESPCHK(0x1010ab6cu, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x1010ad90 (193 bytes, 90 insns) */
void f_1010ad90(void) {
  FTRACE(0x1010ad90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010ad90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1010ad92 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 1010ad96 push ebx */
  push32((uint32_t)(EBX));
  /* 1010ad97 mov ebx, eax */
  EBX = (EAX);
  /* 1010ad99 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1010ad9c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 1010ada0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1010ada6 je 0x1010adbb */
  if (C.zf) goto L_1010adbb;
L_1010ada8:;
  /* 1010ada8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 1010adaa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1010adab cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010adad je 0x1010ad80 */
  if (C.zf) { jmp_ind(0x1010ad80u); return; }
  /* 1010adaf test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 1010adb1 je 0x1010ae04 */
  if (C.zf) goto L_1010ae04;
  /* 1010adb3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1010adb9 jne 0x1010ada8 */
  if (!C.zf) goto L_1010ada8;
L_1010adbb:;
  /* 1010adbb or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 1010adbd push edi */
  push32((uint32_t)(EDI));
  /* 1010adbe mov eax, ebx */
  EAX = (EBX);
  /* 1010adc0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 1010adc3 push esi */
  push32((uint32_t)(ESI));
  /* 1010adc4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_1010adc6:;
  /* 1010adc6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1010adc8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 1010adcd mov eax, ecx */
  EAX = (ECX);
  /* 1010adcf mov esi, edi */
  ESI = (EDI);
  /* 1010add1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 1010add3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1010add5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1010add7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1010adda xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1010addd xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1010addf xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1010ade1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010ade4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 1010adea jne 0x1010ae08 */
  if (!C.zf) goto L_1010ae08;
  /* 1010adec and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 1010adf1 je 0x1010adc6 */
  if (C.zf) goto L_1010adc6;
  /* 1010adf3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 1010adf8 jne 0x1010ae02 */
  if (!C.zf) goto L_1010ae02;
  /* 1010adfa and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 1010ae00 jne 0x1010adc6 */
  if (!C.zf) goto L_1010adc6;
L_1010ae02:;
  /* 1010ae02 pop esi */
  ESI = (pop32());
  /* 1010ae03 pop edi */
  EDI = (pop32());
L_1010ae04:;
  /* 1010ae04 pop ebx */
  EBX = (pop32());
  /* 1010ae05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1010ae07 ret  */
  ESPCHK(0x1010ad90u, _esp0);
  ESP += 4; return;
L_1010ae08:;
  /* 1010ae08 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1010ae0b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010ae0d je 0x1010ae45 */
  if (C.zf) goto L_1010ae45;
  /* 1010ae0f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1010ae11 je 0x1010ae02 */
  if (C.zf) goto L_1010ae02;
  /* 1010ae13 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010ae15 je 0x1010ae3e */
  if (C.zf) goto L_1010ae3e;
  /* 1010ae17 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1010ae19 je 0x1010ae02 */
  if (C.zf) goto L_1010ae02;
  /* 1010ae1b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1010ae1e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010ae20 je 0x1010ae37 */
  if (C.zf) goto L_1010ae37;
  /* 1010ae22 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1010ae24 je 0x1010ae02 */
  if (C.zf) goto L_1010ae02;
  /* 1010ae26 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010ae28 je 0x1010ae30 */
  if (C.zf) goto L_1010ae30;
  /* 1010ae2a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1010ae2c je 0x1010ae02 */
  if (C.zf) goto L_1010ae02;
  /* 1010ae2e jmp 0x1010adc6 */
  goto L_1010adc6;
L_1010ae30:;
  /* 1010ae30 pop esi */
  ESI = (pop32());
  /* 1010ae31 pop edi */
  EDI = (pop32());
  /* 1010ae32 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 1010ae35 pop ebx */
  EBX = (pop32());
  /* 1010ae36 ret  */
  ESPCHK(0x1010ad90u, _esp0);
  ESP += 4; return;
L_1010ae37:;
  /* 1010ae37 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 1010ae3a pop esi */
  ESI = (pop32());
  /* 1010ae3b pop edi */
  EDI = (pop32());
  /* 1010ae3c pop ebx */
  EBX = (pop32());
  /* 1010ae3d ret  */
  ESPCHK(0x1010ad90u, _esp0);
  ESP += 4; return;
L_1010ae3e:;
  /* 1010ae3e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 1010ae41 pop esi */
  ESI = (pop32());
  /* 1010ae42 pop edi */
  EDI = (pop32());
  /* 1010ae43 pop ebx */
  EBX = (pop32());
  /* 1010ae44 ret  */
  ESPCHK(0x1010ad90u, _esp0);
  ESP += 4; return;
L_1010ae45:;
  /* 1010ae45 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 1010ae48 pop esi */
  ESI = (pop32());
  /* 1010ae49 pop edi */
  EDI = (pop32());
  /* 1010ae4a pop ebx */
  EBX = (pop32());
  /* 1010ae4b ret  */
  ESPCHK(0x1010ad90u, _esp0);
  ESP += 4; return;
  /* 1010ae4c int3  */
  x86_unimpl("int3 @ 0x1010ae4c");
  /* 1010ae4d int3  */
  x86_unimpl("int3 @ 0x1010ae4d");
  /* 1010ae4e int3  */
  x86_unimpl("int3 @ 0x1010ae4e");
  /* 1010ae4f int3  */
  x86_unimpl("int3 @ 0x1010ae4f");
}

/* _strstr @ 0x1010ae50 (128 bytes, 66 insns) */
void f_1010ae50(void) {
  FTRACE(0x1010ae50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010ae50 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1010ae54 push edi */
  push32((uint32_t)(EDI));
  /* 1010ae55 push ebx */
  push32((uint32_t)(EBX));
  /* 1010ae56 push esi */
  push32((uint32_t)(ESI));
  /* 1010ae57 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1010ae59 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1010ae5d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1010ae5f je 0x1010aeca */
  if (C.zf) goto L_1010aeca;
  /* 1010ae61 mov dh, byte ptr [ecx + 1] */
  C.d.b.h = (r8((uint32_t)(ECX + 0x1)));
  /* 1010ae64 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 1010ae66 je 0x1010aeb7 */
  if (C.zf) goto L_1010aeb7;
L_1010ae68:;
  /* 1010ae68 mov esi, edi */
  ESI = (EDI);
  /* 1010ae6a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1010ae6e mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 1010ae70 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1010ae71 cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010ae73 je 0x1010ae8a */
  if (C.zf) goto L_1010ae8a;
  /* 1010ae75 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1010ae77 je 0x1010ae84 */
  if (C.zf) goto L_1010ae84;
L_1010ae79:;
  /* 1010ae79 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1010ae7b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1010ae7c:;
  /* 1010ae7c cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010ae7e je 0x1010ae8a */
  if (C.zf) goto L_1010ae8a;
  /* 1010ae80 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1010ae82 jne 0x1010ae79 */
  if (!C.zf) goto L_1010ae79;
L_1010ae84:;
  /* 1010ae84 pop esi */
  ESI = (pop32());
  /* 1010ae85 pop ebx */
  EBX = (pop32());
  /* 1010ae86 pop edi */
  EDI = (pop32());
  /* 1010ae87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1010ae89 ret  */
  ESPCHK(0x1010ae50u, _esp0);
  ESP += 4; return;
L_1010ae8a:;
  /* 1010ae8a mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1010ae8c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1010ae8d cmp al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010ae8f jne 0x1010ae7c */
  if (!C.zf) goto L_1010ae7c;
  /* 1010ae91 lea edi, [esi - 1] */
  EDI = ((uint32_t)(ESI + -0x1));
L_1010ae94:;
  /* 1010ae94 mov ah, byte ptr [ecx + 2] */
  AH = (r8((uint32_t)(ECX + 0x2)));
  /* 1010ae97 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1010ae99 je 0x1010aec3 */
  if (C.zf) goto L_1010aec3;
  /* 1010ae9b mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1010ae9d add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1010aea0 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010aea2 jne 0x1010ae68 */
  if (!C.zf) goto L_1010ae68;
  /* 1010aea4 mov al, byte ptr [ecx + 3] */
  AL = (r8((uint32_t)(ECX + 0x3)));
  /* 1010aea7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1010aea9 je 0x1010aec3 */
  if (C.zf) goto L_1010aec3;
  /* 1010aeab mov ah, byte ptr [esi - 1] */
  AH = (r8((uint32_t)(ESI + -0x1)));
  /* 1010aeae add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010aeb1 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010aeb3 je 0x1010ae94 */
  if (C.zf) goto L_1010ae94;
  /* 1010aeb5 jmp 0x1010ae68 */
  goto L_1010ae68;
L_1010aeb7:;
  /* 1010aeb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1010aeb9 pop esi */
  ESI = (pop32());
  /* 1010aeba pop ebx */
  EBX = (pop32());
  /* 1010aebb pop edi */
  EDI = (pop32());
  /* 1010aebc mov al, dl */
  AL = (DL);
  /* 1010aebe jmp 0x1010ad96 */
  jmp_ind(0x1010ad96u); return;
L_1010aec3:;
  /* 1010aec3 lea eax, [edi - 1] */
  EAX = ((uint32_t)(EDI + -0x1));
  /* 1010aec6 pop esi */
  ESI = (pop32());
  /* 1010aec7 pop ebx */
  EBX = (pop32());
  /* 1010aec8 pop edi */
  EDI = (pop32());
  /* 1010aec9 ret  */
  ESPCHK(0x1010ae50u, _esp0);
  ESP += 4; return;
L_1010aeca:;
  /* 1010aeca mov eax, edi */
  EAX = (EDI);
  /* 1010aecc pop esi */
  ESI = (pop32());
  /* 1010aecd pop ebx */
  EBX = (pop32());
  /* 1010aece pop edi */
  EDI = (pop32());
  /* 1010aecf ret  */
  ESPCHK(0x1010ae50u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x1010aed0 (56 bytes, 31 insns) */
void f_1010aed0(void) {
  FTRACE(0x1010aed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010aed0 push ebp */
  push32((uint32_t)(EBP));
  /* 1010aed1 mov ebp, esp */
  EBP = (ESP);
  /* 1010aed3 push edi */
  push32((uint32_t)(EDI));
  /* 1010aed4 push esi */
  push32((uint32_t)(ESI));
  /* 1010aed5 push ebx */
  push32((uint32_t)(EBX));
  /* 1010aed6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1010aed9 jecxz 0x1010af01 */
  x86_unimpl("jecxz @ 0x1010aed9");
  /* 1010aedb mov ebx, ecx */
  EBX = (ECX);
  /* 1010aedd mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1010aee0 mov esi, edi */
  ESI = (EDI);
  /* 1010aee2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1010aee4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 1010aee6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1010aee8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010aeea mov edi, esi */
  EDI = (ESI);
  /* 1010aeec mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1010aeef repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 1010aef1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 1010aef4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1010aef6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010aef9 ja 0x1010aeff */
  if ((!C.cf&&!C.zf)) goto L_1010aeff;
  /* 1010aefb je 0x1010af01 */
  if (C.zf) goto L_1010af01;
  /* 1010aefd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1010aefe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_1010aeff:;
  /* 1010aeff not ecx */
  ECX = (~(ECX));
L_1010af01:;
  /* 1010af01 mov eax, ecx */
  EAX = (ECX);
  /* 1010af03 pop ebx */
  EBX = (pop32());
  /* 1010af04 pop esi */
  ESI = (pop32());
  /* 1010af05 pop edi */
  EDI = (pop32());
  /* 1010af06 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1010af07 ret  */
  ESPCHK(0x1010aed0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af10 @ 0x1010af10 (47 bytes, 17 insns) */
void f_1010af10(void) {
  FTRACE(0x1010af10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010af10 push ecx */
  push32((uint32_t)(ECX));
  /* 1010af11 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010af16 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 1010af1a jb 0x1010af30 */
  if (C.cf) goto L_1010af30;
L_1010af1c:;
  /* 1010af1c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010af22 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010af27 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 1010af29 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010af2e jae 0x1010af1c */
  if (!C.cf) goto L_1010af1c;
L_1010af30:;
  /* 1010af30 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010af32 mov eax, esp */
  EAX = (ESP);
  /* 1010af34 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 1010af36 mov esp, ecx */
  ESP = (ECX);
  /* 1010af38 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1010af3a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1010af3d push eax */
  push32((uint32_t)(EAX));
  /* 1010af3e ret  */
  ESPCHK(0x1010af10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af3f @ 0x1010af3f (72 bytes, 17 insns) */
void f_1010af3f(void) {
  FTRACE(0x1010af3fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010af3f push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1010af44 push 0 */
  push32((uint32_t)(0x0u));
  /* 1010af46 push dword ptr [0x10117d64] */
  push32((uint32_t)(r32((uint32_t)(0x10117d64))));
  /* 1010af4c call dword ptr [0x1010e098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e098))), 0x1010af52u);
  /* 1010af52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010af54 mov dword ptr [0x10116b1c], eax */
  w32((uint32_t)(0x10116b1c), (EAX));
  /* 1010af59 jne 0x1010af5c */
  if (!C.zf) goto L_1010af5c;
  /* 1010af5b ret  */
  ESPCHK(0x1010af3fu, _esp0);
  ESP += 4; return;
L_1010af5c:;
  /* 1010af5c mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1010af60 and dword ptr [0x10116b14], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10116b14)))&(0x0u); w32((uint32_t)(0x10116b14), (_r)); fl_logic(_r,32); }
  /* 1010af67 and dword ptr [0x10116b18], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10116b18)))&(0x0u); w32((uint32_t)(0x10116b18), (_r)); fl_logic(_r,32); }
  /* 1010af6e push 1 */
  push32((uint32_t)(0x1u));
  /* 1010af70 mov dword ptr [0x10116b10], eax */
  w32((uint32_t)(0x10116b10), (EAX));
  /* 1010af75 mov dword ptr [0x10116b20], ecx */
  w32((uint32_t)(0x10116b20), (ECX));
  /* 1010af7b mov dword ptr [0x10116b08], 0x10 */
  w32((uint32_t)(0x10116b08), (0x10u));
  /* 1010af85 pop eax */
  EAX = (pop32());
  /* 1010af86 ret  */
  ESPCHK(0x1010af3fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000af87 @ 0x1010af87 (43 bytes, 14 insns) */
void f_1010af87(void) {
  FTRACE(0x1010af87u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010af87 mov eax, dword ptr [0x10116b18] */
  EAX = (r32((uint32_t)(0x10116b18)));
  /* 1010af8c lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 1010af8f mov eax, dword ptr [0x10116b1c] */
  EAX = (r32((uint32_t)(0x10116b1c)));
  /* 1010af94 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_1010af97:;
  /* 1010af97 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010af99 jae 0x1010afaf */
  if (!C.cf) goto L_1010afaf;
  /* 1010af9b mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1010af9f sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010afa2 cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010afa8 jb 0x1010afb1 */
  if (C.cf) goto L_1010afb1;
  /* 1010afaa add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010afad jmp 0x1010af97 */
  goto L_1010af97;
L_1010afaf:;
  /* 1010afaf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1010afb1:;
  /* 1010afb1 ret  */
  ESPCHK(0x1010af87u, _esp0);
  ESP += 4; return;
}

/* FUN_1000afb2 @ 0x1010afb2 (809 bytes, 265 insns) */
void f_1010afb2(void) {
  FTRACE(0x1010afb2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010afb2 push ebp */
  push32((uint32_t)(EBP));
  /* 1010afb3 mov ebp, esp */
  EBP = (ESP);
  /* 1010afb5 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010afb8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1010afbb push ebx */
  push32((uint32_t)(EBX));
  /* 1010afbc push esi */
  push32((uint32_t)(ESI));
  /* 1010afbd mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1010afc0 mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 1010afc3 push edi */
  push32((uint32_t)(EDI));
  /* 1010afc4 mov edi, esi */
  EDI = (ESI);
  /* 1010afc6 add esi, -4 */
  { uint32_t _a=(ESI),_b=(0xfffffffcu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1010afc9 sub edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010afcc shr edi, 0xf */
  EDI = (sh_shr((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 1010afcf mov ecx, edi */
  ECX = (EDI);
  /* 1010afd1 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1010afd7 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1010afde mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1010afe1 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1010afe3 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1010afe4 test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 1010afe7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1010afea jne 0x1010b2d6 */
  if (!C.zf) goto L_1010b2d6;
  /* 1010aff0 mov edx, dword ptr [ecx + esi] */
  EDX = (r32((uint32_t)(ECX + ESI*1)));
  /* 1010aff3 lea ebx, [ecx + esi] */
  EBX = ((uint32_t)(ECX + ESI*1));
  /* 1010aff6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1010aff9 mov edx, dword ptr [esi - 4] */
  EDX = (r32((uint32_t)(ESI + -0x4)));
  /* 1010affc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1010afff mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1010b002 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 1010b005 mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 1010b008 jne 0x1010b088 */
  if (!C.zf) goto L_1010b088;
  /* 1010b00a sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1010b00d dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1010b00e cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b011 jbe 0x1010b016 */
  if ((C.cf||C.zf)) goto L_1010b016;
  /* 1010b013 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1010b015 pop edx */
  EDX = (pop32());
L_1010b016:;
  /* 1010b016 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1010b019 cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b01c jne 0x1010b06a */
  if (!C.zf) goto L_1010b06a;
  /* 1010b01e cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b021 jae 0x1010b041 */
  if (!C.cf) goto L_1010b041;
  /* 1010b023 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1010b028 mov ecx, edx */
  ECX = (EDX);
  /* 1010b02a shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1010b02c lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 1010b030 not ebx */
  EBX = (~(EBX));
  /* 1010b032 and dword ptr [eax + edi*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1010b036 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 1010b038 jne 0x1010b062 */
  if (!C.zf) goto L_1010b062;
  /* 1010b03a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1010b03d and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1010b03f jmp 0x1010b062 */
  goto L_1010b062;
L_1010b041:;
  /* 1010b041 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 1010b044 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1010b049 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1010b04b lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 1010b04f not ebx */
  EBX = (~(EBX));
  /* 1010b051 and dword ptr [eax + edi*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1010b058 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 1010b05a jne 0x1010b062 */
  if (!C.zf) goto L_1010b062;
  /* 1010b05c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1010b05f and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_1010b062:;
  /* 1010b062 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1010b065 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 1010b068 jmp 0x1010b06d */
  goto L_1010b06d;
L_1010b06a:;
  /* 1010b06a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
L_1010b06d:;
  /* 1010b06d mov edx, dword ptr [ebx + 8] */
  EDX = (r32((uint32_t)(EBX + 0x8)));
  /* 1010b070 mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 1010b073 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010b076 mov dword ptr [edx + 4], ebx */
  w32((uint32_t)(EDX + 0x4), (EBX));
  /* 1010b079 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1010b07c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1010b07f mov ebx, dword ptr [edx + 4] */
  EBX = (r32((uint32_t)(EDX + 0x4)));
  /* 1010b082 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 1010b085 mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
L_1010b088:;
  /* 1010b088 mov edx, ecx */
  EDX = (ECX);
  /* 1010b08a sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1010b08d dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1010b08e cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b091 jbe 0x1010b096 */
  if ((C.cf||C.zf)) goto L_1010b096;
  /* 1010b093 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1010b095 pop edx */
  EDX = (pop32());
L_1010b096:;
  /* 1010b096 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 1010b099 and ebx, 1 */
  { uint32_t _r=(EBX)&(0x1u); EBX = (_r); fl_logic(_r,32); }
  /* 1010b09c mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 1010b09f jne 0x1010b139 */
  if (!C.zf) goto L_1010b139;
  /* 1010b0a5 sub esi, dword ptr [ebp - 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010b0a8 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 1010b0ab sar ebx, 4 */
  EBX = (sh_sar((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 1010b0ae push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1010b0b0 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 1010b0b3 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1010b0b4 pop esi */
  ESI = (pop32());
  /* 1010b0b5 cmp ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b0b7 jbe 0x1010b0bb */
  if ((C.cf||C.zf)) goto L_1010b0bb;
  /* 1010b0b9 mov ebx, esi */
  EBX = (ESI);
L_1010b0bb:;
  /* 1010b0bb add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010b0be mov edx, ecx */
  EDX = (ECX);
  /* 1010b0c0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1010b0c3 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1010b0c6 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1010b0c7 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b0c9 jbe 0x1010b0cd */
  if ((C.cf||C.zf)) goto L_1010b0cd;
  /* 1010b0cb mov edx, esi */
  EDX = (ESI);
L_1010b0cd:;
  /* 1010b0cd cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b0cf je 0x1010b134 */
  if (C.zf) goto L_1010b134;
  /* 1010b0d1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1010b0d4 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 1010b0d7 cmp esi, dword ptr [ecx + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b0da jne 0x1010b11c */
  if (!C.zf) goto L_1010b11c;
  /* 1010b0dc cmp ebx, 0x20 */
  { uint32_t _a=(EBX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b0df jae 0x1010b0fd */
  if (!C.cf) goto L_1010b0fd;
  /* 1010b0e1 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 1010b0e6 mov ecx, ebx */
  ECX = (EBX);
  /* 1010b0e8 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1010b0ea not esi */
  ESI = (~(ESI));
  /* 1010b0ec and dword ptr [eax + edi*4 + 0x44], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1010b0f0 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 1010b0f4 jne 0x1010b11c */
  if (!C.zf) goto L_1010b11c;
  /* 1010b0f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1010b0f9 and dword ptr [ecx], esi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(ESI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1010b0fb jmp 0x1010b11c */
  goto L_1010b11c;
L_1010b0fd:;
  /* 1010b0fd lea ecx, [ebx - 0x20] */
  ECX = ((uint32_t)(EBX + -0x20));
  /* 1010b100 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 1010b105 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1010b107 not esi */
  ESI = (~(ESI));
  /* 1010b109 and dword ptr [eax + edi*4 + 0xc4], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1010b110 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 1010b114 jne 0x1010b11c */
  if (!C.zf) goto L_1010b11c;
  /* 1010b116 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1010b119 and dword ptr [ecx + 4], esi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(ESI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_1010b11c:;
  /* 1010b11c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1010b11f mov esi, dword ptr [ecx + 8] */
  ESI = (r32((uint32_t)(ECX + 0x8)));
  /* 1010b122 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 1010b125 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 1010b128 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1010b12b mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 1010b12e mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 1010b131 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
L_1010b134:;
  /* 1010b134 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1010b137 jmp 0x1010b13c */
  goto L_1010b13c;
L_1010b139:;
  /* 1010b139 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1010b13c:;
  /* 1010b13c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b140 jne 0x1010b14a */
  if (!C.zf) goto L_1010b14a;
  /* 1010b142 cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b144 je 0x1010b1cb */
  if (C.zf) goto L_1010b1cb;
L_1010b14a:;
  /* 1010b14a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1010b14d mov ebx, dword ptr [ecx + edx*8 + 4] */
  EBX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 1010b151 lea ecx, [ecx + edx*8] */
  ECX = ((uint32_t)(ECX + EDX*8));
  /* 1010b154 mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 1010b157 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
  /* 1010b15a mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 1010b15d mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 1010b160 mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 1010b163 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 1010b166 cmp ecx, dword ptr [esi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(ESI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b169 jne 0x1010b1cb */
  if (!C.zf) goto L_1010b1cb;
  /* 1010b16b mov cl, byte ptr [edx + eax + 4] */
  CL = (r8((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 1010b16f cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b172 mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 1010b175 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1010b177 mov byte ptr [edx + eax + 4], cl */
  w8((uint32_t)(EDX + EAX*1 + 0x4), (CL));
  /* 1010b17b jae 0x1010b1a2 */
  if (!C.cf) goto L_1010b1a2;
  /* 1010b17d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010b181 jne 0x1010b191 */
  if (!C.zf) goto L_1010b191;
  /* 1010b183 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1010b188 mov ecx, edx */
  ECX = (EDX);
  /* 1010b18a shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1010b18c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1010b18f or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_1010b191:;
  /* 1010b191 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1010b196 mov ecx, edx */
  ECX = (EDX);
  /* 1010b198 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1010b19a lea eax, [eax + edi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0x44));
  /* 1010b19e or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1010b1a0 jmp 0x1010b1cb */
  goto L_1010b1cb;
L_1010b1a2:;
  /* 1010b1a2 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010b1a6 jne 0x1010b1b8 */
  if (!C.zf) goto L_1010b1b8;
  /* 1010b1a8 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 1010b1ab mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1010b1b0 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1010b1b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1010b1b5 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_1010b1b8:;
  /* 1010b1b8 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 1010b1bb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1010b1c0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1010b1c2 lea eax, [eax + edi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0xc4));
  /* 1010b1c9 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_1010b1cb:;
  /* 1010b1cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1010b1ce mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1010b1d0 mov dword ptr [eax + esi - 4], eax */
  w32((uint32_t)(EAX + ESI*1 + -0x4), (EAX));
  /* 1010b1d4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1010b1d7 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 1010b1d9 jne 0x1010b2d6 */
  if (!C.zf) goto L_1010b2d6;
  /* 1010b1df mov eax, dword ptr [0x10116b14] */
  EAX = (r32((uint32_t)(0x10116b14)));
  /* 1010b1e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010b1e6 je 0x1010b2c8 */
  if (C.zf) goto L_1010b2c8;
  /* 1010b1ec mov ecx, dword ptr [0x10116b0c] */
  ECX = (r32((uint32_t)(0x10116b0c)));
  /* 1010b1f2 mov esi, dword ptr [0x1010e07c] */
  ESI = (r32((uint32_t)(0x1010e07c)));
  /* 1010b1f8 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 1010b1fb add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010b1fe mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 1010b203 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1010b208 push ebx */
  push32((uint32_t)(EBX));
  /* 1010b209 push ecx */
  push32((uint32_t)(ECX));
  /* 1010b20a call esi */
  call_ind((uint32_t)(ESI), 0x1010b20cu);
  /* 1010b20c mov ecx, dword ptr [0x10116b0c] */
  ECX = (r32((uint32_t)(0x10116b0c)));
  /* 1010b212 mov eax, dword ptr [0x10116b14] */
  EAX = (r32((uint32_t)(0x10116b14)));
  /* 1010b217 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1010b21c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1010b21e or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 1010b221 mov eax, dword ptr [0x10116b14] */
  EAX = (r32((uint32_t)(0x10116b14)));
  /* 1010b226 mov ecx, dword ptr [0x10116b0c] */
  ECX = (r32((uint32_t)(0x10116b0c)));
  /* 1010b22c mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 1010b22f and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1010b237 mov eax, dword ptr [0x10116b14] */
  EAX = (r32((uint32_t)(0x10116b14)));
  /* 1010b23c mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 1010b23f dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 1010b242 mov eax, dword ptr [0x10116b14] */
  EAX = (r32((uint32_t)(0x10116b14)));
  /* 1010b247 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1010b24a cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010b24e jne 0x1010b259 */
  if (!C.zf) goto L_1010b259;
  /* 1010b250 and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1010b254 mov eax, dword ptr [0x10116b14] */
  EAX = (r32((uint32_t)(0x10116b14)));
L_1010b259:;
  /* 1010b259 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b25d jne 0x1010b2c8 */
  if (!C.zf) goto L_1010b2c8;
  /* 1010b25f push ebx */
  push32((uint32_t)(EBX));
  /* 1010b260 push 0 */
  push32((uint32_t)(0x0u));
  /* 1010b262 push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 1010b265 call esi */
  call_ind((uint32_t)(ESI), 0x1010b267u);
  /* 1010b267 mov eax, dword ptr [0x10116b14] */
  EAX = (r32((uint32_t)(0x10116b14)));
  /* 1010b26c push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 1010b26f push 0 */
  push32((uint32_t)(0x0u));
  /* 1010b271 push dword ptr [0x10117d64] */
  push32((uint32_t)(r32((uint32_t)(0x10117d64))));
  /* 1010b277 call dword ptr [0x1010e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e080))), 0x1010b27du);
  /* 1010b27d mov eax, dword ptr [0x10116b18] */
  EAX = (r32((uint32_t)(0x10116b18)));
  /* 1010b282 mov edx, dword ptr [0x10116b1c] */
  EDX = (r32((uint32_t)(0x10116b1c)));
  /* 1010b288 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1010b28b shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1010b28e mov ecx, eax */
  ECX = (EAX);
  /* 1010b290 mov eax, dword ptr [0x10116b14] */
  EAX = (r32((uint32_t)(0x10116b14)));
  /* 1010b295 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010b297 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 1010b29b push ecx */
  push32((uint32_t)(ECX));
  /* 1010b29c lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 1010b29f push ecx */
  push32((uint32_t)(ECX));
  /* 1010b2a0 push eax */
  push32((uint32_t)(EAX));
  /* 1010b2a1 call 0x10109c80 */
  push32(0x1010b2a6u); f_10109c80();
  /* 1010b2a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1010b2a9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010b2ac dec dword ptr [0x10116b18] */
  { uint32_t _r=(r32((uint32_t)(0x10116b18)))-1; w32((uint32_t)(0x10116b18), (_r)); fl_dec(_r,32); }
  /* 1010b2b2 cmp eax, dword ptr [0x10116b14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10116b14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b2b8 jbe 0x1010b2be */
  if ((C.cf||C.zf)) goto L_1010b2be;
  /* 1010b2ba sub dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
L_1010b2be:;
  /* 1010b2be mov eax, dword ptr [0x10116b1c] */
  EAX = (r32((uint32_t)(0x10116b1c)));
  /* 1010b2c3 mov dword ptr [0x10116b10], eax */
  w32((uint32_t)(0x10116b10), (EAX));
L_1010b2c8:;
  /* 1010b2c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1010b2cb mov dword ptr [0x10116b0c], edi */
  w32((uint32_t)(0x10116b0c), (EDI));
  /* 1010b2d1 mov dword ptr [0x10116b14], eax */
  w32((uint32_t)(0x10116b14), (EAX));
L_1010b2d6:;
  /* 1010b2d6 pop edi */
  EDI = (pop32());
  /* 1010b2d7 pop esi */
  ESI = (pop32());
  /* 1010b2d8 pop ebx */
  EBX = (pop32());
  /* 1010b2d9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1010b2da ret  */
  ESPCHK(0x1010afb2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b2db @ 0x1010b2db (777 bytes, 275 insns) */
void f_1010b2db(void) {
  FTRACE(0x1010b2dbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010b2db push ebp */
  push32((uint32_t)(EBP));
  /* 1010b2dc mov ebp, esp */
  EBP = (ESP);
  /* 1010b2de sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010b2e1 mov eax, dword ptr [0x10116b18] */
  EAX = (r32((uint32_t)(0x10116b18)));
  /* 1010b2e6 mov edx, dword ptr [0x10116b1c] */
  EDX = (r32((uint32_t)(0x10116b1c)));
  /* 1010b2ec push ebx */
  push32((uint32_t)(EBX));
  /* 1010b2ed push esi */
  push32((uint32_t)(ESI));
  /* 1010b2ee lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1010b2f1 push edi */
  push32((uint32_t)(EDI));
  /* 1010b2f2 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 1010b2f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1010b2f8 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 1010b2fb lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 1010b2fe and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1010b301 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1010b304 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1010b307 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1010b308 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b30b jge 0x1010b31b */
  if ((C.sf==C.of)) goto L_1010b31b;
  /* 1010b30d or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 1010b310 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1010b312 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1010b316 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 1010b319 jmp 0x1010b32b */
  goto L_1010b32b;
L_1010b31b:;
  /* 1010b31b add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010b31e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1010b321 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1010b323 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1010b325 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 1010b328 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1010b32b:;
  /* 1010b32b mov eax, dword ptr [0x10116b10] */
  EAX = (r32((uint32_t)(0x10116b10)));
  /* 1010b330 mov ebx, eax */
  EBX = (EAX);
  /* 1010b332 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b334 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1010b337 jae 0x1010b352 */
  if (!C.cf) goto L_1010b352;
L_1010b339:;
  /* 1010b339 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1010b33c mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 1010b33e and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1010b341 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 1010b343 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1010b345 jne 0x1010b352 */
  if (!C.zf) goto L_1010b352;
  /* 1010b347 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010b34a cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b34d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1010b350 jb 0x1010b339 */
  if (C.cf) goto L_1010b339;
L_1010b352:;
  /* 1010b352 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b355 jne 0x1010b3d0 */
  if (!C.zf) goto L_1010b3d0;
  /* 1010b357 mov ebx, edx */
  EBX = (EDX);
L_1010b359:;
  /* 1010b359 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b35b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1010b35e jae 0x1010b375 */
  if (!C.cf) goto L_1010b375;
  /* 1010b360 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1010b363 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 1010b365 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1010b368 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 1010b36a or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1010b36c jne 0x1010b373 */
  if (!C.zf) goto L_1010b373;
  /* 1010b36e add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010b371 jmp 0x1010b359 */
  goto L_1010b359;
L_1010b373:;
  /* 1010b373 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1010b375:;
  /* 1010b375 jne 0x1010b3d0 */
  if (!C.zf) goto L_1010b3d0;
L_1010b377:;
  /* 1010b377 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b37a jae 0x1010b38d */
  if (!C.cf) goto L_1010b38d;
  /* 1010b37c cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b380 jne 0x1010b38a */
  if (!C.zf) goto L_1010b38a;
  /* 1010b382 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010b385 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1010b388 jmp 0x1010b377 */
  goto L_1010b377;
L_1010b38a:;
  /* 1010b38a cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1010b38d:;
  /* 1010b38d jne 0x1010b3b5 */
  if (!C.zf) goto L_1010b3b5;
  /* 1010b38f mov ebx, edx */
  EBX = (EDX);
L_1010b391:;
  /* 1010b391 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b393 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1010b396 jae 0x1010b3a5 */
  if (!C.cf) goto L_1010b3a5;
  /* 1010b398 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b39c jne 0x1010b3a3 */
  if (!C.zf) goto L_1010b3a3;
  /* 1010b39e add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010b3a1 jmp 0x1010b391 */
  goto L_1010b391;
L_1010b3a3:;
  /* 1010b3a3 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1010b3a5:;
  /* 1010b3a5 jne 0x1010b3b5 */
  if (!C.zf) goto L_1010b3b5;
  /* 1010b3a7 call 0x1010b5e4 */
  push32(0x1010b3acu); f_1010b5e4();
  /* 1010b3ac mov ebx, eax */
  EBX = (EAX);
  /* 1010b3ae test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1010b3b0 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1010b3b3 je 0x1010b3c9 */
  if (C.zf) goto L_1010b3c9;
L_1010b3b5:;
  /* 1010b3b5 push ebx */
  push32((uint32_t)(EBX));
  /* 1010b3b6 call 0x1010b695 */
  push32(0x1010b3bbu); f_1010b695();
  /* 1010b3bb pop ecx */
  ECX = (pop32());
  /* 1010b3bc mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 1010b3bf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1010b3c1 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 1010b3c4 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b3c7 jne 0x1010b3d0 */
  if (!C.zf) goto L_1010b3d0;
L_1010b3c9:;
  /* 1010b3c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1010b3cb jmp 0x1010b5df */
  goto L_1010b5df;
L_1010b3d0:;
  /* 1010b3d0 mov dword ptr [0x10116b10], ebx */
  w32((uint32_t)(0x10116b10), (EBX));
  /* 1010b3d6 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 1010b3d9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1010b3db cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b3de mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1010b3e1 je 0x1010b3f7 */
  if (C.zf) goto L_1010b3f7;
  /* 1010b3e3 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 1010b3ea mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 1010b3ee and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1010b3f1 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 1010b3f3 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1010b3f5 jne 0x1010b42e */
  if (!C.zf) goto L_1010b42e;
L_1010b3f7:;
  /* 1010b3f7 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 1010b3fd mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 1010b400 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 1010b403 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 1010b406 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1010b40a lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 1010b40d or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1010b40f mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 1010b412 jne 0x1010b42b */
  if (!C.zf) goto L_1010b42b;
L_1010b414:;
  /* 1010b414 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 1010b41a inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1010b41d and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 1010b420 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010b423 mov edi, esi */
  EDI = (ESI);
  /* 1010b425 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 1010b427 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 1010b429 je 0x1010b414 */
  if (C.zf) goto L_1010b414;
L_1010b42b:;
  /* 1010b42b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_1010b42e:;
  /* 1010b42e mov ecx, edx */
  ECX = (EDX);
  /* 1010b430 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1010b432 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1010b438 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1010b43f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1010b442 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 1010b446 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 1010b448 jne 0x1010b457 */
  if (!C.zf) goto L_1010b457;
  /* 1010b44a mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 1010b451 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1010b453 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1010b456 pop edi */
  EDI = (pop32());
L_1010b457:;
  /* 1010b457 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1010b459 jl 0x1010b460 */
  if ((C.sf!=C.of)) goto L_1010b460;
  /* 1010b45b shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1010b45d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1010b45e jmp 0x1010b457 */
  goto L_1010b457;
L_1010b460:;
  /* 1010b460 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1010b463 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 1010b467 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1010b469 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010b46c mov esi, ecx */
  ESI = (ECX);
  /* 1010b46e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1010b471 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 1010b474 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1010b475 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b478 jle 0x1010b47d */
  if ((C.zf||C.sf!=C.of)) goto L_1010b47d;
  /* 1010b47a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1010b47c pop esi */
  ESI = (pop32());
L_1010b47d:;
  /* 1010b47d cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b47f je 0x1010b592 */
  if (C.zf) goto L_1010b592;
  /* 1010b485 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1010b488 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b48b jne 0x1010b4ee */
  if (!C.zf) goto L_1010b4ee;
  /* 1010b48d cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b490 jge 0x1010b4bd */
  if ((C.sf==C.of)) goto L_1010b4bd;
  /* 1010b492 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1010b497 mov ecx, edi */
  ECX = (EDI);
  /* 1010b499 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1010b49b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1010b49e lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 1010b4a2 not ebx */
  EBX = (~(EBX));
  /* 1010b4a4 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 1010b4a7 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 1010b4ab mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 1010b4af dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 1010b4b1 jne 0x1010b4eb */
  if (!C.zf) goto L_1010b4eb;
  /* 1010b4b3 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1010b4b6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1010b4b9 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 1010b4bb jmp 0x1010b4ee */
  goto L_1010b4ee;
L_1010b4bd:;
  /* 1010b4bd lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 1010b4c0 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1010b4c5 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1010b4c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1010b4ca lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 1010b4ce lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 1010b4d5 not ebx */
  EBX = (~(EBX));
  /* 1010b4d7 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1010b4d9 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 1010b4db mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 1010b4de jne 0x1010b4eb */
  if (!C.zf) goto L_1010b4eb;
  /* 1010b4e0 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1010b4e3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1010b4e6 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1010b4e9 jmp 0x1010b4ee */
  goto L_1010b4ee;
L_1010b4eb:;
  /* 1010b4eb mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1010b4ee:;
  /* 1010b4ee mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 1010b4f1 mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 1010b4f4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b4f8 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 1010b4fb mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1010b4fe mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 1010b501 mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 1010b504 je 0x1010b59e */
  if (C.zf) goto L_1010b59e;
  /* 1010b50a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1010b50d mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 1010b511 lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 1010b514 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 1010b517 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1010b51a mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1010b51d mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1010b520 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1010b523 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1010b526 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b529 jne 0x1010b58f */
  if (!C.zf) goto L_1010b58f;
  /* 1010b52b mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 1010b52f cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b532 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 1010b535 jge 0x1010b560 */
  if ((C.sf==C.of)) goto L_1010b560;
  /* 1010b537 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1010b539 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010b53d mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 1010b541 jne 0x1010b54e */
  if (!C.zf) goto L_1010b54e;
  /* 1010b543 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1010b548 mov ecx, esi */
  ECX = (ESI);
  /* 1010b54a shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1010b54c or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_1010b54e:;
  /* 1010b54e mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1010b553 mov ecx, esi */
  ECX = (ESI);
  /* 1010b555 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1010b557 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1010b55a or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1010b55e jmp 0x1010b58f */
  goto L_1010b58f;
L_1010b560:;
  /* 1010b560 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1010b562 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010b566 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 1010b56a jne 0x1010b579 */
  if (!C.zf) goto L_1010b579;
  /* 1010b56c lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 1010b56f mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1010b574 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1010b576 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_1010b579:;
  /* 1010b579 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1010b57c lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 1010b583 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 1010b586 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 1010b58b shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1010b58d or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_1010b58f:;
  /* 1010b58f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_1010b592:;
  /* 1010b592 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1010b594 je 0x1010b5a1 */
  if (C.zf) goto L_1010b5a1;
  /* 1010b596 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1010b598 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 1010b59c jmp 0x1010b5a1 */
  goto L_1010b5a1;
L_1010b59e:;
  /* 1010b59e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_1010b5a1:;
  /* 1010b5a1 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 1010b5a4 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010b5a6 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 1010b5a9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1010b5ab mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 1010b5af mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 1010b5b2 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1010b5b4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1010b5b6 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 1010b5b9 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1010b5bb jne 0x1010b5d7 */
  if (!C.zf) goto L_1010b5d7;
  /* 1010b5bd cmp ebx, dword ptr [0x10116b14] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10116b14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b5c3 jne 0x1010b5d7 */
  if (!C.zf) goto L_1010b5d7;
  /* 1010b5c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1010b5c8 cmp ecx, dword ptr [0x10116b0c] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10116b0c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b5ce jne 0x1010b5d7 */
  if (!C.zf) goto L_1010b5d7;
  /* 1010b5d0 and dword ptr [0x10116b14], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10116b14)))&(0x0u); w32((uint32_t)(0x10116b14), (_r)); fl_logic(_r,32); }
L_1010b5d7:;
  /* 1010b5d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1010b5da mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1010b5dc lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_1010b5df:;
  /* 1010b5df pop edi */
  EDI = (pop32());
  /* 1010b5e0 pop esi */
  ESI = (pop32());
  /* 1010b5e1 pop ebx */
  EBX = (pop32());
  /* 1010b5e2 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1010b5e3 ret  */
  ESPCHK(0x1010b2dbu, _esp0);
  ESP += 4; return;
}

/* FUN_1000b5e4 @ 0x1010b5e4 (177 bytes, 53 insns) */
void f_1010b5e4(void) {
  FTRACE(0x1010b5e4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010b5e4 mov eax, dword ptr [0x10116b18] */
  EAX = (r32((uint32_t)(0x10116b18)));
  /* 1010b5e9 mov ecx, dword ptr [0x10116b08] */
  ECX = (r32((uint32_t)(0x10116b08)));
  /* 1010b5ef push esi */
  push32((uint32_t)(ESI));
  /* 1010b5f0 push edi */
  push32((uint32_t)(EDI));
  /* 1010b5f1 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1010b5f3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b5f5 jne 0x1010b627 */
  if (!C.zf) goto L_1010b627;
  /* 1010b5f7 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 1010b5fb shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1010b5fe push eax */
  push32((uint32_t)(EAX));
  /* 1010b5ff push dword ptr [0x10116b1c] */
  push32((uint32_t)(r32((uint32_t)(0x10116b1c))));
  /* 1010b605 push edi */
  push32((uint32_t)(EDI));
  /* 1010b606 push dword ptr [0x10117d64] */
  push32((uint32_t)(r32((uint32_t)(0x10117d64))));
  /* 1010b60c call dword ptr [0x1010e0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e0ac))), 0x1010b612u);
  /* 1010b612 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b614 je 0x1010b677 */
  if (C.zf) goto L_1010b677;
  /* 1010b616 add dword ptr [0x10116b08], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x10116b08))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x10116b08), (_r)); fl_add(_a,_b,_r,32); }
  /* 1010b61d mov dword ptr [0x10116b1c], eax */
  w32((uint32_t)(0x10116b1c), (EAX));
  /* 1010b622 mov eax, dword ptr [0x10116b18] */
  EAX = (r32((uint32_t)(0x10116b18)));
L_1010b627:;
  /* 1010b627 mov ecx, dword ptr [0x10116b1c] */
  ECX = (r32((uint32_t)(0x10116b1c)));
  /* 1010b62d push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1010b632 push 8 */
  push32((uint32_t)(0x8u));
  /* 1010b634 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1010b637 push dword ptr [0x10117d64] */
  push32((uint32_t)(r32((uint32_t)(0x10117d64))));
  /* 1010b63d lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 1010b640 call dword ptr [0x1010e098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e098))), 0x1010b646u);
  /* 1010b646 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b648 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 1010b64b je 0x1010b677 */
  if (C.zf) goto L_1010b677;
  /* 1010b64d push 4 */
  push32((uint32_t)(0x4u));
  /* 1010b64f push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1010b654 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1010b659 push edi */
  push32((uint32_t)(EDI));
  /* 1010b65a call dword ptr [0x1010e0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e0a8))), 0x1010b660u);
  /* 1010b660 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b662 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 1010b665 jne 0x1010b67b */
  if (!C.zf) goto L_1010b67b;
  /* 1010b667 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1010b66a push edi */
  push32((uint32_t)(EDI));
  /* 1010b66b push dword ptr [0x10117d64] */
  push32((uint32_t)(r32((uint32_t)(0x10117d64))));
  /* 1010b671 call dword ptr [0x1010e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e080))), 0x1010b677u);
L_1010b677:;
  /* 1010b677 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1010b679 jmp 0x1010b692 */
  goto L_1010b692;
L_1010b67b:;
  /* 1010b67b or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 1010b67f mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1010b681 mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 1010b684 inc dword ptr [0x10116b18] */
  { uint32_t _r=(r32((uint32_t)(0x10116b18)))+1; w32((uint32_t)(0x10116b18), (_r)); fl_inc(_r,32); }
  /* 1010b68a mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 1010b68d or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1010b690 mov eax, esi */
  EAX = (ESI);
L_1010b692:;
  /* 1010b692 pop edi */
  EDI = (pop32());
  /* 1010b693 pop esi */
  ESI = (pop32());
  /* 1010b694 ret  */
  ESPCHK(0x1010b5e4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b695 @ 0x1010b695 (251 bytes, 85 insns) */
void f_1010b695(void) {
  FTRACE(0x1010b695u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010b695 push ebp */
  push32((uint32_t)(EBP));
  /* 1010b696 mov ebp, esp */
  EBP = (ESP);
  /* 1010b698 push ecx */
  push32((uint32_t)(ECX));
  /* 1010b699 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1010b69c push ebx */
  push32((uint32_t)(EBX));
  /* 1010b69d push esi */
  push32((uint32_t)(ESI));
  /* 1010b69e push edi */
  push32((uint32_t)(EDI));
  /* 1010b69f mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 1010b6a2 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 1010b6a5 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_1010b6a7:;
  /* 1010b6a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010b6a9 jl 0x1010b6b0 */
  if ((C.sf!=C.of)) goto L_1010b6b0;
  /* 1010b6ab shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1010b6ad inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1010b6ae jmp 0x1010b6a7 */
  goto L_1010b6a7;
L_1010b6b0:;
  /* 1010b6b0 mov eax, ebx */
  EAX = (EBX);
  /* 1010b6b2 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1010b6b4 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1010b6ba pop edx */
  EDX = (pop32());
  /* 1010b6bb lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 1010b6c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1010b6c5:;
  /* 1010b6c5 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 1010b6c8 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 1010b6cb add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010b6ce dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1010b6cf jne 0x1010b6c5 */
  if (!C.zf) goto L_1010b6c5;
  /* 1010b6d1 mov edi, ebx */
  EDI = (EBX);
  /* 1010b6d3 push 4 */
  push32((uint32_t)(0x4u));
  /* 1010b6d5 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 1010b6d8 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1010b6db push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1010b6e0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1010b6e5 push edi */
  push32((uint32_t)(EDI));
  /* 1010b6e6 call dword ptr [0x1010e0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e0a8))), 0x1010b6ecu);
  /* 1010b6ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010b6ee jne 0x1010b6f8 */
  if (!C.zf) goto L_1010b6f8;
  /* 1010b6f0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1010b6f3 jmp 0x1010b78b */
  goto L_1010b78b;
L_1010b6f8:;
  /* 1010b6f8 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 1010b6fe cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b700 ja 0x1010b73e */
  if ((!C.cf&&!C.zf)) goto L_1010b73e;
  /* 1010b702 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_1010b705:;
  /* 1010b705 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 1010b709 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 1010b710 lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 1010b716 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 1010b71d mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1010b71f lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 1010b725 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1010b728 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 1010b732 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010b737 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 1010b73a cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b73c jbe 0x1010b705 */
  if ((C.cf||C.zf)) goto L_1010b705;
L_1010b73e:;
  /* 1010b73e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1010b741 lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 1010b744 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010b749 push 1 */
  push32((uint32_t)(0x1u));
  /* 1010b74b pop edi */
  EDI = (pop32());
  /* 1010b74c mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1010b74f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1010b752 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 1010b755 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1010b758 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1010b75b and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1010b760 mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 1010b767 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 1010b76a mov cl, al */
  CL = (AL);
  /* 1010b76c inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1010b76e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1010b770 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1010b773 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 1010b776 jne 0x1010b77b */
  if (!C.zf) goto L_1010b77b;
  /* 1010b778 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_1010b77b:;
  /* 1010b77b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1010b780 mov ecx, ebx */
  ECX = (EBX);
  /* 1010b782 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1010b784 not edx */
  EDX = (~(EDX));
  /* 1010b786 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 1010b789 mov eax, ebx */
  EAX = (EBX);
L_1010b78b:;
  /* 1010b78b pop edi */
  EDI = (pop32());
  /* 1010b78c pop esi */
  ESI = (pop32());
  /* 1010b78d pop ebx */
  EBX = (pop32());
  /* 1010b78e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1010b78f ret  */
  ESPCHK(0x1010b695u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b790 @ 0x1010b790 (324 bytes, 102 insns) */
void f_1010b790(void) {
  FTRACE(0x1010b790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010b790 cmp dword ptr [0x10110fc0], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10110fc0))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b797 push ebx */
  push32((uint32_t)(EBX));
  /* 1010b798 push ebp */
  push32((uint32_t)(EBP));
  /* 1010b799 push esi */
  push32((uint32_t)(ESI));
  /* 1010b79a push edi */
  push32((uint32_t)(EDI));
  /* 1010b79b jne 0x1010b7a4 */
  if (!C.zf) goto L_1010b7a4;
  /* 1010b79d mov esi, 0x10110fb0 */
  ESI = (0x10110fb0u);
  /* 1010b7a2 jmp 0x1010b7c1 */
  goto L_1010b7c1;
L_1010b7a4:;
  /* 1010b7a4 push 0x2020 */
  push32((uint32_t)(0x2020u));
  /* 1010b7a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1010b7ab push dword ptr [0x10117d64] */
  push32((uint32_t)(r32((uint32_t)(0x10117d64))));
  /* 1010b7b1 call dword ptr [0x1010e098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e098))), 0x1010b7b7u);
  /* 1010b7b7 mov esi, eax */
  ESI = (EAX);
  /* 1010b7b9 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1010b7bb je 0x1010b8cd */
  if (C.zf) goto L_1010b8cd;
L_1010b7c1:;
  /* 1010b7c1 mov ebp, dword ptr [0x1010e0a8] */
  EBP = (r32((uint32_t)(0x1010e0a8)));
  /* 1010b7c7 push 4 */
  push32((uint32_t)(0x4u));
  /* 1010b7c9 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1010b7ce push 0x400000 */
  push32((uint32_t)(0x400000u));
  /* 1010b7d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1010b7d5 call ebp */
  call_ind((uint32_t)(EBP), 0x1010b7d7u);
  /* 1010b7d7 mov edi, eax */
  EDI = (EAX);
  /* 1010b7d9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1010b7db je 0x1010b8b6 */
  if (C.zf) goto L_1010b8b6;
  /* 1010b7e1 push 4 */
  push32((uint32_t)(0x4u));
  /* 1010b7e3 mov ebx, 0x10000 */
  EBX = (0x10000u);
  /* 1010b7e8 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1010b7ed push ebx */
  push32((uint32_t)(EBX));
  /* 1010b7ee push edi */
  push32((uint32_t)(EDI));
  /* 1010b7ef call ebp */
  call_ind((uint32_t)(EBP), 0x1010b7f1u);
  /* 1010b7f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010b7f3 je 0x1010b8a8 */
  if (C.zf) goto L_1010b8a8;
  /* 1010b7f9 mov eax, 0x10110fb0 */
  EAX = (0x10110fb0u);
  /* 1010b7fe cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b800 jne 0x1010b820 */
  if (!C.zf) goto L_1010b820;
  /* 1010b802 cmp dword ptr [0x10110fb0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10110fb0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b809 jne 0x1010b810 */
  if (!C.zf) goto L_1010b810;
  /* 1010b80b mov dword ptr [0x10110fb0], eax */
  w32((uint32_t)(0x10110fb0), (EAX));
L_1010b810:;
  /* 1010b810 cmp dword ptr [0x10110fb4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10110fb4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b817 jne 0x1010b835 */
  if (!C.zf) goto L_1010b835;
  /* 1010b819 mov dword ptr [0x10110fb4], eax */
  w32((uint32_t)(0x10110fb4), (EAX));
  /* 1010b81e jmp 0x1010b835 */
  goto L_1010b835;
L_1010b820:;
  /* 1010b820 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1010b822 mov eax, dword ptr [0x10110fb4] */
  EAX = (r32((uint32_t)(0x10110fb4)));
  /* 1010b827 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 1010b82a mov dword ptr [0x10110fb4], esi */
  w32((uint32_t)(0x10110fb4), (ESI));
  /* 1010b830 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 1010b833 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_1010b835:;
  /* 1010b835 lea eax, [edi + 0x400000] */
  EAX = ((uint32_t)(EDI + 0x400000));
  /* 1010b83b lea ecx, [esi + 0x98] */
  ECX = ((uint32_t)(ESI + 0x98));
  /* 1010b841 mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 1010b844 lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 1010b847 mov dword ptr [esi + 0xc], ecx */
  w32((uint32_t)(ESI + 0xc), (ECX));
  /* 1010b84a mov dword ptr [esi + 0x10], edi */
  w32((uint32_t)(ESI + 0x10), (EDI));
  /* 1010b84d mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 1010b850 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 1010b852 mov ecx, 0xf1 */
  ECX = (0xf1u);
L_1010b857:;
  /* 1010b857 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1010b859 cmp ebp, 0x10 */
  { uint32_t _a=(EBP),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b85c setge dl */
  DL = (((C.sf==C.of)) ? 1u : 0u);
  /* 1010b85f dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1010b860 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1010b862 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1010b863 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 1010b864 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1010b866 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1010b869 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010b86c cmp ebp, 0x400 */
  { uint32_t _a=(EBP),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b872 jl 0x1010b857 */
  if ((C.sf!=C.of)) goto L_1010b857;
  /* 1010b874 push ebx */
  push32((uint32_t)(EBX));
  /* 1010b875 push 0 */
  push32((uint32_t)(0x0u));
  /* 1010b877 push edi */
  push32((uint32_t)(EDI));
  /* 1010b878 call 0x10109c20 */
  push32(0x1010b87du); f_10109c20();
  /* 1010b87d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1010b880:;
  /* 1010b880 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 1010b883 add eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010b885 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b887 jae 0x1010b8a4 */
  if (!C.cf) goto L_1010b8a4;
  /* 1010b889 or byte ptr [edi + 0xf8], 0xff */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xf8)))|(0xffu); w8((uint32_t)(EDI + 0xf8), (_r)); fl_logic(_r,8); }
  /* 1010b890 lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 1010b893 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1010b895 mov dword ptr [edi + 4], 0xf0 */
  w32((uint32_t)(EDI + 0x4), (0xf0u));
  /* 1010b89c add edi, 0x1000 */
  { uint32_t _a=(EDI),_b=(0x1000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1010b8a2 jmp 0x1010b880 */
  goto L_1010b880;
L_1010b8a4:;
  /* 1010b8a4 mov eax, esi */
  EAX = (ESI);
  /* 1010b8a6 jmp 0x1010b8cf */
  goto L_1010b8cf;
L_1010b8a8:;
  /* 1010b8a8 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1010b8ad push 0 */
  push32((uint32_t)(0x0u));
  /* 1010b8af push edi */
  push32((uint32_t)(EDI));
  /* 1010b8b0 call dword ptr [0x1010e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e07c))), 0x1010b8b6u);
L_1010b8b6:;
  /* 1010b8b6 cmp esi, 0x10110fb0 */
  { uint32_t _a=(ESI),_b=(0x10110fb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b8bc je 0x1010b8cd */
  if (C.zf) goto L_1010b8cd;
  /* 1010b8be push esi */
  push32((uint32_t)(ESI));
  /* 1010b8bf push 0 */
  push32((uint32_t)(0x0u));
  /* 1010b8c1 push dword ptr [0x10117d64] */
  push32((uint32_t)(r32((uint32_t)(0x10117d64))));
  /* 1010b8c7 call dword ptr [0x1010e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e080))), 0x1010b8cdu);
L_1010b8cd:;
  /* 1010b8cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1010b8cf:;
  /* 1010b8cf pop edi */
  EDI = (pop32());
  /* 1010b8d0 pop esi */
  ESI = (pop32());
  /* 1010b8d1 pop ebp */
  EBP = (pop32());
  /* 1010b8d2 pop ebx */
  EBX = (pop32());
  /* 1010b8d3 ret  */
  ESPCHK(0x1010b790u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8d4 @ 0x1010b8d4 (86 bytes, 27 insns) */
void f_1010b8d4(void) {
  FTRACE(0x1010b8d4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010b8d4 push esi */
  push32((uint32_t)(ESI));
  /* 1010b8d5 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1010b8d9 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1010b8de push 0 */
  push32((uint32_t)(0x0u));
  /* 1010b8e0 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1010b8e3 call dword ptr [0x1010e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e07c))), 0x1010b8e9u);
  /* 1010b8e9 cmp dword ptr [0x10112fd0], esi */
  { uint32_t _a=(r32((uint32_t)(0x10112fd0))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b8ef jne 0x1010b8f9 */
  if (!C.zf) goto L_1010b8f9;
  /* 1010b8f1 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 1010b8f4 mov dword ptr [0x10112fd0], eax */
  w32((uint32_t)(0x10112fd0), (EAX));
L_1010b8f9:;
  /* 1010b8f9 cmp esi, 0x10110fb0 */
  { uint32_t _a=(ESI),_b=(0x10110fb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b8ff je 0x1010b921 */
  if (C.zf) goto L_1010b921;
  /* 1010b901 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 1010b904 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1010b906 push esi */
  push32((uint32_t)(ESI));
  /* 1010b907 push 0 */
  push32((uint32_t)(0x0u));
  /* 1010b909 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1010b90b mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1010b90d mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 1010b910 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1010b913 push dword ptr [0x10117d64] */
  push32((uint32_t)(r32((uint32_t)(0x10117d64))));
  /* 1010b919 call dword ptr [0x1010e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e080))), 0x1010b91fu);
  /* 1010b91f pop esi */
  ESI = (pop32());
  /* 1010b920 ret  */
  ESPCHK(0x1010b8d4u, _esp0);
  ESP += 4; return;
L_1010b921:;
  /* 1010b921 or dword ptr [0x10110fc0], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x10110fc0)))|(0xffffffffu); w32((uint32_t)(0x10110fc0), (_r)); fl_logic(_r,32); }
  /* 1010b928 pop esi */
  ESI = (pop32());
  /* 1010b929 ret  */
  ESPCHK(0x1010b8d4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b92a @ 0x1010b92a (194 bytes, 66 insns) */
void f_1010b92a(void) {
  FTRACE(0x1010b92au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010b92a push ebp */
  push32((uint32_t)(EBP));
  /* 1010b92b mov ebp, esp */
  EBP = (ESP);
  /* 1010b92d push ecx */
  push32((uint32_t)(ECX));
  /* 1010b92e push ebx */
  push32((uint32_t)(EBX));
  /* 1010b92f push esi */
  push32((uint32_t)(ESI));
  /* 1010b930 mov esi, dword ptr [0x10110fb4] */
  ESI = (r32((uint32_t)(0x10110fb4)));
  /* 1010b936 push edi */
  push32((uint32_t)(EDI));
L_1010b937:;
  /* 1010b937 cmp dword ptr [esi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b93b je 0x1010b9d5 */
  if (C.zf) goto L_1010b9d5;
  /* 1010b941 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1010b945 lea edi, [esi + 0x2010] */
  EDI = ((uint32_t)(ESI + 0x2010));
  /* 1010b94b mov ebx, 0x3ff000 */
  EBX = (0x3ff000u);
L_1010b950:;
  /* 1010b950 cmp dword ptr [edi], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b956 jne 0x1010b991 */
  if (!C.zf) goto L_1010b991;
  /* 1010b958 mov eax, ebx */
  EAX = (EBX);
  /* 1010b95a push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1010b95f add eax, dword ptr [esi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010b962 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1010b967 push eax */
  push32((uint32_t)(EAX));
  /* 1010b968 call dword ptr [0x1010e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e07c))), 0x1010b96eu);
  /* 1010b96e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010b970 je 0x1010b991 */
  if (C.zf) goto L_1010b991;
  /* 1010b972 or dword ptr [edi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(0xffffffffu); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
  /* 1010b975 dec dword ptr [0x10116964] */
  { uint32_t _r=(r32((uint32_t)(0x10116964)))-1; w32((uint32_t)(0x10116964), (_r)); fl_dec(_r,32); }
  /* 1010b97b mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1010b97e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010b980 je 0x1010b986 */
  if (C.zf) goto L_1010b986;
  /* 1010b982 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b984 jbe 0x1010b989 */
  if ((C.cf||C.zf)) goto L_1010b989;
L_1010b986:;
  /* 1010b986 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
L_1010b989:;
  /* 1010b989 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1010b98c dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 1010b98f je 0x1010b99e */
  if (C.zf) goto L_1010b99e;
L_1010b991:;
  /* 1010b991 sub ebx, 0x1000 */
  { uint32_t _a=(EBX),_b=(0x1000u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010b997 sub edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010b99a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1010b99c jge 0x1010b950 */
  if ((C.sf==C.of)) goto L_1010b950;
L_1010b99e:;
  /* 1010b99e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b9a2 mov ecx, esi */
  ECX = (ESI);
  /* 1010b9a4 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 1010b9a7 je 0x1010b9d5 */
  if (C.zf) goto L_1010b9d5;
  /* 1010b9a9 cmp dword ptr [ecx + 0x18], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b9ad jne 0x1010b9d5 */
  if (!C.zf) goto L_1010b9d5;
  /* 1010b9af push 1 */
  push32((uint32_t)(0x1u));
  /* 1010b9b1 lea eax, [ecx + 0x20] */
  EAX = ((uint32_t)(ECX + 0x20));
  /* 1010b9b4 pop edx */
  EDX = (pop32());
L_1010b9b5:;
  /* 1010b9b5 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b9b8 jne 0x1010b9c6 */
  if (!C.zf) goto L_1010b9c6;
  /* 1010b9ba inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1010b9bb add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010b9be cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b9c4 jl 0x1010b9b5 */
  if ((C.sf!=C.of)) goto L_1010b9b5;
L_1010b9c6:;
  /* 1010b9c6 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b9cc jne 0x1010b9d5 */
  if (!C.zf) goto L_1010b9d5;
  /* 1010b9ce push ecx */
  push32((uint32_t)(ECX));
  /* 1010b9cf call 0x1010b8d4 */
  push32(0x1010b9d4u); f_1010b8d4();
  /* 1010b9d4 pop ecx */
  ECX = (pop32());
L_1010b9d5:;
  /* 1010b9d5 cmp esi, dword ptr [0x10110fb4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10110fb4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b9db je 0x1010b9e7 */
  if (C.zf) goto L_1010b9e7;
  /* 1010b9dd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b9e1 jg 0x1010b937 */
  if ((!C.zf&&C.sf==C.of)) goto L_1010b937;
L_1010b9e7:;
  /* 1010b9e7 pop edi */
  EDI = (pop32());
  /* 1010b9e8 pop esi */
  ESI = (pop32());
  /* 1010b9e9 pop ebx */
  EBX = (pop32());
  /* 1010b9ea leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1010b9eb ret  */
  ESPCHK(0x1010b92au, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9ec @ 0x1010b9ec (87 bytes, 34 insns) */
void f_1010b9ec(void) {
  FTRACE(0x1010b9ecu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010b9ec mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1010b9f0 mov edx, 0x10110fb0 */
  EDX = (0x10110fb0u);
  /* 1010b9f5 push esi */
  push32((uint32_t)(ESI));
  /* 1010b9f6 mov ecx, edx */
  ECX = (EDX);
L_1010b9f8:;
  /* 1010b9f8 cmp eax, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010b9fb jbe 0x1010ba02 */
  if ((C.cf||C.zf)) goto L_1010ba02;
  /* 1010b9fd cmp eax, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010ba00 jb 0x1010ba0a */
  if (C.cf) goto L_1010ba0a;
L_1010ba02:;
  /* 1010ba02 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 1010ba04 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010ba06 je 0x1010ba3f */
  if (C.zf) goto L_1010ba3f;
  /* 1010ba08 jmp 0x1010b9f8 */
  goto L_1010b9f8;
L_1010ba0a:;
  /* 1010ba0a test al, 0xf */
  { uint32_t _r=(AL)&(0xfu); fl_logic(_r,8); }
  /* 1010ba0c jne 0x1010ba3f */
  if (!C.zf) goto L_1010ba3f;
  /* 1010ba0e mov esi, eax */
  ESI = (EAX);
  /* 1010ba10 mov edx, 0x100 */
  EDX = (0x100u);
  /* 1010ba15 and esi, 0xfff */
  { uint32_t _r=(ESI)&(0xfffu); ESI = (_r); fl_logic(_r,32); }
  /* 1010ba1b cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010ba1d jb 0x1010ba3f */
  if (C.cf) goto L_1010ba3f;
  /* 1010ba1f mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 1010ba23 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 1010ba25 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 1010ba29 mov ecx, eax */
  ECX = (EAX);
  /* 1010ba2b and cx, 0xf000 */
  { uint32_t _r=(CX)&(0xf000u); CX = (_r); fl_logic(_r,16); }
  /* 1010ba30 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010ba32 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 1010ba34 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010ba36 pop esi */
  ESI = (pop32());
  /* 1010ba37 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1010ba3a lea eax, [eax + ecx + 8] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x8));
  /* 1010ba3e ret  */
  ESPCHK(0x1010b9ecu, _esp0);
  ESP += 4; return;
L_1010ba3f:;
  /* 1010ba3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1010ba41 pop esi */
  ESI = (pop32());
  /* 1010ba42 ret  */
  ESPCHK(0x1010b9ecu, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba43 @ 0x1010ba43 (69 bytes, 19 insns) */
void f_1010ba43(void) {
  FTRACE(0x1010ba43u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010ba43 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1010ba47 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1010ba4b sub ecx, dword ptr [eax + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010ba4e sar ecx, 0xc */
  ECX = (sh_sar((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 1010ba51 lea eax, [eax + ecx*8 + 0x18] */
  EAX = ((uint32_t)(EAX + ECX*8 + 0x18));
  /* 1010ba55 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1010ba59 movzx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 1010ba5c add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1010ba5e and byte ptr [ecx], 0 */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(0x0u); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 1010ba61 cmp dword ptr [eax], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010ba67 mov dword ptr [eax + 4], 0xf1 */
  w32((uint32_t)(EAX + 0x4), (0xf1u));
  /* 1010ba6e jne 0x1010ba87 */
  if (!C.zf) goto L_1010ba87;
  /* 1010ba70 inc dword ptr [0x10116964] */
  { uint32_t _r=(r32((uint32_t)(0x10116964)))+1; w32((uint32_t)(0x10116964), (_r)); fl_inc(_r,32); }
  /* 1010ba76 cmp dword ptr [0x10116964], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x10116964))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010ba7d jne 0x1010ba87 */
  if (!C.zf) goto L_1010ba87;
  /* 1010ba7f push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1010ba81 call 0x1010b92a */
  push32(0x1010ba86u); f_1010b92a();
  /* 1010ba86 pop ecx */
  ECX = (pop32());
L_1010ba87:;
  /* 1010ba87 ret  */
  ESPCHK(0x1010ba43u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba88 @ 0x1010ba88 (520 bytes, 180 insns) */
void f_1010ba88(void) {
  FTRACE(0x1010ba88u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010ba88 push ebp */
  push32((uint32_t)(EBP));
  /* 1010ba89 mov ebp, esp */
  EBP = (ESP);
  /* 1010ba8b push ecx */
  push32((uint32_t)(ECX));
  /* 1010ba8c push ecx */
  push32((uint32_t)(ECX));
  /* 1010ba8d push ebx */
  push32((uint32_t)(EBX));
  /* 1010ba8e push esi */
  push32((uint32_t)(ESI));
  /* 1010ba8f mov esi, dword ptr [0x10112fd0] */
  ESI = (r32((uint32_t)(0x10112fd0)));
  /* 1010ba95 push edi */
  push32((uint32_t)(EDI));
L_1010ba96:;
  /* 1010ba96 mov edx, dword ptr [esi + 0x10] */
  EDX = (r32((uint32_t)(ESI + 0x10)));
  /* 1010ba99 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010ba9c je 0x1010bb41 */
  if (C.zf) goto L_1010bb41;
  /* 1010baa2 mov edi, dword ptr [esi + 8] */
  EDI = (r32((uint32_t)(ESI + 0x8)));
  /* 1010baa5 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 1010baab mov eax, edi */
  EAX = (EDI);
  /* 1010baad sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010baaf sub eax, 0x18 */
  { uint32_t _a=(EAX),_b=(0x18u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010bab2 sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 1010bab5 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 1010bab8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010baba cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010babc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1010babf jae 0x1010bafb */
  if (!C.cf) goto L_1010bafb;
L_1010bac1:;
  /* 1010bac1 mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 1010bac3 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1010bac6 cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010bac8 jl 0x1010bae4 */
  if ((C.sf!=C.of)) goto L_1010bae4;
  /* 1010baca cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010bacd jbe 0x1010bae4 */
  if ((C.cf||C.zf)) goto L_1010bae4;
  /* 1010bacf push ebx */
  push32((uint32_t)(EBX));
  /* 1010bad0 push ecx */
  push32((uint32_t)(ECX));
  /* 1010bad1 push eax */
  push32((uint32_t)(EAX));
  /* 1010bad2 call 0x1010bc90 */
  push32(0x1010bad7u); f_1010bc90();
  /* 1010bad7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010bada test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010badc jne 0x1010bb53 */
  if (!C.zf) goto L_1010bb53;
  /* 1010bade mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1010bae1 mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_1010bae4:;
  /* 1010bae4 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1010bae7 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 1010baed add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010baf2 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010baf4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1010baf7 jb 0x1010bac1 */
  if (C.cf) goto L_1010bac1;
  /* 1010baf9 jmp 0x1010bafe */
  goto L_1010bafe;
L_1010bafb:;
  /* 1010bafb mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1010bafe:;
  /* 1010bafe mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 1010bb01 mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 1010bb04 lea edi, [esi + 0x18] */
  EDI = ((uint32_t)(ESI + 0x18));
  /* 1010bb07 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1010bb0a cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010bb0c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1010bb0f jae 0x1010bb44 */
  if (!C.cf) goto L_1010bb44;
L_1010bb11:;
  /* 1010bb11 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1010bb13 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010bb15 jl 0x1010bb30 */
  if ((C.sf!=C.of)) goto L_1010bb30;
  /* 1010bb17 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010bb1a jbe 0x1010bb30 */
  if ((C.cf||C.zf)) goto L_1010bb30;
  /* 1010bb1c push ebx */
  push32((uint32_t)(EBX));
  /* 1010bb1d push eax */
  push32((uint32_t)(EAX));
  /* 1010bb1e push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 1010bb21 call 0x1010bc90 */
  push32(0x1010bb26u); f_1010bc90();
  /* 1010bb26 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010bb29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010bb2b jne 0x1010bb53 */
  if (!C.zf) goto L_1010bb53;
  /* 1010bb2d mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_1010bb30:;
  /* 1010bb30 add dword ptr [ebp - 4], 0x1000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1000u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1010bb37 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1010bb3a cmp edi, dword ptr [ebp - 8] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010bb3d jb 0x1010bb11 */
  if (C.cf) goto L_1010bb11;
  /* 1010bb3f jmp 0x1010bb44 */
  goto L_1010bb44;
L_1010bb41:;
  /* 1010bb41 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1010bb44:;
  /* 1010bb44 mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 1010bb46 cmp esi, dword ptr [0x10112fd0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10112fd0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010bb4c je 0x1010bb63 */
  if (C.zf) goto L_1010bb63;
  /* 1010bb4e jmp 0x1010ba96 */
  goto L_1010ba96;
L_1010bb53:;
  /* 1010bb53 mov dword ptr [0x10112fd0], esi */
  w32((uint32_t)(0x10112fd0), (ESI));
  /* 1010bb59 sub dword ptr [edi], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(EBX),_r=_a-_b; w32((uint32_t)(EDI), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1010bb5b mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
  /* 1010bb5e jmp 0x1010bc8b */
  goto L_1010bc8b;
L_1010bb63:;
  /* 1010bb63 mov eax, 0x10110fb0 */
  EAX = (0x10110fb0u);
  /* 1010bb68 mov edi, eax */
  EDI = (EAX);
L_1010bb6a:;
  /* 1010bb6a cmp dword ptr [edi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010bb6e je 0x1010bb76 */
  if (C.zf) goto L_1010bb76;
  /* 1010bb70 cmp dword ptr [edi + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010bb74 jne 0x1010bb82 */
  if (!C.zf) goto L_1010bb82;
L_1010bb76:;
  /* 1010bb76 mov edi, dword ptr [edi] */
  EDI = (r32((uint32_t)(EDI)));
  /* 1010bb78 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010bb7a je 0x1010bc57 */
  if (C.zf) goto L_1010bc57;
  /* 1010bb80 jmp 0x1010bb6a */
  goto L_1010bb6a;
L_1010bb82:;
  /* 1010bb82 mov ebx, dword ptr [edi + 0xc] */
  EBX = (r32((uint32_t)(EDI + 0xc)));
  /* 1010bb85 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1010bb89 mov esi, ebx */
  ESI = (EBX);
  /* 1010bb8b mov eax, ebx */
  EAX = (EBX);
  /* 1010bb8d sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010bb8f sub esi, 0x18 */
  { uint32_t _a=(ESI),_b=(0x18u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010bb92 sar esi, 3 */
  ESI = (sh_sar((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 1010bb95 shl esi, 0xc */
  ESI = (sh_shl((uint32_t)(ESI), (0xcu)&0x1f, 32));
  /* 1010bb98 add esi, dword ptr [edi + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1010bb9b cmp dword ptr [ebx], -1 */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010bb9e jne 0x1010bbb1 */
  if (!C.zf) goto L_1010bbb1;
L_1010bba0:;
  /* 1010bba0 cmp dword ptr [ebp - 4], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010bba4 jge 0x1010bbb1 */
  if ((C.sf==C.of)) goto L_1010bbb1;
  /* 1010bba6 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010bba9 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1010bbac cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010bbaf je 0x1010bba0 */
  if (C.zf) goto L_1010bba0;
L_1010bbb1:;
  /* 1010bbb1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1010bbb4 push 4 */
  push32((uint32_t)(0x4u));
  /* 1010bbb6 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 1010bbb9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1010bbbe push eax */
  push32((uint32_t)(EAX));
  /* 1010bbbf push esi */
  push32((uint32_t)(ESI));
  /* 1010bbc0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1010bbc3 call dword ptr [0x1010e0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e0a8))), 0x1010bbc9u);
  /* 1010bbc9 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010bbcb jne 0x1010bc89 */
  if (!C.zf) goto L_1010bc89;
  /* 1010bbd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1010bbd3 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 1010bbd6 push esi */
  push32((uint32_t)(ESI));
  /* 1010bbd7 call 0x10109c20 */
  push32(0x1010bbdcu); f_10109c20();
  /* 1010bbdc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1010bbdf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010bbe2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1010bbe4 mov ecx, ebx */
  ECX = (EBX);
  /* 1010bbe6 jle 0x1010bc18 */
  if ((C.zf||C.sf!=C.of)) goto L_1010bc18;
  /* 1010bbe8 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 1010bbeb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1010bbee:;
  /* 1010bbee or byte ptr [eax + 0xf4], 0xff */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xf4)))|(0xffu); w8((uint32_t)(EAX + 0xf4), (_r)); fl_logic(_r,8); }
  /* 1010bbf5 lea edx, [eax + 4] */
  EDX = ((uint32_t)(EAX + 0x4));
  /* 1010bbf8 mov dword ptr [eax - 4], edx */
  w32((uint32_t)(EAX + -0x4), (EDX));
  /* 1010bbfb mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 1010bc00 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1010bc02 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1010bc04 mov dword ptr [ecx + 4], 0xf1 */
  w32((uint32_t)(ECX + 0x4), (0xf1u));
  /* 1010bc0b add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010bc10 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010bc13 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 1010bc16 jne 0x1010bbee */
  if (!C.zf) goto L_1010bbee;
L_1010bc18:;
  /* 1010bc18 mov dword ptr [0x10112fd0], edi */
  w32((uint32_t)(0x10112fd0), (EDI));
  /* 1010bc1e lea eax, [edi + 0x2018] */
  EAX = ((uint32_t)(EDI + 0x2018));
L_1010bc24:;
  /* 1010bc24 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010bc26 jae 0x1010bc34 */
  if (!C.cf) goto L_1010bc34;
  /* 1010bc28 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010bc2b je 0x1010bc32 */
  if (C.zf) goto L_1010bc32;
  /* 1010bc2d add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010bc30 jmp 0x1010bc24 */
  goto L_1010bc24;
L_1010bc32:;
  /* 1010bc32 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1010bc34:;
  /* 1010bc34 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010bc36 and eax, ecx */
  { uint32_t _r=(EAX)&(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 1010bc38 mov dword ptr [edi + 0xc], eax */
  w32((uint32_t)(EDI + 0xc), (EAX));
  /* 1010bc3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1010bc3e mov byte ptr [esi + 8], al */
  w8((uint32_t)(ESI + 0x8), (AL));
  /* 1010bc41 mov dword ptr [edi + 8], ebx */
  w32((uint32_t)(EDI + 0x8), (EBX));
  /* 1010bc44 sub dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1010bc46 sub dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; w32((uint32_t)(ESI + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1010bc49 lea ecx, [esi + eax + 8] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x8));
  /* 1010bc4d lea eax, [esi + 0x100] */
  EAX = ((uint32_t)(ESI + 0x100));
  /* 1010bc53 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 1010bc55 jmp 0x1010bc8b */
  goto L_1010bc8b;
L_1010bc57:;
  /* 1010bc57 call 0x1010b790 */
  push32(0x1010bc5cu); f_1010b790();
  /* 1010bc5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010bc5e je 0x1010bc89 */
  if (C.zf) goto L_1010bc89;
  /* 1010bc60 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1010bc63 mov byte ptr [ecx + 8], bl */
  w8((uint32_t)(ECX + 0x8), (BL));
  /* 1010bc66 lea edx, [ecx + ebx + 8] */
  EDX = ((uint32_t)(ECX + EBX*1 + 0x8));
  /* 1010bc6a mov dword ptr [0x10112fd0], eax */
  w32((uint32_t)(0x10112fd0), (EAX));
  /* 1010bc6f mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1010bc71 mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 1010bc76 sub edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010bc78 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1010bc7b movzx edx, bl */
  EDX = ((uint32_t)(BL));
  /* 1010bc7e sub dword ptr [eax + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EAX + 0x18), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1010bc81 lea eax, [ecx + 0x100] */
  EAX = ((uint32_t)(ECX + 0x100));
  /* 1010bc87 jmp 0x1010bc8b */
  goto L_1010bc8b;
L_1010bc89:;
  /* 1010bc89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1010bc8b:;
  /* 1010bc8b pop edi */
  EDI = (pop32());
  /* 1010bc8c pop esi */
  ESI = (pop32());
  /* 1010bc8d pop ebx */
  EBX = (pop32());
  /* 1010bc8e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1010bc8f ret  */
  ESPCHK(0x1010ba88u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc90 @ 0x1010bc90 (292 bytes, 125 insns) */
void f_1010bc90(void) {
  FTRACE(0x1010bc90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010bc90 push ebp */
  push32((uint32_t)(EBP));
  /* 1010bc91 mov ebp, esp */
  EBP = (ESP);
  /* 1010bc93 push ecx */
  push32((uint32_t)(ECX));
  /* 1010bc94 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1010bc97 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1010bc9a push ebx */
  push32((uint32_t)(EBX));
  /* 1010bc9b push esi */
  push32((uint32_t)(ESI));
  /* 1010bc9c mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 1010bc9f push edi */
  push32((uint32_t)(EDI));
  /* 1010bca0 mov edi, dword ptr [ecx] */
  EDI = (r32((uint32_t)(ECX)));
  /* 1010bca2 lea ebx, [ecx + 0xf8] */
  EBX = ((uint32_t)(ECX + 0xf8));
  /* 1010bca8 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010bcaa mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 1010bcad mov eax, edi */
  EAX = (EDI);
  /* 1010bcaf mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1010bcb2 jb 0x1010bcd5 */
  if (C.cf) goto L_1010bcd5;
  /* 1010bcb4 lea eax, [edi + edx] */
  EAX = ((uint32_t)(EDI + EDX*1));
  /* 1010bcb7 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1010bcb9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010bcbb jae 0x1010bcc4 */
  if (!C.cf) goto L_1010bcc4;
  /* 1010bcbd add dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1010bcbf sub dword ptr [ecx + 4], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1010bcc2 jmp 0x1010bccd */
  goto L_1010bccd;
L_1010bcc4:;
  /* 1010bcc4 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1010bcc8 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 1010bccb mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1010bccd:;
  /* 1010bccd lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 1010bcd0 jmp 0x1010bda3 */
  goto L_1010bda3;
L_1010bcd5:;
  /* 1010bcd5 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1010bcd7 cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010bcda je 0x1010bcde */
  if (C.zf) goto L_1010bcde;
  /* 1010bcdc mov eax, esi */
  EAX = (ESI);
L_1010bcde:;
  /* 1010bcde lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 1010bce1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010bce3 jae 0x1010bd28 */
  if (!C.cf) goto L_1010bd28;
L_1010bce5:;
  /* 1010bce5 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 1010bce7 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 1010bce9 jne 0x1010bd1b */
  if (!C.zf) goto L_1010bd1b;
  /* 1010bceb push 1 */
  push32((uint32_t)(0x1u));
  /* 1010bced lea ebx, [eax + 1] */
  EBX = ((uint32_t)(EAX + 0x1));
  /* 1010bcf0 pop esi */
  ESI = (pop32());
L_1010bcf1:;
  /* 1010bcf1 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010bcf4 jne 0x1010bcfa */
  if (!C.zf) goto L_1010bcfa;
  /* 1010bcf6 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1010bcf7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1010bcf8 jmp 0x1010bcf1 */
  goto L_1010bcf1;
L_1010bcfa:;
  /* 1010bcfa cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010bcfc jae 0x1010bd4c */
  if (!C.cf) goto L_1010bd4c;
  /* 1010bcfe cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010bd01 jne 0x1010bd08 */
  if (!C.zf) goto L_1010bd08;
  /* 1010bd03 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 1010bd06 jmp 0x1010bd14 */
  goto L_1010bd14;
L_1010bd08:;
  /* 1010bd08 sub dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1010bd0b cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010bd0e jb 0x1010bdad */
  if (C.cf) goto L_1010bdad;
L_1010bd14:;
  /* 1010bd14 mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 1010bd17 mov eax, ebx */
  EAX = (EBX);
  /* 1010bd19 jmp 0x1010bd20 */
  goto L_1010bd20;
L_1010bd1b:;
  /* 1010bd1b movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 1010bd1e add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1010bd20:;
  /* 1010bd20 lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 1010bd23 cmp esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010bd26 jb 0x1010bce5 */
  if (C.cf) goto L_1010bce5;
L_1010bd28:;
  /* 1010bd28 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
L_1010bd2b:;
  /* 1010bd2b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010bd2d jae 0x1010bdad */
  if (!C.cf) goto L_1010bdad;
  /* 1010bd2f lea eax, [esi + edx] */
  EAX = ((uint32_t)(ESI + EDX*1));
  /* 1010bd32 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010bd35 jae 0x1010bdad */
  if (!C.cf) goto L_1010bdad;
  /* 1010bd37 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1010bd39 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1010bd3b jne 0x1010bd7d */
  if (!C.zf) goto L_1010bd7d;
  /* 1010bd3d push 1 */
  push32((uint32_t)(0x1u));
  /* 1010bd3f lea ebx, [esi + 1] */
  EBX = ((uint32_t)(ESI + 0x1));
  /* 1010bd42 pop eax */
  EAX = (pop32());
L_1010bd43:;
  /* 1010bd43 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010bd46 jne 0x1010bd6d */
  if (!C.zf) goto L_1010bd6d;
  /* 1010bd48 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1010bd49 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1010bd4a jmp 0x1010bd43 */
  goto L_1010bd43;
L_1010bd4c:;
  /* 1010bd4c lea ebx, [eax + edx] */
  EBX = ((uint32_t)(EAX + EDX*1));
  /* 1010bd4f cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010bd52 jae 0x1010bd5d */
  if (!C.cf) goto L_1010bd5d;
  /* 1010bd54 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010bd56 mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 1010bd58 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 1010bd5b jmp 0x1010bd66 */
  goto L_1010bd66;
L_1010bd5d:;
  /* 1010bd5d and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1010bd61 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
  /* 1010bd64 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_1010bd66:;
  /* 1010bd66 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1010bd68 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010bd6b jmp 0x1010bda3 */
  goto L_1010bda3;
L_1010bd6d:;
  /* 1010bd6d cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010bd6f jae 0x1010bd84 */
  if (!C.cf) goto L_1010bd84;
  /* 1010bd71 sub dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1010bd74 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010bd77 jb 0x1010bdad */
  if (C.cf) goto L_1010bdad;
  /* 1010bd79 mov esi, ebx */
  ESI = (EBX);
  /* 1010bd7b jmp 0x1010bd2b */
  goto L_1010bd2b;
L_1010bd7d:;
  /* 1010bd7d movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 1010bd80 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1010bd82 jmp 0x1010bd2b */
  goto L_1010bd2b;
L_1010bd84:;
  /* 1010bd84 lea ebx, [esi + edx] */
  EBX = ((uint32_t)(ESI + EDX*1));
  /* 1010bd87 cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010bd8a jae 0x1010bd95 */
  if (!C.cf) goto L_1010bd95;
  /* 1010bd8c sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010bd8e mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 1010bd90 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1010bd93 jmp 0x1010bd9e */
  goto L_1010bd9e;
L_1010bd95:;
  /* 1010bd95 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1010bd99 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 1010bd9c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1010bd9e:;
  /* 1010bd9e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1010bda0 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
L_1010bda3:;
  /* 1010bda3 imul ecx, ecx, 0xf */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xfu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1010bda6 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1010bda9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010bdab jmp 0x1010bdaf */
  goto L_1010bdaf;
L_1010bdad:;
  /* 1010bdad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1010bdaf:;
  /* 1010bdaf pop edi */
  EDI = (pop32());
  /* 1010bdb0 pop esi */
  ESI = (pop32());
  /* 1010bdb1 pop ebx */
  EBX = (pop32());
  /* 1010bdb2 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1010bdb3 ret  */
  ESPCHK(0x1010bc90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bdb4 @ 0x1010bdb4 (137 bytes, 50 insns) */
void f_1010bdb4(void) {
  FTRACE(0x1010bdb4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010bdb4 push ebx */
  push32((uint32_t)(EBX));
  /* 1010bdb5 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1010bdb7 cmp dword ptr [0x10116968], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10116968))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010bdbd push esi */
  push32((uint32_t)(ESI));
  /* 1010bdbe push edi */
  push32((uint32_t)(EDI));
  /* 1010bdbf jne 0x1010be03 */
  if (!C.zf) goto L_1010be03;
  /* 1010bdc1 push 0x1010e548 */
  push32((uint32_t)(0x1010e548u));
  /* 1010bdc6 call dword ptr [0x1010e0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e0b0))), 0x1010bdccu);
  /* 1010bdcc mov edi, eax */
  EDI = (EAX);
  /* 1010bdce cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010bdd0 je 0x1010be39 */
  if (C.zf) goto L_1010be39;
  /* 1010bdd2 mov esi, dword ptr [0x1010e088] */
  ESI = (r32((uint32_t)(0x1010e088)));
  /* 1010bdd8 push 0x1010e53c */
  push32((uint32_t)(0x1010e53cu));
  /* 1010bddd push edi */
  push32((uint32_t)(EDI));
  /* 1010bdde call esi */
  call_ind((uint32_t)(ESI), 0x1010bde0u);
  /* 1010bde0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010bde2 mov dword ptr [0x10116968], eax */
  w32((uint32_t)(0x10116968), (EAX));
  /* 1010bde7 je 0x1010be39 */
  if (C.zf) goto L_1010be39;
  /* 1010bde9 push 0x1010e52c */
  push32((uint32_t)(0x1010e52cu));
  /* 1010bdee push edi */
  push32((uint32_t)(EDI));
  /* 1010bdef call esi */
  call_ind((uint32_t)(ESI), 0x1010bdf1u);
  /* 1010bdf1 push 0x1010e518 */
  push32((uint32_t)(0x1010e518u));
  /* 1010bdf6 push edi */
  push32((uint32_t)(EDI));
  /* 1010bdf7 mov dword ptr [0x1011696c], eax */
  w32((uint32_t)(0x1011696c), (EAX));
  /* 1010bdfc call esi */
  call_ind((uint32_t)(ESI), 0x1010bdfeu);
  /* 1010bdfe mov dword ptr [0x10116970], eax */
  w32((uint32_t)(0x10116970), (EAX));
L_1010be03:;
  /* 1010be03 mov eax, dword ptr [0x1011696c] */
  EAX = (r32((uint32_t)(0x1011696c)));
  /* 1010be08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010be0a je 0x1010be22 */
  if (C.zf) goto L_1010be22;
  /* 1010be0c call eax */
  call_ind((uint32_t)(EAX), 0x1010be0eu);
  /* 1010be0e mov ebx, eax */
  EBX = (EAX);
  /* 1010be10 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1010be12 je 0x1010be22 */
  if (C.zf) goto L_1010be22;
  /* 1010be14 mov eax, dword ptr [0x10116970] */
  EAX = (r32((uint32_t)(0x10116970)));
  /* 1010be19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010be1b je 0x1010be22 */
  if (C.zf) goto L_1010be22;
  /* 1010be1d push ebx */
  push32((uint32_t)(EBX));
  /* 1010be1e call eax */
  call_ind((uint32_t)(EAX), 0x1010be20u);
  /* 1010be20 mov ebx, eax */
  EBX = (EAX);
L_1010be22:;
  /* 1010be22 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 1010be26 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 1010be2a push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 1010be2e push ebx */
  push32((uint32_t)(EBX));
  /* 1010be2f call dword ptr [0x10116968] */
  call_ind((uint32_t)(r32((uint32_t)(0x10116968))), 0x1010be35u);
L_1010be35:;
  /* 1010be35 pop edi */
  EDI = (pop32());
  /* 1010be36 pop esi */
  ESI = (pop32());
  /* 1010be37 pop ebx */
  EBX = (pop32());
  /* 1010be38 ret  */
  ESPCHK(0x1010bdb4u, _esp0);
  ESP += 4; return;
L_1010be39:;
  /* 1010be39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1010be3b jmp 0x1010be35 */
  goto L_1010be35;
}

/* _strncpy @ 0x1010be40 (254 bytes, 109 insns) */
void f_1010be40(void) {
  FTRACE(0x1010be40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010be40 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1010be44 push edi */
  push32((uint32_t)(EDI));
  /* 1010be45 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1010be47 je 0x1010bec3 */
  if (C.zf) goto L_1010bec3;
  /* 1010be49 push esi */
  push32((uint32_t)(ESI));
  /* 1010be4a push ebx */
  push32((uint32_t)(EBX));
  /* 1010be4b mov ebx, ecx */
  EBX = (ECX);
  /* 1010be4d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 1010be51 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 1010be57 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1010be5b jne 0x1010be64 */
  if (!C.zf) goto L_1010be64;
  /* 1010be5d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1010be60 jne 0x1010bed1 */
  if (!C.zf) goto L_1010bed1;
  /* 1010be62 jmp 0x1010be85 */
  goto L_1010be85;
L_1010be64:;
  /* 1010be64 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1010be66 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1010be67 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1010be69 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1010be6a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1010be6b je 0x1010be92 */
  if (C.zf) goto L_1010be92;
  /* 1010be6d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1010be6f je 0x1010be9a */
  if (C.zf) goto L_1010be9a;
  /* 1010be71 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 1010be77 jne 0x1010be64 */
  if (!C.zf) goto L_1010be64;
  /* 1010be79 mov ebx, ecx */
  EBX = (ECX);
  /* 1010be7b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1010be7e jne 0x1010bed1 */
  if (!C.zf) goto L_1010bed1;
L_1010be80:;
  /* 1010be80 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 1010be83 je 0x1010be92 */
  if (C.zf) goto L_1010be92;
L_1010be85:;
  /* 1010be85 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1010be87 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1010be88 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1010be8a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1010be8b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1010be8d je 0x1010bebe */
  if (C.zf) goto L_1010bebe;
  /* 1010be8f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1010be90 jne 0x1010be85 */
  if (!C.zf) goto L_1010be85;
L_1010be92:;
  /* 1010be92 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1010be96 pop ebx */
  EBX = (pop32());
  /* 1010be97 pop esi */
  ESI = (pop32());
  /* 1010be98 pop edi */
  EDI = (pop32());
  /* 1010be99 ret  */
  ESPCHK(0x1010be40u, _esp0);
  ESP += 4; return;
L_1010be9a:;
  /* 1010be9a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1010bea0 je 0x1010beb4 */
  if (C.zf) goto L_1010beb4;
L_1010bea2:;
  /* 1010bea2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1010bea4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1010bea5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1010bea6 je 0x1010bf36 */
  if (C.zf) goto L_1010bf36;
  /* 1010beac test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1010beb2 jne 0x1010bea2 */
  if (!C.zf) goto L_1010bea2;
L_1010beb4:;
  /* 1010beb4 mov ebx, ecx */
  EBX = (ECX);
  /* 1010beb6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1010beb9 jne 0x1010bf27 */
  if (!C.zf) goto L_1010bf27;
L_1010bebb:;
  /* 1010bebb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1010bebd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_1010bebe:;
  /* 1010bebe dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1010bebf jne 0x1010bebb */
  if (!C.zf) goto L_1010bebb;
  /* 1010bec1 pop ebx */
  EBX = (pop32());
  /* 1010bec2 pop esi */
  ESI = (pop32());
L_1010bec3:;
  /* 1010bec3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1010bec7 pop edi */
  EDI = (pop32());
  /* 1010bec8 ret  */
  ESPCHK(0x1010be40u, _esp0);
  ESP += 4; return;
L_1010bec9:;
  /* 1010bec9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1010becb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1010bece dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1010becf je 0x1010be80 */
  if (C.zf) goto L_1010be80;
L_1010bed1:;
  /* 1010bed1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1010bed6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1010bed8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010beda xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1010bedd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1010bedf mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 1010bee1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1010bee4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1010bee9 je 0x1010bec9 */
  if (C.zf) goto L_1010bec9;
  /* 1010beeb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1010beed je 0x1010bf1b */
  if (C.zf) goto L_1010bf1b;
  /* 1010beef test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 1010bef1 je 0x1010bf11 */
  if (C.zf) goto L_1010bf11;
  /* 1010bef3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1010bef9 je 0x1010bf07 */
  if (C.zf) goto L_1010bf07;
  /* 1010befb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 1010bf01 jne 0x1010bec9 */
  if (!C.zf) goto L_1010bec9;
  /* 1010bf03 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1010bf05 jmp 0x1010bf1f */
  goto L_1010bf1f;
L_1010bf07:;
  /* 1010bf07 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1010bf0d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1010bf0f jmp 0x1010bf1f */
  goto L_1010bf1f;
L_1010bf11:;
  /* 1010bf11 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1010bf17 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1010bf19 jmp 0x1010bf1f */
  goto L_1010bf1f;
L_1010bf1b:;
  /* 1010bf1b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1010bf1d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_1010bf1f:;
  /* 1010bf1f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1010bf22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1010bf24 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1010bf25 je 0x1010bf31 */
  if (C.zf) goto L_1010bf31;
L_1010bf27:;
  /* 1010bf27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1010bf29:;
  /* 1010bf29 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1010bf2b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1010bf2e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1010bf2f jne 0x1010bf29 */
  if (!C.zf) goto L_1010bf29;
L_1010bf31:;
  /* 1010bf31 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 1010bf34 jne 0x1010bebb */
  if (!C.zf) goto L_1010bebb;
L_1010bf36:;
  /* 1010bf36 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1010bf3a pop ebx */
  EBX = (pop32());
  /* 1010bf3b pop esi */
  ESI = (pop32());
  /* 1010bf3c pop edi */
  EDI = (pop32());
  /* 1010bf3d ret  */
  ESPCHK(0x1010be40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf3e @ 0x1010bf3e (115 bytes, 37 insns) */
void f_1010bf3e(void) {
  FTRACE(0x1010bf3eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010bf3e push esi */
  push32((uint32_t)(ESI));
  /* 1010bf3f call 0x1010bfba */
  push32(0x1010bf44u); f_1010bfba();
  /* 1010bf44 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1010bf48 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1010bf4a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1010bf4c mov eax, 0x10112fe0 */
  EAX = (0x10112fe0u);
L_1010bf51:;
  /* 1010bf51 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010bf53 je 0x1010bf77 */
  if (C.zf) goto L_1010bf77;
  /* 1010bf55 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010bf58 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1010bf59 cmp eax, 0x10113148 */
  { uint32_t _a=(EAX),_b=(0x10113148u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010bf5e jl 0x1010bf51 */
  if ((C.sf!=C.of)) goto L_1010bf51;
  /* 1010bf60 cmp ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010bf63 jb 0x1010bf87 */
  if (C.cf) goto L_1010bf87;
  /* 1010bf65 cmp ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010bf68 ja 0x1010bf87 */
  if ((!C.cf&&!C.zf)) goto L_1010bf87;
  /* 1010bf6a call 0x1010bfb1 */
  push32(0x1010bf6fu); f_1010bfb1();
  /* 1010bf6f mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1010bf75 pop esi */
  ESI = (pop32());
  /* 1010bf76 ret  */
  ESPCHK(0x1010bf3eu, _esp0);
  ESP += 4; return;
L_1010bf77:;
  /* 1010bf77 call 0x1010bfb1 */
  push32(0x1010bf7cu); f_1010bfb1();
  /* 1010bf7c mov ecx, dword ptr [esi*8 + 0x10112fe4] */
  ECX = (r32((uint32_t)(ESI*8 + 0x10112fe4)));
  /* 1010bf83 pop esi */
  ESI = (pop32());
  /* 1010bf84 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1010bf86 ret  */
  ESPCHK(0x1010bf3eu, _esp0);
  ESP += 4; return;
L_1010bf87:;
  /* 1010bf87 cmp ecx, 0xbc */
  { uint32_t _a=(ECX),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010bf8d jb 0x1010bfa4 */
  if (C.cf) goto L_1010bfa4;
  /* 1010bf8f cmp ecx, 0xca */
  { uint32_t _a=(ECX),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010bf95 ja 0x1010bfa4 */
  if ((!C.cf&&!C.zf)) goto L_1010bfa4;
  /* 1010bf97 call 0x1010bfb1 */
  push32(0x1010bf9cu); f_1010bfb1();
  /* 1010bf9c mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1010bfa2 pop esi */
  ESI = (pop32());
  /* 1010bfa3 ret  */
  ESPCHK(0x1010bf3eu, _esp0);
  ESP += 4; return;
L_1010bfa4:;
  /* 1010bfa4 call 0x1010bfb1 */
  push32(0x1010bfa9u); f_1010bfb1();
  /* 1010bfa9 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 1010bfaf pop esi */
  ESI = (pop32());
  /* 1010bfb0 ret  */
  ESPCHK(0x1010bf3eu, _esp0);
  ESP += 4; return;
}

/* FUN_1000bfb1 @ 0x1010bfb1 (9 bytes, 3 insns) */
void f_1010bfb1(void) {
  FTRACE(0x1010bfb1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010bfb1 call 0x10108088 */
  push32(0x1010bfb6u); f_10108088();
  /* 1010bfb6 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010bfb9 ret  */
  ESPCHK(0x1010bfb1u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bfba @ 0x1010bfba (9 bytes, 3 insns) */
void f_1010bfba(void) {
  FTRACE(0x1010bfbau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010bfba call 0x10108088 */
  push32(0x1010bfbfu); f_10108088();
  /* 1010bfbf add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010bfc2 ret  */
  ESPCHK(0x1010bfbau, _esp0);
  ESP += 4; return;
}

/* FUN_1000bfc3 @ 0x1010bfc3 (127 bytes, 48 insns) */
void f_1010bfc3(void) {
  FTRACE(0x1010bfc3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010bfc3 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1010bfc7 push esi */
  push32((uint32_t)(ESI));
  /* 1010bfc8 cmp ecx, dword ptr [0x10117e80] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10117e80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010bfce push edi */
  push32((uint32_t)(EDI));
  /* 1010bfcf jae 0x1010c029 */
  if (!C.cf) goto L_1010c029;
  /* 1010bfd1 mov eax, ecx */
  EAX = (ECX);
  /* 1010bfd3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1010bfd6 lea edi, [eax*4 + 0x10117d80] */
  EDI = ((uint32_t)(EAX*4 + 0x10117d80));
  /* 1010bfdd mov eax, ecx */
  EAX = (ECX);
  /* 1010bfdf and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1010bfe2 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 1010bfe5 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1010bfe7 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 1010bfea add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010bfec test byte ptr [eax + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1010bff0 je 0x1010c029 */
  if (C.zf) goto L_1010c029;
  /* 1010bff2 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010bff5 je 0x1010c029 */
  if (C.zf) goto L_1010c029;
  /* 1010bff7 cmp dword ptr [0x101167a4], 1 */
  { uint32_t _a=(r32((uint32_t)(0x101167a4))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010bffe jne 0x1010c01f */
  if (!C.zf) goto L_1010c01f;
  /* 1010c000 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1010c002 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010c004 je 0x1010c016 */
  if (C.zf) goto L_1010c016;
  /* 1010c006 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1010c007 je 0x1010c011 */
  if (C.zf) goto L_1010c011;
  /* 1010c009 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1010c00a jne 0x1010c01f */
  if (!C.zf) goto L_1010c01f;
  /* 1010c00c push eax */
  push32((uint32_t)(EAX));
  /* 1010c00d push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1010c00f jmp 0x1010c019 */
  goto L_1010c019;
L_1010c011:;
  /* 1010c011 push eax */
  push32((uint32_t)(EAX));
  /* 1010c012 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1010c014 jmp 0x1010c019 */
  goto L_1010c019;
L_1010c016:;
  /* 1010c016 push eax */
  push32((uint32_t)(EAX));
  /* 1010c017 push -0xa */
  push32((uint32_t)(0xfffffff6u));
L_1010c019:;
  /* 1010c019 call dword ptr [0x1010e0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e0b4))), 0x1010c01fu);
L_1010c01f:;
  /* 1010c01f mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1010c021 or dword ptr [eax + esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*1)))|(0xffffffffu); w32((uint32_t)(EAX + ESI*1), (_r)); fl_logic(_r,32); }
  /* 1010c025 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1010c027 jmp 0x1010c03f */
  goto L_1010c03f;
L_1010c029:;
  /* 1010c029 call 0x1010bfb1 */
  push32(0x1010c02eu); f_1010bfb1();
  /* 1010c02e mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1010c034 call 0x1010bfba */
  push32(0x1010c039u); f_1010bfba();
  /* 1010c039 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1010c03c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1010c03f:;
  /* 1010c03f pop edi */
  EDI = (pop32());
  /* 1010c040 pop esi */
  ESI = (pop32());
  /* 1010c041 ret  */
  ESPCHK(0x1010bfc3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c042 @ 0x1010c042 (66 bytes, 19 insns) */
void f_1010c042(void) {
  FTRACE(0x1010c042u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010c042 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1010c046 cmp eax, dword ptr [0x10117e80] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10117e80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010c04c jae 0x1010c06d */
  if (!C.cf) goto L_1010c06d;
  /* 1010c04e mov ecx, eax */
  ECX = (EAX);
  /* 1010c050 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1010c053 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1010c056 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1010c059 mov ecx, dword ptr [ecx*4 + 0x10117d80] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10117d80)));
  /* 1010c060 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1010c065 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 1010c068 je 0x1010c06d */
  if (C.zf) goto L_1010c06d;
  /* 1010c06a mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 1010c06c ret  */
  ESPCHK(0x1010c042u, _esp0);
  ESP += 4; return;
L_1010c06d:;
  /* 1010c06d call 0x1010bfb1 */
  push32(0x1010c072u); f_1010bfb1();
  /* 1010c072 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1010c078 call 0x1010bfba */
  push32(0x1010c07du); f_1010bfba();
  /* 1010c07d and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1010c080 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1010c083 ret  */
  ESPCHK(0x1010c042u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c084 @ 0x1010c084 (95 bytes, 34 insns) */
void f_1010c084(void) {
  FTRACE(0x1010c084u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010c084 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1010c088 push ebx */
  push32((uint32_t)(EBX));
  /* 1010c089 mov ecx, eax */
  ECX = (EAX);
  /* 1010c08b and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1010c08e sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1010c091 push esi */
  push32((uint32_t)(ESI));
  /* 1010c092 push edi */
  push32((uint32_t)(EDI));
  /* 1010c093 mov esi, dword ptr [ecx*4 + 0x10117d80] */
  ESI = (r32((uint32_t)(ECX*4 + 0x10117d80)));
  /* 1010c09a lea ebx, [ecx*4 + 0x10117d80] */
  EBX = ((uint32_t)(ECX*4 + 0x10117d80));
  /* 1010c0a1 lea edi, [eax + eax*8] */
  EDI = ((uint32_t)(EAX + EAX*8));
  /* 1010c0a4 shl edi, 2 */
  EDI = (sh_shl((uint32_t)(EDI), (0x2u)&0x1f, 32));
  /* 1010c0a7 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1010c0a9 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010c0ad jne 0x1010c0d2 */
  if (!C.zf) goto L_1010c0d2;
  /* 1010c0af push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1010c0b1 call 0x1010a053 */
  push32(0x1010c0b6u); f_1010a053();
  /* 1010c0b6 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010c0ba pop ecx */
  ECX = (pop32());
  /* 1010c0bb jne 0x1010c0ca */
  if (!C.zf) goto L_1010c0ca;
  /* 1010c0bd lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 1010c0c0 push eax */
  push32((uint32_t)(EAX));
  /* 1010c0c1 call dword ptr [0x1010e094] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e094))), 0x1010c0c7u);
  /* 1010c0c7 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_1010c0ca:;
  /* 1010c0ca push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1010c0cc call 0x1010a0b4 */
  push32(0x1010c0d1u); f_1010a0b4();
  /* 1010c0d1 pop ecx */
  ECX = (pop32());
L_1010c0d2:;
  /* 1010c0d2 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 1010c0d4 lea eax, [eax + edi + 0xc] */
  EAX = ((uint32_t)(EAX + EDI*1 + 0xc));
  /* 1010c0d8 push eax */
  push32((uint32_t)(EAX));
  /* 1010c0d9 call dword ptr [0x1010e00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e00c))), 0x1010c0dfu);
  /* 1010c0df pop edi */
  EDI = (pop32());
  /* 1010c0e0 pop esi */
  ESI = (pop32());
  /* 1010c0e1 pop ebx */
  EBX = (pop32());
  /* 1010c0e2 ret  */
  ESPCHK(0x1010c084u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0e3 @ 0x1010c0e3 (34 bytes, 10 insns) */
void f_1010c0e3(void) {
  FTRACE(0x1010c0e3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010c0e3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1010c0e7 mov ecx, eax */
  ECX = (EAX);
  /* 1010c0e9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1010c0ec sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1010c0ef lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1010c0f2 mov ecx, dword ptr [ecx*4 + 0x10117d80] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10117d80)));
  /* 1010c0f9 lea eax, [ecx + eax*4 + 0xc] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0xc));
  /* 1010c0fd push eax */
  push32((uint32_t)(EAX));
  /* 1010c0fe call dword ptr [0x1010e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e008))), 0x1010c104u);
  /* 1010c104 ret  */
  ESPCHK(0x1010c0e3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c186 @ 0x1010c186 (46 bytes, 22 insns) */
void f_1010c186(void) {
  FTRACE(0x1010c186u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010c186 push esi */
  push32((uint32_t)(ESI));
  /* 1010c187 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1010c18b push esi */
  push32((uint32_t)(ESI));
  /* 1010c18c call 0x1010c1b4 */
  push32(0x1010c191u); f_1010c1b4();
  /* 1010c191 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010c193 pop ecx */
  ECX = (pop32());
  /* 1010c194 je 0x1010c19b */
  if (C.zf) goto L_1010c19b;
  /* 1010c196 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1010c199 pop esi */
  ESI = (pop32());
  /* 1010c19a ret  */
  ESPCHK(0x1010c186u, _esp0);
  ESP += 4; return;
L_1010c19b:;
  /* 1010c19b test byte ptr [esi + 0xd], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xd)))&(0x40u); fl_logic(_r,8); }
  /* 1010c19f je 0x1010c1b0 */
  if (C.zf) goto L_1010c1b0;
  /* 1010c1a1 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1010c1a4 call 0x1010d300 */
  push32(0x1010c1a9u); f_1010d300();
  /* 1010c1a9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1010c1ab pop ecx */
  ECX = (pop32());
  /* 1010c1ac pop esi */
  ESI = (pop32());
  /* 1010c1ad sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010c1af ret  */
  ESPCHK(0x1010c186u, _esp0);
  ESP += 4; return;
L_1010c1b0:;
  /* 1010c1b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1010c1b2 pop esi */
  ESI = (pop32());
  /* 1010c1b3 ret  */
  ESPCHK(0x1010c186u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1b4 @ 0x1010c1b4 (92 bytes, 40 insns) */
void f_1010c1b4(void) {
  FTRACE(0x1010c1b4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010c1b4 push ebx */
  push32((uint32_t)(EBX));
  /* 1010c1b5 push esi */
  push32((uint32_t)(ESI));
  /* 1010c1b6 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 1010c1ba xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1010c1bc push edi */
  push32((uint32_t)(EDI));
  /* 1010c1bd mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1010c1c0 mov ecx, eax */
  ECX = (EAX);
  /* 1010c1c2 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1010c1c5 cmp cl, 2 */
  { uint32_t _a=(CL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010c1c8 jne 0x1010c201 */
  if (!C.zf) goto L_1010c201;
  /* 1010c1ca test ax, 0x108 */
  { uint32_t _r=(AX)&(0x108u); fl_logic(_r,16); }
  /* 1010c1ce je 0x1010c201 */
  if (C.zf) goto L_1010c201;
  /* 1010c1d0 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 1010c1d3 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 1010c1d5 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010c1d7 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1010c1d9 jle 0x1010c201 */
  if ((C.zf||C.sf!=C.of)) goto L_1010c201;
  /* 1010c1db push edi */
  push32((uint32_t)(EDI));
  /* 1010c1dc push eax */
  push32((uint32_t)(EAX));
  /* 1010c1dd push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1010c1e0 call 0x10108cb5 */
  push32(0x1010c1e5u); f_10108cb5();
  /* 1010c1e5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010c1e8 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010c1ea jne 0x1010c1fa */
  if (!C.zf) goto L_1010c1fa;
  /* 1010c1ec mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1010c1ef test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 1010c1f1 je 0x1010c201 */
  if (C.zf) goto L_1010c201;
  /* 1010c1f3 and al, 0xfd */
  { uint32_t _r=(AL)&(0xfdu); AL = (_r); fl_logic(_r,8); }
  /* 1010c1f5 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 1010c1f8 jmp 0x1010c201 */
  goto L_1010c201;
L_1010c1fa:;
  /* 1010c1fa or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 1010c1fe or ebx, 0xffffffff */
  { uint32_t _r=(EBX)|(0xffffffffu); EBX = (_r); fl_logic(_r,32); }
L_1010c201:;
  /* 1010c201 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 1010c204 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 1010c208 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1010c20a pop edi */
  EDI = (pop32());
  /* 1010c20b mov eax, ebx */
  EAX = (EBX);
  /* 1010c20d pop esi */
  ESI = (pop32());
  /* 1010c20e pop ebx */
  EBX = (pop32());
  /* 1010c20f ret  */
  ESPCHK(0x1010c1b4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c219 @ 0x1010c219 (164 bytes, 66 insns) */
void f_1010c219(void) {
  FTRACE(0x1010c219u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010c219 push ebx */
  push32((uint32_t)(EBX));
  /* 1010c21a push esi */
  push32((uint32_t)(ESI));
  /* 1010c21b push edi */
  push32((uint32_t)(EDI));
  /* 1010c21c push 2 */
  push32((uint32_t)(0x2u));
  /* 1010c21e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1010c220 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1010c222 call 0x1010a053 */
  push32(0x1010c227u); f_1010a053();
  /* 1010c227 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1010c229 pop ecx */
  ECX = (pop32());
  /* 1010c22a cmp dword ptr [0x10117d60], esi */
  { uint32_t _a=(r32((uint32_t)(0x10117d60))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010c230 jle 0x1010c2a6 */
  if ((C.zf||C.sf!=C.of)) goto L_1010c2a6;
L_1010c232:;
  /* 1010c232 mov eax, dword ptr [0x10116d48] */
  EAX = (r32((uint32_t)(0x10116d48)));
  /* 1010c237 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 1010c23a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010c23c je 0x1010c29d */
  if (C.zf) goto L_1010c29d;
  /* 1010c23e test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 1010c242 je 0x1010c29d */
  if (C.zf) goto L_1010c29d;
  /* 1010c244 push eax */
  push32((uint32_t)(EAX));
  /* 1010c245 push esi */
  push32((uint32_t)(ESI));
  /* 1010c246 call 0x10108ffd */
  push32(0x1010c24bu); f_10108ffd();
  /* 1010c24b mov eax, dword ptr [0x10116d48] */
  EAX = (r32((uint32_t)(0x10116d48)));
  /* 1010c250 pop ecx */
  ECX = (pop32());
  /* 1010c251 pop ecx */
  ECX = (pop32());
  /* 1010c252 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 1010c255 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1010c258 test cl, 0x83 */
  { uint32_t _r=(CL)&(0x83u); fl_logic(_r,8); }
  /* 1010c25b je 0x1010c28d */
  if (C.zf) goto L_1010c28d;
  /* 1010c25d cmp dword ptr [esp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010c262 jne 0x1010c273 */
  if (!C.zf) goto L_1010c273;
  /* 1010c264 push eax */
  push32((uint32_t)(EAX));
  /* 1010c265 call 0x1010c186 */
  push32(0x1010c26au); f_1010c186();
  /* 1010c26a cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010c26d pop ecx */
  ECX = (pop32());
  /* 1010c26e je 0x1010c28d */
  if (C.zf) goto L_1010c28d;
  /* 1010c270 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1010c271 jmp 0x1010c28d */
  goto L_1010c28d;
L_1010c273:;
  /* 1010c273 cmp dword ptr [esp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010c278 jne 0x1010c28d */
  if (!C.zf) goto L_1010c28d;
  /* 1010c27a test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 1010c27d je 0x1010c28d */
  if (C.zf) goto L_1010c28d;
  /* 1010c27f push eax */
  push32((uint32_t)(EAX));
  /* 1010c280 call 0x1010c186 */
  push32(0x1010c285u); f_1010c186();
  /* 1010c285 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010c288 pop ecx */
  ECX = (pop32());
  /* 1010c289 jne 0x1010c28d */
  if (!C.zf) goto L_1010c28d;
  /* 1010c28b or edi, eax */
  { uint32_t _r=(EDI)|(EAX); EDI = (_r); fl_logic(_r,32); }
L_1010c28d:;
  /* 1010c28d mov eax, dword ptr [0x10116d48] */
  EAX = (r32((uint32_t)(0x10116d48)));
  /* 1010c292 push dword ptr [eax + esi*4] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*4))));
  /* 1010c295 push esi */
  push32((uint32_t)(ESI));
  /* 1010c296 call 0x1010904f */
  push32(0x1010c29bu); f_1010904f();
  /* 1010c29b pop ecx */
  ECX = (pop32());
  /* 1010c29c pop ecx */
  ECX = (pop32());
L_1010c29d:;
  /* 1010c29d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1010c29e cmp esi, dword ptr [0x10117d60] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10117d60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010c2a4 jl 0x1010c232 */
  if ((C.sf!=C.of)) goto L_1010c232;
L_1010c2a6:;
  /* 1010c2a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1010c2a8 call 0x1010a0b4 */
  push32(0x1010c2adu); f_1010a0b4();
  /* 1010c2ad cmp dword ptr [esp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010c2b2 pop ecx */
  ECX = (pop32());
  /* 1010c2b3 mov eax, ebx */
  EAX = (EBX);
  /* 1010c2b5 je 0x1010c2b9 */
  if (C.zf) goto L_1010c2b9;
  /* 1010c2b7 mov eax, edi */
  EAX = (EDI);
L_1010c2b9:;
  /* 1010c2b9 pop edi */
  EDI = (pop32());
  /* 1010c2ba pop esi */
  ESI = (pop32());
  /* 1010c2bb pop ebx */
  EBX = (pop32());
  /* 1010c2bc ret  */
  ESPCHK(0x1010c219u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c2bd @ 0x1010c2bd (318 bytes, 123 insns) */
void f_1010c2bd(void) {
  FTRACE(0x1010c2bdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010c2bd push ebp */
  push32((uint32_t)(EBP));
  /* 1010c2be mov ebp, esp */
  EBP = (ESP);
  /* 1010c2c0 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1010c2c2 push 0x1010e560 */
  push32((uint32_t)(0x1010e560u));
  /* 1010c2c7 push 0x1010d070 */
  push32((uint32_t)(0x1010d070u));
  /* 1010c2cc mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1010c2d2 push eax */
  push32((uint32_t)(EAX));
  /* 1010c2d3 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1010c2da sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010c2dd push ebx */
  push32((uint32_t)(EBX));
  /* 1010c2de push esi */
  push32((uint32_t)(ESI));
  /* 1010c2df push edi */
  push32((uint32_t)(EDI));
  /* 1010c2e0 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1010c2e3 mov eax, dword ptr [0x101169b4] */
  EAX = (r32((uint32_t)(0x101169b4)));
  /* 1010c2e8 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1010c2ea cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010c2ec jne 0x1010c32c */
  if (!C.zf) goto L_1010c32c;
  /* 1010c2ee lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1010c2f1 push eax */
  push32((uint32_t)(EAX));
  /* 1010c2f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1010c2f4 pop esi */
  ESI = (pop32());
  /* 1010c2f5 push esi */
  push32((uint32_t)(ESI));
  /* 1010c2f6 push 0x1010e558 */
  push32((uint32_t)(0x1010e558u));
  /* 1010c2fb push esi */
  push32((uint32_t)(ESI));
  /* 1010c2fc call dword ptr [0x1010e0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e0c0))), 0x1010c302u);
  /* 1010c302 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010c304 je 0x1010c30a */
  if (C.zf) goto L_1010c30a;
  /* 1010c306 mov eax, esi */
  EAX = (ESI);
  /* 1010c308 jmp 0x1010c327 */
  goto L_1010c327;
L_1010c30a:;
  /* 1010c30a lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1010c30d push eax */
  push32((uint32_t)(EAX));
  /* 1010c30e push esi */
  push32((uint32_t)(ESI));
  /* 1010c30f push 0x1010e554 */
  push32((uint32_t)(0x1010e554u));
  /* 1010c314 push esi */
  push32((uint32_t)(ESI));
  /* 1010c315 push ebx */
  push32((uint32_t)(EBX));
  /* 1010c316 call dword ptr [0x1010e0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e0bc))), 0x1010c31cu);
  /* 1010c31c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010c31e je 0x1010c3f2 */
  if (C.zf) goto L_1010c3f2;
  /* 1010c324 push 2 */
  push32((uint32_t)(0x2u));
  /* 1010c326 pop eax */
  EAX = (pop32());
L_1010c327:;
  /* 1010c327 mov dword ptr [0x101169b4], eax */
  w32((uint32_t)(0x101169b4), (EAX));
L_1010c32c:;
  /* 1010c32c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010c32f jne 0x1010c355 */
  if (!C.zf) goto L_1010c355;
  /* 1010c331 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1010c334 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010c336 jne 0x1010c33d */
  if (!C.zf) goto L_1010c33d;
  /* 1010c338 mov eax, dword ptr [0x10116988] */
  EAX = (r32((uint32_t)(0x10116988)));
L_1010c33d:;
  /* 1010c33d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1010c340 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1010c343 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1010c346 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1010c349 push eax */
  push32((uint32_t)(EAX));
  /* 1010c34a call dword ptr [0x1010e0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e0bc))), 0x1010c350u);
  /* 1010c350 jmp 0x1010c3f4 */
  goto L_1010c3f4;
L_1010c355:;
  /* 1010c355 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010c358 jne 0x1010c3f2 */
  if (!C.zf) goto L_1010c3f2;
  /* 1010c35e cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010c361 jne 0x1010c36b */
  if (!C.zf) goto L_1010c36b;
  /* 1010c363 mov eax, dword ptr [0x10116998] */
  EAX = (r32((uint32_t)(0x10116998)));
  /* 1010c368 mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_1010c36b:;
  /* 1010c36b push ebx */
  push32((uint32_t)(EBX));
  /* 1010c36c push ebx */
  push32((uint32_t)(EBX));
  /* 1010c36d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1010c370 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1010c373 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1010c376 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1010c378 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010c37a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1010c37d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1010c37e push eax */
  push32((uint32_t)(EAX));
  /* 1010c37f push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1010c382 call dword ptr [0x1010e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e0b8))), 0x1010c388u);
  /* 1010c388 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1010c38b cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010c38d je 0x1010c3f2 */
  if (C.zf) goto L_1010c3f2;
  /* 1010c38f mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 1010c392 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 1010c395 mov eax, edi */
  EAX = (EDI);
  /* 1010c397 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010c39a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1010c39c call 0x1010af10 */
  push32(0x1010c3a1u); f_1010af10();
  /* 1010c3a1 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1010c3a4 mov esi, esp */
  ESI = (ESP);
  /* 1010c3a6 mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 1010c3a9 push edi */
  push32((uint32_t)(EDI));
  /* 1010c3aa push ebx */
  push32((uint32_t)(EBX));
  /* 1010c3ab push esi */
  push32((uint32_t)(ESI));
  /* 1010c3ac call 0x10109c20 */
  push32(0x1010c3b1u); f_10109c20();
  /* 1010c3b1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010c3b4 jmp 0x1010c3c1 */
  goto L_1010c3c1;
  /* 1010c3b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1010c3b8 pop eax */
  EAX = (pop32());
  /* 1010c3b9 ret  */
  ESPCHK(0x1010c2bdu, _esp0);
  ESP += 4; return;
  /* 1010c3ba mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1010c3bd xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1010c3bf xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1010c3c1:;
  /* 1010c3c1 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1010c3c5 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010c3c7 je 0x1010c3f2 */
  if (C.zf) goto L_1010c3f2;
  /* 1010c3c9 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 1010c3cc push esi */
  push32((uint32_t)(ESI));
  /* 1010c3cd push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1010c3d0 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1010c3d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1010c3d5 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1010c3d8 call dword ptr [0x1010e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e0b8))), 0x1010c3deu);
  /* 1010c3de cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010c3e0 je 0x1010c3f2 */
  if (C.zf) goto L_1010c3f2;
  /* 1010c3e2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1010c3e5 push eax */
  push32((uint32_t)(EAX));
  /* 1010c3e6 push esi */
  push32((uint32_t)(ESI));
  /* 1010c3e7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1010c3ea call dword ptr [0x1010e0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e0c0))), 0x1010c3f0u);
  /* 1010c3f0 jmp 0x1010c3f4 */
  goto L_1010c3f4;
L_1010c3f2:;
  /* 1010c3f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1010c3f4:;
  /* 1010c3f4 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 1010c3f7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1010c3fa mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1010c401 pop edi */
  EDI = (pop32());
  /* 1010c402 pop esi */
  ESI = (pop32());
  /* 1010c403 pop ebx */
  EBX = (pop32());
  /* 1010c404 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1010c405 ret  */
  ESPCHK(0x1010c2bdu, _esp0);
  ESP += 4; return;
}

/* FUN_1000c406 @ 0x1010c406 (511 bytes, 193 insns) */
void f_1010c406(void) {
  FTRACE(0x1010c406u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010c406 push ebp */
  push32((uint32_t)(EBP));
  /* 1010c407 mov ebp, esp */
  EBP = (ESP);
  /* 1010c409 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1010c40b push 0x1010e570 */
  push32((uint32_t)(0x1010e570u));
  /* 1010c410 push 0x1010d070 */
  push32((uint32_t)(0x1010d070u));
  /* 1010c415 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1010c41b push eax */
  push32((uint32_t)(EAX));
  /* 1010c41c mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1010c423 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010c426 push ebx */
  push32((uint32_t)(EBX));
  /* 1010c427 push esi */
  push32((uint32_t)(ESI));
  /* 1010c428 push edi */
  push32((uint32_t)(EDI));
  /* 1010c429 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1010c42c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1010c42e cmp dword ptr [0x101169b8], edi */
  { uint32_t _a=(r32((uint32_t)(0x101169b8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010c434 jne 0x1010c47c */
  if (!C.zf) goto L_1010c47c;
  /* 1010c436 push edi */
  push32((uint32_t)(EDI));
  /* 1010c437 push edi */
  push32((uint32_t)(EDI));
  /* 1010c438 push 1 */
  push32((uint32_t)(0x1u));
  /* 1010c43a pop ebx */
  EBX = (pop32());
  /* 1010c43b push ebx */
  push32((uint32_t)(EBX));
  /* 1010c43c push 0x1010e558 */
  push32((uint32_t)(0x1010e558u));
  /* 1010c441 mov esi, 0x100 */
  ESI = (0x100u);
  /* 1010c446 push esi */
  push32((uint32_t)(ESI));
  /* 1010c447 push edi */
  push32((uint32_t)(EDI));
  /* 1010c448 call dword ptr [0x1010e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e0c8))), 0x1010c44eu);
  /* 1010c44e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010c450 je 0x1010c45a */
  if (C.zf) goto L_1010c45a;
  /* 1010c452 mov dword ptr [0x101169b8], ebx */
  w32((uint32_t)(0x101169b8), (EBX));
  /* 1010c458 jmp 0x1010c47c */
  goto L_1010c47c;
L_1010c45a:;
  /* 1010c45a push edi */
  push32((uint32_t)(EDI));
  /* 1010c45b push edi */
  push32((uint32_t)(EDI));
  /* 1010c45c push ebx */
  push32((uint32_t)(EBX));
  /* 1010c45d push 0x1010e554 */
  push32((uint32_t)(0x1010e554u));
  /* 1010c462 push esi */
  push32((uint32_t)(ESI));
  /* 1010c463 push edi */
  push32((uint32_t)(EDI));
  /* 1010c464 call dword ptr [0x1010e0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e0c4))), 0x1010c46au);
  /* 1010c46a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010c46c je 0x1010c594 */
  if (C.zf) goto L_1010c594;
  /* 1010c472 mov dword ptr [0x101169b8], 2 */
  w32((uint32_t)(0x101169b8), (0x2u));
L_1010c47c:;
  /* 1010c47c cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010c47f jle 0x1010c491 */
  if ((C.zf||C.sf!=C.of)) goto L_1010c491;
  /* 1010c481 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1010c484 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1010c487 call 0x1010c62a */
  push32(0x1010c48cu); f_1010c62a();
  /* 1010c48c pop ecx */
  ECX = (pop32());
  /* 1010c48d pop ecx */
  ECX = (pop32());
  /* 1010c48e mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1010c491:;
  /* 1010c491 mov eax, dword ptr [0x101169b8] */
  EAX = (r32((uint32_t)(0x101169b8)));
  /* 1010c496 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010c499 jne 0x1010c4b8 */
  if (!C.zf) goto L_1010c4b8;
  /* 1010c49b push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 1010c49e push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1010c4a1 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1010c4a4 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1010c4a7 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1010c4aa push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1010c4ad call dword ptr [0x1010e0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e0c4))), 0x1010c4b3u);
  /* 1010c4b3 jmp 0x1010c596 */
  goto L_1010c596;
L_1010c4b8:;
  /* 1010c4b8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010c4bb jne 0x1010c594 */
  if (!C.zf) goto L_1010c594;
  /* 1010c4c1 cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010c4c4 jne 0x1010c4ce */
  if (!C.zf) goto L_1010c4ce;
  /* 1010c4c6 mov eax, dword ptr [0x10116998] */
  EAX = (r32((uint32_t)(0x10116998)));
  /* 1010c4cb mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_1010c4ce:;
  /* 1010c4ce push edi */
  push32((uint32_t)(EDI));
  /* 1010c4cf push edi */
  push32((uint32_t)(EDI));
  /* 1010c4d0 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1010c4d3 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1010c4d6 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 1010c4d9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1010c4db sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010c4dd and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1010c4e0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1010c4e1 push eax */
  push32((uint32_t)(EAX));
  /* 1010c4e2 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1010c4e5 call dword ptr [0x1010e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e0b8))), 0x1010c4ebu);
  /* 1010c4eb mov ebx, eax */
  EBX = (EAX);
  /* 1010c4ed mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 1010c4f0 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010c4f2 je 0x1010c594 */
  if (C.zf) goto L_1010c594;
  /* 1010c4f8 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 1010c4fb lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 1010c4fe add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010c501 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1010c503 call 0x1010af10 */
  push32(0x1010c508u); f_1010af10();
  /* 1010c508 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1010c50b mov eax, esp */
  EAX = (ESP);
  /* 1010c50d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1010c510 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1010c514 jmp 0x1010c529 */
  goto L_1010c529;
  /* 1010c516 push 1 */
  push32((uint32_t)(0x1u));
  /* 1010c518 pop eax */
  EAX = (pop32());
  /* 1010c519 ret  */
  ESPCHK(0x1010c406u, _esp0);
  ESP += 4; return;
  /* 1010c51a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1010c51d xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1010c51f mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 1010c522 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1010c526 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_1010c529:;
  /* 1010c529 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010c52c je 0x1010c594 */
  if (C.zf) goto L_1010c594;
  /* 1010c52e push ebx */
  push32((uint32_t)(EBX));
  /* 1010c52f push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1010c532 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1010c535 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1010c538 push 1 */
  push32((uint32_t)(0x1u));
  /* 1010c53a push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1010c53d call dword ptr [0x1010e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e0b8))), 0x1010c543u);
  /* 1010c543 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010c545 je 0x1010c594 */
  if (C.zf) goto L_1010c594;
  /* 1010c547 push edi */
  push32((uint32_t)(EDI));
  /* 1010c548 push edi */
  push32((uint32_t)(EDI));
  /* 1010c549 push ebx */
  push32((uint32_t)(EBX));
  /* 1010c54a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1010c54d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1010c550 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1010c553 call dword ptr [0x1010e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e0c8))), 0x1010c559u);
  /* 1010c559 mov esi, eax */
  ESI = (EAX);
  /* 1010c55b mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 1010c55e cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010c560 je 0x1010c594 */
  if (C.zf) goto L_1010c594;
  /* 1010c562 test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 1010c566 je 0x1010c5a8 */
  if (C.zf) goto L_1010c5a8;
  /* 1010c568 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010c56b je 0x1010c623 */
  if (C.zf) goto L_1010c623;
  /* 1010c571 cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010c574 jg 0x1010c594 */
  if ((!C.zf&&C.sf==C.of)) goto L_1010c594;
  /* 1010c576 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 1010c579 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1010c57c push ebx */
  push32((uint32_t)(EBX));
  /* 1010c57d push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1010c580 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1010c583 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1010c586 call dword ptr [0x1010e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e0c8))), 0x1010c58cu);
  /* 1010c58c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010c58e jne 0x1010c623 */
  if (!C.zf) goto L_1010c623;
L_1010c594:;
  /* 1010c594 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1010c596:;
  /* 1010c596 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1010c599 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1010c59c mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1010c5a3 pop edi */
  EDI = (pop32());
  /* 1010c5a4 pop esi */
  ESI = (pop32());
  /* 1010c5a5 pop ebx */
  EBX = (pop32());
  /* 1010c5a6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1010c5a7 ret  */
  ESPCHK(0x1010c406u, _esp0);
  ESP += 4; return;
L_1010c5a8:;
  /* 1010c5a8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1010c5af lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 1010c5b2 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010c5b5 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1010c5b7 call 0x1010af10 */
  push32(0x1010c5bcu); f_1010af10();
  /* 1010c5bc mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1010c5bf mov ebx, esp */
  EBX = (ESP);
  /* 1010c5c1 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 1010c5c4 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1010c5c8 jmp 0x1010c5dc */
  goto L_1010c5dc;
  /* 1010c5ca push 1 */
  push32((uint32_t)(0x1u));
  /* 1010c5cc pop eax */
  EAX = (pop32());
  /* 1010c5cd ret  */
  ESPCHK(0x1010c406u, _esp0);
  ESP += 4; return;
  /* 1010c5ce mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1010c5d1 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1010c5d3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1010c5d5 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1010c5d9 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_1010c5dc:;
  /* 1010c5dc cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010c5de je 0x1010c594 */
  if (C.zf) goto L_1010c594;
  /* 1010c5e0 push esi */
  push32((uint32_t)(ESI));
  /* 1010c5e1 push ebx */
  push32((uint32_t)(EBX));
  /* 1010c5e2 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 1010c5e5 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1010c5e8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1010c5eb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1010c5ee call dword ptr [0x1010e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e0c8))), 0x1010c5f4u);
  /* 1010c5f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010c5f6 je 0x1010c594 */
  if (C.zf) goto L_1010c594;
  /* 1010c5f8 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010c5fb push edi */
  push32((uint32_t)(EDI));
  /* 1010c5fc push edi */
  push32((uint32_t)(EDI));
  /* 1010c5fd jne 0x1010c603 */
  if (!C.zf) goto L_1010c603;
  /* 1010c5ff push edi */
  push32((uint32_t)(EDI));
  /* 1010c600 push edi */
  push32((uint32_t)(EDI));
  /* 1010c601 jmp 0x1010c609 */
  goto L_1010c609;
L_1010c603:;
  /* 1010c603 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 1010c606 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_1010c609:;
  /* 1010c609 push esi */
  push32((uint32_t)(ESI));
  /* 1010c60a push ebx */
  push32((uint32_t)(EBX));
  /* 1010c60b push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1010c610 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1010c613 call dword ptr [0x1010e060] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e060))), 0x1010c619u);
  /* 1010c619 mov esi, eax */
  ESI = (EAX);
  /* 1010c61b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010c61d je 0x1010c594 */
  if (C.zf) goto L_1010c594;
L_1010c623:;
  /* 1010c623 mov eax, esi */
  EAX = (ESI);
  /* 1010c625 jmp 0x1010c596 */
  goto L_1010c596;
}

/* FUN_1000c62a @ 0x1010c62a (43 bytes, 20 insns) */
void f_1010c62a(void) {
  FTRACE(0x1010c62au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010c62a mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 1010c62e mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1010c632 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1010c634 push esi */
  push32((uint32_t)(ESI));
  /* 1010c635 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 1010c638 je 0x1010c647 */
  if (C.zf) goto L_1010c647;
L_1010c63a:;
  /* 1010c63a cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010c63d je 0x1010c647 */
  if (C.zf) goto L_1010c647;
  /* 1010c63f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1010c640 mov esi, ecx */
  ESI = (ECX);
  /* 1010c642 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1010c643 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1010c645 jne 0x1010c63a */
  if (!C.zf) goto L_1010c63a;
L_1010c647:;
  /* 1010c647 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010c64a pop esi */
  ESI = (pop32());
  /* 1010c64b jne 0x1010c652 */
  if (!C.zf) goto L_1010c652;
  /* 1010c64d sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010c651 ret  */
  ESPCHK(0x1010c62au, _esp0);
  ESP += 4; return;
L_1010c652:;
  /* 1010c652 mov eax, edx */
  EAX = (EDX);
  /* 1010c654 ret  */
  ESPCHK(0x1010c62au, _esp0);
  ESP += 4; return;
}

/* FUN_1000c655 @ 0x1010c655 (33 bytes, 15 insns) */
void f_1010c655(void) {
  FTRACE(0x1010c655u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010c655 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1010c659 push esi */
  push32((uint32_t)(ESI));
  /* 1010c65a mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 1010c65e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1010c660 lea ecx, [edx + esi] */
  ECX = ((uint32_t)(EDX + ESI*1));
  /* 1010c663 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010c665 jb 0x1010c66b */
  if (C.cf) goto L_1010c66b;
  /* 1010c667 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010c669 jae 0x1010c66e */
  if (!C.cf) goto L_1010c66e;
L_1010c66b:;
  /* 1010c66b push 1 */
  push32((uint32_t)(0x1u));
  /* 1010c66d pop eax */
  EAX = (pop32());
L_1010c66e:;
  /* 1010c66e mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1010c672 pop esi */
  ESI = (pop32());
  /* 1010c673 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1010c675 ret  */
  ESPCHK(0x1010c655u, _esp0);
  ESP += 4; return;
}

/* ___add_12 @ 0x1010c676 (94 bytes, 38 insns) */
void f_1010c676(void) {
  FTRACE(0x1010c676u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010c676 push esi */
  push32((uint32_t)(ESI));
  /* 1010c677 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1010c67b push edi */
  push32((uint32_t)(EDI));
  /* 1010c67c mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1010c680 push esi */
  push32((uint32_t)(ESI));
  /* 1010c681 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 1010c683 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1010c685 call 0x1010c655 */
  push32(0x1010c68au); f_1010c655();
  /* 1010c68a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010c68d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010c68f je 0x1010c6a8 */
  if (C.zf) goto L_1010c6a8;
  /* 1010c691 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 1010c694 push eax */
  push32((uint32_t)(EAX));
  /* 1010c695 push 1 */
  push32((uint32_t)(0x1u));
  /* 1010c697 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 1010c699 call 0x1010c655 */
  push32(0x1010c69eu); f_1010c655();
  /* 1010c69e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010c6a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010c6a3 je 0x1010c6a8 */
  if (C.zf) goto L_1010c6a8;
  /* 1010c6a5 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_1010c6a8:;
  /* 1010c6a8 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 1010c6ab push eax */
  push32((uint32_t)(EAX));
  /* 1010c6ac push dword ptr [edi + 4] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x4))));
  /* 1010c6af push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 1010c6b1 call 0x1010c655 */
  push32(0x1010c6b6u); f_1010c655();
  /* 1010c6b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010c6b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010c6bb je 0x1010c6c0 */
  if (C.zf) goto L_1010c6c0;
  /* 1010c6bd inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_1010c6c0:;
  /* 1010c6c0 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 1010c6c3 push eax */
  push32((uint32_t)(EAX));
  /* 1010c6c4 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 1010c6c7 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 1010c6c9 call 0x1010c655 */
  push32(0x1010c6ceu); f_1010c655();
  /* 1010c6ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010c6d1 pop edi */
  EDI = (pop32());
  /* 1010c6d2 pop esi */
  ESI = (pop32());
  /* 1010c6d3 ret  */
  ESPCHK(0x1010c676u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6d4 @ 0x1010c6d4 (46 bytes, 21 insns) */
void f_1010c6d4(void) {
  FTRACE(0x1010c6d4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010c6d4 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1010c6d8 push esi */
  push32((uint32_t)(ESI));
  /* 1010c6d9 push edi */
  push32((uint32_t)(EDI));
  /* 1010c6da mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 1010c6dc mov edi, dword ptr [eax + 4] */
  EDI = (r32((uint32_t)(EAX + 0x4)));
  /* 1010c6df mov ecx, esi */
  ECX = (ESI);
  /* 1010c6e1 add esi, esi */
  { uint32_t _a=(ESI),_b=(ESI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1010c6e3 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 1010c6e5 lea esi, [edi + edi] */
  ESI = ((uint32_t)(EDI + EDI*1));
  /* 1010c6e8 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 1010c6eb or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 1010c6ed mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1010c6f0 mov edx, edi */
  EDX = (EDI);
  /* 1010c6f2 mov dword ptr [eax + 4], esi */
  w32((uint32_t)(EAX + 0x4), (ESI));
  /* 1010c6f5 shr edx, 0x1f */
  EDX = (sh_shr((uint32_t)(EDX), (0x1fu)&0x1f, 32));
  /* 1010c6f8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1010c6fa or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1010c6fc pop edi */
  EDI = (pop32());
  /* 1010c6fd mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1010c700 pop esi */
  ESI = (pop32());
  /* 1010c701 ret  */
  ESPCHK(0x1010c6d4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c702 @ 0x1010c702 (45 bytes, 21 insns) */
void f_1010c702(void) {
  FTRACE(0x1010c702u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010c702 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1010c706 push esi */
  push32((uint32_t)(ESI));
  /* 1010c707 push edi */
  push32((uint32_t)(EDI));
  /* 1010c708 mov edx, dword ptr [eax + 8] */
  EDX = (r32((uint32_t)(EAX + 0x8)));
  /* 1010c70b mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1010c70e mov esi, edx */
  ESI = (EDX);
  /* 1010c710 mov edi, ecx */
  EDI = (ECX);
  /* 1010c712 shl esi, 0x1f */
  ESI = (sh_shl((uint32_t)(ESI), (0x1fu)&0x1f, 32));
  /* 1010c715 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1010c717 or ecx, esi */
  { uint32_t _r=(ECX)|(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 1010c719 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1010c71c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1010c71e shl edi, 0x1f */
  EDI = (sh_shl((uint32_t)(EDI), (0x1fu)&0x1f, 32));
  /* 1010c721 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1010c723 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1010c725 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1010c727 pop edi */
  EDI = (pop32());
  /* 1010c728 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1010c72b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1010c72d pop esi */
  ESI = (pop32());
  /* 1010c72e ret  */
  ESPCHK(0x1010c702u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c72f @ 0x1010c72f (199 bytes, 76 insns) */
void f_1010c72f(void) {
  FTRACE(0x1010c72fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010c72f push ebp */
  push32((uint32_t)(EBP));
  /* 1010c730 mov ebp, esp */
  EBP = (ESP);
  /* 1010c732 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010c735 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1010c738 push ebx */
  push32((uint32_t)(EBX));
  /* 1010c739 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 1010c73c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1010c73e cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010c740 push esi */
  push32((uint32_t)(ESI));
  /* 1010c741 mov dword ptr [ebp - 4], 0x404e */
  w32((uint32_t)(EBP + -0x4), (0x404eu));
  /* 1010c748 mov dword ptr [ebx], edx */
  w32((uint32_t)(EBX), (EDX));
  /* 1010c74a mov dword ptr [ebx + 4], edx */
  w32((uint32_t)(EBX + 0x4), (EDX));
  /* 1010c74d mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
  /* 1010c750 jbe 0x1010c7a3 */
  if ((C.cf||C.zf)) goto L_1010c7a3;
  /* 1010c752 push edi */
  push32((uint32_t)(EDI));
  /* 1010c753 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_1010c756:;
  /* 1010c756 mov esi, ebx */
  ESI = (EBX);
  /* 1010c758 lea edi, [ebp - 0x10] */
  EDI = ((uint32_t)(EBP + -0x10));
  /* 1010c75b movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1010c75c movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1010c75d push ebx */
  push32((uint32_t)(EBX));
  /* 1010c75e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1010c75f call 0x1010c6d4 */
  push32(0x1010c764u); f_1010c6d4();
  /* 1010c764 push ebx */
  push32((uint32_t)(EBX));
  /* 1010c765 call 0x1010c6d4 */
  push32(0x1010c76au); f_1010c6d4();
  /* 1010c76a lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1010c76d push eax */
  push32((uint32_t)(EAX));
  /* 1010c76e push ebx */
  push32((uint32_t)(EBX));
  /* 1010c76f call 0x1010c676 */
  push32(0x1010c774u); f_1010c676();
  /* 1010c774 push ebx */
  push32((uint32_t)(EBX));
  /* 1010c775 call 0x1010c6d4 */
  push32(0x1010c77au); f_1010c6d4();
  /* 1010c77a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1010c77d and dword ptr [ebp - 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))&(0x0u); w32((uint32_t)(EBP + -0xc), (_r)); fl_logic(_r,32); }
  /* 1010c781 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1010c785 movsx eax, byte ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1010c788 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1010c78b lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1010c78e push eax */
  push32((uint32_t)(EAX));
  /* 1010c78f push ebx */
  push32((uint32_t)(EBX));
  /* 1010c790 call 0x1010c676 */
  push32(0x1010c795u); f_1010c676();
  /* 1010c795 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010c798 inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 1010c79b dec dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))-1; w32((uint32_t)(EBP + 0x10), (_r)); fl_dec(_r,32); }
  /* 1010c79e jne 0x1010c756 */
  if (!C.zf) goto L_1010c756;
  /* 1010c7a0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1010c7a2 pop edi */
  EDI = (pop32());
L_1010c7a3:;
  /* 1010c7a3 cmp dword ptr [ebx + 8], edx */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010c7a6 jne 0x1010c7d0 */
  if (!C.zf) goto L_1010c7d0;
  /* 1010c7a8 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1010c7ab mov eax, ecx */
  EAX = (ECX);
  /* 1010c7ad shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1010c7b0 mov dword ptr [ebx + 8], eax */
  w32((uint32_t)(EBX + 0x8), (EAX));
  /* 1010c7b3 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 1010c7b5 mov esi, eax */
  ESI = (EAX);
  /* 1010c7b7 shr esi, 0x10 */
  ESI = (sh_shr((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 1010c7ba shl ecx, 0x10 */
  ECX = (sh_shl((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 1010c7bd or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 1010c7bf shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1010c7c2 add dword ptr [ebp - 4], 0xfff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xfff0u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1010c7c9 mov dword ptr [ebx + 4], esi */
  w32((uint32_t)(EBX + 0x4), (ESI));
  /* 1010c7cc mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 1010c7ce jmp 0x1010c7a3 */
  goto L_1010c7a3;
L_1010c7d0:;
  /* 1010c7d0 mov esi, 0x8000 */
  ESI = (0x8000u);
L_1010c7d5:;
  /* 1010c7d5 test dword ptr [ebx + 8], esi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(ESI); fl_logic(_r,32); }
  /* 1010c7d8 jne 0x1010c7ea */
  if (!C.zf) goto L_1010c7ea;
  /* 1010c7da push ebx */
  push32((uint32_t)(EBX));
  /* 1010c7db call 0x1010c6d4 */
  push32(0x1010c7e0u); f_1010c6d4();
  /* 1010c7e0 add dword ptr [ebp - 4], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1010c7e7 pop ecx */
  ECX = (pop32());
  /* 1010c7e8 jmp 0x1010c7d5 */
  goto L_1010c7d5;
L_1010c7ea:;
  /* 1010c7ea mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 1010c7ee pop esi */
  ESI = (pop32());
  /* 1010c7ef mov word ptr [ebx + 0xa], ax */
  w16((uint32_t)(EBX + 0xa), (AX));
  /* 1010c7f3 pop ebx */
  EBX = (pop32());
  /* 1010c7f4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1010c7f5 ret  */
  ESPCHK(0x1010c72fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7f6 @ 0x1010c7f6 (1185 bytes, 417 insns) [1 switch table(s)] */
void f_1010c7f6(void) {
  FTRACE(0x1010c7f6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010c7f6 push ebp */
  push32((uint32_t)(EBP));
  /* 1010c7f7 mov ebp, esp */
  EBP = (ESP);
  /* 1010c7f9 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010c7fc push ebx */
  push32((uint32_t)(EBX));
  /* 1010c7fd push esi */
  push32((uint32_t)(ESI));
  /* 1010c7fe push edi */
  push32((uint32_t)(EDI));
  /* 1010c7ff mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 1010c802 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 1010c805 push 1 */
  push32((uint32_t)(0x1u));
  /* 1010c807 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1010c80a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1010c80c pop edx */
  EDX = (pop32());
  /* 1010c80d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1010c810 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1010c813 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1010c816 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1010c819 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1010c81c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1010c81f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1010c822 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1010c825 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1010c828 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1010c82b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1010c82e mov dword ptr [ebp + 0x10], edi */
  w32((uint32_t)(EBP + 0x10), (EDI));
L_1010c831:;
  /* 1010c831 mov cl, byte ptr [edi] */
  CL = (r8((uint32_t)(EDI)));
  /* 1010c833 cmp cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010c836 je 0x1010c847 */
  if (C.zf) goto L_1010c847;
  /* 1010c838 cmp cl, 9 */
  { uint32_t _a=(CL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010c83b je 0x1010c847 */
  if (C.zf) goto L_1010c847;
  /* 1010c83d cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010c840 je 0x1010c847 */
  if (C.zf) goto L_1010c847;
  /* 1010c842 cmp cl, 0xd */
  { uint32_t _a=(CL),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010c845 jne 0x1010c84a */
  if (!C.zf) goto L_1010c84a;
L_1010c847:;
  /* 1010c847 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1010c848 jmp 0x1010c831 */
  goto L_1010c831;
L_1010c84a:;
  /* 1010c84a push 4 */
  push32((uint32_t)(0x4u));
  /* 1010c84c pop esi */
  ESI = (pop32());
L_1010c84d:;
  /* 1010c84d mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1010c84f inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1010c850 cmp eax, 0xb */
  { uint32_t _a=(EAX),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010c853 ja 0x1010cad0 */
  if ((!C.cf&&!C.zf)) goto L_1010cad0;
  /* 1010c859 jmp dword ptr [eax*4 + 0x1010cc97] */
  switch (EAX) {
    case 0: goto L_1010c860;
    case 1: goto L_1010c8af;
    case 2: goto L_1010c906;
    case 3: goto L_1010c930;
    case 4: goto L_1010c98b;
    case 5: goto L_1010ca02;
    case 6: goto L_1010ca38;
    case 7: goto L_1010ca82;
    case 8: goto L_1010ca61;
    case 9: goto L_1010cae6;
    case 10: goto L_1010cad0;
    case 11: goto L_1010ca9c;
    default: x86_unimpl("switch@0x1010c859 out of table"); return;
  }
L_1010c860:;
  /* 1010c860 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010c863 jl 0x1010c871 */
  if ((C.sf!=C.of)) goto L_1010c871;
  /* 1010c865 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010c868 jg 0x1010c871 */
  if ((!C.zf&&C.sf==C.of)) goto L_1010c871;
L_1010c86a:;
  /* 1010c86a push 3 */
  push32((uint32_t)(0x3u));
  /* 1010c86c jmp 0x1010ca8e */
  goto L_1010ca8e;
L_1010c871:;
  /* 1010c871 cmp bl, byte ptr [0x10110d34] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10110d34))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010c877 jne 0x1010c880 */
  if (!C.zf) goto L_1010c880;
L_1010c879:;
  /* 1010c879 push 5 */
  push32((uint32_t)(0x5u));
  /* 1010c87b jmp 0x1010cac6 */
  goto L_1010cac6;
L_1010c880:;
  /* 1010c880 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1010c883 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010c886 je 0x1010c8a6 */
  if (C.zf) goto L_1010c8a6;
  /* 1010c888 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1010c889 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1010c88a je 0x1010c89a */
  if (C.zf) goto L_1010c89a;
  /* 1010c88c sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010c88f jne 0x1010cb69 */
  if (!C.zf) goto L_1010cb69;
  /* 1010c895 jmp 0x1010c929 */
  goto L_1010c929;
L_1010c89a:;
  /* 1010c89a push 2 */
  push32((uint32_t)(0x2u));
  /* 1010c89c mov dword ptr [ebp - 0x28], 0x8000 */
  w32((uint32_t)(EBP + -0x28), (0x8000u));
  /* 1010c8a3 pop eax */
  EAX = (pop32());
  /* 1010c8a4 jmp 0x1010c84d */
  goto L_1010c84d;
L_1010c8a6:;
  /* 1010c8a6 and dword ptr [ebp - 0x28], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x28)))&(0x0u); w32((uint32_t)(EBP + -0x28), (_r)); fl_logic(_r,32); }
  /* 1010c8aa push 2 */
  push32((uint32_t)(0x2u));
  /* 1010c8ac pop eax */
  EAX = (pop32());
  /* 1010c8ad jmp 0x1010c84d */
  goto L_1010c84d;
L_1010c8af:;
  /* 1010c8af cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010c8b2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1010c8b5 jl 0x1010c8bc */
  if ((C.sf!=C.of)) goto L_1010c8bc;
  /* 1010c8b7 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010c8ba jle 0x1010c86a */
  if ((C.zf||C.sf!=C.of)) goto L_1010c86a;
L_1010c8bc:;
  /* 1010c8bc cmp bl, byte ptr [0x10110d34] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10110d34))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010c8c2 je 0x1010c984 */
  if (C.zf) goto L_1010c984;
  /* 1010c8c8 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010c8cb je 0x1010c8fe */
  if (C.zf) goto L_1010c8fe;
  /* 1010c8cd cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010c8d0 je 0x1010c8fe */
  if (C.zf) goto L_1010c8fe;
  /* 1010c8d2 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010c8d5 je 0x1010c929 */
  if (C.zf) goto L_1010c929;
L_1010c8d7:;
  /* 1010c8d7 cmp bl, 0x43 */
  { uint32_t _a=(BL),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010c8da jle 0x1010cb69 */
  if ((C.zf||C.sf!=C.of)) goto L_1010cb69;
  /* 1010c8e0 cmp bl, 0x45 */
  { uint32_t _a=(BL),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010c8e3 jle 0x1010c8f7 */
  if ((C.zf||C.sf!=C.of)) goto L_1010c8f7;
  /* 1010c8e5 cmp bl, 0x63 */
  { uint32_t _a=(BL),_b=(0x63u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010c8e8 jle 0x1010cb69 */
  if ((C.zf||C.sf!=C.of)) goto L_1010cb69;
  /* 1010c8ee cmp bl, 0x65 */
  { uint32_t _a=(BL),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010c8f1 jg 0x1010cb69 */
  if ((!C.zf&&C.sf==C.of)) goto L_1010cb69;
L_1010c8f7:;
  /* 1010c8f7 push 6 */
  push32((uint32_t)(0x6u));
  /* 1010c8f9 jmp 0x1010cac6 */
  goto L_1010cac6;
L_1010c8fe:;
  /* 1010c8fe dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1010c8ff push 0xb */
  push32((uint32_t)(0xbu));
  /* 1010c901 jmp 0x1010cac6 */
  goto L_1010cac6;
L_1010c906:;
  /* 1010c906 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010c909 jl 0x1010c914 */
  if ((C.sf!=C.of)) goto L_1010c914;
  /* 1010c90b cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010c90e jle 0x1010c86a */
  if ((C.zf||C.sf!=C.of)) goto L_1010c86a;
L_1010c914:;
  /* 1010c914 cmp bl, byte ptr [0x10110d34] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10110d34))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010c91a je 0x1010c879 */
  if (C.zf) goto L_1010c879;
  /* 1010c920 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010c923 jne 0x1010cade */
  if (!C.zf) goto L_1010cade;
L_1010c929:;
  /* 1010c929 mov eax, edx */
  EAX = (EDX);
  /* 1010c92b jmp 0x1010c84d */
  goto L_1010c84d;
L_1010c930:;
  /* 1010c930 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1010c933:;
  /* 1010c933 cmp dword ptr [0x10110d30], edx */
  { uint32_t _a=(r32((uint32_t)(0x10110d30))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010c939 jle 0x1010c94c */
  if ((C.zf||C.sf!=C.of)) goto L_1010c94c;
  /* 1010c93b movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1010c93e push esi */
  push32((uint32_t)(ESI));
  /* 1010c93f push eax */
  push32((uint32_t)(EAX));
  /* 1010c940 call 0x1010940b */
  push32(0x1010c945u); f_1010940b();
  /* 1010c945 pop ecx */
  ECX = (pop32());
  /* 1010c946 pop ecx */
  ECX = (pop32());
  /* 1010c947 push 1 */
  push32((uint32_t)(0x1u));
  /* 1010c949 pop edx */
  EDX = (pop32());
  /* 1010c94a jmp 0x1010c95a */
  goto L_1010c95a;
L_1010c94c:;
  /* 1010c94c mov ecx, dword ptr [0x10110b20] */
  ECX = (r32((uint32_t)(0x10110b20)));
  /* 1010c952 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1010c955 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1010c958 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_1010c95a:;
  /* 1010c95a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010c95c je 0x1010c97c */
  if (C.zf) goto L_1010c97c;
  /* 1010c95e cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010c962 jae 0x1010c974 */
  if (!C.cf) goto L_1010c974;
  /* 1010c964 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1010c967 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1010c96a sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1010c96d inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 1010c970 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 1010c972 jmp 0x1010c977 */
  goto L_1010c977;
L_1010c974:;
  /* 1010c974 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
L_1010c977:;
  /* 1010c977 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1010c979 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1010c97a jmp 0x1010c933 */
  goto L_1010c933;
L_1010c97c:;
  /* 1010c97c cmp bl, byte ptr [0x10110d34] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10110d34))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010c982 jne 0x1010c9eb */
  if (!C.zf) goto L_1010c9eb;
L_1010c984:;
  /* 1010c984 mov eax, esi */
  EAX = (ESI);
  /* 1010c986 jmp 0x1010c84d */
  goto L_1010c84d;
L_1010c98b:;
  /* 1010c98b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010c98f mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1010c992 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1010c995 jne 0x1010c9a4 */
  if (!C.zf) goto L_1010c9a4;
L_1010c997:;
  /* 1010c997 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010c99a jne 0x1010c9a4 */
  if (!C.zf) goto L_1010c9a4;
  /* 1010c99c dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 1010c99f mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1010c9a1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1010c9a2 jmp 0x1010c997 */
  goto L_1010c997;
L_1010c9a4:;
  /* 1010c9a4 cmp dword ptr [0x10110d30], edx */
  { uint32_t _a=(r32((uint32_t)(0x10110d30))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010c9aa jle 0x1010c9bd */
  if ((C.zf||C.sf!=C.of)) goto L_1010c9bd;
  /* 1010c9ac movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1010c9af push esi */
  push32((uint32_t)(ESI));
  /* 1010c9b0 push eax */
  push32((uint32_t)(EAX));
  /* 1010c9b1 call 0x1010940b */
  push32(0x1010c9b6u); f_1010940b();
  /* 1010c9b6 pop ecx */
  ECX = (pop32());
  /* 1010c9b7 pop ecx */
  ECX = (pop32());
  /* 1010c9b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 1010c9ba pop edx */
  EDX = (pop32());
  /* 1010c9bb jmp 0x1010c9cb */
  goto L_1010c9cb;
L_1010c9bd:;
  /* 1010c9bd mov ecx, dword ptr [0x10110b20] */
  ECX = (r32((uint32_t)(0x10110b20)));
  /* 1010c9c3 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1010c9c6 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1010c9c9 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_1010c9cb:;
  /* 1010c9cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010c9cd je 0x1010c9eb */
  if (C.zf) goto L_1010c9eb;
  /* 1010c9cf cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010c9d3 jae 0x1010c9e6 */
  if (!C.cf) goto L_1010c9e6;
  /* 1010c9d5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1010c9d8 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1010c9db sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1010c9de inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 1010c9e1 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 1010c9e4 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
L_1010c9e6:;
  /* 1010c9e6 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1010c9e8 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1010c9e9 jmp 0x1010c9a4 */
  goto L_1010c9a4;
L_1010c9eb:;
  /* 1010c9eb cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010c9ee je 0x1010c8fe */
  if (C.zf) goto L_1010c8fe;
  /* 1010c9f4 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010c9f7 je 0x1010c8fe */
  if (C.zf) goto L_1010c8fe;
  /* 1010c9fd jmp 0x1010c8d7 */
  goto L_1010c8d7;
L_1010ca02:;
  /* 1010ca02 cmp dword ptr [0x10110d30], edx */
  { uint32_t _a=(r32((uint32_t)(0x10110d30))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010ca08 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1010ca0b jle 0x1010ca1e */
  if ((C.zf||C.sf!=C.of)) goto L_1010ca1e;
  /* 1010ca0d movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1010ca10 push esi */
  push32((uint32_t)(ESI));
  /* 1010ca11 push eax */
  push32((uint32_t)(EAX));
  /* 1010ca12 call 0x1010940b */
  push32(0x1010ca17u); f_1010940b();
  /* 1010ca17 pop ecx */
  ECX = (pop32());
  /* 1010ca18 pop ecx */
  ECX = (pop32());
  /* 1010ca19 push 1 */
  push32((uint32_t)(0x1u));
  /* 1010ca1b pop edx */
  EDX = (pop32());
  /* 1010ca1c jmp 0x1010ca2c */
  goto L_1010ca2c;
L_1010ca1e:;
  /* 1010ca1e mov ecx, dword ptr [0x10110b20] */
  ECX = (r32((uint32_t)(0x10110b20)));
  /* 1010ca24 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1010ca27 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1010ca2a and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_1010ca2c:;
  /* 1010ca2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010ca2e je 0x1010cade */
  if (C.zf) goto L_1010cade;
  /* 1010ca34 mov eax, esi */
  EAX = (ESI);
  /* 1010ca36 jmp 0x1010ca8f */
  goto L_1010ca8f;
L_1010ca38:;
  /* 1010ca38 lea ecx, [edi - 2] */
  ECX = ((uint32_t)(EDI + -0x2));
  /* 1010ca3b cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010ca3e mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1010ca41 jl 0x1010ca48 */
  if ((C.sf!=C.of)) goto L_1010ca48;
  /* 1010ca43 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010ca46 jle 0x1010ca8c */
  if ((C.zf||C.sf!=C.of)) goto L_1010ca8c;
L_1010ca48:;
  /* 1010ca48 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1010ca4b sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010ca4e je 0x1010cac4 */
  if (C.zf) goto L_1010cac4;
  /* 1010ca50 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1010ca51 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1010ca52 je 0x1010cab8 */
  if (C.zf) goto L_1010cab8;
  /* 1010ca54 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010ca57 jne 0x1010cb6c */
  if (!C.zf) goto L_1010cb6c;
L_1010ca5d:;
  /* 1010ca5d push 8 */
  push32((uint32_t)(0x8u));
  /* 1010ca5f jmp 0x1010cac6 */
  goto L_1010cac6;
L_1010ca61:;
  /* 1010ca61 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1010ca64:;
  /* 1010ca64 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010ca67 jne 0x1010ca6e */
  if (!C.zf) goto L_1010ca6e;
  /* 1010ca69 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1010ca6b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1010ca6c jmp 0x1010ca64 */
  goto L_1010ca64;
L_1010ca6e:;
  /* 1010ca6e cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010ca71 jl 0x1010cb69 */
  if ((C.sf!=C.of)) goto L_1010cb69;
  /* 1010ca77 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010ca7a jg 0x1010cb69 */
  if ((!C.zf&&C.sf==C.of)) goto L_1010cb69;
  /* 1010ca80 jmp 0x1010ca8c */
  goto L_1010ca8c;
L_1010ca82:;
  /* 1010ca82 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010ca85 jl 0x1010ca95 */
  if ((C.sf!=C.of)) goto L_1010ca95;
  /* 1010ca87 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010ca8a jg 0x1010ca95 */
  if ((!C.zf&&C.sf==C.of)) goto L_1010ca95;
L_1010ca8c:;
  /* 1010ca8c push 9 */
  push32((uint32_t)(0x9u));
L_1010ca8e:;
  /* 1010ca8e pop eax */
  EAX = (pop32());
L_1010ca8f:;
  /* 1010ca8f dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1010ca90 jmp 0x1010c84d */
  goto L_1010c84d;
L_1010ca95:;
  /* 1010ca95 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010ca98 jne 0x1010cade */
  if (!C.zf) goto L_1010cade;
  /* 1010ca9a jmp 0x1010ca5d */
  goto L_1010ca5d;
L_1010ca9c:;
  /* 1010ca9c cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010caa0 je 0x1010cacc */
  if (C.zf) goto L_1010cacc;
  /* 1010caa2 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1010caa5 lea ecx, [edi - 1] */
  ECX = ((uint32_t)(EDI + -0x1));
  /* 1010caa8 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010caab mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1010caae je 0x1010cac4 */
  if (C.zf) goto L_1010cac4;
  /* 1010cab0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1010cab1 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1010cab2 jne 0x1010cb6c */
  if (!C.zf) goto L_1010cb6c;
L_1010cab8:;
  /* 1010cab8 or dword ptr [ebp - 0x18], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))|(0xffffffffu); w32((uint32_t)(EBP + -0x18), (_r)); fl_logic(_r,32); }
  /* 1010cabc push 7 */
  push32((uint32_t)(0x7u));
  /* 1010cabe pop eax */
  EAX = (pop32());
  /* 1010cabf jmp 0x1010c84d */
  goto L_1010c84d;
L_1010cac4:;
  /* 1010cac4 push 7 */
  push32((uint32_t)(0x7u));
L_1010cac6:;
  /* 1010cac6 pop eax */
  EAX = (pop32());
  /* 1010cac7 jmp 0x1010c84d */
  goto L_1010c84d;
L_1010cacc:;
  /* 1010cacc push 0xa */
  push32((uint32_t)(0xau));
  /* 1010cace dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1010cacf pop eax */
  EAX = (pop32());
L_1010cad0:;
  /* 1010cad0 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010cad3 je 0x1010cb6e */
  if (C.zf) goto L_1010cb6e;
  /* 1010cad9 jmp 0x1010c84d */
  goto L_1010c84d;
L_1010cade:;
  /* 1010cade mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 1010cae1 jmp 0x1010cb6e */
  goto L_1010cb6e;
L_1010cae6:;
  /* 1010cae6 mov dword ptr [ebp - 0x20], 1 */
  w32((uint32_t)(EBP + -0x20), (0x1u));
  /* 1010caed xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1010caef:;
  /* 1010caef cmp dword ptr [0x10110d30], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10110d30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010caf6 jle 0x1010cb07 */
  if ((C.zf||C.sf!=C.of)) goto L_1010cb07;
  /* 1010caf8 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1010cafb push 4 */
  push32((uint32_t)(0x4u));
  /* 1010cafd push eax */
  push32((uint32_t)(EAX));
  /* 1010cafe call 0x1010940b */
  push32(0x1010cb03u); f_1010940b();
  /* 1010cb03 pop ecx */
  ECX = (pop32());
  /* 1010cb04 pop ecx */
  ECX = (pop32());
  /* 1010cb05 jmp 0x1010cb16 */
  goto L_1010cb16;
L_1010cb07:;
  /* 1010cb07 mov ecx, dword ptr [0x10110b20] */
  ECX = (r32((uint32_t)(0x10110b20)));
  /* 1010cb0d movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1010cb10 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1010cb13 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_1010cb16:;
  /* 1010cb16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010cb18 je 0x1010cb36 */
  if (C.zf) goto L_1010cb36;
  /* 1010cb1a movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1010cb1d lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 1010cb20 lea esi, [ecx + eax*2 - 0x30] */
  ESI = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 1010cb24 cmp esi, 0x1450 */
  { uint32_t _a=(ESI),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010cb2a jg 0x1010cb31 */
  if ((!C.zf&&C.sf==C.of)) goto L_1010cb31;
  /* 1010cb2c mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1010cb2e inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1010cb2f jmp 0x1010caef */
  goto L_1010caef;
L_1010cb31:;
  /* 1010cb31 mov esi, 0x1451 */
  ESI = (0x1451u);
L_1010cb36:;
  /* 1010cb36 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
L_1010cb39:;
  /* 1010cb39 cmp dword ptr [0x10110d30], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10110d30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010cb40 jle 0x1010cb51 */
  if ((C.zf||C.sf!=C.of)) goto L_1010cb51;
  /* 1010cb42 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1010cb45 push 4 */
  push32((uint32_t)(0x4u));
  /* 1010cb47 push eax */
  push32((uint32_t)(EAX));
  /* 1010cb48 call 0x1010940b */
  push32(0x1010cb4du); f_1010940b();
  /* 1010cb4d pop ecx */
  ECX = (pop32());
  /* 1010cb4e pop ecx */
  ECX = (pop32());
  /* 1010cb4f jmp 0x1010cb60 */
  goto L_1010cb60;
L_1010cb51:;
  /* 1010cb51 mov ecx, dword ptr [0x10110b20] */
  ECX = (r32((uint32_t)(0x10110b20)));
  /* 1010cb57 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1010cb5a mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1010cb5d and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_1010cb60:;
  /* 1010cb60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010cb62 je 0x1010cb69 */
  if (C.zf) goto L_1010cb69;
  /* 1010cb64 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1010cb66 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1010cb67 jmp 0x1010cb39 */
  goto L_1010cb39;
L_1010cb69:;
  /* 1010cb69 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1010cb6a jmp 0x1010cb6e */
  goto L_1010cb6e;
L_1010cb6c:;
  /* 1010cb6c mov edi, ecx */
  EDI = (ECX);
L_1010cb6e:;
  /* 1010cb6e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1010cb71 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010cb75 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 1010cb77 je 0x1010cc56 */
  if (C.zf) goto L_1010cc56;
  /* 1010cb7d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1010cb7f pop eax */
  EAX = (pop32());
  /* 1010cb80 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010cb83 jbe 0x1010cb9a */
  if ((C.cf||C.zf)) goto L_1010cb9a;
  /* 1010cb85 cmp byte ptr [ebp - 0x45], 5 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x45))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010cb89 jl 0x1010cb8e */
  if ((C.sf!=C.of)) goto L_1010cb8e;
  /* 1010cb8b inc byte ptr [ebp - 0x45] */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x45)))+1; w8((uint32_t)(EBP + -0x45), (_r)); fl_inc(_r,8); }
L_1010cb8e:;
  /* 1010cb8e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1010cb91 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1010cb94 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1010cb95 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 1010cb98 jmp 0x1010cb9d */
  goto L_1010cb9d;
L_1010cb9a:;
  /* 1010cb9a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1010cb9d:;
  /* 1010cb9d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010cba1 jbe 0x1010cc4c */
  if ((C.cf||C.zf)) goto L_1010cc4c;
L_1010cba7:;
  /* 1010cba7 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1010cba8 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010cbab jne 0x1010cbb5 */
  if (!C.zf) goto L_1010cbb5;
  /* 1010cbad dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 1010cbb0 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 1010cbb3 jmp 0x1010cba7 */
  goto L_1010cba7;
L_1010cbb5:;
  /* 1010cbb5 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 1010cbb8 push eax */
  push32((uint32_t)(EAX));
  /* 1010cbb9 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 1010cbbc push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 1010cbbf push eax */
  push32((uint32_t)(EAX));
  /* 1010cbc0 call 0x1010c72f */
  push32(0x1010cbc5u); f_1010c72f();
  /* 1010cbc5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1010cbc8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1010cbca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010cbcd cmp dword ptr [ebp - 0x18], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010cbd0 jge 0x1010cbd4 */
  if ((C.sf==C.of)) goto L_1010cbd4;
  /* 1010cbd2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_1010cbd4:;
  /* 1010cbd4 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010cbd7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010cbda jne 0x1010cbdf */
  if (!C.zf) goto L_1010cbdf;
  /* 1010cbdc add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1010cbdf:;
  /* 1010cbdf cmp dword ptr [ebp - 0x24], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010cbe2 jne 0x1010cbe7 */
  if (!C.zf) goto L_1010cbe7;
  /* 1010cbe4 sub eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1010cbe7:;
  /* 1010cbe7 cmp eax, 0x1450 */
  { uint32_t _a=(EAX),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010cbec jle 0x1010cc1e */
  if ((C.zf||C.sf!=C.of)) goto L_1010cc1e;
  /* 1010cbee mov dword ptr [ebp - 0x2c], 1 */
  w32((uint32_t)(EBP + -0x2c), (0x1u));
L_1010cbf5:;
  /* 1010cbf5 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 1010cbf8 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 1010cbfb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1010cbfe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_1010cc01:;
  /* 1010cc01 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010cc05 je 0x1010cc67 */
  if (C.zf) goto L_1010cc67;
  /* 1010cc07 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1010cc09 mov eax, 0x7fff */
  EAX = (0x7fffu);
  /* 1010cc0e mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 1010cc13 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1010cc15 mov dword ptr [ebp - 0x14], 2 */
  w32((uint32_t)(EBP + -0x14), (0x2u));
  /* 1010cc1c jmp 0x1010cc7c */
  goto L_1010cc7c;
L_1010cc1e:;
  /* 1010cc1e cmp eax, 0xffffebb0 */
  { uint32_t _a=(EAX),_b=(0xffffebb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010cc23 jge 0x1010cc2e */
  if ((C.sf==C.of)) goto L_1010cc2e;
  /* 1010cc25 mov dword ptr [ebp - 0x30], 1 */
  w32((uint32_t)(EBP + -0x30), (0x1u));
  /* 1010cc2c jmp 0x1010cbf5 */
  goto L_1010cbf5;
L_1010cc2e:;
  /* 1010cc2e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1010cc31 push eax */
  push32((uint32_t)(EAX));
  /* 1010cc32 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 1010cc35 push eax */
  push32((uint32_t)(EAX));
  /* 1010cc36 call 0x1010d6ca */
  push32(0x1010cc3bu); f_1010d6ca();
  /* 1010cc3b mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 1010cc3e mov ebx, dword ptr [ebp - 0x3e] */
  EBX = (r32((uint32_t)(EBP + -0x3e)));
  /* 1010cc41 mov esi, dword ptr [ebp - 0x3a] */
  ESI = (r32((uint32_t)(EBP + -0x3a)));
  /* 1010cc44 mov eax, dword ptr [ebp - 0x36] */
  EAX = (r32((uint32_t)(EBP + -0x36)));
  /* 1010cc47 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010cc4a jmp 0x1010cc01 */
  goto L_1010cc01;
L_1010cc4c:;
  /* 1010cc4c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1010cc4e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1010cc50 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1010cc52 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1010cc54 jmp 0x1010cc01 */
  goto L_1010cc01;
L_1010cc56:;
  /* 1010cc56 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1010cc58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1010cc5a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1010cc5c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1010cc5e mov dword ptr [ebp - 0x14], 4 */
  w32((uint32_t)(EBP + -0x14), (0x4u));
  /* 1010cc65 jmp 0x1010cc7c */
  goto L_1010cc7c;
L_1010cc67:;
  /* 1010cc67 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010cc6b je 0x1010cc7c */
  if (C.zf) goto L_1010cc7c;
  /* 1010cc6d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1010cc6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1010cc71 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1010cc73 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1010cc75 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_1010cc7c:;
  /* 1010cc7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1010cc7f or eax, dword ptr [ebp - 0x28] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x28))); EAX = (_r); fl_logic(_r,32); }
  /* 1010cc82 pop edi */
  EDI = (pop32());
  /* 1010cc83 mov dword ptr [ecx + 6], esi */
  w32((uint32_t)(ECX + 0x6), (ESI));
  /* 1010cc86 mov dword ptr [ecx + 2], ebx */
  w32((uint32_t)(ECX + 0x2), (EBX));
  /* 1010cc89 mov word ptr [ecx + 0xa], ax */
  w16((uint32_t)(ECX + 0xa), (AX));
  /* 1010cc8d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1010cc90 pop esi */
  ESI = (pop32());
  /* 1010cc91 mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1010cc94 pop ebx */
  EBX = (pop32());
  /* 1010cc95 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1010cc96 ret  */
  ESPCHK(0x1010c7f6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ccc7 @ 0x1010ccc7 (659 bytes, 232 insns) */
void f_1010ccc7(void) {
  FTRACE(0x1010ccc7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010ccc7 push ebp */
  push32((uint32_t)(EBP));
  /* 1010ccc8 mov ebp, esp */
  EBP = (ESP);
  /* 1010ccca sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010cccd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1010ccd0 push ebx */
  push32((uint32_t)(EBX));
  /* 1010ccd1 mov ebx, dword ptr [ebp + 0x1c] */
  EBX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1010ccd4 push esi */
  push32((uint32_t)(ESI));
  /* 1010ccd5 mov ecx, eax */
  ECX = (EAX);
  /* 1010ccd7 mov esi, 0x7fff */
  ESI = (0x7fffu);
  /* 1010ccdc and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1010cce2 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1010cce4 test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 1010cce7 push edi */
  push32((uint32_t)(EDI));
  /* 1010cce8 mov byte ptr [ebp - 0x1c], 0xcc */
  w8((uint32_t)(EBP + -0x1c), (0xccu));
  /* 1010ccec mov byte ptr [ebp - 0x1b], 0xcc */
  w8((uint32_t)(EBP + -0x1b), (0xccu));
  /* 1010ccf0 mov byte ptr [ebp - 0x1a], 0xcc */
  w8((uint32_t)(EBP + -0x1a), (0xccu));
  /* 1010ccf4 mov byte ptr [ebp - 0x19], 0xcc */
  w8((uint32_t)(EBP + -0x19), (0xccu));
  /* 1010ccf8 mov byte ptr [ebp - 0x18], 0xcc */
  w8((uint32_t)(EBP + -0x18), (0xccu));
  /* 1010ccfc mov byte ptr [ebp - 0x17], 0xcc */
  w8((uint32_t)(EBP + -0x17), (0xccu));
  /* 1010cd00 mov byte ptr [ebp - 0x16], 0xcc */
  w8((uint32_t)(EBP + -0x16), (0xccu));
  /* 1010cd04 mov byte ptr [ebp - 0x15], 0xcc */
  w8((uint32_t)(EBP + -0x15), (0xccu));
  /* 1010cd08 mov byte ptr [ebp - 0x14], 0xcc */
  w8((uint32_t)(EBP + -0x14), (0xccu));
  /* 1010cd0c mov byte ptr [ebp - 0x13], 0xcc */
  w8((uint32_t)(EBP + -0x13), (0xccu));
  /* 1010cd10 mov byte ptr [ebp - 0x12], 0xfb */
  w8((uint32_t)(EBP + -0x12), (0xfbu));
  /* 1010cd14 mov byte ptr [ebp - 0x11], 0x3f */
  w8((uint32_t)(EBP + -0x11), (0x3fu));
  /* 1010cd18 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1010cd1f mov edx, eax */
  EDX = (EAX);
  /* 1010cd21 je 0x1010cd29 */
  if (C.zf) goto L_1010cd29;
  /* 1010cd23 mov byte ptr [ebx + 2], 0x2d */
  w8((uint32_t)(EBX + 0x2), (0x2du));
  /* 1010cd27 jmp 0x1010cd2d */
  goto L_1010cd2d;
L_1010cd29:;
  /* 1010cd29 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
L_1010cd2d:;
  /* 1010cd2d mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 1010cd30 test dx, dx */
  { uint32_t _r=(DX)&(DX); fl_logic(_r,16); }
  /* 1010cd33 jne 0x1010cd53 */
  if (!C.zf) goto L_1010cd53;
  /* 1010cd35 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1010cd37 jne 0x1010cd53 */
  if (!C.zf) goto L_1010cd53;
  /* 1010cd39 cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010cd3c jne 0x1010cd53 */
  if (!C.zf) goto L_1010cd53;
L_1010cd3e:;
  /* 1010cd3e and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 1010cd42 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 1010cd46 mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 1010cd4a mov byte ptr [ebx + 4], 0x30 */
  w8((uint32_t)(EBX + 0x4), (0x30u));
  /* 1010cd4e jmp 0x1010cf51 */
  goto L_1010cf51;
L_1010cd53:;
  /* 1010cd53 cmp dx, si */
  { uint32_t _a=(DX),_b=(SI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1010cd56 jne 0x1010cdd2 */
  if (!C.zf) goto L_1010cdd2;
  /* 1010cd58 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1010cd5d mov word ptr [ebx], 1 */
  w16((uint32_t)(EBX), (0x1u));
  /* 1010cd62 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010cd64 jne 0x1010cd6c */
  if (!C.zf) goto L_1010cd6c;
  /* 1010cd66 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010cd6a je 0x1010cd7b */
  if (C.zf) goto L_1010cd7b;
L_1010cd6c:;
  /* 1010cd6c test edi, 0x40000000 */
  { uint32_t _r=(EDI)&(0x40000000u); fl_logic(_r,32); }
  /* 1010cd72 jne 0x1010cd7b */
  if (!C.zf) goto L_1010cd7b;
  /* 1010cd74 push 0x1010e5a0 */
  push32((uint32_t)(0x1010e5a0u));
  /* 1010cd79 jmp 0x1010cdc1 */
  goto L_1010cdc1;
L_1010cd7b:;
  /* 1010cd7b test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 1010cd7e je 0x1010cd95 */
  if (C.zf) goto L_1010cd95;
  /* 1010cd80 cmp edi, 0xc0000000 */
  { uint32_t _a=(EDI),_b=(0xc0000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010cd86 jne 0x1010cd95 */
  if (!C.zf) goto L_1010cd95;
  /* 1010cd88 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010cd8c jne 0x1010cdbc */
  if (!C.zf) goto L_1010cdbc;
  /* 1010cd8e push 0x1010e598 */
  push32((uint32_t)(0x1010e598u));
  /* 1010cd93 jmp 0x1010cda4 */
  goto L_1010cda4;
L_1010cd95:;
  /* 1010cd95 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010cd97 jne 0x1010cdbc */
  if (!C.zf) goto L_1010cdbc;
  /* 1010cd99 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010cd9d jne 0x1010cdbc */
  if (!C.zf) goto L_1010cdbc;
  /* 1010cd9f push 0x1010e590 */
  push32((uint32_t)(0x1010e590u));
L_1010cda4:;
  /* 1010cda4 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 1010cda7 push eax */
  push32((uint32_t)(EAX));
  /* 1010cda8 call 0x10109b30 */
  push32(0x1010cdadu); f_10109b30();
  /* 1010cdad pop ecx */
  ECX = (pop32());
  /* 1010cdae mov byte ptr [ebx + 3], 5 */
  w8((uint32_t)(EBX + 0x3), (0x5u));
  /* 1010cdb2 pop ecx */
  ECX = (pop32());
L_1010cdb3:;
  /* 1010cdb3 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1010cdb7 jmp 0x1010cf2a */
  goto L_1010cf2a;
L_1010cdbc:;
  /* 1010cdbc push 0x1010e588 */
  push32((uint32_t)(0x1010e588u));
L_1010cdc1:;
  /* 1010cdc1 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 1010cdc4 push eax */
  push32((uint32_t)(EAX));
  /* 1010cdc5 call 0x10109b30 */
  push32(0x1010cdcau); f_10109b30();
  /* 1010cdca pop ecx */
  ECX = (pop32());
  /* 1010cdcb mov byte ptr [ebx + 3], 6 */
  w8((uint32_t)(EBX + 0x3), (0x6u));
  /* 1010cdcf pop ecx */
  ECX = (pop32());
  /* 1010cdd0 jmp 0x1010cdb3 */
  goto L_1010cdb3;
L_1010cdd2:;
  /* 1010cdd2 movzx eax, dx */
  EAX = ((uint32_t)(DX));
  /* 1010cdd5 mov ecx, edi */
  ECX = (EDI);
  /* 1010cdd7 mov esi, eax */
  ESI = (EAX);
  /* 1010cdd9 shr ecx, 0x18 */
  ECX = (sh_shr((uint32_t)(ECX), (0x18u)&0x1f, 32));
  /* 1010cddc imul eax, eax, 0x4d10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x4d10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1010cde2 shr esi, 8 */
  ESI = (sh_shr((uint32_t)(ESI), (0x8u)&0x1f, 32));
  /* 1010cde5 and word ptr [ebp - 0x10], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x10)))&(0x0u); w16((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,16); }
  /* 1010cdea push 1 */
  push32((uint32_t)(0x1u));
  /* 1010cdec lea ecx, [esi + ecx*2] */
  ECX = ((uint32_t)(ESI + ECX*2));
  /* 1010cdef mov word ptr [ebp - 6], dx */
  w16((uint32_t)(EBP + -0x6), (DX));
  /* 1010cdf3 imul ecx, ecx, 0x4d */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x4du); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1010cdf6 mov dword ptr [ebp - 0xa], edi */
  w32((uint32_t)(EBP + -0xa), (EDI));
  /* 1010cdf9 lea esi, [ecx + eax - 0x134312f4] */
  ESI = ((uint32_t)(ECX + EAX*1 + -0x134312f4));
  /* 1010ce00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1010ce03 sar esi, 0x10 */
  ESI = (sh_sar((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 1010ce06 mov dword ptr [ebp - 0xe], eax */
  w32((uint32_t)(EBP + -0xe), (EAX));
  /* 1010ce09 movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 1010ce0c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1010ce0e push eax */
  push32((uint32_t)(EAX));
  /* 1010ce0f lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1010ce12 push eax */
  push32((uint32_t)(EAX));
  /* 1010ce13 call 0x1010d6ca */
  push32(0x1010ce18u); f_1010d6ca();
  /* 1010ce18 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010ce1b cmp word ptr [ebp - 6], 0x3fff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x6))),_b=(0x3fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1010ce21 jb 0x1010ce33 */
  if (C.cf) goto L_1010ce33;
  /* 1010ce23 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1010ce26 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1010ce27 push eax */
  push32((uint32_t)(EAX));
  /* 1010ce28 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1010ce2b push eax */
  push32((uint32_t)(EAX));
  /* 1010ce2c call 0x1010d4aa */
  push32(0x1010ce31u); f_1010d4aa();
  /* 1010ce31 pop ecx */
  ECX = (pop32());
  /* 1010ce32 pop ecx */
  ECX = (pop32());
L_1010ce33:;
  /* 1010ce33 test byte ptr [ebp + 0x18], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x18)))&(0x1u); fl_logic(_r,8); }
  /* 1010ce37 mov word ptr [ebx], si */
  w16((uint32_t)(EBX), (SI));
  /* 1010ce3a je 0x1010ce4d */
  if (C.zf) goto L_1010ce4d;
  /* 1010ce3c mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 1010ce3f movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 1010ce42 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1010ce44 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1010ce46 jg 0x1010ce50 */
  if ((!C.zf&&C.sf==C.of)) goto L_1010ce50;
  /* 1010ce48 jmp 0x1010cd3e */
  goto L_1010cd3e;
L_1010ce4d:;
  /* 1010ce4d mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
L_1010ce50:;
  /* 1010ce50 cmp edi, 0x15 */
  { uint32_t _a=(EDI),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010ce53 jle 0x1010ce58 */
  if ((C.zf||C.sf!=C.of)) goto L_1010ce58;
  /* 1010ce55 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1010ce57 pop edi */
  EDI = (pop32());
L_1010ce58:;
  /* 1010ce58 movzx esi, word ptr [ebp - 6] */
  ESI = ((uint32_t)(r16((uint32_t)(EBP + -0x6))));
  /* 1010ce5c sub esi, 0x3ffe */
  { uint32_t _a=(ESI),_b=(0x3ffeu),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010ce62 and word ptr [ebp - 6], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x6)))&(0x0u); w16((uint32_t)(EBP + -0x6), (_r)); fl_logic(_r,16); }
  /* 1010ce67 mov dword ptr [ebp + 0x1c], 8 */
  w32((uint32_t)(EBP + 0x1c), (0x8u));
L_1010ce6e:;
  /* 1010ce6e lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1010ce71 push eax */
  push32((uint32_t)(EAX));
  /* 1010ce72 call 0x1010c6d4 */
  push32(0x1010ce77u); f_1010c6d4();
  /* 1010ce77 dec dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))-1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_dec(_r,32); }
  /* 1010ce7a pop ecx */
  ECX = (pop32());
  /* 1010ce7b jne 0x1010ce6e */
  if (!C.zf) goto L_1010ce6e;
  /* 1010ce7d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1010ce7f jge 0x1010ce98 */
  if ((C.sf==C.of)) goto L_1010ce98;
  /* 1010ce81 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 1010ce83 and esi, 0xff */
  { uint32_t _r=(ESI)&(0xffu); ESI = (_r); fl_logic(_r,32); }
  /* 1010ce89 jle 0x1010ce98 */
  if ((C.zf||C.sf!=C.of)) goto L_1010ce98;
L_1010ce8b:;
  /* 1010ce8b lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1010ce8e push eax */
  push32((uint32_t)(EAX));
  /* 1010ce8f call 0x1010c702 */
  push32(0x1010ce94u); f_1010c702();
  /* 1010ce94 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1010ce95 pop ecx */
  ECX = (pop32());
  /* 1010ce96 jne 0x1010ce8b */
  if (!C.zf) goto L_1010ce8b;
L_1010ce98:;
  /* 1010ce98 lea ecx, [edi + 1] */
  ECX = ((uint32_t)(EDI + 0x1));
  /* 1010ce9b lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 1010ce9e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1010cea0 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
  /* 1010cea3 jle 0x1010cef5 */
  if ((C.zf||C.sf!=C.of)) goto L_1010cef5;
  /* 1010cea5 mov dword ptr [ebp + 0x14], ecx */
  w32((uint32_t)(EBP + 0x14), (ECX));
L_1010cea8:;
  /* 1010cea8 lea esi, [ebp - 0x10] */
  ESI = ((uint32_t)(EBP + -0x10));
  /* 1010ceab lea edi, [ebp + 8] */
  EDI = ((uint32_t)(EBP + 0x8));
  /* 1010ceae movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1010ceaf movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1010ceb0 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1010ceb3 push eax */
  push32((uint32_t)(EAX));
  /* 1010ceb4 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1010ceb5 call 0x1010c6d4 */
  push32(0x1010cebau); f_1010c6d4();
  /* 1010ceba lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1010cebd push eax */
  push32((uint32_t)(EAX));
  /* 1010cebe call 0x1010c6d4 */
  push32(0x1010cec3u); f_1010c6d4();
  /* 1010cec3 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1010cec6 push eax */
  push32((uint32_t)(EAX));
  /* 1010cec7 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1010ceca push eax */
  push32((uint32_t)(EAX));
  /* 1010cecb call 0x1010c676 */
  push32(0x1010ced0u); f_1010c676();
  /* 1010ced0 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1010ced3 push eax */
  push32((uint32_t)(EAX));
  /* 1010ced4 call 0x1010c6d4 */
  push32(0x1010ced9u); f_1010c6d4();
  /* 1010ced9 mov al, byte ptr [ebp - 5] */
  AL = (r8((uint32_t)(EBP + -0x5)));
  /* 1010cedc mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1010cedf and byte ptr [ebp - 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x5)))&(0x0u); w8((uint32_t)(EBP + -0x5), (_r)); fl_logic(_r,8); }
  /* 1010cee3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010cee6 add al, 0x30 */
  { uint32_t _a=(AL),_b=(0x30u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1010cee8 inc dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))+1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_inc(_r,32); }
  /* 1010ceeb dec dword ptr [ebp + 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))-1; w32((uint32_t)(EBP + 0x14), (_r)); fl_dec(_r,32); }
  /* 1010ceee mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1010cef0 jne 0x1010cea8 */
  if (!C.zf) goto L_1010cea8;
  /* 1010cef2 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
L_1010cef5:;
  /* 1010cef5 mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 1010cef8 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1010cef9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1010cefa cmp cl, 0x35 */
  { uint32_t _a=(CL),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010cefd lea ecx, [ebx + 4] */
  ECX = ((uint32_t)(EBX + 0x4));
  /* 1010cf00 jl 0x1010cf32 */
  if ((C.sf!=C.of)) goto L_1010cf32;
L_1010cf02:;
  /* 1010cf02 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010cf04 jb 0x1010cf15 */
  if (C.cf) goto L_1010cf15;
  /* 1010cf06 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010cf09 jne 0x1010cf11 */
  if (!C.zf) goto L_1010cf11;
  /* 1010cf0b mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 1010cf0e dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1010cf0f jmp 0x1010cf02 */
  goto L_1010cf02;
L_1010cf11:;
  /* 1010cf11 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010cf13 jae 0x1010cf19 */
  if (!C.cf) goto L_1010cf19;
L_1010cf15:;
  /* 1010cf15 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1010cf16 inc word ptr [ebx] */
  { uint32_t _r=(r16((uint32_t)(EBX)))+1; w16((uint32_t)(EBX), (_r)); fl_inc(_r,16); }
L_1010cf19:;
  /* 1010cf19 inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_1010cf1b:;
  /* 1010cf1b sub al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1010cf1d sub al, 3 */
  { uint32_t _a=(AL),_b=(0x3u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1010cf1f mov byte ptr [ebx + 3], al */
  w8((uint32_t)(EBX + 0x3), (AL));
  /* 1010cf22 movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 1010cf25 and byte ptr [eax + ebx + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + EBX*1 + 0x4)))&(0x0u); w8((uint32_t)(EAX + EBX*1 + 0x4), (_r)); fl_logic(_r,8); }
L_1010cf2a:;
  /* 1010cf2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1010cf2d:;
  /* 1010cf2d pop edi */
  EDI = (pop32());
  /* 1010cf2e pop esi */
  ESI = (pop32());
  /* 1010cf2f pop ebx */
  EBX = (pop32());
  /* 1010cf30 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1010cf31 ret  */
  ESPCHK(0x1010ccc7u, _esp0);
  ESP += 4; return;
L_1010cf32:;
  /* 1010cf32 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010cf34 jb 0x1010cf42 */
  if (C.cf) goto L_1010cf42;
  /* 1010cf36 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010cf39 jne 0x1010cf3e */
  if (!C.zf) goto L_1010cf3e;
  /* 1010cf3b dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1010cf3c jmp 0x1010cf32 */
  goto L_1010cf32;
L_1010cf3e:;
  /* 1010cf3e cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010cf40 jae 0x1010cf1b */
  if (!C.cf) goto L_1010cf1b;
L_1010cf42:;
  /* 1010cf42 and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 1010cf46 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 1010cf4a mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 1010cf4e mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_1010cf51:;
  /* 1010cf51 and byte ptr [ebx + 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x5)))&(0x0u); w8((uint32_t)(EBX + 0x5), (_r)); fl_logic(_r,8); }
  /* 1010cf55 push 1 */
  push32((uint32_t)(0x1u));
  /* 1010cf57 pop eax */
  EAX = (pop32());
  /* 1010cf58 jmp 0x1010cf2d */
  goto L_1010cf2d;
}

/* FUN_1000cf5a @ 0x1010cf5a (27 bytes, 13 insns) */
void f_1010cf5a(void) {
  FTRACE(0x1010cf5au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010cf5a mov eax, dword ptr [0x101169bc] */
  EAX = (r32((uint32_t)(0x101169bc)));
  /* 1010cf5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010cf61 je 0x1010cf72 */
  if (C.zf) goto L_1010cf72;
  /* 1010cf63 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1010cf67 call eax */
  call_ind((uint32_t)(EAX), 0x1010cf69u);
  /* 1010cf69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010cf6b pop ecx */
  ECX = (pop32());
  /* 1010cf6c je 0x1010cf72 */
  if (C.zf) goto L_1010cf72;
  /* 1010cf6e push 1 */
  push32((uint32_t)(0x1u));
  /* 1010cf70 pop eax */
  EAX = (pop32());
  /* 1010cf71 ret  */
  ESPCHK(0x1010cf5au, _esp0);
  ESP += 4; return;
L_1010cf72:;
  /* 1010cf72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1010cf74 ret  */
  ESPCHK(0x1010cf5au, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1010cf78 (32 bytes, 18 insns) */
void f_1010cf78(void) {
  FTRACE(0x1010cf78u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010cf78 push ebp */
  push32((uint32_t)(EBP));
  /* 1010cf79 mov ebp, esp */
  EBP = (ESP);
  /* 1010cf7b push ebx */
  push32((uint32_t)(EBX));
  /* 1010cf7c push esi */
  push32((uint32_t)(ESI));
  /* 1010cf7d push edi */
  push32((uint32_t)(EDI));
  /* 1010cf7e push ebp */
  push32((uint32_t)(EBP));
  /* 1010cf7f push 0 */
  push32((uint32_t)(0x0u));
  /* 1010cf81 push 0 */
  push32((uint32_t)(0x0u));
  /* 1010cf83 push 0x1010cf90 */
  push32((uint32_t)(0x1010cf90u));
  /* 1010cf88 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1010cf8b call 0x1010da74 */
  push32(0x1010cf90u); f_1010da74();
  /* 1010cf90 pop ebp */
  EBP = (pop32());
  /* 1010cf91 pop edi */
  EDI = (pop32());
  /* 1010cf92 pop esi */
  ESI = (pop32());
  /* 1010cf93 pop ebx */
  EBX = (pop32());
  /* 1010cf94 mov esp, ebp */
  ESP = (EBP);
  /* 1010cf96 pop ebp */
  EBP = (pop32());
  /* 1010cf97 ret  */
  ESPCHK(0x1010cf78u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1010cfba (104 bytes, 33 insns) */
void f_1010cfba(void) {
  FTRACE(0x1010cfbau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010cfba push ebx */
  push32((uint32_t)(EBX));
  /* 1010cfbb push esi */
  push32((uint32_t)(ESI));
  /* 1010cfbc push edi */
  push32((uint32_t)(EDI));
  /* 1010cfbd mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1010cfc1 push eax */
  push32((uint32_t)(EAX));
  /* 1010cfc2 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1010cfc4 push 0x1010cf98 */
  push32((uint32_t)(0x1010cf98u));
  /* 1010cfc9 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1010cfd0 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1010cfd7:;
  /* 1010cfd7 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1010cfdb mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1010cfde mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1010cfe1 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010cfe4 je 0x1010d014 */
  if (C.zf) goto L_1010d014;
  /* 1010cfe6 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010cfea je 0x1010d014 */
  if (C.zf) goto L_1010d014;
  /* 1010cfec lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1010cfef mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1010cff2 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1010cff6 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1010cff9 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010cffe jne 0x1010d012 */
  if (!C.zf) goto L_1010d012;
  /* 1010d000 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1010d005 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1010d009 call 0x1010d04e */
  push32(0x1010d00eu); f_1010d04e();
  /* 1010d00e call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1010d012u);
L_1010d012:;
  /* 1010d012 jmp 0x1010cfd7 */
  goto L_1010cfd7;
L_1010d014:;
  /* 1010d014 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1010d01b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010d01e pop edi */
  EDI = (pop32());
  /* 1010d01f pop esi */
  ESI = (pop32());
  /* 1010d020 pop ebx */
  EBX = (pop32());
  /* 1010d021 ret  */
  ESPCHK(0x1010cfbau, _esp0);
  ESP += 4; return;
}

/* FUN_1000d04e @ 0x1010d04e (24 bytes, 10 insns) */
void f_1010d04e(void) {
  FTRACE(0x1010d04eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010d04e push ebx */
  push32((uint32_t)(EBX));
  /* 1010d04f push ecx */
  push32((uint32_t)(ECX));
  /* 1010d050 mov ebx, 0x10113254 */
  EBX = (0x10113254u);
  /* 1010d055 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1010d058 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1010d05b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1010d05e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 1010d061 pop ecx */
  ECX = (pop32());
  /* 1010d062 pop ebx */
  EBX = (pop32());
  /* 1010d063 ret 4 */
  ESPCHK(0x1010d04eu, _esp0);
  ESP += 8; return;
}

/* FUN_1000d12d @ 0x1010d12d (27 bytes, 11 insns) */
void f_1010d12d(void) {
  FTRACE(0x1010d12du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010d12d push ebp */
  push32((uint32_t)(EBP));
  /* 1010d12e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1010d132 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1010d134 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1010d137 push eax */
  push32((uint32_t)(EAX));
  /* 1010d138 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1010d13b push eax */
  push32((uint32_t)(EAX));
  /* 1010d13c call 0x1010cfba */
  push32(0x1010d141u); f_1010cfba();
  /* 1010d141 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010d144 pop ebp */
  EBP = (pop32());
  /* 1010d145 ret 4 */
  ESPCHK(0x1010d12du, _esp0);
  ESP += 8; return;
}

/* FUN_1000d148 @ 0x1010d148 (111 bytes, 44 insns) */
void f_1010d148(void) {
  FTRACE(0x1010d148u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010d148 push ebx */
  push32((uint32_t)(EBX));
  /* 1010d149 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1010d14b cmp dword ptr [0x10116988], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10116988))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010d151 jne 0x1010d166 */
  if (!C.zf) goto L_1010d166;
  /* 1010d153 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1010d157 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010d15a jl 0x1010d1b5 */
  if ((C.sf!=C.of)) goto L_1010d1b5;
  /* 1010d15c cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010d15f jg 0x1010d1b5 */
  if ((!C.zf&&C.sf==C.of)) goto L_1010d1b5;
  /* 1010d161 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010d164 pop ebx */
  EBX = (pop32());
  /* 1010d165 ret  */
  ESPCHK(0x1010d148u, _esp0);
  ESP += 4; return;
L_1010d166:;
  /* 1010d166 push esi */
  push32((uint32_t)(ESI));
  /* 1010d167 mov esi, 0x10116b04 */
  ESI = (0x10116b04u);
  /* 1010d16c push edi */
  push32((uint32_t)(EDI));
  /* 1010d16d push esi */
  push32((uint32_t)(ESI));
  /* 1010d16e call dword ptr [0x1010e090] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e090))), 0x1010d174u);
  /* 1010d174 cmp dword ptr [0x10116b00], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10116b00))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010d17a mov edi, dword ptr [0x1010e08c] */
  EDI = (r32((uint32_t)(0x1010e08c)));
  /* 1010d180 je 0x1010d190 */
  if (C.zf) goto L_1010d190;
  /* 1010d182 push esi */
  push32((uint32_t)(ESI));
  /* 1010d183 call edi */
  call_ind((uint32_t)(EDI), 0x1010d185u);
  /* 1010d185 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1010d187 call 0x1010a053 */
  push32(0x1010d18cu); f_1010a053();
  /* 1010d18c pop ecx */
  ECX = (pop32());
  /* 1010d18d push 1 */
  push32((uint32_t)(0x1u));
  /* 1010d18f pop ebx */
  EBX = (pop32());
L_1010d190:;
  /* 1010d190 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1010d194 call 0x1010d1b7 */
  push32(0x1010d199u); f_1010d1b7();
  /* 1010d199 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1010d19b pop ecx */
  ECX = (pop32());
  /* 1010d19c mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 1010d1a0 je 0x1010d1ac */
  if (C.zf) goto L_1010d1ac;
  /* 1010d1a2 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1010d1a4 call 0x1010a0b4 */
  push32(0x1010d1a9u); f_1010a0b4();
  /* 1010d1a9 pop ecx */
  ECX = (pop32());
  /* 1010d1aa jmp 0x1010d1af */
  goto L_1010d1af;
L_1010d1ac:;
  /* 1010d1ac push esi */
  push32((uint32_t)(ESI));
  /* 1010d1ad call edi */
  call_ind((uint32_t)(EDI), 0x1010d1afu);
L_1010d1af:;
  /* 1010d1af mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1010d1b3 pop edi */
  EDI = (pop32());
  /* 1010d1b4 pop esi */
  ESI = (pop32());
L_1010d1b5:;
  /* 1010d1b5 pop ebx */
  EBX = (pop32());
  /* 1010d1b6 ret  */
  ESPCHK(0x1010d148u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d1b7 @ 0x1010d1b7 (204 bytes, 71 insns) */
void f_1010d1b7(void) {
  FTRACE(0x1010d1b7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010d1b7 push ebp */
  push32((uint32_t)(EBP));
  /* 1010d1b8 mov ebp, esp */
  EBP = (ESP);
  /* 1010d1ba push ecx */
  push32((uint32_t)(ECX));
  /* 1010d1bb cmp dword ptr [0x10116988], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10116988))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010d1c2 push ebx */
  push32((uint32_t)(EBX));
  /* 1010d1c3 jne 0x1010d1e2 */
  if (!C.zf) goto L_1010d1e2;
  /* 1010d1c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1010d1c8 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010d1cb jl 0x1010d280 */
  if ((C.sf!=C.of)) goto L_1010d280;
  /* 1010d1d1 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010d1d4 jg 0x1010d280 */
  if ((!C.zf&&C.sf==C.of)) goto L_1010d280;
  /* 1010d1da sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010d1dd jmp 0x1010d280 */
  goto L_1010d280;
L_1010d1e2:;
  /* 1010d1e2 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1010d1e5 cmp ebx, 0x100 */
  { uint32_t _a=(EBX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010d1eb jge 0x1010d215 */
  if ((C.sf==C.of)) goto L_1010d215;
  /* 1010d1ed cmp dword ptr [0x10110d30], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10110d30))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010d1f4 jle 0x1010d202 */
  if ((C.zf||C.sf!=C.of)) goto L_1010d202;
  /* 1010d1f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1010d1f8 push ebx */
  push32((uint32_t)(EBX));
  /* 1010d1f9 call 0x1010940b */
  push32(0x1010d1feu); f_1010940b();
  /* 1010d1fe pop ecx */
  ECX = (pop32());
  /* 1010d1ff pop ecx */
  ECX = (pop32());
  /* 1010d200 jmp 0x1010d20d */
  goto L_1010d20d;
L_1010d202:;
  /* 1010d202 mov eax, dword ptr [0x10110b20] */
  EAX = (r32((uint32_t)(0x10110b20)));
  /* 1010d207 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 1010d20a and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
L_1010d20d:;
  /* 1010d20d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010d20f jne 0x1010d215 */
  if (!C.zf) goto L_1010d215;
L_1010d211:;
  /* 1010d211 mov eax, ebx */
  EAX = (EBX);
  /* 1010d213 jmp 0x1010d280 */
  goto L_1010d280;
L_1010d215:;
  /* 1010d215 mov edx, dword ptr [0x10110b20] */
  EDX = (r32((uint32_t)(0x10110b20)));
  /* 1010d21b mov eax, ebx */
  EAX = (EBX);
  /* 1010d21d sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1010d220 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 1010d223 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 1010d228 je 0x1010d238 */
  if (C.zf) goto L_1010d238;
  /* 1010d22a and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 1010d22e mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 1010d231 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 1010d234 push 2 */
  push32((uint32_t)(0x2u));
  /* 1010d236 jmp 0x1010d241 */
  goto L_1010d241;
L_1010d238:;
  /* 1010d238 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 1010d23c mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 1010d23f push 1 */
  push32((uint32_t)(0x1u));
L_1010d241:;
  /* 1010d241 pop eax */
  EAX = (pop32());
  /* 1010d242 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1010d245 push 1 */
  push32((uint32_t)(0x1u));
  /* 1010d247 push 0 */
  push32((uint32_t)(0x0u));
  /* 1010d249 push 3 */
  push32((uint32_t)(0x3u));
  /* 1010d24b push ecx */
  push32((uint32_t)(ECX));
  /* 1010d24c push eax */
  push32((uint32_t)(EAX));
  /* 1010d24d lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1010d250 push eax */
  push32((uint32_t)(EAX));
  /* 1010d251 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1010d256 push dword ptr [0x10116988] */
  push32((uint32_t)(r32((uint32_t)(0x10116988))));
  /* 1010d25c call 0x1010c406 */
  push32(0x1010d261u); f_1010c406();
  /* 1010d261 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010d264 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010d266 je 0x1010d211 */
  if (C.zf) goto L_1010d211;
  /* 1010d268 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010d26b jne 0x1010d273 */
  if (!C.zf) goto L_1010d273;
  /* 1010d26d movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1010d271 jmp 0x1010d280 */
  goto L_1010d280;
L_1010d273:;
  /* 1010d273 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 1010d277 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1010d27b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1010d27e or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_1010d280:;
  /* 1010d280 pop ebx */
  EBX = (pop32());
  /* 1010d281 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1010d282 ret  */
  ESPCHK(0x1010d1b7u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d283 @ 0x1010d283 (49 bytes, 20 insns) */
void f_1010d283(void) {
  FTRACE(0x1010d283u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010d283 push esi */
  push32((uint32_t)(ESI));
  /* 1010d284 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1010d288 push edi */
  push32((uint32_t)(EDI));
  /* 1010d289 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 1010d28c test byte ptr [esi + 0xc], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x40u); fl_logic(_r,8); }
  /* 1010d290 je 0x1010d298 */
  if (C.zf) goto L_1010d298;
  /* 1010d292 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 1010d296 jmp 0x1010d2af */
  goto L_1010d2af;
L_1010d298:;
  /* 1010d298 push esi */
  push32((uint32_t)(ESI));
  /* 1010d299 call 0x10108fce */
  push32(0x1010d29eu); f_10108fce();
  /* 1010d29e push esi */
  push32((uint32_t)(ESI));
  /* 1010d29f call 0x1010d2b4 */
  push32(0x1010d2a4u); f_1010d2b4();
  /* 1010d2a4 push esi */
  push32((uint32_t)(ESI));
  /* 1010d2a5 mov edi, eax */
  EDI = (EAX);
  /* 1010d2a7 call 0x10109020 */
  push32(0x1010d2acu); f_10109020();
  /* 1010d2ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1010d2af:;
  /* 1010d2af mov eax, edi */
  EAX = (EDI);
  /* 1010d2b1 pop edi */
  EDI = (pop32());
  /* 1010d2b2 pop esi */
  ESI = (pop32());
  /* 1010d2b3 ret  */
  ESPCHK(0x1010d283u, _esp0);
  ESP += 4; return;
}

/* __fclose_lk @ 0x1010d2b4 (76 bytes, 30 insns) */
void f_1010d2b4(void) {
  FTRACE(0x1010d2b4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010d2b4 push esi */
  push32((uint32_t)(ESI));
  /* 1010d2b5 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1010d2b9 push edi */
  push32((uint32_t)(EDI));
  /* 1010d2ba or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 1010d2bd test byte ptr [esi + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 1010d2c1 je 0x1010d2f7 */
  if (C.zf) goto L_1010d2f7;
  /* 1010d2c3 push esi */
  push32((uint32_t)(ESI));
  /* 1010d2c4 call 0x1010c1b4 */
  push32(0x1010d2c9u); f_1010c1b4();
  /* 1010d2c9 push esi */
  push32((uint32_t)(ESI));
  /* 1010d2ca mov edi, eax */
  EDI = (EAX);
  /* 1010d2cc call 0x1010d826 */
  push32(0x1010d2d1u); f_1010d826();
  /* 1010d2d1 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1010d2d4 call 0x1010d746 */
  push32(0x1010d2d9u); f_1010d746();
  /* 1010d2d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010d2dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010d2de jge 0x1010d2e5 */
  if ((C.sf==C.of)) goto L_1010d2e5;
  /* 1010d2e0 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 1010d2e3 jmp 0x1010d2f7 */
  goto L_1010d2f7;
L_1010d2e5:;
  /* 1010d2e5 mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 1010d2e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010d2ea je 0x1010d2f7 */
  if (C.zf) goto L_1010d2f7;
  /* 1010d2ec push eax */
  push32((uint32_t)(EAX));
  /* 1010d2ed call 0x1010a206 */
  push32(0x1010d2f2u); f_1010a206();
  /* 1010d2f2 and dword ptr [esi + 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x1c)))&(0x0u); w32((uint32_t)(ESI + 0x1c), (_r)); fl_logic(_r,32); }
  /* 1010d2f6 pop ecx */
  ECX = (pop32());
L_1010d2f7:;
  /* 1010d2f7 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 1010d2fb mov eax, edi */
  EAX = (EDI);
  /* 1010d2fd pop edi */
  EDI = (pop32());
  /* 1010d2fe pop esi */
  ESI = (pop32());
  /* 1010d2ff ret  */
  ESPCHK(0x1010d2b4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d300 @ 0x1010d300 (147 bytes, 52 insns) */
void f_1010d300(void) {
  FTRACE(0x1010d300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010d300 push ebx */
  push32((uint32_t)(EBX));
  /* 1010d301 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 1010d305 cmp ebx, dword ptr [0x10117e80] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10117e80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010d30b push esi */
  push32((uint32_t)(ESI));
  /* 1010d30c push edi */
  push32((uint32_t)(EDI));
  /* 1010d30d jae 0x1010d381 */
  if (!C.cf) goto L_1010d381;
  /* 1010d30f mov eax, ebx */
  EAX = (EBX);
  /* 1010d311 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1010d314 lea edi, [eax*4 + 0x10117d80] */
  EDI = ((uint32_t)(EAX*4 + 0x10117d80));
  /* 1010d31b mov eax, ebx */
  EAX = (EBX);
  /* 1010d31d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1010d320 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 1010d323 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1010d325 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 1010d328 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1010d32d je 0x1010d381 */
  if (C.zf) goto L_1010d381;
  /* 1010d32f push ebx */
  push32((uint32_t)(EBX));
  /* 1010d330 call 0x1010c084 */
  push32(0x1010d335u); f_1010c084();
  /* 1010d335 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1010d337 pop ecx */
  ECX = (pop32());
  /* 1010d338 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1010d33d je 0x1010d368 */
  if (C.zf) goto L_1010d368;
  /* 1010d33f push ebx */
  push32((uint32_t)(EBX));
  /* 1010d340 call 0x1010c042 */
  push32(0x1010d345u); f_1010c042();
  /* 1010d345 pop ecx */
  ECX = (pop32());
  /* 1010d346 push eax */
  push32((uint32_t)(EAX));
  /* 1010d347 call dword ptr [0x1010e0d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e0d0))), 0x1010d34du);
  /* 1010d34d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010d34f jne 0x1010d35b */
  if (!C.zf) goto L_1010d35b;
  /* 1010d351 call dword ptr [0x1010e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e03c))), 0x1010d357u);
  /* 1010d357 mov esi, eax */
  ESI = (EAX);
  /* 1010d359 jmp 0x1010d35d */
  goto L_1010d35d;
L_1010d35b:;
  /* 1010d35b xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1010d35d:;
  /* 1010d35d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1010d35f je 0x1010d376 */
  if (C.zf) goto L_1010d376;
  /* 1010d361 call 0x1010bfba */
  push32(0x1010d366u); f_1010bfba();
  /* 1010d366 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_1010d368:;
  /* 1010d368 call 0x1010bfb1 */
  push32(0x1010d36du); f_1010bfb1();
  /* 1010d36d mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1010d373 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_1010d376:;
  /* 1010d376 push ebx */
  push32((uint32_t)(EBX));
  /* 1010d377 call 0x1010c0e3 */
  push32(0x1010d37cu); f_1010c0e3();
  /* 1010d37c pop ecx */
  ECX = (pop32());
  /* 1010d37d mov eax, esi */
  EAX = (ESI);
  /* 1010d37f jmp 0x1010d38f */
  goto L_1010d38f;
L_1010d381:;
  /* 1010d381 call 0x1010bfb1 */
  push32(0x1010d386u); f_1010bfb1();
  /* 1010d386 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1010d38c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1010d38f:;
  /* 1010d38f pop edi */
  EDI = (pop32());
  /* 1010d390 pop esi */
  ESI = (pop32());
  /* 1010d391 pop ebx */
  EBX = (pop32());
  /* 1010d392 ret  */
  ESPCHK(0x1010d300u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d430 @ 0x1010d430 (62 bytes, 35 insns) */
void f_1010d430(void) {
  FTRACE(0x1010d430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010d430 push ebp */
  push32((uint32_t)(EBP));
  /* 1010d431 mov ebp, esp */
  EBP = (ESP);
  /* 1010d433 push esi */
  push32((uint32_t)(ESI));
  /* 1010d434 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1010d436 push eax */
  push32((uint32_t)(EAX));
  /* 1010d437 push eax */
  push32((uint32_t)(EAX));
  /* 1010d438 push eax */
  push32((uint32_t)(EAX));
  /* 1010d439 push eax */
  push32((uint32_t)(EAX));
  /* 1010d43a push eax */
  push32((uint32_t)(EAX));
  /* 1010d43b push eax */
  push32((uint32_t)(EAX));
  /* 1010d43c push eax */
  push32((uint32_t)(EAX));
  /* 1010d43d push eax */
  push32((uint32_t)(EAX));
  /* 1010d43e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1010d441 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1010d444:;
  /* 1010d444 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1010d446 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1010d448 je 0x1010d451 */
  if (C.zf) goto L_1010d451;
  /* 1010d44a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1010d44b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1010d44b");
  /* 1010d44f jmp 0x1010d444 */
  goto L_1010d444;
L_1010d451:;
  /* 1010d451 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1010d454 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1010d457 nop  */
  /* nop */
L_1010d458:;
  /* 1010d458 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1010d459 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1010d45b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1010d45d je 0x1010d466 */
  if (C.zf) goto L_1010d466;
  /* 1010d45f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1010d460 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1010d460");
  /* 1010d464 jae 0x1010d458 */
  if (!C.cf) goto L_1010d458;
L_1010d466:;
  /* 1010d466 mov eax, ecx */
  EAX = (ECX);
  /* 1010d468 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010d46b pop esi */
  ESI = (pop32());
  /* 1010d46c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1010d46d ret  */
  ESPCHK(0x1010d430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d470 @ 0x1010d470 (58 bytes, 32 insns) */
void f_1010d470(void) {
  FTRACE(0x1010d470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010d470 push ebp */
  push32((uint32_t)(EBP));
  /* 1010d471 mov ebp, esp */
  EBP = (ESP);
  /* 1010d473 push esi */
  push32((uint32_t)(ESI));
  /* 1010d474 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1010d476 push eax */
  push32((uint32_t)(EAX));
  /* 1010d477 push eax */
  push32((uint32_t)(EAX));
  /* 1010d478 push eax */
  push32((uint32_t)(EAX));
  /* 1010d479 push eax */
  push32((uint32_t)(EAX));
  /* 1010d47a push eax */
  push32((uint32_t)(EAX));
  /* 1010d47b push eax */
  push32((uint32_t)(EAX));
  /* 1010d47c push eax */
  push32((uint32_t)(EAX));
  /* 1010d47d push eax */
  push32((uint32_t)(EAX));
  /* 1010d47e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1010d481 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1010d484:;
  /* 1010d484 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1010d486 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1010d488 je 0x1010d491 */
  if (C.zf) goto L_1010d491;
  /* 1010d48a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1010d48b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1010d48b");
  /* 1010d48f jmp 0x1010d484 */
  goto L_1010d484;
L_1010d491:;
  /* 1010d491 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_1010d494:;
  /* 1010d494 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1010d496 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1010d498 je 0x1010d4a4 */
  if (C.zf) goto L_1010d4a4;
  /* 1010d49a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1010d49b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1010d49b");
  /* 1010d49f jae 0x1010d494 */
  if (!C.cf) goto L_1010d494;
  /* 1010d4a1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_1010d4a4:;
  /* 1010d4a4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010d4a7 pop esi */
  ESI = (pop32());
  /* 1010d4a8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1010d4a9 ret  */
  ESPCHK(0x1010d470u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d4aa @ 0x1010d4aa (544 bytes, 177 insns) */
void f_1010d4aa(void) {
  FTRACE(0x1010d4aau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010d4aa push ebp */
  push32((uint32_t)(EBP));
  /* 1010d4ab mov ebp, esp */
  EBP = (ESP);
  /* 1010d4ad sub esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010d4b0 push ebx */
  push32((uint32_t)(EBX));
  /* 1010d4b1 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 1010d4b4 push esi */
  push32((uint32_t)(ESI));
  /* 1010d4b5 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1010d4b8 mov cx, word ptr [ebx + 0xa] */
  CX = (r16((uint32_t)(EBX + 0xa)));
  /* 1010d4bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1010d4be push edi */
  push32((uint32_t)(EDI));
  /* 1010d4bf mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1010d4c2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1010d4c5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1010d4c8 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1010d4cb mov ax, word ptr [esi + 0xa] */
  AX = (r16((uint32_t)(ESI + 0xa)));
  /* 1010d4cf mov edi, ecx */
  EDI = (ECX);
  /* 1010d4d1 mov edx, 0x7fff */
  EDX = (0x7fffu);
  /* 1010d4d6 xor edi, eax */
  { uint32_t _r=(EDI)^(EAX); EDI = (_r); fl_logic(_r,32); }
  /* 1010d4d8 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1010d4da and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1010d4dc and edi, 0x8000 */
  { uint32_t _r=(EDI)&(0x8000u); EDI = (_r); fl_logic(_r,32); }
  /* 1010d4e2 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1010d4e6 lea edx, [ecx + eax] */
  EDX = ((uint32_t)(ECX + EAX*1));
  /* 1010d4e9 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1010d4ec jae 0x1010d6aa */
  if (!C.cf) goto L_1010d6aa;
  /* 1010d4f2 cmp cx, 0x7fff */
  { uint32_t _a=(CX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1010d4f7 jae 0x1010d6aa */
  if (!C.cf) goto L_1010d6aa;
  /* 1010d4fd cmp dx, 0xbffd */
  { uint32_t _a=(DX),_b=(0xbffdu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1010d502 ja 0x1010d6aa */
  if ((!C.cf&&!C.zf)) goto L_1010d6aa;
  /* 1010d508 cmp dx, 0x3fbf */
  { uint32_t _a=(DX),_b=(0x3fbfu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1010d50d ja 0x1010d513 */
  if ((!C.cf&&!C.zf)) goto L_1010d513;
  /* 1010d50f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1010d511 jmp 0x1010d54d */
  goto L_1010d54d;
L_1010d513:;
  /* 1010d513 test ax, ax */
  { uint32_t _r=(AX)&(AX); fl_logic(_r,16); }
  /* 1010d516 mov edx, 0x7fffffff */
  EDX = (0x7fffffffu);
  /* 1010d51b jne 0x1010d535 */
  if (!C.zf) goto L_1010d535;
  /* 1010d51d inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 1010d520 test dword ptr [esi + 8], edx */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 1010d523 jne 0x1010d535 */
  if (!C.zf) goto L_1010d535;
  /* 1010d525 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1010d527 cmp dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010d52a jne 0x1010d537 */
  if (!C.zf) goto L_1010d537;
  /* 1010d52c cmp dword ptr [esi], eax */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010d52e jne 0x1010d537 */
  if (!C.zf) goto L_1010d537;
  /* 1010d530 jmp 0x1010d6a4 */
  goto L_1010d6a4;
L_1010d535:;
  /* 1010d535 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1010d537:;
  /* 1010d537 cmp cx, ax */
  { uint32_t _a=(CX),_b=(AX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1010d53a jne 0x1010d55a */
  if (!C.zf) goto L_1010d55a;
  /* 1010d53c inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 1010d53f test dword ptr [ebx + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 1010d542 jne 0x1010d55a */
  if (!C.zf) goto L_1010d55a;
  /* 1010d544 cmp dword ptr [ebx + 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010d547 jne 0x1010d55a */
  if (!C.zf) goto L_1010d55a;
  /* 1010d549 cmp dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010d54b jne 0x1010d55a */
  if (!C.zf) goto L_1010d55a;
L_1010d54d:;
  /* 1010d54d mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 1010d550 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 1010d553 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1010d555 jmp 0x1010d6c5 */
  goto L_1010d6c5;
L_1010d55a:;
  /* 1010d55a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1010d55d lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1010d560 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1010d563 mov dword ptr [ebp + 0xc], 5 */
  w32((uint32_t)(EBP + 0xc), (0x5u));
L_1010d56a:;
  /* 1010d56a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1010d56d add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010d56f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010d573 jle 0x1010d5be */
  if ((C.zf||C.sf!=C.of)) goto L_1010d5be;
  /* 1010d575 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010d577 lea ecx, [ebx + 8] */
  ECX = ((uint32_t)(EBX + 0x8));
  /* 1010d57a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1010d57d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1010d580 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1010d583 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1010d586:;
  /* 1010d586 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1010d589 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1010d58c movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 1010d58f movzx ecx, word ptr [ecx] */
  ECX = ((uint32_t)(r16((uint32_t)(ECX))));
  /* 1010d592 imul eax, ecx */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1010d595 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1010d598 add ecx, -4 */
  { uint32_t _a=(ECX),_b=(0xfffffffcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010d59b push ecx */
  push32((uint32_t)(ECX));
  /* 1010d59c push eax */
  push32((uint32_t)(EAX));
  /* 1010d59d push dword ptr [ecx] */
  push32((uint32_t)(r32((uint32_t)(ECX))));
  /* 1010d59f call 0x1010c655 */
  push32(0x1010d5a4u); f_1010c655();
  /* 1010d5a4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010d5a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010d5a9 je 0x1010d5b1 */
  if (C.zf) goto L_1010d5b1;
  /* 1010d5ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1010d5ae inc word ptr [eax] */
  { uint32_t _r=(r16((uint32_t)(EAX)))+1; w16((uint32_t)(EAX), (_r)); fl_inc(_r,16); }
L_1010d5b1:;
  /* 1010d5b1 add dword ptr [ebp - 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1010d5b5 sub dword ptr [ebp - 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2u),_r=_a-_b; w32((uint32_t)(EBP + -0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1010d5b9 dec dword ptr [ebp - 0x18] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))-1; w32((uint32_t)(EBP + -0x18), (_r)); fl_dec(_r,32); }
  /* 1010d5bc jne 0x1010d586 */
  if (!C.zf) goto L_1010d586;
L_1010d5be:;
  /* 1010d5be add dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1010d5c2 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 1010d5c5 dec dword ptr [ebp + 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))-1; w32((uint32_t)(EBP + 0xc), (_r)); fl_dec(_r,32); }
  /* 1010d5c8 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010d5cc jg 0x1010d56a */
  if ((!C.zf&&C.sf==C.of)) goto L_1010d56a;
  /* 1010d5ce add dword ptr [ebp + 8], 0xc002 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xc002u),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1010d5d5 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1010d5da jle 0x1010d601 */
  if ((C.zf||C.sf!=C.of)) goto L_1010d601;
L_1010d5dc:;
  /* 1010d5dc test byte ptr [ebp - 0x19], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x19)))&(0x80u); fl_logic(_r,8); }
  /* 1010d5e0 jne 0x1010d5fa */
  if (!C.zf) goto L_1010d5fa;
  /* 1010d5e2 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 1010d5e5 push eax */
  push32((uint32_t)(EAX));
  /* 1010d5e6 call 0x1010c6d4 */
  push32(0x1010d5ebu); f_1010c6d4();
  /* 1010d5eb add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1010d5f2 pop ecx */
  ECX = (pop32());
  /* 1010d5f3 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1010d5f8 jg 0x1010d5dc */
  if ((!C.zf&&C.sf==C.of)) goto L_1010d5dc;
L_1010d5fa:;
  /* 1010d5fa cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1010d5ff jg 0x1010d63a */
  if ((!C.zf&&C.sf==C.of)) goto L_1010d63a;
L_1010d601:;
  /* 1010d601 add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1010d608 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1010d60d jge 0x1010d63a */
  if ((C.sf==C.of)) goto L_1010d63a;
  /* 1010d60f movsx eax, word ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + 0x8))));
  /* 1010d613 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1010d615 add dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1010d618 mov ebx, eax */
  EBX = (EAX);
L_1010d61a:;
  /* 1010d61a test byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))&(0x1u); fl_logic(_r,8); }
  /* 1010d61e je 0x1010d623 */
  if (C.zf) goto L_1010d623;
  /* 1010d620 inc dword ptr [ebp - 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x14)))+1; w32((uint32_t)(EBP + -0x14), (_r)); fl_inc(_r,32); }
L_1010d623:;
  /* 1010d623 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 1010d626 push eax */
  push32((uint32_t)(EAX));
  /* 1010d627 call 0x1010c702 */
  push32(0x1010d62cu); f_1010c702();
  /* 1010d62c dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1010d62d pop ecx */
  ECX = (pop32());
  /* 1010d62e jne 0x1010d61a */
  if (!C.zf) goto L_1010d61a;
  /* 1010d630 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010d634 je 0x1010d63a */
  if (C.zf) goto L_1010d63a;
  /* 1010d636 or byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))|(0x1u); w8((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,8); }
L_1010d63a:;
  /* 1010d63a cmp word ptr [ebp - 0x24], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x24))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1010d640 ja 0x1010d651 */
  if ((!C.cf&&!C.zf)) goto L_1010d651;
  /* 1010d642 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1010d645 and eax, 0x1ffff */
  { uint32_t _r=(EAX)&(0x1ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1010d64a cmp eax, 0x18000 */
  { uint32_t _a=(EAX),_b=(0x18000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010d64f jne 0x1010d686 */
  if (!C.zf) goto L_1010d686;
L_1010d651:;
  /* 1010d651 cmp dword ptr [ebp - 0x22], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010d655 jne 0x1010d683 */
  if (!C.zf) goto L_1010d683;
  /* 1010d657 and dword ptr [ebp - 0x22], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))&(0x0u); w32((uint32_t)(EBP + -0x22), (_r)); fl_logic(_r,32); }
  /* 1010d65b cmp dword ptr [ebp - 0x1e], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1e))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010d65f jne 0x1010d67e */
  if (!C.zf) goto L_1010d67e;
  /* 1010d661 and dword ptr [ebp - 0x1e], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))&(0x0u); w32((uint32_t)(EBP + -0x1e), (_r)); fl_logic(_r,32); }
  /* 1010d665 cmp word ptr [ebp - 0x1a], 0xffff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x1a))),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1010d66b jne 0x1010d678 */
  if (!C.zf) goto L_1010d678;
  /* 1010d66d inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 1010d670 mov word ptr [ebp - 0x1a], 0x8000 */
  w16((uint32_t)(EBP + -0x1a), (0x8000u));
  /* 1010d676 jmp 0x1010d686 */
  goto L_1010d686;
L_1010d678:;
  /* 1010d678 inc word ptr [ebp - 0x1a] */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x1a)))+1; w16((uint32_t)(EBP + -0x1a), (_r)); fl_inc(_r,16); }
  /* 1010d67c jmp 0x1010d686 */
  goto L_1010d686;
L_1010d67e:;
  /* 1010d67e inc dword ptr [ebp - 0x1e] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))+1; w32((uint32_t)(EBP + -0x1e), (_r)); fl_inc(_r,32); }
  /* 1010d681 jmp 0x1010d686 */
  goto L_1010d686;
L_1010d683:;
  /* 1010d683 inc dword ptr [ebp - 0x22] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))+1; w32((uint32_t)(EBP + -0x22), (_r)); fl_inc(_r,32); }
L_1010d686:;
  /* 1010d686 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1010d689 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1010d68d jae 0x1010d6aa */
  if (!C.cf) goto L_1010d6aa;
  /* 1010d68f mov cx, word ptr [ebp - 0x22] */
  CX = (r16((uint32_t)(EBP + -0x22)));
  /* 1010d693 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 1010d695 mov word ptr [esi], cx */
  w16((uint32_t)(ESI), (CX));
  /* 1010d698 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1010d69b mov dword ptr [esi + 2], ecx */
  w32((uint32_t)(ESI + 0x2), (ECX));
  /* 1010d69e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1010d6a1 mov dword ptr [esi + 6], ecx */
  w32((uint32_t)(ESI + 0x6), (ECX));
L_1010d6a4:;
  /* 1010d6a4 mov word ptr [esi + 0xa], ax */
  w16((uint32_t)(ESI + 0xa), (AX));
  /* 1010d6a8 jmp 0x1010d6c5 */
  goto L_1010d6c5;
L_1010d6aa:;
  /* 1010d6aa neg di */
  { uint32_t _a=(DI),_r=0u-_a; DI = (_r); fl_sub(0,_a,_r,16); }
  /* 1010d6ad sbb edi, edi */
  { uint32_t _a=(EDI),_b=(EDI),_r=_a-_b-C.cf; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010d6af and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 1010d6b3 and edi, 0x80000000 */
  { uint32_t _r=(EDI)&(0x80000000u); EDI = (_r); fl_logic(_r,32); }
  /* 1010d6b9 add edi, 0x7fff8000 */
  { uint32_t _a=(EDI),_b=(0x7fff8000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1010d6bf and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 1010d6c2 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
L_1010d6c5:;
  /* 1010d6c5 pop edi */
  EDI = (pop32());
  /* 1010d6c6 pop esi */
  ESI = (pop32());
  /* 1010d6c7 pop ebx */
  EBX = (pop32());
  /* 1010d6c8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1010d6c9 ret  */
  ESPCHK(0x1010d4aau, _esp0);
  ESP += 4; return;
}

/* FUN_1000d6ca @ 0x1010d6ca (124 bytes, 52 insns) */
void f_1010d6ca(void) {
  FTRACE(0x1010d6cau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010d6ca push ebp */
  push32((uint32_t)(EBP));
  /* 1010d6cb mov ebp, esp */
  EBP = (ESP);
  /* 1010d6cd sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010d6d0 push ebx */
  push32((uint32_t)(EBX));
  /* 1010d6d1 mov ebx, 0x10113370 */
  EBX = (0x10113370u);
  /* 1010d6d6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1010d6d8 sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010d6db cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010d6de je 0x1010d743 */
  if (C.zf) goto L_1010d743;
  /* 1010d6e0 jge 0x1010d6f2 */
  if ((C.sf==C.of)) goto L_1010d6f2;
  /* 1010d6e2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1010d6e5 mov ebx, 0x101134d0 */
  EBX = (0x101134d0u);
  /* 1010d6ea neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1010d6ec mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1010d6ef sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
L_1010d6f2:;
  /* 1010d6f2 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010d6f5 jne 0x1010d6fd */
  if (!C.zf) goto L_1010d6fd;
  /* 1010d6f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1010d6fa mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
L_1010d6fd:;
  /* 1010d6fd cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010d700 je 0x1010d743 */
  if (C.zf) goto L_1010d743;
  /* 1010d702 push esi */
  push32((uint32_t)(ESI));
  /* 1010d703 push edi */
  push32((uint32_t)(EDI));
L_1010d704:;
  /* 1010d704 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1010d707 add ebx, 0x54 */
  { uint32_t _a=(EBX),_b=(0x54u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1010d70a sar dword ptr [ebp + 0xc], 3 */
  w32((uint32_t)(EBP + 0xc), (sh_sar((uint32_t)(r32((uint32_t)(EBP + 0xc))), (0x3u)&0x1f, 32)));
  /* 1010d70e and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 1010d711 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010d713 je 0x1010d73c */
  if (C.zf) goto L_1010d73c;
  /* 1010d715 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 1010d718 cmp word ptr [ebx + eax*4], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBX + EAX*4))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1010d71e lea esi, [ebx + eax*4] */
  ESI = ((uint32_t)(EBX + EAX*4));
  /* 1010d721 jb 0x1010d72f */
  if (C.cf) goto L_1010d72f;
  /* 1010d723 lea edi, [ebp - 0xc] */
  EDI = ((uint32_t)(EBP + -0xc));
  /* 1010d726 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1010d727 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1010d728 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1010d729 dec dword ptr [ebp - 0xa] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xa)))-1; w32((uint32_t)(EBP + -0xa), (_r)); fl_dec(_r,32); }
  /* 1010d72c lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
L_1010d72f:;
  /* 1010d72f push esi */
  push32((uint32_t)(ESI));
  /* 1010d730 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1010d733 call 0x1010d4aa */
  push32(0x1010d738u); f_1010d4aa();
  /* 1010d738 pop ecx */
  ECX = (pop32());
  /* 1010d739 pop ecx */
  ECX = (pop32());
  /* 1010d73a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_1010d73c:;
  /* 1010d73c cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010d73f jne 0x1010d704 */
  if (!C.zf) goto L_1010d704;
  /* 1010d741 pop edi */
  EDI = (pop32());
  /* 1010d742 pop esi */
  ESI = (pop32());
L_1010d743:;
  /* 1010d743 pop ebx */
  EBX = (pop32());
  /* 1010d744 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1010d745 ret  */
  ESPCHK(0x1010d6cau, _esp0);
  ESP += 4; return;
}

/* FUN_1000d746 @ 0x1010d746 (93 bytes, 32 insns) */
void f_1010d746(void) {
  FTRACE(0x1010d746u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010d746 push esi */
  push32((uint32_t)(ESI));
  /* 1010d747 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1010d74b cmp esi, dword ptr [0x10117e80] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10117e80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010d751 jae 0x1010d78b */
  if (!C.cf) goto L_1010d78b;
  /* 1010d753 mov ecx, esi */
  ECX = (ESI);
  /* 1010d755 mov eax, esi */
  EAX = (ESI);
  /* 1010d757 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1010d75a and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1010d75d mov ecx, dword ptr [ecx*4 + 0x10117d80] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10117d80)));
  /* 1010d764 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1010d767 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1010d76c je 0x1010d78b */
  if (C.zf) goto L_1010d78b;
  /* 1010d76e push edi */
  push32((uint32_t)(EDI));
  /* 1010d76f push esi */
  push32((uint32_t)(ESI));
  /* 1010d770 call 0x1010c084 */
  push32(0x1010d775u); f_1010c084();
  /* 1010d775 push esi */
  push32((uint32_t)(ESI));
  /* 1010d776 call 0x1010d7a3 */
  push32(0x1010d77bu); f_1010d7a3();
  /* 1010d77b push esi */
  push32((uint32_t)(ESI));
  /* 1010d77c mov edi, eax */
  EDI = (EAX);
  /* 1010d77e call 0x1010c0e3 */
  push32(0x1010d783u); f_1010c0e3();
  /* 1010d783 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010d786 mov eax, edi */
  EAX = (EDI);
  /* 1010d788 pop edi */
  EDI = (pop32());
  /* 1010d789 pop esi */
  ESI = (pop32());
  /* 1010d78a ret  */
  ESPCHK(0x1010d746u, _esp0);
  ESP += 4; return;
L_1010d78b:;
  /* 1010d78b call 0x1010bfb1 */
  push32(0x1010d790u); f_1010bfb1();
  /* 1010d790 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1010d796 call 0x1010bfba */
  push32(0x1010d79bu); f_1010bfba();
  /* 1010d79b and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1010d79e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1010d7a1 pop esi */
  ESI = (pop32());
  /* 1010d7a2 ret  */
  ESPCHK(0x1010d746u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d7a3 @ 0x1010d7a3 (131 bytes, 52 insns) */
void f_1010d7a3(void) {
  FTRACE(0x1010d7a3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010d7a3 push esi */
  push32((uint32_t)(ESI));
  /* 1010d7a4 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1010d7a8 push edi */
  push32((uint32_t)(EDI));
  /* 1010d7a9 push esi */
  push32((uint32_t)(ESI));
  /* 1010d7aa call 0x1010c042 */
  push32(0x1010d7afu); f_1010c042();
  /* 1010d7af cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010d7b2 pop ecx */
  ECX = (pop32());
  /* 1010d7b3 je 0x1010d7f1 */
  if (C.zf) goto L_1010d7f1;
  /* 1010d7b5 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010d7b8 je 0x1010d7bf */
  if (C.zf) goto L_1010d7bf;
  /* 1010d7ba cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010d7bd jne 0x1010d7d5 */
  if (!C.zf) goto L_1010d7d5;
L_1010d7bf:;
  /* 1010d7bf push 2 */
  push32((uint32_t)(0x2u));
  /* 1010d7c1 call 0x1010c042 */
  push32(0x1010d7c6u); f_1010c042();
  /* 1010d7c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1010d7c8 mov edi, eax */
  EDI = (EAX);
  /* 1010d7ca call 0x1010c042 */
  push32(0x1010d7cfu); f_1010c042();
  /* 1010d7cf pop ecx */
  ECX = (pop32());
  /* 1010d7d0 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010d7d2 pop ecx */
  ECX = (pop32());
  /* 1010d7d3 je 0x1010d7f1 */
  if (C.zf) goto L_1010d7f1;
L_1010d7d5:;
  /* 1010d7d5 push esi */
  push32((uint32_t)(ESI));
  /* 1010d7d6 call 0x1010c042 */
  push32(0x1010d7dbu); f_1010c042();
  /* 1010d7db pop ecx */
  ECX = (pop32());
  /* 1010d7dc push eax */
  push32((uint32_t)(EAX));
  /* 1010d7dd call dword ptr [0x1010e0d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e0d4))), 0x1010d7e3u);
  /* 1010d7e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1010d7e5 jne 0x1010d7f1 */
  if (!C.zf) goto L_1010d7f1;
  /* 1010d7e7 call dword ptr [0x1010e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1010e03c))), 0x1010d7edu);
  /* 1010d7ed mov edi, eax */
  EDI = (EAX);
  /* 1010d7ef jmp 0x1010d7f3 */
  goto L_1010d7f3;
L_1010d7f1:;
  /* 1010d7f1 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_1010d7f3:;
  /* 1010d7f3 push esi */
  push32((uint32_t)(ESI));
  /* 1010d7f4 call 0x1010bfc3 */
  push32(0x1010d7f9u); f_1010bfc3();
  /* 1010d7f9 mov eax, esi */
  EAX = (ESI);
  /* 1010d7fb and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 1010d7fe sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1010d801 pop ecx */
  ECX = (pop32());
  /* 1010d802 mov eax, dword ptr [eax*4 + 0x10117d80] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10117d80)));
  /* 1010d809 lea ecx, [esi + esi*8] */
  ECX = ((uint32_t)(ESI + ESI*8));
  /* 1010d80c and byte ptr [eax + ecx*4 + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + ECX*4 + 0x4)))&(0x0u); w8((uint32_t)(EAX + ECX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 1010d811 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1010d813 je 0x1010d821 */
  if (C.zf) goto L_1010d821;
  /* 1010d815 push edi */
  push32((uint32_t)(EDI));
  /* 1010d816 call 0x1010bf3e */
  push32(0x1010d81bu); f_1010bf3e();
  /* 1010d81b pop ecx */
  ECX = (pop32());
  /* 1010d81c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1010d81f jmp 0x1010d823 */
  goto L_1010d823;
L_1010d821:;
  /* 1010d821 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1010d823:;
  /* 1010d823 pop edi */
  EDI = (pop32());
  /* 1010d824 pop esi */
  ESI = (pop32());
  /* 1010d825 ret  */
  ESPCHK(0x1010d7a3u, _esp0);
  ESP += 4; return;
}

/* __freebuf @ 0x1010d826 (43 bytes, 17 insns) */
void f_1010d826(void) {
  FTRACE(0x1010d826u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010d826 push esi */
  push32((uint32_t)(ESI));
  /* 1010d827 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1010d82b mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1010d82e test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 1010d830 je 0x1010d84f */
  if (C.zf) goto L_1010d84f;
  /* 1010d832 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 1010d834 je 0x1010d84f */
  if (C.zf) goto L_1010d84f;
  /* 1010d836 push dword ptr [esi + 8] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x8))));
  /* 1010d839 call 0x1010a206 */
  push32(0x1010d83eu); f_1010a206();
  /* 1010d83e and word ptr [esi + 0xc], 0xfbf7 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0xfbf7u); w16((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,16); }
  /* 1010d844 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1010d846 pop ecx */
  ECX = (pop32());
  /* 1010d847 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1010d849 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 1010d84c mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
L_1010d84f:;
  /* 1010d84f pop esi */
  ESI = (pop32());
  /* 1010d850 ret  */
  ESPCHK(0x1010d826u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d860 @ 0x1010d860 (208 bytes, 85 insns) */
void f_1010d860(void) {
  FTRACE(0x1010d860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010d860 push ebp */
  push32((uint32_t)(EBP));
  /* 1010d861 mov ebp, esp */
  EBP = (ESP);
  /* 1010d863 push edi */
  push32((uint32_t)(EDI));
  /* 1010d864 push esi */
  push32((uint32_t)(ESI));
  /* 1010d865 push ebx */
  push32((uint32_t)(EBX));
  /* 1010d866 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1010d869 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1010d86c lea eax, [0x10116980] */
  EAX = ((uint32_t)(0x10116980));
  /* 1010d872 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010d876 jne 0x1010d8b3 */
  if (!C.zf) goto L_1010d8b3;
  /* 1010d878 mov al, 0xff */
  AL = (0xffu);
  /* 1010d87a mov edi, edi */
  EDI = (EDI);
L_1010d87c:;
  /* 1010d87c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1010d87e je 0x1010d8ae */
  if (C.zf) goto L_1010d8ae;
  /* 1010d880 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1010d882 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1010d883 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 1010d885 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1010d886 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010d888 je 0x1010d87c */
  if (C.zf) goto L_1010d87c;
  /* 1010d88a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1010d88c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010d88e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1010d890 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1010d893 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1010d895 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1010d897 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 1010d899 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1010d89b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010d89d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1010d89f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1010d8a2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1010d8a4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1010d8a6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010d8a8 je 0x1010d87c */
  if (C.zf) goto L_1010d87c;
  /* 1010d8aa sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1010d8ac sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_1010d8ae:;
  /* 1010d8ae movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 1010d8b1 jmp 0x1010d92b */
  goto L_1010d92b;
L_1010d8b3:;
  /* 1010d8b3 lock inc dword ptr [0x10116b04] */
  x86_unimpl("lock inc @ 0x1010d8b3");
  /* 1010d8ba cmp dword ptr [0x10116b00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10116b00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010d8c1 jg 0x1010d8c7 */
  if ((!C.zf&&C.sf==C.of)) goto L_1010d8c7;
  /* 1010d8c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1010d8c5 jmp 0x1010d8dc */
  goto L_1010d8dc;
L_1010d8c7:;
  /* 1010d8c7 lock dec dword ptr [0x10116b04] */
  x86_unimpl("lock dec @ 0x1010d8c7");
  /* 1010d8ce push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1010d8d0 call 0x1010a053 */
  push32(0x1010d8d5u); f_1010a053();
  /* 1010d8d5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_1010d8dc:;
  /* 1010d8dc mov eax, 0xff */
  EAX = (0xffu);
  /* 1010d8e1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1010d8e3 nop  */
  /* nop */
L_1010d8e4:;
  /* 1010d8e4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1010d8e6 je 0x1010d90f */
  if (C.zf) goto L_1010d90f;
  /* 1010d8e8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1010d8ea inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1010d8eb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1010d8ed inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1010d8ee cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010d8f0 je 0x1010d8e4 */
  if (C.zf) goto L_1010d8e4;
  /* 1010d8f2 push eax */
  push32((uint32_t)(EAX));
  /* 1010d8f3 push ebx */
  push32((uint32_t)(EBX));
  /* 1010d8f4 call 0x101094ef */
  push32(0x1010d8f9u); f_101094ef();
  /* 1010d8f9 mov ebx, eax */
  EBX = (EAX);
  /* 1010d8fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010d8fe call 0x101094ef */
  push32(0x1010d903u); f_101094ef();
  /* 1010d903 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010d906 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010d908 je 0x1010d8e4 */
  if (C.zf) goto L_1010d8e4;
  /* 1010d90a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1010d90c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1010d90f:;
  /* 1010d90f mov ebx, eax */
  EBX = (EAX);
  /* 1010d911 pop eax */
  EAX = (pop32());
  /* 1010d912 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1010d914 jne 0x1010d91f */
  if (!C.zf) goto L_1010d91f;
  /* 1010d916 lock dec dword ptr [0x10116b04] */
  x86_unimpl("lock dec @ 0x1010d916");
  /* 1010d91d jmp 0x1010d929 */
  goto L_1010d929;
L_1010d91f:;
  /* 1010d91f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1010d921 call 0x1010a0b4 */
  push32(0x1010d926u); f_1010a0b4();
  /* 1010d926 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1010d929:;
  /* 1010d929 mov eax, ebx */
  EAX = (EBX);
L_1010d92b:;
  /* 1010d92b pop ebx */
  EBX = (pop32());
  /* 1010d92c pop esi */
  ESI = (pop32());
  /* 1010d92d pop edi */
  EDI = (pop32());
  /* 1010d92e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1010d92f ret  */
  ESPCHK(0x1010d860u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d930 @ 0x1010d930 (257 bytes, 103 insns) */
void f_1010d930(void) {
  FTRACE(0x1010d930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010d930 push ebp */
  push32((uint32_t)(EBP));
  /* 1010d931 mov ebp, esp */
  EBP = (ESP);
  /* 1010d933 push edi */
  push32((uint32_t)(EDI));
  /* 1010d934 push esi */
  push32((uint32_t)(ESI));
  /* 1010d935 push ebx */
  push32((uint32_t)(EBX));
  /* 1010d936 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1010d939 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1010d93b je 0x1010da2a */
  if (C.zf) goto L_1010da2a;
  /* 1010d941 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1010d944 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 1010d947 lea eax, [0x10116980] */
  EAX = ((uint32_t)(0x10116980));
  /* 1010d94d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010d951 jne 0x1010d9a1 */
  if (!C.zf) goto L_1010d9a1;
  /* 1010d953 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 1010d955 mov bl, 0x5a */
  BL = (0x5au);
  /* 1010d957 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 1010d959 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1010d95c:;
  /* 1010d95c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 1010d95e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1010d960 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 1010d962 je 0x1010d985 */
  if (C.zf) goto L_1010d985;
  /* 1010d964 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1010d966 je 0x1010d985 */
  if (C.zf) goto L_1010d985;
  /* 1010d968 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1010d969 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1010d96a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010d96c jb 0x1010d974 */
  if (C.cf) goto L_1010d974;
  /* 1010d96e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010d970 ja 0x1010d974 */
  if ((!C.cf&&!C.zf)) goto L_1010d974;
  /* 1010d972 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_1010d974:;
  /* 1010d974 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010d976 jb 0x1010d97e */
  if (C.cf) goto L_1010d97e;
  /* 1010d978 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010d97a ja 0x1010d97e */
  if ((!C.cf&&!C.zf)) goto L_1010d97e;
  /* 1010d97c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_1010d97e:;
  /* 1010d97e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010d980 jne 0x1010d98f */
  if (!C.zf) goto L_1010d98f;
  /* 1010d982 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1010d983 jne 0x1010d95c */
  if (!C.zf) goto L_1010d95c;
L_1010d985:;
  /* 1010d985 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1010d987 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1010d989 je 0x1010da2a */
  if (C.zf) goto L_1010da2a;
L_1010d98f:;
  /* 1010d98f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 1010d994 jb 0x1010da2a */
  if (C.cf) goto L_1010da2a;
  /* 1010d99a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1010d99c jmp 0x1010da2a */
  goto L_1010da2a;
L_1010d9a1:;
  /* 1010d9a1 lock inc dword ptr [0x10116b04] */
  x86_unimpl("lock inc @ 0x1010d9a1");
  /* 1010d9a8 cmp dword ptr [0x10116b00], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10116b00))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010d9af jg 0x1010d9b5 */
  if ((!C.zf&&C.sf==C.of)) goto L_1010d9b5;
  /* 1010d9b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1010d9b3 jmp 0x1010d9ce */
  goto L_1010d9ce;
L_1010d9b5:;
  /* 1010d9b5 lock dec dword ptr [0x10116b04] */
  x86_unimpl("lock dec @ 0x1010d9b5");
  /* 1010d9bc mov ebx, ecx */
  EBX = (ECX);
  /* 1010d9be push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1010d9c0 call 0x1010a053 */
  push32(0x1010d9c5u); f_1010a053();
  /* 1010d9c5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 1010d9cc mov ecx, ebx */
  ECX = (EBX);
L_1010d9ce:;
  /* 1010d9ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1010d9d0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1010d9d2 mov edi, edi */
  EDI = (EDI);
L_1010d9d4:;
  /* 1010d9d4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1010d9d6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1010d9d8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1010d9da je 0x1010d9ff */
  if (C.zf) goto L_1010d9ff;
  /* 1010d9dc or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1010d9de je 0x1010d9ff */
  if (C.zf) goto L_1010d9ff;
  /* 1010d9e0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1010d9e1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1010d9e2 push ecx */
  push32((uint32_t)(ECX));
  /* 1010d9e3 push eax */
  push32((uint32_t)(EAX));
  /* 1010d9e4 push ebx */
  push32((uint32_t)(EBX));
  /* 1010d9e5 call 0x101094ef */
  push32(0x1010d9eau); f_101094ef();
  /* 1010d9ea mov ebx, eax */
  EBX = (EAX);
  /* 1010d9ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010d9ef call 0x101094ef */
  push32(0x1010d9f4u); f_101094ef();
  /* 1010d9f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010d9f7 pop ecx */
  ECX = (pop32());
  /* 1010d9f8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010d9fa jne 0x1010da05 */
  if (!C.zf) goto L_1010da05;
  /* 1010d9fc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1010d9fd jne 0x1010d9d4 */
  if (!C.zf) goto L_1010d9d4;
L_1010d9ff:;
  /* 1010d9ff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1010da01 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1010da03 je 0x1010da0e */
  if (C.zf) goto L_1010da0e;
L_1010da05:;
  /* 1010da05 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 1010da0a jb 0x1010da0e */
  if (C.cf) goto L_1010da0e;
  /* 1010da0c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_1010da0e:;
  /* 1010da0e pop eax */
  EAX = (pop32());
  /* 1010da0f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1010da11 jne 0x1010da1c */
  if (!C.zf) goto L_1010da1c;
  /* 1010da13 lock dec dword ptr [0x10116b04] */
  x86_unimpl("lock dec @ 0x1010da13");
  /* 1010da1a jmp 0x1010da2a */
  goto L_1010da2a;
L_1010da1c:;
  /* 1010da1c mov ebx, ecx */
  EBX = (ECX);
  /* 1010da1e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1010da20 call 0x1010a0b4 */
  push32(0x1010da25u); f_1010a0b4();
  /* 1010da25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1010da28 mov ecx, ebx */
  ECX = (EBX);
L_1010da2a:;
  /* 1010da2a mov eax, ecx */
  EAX = (ECX);
  /* 1010da2c pop ebx */
  EBX = (pop32());
  /* 1010da2d pop esi */
  ESI = (pop32());
  /* 1010da2e pop edi */
  EDI = (pop32());
  /* 1010da2f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1010da30 ret  */
  ESPCHK(0x1010d930u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x1010da74 (6 bytes, 1 insns) */
void f_1010da74(void) {
  FTRACE(0x1010da74u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1010da74 jmp dword ptr [0x1010e0cc] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1010e0cc)))); return;
}

