#include "recomp.h"

/* FUN_100092a5 @ 0x100892a5 (53 bytes, 25 insns) */
void f_100892a5(void) {
  FTRACE(0x100892a5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100892a5 push ebp */
  push32((uint32_t)(EBP));
  /* 100892a6 mov ebp, esp */
  EBP = (ESP);
  /* 100892a8 push ecx */
  push32((uint32_t)(ECX));
  /* 100892a9 push esi */
  push32((uint32_t)(ESI));
  /* 100892aa wait  */
  /* wait (no observable integer/reg state) */
  /* 100892ab fnstcw word ptr [ebp - 4] */
  w16((uint32_t)(EBP + -0x4), C.fcw);
  /* 100892ae push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 100892b1 call 0x100892f0 */
  push32(0x100892b6u); f_100892f0();
  /* 100892b6 mov esi, eax */
  ESI = (EAX);
  /* 100892b8 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 100892bb not eax */
  EAX = (~(EAX));
  /* 100892bd and esi, eax */
  { uint32_t _r=(ESI)&(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 100892bf mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100892c2 and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 100892c5 or esi, eax */
  { uint32_t _r=(ESI)|(EAX); ESI = (_r); fl_logic(_r,32); }
  /* 100892c7 push esi */
  push32((uint32_t)(ESI));
  /* 100892c8 call 0x10089382 */
  push32(0x100892cdu); f_10089382();
  /* 100892cd pop ecx */
  ECX = (pop32());
  /* 100892ce mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 100892d1 pop ecx */
  ECX = (pop32());
  /* 100892d2 fldcw word ptr [ebp + 0xc] */
  C.fcw = r16((uint32_t)(EBP + 0xc));
  /* 100892d5 mov eax, esi */
  EAX = (ESI);
  /* 100892d7 pop esi */
  ESI = (pop32());
  /* 100892d8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100892d9 ret  */
  ESPCHK(0x100892a5u, _esp0);
  ESP += 4; return;
}

/* FUN_100092da @ 0x100892da (22 bytes, 8 insns) */
void f_100892da(void) {
  FTRACE(0x100892dau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100892da mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100892de and eax, 0xfff7ffff */
  { uint32_t _r=(EAX)&(0xfff7ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 100892e3 push eax */
  push32((uint32_t)(EAX));
  /* 100892e4 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 100892e8 call 0x100892a5 */
  push32(0x100892edu); f_100892a5();
  /* 100892ed pop ecx */
  ECX = (pop32());
  /* 100892ee pop ecx */
  ECX = (pop32());
  /* 100892ef ret  */
  ESPCHK(0x100892dau, _esp0);
  ESP += 4; return;
}

/* FUN_100092f0 @ 0x100892f0 (146 bytes, 58 insns) */
void f_100892f0(void) {
  FTRACE(0x100892f0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100892f0 push ebx */
  push32((uint32_t)(EBX));
  /* 100892f1 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 100892f5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100892f7 push ebp */
  push32((uint32_t)(EBP));
  /* 100892f8 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 100892fb push edi */
  push32((uint32_t)(EDI));
  /* 100892fc je 0x10089301 */
  if (C.zf) goto L_10089301;
  /* 100892fe push 0x10 */
  push32((uint32_t)(0x10u));
  /* 10089300 pop eax */
  EAX = (pop32());
L_10089301:;
  /* 10089301 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 10089304 je 0x10089308 */
  if (C.zf) goto L_10089308;
  /* 10089306 or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_10089308:;
  /* 10089308 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 1008930b je 0x1008930f */
  if (C.zf) goto L_1008930f;
  /* 1008930d or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_1008930f:;
  /* 1008930f test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 10089312 je 0x10089316 */
  if (C.zf) goto L_10089316;
  /* 10089314 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_10089316:;
  /* 10089316 test bl, 0x20 */
  { uint32_t _r=(BL)&(0x20u); fl_logic(_r,8); }
  /* 10089319 je 0x1008931d */
  if (C.zf) goto L_1008931d;
  /* 1008931b or al, 1 */
  { uint32_t _r=(AL)|(0x1u); AL = (_r); fl_logic(_r,8); }
L_1008931d:;
  /* 1008931d test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 10089320 je 0x10089327 */
  if (C.zf) goto L_10089327;
  /* 10089322 or eax, 0x80000 */
  { uint32_t _r=(EAX)|(0x80000u); EAX = (_r); fl_logic(_r,32); }
L_10089327:;
  /* 10089327 movzx ecx, bx */
  ECX = ((uint32_t)(BX));
  /* 1008932a push esi */
  push32((uint32_t)(ESI));
  /* 1008932b mov edx, ecx */
  EDX = (ECX);
  /* 1008932d mov esi, 0xc00 */
  ESI = (0xc00u);
  /* 10089332 mov edi, 0x300 */
  EDI = (0x300u);
  /* 10089337 and edx, esi */
  { uint32_t _r=(EDX)&(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 10089339 mov ebp, 0x200 */
  EBP = (0x200u);
  /* 1008933e je 0x1008935f */
  if (C.zf) goto L_1008935f;
  /* 10089340 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10089346 je 0x1008935c */
  if (C.zf) goto L_1008935c;
  /* 10089348 cmp edx, 0x800 */
  { uint32_t _a=(EDX),_b=(0x800u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008934e je 0x10089358 */
  if (C.zf) goto L_10089358;
  /* 10089350 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10089352 jne 0x1008935f */
  if (!C.zf) goto L_1008935f;
  /* 10089354 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 10089356 jmp 0x1008935f */
  goto L_1008935f;
L_10089358:;
  /* 10089358 or eax, ebp */
  { uint32_t _r=(EAX)|(EBP); EAX = (_r); fl_logic(_r,32); }
  /* 1008935a jmp 0x1008935f */
  goto L_1008935f;
L_1008935c:;
  /* 1008935c or ah, 1 */
  { uint32_t _r=(AH)|(0x1u); AH = (_r); fl_logic(_r,8); }
L_1008935f:;
  /* 1008935f and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10089361 pop esi */
  ESI = (pop32());
  /* 10089362 je 0x1008936f */
  if (C.zf) goto L_1008936f;
  /* 10089364 cmp ecx, ebp */
  { uint32_t _a=(ECX),_b=(EBP),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10089366 jne 0x10089374 */
  if (!C.zf) goto L_10089374;
  /* 10089368 or eax, 0x10000 */
  { uint32_t _r=(EAX)|(0x10000u); EAX = (_r); fl_logic(_r,32); }
  /* 1008936d jmp 0x10089374 */
  goto L_10089374;
L_1008936f:;
  /* 1008936f or eax, 0x20000 */
  { uint32_t _r=(EAX)|(0x20000u); EAX = (_r); fl_logic(_r,32); }
L_10089374:;
  /* 10089374 pop edi */
  EDI = (pop32());
  /* 10089375 pop ebp */
  EBP = (pop32());
  /* 10089376 test bh, 0x10 */
  { uint32_t _r=(C.b.b.h)&(0x10u); fl_logic(_r,8); }
  /* 10089379 pop ebx */
  EBX = (pop32());
  /* 1008937a je 0x10089381 */
  if (C.zf) goto L_10089381;
  /* 1008937c or eax, 0x40000 */
  { uint32_t _r=(EAX)|(0x40000u); EAX = (_r); fl_logic(_r,32); }
L_10089381:;
  /* 10089381 ret  */
  ESPCHK(0x100892f0u, _esp0);
  ESP += 4; return;
}

/* FUN_10009382 @ 0x10089382 (137 bytes, 53 insns) */
void f_10089382(void) {
  FTRACE(0x10089382u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10089382 push ebx */
  push32((uint32_t)(EBX));
  /* 10089383 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 10089387 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10089389 push esi */
  push32((uint32_t)(ESI));
  /* 1008938a test bl, 0x10 */
  { uint32_t _r=(BL)&(0x10u); fl_logic(_r,8); }
  /* 1008938d je 0x10089392 */
  if (C.zf) goto L_10089392;
  /* 1008938f push 1 */
  push32((uint32_t)(0x1u));
  /* 10089391 pop eax */
  EAX = (pop32());
L_10089392:;
  /* 10089392 test bl, 8 */
  { uint32_t _r=(BL)&(0x8u); fl_logic(_r,8); }
  /* 10089395 je 0x10089399 */
  if (C.zf) goto L_10089399;
  /* 10089397 or al, 4 */
  { uint32_t _r=(AL)|(0x4u); AL = (_r); fl_logic(_r,8); }
L_10089399:;
  /* 10089399 test bl, 4 */
  { uint32_t _r=(BL)&(0x4u); fl_logic(_r,8); }
  /* 1008939c je 0x100893a0 */
  if (C.zf) goto L_100893a0;
  /* 1008939e or al, 8 */
  { uint32_t _r=(AL)|(0x8u); AL = (_r); fl_logic(_r,8); }
L_100893a0:;
  /* 100893a0 test bl, 2 */
  { uint32_t _r=(BL)&(0x2u); fl_logic(_r,8); }
  /* 100893a3 je 0x100893a7 */
  if (C.zf) goto L_100893a7;
  /* 100893a5 or al, 0x10 */
  { uint32_t _r=(AL)|(0x10u); AL = (_r); fl_logic(_r,8); }
L_100893a7:;
  /* 100893a7 test bl, 1 */
  { uint32_t _r=(BL)&(0x1u); fl_logic(_r,8); }
  /* 100893aa je 0x100893ae */
  if (C.zf) goto L_100893ae;
  /* 100893ac or al, 0x20 */
  { uint32_t _r=(AL)|(0x20u); AL = (_r); fl_logic(_r,8); }
L_100893ae:;
  /* 100893ae test ebx, 0x80000 */
  { uint32_t _r=(EBX)&(0x80000u); fl_logic(_r,32); }
  /* 100893b4 je 0x100893b8 */
  if (C.zf) goto L_100893b8;
  /* 100893b6 or al, 2 */
  { uint32_t _r=(AL)|(0x2u); AL = (_r); fl_logic(_r,8); }
L_100893b8:;
  /* 100893b8 mov ecx, ebx */
  ECX = (EBX);
  /* 100893ba mov edx, 0x300 */
  EDX = (0x300u);
  /* 100893bf and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 100893c1 mov esi, 0x200 */
  ESI = (0x200u);
  /* 100893c6 je 0x100893e5 */
  if (C.zf) goto L_100893e5;
  /* 100893c8 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100893ce je 0x100893e2 */
  if (C.zf) goto L_100893e2;
  /* 100893d0 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100893d2 je 0x100893dd */
  if (C.zf) goto L_100893dd;
  /* 100893d4 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100893d6 jne 0x100893e5 */
  if (!C.zf) goto L_100893e5;
  /* 100893d8 or ah, 0xc */
  { uint32_t _r=(AH)|(0xcu); AH = (_r); fl_logic(_r,8); }
  /* 100893db jmp 0x100893e5 */
  goto L_100893e5;
L_100893dd:;
  /* 100893dd or ah, 8 */
  { uint32_t _r=(AH)|(0x8u); AH = (_r); fl_logic(_r,8); }
  /* 100893e0 jmp 0x100893e5 */
  goto L_100893e5;
L_100893e2:;
  /* 100893e2 or ah, 4 */
  { uint32_t _r=(AH)|(0x4u); AH = (_r); fl_logic(_r,8); }
L_100893e5:;
  /* 100893e5 mov ecx, ebx */
  ECX = (EBX);
  /* 100893e7 and ecx, 0x30000 */
  { uint32_t _r=(ECX)&(0x30000u); ECX = (_r); fl_logic(_r,32); }
  /* 100893ed je 0x100893fb */
  if (C.zf) goto L_100893fb;
  /* 100893ef cmp ecx, 0x10000 */
  { uint32_t _a=(ECX),_b=(0x10000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100893f5 jne 0x100893fd */
  if (!C.zf) goto L_100893fd;
  /* 100893f7 or eax, esi */
  { uint32_t _r=(EAX)|(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 100893f9 jmp 0x100893fd */
  goto L_100893fd;
L_100893fb:;
  /* 100893fb or eax, edx */
  { uint32_t _r=(EAX)|(EDX); EAX = (_r); fl_logic(_r,32); }
L_100893fd:;
  /* 100893fd pop esi */
  ESI = (pop32());
  /* 100893fe test ebx, 0x40000 */
  { uint32_t _r=(EBX)&(0x40000u); fl_logic(_r,32); }
  /* 10089404 pop ebx */
  EBX = (pop32());
  /* 10089405 je 0x1008940a */
  if (C.zf) goto L_1008940a;
  /* 10089407 or ah, 0x10 */
  { uint32_t _r=(AH)|(0x10u); AH = (_r); fl_logic(_r,8); }
L_1008940a:;
  /* 1008940a ret  */
  ESPCHK(0x10089382u, _esp0);
  ESP += 4; return;
}

/* FUN_1000940b @ 0x1008940b (117 bytes, 46 insns) */
void f_1008940b(void) {
  FTRACE(0x1008940bu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008940b push ebp */
  push32((uint32_t)(EBP));
  /* 1008940c mov ebp, esp */
  EBP = (ESP);
  /* 1008940e push ecx */
  push32((uint32_t)(ECX));
  /* 1008940f mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10089412 lea ecx, [eax + 1] */
  ECX = ((uint32_t)(EAX + 0x1));
  /* 10089415 cmp ecx, 0x100 */
  { uint32_t _a=(ECX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008941b ja 0x10089429 */
  if ((!C.cf&&!C.zf)) goto L_10089429;
  /* 1008941d mov ecx, dword ptr [0x10090a10] */
  ECX = (r32((uint32_t)(0x10090a10)));
  /* 10089423 movzx eax, word ptr [ecx + eax*2] */
  EAX = ((uint32_t)(r16((uint32_t)(ECX + EAX*2))));
  /* 10089427 jmp 0x1008947b */
  goto L_1008947b;
L_10089429:;
  /* 10089429 mov ecx, eax */
  ECX = (EAX);
  /* 1008942b push esi */
  push32((uint32_t)(ESI));
  /* 1008942c mov esi, dword ptr [0x10090a10] */
  ESI = (r32((uint32_t)(0x10090a10)));
  /* 10089432 sar ecx, 8 */
  ECX = (sh_sar((uint32_t)(ECX), (0x8u)&0x1f, 32));
  /* 10089435 movzx edx, cl */
  EDX = ((uint32_t)(CL));
  /* 10089438 test byte ptr [esi + edx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(ESI + EDX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 1008943d pop esi */
  ESI = (pop32());
  /* 1008943e je 0x1008944e */
  if (C.zf) goto L_1008944e;
  /* 10089440 and byte ptr [ebp - 2], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x2)))&(0x0u); w8((uint32_t)(EBP + -0x2), (_r)); fl_logic(_r,8); }
  /* 10089444 mov byte ptr [ebp - 4], cl */
  w8((uint32_t)(EBP + -0x4), (CL));
  /* 10089447 mov byte ptr [ebp - 3], al */
  w8((uint32_t)(EBP + -0x3), (AL));
  /* 1008944a push 2 */
  push32((uint32_t)(0x2u));
  /* 1008944c jmp 0x10089457 */
  goto L_10089457;
L_1008944e:;
  /* 1008944e and byte ptr [ebp - 3], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x3)))&(0x0u); w8((uint32_t)(EBP + -0x3), (_r)); fl_logic(_r,8); }
  /* 10089452 mov byte ptr [ebp - 4], al */
  w8((uint32_t)(EBP + -0x4), (AL));
  /* 10089455 push 1 */
  push32((uint32_t)(0x1u));
L_10089457:;
  /* 10089457 pop eax */
  EAX = (pop32());
  /* 10089458 lea ecx, [ebp + 0xa] */
  ECX = ((uint32_t)(EBP + 0xa));
  /* 1008945b push 1 */
  push32((uint32_t)(0x1u));
  /* 1008945d push 0 */
  push32((uint32_t)(0x0u));
  /* 1008945f push 0 */
  push32((uint32_t)(0x0u));
  /* 10089461 push ecx */
  push32((uint32_t)(ECX));
  /* 10089462 push eax */
  push32((uint32_t)(EAX));
  /* 10089463 lea eax, [ebp - 4] */
  EAX = ((uint32_t)(EBP + -0x4));
  /* 10089466 push eax */
  push32((uint32_t)(EAX));
  /* 10089467 push 1 */
  push32((uint32_t)(0x1u));
  /* 10089469 call 0x1008c2bd */
  push32(0x1008946eu); f_1008c2bd();
  /* 1008946e add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10089471 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10089473 jne 0x10089477 */
  if (!C.zf) goto L_10089477;
  /* 10089475 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10089476 ret  */
  ESPCHK(0x1008940bu, _esp0);
  ESP += 4; return;
L_10089477:;
  /* 10089477 movzx eax, word ptr [ebp + 0xa] */
  EAX = ((uint32_t)(r16((uint32_t)(EBP + 0xa))));
L_1008947b:;
  /* 1008947b and eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)&(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1008947e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1008947f ret  */
  ESPCHK(0x1008940bu, _esp0);
  ESP += 4; return;
}

/* FUN_10009480 @ 0x10089480 (111 bytes, 44 insns) */
void f_10089480(void) {
  FTRACE(0x10089480u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10089480 push ebx */
  push32((uint32_t)(EBX));
  /* 10089481 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10089483 cmp dword ptr [0x10096878], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10096878))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10089489 jne 0x1008949e */
  if (!C.zf) goto L_1008949e;
  /* 1008948b mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1008948f cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10089492 jl 0x100894ed */
  if ((C.sf!=C.of)) goto L_100894ed;
  /* 10089494 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10089497 jg 0x100894ed */
  if ((!C.zf&&C.sf==C.of)) goto L_100894ed;
  /* 10089499 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008949c pop ebx */
  EBX = (pop32());
  /* 1008949d ret  */
  ESPCHK(0x10089480u, _esp0);
  ESP += 4; return;
L_1008949e:;
  /* 1008949e push esi */
  push32((uint32_t)(ESI));
  /* 1008949f mov esi, 0x100969f4 */
  ESI = (0x100969f4u);
  /* 100894a4 push edi */
  push32((uint32_t)(EDI));
  /* 100894a5 push esi */
  push32((uint32_t)(ESI));
  /* 100894a6 call dword ptr [0x1008e090] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e090))), 0x100894acu);
  /* 100894ac cmp dword ptr [0x100969f0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x100969f0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100894b2 mov edi, dword ptr [0x1008e08c] */
  EDI = (r32((uint32_t)(0x1008e08c)));
  /* 100894b8 je 0x100894c8 */
  if (C.zf) goto L_100894c8;
  /* 100894ba push esi */
  push32((uint32_t)(ESI));
  /* 100894bb call edi */
  call_ind((uint32_t)(EDI), 0x100894bdu);
  /* 100894bd push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100894bf call 0x1008a053 */
  push32(0x100894c4u); f_1008a053();
  /* 100894c4 pop ecx */
  ECX = (pop32());
  /* 100894c5 push 1 */
  push32((uint32_t)(0x1u));
  /* 100894c7 pop ebx */
  EBX = (pop32());
L_100894c8:;
  /* 100894c8 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 100894cc call 0x100894ef */
  push32(0x100894d1u); f_100894ef();
  /* 100894d1 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100894d3 pop ecx */
  ECX = (pop32());
  /* 100894d4 mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 100894d8 je 0x100894e4 */
  if (C.zf) goto L_100894e4;
  /* 100894da push 0x13 */
  push32((uint32_t)(0x13u));
  /* 100894dc call 0x1008a0b4 */
  push32(0x100894e1u); f_1008a0b4();
  /* 100894e1 pop ecx */
  ECX = (pop32());
  /* 100894e2 jmp 0x100894e7 */
  goto L_100894e7;
L_100894e4:;
  /* 100894e4 push esi */
  push32((uint32_t)(ESI));
  /* 100894e5 call edi */
  call_ind((uint32_t)(EDI), 0x100894e7u);
L_100894e7:;
  /* 100894e7 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 100894eb pop edi */
  EDI = (pop32());
  /* 100894ec pop esi */
  ESI = (pop32());
L_100894ed:;
  /* 100894ed pop ebx */
  EBX = (pop32());
  /* 100894ee ret  */
  ESPCHK(0x10089480u, _esp0);
  ESP += 4; return;
}

/* FUN_100094ef @ 0x100894ef (203 bytes, 78 insns) */
void f_100894ef(void) {
  FTRACE(0x100894efu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100894ef push ebp */
  push32((uint32_t)(EBP));
  /* 100894f0 mov ebp, esp */
  EBP = (ESP);
  /* 100894f2 push ecx */
  push32((uint32_t)(ECX));
  /* 100894f3 cmp dword ptr [0x10096878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10096878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100894fa push ebx */
  push32((uint32_t)(EBX));
  /* 100894fb push esi */
  push32((uint32_t)(ESI));
  /* 100894fc push edi */
  push32((uint32_t)(EDI));
  /* 100894fd jne 0x1008951c */
  if (!C.zf) goto L_1008951c;
  /* 100894ff mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10089502 cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10089505 jl 0x100895b5 */
  if ((C.sf!=C.of)) goto L_100895b5;
  /* 1008950b cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008950e jg 0x100895b5 */
  if ((!C.zf&&C.sf==C.of)) goto L_100895b5;
  /* 10089514 add eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10089517 jmp 0x100895b5 */
  goto L_100895b5;
L_1008951c:;
  /* 1008951c mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1008951f mov edi, 0x100 */
  EDI = (0x100u);
  /* 10089524 push 1 */
  push32((uint32_t)(0x1u));
  /* 10089526 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10089528 pop esi */
  ESI = (pop32());
  /* 10089529 jge 0x10089550 */
  if ((C.sf==C.of)) goto L_10089550;
  /* 1008952b cmp dword ptr [0x10090c20], esi */
  { uint32_t _a=(r32((uint32_t)(0x10090c20))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10089531 jle 0x1008953e */
  if ((C.zf||C.sf!=C.of)) goto L_1008953e;
  /* 10089533 push esi */
  push32((uint32_t)(ESI));
  /* 10089534 push ebx */
  push32((uint32_t)(EBX));
  /* 10089535 call 0x1008940b */
  push32(0x1008953au); f_1008940b();
  /* 1008953a pop ecx */
  ECX = (pop32());
  /* 1008953b pop ecx */
  ECX = (pop32());
  /* 1008953c jmp 0x10089548 */
  goto L_10089548;
L_1008953e:;
  /* 1008953e mov eax, dword ptr [0x10090a10] */
  EAX = (r32((uint32_t)(0x10090a10)));
  /* 10089543 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 10089546 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_10089548:;
  /* 10089548 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008954a jne 0x10089550 */
  if (!C.zf) goto L_10089550;
L_1008954c:;
  /* 1008954c mov eax, ebx */
  EAX = (EBX);
  /* 1008954e jmp 0x100895b5 */
  goto L_100895b5;
L_10089550:;
  /* 10089550 mov edx, dword ptr [0x10090a10] */
  EDX = (r32((uint32_t)(0x10090a10)));
  /* 10089556 mov eax, ebx */
  EAX = (EBX);
  /* 10089558 sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1008955b movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 1008955e test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 10089563 je 0x10089574 */
  if (C.zf) goto L_10089574;
  /* 10089565 and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 10089569 push 2 */
  push32((uint32_t)(0x2u));
  /* 1008956b mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 1008956e mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 10089571 pop eax */
  EAX = (pop32());
  /* 10089572 jmp 0x1008957d */
  goto L_1008957d;
L_10089574:;
  /* 10089574 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 10089578 mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 1008957b mov eax, esi */
  EAX = (ESI);
L_1008957d:;
  /* 1008957d push esi */
  push32((uint32_t)(ESI));
  /* 1008957e push 0 */
  push32((uint32_t)(0x0u));
  /* 10089580 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 10089583 push 3 */
  push32((uint32_t)(0x3u));
  /* 10089585 push ecx */
  push32((uint32_t)(ECX));
  /* 10089586 push eax */
  push32((uint32_t)(EAX));
  /* 10089587 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1008958a push eax */
  push32((uint32_t)(EAX));
  /* 1008958b push edi */
  push32((uint32_t)(EDI));
  /* 1008958c push dword ptr [0x10096878] */
  push32((uint32_t)(r32((uint32_t)(0x10096878))));
  /* 10089592 call 0x1008c406 */
  push32(0x10089597u); f_1008c406();
  /* 10089597 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008959a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008959c je 0x1008954c */
  if (C.zf) goto L_1008954c;
  /* 1008959e cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100895a0 jne 0x100895a8 */
  if (!C.zf) goto L_100895a8;
  /* 100895a2 movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 100895a6 jmp 0x100895b5 */
  goto L_100895b5;
L_100895a8:;
  /* 100895a8 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 100895ac movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 100895b0 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 100895b3 or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_100895b5:;
  /* 100895b5 pop edi */
  EDI = (pop32());
  /* 100895b6 pop esi */
  ESI = (pop32());
  /* 100895b7 pop ebx */
  EBX = (pop32());
  /* 100895b8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100895b9 ret  */
  ESPCHK(0x100894efu, _esp0);
  ESP += 4; return;
}

/* FUN_100095ba @ 0x100895ba (73 bytes, 36 insns) */
void f_100895ba(void) {
  FTRACE(0x100895bau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100895ba mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100895be push esi */
  push32((uint32_t)(ESI));
  /* 100895bf push 0x20 */
  push32((uint32_t)(0x20u));
  /* 100895c1 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100895c2 pop ecx */
  ECX = (pop32());
  /* 100895c3 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100895c5 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 100895c7 mov esi, eax */
  ESI = (EAX);
  /* 100895c9 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 100895cd cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 100895ce idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 100895d0 pop ecx */
  ECX = (pop32());
  /* 100895d1 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100895d5 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100895d7 or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 100895da shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 100895dc not edx */
  EDX = (~(EDX));
  /* 100895de test dword ptr [eax + esi*4], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*4)))&(EDX); fl_logic(_r,32); }
  /* 100895e1 jne 0x100895ff */
  if (!C.zf) goto L_100895ff;
  /* 100895e3 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100895e4 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100895e7 jge 0x100895fa */
  if ((C.sf==C.of)) goto L_100895fa;
  /* 100895e9 lea eax, [eax + esi*4] */
  EAX = ((uint32_t)(EAX + ESI*4));
L_100895ec:;
  /* 100895ec cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100895ef jne 0x100895ff */
  if (!C.zf) goto L_100895ff;
  /* 100895f1 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 100895f2 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100895f5 cmp esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100895f8 jl 0x100895ec */
  if ((C.sf!=C.of)) goto L_100895ec;
L_100895fa:;
  /* 100895fa push 1 */
  push32((uint32_t)(0x1u));
  /* 100895fc pop eax */
  EAX = (pop32());
  /* 100895fd pop esi */
  ESI = (pop32());
  /* 100895fe ret  */
  ESPCHK(0x100895bau, _esp0);
  ESP += 4; return;
L_100895ff:;
  /* 100895ff xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10089601 pop esi */
  ESI = (pop32());
  /* 10089602 ret  */
  ESPCHK(0x100895bau, _esp0);
  ESP += 4; return;
}

/* FUN_10009603 @ 0x10089603 (86 bytes, 43 insns) */
void f_10089603(void) {
  FTRACE(0x10089603u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10089603 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10089607 push ebx */
  push32((uint32_t)(EBX));
  /* 10089608 push esi */
  push32((uint32_t)(ESI));
  /* 10089609 push edi */
  push32((uint32_t)(EDI));
  /* 1008960a push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1008960c mov ebx, dword ptr [esp + 0x14] */
  EBX = (r32((uint32_t)(ESP + 0x14)));
  /* 10089610 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10089611 pop ecx */
  ECX = (pop32());
  /* 10089612 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10089614 mov esi, eax */
  ESI = (EAX);
  /* 10089616 mov eax, dword ptr [esp + 0x14] */
  EAX = (r32((uint32_t)(ESP + 0x14)));
  /* 1008961a cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1008961b idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1008961d lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
  /* 10089620 push edi */
  push32((uint32_t)(EDI));
  /* 10089621 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 10089623 pop ecx */
  ECX = (pop32());
  /* 10089624 push 1 */
  push32((uint32_t)(0x1u));
  /* 10089626 pop eax */
  EAX = (pop32());
  /* 10089627 sub ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10089629 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1008962b push eax */
  push32((uint32_t)(EAX));
  /* 1008962c push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 1008962e call 0x1008c655 */
  push32(0x10089633u); f_1008c655();
  /* 10089633 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10089636 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10089637 js 0x10089655 */
  if (C.sf) goto L_10089655;
  /* 10089639 lea edi, [ebx + esi*4] */
  EDI = ((uint32_t)(EBX + ESI*4));
L_1008963c:;
  /* 1008963c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008963e je 0x10089655 */
  if (C.zf) goto L_10089655;
  /* 10089640 push edi */
  push32((uint32_t)(EDI));
  /* 10089641 push 1 */
  push32((uint32_t)(0x1u));
  /* 10089643 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 10089645 call 0x1008c655 */
  push32(0x1008964au); f_1008c655();
  /* 1008964a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008964d dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1008964e sub edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10089651 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 10089653 jge 0x1008963c */
  if ((C.sf==C.of)) goto L_1008963c;
L_10089655:;
  /* 10089655 pop edi */
  EDI = (pop32());
  /* 10089656 pop esi */
  ESI = (pop32());
  /* 10089657 pop ebx */
  EBX = (pop32());
  /* 10089658 ret  */
  ESPCHK(0x10089603u, _esp0);
  ESP += 4; return;
}

/* FUN_10009659 @ 0x10089659 (140 bytes, 71 insns) */
void f_10089659(void) {
  FTRACE(0x10089659u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10089659 push ebp */
  push32((uint32_t)(EBP));
  /* 1008965a mov ebp, esp */
  EBP = (ESP);
  /* 1008965c push ecx */
  push32((uint32_t)(ECX));
  /* 1008965d push ecx */
  push32((uint32_t)(ECX));
  /* 1008965e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10089661 push ebx */
  push32((uint32_t)(EBX));
  /* 10089662 push esi */
  push32((uint32_t)(ESI));
  /* 10089663 push edi */
  push32((uint32_t)(EDI));
  /* 10089664 lea edi, [eax - 1] */
  EDI = ((uint32_t)(EAX + -0x1));
  /* 10089667 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10089669 pop ecx */
  ECX = (pop32());
  /* 1008966a and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1008966e lea ebx, [edi + 1] */
  EBX = ((uint32_t)(EDI + 0x1));
  /* 10089671 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10089673 mov eax, ebx */
  EAX = (EBX);
  /* 10089675 pop esi */
  ESI = (pop32());
  /* 10089676 cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10089677 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10089679 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 1008967b mov ecx, eax */
  ECX = (EAX);
  /* 1008967d mov eax, ebx */
  EAX = (EBX);
  /* 1008967f cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 10089680 idiv esi */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ESI); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10089682 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10089685 pop esi */
  ESI = (pop32());
  /* 10089686 push 1 */
  push32((uint32_t)(0x1u));
  /* 10089688 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1008968b lea eax, [eax + ecx*4] */
  EAX = ((uint32_t)(EAX + ECX*4));
  /* 1008968e mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10089691 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10089693 pop edx */
  EDX = (pop32());
  /* 10089694 mov ecx, esi */
  ECX = (ESI);
  /* 10089696 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 10089698 test dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); fl_logic(_r,32); }
  /* 1008969a je 0x100896bd */
  if (C.zf) goto L_100896bd;
  /* 1008969c inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1008969d push ebx */
  push32((uint32_t)(EBX));
  /* 1008969e push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100896a1 call 0x100895ba */
  push32(0x100896a6u); f_100895ba();
  /* 100896a6 pop ecx */
  ECX = (pop32());
  /* 100896a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 100896a9 pop ecx */
  ECX = (pop32());
  /* 100896aa jne 0x100896ba */
  if (!C.zf) goto L_100896ba;
  /* 100896ac push edi */
  push32((uint32_t)(EDI));
  /* 100896ad push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 100896b0 call 0x10089603 */
  push32(0x100896b5u); f_10089603();
  /* 100896b5 pop ecx */
  ECX = (pop32());
  /* 100896b6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 100896b9 pop ecx */
  ECX = (pop32());
L_100896ba:;
  /* 100896ba mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
L_100896bd:;
  /* 100896bd or edx, 0xffffffff */
  { uint32_t _r=(EDX)|(0xffffffffu); EDX = (_r); fl_logic(_r,32); }
  /* 100896c0 mov ecx, esi */
  ECX = (ESI);
  /* 100896c2 shl edx, cl */
  EDX = (sh_shl((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 100896c4 push 3 */
  push32((uint32_t)(0x3u));
  /* 100896c6 pop ecx */
  ECX = (pop32());
  /* 100896c7 and dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 100896c9 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 100896cc inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100896cd cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100896cf jge 0x100896dd */
  if ((C.sf==C.of)) goto L_100896dd;
  /* 100896d1 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 100896d4 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100896d6 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 100896d9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 100896db rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
L_100896dd:;
  /* 100896dd mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 100896e0 pop edi */
  EDI = (pop32());
  /* 100896e1 pop esi */
  ESI = (pop32());
  /* 100896e2 pop ebx */
  EBX = (pop32());
  /* 100896e3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100896e4 ret  */
  ESPCHK(0x10089659u, _esp0);
  ESP += 4; return;
}

/* FUN_100096e5 @ 0x100896e5 (27 bytes, 13 insns) */
void f_100896e5(void) {
  FTRACE(0x100896e5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100896e5 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 100896e9 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 100896ed push esi */
  push32((uint32_t)(ESI));
  /* 100896ee push 3 */
  push32((uint32_t)(0x3u));
  /* 100896f0 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100896f2 pop edx */
  EDX = (pop32());
L_100896f3:;
  /* 100896f3 mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 100896f5 mov dword ptr [ecx + eax], esi */
  w32((uint32_t)(ECX + EAX*1), (ESI));
  /* 100896f8 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 100896fb dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 100896fc jne 0x100896f3 */
  if (!C.zf) goto L_100896f3;
  /* 100896fe pop esi */
  ESI = (pop32());
  /* 100896ff ret  */
  ESPCHK(0x100896e5u, _esp0);
  ESP += 4; return;
}

/* FUN_10009700 @ 0x10089700 (12 bytes, 8 insns) */
void f_10089700(void) {
  FTRACE(0x10089700u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10089700 push edi */
  push32((uint32_t)(EDI));
  /* 10089701 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10089705 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10089707 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10089708 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 10089709 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1008970a pop edi */
  EDI = (pop32());
  /* 1008970b ret  */
  ESPCHK(0x10089700u, _esp0);
  ESP += 4; return;
}

/* FUN_1000970c @ 0x1008970c (27 bytes, 13 insns) */
void f_1008970c(void) {
  FTRACE(0x1008970cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008970c mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10089710 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_10089712:;
  /* 10089712 cmp dword ptr [eax], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10089715 jne 0x10089724 */
  if (!C.zf) goto L_10089724;
  /* 10089717 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10089718 add eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008971b cmp ecx, 3 */
  { uint32_t _a=(ECX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008971e jl 0x10089712 */
  if ((C.sf!=C.of)) goto L_10089712;
  /* 10089720 push 1 */
  push32((uint32_t)(0x1u));
  /* 10089722 pop eax */
  EAX = (pop32());
  /* 10089723 ret  */
  ESPCHK(0x1008970cu, _esp0);
  ESP += 4; return;
L_10089724:;
  /* 10089724 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10089726 ret  */
  ESPCHK(0x1008970cu, _esp0);
  ESP += 4; return;
}

/* FUN_10009727 @ 0x10089727 (141 bytes, 64 insns) */
void f_10089727(void) {
  FTRACE(0x10089727u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10089727 push ebp */
  push32((uint32_t)(EBP));
  /* 10089728 mov ebp, esp */
  EBP = (ESP);
  /* 1008972a sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008972d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 10089730 push ebx */
  push32((uint32_t)(EBX));
  /* 10089731 push esi */
  push32((uint32_t)(ESI));
  /* 10089732 push edi */
  push32((uint32_t)(EDI));
  /* 10089733 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 10089735 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10089738 pop ebx */
  EBX = (pop32());
  /* 10089739 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 1008973c cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1008973d mov ecx, ebx */
  ECX = (EBX);
  /* 1008973f mov dword ptr [ebp - 4], 3 */
  w32((uint32_t)(EBP + -0x4), (0x3u));
  /* 10089746 idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10089748 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1008974b mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1008974e cdq  */
  EDX = (EAX & 0x80000000u) ? 0xffffffffu : 0u;
  /* 1008974f idiv ecx */
  { int64_t _n=(int64_t)(((uint64_t)EDX<<32)|EAX); int32_t _d=(int32_t)(ECX); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 10089751 and dword ptr [ebp + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))&(0x0u); w32((uint32_t)(EBP + 0xc), (_r)); fl_logic(_r,32); }
  /* 10089755 mov ecx, edx */
  ECX = (EDX);
  /* 10089757 shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 10089759 sub ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008975b not esi */
  ESI = (~(ESI));
L_1008975d:;
  /* 1008975d mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1008975f mov ecx, eax */
  ECX = (EAX);
  /* 10089761 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 10089763 mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 10089766 mov ecx, edx */
  ECX = (EDX);
  /* 10089768 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1008976a or eax, dword ptr [ebp + 0xc] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + 0xc))); EAX = (_r); fl_logic(_r,32); }
  /* 1008976d mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1008976f mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 10089772 mov ecx, ebx */
  ECX = (EBX);
  /* 10089774 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10089777 shl eax, cl */
  EAX = (sh_shl((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 10089779 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 1008977c mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1008977f jne 0x1008975d */
  if (!C.zf) goto L_1008975d;
  /* 10089781 mov edi, dword ptr [ebp - 0xc] */
  EDI = (r32((uint32_t)(EBP + -0xc)));
  /* 10089784 push 2 */
  push32((uint32_t)(0x2u));
  /* 10089786 pop ebx */
  EBX = (pop32());
  /* 10089787 mov esi, edi */
  ESI = (EDI);
  /* 10089789 push 8 */
  push32((uint32_t)(0x8u));
  /* 1008978b pop ecx */
  ECX = (pop32());
  /* 1008978c shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
L_1008978f:;
  /* 1008978f cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10089791 jl 0x100897a2 */
  if ((C.sf!=C.of)) goto L_100897a2;
  /* 10089793 mov edx, dword ptr [ebp + 8] */
  EDX = (r32((uint32_t)(EBP + 0x8)));
  /* 10089796 mov eax, ecx */
  EAX = (ECX);
  /* 10089798 sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008979a mov eax, dword ptr [eax + edx] */
  EAX = (r32((uint32_t)(EAX + EDX*1)));
  /* 1008979d mov dword ptr [ecx + edx], eax */
  w32((uint32_t)(ECX + EDX*1), (EAX));
  /* 100897a0 jmp 0x100897a9 */
  goto L_100897a9;
L_100897a2:;
  /* 100897a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100897a5 and dword ptr [ecx + eax], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + EAX*1)))&(0x0u); w32((uint32_t)(ECX + EAX*1), (_r)); fl_logic(_r,32); }
L_100897a9:;
  /* 100897a9 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 100897aa sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100897ad jns 0x1008978f */
  if (!C.sf) goto L_1008978f;
  /* 100897af pop edi */
  EDI = (pop32());
  /* 100897b0 pop esi */
  ESI = (pop32());
  /* 100897b1 pop ebx */
  EBX = (pop32());
  /* 100897b2 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100897b3 ret  */
  ESPCHK(0x10089727u, _esp0);
  ESP += 4; return;
}

/* FUN_100097b4 @ 0x100897b4 (364 bytes, 138 insns) */
void f_100897b4(void) {
  FTRACE(0x100897b4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100897b4 push ebp */
  push32((uint32_t)(EBP));
  /* 100897b5 mov ebp, esp */
  EBP = (ESP);
  /* 100897b7 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 100897ba mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 100897bd push ebx */
  push32((uint32_t)(EBX));
  /* 100897be push esi */
  push32((uint32_t)(ESI));
  /* 100897bf push edi */
  push32((uint32_t)(EDI));
  /* 100897c0 movzx ecx, word ptr [eax + 0xa] */
  ECX = ((uint32_t)(r16((uint32_t)(EAX + 0xa))));
  /* 100897c4 mov ebx, ecx */
  EBX = (ECX);
  /* 100897c6 and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 100897cc mov dword ptr [ebp + 8], ecx */
  w32((uint32_t)(EBP + 0x8), (ECX));
  /* 100897cf mov ecx, dword ptr [eax + 6] */
  ECX = (r32((uint32_t)(EAX + 0x6)));
  /* 100897d2 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 100897d5 mov ecx, dword ptr [eax + 2] */
  ECX = (r32((uint32_t)(EAX + 0x2)));
  /* 100897d8 movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 100897db mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 100897de and ebx, 0x7fff */
  { uint32_t _r=(EBX)&(0x7fffu); EBX = (_r); fl_logic(_r,32); }
  /* 100897e4 sub ebx, 0x3fff */
  { uint32_t _a=(EBX),_b=(0x3fffu),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100897ea mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 100897ed shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 100897f0 cmp ebx, 0xffffc001 */
  { uint32_t _a=(EBX),_b=(0xffffc001u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 100897f6 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 100897f9 jne 0x10089821 */
  if (!C.zf) goto L_10089821;
  /* 100897fb lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100897fe xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10089800 push eax */
  push32((uint32_t)(EAX));
  /* 10089801 call 0x1008970c */
  push32(0x10089806u); f_1008970c();
  /* 10089806 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10089808 pop ecx */
  ECX = (pop32());
  /* 10089809 jne 0x100898e0 */
  if (!C.zf) goto L_100898e0;
  /* 1008980f lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10089812 push eax */
  push32((uint32_t)(EAX));
  /* 10089813 call 0x10089700 */
  push32(0x10089818u); f_10089700();
  /* 10089818 pop ecx */
  ECX = (pop32());
L_10089819:;
  /* 10089819 push 2 */
  push32((uint32_t)(0x2u));
L_1008981b:;
  /* 1008981b pop eax */
  EAX = (pop32());
  /* 1008981c jmp 0x100898e2 */
  goto L_100898e2;
L_10089821:;
  /* 10089821 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10089824 push eax */
  push32((uint32_t)(EAX));
  /* 10089825 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 10089828 push eax */
  push32((uint32_t)(EAX));
  /* 10089829 call 0x100896e5 */
  push32(0x1008982eu); f_100896e5();
  /* 1008982e push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 10089831 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10089834 push eax */
  push32((uint32_t)(EAX));
  /* 10089835 call 0x10089659 */
  push32(0x1008983au); f_10089659();
  /* 1008983a add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008983d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008983f je 0x10089842 */
  if (C.zf) goto L_10089842;
  /* 10089841 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
L_10089842:;
  /* 10089842 mov eax, dword ptr [edi + 4] */
  EAX = (r32((uint32_t)(EDI + 0x4)));
  /* 10089845 mov ecx, eax */
  ECX = (EAX);
  /* 10089847 sub ecx, dword ptr [edi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0x8))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008984a cmp ebx, ecx */
  { uint32_t _a=(EBX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008984c jge 0x1008985a */
  if ((C.sf==C.of)) goto L_1008985a;
  /* 1008984e lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10089851 push eax */
  push32((uint32_t)(EAX));
  /* 10089852 call 0x10089700 */
  push32(0x10089857u); f_10089700();
  /* 10089857 pop ecx */
  ECX = (pop32());
  /* 10089858 jmp 0x10089896 */
  goto L_10089896;
L_1008985a:;
  /* 1008985a cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008985c jg 0x1008989d */
  if ((!C.zf&&C.sf==C.of)) goto L_1008989d;
  /* 1008985e sub eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10089860 mov esi, eax */
  ESI = (EAX);
  /* 10089862 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 10089865 push eax */
  push32((uint32_t)(EAX));
  /* 10089866 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10089869 push eax */
  push32((uint32_t)(EAX));
  /* 1008986a call 0x100896e5 */
  push32(0x1008986fu); f_100896e5();
  /* 1008986f lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10089872 push esi */
  push32((uint32_t)(ESI));
  /* 10089873 push eax */
  push32((uint32_t)(EAX));
  /* 10089874 call 0x10089727 */
  push32(0x10089879u); f_10089727();
  /* 10089879 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 1008987c lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1008987f push eax */
  push32((uint32_t)(EAX));
  /* 10089880 call 0x10089659 */
  push32(0x10089885u); f_10089659();
  /* 10089885 mov eax, dword ptr [edi + 0xc] */
  EAX = (r32((uint32_t)(EDI + 0xc)));
  /* 10089888 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10089889 push eax */
  push32((uint32_t)(EAX));
  /* 1008988a lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1008988d push eax */
  push32((uint32_t)(EAX));
  /* 1008988e call 0x10089727 */
  push32(0x10089893u); f_10089727();
  /* 10089893 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10089896:;
  /* 10089896 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 10089898 jmp 0x10089819 */
  goto L_10089819;
L_1008989d:;
  /* 1008989d cmp ebx, dword ptr [edi] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EDI))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008989f jl 0x100898c9 */
  if ((C.sf!=C.of)) goto L_100898c9;
  /* 100898a1 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100898a4 push eax */
  push32((uint32_t)(EAX));
  /* 100898a5 call 0x10089700 */
  push32(0x100898aau); f_10089700();
  /* 100898aa push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 100898ad or byte ptr [ebp - 9], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))|(0x80u); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 100898b1 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100898b4 push eax */
  push32((uint32_t)(EAX));
  /* 100898b5 call 0x10089727 */
  push32(0x100898bau); f_10089727();
  /* 100898ba mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 100898bd add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100898c0 add esi, dword ptr [edi] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100898c2 push 1 */
  push32((uint32_t)(0x1u));
  /* 100898c4 jmp 0x1008981b */
  goto L_1008981b;
L_100898c9:;
  /* 100898c9 push dword ptr [edi + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0xc))));
  /* 100898cc mov esi, dword ptr [edi + 0x14] */
  ESI = (r32((uint32_t)(EDI + 0x14)));
  /* 100898cf and byte ptr [ebp - 9], 0x7f */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x9)))&(0x7fu); w8((uint32_t)(EBP + -0x9), (_r)); fl_logic(_r,8); }
  /* 100898d3 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 100898d6 push eax */
  push32((uint32_t)(EAX));
  /* 100898d7 add esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 100898d9 call 0x10089727 */
  push32(0x100898deu); f_10089727();
  /* 100898de pop ecx */
  ECX = (pop32());
  /* 100898df pop ecx */
  ECX = (pop32());
L_100898e0:;
  /* 100898e0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_100898e2:;
  /* 100898e2 push 0x1f */
  push32((uint32_t)(0x1fu));
  /* 100898e4 pop ecx */
  ECX = (pop32());
  /* 100898e5 sub ecx, dword ptr [edi + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDI + 0xc))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100898e8 mov edi, dword ptr [edi + 0x10] */
  EDI = (r32((uint32_t)(EDI + 0x10)));
  /* 100898eb shl esi, cl */
  ESI = (sh_shl((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 100898ed mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 100898f0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 100898f2 sbb ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a-_b-C.cf; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 100898f4 and ecx, 0x80000000 */
  { uint32_t _r=(ECX)&(0x80000000u); ECX = (_r); fl_logic(_r,32); }
  /* 100898fa or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 100898fc or esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)|(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 100898ff cmp edi, 0x40 */
  { uint32_t _a=(EDI),_b=(0x40u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10089902 jne 0x10089911 */
  if (!C.zf) goto L_10089911;
  /* 10089904 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10089907 mov edx, dword ptr [ebp - 8] */
  EDX = (r32((uint32_t)(EBP + -0x8)));
  /* 1008990a mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 1008990d mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1008990f jmp 0x1008991b */
  goto L_1008991b;
L_10089911:;
  /* 10089911 cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10089914 jne 0x1008991b */
  if (!C.zf) goto L_1008991b;
  /* 10089916 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10089919 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_1008991b:;
  /* 1008991b pop edi */
  EDI = (pop32());
  /* 1008991c pop esi */
  ESI = (pop32());
  /* 1008991d pop ebx */
  EBX = (pop32());
  /* 1008991e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1008991f ret  */
  ESPCHK(0x100897b4u, _esp0);
  ESP += 4; return;
}

/* FUN_10009920 @ 0x10089920 (22 bytes, 6 insns) */
void f_10089920(void) {
  FTRACE(0x10089920u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10089920 push 0x10090c30 */
  push32((uint32_t)(0x10090c30u));
  /* 10089925 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10089929 push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 1008992d call 0x100897b4 */
  push32(0x10089932u); f_100897b4();
  /* 10089932 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10089935 ret  */
  ESPCHK(0x10089920u, _esp0);
  ESP += 4; return;
}

/* FUN_10009936 @ 0x10089936 (22 bytes, 6 insns) */
void f_10089936(void) {
  FTRACE(0x10089936u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10089936 push 0x10090c48 */
  push32((uint32_t)(0x10090c48u));
  /* 1008993b push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 1008993f push dword ptr [esp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0xc))));
  /* 10089943 call 0x100897b4 */
  push32(0x10089948u); f_100897b4();
  /* 10089948 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008994b ret  */
  ESPCHK(0x10089936u, _esp0);
  ESP += 4; return;
}

/* FUN_1000994c @ 0x1008994c (45 bytes, 21 insns) */
void f_1008994c(void) {
  FTRACE(0x1008994cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008994c push ebp */
  push32((uint32_t)(EBP));
  /* 1008994d mov ebp, esp */
  EBP = (ESP);
  /* 1008994f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10089952 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10089954 push eax */
  push32((uint32_t)(EAX));
  /* 10089955 push eax */
  push32((uint32_t)(EAX));
  /* 10089956 push eax */
  push32((uint32_t)(EAX));
  /* 10089957 push eax */
  push32((uint32_t)(EAX));
  /* 10089958 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1008995b lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1008995e push eax */
  push32((uint32_t)(EAX));
  /* 1008995f lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10089962 push eax */
  push32((uint32_t)(EAX));
  /* 10089963 call 0x1008c7f6 */
  push32(0x10089968u); f_1008c7f6();
  /* 10089968 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1008996b lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1008996e push eax */
  push32((uint32_t)(EAX));
  /* 1008996f call 0x10089920 */
  push32(0x10089974u); f_10089920();
  /* 10089974 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10089977 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10089978 ret  */
  ESPCHK(0x1008994cu, _esp0);
  ESP += 4; return;
}

/* FUN_10009979 @ 0x10089979 (45 bytes, 21 insns) */
void f_10089979(void) {
  FTRACE(0x10089979u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10089979 push ebp */
  push32((uint32_t)(EBP));
  /* 1008997a mov ebp, esp */
  EBP = (ESP);
  /* 1008997c sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008997f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10089981 push eax */
  push32((uint32_t)(EAX));
  /* 10089982 push eax */
  push32((uint32_t)(EAX));
  /* 10089983 push eax */
  push32((uint32_t)(EAX));
  /* 10089984 push eax */
  push32((uint32_t)(EAX));
  /* 10089985 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 10089988 lea eax, [ebp + 0xc] */
  EAX = ((uint32_t)(EBP + 0xc));
  /* 1008998b push eax */
  push32((uint32_t)(EAX));
  /* 1008998c lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1008998f push eax */
  push32((uint32_t)(EAX));
  /* 10089990 call 0x1008c7f6 */
  push32(0x10089995u); f_1008c7f6();
  /* 10089995 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 10089998 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 1008999b push eax */
  push32((uint32_t)(EAX));
  /* 1008999c call 0x10089936 */
  push32(0x100899a1u); f_10089936();
  /* 100899a1 add esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 100899a4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 100899a5 ret  */
  ESPCHK(0x10089979u, _esp0);
  ESP += 4; return;
}

/* FUN_100099a6 @ 0x100899a6 (119 bytes, 57 insns) */
void f_100899a6(void) {
  FTRACE(0x100899a6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 100899a6 push ebp */
  push32((uint32_t)(EBP));
  /* 100899a7 mov ebp, esp */
  EBP = (ESP);
  /* 100899a9 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 100899ac push ebx */
  push32((uint32_t)(EBX));
  /* 100899ad mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 100899b0 push esi */
  push32((uint32_t)(ESI));
  /* 100899b1 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 100899b4 mov ecx, dword ptr [edx + 0xc] */
  ECX = (r32((uint32_t)(EDX + 0xc)));
  /* 100899b7 push edi */
  push32((uint32_t)(EDI));
  /* 100899b8 lea edi, [esi + 1] */
  EDI = ((uint32_t)(ESI + 0x1));
  /* 100899bb mov byte ptr [esi], 0x30 */
  w8((uint32_t)(ESI), (0x30u));
  /* 100899be test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100899c0 mov eax, edi */
  EAX = (EDI);
  /* 100899c2 jle 0x100899e3 */
  if ((C.zf||C.sf!=C.of)) goto L_100899e3;
  /* 100899c4 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 100899c7 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_100899c9:;
  /* 100899c9 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 100899cb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 100899cd je 0x100899d5 */
  if (C.zf) goto L_100899d5;
  /* 100899cf movsx edx, dl */
  EDX = ((uint32_t)(int32_t)(int8_t)(DL));
  /* 100899d2 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 100899d3 jmp 0x100899d8 */
  goto L_100899d8;
L_100899d5:;
  /* 100899d5 push 0x30 */
  push32((uint32_t)(0x30u));
  /* 100899d7 pop edx */
  EDX = (pop32());
L_100899d8:;
  /* 100899d8 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 100899da inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 100899db dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 100899de jne 0x100899c9 */
  if (!C.zf) goto L_100899c9;
  /* 100899e0 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_100899e3:;
  /* 100899e3 and byte ptr [eax], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX)))&(0x0u); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 100899e6 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 100899e8 jl 0x100899fc */
  if ((C.sf!=C.of)) goto L_100899fc;
  /* 100899ea cmp byte ptr [ecx], 0x35 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100899ed jl 0x100899fc */
  if ((C.sf!=C.of)) goto L_100899fc;
L_100899ef:;
  /* 100899ef dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 100899f0 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100899f3 jne 0x100899fa */
  if (!C.zf) goto L_100899fa;
  /* 100899f5 mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 100899f8 jmp 0x100899ef */
  goto L_100899ef;
L_100899fa:;
  /* 100899fa inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_100899fc:;
  /* 100899fc cmp byte ptr [esi], 0x31 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 100899ff jne 0x10089a06 */
  if (!C.zf) goto L_10089a06;
  /* 10089a01 inc dword ptr [edx + 4] */
  { uint32_t _r=(r32((uint32_t)(EDX + 0x4)))+1; w32((uint32_t)(EDX + 0x4), (_r)); fl_inc(_r,32); }
  /* 10089a04 jmp 0x10089a18 */
  goto L_10089a18;
L_10089a06:;
  /* 10089a06 push edi */
  push32((uint32_t)(EDI));
  /* 10089a07 call 0x10089080 */
  push32(0x10089a0cu); f_10089080();
  /* 10089a0c inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 10089a0d push eax */
  push32((uint32_t)(EAX));
  /* 10089a0e push edi */
  push32((uint32_t)(EDI));
  /* 10089a0f push esi */
  push32((uint32_t)(ESI));
  /* 10089a10 call 0x10089c80 */
  push32(0x10089a15u); f_10089c80();
  /* 10089a15 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_10089a18:;
  /* 10089a18 pop edi */
  EDI = (pop32());
  /* 10089a19 pop esi */
  ESI = (pop32());
  /* 10089a1a pop ebx */
  EBX = (pop32());
  /* 10089a1b pop ebp */
  EBP = (pop32());
  /* 10089a1c ret  */
  ESPCHK(0x100899a6u, _esp0);
  ESP += 4; return;
}

/* FUN_10009a1d @ 0x10089a1d (92 bytes, 41 insns) */
void f_10089a1d(void) {
  FTRACE(0x10089a1du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10089a1d push ebp */
  push32((uint32_t)(EBP));
  /* 10089a1e mov ebp, esp */
  EBP = (ESP);
  /* 10089a20 sub esp, 0x28 */
  { uint32_t _a=(ESP),_b=(0x28u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10089a23 push esi */
  push32((uint32_t)(ESI));
  /* 10089a24 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 10089a27 push edi */
  push32((uint32_t)(EDI));
  /* 10089a28 push eax */
  push32((uint32_t)(EAX));
  /* 10089a29 lea eax, [ebp - 0xc] */
  EAX = ((uint32_t)(EBP + -0xc));
  /* 10089a2c push eax */
  push32((uint32_t)(EAX));
  /* 10089a2d call 0x10089a79 */
  push32(0x10089a32u); f_10089a79();
  /* 10089a32 pop ecx */
  ECX = (pop32());
  /* 10089a33 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 10089a36 pop ecx */
  ECX = (pop32());
  /* 10089a37 lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
  /* 10089a3a push eax */
  push32((uint32_t)(EAX));
  /* 10089a3b push 0 */
  push32((uint32_t)(0x0u));
  /* 10089a3d push 0x11 */
  push32((uint32_t)(0x11u));
  /* 10089a3f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 10089a42 mov edi, esp */
  EDI = (ESP);
  /* 10089a44 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10089a45 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 10089a46 movsw word ptr es:[edi], word ptr [esi] */
  w16(EDI, r16(ESI)); ESI+=(C.df?-2:2); EDI+=(C.df?-2:2);
  /* 10089a48 call 0x1008ccc7 */
  push32(0x10089a4du); f_1008ccc7();
  /* 10089a4d mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 10089a50 mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 10089a53 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 10089a56 movsx eax, byte ptr [ebp - 0x26] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EBP + -0x26))));
  /* 10089a5a mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 10089a5c movsx eax, word ptr [ebp - 0x28] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + -0x28))));
  /* 10089a60 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 10089a63 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 10089a66 push eax */
  push32((uint32_t)(EAX));
  /* 10089a67 push edi */
  push32((uint32_t)(EDI));
  /* 10089a68 call 0x10089b30 */
  push32(0x10089a6du); f_10089b30();
  /* 10089a6d add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 10089a70 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
  /* 10089a73 mov eax, esi */
  EAX = (ESI);
  /* 10089a75 pop edi */
  EDI = (pop32());
  /* 10089a76 pop esi */
  ESI = (pop32());
  /* 10089a77 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10089a78 ret  */
  ESPCHK(0x10089a1du, _esp0);
  ESP += 4; return;
}

/* FUN_10009a79 @ 0x10089a79 (182 bytes, 70 insns) */
void f_10089a79(void) {
  FTRACE(0x10089a79u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10089a79 push ebp */
  push32((uint32_t)(EBP));
  /* 10089a7a mov ebp, esp */
  EBP = (ESP);
  /* 10089a7c push ecx */
  push32((uint32_t)(ECX));
  /* 10089a7d mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 10089a80 push ebx */
  push32((uint32_t)(EBX));
  /* 10089a81 push esi */
  push32((uint32_t)(ESI));
  /* 10089a82 push edi */
  push32((uint32_t)(EDI));
  /* 10089a83 mov ax, word ptr [edx + 6] */
  AX = (r16((uint32_t)(EDX + 0x6)));
  /* 10089a87 mov edi, 0x7ff */
  EDI = (0x7ffu);
  /* 10089a8c mov ecx, eax */
  ECX = (EAX);
  /* 10089a8e and eax, 0x8000 */
  { uint32_t _r=(EAX)&(0x8000u); EAX = (_r); fl_logic(_r,32); }
  /* 10089a93 shr ecx, 4 */
  ECX = (sh_shr((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 10089a96 and ecx, edi */
  { uint32_t _r=(ECX)&(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10089a98 mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 10089a9b mov eax, dword ptr [edx + 4] */
  EAX = (r32((uint32_t)(EDX + 0x4)));
  /* 10089a9e mov edx, dword ptr [edx] */
  EDX = (r32((uint32_t)(EDX)));
  /* 10089aa0 movzx ebx, cx */
  EBX = ((uint32_t)(CX));
  /* 10089aa3 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 10089aa8 and eax, 0xfffff */
  { uint32_t _r=(EAX)&(0xfffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10089aad test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 10089aaf mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 10089ab2 je 0x10089ac7 */
  if (C.zf) goto L_10089ac7;
  /* 10089ab4 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10089ab6 je 0x10089ac0 */
  if (C.zf) goto L_10089ac0;
  /* 10089ab8 lea edi, [ecx + 0x3c00] */
  EDI = ((uint32_t)(ECX + 0x3c00));
  /* 10089abe jmp 0x10089ae8 */
  goto L_10089ae8;
L_10089ac0:;
  /* 10089ac0 mov edi, 0x7fff */
  EDI = (0x7fffu);
  /* 10089ac5 jmp 0x10089ae8 */
  goto L_10089ae8;
L_10089ac7:;
  /* 10089ac7 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 10089ac9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10089acb jne 0x10089adf */
  if (!C.zf) goto L_10089adf;
  /* 10089acd cmp edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10089acf jne 0x10089adf */
  if (!C.zf) goto L_10089adf;
  /* 10089ad1 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10089ad4 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 10089ad7 mov dword ptr [eax], ebx */
  w32((uint32_t)(EAX), (EBX));
  /* 10089ad9 mov word ptr [eax + 8], bx */
  w16((uint32_t)(EAX + 0x8), (BX));
  /* 10089add jmp 0x10089b2a */
  goto L_10089b2a;
L_10089adf:;
  /* 10089adf lea edi, [ecx + 0x3c01] */
  EDI = ((uint32_t)(ECX + 0x3c01));
  /* 10089ae5 mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
L_10089ae8:;
  /* 10089ae8 mov ecx, edx */
  ECX = (EDX);
  /* 10089aea shr ecx, 0x15 */
  ECX = (sh_shr((uint32_t)(ECX), (0x15u)&0x1f, 32));
  /* 10089aed shl eax, 0xb */
  EAX = (sh_shl((uint32_t)(EAX), (0xbu)&0x1f, 32));
  /* 10089af0 or ecx, eax */
  { uint32_t _r=(ECX)|(EAX); ECX = (_r); fl_logic(_r,32); }
  /* 10089af2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10089af5 or ecx, dword ptr [ebp - 4] */
  { uint32_t _r=(ECX)|(r32((uint32_t)(EBP + -0x4))); ECX = (_r); fl_logic(_r,32); }
  /* 10089af8 shl edx, 0xb */
  EDX = (sh_shl((uint32_t)(EDX), (0xbu)&0x1f, 32));
  /* 10089afb mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 10089afe mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
L_10089b00:;
  /* 10089b00 test esi, ecx */
  { uint32_t _r=(ESI)&(ECX); fl_logic(_r,32); }
  /* 10089b02 jne 0x10089b21 */
  if (!C.zf) goto L_10089b21;
  /* 10089b04 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 10089b06 add ecx, ecx */
  { uint32_t _a=(ECX),_b=(ECX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10089b08 mov ebx, edx */
  EBX = (EDX);
  /* 10089b0a shr ebx, 0x1f */
  EBX = (sh_shr((uint32_t)(EBX), (0x1fu)&0x1f, 32));
  /* 10089b0d or ebx, ecx */
  { uint32_t _r=(EBX)|(ECX); EBX = (_r); fl_logic(_r,32); }
  /* 10089b0f lea ecx, [edx + edx] */
  ECX = ((uint32_t)(EDX + EDX*1));
  /* 10089b12 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 10089b14 mov dword ptr [eax + 4], ebx */
  w32((uint32_t)(EAX + 0x4), (EBX));
  /* 10089b17 add edi, 0xffff */
  { uint32_t _a=(EDI),_b=(0xffffu),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10089b1d mov ecx, ebx */
  ECX = (EBX);
  /* 10089b1f jmp 0x10089b00 */
  goto L_10089b00;
L_10089b21:;
  /* 10089b21 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 10089b24 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 10089b26 mov word ptr [eax + 8], cx */
  w16((uint32_t)(EAX + 0x8), (CX));
L_10089b2a:;
  /* 10089b2a pop edi */
  EDI = (pop32());
  /* 10089b2b pop esi */
  ESI = (pop32());
  /* 10089b2c pop ebx */
  EBX = (pop32());
  /* 10089b2d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10089b2e ret  */
  ESPCHK(0x10089a79u, _esp0);
  ESP += 4; return;
}

/* FUN_10009b30 @ 0x10089b30 (7 bytes, 3 insns) */
void f_10089b30(void) {
  FTRACE(0x10089b30u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10089b30 push edi */
  push32((uint32_t)(EDI));
  /* 10089b31 mov edi, dword ptr [esp + 8] */
  EDI = (r32((uint32_t)(ESP + 0x8)));
  /* 10089b35 jmp 0x10089ba1 */
  jmp_ind(0x10089ba1u); return;
}

/* FUN_10009b40 @ 0x10089b40 (224 bytes, 84 insns) */
void f_10089b40(void) {
  FTRACE(0x10089b40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10089b40 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10089b44 push edi */
  push32((uint32_t)(EDI));
  /* 10089b45 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10089b4b je 0x10089b5c */
  if (C.zf) goto L_10089b5c;
L_10089b4d:;
  /* 10089b4d mov al, byte ptr [ecx] */
  AL = (r8((uint32_t)(ECX)));
  /* 10089b4f inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10089b50 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10089b52 je 0x10089b8f */
  if (C.zf) goto L_10089b8f;
  /* 10089b54 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10089b5a jne 0x10089b4d */
  if (!C.zf) goto L_10089b4d;
L_10089b5c:;
  /* 10089b5c mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10089b5e mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10089b63 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10089b65 xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10089b68 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10089b6a add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10089b6d test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10089b72 je 0x10089b5c */
  if (C.zf) goto L_10089b5c;
  /* 10089b74 mov eax, dword ptr [ecx - 4] */
  EAX = (r32((uint32_t)(ECX + -0x4)));
  /* 10089b77 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 10089b79 je 0x10089b9e */
  if (C.zf) goto L_10089b9e;
  /* 10089b7b test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 10089b7d je 0x10089b99 */
  if (C.zf) goto L_10089b99;
  /* 10089b7f test eax, 0xff0000 */
  { uint32_t _r=(EAX)&(0xff0000u); fl_logic(_r,32); }
  /* 10089b84 je 0x10089b94 */
  if (C.zf) goto L_10089b94;
  /* 10089b86 test eax, 0xff000000 */
  { uint32_t _r=(EAX)&(0xff000000u); fl_logic(_r,32); }
  /* 10089b8b je 0x10089b8f */
  if (C.zf) goto L_10089b8f;
  /* 10089b8d jmp 0x10089b5c */
  goto L_10089b5c;
L_10089b8f:;
  /* 10089b8f lea edi, [ecx - 1] */
  EDI = ((uint32_t)(ECX + -0x1));
  /* 10089b92 jmp 0x10089ba1 */
  goto L_10089ba1;
L_10089b94:;
  /* 10089b94 lea edi, [ecx - 2] */
  EDI = ((uint32_t)(ECX + -0x2));
  /* 10089b97 jmp 0x10089ba1 */
  goto L_10089ba1;
L_10089b99:;
  /* 10089b99 lea edi, [ecx - 3] */
  EDI = ((uint32_t)(ECX + -0x3));
  /* 10089b9c jmp 0x10089ba1 */
  goto L_10089ba1;
L_10089b9e:;
  /* 10089b9e lea edi, [ecx - 4] */
  EDI = ((uint32_t)(ECX + -0x4));
L_10089ba1:;
  /* 10089ba1 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 10089ba5 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10089bab je 0x10089bc6 */
  if (C.zf) goto L_10089bc6;
L_10089bad:;
  /* 10089bad mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 10089baf inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 10089bb0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10089bb2 je 0x10089c18 */
  if (C.zf) goto L_10089c18;
  /* 10089bb4 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10089bb6 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10089bb7 test ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); fl_logic(_r,32); }
  /* 10089bbd jne 0x10089bad */
  if (!C.zf) goto L_10089bad;
  /* 10089bbf jmp 0x10089bc6 */
  goto L_10089bc6;
L_10089bc1:;
  /* 10089bc1 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10089bc3 add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10089bc6:;
  /* 10089bc6 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 10089bcb mov eax, dword ptr [ecx] */
  EAX = (r32((uint32_t)(ECX)));
  /* 10089bcd add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 10089bcf xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 10089bd2 xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 10089bd4 mov edx, dword ptr [ecx] */
  EDX = (r32((uint32_t)(ECX)));
  /* 10089bd6 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10089bd9 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 10089bde je 0x10089bc1 */
  if (C.zf) goto L_10089bc1;
  /* 10089be0 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 10089be2 je 0x10089c18 */
  if (C.zf) goto L_10089c18;
  /* 10089be4 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 10089be6 je 0x10089c0f */
  if (C.zf) goto L_10089c0f;
  /* 10089be8 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 10089bee je 0x10089c02 */
  if (C.zf) goto L_10089c02;
  /* 10089bf0 test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 10089bf6 je 0x10089bfa */
  if (C.zf) goto L_10089bfa;
  /* 10089bf8 jmp 0x10089bc1 */
  goto L_10089bc1;
L_10089bfa:;
  /* 10089bfa mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 10089bfc mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10089c00 pop edi */
  EDI = (pop32());
  /* 10089c01 ret  */
  ESPCHK(0x10089b40u, _esp0);
  ESP += 4; return;
L_10089c02:;
  /* 10089c02 mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10089c05 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10089c09 mov byte ptr [edi + 2], 0 */
  w8((uint32_t)(EDI + 0x2), (0x0u));
  /* 10089c0d pop edi */
  EDI = (pop32());
  /* 10089c0e ret  */
  ESPCHK(0x10089b40u, _esp0);
  ESP += 4; return;
L_10089c0f:;
  /* 10089c0f mov word ptr [edi], dx */
  w16((uint32_t)(EDI), (DX));
  /* 10089c12 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10089c16 pop edi */
  EDI = (pop32());
  /* 10089c17 ret  */
  ESPCHK(0x10089b40u, _esp0);
  ESP += 4; return;
L_10089c18:;
  /* 10089c18 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 10089c1a mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10089c1e pop edi */
  EDI = (pop32());
  /* 10089c1f ret  */
  ESPCHK(0x10089b40u, _esp0);
  ESP += 4; return;
}

/* _memset @ 0x10089c20 (88 bytes, 40 insns) */
void f_10089c20(void) {
  FTRACE(0x10089c20u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10089c20 mov edx, dword ptr [esp + 0xc] */
  EDX = (r32((uint32_t)(ESP + 0xc)));
  /* 10089c24 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 10089c28 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10089c2a je 0x10089c73 */
  if (C.zf) goto L_10089c73;
  /* 10089c2c xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 10089c2e mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 10089c32 push edi */
  push32((uint32_t)(EDI));
  /* 10089c33 mov edi, ecx */
  EDI = (ECX);
  /* 10089c35 cmp edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10089c38 jb 0x10089c67 */
  if (C.cf) goto L_10089c67;
  /* 10089c3a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10089c3c and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 10089c3f je 0x10089c49 */
  if (C.zf) goto L_10089c49;
  /* 10089c41 sub edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
L_10089c43:;
  /* 10089c43 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10089c45 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10089c46 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 10089c47 jne 0x10089c43 */
  if (!C.zf) goto L_10089c43;
L_10089c49:;
  /* 10089c49 mov ecx, eax */
  ECX = (EAX);
  /* 10089c4b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 10089c4e add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10089c50 mov ecx, eax */
  ECX = (EAX);
  /* 10089c52 shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 10089c55 add eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10089c57 mov ecx, edx */
  ECX = (EDX);
  /* 10089c59 and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10089c5c shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10089c5f je 0x10089c67 */
  if (C.zf) goto L_10089c67;
  /* 10089c61 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 10089c63 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 10089c65 je 0x10089c6d */
  if (C.zf) goto L_10089c6d;
L_10089c67:;
  /* 10089c67 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10089c69 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10089c6a dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 10089c6b jne 0x10089c67 */
  if (!C.zf) goto L_10089c67;
L_10089c6d:;
  /* 10089c6d mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 10089c71 pop edi */
  EDI = (pop32());
  /* 10089c72 ret  */
  ESPCHK(0x10089c20u, _esp0);
  ESP += 4; return;
L_10089c73:;
  /* 10089c73 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 10089c77 ret  */
  ESPCHK(0x10089c20u, _esp0);
  ESP += 4; return;
}

/* FUN_10009c80 @ 0x10089c80 (664 bytes, 266 insns) [15 switch table(s)] */
void f_10089c80(void) {
  FTRACE(0x10089c80u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10089c80 push ebp */
  push32((uint32_t)(EBP));
  /* 10089c81 mov ebp, esp */
  EBP = (ESP);
  /* 10089c83 push edi */
  push32((uint32_t)(EDI));
  /* 10089c84 push esi */
  push32((uint32_t)(ESI));
  /* 10089c85 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 10089c88 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 10089c8b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 10089c8e mov eax, ecx */
  EAX = (ECX);
  /* 10089c90 mov edx, ecx */
  EDX = (ECX);
  /* 10089c92 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 10089c94 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10089c96 jbe 0x10089ca0 */
  if ((C.cf||C.zf)) goto L_10089ca0;
  /* 10089c98 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10089c9a jb 0x10089e18 */
  if (C.cf) goto L_10089e18;
L_10089ca0:;
  /* 10089ca0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10089ca6 jne 0x10089cbc */
  if (!C.zf) goto L_10089cbc;
  /* 10089ca8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10089cab and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10089cae cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10089cb1 jb 0x10089cdc */
  if (C.cf) goto L_10089cdc;
  /* 10089cb3 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10089cb5 jmp dword ptr [edx*4 + 0x10089dc8] */
  switch (EDX) {
    case 0: goto L_10089dd8;
    case 1: goto L_10089de0;
    case 2: goto L_10089dec;
    case 3: goto L_10089e00;
    default: x86_unimpl("switch@0x10089cb5 out of table"); return;
  }
L_10089cbc:;
  /* 10089cbc mov eax, edi */
  EAX = (EDI);
  /* 10089cbe mov edx, 3 */
  EDX = (0x3u);
  /* 10089cc3 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10089cc6 jb 0x10089cd4 */
  if (C.cf) goto L_10089cd4;
  /* 10089cc8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10089ccb add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 10089ccd jmp dword ptr [eax*4 + 0x10089ce0] */
  switch (EAX) {
    case 1: goto L_10089cf0;
    case 2: goto L_10089d1c;
    case 3: goto L_10089d40;
    default: x86_unimpl("switch@0x10089ccd out of table"); return;
  }
L_10089cd4:;
  /* 10089cd4 jmp dword ptr [ecx*4 + 0x10089dd8] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x10089dd8)))); return;
  /* 10089cdb nop  */
  /* nop */
L_10089cdc:;
  /* 10089cdc jmp dword ptr [ecx*4 + 0x10089d5c] */
  switch (ECX) {
    case 0: goto L_10089dbf;
    case 1: goto L_10089dac;
    case 2: goto L_10089da4;
    case 3: goto L_10089d9c;
    case 4: goto L_10089d94;
    case 5: goto L_10089d8c;
    case 6: goto L_10089d84;
    case 7: goto L_10089d7c;
    default: x86_unimpl("switch@0x10089cdc out of table"); return;
  }
  /* 10089ce3 nop  */
  /* nop */
L_10089cf0:;
  /* 10089cf0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10089cf2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10089cf4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10089cf6 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10089cf9 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10089cfc mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10089cff shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10089d02 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10089d05 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10089d08 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10089d0b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10089d0e jb 0x10089cdc */
  if (C.cf) goto L_10089cdc;
  /* 10089d10 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10089d12 jmp dword ptr [edx*4 + 0x10089dc8] */
  switch (EDX) {
    case 0: goto L_10089dd8;
    case 1: goto L_10089de0;
    case 2: goto L_10089dec;
    case 3: goto L_10089e00;
    default: x86_unimpl("switch@0x10089d12 out of table"); return;
  }
  /* 10089d19 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10089d1c:;
  /* 10089d1c and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10089d1e mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10089d20 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10089d22 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10089d25 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10089d28 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10089d2b add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10089d2e add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 10089d31 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10089d34 jb 0x10089cdc */
  if (C.cf) goto L_10089cdc;
  /* 10089d36 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10089d38 jmp dword ptr [edx*4 + 0x10089dc8] */
  switch (EDX) {
    case 0: goto L_10089dd8;
    case 1: goto L_10089de0;
    case 2: goto L_10089dec;
    case 3: goto L_10089e00;
    default: x86_unimpl("switch@0x10089d38 out of table"); return;
  }
  /* 10089d3f nop  */
  /* nop */
L_10089d40:;
  /* 10089d40 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10089d42 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10089d44 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10089d46 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 10089d47 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10089d4a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 10089d4b cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10089d4e jb 0x10089cdc */
  if (C.cf) goto L_10089cdc;
  /* 10089d50 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10089d52 jmp dword ptr [edx*4 + 0x10089dc8] */
  switch (EDX) {
    case 0: goto L_10089dd8;
    case 1: goto L_10089de0;
    case 2: goto L_10089dec;
    case 3: goto L_10089e00;
    default: x86_unimpl("switch@0x10089d52 out of table"); return;
  }
  /* 10089d59 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10089d7c:;
  /* 10089d7c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 10089d80 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_10089d84:;
  /* 10089d84 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 10089d88 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_10089d8c:;
  /* 10089d8c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 10089d90 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_10089d94:;
  /* 10089d94 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 10089d98 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_10089d9c:;
  /* 10089d9c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 10089da0 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_10089da4:;
  /* 10089da4 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 10089da8 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_10089dac:;
  /* 10089dac mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 10089db0 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 10089db4 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10089dbb add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10089dbd add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10089dbf:;
  /* 10089dbf jmp dword ptr [edx*4 + 0x10089dc8] */
  switch (EDX) {
    case 0: goto L_10089dd8;
    case 1: goto L_10089de0;
    case 2: goto L_10089dec;
    case 3: goto L_10089e00;
    default: x86_unimpl("switch@0x10089dbf out of table"); return;
  }
  /* 10089dc6 mov edi, edi */
  EDI = (EDI);
L_10089dd8:;
  /* 10089dd8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10089ddb pop esi */
  ESI = (pop32());
  /* 10089ddc pop edi */
  EDI = (pop32());
  /* 10089ddd leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10089dde ret  */
  ESPCHK(0x10089c80u, _esp0);
  ESP += 4; return;
  /* 10089ddf nop  */
  /* nop */
L_10089de0:;
  /* 10089de0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10089de2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10089de4 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10089de7 pop esi */
  ESI = (pop32());
  /* 10089de8 pop edi */
  EDI = (pop32());
  /* 10089de9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10089dea ret  */
  ESPCHK(0x10089c80u, _esp0);
  ESP += 4; return;
  /* 10089deb nop  */
  /* nop */
L_10089dec:;
  /* 10089dec mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10089dee mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10089df0 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10089df3 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10089df6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10089df9 pop esi */
  ESI = (pop32());
  /* 10089dfa pop edi */
  EDI = (pop32());
  /* 10089dfb leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10089dfc ret  */
  ESPCHK(0x10089c80u, _esp0);
  ESP += 4; return;
  /* 10089dfd lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10089e00:;
  /* 10089e00 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 10089e02 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 10089e04 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10089e07 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10089e0a mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10089e0d mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10089e10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10089e13 pop esi */
  ESI = (pop32());
  /* 10089e14 pop edi */
  EDI = (pop32());
  /* 10089e15 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10089e16 ret  */
  ESPCHK(0x10089c80u, _esp0);
  ESP += 4; return;
  /* 10089e17 nop  */
  /* nop */
L_10089e18:;
  /* 10089e18 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 10089e1c lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 10089e20 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 10089e26 jne 0x10089e4c */
  if (!C.zf) goto L_10089e4c;
  /* 10089e28 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10089e2b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 10089e2e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10089e31 jb 0x10089e40 */
  if (C.cf) goto L_10089e40;
  /* 10089e33 std  */
  C.df=1;
  /* 10089e34 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10089e36 cld  */
  C.df=0;
  /* 10089e37 jmp dword ptr [edx*4 + 0x10089f60] */
  switch (EDX) {
    case 0: goto L_10089f70;
    case 1: goto L_10089f78;
    case 2: goto L_10089f88;
    case 3: goto L_10089f9c;
    default: x86_unimpl("switch@0x10089e37 out of table"); return;
  }
  /* 10089e3e mov edi, edi */
  EDI = (EDI);
L_10089e40:;
  /* 10089e40 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 10089e42 jmp dword ptr [ecx*4 + 0x10089f10] */
  switch (ECX) {
    case 0: goto L_10089f57;
    default: x86_unimpl("switch@0x10089e42 out of table"); return;
  }
  /* 10089e49 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10089e4c:;
  /* 10089e4c mov eax, edi */
  EAX = (EDI);
  /* 10089e4e mov edx, 3 */
  EDX = (0x3u);
  /* 10089e53 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10089e56 jb 0x10089e64 */
  if (C.cf) goto L_10089e64;
  /* 10089e58 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 10089e5b sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 10089e5d jmp dword ptr [eax*4 + 0x10089e68] */
  switch (EAX) {
    case 1: goto L_10089e78;
    case 2: goto L_10089e98;
    case 3: goto L_10089ec0;
    default: x86_unimpl("switch@0x10089e5d out of table"); return;
  }
L_10089e64:;
  /* 10089e64 jmp dword ptr [ecx*4 + 0x10089f60] */
  switch (ECX) {
    case 0: goto L_10089f70;
    case 1: goto L_10089f78;
    case 2: goto L_10089f88;
    case 3: goto L_10089f9c;
    default: x86_unimpl("switch@0x10089e64 out of table"); return;
  }
  /* 10089e6b nop  */
  /* nop */
L_10089e78:;
  /* 10089e78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10089e7b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10089e7d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10089e80 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 10089e81 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10089e84 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 10089e85 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10089e88 jb 0x10089e40 */
  if (C.cf) goto L_10089e40;
  /* 10089e8a std  */
  C.df=1;
  /* 10089e8b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10089e8d cld  */
  C.df=0;
  /* 10089e8e jmp dword ptr [edx*4 + 0x10089f60] */
  switch (EDX) {
    case 0: goto L_10089f70;
    case 1: goto L_10089f78;
    case 2: goto L_10089f88;
    case 3: goto L_10089f9c;
    default: x86_unimpl("switch@0x10089e8e out of table"); return;
  }
  /* 10089e95 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10089e98:;
  /* 10089e98 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10089e9b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10089e9d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10089ea0 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10089ea3 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10089ea6 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10089ea9 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10089eac sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10089eaf cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10089eb2 jb 0x10089e40 */
  if (C.cf) goto L_10089e40;
  /* 10089eb4 std  */
  C.df=1;
  /* 10089eb5 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10089eb7 cld  */
  C.df=0;
  /* 10089eb8 jmp dword ptr [edx*4 + 0x10089f60] */
  switch (EDX) {
    case 0: goto L_10089f70;
    case 1: goto L_10089f78;
    case 2: goto L_10089f88;
    case 3: goto L_10089f9c;
    default: x86_unimpl("switch@0x10089eb8 out of table"); return;
  }
  /* 10089ebf nop  */
  /* nop */
L_10089ec0:;
  /* 10089ec0 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10089ec3 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 10089ec5 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10089ec8 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10089ecb mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10089ece mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10089ed1 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 10089ed4 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10089ed7 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10089eda sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 10089edd cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 10089ee0 jb 0x10089e40 */
  if (C.cf) goto L_10089e40;
  /* 10089ee6 std  */
  C.df=1;
  /* 10089ee7 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 10089ee9 cld  */
  C.df=0;
  /* 10089eea jmp dword ptr [edx*4 + 0x10089f60] */
  switch (EDX) {
    case 0: goto L_10089f70;
    case 1: goto L_10089f78;
    case 2: goto L_10089f88;
    case 3: goto L_10089f9c;
    default: x86_unimpl("switch@0x10089eea out of table"); return;
  }
  /* 10089ef1 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 10089ef4 adc al, 0x9f */
  { uint32_t _a=(AL),_b=(0x9fu),_r=_a+_b+C.cf; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 10089ef6 or byte ptr [eax], dl */
  { uint32_t _r=(r8((uint32_t)(EAX)))|(DL); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 10089ef8 sbb al, 0x9f */
  { uint32_t _a=(AL),_b=(0x9fu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10089efa or byte ptr [eax], dl */
  { uint32_t _r=(r8((uint32_t)(EAX)))|(DL); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 10089efc and al, 0x9f */
  { uint32_t _r=(AL)&(0x9fu); AL = (_r); fl_logic(_r,8); }
  /* 10089efe or byte ptr [eax], dl */
  { uint32_t _r=(r8((uint32_t)(EAX)))|(DL); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 10089f00 sub al, 0x9f */
  { uint32_t _a=(AL),_b=(0x9fu),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 10089f02 or byte ptr [eax], dl */
  { uint32_t _r=(r8((uint32_t)(EAX)))|(DL); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 10089f04 xor al, 0x9f */
  { uint32_t _r=(AL)^(0x9fu); AL = (_r); fl_logic(_r,8); }
  /* 10089f06 or byte ptr [eax], dl */
  { uint32_t _r=(r8((uint32_t)(EAX)))|(DL); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 10089f08 cmp al, 0x9f */
  { uint32_t _a=(AL),_b=(0x9fu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 10089f0a or byte ptr [eax], dl */
  { uint32_t _r=(r8((uint32_t)(EAX)))|(DL); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 10089f0c inc esp */
  { uint32_t _r=(ESP)+1; ESP = (_r); fl_inc(_r,32); }
  /* 10089f0d lahf  */
  AH=(uint8_t)((C.sf<<7)|(C.zf<<6)|(C.af<<4)|(C.pf<<2)|0x02u|C.cf);
  /* 10089f0e or byte ptr [eax], dl */
  { uint32_t _r=(r8((uint32_t)(EAX)))|(DL); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 10089f14 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 10089f18 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 10089f1c mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 10089f20 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 10089f24 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 10089f28 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 10089f2c mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 10089f30 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 10089f34 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 10089f38 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 10089f3c mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 10089f40 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 10089f44 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 10089f48 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 10089f4c lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 10089f53 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 10089f55 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_10089f57:;
  /* 10089f57 jmp dword ptr [edx*4 + 0x10089f60] */
  switch (EDX) {
    case 0: goto L_10089f70;
    case 1: goto L_10089f78;
    case 2: goto L_10089f88;
    case 3: goto L_10089f9c;
    default: x86_unimpl("switch@0x10089f57 out of table"); return;
  }
  /* 10089f5e mov edi, edi */
  EDI = (EDI);
L_10089f70:;
  /* 10089f70 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10089f73 pop esi */
  ESI = (pop32());
  /* 10089f74 pop edi */
  EDI = (pop32());
  /* 10089f75 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10089f76 ret  */
  ESPCHK(0x10089c80u, _esp0);
  ESP += 4; return;
  /* 10089f77 nop  */
  /* nop */
L_10089f78:;
  /* 10089f78 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10089f7b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10089f7e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10089f81 pop esi */
  ESI = (pop32());
  /* 10089f82 pop edi */
  EDI = (pop32());
  /* 10089f83 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10089f84 ret  */
  ESPCHK(0x10089c80u, _esp0);
  ESP += 4; return;
  /* 10089f85 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_10089f88:;
  /* 10089f88 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10089f8b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10089f8e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10089f91 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10089f94 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10089f97 pop esi */
  ESI = (pop32());
  /* 10089f98 pop edi */
  EDI = (pop32());
  /* 10089f99 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10089f9a ret  */
  ESPCHK(0x10089c80u, _esp0);
  ESP += 4; return;
  /* 10089f9b nop  */
  /* nop */
L_10089f9c:;
  /* 10089f9c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 10089f9f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 10089fa2 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 10089fa5 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 10089fa8 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 10089fab mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 10089fae mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 10089fb1 pop esi */
  ESI = (pop32());
  /* 10089fb2 pop edi */
  EDI = (pop32());
  /* 10089fb3 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 10089fb4 ret  */
  ESPCHK(0x10089c80u, _esp0);
  ESP += 4; return;
}

/* __fptrap @ 0x10089fb5 (9 bytes, 4 insns) */
void f_10089fb5(void) {
  FTRACE(0x10089fb5u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10089fb5 push 2 */
  push32((uint32_t)(0x2u));
  /* 10089fb7 call 0x100870f1 */
  push32(0x10089fbcu); f_100870f1();
  /* 10089fbc pop ecx */
  ECX = (pop32());
  /* 10089fbd ret  */
  ESPCHK(0x10089fb5u, _esp0);
  ESP += 4; return;
}

/* FUN_10009fbe @ 0x10089fbe (41 bytes, 12 insns) */
void f_10089fbe(void) {
  FTRACE(0x10089fbeu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10089fbe push esi */
  push32((uint32_t)(ESI));
  /* 10089fbf mov esi, dword ptr [0x1008e094] */
  ESI = (r32((uint32_t)(0x1008e094)));
  /* 10089fc5 push dword ptr [0x10090ca4] */
  push32((uint32_t)(r32((uint32_t)(0x10090ca4))));
  /* 10089fcb call esi */
  call_ind((uint32_t)(ESI), 0x10089fcdu);
  /* 10089fcd push dword ptr [0x10090c94] */
  push32((uint32_t)(r32((uint32_t)(0x10090c94))));
  /* 10089fd3 call esi */
  call_ind((uint32_t)(ESI), 0x10089fd5u);
  /* 10089fd5 push dword ptr [0x10090c84] */
  push32((uint32_t)(r32((uint32_t)(0x10090c84))));
  /* 10089fdb call esi */
  call_ind((uint32_t)(ESI), 0x10089fddu);
  /* 10089fdd push dword ptr [0x10090c64] */
  push32((uint32_t)(r32((uint32_t)(0x10090c64))));
  /* 10089fe3 call esi */
  call_ind((uint32_t)(ESI), 0x10089fe5u);
  /* 10089fe5 pop esi */
  ESI = (pop32());
  /* 10089fe6 ret  */
  ESPCHK(0x10089fbeu, _esp0);
  ESP += 4; return;
}

/* FUN_10009fe7 @ 0x10089fe7 (108 bytes, 34 insns) */
void f_10089fe7(void) {
  FTRACE(0x10089fe7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 10089fe7 push esi */
  push32((uint32_t)(ESI));
  /* 10089fe8 push edi */
  push32((uint32_t)(EDI));
  /* 10089fe9 mov edi, dword ptr [0x1008e050] */
  EDI = (r32((uint32_t)(0x1008e050)));
  /* 10089fef mov esi, 0x10090c60 */
  ESI = (0x10090c60u);
L_10089ff4:;
  /* 10089ff4 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 10089ff6 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 10089ff8 je 0x1008a025 */
  if (C.zf) goto L_1008a025;
  /* 10089ffa cmp esi, 0x10090ca4 */
  { uint32_t _a=(ESI),_b=(0x10090ca4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a000 je 0x1008a025 */
  if (C.zf) goto L_1008a025;
  /* 1008a002 cmp esi, 0x10090c94 */
  { uint32_t _a=(ESI),_b=(0x10090c94u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a008 je 0x1008a025 */
  if (C.zf) goto L_1008a025;
  /* 1008a00a cmp esi, 0x10090c84 */
  { uint32_t _a=(ESI),_b=(0x10090c84u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a010 je 0x1008a025 */
  if (C.zf) goto L_1008a025;
  /* 1008a012 cmp esi, 0x10090c64 */
  { uint32_t _a=(ESI),_b=(0x10090c64u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a018 je 0x1008a025 */
  if (C.zf) goto L_1008a025;
  /* 1008a01a push eax */
  push32((uint32_t)(EAX));
  /* 1008a01b call edi */
  call_ind((uint32_t)(EDI), 0x1008a01du);
  /* 1008a01d push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1008a01f call 0x1008a206 */
  push32(0x1008a024u); f_1008a206();
  /* 1008a024 pop ecx */
  ECX = (pop32());
L_1008a025:;
  /* 1008a025 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1008a028 cmp esi, 0x10090d20 */
  { uint32_t _a=(ESI),_b=(0x10090d20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a02e jl 0x10089ff4 */
  if ((C.sf!=C.of)) goto L_10089ff4;
  /* 1008a030 push dword ptr [0x10090c84] */
  push32((uint32_t)(r32((uint32_t)(0x10090c84))));
  /* 1008a036 call edi */
  call_ind((uint32_t)(EDI), 0x1008a038u);
  /* 1008a038 push dword ptr [0x10090c94] */
  push32((uint32_t)(r32((uint32_t)(0x10090c94))));
  /* 1008a03e call edi */
  call_ind((uint32_t)(EDI), 0x1008a040u);
  /* 1008a040 push dword ptr [0x10090ca4] */
  push32((uint32_t)(r32((uint32_t)(0x10090ca4))));
  /* 1008a046 call edi */
  call_ind((uint32_t)(EDI), 0x1008a048u);
  /* 1008a048 push dword ptr [0x10090c64] */
  push32((uint32_t)(r32((uint32_t)(0x10090c64))));
  /* 1008a04e call edi */
  call_ind((uint32_t)(EDI), 0x1008a050u);
  /* 1008a050 pop edi */
  EDI = (pop32());
  /* 1008a051 pop esi */
  ESI = (pop32());
  /* 1008a052 ret  */
  ESPCHK(0x10089fe7u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a053 @ 0x1008a053 (97 bytes, 37 insns) */
void f_1008a053(void) {
  FTRACE(0x1008a053u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008a053 push ebp */
  push32((uint32_t)(EBP));
  /* 1008a054 mov ebp, esp */
  EBP = (ESP);
  /* 1008a056 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1008a059 push esi */
  push32((uint32_t)(ESI));
  /* 1008a05a cmp dword ptr [eax*4 + 0x10090c60], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX*4 + 0x10090c60))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a062 lea esi, [eax*4 + 0x10090c60] */
  ESI = ((uint32_t)(EAX*4 + 0x10090c60));
  /* 1008a069 jne 0x1008a0a9 */
  if (!C.zf) goto L_1008a0a9;
  /* 1008a06b push edi */
  push32((uint32_t)(EDI));
  /* 1008a06c push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1008a06e call 0x1008a2ef */
  push32(0x1008a073u); f_1008a2ef();
  /* 1008a073 mov edi, eax */
  EDI = (EAX);
  /* 1008a075 pop ecx */
  ECX = (pop32());
  /* 1008a076 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1008a078 jne 0x1008a082 */
  if (!C.zf) goto L_1008a082;
  /* 1008a07a push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1008a07c call 0x100870f1 */
  push32(0x1008a081u); f_100870f1();
  /* 1008a081 pop ecx */
  ECX = (pop32());
L_1008a082:;
  /* 1008a082 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1008a084 call 0x1008a053 */
  push32(0x1008a089u); f_1008a053();
  /* 1008a089 cmp dword ptr [esi], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a08c pop ecx */
  ECX = (pop32());
  /* 1008a08d push edi */
  push32((uint32_t)(EDI));
  /* 1008a08e jne 0x1008a09a */
  if (!C.zf) goto L_1008a09a;
  /* 1008a090 call dword ptr [0x1008e094] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e094))), 0x1008a096u);
  /* 1008a096 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1008a098 jmp 0x1008a0a0 */
  goto L_1008a0a0;
L_1008a09a:;
  /* 1008a09a call 0x1008a206 */
  push32(0x1008a09fu); f_1008a206();
  /* 1008a09f pop ecx */
  ECX = (pop32());
L_1008a0a0:;
  /* 1008a0a0 push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1008a0a2 call 0x1008a0b4 */
  push32(0x1008a0a7u); f_1008a0b4();
  /* 1008a0a7 pop ecx */
  ECX = (pop32());
  /* 1008a0a8 pop edi */
  EDI = (pop32());
L_1008a0a9:;
  /* 1008a0a9 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1008a0ab call dword ptr [0x1008e00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e00c))), 0x1008a0b1u);
  /* 1008a0b1 pop esi */
  ESI = (pop32());
  /* 1008a0b2 pop ebp */
  EBP = (pop32());
  /* 1008a0b3 ret  */
  ESPCHK(0x1008a053u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a0b4 @ 0x1008a0b4 (21 bytes, 7 insns) */
void f_1008a0b4(void) {
  FTRACE(0x1008a0b4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008a0b4 push ebp */
  push32((uint32_t)(EBP));
  /* 1008a0b5 mov ebp, esp */
  EBP = (ESP);
  /* 1008a0b7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1008a0ba push dword ptr [eax*4 + 0x10090c60] */
  push32((uint32_t)(r32((uint32_t)(EAX*4 + 0x10090c60))));
  /* 1008a0c1 call dword ptr [0x1008e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e008))), 0x1008a0c7u);
  /* 1008a0c7 pop ebp */
  EBP = (pop32());
  /* 1008a0c8 ret  */
  ESPCHK(0x1008a0b4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a0c9 @ 0x1008a0c9 (289 bytes, 98 insns) */
void f_1008a0c9(void) {
  FTRACE(0x1008a0c9u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008a0c9 push ebp */
  push32((uint32_t)(EBP));
  /* 1008a0ca mov ebp, esp */
  EBP = (ESP);
  /* 1008a0cc push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1008a0ce push 0x1008e4d0 */
  push32((uint32_t)(0x1008e4d0u));
  /* 1008a0d3 push 0x1008d070 */
  push32((uint32_t)(0x1008d070u));
  /* 1008a0d8 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1008a0de push eax */
  push32((uint32_t)(EAX));
  /* 1008a0df mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1008a0e6 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008a0e9 push ebx */
  push32((uint32_t)(EBX));
  /* 1008a0ea push esi */
  push32((uint32_t)(ESI));
  /* 1008a0eb push edi */
  push32((uint32_t)(EDI));
  /* 1008a0ec mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1008a0ef imul esi, dword ptr [ebp + 0xc] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0xc)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1008a0f3 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 1008a0f6 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
  /* 1008a0f9 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a0fc ja 0x1008a112 */
  if ((!C.cf&&!C.zf)) goto L_1008a112;
  /* 1008a0fe xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1008a100 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a102 jne 0x1008a107 */
  if (!C.zf) goto L_1008a107;
  /* 1008a104 push 1 */
  push32((uint32_t)(0x1u));
  /* 1008a106 pop esi */
  ESI = (pop32());
L_1008a107:;
  /* 1008a107 add esi, 0xf */
  { uint32_t _a=(ESI),_b=(0xfu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1008a10a and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 1008a10d mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 1008a110 jmp 0x1008a114 */
  goto L_1008a114;
L_1008a112:;
  /* 1008a112 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_1008a114:;
  /* 1008a114 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 1008a117 cmp esi, -0x20 */
  { uint32_t _a=(ESI),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a11a ja 0x1008a1c8 */
  if ((!C.cf&&!C.zf)) goto L_1008a1c8;
  /* 1008a120 mov eax, dword ptr [0x10097c68] */
  EAX = (r32((uint32_t)(0x10097c68)));
  /* 1008a125 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a128 jne 0x1008a16b */
  if (!C.zf) goto L_1008a16b;
  /* 1008a12a mov edi, dword ptr [ebp - 0x1c] */
  EDI = (r32((uint32_t)(EBP + -0x1c)));
  /* 1008a12d cmp edi, dword ptr [0x10096a10] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(0x10096a10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a133 ja 0x1008a1b1 */
  if ((!C.cf&&!C.zf)) goto L_1008a1b1;
  /* 1008a135 push 9 */
  push32((uint32_t)(0x9u));
  /* 1008a137 call 0x1008a053 */
  push32(0x1008a13cu); f_1008a053();
  /* 1008a13c pop ecx */
  ECX = (pop32());
  /* 1008a13d mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 1008a140 push edi */
  push32((uint32_t)(EDI));
  /* 1008a141 call 0x1008b2db */
  push32(0x1008a146u); f_1008b2db();
  /* 1008a146 pop ecx */
  ECX = (pop32());
  /* 1008a147 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1008a14a or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1008a14e call 0x1008a162 */
  push32(0x1008a153u); f_1008a162();
  /* 1008a153 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a156 je 0x1008a1b6 */
  if (C.zf) goto L_1008a1b6;
  /* 1008a158 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 1008a15b jmp 0x1008a1a5 */
  goto L_1008a1a5;
  /* 1008a15d xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1008a15f mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1008a162 push 9 */
  push32((uint32_t)(0x9u));
  /* 1008a164 call 0x1008a0b4 */
  push32(0x1008a169u); f_1008a0b4();
  /* 1008a169 pop ecx */
  ECX = (pop32());
  /* 1008a16a ret  */
  ESPCHK(0x1008a0c9u, _esp0);
  ESP += 4; return;
L_1008a16b:;
  /* 1008a16b cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a16e jne 0x1008a1b1 */
  if (!C.zf) goto L_1008a1b1;
  /* 1008a170 cmp esi, dword ptr [0x10092ec4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10092ec4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a176 ja 0x1008a1b1 */
  if ((!C.cf&&!C.zf)) goto L_1008a1b1;
  /* 1008a178 push 9 */
  push32((uint32_t)(0x9u));
  /* 1008a17a call 0x1008a053 */
  push32(0x1008a17fu); f_1008a053();
  /* 1008a17f pop ecx */
  ECX = (pop32());
  /* 1008a180 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1008a187 mov eax, esi */
  EAX = (ESI);
  /* 1008a189 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1008a18c push eax */
  push32((uint32_t)(EAX));
  /* 1008a18d call 0x1008ba88 */
  push32(0x1008a192u); f_1008ba88();
  /* 1008a192 pop ecx */
  ECX = (pop32());
  /* 1008a193 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1008a196 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1008a19a call 0x1008a1eb */
  push32(0x1008a19fu); f_1008a1eb();
  /* 1008a19f cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a1a2 je 0x1008a1b6 */
  if (C.zf) goto L_1008a1b6;
  /* 1008a1a4 push esi */
  push32((uint32_t)(ESI));
L_1008a1a5:;
  /* 1008a1a5 push ebx */
  push32((uint32_t)(EBX));
  /* 1008a1a6 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 1008a1a9 call 0x10089c20 */
  push32(0x1008a1aeu); f_10089c20();
  /* 1008a1ae add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1008a1b1:;
  /* 1008a1b1 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a1b4 jne 0x1008a1f4 */
  if (!C.zf) { jmp_ind(0x1008a1f4u); return; }
L_1008a1b6:;
  /* 1008a1b6 push esi */
  push32((uint32_t)(ESI));
  /* 1008a1b7 push 8 */
  push32((uint32_t)(0x8u));
  /* 1008a1b9 push dword ptr [0x10097c64] */
  push32((uint32_t)(r32((uint32_t)(0x10097c64))));
  /* 1008a1bf call dword ptr [0x1008e098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e098))), 0x1008a1c5u);
  /* 1008a1c5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
L_1008a1c8:;
  /* 1008a1c8 cmp dword ptr [ebp - 0x20], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a1cb jne 0x1008a1f4 */
  if (!C.zf) { jmp_ind(0x1008a1f4u); return; }
  /* 1008a1cd cmp dword ptr [0x100968b0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x100968b0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a1d3 je 0x1008a1f4 */
  if (C.zf) { jmp_ind(0x1008a1f4u); return; }
  /* 1008a1d5 push esi */
  push32((uint32_t)(ESI));
  /* 1008a1d6 call 0x1008cf5a */
  push32(0x1008a1dbu); f_1008cf5a();
  /* 1008a1db pop ecx */
  ECX = (pop32());
  /* 1008a1dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008a1de jne 0x1008a114 */
  if (!C.zf) goto L_1008a114;
  /* 1008a1e4 jmp 0x1008a1f7 */
  jmp_ind(0x1008a1f7u); return;
  /* 1008a1e6 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
}

/* FUN_1000a162 @ 0x1008a162 (9 bytes, 4 insns) */
void f_1008a162(void) {
  FTRACE(0x1008a162u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008a162 push 9 */
  push32((uint32_t)(0x9u));
  /* 1008a164 call 0x1008a0b4 */
  push32(0x1008a169u); f_1008a0b4();
  /* 1008a169 pop ecx */
  ECX = (pop32());
  /* 1008a16a ret  */
  ESPCHK(0x1008a162u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a1eb @ 0x1008a1eb (9 bytes, 4 insns) */
void f_1008a1eb(void) {
  FTRACE(0x1008a1ebu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008a1eb push 9 */
  push32((uint32_t)(0x9u));
  /* 1008a1ed call 0x1008a0b4 */
  push32(0x1008a1f2u); f_1008a0b4();
  /* 1008a1f2 pop ecx */
  ECX = (pop32());
  /* 1008a1f3 ret  */
  ESPCHK(0x1008a1ebu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a206 @ 0x1008a206 (215 bytes, 75 insns) */
void f_1008a206(void) {
  FTRACE(0x1008a206u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008a206 push ebp */
  push32((uint32_t)(EBP));
  /* 1008a207 mov ebp, esp */
  EBP = (ESP);
  /* 1008a209 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1008a20b push 0x1008e4e8 */
  push32((uint32_t)(0x1008e4e8u));
  /* 1008a210 push 0x1008d070 */
  push32((uint32_t)(0x1008d070u));
  /* 1008a215 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1008a21b push eax */
  push32((uint32_t)(EAX));
  /* 1008a21c mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1008a223 sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008a226 push ebx */
  push32((uint32_t)(EBX));
  /* 1008a227 push esi */
  push32((uint32_t)(ESI));
  /* 1008a228 push edi */
  push32((uint32_t)(EDI));
  /* 1008a229 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1008a22c test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1008a22e je 0x1008a2e0 */
  if (C.zf) { jmp_ind(0x1008a2e0u); return; }
  /* 1008a234 mov eax, dword ptr [0x10097c68] */
  EAX = (r32((uint32_t)(0x10097c68)));
  /* 1008a239 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a23c jne 0x1008a279 */
  if (!C.zf) goto L_1008a279;
  /* 1008a23e push 9 */
  push32((uint32_t)(0x9u));
  /* 1008a240 call 0x1008a053 */
  push32(0x1008a245u); f_1008a053();
  /* 1008a245 pop ecx */
  ECX = (pop32());
  /* 1008a246 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1008a24a push esi */
  push32((uint32_t)(ESI));
  /* 1008a24b call 0x1008af87 */
  push32(0x1008a250u); f_1008af87();
  /* 1008a250 pop ecx */
  ECX = (pop32());
  /* 1008a251 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1008a254 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008a256 je 0x1008a261 */
  if (C.zf) goto L_1008a261;
  /* 1008a258 push esi */
  push32((uint32_t)(ESI));
  /* 1008a259 push eax */
  push32((uint32_t)(EAX));
  /* 1008a25a call 0x1008afb2 */
  push32(0x1008a25fu); f_1008afb2();
  /* 1008a25f pop ecx */
  ECX = (pop32());
  /* 1008a260 pop ecx */
  ECX = (pop32());
L_1008a261:;
  /* 1008a261 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1008a265 call 0x1008a270 */
  push32(0x1008a26au); f_1008a270();
  /* 1008a26a cmp dword ptr [ebp - 0x1c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a26e jmp 0x1008a2c1 */
  goto L_1008a2c1;
  /* 1008a270 push 9 */
  push32((uint32_t)(0x9u));
  /* 1008a272 call 0x1008a0b4 */
  push32(0x1008a277u); f_1008a0b4();
  /* 1008a277 pop ecx */
  ECX = (pop32());
  /* 1008a278 ret  */
  ESPCHK(0x1008a206u, _esp0);
  ESP += 4; return;
L_1008a279:;
  /* 1008a279 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a27c jne 0x1008a2d1 */
  if (!C.zf) goto L_1008a2d1;
  /* 1008a27e push 9 */
  push32((uint32_t)(0x9u));
  /* 1008a280 call 0x1008a053 */
  push32(0x1008a285u); f_1008a053();
  /* 1008a285 pop ecx */
  ECX = (pop32());
  /* 1008a286 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1008a28d lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1008a290 push eax */
  push32((uint32_t)(EAX));
  /* 1008a291 lea eax, [ebp - 0x28] */
  EAX = ((uint32_t)(EBP + -0x28));
  /* 1008a294 push eax */
  push32((uint32_t)(EAX));
  /* 1008a295 push esi */
  push32((uint32_t)(ESI));
  /* 1008a296 call 0x1008b9ec */
  push32(0x1008a29bu); f_1008b9ec();
  /* 1008a29b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008a29e mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1008a2a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008a2a3 je 0x1008a2b4 */
  if (C.zf) goto L_1008a2b4;
  /* 1008a2a5 push eax */
  push32((uint32_t)(EAX));
  /* 1008a2a6 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 1008a2a9 push dword ptr [ebp - 0x28] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x28))));
  /* 1008a2ac call 0x1008ba43 */
  push32(0x1008a2b1u); f_1008ba43();
  /* 1008a2b1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1008a2b4:;
  /* 1008a2b4 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1008a2b8 call 0x1008a2c8 */
  push32(0x1008a2bdu); f_1008a2c8();
  /* 1008a2bd cmp dword ptr [ebp - 0x24], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1008a2c1:;
  /* 1008a2c1 jne 0x1008a2e0 */
  if (!C.zf) { jmp_ind(0x1008a2e0u); return; }
  /* 1008a2c3 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1008a2c6 jmp 0x1008a2d2 */
  goto L_1008a2d2;
  /* 1008a2c8 push 9 */
  push32((uint32_t)(0x9u));
  /* 1008a2ca call 0x1008a0b4 */
  push32(0x1008a2cfu); f_1008a0b4();
  /* 1008a2cf pop ecx */
  ECX = (pop32());
  /* 1008a2d0 ret  */
  ESPCHK(0x1008a206u, _esp0);
  ESP += 4; return;
L_1008a2d1:;
  /* 1008a2d1 push esi */
  push32((uint32_t)(ESI));
L_1008a2d2:;
  /* 1008a2d2 push 0 */
  push32((uint32_t)(0x0u));
  /* 1008a2d4 push dword ptr [0x10097c64] */
  push32((uint32_t)(r32((uint32_t)(0x10097c64))));
}

/* FUN_1000a270 @ 0x1008a270 (9 bytes, 4 insns) */
void f_1008a270(void) {
  FTRACE(0x1008a270u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008a270 push 9 */
  push32((uint32_t)(0x9u));
  /* 1008a272 call 0x1008a0b4 */
  push32(0x1008a277u); f_1008a0b4();
  /* 1008a277 pop ecx */
  ECX = (pop32());
  /* 1008a278 ret  */
  ESPCHK(0x1008a270u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a2c8 @ 0x1008a2c8 (9 bytes, 4 insns) */
void f_1008a2c8(void) {
  FTRACE(0x1008a2c8u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008a2c8 push 9 */
  push32((uint32_t)(0x9u));
  /* 1008a2ca call 0x1008a0b4 */
  push32(0x1008a2cfu); f_1008a0b4();
  /* 1008a2cf pop ecx */
  ECX = (pop32());
  /* 1008a2d0 ret  */
  ESPCHK(0x1008a2c8u, _esp0);
  ESP += 4; return;
}

/* _malloc @ 0x1008a2ef (18 bytes, 6 insns) */
void f_1008a2ef(void) {
  FTRACE(0x1008a2efu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008a2ef push dword ptr [0x100968b0] */
  push32((uint32_t)(r32((uint32_t)(0x100968b0))));
  /* 1008a2f5 push dword ptr [esp + 8] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x8))));
  /* 1008a2f9 call 0x1008a301 */
  push32(0x1008a2feu); f_1008a301();
  /* 1008a2fe pop ecx */
  ECX = (pop32());
  /* 1008a2ff pop ecx */
  ECX = (pop32());
  /* 1008a300 ret  */
  ESPCHK(0x1008a2efu, _esp0);
  ESP += 4; return;
}

/* __nh_malloc @ 0x1008a301 (44 bytes, 16 insns) */
void f_1008a301(void) {
  FTRACE(0x1008a301u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008a301 cmp dword ptr [esp + 4], -0x20 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x4))),_b=(0xffffffe0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a306 ja 0x1008a32a */
  if ((!C.cf&&!C.zf)) goto L_1008a32a;
L_1008a308:;
  /* 1008a308 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1008a30c call 0x1008a32d */
  push32(0x1008a311u); f_1008a32d();
  /* 1008a311 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008a313 pop ecx */
  ECX = (pop32());
  /* 1008a314 jne 0x1008a32c */
  if (!C.zf) goto L_1008a32c;
  /* 1008a316 cmp dword ptr [esp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x8))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a31a je 0x1008a32c */
  if (C.zf) goto L_1008a32c;
  /* 1008a31c push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1008a320 call 0x1008cf5a */
  push32(0x1008a325u); f_1008cf5a();
  /* 1008a325 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008a327 pop ecx */
  ECX = (pop32());
  /* 1008a328 jne 0x1008a308 */
  if (!C.zf) goto L_1008a308;
L_1008a32a:;
  /* 1008a32a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1008a32c:;
  /* 1008a32c ret  */
  ESPCHK(0x1008a301u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a32d @ 0x1008a32d (231 bytes, 81 insns) */
void f_1008a32d(void) {
  FTRACE(0x1008a32du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008a32d push ebp */
  push32((uint32_t)(EBP));
  /* 1008a32e mov ebp, esp */
  EBP = (ESP);
  /* 1008a330 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1008a332 push 0x1008e500 */
  push32((uint32_t)(0x1008e500u));
  /* 1008a337 push 0x1008d070 */
  push32((uint32_t)(0x1008d070u));
  /* 1008a33c mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1008a342 push eax */
  push32((uint32_t)(EAX));
  /* 1008a343 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1008a34a sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008a34d push ebx */
  push32((uint32_t)(EBX));
  /* 1008a34e push esi */
  push32((uint32_t)(ESI));
  /* 1008a34f push edi */
  push32((uint32_t)(EDI));
  /* 1008a350 mov eax, dword ptr [0x10097c68] */
  EAX = (r32((uint32_t)(0x10097c68)));
  /* 1008a355 cmp eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a358 jne 0x1008a39d */
  if (!C.zf) goto L_1008a39d;
  /* 1008a35a mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1008a35d cmp esi, dword ptr [0x10096a10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10096a10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a363 ja 0x1008a3fc */
  if ((!C.cf&&!C.zf)) goto L_1008a3fc;
  /* 1008a369 push 9 */
  push32((uint32_t)(0x9u));
  /* 1008a36b call 0x1008a053 */
  push32(0x1008a370u); f_1008a053();
  /* 1008a370 pop ecx */
  ECX = (pop32());
  /* 1008a371 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1008a375 push esi */
  push32((uint32_t)(ESI));
  /* 1008a376 call 0x1008b2db */
  push32(0x1008a37bu); f_1008b2db();
  /* 1008a37b pop ecx */
  ECX = (pop32());
  /* 1008a37c mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1008a37f or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1008a383 call 0x1008a394 */
  push32(0x1008a388u); f_1008a394();
  /* 1008a388 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1008a38b test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008a38d je 0x1008a3fc */
  if (C.zf) goto L_1008a3fc;
  /* 1008a38f jmp 0x1008a41a */
  jmp_ind(0x1008a41au); return;
  /* 1008a394 push 9 */
  push32((uint32_t)(0x9u));
  /* 1008a396 call 0x1008a0b4 */
  push32(0x1008a39bu); f_1008a0b4();
  /* 1008a39b pop ecx */
  ECX = (pop32());
  /* 1008a39c ret  */
  ESPCHK(0x1008a32du, _esp0);
  ESP += 4; return;
L_1008a39d:;
  /* 1008a39d cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a3a0 jne 0x1008a3fc */
  if (!C.zf) goto L_1008a3fc;
  /* 1008a3a2 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1008a3a5 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008a3a7 je 0x1008a3b1 */
  if (C.zf) goto L_1008a3b1;
  /* 1008a3a9 lea esi, [eax + 0xf] */
  ESI = ((uint32_t)(EAX + 0xf));
  /* 1008a3ac and esi, 0xfffffff0 */
  { uint32_t _r=(ESI)&(0xfffffff0u); ESI = (_r); fl_logic(_r,32); }
  /* 1008a3af jmp 0x1008a3b4 */
  goto L_1008a3b4;
L_1008a3b1:;
  /* 1008a3b1 push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1008a3b3 pop esi */
  ESI = (pop32());
L_1008a3b4:;
  /* 1008a3b4 mov dword ptr [ebp + 8], esi */
  w32((uint32_t)(EBP + 0x8), (ESI));
  /* 1008a3b7 cmp esi, dword ptr [0x10092ec4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10092ec4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a3bd ja 0x1008a3ed */
  if ((!C.cf&&!C.zf)) goto L_1008a3ed;
  /* 1008a3bf push 9 */
  push32((uint32_t)(0x9u));
  /* 1008a3c1 call 0x1008a053 */
  push32(0x1008a3c6u); f_1008a053();
  /* 1008a3c6 pop ecx */
  ECX = (pop32());
  /* 1008a3c7 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1008a3ce mov eax, esi */
  EAX = (ESI);
  /* 1008a3d0 shr eax, 4 */
  EAX = (sh_shr((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1008a3d3 push eax */
  push32((uint32_t)(EAX));
  /* 1008a3d4 call 0x1008ba88 */
  push32(0x1008a3d9u); f_1008ba88();
  /* 1008a3d9 pop ecx */
  ECX = (pop32());
  /* 1008a3da mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1008a3dd or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1008a3e1 call 0x1008a3f3 */
  push32(0x1008a3e6u); f_1008a3f3();
  /* 1008a3e6 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1008a3e9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008a3eb jne 0x1008a41a */
  if (!C.zf) { jmp_ind(0x1008a41au); return; }
L_1008a3ed:;
  /* 1008a3ed push esi */
  push32((uint32_t)(ESI));
  /* 1008a3ee jmp 0x1008a40c */
  goto L_1008a40c;
  /* 1008a3f0 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1008a3f3 push 9 */
  push32((uint32_t)(0x9u));
  /* 1008a3f5 call 0x1008a0b4 */
  push32(0x1008a3fau); f_1008a0b4();
  /* 1008a3fa pop ecx */
  ECX = (pop32());
  /* 1008a3fb ret  */
  ESPCHK(0x1008a32du, _esp0);
  ESP += 4; return;
L_1008a3fc:;
  /* 1008a3fc mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1008a3ff test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008a401 jne 0x1008a406 */
  if (!C.zf) goto L_1008a406;
  /* 1008a403 push 1 */
  push32((uint32_t)(0x1u));
  /* 1008a405 pop eax */
  EAX = (pop32());
L_1008a406:;
  /* 1008a406 add eax, 0xf */
  { uint32_t _a=(EAX),_b=(0xfu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008a409 and al, 0xf0 */
  { uint32_t _r=(AL)&(0xf0u); AL = (_r); fl_logic(_r,8); }
  /* 1008a40b push eax */
  push32((uint32_t)(EAX));
L_1008a40c:;
  /* 1008a40c push 0 */
  push32((uint32_t)(0x0u));
  /* 1008a40e push dword ptr [0x10097c64] */
  push32((uint32_t)(r32((uint32_t)(0x10097c64))));
}

/* FUN_1000a394 @ 0x1008a394 (9 bytes, 4 insns) */
void f_1008a394(void) {
  FTRACE(0x1008a394u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008a394 push 9 */
  push32((uint32_t)(0x9u));
  /* 1008a396 call 0x1008a0b4 */
  push32(0x1008a39bu); f_1008a0b4();
  /* 1008a39b pop ecx */
  ECX = (pop32());
  /* 1008a39c ret  */
  ESPCHK(0x1008a394u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a3f3 @ 0x1008a3f3 (9 bytes, 4 insns) */
void f_1008a3f3(void) {
  FTRACE(0x1008a3f3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008a3f3 push 9 */
  push32((uint32_t)(0x9u));
  /* 1008a3f5 call 0x1008a0b4 */
  push32(0x1008a3fau); f_1008a0b4();
  /* 1008a3fa pop ecx */
  ECX = (pop32());
  /* 1008a3fb ret  */
  ESPCHK(0x1008a3f3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a429 @ 0x1008a429 (429 bytes, 143 insns) */
void f_1008a429(void) {
  FTRACE(0x1008a429u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008a429 push ebp */
  push32((uint32_t)(EBP));
  /* 1008a42a mov ebp, esp */
  EBP = (ESP);
  /* 1008a42c sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008a42f push ebx */
  push32((uint32_t)(EBX));
  /* 1008a430 push esi */
  push32((uint32_t)(ESI));
  /* 1008a431 push edi */
  push32((uint32_t)(EDI));
  /* 1008a432 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1008a434 call 0x1008a053 */
  push32(0x1008a439u); f_1008a053();
  /* 1008a439 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1008a43c call 0x1008a5d6 */
  push32(0x1008a441u); f_1008a5d6();
  /* 1008a441 mov ebx, eax */
  EBX = (EAX);
  /* 1008a443 pop ecx */
  ECX = (pop32());
  /* 1008a444 cmp ebx, dword ptr [0x10096a14] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10096a14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a44a pop ecx */
  ECX = (pop32());
  /* 1008a44b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1008a44e jne 0x1008a457 */
  if (!C.zf) goto L_1008a457;
L_1008a450:;
  /* 1008a450 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1008a452 jmp 0x1008a5c7 */
  goto L_1008a5c7;
L_1008a457:;
  /* 1008a457 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1008a459 je 0x1008a5b5 */
  if (C.zf) goto L_1008a5b5;
  /* 1008a45f xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1008a461 mov eax, 0x10090db0 */
  EAX = (0x10090db0u);
L_1008a466:;
  /* 1008a466 cmp dword ptr [eax], ebx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a468 je 0x1008a4de */
  if (C.zf) goto L_1008a4de;
  /* 1008a46a add eax, 0x30 */
  { uint32_t _a=(EAX),_b=(0x30u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008a46d inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1008a46e cmp eax, 0x10090ea0 */
  { uint32_t _a=(EAX),_b=(0x10090ea0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a473 jl 0x1008a466 */
  if ((C.sf!=C.of)) goto L_1008a466;
  /* 1008a475 lea eax, [ebp - 0x18] */
  EAX = ((uint32_t)(EBP + -0x18));
  /* 1008a478 push eax */
  push32((uint32_t)(EAX));
  /* 1008a479 push ebx */
  push32((uint32_t)(EBX));
  /* 1008a47a call dword ptr [0x1008e09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e09c))), 0x1008a480u);
  /* 1008a480 push 1 */
  push32((uint32_t)(0x1u));
  /* 1008a482 pop esi */
  ESI = (pop32());
  /* 1008a483 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a485 jne 0x1008a5ac */
  if (!C.zf) goto L_1008a5ac;
  /* 1008a48b push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1008a48d and dword ptr [0x10096c44], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10096c44)))&(0x0u); w32((uint32_t)(0x10096c44), (_r)); fl_logic(_r,32); }
  /* 1008a494 pop ecx */
  ECX = (pop32());
  /* 1008a495 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1008a497 mov edi, 0x10096b40 */
  EDI = (0x10096b40u);
  /* 1008a49c cmp dword ptr [ebp - 0x18], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a49f rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1008a4a1 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1008a4a2 mov dword ptr [0x10096a14], ebx */
  w32((uint32_t)(0x10096a14), (EBX));
  /* 1008a4a8 jbe 0x1008a599 */
  if ((C.cf||C.zf)) goto L_1008a599;
  /* 1008a4ae cmp byte ptr [ebp - 0x12], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x12))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008a4b2 je 0x1008a574 */
  if (C.zf) goto L_1008a574;
  /* 1008a4b8 lea ecx, [ebp - 0x11] */
  ECX = ((uint32_t)(EBP + -0x11));
L_1008a4bb:;
  /* 1008a4bb mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1008a4bd test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1008a4bf je 0x1008a574 */
  if (C.zf) goto L_1008a574;
  /* 1008a4c5 movzx eax, byte ptr [ecx - 1] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX + -0x1))));
  /* 1008a4c9 movzx edx, dl */
  EDX = ((uint32_t)(DL));
L_1008a4cc:;
  /* 1008a4cc cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a4ce ja 0x1008a568 */
  if ((!C.cf&&!C.zf)) goto L_1008a568;
  /* 1008a4d4 or byte ptr [eax + 0x10096b41], 4 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10096b41)))|(0x4u); w8((uint32_t)(EAX + 0x10096b41), (_r)); fl_logic(_r,8); }
  /* 1008a4db inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1008a4dc jmp 0x1008a4cc */
  goto L_1008a4cc;
L_1008a4de:;
  /* 1008a4de and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1008a4e2 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1008a4e4 pop ecx */
  ECX = (pop32());
  /* 1008a4e5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1008a4e7 mov edi, 0x10096b40 */
  EDI = (0x10096b40u);
  /* 1008a4ec lea esi, [edx + edx*2] */
  ESI = ((uint32_t)(EDX + EDX*2));
  /* 1008a4ef rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1008a4f1 shl esi, 4 */
  ESI = (sh_shl((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 1008a4f4 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1008a4f5 lea ebx, [esi + 0x10090dc0] */
  EBX = ((uint32_t)(ESI + 0x10090dc0));
L_1008a4fb:;
  /* 1008a4fb cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008a4fe mov ecx, ebx */
  ECX = (EBX);
  /* 1008a500 je 0x1008a52e */
  if (C.zf) goto L_1008a52e;
L_1008a502:;
  /* 1008a502 mov dl, byte ptr [ecx + 1] */
  DL = (r8((uint32_t)(ECX + 0x1)));
  /* 1008a505 test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1008a507 je 0x1008a52e */
  if (C.zf) goto L_1008a52e;
  /* 1008a509 movzx eax, byte ptr [ecx] */
  EAX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 1008a50c movzx edi, dl */
  EDI = ((uint32_t)(DL));
  /* 1008a50f cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a511 ja 0x1008a527 */
  if ((!C.cf&&!C.zf)) goto L_1008a527;
  /* 1008a513 mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1008a516 mov dl, byte ptr [edx + 0x10090da8] */
  DL = (r8((uint32_t)(EDX + 0x10090da8)));
L_1008a51c:;
  /* 1008a51c or byte ptr [eax + 0x10096b41], dl */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10096b41)))|(DL); w8((uint32_t)(EAX + 0x10096b41), (_r)); fl_logic(_r,8); }
  /* 1008a522 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1008a523 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a525 jbe 0x1008a51c */
  if ((C.cf||C.zf)) goto L_1008a51c;
L_1008a527:;
  /* 1008a527 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1008a528 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1008a529 cmp byte ptr [ecx], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008a52c jne 0x1008a502 */
  if (!C.zf) goto L_1008a502;
L_1008a52e:;
  /* 1008a52e inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1008a531 add ebx, 8 */
  { uint32_t _a=(EBX),_b=(0x8u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008a534 cmp dword ptr [ebp - 4], 4 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a538 jb 0x1008a4fb */
  if (C.cf) goto L_1008a4fb;
  /* 1008a53a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1008a53d mov dword ptr [0x10096a2c], 1 */
  w32((uint32_t)(0x10096a2c), (0x1u));
  /* 1008a547 push eax */
  push32((uint32_t)(EAX));
  /* 1008a548 mov dword ptr [0x10096a14], eax */
  w32((uint32_t)(0x10096a14), (EAX));
  /* 1008a54d call 0x1008a620 */
  push32(0x1008a552u); f_1008a620();
  /* 1008a552 lea esi, [esi + 0x10090db4] */
  ESI = ((uint32_t)(ESI + 0x10090db4));
  /* 1008a558 mov edi, 0x10096a20 */
  EDI = (0x10096a20u);
  /* 1008a55d movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1008a55e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1008a55f pop ecx */
  ECX = (pop32());
  /* 1008a560 mov dword ptr [0x10096c44], eax */
  w32((uint32_t)(0x10096c44), (EAX));
  /* 1008a565 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1008a566 jmp 0x1008a5ba */
  goto L_1008a5ba;
L_1008a568:;
  /* 1008a568 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1008a569 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1008a56a cmp byte ptr [ecx - 1], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + -0x1))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008a56e jne 0x1008a4bb */
  if (!C.zf) goto L_1008a4bb;
L_1008a574:;
  /* 1008a574 mov eax, esi */
  EAX = (ESI);
L_1008a576:;
  /* 1008a576 or byte ptr [eax + 0x10096b41], 8 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10096b41)))|(0x8u); w8((uint32_t)(EAX + 0x10096b41), (_r)); fl_logic(_r,8); }
  /* 1008a57d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1008a57e cmp eax, 0xff */
  { uint32_t _a=(EAX),_b=(0xffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a583 jb 0x1008a576 */
  if (C.cf) goto L_1008a576;
  /* 1008a585 push ebx */
  push32((uint32_t)(EBX));
  /* 1008a586 call 0x1008a620 */
  push32(0x1008a58bu); f_1008a620();
  /* 1008a58b pop ecx */
  ECX = (pop32());
  /* 1008a58c mov dword ptr [0x10096c44], eax */
  w32((uint32_t)(0x10096c44), (EAX));
  /* 1008a591 mov dword ptr [0x10096a2c], esi */
  w32((uint32_t)(0x10096a2c), (ESI));
  /* 1008a597 jmp 0x1008a5a0 */
  goto L_1008a5a0;
L_1008a599:;
  /* 1008a599 and dword ptr [0x10096a2c], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10096a2c)))&(0x0u); w32((uint32_t)(0x10096a2c), (_r)); fl_logic(_r,32); }
L_1008a5a0:;
  /* 1008a5a0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1008a5a2 mov edi, 0x10096a20 */
  EDI = (0x10096a20u);
  /* 1008a5a7 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1008a5a8 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1008a5a9 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1008a5aa jmp 0x1008a5ba */
  goto L_1008a5ba;
L_1008a5ac:;
  /* 1008a5ac cmp dword ptr [0x10096850], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10096850))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a5b3 je 0x1008a5c4 */
  if (C.zf) goto L_1008a5c4;
L_1008a5b5:;
  /* 1008a5b5 call 0x1008a653 */
  push32(0x1008a5bau); f_1008a653();
L_1008a5ba:;
  /* 1008a5ba call 0x1008a67c */
  push32(0x1008a5bfu); f_1008a67c();
  /* 1008a5bf jmp 0x1008a450 */
  goto L_1008a450;
L_1008a5c4:;
  /* 1008a5c4 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_1008a5c7:;
  /* 1008a5c7 push 0x19 */
  push32((uint32_t)(0x19u));
  /* 1008a5c9 call 0x1008a0b4 */
  push32(0x1008a5ceu); f_1008a0b4();
  /* 1008a5ce pop ecx */
  ECX = (pop32());
  /* 1008a5cf mov eax, esi */
  EAX = (ESI);
  /* 1008a5d1 pop edi */
  EDI = (pop32());
  /* 1008a5d2 pop esi */
  ESI = (pop32());
  /* 1008a5d3 pop ebx */
  EBX = (pop32());
  /* 1008a5d4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1008a5d5 ret  */
  ESPCHK(0x1008a429u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a5d6 @ 0x1008a5d6 (74 bytes, 15 insns) */
void f_1008a5d6(void) {
  FTRACE(0x1008a5d6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008a5d6 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1008a5da and dword ptr [0x10096850], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10096850)))&(0x0u); w32((uint32_t)(0x10096850), (_r)); fl_logic(_r,32); }
  /* 1008a5e1 cmp eax, -2 */
  { uint32_t _a=(EAX),_b=(0xfffffffeu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a5e4 jne 0x1008a5f6 */
  if (!C.zf) goto L_1008a5f6;
  /* 1008a5e6 mov dword ptr [0x10096850], 1 */
  w32((uint32_t)(0x10096850), (0x1u));
  /* 1008a5f0 jmp dword ptr [0x1008e0a4] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1008e0a4)))); return;
L_1008a5f6:;
  /* 1008a5f6 cmp eax, -3 */
  { uint32_t _a=(EAX),_b=(0xfffffffdu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a5f9 jne 0x1008a60b */
  if (!C.zf) goto L_1008a60b;
  /* 1008a5fb mov dword ptr [0x10096850], 1 */
  w32((uint32_t)(0x10096850), (0x1u));
  /* 1008a605 jmp dword ptr [0x1008e0a0] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1008e0a0)))); return;
L_1008a60b:;
  /* 1008a60b cmp eax, -4 */
  { uint32_t _a=(EAX),_b=(0xfffffffcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a60e jne 0x1008a61f */
  if (!C.zf) goto L_1008a61f;
  /* 1008a610 mov eax, dword ptr [0x10096888] */
  EAX = (r32((uint32_t)(0x10096888)));
  /* 1008a615 mov dword ptr [0x10096850], 1 */
  w32((uint32_t)(0x10096850), (0x1u));
L_1008a61f:;
  /* 1008a61f ret  */
  ESPCHK(0x1008a5d6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a620 @ 0x1008a620 (51 bytes, 19 insns) */
void f_1008a620(void) {
  FTRACE(0x1008a620u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008a620 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1008a624 sub eax, 0x3a4 */
  { uint32_t _a=(EAX),_b=(0x3a4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008a629 je 0x1008a64d */
  if (C.zf) goto L_1008a64d;
  /* 1008a62b sub eax, 4 */
  { uint32_t _a=(EAX),_b=(0x4u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008a62e je 0x1008a647 */
  if (C.zf) goto L_1008a647;
  /* 1008a630 sub eax, 0xd */
  { uint32_t _a=(EAX),_b=(0xdu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008a633 je 0x1008a641 */
  if (C.zf) goto L_1008a641;
  /* 1008a635 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1008a636 je 0x1008a63b */
  if (C.zf) goto L_1008a63b;
  /* 1008a638 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1008a63a ret  */
  ESPCHK(0x1008a620u, _esp0);
  ESP += 4; return;
L_1008a63b:;
  /* 1008a63b mov eax, 0x404 */
  EAX = (0x404u);
  /* 1008a640 ret  */
  ESPCHK(0x1008a620u, _esp0);
  ESP += 4; return;
L_1008a641:;
  /* 1008a641 mov eax, 0x412 */
  EAX = (0x412u);
  /* 1008a646 ret  */
  ESPCHK(0x1008a620u, _esp0);
  ESP += 4; return;
L_1008a647:;
  /* 1008a647 mov eax, 0x804 */
  EAX = (0x804u);
  /* 1008a64c ret  */
  ESPCHK(0x1008a620u, _esp0);
  ESP += 4; return;
L_1008a64d:;
  /* 1008a64d mov eax, 0x411 */
  EAX = (0x411u);
  /* 1008a652 ret  */
  ESPCHK(0x1008a620u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a653 @ 0x1008a653 (41 bytes, 17 insns) */
void f_1008a653(void) {
  FTRACE(0x1008a653u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008a653 push edi */
  push32((uint32_t)(EDI));
  /* 1008a654 push 0x40 */
  push32((uint32_t)(0x40u));
  /* 1008a656 pop ecx */
  ECX = (pop32());
  /* 1008a657 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1008a659 mov edi, 0x10096b40 */
  EDI = (0x10096b40u);
  /* 1008a65e rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1008a660 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1008a661 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1008a663 mov edi, 0x10096a20 */
  EDI = (0x10096a20u);
  /* 1008a668 mov dword ptr [0x10096a14], eax */
  w32((uint32_t)(0x10096a14), (EAX));
  /* 1008a66d mov dword ptr [0x10096a2c], eax */
  w32((uint32_t)(0x10096a2c), (EAX));
  /* 1008a672 mov dword ptr [0x10096c44], eax */
  w32((uint32_t)(0x10096c44), (EAX));
  /* 1008a677 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1008a678 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1008a679 stosd dword ptr es:[edi], eax */
  w32(EDI, EAX); EDI+=(C.df?-4:4);
  /* 1008a67a pop edi */
  EDI = (pop32());
  /* 1008a67b ret  */
  ESPCHK(0x1008a653u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a67c @ 0x1008a67c (389 bytes, 124 insns) */
void f_1008a67c(void) {
  FTRACE(0x1008a67cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008a67c push ebp */
  push32((uint32_t)(EBP));
  /* 1008a67d mov ebp, esp */
  EBP = (ESP);
  /* 1008a67f sub esp, 0x514 */
  { uint32_t _a=(ESP),_b=(0x514u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008a685 lea eax, [ebp - 0x14] */
  EAX = ((uint32_t)(EBP + -0x14));
  /* 1008a688 push esi */
  push32((uint32_t)(ESI));
  /* 1008a689 push eax */
  push32((uint32_t)(EAX));
  /* 1008a68a push dword ptr [0x10096a14] */
  push32((uint32_t)(r32((uint32_t)(0x10096a14))));
  /* 1008a690 call dword ptr [0x1008e09c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e09c))), 0x1008a696u);
  /* 1008a696 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a699 jne 0x1008a7b5 */
  if (!C.zf) goto L_1008a7b5;
  /* 1008a69f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1008a6a1 mov esi, 0x100 */
  ESI = (0x100u);
L_1008a6a6:;
  /* 1008a6a6 mov byte ptr [ebp + eax - 0x114], al */
  w8((uint32_t)(EBP + EAX*1 + -0x114), (AL));
  /* 1008a6ad inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1008a6ae cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a6b0 jb 0x1008a6a6 */
  if (C.cf) goto L_1008a6a6;
  /* 1008a6b2 mov al, byte ptr [ebp - 0xe] */
  AL = (r8((uint32_t)(EBP + -0xe)));
  /* 1008a6b5 mov byte ptr [ebp - 0x114], 0x20 */
  w8((uint32_t)(EBP + -0x114), (0x20u));
  /* 1008a6bc test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1008a6be je 0x1008a6f7 */
  if (C.zf) goto L_1008a6f7;
  /* 1008a6c0 push ebx */
  push32((uint32_t)(EBX));
  /* 1008a6c1 push edi */
  push32((uint32_t)(EDI));
  /* 1008a6c2 lea edx, [ebp - 0xd] */
  EDX = ((uint32_t)(EBP + -0xd));
L_1008a6c5:;
  /* 1008a6c5 movzx ecx, byte ptr [edx] */
  ECX = ((uint32_t)(r8((uint32_t)(EDX))));
  /* 1008a6c8 movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 1008a6cb cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a6cd ja 0x1008a6ec */
  if ((!C.cf&&!C.zf)) goto L_1008a6ec;
  /* 1008a6cf sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008a6d1 lea edi, [ebp + eax - 0x114] */
  EDI = ((uint32_t)(EBP + EAX*1 + -0x114));
  /* 1008a6d8 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1008a6d9 mov eax, 0x20202020 */
  EAX = (0x20202020u);
  /* 1008a6de mov ebx, ecx */
  EBX = (ECX);
  /* 1008a6e0 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1008a6e3 rep stosd dword ptr es:[edi], eax */
  while (ECX!=0) { ECX--; w32(EDI, EAX); EDI+=(C.df?-4:4); }
  /* 1008a6e5 mov ecx, ebx */
  ECX = (EBX);
  /* 1008a6e7 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1008a6ea rep stosb byte ptr es:[edi], al */
  while (ECX!=0) { ECX--; w8(EDI, AL); EDI+=(C.df?-1:1); }
L_1008a6ec:;
  /* 1008a6ec inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1008a6ed inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1008a6ee mov al, byte ptr [edx - 1] */
  AL = (r8((uint32_t)(EDX + -0x1)));
  /* 1008a6f1 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1008a6f3 jne 0x1008a6c5 */
  if (!C.zf) goto L_1008a6c5;
  /* 1008a6f5 pop edi */
  EDI = (pop32());
  /* 1008a6f6 pop ebx */
  EBX = (pop32());
L_1008a6f7:;
  /* 1008a6f7 push 0 */
  push32((uint32_t)(0x0u));
  /* 1008a6f9 lea eax, [ebp - 0x514] */
  EAX = ((uint32_t)(EBP + -0x514));
  /* 1008a6ff push dword ptr [0x10096c44] */
  push32((uint32_t)(r32((uint32_t)(0x10096c44))));
  /* 1008a705 push dword ptr [0x10096a14] */
  push32((uint32_t)(r32((uint32_t)(0x10096a14))));
  /* 1008a70b push eax */
  push32((uint32_t)(EAX));
  /* 1008a70c lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 1008a712 push esi */
  push32((uint32_t)(ESI));
  /* 1008a713 push eax */
  push32((uint32_t)(EAX));
  /* 1008a714 push 1 */
  push32((uint32_t)(0x1u));
  /* 1008a716 call 0x1008c2bd */
  push32(0x1008a71bu); f_1008c2bd();
  /* 1008a71b push 0 */
  push32((uint32_t)(0x0u));
  /* 1008a71d lea eax, [ebp - 0x214] */
  EAX = ((uint32_t)(EBP + -0x214));
  /* 1008a723 push dword ptr [0x10096a14] */
  push32((uint32_t)(r32((uint32_t)(0x10096a14))));
  /* 1008a729 push esi */
  push32((uint32_t)(ESI));
  /* 1008a72a push eax */
  push32((uint32_t)(EAX));
  /* 1008a72b lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 1008a731 push esi */
  push32((uint32_t)(ESI));
  /* 1008a732 push eax */
  push32((uint32_t)(EAX));
  /* 1008a733 push esi */
  push32((uint32_t)(ESI));
  /* 1008a734 push dword ptr [0x10096c44] */
  push32((uint32_t)(r32((uint32_t)(0x10096c44))));
  /* 1008a73a call 0x1008c406 */
  push32(0x1008a73fu); f_1008c406();
  /* 1008a73f push 0 */
  push32((uint32_t)(0x0u));
  /* 1008a741 lea eax, [ebp - 0x314] */
  EAX = ((uint32_t)(EBP + -0x314));
  /* 1008a747 push dword ptr [0x10096a14] */
  push32((uint32_t)(r32((uint32_t)(0x10096a14))));
  /* 1008a74d push esi */
  push32((uint32_t)(ESI));
  /* 1008a74e push eax */
  push32((uint32_t)(EAX));
  /* 1008a74f lea eax, [ebp - 0x114] */
  EAX = ((uint32_t)(EBP + -0x114));
  /* 1008a755 push esi */
  push32((uint32_t)(ESI));
  /* 1008a756 push eax */
  push32((uint32_t)(EAX));
  /* 1008a757 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1008a75c push dword ptr [0x10096c44] */
  push32((uint32_t)(r32((uint32_t)(0x10096c44))));
  /* 1008a762 call 0x1008c406 */
  push32(0x1008a767u); f_1008c406();
  /* 1008a767 add esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008a76a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1008a76c lea ecx, [ebp - 0x514] */
  ECX = ((uint32_t)(EBP + -0x514));
L_1008a772:;
  /* 1008a772 mov dx, word ptr [ecx] */
  DX = (r16((uint32_t)(ECX)));
  /* 1008a775 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 1008a778 je 0x1008a790 */
  if (C.zf) goto L_1008a790;
  /* 1008a77a or byte ptr [eax + 0x10096b41], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10096b41)))|(0x10u); w8((uint32_t)(EAX + 0x10096b41), (_r)); fl_logic(_r,8); }
  /* 1008a781 mov dl, byte ptr [ebp + eax - 0x214] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x214)));
L_1008a788:;
  /* 1008a788 mov byte ptr [eax + 0x10096a40], dl */
  w8((uint32_t)(EAX + 0x10096a40), (DL));
  /* 1008a78e jmp 0x1008a7ac */
  goto L_1008a7ac;
L_1008a790:;
  /* 1008a790 test dl, 2 */
  { uint32_t _r=(DL)&(0x2u); fl_logic(_r,8); }
  /* 1008a793 je 0x1008a7a5 */
  if (C.zf) goto L_1008a7a5;
  /* 1008a795 or byte ptr [eax + 0x10096b41], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10096b41)))|(0x20u); w8((uint32_t)(EAX + 0x10096b41), (_r)); fl_logic(_r,8); }
  /* 1008a79c mov dl, byte ptr [ebp + eax - 0x314] */
  DL = (r8((uint32_t)(EBP + EAX*1 + -0x314)));
  /* 1008a7a3 jmp 0x1008a788 */
  goto L_1008a788;
L_1008a7a5:;
  /* 1008a7a5 and byte ptr [eax + 0x10096a40], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10096a40)))&(0x0u); w8((uint32_t)(EAX + 0x10096a40), (_r)); fl_logic(_r,8); }
L_1008a7ac:;
  /* 1008a7ac inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1008a7ad inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1008a7ae inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1008a7af cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a7b1 jb 0x1008a772 */
  if (C.cf) goto L_1008a772;
  /* 1008a7b3 jmp 0x1008a7fe */
  goto L_1008a7fe;
L_1008a7b5:;
  /* 1008a7b5 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1008a7b7 mov esi, 0x100 */
  ESI = (0x100u);
L_1008a7bc:;
  /* 1008a7bc cmp eax, 0x41 */
  { uint32_t _a=(EAX),_b=(0x41u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a7bf jb 0x1008a7da */
  if (C.cf) goto L_1008a7da;
  /* 1008a7c1 cmp eax, 0x5a */
  { uint32_t _a=(EAX),_b=(0x5au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a7c4 ja 0x1008a7da */
  if ((!C.cf&&!C.zf)) goto L_1008a7da;
  /* 1008a7c6 or byte ptr [eax + 0x10096b41], 0x10 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10096b41)))|(0x10u); w8((uint32_t)(EAX + 0x10096b41), (_r)); fl_logic(_r,8); }
  /* 1008a7cd mov cl, al */
  CL = (AL);
  /* 1008a7cf add cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a+_b; CL = (_r); fl_add(_a,_b,_r,8); }
L_1008a7d2:;
  /* 1008a7d2 mov byte ptr [eax + 0x10096a40], cl */
  w8((uint32_t)(EAX + 0x10096a40), (CL));
  /* 1008a7d8 jmp 0x1008a7f9 */
  goto L_1008a7f9;
L_1008a7da:;
  /* 1008a7da cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a7dd jb 0x1008a7f2 */
  if (C.cf) goto L_1008a7f2;
  /* 1008a7df cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a7e2 ja 0x1008a7f2 */
  if ((!C.cf&&!C.zf)) goto L_1008a7f2;
  /* 1008a7e4 or byte ptr [eax + 0x10096b41], 0x20 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10096b41)))|(0x20u); w8((uint32_t)(EAX + 0x10096b41), (_r)); fl_logic(_r,8); }
  /* 1008a7eb mov cl, al */
  CL = (AL);
  /* 1008a7ed sub cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1008a7f0 jmp 0x1008a7d2 */
  goto L_1008a7d2;
L_1008a7f2:;
  /* 1008a7f2 and byte ptr [eax + 0x10096a40], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x10096a40)))&(0x0u); w8((uint32_t)(EAX + 0x10096a40), (_r)); fl_logic(_r,8); }
L_1008a7f9:;
  /* 1008a7f9 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1008a7fa cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a7fc jb 0x1008a7bc */
  if (C.cf) goto L_1008a7bc;
L_1008a7fe:;
  /* 1008a7fe pop esi */
  ESI = (pop32());
  /* 1008a7ff leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1008a800 ret  */
  ESPCHK(0x1008a67cu, _esp0);
  ESP += 4; return;
}

/* FUN_1000a801 @ 0x1008a801 (28 bytes, 7 insns) */
void f_1008a801(void) {
  FTRACE(0x1008a801u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008a801 cmp dword ptr [0x10097d88], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10097d88))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a808 jne 0x1008a81c */
  if (!C.zf) goto L_1008a81c;
  /* 1008a80a push -3 */
  push32((uint32_t)(0xfffffffdu));
  /* 1008a80c call 0x1008a429 */
  push32(0x1008a811u); f_1008a429();
  /* 1008a811 pop ecx */
  ECX = (pop32());
  /* 1008a812 mov dword ptr [0x10097d88], 1 */
  w32((uint32_t)(0x10097d88), (0x1u));
L_1008a81c:;
  /* 1008a81c ret  */
  ESPCHK(0x1008a801u, _esp0);
  ESP += 4; return;
}

/* FUN_1000a820 @ 0x1008a820 (664 bytes, 263 insns) [15 switch table(s)] */
void f_1008a820(void) {
  FTRACE(0x1008a820u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008a820 push ebp */
  push32((uint32_t)(EBP));
  /* 1008a821 mov ebp, esp */
  EBP = (ESP);
  /* 1008a823 push edi */
  push32((uint32_t)(EDI));
  /* 1008a824 push esi */
  push32((uint32_t)(ESI));
  /* 1008a825 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1008a828 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1008a82b mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1008a82e mov eax, ecx */
  EAX = (ECX);
  /* 1008a830 mov edx, ecx */
  EDX = (ECX);
  /* 1008a832 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008a834 cmp edi, esi */
  { uint32_t _a=(EDI),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a836 jbe 0x1008a840 */
  if ((C.cf||C.zf)) goto L_1008a840;
  /* 1008a838 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a83a jb 0x1008a9b8 */
  if (C.cf) goto L_1008a9b8;
L_1008a840:;
  /* 1008a840 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1008a846 jne 0x1008a85c */
  if (!C.zf) goto L_1008a85c;
  /* 1008a848 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1008a84b and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1008a84e cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a851 jb 0x1008a87c */
  if (C.cf) goto L_1008a87c;
  /* 1008a853 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1008a855 jmp dword ptr [edx*4 + 0x1008a968] */
  switch (EDX) {
    case 0: goto L_1008a978;
    case 1: goto L_1008a980;
    case 2: goto L_1008a98c;
    case 3: goto L_1008a9a0;
    default: x86_unimpl("switch@0x1008a855 out of table"); return;
  }
L_1008a85c:;
  /* 1008a85c mov eax, edi */
  EAX = (EDI);
  /* 1008a85e mov edx, 3 */
  EDX = (0x3u);
  /* 1008a863 sub ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008a866 jb 0x1008a874 */
  if (C.cf) goto L_1008a874;
  /* 1008a868 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1008a86b add ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008a86d jmp dword ptr [eax*4 + 0x1008a880] */
  switch (EAX) {
    case 1: goto L_1008a890;
    case 2: goto L_1008a8bc;
    case 3: goto L_1008a8e0;
    default: x86_unimpl("switch@0x1008a86d out of table"); return;
  }
L_1008a874:;
  /* 1008a874 jmp dword ptr [ecx*4 + 0x1008a978] */
  jmp_ind((uint32_t)(r32((uint32_t)(ECX*4 + 0x1008a978)))); return;
  /* 1008a87b nop  */
  /* nop */
L_1008a87c:;
  /* 1008a87c jmp dword ptr [ecx*4 + 0x1008a8fc] */
  switch (ECX) {
    case 0: goto L_1008a95f;
    case 1: goto L_1008a94c;
    case 2: goto L_1008a944;
    case 3: goto L_1008a93c;
    case 4: goto L_1008a934;
    case 5: goto L_1008a92c;
    case 6: goto L_1008a924;
    case 7: goto L_1008a91c;
    default: x86_unimpl("switch@0x1008a87c out of table"); return;
  }
  /* 1008a883 nop  */
  /* nop */
L_1008a890:;
  /* 1008a890 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1008a892 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1008a894 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1008a896 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1008a899 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1008a89c mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1008a89f shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1008a8a2 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1008a8a5 add esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1008a8a8 add edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1008a8ab cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a8ae jb 0x1008a87c */
  if (C.cf) goto L_1008a87c;
  /* 1008a8b0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1008a8b2 jmp dword ptr [edx*4 + 0x1008a968] */
  switch (EDX) {
    case 0: goto L_1008a978;
    case 1: goto L_1008a980;
    case 2: goto L_1008a98c;
    case 3: goto L_1008a9a0;
    default: x86_unimpl("switch@0x1008a8b2 out of table"); return;
  }
  /* 1008a8b9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1008a8bc:;
  /* 1008a8bc and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1008a8be mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1008a8c0 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1008a8c2 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1008a8c5 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1008a8c8 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1008a8cb add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1008a8ce add edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1008a8d1 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a8d4 jb 0x1008a87c */
  if (C.cf) goto L_1008a87c;
  /* 1008a8d6 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1008a8d8 jmp dword ptr [edx*4 + 0x1008a968] */
  switch (EDX) {
    case 0: goto L_1008a978;
    case 1: goto L_1008a980;
    case 2: goto L_1008a98c;
    case 3: goto L_1008a9a0;
    default: x86_unimpl("switch@0x1008a8d8 out of table"); return;
  }
  /* 1008a8df nop  */
  /* nop */
L_1008a8e0:;
  /* 1008a8e0 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1008a8e2 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1008a8e4 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1008a8e6 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1008a8e7 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1008a8ea inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1008a8eb cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a8ee jb 0x1008a87c */
  if (C.cf) goto L_1008a87c;
  /* 1008a8f0 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1008a8f2 jmp dword ptr [edx*4 + 0x1008a968] */
  switch (EDX) {
    case 0: goto L_1008a978;
    case 1: goto L_1008a980;
    case 2: goto L_1008a98c;
    case 3: goto L_1008a9a0;
    default: x86_unimpl("switch@0x1008a8f2 out of table"); return;
  }
  /* 1008a8f9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1008a91c:;
  /* 1008a91c mov eax, dword ptr [esi + ecx*4 - 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x1c)));
  /* 1008a920 mov dword ptr [edi + ecx*4 - 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x1c), (EAX));
L_1008a924:;
  /* 1008a924 mov eax, dword ptr [esi + ecx*4 - 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x18)));
  /* 1008a928 mov dword ptr [edi + ecx*4 - 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x18), (EAX));
L_1008a92c:;
  /* 1008a92c mov eax, dword ptr [esi + ecx*4 - 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x14)));
  /* 1008a930 mov dword ptr [edi + ecx*4 - 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x14), (EAX));
L_1008a934:;
  /* 1008a934 mov eax, dword ptr [esi + ecx*4 - 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x10)));
  /* 1008a938 mov dword ptr [edi + ecx*4 - 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x10), (EAX));
L_1008a93c:;
  /* 1008a93c mov eax, dword ptr [esi + ecx*4 - 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0xc)));
  /* 1008a940 mov dword ptr [edi + ecx*4 - 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + -0xc), (EAX));
L_1008a944:;
  /* 1008a944 mov eax, dword ptr [esi + ecx*4 - 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x8)));
  /* 1008a948 mov dword ptr [edi + ecx*4 - 8], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x8), (EAX));
L_1008a94c:;
  /* 1008a94c mov eax, dword ptr [esi + ecx*4 - 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + -0x4)));
  /* 1008a950 mov dword ptr [edi + ecx*4 - 4], eax */
  w32((uint32_t)(EDI + ECX*4 + -0x4), (EAX));
  /* 1008a954 lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1008a95b add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1008a95d add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1008a95f:;
  /* 1008a95f jmp dword ptr [edx*4 + 0x1008a968] */
  switch (EDX) {
    case 0: goto L_1008a978;
    case 1: goto L_1008a980;
    case 2: goto L_1008a98c;
    case 3: goto L_1008a9a0;
    default: x86_unimpl("switch@0x1008a95f out of table"); return;
  }
  /* 1008a966 mov edi, edi */
  EDI = (EDI);
L_1008a978:;
  /* 1008a978 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1008a97b pop esi */
  ESI = (pop32());
  /* 1008a97c pop edi */
  EDI = (pop32());
  /* 1008a97d leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1008a97e ret  */
  ESPCHK(0x1008a820u, _esp0);
  ESP += 4; return;
  /* 1008a97f nop  */
  /* nop */
L_1008a980:;
  /* 1008a980 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1008a982 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1008a984 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1008a987 pop esi */
  ESI = (pop32());
  /* 1008a988 pop edi */
  EDI = (pop32());
  /* 1008a989 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1008a98a ret  */
  ESPCHK(0x1008a820u, _esp0);
  ESP += 4; return;
  /* 1008a98b nop  */
  /* nop */
L_1008a98c:;
  /* 1008a98c mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1008a98e mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1008a990 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1008a993 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1008a996 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1008a999 pop esi */
  ESI = (pop32());
  /* 1008a99a pop edi */
  EDI = (pop32());
  /* 1008a99b leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1008a99c ret  */
  ESPCHK(0x1008a820u, _esp0);
  ESP += 4; return;
  /* 1008a99d lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1008a9a0:;
  /* 1008a9a0 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1008a9a2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1008a9a4 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1008a9a7 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1008a9aa mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1008a9ad mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1008a9b0 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1008a9b3 pop esi */
  ESI = (pop32());
  /* 1008a9b4 pop edi */
  EDI = (pop32());
  /* 1008a9b5 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1008a9b6 ret  */
  ESPCHK(0x1008a820u, _esp0);
  ESP += 4; return;
  /* 1008a9b7 nop  */
  /* nop */
L_1008a9b8:;
  /* 1008a9b8 lea esi, [ecx + esi - 4] */
  ESI = ((uint32_t)(ECX + ESI*1 + -0x4));
  /* 1008a9bc lea edi, [ecx + edi - 4] */
  EDI = ((uint32_t)(ECX + EDI*1 + -0x4));
  /* 1008a9c0 test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1008a9c6 jne 0x1008a9ec */
  if (!C.zf) goto L_1008a9ec;
  /* 1008a9c8 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1008a9cb and edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); EDX = (_r); fl_logic(_r,32); }
  /* 1008a9ce cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a9d1 jb 0x1008a9e0 */
  if (C.cf) goto L_1008a9e0;
  /* 1008a9d3 std  */
  C.df=1;
  /* 1008a9d4 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1008a9d6 cld  */
  C.df=0;
  /* 1008a9d7 jmp dword ptr [edx*4 + 0x1008ab00] */
  switch (EDX) {
    case 0: goto L_1008ab10;
    case 1: goto L_1008ab18;
    case 2: goto L_1008ab28;
    case 3: goto L_1008ab3c;
    default: x86_unimpl("switch@0x1008a9d7 out of table"); return;
  }
  /* 1008a9de mov edi, edi */
  EDI = (EDI);
L_1008a9e0:;
  /* 1008a9e0 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1008a9e2 jmp dword ptr [ecx*4 + 0x1008aab0] */
  switch (ECX) {
    case 0: goto L_1008aaf7;
    default: x86_unimpl("switch@0x1008a9e2 out of table"); return;
  }
  /* 1008a9e9 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1008a9ec:;
  /* 1008a9ec mov eax, edi */
  EAX = (EDI);
  /* 1008a9ee mov edx, 3 */
  EDX = (0x3u);
  /* 1008a9f3 cmp ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008a9f6 jb 0x1008aa04 */
  if (C.cf) goto L_1008aa04;
  /* 1008a9f8 and eax, 3 */
  { uint32_t _r=(EAX)&(0x3u); EAX = (_r); fl_logic(_r,32); }
  /* 1008a9fb sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008a9fd jmp dword ptr [eax*4 + 0x1008aa08] */
  switch (EAX) {
    case 1: goto L_1008aa18;
    case 2: goto L_1008aa38;
    case 3: goto L_1008aa60;
    default: x86_unimpl("switch@0x1008a9fd out of table"); return;
  }
L_1008aa04:;
  /* 1008aa04 jmp dword ptr [ecx*4 + 0x1008ab00] */
  switch (ECX) {
    case 0: goto L_1008ab10;
    case 1: goto L_1008ab18;
    case 2: goto L_1008ab28;
    case 3: goto L_1008ab3c;
    default: x86_unimpl("switch@0x1008aa04 out of table"); return;
  }
  /* 1008aa0b nop  */
  /* nop */
L_1008aa18:;
  /* 1008aa18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1008aa1b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1008aa1d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1008aa20 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1008aa21 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1008aa24 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1008aa25 cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008aa28 jb 0x1008a9e0 */
  if (C.cf) goto L_1008a9e0;
  /* 1008aa2a std  */
  C.df=1;
  /* 1008aa2b rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1008aa2d cld  */
  C.df=0;
  /* 1008aa2e jmp dword ptr [edx*4 + 0x1008ab00] */
  switch (EDX) {
    case 0: goto L_1008ab10;
    case 1: goto L_1008ab18;
    case 2: goto L_1008ab28;
    case 3: goto L_1008ab3c;
    default: x86_unimpl("switch@0x1008aa2e out of table"); return;
  }
  /* 1008aa35 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1008aa38:;
  /* 1008aa38 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1008aa3b and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1008aa3d mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1008aa40 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1008aa43 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1008aa46 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1008aa49 sub esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008aa4c sub edi, 2 */
  { uint32_t _a=(EDI),_b=(0x2u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008aa4f cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008aa52 jb 0x1008a9e0 */
  if (C.cf) goto L_1008a9e0;
  /* 1008aa54 std  */
  C.df=1;
  /* 1008aa55 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1008aa57 cld  */
  C.df=0;
  /* 1008aa58 jmp dword ptr [edx*4 + 0x1008ab00] */
  switch (EDX) {
    case 0: goto L_1008ab10;
    case 1: goto L_1008ab18;
    case 2: goto L_1008ab28;
    case 3: goto L_1008ab3c;
    default: x86_unimpl("switch@0x1008aa58 out of table"); return;
  }
  /* 1008aa5f nop  */
  /* nop */
L_1008aa60:;
  /* 1008aa60 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1008aa63 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1008aa65 mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1008aa68 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1008aa6b mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1008aa6e mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1008aa71 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1008aa74 mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1008aa77 sub esi, 3 */
  { uint32_t _a=(ESI),_b=(0x3u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008aa7a sub edi, 3 */
  { uint32_t _a=(EDI),_b=(0x3u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008aa7d cmp ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008aa80 jb 0x1008a9e0 */
  if (C.cf) goto L_1008a9e0;
  /* 1008aa86 std  */
  C.df=1;
  /* 1008aa87 rep movsd dword ptr es:[edi], dword ptr [esi] */
  while (ECX!=0) { ECX--; w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4); }
  /* 1008aa89 cld  */
  C.df=0;
  /* 1008aa8a jmp dword ptr [edx*4 + 0x1008ab00] */
  switch (EDX) {
    case 0: goto L_1008ab10;
    case 1: goto L_1008ab18;
    case 2: goto L_1008ab28;
    case 3: goto L_1008ab3c;
    default: x86_unimpl("switch@0x1008aa8a out of table"); return;
  }
  /* 1008aa91 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
  /* 1008aa94 mov ah, 0xaa */
  AH = (0xaau);
  /* 1008aa96 or byte ptr [eax], dl */
  { uint32_t _r=(r8((uint32_t)(EAX)))|(DL); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 1008aa98 mov esp, 0xc41008aa */
  ESP = (0xc41008aau);
  /* 1008aa9d stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1008aa9e or byte ptr [eax], dl */
  { uint32_t _r=(r8((uint32_t)(EAX)))|(DL); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 1008aaa0 int3  */
  x86_unimpl("int3 @ 0x1008aaa0");
  /* 1008aaa1 stosb byte ptr es:[edi], al */
  w8(EDI, AL); EDI+=(C.df?-1:1);
  /* 1008aaa2 or byte ptr [eax], dl */
  { uint32_t _r=(r8((uint32_t)(EAX)))|(DL); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 1008aaa4 aam 0xaa */
  x86_unimpl("aam @ 0x1008aaa4");
  /* 1008aaa6 or byte ptr [eax], dl */
  { uint32_t _r=(r8((uint32_t)(EAX)))|(DL); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 1008aaa8 fsubr qword ptr [edx - 0x551beff8] */
  FPU_ST(0) = (rf64((uint32_t)(EDX + -0x551beff8))) - FPU_ST(0);
  /* 1008aaae or byte ptr [eax], dl */
  { uint32_t _r=(r8((uint32_t)(EAX)))|(DL); w8((uint32_t)(EAX), (_r)); fl_logic(_r,8); }
  /* 1008aab4 mov eax, dword ptr [esi + ecx*4 + 0x1c] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x1c)));
  /* 1008aab8 mov dword ptr [edi + ecx*4 + 0x1c], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x1c), (EAX));
  /* 1008aabc mov eax, dword ptr [esi + ecx*4 + 0x18] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x18)));
  /* 1008aac0 mov dword ptr [edi + ecx*4 + 0x18], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x18), (EAX));
  /* 1008aac4 mov eax, dword ptr [esi + ecx*4 + 0x14] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x14)));
  /* 1008aac8 mov dword ptr [edi + ecx*4 + 0x14], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x14), (EAX));
  /* 1008aacc mov eax, dword ptr [esi + ecx*4 + 0x10] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x10)));
  /* 1008aad0 mov dword ptr [edi + ecx*4 + 0x10], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x10), (EAX));
  /* 1008aad4 mov eax, dword ptr [esi + ecx*4 + 0xc] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0xc)));
  /* 1008aad8 mov dword ptr [edi + ecx*4 + 0xc], eax */
  w32((uint32_t)(EDI + ECX*4 + 0xc), (EAX));
  /* 1008aadc mov eax, dword ptr [esi + ecx*4 + 8] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x8)));
  /* 1008aae0 mov dword ptr [edi + ecx*4 + 8], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x8), (EAX));
  /* 1008aae4 mov eax, dword ptr [esi + ecx*4 + 4] */
  EAX = (r32((uint32_t)(ESI + ECX*4 + 0x4)));
  /* 1008aae8 mov dword ptr [edi + ecx*4 + 4], eax */
  w32((uint32_t)(EDI + ECX*4 + 0x4), (EAX));
  /* 1008aaec lea eax, [ecx*4] */
  EAX = ((uint32_t)(ECX*4));
  /* 1008aaf3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1008aaf5 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
L_1008aaf7:;
  /* 1008aaf7 jmp dword ptr [edx*4 + 0x1008ab00] */
  switch (EDX) {
    case 0: goto L_1008ab10;
    case 1: goto L_1008ab18;
    case 2: goto L_1008ab28;
    case 3: goto L_1008ab3c;
    default: x86_unimpl("switch@0x1008aaf7 out of table"); return;
  }
  /* 1008aafe mov edi, edi */
  EDI = (EDI);
L_1008ab10:;
  /* 1008ab10 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1008ab13 pop esi */
  ESI = (pop32());
  /* 1008ab14 pop edi */
  EDI = (pop32());
  /* 1008ab15 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1008ab16 ret  */
  ESPCHK(0x1008a820u, _esp0);
  ESP += 4; return;
  /* 1008ab17 nop  */
  /* nop */
L_1008ab18:;
  /* 1008ab18 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1008ab1b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1008ab1e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1008ab21 pop esi */
  ESI = (pop32());
  /* 1008ab22 pop edi */
  EDI = (pop32());
  /* 1008ab23 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1008ab24 ret  */
  ESPCHK(0x1008a820u, _esp0);
  ESP += 4; return;
  /* 1008ab25 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1008ab28:;
  /* 1008ab28 mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1008ab2b mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1008ab2e mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1008ab31 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1008ab34 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1008ab37 pop esi */
  ESI = (pop32());
  /* 1008ab38 pop edi */
  EDI = (pop32());
  /* 1008ab39 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1008ab3a ret  */
  ESPCHK(0x1008a820u, _esp0);
  ESP += 4; return;
  /* 1008ab3b nop  */
  /* nop */
L_1008ab3c:;
  /* 1008ab3c mov al, byte ptr [esi + 3] */
  AL = (r8((uint32_t)(ESI + 0x3)));
  /* 1008ab3f mov byte ptr [edi + 3], al */
  w8((uint32_t)(EDI + 0x3), (AL));
  /* 1008ab42 mov al, byte ptr [esi + 2] */
  AL = (r8((uint32_t)(ESI + 0x2)));
  /* 1008ab45 mov byte ptr [edi + 2], al */
  w8((uint32_t)(EDI + 0x2), (AL));
  /* 1008ab48 mov al, byte ptr [esi + 1] */
  AL = (r8((uint32_t)(ESI + 0x1)));
  /* 1008ab4b mov byte ptr [edi + 1], al */
  w8((uint32_t)(EDI + 0x1), (AL));
  /* 1008ab4e mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1008ab51 pop esi */
  ESI = (pop32());
  /* 1008ab52 pop edi */
  EDI = (pop32());
  /* 1008ab53 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1008ab54 ret  */
  ESPCHK(0x1008a820u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab55 @ 0x1008ab55 (23 bytes, 7 insns) */
void f_1008ab55(void) {
  FTRACE(0x1008ab55u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008ab55 push 0 */
  push32((uint32_t)(0x0u));
  /* 1008ab57 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1008ab5b push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1008ab5f push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1008ab63 call 0x1008ab6c */
  push32(0x1008ab68u); f_1008ab6c();
  /* 1008ab68 add esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008ab6b ret  */
  ESPCHK(0x1008ab55u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ab6c @ 0x1008ab6c (517 bytes, 195 insns) */
void f_1008ab6c(void) {
  FTRACE(0x1008ab6cu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008ab6c push ebp */
  push32((uint32_t)(EBP));
  /* 1008ab6d mov ebp, esp */
  EBP = (ESP);
  /* 1008ab6f sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008ab72 push ebx */
  push32((uint32_t)(EBX));
  /* 1008ab73 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1008ab77 push esi */
  push32((uint32_t)(ESI));
  /* 1008ab78 push edi */
  push32((uint32_t)(EDI));
  /* 1008ab79 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1008ab7c mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1008ab7e lea esi, [edi + 1] */
  ESI = ((uint32_t)(EDI + 0x1));
  /* 1008ab81 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_1008ab84:;
  /* 1008ab84 cmp dword ptr [0x10090c20], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10090c20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008ab8b jle 0x1008ab9c */
  if ((C.zf||C.sf!=C.of)) goto L_1008ab9c;
  /* 1008ab8d movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1008ab90 push 8 */
  push32((uint32_t)(0x8u));
  /* 1008ab92 push eax */
  push32((uint32_t)(EAX));
  /* 1008ab93 call 0x1008940b */
  push32(0x1008ab98u); f_1008940b();
  /* 1008ab98 pop ecx */
  ECX = (pop32());
  /* 1008ab99 pop ecx */
  ECX = (pop32());
  /* 1008ab9a jmp 0x1008abab */
  goto L_1008abab;
L_1008ab9c:;
  /* 1008ab9c mov ecx, dword ptr [0x10090a10] */
  ECX = (r32((uint32_t)(0x10090a10)));
  /* 1008aba2 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1008aba5 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1008aba8 and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
L_1008abab:;
  /* 1008abab test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008abad je 0x1008abb4 */
  if (C.zf) goto L_1008abb4;
  /* 1008abaf mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 1008abb1 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1008abb2 jmp 0x1008ab84 */
  goto L_1008ab84;
L_1008abb4:;
  /* 1008abb4 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008abb7 mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
  /* 1008abba jne 0x1008abc2 */
  if (!C.zf) goto L_1008abc2;
  /* 1008abbc or dword ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x2u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 1008abc0 jmp 0x1008abc7 */
  goto L_1008abc7;
L_1008abc2:;
  /* 1008abc2 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008abc5 jne 0x1008abcd */
  if (!C.zf) goto L_1008abcd;
L_1008abc7:;
  /* 1008abc7 mov bl, byte ptr [esi] */
  BL = (r8((uint32_t)(ESI)));
  /* 1008abc9 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1008abca mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_1008abcd:;
  /* 1008abcd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1008abd0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008abd2 jl 0x1008ad61 */
  if ((C.sf!=C.of)) goto L_1008ad61;
  /* 1008abd8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008abdb je 0x1008ad61 */
  if (C.zf) goto L_1008ad61;
  /* 1008abe1 cmp eax, 0x24 */
  { uint32_t _a=(EAX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008abe4 jg 0x1008ad61 */
  if ((!C.zf&&C.sf==C.of)) goto L_1008ad61;
  /* 1008abea push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1008abec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008abee pop ecx */
  ECX = (pop32());
  /* 1008abef jne 0x1008ac15 */
  if (!C.zf) goto L_1008ac15;
  /* 1008abf1 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008abf4 je 0x1008abff */
  if (C.zf) goto L_1008abff;
  /* 1008abf6 mov dword ptr [ebp + 0x10], 0xa */
  w32((uint32_t)(EBP + 0x10), (0xau));
  /* 1008abfd jmp 0x1008ac31 */
  goto L_1008ac31;
L_1008abff:;
  /* 1008abff mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1008ac01 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008ac03 je 0x1008ac12 */
  if (C.zf) goto L_1008ac12;
  /* 1008ac05 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008ac07 je 0x1008ac12 */
  if (C.zf) goto L_1008ac12;
  /* 1008ac09 mov dword ptr [ebp + 0x10], 8 */
  w32((uint32_t)(EBP + 0x10), (0x8u));
  /* 1008ac10 jmp 0x1008ac31 */
  goto L_1008ac31;
L_1008ac12:;
  /* 1008ac12 mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
L_1008ac15:;
  /* 1008ac15 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008ac18 jne 0x1008ac31 */
  if (!C.zf) goto L_1008ac31;
  /* 1008ac1a cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008ac1d jne 0x1008ac31 */
  if (!C.zf) goto L_1008ac31;
  /* 1008ac1f mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1008ac21 cmp al, 0x78 */
  { uint32_t _a=(AL),_b=(0x78u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008ac23 je 0x1008ac29 */
  if (C.zf) goto L_1008ac29;
  /* 1008ac25 cmp al, 0x58 */
  { uint32_t _a=(AL),_b=(0x58u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008ac27 jne 0x1008ac31 */
  if (!C.zf) goto L_1008ac31;
L_1008ac29:;
  /* 1008ac29 mov bl, byte ptr [esi + 1] */
  BL = (r8((uint32_t)(ESI + 0x1)));
  /* 1008ac2c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1008ac2d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1008ac2e mov dword ptr [ebp - 4], esi */
  w32((uint32_t)(EBP + -0x4), (ESI));
L_1008ac31:;
  /* 1008ac31 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1008ac34 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1008ac36 div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1008ac39 mov edi, 0x103 */
  EDI = (0x103u);
  /* 1008ac3e mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
L_1008ac41:;
  /* 1008ac41 cmp dword ptr [0x10090c20], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10090c20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008ac48 movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 1008ac4b jle 0x1008ac59 */
  if ((C.zf||C.sf!=C.of)) goto L_1008ac59;
  /* 1008ac4d push 4 */
  push32((uint32_t)(0x4u));
  /* 1008ac4f push esi */
  push32((uint32_t)(ESI));
  /* 1008ac50 call 0x1008940b */
  push32(0x1008ac55u); f_1008940b();
  /* 1008ac55 pop ecx */
  ECX = (pop32());
  /* 1008ac56 pop ecx */
  ECX = (pop32());
  /* 1008ac57 jmp 0x1008ac64 */
  goto L_1008ac64;
L_1008ac59:;
  /* 1008ac59 mov eax, dword ptr [0x10090a10] */
  EAX = (r32((uint32_t)(0x10090a10)));
  /* 1008ac5e mov al, byte ptr [eax + esi*2] */
  AL = (r8((uint32_t)(EAX + ESI*2)));
  /* 1008ac61 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_1008ac64:;
  /* 1008ac64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008ac66 je 0x1008ac70 */
  if (C.zf) goto L_1008ac70;
  /* 1008ac68 movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1008ac6b sub ecx, 0x30 */
  { uint32_t _a=(ECX),_b=(0x30u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008ac6e jmp 0x1008aca2 */
  goto L_1008aca2;
L_1008ac70:;
  /* 1008ac70 cmp dword ptr [0x10090c20], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10090c20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008ac77 jle 0x1008ac84 */
  if ((C.zf||C.sf!=C.of)) goto L_1008ac84;
  /* 1008ac79 push edi */
  push32((uint32_t)(EDI));
  /* 1008ac7a push esi */
  push32((uint32_t)(ESI));
  /* 1008ac7b call 0x1008940b */
  push32(0x1008ac80u); f_1008940b();
  /* 1008ac80 pop ecx */
  ECX = (pop32());
  /* 1008ac81 pop ecx */
  ECX = (pop32());
  /* 1008ac82 jmp 0x1008ac8f */
  goto L_1008ac8f;
L_1008ac84:;
  /* 1008ac84 mov eax, dword ptr [0x10090a10] */
  EAX = (r32((uint32_t)(0x10090a10)));
  /* 1008ac89 mov ax, word ptr [eax + esi*2] */
  AX = (r16((uint32_t)(EAX + ESI*2)));
  /* 1008ac8d and eax, edi */
  { uint32_t _r=(EAX)&(EDI); EAX = (_r); fl_logic(_r,32); }
L_1008ac8f:;
  /* 1008ac8f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008ac91 je 0x1008acdd */
  if (C.zf) goto L_1008acdd;
  /* 1008ac93 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1008ac96 push eax */
  push32((uint32_t)(EAX));
  /* 1008ac97 call 0x1008d148 */
  push32(0x1008ac9cu); f_1008d148();
  /* 1008ac9c pop ecx */
  ECX = (pop32());
  /* 1008ac9d mov ecx, eax */
  ECX = (EAX);
  /* 1008ac9f sub ecx, 0x37 */
  { uint32_t _a=(ECX),_b=(0x37u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
L_1008aca2:;
  /* 1008aca2 cmp ecx, dword ptr [ebp + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008aca5 jae 0x1008acdd */
  if (!C.cf) goto L_1008acdd;
  /* 1008aca7 mov esi, dword ptr [ebp - 8] */
  ESI = (r32((uint32_t)(EBP + -0x8)));
  /* 1008acaa or dword ptr [ebp + 0x14], 8 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x8u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 1008acae cmp esi, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008acb1 jb 0x1008acc7 */
  if (C.cf) goto L_1008acc7;
  /* 1008acb3 jne 0x1008acc1 */
  if (!C.zf) goto L_1008acc1;
  /* 1008acb5 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1008acb8 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1008acba div dword ptr [ebp + 0x10] */
  { uint64_t _n=((uint64_t)EDX<<32)|EAX; uint32_t _d=(r32((uint32_t)(EBP + 0x10))); EAX=(uint32_t)(_n/_d); EDX=(uint32_t)(_n%_d); }
  /* 1008acbd cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008acbf jbe 0x1008acc7 */
  if ((C.cf||C.zf)) goto L_1008acc7;
L_1008acc1:;
  /* 1008acc1 or dword ptr [ebp + 0x14], 4 */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))|(0x4u); w32((uint32_t)(EBP + 0x14), (_r)); fl_logic(_r,32); }
  /* 1008acc5 jmp 0x1008acd0 */
  goto L_1008acd0;
L_1008acc7:;
  /* 1008acc7 imul esi, dword ptr [ebp + 0x10] */
  { int64_t _p=(int64_t)(int32_t)(r32((uint32_t)(EBP + 0x10)))*(int64_t)(int32_t)(ESI); ESI = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1008accb add esi, ecx */
  { uint32_t _a=(ESI),_b=(ECX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1008accd mov dword ptr [ebp - 8], esi */
  w32((uint32_t)(EBP + -0x8), (ESI));
L_1008acd0:;
  /* 1008acd0 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1008acd3 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1008acd6 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 1008acd8 jmp 0x1008ac41 */
  goto L_1008ac41;
L_1008acdd:;
  /* 1008acdd mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1008ace0 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 1008ace3 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 1008ace6 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 1008ace8 jne 0x1008acfa */
  if (!C.zf) goto L_1008acfa;
  /* 1008acea test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1008acec je 0x1008acf4 */
  if (C.zf) goto L_1008acf4;
  /* 1008acee mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1008acf1 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1008acf4:;
  /* 1008acf4 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1008acf8 jmp 0x1008ad45 */
  goto L_1008ad45;
L_1008acfa:;
  /* 1008acfa test al, 4 */
  { uint32_t _r=(AL)&(0x4u); fl_logic(_r,8); }
  /* 1008acfc mov esi, 0x7fffffff */
  ESI = (0x7fffffffu);
  /* 1008ad01 jne 0x1008ad1e */
  if (!C.zf) goto L_1008ad1e;
  /* 1008ad03 test al, 1 */
  { uint32_t _r=(AL)&(0x1u); fl_logic(_r,8); }
  /* 1008ad05 jne 0x1008ad45 */
  if (!C.zf) goto L_1008ad45;
  /* 1008ad07 and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
  /* 1008ad0a je 0x1008ad15 */
  if (C.zf) goto L_1008ad15;
  /* 1008ad0c cmp dword ptr [ebp - 8], 0x80000000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x80000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008ad13 ja 0x1008ad1e */
  if ((!C.cf&&!C.zf)) goto L_1008ad1e;
L_1008ad15:;
  /* 1008ad15 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008ad17 jne 0x1008ad45 */
  if (!C.zf) goto L_1008ad45;
  /* 1008ad19 cmp dword ptr [ebp - 8], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008ad1c jbe 0x1008ad45 */
  if ((C.cf||C.zf)) goto L_1008ad45;
L_1008ad1e:;
  /* 1008ad1e call 0x1008bfb1 */
  push32(0x1008ad23u); f_1008bfb1();
  /* 1008ad23 test byte ptr [ebp + 0x14], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x1u); fl_logic(_r,8); }
  /* 1008ad27 mov dword ptr [eax], 0x22 */
  w32((uint32_t)(EAX), (0x22u));
  /* 1008ad2d je 0x1008ad35 */
  if (C.zf) goto L_1008ad35;
  /* 1008ad2f or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1008ad33 jmp 0x1008ad45 */
  goto L_1008ad45;
L_1008ad35:;
  /* 1008ad35 mov eax, dword ptr [ebp + 0x14] */
  EAX = (r32((uint32_t)(EBP + 0x14)));
  /* 1008ad38 and al, 2 */
  { uint32_t _r=(AL)&(0x2u); AL = (_r); fl_logic(_r,8); }
  /* 1008ad3a neg al */
  { uint32_t _a=(AL),_r=0u-_a; AL = (_r); fl_sub(0,_a,_r,8); }
  /* 1008ad3c sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008ad3e neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1008ad40 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008ad42 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1008ad45:;
  /* 1008ad45 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1008ad47 je 0x1008ad4e */
  if (C.zf) goto L_1008ad4e;
  /* 1008ad49 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1008ad4c mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
L_1008ad4e:;
  /* 1008ad4e test byte ptr [ebp + 0x14], 2 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x14)))&(0x2u); fl_logic(_r,8); }
  /* 1008ad52 je 0x1008ad5c */
  if (C.zf) goto L_1008ad5c;
  /* 1008ad54 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1008ad57 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1008ad59 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1008ad5c:;
  /* 1008ad5c mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1008ad5f jmp 0x1008ad6c */
  goto L_1008ad6c;
L_1008ad61:;
  /* 1008ad61 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1008ad64 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008ad66 je 0x1008ad6a */
  if (C.zf) goto L_1008ad6a;
  /* 1008ad68 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
L_1008ad6a:;
  /* 1008ad6a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1008ad6c:;
  /* 1008ad6c pop edi */
  EDI = (pop32());
  /* 1008ad6d pop esi */
  ESI = (pop32());
  /* 1008ad6e pop ebx */
  EBX = (pop32());
  /* 1008ad6f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1008ad70 ret  */
  ESPCHK(0x1008ab6cu, _esp0);
  ESP += 4; return;
}

/* _strchr @ 0x1008ad90 (193 bytes, 90 insns) */
void f_1008ad90(void) {
  FTRACE(0x1008ad90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008ad90 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1008ad92 mov al, byte ptr [esp + 8] */
  AL = (r8((uint32_t)(ESP + 0x8)));
  /* 1008ad96 push ebx */
  push32((uint32_t)(EBX));
  /* 1008ad97 mov ebx, eax */
  EBX = (EAX);
  /* 1008ad99 shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1008ad9c mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 1008ada0 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1008ada6 je 0x1008adbb */
  if (C.zf) goto L_1008adbb;
L_1008ada8:;
  /* 1008ada8 mov cl, byte ptr [edx] */
  CL = (r8((uint32_t)(EDX)));
  /* 1008adaa inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1008adab cmp cl, bl */
  { uint32_t _a=(CL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008adad je 0x1008ad80 */
  if (C.zf) { jmp_ind(0x1008ad80u); return; }
  /* 1008adaf test cl, cl */
  { uint32_t _r=(CL)&(CL); fl_logic(_r,8); }
  /* 1008adb1 je 0x1008ae04 */
  if (C.zf) goto L_1008ae04;
  /* 1008adb3 test edx, 3 */
  { uint32_t _r=(EDX)&(0x3u); fl_logic(_r,32); }
  /* 1008adb9 jne 0x1008ada8 */
  if (!C.zf) goto L_1008ada8;
L_1008adbb:;
  /* 1008adbb or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
  /* 1008adbd push edi */
  push32((uint32_t)(EDI));
  /* 1008adbe mov eax, ebx */
  EAX = (EBX);
  /* 1008adc0 shl ebx, 0x10 */
  EBX = (sh_shl((uint32_t)(EBX), (0x10u)&0x1f, 32));
  /* 1008adc3 push esi */
  push32((uint32_t)(ESI));
  /* 1008adc4 or ebx, eax */
  { uint32_t _r=(EBX)|(EAX); EBX = (_r); fl_logic(_r,32); }
L_1008adc6:;
  /* 1008adc6 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1008adc8 mov edi, 0x7efefeff */
  EDI = (0x7efefeffu);
  /* 1008adcd mov eax, ecx */
  EAX = (ECX);
  /* 1008adcf mov esi, edi */
  ESI = (EDI);
  /* 1008add1 xor ecx, ebx */
  { uint32_t _r=(ECX)^(EBX); ECX = (_r); fl_logic(_r,32); }
  /* 1008add3 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1008add5 add edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1008add7 xor ecx, 0xffffffff */
  { uint32_t _r=(ECX)^(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1008adda xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1008addd xor ecx, edi */
  { uint32_t _r=(ECX)^(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1008addf xor eax, esi */
  { uint32_t _r=(EAX)^(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1008ade1 add edx, 4 */
  { uint32_t _a=(EDX),_b=(0x4u),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008ade4 and ecx, 0x81010100 */
  { uint32_t _r=(ECX)&(0x81010100u); ECX = (_r); fl_logic(_r,32); }
  /* 1008adea jne 0x1008ae08 */
  if (!C.zf) goto L_1008ae08;
  /* 1008adec and eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); EAX = (_r); fl_logic(_r,32); }
  /* 1008adf1 je 0x1008adc6 */
  if (C.zf) goto L_1008adc6;
  /* 1008adf3 and eax, 0x1010100 */
  { uint32_t _r=(EAX)&(0x1010100u); EAX = (_r); fl_logic(_r,32); }
  /* 1008adf8 jne 0x1008ae02 */
  if (!C.zf) goto L_1008ae02;
  /* 1008adfa and esi, 0x80000000 */
  { uint32_t _r=(ESI)&(0x80000000u); ESI = (_r); fl_logic(_r,32); }
  /* 1008ae00 jne 0x1008adc6 */
  if (!C.zf) goto L_1008adc6;
L_1008ae02:;
  /* 1008ae02 pop esi */
  ESI = (pop32());
  /* 1008ae03 pop edi */
  EDI = (pop32());
L_1008ae04:;
  /* 1008ae04 pop ebx */
  EBX = (pop32());
  /* 1008ae05 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1008ae07 ret  */
  ESPCHK(0x1008ad90u, _esp0);
  ESP += 4; return;
L_1008ae08:;
  /* 1008ae08 mov eax, dword ptr [edx - 4] */
  EAX = (r32((uint32_t)(EDX + -0x4)));
  /* 1008ae0b cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008ae0d je 0x1008ae45 */
  if (C.zf) goto L_1008ae45;
  /* 1008ae0f test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1008ae11 je 0x1008ae02 */
  if (C.zf) goto L_1008ae02;
  /* 1008ae13 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008ae15 je 0x1008ae3e */
  if (C.zf) goto L_1008ae3e;
  /* 1008ae17 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1008ae19 je 0x1008ae02 */
  if (C.zf) goto L_1008ae02;
  /* 1008ae1b shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1008ae1e cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008ae20 je 0x1008ae37 */
  if (C.zf) goto L_1008ae37;
  /* 1008ae22 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1008ae24 je 0x1008ae02 */
  if (C.zf) goto L_1008ae02;
  /* 1008ae26 cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008ae28 je 0x1008ae30 */
  if (C.zf) goto L_1008ae30;
  /* 1008ae2a test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1008ae2c je 0x1008ae02 */
  if (C.zf) goto L_1008ae02;
  /* 1008ae2e jmp 0x1008adc6 */
  goto L_1008adc6;
L_1008ae30:;
  /* 1008ae30 pop esi */
  ESI = (pop32());
  /* 1008ae31 pop edi */
  EDI = (pop32());
  /* 1008ae32 lea eax, [edx - 1] */
  EAX = ((uint32_t)(EDX + -0x1));
  /* 1008ae35 pop ebx */
  EBX = (pop32());
  /* 1008ae36 ret  */
  ESPCHK(0x1008ad90u, _esp0);
  ESP += 4; return;
L_1008ae37:;
  /* 1008ae37 lea eax, [edx - 2] */
  EAX = ((uint32_t)(EDX + -0x2));
  /* 1008ae3a pop esi */
  ESI = (pop32());
  /* 1008ae3b pop edi */
  EDI = (pop32());
  /* 1008ae3c pop ebx */
  EBX = (pop32());
  /* 1008ae3d ret  */
  ESPCHK(0x1008ad90u, _esp0);
  ESP += 4; return;
L_1008ae3e:;
  /* 1008ae3e lea eax, [edx - 3] */
  EAX = ((uint32_t)(EDX + -0x3));
  /* 1008ae41 pop esi */
  ESI = (pop32());
  /* 1008ae42 pop edi */
  EDI = (pop32());
  /* 1008ae43 pop ebx */
  EBX = (pop32());
  /* 1008ae44 ret  */
  ESPCHK(0x1008ad90u, _esp0);
  ESP += 4; return;
L_1008ae45:;
  /* 1008ae45 lea eax, [edx - 4] */
  EAX = ((uint32_t)(EDX + -0x4));
  /* 1008ae48 pop esi */
  ESI = (pop32());
  /* 1008ae49 pop edi */
  EDI = (pop32());
  /* 1008ae4a pop ebx */
  EBX = (pop32());
  /* 1008ae4b ret  */
  ESPCHK(0x1008ad90u, _esp0);
  ESP += 4; return;
  /* 1008ae4c int3  */
  x86_unimpl("int3 @ 0x1008ae4c");
  /* 1008ae4d int3  */
  x86_unimpl("int3 @ 0x1008ae4d");
  /* 1008ae4e int3  */
  x86_unimpl("int3 @ 0x1008ae4e");
  /* 1008ae4f int3  */
  x86_unimpl("int3 @ 0x1008ae4f");
}

/* _strstr @ 0x1008ae50 (128 bytes, 66 insns) */
void f_1008ae50(void) {
  FTRACE(0x1008ae50u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008ae50 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1008ae54 push edi */
  push32((uint32_t)(EDI));
  /* 1008ae55 push ebx */
  push32((uint32_t)(EBX));
  /* 1008ae56 push esi */
  push32((uint32_t)(ESI));
  /* 1008ae57 mov dl, byte ptr [ecx] */
  DL = (r8((uint32_t)(ECX)));
  /* 1008ae59 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1008ae5d test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1008ae5f je 0x1008aeca */
  if (C.zf) goto L_1008aeca;
  /* 1008ae61 mov dh, byte ptr [ecx + 1] */
  C.d.b.h = (r8((uint32_t)(ECX + 0x1)));
  /* 1008ae64 test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 1008ae66 je 0x1008aeb7 */
  if (C.zf) goto L_1008aeb7;
L_1008ae68:;
  /* 1008ae68 mov esi, edi */
  ESI = (EDI);
  /* 1008ae6a mov ecx, dword ptr [esp + 0x14] */
  ECX = (r32((uint32_t)(ESP + 0x14)));
  /* 1008ae6e mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 1008ae70 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1008ae71 cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008ae73 je 0x1008ae8a */
  if (C.zf) goto L_1008ae8a;
  /* 1008ae75 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1008ae77 je 0x1008ae84 */
  if (C.zf) goto L_1008ae84;
L_1008ae79:;
  /* 1008ae79 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1008ae7b inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
L_1008ae7c:;
  /* 1008ae7c cmp al, dl */
  { uint32_t _a=(AL),_b=(DL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008ae7e je 0x1008ae8a */
  if (C.zf) goto L_1008ae8a;
  /* 1008ae80 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1008ae82 jne 0x1008ae79 */
  if (!C.zf) goto L_1008ae79;
L_1008ae84:;
  /* 1008ae84 pop esi */
  ESI = (pop32());
  /* 1008ae85 pop ebx */
  EBX = (pop32());
  /* 1008ae86 pop edi */
  EDI = (pop32());
  /* 1008ae87 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1008ae89 ret  */
  ESPCHK(0x1008ae50u, _esp0);
  ESP += 4; return;
L_1008ae8a:;
  /* 1008ae8a mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1008ae8c inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1008ae8d cmp al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008ae8f jne 0x1008ae7c */
  if (!C.zf) goto L_1008ae7c;
  /* 1008ae91 lea edi, [esi - 1] */
  EDI = ((uint32_t)(ESI + -0x1));
L_1008ae94:;
  /* 1008ae94 mov ah, byte ptr [ecx + 2] */
  AH = (r8((uint32_t)(ECX + 0x2)));
  /* 1008ae97 test ah, ah */
  { uint32_t _r=(AH)&(AH); fl_logic(_r,8); }
  /* 1008ae99 je 0x1008aec3 */
  if (C.zf) goto L_1008aec3;
  /* 1008ae9b mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1008ae9d add esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1008aea0 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008aea2 jne 0x1008ae68 */
  if (!C.zf) goto L_1008ae68;
  /* 1008aea4 mov al, byte ptr [ecx + 3] */
  AL = (r8((uint32_t)(ECX + 0x3)));
  /* 1008aea7 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1008aea9 je 0x1008aec3 */
  if (C.zf) goto L_1008aec3;
  /* 1008aeab mov ah, byte ptr [esi - 1] */
  AH = (r8((uint32_t)(ESI + -0x1)));
  /* 1008aeae add ecx, 2 */
  { uint32_t _a=(ECX),_b=(0x2u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008aeb1 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008aeb3 je 0x1008ae94 */
  if (C.zf) goto L_1008ae94;
  /* 1008aeb5 jmp 0x1008ae68 */
  goto L_1008ae68;
L_1008aeb7:;
  /* 1008aeb7 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1008aeb9 pop esi */
  ESI = (pop32());
  /* 1008aeba pop ebx */
  EBX = (pop32());
  /* 1008aebb pop edi */
  EDI = (pop32());
  /* 1008aebc mov al, dl */
  AL = (DL);
  /* 1008aebe jmp 0x1008ad96 */
  jmp_ind(0x1008ad96u); return;
L_1008aec3:;
  /* 1008aec3 lea eax, [edi - 1] */
  EAX = ((uint32_t)(EDI + -0x1));
  /* 1008aec6 pop esi */
  ESI = (pop32());
  /* 1008aec7 pop ebx */
  EBX = (pop32());
  /* 1008aec8 pop edi */
  EDI = (pop32());
  /* 1008aec9 ret  */
  ESPCHK(0x1008ae50u, _esp0);
  ESP += 4; return;
L_1008aeca:;
  /* 1008aeca mov eax, edi */
  EAX = (EDI);
  /* 1008aecc pop esi */
  ESI = (pop32());
  /* 1008aecd pop ebx */
  EBX = (pop32());
  /* 1008aece pop edi */
  EDI = (pop32());
  /* 1008aecf ret  */
  ESPCHK(0x1008ae50u, _esp0);
  ESP += 4; return;
}

/* _strncmp @ 0x1008aed0 (56 bytes, 31 insns) */
void f_1008aed0(void) {
  FTRACE(0x1008aed0u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008aed0 push ebp */
  push32((uint32_t)(EBP));
  /* 1008aed1 mov ebp, esp */
  EBP = (ESP);
  /* 1008aed3 push edi */
  push32((uint32_t)(EDI));
  /* 1008aed4 push esi */
  push32((uint32_t)(ESI));
  /* 1008aed5 push ebx */
  push32((uint32_t)(EBX));
  /* 1008aed6 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1008aed9 jecxz 0x1008af01 */
  x86_unimpl("jecxz @ 0x1008aed9");
  /* 1008aedb mov ebx, ecx */
  EBX = (ECX);
  /* 1008aedd mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1008aee0 mov esi, edi */
  ESI = (EDI);
  /* 1008aee2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1008aee4 repne scasb al, byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=(AL),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } EDI+=(C.df?-1:1); if(C.zf) break; }
  /* 1008aee6 neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1008aee8 add ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008aeea mov edi, esi */
  EDI = (ESI);
  /* 1008aeec mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1008aeef repe cmpsb byte ptr [esi], byte ptr es:[edi] */
  while (ECX!=0) { ECX--; { uint32_t _a=r8(ESI),_b=r8(EDI),_r=_a-_b; fl_sub(_a,_b,_r,8); } ESI+=(C.df?-1:1); EDI+=(C.df?-1:1); if(!C.zf) break; }
  /* 1008aef1 mov al, byte ptr [esi - 1] */
  AL = (r8((uint32_t)(ESI + -0x1)));
  /* 1008aef4 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1008aef6 cmp al, byte ptr [edi - 1] */
  { uint32_t _a=(AL),_b=(r8((uint32_t)(EDI + -0x1))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008aef9 ja 0x1008aeff */
  if ((!C.cf&&!C.zf)) goto L_1008aeff;
  /* 1008aefb je 0x1008af01 */
  if (C.zf) goto L_1008af01;
  /* 1008aefd dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1008aefe dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
L_1008aeff:;
  /* 1008aeff not ecx */
  ECX = (~(ECX));
L_1008af01:;
  /* 1008af01 mov eax, ecx */
  EAX = (ECX);
  /* 1008af03 pop ebx */
  EBX = (pop32());
  /* 1008af04 pop esi */
  ESI = (pop32());
  /* 1008af05 pop edi */
  EDI = (pop32());
  /* 1008af06 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1008af07 ret  */
  ESPCHK(0x1008aed0u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af10 @ 0x1008af10 (47 bytes, 17 insns) */
void f_1008af10(void) {
  FTRACE(0x1008af10u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008af10 push ecx */
  push32((uint32_t)(ECX));
  /* 1008af11 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008af16 lea ecx, [esp + 8] */
  ECX = ((uint32_t)(ESP + 0x8));
  /* 1008af1a jb 0x1008af30 */
  if (C.cf) goto L_1008af30;
L_1008af1c:;
  /* 1008af1c sub ecx, 0x1000 */
  { uint32_t _a=(ECX),_b=(0x1000u),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008af22 sub eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008af27 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 1008af29 cmp eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008af2e jae 0x1008af1c */
  if (!C.cf) goto L_1008af1c;
L_1008af30:;
  /* 1008af30 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008af32 mov eax, esp */
  EAX = (ESP);
  /* 1008af34 test dword ptr [ecx], eax */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EAX); fl_logic(_r,32); }
  /* 1008af36 mov esp, ecx */
  ESP = (ECX);
  /* 1008af38 mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1008af3a mov eax, dword ptr [eax + 4] */
  EAX = (r32((uint32_t)(EAX + 0x4)));
  /* 1008af3d push eax */
  push32((uint32_t)(EAX));
  /* 1008af3e ret  */
  ESPCHK(0x1008af10u, _esp0);
  ESP += 4; return;
}

/* FUN_1000af3f @ 0x1008af3f (72 bytes, 17 insns) */
void f_1008af3f(void) {
  FTRACE(0x1008af3fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008af3f push 0x140 */
  push32((uint32_t)(0x140u));
  /* 1008af44 push 0 */
  push32((uint32_t)(0x0u));
  /* 1008af46 push dword ptr [0x10097c64] */
  push32((uint32_t)(r32((uint32_t)(0x10097c64))));
  /* 1008af4c call dword ptr [0x1008e098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e098))), 0x1008af52u);
  /* 1008af52 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008af54 mov dword ptr [0x10096a0c], eax */
  w32((uint32_t)(0x10096a0c), (EAX));
  /* 1008af59 jne 0x1008af5c */
  if (!C.zf) goto L_1008af5c;
  /* 1008af5b ret  */
  ESPCHK(0x1008af3fu, _esp0);
  ESP += 4; return;
L_1008af5c:;
  /* 1008af5c mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1008af60 and dword ptr [0x10096a04], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10096a04)))&(0x0u); w32((uint32_t)(0x10096a04), (_r)); fl_logic(_r,32); }
  /* 1008af67 and dword ptr [0x10096a08], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10096a08)))&(0x0u); w32((uint32_t)(0x10096a08), (_r)); fl_logic(_r,32); }
  /* 1008af6e push 1 */
  push32((uint32_t)(0x1u));
  /* 1008af70 mov dword ptr [0x10096a00], eax */
  w32((uint32_t)(0x10096a00), (EAX));
  /* 1008af75 mov dword ptr [0x10096a10], ecx */
  w32((uint32_t)(0x10096a10), (ECX));
  /* 1008af7b mov dword ptr [0x100969f8], 0x10 */
  w32((uint32_t)(0x100969f8), (0x10u));
  /* 1008af85 pop eax */
  EAX = (pop32());
  /* 1008af86 ret  */
  ESPCHK(0x1008af3fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000af87 @ 0x1008af87 (43 bytes, 14 insns) */
void f_1008af87(void) {
  FTRACE(0x1008af87u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008af87 mov eax, dword ptr [0x10096a08] */
  EAX = (r32((uint32_t)(0x10096a08)));
  /* 1008af8c lea ecx, [eax + eax*4] */
  ECX = ((uint32_t)(EAX + EAX*4));
  /* 1008af8f mov eax, dword ptr [0x10096a0c] */
  EAX = (r32((uint32_t)(0x10096a0c)));
  /* 1008af94 lea ecx, [eax + ecx*4] */
  ECX = ((uint32_t)(EAX + ECX*4));
L_1008af97:;
  /* 1008af97 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008af99 jae 0x1008afaf */
  if (!C.cf) goto L_1008afaf;
  /* 1008af9b mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1008af9f sub edx, dword ptr [eax + 0xc] */
  { uint32_t _a=(EDX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008afa2 cmp edx, 0x100000 */
  { uint32_t _a=(EDX),_b=(0x100000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008afa8 jb 0x1008afb1 */
  if (C.cf) goto L_1008afb1;
  /* 1008afaa add eax, 0x14 */
  { uint32_t _a=(EAX),_b=(0x14u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008afad jmp 0x1008af97 */
  goto L_1008af97;
L_1008afaf:;
  /* 1008afaf xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1008afb1:;
  /* 1008afb1 ret  */
  ESPCHK(0x1008af87u, _esp0);
  ESP += 4; return;
}

/* FUN_1000afb2 @ 0x1008afb2 (809 bytes, 265 insns) */
void f_1008afb2(void) {
  FTRACE(0x1008afb2u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008afb2 push ebp */
  push32((uint32_t)(EBP));
  /* 1008afb3 mov ebp, esp */
  EBP = (ESP);
  /* 1008afb5 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008afb8 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1008afbb push ebx */
  push32((uint32_t)(EBX));
  /* 1008afbc push esi */
  push32((uint32_t)(ESI));
  /* 1008afbd mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1008afc0 mov eax, dword ptr [ecx + 0x10] */
  EAX = (r32((uint32_t)(ECX + 0x10)));
  /* 1008afc3 push edi */
  push32((uint32_t)(EDI));
  /* 1008afc4 mov edi, esi */
  EDI = (ESI);
  /* 1008afc6 add esi, -4 */
  { uint32_t _a=(ESI),_b=(0xfffffffcu),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1008afc9 sub edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008afcc shr edi, 0xf */
  EDI = (sh_shr((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 1008afcf mov ecx, edi */
  ECX = (EDI);
  /* 1008afd1 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1008afd7 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1008afde mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1008afe1 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1008afe3 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1008afe4 test cl, 1 */
  { uint32_t _r=(CL)&(0x1u); fl_logic(_r,8); }
  /* 1008afe7 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1008afea jne 0x1008b2d6 */
  if (!C.zf) goto L_1008b2d6;
  /* 1008aff0 mov edx, dword ptr [ecx + esi] */
  EDX = (r32((uint32_t)(ECX + ESI*1)));
  /* 1008aff3 lea ebx, [ecx + esi] */
  EBX = ((uint32_t)(ECX + ESI*1));
  /* 1008aff6 mov dword ptr [ebp - 0xc], edx */
  w32((uint32_t)(EBP + -0xc), (EDX));
  /* 1008aff9 mov edx, dword ptr [esi - 4] */
  EDX = (r32((uint32_t)(ESI + -0x4)));
  /* 1008affc mov dword ptr [ebp - 8], edx */
  w32((uint32_t)(EBP + -0x8), (EDX));
  /* 1008afff mov edx, dword ptr [ebp - 0xc] */
  EDX = (r32((uint32_t)(EBP + -0xc)));
  /* 1008b002 test dl, 1 */
  { uint32_t _r=(DL)&(0x1u); fl_logic(_r,8); }
  /* 1008b005 mov dword ptr [ebp + 0xc], ebx */
  w32((uint32_t)(EBP + 0xc), (EBX));
  /* 1008b008 jne 0x1008b088 */
  if (!C.zf) goto L_1008b088;
  /* 1008b00a sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1008b00d dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1008b00e cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b011 jbe 0x1008b016 */
  if ((C.cf||C.zf)) goto L_1008b016;
  /* 1008b013 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1008b015 pop edx */
  EDX = (pop32());
L_1008b016:;
  /* 1008b016 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1008b019 cmp ecx, dword ptr [ebx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b01c jne 0x1008b06a */
  if (!C.zf) goto L_1008b06a;
  /* 1008b01e cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b021 jae 0x1008b041 */
  if (!C.cf) goto L_1008b041;
  /* 1008b023 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1008b028 mov ecx, edx */
  ECX = (EDX);
  /* 1008b02a shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1008b02c lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 1008b030 not ebx */
  EBX = (~(EBX));
  /* 1008b032 and dword ptr [eax + edi*4 + 0x44], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1008b036 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 1008b038 jne 0x1008b062 */
  if (!C.zf) goto L_1008b062;
  /* 1008b03a mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1008b03d and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1008b03f jmp 0x1008b062 */
  goto L_1008b062;
L_1008b041:;
  /* 1008b041 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 1008b044 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1008b049 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1008b04b lea ecx, [edx + eax + 4] */
  ECX = ((uint32_t)(EDX + EAX*1 + 0x4));
  /* 1008b04f not ebx */
  EBX = (~(EBX));
  /* 1008b051 and dword ptr [eax + edi*4 + 0xc4], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(EBX); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1008b058 dec byte ptr [ecx] */
  { uint32_t _r=(r8((uint32_t)(ECX)))-1; w8((uint32_t)(ECX), (_r)); fl_dec(_r,8); }
  /* 1008b05a jne 0x1008b062 */
  if (!C.zf) goto L_1008b062;
  /* 1008b05c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1008b05f and dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_1008b062:;
  /* 1008b062 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1008b065 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 1008b068 jmp 0x1008b06d */
  goto L_1008b06d;
L_1008b06a:;
  /* 1008b06a mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
L_1008b06d:;
  /* 1008b06d mov edx, dword ptr [ebx + 8] */
  EDX = (r32((uint32_t)(EBX + 0x8)));
  /* 1008b070 mov ebx, dword ptr [ebx + 4] */
  EBX = (r32((uint32_t)(EBX + 0x4)));
  /* 1008b073 add ecx, dword ptr [ebp - 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008b076 mov dword ptr [edx + 4], ebx */
  w32((uint32_t)(EDX + 0x4), (EBX));
  /* 1008b079 mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1008b07c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1008b07f mov ebx, dword ptr [edx + 4] */
  EBX = (r32((uint32_t)(EDX + 0x4)));
  /* 1008b082 mov edx, dword ptr [edx + 8] */
  EDX = (r32((uint32_t)(EDX + 0x8)));
  /* 1008b085 mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
L_1008b088:;
  /* 1008b088 mov edx, ecx */
  EDX = (ECX);
  /* 1008b08a sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1008b08d dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1008b08e cmp edx, 0x3f */
  { uint32_t _a=(EDX),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b091 jbe 0x1008b096 */
  if ((C.cf||C.zf)) goto L_1008b096;
  /* 1008b093 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1008b095 pop edx */
  EDX = (pop32());
L_1008b096:;
  /* 1008b096 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 1008b099 and ebx, 1 */
  { uint32_t _r=(EBX)&(0x1u); EBX = (_r); fl_logic(_r,32); }
  /* 1008b09c mov dword ptr [ebp - 0xc], ebx */
  w32((uint32_t)(EBP + -0xc), (EBX));
  /* 1008b09f jne 0x1008b139 */
  if (!C.zf) goto L_1008b139;
  /* 1008b0a5 sub esi, dword ptr [ebp - 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008b0a8 mov ebx, dword ptr [ebp - 8] */
  EBX = (r32((uint32_t)(EBP + -0x8)));
  /* 1008b0ab sar ebx, 4 */
  EBX = (sh_sar((uint32_t)(EBX), (0x4u)&0x1f, 32));
  /* 1008b0ae push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1008b0b0 mov dword ptr [ebp + 0xc], esi */
  w32((uint32_t)(EBP + 0xc), (ESI));
  /* 1008b0b3 dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1008b0b4 pop esi */
  ESI = (pop32());
  /* 1008b0b5 cmp ebx, esi */
  { uint32_t _a=(EBX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b0b7 jbe 0x1008b0bb */
  if ((C.cf||C.zf)) goto L_1008b0bb;
  /* 1008b0b9 mov ebx, esi */
  EBX = (ESI);
L_1008b0bb:;
  /* 1008b0bb add ecx, dword ptr [ebp - 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008b0be mov edx, ecx */
  EDX = (ECX);
  /* 1008b0c0 mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1008b0c3 sar edx, 4 */
  EDX = (sh_sar((uint32_t)(EDX), (0x4u)&0x1f, 32));
  /* 1008b0c6 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1008b0c7 cmp edx, esi */
  { uint32_t _a=(EDX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b0c9 jbe 0x1008b0cd */
  if ((C.cf||C.zf)) goto L_1008b0cd;
  /* 1008b0cb mov edx, esi */
  EDX = (ESI);
L_1008b0cd:;
  /* 1008b0cd cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b0cf je 0x1008b134 */
  if (C.zf) goto L_1008b134;
  /* 1008b0d1 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1008b0d4 mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 1008b0d7 cmp esi, dword ptr [ecx + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ECX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b0da jne 0x1008b11c */
  if (!C.zf) goto L_1008b11c;
  /* 1008b0dc cmp ebx, 0x20 */
  { uint32_t _a=(EBX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b0df jae 0x1008b0fd */
  if (!C.cf) goto L_1008b0fd;
  /* 1008b0e1 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 1008b0e6 mov ecx, ebx */
  ECX = (EBX);
  /* 1008b0e8 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1008b0ea not esi */
  ESI = (~(ESI));
  /* 1008b0ec and dword ptr [eax + edi*4 + 0x44], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0x44)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1008b0f0 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 1008b0f4 jne 0x1008b11c */
  if (!C.zf) goto L_1008b11c;
  /* 1008b0f6 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1008b0f9 and dword ptr [ecx], esi */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(ESI); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1008b0fb jmp 0x1008b11c */
  goto L_1008b11c;
L_1008b0fd:;
  /* 1008b0fd lea ecx, [ebx - 0x20] */
  ECX = ((uint32_t)(EBX + -0x20));
  /* 1008b100 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 1008b105 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1008b107 not esi */
  ESI = (~(ESI));
  /* 1008b109 and dword ptr [eax + edi*4 + 0xc4], esi */
  { uint32_t _r=(r32((uint32_t)(EAX + EDI*4 + 0xc4)))&(ESI); w32((uint32_t)(EAX + EDI*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1008b110 dec byte ptr [ebx + eax + 4] */
  { uint32_t _r=(r8((uint32_t)(EBX + EAX*1 + 0x4)))-1; w8((uint32_t)(EBX + EAX*1 + 0x4), (_r)); fl_dec(_r,8); }
  /* 1008b114 jne 0x1008b11c */
  if (!C.zf) goto L_1008b11c;
  /* 1008b116 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1008b119 and dword ptr [ecx + 4], esi */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(ESI); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_1008b11c:;
  /* 1008b11c mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1008b11f mov esi, dword ptr [ecx + 8] */
  ESI = (r32((uint32_t)(ECX + 0x8)));
  /* 1008b122 mov ecx, dword ptr [ecx + 4] */
  ECX = (r32((uint32_t)(ECX + 0x4)));
  /* 1008b125 mov dword ptr [esi + 4], ecx */
  w32((uint32_t)(ESI + 0x4), (ECX));
  /* 1008b128 mov ecx, dword ptr [ebp + 0xc] */
  ECX = (r32((uint32_t)(EBP + 0xc)));
  /* 1008b12b mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 1008b12e mov ecx, dword ptr [ecx + 8] */
  ECX = (r32((uint32_t)(ECX + 0x8)));
  /* 1008b131 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
L_1008b134:;
  /* 1008b134 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1008b137 jmp 0x1008b13c */
  goto L_1008b13c;
L_1008b139:;
  /* 1008b139 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1008b13c:;
  /* 1008b13c cmp dword ptr [ebp - 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b140 jne 0x1008b14a */
  if (!C.zf) goto L_1008b14a;
  /* 1008b142 cmp ebx, edx */
  { uint32_t _a=(EBX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b144 je 0x1008b1cb */
  if (C.zf) goto L_1008b1cb;
L_1008b14a:;
  /* 1008b14a mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1008b14d mov ebx, dword ptr [ecx + edx*8 + 4] */
  EBX = (r32((uint32_t)(ECX + EDX*8 + 0x4)));
  /* 1008b151 lea ecx, [ecx + edx*8] */
  ECX = ((uint32_t)(ECX + EDX*8));
  /* 1008b154 mov dword ptr [esi + 4], ebx */
  w32((uint32_t)(ESI + 0x4), (EBX));
  /* 1008b157 mov dword ptr [esi + 8], ecx */
  w32((uint32_t)(ESI + 0x8), (ECX));
  /* 1008b15a mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 1008b15d mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 1008b160 mov dword ptr [ecx + 8], esi */
  w32((uint32_t)(ECX + 0x8), (ESI));
  /* 1008b163 mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 1008b166 cmp ecx, dword ptr [esi + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(ESI + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b169 jne 0x1008b1cb */
  if (!C.zf) goto L_1008b1cb;
  /* 1008b16b mov cl, byte ptr [edx + eax + 4] */
  CL = (r8((uint32_t)(EDX + EAX*1 + 0x4)));
  /* 1008b16f cmp edx, 0x20 */
  { uint32_t _a=(EDX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b172 mov byte ptr [ebp + 0xf], cl */
  w8((uint32_t)(EBP + 0xf), (CL));
  /* 1008b175 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1008b177 mov byte ptr [edx + eax + 4], cl */
  w8((uint32_t)(EDX + EAX*1 + 0x4), (CL));
  /* 1008b17b jae 0x1008b1a2 */
  if (!C.cf) goto L_1008b1a2;
  /* 1008b17d cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008b181 jne 0x1008b191 */
  if (!C.zf) goto L_1008b191;
  /* 1008b183 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1008b188 mov ecx, edx */
  ECX = (EDX);
  /* 1008b18a shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1008b18c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1008b18f or dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))|(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
L_1008b191:;
  /* 1008b191 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1008b196 mov ecx, edx */
  ECX = (EDX);
  /* 1008b198 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1008b19a lea eax, [eax + edi*4 + 0x44] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0x44));
  /* 1008b19e or dword ptr [eax], ebx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EBX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1008b1a0 jmp 0x1008b1cb */
  goto L_1008b1cb;
L_1008b1a2:;
  /* 1008b1a2 cmp byte ptr [ebp + 0xf], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xf))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008b1a6 jne 0x1008b1b8 */
  if (!C.zf) goto L_1008b1b8;
  /* 1008b1a8 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 1008b1ab mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1008b1b0 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1008b1b2 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1008b1b5 or dword ptr [ecx + 4], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))|(EBX); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
L_1008b1b8:;
  /* 1008b1b8 lea ecx, [edx - 0x20] */
  ECX = ((uint32_t)(EDX + -0x20));
  /* 1008b1bb mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1008b1c0 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1008b1c2 lea eax, [eax + edi*4 + 0xc4] */
  EAX = ((uint32_t)(EAX + EDI*4 + 0xc4));
  /* 1008b1c9 or dword ptr [eax], edx */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(EDX); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
L_1008b1cb:;
  /* 1008b1cb mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1008b1ce mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1008b1d0 mov dword ptr [eax + esi - 4], eax */
  w32((uint32_t)(EAX + ESI*1 + -0x4), (EAX));
  /* 1008b1d4 mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1008b1d7 dec dword ptr [eax] */
  { uint32_t _r=(r32((uint32_t)(EAX)))-1; w32((uint32_t)(EAX), (_r)); fl_dec(_r,32); }
  /* 1008b1d9 jne 0x1008b2d6 */
  if (!C.zf) goto L_1008b2d6;
  /* 1008b1df mov eax, dword ptr [0x10096a04] */
  EAX = (r32((uint32_t)(0x10096a04)));
  /* 1008b1e4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008b1e6 je 0x1008b2c8 */
  if (C.zf) goto L_1008b2c8;
  /* 1008b1ec mov ecx, dword ptr [0x100969fc] */
  ECX = (r32((uint32_t)(0x100969fc)));
  /* 1008b1f2 mov esi, dword ptr [0x1008e07c] */
  ESI = (r32((uint32_t)(0x1008e07c)));
  /* 1008b1f8 shl ecx, 0xf */
  ECX = (sh_shl((uint32_t)(ECX), (0xfu)&0x1f, 32));
  /* 1008b1fb add ecx, dword ptr [eax + 0xc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0xc))),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008b1fe mov ebx, 0x8000 */
  EBX = (0x8000u);
  /* 1008b203 push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1008b208 push ebx */
  push32((uint32_t)(EBX));
  /* 1008b209 push ecx */
  push32((uint32_t)(ECX));
  /* 1008b20a call esi */
  call_ind((uint32_t)(ESI), 0x1008b20cu);
  /* 1008b20c mov ecx, dword ptr [0x100969fc] */
  ECX = (r32((uint32_t)(0x100969fc)));
  /* 1008b212 mov eax, dword ptr [0x10096a04] */
  EAX = (r32((uint32_t)(0x10096a04)));
  /* 1008b217 mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1008b21c shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1008b21e or dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))|(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 1008b221 mov eax, dword ptr [0x10096a04] */
  EAX = (r32((uint32_t)(0x10096a04)));
  /* 1008b226 mov ecx, dword ptr [0x100969fc] */
  ECX = (r32((uint32_t)(0x100969fc)));
  /* 1008b22c mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 1008b22f and dword ptr [eax + ecx*4 + 0xc4], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0xc4)))&(0x0u); w32((uint32_t)(EAX + ECX*4 + 0xc4), (_r)); fl_logic(_r,32); }
  /* 1008b237 mov eax, dword ptr [0x10096a04] */
  EAX = (r32((uint32_t)(0x10096a04)));
  /* 1008b23c mov eax, dword ptr [eax + 0x10] */
  EAX = (r32((uint32_t)(EAX + 0x10)));
  /* 1008b23f dec byte ptr [eax + 0x43] */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x43)))-1; w8((uint32_t)(EAX + 0x43), (_r)); fl_dec(_r,8); }
  /* 1008b242 mov eax, dword ptr [0x10096a04] */
  EAX = (r32((uint32_t)(0x10096a04)));
  /* 1008b247 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1008b24a cmp byte ptr [ecx + 0x43], 0 */
  { uint32_t _a=(r8((uint32_t)(ECX + 0x43))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008b24e jne 0x1008b259 */
  if (!C.zf) goto L_1008b259;
  /* 1008b250 and dword ptr [eax + 4], 0xfffffffe */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))&(0xfffffffeu); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1008b254 mov eax, dword ptr [0x10096a04] */
  EAX = (r32((uint32_t)(0x10096a04)));
L_1008b259:;
  /* 1008b259 cmp dword ptr [eax + 8], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b25d jne 0x1008b2c8 */
  if (!C.zf) goto L_1008b2c8;
  /* 1008b25f push ebx */
  push32((uint32_t)(EBX));
  /* 1008b260 push 0 */
  push32((uint32_t)(0x0u));
  /* 1008b262 push dword ptr [eax + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0xc))));
  /* 1008b265 call esi */
  call_ind((uint32_t)(ESI), 0x1008b267u);
  /* 1008b267 mov eax, dword ptr [0x10096a04] */
  EAX = (r32((uint32_t)(0x10096a04)));
  /* 1008b26c push dword ptr [eax + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EAX + 0x10))));
  /* 1008b26f push 0 */
  push32((uint32_t)(0x0u));
  /* 1008b271 push dword ptr [0x10097c64] */
  push32((uint32_t)(r32((uint32_t)(0x10097c64))));
  /* 1008b277 call dword ptr [0x1008e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e080))), 0x1008b27du);
  /* 1008b27d mov eax, dword ptr [0x10096a08] */
  EAX = (r32((uint32_t)(0x10096a08)));
  /* 1008b282 mov edx, dword ptr [0x10096a0c] */
  EDX = (r32((uint32_t)(0x10096a0c)));
  /* 1008b288 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1008b28b shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1008b28e mov ecx, eax */
  ECX = (EAX);
  /* 1008b290 mov eax, dword ptr [0x10096a04] */
  EAX = (r32((uint32_t)(0x10096a04)));
  /* 1008b295 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008b297 lea ecx, [ecx + edx - 0x14] */
  ECX = ((uint32_t)(ECX + EDX*1 + -0x14));
  /* 1008b29b push ecx */
  push32((uint32_t)(ECX));
  /* 1008b29c lea ecx, [eax + 0x14] */
  ECX = ((uint32_t)(EAX + 0x14));
  /* 1008b29f push ecx */
  push32((uint32_t)(ECX));
  /* 1008b2a0 push eax */
  push32((uint32_t)(EAX));
  /* 1008b2a1 call 0x10089c80 */
  push32(0x1008b2a6u); f_10089c80();
  /* 1008b2a6 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1008b2a9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008b2ac dec dword ptr [0x10096a08] */
  { uint32_t _r=(r32((uint32_t)(0x10096a08)))-1; w32((uint32_t)(0x10096a08), (_r)); fl_dec(_r,32); }
  /* 1008b2b2 cmp eax, dword ptr [0x10096a04] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10096a04))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b2b8 jbe 0x1008b2be */
  if ((C.cf||C.zf)) goto L_1008b2be;
  /* 1008b2ba sub dword ptr [ebp + 8], 0x14 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x14u),_r=_a-_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_sub(_a,_b,_r,32); }
L_1008b2be:;
  /* 1008b2be mov eax, dword ptr [0x10096a0c] */
  EAX = (r32((uint32_t)(0x10096a0c)));
  /* 1008b2c3 mov dword ptr [0x10096a00], eax */
  w32((uint32_t)(0x10096a00), (EAX));
L_1008b2c8:;
  /* 1008b2c8 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1008b2cb mov dword ptr [0x100969fc], edi */
  w32((uint32_t)(0x100969fc), (EDI));
  /* 1008b2d1 mov dword ptr [0x10096a04], eax */
  w32((uint32_t)(0x10096a04), (EAX));
L_1008b2d6:;
  /* 1008b2d6 pop edi */
  EDI = (pop32());
  /* 1008b2d7 pop esi */
  ESI = (pop32());
  /* 1008b2d8 pop ebx */
  EBX = (pop32());
  /* 1008b2d9 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1008b2da ret  */
  ESPCHK(0x1008afb2u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b2db @ 0x1008b2db (777 bytes, 275 insns) */
void f_1008b2db(void) {
  FTRACE(0x1008b2dbu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008b2db push ebp */
  push32((uint32_t)(EBP));
  /* 1008b2dc mov ebp, esp */
  EBP = (ESP);
  /* 1008b2de sub esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008b2e1 mov eax, dword ptr [0x10096a08] */
  EAX = (r32((uint32_t)(0x10096a08)));
  /* 1008b2e6 mov edx, dword ptr [0x10096a0c] */
  EDX = (r32((uint32_t)(0x10096a0c)));
  /* 1008b2ec push ebx */
  push32((uint32_t)(EBX));
  /* 1008b2ed push esi */
  push32((uint32_t)(ESI));
  /* 1008b2ee lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1008b2f1 push edi */
  push32((uint32_t)(EDI));
  /* 1008b2f2 lea edi, [edx + eax*4] */
  EDI = ((uint32_t)(EDX + EAX*4));
  /* 1008b2f5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1008b2f8 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 1008b2fb lea ecx, [eax + 0x17] */
  ECX = ((uint32_t)(EAX + 0x17));
  /* 1008b2fe and ecx, 0xfffffff0 */
  { uint32_t _r=(ECX)&(0xfffffff0u); ECX = (_r); fl_logic(_r,32); }
  /* 1008b301 mov dword ptr [ebp - 0x10], ecx */
  w32((uint32_t)(EBP + -0x10), (ECX));
  /* 1008b304 sar ecx, 4 */
  ECX = (sh_sar((uint32_t)(ECX), (0x4u)&0x1f, 32));
  /* 1008b307 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1008b308 cmp ecx, 0x20 */
  { uint32_t _a=(ECX),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b30b jge 0x1008b31b */
  if ((C.sf==C.of)) goto L_1008b31b;
  /* 1008b30d or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
  /* 1008b310 shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1008b312 or dword ptr [ebp - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))|(0xffffffffu); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1008b316 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 1008b319 jmp 0x1008b32b */
  goto L_1008b32b;
L_1008b31b:;
  /* 1008b31b add ecx, -0x20 */
  { uint32_t _a=(ECX),_b=(0xffffffe0u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008b31e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1008b321 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1008b323 shr eax, cl */
  EAX = (sh_shr((uint32_t)(EAX), (CL)&0x1f, 32));
  /* 1008b325 mov dword ptr [ebp - 0xc], esi */
  w32((uint32_t)(EBP + -0xc), (ESI));
  /* 1008b328 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
L_1008b32b:;
  /* 1008b32b mov eax, dword ptr [0x10096a00] */
  EAX = (r32((uint32_t)(0x10096a00)));
  /* 1008b330 mov ebx, eax */
  EBX = (EAX);
  /* 1008b332 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b334 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1008b337 jae 0x1008b352 */
  if (!C.cf) goto L_1008b352;
L_1008b339:;
  /* 1008b339 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1008b33c mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 1008b33e and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1008b341 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 1008b343 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1008b345 jne 0x1008b352 */
  if (!C.zf) goto L_1008b352;
  /* 1008b347 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008b34a cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b34d mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1008b350 jb 0x1008b339 */
  if (C.cf) goto L_1008b339;
L_1008b352:;
  /* 1008b352 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b355 jne 0x1008b3d0 */
  if (!C.zf) goto L_1008b3d0;
  /* 1008b357 mov ebx, edx */
  EBX = (EDX);
L_1008b359:;
  /* 1008b359 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b35b mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1008b35e jae 0x1008b375 */
  if (!C.cf) goto L_1008b375;
  /* 1008b360 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1008b363 mov edi, dword ptr [ebx] */
  EDI = (r32((uint32_t)(EBX)));
  /* 1008b365 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1008b368 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 1008b36a or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1008b36c jne 0x1008b373 */
  if (!C.zf) goto L_1008b373;
  /* 1008b36e add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008b371 jmp 0x1008b359 */
  goto L_1008b359;
L_1008b373:;
  /* 1008b373 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1008b375:;
  /* 1008b375 jne 0x1008b3d0 */
  if (!C.zf) goto L_1008b3d0;
L_1008b377:;
  /* 1008b377 cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b37a jae 0x1008b38d */
  if (!C.cf) goto L_1008b38d;
  /* 1008b37c cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b380 jne 0x1008b38a */
  if (!C.zf) goto L_1008b38a;
  /* 1008b382 add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008b385 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1008b388 jmp 0x1008b377 */
  goto L_1008b377;
L_1008b38a:;
  /* 1008b38a cmp ebx, dword ptr [ebp - 4] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1008b38d:;
  /* 1008b38d jne 0x1008b3b5 */
  if (!C.zf) goto L_1008b3b5;
  /* 1008b38f mov ebx, edx */
  EBX = (EDX);
L_1008b391:;
  /* 1008b391 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b393 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1008b396 jae 0x1008b3a5 */
  if (!C.cf) goto L_1008b3a5;
  /* 1008b398 cmp dword ptr [ebx + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b39c jne 0x1008b3a3 */
  if (!C.zf) goto L_1008b3a3;
  /* 1008b39e add ebx, 0x14 */
  { uint32_t _a=(EBX),_b=(0x14u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008b3a1 jmp 0x1008b391 */
  goto L_1008b391;
L_1008b3a3:;
  /* 1008b3a3 cmp ebx, eax */
  { uint32_t _a=(EBX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1008b3a5:;
  /* 1008b3a5 jne 0x1008b3b5 */
  if (!C.zf) goto L_1008b3b5;
  /* 1008b3a7 call 0x1008b5e4 */
  push32(0x1008b3acu); f_1008b5e4();
  /* 1008b3ac mov ebx, eax */
  EBX = (EAX);
  /* 1008b3ae test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1008b3b0 mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1008b3b3 je 0x1008b3c9 */
  if (C.zf) goto L_1008b3c9;
L_1008b3b5:;
  /* 1008b3b5 push ebx */
  push32((uint32_t)(EBX));
  /* 1008b3b6 call 0x1008b695 */
  push32(0x1008b3bbu); f_1008b695();
  /* 1008b3bb pop ecx */
  ECX = (pop32());
  /* 1008b3bc mov ecx, dword ptr [ebx + 0x10] */
  ECX = (r32((uint32_t)(EBX + 0x10)));
  /* 1008b3bf mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
  /* 1008b3c1 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 1008b3c4 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b3c7 jne 0x1008b3d0 */
  if (!C.zf) goto L_1008b3d0;
L_1008b3c9:;
  /* 1008b3c9 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1008b3cb jmp 0x1008b5df */
  goto L_1008b5df;
L_1008b3d0:;
  /* 1008b3d0 mov dword ptr [0x10096a00], ebx */
  w32((uint32_t)(0x10096a00), (EBX));
  /* 1008b3d6 mov eax, dword ptr [ebx + 0x10] */
  EAX = (r32((uint32_t)(EBX + 0x10)));
  /* 1008b3d9 mov edx, dword ptr [eax] */
  EDX = (r32((uint32_t)(EAX)));
  /* 1008b3db cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b3de mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
  /* 1008b3e1 je 0x1008b3f7 */
  if (C.zf) goto L_1008b3f7;
  /* 1008b3e3 mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 1008b3ea mov edi, dword ptr [eax + edx*4 + 0x44] */
  EDI = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 1008b3ee and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1008b3f1 and edi, esi */
  { uint32_t _r=(EDI)&(ESI); EDI = (_r); fl_logic(_r,32); }
  /* 1008b3f3 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1008b3f5 jne 0x1008b42e */
  if (!C.zf) goto L_1008b42e;
L_1008b3f7:;
  /* 1008b3f7 mov edx, dword ptr [eax + 0xc4] */
  EDX = (r32((uint32_t)(EAX + 0xc4)));
  /* 1008b3fd mov esi, dword ptr [eax + 0x44] */
  ESI = (r32((uint32_t)(EAX + 0x44)));
  /* 1008b400 and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 1008b403 and esi, dword ptr [ebp - 0xc] */
  { uint32_t _r=(ESI)&(r32((uint32_t)(EBP + -0xc))); ESI = (_r); fl_logic(_r,32); }
  /* 1008b406 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1008b40a lea ecx, [eax + 0x44] */
  ECX = ((uint32_t)(EAX + 0x44));
  /* 1008b40d or edx, esi */
  { uint32_t _r=(EDX)|(ESI); EDX = (_r); fl_logic(_r,32); }
  /* 1008b40f mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 1008b412 jne 0x1008b42b */
  if (!C.zf) goto L_1008b42b;
L_1008b414:;
  /* 1008b414 mov edx, dword ptr [ecx + 0x84] */
  EDX = (r32((uint32_t)(ECX + 0x84)));
  /* 1008b41a inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1008b41d and edx, dword ptr [ebp - 8] */
  { uint32_t _r=(EDX)&(r32((uint32_t)(EBP + -0x8))); EDX = (_r); fl_logic(_r,32); }
  /* 1008b420 add ecx, 4 */
  { uint32_t _a=(ECX),_b=(0x4u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008b423 mov edi, esi */
  EDI = (ESI);
  /* 1008b425 and edi, dword ptr [ecx] */
  { uint32_t _r=(EDI)&(r32((uint32_t)(ECX))); EDI = (_r); fl_logic(_r,32); }
  /* 1008b427 or edx, edi */
  { uint32_t _r=(EDX)|(EDI); EDX = (_r); fl_logic(_r,32); }
  /* 1008b429 je 0x1008b414 */
  if (C.zf) goto L_1008b414;
L_1008b42b:;
  /* 1008b42b mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
L_1008b42e:;
  /* 1008b42e mov ecx, edx */
  ECX = (EDX);
  /* 1008b430 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1008b432 imul ecx, ecx, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x204u); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1008b438 lea ecx, [ecx + eax + 0x144] */
  ECX = ((uint32_t)(ECX + EAX*1 + 0x144));
  /* 1008b43f mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1008b442 mov ecx, dword ptr [eax + edx*4 + 0x44] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0x44)));
  /* 1008b446 and ecx, esi */
  { uint32_t _r=(ECX)&(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 1008b448 jne 0x1008b457 */
  if (!C.zf) goto L_1008b457;
  /* 1008b44a mov ecx, dword ptr [eax + edx*4 + 0xc4] */
  ECX = (r32((uint32_t)(EAX + EDX*4 + 0xc4)));
  /* 1008b451 push 0x20 */
  push32((uint32_t)(0x20u));
  /* 1008b453 and ecx, dword ptr [ebp - 8] */
  { uint32_t _r=(ECX)&(r32((uint32_t)(EBP + -0x8))); ECX = (_r); fl_logic(_r,32); }
  /* 1008b456 pop edi */
  EDI = (pop32());
L_1008b457:;
  /* 1008b457 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1008b459 jl 0x1008b460 */
  if ((C.sf!=C.of)) goto L_1008b460;
  /* 1008b45b shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1008b45d inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1008b45e jmp 0x1008b457 */
  goto L_1008b457;
L_1008b460:;
  /* 1008b460 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1008b463 mov edx, dword ptr [ecx + edi*8 + 4] */
  EDX = (r32((uint32_t)(ECX + EDI*8 + 0x4)));
  /* 1008b467 mov ecx, dword ptr [edx] */
  ECX = (r32((uint32_t)(EDX)));
  /* 1008b469 sub ecx, dword ptr [ebp - 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EBP + -0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008b46c mov esi, ecx */
  ESI = (ECX);
  /* 1008b46e mov dword ptr [ebp - 8], ecx */
  w32((uint32_t)(EBP + -0x8), (ECX));
  /* 1008b471 sar esi, 4 */
  ESI = (sh_sar((uint32_t)(ESI), (0x4u)&0x1f, 32));
  /* 1008b474 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1008b475 cmp esi, 0x3f */
  { uint32_t _a=(ESI),_b=(0x3fu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b478 jle 0x1008b47d */
  if ((C.zf||C.sf!=C.of)) goto L_1008b47d;
  /* 1008b47a push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1008b47c pop esi */
  ESI = (pop32());
L_1008b47d:;
  /* 1008b47d cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b47f je 0x1008b592 */
  if (C.zf) goto L_1008b592;
  /* 1008b485 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1008b488 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b48b jne 0x1008b4ee */
  if (!C.zf) goto L_1008b4ee;
  /* 1008b48d cmp edi, 0x20 */
  { uint32_t _a=(EDI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b490 jge 0x1008b4bd */
  if ((C.sf==C.of)) goto L_1008b4bd;
  /* 1008b492 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1008b497 mov ecx, edi */
  ECX = (EDI);
  /* 1008b499 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1008b49b mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1008b49e lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 1008b4a2 not ebx */
  EBX = (~(EBX));
  /* 1008b4a4 mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 1008b4a7 and ebx, dword ptr [eax + ecx*4 + 0x44] */
  { uint32_t _r=(EBX)&(r32((uint32_t)(EAX + ECX*4 + 0x44))); EBX = (_r); fl_logic(_r,32); }
  /* 1008b4ab mov dword ptr [eax + ecx*4 + 0x44], ebx */
  w32((uint32_t)(EAX + ECX*4 + 0x44), (EBX));
  /* 1008b4af dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 1008b4b1 jne 0x1008b4eb */
  if (!C.zf) goto L_1008b4eb;
  /* 1008b4b3 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1008b4b6 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1008b4b9 and dword ptr [ebx], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX)))&(ECX); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
  /* 1008b4bb jmp 0x1008b4ee */
  goto L_1008b4ee;
L_1008b4bd:;
  /* 1008b4bd lea ecx, [edi - 0x20] */
  ECX = ((uint32_t)(EDI + -0x20));
  /* 1008b4c0 mov ebx, 0x80000000 */
  EBX = (0x80000000u);
  /* 1008b4c5 shr ebx, cl */
  EBX = (sh_shr((uint32_t)(EBX), (CL)&0x1f, 32));
  /* 1008b4c7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1008b4ca lea edi, [eax + edi + 4] */
  EDI = ((uint32_t)(EAX + EDI*1 + 0x4));
  /* 1008b4ce lea ecx, [eax + ecx*4 + 0xc4] */
  ECX = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 1008b4d5 not ebx */
  EBX = (~(EBX));
  /* 1008b4d7 and dword ptr [ecx], ebx */
  { uint32_t _r=(r32((uint32_t)(ECX)))&(EBX); w32((uint32_t)(ECX), (_r)); fl_logic(_r,32); }
  /* 1008b4d9 dec byte ptr [edi] */
  { uint32_t _r=(r8((uint32_t)(EDI)))-1; w8((uint32_t)(EDI), (_r)); fl_dec(_r,8); }
  /* 1008b4db mov dword ptr [ebp - 0x14], ebx */
  w32((uint32_t)(EBP + -0x14), (EBX));
  /* 1008b4de jne 0x1008b4eb */
  if (!C.zf) goto L_1008b4eb;
  /* 1008b4e0 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1008b4e3 mov ecx, dword ptr [ebp - 0x14] */
  ECX = (r32((uint32_t)(EBP + -0x14)));
  /* 1008b4e6 and dword ptr [ebx + 4], ecx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))&(ECX); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1008b4e9 jmp 0x1008b4ee */
  goto L_1008b4ee;
L_1008b4eb:;
  /* 1008b4eb mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1008b4ee:;
  /* 1008b4ee mov ecx, dword ptr [edx + 8] */
  ECX = (r32((uint32_t)(EDX + 0x8)));
  /* 1008b4f1 mov edi, dword ptr [edx + 4] */
  EDI = (r32((uint32_t)(EDX + 0x4)));
  /* 1008b4f4 cmp dword ptr [ebp - 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b4f8 mov dword ptr [ecx + 4], edi */
  w32((uint32_t)(ECX + 0x4), (EDI));
  /* 1008b4fb mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1008b4fe mov edi, dword ptr [edx + 8] */
  EDI = (r32((uint32_t)(EDX + 0x8)));
  /* 1008b501 mov dword ptr [ecx + 8], edi */
  w32((uint32_t)(ECX + 0x8), (EDI));
  /* 1008b504 je 0x1008b59e */
  if (C.zf) goto L_1008b59e;
  /* 1008b50a mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1008b50d mov edi, dword ptr [ecx + esi*8 + 4] */
  EDI = (r32((uint32_t)(ECX + ESI*8 + 0x4)));
  /* 1008b511 lea ecx, [ecx + esi*8] */
  ECX = ((uint32_t)(ECX + ESI*8));
  /* 1008b514 mov dword ptr [edx + 4], edi */
  w32((uint32_t)(EDX + 0x4), (EDI));
  /* 1008b517 mov dword ptr [edx + 8], ecx */
  w32((uint32_t)(EDX + 0x8), (ECX));
  /* 1008b51a mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1008b51d mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1008b520 mov dword ptr [ecx + 8], edx */
  w32((uint32_t)(ECX + 0x8), (EDX));
  /* 1008b523 mov ecx, dword ptr [edx + 4] */
  ECX = (r32((uint32_t)(EDX + 0x4)));
  /* 1008b526 cmp ecx, dword ptr [edx + 8] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EDX + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b529 jne 0x1008b58f */
  if (!C.zf) goto L_1008b58f;
  /* 1008b52b mov cl, byte ptr [esi + eax + 4] */
  CL = (r8((uint32_t)(ESI + EAX*1 + 0x4)));
  /* 1008b52f cmp esi, 0x20 */
  { uint32_t _a=(ESI),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b532 mov byte ptr [ebp + 0xb], cl */
  w8((uint32_t)(EBP + 0xb), (CL));
  /* 1008b535 jge 0x1008b560 */
  if ((C.sf==C.of)) goto L_1008b560;
  /* 1008b537 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1008b539 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008b53d mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 1008b541 jne 0x1008b54e */
  if (!C.zf) goto L_1008b54e;
  /* 1008b543 mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1008b548 mov ecx, esi */
  ECX = (ESI);
  /* 1008b54a shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1008b54c or dword ptr [ebx], edi */
  { uint32_t _r=(r32((uint32_t)(EBX)))|(EDI); w32((uint32_t)(EBX), (_r)); fl_logic(_r,32); }
L_1008b54e:;
  /* 1008b54e mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1008b553 mov ecx, esi */
  ECX = (ESI);
  /* 1008b555 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1008b557 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1008b55a or dword ptr [eax + ecx*4 + 0x44], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + ECX*4 + 0x44)))|(EDI); w32((uint32_t)(EAX + ECX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1008b55e jmp 0x1008b58f */
  goto L_1008b58f;
L_1008b560:;
  /* 1008b560 inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1008b562 cmp byte ptr [ebp + 0xb], 0 */
  { uint32_t _a=(r8((uint32_t)(EBP + 0xb))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008b566 mov byte ptr [esi + eax + 4], cl */
  w8((uint32_t)(ESI + EAX*1 + 0x4), (CL));
  /* 1008b56a jne 0x1008b579 */
  if (!C.zf) goto L_1008b579;
  /* 1008b56c lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 1008b56f mov edi, 0x80000000 */
  EDI = (0x80000000u);
  /* 1008b574 shr edi, cl */
  EDI = (sh_shr((uint32_t)(EDI), (CL)&0x1f, 32));
  /* 1008b576 or dword ptr [ebx + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x4)))|(EDI); w32((uint32_t)(EBX + 0x4), (_r)); fl_logic(_r,32); }
L_1008b579:;
  /* 1008b579 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1008b57c lea edi, [eax + ecx*4 + 0xc4] */
  EDI = ((uint32_t)(EAX + ECX*4 + 0xc4));
  /* 1008b583 lea ecx, [esi - 0x20] */
  ECX = ((uint32_t)(ESI + -0x20));
  /* 1008b586 mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 1008b58b shr esi, cl */
  ESI = (sh_shr((uint32_t)(ESI), (CL)&0x1f, 32));
  /* 1008b58d or dword ptr [edi], esi */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(ESI); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
L_1008b58f:;
  /* 1008b58f mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_1008b592:;
  /* 1008b592 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1008b594 je 0x1008b5a1 */
  if (C.zf) goto L_1008b5a1;
  /* 1008b596 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1008b598 mov dword ptr [ecx + edx - 4], ecx */
  w32((uint32_t)(ECX + EDX*1 + -0x4), (ECX));
  /* 1008b59c jmp 0x1008b5a1 */
  goto L_1008b5a1;
L_1008b59e:;
  /* 1008b59e mov ecx, dword ptr [ebp - 8] */
  ECX = (r32((uint32_t)(EBP + -0x8)));
L_1008b5a1:;
  /* 1008b5a1 mov esi, dword ptr [ebp - 0x10] */
  ESI = (r32((uint32_t)(EBP + -0x10)));
  /* 1008b5a4 add edx, ecx */
  { uint32_t _a=(EDX),_b=(ECX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008b5a6 lea ecx, [esi + 1] */
  ECX = ((uint32_t)(ESI + 0x1));
  /* 1008b5a9 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1008b5ab mov dword ptr [edx + esi - 4], ecx */
  w32((uint32_t)(EDX + ESI*1 + -0x4), (ECX));
  /* 1008b5af mov esi, dword ptr [ebp - 0xc] */
  ESI = (r32((uint32_t)(EBP + -0xc)));
  /* 1008b5b2 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1008b5b4 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1008b5b6 lea edi, [ecx + 1] */
  EDI = ((uint32_t)(ECX + 0x1));
  /* 1008b5b9 mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1008b5bb jne 0x1008b5d7 */
  if (!C.zf) goto L_1008b5d7;
  /* 1008b5bd cmp ebx, dword ptr [0x10096a04] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10096a04))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b5c3 jne 0x1008b5d7 */
  if (!C.zf) goto L_1008b5d7;
  /* 1008b5c5 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1008b5c8 cmp ecx, dword ptr [0x100969fc] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x100969fc))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b5ce jne 0x1008b5d7 */
  if (!C.zf) goto L_1008b5d7;
  /* 1008b5d0 and dword ptr [0x10096a04], 0 */
  { uint32_t _r=(r32((uint32_t)(0x10096a04)))&(0x0u); w32((uint32_t)(0x10096a04), (_r)); fl_logic(_r,32); }
L_1008b5d7:;
  /* 1008b5d7 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1008b5da mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1008b5dc lea eax, [edx + 4] */
  EAX = ((uint32_t)(EDX + 0x4));
L_1008b5df:;
  /* 1008b5df pop edi */
  EDI = (pop32());
  /* 1008b5e0 pop esi */
  ESI = (pop32());
  /* 1008b5e1 pop ebx */
  EBX = (pop32());
  /* 1008b5e2 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1008b5e3 ret  */
  ESPCHK(0x1008b2dbu, _esp0);
  ESP += 4; return;
}

/* FUN_1000b5e4 @ 0x1008b5e4 (177 bytes, 53 insns) */
void f_1008b5e4(void) {
  FTRACE(0x1008b5e4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008b5e4 mov eax, dword ptr [0x10096a08] */
  EAX = (r32((uint32_t)(0x10096a08)));
  /* 1008b5e9 mov ecx, dword ptr [0x100969f8] */
  ECX = (r32((uint32_t)(0x100969f8)));
  /* 1008b5ef push esi */
  push32((uint32_t)(ESI));
  /* 1008b5f0 push edi */
  push32((uint32_t)(EDI));
  /* 1008b5f1 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1008b5f3 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b5f5 jne 0x1008b627 */
  if (!C.zf) goto L_1008b627;
  /* 1008b5f7 lea eax, [ecx + ecx*4 + 0x50] */
  EAX = ((uint32_t)(ECX + ECX*4 + 0x50));
  /* 1008b5fb shl eax, 2 */
  EAX = (sh_shl((uint32_t)(EAX), (0x2u)&0x1f, 32));
  /* 1008b5fe push eax */
  push32((uint32_t)(EAX));
  /* 1008b5ff push dword ptr [0x10096a0c] */
  push32((uint32_t)(r32((uint32_t)(0x10096a0c))));
  /* 1008b605 push edi */
  push32((uint32_t)(EDI));
  /* 1008b606 push dword ptr [0x10097c64] */
  push32((uint32_t)(r32((uint32_t)(0x10097c64))));
  /* 1008b60c call dword ptr [0x1008e0ac] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e0ac))), 0x1008b612u);
  /* 1008b612 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b614 je 0x1008b677 */
  if (C.zf) goto L_1008b677;
  /* 1008b616 add dword ptr [0x100969f8], 0x10 */
  { uint32_t _a=(r32((uint32_t)(0x100969f8))),_b=(0x10u),_r=_a+_b; w32((uint32_t)(0x100969f8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1008b61d mov dword ptr [0x10096a0c], eax */
  w32((uint32_t)(0x10096a0c), (EAX));
  /* 1008b622 mov eax, dword ptr [0x10096a08] */
  EAX = (r32((uint32_t)(0x10096a08)));
L_1008b627:;
  /* 1008b627 mov ecx, dword ptr [0x10096a0c] */
  ECX = (r32((uint32_t)(0x10096a0c)));
  /* 1008b62d push 0x41c4 */
  push32((uint32_t)(0x41c4u));
  /* 1008b632 push 8 */
  push32((uint32_t)(0x8u));
  /* 1008b634 lea eax, [eax + eax*4] */
  EAX = ((uint32_t)(EAX + EAX*4));
  /* 1008b637 push dword ptr [0x10097c64] */
  push32((uint32_t)(r32((uint32_t)(0x10097c64))));
  /* 1008b63d lea esi, [ecx + eax*4] */
  ESI = ((uint32_t)(ECX + EAX*4));
  /* 1008b640 call dword ptr [0x1008e098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e098))), 0x1008b646u);
  /* 1008b646 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b648 mov dword ptr [esi + 0x10], eax */
  w32((uint32_t)(ESI + 0x10), (EAX));
  /* 1008b64b je 0x1008b677 */
  if (C.zf) goto L_1008b677;
  /* 1008b64d push 4 */
  push32((uint32_t)(0x4u));
  /* 1008b64f push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1008b654 push 0x100000 */
  push32((uint32_t)(0x100000u));
  /* 1008b659 push edi */
  push32((uint32_t)(EDI));
  /* 1008b65a call dword ptr [0x1008e0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e0a8))), 0x1008b660u);
  /* 1008b660 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b662 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 1008b665 jne 0x1008b67b */
  if (!C.zf) goto L_1008b67b;
  /* 1008b667 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1008b66a push edi */
  push32((uint32_t)(EDI));
  /* 1008b66b push dword ptr [0x10097c64] */
  push32((uint32_t)(r32((uint32_t)(0x10097c64))));
  /* 1008b671 call dword ptr [0x1008e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e080))), 0x1008b677u);
L_1008b677:;
  /* 1008b677 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1008b679 jmp 0x1008b692 */
  goto L_1008b692;
L_1008b67b:;
  /* 1008b67b or dword ptr [esi + 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))|(0xffffffffu); w32((uint32_t)(ESI + 0x8), (_r)); fl_logic(_r,32); }
  /* 1008b67f mov dword ptr [esi], edi */
  w32((uint32_t)(ESI), (EDI));
  /* 1008b681 mov dword ptr [esi + 4], edi */
  w32((uint32_t)(ESI + 0x4), (EDI));
  /* 1008b684 inc dword ptr [0x10096a08] */
  { uint32_t _r=(r32((uint32_t)(0x10096a08)))+1; w32((uint32_t)(0x10096a08), (_r)); fl_inc(_r,32); }
  /* 1008b68a mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 1008b68d or dword ptr [eax], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX)))|(0xffffffffu); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1008b690 mov eax, esi */
  EAX = (ESI);
L_1008b692:;
  /* 1008b692 pop edi */
  EDI = (pop32());
  /* 1008b693 pop esi */
  ESI = (pop32());
  /* 1008b694 ret  */
  ESPCHK(0x1008b5e4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b695 @ 0x1008b695 (251 bytes, 85 insns) */
void f_1008b695(void) {
  FTRACE(0x1008b695u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008b695 push ebp */
  push32((uint32_t)(EBP));
  /* 1008b696 mov ebp, esp */
  EBP = (ESP);
  /* 1008b698 push ecx */
  push32((uint32_t)(ECX));
  /* 1008b699 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1008b69c push ebx */
  push32((uint32_t)(EBX));
  /* 1008b69d push esi */
  push32((uint32_t)(ESI));
  /* 1008b69e push edi */
  push32((uint32_t)(EDI));
  /* 1008b69f mov esi, dword ptr [ecx + 0x10] */
  ESI = (r32((uint32_t)(ECX + 0x10)));
  /* 1008b6a2 mov eax, dword ptr [ecx + 8] */
  EAX = (r32((uint32_t)(ECX + 0x8)));
  /* 1008b6a5 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
L_1008b6a7:;
  /* 1008b6a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008b6a9 jl 0x1008b6b0 */
  if ((C.sf!=C.of)) goto L_1008b6b0;
  /* 1008b6ab shl eax, 1 */
  EAX = (sh_shl((uint32_t)(EAX), (0x1u)&0x1f, 32));
  /* 1008b6ad inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1008b6ae jmp 0x1008b6a7 */
  goto L_1008b6a7;
L_1008b6b0:;
  /* 1008b6b0 mov eax, ebx */
  EAX = (EBX);
  /* 1008b6b2 push 0x3f */
  push32((uint32_t)(0x3fu));
  /* 1008b6b4 imul eax, eax, 0x204 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x204u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1008b6ba pop edx */
  EDX = (pop32());
  /* 1008b6bb lea eax, [eax + esi + 0x144] */
  EAX = ((uint32_t)(EAX + ESI*1 + 0x144));
  /* 1008b6c2 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
L_1008b6c5:;
  /* 1008b6c5 mov dword ptr [eax + 8], eax */
  w32((uint32_t)(EAX + 0x8), (EAX));
  /* 1008b6c8 mov dword ptr [eax + 4], eax */
  w32((uint32_t)(EAX + 0x4), (EAX));
  /* 1008b6cb add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008b6ce dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1008b6cf jne 0x1008b6c5 */
  if (!C.zf) goto L_1008b6c5;
  /* 1008b6d1 mov edi, ebx */
  EDI = (EBX);
  /* 1008b6d3 push 4 */
  push32((uint32_t)(0x4u));
  /* 1008b6d5 shl edi, 0xf */
  EDI = (sh_shl((uint32_t)(EDI), (0xfu)&0x1f, 32));
  /* 1008b6d8 add edi, dword ptr [ecx + 0xc] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(ECX + 0xc))),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1008b6db push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1008b6e0 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1008b6e5 push edi */
  push32((uint32_t)(EDI));
  /* 1008b6e6 call dword ptr [0x1008e0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e0a8))), 0x1008b6ecu);
  /* 1008b6ec test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008b6ee jne 0x1008b6f8 */
  if (!C.zf) goto L_1008b6f8;
  /* 1008b6f0 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1008b6f3 jmp 0x1008b78b */
  goto L_1008b78b;
L_1008b6f8:;
  /* 1008b6f8 lea edx, [edi + 0x7000] */
  EDX = ((uint32_t)(EDI + 0x7000));
  /* 1008b6fe cmp edi, edx */
  { uint32_t _a=(EDI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b700 ja 0x1008b73e */
  if ((!C.cf&&!C.zf)) goto L_1008b73e;
  /* 1008b702 lea eax, [edi + 0x10] */
  EAX = ((uint32_t)(EDI + 0x10));
L_1008b705:;
  /* 1008b705 or dword ptr [eax - 8], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + -0x8)))|(0xffffffffu); w32((uint32_t)(EAX + -0x8), (_r)); fl_logic(_r,32); }
  /* 1008b709 or dword ptr [eax + 0xfec], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + 0xfec)))|(0xffffffffu); w32((uint32_t)(EAX + 0xfec), (_r)); fl_logic(_r,32); }
  /* 1008b710 lea ecx, [eax + 0xffc] */
  ECX = ((uint32_t)(EAX + 0xffc));
  /* 1008b716 mov dword ptr [eax - 4], 0xff0 */
  w32((uint32_t)(EAX + -0x4), (0xff0u));
  /* 1008b71d mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1008b71f lea ecx, [eax - 0x1004] */
  ECX = ((uint32_t)(EAX + -0x1004));
  /* 1008b725 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1008b728 mov dword ptr [eax + 0xfe8], 0xff0 */
  w32((uint32_t)(EAX + 0xfe8), (0xff0u));
  /* 1008b732 add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008b737 lea ecx, [eax - 0x10] */
  ECX = ((uint32_t)(EAX + -0x10));
  /* 1008b73a cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b73c jbe 0x1008b705 */
  if ((C.cf||C.zf)) goto L_1008b705;
L_1008b73e:;
  /* 1008b73e mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1008b741 lea ecx, [edi + 0xc] */
  ECX = ((uint32_t)(EDI + 0xc));
  /* 1008b744 add eax, 0x1f8 */
  { uint32_t _a=(EAX),_b=(0x1f8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008b749 push 1 */
  push32((uint32_t)(0x1u));
  /* 1008b74b pop edi */
  EDI = (pop32());
  /* 1008b74c mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1008b74f mov dword ptr [ecx + 8], eax */
  w32((uint32_t)(ECX + 0x8), (EAX));
  /* 1008b752 lea ecx, [edx + 0xc] */
  ECX = ((uint32_t)(EDX + 0xc));
  /* 1008b755 mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1008b758 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1008b75b and dword ptr [esi + ebx*4 + 0x44], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + EBX*4 + 0x44)))&(0x0u); w32((uint32_t)(ESI + EBX*4 + 0x44), (_r)); fl_logic(_r,32); }
  /* 1008b760 mov dword ptr [esi + ebx*4 + 0xc4], edi */
  w32((uint32_t)(ESI + EBX*4 + 0xc4), (EDI));
  /* 1008b767 mov al, byte ptr [esi + 0x43] */
  AL = (r8((uint32_t)(ESI + 0x43)));
  /* 1008b76a mov cl, al */
  CL = (AL);
  /* 1008b76c inc cl */
  { uint32_t _r=(CL)+1; CL = (_r); fl_inc(_r,8); }
  /* 1008b76e test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1008b770 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1008b773 mov byte ptr [esi + 0x43], cl */
  w8((uint32_t)(ESI + 0x43), (CL));
  /* 1008b776 jne 0x1008b77b */
  if (!C.zf) goto L_1008b77b;
  /* 1008b778 or dword ptr [eax + 4], edi */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x4)))|(EDI); w32((uint32_t)(EAX + 0x4), (_r)); fl_logic(_r,32); }
L_1008b77b:;
  /* 1008b77b mov edx, 0x80000000 */
  EDX = (0x80000000u);
  /* 1008b780 mov ecx, ebx */
  ECX = (EBX);
  /* 1008b782 shr edx, cl */
  EDX = (sh_shr((uint32_t)(EDX), (CL)&0x1f, 32));
  /* 1008b784 not edx */
  EDX = (~(EDX));
  /* 1008b786 and dword ptr [eax + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EAX + 0x8)))&(EDX); w32((uint32_t)(EAX + 0x8), (_r)); fl_logic(_r,32); }
  /* 1008b789 mov eax, ebx */
  EAX = (EBX);
L_1008b78b:;
  /* 1008b78b pop edi */
  EDI = (pop32());
  /* 1008b78c pop esi */
  ESI = (pop32());
  /* 1008b78d pop ebx */
  EBX = (pop32());
  /* 1008b78e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1008b78f ret  */
  ESPCHK(0x1008b695u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b790 @ 0x1008b790 (324 bytes, 102 insns) */
void f_1008b790(void) {
  FTRACE(0x1008b790u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008b790 cmp dword ptr [0x10090eb0], -1 */
  { uint32_t _a=(r32((uint32_t)(0x10090eb0))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b797 push ebx */
  push32((uint32_t)(EBX));
  /* 1008b798 push ebp */
  push32((uint32_t)(EBP));
  /* 1008b799 push esi */
  push32((uint32_t)(ESI));
  /* 1008b79a push edi */
  push32((uint32_t)(EDI));
  /* 1008b79b jne 0x1008b7a4 */
  if (!C.zf) goto L_1008b7a4;
  /* 1008b79d mov esi, 0x10090ea0 */
  ESI = (0x10090ea0u);
  /* 1008b7a2 jmp 0x1008b7c1 */
  goto L_1008b7c1;
L_1008b7a4:;
  /* 1008b7a4 push 0x2020 */
  push32((uint32_t)(0x2020u));
  /* 1008b7a9 push 0 */
  push32((uint32_t)(0x0u));
  /* 1008b7ab push dword ptr [0x10097c64] */
  push32((uint32_t)(r32((uint32_t)(0x10097c64))));
  /* 1008b7b1 call dword ptr [0x1008e098] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e098))), 0x1008b7b7u);
  /* 1008b7b7 mov esi, eax */
  ESI = (EAX);
  /* 1008b7b9 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1008b7bb je 0x1008b8cd */
  if (C.zf) goto L_1008b8cd;
L_1008b7c1:;
  /* 1008b7c1 mov ebp, dword ptr [0x1008e0a8] */
  EBP = (r32((uint32_t)(0x1008e0a8)));
  /* 1008b7c7 push 4 */
  push32((uint32_t)(0x4u));
  /* 1008b7c9 push 0x2000 */
  push32((uint32_t)(0x2000u));
  /* 1008b7ce push 0x400000 */
  push32((uint32_t)(0x400000u));
  /* 1008b7d3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1008b7d5 call ebp */
  call_ind((uint32_t)(EBP), 0x1008b7d7u);
  /* 1008b7d7 mov edi, eax */
  EDI = (EAX);
  /* 1008b7d9 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1008b7db je 0x1008b8b6 */
  if (C.zf) goto L_1008b8b6;
  /* 1008b7e1 push 4 */
  push32((uint32_t)(0x4u));
  /* 1008b7e3 mov ebx, 0x10000 */
  EBX = (0x10000u);
  /* 1008b7e8 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1008b7ed push ebx */
  push32((uint32_t)(EBX));
  /* 1008b7ee push edi */
  push32((uint32_t)(EDI));
  /* 1008b7ef call ebp */
  call_ind((uint32_t)(EBP), 0x1008b7f1u);
  /* 1008b7f1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008b7f3 je 0x1008b8a8 */
  if (C.zf) goto L_1008b8a8;
  /* 1008b7f9 mov eax, 0x10090ea0 */
  EAX = (0x10090ea0u);
  /* 1008b7fe cmp esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b800 jne 0x1008b820 */
  if (!C.zf) goto L_1008b820;
  /* 1008b802 cmp dword ptr [0x10090ea0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10090ea0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b809 jne 0x1008b810 */
  if (!C.zf) goto L_1008b810;
  /* 1008b80b mov dword ptr [0x10090ea0], eax */
  w32((uint32_t)(0x10090ea0), (EAX));
L_1008b810:;
  /* 1008b810 cmp dword ptr [0x10090ea4], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10090ea4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b817 jne 0x1008b835 */
  if (!C.zf) goto L_1008b835;
  /* 1008b819 mov dword ptr [0x10090ea4], eax */
  w32((uint32_t)(0x10090ea4), (EAX));
  /* 1008b81e jmp 0x1008b835 */
  goto L_1008b835;
L_1008b820:;
  /* 1008b820 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1008b822 mov eax, dword ptr [0x10090ea4] */
  EAX = (r32((uint32_t)(0x10090ea4)));
  /* 1008b827 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 1008b82a mov dword ptr [0x10090ea4], esi */
  w32((uint32_t)(0x10090ea4), (ESI));
  /* 1008b830 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 1008b833 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_1008b835:;
  /* 1008b835 lea eax, [edi + 0x400000] */
  EAX = ((uint32_t)(EDI + 0x400000));
  /* 1008b83b lea ecx, [esi + 0x98] */
  ECX = ((uint32_t)(ESI + 0x98));
  /* 1008b841 mov dword ptr [esi + 0x14], eax */
  w32((uint32_t)(ESI + 0x14), (EAX));
  /* 1008b844 lea eax, [esi + 0x18] */
  EAX = ((uint32_t)(ESI + 0x18));
  /* 1008b847 mov dword ptr [esi + 0xc], ecx */
  w32((uint32_t)(ESI + 0xc), (ECX));
  /* 1008b84a mov dword ptr [esi + 0x10], edi */
  w32((uint32_t)(ESI + 0x10), (EDI));
  /* 1008b84d mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 1008b850 xor ebp, ebp */
  { uint32_t _r=(EBP)^(EBP); EBP = (_r); fl_logic(_r,32); }
  /* 1008b852 mov ecx, 0xf1 */
  ECX = (0xf1u);
L_1008b857:;
  /* 1008b857 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1008b859 cmp ebp, 0x10 */
  { uint32_t _a=(EBP),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b85c setge dl */
  DL = (((C.sf==C.of)) ? 1u : 0u);
  /* 1008b85f dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1008b860 and edx, ecx */
  { uint32_t _r=(EDX)&(ECX); EDX = (_r); fl_logic(_r,32); }
  /* 1008b862 dec edx */
  { uint32_t _r=(EDX)-1; EDX = (_r); fl_dec(_r,32); }
  /* 1008b863 inc ebp */
  { uint32_t _r=(EBP)+1; EBP = (_r); fl_inc(_r,32); }
  /* 1008b864 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1008b866 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1008b869 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008b86c cmp ebp, 0x400 */
  { uint32_t _a=(EBP),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b872 jl 0x1008b857 */
  if ((C.sf!=C.of)) goto L_1008b857;
  /* 1008b874 push ebx */
  push32((uint32_t)(EBX));
  /* 1008b875 push 0 */
  push32((uint32_t)(0x0u));
  /* 1008b877 push edi */
  push32((uint32_t)(EDI));
  /* 1008b878 call 0x10089c20 */
  push32(0x1008b87du); f_10089c20();
  /* 1008b87d add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1008b880:;
  /* 1008b880 mov eax, dword ptr [esi + 0x10] */
  EAX = (r32((uint32_t)(ESI + 0x10)));
  /* 1008b883 add eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008b885 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b887 jae 0x1008b8a4 */
  if (!C.cf) goto L_1008b8a4;
  /* 1008b889 or byte ptr [edi + 0xf8], 0xff */
  { uint32_t _r=(r8((uint32_t)(EDI + 0xf8)))|(0xffu); w8((uint32_t)(EDI + 0xf8), (_r)); fl_logic(_r,8); }
  /* 1008b890 lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 1008b893 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1008b895 mov dword ptr [edi + 4], 0xf0 */
  w32((uint32_t)(EDI + 0x4), (0xf0u));
  /* 1008b89c add edi, 0x1000 */
  { uint32_t _a=(EDI),_b=(0x1000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1008b8a2 jmp 0x1008b880 */
  goto L_1008b880;
L_1008b8a4:;
  /* 1008b8a4 mov eax, esi */
  EAX = (ESI);
  /* 1008b8a6 jmp 0x1008b8cf */
  goto L_1008b8cf;
L_1008b8a8:;
  /* 1008b8a8 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1008b8ad push 0 */
  push32((uint32_t)(0x0u));
  /* 1008b8af push edi */
  push32((uint32_t)(EDI));
  /* 1008b8b0 call dword ptr [0x1008e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e07c))), 0x1008b8b6u);
L_1008b8b6:;
  /* 1008b8b6 cmp esi, 0x10090ea0 */
  { uint32_t _a=(ESI),_b=(0x10090ea0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b8bc je 0x1008b8cd */
  if (C.zf) goto L_1008b8cd;
  /* 1008b8be push esi */
  push32((uint32_t)(ESI));
  /* 1008b8bf push 0 */
  push32((uint32_t)(0x0u));
  /* 1008b8c1 push dword ptr [0x10097c64] */
  push32((uint32_t)(r32((uint32_t)(0x10097c64))));
  /* 1008b8c7 call dword ptr [0x1008e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e080))), 0x1008b8cdu);
L_1008b8cd:;
  /* 1008b8cd xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1008b8cf:;
  /* 1008b8cf pop edi */
  EDI = (pop32());
  /* 1008b8d0 pop esi */
  ESI = (pop32());
  /* 1008b8d1 pop ebp */
  EBP = (pop32());
  /* 1008b8d2 pop ebx */
  EBX = (pop32());
  /* 1008b8d3 ret  */
  ESPCHK(0x1008b790u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b8d4 @ 0x1008b8d4 (86 bytes, 27 insns) */
void f_1008b8d4(void) {
  FTRACE(0x1008b8d4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008b8d4 push esi */
  push32((uint32_t)(ESI));
  /* 1008b8d5 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1008b8d9 push 0x8000 */
  push32((uint32_t)(0x8000u));
  /* 1008b8de push 0 */
  push32((uint32_t)(0x0u));
  /* 1008b8e0 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1008b8e3 call dword ptr [0x1008e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e07c))), 0x1008b8e9u);
  /* 1008b8e9 cmp dword ptr [0x10092ec0], esi */
  { uint32_t _a=(r32((uint32_t)(0x10092ec0))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b8ef jne 0x1008b8f9 */
  if (!C.zf) goto L_1008b8f9;
  /* 1008b8f1 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 1008b8f4 mov dword ptr [0x10092ec0], eax */
  w32((uint32_t)(0x10092ec0), (EAX));
L_1008b8f9:;
  /* 1008b8f9 cmp esi, 0x10090ea0 */
  { uint32_t _a=(ESI),_b=(0x10090ea0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b8ff je 0x1008b921 */
  if (C.zf) goto L_1008b921;
  /* 1008b901 mov eax, dword ptr [esi + 4] */
  EAX = (r32((uint32_t)(ESI + 0x4)));
  /* 1008b904 mov ecx, dword ptr [esi] */
  ECX = (r32((uint32_t)(ESI)));
  /* 1008b906 push esi */
  push32((uint32_t)(ESI));
  /* 1008b907 push 0 */
  push32((uint32_t)(0x0u));
  /* 1008b909 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1008b90b mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1008b90d mov ecx, dword ptr [esi + 4] */
  ECX = (r32((uint32_t)(ESI + 0x4)));
  /* 1008b910 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1008b913 push dword ptr [0x10097c64] */
  push32((uint32_t)(r32((uint32_t)(0x10097c64))));
  /* 1008b919 call dword ptr [0x1008e080] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e080))), 0x1008b91fu);
  /* 1008b91f pop esi */
  ESI = (pop32());
  /* 1008b920 ret  */
  ESPCHK(0x1008b8d4u, _esp0);
  ESP += 4; return;
L_1008b921:;
  /* 1008b921 or dword ptr [0x10090eb0], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(0x10090eb0)))|(0xffffffffu); w32((uint32_t)(0x10090eb0), (_r)); fl_logic(_r,32); }
  /* 1008b928 pop esi */
  ESI = (pop32());
  /* 1008b929 ret  */
  ESPCHK(0x1008b8d4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000b92a @ 0x1008b92a (194 bytes, 66 insns) */
void f_1008b92a(void) {
  FTRACE(0x1008b92au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008b92a push ebp */
  push32((uint32_t)(EBP));
  /* 1008b92b mov ebp, esp */
  EBP = (ESP);
  /* 1008b92d push ecx */
  push32((uint32_t)(ECX));
  /* 1008b92e push ebx */
  push32((uint32_t)(EBX));
  /* 1008b92f push esi */
  push32((uint32_t)(ESI));
  /* 1008b930 mov esi, dword ptr [0x10090ea4] */
  ESI = (r32((uint32_t)(0x10090ea4)));
  /* 1008b936 push edi */
  push32((uint32_t)(EDI));
L_1008b937:;
  /* 1008b937 cmp dword ptr [esi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b93b je 0x1008b9d5 */
  if (C.zf) goto L_1008b9d5;
  /* 1008b941 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1008b945 lea edi, [esi + 0x2010] */
  EDI = ((uint32_t)(ESI + 0x2010));
  /* 1008b94b mov ebx, 0x3ff000 */
  EBX = (0x3ff000u);
L_1008b950:;
  /* 1008b950 cmp dword ptr [edi], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b956 jne 0x1008b991 */
  if (!C.zf) goto L_1008b991;
  /* 1008b958 mov eax, ebx */
  EAX = (EBX);
  /* 1008b95a push 0x4000 */
  push32((uint32_t)(0x4000u));
  /* 1008b95f add eax, dword ptr [esi + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESI + 0x10))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008b962 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1008b967 push eax */
  push32((uint32_t)(EAX));
  /* 1008b968 call dword ptr [0x1008e07c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e07c))), 0x1008b96eu);
  /* 1008b96e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008b970 je 0x1008b991 */
  if (C.zf) goto L_1008b991;
  /* 1008b972 or dword ptr [edi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EDI)))|(0xffffffffu); w32((uint32_t)(EDI), (_r)); fl_logic(_r,32); }
  /* 1008b975 dec dword ptr [0x10096854] */
  { uint32_t _r=(r32((uint32_t)(0x10096854)))-1; w32((uint32_t)(0x10096854), (_r)); fl_dec(_r,32); }
  /* 1008b97b mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1008b97e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008b980 je 0x1008b986 */
  if (C.zf) goto L_1008b986;
  /* 1008b982 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b984 jbe 0x1008b989 */
  if ((C.cf||C.zf)) goto L_1008b989;
L_1008b986:;
  /* 1008b986 mov dword ptr [esi + 0xc], edi */
  w32((uint32_t)(ESI + 0xc), (EDI));
L_1008b989:;
  /* 1008b989 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1008b98c dec dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))-1; w32((uint32_t)(EBP + 0x8), (_r)); fl_dec(_r,32); }
  /* 1008b98f je 0x1008b99e */
  if (C.zf) goto L_1008b99e;
L_1008b991:;
  /* 1008b991 sub ebx, 0x1000 */
  { uint32_t _a=(EBX),_b=(0x1000u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008b997 sub edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008b99a test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1008b99c jge 0x1008b950 */
  if ((C.sf==C.of)) goto L_1008b950;
L_1008b99e:;
  /* 1008b99e cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b9a2 mov ecx, esi */
  ECX = (ESI);
  /* 1008b9a4 mov esi, dword ptr [esi + 4] */
  ESI = (r32((uint32_t)(ESI + 0x4)));
  /* 1008b9a7 je 0x1008b9d5 */
  if (C.zf) goto L_1008b9d5;
  /* 1008b9a9 cmp dword ptr [ecx + 0x18], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x18))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b9ad jne 0x1008b9d5 */
  if (!C.zf) goto L_1008b9d5;
  /* 1008b9af push 1 */
  push32((uint32_t)(0x1u));
  /* 1008b9b1 lea eax, [ecx + 0x20] */
  EAX = ((uint32_t)(ECX + 0x20));
  /* 1008b9b4 pop edx */
  EDX = (pop32());
L_1008b9b5:;
  /* 1008b9b5 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b9b8 jne 0x1008b9c6 */
  if (!C.zf) goto L_1008b9c6;
  /* 1008b9ba inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1008b9bb add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008b9be cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b9c4 jl 0x1008b9b5 */
  if ((C.sf!=C.of)) goto L_1008b9b5;
L_1008b9c6:;
  /* 1008b9c6 cmp edx, 0x400 */
  { uint32_t _a=(EDX),_b=(0x400u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b9cc jne 0x1008b9d5 */
  if (!C.zf) goto L_1008b9d5;
  /* 1008b9ce push ecx */
  push32((uint32_t)(ECX));
  /* 1008b9cf call 0x1008b8d4 */
  push32(0x1008b9d4u); f_1008b8d4();
  /* 1008b9d4 pop ecx */
  ECX = (pop32());
L_1008b9d5:;
  /* 1008b9d5 cmp esi, dword ptr [0x10090ea4] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10090ea4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b9db je 0x1008b9e7 */
  if (C.zf) goto L_1008b9e7;
  /* 1008b9dd cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b9e1 jg 0x1008b937 */
  if ((!C.zf&&C.sf==C.of)) goto L_1008b937;
L_1008b9e7:;
  /* 1008b9e7 pop edi */
  EDI = (pop32());
  /* 1008b9e8 pop esi */
  ESI = (pop32());
  /* 1008b9e9 pop ebx */
  EBX = (pop32());
  /* 1008b9ea leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1008b9eb ret  */
  ESPCHK(0x1008b92au, _esp0);
  ESP += 4; return;
}

/* FUN_1000b9ec @ 0x1008b9ec (87 bytes, 34 insns) */
void f_1008b9ec(void) {
  FTRACE(0x1008b9ecu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008b9ec mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1008b9f0 mov edx, 0x10090ea0 */
  EDX = (0x10090ea0u);
  /* 1008b9f5 push esi */
  push32((uint32_t)(ESI));
  /* 1008b9f6 mov ecx, edx */
  ECX = (EDX);
L_1008b9f8:;
  /* 1008b9f8 cmp eax, dword ptr [ecx + 0x10] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x10))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008b9fb jbe 0x1008ba02 */
  if ((C.cf||C.zf)) goto L_1008ba02;
  /* 1008b9fd cmp eax, dword ptr [ecx + 0x14] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ECX + 0x14))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008ba00 jb 0x1008ba0a */
  if (C.cf) goto L_1008ba0a;
L_1008ba02:;
  /* 1008ba02 mov ecx, dword ptr [ecx] */
  ECX = (r32((uint32_t)(ECX)));
  /* 1008ba04 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008ba06 je 0x1008ba3f */
  if (C.zf) goto L_1008ba3f;
  /* 1008ba08 jmp 0x1008b9f8 */
  goto L_1008b9f8;
L_1008ba0a:;
  /* 1008ba0a test al, 0xf */
  { uint32_t _r=(AL)&(0xfu); fl_logic(_r,8); }
  /* 1008ba0c jne 0x1008ba3f */
  if (!C.zf) goto L_1008ba3f;
  /* 1008ba0e mov esi, eax */
  ESI = (EAX);
  /* 1008ba10 mov edx, 0x100 */
  EDX = (0x100u);
  /* 1008ba15 and esi, 0xfff */
  { uint32_t _r=(ESI)&(0xfffu); ESI = (_r); fl_logic(_r,32); }
  /* 1008ba1b cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008ba1d jb 0x1008ba3f */
  if (C.cf) goto L_1008ba3f;
  /* 1008ba1f mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 1008ba23 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 1008ba25 mov esi, dword ptr [esp + 0x10] */
  ESI = (r32((uint32_t)(ESP + 0x10)));
  /* 1008ba29 mov ecx, eax */
  ECX = (EAX);
  /* 1008ba2b and cx, 0xf000 */
  { uint32_t _r=(CX)&(0xf000u); CX = (_r); fl_logic(_r,16); }
  /* 1008ba30 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008ba32 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 1008ba34 sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008ba36 pop esi */
  ESI = (pop32());
  /* 1008ba37 sar eax, 4 */
  EAX = (sh_sar((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1008ba3a lea eax, [eax + ecx + 8] */
  EAX = ((uint32_t)(EAX + ECX*1 + 0x8));
  /* 1008ba3e ret  */
  ESPCHK(0x1008b9ecu, _esp0);
  ESP += 4; return;
L_1008ba3f:;
  /* 1008ba3f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1008ba41 pop esi */
  ESI = (pop32());
  /* 1008ba42 ret  */
  ESPCHK(0x1008b9ecu, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba43 @ 0x1008ba43 (69 bytes, 19 insns) */
void f_1008ba43(void) {
  FTRACE(0x1008ba43u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008ba43 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1008ba47 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1008ba4b sub ecx, dword ptr [eax + 0x10] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX + 0x10))),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008ba4e sar ecx, 0xc */
  ECX = (sh_sar((uint32_t)(ECX), (0xcu)&0x1f, 32));
  /* 1008ba51 lea eax, [eax + ecx*8 + 0x18] */
  EAX = ((uint32_t)(EAX + ECX*8 + 0x18));
  /* 1008ba55 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1008ba59 movzx edx, byte ptr [ecx] */
  EDX = ((uint32_t)(r8((uint32_t)(ECX))));
  /* 1008ba5c add dword ptr [eax], edx */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(EAX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1008ba5e and byte ptr [ecx], 0 */
  { uint32_t _r=(r8((uint32_t)(ECX)))&(0x0u); w8((uint32_t)(ECX), (_r)); fl_logic(_r,8); }
  /* 1008ba61 cmp dword ptr [eax], 0xf0 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xf0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008ba67 mov dword ptr [eax + 4], 0xf1 */
  w32((uint32_t)(EAX + 0x4), (0xf1u));
  /* 1008ba6e jne 0x1008ba87 */
  if (!C.zf) goto L_1008ba87;
  /* 1008ba70 inc dword ptr [0x10096854] */
  { uint32_t _r=(r32((uint32_t)(0x10096854)))+1; w32((uint32_t)(0x10096854), (_r)); fl_inc(_r,32); }
  /* 1008ba76 cmp dword ptr [0x10096854], 0x20 */
  { uint32_t _a=(r32((uint32_t)(0x10096854))),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008ba7d jne 0x1008ba87 */
  if (!C.zf) goto L_1008ba87;
  /* 1008ba7f push 0x10 */
  push32((uint32_t)(0x10u));
  /* 1008ba81 call 0x1008b92a */
  push32(0x1008ba86u); f_1008b92a();
  /* 1008ba86 pop ecx */
  ECX = (pop32());
L_1008ba87:;
  /* 1008ba87 ret  */
  ESPCHK(0x1008ba43u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ba88 @ 0x1008ba88 (520 bytes, 180 insns) */
void f_1008ba88(void) {
  FTRACE(0x1008ba88u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008ba88 push ebp */
  push32((uint32_t)(EBP));
  /* 1008ba89 mov ebp, esp */
  EBP = (ESP);
  /* 1008ba8b push ecx */
  push32((uint32_t)(ECX));
  /* 1008ba8c push ecx */
  push32((uint32_t)(ECX));
  /* 1008ba8d push ebx */
  push32((uint32_t)(EBX));
  /* 1008ba8e push esi */
  push32((uint32_t)(ESI));
  /* 1008ba8f mov esi, dword ptr [0x10092ec0] */
  ESI = (r32((uint32_t)(0x10092ec0)));
  /* 1008ba95 push edi */
  push32((uint32_t)(EDI));
L_1008ba96:;
  /* 1008ba96 mov edx, dword ptr [esi + 0x10] */
  EDX = (r32((uint32_t)(ESI + 0x10)));
  /* 1008ba99 cmp edx, -1 */
  { uint32_t _a=(EDX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008ba9c je 0x1008bb41 */
  if (C.zf) goto L_1008bb41;
  /* 1008baa2 mov edi, dword ptr [esi + 8] */
  EDI = (r32((uint32_t)(ESI + 0x8)));
  /* 1008baa5 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 1008baab mov eax, edi */
  EAX = (EDI);
  /* 1008baad sub eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008baaf sub eax, 0x18 */
  { uint32_t _a=(EAX),_b=(0x18u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008bab2 sar eax, 3 */
  EAX = (sh_sar((uint32_t)(EAX), (0x3u)&0x1f, 32));
  /* 1008bab5 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 1008bab8 add eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008baba cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008babc mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1008babf jae 0x1008bafb */
  if (!C.cf) goto L_1008bafb;
L_1008bac1:;
  /* 1008bac1 mov ecx, dword ptr [edi] */
  ECX = (r32((uint32_t)(EDI)));
  /* 1008bac3 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1008bac6 cmp ecx, ebx */
  { uint32_t _a=(ECX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008bac8 jl 0x1008bae4 */
  if ((C.sf!=C.of)) goto L_1008bae4;
  /* 1008baca cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008bacd jbe 0x1008bae4 */
  if ((C.cf||C.zf)) goto L_1008bae4;
  /* 1008bacf push ebx */
  push32((uint32_t)(EBX));
  /* 1008bad0 push ecx */
  push32((uint32_t)(ECX));
  /* 1008bad1 push eax */
  push32((uint32_t)(EAX));
  /* 1008bad2 call 0x1008bc90 */
  push32(0x1008bad7u); f_1008bc90();
  /* 1008bad7 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008bada test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008badc jne 0x1008bb53 */
  if (!C.zf) goto L_1008bb53;
  /* 1008bade mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1008bae1 mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_1008bae4:;
  /* 1008bae4 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1008bae7 lea ecx, [esi + 0x2018] */
  ECX = ((uint32_t)(ESI + 0x2018));
  /* 1008baed add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008baf2 cmp edi, ecx */
  { uint32_t _a=(EDI),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008baf4 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1008baf7 jb 0x1008bac1 */
  if (C.cf) goto L_1008bac1;
  /* 1008baf9 jmp 0x1008bafe */
  goto L_1008bafe;
L_1008bafb:;
  /* 1008bafb mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1008bafe:;
  /* 1008bafe mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 1008bb01 mov ecx, dword ptr [esi + 0x10] */
  ECX = (r32((uint32_t)(ESI + 0x10)));
  /* 1008bb04 lea edi, [esi + 0x18] */
  EDI = ((uint32_t)(ESI + 0x18));
  /* 1008bb07 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1008bb0a cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008bb0c mov dword ptr [ebp - 4], ecx */
  w32((uint32_t)(EBP + -0x4), (ECX));
  /* 1008bb0f jae 0x1008bb44 */
  if (!C.cf) goto L_1008bb44;
L_1008bb11:;
  /* 1008bb11 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1008bb13 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008bb15 jl 0x1008bb30 */
  if ((C.sf!=C.of)) goto L_1008bb30;
  /* 1008bb17 cmp dword ptr [edi + 4], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x4))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008bb1a jbe 0x1008bb30 */
  if ((C.cf||C.zf)) goto L_1008bb30;
  /* 1008bb1c push ebx */
  push32((uint32_t)(EBX));
  /* 1008bb1d push eax */
  push32((uint32_t)(EAX));
  /* 1008bb1e push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 1008bb21 call 0x1008bc90 */
  push32(0x1008bb26u); f_1008bc90();
  /* 1008bb26 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008bb29 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008bb2b jne 0x1008bb53 */
  if (!C.zf) goto L_1008bb53;
  /* 1008bb2d mov dword ptr [edi + 4], ebx */
  w32((uint32_t)(EDI + 0x4), (EBX));
L_1008bb30:;
  /* 1008bb30 add dword ptr [ebp - 4], 0x1000 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x1000u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1008bb37 add edi, 8 */
  { uint32_t _a=(EDI),_b=(0x8u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1008bb3a cmp edi, dword ptr [ebp - 8] */
  { uint32_t _a=(EDI),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008bb3d jb 0x1008bb11 */
  if (C.cf) goto L_1008bb11;
  /* 1008bb3f jmp 0x1008bb44 */
  goto L_1008bb44;
L_1008bb41:;
  /* 1008bb41 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
L_1008bb44:;
  /* 1008bb44 mov esi, dword ptr [esi] */
  ESI = (r32((uint32_t)(ESI)));
  /* 1008bb46 cmp esi, dword ptr [0x10092ec0] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10092ec0))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008bb4c je 0x1008bb63 */
  if (C.zf) goto L_1008bb63;
  /* 1008bb4e jmp 0x1008ba96 */
  goto L_1008ba96;
L_1008bb53:;
  /* 1008bb53 mov dword ptr [0x10092ec0], esi */
  w32((uint32_t)(0x10092ec0), (ESI));
  /* 1008bb59 sub dword ptr [edi], ebx */
  { uint32_t _a=(r32((uint32_t)(EDI))),_b=(EBX),_r=_a-_b; w32((uint32_t)(EDI), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1008bb5b mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
  /* 1008bb5e jmp 0x1008bc8b */
  goto L_1008bc8b;
L_1008bb63:;
  /* 1008bb63 mov eax, 0x10090ea0 */
  EAX = (0x10090ea0u);
  /* 1008bb68 mov edi, eax */
  EDI = (EAX);
L_1008bb6a:;
  /* 1008bb6a cmp dword ptr [edi + 0x10], -1 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0x10))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008bb6e je 0x1008bb76 */
  if (C.zf) goto L_1008bb76;
  /* 1008bb70 cmp dword ptr [edi + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EDI + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008bb74 jne 0x1008bb82 */
  if (!C.zf) goto L_1008bb82;
L_1008bb76:;
  /* 1008bb76 mov edi, dword ptr [edi] */
  EDI = (r32((uint32_t)(EDI)));
  /* 1008bb78 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008bb7a je 0x1008bc57 */
  if (C.zf) goto L_1008bc57;
  /* 1008bb80 jmp 0x1008bb6a */
  goto L_1008bb6a;
L_1008bb82:;
  /* 1008bb82 mov ebx, dword ptr [edi + 0xc] */
  EBX = (r32((uint32_t)(EDI + 0xc)));
  /* 1008bb85 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1008bb89 mov esi, ebx */
  ESI = (EBX);
  /* 1008bb8b mov eax, ebx */
  EAX = (EBX);
  /* 1008bb8d sub esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008bb8f sub esi, 0x18 */
  { uint32_t _a=(ESI),_b=(0x18u),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008bb92 sar esi, 3 */
  ESI = (sh_sar((uint32_t)(ESI), (0x3u)&0x1f, 32));
  /* 1008bb95 shl esi, 0xc */
  ESI = (sh_shl((uint32_t)(ESI), (0xcu)&0x1f, 32));
  /* 1008bb98 add esi, dword ptr [edi + 0x10] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EDI + 0x10))),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1008bb9b cmp dword ptr [ebx], -1 */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008bb9e jne 0x1008bbb1 */
  if (!C.zf) goto L_1008bbb1;
L_1008bba0:;
  /* 1008bba0 cmp dword ptr [ebp - 4], 0x10 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x10u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008bba4 jge 0x1008bbb1 */
  if ((C.sf==C.of)) goto L_1008bbb1;
  /* 1008bba6 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008bba9 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1008bbac cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008bbaf je 0x1008bba0 */
  if (C.zf) goto L_1008bba0;
L_1008bbb1:;
  /* 1008bbb1 mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1008bbb4 push 4 */
  push32((uint32_t)(0x4u));
  /* 1008bbb6 shl eax, 0xc */
  EAX = (sh_shl((uint32_t)(EAX), (0xcu)&0x1f, 32));
  /* 1008bbb9 push 0x1000 */
  push32((uint32_t)(0x1000u));
  /* 1008bbbe push eax */
  push32((uint32_t)(EAX));
  /* 1008bbbf push esi */
  push32((uint32_t)(ESI));
  /* 1008bbc0 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1008bbc3 call dword ptr [0x1008e0a8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e0a8))), 0x1008bbc9u);
  /* 1008bbc9 cmp eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008bbcb jne 0x1008bc89 */
  if (!C.zf) goto L_1008bc89;
  /* 1008bbd1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1008bbd3 push dword ptr [ebp - 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x8))));
  /* 1008bbd6 push esi */
  push32((uint32_t)(ESI));
  /* 1008bbd7 call 0x10089c20 */
  push32(0x1008bbdcu); f_10089c20();
  /* 1008bbdc mov edx, dword ptr [ebp - 4] */
  EDX = (r32((uint32_t)(EBP + -0x4)));
  /* 1008bbdf add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008bbe2 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1008bbe4 mov ecx, ebx */
  ECX = (EBX);
  /* 1008bbe6 jle 0x1008bc18 */
  if ((C.zf||C.sf!=C.of)) goto L_1008bc18;
  /* 1008bbe8 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 1008bbeb mov dword ptr [ebp - 4], edx */
  w32((uint32_t)(EBP + -0x4), (EDX));
L_1008bbee:;
  /* 1008bbee or byte ptr [eax + 0xf4], 0xff */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xf4)))|(0xffu); w8((uint32_t)(EAX + 0xf4), (_r)); fl_logic(_r,8); }
  /* 1008bbf5 lea edx, [eax + 4] */
  EDX = ((uint32_t)(EAX + 0x4));
  /* 1008bbf8 mov dword ptr [eax - 4], edx */
  w32((uint32_t)(EAX + -0x4), (EDX));
  /* 1008bbfb mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 1008bc00 mov dword ptr [eax], edx */
  w32((uint32_t)(EAX), (EDX));
  /* 1008bc02 mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1008bc04 mov dword ptr [ecx + 4], 0xf1 */
  w32((uint32_t)(ECX + 0x4), (0xf1u));
  /* 1008bc0b add eax, 0x1000 */
  { uint32_t _a=(EAX),_b=(0x1000u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008bc10 add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008bc13 dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 1008bc16 jne 0x1008bbee */
  if (!C.zf) goto L_1008bbee;
L_1008bc18:;
  /* 1008bc18 mov dword ptr [0x10092ec0], edi */
  w32((uint32_t)(0x10092ec0), (EDI));
  /* 1008bc1e lea eax, [edi + 0x2018] */
  EAX = ((uint32_t)(EDI + 0x2018));
L_1008bc24:;
  /* 1008bc24 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008bc26 jae 0x1008bc34 */
  if (!C.cf) goto L_1008bc34;
  /* 1008bc28 cmp dword ptr [ecx], -1 */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008bc2b je 0x1008bc32 */
  if (C.zf) goto L_1008bc32;
  /* 1008bc2d add ecx, 8 */
  { uint32_t _a=(ECX),_b=(0x8u),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008bc30 jmp 0x1008bc24 */
  goto L_1008bc24;
L_1008bc32:;
  /* 1008bc32 cmp ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
L_1008bc34:;
  /* 1008bc34 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008bc36 and eax, ecx */
  { uint32_t _r=(EAX)&(ECX); EAX = (_r); fl_logic(_r,32); }
  /* 1008bc38 mov dword ptr [edi + 0xc], eax */
  w32((uint32_t)(EDI + 0xc), (EAX));
  /* 1008bc3b mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1008bc3e mov byte ptr [esi + 8], al */
  w8((uint32_t)(ESI + 0x8), (AL));
  /* 1008bc41 mov dword ptr [edi + 8], ebx */
  w32((uint32_t)(EDI + 0x8), (EBX));
  /* 1008bc44 sub dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBX), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1008bc46 sub dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; w32((uint32_t)(ESI + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1008bc49 lea ecx, [esi + eax + 8] */
  ECX = ((uint32_t)(ESI + EAX*1 + 0x8));
  /* 1008bc4d lea eax, [esi + 0x100] */
  EAX = ((uint32_t)(ESI + 0x100));
  /* 1008bc53 mov dword ptr [esi], ecx */
  w32((uint32_t)(ESI), (ECX));
  /* 1008bc55 jmp 0x1008bc8b */
  goto L_1008bc8b;
L_1008bc57:;
  /* 1008bc57 call 0x1008b790 */
  push32(0x1008bc5cu); f_1008b790();
  /* 1008bc5c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008bc5e je 0x1008bc89 */
  if (C.zf) goto L_1008bc89;
  /* 1008bc60 mov ecx, dword ptr [eax + 0x10] */
  ECX = (r32((uint32_t)(EAX + 0x10)));
  /* 1008bc63 mov byte ptr [ecx + 8], bl */
  w8((uint32_t)(ECX + 0x8), (BL));
  /* 1008bc66 lea edx, [ecx + ebx + 8] */
  EDX = ((uint32_t)(ECX + EBX*1 + 0x8));
  /* 1008bc6a mov dword ptr [0x10092ec0], eax */
  w32((uint32_t)(0x10092ec0), (EAX));
  /* 1008bc6f mov dword ptr [ecx], edx */
  w32((uint32_t)(ECX), (EDX));
  /* 1008bc71 mov edx, 0xf0 */
  EDX = (0xf0u);
  /* 1008bc76 sub edx, ebx */
  { uint32_t _a=(EDX),_b=(EBX),_r=_a-_b; EDX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008bc78 mov dword ptr [ecx + 4], edx */
  w32((uint32_t)(ECX + 0x4), (EDX));
  /* 1008bc7b movzx edx, bl */
  EDX = ((uint32_t)(BL));
  /* 1008bc7e sub dword ptr [eax + 0x18], edx */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x18))),_b=(EDX),_r=_a-_b; w32((uint32_t)(EAX + 0x18), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1008bc81 lea eax, [ecx + 0x100] */
  EAX = ((uint32_t)(ECX + 0x100));
  /* 1008bc87 jmp 0x1008bc8b */
  goto L_1008bc8b;
L_1008bc89:;
  /* 1008bc89 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1008bc8b:;
  /* 1008bc8b pop edi */
  EDI = (pop32());
  /* 1008bc8c pop esi */
  ESI = (pop32());
  /* 1008bc8d pop ebx */
  EBX = (pop32());
  /* 1008bc8e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1008bc8f ret  */
  ESPCHK(0x1008ba88u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bc90 @ 0x1008bc90 (292 bytes, 125 insns) */
void f_1008bc90(void) {
  FTRACE(0x1008bc90u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008bc90 push ebp */
  push32((uint32_t)(EBP));
  /* 1008bc91 mov ebp, esp */
  EBP = (ESP);
  /* 1008bc93 push ecx */
  push32((uint32_t)(ECX));
  /* 1008bc94 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1008bc97 mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
  /* 1008bc9a push ebx */
  push32((uint32_t)(EBX));
  /* 1008bc9b push esi */
  push32((uint32_t)(ESI));
  /* 1008bc9c mov esi, dword ptr [ecx + 4] */
  ESI = (r32((uint32_t)(ECX + 0x4)));
  /* 1008bc9f push edi */
  push32((uint32_t)(EDI));
  /* 1008bca0 mov edi, dword ptr [ecx] */
  EDI = (r32((uint32_t)(ECX)));
  /* 1008bca2 lea ebx, [ecx + 0xf8] */
  EBX = ((uint32_t)(ECX + 0xf8));
  /* 1008bca8 cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008bcaa mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 1008bcad mov eax, edi */
  EAX = (EDI);
  /* 1008bcaf mov dword ptr [ebp + 8], ebx */
  w32((uint32_t)(EBP + 0x8), (EBX));
  /* 1008bcb2 jb 0x1008bcd5 */
  if (C.cf) goto L_1008bcd5;
  /* 1008bcb4 lea eax, [edi + edx] */
  EAX = ((uint32_t)(EDI + EDX*1));
  /* 1008bcb7 mov byte ptr [edi], dl */
  w8((uint32_t)(EDI), (DL));
  /* 1008bcb9 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008bcbb jae 0x1008bcc4 */
  if (!C.cf) goto L_1008bcc4;
  /* 1008bcbd add dword ptr [ecx], edx */
  { uint32_t _a=(r32((uint32_t)(ECX))),_b=(EDX),_r=_a+_b; w32((uint32_t)(ECX), (_r)); fl_add(_a,_b,_r,32); }
  /* 1008bcbf sub dword ptr [ecx + 4], edx */
  { uint32_t _a=(r32((uint32_t)(ECX + 0x4))),_b=(EDX),_r=_a-_b; w32((uint32_t)(ECX + 0x4), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1008bcc2 jmp 0x1008bccd */
  goto L_1008bccd;
L_1008bcc4:;
  /* 1008bcc4 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1008bcc8 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 1008bccb mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1008bccd:;
  /* 1008bccd lea eax, [edi + 8] */
  EAX = ((uint32_t)(EDI + 0x8));
  /* 1008bcd0 jmp 0x1008bda3 */
  goto L_1008bda3;
L_1008bcd5:;
  /* 1008bcd5 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1008bcd7 cmp byte ptr [esi], 0 */
  { uint32_t _a=(r8((uint32_t)(ESI))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008bcda je 0x1008bcde */
  if (C.zf) goto L_1008bcde;
  /* 1008bcdc mov eax, esi */
  EAX = (ESI);
L_1008bcde:;
  /* 1008bcde lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 1008bce1 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008bce3 jae 0x1008bd28 */
  if (!C.cf) goto L_1008bd28;
L_1008bce5:;
  /* 1008bce5 mov bl, byte ptr [eax] */
  BL = (r8((uint32_t)(EAX)));
  /* 1008bce7 test bl, bl */
  { uint32_t _r=(BL)&(BL); fl_logic(_r,8); }
  /* 1008bce9 jne 0x1008bd1b */
  if (!C.zf) goto L_1008bd1b;
  /* 1008bceb push 1 */
  push32((uint32_t)(0x1u));
  /* 1008bced lea ebx, [eax + 1] */
  EBX = ((uint32_t)(EAX + 0x1));
  /* 1008bcf0 pop esi */
  ESI = (pop32());
L_1008bcf1:;
  /* 1008bcf1 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008bcf4 jne 0x1008bcfa */
  if (!C.zf) goto L_1008bcfa;
  /* 1008bcf6 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1008bcf7 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1008bcf8 jmp 0x1008bcf1 */
  goto L_1008bcf1;
L_1008bcfa:;
  /* 1008bcfa cmp esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008bcfc jae 0x1008bd4c */
  if (!C.cf) goto L_1008bd4c;
  /* 1008bcfe cmp eax, dword ptr [ebp - 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x4))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008bd01 jne 0x1008bd08 */
  if (!C.zf) goto L_1008bd08;
  /* 1008bd03 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 1008bd06 jmp 0x1008bd14 */
  goto L_1008bd14;
L_1008bd08:;
  /* 1008bd08 sub dword ptr [ebp + 0xc], esi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ESI),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1008bd0b cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008bd0e jb 0x1008bdad */
  if (C.cf) goto L_1008bdad;
L_1008bd14:;
  /* 1008bd14 mov edi, dword ptr [ebp - 4] */
  EDI = (r32((uint32_t)(EBP + -0x4)));
  /* 1008bd17 mov eax, ebx */
  EAX = (EBX);
  /* 1008bd19 jmp 0x1008bd20 */
  goto L_1008bd20;
L_1008bd1b:;
  /* 1008bd1b movzx esi, bl */
  ESI = ((uint32_t)(BL));
  /* 1008bd1e add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1008bd20:;
  /* 1008bd20 lea esi, [eax + edx] */
  ESI = ((uint32_t)(EAX + EDX*1));
  /* 1008bd23 cmp esi, dword ptr [ebp + 8] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008bd26 jb 0x1008bce5 */
  if (C.cf) goto L_1008bce5;
L_1008bd28:;
  /* 1008bd28 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
L_1008bd2b:;
  /* 1008bd2b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008bd2d jae 0x1008bdad */
  if (!C.cf) goto L_1008bdad;
  /* 1008bd2f lea eax, [esi + edx] */
  EAX = ((uint32_t)(ESI + EDX*1));
  /* 1008bd32 cmp eax, dword ptr [ebp + 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008bd35 jae 0x1008bdad */
  if (!C.cf) goto L_1008bdad;
  /* 1008bd37 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1008bd39 test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1008bd3b jne 0x1008bd7d */
  if (!C.zf) goto L_1008bd7d;
  /* 1008bd3d push 1 */
  push32((uint32_t)(0x1u));
  /* 1008bd3f lea ebx, [esi + 1] */
  EBX = ((uint32_t)(ESI + 0x1));
  /* 1008bd42 pop eax */
  EAX = (pop32());
L_1008bd43:;
  /* 1008bd43 cmp byte ptr [ebx], 0 */
  { uint32_t _a=(r8((uint32_t)(EBX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008bd46 jne 0x1008bd6d */
  if (!C.zf) goto L_1008bd6d;
  /* 1008bd48 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1008bd49 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1008bd4a jmp 0x1008bd43 */
  goto L_1008bd43;
L_1008bd4c:;
  /* 1008bd4c lea ebx, [eax + edx] */
  EBX = ((uint32_t)(EAX + EDX*1));
  /* 1008bd4f cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008bd52 jae 0x1008bd5d */
  if (!C.cf) goto L_1008bd5d;
  /* 1008bd54 sub esi, edx */
  { uint32_t _a=(ESI),_b=(EDX),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008bd56 mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 1008bd58 mov dword ptr [ecx + 4], esi */
  w32((uint32_t)(ECX + 0x4), (ESI));
  /* 1008bd5b jmp 0x1008bd66 */
  goto L_1008bd66;
L_1008bd5d:;
  /* 1008bd5d and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1008bd61 lea esi, [ecx + 8] */
  ESI = ((uint32_t)(ECX + 0x8));
  /* 1008bd64 mov dword ptr [ecx], esi */
  w32((uint32_t)(ECX), (ESI));
L_1008bd66:;
  /* 1008bd66 mov byte ptr [eax], dl */
  w8((uint32_t)(EAX), (DL));
  /* 1008bd68 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008bd6b jmp 0x1008bda3 */
  goto L_1008bda3;
L_1008bd6d:;
  /* 1008bd6d cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008bd6f jae 0x1008bd84 */
  if (!C.cf) goto L_1008bd84;
  /* 1008bd71 sub dword ptr [ebp + 0xc], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EAX),_r=_a-_b; w32((uint32_t)(EBP + 0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1008bd74 cmp dword ptr [ebp + 0xc], edx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008bd77 jb 0x1008bdad */
  if (C.cf) goto L_1008bdad;
  /* 1008bd79 mov esi, ebx */
  ESI = (EBX);
  /* 1008bd7b jmp 0x1008bd2b */
  goto L_1008bd2b;
L_1008bd7d:;
  /* 1008bd7d movzx eax, al */
  EAX = ((uint32_t)(AL));
  /* 1008bd80 add esi, eax */
  { uint32_t _a=(ESI),_b=(EAX),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1008bd82 jmp 0x1008bd2b */
  goto L_1008bd2b;
L_1008bd84:;
  /* 1008bd84 lea ebx, [esi + edx] */
  EBX = ((uint32_t)(ESI + EDX*1));
  /* 1008bd87 cmp ebx, dword ptr [ebp + 8] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(EBP + 0x8))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008bd8a jae 0x1008bd95 */
  if (!C.cf) goto L_1008bd95;
  /* 1008bd8c sub eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008bd8e mov dword ptr [ecx], ebx */
  w32((uint32_t)(ECX), (EBX));
  /* 1008bd90 mov dword ptr [ecx + 4], eax */
  w32((uint32_t)(ECX + 0x4), (EAX));
  /* 1008bd93 jmp 0x1008bd9e */
  goto L_1008bd9e;
L_1008bd95:;
  /* 1008bd95 and dword ptr [ecx + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ECX + 0x4)))&(0x0u); w32((uint32_t)(ECX + 0x4), (_r)); fl_logic(_r,32); }
  /* 1008bd99 lea eax, [ecx + 8] */
  EAX = ((uint32_t)(ECX + 0x8));
  /* 1008bd9c mov dword ptr [ecx], eax */
  w32((uint32_t)(ECX), (EAX));
L_1008bd9e:;
  /* 1008bd9e mov byte ptr [esi], dl */
  w8((uint32_t)(ESI), (DL));
  /* 1008bda0 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
L_1008bda3:;
  /* 1008bda3 imul ecx, ecx, 0xf */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0xfu); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1008bda6 shl eax, 4 */
  EAX = (sh_shl((uint32_t)(EAX), (0x4u)&0x1f, 32));
  /* 1008bda9 sub eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008bdab jmp 0x1008bdaf */
  goto L_1008bdaf;
L_1008bdad:;
  /* 1008bdad xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1008bdaf:;
  /* 1008bdaf pop edi */
  EDI = (pop32());
  /* 1008bdb0 pop esi */
  ESI = (pop32());
  /* 1008bdb1 pop ebx */
  EBX = (pop32());
  /* 1008bdb2 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1008bdb3 ret  */
  ESPCHK(0x1008bc90u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bdb4 @ 0x1008bdb4 (137 bytes, 50 insns) */
void f_1008bdb4(void) {
  FTRACE(0x1008bdb4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008bdb4 push ebx */
  push32((uint32_t)(EBX));
  /* 1008bdb5 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1008bdb7 cmp dword ptr [0x10096858], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10096858))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008bdbd push esi */
  push32((uint32_t)(ESI));
  /* 1008bdbe push edi */
  push32((uint32_t)(EDI));
  /* 1008bdbf jne 0x1008be03 */
  if (!C.zf) goto L_1008be03;
  /* 1008bdc1 push 0x1008e548 */
  push32((uint32_t)(0x1008e548u));
  /* 1008bdc6 call dword ptr [0x1008e0b0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e0b0))), 0x1008bdccu);
  /* 1008bdcc mov edi, eax */
  EDI = (EAX);
  /* 1008bdce cmp edi, ebx */
  { uint32_t _a=(EDI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008bdd0 je 0x1008be39 */
  if (C.zf) goto L_1008be39;
  /* 1008bdd2 mov esi, dword ptr [0x1008e088] */
  ESI = (r32((uint32_t)(0x1008e088)));
  /* 1008bdd8 push 0x1008e53c */
  push32((uint32_t)(0x1008e53cu));
  /* 1008bddd push edi */
  push32((uint32_t)(EDI));
  /* 1008bdde call esi */
  call_ind((uint32_t)(ESI), 0x1008bde0u);
  /* 1008bde0 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008bde2 mov dword ptr [0x10096858], eax */
  w32((uint32_t)(0x10096858), (EAX));
  /* 1008bde7 je 0x1008be39 */
  if (C.zf) goto L_1008be39;
  /* 1008bde9 push 0x1008e52c */
  push32((uint32_t)(0x1008e52cu));
  /* 1008bdee push edi */
  push32((uint32_t)(EDI));
  /* 1008bdef call esi */
  call_ind((uint32_t)(ESI), 0x1008bdf1u);
  /* 1008bdf1 push 0x1008e518 */
  push32((uint32_t)(0x1008e518u));
  /* 1008bdf6 push edi */
  push32((uint32_t)(EDI));
  /* 1008bdf7 mov dword ptr [0x1009685c], eax */
  w32((uint32_t)(0x1009685c), (EAX));
  /* 1008bdfc call esi */
  call_ind((uint32_t)(ESI), 0x1008bdfeu);
  /* 1008bdfe mov dword ptr [0x10096860], eax */
  w32((uint32_t)(0x10096860), (EAX));
L_1008be03:;
  /* 1008be03 mov eax, dword ptr [0x1009685c] */
  EAX = (r32((uint32_t)(0x1009685c)));
  /* 1008be08 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008be0a je 0x1008be22 */
  if (C.zf) goto L_1008be22;
  /* 1008be0c call eax */
  call_ind((uint32_t)(EAX), 0x1008be0eu);
  /* 1008be0e mov ebx, eax */
  EBX = (EAX);
  /* 1008be10 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1008be12 je 0x1008be22 */
  if (C.zf) goto L_1008be22;
  /* 1008be14 mov eax, dword ptr [0x10096860] */
  EAX = (r32((uint32_t)(0x10096860)));
  /* 1008be19 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008be1b je 0x1008be22 */
  if (C.zf) goto L_1008be22;
  /* 1008be1d push ebx */
  push32((uint32_t)(EBX));
  /* 1008be1e call eax */
  call_ind((uint32_t)(EAX), 0x1008be20u);
  /* 1008be20 mov ebx, eax */
  EBX = (EAX);
L_1008be22:;
  /* 1008be22 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 1008be26 push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 1008be2a push dword ptr [esp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x18))));
  /* 1008be2e push ebx */
  push32((uint32_t)(EBX));
  /* 1008be2f call dword ptr [0x10096858] */
  call_ind((uint32_t)(r32((uint32_t)(0x10096858))), 0x1008be35u);
L_1008be35:;
  /* 1008be35 pop edi */
  EDI = (pop32());
  /* 1008be36 pop esi */
  ESI = (pop32());
  /* 1008be37 pop ebx */
  EBX = (pop32());
  /* 1008be38 ret  */
  ESPCHK(0x1008bdb4u, _esp0);
  ESP += 4; return;
L_1008be39:;
  /* 1008be39 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1008be3b jmp 0x1008be35 */
  goto L_1008be35;
}

/* _strncpy @ 0x1008be40 (254 bytes, 109 insns) */
void f_1008be40(void) {
  FTRACE(0x1008be40u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008be40 mov ecx, dword ptr [esp + 0xc] */
  ECX = (r32((uint32_t)(ESP + 0xc)));
  /* 1008be44 push edi */
  push32((uint32_t)(EDI));
  /* 1008be45 test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1008be47 je 0x1008bec3 */
  if (C.zf) goto L_1008bec3;
  /* 1008be49 push esi */
  push32((uint32_t)(ESI));
  /* 1008be4a push ebx */
  push32((uint32_t)(EBX));
  /* 1008be4b mov ebx, ecx */
  EBX = (ECX);
  /* 1008be4d mov esi, dword ptr [esp + 0x14] */
  ESI = (r32((uint32_t)(ESP + 0x14)));
  /* 1008be51 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 1008be57 mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1008be5b jne 0x1008be64 */
  if (!C.zf) goto L_1008be64;
  /* 1008be5d shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1008be60 jne 0x1008bed1 */
  if (!C.zf) goto L_1008bed1;
  /* 1008be62 jmp 0x1008be85 */
  goto L_1008be85;
L_1008be64:;
  /* 1008be64 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1008be66 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1008be67 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1008be69 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1008be6a dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1008be6b je 0x1008be92 */
  if (C.zf) goto L_1008be92;
  /* 1008be6d test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1008be6f je 0x1008be9a */
  if (C.zf) goto L_1008be9a;
  /* 1008be71 test esi, 3 */
  { uint32_t _r=(ESI)&(0x3u); fl_logic(_r,32); }
  /* 1008be77 jne 0x1008be64 */
  if (!C.zf) goto L_1008be64;
  /* 1008be79 mov ebx, ecx */
  EBX = (ECX);
  /* 1008be7b shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1008be7e jne 0x1008bed1 */
  if (!C.zf) goto L_1008bed1;
L_1008be80:;
  /* 1008be80 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 1008be83 je 0x1008be92 */
  if (C.zf) goto L_1008be92;
L_1008be85:;
  /* 1008be85 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1008be87 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1008be88 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1008be8a inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1008be8b test al, al */
  { uint32_t _r=(AL)&(AL); fl_logic(_r,8); }
  /* 1008be8d je 0x1008bebe */
  if (C.zf) goto L_1008bebe;
  /* 1008be8f dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1008be90 jne 0x1008be85 */
  if (!C.zf) goto L_1008be85;
L_1008be92:;
  /* 1008be92 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1008be96 pop ebx */
  EBX = (pop32());
  /* 1008be97 pop esi */
  ESI = (pop32());
  /* 1008be98 pop edi */
  EDI = (pop32());
  /* 1008be99 ret  */
  ESPCHK(0x1008be40u, _esp0);
  ESP += 4; return;
L_1008be9a:;
  /* 1008be9a test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1008bea0 je 0x1008beb4 */
  if (C.zf) goto L_1008beb4;
L_1008bea2:;
  /* 1008bea2 mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1008bea4 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1008bea5 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1008bea6 je 0x1008bf36 */
  if (C.zf) goto L_1008bf36;
  /* 1008beac test edi, 3 */
  { uint32_t _r=(EDI)&(0x3u); fl_logic(_r,32); }
  /* 1008beb2 jne 0x1008bea2 */
  if (!C.zf) goto L_1008bea2;
L_1008beb4:;
  /* 1008beb4 mov ebx, ecx */
  EBX = (ECX);
  /* 1008beb6 shr ecx, 2 */
  ECX = (sh_shr((uint32_t)(ECX), (0x2u)&0x1f, 32));
  /* 1008beb9 jne 0x1008bf27 */
  if (!C.zf) goto L_1008bf27;
L_1008bebb:;
  /* 1008bebb mov byte ptr [edi], al */
  w8((uint32_t)(EDI), (AL));
  /* 1008bebd inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
L_1008bebe:;
  /* 1008bebe dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1008bebf jne 0x1008bebb */
  if (!C.zf) goto L_1008bebb;
  /* 1008bec1 pop ebx */
  EBX = (pop32());
  /* 1008bec2 pop esi */
  ESI = (pop32());
L_1008bec3:;
  /* 1008bec3 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1008bec7 pop edi */
  EDI = (pop32());
  /* 1008bec8 ret  */
  ESPCHK(0x1008be40u, _esp0);
  ESP += 4; return;
L_1008bec9:;
  /* 1008bec9 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1008becb add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1008bece dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1008becf je 0x1008be80 */
  if (C.zf) goto L_1008be80;
L_1008bed1:;
  /* 1008bed1 mov edx, 0x7efefeff */
  EDX = (0x7efefeffu);
  /* 1008bed6 mov eax, dword ptr [esi] */
  EAX = (r32((uint32_t)(ESI)));
  /* 1008bed8 add edx, eax */
  { uint32_t _a=(EDX),_b=(EAX),_r=_a+_b; EDX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008beda xor eax, 0xffffffff */
  { uint32_t _r=(EAX)^(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1008bedd xor eax, edx */
  { uint32_t _r=(EAX)^(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1008bedf mov edx, dword ptr [esi] */
  EDX = (r32((uint32_t)(ESI)));
  /* 1008bee1 add esi, 4 */
  { uint32_t _a=(ESI),_b=(0x4u),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1008bee4 test eax, 0x81010100 */
  { uint32_t _r=(EAX)&(0x81010100u); fl_logic(_r,32); }
  /* 1008bee9 je 0x1008bec9 */
  if (C.zf) goto L_1008bec9;
  /* 1008beeb test dl, dl */
  { uint32_t _r=(DL)&(DL); fl_logic(_r,8); }
  /* 1008beed je 0x1008bf1b */
  if (C.zf) goto L_1008bf1b;
  /* 1008beef test dh, dh */
  { uint32_t _r=(C.d.b.h)&(C.d.b.h); fl_logic(_r,8); }
  /* 1008bef1 je 0x1008bf11 */
  if (C.zf) goto L_1008bf11;
  /* 1008bef3 test edx, 0xff0000 */
  { uint32_t _r=(EDX)&(0xff0000u); fl_logic(_r,32); }
  /* 1008bef9 je 0x1008bf07 */
  if (C.zf) goto L_1008bf07;
  /* 1008befb test edx, 0xff000000 */
  { uint32_t _r=(EDX)&(0xff000000u); fl_logic(_r,32); }
  /* 1008bf01 jne 0x1008bec9 */
  if (!C.zf) goto L_1008bec9;
  /* 1008bf03 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1008bf05 jmp 0x1008bf1f */
  goto L_1008bf1f;
L_1008bf07:;
  /* 1008bf07 and edx, 0xffff */
  { uint32_t _r=(EDX)&(0xffffu); EDX = (_r); fl_logic(_r,32); }
  /* 1008bf0d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1008bf0f jmp 0x1008bf1f */
  goto L_1008bf1f;
L_1008bf11:;
  /* 1008bf11 and edx, 0xff */
  { uint32_t _r=(EDX)&(0xffu); EDX = (_r); fl_logic(_r,32); }
  /* 1008bf17 mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
  /* 1008bf19 jmp 0x1008bf1f */
  goto L_1008bf1f;
L_1008bf1b:;
  /* 1008bf1b xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1008bf1d mov dword ptr [edi], edx */
  w32((uint32_t)(EDI), (EDX));
L_1008bf1f:;
  /* 1008bf1f add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1008bf22 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1008bf24 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1008bf25 je 0x1008bf31 */
  if (C.zf) goto L_1008bf31;
L_1008bf27:;
  /* 1008bf27 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1008bf29:;
  /* 1008bf29 mov dword ptr [edi], eax */
  w32((uint32_t)(EDI), (EAX));
  /* 1008bf2b add edi, 4 */
  { uint32_t _a=(EDI),_b=(0x4u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1008bf2e dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1008bf2f jne 0x1008bf29 */
  if (!C.zf) goto L_1008bf29;
L_1008bf31:;
  /* 1008bf31 and ebx, 3 */
  { uint32_t _r=(EBX)&(0x3u); EBX = (_r); fl_logic(_r,32); }
  /* 1008bf34 jne 0x1008bebb */
  if (!C.zf) goto L_1008bebb;
L_1008bf36:;
  /* 1008bf36 mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1008bf3a pop ebx */
  EBX = (pop32());
  /* 1008bf3b pop esi */
  ESI = (pop32());
  /* 1008bf3c pop edi */
  EDI = (pop32());
  /* 1008bf3d ret  */
  ESPCHK(0x1008be40u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bf3e @ 0x1008bf3e (115 bytes, 37 insns) */
void f_1008bf3e(void) {
  FTRACE(0x1008bf3eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008bf3e push esi */
  push32((uint32_t)(ESI));
  /* 1008bf3f call 0x1008bfba */
  push32(0x1008bf44u); f_1008bfba();
  /* 1008bf44 mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1008bf48 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1008bf4a mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1008bf4c mov eax, 0x10092ed0 */
  EAX = (0x10092ed0u);
L_1008bf51:;
  /* 1008bf51 cmp ecx, dword ptr [eax] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(EAX))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008bf53 je 0x1008bf77 */
  if (C.zf) goto L_1008bf77;
  /* 1008bf55 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008bf58 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1008bf59 cmp eax, 0x10093038 */
  { uint32_t _a=(EAX),_b=(0x10093038u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008bf5e jl 0x1008bf51 */
  if ((C.sf!=C.of)) goto L_1008bf51;
  /* 1008bf60 cmp ecx, 0x13 */
  { uint32_t _a=(ECX),_b=(0x13u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008bf63 jb 0x1008bf87 */
  if (C.cf) goto L_1008bf87;
  /* 1008bf65 cmp ecx, 0x24 */
  { uint32_t _a=(ECX),_b=(0x24u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008bf68 ja 0x1008bf87 */
  if ((!C.cf&&!C.zf)) goto L_1008bf87;
  /* 1008bf6a call 0x1008bfb1 */
  push32(0x1008bf6fu); f_1008bfb1();
  /* 1008bf6f mov dword ptr [eax], 0xd */
  w32((uint32_t)(EAX), (0xdu));
  /* 1008bf75 pop esi */
  ESI = (pop32());
  /* 1008bf76 ret  */
  ESPCHK(0x1008bf3eu, _esp0);
  ESP += 4; return;
L_1008bf77:;
  /* 1008bf77 call 0x1008bfb1 */
  push32(0x1008bf7cu); f_1008bfb1();
  /* 1008bf7c mov ecx, dword ptr [esi*8 + 0x10092ed4] */
  ECX = (r32((uint32_t)(ESI*8 + 0x10092ed4)));
  /* 1008bf83 pop esi */
  ESI = (pop32());
  /* 1008bf84 mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1008bf86 ret  */
  ESPCHK(0x1008bf3eu, _esp0);
  ESP += 4; return;
L_1008bf87:;
  /* 1008bf87 cmp ecx, 0xbc */
  { uint32_t _a=(ECX),_b=(0xbcu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008bf8d jb 0x1008bfa4 */
  if (C.cf) goto L_1008bfa4;
  /* 1008bf8f cmp ecx, 0xca */
  { uint32_t _a=(ECX),_b=(0xcau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008bf95 ja 0x1008bfa4 */
  if ((!C.cf&&!C.zf)) goto L_1008bfa4;
  /* 1008bf97 call 0x1008bfb1 */
  push32(0x1008bf9cu); f_1008bfb1();
  /* 1008bf9c mov dword ptr [eax], 8 */
  w32((uint32_t)(EAX), (0x8u));
  /* 1008bfa2 pop esi */
  ESI = (pop32());
  /* 1008bfa3 ret  */
  ESPCHK(0x1008bf3eu, _esp0);
  ESP += 4; return;
L_1008bfa4:;
  /* 1008bfa4 call 0x1008bfb1 */
  push32(0x1008bfa9u); f_1008bfb1();
  /* 1008bfa9 mov dword ptr [eax], 0x16 */
  w32((uint32_t)(EAX), (0x16u));
  /* 1008bfaf pop esi */
  ESI = (pop32());
  /* 1008bfb0 ret  */
  ESPCHK(0x1008bf3eu, _esp0);
  ESP += 4; return;
}

/* FUN_1000bfb1 @ 0x1008bfb1 (9 bytes, 3 insns) */
void f_1008bfb1(void) {
  FTRACE(0x1008bfb1u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008bfb1 call 0x10088088 */
  push32(0x1008bfb6u); f_10088088();
  /* 1008bfb6 add eax, 8 */
  { uint32_t _a=(EAX),_b=(0x8u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008bfb9 ret  */
  ESPCHK(0x1008bfb1u, _esp0);
  ESP += 4; return;
}

/* FUN_1000bfba @ 0x1008bfba (9 bytes, 3 insns) */
void f_1008bfba(void) {
  FTRACE(0x1008bfbau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008bfba call 0x10088088 */
  push32(0x1008bfbfu); f_10088088();
  /* 1008bfbf add eax, 0xc */
  { uint32_t _a=(EAX),_b=(0xcu),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008bfc2 ret  */
  ESPCHK(0x1008bfbau, _esp0);
  ESP += 4; return;
}

/* FUN_1000bfc3 @ 0x1008bfc3 (127 bytes, 48 insns) */
void f_1008bfc3(void) {
  FTRACE(0x1008bfc3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008bfc3 mov ecx, dword ptr [esp + 4] */
  ECX = (r32((uint32_t)(ESP + 0x4)));
  /* 1008bfc7 push esi */
  push32((uint32_t)(ESI));
  /* 1008bfc8 cmp ecx, dword ptr [0x10097d80] */
  { uint32_t _a=(ECX),_b=(r32((uint32_t)(0x10097d80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008bfce push edi */
  push32((uint32_t)(EDI));
  /* 1008bfcf jae 0x1008c029 */
  if (!C.cf) goto L_1008c029;
  /* 1008bfd1 mov eax, ecx */
  EAX = (ECX);
  /* 1008bfd3 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1008bfd6 lea edi, [eax*4 + 0x10097c80] */
  EDI = ((uint32_t)(EAX*4 + 0x10097c80));
  /* 1008bfdd mov eax, ecx */
  EAX = (ECX);
  /* 1008bfdf and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1008bfe2 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 1008bfe5 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1008bfe7 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 1008bfea add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008bfec test byte ptr [eax + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1008bff0 je 0x1008c029 */
  if (C.zf) goto L_1008c029;
  /* 1008bff2 cmp dword ptr [eax], -1 */
  { uint32_t _a=(r32((uint32_t)(EAX))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008bff5 je 0x1008c029 */
  if (C.zf) goto L_1008c029;
  /* 1008bff7 cmp dword ptr [0x10096694], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10096694))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008bffe jne 0x1008c01f */
  if (!C.zf) goto L_1008c01f;
  /* 1008c000 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1008c002 sub ecx, eax */
  { uint32_t _a=(ECX),_b=(EAX),_r=_a-_b; ECX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008c004 je 0x1008c016 */
  if (C.zf) goto L_1008c016;
  /* 1008c006 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1008c007 je 0x1008c011 */
  if (C.zf) goto L_1008c011;
  /* 1008c009 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1008c00a jne 0x1008c01f */
  if (!C.zf) goto L_1008c01f;
  /* 1008c00c push eax */
  push32((uint32_t)(EAX));
  /* 1008c00d push -0xc */
  push32((uint32_t)(0xfffffff4u));
  /* 1008c00f jmp 0x1008c019 */
  goto L_1008c019;
L_1008c011:;
  /* 1008c011 push eax */
  push32((uint32_t)(EAX));
  /* 1008c012 push -0xb */
  push32((uint32_t)(0xfffffff5u));
  /* 1008c014 jmp 0x1008c019 */
  goto L_1008c019;
L_1008c016:;
  /* 1008c016 push eax */
  push32((uint32_t)(EAX));
  /* 1008c017 push -0xa */
  push32((uint32_t)(0xfffffff6u));
L_1008c019:;
  /* 1008c019 call dword ptr [0x1008e0b4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e0b4))), 0x1008c01fu);
L_1008c01f:;
  /* 1008c01f mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1008c021 or dword ptr [eax + esi], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EAX + ESI*1)))|(0xffffffffu); w32((uint32_t)(EAX + ESI*1), (_r)); fl_logic(_r,32); }
  /* 1008c025 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1008c027 jmp 0x1008c03f */
  goto L_1008c03f;
L_1008c029:;
  /* 1008c029 call 0x1008bfb1 */
  push32(0x1008c02eu); f_1008bfb1();
  /* 1008c02e mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1008c034 call 0x1008bfba */
  push32(0x1008c039u); f_1008bfba();
  /* 1008c039 and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1008c03c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1008c03f:;
  /* 1008c03f pop edi */
  EDI = (pop32());
  /* 1008c040 pop esi */
  ESI = (pop32());
  /* 1008c041 ret  */
  ESPCHK(0x1008bfc3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c042 @ 0x1008c042 (66 bytes, 19 insns) */
void f_1008c042(void) {
  FTRACE(0x1008c042u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008c042 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1008c046 cmp eax, dword ptr [0x10097d80] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(0x10097d80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008c04c jae 0x1008c06d */
  if (!C.cf) goto L_1008c06d;
  /* 1008c04e mov ecx, eax */
  ECX = (EAX);
  /* 1008c050 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1008c053 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1008c056 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1008c059 mov ecx, dword ptr [ecx*4 + 0x10097c80] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10097c80)));
  /* 1008c060 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1008c065 lea eax, [ecx + eax*4] */
  EAX = ((uint32_t)(ECX + EAX*4));
  /* 1008c068 je 0x1008c06d */
  if (C.zf) goto L_1008c06d;
  /* 1008c06a mov eax, dword ptr [eax] */
  EAX = (r32((uint32_t)(EAX)));
  /* 1008c06c ret  */
  ESPCHK(0x1008c042u, _esp0);
  ESP += 4; return;
L_1008c06d:;
  /* 1008c06d call 0x1008bfb1 */
  push32(0x1008c072u); f_1008bfb1();
  /* 1008c072 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1008c078 call 0x1008bfba */
  push32(0x1008c07du); f_1008bfba();
  /* 1008c07d and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1008c080 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1008c083 ret  */
  ESPCHK(0x1008c042u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c084 @ 0x1008c084 (95 bytes, 34 insns) */
void f_1008c084(void) {
  FTRACE(0x1008c084u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008c084 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1008c088 push ebx */
  push32((uint32_t)(EBX));
  /* 1008c089 mov ecx, eax */
  ECX = (EAX);
  /* 1008c08b and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1008c08e sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1008c091 push esi */
  push32((uint32_t)(ESI));
  /* 1008c092 push edi */
  push32((uint32_t)(EDI));
  /* 1008c093 mov esi, dword ptr [ecx*4 + 0x10097c80] */
  ESI = (r32((uint32_t)(ECX*4 + 0x10097c80)));
  /* 1008c09a lea ebx, [ecx*4 + 0x10097c80] */
  EBX = ((uint32_t)(ECX*4 + 0x10097c80));
  /* 1008c0a1 lea edi, [eax + eax*8] */
  EDI = ((uint32_t)(EAX + EAX*8));
  /* 1008c0a4 shl edi, 2 */
  EDI = (sh_shl((uint32_t)(EDI), (0x2u)&0x1f, 32));
  /* 1008c0a7 add esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1008c0a9 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008c0ad jne 0x1008c0d2 */
  if (!C.zf) goto L_1008c0d2;
  /* 1008c0af push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1008c0b1 call 0x1008a053 */
  push32(0x1008c0b6u); f_1008a053();
  /* 1008c0b6 cmp dword ptr [esi + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008c0ba pop ecx */
  ECX = (pop32());
  /* 1008c0bb jne 0x1008c0ca */
  if (!C.zf) goto L_1008c0ca;
  /* 1008c0bd lea eax, [esi + 0xc] */
  EAX = ((uint32_t)(ESI + 0xc));
  /* 1008c0c0 push eax */
  push32((uint32_t)(EAX));
  /* 1008c0c1 call dword ptr [0x1008e094] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e094))), 0x1008c0c7u);
  /* 1008c0c7 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_1008c0ca:;
  /* 1008c0ca push 0x11 */
  push32((uint32_t)(0x11u));
  /* 1008c0cc call 0x1008a0b4 */
  push32(0x1008c0d1u); f_1008a0b4();
  /* 1008c0d1 pop ecx */
  ECX = (pop32());
L_1008c0d2:;
  /* 1008c0d2 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 1008c0d4 lea eax, [eax + edi + 0xc] */
  EAX = ((uint32_t)(EAX + EDI*1 + 0xc));
  /* 1008c0d8 push eax */
  push32((uint32_t)(EAX));
  /* 1008c0d9 call dword ptr [0x1008e00c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e00c))), 0x1008c0dfu);
  /* 1008c0df pop edi */
  EDI = (pop32());
  /* 1008c0e0 pop esi */
  ESI = (pop32());
  /* 1008c0e1 pop ebx */
  EBX = (pop32());
  /* 1008c0e2 ret  */
  ESPCHK(0x1008c084u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c0e3 @ 0x1008c0e3 (34 bytes, 10 insns) */
void f_1008c0e3(void) {
  FTRACE(0x1008c0e3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008c0e3 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1008c0e7 mov ecx, eax */
  ECX = (EAX);
  /* 1008c0e9 and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1008c0ec sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1008c0ef lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1008c0f2 mov ecx, dword ptr [ecx*4 + 0x10097c80] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10097c80)));
  /* 1008c0f9 lea eax, [ecx + eax*4 + 0xc] */
  EAX = ((uint32_t)(ECX + EAX*4 + 0xc));
  /* 1008c0fd push eax */
  push32((uint32_t)(EAX));
  /* 1008c0fe call dword ptr [0x1008e008] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e008))), 0x1008c104u);
  /* 1008c104 ret  */
  ESPCHK(0x1008c0e3u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c186 @ 0x1008c186 (46 bytes, 22 insns) */
void f_1008c186(void) {
  FTRACE(0x1008c186u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008c186 push esi */
  push32((uint32_t)(ESI));
  /* 1008c187 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1008c18b push esi */
  push32((uint32_t)(ESI));
  /* 1008c18c call 0x1008c1b4 */
  push32(0x1008c191u); f_1008c1b4();
  /* 1008c191 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008c193 pop ecx */
  ECX = (pop32());
  /* 1008c194 je 0x1008c19b */
  if (C.zf) goto L_1008c19b;
  /* 1008c196 or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1008c199 pop esi */
  ESI = (pop32());
  /* 1008c19a ret  */
  ESPCHK(0x1008c186u, _esp0);
  ESP += 4; return;
L_1008c19b:;
  /* 1008c19b test byte ptr [esi + 0xd], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xd)))&(0x40u); fl_logic(_r,8); }
  /* 1008c19f je 0x1008c1b0 */
  if (C.zf) goto L_1008c1b0;
  /* 1008c1a1 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1008c1a4 call 0x1008d300 */
  push32(0x1008c1a9u); f_1008d300();
  /* 1008c1a9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1008c1ab pop ecx */
  ECX = (pop32());
  /* 1008c1ac pop esi */
  ESI = (pop32());
  /* 1008c1ad sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008c1af ret  */
  ESPCHK(0x1008c186u, _esp0);
  ESP += 4; return;
L_1008c1b0:;
  /* 1008c1b0 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1008c1b2 pop esi */
  ESI = (pop32());
  /* 1008c1b3 ret  */
  ESPCHK(0x1008c186u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c1b4 @ 0x1008c1b4 (92 bytes, 40 insns) */
void f_1008c1b4(void) {
  FTRACE(0x1008c1b4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008c1b4 push ebx */
  push32((uint32_t)(EBX));
  /* 1008c1b5 push esi */
  push32((uint32_t)(ESI));
  /* 1008c1b6 mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 1008c1ba xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1008c1bc push edi */
  push32((uint32_t)(EDI));
  /* 1008c1bd mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1008c1c0 mov ecx, eax */
  ECX = (EAX);
  /* 1008c1c2 and ecx, 3 */
  { uint32_t _r=(ECX)&(0x3u); ECX = (_r); fl_logic(_r,32); }
  /* 1008c1c5 cmp cl, 2 */
  { uint32_t _a=(CL),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008c1c8 jne 0x1008c201 */
  if (!C.zf) goto L_1008c201;
  /* 1008c1ca test ax, 0x108 */
  { uint32_t _r=(AX)&(0x108u); fl_logic(_r,16); }
  /* 1008c1ce je 0x1008c201 */
  if (C.zf) goto L_1008c201;
  /* 1008c1d0 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 1008c1d3 mov edi, dword ptr [esi] */
  EDI = (r32((uint32_t)(ESI)));
  /* 1008c1d5 sub edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008c1d7 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1008c1d9 jle 0x1008c201 */
  if ((C.zf||C.sf!=C.of)) goto L_1008c201;
  /* 1008c1db push edi */
  push32((uint32_t)(EDI));
  /* 1008c1dc push eax */
  push32((uint32_t)(EAX));
  /* 1008c1dd push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1008c1e0 call 0x10088cb5 */
  push32(0x1008c1e5u); f_10088cb5();
  /* 1008c1e5 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008c1e8 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008c1ea jne 0x1008c1fa */
  if (!C.zf) goto L_1008c1fa;
  /* 1008c1ec mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1008c1ef test al, 0x80 */
  { uint32_t _r=(AL)&(0x80u); fl_logic(_r,8); }
  /* 1008c1f1 je 0x1008c201 */
  if (C.zf) goto L_1008c201;
  /* 1008c1f3 and al, 0xfd */
  { uint32_t _r=(AL)&(0xfdu); AL = (_r); fl_logic(_r,8); }
  /* 1008c1f5 mov dword ptr [esi + 0xc], eax */
  w32((uint32_t)(ESI + 0xc), (EAX));
  /* 1008c1f8 jmp 0x1008c201 */
  goto L_1008c201;
L_1008c1fa:;
  /* 1008c1fa or dword ptr [esi + 0xc], 0x20 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))|(0x20u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 1008c1fe or ebx, 0xffffffff */
  { uint32_t _r=(EBX)|(0xffffffffu); EBX = (_r); fl_logic(_r,32); }
L_1008c201:;
  /* 1008c201 mov eax, dword ptr [esi + 8] */
  EAX = (r32((uint32_t)(ESI + 0x8)));
  /* 1008c204 and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 1008c208 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1008c20a pop edi */
  EDI = (pop32());
  /* 1008c20b mov eax, ebx */
  EAX = (EBX);
  /* 1008c20d pop esi */
  ESI = (pop32());
  /* 1008c20e pop ebx */
  EBX = (pop32());
  /* 1008c20f ret  */
  ESPCHK(0x1008c1b4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c219 @ 0x1008c219 (164 bytes, 66 insns) */
void f_1008c219(void) {
  FTRACE(0x1008c219u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008c219 push ebx */
  push32((uint32_t)(EBX));
  /* 1008c21a push esi */
  push32((uint32_t)(ESI));
  /* 1008c21b push edi */
  push32((uint32_t)(EDI));
  /* 1008c21c push 2 */
  push32((uint32_t)(0x2u));
  /* 1008c21e xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1008c220 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1008c222 call 0x1008a053 */
  push32(0x1008c227u); f_1008a053();
  /* 1008c227 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1008c229 pop ecx */
  ECX = (pop32());
  /* 1008c22a cmp dword ptr [0x10097c60], esi */
  { uint32_t _a=(r32((uint32_t)(0x10097c60))),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008c230 jle 0x1008c2a6 */
  if ((C.zf||C.sf!=C.of)) goto L_1008c2a6;
L_1008c232:;
  /* 1008c232 mov eax, dword ptr [0x10096c48] */
  EAX = (r32((uint32_t)(0x10096c48)));
  /* 1008c237 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 1008c23a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008c23c je 0x1008c29d */
  if (C.zf) goto L_1008c29d;
  /* 1008c23e test byte ptr [eax + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(EAX + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 1008c242 je 0x1008c29d */
  if (C.zf) goto L_1008c29d;
  /* 1008c244 push eax */
  push32((uint32_t)(EAX));
  /* 1008c245 push esi */
  push32((uint32_t)(ESI));
  /* 1008c246 call 0x10088ffd */
  push32(0x1008c24bu); f_10088ffd();
  /* 1008c24b mov eax, dword ptr [0x10096c48] */
  EAX = (r32((uint32_t)(0x10096c48)));
  /* 1008c250 pop ecx */
  ECX = (pop32());
  /* 1008c251 pop ecx */
  ECX = (pop32());
  /* 1008c252 mov eax, dword ptr [eax + esi*4] */
  EAX = (r32((uint32_t)(EAX + ESI*4)));
  /* 1008c255 mov ecx, dword ptr [eax + 0xc] */
  ECX = (r32((uint32_t)(EAX + 0xc)));
  /* 1008c258 test cl, 0x83 */
  { uint32_t _r=(CL)&(0x83u); fl_logic(_r,8); }
  /* 1008c25b je 0x1008c28d */
  if (C.zf) goto L_1008c28d;
  /* 1008c25d cmp dword ptr [esp + 0x10], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008c262 jne 0x1008c273 */
  if (!C.zf) goto L_1008c273;
  /* 1008c264 push eax */
  push32((uint32_t)(EAX));
  /* 1008c265 call 0x1008c186 */
  push32(0x1008c26au); f_1008c186();
  /* 1008c26a cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008c26d pop ecx */
  ECX = (pop32());
  /* 1008c26e je 0x1008c28d */
  if (C.zf) goto L_1008c28d;
  /* 1008c270 inc ebx */
  { uint32_t _r=(EBX)+1; EBX = (_r); fl_inc(_r,32); }
  /* 1008c271 jmp 0x1008c28d */
  goto L_1008c28d;
L_1008c273:;
  /* 1008c273 cmp dword ptr [esp + 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008c278 jne 0x1008c28d */
  if (!C.zf) goto L_1008c28d;
  /* 1008c27a test cl, 2 */
  { uint32_t _r=(CL)&(0x2u); fl_logic(_r,8); }
  /* 1008c27d je 0x1008c28d */
  if (C.zf) goto L_1008c28d;
  /* 1008c27f push eax */
  push32((uint32_t)(EAX));
  /* 1008c280 call 0x1008c186 */
  push32(0x1008c285u); f_1008c186();
  /* 1008c285 cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008c288 pop ecx */
  ECX = (pop32());
  /* 1008c289 jne 0x1008c28d */
  if (!C.zf) goto L_1008c28d;
  /* 1008c28b or edi, eax */
  { uint32_t _r=(EDI)|(EAX); EDI = (_r); fl_logic(_r,32); }
L_1008c28d:;
  /* 1008c28d mov eax, dword ptr [0x10096c48] */
  EAX = (r32((uint32_t)(0x10096c48)));
  /* 1008c292 push dword ptr [eax + esi*4] */
  push32((uint32_t)(r32((uint32_t)(EAX + ESI*4))));
  /* 1008c295 push esi */
  push32((uint32_t)(ESI));
  /* 1008c296 call 0x1008904f */
  push32(0x1008c29bu); f_1008904f();
  /* 1008c29b pop ecx */
  ECX = (pop32());
  /* 1008c29c pop ecx */
  ECX = (pop32());
L_1008c29d:;
  /* 1008c29d inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1008c29e cmp esi, dword ptr [0x10097c60] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10097c60))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008c2a4 jl 0x1008c232 */
  if ((C.sf!=C.of)) goto L_1008c232;
L_1008c2a6:;
  /* 1008c2a6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1008c2a8 call 0x1008a0b4 */
  push32(0x1008c2adu); f_1008a0b4();
  /* 1008c2ad cmp dword ptr [esp + 0x14], 1 */
  { uint32_t _a=(r32((uint32_t)(ESP + 0x14))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008c2b2 pop ecx */
  ECX = (pop32());
  /* 1008c2b3 mov eax, ebx */
  EAX = (EBX);
  /* 1008c2b5 je 0x1008c2b9 */
  if (C.zf) goto L_1008c2b9;
  /* 1008c2b7 mov eax, edi */
  EAX = (EDI);
L_1008c2b9:;
  /* 1008c2b9 pop edi */
  EDI = (pop32());
  /* 1008c2ba pop esi */
  ESI = (pop32());
  /* 1008c2bb pop ebx */
  EBX = (pop32());
  /* 1008c2bc ret  */
  ESPCHK(0x1008c219u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c2bd @ 0x1008c2bd (318 bytes, 123 insns) */
void f_1008c2bd(void) {
  FTRACE(0x1008c2bdu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008c2bd push ebp */
  push32((uint32_t)(EBP));
  /* 1008c2be mov ebp, esp */
  EBP = (ESP);
  /* 1008c2c0 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1008c2c2 push 0x1008e560 */
  push32((uint32_t)(0x1008e560u));
  /* 1008c2c7 push 0x1008d070 */
  push32((uint32_t)(0x1008d070u));
  /* 1008c2cc mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1008c2d2 push eax */
  push32((uint32_t)(EAX));
  /* 1008c2d3 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1008c2da sub esp, 0x18 */
  { uint32_t _a=(ESP),_b=(0x18u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008c2dd push ebx */
  push32((uint32_t)(EBX));
  /* 1008c2de push esi */
  push32((uint32_t)(ESI));
  /* 1008c2df push edi */
  push32((uint32_t)(EDI));
  /* 1008c2e0 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1008c2e3 mov eax, dword ptr [0x100968a4] */
  EAX = (r32((uint32_t)(0x100968a4)));
  /* 1008c2e8 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1008c2ea cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008c2ec jne 0x1008c32c */
  if (!C.zf) goto L_1008c32c;
  /* 1008c2ee lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1008c2f1 push eax */
  push32((uint32_t)(EAX));
  /* 1008c2f2 push 1 */
  push32((uint32_t)(0x1u));
  /* 1008c2f4 pop esi */
  ESI = (pop32());
  /* 1008c2f5 push esi */
  push32((uint32_t)(ESI));
  /* 1008c2f6 push 0x1008e558 */
  push32((uint32_t)(0x1008e558u));
  /* 1008c2fb push esi */
  push32((uint32_t)(ESI));
  /* 1008c2fc call dword ptr [0x1008e0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e0c0))), 0x1008c302u);
  /* 1008c302 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008c304 je 0x1008c30a */
  if (C.zf) goto L_1008c30a;
  /* 1008c306 mov eax, esi */
  EAX = (ESI);
  /* 1008c308 jmp 0x1008c327 */
  goto L_1008c327;
L_1008c30a:;
  /* 1008c30a lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1008c30d push eax */
  push32((uint32_t)(EAX));
  /* 1008c30e push esi */
  push32((uint32_t)(ESI));
  /* 1008c30f push 0x1008e554 */
  push32((uint32_t)(0x1008e554u));
  /* 1008c314 push esi */
  push32((uint32_t)(ESI));
  /* 1008c315 push ebx */
  push32((uint32_t)(EBX));
  /* 1008c316 call dword ptr [0x1008e0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e0bc))), 0x1008c31cu);
  /* 1008c31c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008c31e je 0x1008c3f2 */
  if (C.zf) goto L_1008c3f2;
  /* 1008c324 push 2 */
  push32((uint32_t)(0x2u));
  /* 1008c326 pop eax */
  EAX = (pop32());
L_1008c327:;
  /* 1008c327 mov dword ptr [0x100968a4], eax */
  w32((uint32_t)(0x100968a4), (EAX));
L_1008c32c:;
  /* 1008c32c cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008c32f jne 0x1008c355 */
  if (!C.zf) goto L_1008c355;
  /* 1008c331 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1008c334 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008c336 jne 0x1008c33d */
  if (!C.zf) goto L_1008c33d;
  /* 1008c338 mov eax, dword ptr [0x10096878] */
  EAX = (r32((uint32_t)(0x10096878)));
L_1008c33d:;
  /* 1008c33d push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1008c340 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1008c343 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1008c346 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1008c349 push eax */
  push32((uint32_t)(EAX));
  /* 1008c34a call dword ptr [0x1008e0bc] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e0bc))), 0x1008c350u);
  /* 1008c350 jmp 0x1008c3f4 */
  goto L_1008c3f4;
L_1008c355:;
  /* 1008c355 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008c358 jne 0x1008c3f2 */
  if (!C.zf) goto L_1008c3f2;
  /* 1008c35e cmp dword ptr [ebp + 0x18], ebx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x18))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008c361 jne 0x1008c36b */
  if (!C.zf) goto L_1008c36b;
  /* 1008c363 mov eax, dword ptr [0x10096888] */
  EAX = (r32((uint32_t)(0x10096888)));
  /* 1008c368 mov dword ptr [ebp + 0x18], eax */
  w32((uint32_t)(EBP + 0x18), (EAX));
L_1008c36b:;
  /* 1008c36b push ebx */
  push32((uint32_t)(EBX));
  /* 1008c36c push ebx */
  push32((uint32_t)(EBX));
  /* 1008c36d push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1008c370 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1008c373 mov eax, dword ptr [ebp + 0x20] */
  EAX = (r32((uint32_t)(EBP + 0x20)));
  /* 1008c376 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1008c378 sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008c37a and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1008c37d inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1008c37e push eax */
  push32((uint32_t)(EAX));
  /* 1008c37f push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1008c382 call dword ptr [0x1008e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e0b8))), 0x1008c388u);
  /* 1008c388 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1008c38b cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008c38d je 0x1008c3f2 */
  if (C.zf) goto L_1008c3f2;
  /* 1008c38f mov dword ptr [ebp - 4], ebx */
  w32((uint32_t)(EBP + -0x4), (EBX));
  /* 1008c392 lea edi, [eax + eax] */
  EDI = ((uint32_t)(EAX + EAX*1));
  /* 1008c395 mov eax, edi */
  EAX = (EDI);
  /* 1008c397 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008c39a and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1008c39c call 0x1008af10 */
  push32(0x1008c3a1u); f_1008af10();
  /* 1008c3a1 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1008c3a4 mov esi, esp */
  ESI = (ESP);
  /* 1008c3a6 mov dword ptr [ebp - 0x24], esi */
  w32((uint32_t)(EBP + -0x24), (ESI));
  /* 1008c3a9 push edi */
  push32((uint32_t)(EDI));
  /* 1008c3aa push ebx */
  push32((uint32_t)(EBX));
  /* 1008c3ab push esi */
  push32((uint32_t)(ESI));
  /* 1008c3ac call 0x10089c20 */
  push32(0x1008c3b1u); f_10089c20();
  /* 1008c3b1 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008c3b4 jmp 0x1008c3c1 */
  goto L_1008c3c1;
  /* 1008c3b6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1008c3b8 pop eax */
  EAX = (pop32());
  /* 1008c3b9 ret  */
  ESPCHK(0x1008c2bdu, _esp0);
  ESP += 4; return;
  /* 1008c3ba mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1008c3bd xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1008c3bf xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1008c3c1:;
  /* 1008c3c1 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1008c3c5 cmp esi, ebx */
  { uint32_t _a=(ESI),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008c3c7 je 0x1008c3f2 */
  if (C.zf) goto L_1008c3f2;
  /* 1008c3c9 push dword ptr [ebp - 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x20))));
  /* 1008c3cc push esi */
  push32((uint32_t)(ESI));
  /* 1008c3cd push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1008c3d0 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1008c3d3 push 1 */
  push32((uint32_t)(0x1u));
  /* 1008c3d5 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1008c3d8 call dword ptr [0x1008e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e0b8))), 0x1008c3deu);
  /* 1008c3de cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008c3e0 je 0x1008c3f2 */
  if (C.zf) goto L_1008c3f2;
  /* 1008c3e2 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1008c3e5 push eax */
  push32((uint32_t)(EAX));
  /* 1008c3e6 push esi */
  push32((uint32_t)(ESI));
  /* 1008c3e7 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1008c3ea call dword ptr [0x1008e0c0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e0c0))), 0x1008c3f0u);
  /* 1008c3f0 jmp 0x1008c3f4 */
  goto L_1008c3f4;
L_1008c3f2:;
  /* 1008c3f2 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1008c3f4:;
  /* 1008c3f4 lea esp, [ebp - 0x34] */
  ESP = ((uint32_t)(EBP + -0x34));
  /* 1008c3f7 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1008c3fa mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1008c401 pop edi */
  EDI = (pop32());
  /* 1008c402 pop esi */
  ESI = (pop32());
  /* 1008c403 pop ebx */
  EBX = (pop32());
  /* 1008c404 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1008c405 ret  */
  ESPCHK(0x1008c2bdu, _esp0);
  ESP += 4; return;
}

/* FUN_1000c406 @ 0x1008c406 (511 bytes, 193 insns) */
void f_1008c406(void) {
  FTRACE(0x1008c406u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008c406 push ebp */
  push32((uint32_t)(EBP));
  /* 1008c407 mov ebp, esp */
  EBP = (ESP);
  /* 1008c409 push -1 */
  push32((uint32_t)(0xffffffffu));
  /* 1008c40b push 0x1008e570 */
  push32((uint32_t)(0x1008e570u));
  /* 1008c410 push 0x1008d070 */
  push32((uint32_t)(0x1008d070u));
  /* 1008c415 mov eax, dword ptr fs:[0] */
  EAX = (r32((uint32_t)(0x0)));
  /* 1008c41b push eax */
  push32((uint32_t)(EAX));
  /* 1008c41c mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
  /* 1008c423 sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008c426 push ebx */
  push32((uint32_t)(EBX));
  /* 1008c427 push esi */
  push32((uint32_t)(ESI));
  /* 1008c428 push edi */
  push32((uint32_t)(EDI));
  /* 1008c429 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1008c42c xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1008c42e cmp dword ptr [0x100968a8], edi */
  { uint32_t _a=(r32((uint32_t)(0x100968a8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008c434 jne 0x1008c47c */
  if (!C.zf) goto L_1008c47c;
  /* 1008c436 push edi */
  push32((uint32_t)(EDI));
  /* 1008c437 push edi */
  push32((uint32_t)(EDI));
  /* 1008c438 push 1 */
  push32((uint32_t)(0x1u));
  /* 1008c43a pop ebx */
  EBX = (pop32());
  /* 1008c43b push ebx */
  push32((uint32_t)(EBX));
  /* 1008c43c push 0x1008e558 */
  push32((uint32_t)(0x1008e558u));
  /* 1008c441 mov esi, 0x100 */
  ESI = (0x100u);
  /* 1008c446 push esi */
  push32((uint32_t)(ESI));
  /* 1008c447 push edi */
  push32((uint32_t)(EDI));
  /* 1008c448 call dword ptr [0x1008e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e0c8))), 0x1008c44eu);
  /* 1008c44e test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008c450 je 0x1008c45a */
  if (C.zf) goto L_1008c45a;
  /* 1008c452 mov dword ptr [0x100968a8], ebx */
  w32((uint32_t)(0x100968a8), (EBX));
  /* 1008c458 jmp 0x1008c47c */
  goto L_1008c47c;
L_1008c45a:;
  /* 1008c45a push edi */
  push32((uint32_t)(EDI));
  /* 1008c45b push edi */
  push32((uint32_t)(EDI));
  /* 1008c45c push ebx */
  push32((uint32_t)(EBX));
  /* 1008c45d push 0x1008e554 */
  push32((uint32_t)(0x1008e554u));
  /* 1008c462 push esi */
  push32((uint32_t)(ESI));
  /* 1008c463 push edi */
  push32((uint32_t)(EDI));
  /* 1008c464 call dword ptr [0x1008e0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e0c4))), 0x1008c46au);
  /* 1008c46a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008c46c je 0x1008c594 */
  if (C.zf) goto L_1008c594;
  /* 1008c472 mov dword ptr [0x100968a8], 2 */
  w32((uint32_t)(0x100968a8), (0x2u));
L_1008c47c:;
  /* 1008c47c cmp dword ptr [ebp + 0x14], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x14))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008c47f jle 0x1008c491 */
  if ((C.zf||C.sf!=C.of)) goto L_1008c491;
  /* 1008c481 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1008c484 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1008c487 call 0x1008c62a */
  push32(0x1008c48cu); f_1008c62a();
  /* 1008c48c pop ecx */
  ECX = (pop32());
  /* 1008c48d pop ecx */
  ECX = (pop32());
  /* 1008c48e mov dword ptr [ebp + 0x14], eax */
  w32((uint32_t)(EBP + 0x14), (EAX));
L_1008c491:;
  /* 1008c491 mov eax, dword ptr [0x100968a8] */
  EAX = (r32((uint32_t)(0x100968a8)));
  /* 1008c496 cmp eax, 2 */
  { uint32_t _a=(EAX),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008c499 jne 0x1008c4b8 */
  if (!C.zf) goto L_1008c4b8;
  /* 1008c49b push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 1008c49e push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1008c4a1 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1008c4a4 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1008c4a7 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1008c4aa push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1008c4ad call dword ptr [0x1008e0c4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e0c4))), 0x1008c4b3u);
  /* 1008c4b3 jmp 0x1008c596 */
  goto L_1008c596;
L_1008c4b8:;
  /* 1008c4b8 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008c4bb jne 0x1008c594 */
  if (!C.zf) goto L_1008c594;
  /* 1008c4c1 cmp dword ptr [ebp + 0x20], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008c4c4 jne 0x1008c4ce */
  if (!C.zf) goto L_1008c4ce;
  /* 1008c4c6 mov eax, dword ptr [0x10096888] */
  EAX = (r32((uint32_t)(0x10096888)));
  /* 1008c4cb mov dword ptr [ebp + 0x20], eax */
  w32((uint32_t)(EBP + 0x20), (EAX));
L_1008c4ce:;
  /* 1008c4ce push edi */
  push32((uint32_t)(EDI));
  /* 1008c4cf push edi */
  push32((uint32_t)(EDI));
  /* 1008c4d0 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1008c4d3 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1008c4d6 mov eax, dword ptr [ebp + 0x24] */
  EAX = (r32((uint32_t)(EBP + 0x24)));
  /* 1008c4d9 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1008c4db sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008c4dd and eax, 8 */
  { uint32_t _r=(EAX)&(0x8u); EAX = (_r); fl_logic(_r,32); }
  /* 1008c4e0 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1008c4e1 push eax */
  push32((uint32_t)(EAX));
  /* 1008c4e2 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1008c4e5 call dword ptr [0x1008e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e0b8))), 0x1008c4ebu);
  /* 1008c4eb mov ebx, eax */
  EBX = (EAX);
  /* 1008c4ed mov dword ptr [ebp - 0x1c], ebx */
  w32((uint32_t)(EBP + -0x1c), (EBX));
  /* 1008c4f0 cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008c4f2 je 0x1008c594 */
  if (C.zf) goto L_1008c594;
  /* 1008c4f8 mov dword ptr [ebp - 4], edi */
  w32((uint32_t)(EBP + -0x4), (EDI));
  /* 1008c4fb lea eax, [ebx + ebx] */
  EAX = ((uint32_t)(EBX + EBX*1));
  /* 1008c4fe add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008c501 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1008c503 call 0x1008af10 */
  push32(0x1008c508u); f_1008af10();
  /* 1008c508 mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1008c50b mov eax, esp */
  EAX = (ESP);
  /* 1008c50d mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1008c510 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1008c514 jmp 0x1008c529 */
  goto L_1008c529;
  /* 1008c516 push 1 */
  push32((uint32_t)(0x1u));
  /* 1008c518 pop eax */
  EAX = (pop32());
  /* 1008c519 ret  */
  ESPCHK(0x1008c406u, _esp0);
  ESP += 4; return;
  /* 1008c51a mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1008c51d xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1008c51f mov dword ptr [ebp - 0x24], edi */
  w32((uint32_t)(EBP + -0x24), (EDI));
  /* 1008c522 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1008c526 mov ebx, dword ptr [ebp - 0x1c] */
  EBX = (r32((uint32_t)(EBP + -0x1c)));
L_1008c529:;
  /* 1008c529 cmp dword ptr [ebp - 0x24], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008c52c je 0x1008c594 */
  if (C.zf) goto L_1008c594;
  /* 1008c52e push ebx */
  push32((uint32_t)(EBX));
  /* 1008c52f push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1008c532 push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1008c535 push dword ptr [ebp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x10))));
  /* 1008c538 push 1 */
  push32((uint32_t)(0x1u));
  /* 1008c53a push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1008c53d call dword ptr [0x1008e0b8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e0b8))), 0x1008c543u);
  /* 1008c543 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008c545 je 0x1008c594 */
  if (C.zf) goto L_1008c594;
  /* 1008c547 push edi */
  push32((uint32_t)(EDI));
  /* 1008c548 push edi */
  push32((uint32_t)(EDI));
  /* 1008c549 push ebx */
  push32((uint32_t)(EBX));
  /* 1008c54a push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1008c54d push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1008c550 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1008c553 call dword ptr [0x1008e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e0c8))), 0x1008c559u);
  /* 1008c559 mov esi, eax */
  ESI = (EAX);
  /* 1008c55b mov dword ptr [ebp - 0x28], esi */
  w32((uint32_t)(EBP + -0x28), (ESI));
  /* 1008c55e cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008c560 je 0x1008c594 */
  if (C.zf) goto L_1008c594;
  /* 1008c562 test byte ptr [ebp + 0xd], 4 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xd)))&(0x4u); fl_logic(_r,8); }
  /* 1008c566 je 0x1008c5a8 */
  if (C.zf) goto L_1008c5a8;
  /* 1008c568 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008c56b je 0x1008c623 */
  if (C.zf) goto L_1008c623;
  /* 1008c571 cmp esi, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008c574 jg 0x1008c594 */
  if ((!C.zf&&C.sf==C.of)) goto L_1008c594;
  /* 1008c576 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 1008c579 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
  /* 1008c57c push ebx */
  push32((uint32_t)(EBX));
  /* 1008c57d push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1008c580 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1008c583 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1008c586 call dword ptr [0x1008e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e0c8))), 0x1008c58cu);
  /* 1008c58c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008c58e jne 0x1008c623 */
  if (!C.zf) goto L_1008c623;
L_1008c594:;
  /* 1008c594 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1008c596:;
  /* 1008c596 lea esp, [ebp - 0x38] */
  ESP = ((uint32_t)(EBP + -0x38));
  /* 1008c599 mov ecx, dword ptr [ebp - 0x10] */
  ECX = (r32((uint32_t)(EBP + -0x10)));
  /* 1008c59c mov dword ptr fs:[0], ecx */
  w32((uint32_t)(0x0), (ECX));
  /* 1008c5a3 pop edi */
  EDI = (pop32());
  /* 1008c5a4 pop esi */
  ESI = (pop32());
  /* 1008c5a5 pop ebx */
  EBX = (pop32());
  /* 1008c5a6 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1008c5a7 ret  */
  ESPCHK(0x1008c406u, _esp0);
  ESP += 4; return;
L_1008c5a8:;
  /* 1008c5a8 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1008c5af lea eax, [esi + esi] */
  EAX = ((uint32_t)(ESI + ESI*1));
  /* 1008c5b2 add eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008c5b5 and al, 0xfc */
  { uint32_t _r=(AL)&(0xfcu); AL = (_r); fl_logic(_r,8); }
  /* 1008c5b7 call 0x1008af10 */
  push32(0x1008c5bcu); f_1008af10();
  /* 1008c5bc mov dword ptr [ebp - 0x18], esp */
  w32((uint32_t)(EBP + -0x18), (ESP));
  /* 1008c5bf mov ebx, esp */
  EBX = (ESP);
  /* 1008c5c1 mov dword ptr [ebp - 0x20], ebx */
  w32((uint32_t)(EBP + -0x20), (EBX));
  /* 1008c5c4 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1008c5c8 jmp 0x1008c5dc */
  goto L_1008c5dc;
  /* 1008c5ca push 1 */
  push32((uint32_t)(0x1u));
  /* 1008c5cc pop eax */
  EAX = (pop32());
  /* 1008c5cd ret  */
  ESPCHK(0x1008c406u, _esp0);
  ESP += 4; return;
  /* 1008c5ce mov esp, dword ptr [ebp - 0x18] */
  ESP = (r32((uint32_t)(EBP + -0x18)));
  /* 1008c5d1 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
  /* 1008c5d3 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1008c5d5 or dword ptr [ebp - 4], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))|(0xffffffffu); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1008c5d9 mov esi, dword ptr [ebp - 0x28] */
  ESI = (r32((uint32_t)(EBP + -0x28)));
L_1008c5dc:;
  /* 1008c5dc cmp ebx, edi */
  { uint32_t _a=(EBX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008c5de je 0x1008c594 */
  if (C.zf) goto L_1008c594;
  /* 1008c5e0 push esi */
  push32((uint32_t)(ESI));
  /* 1008c5e1 push ebx */
  push32((uint32_t)(EBX));
  /* 1008c5e2 push dword ptr [ebp - 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x1c))));
  /* 1008c5e5 push dword ptr [ebp - 0x24] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x24))));
  /* 1008c5e8 push dword ptr [ebp + 0xc] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0xc))));
  /* 1008c5eb push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1008c5ee call dword ptr [0x1008e0c8] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e0c8))), 0x1008c5f4u);
  /* 1008c5f4 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008c5f6 je 0x1008c594 */
  if (C.zf) goto L_1008c594;
  /* 1008c5f8 cmp dword ptr [ebp + 0x1c], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x1c))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008c5fb push edi */
  push32((uint32_t)(EDI));
  /* 1008c5fc push edi */
  push32((uint32_t)(EDI));
  /* 1008c5fd jne 0x1008c603 */
  if (!C.zf) goto L_1008c603;
  /* 1008c5ff push edi */
  push32((uint32_t)(EDI));
  /* 1008c600 push edi */
  push32((uint32_t)(EDI));
  /* 1008c601 jmp 0x1008c609 */
  goto L_1008c609;
L_1008c603:;
  /* 1008c603 push dword ptr [ebp + 0x1c] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x1c))));
  /* 1008c606 push dword ptr [ebp + 0x18] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x18))));
L_1008c609:;
  /* 1008c609 push esi */
  push32((uint32_t)(ESI));
  /* 1008c60a push ebx */
  push32((uint32_t)(EBX));
  /* 1008c60b push 0x220 */
  push32((uint32_t)(0x220u));
  /* 1008c610 push dword ptr [ebp + 0x20] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x20))));
  /* 1008c613 call dword ptr [0x1008e060] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e060))), 0x1008c619u);
  /* 1008c619 mov esi, eax */
  ESI = (EAX);
  /* 1008c61b cmp esi, edi */
  { uint32_t _a=(ESI),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008c61d je 0x1008c594 */
  if (C.zf) goto L_1008c594;
L_1008c623:;
  /* 1008c623 mov eax, esi */
  EAX = (ESI);
  /* 1008c625 jmp 0x1008c596 */
  goto L_1008c596;
}

/* FUN_1000c62a @ 0x1008c62a (43 bytes, 20 insns) */
void f_1008c62a(void) {
  FTRACE(0x1008c62au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008c62a mov edx, dword ptr [esp + 8] */
  EDX = (r32((uint32_t)(ESP + 0x8)));
  /* 1008c62e mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1008c632 test edx, edx */
  { uint32_t _r=(EDX)&(EDX); fl_logic(_r,32); }
  /* 1008c634 push esi */
  push32((uint32_t)(ESI));
  /* 1008c635 lea ecx, [edx - 1] */
  ECX = ((uint32_t)(EDX + -0x1));
  /* 1008c638 je 0x1008c647 */
  if (C.zf) goto L_1008c647;
L_1008c63a:;
  /* 1008c63a cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008c63d je 0x1008c647 */
  if (C.zf) goto L_1008c647;
  /* 1008c63f inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1008c640 mov esi, ecx */
  ESI = (ECX);
  /* 1008c642 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1008c643 test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1008c645 jne 0x1008c63a */
  if (!C.zf) goto L_1008c63a;
L_1008c647:;
  /* 1008c647 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008c64a pop esi */
  ESI = (pop32());
  /* 1008c64b jne 0x1008c652 */
  if (!C.zf) goto L_1008c652;
  /* 1008c64d sub eax, dword ptr [esp + 4] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(ESP + 0x4))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008c651 ret  */
  ESPCHK(0x1008c62au, _esp0);
  ESP += 4; return;
L_1008c652:;
  /* 1008c652 mov eax, edx */
  EAX = (EDX);
  /* 1008c654 ret  */
  ESPCHK(0x1008c62au, _esp0);
  ESP += 4; return;
}

/* FUN_1000c655 @ 0x1008c655 (33 bytes, 15 insns) */
void f_1008c655(void) {
  FTRACE(0x1008c655u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008c655 mov edx, dword ptr [esp + 4] */
  EDX = (r32((uint32_t)(ESP + 0x4)));
  /* 1008c659 push esi */
  push32((uint32_t)(ESI));
  /* 1008c65a mov esi, dword ptr [esp + 0xc] */
  ESI = (r32((uint32_t)(ESP + 0xc)));
  /* 1008c65e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1008c660 lea ecx, [edx + esi] */
  ECX = ((uint32_t)(EDX + ESI*1));
  /* 1008c663 cmp ecx, edx */
  { uint32_t _a=(ECX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008c665 jb 0x1008c66b */
  if (C.cf) goto L_1008c66b;
  /* 1008c667 cmp ecx, esi */
  { uint32_t _a=(ECX),_b=(ESI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008c669 jae 0x1008c66e */
  if (!C.cf) goto L_1008c66e;
L_1008c66b:;
  /* 1008c66b push 1 */
  push32((uint32_t)(0x1u));
  /* 1008c66d pop eax */
  EAX = (pop32());
L_1008c66e:;
  /* 1008c66e mov edx, dword ptr [esp + 0x10] */
  EDX = (r32((uint32_t)(ESP + 0x10)));
  /* 1008c672 pop esi */
  ESI = (pop32());
  /* 1008c673 mov dword ptr [edx], ecx */
  w32((uint32_t)(EDX), (ECX));
  /* 1008c675 ret  */
  ESPCHK(0x1008c655u, _esp0);
  ESP += 4; return;
}

/* ___add_12 @ 0x1008c676 (94 bytes, 38 insns) */
void f_1008c676(void) {
  FTRACE(0x1008c676u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008c676 push esi */
  push32((uint32_t)(ESI));
  /* 1008c677 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1008c67b push edi */
  push32((uint32_t)(EDI));
  /* 1008c67c mov edi, dword ptr [esp + 0x10] */
  EDI = (r32((uint32_t)(ESP + 0x10)));
  /* 1008c680 push esi */
  push32((uint32_t)(ESI));
  /* 1008c681 push dword ptr [edi] */
  push32((uint32_t)(r32((uint32_t)(EDI))));
  /* 1008c683 push dword ptr [esi] */
  push32((uint32_t)(r32((uint32_t)(ESI))));
  /* 1008c685 call 0x1008c655 */
  push32(0x1008c68au); f_1008c655();
  /* 1008c68a add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008c68d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008c68f je 0x1008c6a8 */
  if (C.zf) goto L_1008c6a8;
  /* 1008c691 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 1008c694 push eax */
  push32((uint32_t)(EAX));
  /* 1008c695 push 1 */
  push32((uint32_t)(0x1u));
  /* 1008c697 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 1008c699 call 0x1008c655 */
  push32(0x1008c69eu); f_1008c655();
  /* 1008c69e add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008c6a1 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008c6a3 je 0x1008c6a8 */
  if (C.zf) goto L_1008c6a8;
  /* 1008c6a5 inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_1008c6a8:;
  /* 1008c6a8 lea eax, [esi + 4] */
  EAX = ((uint32_t)(ESI + 0x4));
  /* 1008c6ab push eax */
  push32((uint32_t)(EAX));
  /* 1008c6ac push dword ptr [edi + 4] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x4))));
  /* 1008c6af push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 1008c6b1 call 0x1008c655 */
  push32(0x1008c6b6u); f_1008c655();
  /* 1008c6b6 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008c6b9 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008c6bb je 0x1008c6c0 */
  if (C.zf) goto L_1008c6c0;
  /* 1008c6bd inc dword ptr [esi + 8] */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))+1; w32((uint32_t)(ESI + 0x8), (_r)); fl_inc(_r,32); }
L_1008c6c0:;
  /* 1008c6c0 lea eax, [esi + 8] */
  EAX = ((uint32_t)(ESI + 0x8));
  /* 1008c6c3 push eax */
  push32((uint32_t)(EAX));
  /* 1008c6c4 push dword ptr [edi + 8] */
  push32((uint32_t)(r32((uint32_t)(EDI + 0x8))));
  /* 1008c6c7 push dword ptr [eax] */
  push32((uint32_t)(r32((uint32_t)(EAX))));
  /* 1008c6c9 call 0x1008c655 */
  push32(0x1008c6ceu); f_1008c655();
  /* 1008c6ce add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008c6d1 pop edi */
  EDI = (pop32());
  /* 1008c6d2 pop esi */
  ESI = (pop32());
  /* 1008c6d3 ret  */
  ESPCHK(0x1008c676u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c6d4 @ 0x1008c6d4 (46 bytes, 21 insns) */
void f_1008c6d4(void) {
  FTRACE(0x1008c6d4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008c6d4 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1008c6d8 push esi */
  push32((uint32_t)(ESI));
  /* 1008c6d9 push edi */
  push32((uint32_t)(EDI));
  /* 1008c6da mov esi, dword ptr [eax] */
  ESI = (r32((uint32_t)(EAX)));
  /* 1008c6dc mov edi, dword ptr [eax + 4] */
  EDI = (r32((uint32_t)(EAX + 0x4)));
  /* 1008c6df mov ecx, esi */
  ECX = (ESI);
  /* 1008c6e1 add esi, esi */
  { uint32_t _a=(ESI),_b=(ESI),_r=_a+_b; ESI = (_r); fl_add(_a,_b,_r,32); }
  /* 1008c6e3 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
  /* 1008c6e5 lea esi, [edi + edi] */
  ESI = ((uint32_t)(EDI + EDI*1));
  /* 1008c6e8 shr ecx, 0x1f */
  ECX = (sh_shr((uint32_t)(ECX), (0x1fu)&0x1f, 32));
  /* 1008c6eb or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 1008c6ed mov ecx, dword ptr [eax + 8] */
  ECX = (r32((uint32_t)(EAX + 0x8)));
  /* 1008c6f0 mov edx, edi */
  EDX = (EDI);
  /* 1008c6f2 mov dword ptr [eax + 4], esi */
  w32((uint32_t)(EAX + 0x4), (ESI));
  /* 1008c6f5 shr edx, 0x1f */
  EDX = (sh_shr((uint32_t)(EDX), (0x1fu)&0x1f, 32));
  /* 1008c6f8 shl ecx, 1 */
  ECX = (sh_shl((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1008c6fa or ecx, edx */
  { uint32_t _r=(ECX)|(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1008c6fc pop edi */
  EDI = (pop32());
  /* 1008c6fd mov dword ptr [eax + 8], ecx */
  w32((uint32_t)(EAX + 0x8), (ECX));
  /* 1008c700 pop esi */
  ESI = (pop32());
  /* 1008c701 ret  */
  ESPCHK(0x1008c6d4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c702 @ 0x1008c702 (45 bytes, 21 insns) */
void f_1008c702(void) {
  FTRACE(0x1008c702u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008c702 mov eax, dword ptr [esp + 4] */
  EAX = (r32((uint32_t)(ESP + 0x4)));
  /* 1008c706 push esi */
  push32((uint32_t)(ESI));
  /* 1008c707 push edi */
  push32((uint32_t)(EDI));
  /* 1008c708 mov edx, dword ptr [eax + 8] */
  EDX = (r32((uint32_t)(EAX + 0x8)));
  /* 1008c70b mov ecx, dword ptr [eax + 4] */
  ECX = (r32((uint32_t)(EAX + 0x4)));
  /* 1008c70e mov esi, edx */
  ESI = (EDX);
  /* 1008c710 mov edi, ecx */
  EDI = (ECX);
  /* 1008c712 shl esi, 0x1f */
  ESI = (sh_shl((uint32_t)(ESI), (0x1fu)&0x1f, 32));
  /* 1008c715 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1008c717 or ecx, esi */
  { uint32_t _r=(ECX)|(ESI); ECX = (_r); fl_logic(_r,32); }
  /* 1008c719 mov dword ptr [eax + 4], ecx */
  w32((uint32_t)(EAX + 0x4), (ECX));
  /* 1008c71c mov ecx, dword ptr [eax] */
  ECX = (r32((uint32_t)(EAX)));
  /* 1008c71e shl edi, 0x1f */
  EDI = (sh_shl((uint32_t)(EDI), (0x1fu)&0x1f, 32));
  /* 1008c721 shr ecx, 1 */
  ECX = (sh_shr((uint32_t)(ECX), (0x1u)&0x1f, 32));
  /* 1008c723 shr edx, 1 */
  EDX = (sh_shr((uint32_t)(EDX), (0x1u)&0x1f, 32));
  /* 1008c725 or ecx, edi */
  { uint32_t _r=(ECX)|(EDI); ECX = (_r); fl_logic(_r,32); }
  /* 1008c727 pop edi */
  EDI = (pop32());
  /* 1008c728 mov dword ptr [eax + 8], edx */
  w32((uint32_t)(EAX + 0x8), (EDX));
  /* 1008c72b mov dword ptr [eax], ecx */
  w32((uint32_t)(EAX), (ECX));
  /* 1008c72d pop esi */
  ESI = (pop32());
  /* 1008c72e ret  */
  ESPCHK(0x1008c702u, _esp0);
  ESP += 4; return;
}

/* FUN_1000c72f @ 0x1008c72f (199 bytes, 76 insns) */
void f_1008c72f(void) {
  FTRACE(0x1008c72fu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008c72f push ebp */
  push32((uint32_t)(EBP));
  /* 1008c730 mov ebp, esp */
  EBP = (ESP);
  /* 1008c732 sub esp, 0x10 */
  { uint32_t _a=(ESP),_b=(0x10u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008c735 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1008c738 push ebx */
  push32((uint32_t)(EBX));
  /* 1008c739 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 1008c73c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1008c73e cmp eax, edx */
  { uint32_t _a=(EAX),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008c740 push esi */
  push32((uint32_t)(ESI));
  /* 1008c741 mov dword ptr [ebp - 4], 0x404e */
  w32((uint32_t)(EBP + -0x4), (0x404eu));
  /* 1008c748 mov dword ptr [ebx], edx */
  w32((uint32_t)(EBX), (EDX));
  /* 1008c74a mov dword ptr [ebx + 4], edx */
  w32((uint32_t)(EBX + 0x4), (EDX));
  /* 1008c74d mov dword ptr [ebx + 8], edx */
  w32((uint32_t)(EBX + 0x8), (EDX));
  /* 1008c750 jbe 0x1008c7a3 */
  if ((C.cf||C.zf)) goto L_1008c7a3;
  /* 1008c752 push edi */
  push32((uint32_t)(EDI));
  /* 1008c753 mov dword ptr [ebp + 0x10], eax */
  w32((uint32_t)(EBP + 0x10), (EAX));
L_1008c756:;
  /* 1008c756 mov esi, ebx */
  ESI = (EBX);
  /* 1008c758 lea edi, [ebp - 0x10] */
  EDI = ((uint32_t)(EBP + -0x10));
  /* 1008c75b movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1008c75c movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1008c75d push ebx */
  push32((uint32_t)(EBX));
  /* 1008c75e movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1008c75f call 0x1008c6d4 */
  push32(0x1008c764u); f_1008c6d4();
  /* 1008c764 push ebx */
  push32((uint32_t)(EBX));
  /* 1008c765 call 0x1008c6d4 */
  push32(0x1008c76au); f_1008c6d4();
  /* 1008c76a lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1008c76d push eax */
  push32((uint32_t)(EAX));
  /* 1008c76e push ebx */
  push32((uint32_t)(EBX));
  /* 1008c76f call 0x1008c676 */
  push32(0x1008c774u); f_1008c676();
  /* 1008c774 push ebx */
  push32((uint32_t)(EBX));
  /* 1008c775 call 0x1008c6d4 */
  push32(0x1008c77au); f_1008c6d4();
  /* 1008c77a mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1008c77d and dword ptr [ebp - 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))&(0x0u); w32((uint32_t)(EBP + -0xc), (_r)); fl_logic(_r,32); }
  /* 1008c781 and dword ptr [ebp - 8], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))&(0x0u); w32((uint32_t)(EBP + -0x8), (_r)); fl_logic(_r,32); }
  /* 1008c785 movsx eax, byte ptr [eax] */
  EAX = ((uint32_t)(int32_t)(int8_t)(r8((uint32_t)(EAX))));
  /* 1008c788 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1008c78b lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1008c78e push eax */
  push32((uint32_t)(EAX));
  /* 1008c78f push ebx */
  push32((uint32_t)(EBX));
  /* 1008c790 call 0x1008c676 */
  push32(0x1008c795u); f_1008c676();
  /* 1008c795 add esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008c798 inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 1008c79b dec dword ptr [ebp + 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x10)))-1; w32((uint32_t)(EBP + 0x10), (_r)); fl_dec(_r,32); }
  /* 1008c79e jne 0x1008c756 */
  if (!C.zf) goto L_1008c756;
  /* 1008c7a0 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1008c7a2 pop edi */
  EDI = (pop32());
L_1008c7a3:;
  /* 1008c7a3 cmp dword ptr [ebx + 8], edx */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x8))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008c7a6 jne 0x1008c7d0 */
  if (!C.zf) goto L_1008c7d0;
  /* 1008c7a8 mov ecx, dword ptr [ebx + 4] */
  ECX = (r32((uint32_t)(EBX + 0x4)));
  /* 1008c7ab mov eax, ecx */
  EAX = (ECX);
  /* 1008c7ad shr eax, 0x10 */
  EAX = (sh_shr((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1008c7b0 mov dword ptr [ebx + 8], eax */
  w32((uint32_t)(EBX + 0x8), (EAX));
  /* 1008c7b3 mov eax, dword ptr [ebx] */
  EAX = (r32((uint32_t)(EBX)));
  /* 1008c7b5 mov esi, eax */
  ESI = (EAX);
  /* 1008c7b7 shr esi, 0x10 */
  ESI = (sh_shr((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 1008c7ba shl ecx, 0x10 */
  ECX = (sh_shl((uint32_t)(ECX), (0x10u)&0x1f, 32));
  /* 1008c7bd or esi, ecx */
  { uint32_t _r=(ESI)|(ECX); ESI = (_r); fl_logic(_r,32); }
  /* 1008c7bf shl eax, 0x10 */
  EAX = (sh_shl((uint32_t)(EAX), (0x10u)&0x1f, 32));
  /* 1008c7c2 add dword ptr [ebp - 4], 0xfff0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xfff0u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1008c7c9 mov dword ptr [ebx + 4], esi */
  w32((uint32_t)(EBX + 0x4), (ESI));
  /* 1008c7cc mov dword ptr [ebx], eax */
  w32((uint32_t)(EBX), (EAX));
  /* 1008c7ce jmp 0x1008c7a3 */
  goto L_1008c7a3;
L_1008c7d0:;
  /* 1008c7d0 mov esi, 0x8000 */
  ESI = (0x8000u);
L_1008c7d5:;
  /* 1008c7d5 test dword ptr [ebx + 8], esi */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(ESI); fl_logic(_r,32); }
  /* 1008c7d8 jne 0x1008c7ea */
  if (!C.zf) goto L_1008c7ea;
  /* 1008c7da push ebx */
  push32((uint32_t)(EBX));
  /* 1008c7db call 0x1008c6d4 */
  push32(0x1008c7e0u); f_1008c6d4();
  /* 1008c7e0 add dword ptr [ebp - 4], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1008c7e7 pop ecx */
  ECX = (pop32());
  /* 1008c7e8 jmp 0x1008c7d5 */
  goto L_1008c7d5;
L_1008c7ea:;
  /* 1008c7ea mov ax, word ptr [ebp - 4] */
  AX = (r16((uint32_t)(EBP + -0x4)));
  /* 1008c7ee pop esi */
  ESI = (pop32());
  /* 1008c7ef mov word ptr [ebx + 0xa], ax */
  w16((uint32_t)(EBX + 0xa), (AX));
  /* 1008c7f3 pop ebx */
  EBX = (pop32());
  /* 1008c7f4 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1008c7f5 ret  */
  ESPCHK(0x1008c72fu, _esp0);
  ESP += 4; return;
}

/* FUN_1000c7f6 @ 0x1008c7f6 (1185 bytes, 417 insns) [1 switch table(s)] */
void f_1008c7f6(void) {
  FTRACE(0x1008c7f6u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008c7f6 push ebp */
  push32((uint32_t)(EBP));
  /* 1008c7f7 mov ebp, esp */
  EBP = (ESP);
  /* 1008c7f9 sub esp, 0x5c */
  { uint32_t _a=(ESP),_b=(0x5cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008c7fc push ebx */
  push32((uint32_t)(EBX));
  /* 1008c7fd push esi */
  push32((uint32_t)(ESI));
  /* 1008c7fe push edi */
  push32((uint32_t)(EDI));
  /* 1008c7ff mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 1008c802 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 1008c805 push 1 */
  push32((uint32_t)(0x1u));
  /* 1008c807 mov dword ptr [ebp - 0xc], eax */
  w32((uint32_t)(EBP + -0xc), (EAX));
  /* 1008c80a xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1008c80c pop edx */
  EDX = (pop32());
  /* 1008c80d mov dword ptr [ebp - 0x28], eax */
  w32((uint32_t)(EBP + -0x28), (EAX));
  /* 1008c810 mov dword ptr [ebp - 0x18], edx */
  w32((uint32_t)(EBP + -0x18), (EDX));
  /* 1008c813 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1008c816 mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1008c819 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1008c81c mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1008c81f mov dword ptr [ebp - 0x2c], eax */
  w32((uint32_t)(EBP + -0x2c), (EAX));
  /* 1008c822 mov dword ptr [ebp - 0x30], eax */
  w32((uint32_t)(EBP + -0x30), (EAX));
  /* 1008c825 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1008c828 mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1008c82b mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1008c82e mov dword ptr [ebp + 0x10], edi */
  w32((uint32_t)(EBP + 0x10), (EDI));
L_1008c831:;
  /* 1008c831 mov cl, byte ptr [edi] */
  CL = (r8((uint32_t)(EDI)));
  /* 1008c833 cmp cl, 0x20 */
  { uint32_t _a=(CL),_b=(0x20u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008c836 je 0x1008c847 */
  if (C.zf) goto L_1008c847;
  /* 1008c838 cmp cl, 9 */
  { uint32_t _a=(CL),_b=(0x9u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008c83b je 0x1008c847 */
  if (C.zf) goto L_1008c847;
  /* 1008c83d cmp cl, 0xa */
  { uint32_t _a=(CL),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008c840 je 0x1008c847 */
  if (C.zf) goto L_1008c847;
  /* 1008c842 cmp cl, 0xd */
  { uint32_t _a=(CL),_b=(0xdu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008c845 jne 0x1008c84a */
  if (!C.zf) goto L_1008c84a;
L_1008c847:;
  /* 1008c847 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1008c848 jmp 0x1008c831 */
  goto L_1008c831;
L_1008c84a:;
  /* 1008c84a push 4 */
  push32((uint32_t)(0x4u));
  /* 1008c84c pop esi */
  ESI = (pop32());
L_1008c84d:;
  /* 1008c84d mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1008c84f inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1008c850 cmp eax, 0xb */
  { uint32_t _a=(EAX),_b=(0xbu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008c853 ja 0x1008cad0 */
  if ((!C.cf&&!C.zf)) goto L_1008cad0;
  /* 1008c859 jmp dword ptr [eax*4 + 0x1008cc97] */
  switch (EAX) {
    case 0: goto L_1008c860;
    case 1: goto L_1008c8af;
    case 2: goto L_1008c906;
    case 3: goto L_1008c930;
    case 4: goto L_1008c98b;
    case 5: goto L_1008ca02;
    case 6: goto L_1008ca38;
    case 7: goto L_1008ca82;
    case 8: goto L_1008ca61;
    case 9: goto L_1008cae6;
    case 10: goto L_1008cad0;
    case 11: goto L_1008ca9c;
    default: x86_unimpl("switch@0x1008c859 out of table"); return;
  }
L_1008c860:;
  /* 1008c860 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008c863 jl 0x1008c871 */
  if ((C.sf!=C.of)) goto L_1008c871;
  /* 1008c865 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008c868 jg 0x1008c871 */
  if ((!C.zf&&C.sf==C.of)) goto L_1008c871;
L_1008c86a:;
  /* 1008c86a push 3 */
  push32((uint32_t)(0x3u));
  /* 1008c86c jmp 0x1008ca8e */
  goto L_1008ca8e;
L_1008c871:;
  /* 1008c871 cmp bl, byte ptr [0x10090c24] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10090c24))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008c877 jne 0x1008c880 */
  if (!C.zf) goto L_1008c880;
L_1008c879:;
  /* 1008c879 push 5 */
  push32((uint32_t)(0x5u));
  /* 1008c87b jmp 0x1008cac6 */
  goto L_1008cac6;
L_1008c880:;
  /* 1008c880 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1008c883 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008c886 je 0x1008c8a6 */
  if (C.zf) goto L_1008c8a6;
  /* 1008c888 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1008c889 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1008c88a je 0x1008c89a */
  if (C.zf) goto L_1008c89a;
  /* 1008c88c sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008c88f jne 0x1008cb69 */
  if (!C.zf) goto L_1008cb69;
  /* 1008c895 jmp 0x1008c929 */
  goto L_1008c929;
L_1008c89a:;
  /* 1008c89a push 2 */
  push32((uint32_t)(0x2u));
  /* 1008c89c mov dword ptr [ebp - 0x28], 0x8000 */
  w32((uint32_t)(EBP + -0x28), (0x8000u));
  /* 1008c8a3 pop eax */
  EAX = (pop32());
  /* 1008c8a4 jmp 0x1008c84d */
  goto L_1008c84d;
L_1008c8a6:;
  /* 1008c8a6 and dword ptr [ebp - 0x28], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x28)))&(0x0u); w32((uint32_t)(EBP + -0x28), (_r)); fl_logic(_r,32); }
  /* 1008c8aa push 2 */
  push32((uint32_t)(0x2u));
  /* 1008c8ac pop eax */
  EAX = (pop32());
  /* 1008c8ad jmp 0x1008c84d */
  goto L_1008c84d;
L_1008c8af:;
  /* 1008c8af cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008c8b2 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1008c8b5 jl 0x1008c8bc */
  if ((C.sf!=C.of)) goto L_1008c8bc;
  /* 1008c8b7 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008c8ba jle 0x1008c86a */
  if ((C.zf||C.sf!=C.of)) goto L_1008c86a;
L_1008c8bc:;
  /* 1008c8bc cmp bl, byte ptr [0x10090c24] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10090c24))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008c8c2 je 0x1008c984 */
  if (C.zf) goto L_1008c984;
  /* 1008c8c8 cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008c8cb je 0x1008c8fe */
  if (C.zf) goto L_1008c8fe;
  /* 1008c8cd cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008c8d0 je 0x1008c8fe */
  if (C.zf) goto L_1008c8fe;
  /* 1008c8d2 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008c8d5 je 0x1008c929 */
  if (C.zf) goto L_1008c929;
L_1008c8d7:;
  /* 1008c8d7 cmp bl, 0x43 */
  { uint32_t _a=(BL),_b=(0x43u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008c8da jle 0x1008cb69 */
  if ((C.zf||C.sf!=C.of)) goto L_1008cb69;
  /* 1008c8e0 cmp bl, 0x45 */
  { uint32_t _a=(BL),_b=(0x45u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008c8e3 jle 0x1008c8f7 */
  if ((C.zf||C.sf!=C.of)) goto L_1008c8f7;
  /* 1008c8e5 cmp bl, 0x63 */
  { uint32_t _a=(BL),_b=(0x63u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008c8e8 jle 0x1008cb69 */
  if ((C.zf||C.sf!=C.of)) goto L_1008cb69;
  /* 1008c8ee cmp bl, 0x65 */
  { uint32_t _a=(BL),_b=(0x65u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008c8f1 jg 0x1008cb69 */
  if ((!C.zf&&C.sf==C.of)) goto L_1008cb69;
L_1008c8f7:;
  /* 1008c8f7 push 6 */
  push32((uint32_t)(0x6u));
  /* 1008c8f9 jmp 0x1008cac6 */
  goto L_1008cac6;
L_1008c8fe:;
  /* 1008c8fe dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1008c8ff push 0xb */
  push32((uint32_t)(0xbu));
  /* 1008c901 jmp 0x1008cac6 */
  goto L_1008cac6;
L_1008c906:;
  /* 1008c906 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008c909 jl 0x1008c914 */
  if ((C.sf!=C.of)) goto L_1008c914;
  /* 1008c90b cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008c90e jle 0x1008c86a */
  if ((C.zf||C.sf!=C.of)) goto L_1008c86a;
L_1008c914:;
  /* 1008c914 cmp bl, byte ptr [0x10090c24] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10090c24))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008c91a je 0x1008c879 */
  if (C.zf) goto L_1008c879;
  /* 1008c920 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008c923 jne 0x1008cade */
  if (!C.zf) goto L_1008cade;
L_1008c929:;
  /* 1008c929 mov eax, edx */
  EAX = (EDX);
  /* 1008c92b jmp 0x1008c84d */
  goto L_1008c84d;
L_1008c930:;
  /* 1008c930 mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
L_1008c933:;
  /* 1008c933 cmp dword ptr [0x10090c20], edx */
  { uint32_t _a=(r32((uint32_t)(0x10090c20))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008c939 jle 0x1008c94c */
  if ((C.zf||C.sf!=C.of)) goto L_1008c94c;
  /* 1008c93b movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1008c93e push esi */
  push32((uint32_t)(ESI));
  /* 1008c93f push eax */
  push32((uint32_t)(EAX));
  /* 1008c940 call 0x1008940b */
  push32(0x1008c945u); f_1008940b();
  /* 1008c945 pop ecx */
  ECX = (pop32());
  /* 1008c946 pop ecx */
  ECX = (pop32());
  /* 1008c947 push 1 */
  push32((uint32_t)(0x1u));
  /* 1008c949 pop edx */
  EDX = (pop32());
  /* 1008c94a jmp 0x1008c95a */
  goto L_1008c95a;
L_1008c94c:;
  /* 1008c94c mov ecx, dword ptr [0x10090a10] */
  ECX = (r32((uint32_t)(0x10090a10)));
  /* 1008c952 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1008c955 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1008c958 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_1008c95a:;
  /* 1008c95a test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008c95c je 0x1008c97c */
  if (C.zf) goto L_1008c97c;
  /* 1008c95e cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008c962 jae 0x1008c974 */
  if (!C.cf) goto L_1008c974;
  /* 1008c964 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1008c967 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1008c96a sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1008c96d inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 1008c970 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
  /* 1008c972 jmp 0x1008c977 */
  goto L_1008c977;
L_1008c974:;
  /* 1008c974 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
L_1008c977:;
  /* 1008c977 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1008c979 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1008c97a jmp 0x1008c933 */
  goto L_1008c933;
L_1008c97c:;
  /* 1008c97c cmp bl, byte ptr [0x10090c24] */
  { uint32_t _a=(BL),_b=(r8((uint32_t)(0x10090c24))),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008c982 jne 0x1008c9eb */
  if (!C.zf) goto L_1008c9eb;
L_1008c984:;
  /* 1008c984 mov eax, esi */
  EAX = (ESI);
  /* 1008c986 jmp 0x1008c84d */
  goto L_1008c84d;
L_1008c98b:;
  /* 1008c98b cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008c98f mov dword ptr [ebp - 0x10], edx */
  w32((uint32_t)(EBP + -0x10), (EDX));
  /* 1008c992 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1008c995 jne 0x1008c9a4 */
  if (!C.zf) goto L_1008c9a4;
L_1008c997:;
  /* 1008c997 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008c99a jne 0x1008c9a4 */
  if (!C.zf) goto L_1008c9a4;
  /* 1008c99c dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 1008c99f mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1008c9a1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1008c9a2 jmp 0x1008c997 */
  goto L_1008c997;
L_1008c9a4:;
  /* 1008c9a4 cmp dword ptr [0x10090c20], edx */
  { uint32_t _a=(r32((uint32_t)(0x10090c20))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008c9aa jle 0x1008c9bd */
  if ((C.zf||C.sf!=C.of)) goto L_1008c9bd;
  /* 1008c9ac movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1008c9af push esi */
  push32((uint32_t)(ESI));
  /* 1008c9b0 push eax */
  push32((uint32_t)(EAX));
  /* 1008c9b1 call 0x1008940b */
  push32(0x1008c9b6u); f_1008940b();
  /* 1008c9b6 pop ecx */
  ECX = (pop32());
  /* 1008c9b7 pop ecx */
  ECX = (pop32());
  /* 1008c9b8 push 1 */
  push32((uint32_t)(0x1u));
  /* 1008c9ba pop edx */
  EDX = (pop32());
  /* 1008c9bb jmp 0x1008c9cb */
  goto L_1008c9cb;
L_1008c9bd:;
  /* 1008c9bd mov ecx, dword ptr [0x10090a10] */
  ECX = (r32((uint32_t)(0x10090a10)));
  /* 1008c9c3 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1008c9c6 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1008c9c9 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_1008c9cb:;
  /* 1008c9cb test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008c9cd je 0x1008c9eb */
  if (C.zf) goto L_1008c9eb;
  /* 1008c9cf cmp dword ptr [ebp - 4], 0x19 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x19u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008c9d3 jae 0x1008c9e6 */
  if (!C.cf) goto L_1008c9e6;
  /* 1008c9d5 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1008c9d8 inc dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))+1; w32((uint32_t)(EBP + -0x4), (_r)); fl_inc(_r,32); }
  /* 1008c9db sub bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; BL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1008c9de inc dword ptr [ebp - 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xc)))+1; w32((uint32_t)(EBP + -0xc), (_r)); fl_inc(_r,32); }
  /* 1008c9e1 dec dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))-1; w32((uint32_t)(EBP + -0x8), (_r)); fl_dec(_r,32); }
  /* 1008c9e4 mov byte ptr [eax], bl */
  w8((uint32_t)(EAX), (BL));
L_1008c9e6:;
  /* 1008c9e6 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1008c9e8 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1008c9e9 jmp 0x1008c9a4 */
  goto L_1008c9a4;
L_1008c9eb:;
  /* 1008c9eb cmp bl, 0x2b */
  { uint32_t _a=(BL),_b=(0x2bu),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008c9ee je 0x1008c8fe */
  if (C.zf) goto L_1008c8fe;
  /* 1008c9f4 cmp bl, 0x2d */
  { uint32_t _a=(BL),_b=(0x2du),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008c9f7 je 0x1008c8fe */
  if (C.zf) goto L_1008c8fe;
  /* 1008c9fd jmp 0x1008c8d7 */
  goto L_1008c8d7;
L_1008ca02:;
  /* 1008ca02 cmp dword ptr [0x10090c20], edx */
  { uint32_t _a=(r32((uint32_t)(0x10090c20))),_b=(EDX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008ca08 mov dword ptr [ebp - 0x24], edx */
  w32((uint32_t)(EBP + -0x24), (EDX));
  /* 1008ca0b jle 0x1008ca1e */
  if ((C.zf||C.sf!=C.of)) goto L_1008ca1e;
  /* 1008ca0d movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1008ca10 push esi */
  push32((uint32_t)(ESI));
  /* 1008ca11 push eax */
  push32((uint32_t)(EAX));
  /* 1008ca12 call 0x1008940b */
  push32(0x1008ca17u); f_1008940b();
  /* 1008ca17 pop ecx */
  ECX = (pop32());
  /* 1008ca18 pop ecx */
  ECX = (pop32());
  /* 1008ca19 push 1 */
  push32((uint32_t)(0x1u));
  /* 1008ca1b pop edx */
  EDX = (pop32());
  /* 1008ca1c jmp 0x1008ca2c */
  goto L_1008ca2c;
L_1008ca1e:;
  /* 1008ca1e mov ecx, dword ptr [0x10090a10] */
  ECX = (r32((uint32_t)(0x10090a10)));
  /* 1008ca24 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1008ca27 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1008ca2a and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
L_1008ca2c:;
  /* 1008ca2c test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008ca2e je 0x1008cade */
  if (C.zf) goto L_1008cade;
  /* 1008ca34 mov eax, esi */
  EAX = (ESI);
  /* 1008ca36 jmp 0x1008ca8f */
  goto L_1008ca8f;
L_1008ca38:;
  /* 1008ca38 lea ecx, [edi - 2] */
  ECX = ((uint32_t)(EDI + -0x2));
  /* 1008ca3b cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008ca3e mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1008ca41 jl 0x1008ca48 */
  if ((C.sf!=C.of)) goto L_1008ca48;
  /* 1008ca43 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008ca46 jle 0x1008ca8c */
  if ((C.zf||C.sf!=C.of)) goto L_1008ca8c;
L_1008ca48:;
  /* 1008ca48 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1008ca4b sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008ca4e je 0x1008cac4 */
  if (C.zf) goto L_1008cac4;
  /* 1008ca50 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1008ca51 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1008ca52 je 0x1008cab8 */
  if (C.zf) goto L_1008cab8;
  /* 1008ca54 sub eax, 3 */
  { uint32_t _a=(EAX),_b=(0x3u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008ca57 jne 0x1008cb6c */
  if (!C.zf) goto L_1008cb6c;
L_1008ca5d:;
  /* 1008ca5d push 8 */
  push32((uint32_t)(0x8u));
  /* 1008ca5f jmp 0x1008cac6 */
  goto L_1008cac6;
L_1008ca61:;
  /* 1008ca61 mov dword ptr [ebp - 0x20], edx */
  w32((uint32_t)(EBP + -0x20), (EDX));
L_1008ca64:;
  /* 1008ca64 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008ca67 jne 0x1008ca6e */
  if (!C.zf) goto L_1008ca6e;
  /* 1008ca69 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1008ca6b inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1008ca6c jmp 0x1008ca64 */
  goto L_1008ca64;
L_1008ca6e:;
  /* 1008ca6e cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008ca71 jl 0x1008cb69 */
  if ((C.sf!=C.of)) goto L_1008cb69;
  /* 1008ca77 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008ca7a jg 0x1008cb69 */
  if ((!C.zf&&C.sf==C.of)) goto L_1008cb69;
  /* 1008ca80 jmp 0x1008ca8c */
  goto L_1008ca8c;
L_1008ca82:;
  /* 1008ca82 cmp bl, 0x31 */
  { uint32_t _a=(BL),_b=(0x31u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008ca85 jl 0x1008ca95 */
  if ((C.sf!=C.of)) goto L_1008ca95;
  /* 1008ca87 cmp bl, 0x39 */
  { uint32_t _a=(BL),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008ca8a jg 0x1008ca95 */
  if ((!C.zf&&C.sf==C.of)) goto L_1008ca95;
L_1008ca8c:;
  /* 1008ca8c push 9 */
  push32((uint32_t)(0x9u));
L_1008ca8e:;
  /* 1008ca8e pop eax */
  EAX = (pop32());
L_1008ca8f:;
  /* 1008ca8f dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1008ca90 jmp 0x1008c84d */
  goto L_1008c84d;
L_1008ca95:;
  /* 1008ca95 cmp bl, 0x30 */
  { uint32_t _a=(BL),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008ca98 jne 0x1008cade */
  if (!C.zf) goto L_1008cade;
  /* 1008ca9a jmp 0x1008ca5d */
  goto L_1008ca5d;
L_1008ca9c:;
  /* 1008ca9c cmp dword ptr [ebp + 0x20], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x20))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008caa0 je 0x1008cacc */
  if (C.zf) goto L_1008cacc;
  /* 1008caa2 movsx eax, bl */
  EAX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1008caa5 lea ecx, [edi - 1] */
  ECX = ((uint32_t)(EDI + -0x1));
  /* 1008caa8 sub eax, 0x2b */
  { uint32_t _a=(EAX),_b=(0x2bu),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008caab mov dword ptr [ebp + 0x10], ecx */
  w32((uint32_t)(EBP + 0x10), (ECX));
  /* 1008caae je 0x1008cac4 */
  if (C.zf) goto L_1008cac4;
  /* 1008cab0 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1008cab1 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1008cab2 jne 0x1008cb6c */
  if (!C.zf) goto L_1008cb6c;
L_1008cab8:;
  /* 1008cab8 or dword ptr [ebp - 0x18], 0xffffffff */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))|(0xffffffffu); w32((uint32_t)(EBP + -0x18), (_r)); fl_logic(_r,32); }
  /* 1008cabc push 7 */
  push32((uint32_t)(0x7u));
  /* 1008cabe pop eax */
  EAX = (pop32());
  /* 1008cabf jmp 0x1008c84d */
  goto L_1008c84d;
L_1008cac4:;
  /* 1008cac4 push 7 */
  push32((uint32_t)(0x7u));
L_1008cac6:;
  /* 1008cac6 pop eax */
  EAX = (pop32());
  /* 1008cac7 jmp 0x1008c84d */
  goto L_1008c84d;
L_1008cacc:;
  /* 1008cacc push 0xa */
  push32((uint32_t)(0xau));
  /* 1008cace dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1008cacf pop eax */
  EAX = (pop32());
L_1008cad0:;
  /* 1008cad0 cmp eax, 0xa */
  { uint32_t _a=(EAX),_b=(0xau),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008cad3 je 0x1008cb6e */
  if (C.zf) goto L_1008cb6e;
  /* 1008cad9 jmp 0x1008c84d */
  goto L_1008c84d;
L_1008cade:;
  /* 1008cade mov edi, dword ptr [ebp + 0x10] */
  EDI = (r32((uint32_t)(EBP + 0x10)));
  /* 1008cae1 jmp 0x1008cb6e */
  goto L_1008cb6e;
L_1008cae6:;
  /* 1008cae6 mov dword ptr [ebp - 0x20], 1 */
  w32((uint32_t)(EBP + -0x20), (0x1u));
  /* 1008caed xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1008caef:;
  /* 1008caef cmp dword ptr [0x10090c20], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10090c20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008caf6 jle 0x1008cb07 */
  if ((C.zf||C.sf!=C.of)) goto L_1008cb07;
  /* 1008caf8 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1008cafb push 4 */
  push32((uint32_t)(0x4u));
  /* 1008cafd push eax */
  push32((uint32_t)(EAX));
  /* 1008cafe call 0x1008940b */
  push32(0x1008cb03u); f_1008940b();
  /* 1008cb03 pop ecx */
  ECX = (pop32());
  /* 1008cb04 pop ecx */
  ECX = (pop32());
  /* 1008cb05 jmp 0x1008cb16 */
  goto L_1008cb16;
L_1008cb07:;
  /* 1008cb07 mov ecx, dword ptr [0x10090a10] */
  ECX = (r32((uint32_t)(0x10090a10)));
  /* 1008cb0d movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1008cb10 mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1008cb13 and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_1008cb16:;
  /* 1008cb16 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008cb18 je 0x1008cb36 */
  if (C.zf) goto L_1008cb36;
  /* 1008cb1a movsx ecx, bl */
  ECX = ((uint32_t)(int32_t)(int8_t)(BL));
  /* 1008cb1d lea eax, [esi + esi*4] */
  EAX = ((uint32_t)(ESI + ESI*4));
  /* 1008cb20 lea esi, [ecx + eax*2 - 0x30] */
  ESI = ((uint32_t)(ECX + EAX*2 + -0x30));
  /* 1008cb24 cmp esi, 0x1450 */
  { uint32_t _a=(ESI),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008cb2a jg 0x1008cb31 */
  if ((!C.zf&&C.sf==C.of)) goto L_1008cb31;
  /* 1008cb2c mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1008cb2e inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1008cb2f jmp 0x1008caef */
  goto L_1008caef;
L_1008cb31:;
  /* 1008cb31 mov esi, 0x1451 */
  ESI = (0x1451u);
L_1008cb36:;
  /* 1008cb36 mov dword ptr [ebp - 0x1c], esi */
  w32((uint32_t)(EBP + -0x1c), (ESI));
L_1008cb39:;
  /* 1008cb39 cmp dword ptr [0x10090c20], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10090c20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008cb40 jle 0x1008cb51 */
  if ((C.zf||C.sf!=C.of)) goto L_1008cb51;
  /* 1008cb42 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1008cb45 push 4 */
  push32((uint32_t)(0x4u));
  /* 1008cb47 push eax */
  push32((uint32_t)(EAX));
  /* 1008cb48 call 0x1008940b */
  push32(0x1008cb4du); f_1008940b();
  /* 1008cb4d pop ecx */
  ECX = (pop32());
  /* 1008cb4e pop ecx */
  ECX = (pop32());
  /* 1008cb4f jmp 0x1008cb60 */
  goto L_1008cb60;
L_1008cb51:;
  /* 1008cb51 mov ecx, dword ptr [0x10090a10] */
  ECX = (r32((uint32_t)(0x10090a10)));
  /* 1008cb57 movzx eax, bl */
  EAX = ((uint32_t)(BL));
  /* 1008cb5a mov al, byte ptr [ecx + eax*2] */
  AL = (r8((uint32_t)(ECX + EAX*2)));
  /* 1008cb5d and eax, 4 */
  { uint32_t _r=(EAX)&(0x4u); EAX = (_r); fl_logic(_r,32); }
L_1008cb60:;
  /* 1008cb60 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008cb62 je 0x1008cb69 */
  if (C.zf) goto L_1008cb69;
  /* 1008cb64 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1008cb66 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1008cb67 jmp 0x1008cb39 */
  goto L_1008cb39;
L_1008cb69:;
  /* 1008cb69 dec edi */
  { uint32_t _r=(EDI)-1; EDI = (_r); fl_dec(_r,32); }
  /* 1008cb6a jmp 0x1008cb6e */
  goto L_1008cb6e;
L_1008cb6c:;
  /* 1008cb6c mov edi, ecx */
  EDI = (ECX);
L_1008cb6e:;
  /* 1008cb6e mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1008cb71 cmp dword ptr [ebp - 0x10], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x10))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008cb75 mov dword ptr [eax], edi */
  w32((uint32_t)(EAX), (EDI));
  /* 1008cb77 je 0x1008cc56 */
  if (C.zf) goto L_1008cc56;
  /* 1008cb7d push 0x18 */
  push32((uint32_t)(0x18u));
  /* 1008cb7f pop eax */
  EAX = (pop32());
  /* 1008cb80 cmp dword ptr [ebp - 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008cb83 jbe 0x1008cb9a */
  if ((C.cf||C.zf)) goto L_1008cb9a;
  /* 1008cb85 cmp byte ptr [ebp - 0x45], 5 */
  { uint32_t _a=(r8((uint32_t)(EBP + -0x45))),_b=(0x5u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008cb89 jl 0x1008cb8e */
  if ((C.sf!=C.of)) goto L_1008cb8e;
  /* 1008cb8b inc byte ptr [ebp - 0x45] */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x45)))+1; w8((uint32_t)(EBP + -0x45), (_r)); fl_inc(_r,8); }
L_1008cb8e:;
  /* 1008cb8e mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1008cb91 mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
  /* 1008cb94 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1008cb95 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 1008cb98 jmp 0x1008cb9d */
  goto L_1008cb9d;
L_1008cb9a:;
  /* 1008cb9a mov eax, dword ptr [ebp - 0xc] */
  EAX = (r32((uint32_t)(EBP + -0xc)));
L_1008cb9d:;
  /* 1008cb9d cmp dword ptr [ebp - 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008cba1 jbe 0x1008cc4c */
  if ((C.cf||C.zf)) goto L_1008cc4c;
L_1008cba7:;
  /* 1008cba7 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1008cba8 cmp byte ptr [eax], 0 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008cbab jne 0x1008cbb5 */
  if (!C.zf) goto L_1008cbb5;
  /* 1008cbad dec dword ptr [ebp - 4] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))-1; w32((uint32_t)(EBP + -0x4), (_r)); fl_dec(_r,32); }
  /* 1008cbb0 inc dword ptr [ebp - 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x8)))+1; w32((uint32_t)(EBP + -0x8), (_r)); fl_inc(_r,32); }
  /* 1008cbb3 jmp 0x1008cba7 */
  goto L_1008cba7;
L_1008cbb5:;
  /* 1008cbb5 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 1008cbb8 push eax */
  push32((uint32_t)(EAX));
  /* 1008cbb9 lea eax, [ebp - 0x5c] */
  EAX = ((uint32_t)(EBP + -0x5c));
  /* 1008cbbc push dword ptr [ebp - 4] */
  push32((uint32_t)(r32((uint32_t)(EBP + -0x4))));
  /* 1008cbbf push eax */
  push32((uint32_t)(EAX));
  /* 1008cbc0 call 0x1008c72f */
  push32(0x1008cbc5u); f_1008c72f();
  /* 1008cbc5 mov eax, dword ptr [ebp - 0x1c] */
  EAX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1008cbc8 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1008cbca add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008cbcd cmp dword ptr [ebp - 0x18], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x18))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008cbd0 jge 0x1008cbd4 */
  if ((C.sf==C.of)) goto L_1008cbd4;
  /* 1008cbd2 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
L_1008cbd4:;
  /* 1008cbd4 add eax, dword ptr [ebp - 8] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + -0x8))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008cbd7 cmp dword ptr [ebp - 0x20], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x20))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008cbda jne 0x1008cbdf */
  if (!C.zf) goto L_1008cbdf;
  /* 1008cbdc add eax, dword ptr [ebp + 0x18] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x18))),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
L_1008cbdf:;
  /* 1008cbdf cmp dword ptr [ebp - 0x24], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x24))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008cbe2 jne 0x1008cbe7 */
  if (!C.zf) goto L_1008cbe7;
  /* 1008cbe4 sub eax, dword ptr [ebp + 0x1c] */
  { uint32_t _a=(EAX),_b=(r32((uint32_t)(EBP + 0x1c))),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1008cbe7:;
  /* 1008cbe7 cmp eax, 0x1450 */
  { uint32_t _a=(EAX),_b=(0x1450u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008cbec jle 0x1008cc1e */
  if ((C.zf||C.sf!=C.of)) goto L_1008cc1e;
  /* 1008cbee mov dword ptr [ebp - 0x2c], 1 */
  w32((uint32_t)(EBP + -0x2c), (0x1u));
L_1008cbf5:;
  /* 1008cbf5 mov ebx, dword ptr [ebp + 0x10] */
  EBX = (r32((uint32_t)(EBP + 0x10)));
  /* 1008cbf8 mov esi, dword ptr [ebp + 0x10] */
  ESI = (r32((uint32_t)(EBP + 0x10)));
  /* 1008cbfb mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1008cbfe mov edx, dword ptr [ebp + 0x10] */
  EDX = (r32((uint32_t)(EBP + 0x10)));
L_1008cc01:;
  /* 1008cc01 cmp dword ptr [ebp - 0x2c], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x2c))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008cc05 je 0x1008cc67 */
  if (C.zf) goto L_1008cc67;
  /* 1008cc07 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1008cc09 mov eax, 0x7fff */
  EAX = (0x7fffu);
  /* 1008cc0e mov esi, 0x80000000 */
  ESI = (0x80000000u);
  /* 1008cc13 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1008cc15 mov dword ptr [ebp - 0x14], 2 */
  w32((uint32_t)(EBP + -0x14), (0x2u));
  /* 1008cc1c jmp 0x1008cc7c */
  goto L_1008cc7c;
L_1008cc1e:;
  /* 1008cc1e cmp eax, 0xffffebb0 */
  { uint32_t _a=(EAX),_b=(0xffffebb0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008cc23 jge 0x1008cc2e */
  if ((C.sf==C.of)) goto L_1008cc2e;
  /* 1008cc25 mov dword ptr [ebp - 0x30], 1 */
  w32((uint32_t)(EBP + -0x30), (0x1u));
  /* 1008cc2c jmp 0x1008cbf5 */
  goto L_1008cbf5;
L_1008cc2e:;
  /* 1008cc2e push dword ptr [ebp + 0x14] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x14))));
  /* 1008cc31 push eax */
  push32((uint32_t)(EAX));
  /* 1008cc32 lea eax, [ebp - 0x40] */
  EAX = ((uint32_t)(EBP + -0x40));
  /* 1008cc35 push eax */
  push32((uint32_t)(EAX));
  /* 1008cc36 call 0x1008d6ca */
  push32(0x1008cc3bu); f_1008d6ca();
  /* 1008cc3b mov edx, dword ptr [ebp - 0x40] */
  EDX = (r32((uint32_t)(EBP + -0x40)));
  /* 1008cc3e mov ebx, dword ptr [ebp - 0x3e] */
  EBX = (r32((uint32_t)(EBP + -0x3e)));
  /* 1008cc41 mov esi, dword ptr [ebp - 0x3a] */
  ESI = (r32((uint32_t)(EBP + -0x3a)));
  /* 1008cc44 mov eax, dword ptr [ebp - 0x36] */
  EAX = (r32((uint32_t)(EBP + -0x36)));
  /* 1008cc47 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008cc4a jmp 0x1008cc01 */
  goto L_1008cc01;
L_1008cc4c:;
  /* 1008cc4c xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1008cc4e xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1008cc50 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1008cc52 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1008cc54 jmp 0x1008cc01 */
  goto L_1008cc01;
L_1008cc56:;
  /* 1008cc56 xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1008cc58 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1008cc5a xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1008cc5c xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1008cc5e mov dword ptr [ebp - 0x14], 4 */
  w32((uint32_t)(EBP + -0x14), (0x4u));
  /* 1008cc65 jmp 0x1008cc7c */
  goto L_1008cc7c;
L_1008cc67:;
  /* 1008cc67 cmp dword ptr [ebp - 0x30], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x30))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008cc6b je 0x1008cc7c */
  if (C.zf) goto L_1008cc7c;
  /* 1008cc6d xor edx, edx */
  { uint32_t _r=(EDX)^(EDX); EDX = (_r); fl_logic(_r,32); }
  /* 1008cc6f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1008cc71 xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
  /* 1008cc73 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1008cc75 mov dword ptr [ebp - 0x14], 1 */
  w32((uint32_t)(EBP + -0x14), (0x1u));
L_1008cc7c:;
  /* 1008cc7c mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1008cc7f or eax, dword ptr [ebp - 0x28] */
  { uint32_t _r=(EAX)|(r32((uint32_t)(EBP + -0x28))); EAX = (_r); fl_logic(_r,32); }
  /* 1008cc82 pop edi */
  EDI = (pop32());
  /* 1008cc83 mov dword ptr [ecx + 6], esi */
  w32((uint32_t)(ECX + 0x6), (ESI));
  /* 1008cc86 mov dword ptr [ecx + 2], ebx */
  w32((uint32_t)(ECX + 0x2), (EBX));
  /* 1008cc89 mov word ptr [ecx + 0xa], ax */
  w16((uint32_t)(ECX + 0xa), (AX));
  /* 1008cc8d mov eax, dword ptr [ebp - 0x14] */
  EAX = (r32((uint32_t)(EBP + -0x14)));
  /* 1008cc90 pop esi */
  ESI = (pop32());
  /* 1008cc91 mov word ptr [ecx], dx */
  w16((uint32_t)(ECX), (DX));
  /* 1008cc94 pop ebx */
  EBX = (pop32());
  /* 1008cc95 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1008cc96 ret  */
  ESPCHK(0x1008c7f6u, _esp0);
  ESP += 4; return;
}

/* FUN_1000ccc7 @ 0x1008ccc7 (659 bytes, 232 insns) */
void f_1008ccc7(void) {
  FTRACE(0x1008ccc7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008ccc7 push ebp */
  push32((uint32_t)(EBP));
  /* 1008ccc8 mov ebp, esp */
  EBP = (ESP);
  /* 1008ccca sub esp, 0x1c */
  { uint32_t _a=(ESP),_b=(0x1cu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008cccd mov eax, dword ptr [ebp + 0x10] */
  EAX = (r32((uint32_t)(EBP + 0x10)));
  /* 1008ccd0 push ebx */
  push32((uint32_t)(EBX));
  /* 1008ccd1 mov ebx, dword ptr [ebp + 0x1c] */
  EBX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1008ccd4 push esi */
  push32((uint32_t)(ESI));
  /* 1008ccd5 mov ecx, eax */
  ECX = (EAX);
  /* 1008ccd7 mov esi, 0x7fff */
  ESI = (0x7fffu);
  /* 1008ccdc and ecx, 0x8000 */
  { uint32_t _r=(ECX)&(0x8000u); ECX = (_r); fl_logic(_r,32); }
  /* 1008cce2 and eax, esi */
  { uint32_t _r=(EAX)&(ESI); EAX = (_r); fl_logic(_r,32); }
  /* 1008cce4 test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 1008cce7 push edi */
  push32((uint32_t)(EDI));
  /* 1008cce8 mov byte ptr [ebp - 0x1c], 0xcc */
  w8((uint32_t)(EBP + -0x1c), (0xccu));
  /* 1008ccec mov byte ptr [ebp - 0x1b], 0xcc */
  w8((uint32_t)(EBP + -0x1b), (0xccu));
  /* 1008ccf0 mov byte ptr [ebp - 0x1a], 0xcc */
  w8((uint32_t)(EBP + -0x1a), (0xccu));
  /* 1008ccf4 mov byte ptr [ebp - 0x19], 0xcc */
  w8((uint32_t)(EBP + -0x19), (0xccu));
  /* 1008ccf8 mov byte ptr [ebp - 0x18], 0xcc */
  w8((uint32_t)(EBP + -0x18), (0xccu));
  /* 1008ccfc mov byte ptr [ebp - 0x17], 0xcc */
  w8((uint32_t)(EBP + -0x17), (0xccu));
  /* 1008cd00 mov byte ptr [ebp - 0x16], 0xcc */
  w8((uint32_t)(EBP + -0x16), (0xccu));
  /* 1008cd04 mov byte ptr [ebp - 0x15], 0xcc */
  w8((uint32_t)(EBP + -0x15), (0xccu));
  /* 1008cd08 mov byte ptr [ebp - 0x14], 0xcc */
  w8((uint32_t)(EBP + -0x14), (0xccu));
  /* 1008cd0c mov byte ptr [ebp - 0x13], 0xcc */
  w8((uint32_t)(EBP + -0x13), (0xccu));
  /* 1008cd10 mov byte ptr [ebp - 0x12], 0xfb */
  w8((uint32_t)(EBP + -0x12), (0xfbu));
  /* 1008cd14 mov byte ptr [ebp - 0x11], 0x3f */
  w8((uint32_t)(EBP + -0x11), (0x3fu));
  /* 1008cd18 mov dword ptr [ebp - 4], 1 */
  w32((uint32_t)(EBP + -0x4), (0x1u));
  /* 1008cd1f mov edx, eax */
  EDX = (EAX);
  /* 1008cd21 je 0x1008cd29 */
  if (C.zf) goto L_1008cd29;
  /* 1008cd23 mov byte ptr [ebx + 2], 0x2d */
  w8((uint32_t)(EBX + 0x2), (0x2du));
  /* 1008cd27 jmp 0x1008cd2d */
  goto L_1008cd2d;
L_1008cd29:;
  /* 1008cd29 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
L_1008cd2d:;
  /* 1008cd2d mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 1008cd30 test dx, dx */
  { uint32_t _r=(DX)&(DX); fl_logic(_r,16); }
  /* 1008cd33 jne 0x1008cd53 */
  if (!C.zf) goto L_1008cd53;
  /* 1008cd35 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1008cd37 jne 0x1008cd53 */
  if (!C.zf) goto L_1008cd53;
  /* 1008cd39 cmp dword ptr [ebp + 8], edi */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008cd3c jne 0x1008cd53 */
  if (!C.zf) goto L_1008cd53;
L_1008cd3e:;
  /* 1008cd3e and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 1008cd42 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 1008cd46 mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 1008cd4a mov byte ptr [ebx + 4], 0x30 */
  w8((uint32_t)(EBX + 0x4), (0x30u));
  /* 1008cd4e jmp 0x1008cf51 */
  goto L_1008cf51;
L_1008cd53:;
  /* 1008cd53 cmp dx, si */
  { uint32_t _a=(DX),_b=(SI),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1008cd56 jne 0x1008cdd2 */
  if (!C.zf) goto L_1008cdd2;
  /* 1008cd58 mov eax, 0x80000000 */
  EAX = (0x80000000u);
  /* 1008cd5d mov word ptr [ebx], 1 */
  w16((uint32_t)(EBX), (0x1u));
  /* 1008cd62 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008cd64 jne 0x1008cd6c */
  if (!C.zf) goto L_1008cd6c;
  /* 1008cd66 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008cd6a je 0x1008cd7b */
  if (C.zf) goto L_1008cd7b;
L_1008cd6c:;
  /* 1008cd6c test edi, 0x40000000 */
  { uint32_t _r=(EDI)&(0x40000000u); fl_logic(_r,32); }
  /* 1008cd72 jne 0x1008cd7b */
  if (!C.zf) goto L_1008cd7b;
  /* 1008cd74 push 0x1008e5a0 */
  push32((uint32_t)(0x1008e5a0u));
  /* 1008cd79 jmp 0x1008cdc1 */
  goto L_1008cdc1;
L_1008cd7b:;
  /* 1008cd7b test cx, cx */
  { uint32_t _r=(CX)&(CX); fl_logic(_r,16); }
  /* 1008cd7e je 0x1008cd95 */
  if (C.zf) goto L_1008cd95;
  /* 1008cd80 cmp edi, 0xc0000000 */
  { uint32_t _a=(EDI),_b=(0xc0000000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008cd86 jne 0x1008cd95 */
  if (!C.zf) goto L_1008cd95;
  /* 1008cd88 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008cd8c jne 0x1008cdbc */
  if (!C.zf) goto L_1008cdbc;
  /* 1008cd8e push 0x1008e598 */
  push32((uint32_t)(0x1008e598u));
  /* 1008cd93 jmp 0x1008cda4 */
  goto L_1008cda4;
L_1008cd95:;
  /* 1008cd95 cmp edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008cd97 jne 0x1008cdbc */
  if (!C.zf) goto L_1008cdbc;
  /* 1008cd99 cmp dword ptr [ebp + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008cd9d jne 0x1008cdbc */
  if (!C.zf) goto L_1008cdbc;
  /* 1008cd9f push 0x1008e590 */
  push32((uint32_t)(0x1008e590u));
L_1008cda4:;
  /* 1008cda4 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 1008cda7 push eax */
  push32((uint32_t)(EAX));
  /* 1008cda8 call 0x10089b30 */
  push32(0x1008cdadu); f_10089b30();
  /* 1008cdad pop ecx */
  ECX = (pop32());
  /* 1008cdae mov byte ptr [ebx + 3], 5 */
  w8((uint32_t)(EBX + 0x3), (0x5u));
  /* 1008cdb2 pop ecx */
  ECX = (pop32());
L_1008cdb3:;
  /* 1008cdb3 and dword ptr [ebp - 4], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x4)))&(0x0u); w32((uint32_t)(EBP + -0x4), (_r)); fl_logic(_r,32); }
  /* 1008cdb7 jmp 0x1008cf2a */
  goto L_1008cf2a;
L_1008cdbc:;
  /* 1008cdbc push 0x1008e588 */
  push32((uint32_t)(0x1008e588u));
L_1008cdc1:;
  /* 1008cdc1 lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 1008cdc4 push eax */
  push32((uint32_t)(EAX));
  /* 1008cdc5 call 0x10089b30 */
  push32(0x1008cdcau); f_10089b30();
  /* 1008cdca pop ecx */
  ECX = (pop32());
  /* 1008cdcb mov byte ptr [ebx + 3], 6 */
  w8((uint32_t)(EBX + 0x3), (0x6u));
  /* 1008cdcf pop ecx */
  ECX = (pop32());
  /* 1008cdd0 jmp 0x1008cdb3 */
  goto L_1008cdb3;
L_1008cdd2:;
  /* 1008cdd2 movzx eax, dx */
  EAX = ((uint32_t)(DX));
  /* 1008cdd5 mov ecx, edi */
  ECX = (EDI);
  /* 1008cdd7 mov esi, eax */
  ESI = (EAX);
  /* 1008cdd9 shr ecx, 0x18 */
  ECX = (sh_shr((uint32_t)(ECX), (0x18u)&0x1f, 32));
  /* 1008cddc imul eax, eax, 0x4d10 */
  { int64_t _p=(int64_t)(int32_t)(EAX)*(int64_t)(int32_t)(0x4d10u); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1008cde2 shr esi, 8 */
  ESI = (sh_shr((uint32_t)(ESI), (0x8u)&0x1f, 32));
  /* 1008cde5 and word ptr [ebp - 0x10], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x10)))&(0x0u); w16((uint32_t)(EBP + -0x10), (_r)); fl_logic(_r,16); }
  /* 1008cdea push 1 */
  push32((uint32_t)(0x1u));
  /* 1008cdec lea ecx, [esi + ecx*2] */
  ECX = ((uint32_t)(ESI + ECX*2));
  /* 1008cdef mov word ptr [ebp - 6], dx */
  w16((uint32_t)(EBP + -0x6), (DX));
  /* 1008cdf3 imul ecx, ecx, 0x4d */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(0x4du); ECX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1008cdf6 mov dword ptr [ebp - 0xa], edi */
  w32((uint32_t)(EBP + -0xa), (EDI));
  /* 1008cdf9 lea esi, [ecx + eax - 0x134312f4] */
  ESI = ((uint32_t)(ECX + EAX*1 + -0x134312f4));
  /* 1008ce00 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1008ce03 sar esi, 0x10 */
  ESI = (sh_sar((uint32_t)(ESI), (0x10u)&0x1f, 32));
  /* 1008ce06 mov dword ptr [ebp - 0xe], eax */
  w32((uint32_t)(EBP + -0xe), (EAX));
  /* 1008ce09 movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 1008ce0c neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1008ce0e push eax */
  push32((uint32_t)(EAX));
  /* 1008ce0f lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1008ce12 push eax */
  push32((uint32_t)(EAX));
  /* 1008ce13 call 0x1008d6ca */
  push32(0x1008ce18u); f_1008d6ca();
  /* 1008ce18 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008ce1b cmp word ptr [ebp - 6], 0x3fff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x6))),_b=(0x3fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1008ce21 jb 0x1008ce33 */
  if (C.cf) goto L_1008ce33;
  /* 1008ce23 lea eax, [ebp - 0x1c] */
  EAX = ((uint32_t)(EBP + -0x1c));
  /* 1008ce26 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1008ce27 push eax */
  push32((uint32_t)(EAX));
  /* 1008ce28 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1008ce2b push eax */
  push32((uint32_t)(EAX));
  /* 1008ce2c call 0x1008d4aa */
  push32(0x1008ce31u); f_1008d4aa();
  /* 1008ce31 pop ecx */
  ECX = (pop32());
  /* 1008ce32 pop ecx */
  ECX = (pop32());
L_1008ce33:;
  /* 1008ce33 test byte ptr [ebp + 0x18], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x18)))&(0x1u); fl_logic(_r,8); }
  /* 1008ce37 mov word ptr [ebx], si */
  w16((uint32_t)(EBX), (SI));
  /* 1008ce3a je 0x1008ce4d */
  if (C.zf) goto L_1008ce4d;
  /* 1008ce3c mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
  /* 1008ce3f movsx eax, si */
  EAX = ((uint32_t)(int32_t)(int16_t)(SI));
  /* 1008ce42 add edi, eax */
  { uint32_t _a=(EDI),_b=(EAX),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1008ce44 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1008ce46 jg 0x1008ce50 */
  if ((!C.zf&&C.sf==C.of)) goto L_1008ce50;
  /* 1008ce48 jmp 0x1008cd3e */
  goto L_1008cd3e;
L_1008ce4d:;
  /* 1008ce4d mov edi, dword ptr [ebp + 0x14] */
  EDI = (r32((uint32_t)(EBP + 0x14)));
L_1008ce50:;
  /* 1008ce50 cmp edi, 0x15 */
  { uint32_t _a=(EDI),_b=(0x15u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008ce53 jle 0x1008ce58 */
  if ((C.zf||C.sf!=C.of)) goto L_1008ce58;
  /* 1008ce55 push 0x15 */
  push32((uint32_t)(0x15u));
  /* 1008ce57 pop edi */
  EDI = (pop32());
L_1008ce58:;
  /* 1008ce58 movzx esi, word ptr [ebp - 6] */
  ESI = ((uint32_t)(r16((uint32_t)(EBP + -0x6))));
  /* 1008ce5c sub esi, 0x3ffe */
  { uint32_t _a=(ESI),_b=(0x3ffeu),_r=_a-_b; ESI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008ce62 and word ptr [ebp - 6], 0 */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x6)))&(0x0u); w16((uint32_t)(EBP + -0x6), (_r)); fl_logic(_r,16); }
  /* 1008ce67 mov dword ptr [ebp + 0x1c], 8 */
  w32((uint32_t)(EBP + 0x1c), (0x8u));
L_1008ce6e:;
  /* 1008ce6e lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1008ce71 push eax */
  push32((uint32_t)(EAX));
  /* 1008ce72 call 0x1008c6d4 */
  push32(0x1008ce77u); f_1008c6d4();
  /* 1008ce77 dec dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))-1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_dec(_r,32); }
  /* 1008ce7a pop ecx */
  ECX = (pop32());
  /* 1008ce7b jne 0x1008ce6e */
  if (!C.zf) goto L_1008ce6e;
  /* 1008ce7d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1008ce7f jge 0x1008ce98 */
  if ((C.sf==C.of)) goto L_1008ce98;
  /* 1008ce81 neg esi */
  { uint32_t _a=(ESI),_r=0u-_a; ESI = (_r); fl_sub(0,_a,_r,32); }
  /* 1008ce83 and esi, 0xff */
  { uint32_t _r=(ESI)&(0xffu); ESI = (_r); fl_logic(_r,32); }
  /* 1008ce89 jle 0x1008ce98 */
  if ((C.zf||C.sf!=C.of)) goto L_1008ce98;
L_1008ce8b:;
  /* 1008ce8b lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1008ce8e push eax */
  push32((uint32_t)(EAX));
  /* 1008ce8f call 0x1008c702 */
  push32(0x1008ce94u); f_1008c702();
  /* 1008ce94 dec esi */
  { uint32_t _r=(ESI)-1; ESI = (_r); fl_dec(_r,32); }
  /* 1008ce95 pop ecx */
  ECX = (pop32());
  /* 1008ce96 jne 0x1008ce8b */
  if (!C.zf) goto L_1008ce8b;
L_1008ce98:;
  /* 1008ce98 lea ecx, [edi + 1] */
  ECX = ((uint32_t)(EDI + 0x1));
  /* 1008ce9b lea eax, [ebx + 4] */
  EAX = ((uint32_t)(EBX + 0x4));
  /* 1008ce9e test ecx, ecx */
  { uint32_t _r=(ECX)&(ECX); fl_logic(_r,32); }
  /* 1008cea0 mov dword ptr [ebp + 0x1c], eax */
  w32((uint32_t)(EBP + 0x1c), (EAX));
  /* 1008cea3 jle 0x1008cef5 */
  if ((C.zf||C.sf!=C.of)) goto L_1008cef5;
  /* 1008cea5 mov dword ptr [ebp + 0x14], ecx */
  w32((uint32_t)(EBP + 0x14), (ECX));
L_1008cea8:;
  /* 1008cea8 lea esi, [ebp - 0x10] */
  ESI = ((uint32_t)(EBP + -0x10));
  /* 1008ceab lea edi, [ebp + 8] */
  EDI = ((uint32_t)(EBP + 0x8));
  /* 1008ceae movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1008ceaf movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1008ceb0 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1008ceb3 push eax */
  push32((uint32_t)(EAX));
  /* 1008ceb4 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1008ceb5 call 0x1008c6d4 */
  push32(0x1008cebau); f_1008c6d4();
  /* 1008ceba lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1008cebd push eax */
  push32((uint32_t)(EAX));
  /* 1008cebe call 0x1008c6d4 */
  push32(0x1008cec3u); f_1008c6d4();
  /* 1008cec3 lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1008cec6 push eax */
  push32((uint32_t)(EAX));
  /* 1008cec7 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1008ceca push eax */
  push32((uint32_t)(EAX));
  /* 1008cecb call 0x1008c676 */
  push32(0x1008ced0u); f_1008c676();
  /* 1008ced0 lea eax, [ebp - 0x10] */
  EAX = ((uint32_t)(EBP + -0x10));
  /* 1008ced3 push eax */
  push32((uint32_t)(EAX));
  /* 1008ced4 call 0x1008c6d4 */
  push32(0x1008ced9u); f_1008c6d4();
  /* 1008ced9 mov al, byte ptr [ebp - 5] */
  AL = (r8((uint32_t)(EBP + -0x5)));
  /* 1008cedc mov ecx, dword ptr [ebp + 0x1c] */
  ECX = (r32((uint32_t)(EBP + 0x1c)));
  /* 1008cedf and byte ptr [ebp - 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x5)))&(0x0u); w8((uint32_t)(EBP + -0x5), (_r)); fl_logic(_r,8); }
  /* 1008cee3 add esp, 0x14 */
  { uint32_t _a=(ESP),_b=(0x14u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008cee6 add al, 0x30 */
  { uint32_t _a=(AL),_b=(0x30u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1008cee8 inc dword ptr [ebp + 0x1c] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x1c)))+1; w32((uint32_t)(EBP + 0x1c), (_r)); fl_inc(_r,32); }
  /* 1008ceeb dec dword ptr [ebp + 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x14)))-1; w32((uint32_t)(EBP + 0x14), (_r)); fl_dec(_r,32); }
  /* 1008ceee mov byte ptr [ecx], al */
  w8((uint32_t)(ECX), (AL));
  /* 1008cef0 jne 0x1008cea8 */
  if (!C.zf) goto L_1008cea8;
  /* 1008cef2 mov eax, dword ptr [ebp + 0x1c] */
  EAX = (r32((uint32_t)(EBP + 0x1c)));
L_1008cef5:;
  /* 1008cef5 mov cl, byte ptr [eax - 1] */
  CL = (r8((uint32_t)(EAX + -0x1)));
  /* 1008cef8 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1008cef9 dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1008cefa cmp cl, 0x35 */
  { uint32_t _a=(CL),_b=(0x35u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008cefd lea ecx, [ebx + 4] */
  ECX = ((uint32_t)(EBX + 0x4));
  /* 1008cf00 jl 0x1008cf32 */
  if ((C.sf!=C.of)) goto L_1008cf32;
L_1008cf02:;
  /* 1008cf02 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008cf04 jb 0x1008cf15 */
  if (C.cf) goto L_1008cf15;
  /* 1008cf06 cmp byte ptr [eax], 0x39 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x39u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008cf09 jne 0x1008cf11 */
  if (!C.zf) goto L_1008cf11;
  /* 1008cf0b mov byte ptr [eax], 0x30 */
  w8((uint32_t)(EAX), (0x30u));
  /* 1008cf0e dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1008cf0f jmp 0x1008cf02 */
  goto L_1008cf02;
L_1008cf11:;
  /* 1008cf11 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008cf13 jae 0x1008cf19 */
  if (!C.cf) goto L_1008cf19;
L_1008cf15:;
  /* 1008cf15 inc eax */
  { uint32_t _r=(EAX)+1; EAX = (_r); fl_inc(_r,32); }
  /* 1008cf16 inc word ptr [ebx] */
  { uint32_t _r=(r16((uint32_t)(EBX)))+1; w16((uint32_t)(EBX), (_r)); fl_inc(_r,16); }
L_1008cf19:;
  /* 1008cf19 inc byte ptr [eax] */
  { uint32_t _r=(r8((uint32_t)(EAX)))+1; w8((uint32_t)(EAX), (_r)); fl_inc(_r,8); }
L_1008cf1b:;
  /* 1008cf1b sub al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1008cf1d sub al, 3 */
  { uint32_t _a=(AL),_b=(0x3u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1008cf1f mov byte ptr [ebx + 3], al */
  w8((uint32_t)(EBX + 0x3), (AL));
  /* 1008cf22 movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 1008cf25 and byte ptr [eax + ebx + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + EBX*1 + 0x4)))&(0x0u); w8((uint32_t)(EAX + EBX*1 + 0x4), (_r)); fl_logic(_r,8); }
L_1008cf2a:;
  /* 1008cf2a mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
L_1008cf2d:;
  /* 1008cf2d pop edi */
  EDI = (pop32());
  /* 1008cf2e pop esi */
  ESI = (pop32());
  /* 1008cf2f pop ebx */
  EBX = (pop32());
  /* 1008cf30 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1008cf31 ret  */
  ESPCHK(0x1008ccc7u, _esp0);
  ESP += 4; return;
L_1008cf32:;
  /* 1008cf32 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008cf34 jb 0x1008cf42 */
  if (C.cf) goto L_1008cf42;
  /* 1008cf36 cmp byte ptr [eax], 0x30 */
  { uint32_t _a=(r8((uint32_t)(EAX))),_b=(0x30u),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008cf39 jne 0x1008cf3e */
  if (!C.zf) goto L_1008cf3e;
  /* 1008cf3b dec eax */
  { uint32_t _r=(EAX)-1; EAX = (_r); fl_dec(_r,32); }
  /* 1008cf3c jmp 0x1008cf32 */
  goto L_1008cf32;
L_1008cf3e:;
  /* 1008cf3e cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008cf40 jae 0x1008cf1b */
  if (!C.cf) goto L_1008cf1b;
L_1008cf42:;
  /* 1008cf42 and word ptr [ebx], 0 */
  { uint32_t _r=(r16((uint32_t)(EBX)))&(0x0u); w16((uint32_t)(EBX), (_r)); fl_logic(_r,16); }
  /* 1008cf46 mov byte ptr [ebx + 2], 0x20 */
  w8((uint32_t)(EBX + 0x2), (0x20u));
  /* 1008cf4a mov byte ptr [ebx + 3], 1 */
  w8((uint32_t)(EBX + 0x3), (0x1u));
  /* 1008cf4e mov byte ptr [ecx], 0x30 */
  w8((uint32_t)(ECX), (0x30u));
L_1008cf51:;
  /* 1008cf51 and byte ptr [ebx + 5], 0 */
  { uint32_t _r=(r8((uint32_t)(EBX + 0x5)))&(0x0u); w8((uint32_t)(EBX + 0x5), (_r)); fl_logic(_r,8); }
  /* 1008cf55 push 1 */
  push32((uint32_t)(0x1u));
  /* 1008cf57 pop eax */
  EAX = (pop32());
  /* 1008cf58 jmp 0x1008cf2d */
  goto L_1008cf2d;
}

/* FUN_1000cf5a @ 0x1008cf5a (27 bytes, 13 insns) */
void f_1008cf5a(void) {
  FTRACE(0x1008cf5au);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008cf5a mov eax, dword ptr [0x100968ac] */
  EAX = (r32((uint32_t)(0x100968ac)));
  /* 1008cf5f test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008cf61 je 0x1008cf72 */
  if (C.zf) goto L_1008cf72;
  /* 1008cf63 push dword ptr [esp + 4] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x4))));
  /* 1008cf67 call eax */
  call_ind((uint32_t)(EAX), 0x1008cf69u);
  /* 1008cf69 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008cf6b pop ecx */
  ECX = (pop32());
  /* 1008cf6c je 0x1008cf72 */
  if (C.zf) goto L_1008cf72;
  /* 1008cf6e push 1 */
  push32((uint32_t)(0x1u));
  /* 1008cf70 pop eax */
  EAX = (pop32());
  /* 1008cf71 ret  */
  ESPCHK(0x1008cf5au, _esp0);
  ESP += 4; return;
L_1008cf72:;
  /* 1008cf72 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1008cf74 ret  */
  ESPCHK(0x1008cf5au, _esp0);
  ESP += 4; return;
}

/* __global_unwind2 @ 0x1008cf78 (32 bytes, 18 insns) */
void f_1008cf78(void) {
  FTRACE(0x1008cf78u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008cf78 push ebp */
  push32((uint32_t)(EBP));
  /* 1008cf79 mov ebp, esp */
  EBP = (ESP);
  /* 1008cf7b push ebx */
  push32((uint32_t)(EBX));
  /* 1008cf7c push esi */
  push32((uint32_t)(ESI));
  /* 1008cf7d push edi */
  push32((uint32_t)(EDI));
  /* 1008cf7e push ebp */
  push32((uint32_t)(EBP));
  /* 1008cf7f push 0 */
  push32((uint32_t)(0x0u));
  /* 1008cf81 push 0 */
  push32((uint32_t)(0x0u));
  /* 1008cf83 push 0x1008cf90 */
  push32((uint32_t)(0x1008cf90u));
  /* 1008cf88 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1008cf8b call 0x1008da74 */
  push32(0x1008cf90u); f_1008da74();
  /* 1008cf90 pop ebp */
  EBP = (pop32());
  /* 1008cf91 pop edi */
  EDI = (pop32());
  /* 1008cf92 pop esi */
  ESI = (pop32());
  /* 1008cf93 pop ebx */
  EBX = (pop32());
  /* 1008cf94 mov esp, ebp */
  ESP = (EBP);
  /* 1008cf96 pop ebp */
  EBP = (pop32());
  /* 1008cf97 ret  */
  ESPCHK(0x1008cf78u, _esp0);
  ESP += 4; return;
}

/* __local_unwind2 @ 0x1008cfba (104 bytes, 33 insns) */
void f_1008cfba(void) {
  FTRACE(0x1008cfbau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008cfba push ebx */
  push32((uint32_t)(EBX));
  /* 1008cfbb push esi */
  push32((uint32_t)(ESI));
  /* 1008cfbc push edi */
  push32((uint32_t)(EDI));
  /* 1008cfbd mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1008cfc1 push eax */
  push32((uint32_t)(EAX));
  /* 1008cfc2 push -2 */
  push32((uint32_t)(0xfffffffeu));
  /* 1008cfc4 push 0x1008cf98 */
  push32((uint32_t)(0x1008cf98u));
  /* 1008cfc9 push dword ptr fs:[0] */
  push32((uint32_t)(r32((uint32_t)(0x0))));
  /* 1008cfd0 mov dword ptr fs:[0], esp */
  w32((uint32_t)(0x0), (ESP));
L_1008cfd7:;
  /* 1008cfd7 mov eax, dword ptr [esp + 0x20] */
  EAX = (r32((uint32_t)(ESP + 0x20)));
  /* 1008cfdb mov ebx, dword ptr [eax + 8] */
  EBX = (r32((uint32_t)(EAX + 0x8)));
  /* 1008cfde mov esi, dword ptr [eax + 0xc] */
  ESI = (r32((uint32_t)(EAX + 0xc)));
  /* 1008cfe1 cmp esi, -1 */
  { uint32_t _a=(ESI),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008cfe4 je 0x1008d014 */
  if (C.zf) goto L_1008d014;
  /* 1008cfe6 cmp esi, dword ptr [esp + 0x24] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(ESP + 0x24))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008cfea je 0x1008d014 */
  if (C.zf) goto L_1008d014;
  /* 1008cfec lea esi, [esi + esi*2] */
  ESI = ((uint32_t)(ESI + ESI*2));
  /* 1008cfef mov ecx, dword ptr [ebx + esi*4] */
  ECX = (r32((uint32_t)(EBX + ESI*4)));
  /* 1008cff2 mov dword ptr [esp + 8], ecx */
  w32((uint32_t)(ESP + 0x8), (ECX));
  /* 1008cff6 mov dword ptr [eax + 0xc], ecx */
  w32((uint32_t)(EAX + 0xc), (ECX));
  /* 1008cff9 cmp dword ptr [ebx + esi*4 + 4], 0 */
  { uint32_t _a=(r32((uint32_t)(EBX + ESI*4 + 0x4))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008cffe jne 0x1008d012 */
  if (!C.zf) goto L_1008d012;
  /* 1008d000 push 0x101 */
  push32((uint32_t)(0x101u));
  /* 1008d005 mov eax, dword ptr [ebx + esi*4 + 8] */
  EAX = (r32((uint32_t)(EBX + ESI*4 + 0x8)));
  /* 1008d009 call 0x1008d04e */
  push32(0x1008d00eu); f_1008d04e();
  /* 1008d00e call dword ptr [ebx + esi*4 + 8] */
  call_ind((uint32_t)(r32((uint32_t)(EBX + ESI*4 + 0x8))), 0x1008d012u);
L_1008d012:;
  /* 1008d012 jmp 0x1008cfd7 */
  goto L_1008cfd7;
L_1008d014:;
  /* 1008d014 pop dword ptr fs:[0] */
  w32((uint32_t)(0x0), (pop32()));
  /* 1008d01b add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008d01e pop edi */
  EDI = (pop32());
  /* 1008d01f pop esi */
  ESI = (pop32());
  /* 1008d020 pop ebx */
  EBX = (pop32());
  /* 1008d021 ret  */
  ESPCHK(0x1008cfbau, _esp0);
  ESP += 4; return;
}

/* FUN_1000d04e @ 0x1008d04e (24 bytes, 10 insns) */
void f_1008d04e(void) {
  FTRACE(0x1008d04eu);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008d04e push ebx */
  push32((uint32_t)(EBX));
  /* 1008d04f push ecx */
  push32((uint32_t)(ECX));
  /* 1008d050 mov ebx, 0x10093144 */
  EBX = (0x10093144u);
  /* 1008d055 mov ecx, dword ptr [ebp + 8] */
  ECX = (r32((uint32_t)(EBP + 0x8)));
  /* 1008d058 mov dword ptr [ebx + 8], ecx */
  w32((uint32_t)(EBX + 0x8), (ECX));
  /* 1008d05b mov dword ptr [ebx + 4], eax */
  w32((uint32_t)(EBX + 0x4), (EAX));
  /* 1008d05e mov dword ptr [ebx + 0xc], ebp */
  w32((uint32_t)(EBX + 0xc), (EBP));
  /* 1008d061 pop ecx */
  ECX = (pop32());
  /* 1008d062 pop ebx */
  EBX = (pop32());
  /* 1008d063 ret 4 */
  ESPCHK(0x1008d04eu, _esp0);
  ESP += 8; return;
}

/* FUN_1000d12d @ 0x1008d12d (27 bytes, 11 insns) */
void f_1008d12d(void) {
  FTRACE(0x1008d12du);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008d12d push ebp */
  push32((uint32_t)(EBP));
  /* 1008d12e mov ecx, dword ptr [esp + 8] */
  ECX = (r32((uint32_t)(ESP + 0x8)));
  /* 1008d132 mov ebp, dword ptr [ecx] */
  EBP = (r32((uint32_t)(ECX)));
  /* 1008d134 mov eax, dword ptr [ecx + 0x1c] */
  EAX = (r32((uint32_t)(ECX + 0x1c)));
  /* 1008d137 push eax */
  push32((uint32_t)(EAX));
  /* 1008d138 mov eax, dword ptr [ecx + 0x18] */
  EAX = (r32((uint32_t)(ECX + 0x18)));
  /* 1008d13b push eax */
  push32((uint32_t)(EAX));
  /* 1008d13c call 0x1008cfba */
  push32(0x1008d141u); f_1008cfba();
  /* 1008d141 add esp, 8 */
  { uint32_t _a=(ESP),_b=(0x8u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008d144 pop ebp */
  EBP = (pop32());
  /* 1008d145 ret 4 */
  ESPCHK(0x1008d12du, _esp0);
  ESP += 8; return;
}

/* FUN_1000d148 @ 0x1008d148 (111 bytes, 44 insns) */
void f_1008d148(void) {
  FTRACE(0x1008d148u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008d148 push ebx */
  push32((uint32_t)(EBX));
  /* 1008d149 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1008d14b cmp dword ptr [0x10096878], ebx */
  { uint32_t _a=(r32((uint32_t)(0x10096878))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008d151 jne 0x1008d166 */
  if (!C.zf) goto L_1008d166;
  /* 1008d153 mov eax, dword ptr [esp + 8] */
  EAX = (r32((uint32_t)(ESP + 0x8)));
  /* 1008d157 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008d15a jl 0x1008d1b5 */
  if ((C.sf!=C.of)) goto L_1008d1b5;
  /* 1008d15c cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008d15f jg 0x1008d1b5 */
  if ((!C.zf&&C.sf==C.of)) goto L_1008d1b5;
  /* 1008d161 sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008d164 pop ebx */
  EBX = (pop32());
  /* 1008d165 ret  */
  ESPCHK(0x1008d148u, _esp0);
  ESP += 4; return;
L_1008d166:;
  /* 1008d166 push esi */
  push32((uint32_t)(ESI));
  /* 1008d167 mov esi, 0x100969f4 */
  ESI = (0x100969f4u);
  /* 1008d16c push edi */
  push32((uint32_t)(EDI));
  /* 1008d16d push esi */
  push32((uint32_t)(ESI));
  /* 1008d16e call dword ptr [0x1008e090] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e090))), 0x1008d174u);
  /* 1008d174 cmp dword ptr [0x100969f0], ebx */
  { uint32_t _a=(r32((uint32_t)(0x100969f0))),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008d17a mov edi, dword ptr [0x1008e08c] */
  EDI = (r32((uint32_t)(0x1008e08c)));
  /* 1008d180 je 0x1008d190 */
  if (C.zf) goto L_1008d190;
  /* 1008d182 push esi */
  push32((uint32_t)(ESI));
  /* 1008d183 call edi */
  call_ind((uint32_t)(EDI), 0x1008d185u);
  /* 1008d185 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1008d187 call 0x1008a053 */
  push32(0x1008d18cu); f_1008a053();
  /* 1008d18c pop ecx */
  ECX = (pop32());
  /* 1008d18d push 1 */
  push32((uint32_t)(0x1u));
  /* 1008d18f pop ebx */
  EBX = (pop32());
L_1008d190:;
  /* 1008d190 push dword ptr [esp + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESP + 0x10))));
  /* 1008d194 call 0x1008d1b7 */
  push32(0x1008d199u); f_1008d1b7();
  /* 1008d199 test ebx, ebx */
  { uint32_t _r=(EBX)&(EBX); fl_logic(_r,32); }
  /* 1008d19b pop ecx */
  ECX = (pop32());
  /* 1008d19c mov dword ptr [esp + 0x10], eax */
  w32((uint32_t)(ESP + 0x10), (EAX));
  /* 1008d1a0 je 0x1008d1ac */
  if (C.zf) goto L_1008d1ac;
  /* 1008d1a2 push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1008d1a4 call 0x1008a0b4 */
  push32(0x1008d1a9u); f_1008a0b4();
  /* 1008d1a9 pop ecx */
  ECX = (pop32());
  /* 1008d1aa jmp 0x1008d1af */
  goto L_1008d1af;
L_1008d1ac:;
  /* 1008d1ac push esi */
  push32((uint32_t)(ESI));
  /* 1008d1ad call edi */
  call_ind((uint32_t)(EDI), 0x1008d1afu);
L_1008d1af:;
  /* 1008d1af mov eax, dword ptr [esp + 0x10] */
  EAX = (r32((uint32_t)(ESP + 0x10)));
  /* 1008d1b3 pop edi */
  EDI = (pop32());
  /* 1008d1b4 pop esi */
  ESI = (pop32());
L_1008d1b5:;
  /* 1008d1b5 pop ebx */
  EBX = (pop32());
  /* 1008d1b6 ret  */
  ESPCHK(0x1008d148u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d1b7 @ 0x1008d1b7 (204 bytes, 71 insns) */
void f_1008d1b7(void) {
  FTRACE(0x1008d1b7u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008d1b7 push ebp */
  push32((uint32_t)(EBP));
  /* 1008d1b8 mov ebp, esp */
  EBP = (ESP);
  /* 1008d1ba push ecx */
  push32((uint32_t)(ECX));
  /* 1008d1bb cmp dword ptr [0x10096878], 0 */
  { uint32_t _a=(r32((uint32_t)(0x10096878))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008d1c2 push ebx */
  push32((uint32_t)(EBX));
  /* 1008d1c3 jne 0x1008d1e2 */
  if (!C.zf) goto L_1008d1e2;
  /* 1008d1c5 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1008d1c8 cmp eax, 0x61 */
  { uint32_t _a=(EAX),_b=(0x61u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008d1cb jl 0x1008d280 */
  if ((C.sf!=C.of)) goto L_1008d280;
  /* 1008d1d1 cmp eax, 0x7a */
  { uint32_t _a=(EAX),_b=(0x7au),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008d1d4 jg 0x1008d280 */
  if ((!C.zf&&C.sf==C.of)) goto L_1008d280;
  /* 1008d1da sub eax, 0x20 */
  { uint32_t _a=(EAX),_b=(0x20u),_r=_a-_b; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008d1dd jmp 0x1008d280 */
  goto L_1008d280;
L_1008d1e2:;
  /* 1008d1e2 mov ebx, dword ptr [ebp + 8] */
  EBX = (r32((uint32_t)(EBP + 0x8)));
  /* 1008d1e5 cmp ebx, 0x100 */
  { uint32_t _a=(EBX),_b=(0x100u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008d1eb jge 0x1008d215 */
  if ((C.sf==C.of)) goto L_1008d215;
  /* 1008d1ed cmp dword ptr [0x10090c20], 1 */
  { uint32_t _a=(r32((uint32_t)(0x10090c20))),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008d1f4 jle 0x1008d202 */
  if ((C.zf||C.sf!=C.of)) goto L_1008d202;
  /* 1008d1f6 push 2 */
  push32((uint32_t)(0x2u));
  /* 1008d1f8 push ebx */
  push32((uint32_t)(EBX));
  /* 1008d1f9 call 0x1008940b */
  push32(0x1008d1feu); f_1008940b();
  /* 1008d1fe pop ecx */
  ECX = (pop32());
  /* 1008d1ff pop ecx */
  ECX = (pop32());
  /* 1008d200 jmp 0x1008d20d */
  goto L_1008d20d;
L_1008d202:;
  /* 1008d202 mov eax, dword ptr [0x10090a10] */
  EAX = (r32((uint32_t)(0x10090a10)));
  /* 1008d207 mov al, byte ptr [eax + ebx*2] */
  AL = (r8((uint32_t)(EAX + EBX*2)));
  /* 1008d20a and eax, 2 */
  { uint32_t _r=(EAX)&(0x2u); EAX = (_r); fl_logic(_r,32); }
L_1008d20d:;
  /* 1008d20d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008d20f jne 0x1008d215 */
  if (!C.zf) goto L_1008d215;
L_1008d211:;
  /* 1008d211 mov eax, ebx */
  EAX = (EBX);
  /* 1008d213 jmp 0x1008d280 */
  goto L_1008d280;
L_1008d215:;
  /* 1008d215 mov edx, dword ptr [0x10090a10] */
  EDX = (r32((uint32_t)(0x10090a10)));
  /* 1008d21b mov eax, ebx */
  EAX = (EBX);
  /* 1008d21d sar eax, 8 */
  EAX = (sh_sar((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1008d220 movzx ecx, al */
  ECX = ((uint32_t)(AL));
  /* 1008d223 test byte ptr [edx + ecx*2 + 1], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EDX + ECX*2 + 0x1)))&(0x80u); fl_logic(_r,8); }
  /* 1008d228 je 0x1008d238 */
  if (C.zf) goto L_1008d238;
  /* 1008d22a and byte ptr [ebp + 0xa], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0xa)))&(0x0u); w8((uint32_t)(EBP + 0xa), (_r)); fl_logic(_r,8); }
  /* 1008d22e mov byte ptr [ebp + 8], al */
  w8((uint32_t)(EBP + 0x8), (AL));
  /* 1008d231 mov byte ptr [ebp + 9], bl */
  w8((uint32_t)(EBP + 0x9), (BL));
  /* 1008d234 push 2 */
  push32((uint32_t)(0x2u));
  /* 1008d236 jmp 0x1008d241 */
  goto L_1008d241;
L_1008d238:;
  /* 1008d238 and byte ptr [ebp + 9], 0 */
  { uint32_t _r=(r8((uint32_t)(EBP + 0x9)))&(0x0u); w8((uint32_t)(EBP + 0x9), (_r)); fl_logic(_r,8); }
  /* 1008d23c mov byte ptr [ebp + 8], bl */
  w8((uint32_t)(EBP + 0x8), (BL));
  /* 1008d23f push 1 */
  push32((uint32_t)(0x1u));
L_1008d241:;
  /* 1008d241 pop eax */
  EAX = (pop32());
  /* 1008d242 lea ecx, [ebp - 4] */
  ECX = ((uint32_t)(EBP + -0x4));
  /* 1008d245 push 1 */
  push32((uint32_t)(0x1u));
  /* 1008d247 push 0 */
  push32((uint32_t)(0x0u));
  /* 1008d249 push 3 */
  push32((uint32_t)(0x3u));
  /* 1008d24b push ecx */
  push32((uint32_t)(ECX));
  /* 1008d24c push eax */
  push32((uint32_t)(EAX));
  /* 1008d24d lea eax, [ebp + 8] */
  EAX = ((uint32_t)(EBP + 0x8));
  /* 1008d250 push eax */
  push32((uint32_t)(EAX));
  /* 1008d251 push 0x200 */
  push32((uint32_t)(0x200u));
  /* 1008d256 push dword ptr [0x10096878] */
  push32((uint32_t)(r32((uint32_t)(0x10096878))));
  /* 1008d25c call 0x1008c406 */
  push32(0x1008d261u); f_1008c406();
  /* 1008d261 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008d264 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008d266 je 0x1008d211 */
  if (C.zf) goto L_1008d211;
  /* 1008d268 cmp eax, 1 */
  { uint32_t _a=(EAX),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008d26b jne 0x1008d273 */
  if (!C.zf) goto L_1008d273;
  /* 1008d26d movzx eax, byte ptr [ebp - 4] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1008d271 jmp 0x1008d280 */
  goto L_1008d280;
L_1008d273:;
  /* 1008d273 movzx eax, byte ptr [ebp - 3] */
  EAX = ((uint32_t)(r8((uint32_t)(EBP + -0x3))));
  /* 1008d277 movzx ecx, byte ptr [ebp - 4] */
  ECX = ((uint32_t)(r8((uint32_t)(EBP + -0x4))));
  /* 1008d27b shl eax, 8 */
  EAX = (sh_shl((uint32_t)(EAX), (0x8u)&0x1f, 32));
  /* 1008d27e or eax, ecx */
  { uint32_t _r=(EAX)|(ECX); EAX = (_r); fl_logic(_r,32); }
L_1008d280:;
  /* 1008d280 pop ebx */
  EBX = (pop32());
  /* 1008d281 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1008d282 ret  */
  ESPCHK(0x1008d1b7u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d283 @ 0x1008d283 (49 bytes, 20 insns) */
void f_1008d283(void) {
  FTRACE(0x1008d283u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008d283 push esi */
  push32((uint32_t)(ESI));
  /* 1008d284 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1008d288 push edi */
  push32((uint32_t)(EDI));
  /* 1008d289 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 1008d28c test byte ptr [esi + 0xc], 0x40 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x40u); fl_logic(_r,8); }
  /* 1008d290 je 0x1008d298 */
  if (C.zf) goto L_1008d298;
  /* 1008d292 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 1008d296 jmp 0x1008d2af */
  goto L_1008d2af;
L_1008d298:;
  /* 1008d298 push esi */
  push32((uint32_t)(ESI));
  /* 1008d299 call 0x10088fce */
  push32(0x1008d29eu); f_10088fce();
  /* 1008d29e push esi */
  push32((uint32_t)(ESI));
  /* 1008d29f call 0x1008d2b4 */
  push32(0x1008d2a4u); f_1008d2b4();
  /* 1008d2a4 push esi */
  push32((uint32_t)(ESI));
  /* 1008d2a5 mov edi, eax */
  EDI = (EAX);
  /* 1008d2a7 call 0x10089020 */
  push32(0x1008d2acu); f_10089020();
  /* 1008d2ac add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1008d2af:;
  /* 1008d2af mov eax, edi */
  EAX = (EDI);
  /* 1008d2b1 pop edi */
  EDI = (pop32());
  /* 1008d2b2 pop esi */
  ESI = (pop32());
  /* 1008d2b3 ret  */
  ESPCHK(0x1008d283u, _esp0);
  ESP += 4; return;
}

/* __fclose_lk @ 0x1008d2b4 (76 bytes, 30 insns) */
void f_1008d2b4(void) {
  FTRACE(0x1008d2b4u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008d2b4 push esi */
  push32((uint32_t)(ESI));
  /* 1008d2b5 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1008d2b9 push edi */
  push32((uint32_t)(EDI));
  /* 1008d2ba or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 1008d2bd test byte ptr [esi + 0xc], 0x83 */
  { uint32_t _r=(r8((uint32_t)(ESI + 0xc)))&(0x83u); fl_logic(_r,8); }
  /* 1008d2c1 je 0x1008d2f7 */
  if (C.zf) goto L_1008d2f7;
  /* 1008d2c3 push esi */
  push32((uint32_t)(ESI));
  /* 1008d2c4 call 0x1008c1b4 */
  push32(0x1008d2c9u); f_1008c1b4();
  /* 1008d2c9 push esi */
  push32((uint32_t)(ESI));
  /* 1008d2ca mov edi, eax */
  EDI = (EAX);
  /* 1008d2cc call 0x1008d826 */
  push32(0x1008d2d1u); f_1008d826();
  /* 1008d2d1 push dword ptr [esi + 0x10] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x10))));
  /* 1008d2d4 call 0x1008d746 */
  push32(0x1008d2d9u); f_1008d746();
  /* 1008d2d9 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008d2dc test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008d2de jge 0x1008d2e5 */
  if ((C.sf==C.of)) goto L_1008d2e5;
  /* 1008d2e0 or edi, 0xffffffff */
  { uint32_t _r=(EDI)|(0xffffffffu); EDI = (_r); fl_logic(_r,32); }
  /* 1008d2e3 jmp 0x1008d2f7 */
  goto L_1008d2f7;
L_1008d2e5:;
  /* 1008d2e5 mov eax, dword ptr [esi + 0x1c] */
  EAX = (r32((uint32_t)(ESI + 0x1c)));
  /* 1008d2e8 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008d2ea je 0x1008d2f7 */
  if (C.zf) goto L_1008d2f7;
  /* 1008d2ec push eax */
  push32((uint32_t)(EAX));
  /* 1008d2ed call 0x1008a206 */
  push32(0x1008d2f2u); f_1008a206();
  /* 1008d2f2 and dword ptr [esi + 0x1c], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x1c)))&(0x0u); w32((uint32_t)(ESI + 0x1c), (_r)); fl_logic(_r,32); }
  /* 1008d2f6 pop ecx */
  ECX = (pop32());
L_1008d2f7:;
  /* 1008d2f7 and dword ptr [esi + 0xc], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0xc)))&(0x0u); w32((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,32); }
  /* 1008d2fb mov eax, edi */
  EAX = (EDI);
  /* 1008d2fd pop edi */
  EDI = (pop32());
  /* 1008d2fe pop esi */
  ESI = (pop32());
  /* 1008d2ff ret  */
  ESPCHK(0x1008d2b4u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d300 @ 0x1008d300 (147 bytes, 52 insns) */
void f_1008d300(void) {
  FTRACE(0x1008d300u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008d300 push ebx */
  push32((uint32_t)(EBX));
  /* 1008d301 mov ebx, dword ptr [esp + 8] */
  EBX = (r32((uint32_t)(ESP + 0x8)));
  /* 1008d305 cmp ebx, dword ptr [0x10097d80] */
  { uint32_t _a=(EBX),_b=(r32((uint32_t)(0x10097d80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008d30b push esi */
  push32((uint32_t)(ESI));
  /* 1008d30c push edi */
  push32((uint32_t)(EDI));
  /* 1008d30d jae 0x1008d381 */
  if (!C.cf) goto L_1008d381;
  /* 1008d30f mov eax, ebx */
  EAX = (EBX);
  /* 1008d311 sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1008d314 lea edi, [eax*4 + 0x10097c80] */
  EDI = ((uint32_t)(EAX*4 + 0x10097c80));
  /* 1008d31b mov eax, ebx */
  EAX = (EBX);
  /* 1008d31d and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1008d320 lea esi, [eax + eax*8] */
  ESI = ((uint32_t)(EAX + EAX*8));
  /* 1008d323 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1008d325 shl esi, 2 */
  ESI = (sh_shl((uint32_t)(ESI), (0x2u)&0x1f, 32));
  /* 1008d328 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1008d32d je 0x1008d381 */
  if (C.zf) goto L_1008d381;
  /* 1008d32f push ebx */
  push32((uint32_t)(EBX));
  /* 1008d330 call 0x1008c084 */
  push32(0x1008d335u); f_1008c084();
  /* 1008d335 mov eax, dword ptr [edi] */
  EAX = (r32((uint32_t)(EDI)));
  /* 1008d337 pop ecx */
  ECX = (pop32());
  /* 1008d338 test byte ptr [eax + esi + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(EAX + ESI*1 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1008d33d je 0x1008d368 */
  if (C.zf) goto L_1008d368;
  /* 1008d33f push ebx */
  push32((uint32_t)(EBX));
  /* 1008d340 call 0x1008c042 */
  push32(0x1008d345u); f_1008c042();
  /* 1008d345 pop ecx */
  ECX = (pop32());
  /* 1008d346 push eax */
  push32((uint32_t)(EAX));
  /* 1008d347 call dword ptr [0x1008e0d0] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e0d0))), 0x1008d34du);
  /* 1008d34d test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008d34f jne 0x1008d35b */
  if (!C.zf) goto L_1008d35b;
  /* 1008d351 call dword ptr [0x1008e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e03c))), 0x1008d357u);
  /* 1008d357 mov esi, eax */
  ESI = (EAX);
  /* 1008d359 jmp 0x1008d35d */
  goto L_1008d35d;
L_1008d35b:;
  /* 1008d35b xor esi, esi */
  { uint32_t _r=(ESI)^(ESI); ESI = (_r); fl_logic(_r,32); }
L_1008d35d:;
  /* 1008d35d test esi, esi */
  { uint32_t _r=(ESI)&(ESI); fl_logic(_r,32); }
  /* 1008d35f je 0x1008d376 */
  if (C.zf) goto L_1008d376;
  /* 1008d361 call 0x1008bfba */
  push32(0x1008d366u); f_1008bfba();
  /* 1008d366 mov dword ptr [eax], esi */
  w32((uint32_t)(EAX), (ESI));
L_1008d368:;
  /* 1008d368 call 0x1008bfb1 */
  push32(0x1008d36du); f_1008bfb1();
  /* 1008d36d mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1008d373 or esi, 0xffffffff */
  { uint32_t _r=(ESI)|(0xffffffffu); ESI = (_r); fl_logic(_r,32); }
L_1008d376:;
  /* 1008d376 push ebx */
  push32((uint32_t)(EBX));
  /* 1008d377 call 0x1008c0e3 */
  push32(0x1008d37cu); f_1008c0e3();
  /* 1008d37c pop ecx */
  ECX = (pop32());
  /* 1008d37d mov eax, esi */
  EAX = (ESI);
  /* 1008d37f jmp 0x1008d38f */
  goto L_1008d38f;
L_1008d381:;
  /* 1008d381 call 0x1008bfb1 */
  push32(0x1008d386u); f_1008bfb1();
  /* 1008d386 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1008d38c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
L_1008d38f:;
  /* 1008d38f pop edi */
  EDI = (pop32());
  /* 1008d390 pop esi */
  ESI = (pop32());
  /* 1008d391 pop ebx */
  EBX = (pop32());
  /* 1008d392 ret  */
  ESPCHK(0x1008d300u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d430 @ 0x1008d430 (62 bytes, 35 insns) */
void f_1008d430(void) {
  FTRACE(0x1008d430u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008d430 push ebp */
  push32((uint32_t)(EBP));
  /* 1008d431 mov ebp, esp */
  EBP = (ESP);
  /* 1008d433 push esi */
  push32((uint32_t)(ESI));
  /* 1008d434 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1008d436 push eax */
  push32((uint32_t)(EAX));
  /* 1008d437 push eax */
  push32((uint32_t)(EAX));
  /* 1008d438 push eax */
  push32((uint32_t)(EAX));
  /* 1008d439 push eax */
  push32((uint32_t)(EAX));
  /* 1008d43a push eax */
  push32((uint32_t)(EAX));
  /* 1008d43b push eax */
  push32((uint32_t)(EAX));
  /* 1008d43c push eax */
  push32((uint32_t)(EAX));
  /* 1008d43d push eax */
  push32((uint32_t)(EAX));
  /* 1008d43e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1008d441 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1008d444:;
  /* 1008d444 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1008d446 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1008d448 je 0x1008d451 */
  if (C.zf) goto L_1008d451;
  /* 1008d44a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1008d44b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1008d44b");
  /* 1008d44f jmp 0x1008d444 */
  goto L_1008d444;
L_1008d451:;
  /* 1008d451 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1008d454 or ecx, 0xffffffff */
  { uint32_t _r=(ECX)|(0xffffffffu); ECX = (_r); fl_logic(_r,32); }
  /* 1008d457 nop  */
  /* nop */
L_1008d458:;
  /* 1008d458 inc ecx */
  { uint32_t _r=(ECX)+1; ECX = (_r); fl_inc(_r,32); }
  /* 1008d459 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1008d45b or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1008d45d je 0x1008d466 */
  if (C.zf) goto L_1008d466;
  /* 1008d45f inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1008d460 bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1008d460");
  /* 1008d464 jae 0x1008d458 */
  if (!C.cf) goto L_1008d458;
L_1008d466:;
  /* 1008d466 mov eax, ecx */
  EAX = (ECX);
  /* 1008d468 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008d46b pop esi */
  ESI = (pop32());
  /* 1008d46c leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1008d46d ret  */
  ESPCHK(0x1008d430u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d470 @ 0x1008d470 (58 bytes, 32 insns) */
void f_1008d470(void) {
  FTRACE(0x1008d470u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008d470 push ebp */
  push32((uint32_t)(EBP));
  /* 1008d471 mov ebp, esp */
  EBP = (ESP);
  /* 1008d473 push esi */
  push32((uint32_t)(ESI));
  /* 1008d474 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1008d476 push eax */
  push32((uint32_t)(EAX));
  /* 1008d477 push eax */
  push32((uint32_t)(EAX));
  /* 1008d478 push eax */
  push32((uint32_t)(EAX));
  /* 1008d479 push eax */
  push32((uint32_t)(EAX));
  /* 1008d47a push eax */
  push32((uint32_t)(EAX));
  /* 1008d47b push eax */
  push32((uint32_t)(EAX));
  /* 1008d47c push eax */
  push32((uint32_t)(EAX));
  /* 1008d47d push eax */
  push32((uint32_t)(EAX));
  /* 1008d47e mov edx, dword ptr [ebp + 0xc] */
  EDX = (r32((uint32_t)(EBP + 0xc)));
  /* 1008d481 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1008d484:;
  /* 1008d484 mov al, byte ptr [edx] */
  AL = (r8((uint32_t)(EDX)));
  /* 1008d486 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1008d488 je 0x1008d491 */
  if (C.zf) goto L_1008d491;
  /* 1008d48a inc edx */
  { uint32_t _r=(EDX)+1; EDX = (_r); fl_inc(_r,32); }
  /* 1008d48b bts dword ptr [esp], eax */
  x86_unimpl("bts @ 0x1008d48b");
  /* 1008d48f jmp 0x1008d484 */
  goto L_1008d484;
L_1008d491:;
  /* 1008d491 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
L_1008d494:;
  /* 1008d494 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1008d496 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1008d498 je 0x1008d4a4 */
  if (C.zf) goto L_1008d4a4;
  /* 1008d49a inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1008d49b bt dword ptr [esp], eax */
  x86_unimpl("bt @ 0x1008d49b");
  /* 1008d49f jae 0x1008d494 */
  if (!C.cf) goto L_1008d494;
  /* 1008d4a1 lea eax, [esi - 1] */
  EAX = ((uint32_t)(ESI + -0x1));
L_1008d4a4:;
  /* 1008d4a4 add esp, 0x20 */
  { uint32_t _a=(ESP),_b=(0x20u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008d4a7 pop esi */
  ESI = (pop32());
  /* 1008d4a8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1008d4a9 ret  */
  ESPCHK(0x1008d470u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d4aa @ 0x1008d4aa (544 bytes, 177 insns) */
void f_1008d4aa(void) {
  FTRACE(0x1008d4aau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008d4aa push ebp */
  push32((uint32_t)(EBP));
  /* 1008d4ab mov ebp, esp */
  EBP = (ESP);
  /* 1008d4ad sub esp, 0x24 */
  { uint32_t _a=(ESP),_b=(0x24u),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008d4b0 push ebx */
  push32((uint32_t)(EBX));
  /* 1008d4b1 mov ebx, dword ptr [ebp + 0xc] */
  EBX = (r32((uint32_t)(EBP + 0xc)));
  /* 1008d4b4 push esi */
  push32((uint32_t)(ESI));
  /* 1008d4b5 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1008d4b8 mov cx, word ptr [ebx + 0xa] */
  CX = (r16((uint32_t)(EBX + 0xa)));
  /* 1008d4bc xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1008d4be push edi */
  push32((uint32_t)(EDI));
  /* 1008d4bf mov dword ptr [ebp - 0x14], eax */
  w32((uint32_t)(EBP + -0x14), (EAX));
  /* 1008d4c2 mov dword ptr [ebp - 0x24], eax */
  w32((uint32_t)(EBP + -0x24), (EAX));
  /* 1008d4c5 mov dword ptr [ebp - 0x20], eax */
  w32((uint32_t)(EBP + -0x20), (EAX));
  /* 1008d4c8 mov dword ptr [ebp - 0x1c], eax */
  w32((uint32_t)(EBP + -0x1c), (EAX));
  /* 1008d4cb mov ax, word ptr [esi + 0xa] */
  AX = (r16((uint32_t)(ESI + 0xa)));
  /* 1008d4cf mov edi, ecx */
  EDI = (ECX);
  /* 1008d4d1 mov edx, 0x7fff */
  EDX = (0x7fffu);
  /* 1008d4d6 xor edi, eax */
  { uint32_t _r=(EDI)^(EAX); EDI = (_r); fl_logic(_r,32); }
  /* 1008d4d8 and eax, edx */
  { uint32_t _r=(EAX)&(EDX); EAX = (_r); fl_logic(_r,32); }
  /* 1008d4da and ecx, edx */
  { uint32_t _r=(ECX)&(EDX); ECX = (_r); fl_logic(_r,32); }
  /* 1008d4dc and edi, 0x8000 */
  { uint32_t _r=(EDI)&(0x8000u); EDI = (_r); fl_logic(_r,32); }
  /* 1008d4e2 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1008d4e6 lea edx, [ecx + eax] */
  EDX = ((uint32_t)(ECX + EAX*1));
  /* 1008d4e9 mov dword ptr [ebp + 8], edx */
  w32((uint32_t)(EBP + 0x8), (EDX));
  /* 1008d4ec jae 0x1008d6aa */
  if (!C.cf) goto L_1008d6aa;
  /* 1008d4f2 cmp cx, 0x7fff */
  { uint32_t _a=(CX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1008d4f7 jae 0x1008d6aa */
  if (!C.cf) goto L_1008d6aa;
  /* 1008d4fd cmp dx, 0xbffd */
  { uint32_t _a=(DX),_b=(0xbffdu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1008d502 ja 0x1008d6aa */
  if ((!C.cf&&!C.zf)) goto L_1008d6aa;
  /* 1008d508 cmp dx, 0x3fbf */
  { uint32_t _a=(DX),_b=(0x3fbfu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1008d50d ja 0x1008d513 */
  if ((!C.cf&&!C.zf)) goto L_1008d513;
  /* 1008d50f xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1008d511 jmp 0x1008d54d */
  goto L_1008d54d;
L_1008d513:;
  /* 1008d513 test ax, ax */
  { uint32_t _r=(AX)&(AX); fl_logic(_r,16); }
  /* 1008d516 mov edx, 0x7fffffff */
  EDX = (0x7fffffffu);
  /* 1008d51b jne 0x1008d535 */
  if (!C.zf) goto L_1008d535;
  /* 1008d51d inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 1008d520 test dword ptr [esi + 8], edx */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 1008d523 jne 0x1008d535 */
  if (!C.zf) goto L_1008d535;
  /* 1008d525 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1008d527 cmp dword ptr [esi + 4], eax */
  { uint32_t _a=(r32((uint32_t)(ESI + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008d52a jne 0x1008d537 */
  if (!C.zf) goto L_1008d537;
  /* 1008d52c cmp dword ptr [esi], eax */
  { uint32_t _a=(r32((uint32_t)(ESI))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008d52e jne 0x1008d537 */
  if (!C.zf) goto L_1008d537;
  /* 1008d530 jmp 0x1008d6a4 */
  goto L_1008d6a4;
L_1008d535:;
  /* 1008d535 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1008d537:;
  /* 1008d537 cmp cx, ax */
  { uint32_t _a=(CX),_b=(AX),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1008d53a jne 0x1008d55a */
  if (!C.zf) goto L_1008d55a;
  /* 1008d53c inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 1008d53f test dword ptr [ebx + 8], edx */
  { uint32_t _r=(r32((uint32_t)(EBX + 0x8)))&(EDX); fl_logic(_r,32); }
  /* 1008d542 jne 0x1008d55a */
  if (!C.zf) goto L_1008d55a;
  /* 1008d544 cmp dword ptr [ebx + 4], eax */
  { uint32_t _a=(r32((uint32_t)(EBX + 0x4))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008d547 jne 0x1008d55a */
  if (!C.zf) goto L_1008d55a;
  /* 1008d549 cmp dword ptr [ebx], eax */
  { uint32_t _a=(r32((uint32_t)(EBX))),_b=(EAX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008d54b jne 0x1008d55a */
  if (!C.zf) goto L_1008d55a;
L_1008d54d:;
  /* 1008d54d mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 1008d550 mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
  /* 1008d553 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1008d555 jmp 0x1008d6c5 */
  goto L_1008d6c5;
L_1008d55a:;
  /* 1008d55a mov dword ptr [ebp - 0x10], eax */
  w32((uint32_t)(EBP + -0x10), (EAX));
  /* 1008d55d lea eax, [ebp - 0x20] */
  EAX = ((uint32_t)(EBP + -0x20));
  /* 1008d560 mov dword ptr [ebp - 4], eax */
  w32((uint32_t)(EBP + -0x4), (EAX));
  /* 1008d563 mov dword ptr [ebp + 0xc], 5 */
  w32((uint32_t)(EBP + 0xc), (0x5u));
L_1008d56a:;
  /* 1008d56a mov eax, dword ptr [ebp - 0x10] */
  EAX = (r32((uint32_t)(EBP + -0x10)));
  /* 1008d56d add eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008d56f cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008d573 jle 0x1008d5be */
  if ((C.zf||C.sf!=C.of)) goto L_1008d5be;
  /* 1008d575 add eax, esi */
  { uint32_t _a=(EAX),_b=(ESI),_r=_a+_b; EAX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008d577 lea ecx, [ebx + 8] */
  ECX = ((uint32_t)(EBX + 0x8));
  /* 1008d57a mov dword ptr [ebp - 8], eax */
  w32((uint32_t)(EBP + -0x8), (EAX));
  /* 1008d57d mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1008d580 mov dword ptr [ebp - 0xc], ecx */
  w32((uint32_t)(EBP + -0xc), (ECX));
  /* 1008d583 mov dword ptr [ebp - 0x18], eax */
  w32((uint32_t)(EBP + -0x18), (EAX));
L_1008d586:;
  /* 1008d586 mov eax, dword ptr [ebp - 8] */
  EAX = (r32((uint32_t)(EBP + -0x8)));
  /* 1008d589 mov ecx, dword ptr [ebp - 0xc] */
  ECX = (r32((uint32_t)(EBP + -0xc)));
  /* 1008d58c movzx eax, word ptr [eax] */
  EAX = ((uint32_t)(r16((uint32_t)(EAX))));
  /* 1008d58f movzx ecx, word ptr [ecx] */
  ECX = ((uint32_t)(r16((uint32_t)(ECX))));
  /* 1008d592 imul eax, ecx */
  { int64_t _p=(int64_t)(int32_t)(ECX)*(int64_t)(int32_t)(EAX); EAX = ((uint32_t)_p); C.cf=C.of=((int64_t)(int32_t)(uint32_t)_p!=_p); }
  /* 1008d595 mov ecx, dword ptr [ebp - 4] */
  ECX = (r32((uint32_t)(EBP + -0x4)));
  /* 1008d598 add ecx, -4 */
  { uint32_t _a=(ECX),_b=(0xfffffffcu),_r=_a+_b; ECX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008d59b push ecx */
  push32((uint32_t)(ECX));
  /* 1008d59c push eax */
  push32((uint32_t)(EAX));
  /* 1008d59d push dword ptr [ecx] */
  push32((uint32_t)(r32((uint32_t)(ECX))));
  /* 1008d59f call 0x1008c655 */
  push32(0x1008d5a4u); f_1008c655();
  /* 1008d5a4 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008d5a7 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008d5a9 je 0x1008d5b1 */
  if (C.zf) goto L_1008d5b1;
  /* 1008d5ab mov eax, dword ptr [ebp - 4] */
  EAX = (r32((uint32_t)(EBP + -0x4)));
  /* 1008d5ae inc word ptr [eax] */
  { uint32_t _r=(r16((uint32_t)(EAX)))+1; w16((uint32_t)(EAX), (_r)); fl_inc(_r,16); }
L_1008d5b1:;
  /* 1008d5b1 add dword ptr [ebp - 8], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x8))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1008d5b5 sub dword ptr [ebp - 0xc], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0xc))),_b=(0x2u),_r=_a-_b; w32((uint32_t)(EBP + -0xc), (_r)); fl_sub(_a,_b,_r,32); }
  /* 1008d5b9 dec dword ptr [ebp - 0x18] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x18)))-1; w32((uint32_t)(EBP + -0x18), (_r)); fl_dec(_r,32); }
  /* 1008d5bc jne 0x1008d586 */
  if (!C.zf) goto L_1008d586;
L_1008d5be:;
  /* 1008d5be add dword ptr [ebp - 4], 2 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x4))),_b=(0x2u),_r=_a+_b; w32((uint32_t)(EBP + -0x4), (_r)); fl_add(_a,_b,_r,32); }
  /* 1008d5c2 inc dword ptr [ebp - 0x10] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x10)))+1; w32((uint32_t)(EBP + -0x10), (_r)); fl_inc(_r,32); }
  /* 1008d5c5 dec dword ptr [ebp + 0xc] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0xc)))-1; w32((uint32_t)(EBP + 0xc), (_r)); fl_dec(_r,32); }
  /* 1008d5c8 cmp dword ptr [ebp + 0xc], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008d5cc jg 0x1008d56a */
  if ((!C.zf&&C.sf==C.of)) goto L_1008d56a;
  /* 1008d5ce add dword ptr [ebp + 8], 0xc002 */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xc002u),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1008d5d5 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1008d5da jle 0x1008d601 */
  if ((C.zf||C.sf!=C.of)) goto L_1008d601;
L_1008d5dc:;
  /* 1008d5dc test byte ptr [ebp - 0x19], 0x80 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x19)))&(0x80u); fl_logic(_r,8); }
  /* 1008d5e0 jne 0x1008d5fa */
  if (!C.zf) goto L_1008d5fa;
  /* 1008d5e2 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 1008d5e5 push eax */
  push32((uint32_t)(EAX));
  /* 1008d5e6 call 0x1008c6d4 */
  push32(0x1008d5ebu); f_1008c6d4();
  /* 1008d5eb add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1008d5f2 pop ecx */
  ECX = (pop32());
  /* 1008d5f3 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1008d5f8 jg 0x1008d5dc */
  if ((!C.zf&&C.sf==C.of)) goto L_1008d5dc;
L_1008d5fa:;
  /* 1008d5fa cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1008d5ff jg 0x1008d63a */
  if ((!C.zf&&C.sf==C.of)) goto L_1008d63a;
L_1008d601:;
  /* 1008d601 add dword ptr [ebp + 8], 0xffff */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(0xffffu),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1008d608 cmp word ptr [ebp + 8], 0 */
  { uint32_t _a=(r16((uint32_t)(EBP + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1008d60d jge 0x1008d63a */
  if ((C.sf==C.of)) goto L_1008d63a;
  /* 1008d60f movsx eax, word ptr [ebp + 8] */
  EAX = ((uint32_t)(int32_t)(int16_t)(r16((uint32_t)(EBP + 0x8))));
  /* 1008d613 neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1008d615 add dword ptr [ebp + 8], eax */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x8))),_b=(EAX),_r=_a+_b; w32((uint32_t)(EBP + 0x8), (_r)); fl_add(_a,_b,_r,32); }
  /* 1008d618 mov ebx, eax */
  EBX = (EAX);
L_1008d61a:;
  /* 1008d61a test byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))&(0x1u); fl_logic(_r,8); }
  /* 1008d61e je 0x1008d623 */
  if (C.zf) goto L_1008d623;
  /* 1008d620 inc dword ptr [ebp - 0x14] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x14)))+1; w32((uint32_t)(EBP + -0x14), (_r)); fl_inc(_r,32); }
L_1008d623:;
  /* 1008d623 lea eax, [ebp - 0x24] */
  EAX = ((uint32_t)(EBP + -0x24));
  /* 1008d626 push eax */
  push32((uint32_t)(EAX));
  /* 1008d627 call 0x1008c702 */
  push32(0x1008d62cu); f_1008c702();
  /* 1008d62c dec ebx */
  { uint32_t _r=(EBX)-1; EBX = (_r); fl_dec(_r,32); }
  /* 1008d62d pop ecx */
  ECX = (pop32());
  /* 1008d62e jne 0x1008d61a */
  if (!C.zf) goto L_1008d61a;
  /* 1008d630 cmp dword ptr [ebp - 0x14], 0 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x14))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008d634 je 0x1008d63a */
  if (C.zf) goto L_1008d63a;
  /* 1008d636 or byte ptr [ebp - 0x24], 1 */
  { uint32_t _r=(r8((uint32_t)(EBP + -0x24)))|(0x1u); w8((uint32_t)(EBP + -0x24), (_r)); fl_logic(_r,8); }
L_1008d63a:;
  /* 1008d63a cmp word ptr [ebp - 0x24], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x24))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1008d640 ja 0x1008d651 */
  if ((!C.cf&&!C.zf)) goto L_1008d651;
  /* 1008d642 mov eax, dword ptr [ebp - 0x24] */
  EAX = (r32((uint32_t)(EBP + -0x24)));
  /* 1008d645 and eax, 0x1ffff */
  { uint32_t _r=(EAX)&(0x1ffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1008d64a cmp eax, 0x18000 */
  { uint32_t _a=(EAX),_b=(0x18000u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008d64f jne 0x1008d686 */
  if (!C.zf) goto L_1008d686;
L_1008d651:;
  /* 1008d651 cmp dword ptr [ebp - 0x22], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x22))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008d655 jne 0x1008d683 */
  if (!C.zf) goto L_1008d683;
  /* 1008d657 and dword ptr [ebp - 0x22], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))&(0x0u); w32((uint32_t)(EBP + -0x22), (_r)); fl_logic(_r,32); }
  /* 1008d65b cmp dword ptr [ebp - 0x1e], -1 */
  { uint32_t _a=(r32((uint32_t)(EBP + -0x1e))),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008d65f jne 0x1008d67e */
  if (!C.zf) goto L_1008d67e;
  /* 1008d661 and dword ptr [ebp - 0x1e], 0 */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))&(0x0u); w32((uint32_t)(EBP + -0x1e), (_r)); fl_logic(_r,32); }
  /* 1008d665 cmp word ptr [ebp - 0x1a], 0xffff */
  { uint32_t _a=(r16((uint32_t)(EBP + -0x1a))),_b=(0xffffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1008d66b jne 0x1008d678 */
  if (!C.zf) goto L_1008d678;
  /* 1008d66d inc dword ptr [ebp + 8] */
  { uint32_t _r=(r32((uint32_t)(EBP + 0x8)))+1; w32((uint32_t)(EBP + 0x8), (_r)); fl_inc(_r,32); }
  /* 1008d670 mov word ptr [ebp - 0x1a], 0x8000 */
  w16((uint32_t)(EBP + -0x1a), (0x8000u));
  /* 1008d676 jmp 0x1008d686 */
  goto L_1008d686;
L_1008d678:;
  /* 1008d678 inc word ptr [ebp - 0x1a] */
  { uint32_t _r=(r16((uint32_t)(EBP + -0x1a)))+1; w16((uint32_t)(EBP + -0x1a), (_r)); fl_inc(_r,16); }
  /* 1008d67c jmp 0x1008d686 */
  goto L_1008d686;
L_1008d67e:;
  /* 1008d67e inc dword ptr [ebp - 0x1e] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x1e)))+1; w32((uint32_t)(EBP + -0x1e), (_r)); fl_inc(_r,32); }
  /* 1008d681 jmp 0x1008d686 */
  goto L_1008d686;
L_1008d683:;
  /* 1008d683 inc dword ptr [ebp - 0x22] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0x22)))+1; w32((uint32_t)(EBP + -0x22), (_r)); fl_inc(_r,32); }
L_1008d686:;
  /* 1008d686 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1008d689 cmp ax, 0x7fff */
  { uint32_t _a=(AX),_b=(0x7fffu),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1008d68d jae 0x1008d6aa */
  if (!C.cf) goto L_1008d6aa;
  /* 1008d68f mov cx, word ptr [ebp - 0x22] */
  CX = (r16((uint32_t)(EBP + -0x22)));
  /* 1008d693 or eax, edi */
  { uint32_t _r=(EAX)|(EDI); EAX = (_r); fl_logic(_r,32); }
  /* 1008d695 mov word ptr [esi], cx */
  w16((uint32_t)(ESI), (CX));
  /* 1008d698 mov ecx, dword ptr [ebp - 0x20] */
  ECX = (r32((uint32_t)(EBP + -0x20)));
  /* 1008d69b mov dword ptr [esi + 2], ecx */
  w32((uint32_t)(ESI + 0x2), (ECX));
  /* 1008d69e mov ecx, dword ptr [ebp - 0x1c] */
  ECX = (r32((uint32_t)(EBP + -0x1c)));
  /* 1008d6a1 mov dword ptr [esi + 6], ecx */
  w32((uint32_t)(ESI + 0x6), (ECX));
L_1008d6a4:;
  /* 1008d6a4 mov word ptr [esi + 0xa], ax */
  w16((uint32_t)(ESI + 0xa), (AX));
  /* 1008d6a8 jmp 0x1008d6c5 */
  goto L_1008d6c5;
L_1008d6aa:;
  /* 1008d6aa neg di */
  { uint32_t _a=(DI),_r=0u-_a; DI = (_r); fl_sub(0,_a,_r,16); }
  /* 1008d6ad sbb edi, edi */
  { uint32_t _a=(EDI),_b=(EDI),_r=_a-_b-C.cf; EDI = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008d6af and dword ptr [esi + 4], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI + 0x4)))&(0x0u); w32((uint32_t)(ESI + 0x4), (_r)); fl_logic(_r,32); }
  /* 1008d6b3 and edi, 0x80000000 */
  { uint32_t _r=(EDI)&(0x80000000u); EDI = (_r); fl_logic(_r,32); }
  /* 1008d6b9 add edi, 0x7fff8000 */
  { uint32_t _a=(EDI),_b=(0x7fff8000u),_r=_a+_b; EDI = (_r); fl_add(_a,_b,_r,32); }
  /* 1008d6bf and dword ptr [esi], 0 */
  { uint32_t _r=(r32((uint32_t)(ESI)))&(0x0u); w32((uint32_t)(ESI), (_r)); fl_logic(_r,32); }
  /* 1008d6c2 mov dword ptr [esi + 8], edi */
  w32((uint32_t)(ESI + 0x8), (EDI));
L_1008d6c5:;
  /* 1008d6c5 pop edi */
  EDI = (pop32());
  /* 1008d6c6 pop esi */
  ESI = (pop32());
  /* 1008d6c7 pop ebx */
  EBX = (pop32());
  /* 1008d6c8 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1008d6c9 ret  */
  ESPCHK(0x1008d4aau, _esp0);
  ESP += 4; return;
}

/* FUN_1000d6ca @ 0x1008d6ca (124 bytes, 52 insns) */
void f_1008d6ca(void) {
  FTRACE(0x1008d6cau);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008d6ca push ebp */
  push32((uint32_t)(EBP));
  /* 1008d6cb mov ebp, esp */
  EBP = (ESP);
  /* 1008d6cd sub esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a-_b; ESP = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008d6d0 push ebx */
  push32((uint32_t)(EBX));
  /* 1008d6d1 mov ebx, 0x10093260 */
  EBX = (0x10093260u);
  /* 1008d6d6 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1008d6d8 sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008d6db cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008d6de je 0x1008d743 */
  if (C.zf) goto L_1008d743;
  /* 1008d6e0 jge 0x1008d6f2 */
  if ((C.sf==C.of)) goto L_1008d6f2;
  /* 1008d6e2 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1008d6e5 mov ebx, 0x100933c0 */
  EBX = (0x100933c0u);
  /* 1008d6ea neg eax */
  { uint32_t _a=(EAX),_r=0u-_a; EAX = (_r); fl_sub(0,_a,_r,32); }
  /* 1008d6ec mov dword ptr [ebp + 0xc], eax */
  w32((uint32_t)(EBP + 0xc), (EAX));
  /* 1008d6ef sub ebx, 0x60 */
  { uint32_t _a=(EBX),_b=(0x60u),_r=_a-_b; EBX = (_r); fl_sub(_a,_b,_r,32); }
L_1008d6f2:;
  /* 1008d6f2 cmp dword ptr [ebp + 0x10], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0x10))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008d6f5 jne 0x1008d6fd */
  if (!C.zf) goto L_1008d6fd;
  /* 1008d6f7 mov eax, dword ptr [ebp + 8] */
  EAX = (r32((uint32_t)(EBP + 0x8)));
  /* 1008d6fa mov word ptr [eax], cx */
  w16((uint32_t)(EAX), (CX));
L_1008d6fd:;
  /* 1008d6fd cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008d700 je 0x1008d743 */
  if (C.zf) goto L_1008d743;
  /* 1008d702 push esi */
  push32((uint32_t)(ESI));
  /* 1008d703 push edi */
  push32((uint32_t)(EDI));
L_1008d704:;
  /* 1008d704 mov eax, dword ptr [ebp + 0xc] */
  EAX = (r32((uint32_t)(EBP + 0xc)));
  /* 1008d707 add ebx, 0x54 */
  { uint32_t _a=(EBX),_b=(0x54u),_r=_a+_b; EBX = (_r); fl_add(_a,_b,_r,32); }
  /* 1008d70a sar dword ptr [ebp + 0xc], 3 */
  w32((uint32_t)(EBP + 0xc), (sh_sar((uint32_t)(r32((uint32_t)(EBP + 0xc))), (0x3u)&0x1f, 32)));
  /* 1008d70e and eax, 7 */
  { uint32_t _r=(EAX)&(0x7u); EAX = (_r); fl_logic(_r,32); }
  /* 1008d711 cmp eax, ecx */
  { uint32_t _a=(EAX),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008d713 je 0x1008d73c */
  if (C.zf) goto L_1008d73c;
  /* 1008d715 lea eax, [eax + eax*2] */
  EAX = ((uint32_t)(EAX + EAX*2));
  /* 1008d718 cmp word ptr [ebx + eax*4], 0x8000 */
  { uint32_t _a=(r16((uint32_t)(EBX + EAX*4))),_b=(0x8000u),_r=_a-_b; fl_sub(_a,_b,_r,16); }
  /* 1008d71e lea esi, [ebx + eax*4] */
  ESI = ((uint32_t)(EBX + EAX*4));
  /* 1008d721 jb 0x1008d72f */
  if (C.cf) goto L_1008d72f;
  /* 1008d723 lea edi, [ebp - 0xc] */
  EDI = ((uint32_t)(EBP + -0xc));
  /* 1008d726 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1008d727 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1008d728 movsd dword ptr es:[edi], dword ptr [esi] */
  w32(EDI, r32(ESI)); ESI+=(C.df?-4:4); EDI+=(C.df?-4:4);
  /* 1008d729 dec dword ptr [ebp - 0xa] */
  { uint32_t _r=(r32((uint32_t)(EBP + -0xa)))-1; w32((uint32_t)(EBP + -0xa), (_r)); fl_dec(_r,32); }
  /* 1008d72c lea esi, [ebp - 0xc] */
  ESI = ((uint32_t)(EBP + -0xc));
L_1008d72f:;
  /* 1008d72f push esi */
  push32((uint32_t)(ESI));
  /* 1008d730 push dword ptr [ebp + 8] */
  push32((uint32_t)(r32((uint32_t)(EBP + 0x8))));
  /* 1008d733 call 0x1008d4aa */
  push32(0x1008d738u); f_1008d4aa();
  /* 1008d738 pop ecx */
  ECX = (pop32());
  /* 1008d739 pop ecx */
  ECX = (pop32());
  /* 1008d73a xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
L_1008d73c:;
  /* 1008d73c cmp dword ptr [ebp + 0xc], ecx */
  { uint32_t _a=(r32((uint32_t)(EBP + 0xc))),_b=(ECX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008d73f jne 0x1008d704 */
  if (!C.zf) goto L_1008d704;
  /* 1008d741 pop edi */
  EDI = (pop32());
  /* 1008d742 pop esi */
  ESI = (pop32());
L_1008d743:;
  /* 1008d743 pop ebx */
  EBX = (pop32());
  /* 1008d744 leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1008d745 ret  */
  ESPCHK(0x1008d6cau, _esp0);
  ESP += 4; return;
}

/* FUN_1000d746 @ 0x1008d746 (93 bytes, 32 insns) */
void f_1008d746(void) {
  FTRACE(0x1008d746u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008d746 push esi */
  push32((uint32_t)(ESI));
  /* 1008d747 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1008d74b cmp esi, dword ptr [0x10097d80] */
  { uint32_t _a=(ESI),_b=(r32((uint32_t)(0x10097d80))),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008d751 jae 0x1008d78b */
  if (!C.cf) goto L_1008d78b;
  /* 1008d753 mov ecx, esi */
  ECX = (ESI);
  /* 1008d755 mov eax, esi */
  EAX = (ESI);
  /* 1008d757 sar ecx, 5 */
  ECX = (sh_sar((uint32_t)(ECX), (0x5u)&0x1f, 32));
  /* 1008d75a and eax, 0x1f */
  { uint32_t _r=(EAX)&(0x1fu); EAX = (_r); fl_logic(_r,32); }
  /* 1008d75d mov ecx, dword ptr [ecx*4 + 0x10097c80] */
  ECX = (r32((uint32_t)(ECX*4 + 0x10097c80)));
  /* 1008d764 lea eax, [eax + eax*8] */
  EAX = ((uint32_t)(EAX + EAX*8));
  /* 1008d767 test byte ptr [ecx + eax*4 + 4], 1 */
  { uint32_t _r=(r8((uint32_t)(ECX + EAX*4 + 0x4)))&(0x1u); fl_logic(_r,8); }
  /* 1008d76c je 0x1008d78b */
  if (C.zf) goto L_1008d78b;
  /* 1008d76e push edi */
  push32((uint32_t)(EDI));
  /* 1008d76f push esi */
  push32((uint32_t)(ESI));
  /* 1008d770 call 0x1008c084 */
  push32(0x1008d775u); f_1008c084();
  /* 1008d775 push esi */
  push32((uint32_t)(ESI));
  /* 1008d776 call 0x1008d7a3 */
  push32(0x1008d77bu); f_1008d7a3();
  /* 1008d77b push esi */
  push32((uint32_t)(ESI));
  /* 1008d77c mov edi, eax */
  EDI = (EAX);
  /* 1008d77e call 0x1008c0e3 */
  push32(0x1008d783u); f_1008c0e3();
  /* 1008d783 add esp, 0xc */
  { uint32_t _a=(ESP),_b=(0xcu),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008d786 mov eax, edi */
  EAX = (EDI);
  /* 1008d788 pop edi */
  EDI = (pop32());
  /* 1008d789 pop esi */
  ESI = (pop32());
  /* 1008d78a ret  */
  ESPCHK(0x1008d746u, _esp0);
  ESP += 4; return;
L_1008d78b:;
  /* 1008d78b call 0x1008bfb1 */
  push32(0x1008d790u); f_1008bfb1();
  /* 1008d790 mov dword ptr [eax], 9 */
  w32((uint32_t)(EAX), (0x9u));
  /* 1008d796 call 0x1008bfba */
  push32(0x1008d79bu); f_1008bfba();
  /* 1008d79b and dword ptr [eax], 0 */
  { uint32_t _r=(r32((uint32_t)(EAX)))&(0x0u); w32((uint32_t)(EAX), (_r)); fl_logic(_r,32); }
  /* 1008d79e or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1008d7a1 pop esi */
  ESI = (pop32());
  /* 1008d7a2 ret  */
  ESPCHK(0x1008d746u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d7a3 @ 0x1008d7a3 (131 bytes, 52 insns) */
void f_1008d7a3(void) {
  FTRACE(0x1008d7a3u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008d7a3 push esi */
  push32((uint32_t)(ESI));
  /* 1008d7a4 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1008d7a8 push edi */
  push32((uint32_t)(EDI));
  /* 1008d7a9 push esi */
  push32((uint32_t)(ESI));
  /* 1008d7aa call 0x1008c042 */
  push32(0x1008d7afu); f_1008c042();
  /* 1008d7af cmp eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008d7b2 pop ecx */
  ECX = (pop32());
  /* 1008d7b3 je 0x1008d7f1 */
  if (C.zf) goto L_1008d7f1;
  /* 1008d7b5 cmp esi, 1 */
  { uint32_t _a=(ESI),_b=(0x1u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008d7b8 je 0x1008d7bf */
  if (C.zf) goto L_1008d7bf;
  /* 1008d7ba cmp esi, 2 */
  { uint32_t _a=(ESI),_b=(0x2u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008d7bd jne 0x1008d7d5 */
  if (!C.zf) goto L_1008d7d5;
L_1008d7bf:;
  /* 1008d7bf push 2 */
  push32((uint32_t)(0x2u));
  /* 1008d7c1 call 0x1008c042 */
  push32(0x1008d7c6u); f_1008c042();
  /* 1008d7c6 push 1 */
  push32((uint32_t)(0x1u));
  /* 1008d7c8 mov edi, eax */
  EDI = (EAX);
  /* 1008d7ca call 0x1008c042 */
  push32(0x1008d7cfu); f_1008c042();
  /* 1008d7cf pop ecx */
  ECX = (pop32());
  /* 1008d7d0 cmp eax, edi */
  { uint32_t _a=(EAX),_b=(EDI),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008d7d2 pop ecx */
  ECX = (pop32());
  /* 1008d7d3 je 0x1008d7f1 */
  if (C.zf) goto L_1008d7f1;
L_1008d7d5:;
  /* 1008d7d5 push esi */
  push32((uint32_t)(ESI));
  /* 1008d7d6 call 0x1008c042 */
  push32(0x1008d7dbu); f_1008c042();
  /* 1008d7db pop ecx */
  ECX = (pop32());
  /* 1008d7dc push eax */
  push32((uint32_t)(EAX));
  /* 1008d7dd call dword ptr [0x1008e0d4] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e0d4))), 0x1008d7e3u);
  /* 1008d7e3 test eax, eax */
  { uint32_t _r=(EAX)&(EAX); fl_logic(_r,32); }
  /* 1008d7e5 jne 0x1008d7f1 */
  if (!C.zf) goto L_1008d7f1;
  /* 1008d7e7 call dword ptr [0x1008e03c] */
  call_ind((uint32_t)(r32((uint32_t)(0x1008e03c))), 0x1008d7edu);
  /* 1008d7ed mov edi, eax */
  EDI = (EAX);
  /* 1008d7ef jmp 0x1008d7f3 */
  goto L_1008d7f3;
L_1008d7f1:;
  /* 1008d7f1 xor edi, edi */
  { uint32_t _r=(EDI)^(EDI); EDI = (_r); fl_logic(_r,32); }
L_1008d7f3:;
  /* 1008d7f3 push esi */
  push32((uint32_t)(ESI));
  /* 1008d7f4 call 0x1008bfc3 */
  push32(0x1008d7f9u); f_1008bfc3();
  /* 1008d7f9 mov eax, esi */
  EAX = (ESI);
  /* 1008d7fb and esi, 0x1f */
  { uint32_t _r=(ESI)&(0x1fu); ESI = (_r); fl_logic(_r,32); }
  /* 1008d7fe sar eax, 5 */
  EAX = (sh_sar((uint32_t)(EAX), (0x5u)&0x1f, 32));
  /* 1008d801 pop ecx */
  ECX = (pop32());
  /* 1008d802 mov eax, dword ptr [eax*4 + 0x10097c80] */
  EAX = (r32((uint32_t)(EAX*4 + 0x10097c80)));
  /* 1008d809 lea ecx, [esi + esi*8] */
  ECX = ((uint32_t)(ESI + ESI*8));
  /* 1008d80c and byte ptr [eax + ecx*4 + 4], 0 */
  { uint32_t _r=(r8((uint32_t)(EAX + ECX*4 + 0x4)))&(0x0u); w8((uint32_t)(EAX + ECX*4 + 0x4), (_r)); fl_logic(_r,8); }
  /* 1008d811 test edi, edi */
  { uint32_t _r=(EDI)&(EDI); fl_logic(_r,32); }
  /* 1008d813 je 0x1008d821 */
  if (C.zf) goto L_1008d821;
  /* 1008d815 push edi */
  push32((uint32_t)(EDI));
  /* 1008d816 call 0x1008bf3e */
  push32(0x1008d81bu); f_1008bf3e();
  /* 1008d81b pop ecx */
  ECX = (pop32());
  /* 1008d81c or eax, 0xffffffff */
  { uint32_t _r=(EAX)|(0xffffffffu); EAX = (_r); fl_logic(_r,32); }
  /* 1008d81f jmp 0x1008d823 */
  goto L_1008d823;
L_1008d821:;
  /* 1008d821 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
L_1008d823:;
  /* 1008d823 pop edi */
  EDI = (pop32());
  /* 1008d824 pop esi */
  ESI = (pop32());
  /* 1008d825 ret  */
  ESPCHK(0x1008d7a3u, _esp0);
  ESP += 4; return;
}

/* __freebuf @ 0x1008d826 (43 bytes, 17 insns) */
void f_1008d826(void) {
  FTRACE(0x1008d826u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008d826 push esi */
  push32((uint32_t)(ESI));
  /* 1008d827 mov esi, dword ptr [esp + 8] */
  ESI = (r32((uint32_t)(ESP + 0x8)));
  /* 1008d82b mov eax, dword ptr [esi + 0xc] */
  EAX = (r32((uint32_t)(ESI + 0xc)));
  /* 1008d82e test al, 0x83 */
  { uint32_t _r=(AL)&(0x83u); fl_logic(_r,8); }
  /* 1008d830 je 0x1008d84f */
  if (C.zf) goto L_1008d84f;
  /* 1008d832 test al, 8 */
  { uint32_t _r=(AL)&(0x8u); fl_logic(_r,8); }
  /* 1008d834 je 0x1008d84f */
  if (C.zf) goto L_1008d84f;
  /* 1008d836 push dword ptr [esi + 8] */
  push32((uint32_t)(r32((uint32_t)(ESI + 0x8))));
  /* 1008d839 call 0x1008a206 */
  push32(0x1008d83eu); f_1008a206();
  /* 1008d83e and word ptr [esi + 0xc], 0xfbf7 */
  { uint32_t _r=(r16((uint32_t)(ESI + 0xc)))&(0xfbf7u); w16((uint32_t)(ESI + 0xc), (_r)); fl_logic(_r,16); }
  /* 1008d844 xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1008d846 pop ecx */
  ECX = (pop32());
  /* 1008d847 mov dword ptr [esi], eax */
  w32((uint32_t)(ESI), (EAX));
  /* 1008d849 mov dword ptr [esi + 8], eax */
  w32((uint32_t)(ESI + 0x8), (EAX));
  /* 1008d84c mov dword ptr [esi + 4], eax */
  w32((uint32_t)(ESI + 0x4), (EAX));
L_1008d84f:;
  /* 1008d84f pop esi */
  ESI = (pop32());
  /* 1008d850 ret  */
  ESPCHK(0x1008d826u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d860 @ 0x1008d860 (208 bytes, 85 insns) */
void f_1008d860(void) {
  FTRACE(0x1008d860u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008d860 push ebp */
  push32((uint32_t)(EBP));
  /* 1008d861 mov ebp, esp */
  EBP = (ESP);
  /* 1008d863 push edi */
  push32((uint32_t)(EDI));
  /* 1008d864 push esi */
  push32((uint32_t)(ESI));
  /* 1008d865 push ebx */
  push32((uint32_t)(EBX));
  /* 1008d866 mov esi, dword ptr [ebp + 0xc] */
  ESI = (r32((uint32_t)(EBP + 0xc)));
  /* 1008d869 mov edi, dword ptr [ebp + 8] */
  EDI = (r32((uint32_t)(EBP + 0x8)));
  /* 1008d86c lea eax, [0x10096870] */
  EAX = ((uint32_t)(0x10096870));
  /* 1008d872 cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008d876 jne 0x1008d8b3 */
  if (!C.zf) goto L_1008d8b3;
  /* 1008d878 mov al, 0xff */
  AL = (0xffu);
  /* 1008d87a mov edi, edi */
  EDI = (EDI);
L_1008d87c:;
  /* 1008d87c or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1008d87e je 0x1008d8ae */
  if (C.zf) goto L_1008d8ae;
  /* 1008d880 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1008d882 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1008d883 mov ah, byte ptr [edi] */
  AH = (r8((uint32_t)(EDI)));
  /* 1008d885 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1008d886 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008d888 je 0x1008d87c */
  if (C.zf) goto L_1008d87c;
  /* 1008d88a sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1008d88c cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008d88e sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1008d890 and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1008d893 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1008d895 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1008d897 xchg al, ah */
  { uint32_t _t=(AL); AL = (AH); AH = (_t); }
  /* 1008d899 sub al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a-_b; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1008d89b cmp al, 0x1a */
  { uint32_t _a=(AL),_b=(0x1au),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008d89d sbb cl, cl */
  { uint32_t _a=(CL),_b=(CL),_r=_a-_b-C.cf; CL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1008d89f and cl, 0x20 */
  { uint32_t _r=(CL)&(0x20u); CL = (_r); fl_logic(_r,8); }
  /* 1008d8a2 add al, cl */
  { uint32_t _a=(AL),_b=(CL),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1008d8a4 add al, 0x41 */
  { uint32_t _a=(AL),_b=(0x41u),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
  /* 1008d8a6 cmp al, ah */
  { uint32_t _a=(AL),_b=(AH),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008d8a8 je 0x1008d87c */
  if (C.zf) goto L_1008d87c;
  /* 1008d8aa sbb al, al */
  { uint32_t _a=(AL),_b=(AL),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
  /* 1008d8ac sbb al, 0xff */
  { uint32_t _a=(AL),_b=(0xffu),_r=_a-_b-C.cf; AL = (_r); fl_sub(_a,_b,_r,8); }
L_1008d8ae:;
  /* 1008d8ae movsx eax, al */
  EAX = ((uint32_t)(int32_t)(int8_t)(AL));
  /* 1008d8b1 jmp 0x1008d92b */
  goto L_1008d92b;
L_1008d8b3:;
  /* 1008d8b3 lock inc dword ptr [0x100969f4] */
  x86_unimpl("lock inc @ 0x1008d8b3");
  /* 1008d8ba cmp dword ptr [0x100969f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x100969f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008d8c1 jg 0x1008d8c7 */
  if ((!C.zf&&C.sf==C.of)) goto L_1008d8c7;
  /* 1008d8c3 push 0 */
  push32((uint32_t)(0x0u));
  /* 1008d8c5 jmp 0x1008d8dc */
  goto L_1008d8dc;
L_1008d8c7:;
  /* 1008d8c7 lock dec dword ptr [0x100969f4] */
  x86_unimpl("lock dec @ 0x1008d8c7");
  /* 1008d8ce push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1008d8d0 call 0x1008a053 */
  push32(0x1008d8d5u); f_1008a053();
  /* 1008d8d5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
L_1008d8dc:;
  /* 1008d8dc mov eax, 0xff */
  EAX = (0xffu);
  /* 1008d8e1 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1008d8e3 nop  */
  /* nop */
L_1008d8e4:;
  /* 1008d8e4 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1008d8e6 je 0x1008d90f */
  if (C.zf) goto L_1008d90f;
  /* 1008d8e8 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1008d8ea inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1008d8eb mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1008d8ed inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1008d8ee cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008d8f0 je 0x1008d8e4 */
  if (C.zf) goto L_1008d8e4;
  /* 1008d8f2 push eax */
  push32((uint32_t)(EAX));
  /* 1008d8f3 push ebx */
  push32((uint32_t)(EBX));
  /* 1008d8f4 call 0x100894ef */
  push32(0x1008d8f9u); f_100894ef();
  /* 1008d8f9 mov ebx, eax */
  EBX = (EAX);
  /* 1008d8fb add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008d8fe call 0x100894ef */
  push32(0x1008d903u); f_100894ef();
  /* 1008d903 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008d906 cmp bl, al */
  { uint32_t _a=(BL),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008d908 je 0x1008d8e4 */
  if (C.zf) goto L_1008d8e4;
  /* 1008d90a sbb eax, eax */
  { uint32_t _a=(EAX),_b=(EAX),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
  /* 1008d90c sbb eax, -1 */
  { uint32_t _a=(EAX),_b=(0xffffffffu),_r=_a-_b-C.cf; EAX = (_r); fl_sub(_a,_b,_r,32); }
L_1008d90f:;
  /* 1008d90f mov ebx, eax */
  EBX = (EAX);
  /* 1008d911 pop eax */
  EAX = (pop32());
  /* 1008d912 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1008d914 jne 0x1008d91f */
  if (!C.zf) goto L_1008d91f;
  /* 1008d916 lock dec dword ptr [0x100969f4] */
  x86_unimpl("lock dec @ 0x1008d916");
  /* 1008d91d jmp 0x1008d929 */
  goto L_1008d929;
L_1008d91f:;
  /* 1008d91f push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1008d921 call 0x1008a0b4 */
  push32(0x1008d926u); f_1008a0b4();
  /* 1008d926 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
L_1008d929:;
  /* 1008d929 mov eax, ebx */
  EAX = (EBX);
L_1008d92b:;
  /* 1008d92b pop ebx */
  EBX = (pop32());
  /* 1008d92c pop esi */
  ESI = (pop32());
  /* 1008d92d pop edi */
  EDI = (pop32());
  /* 1008d92e leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1008d92f ret  */
  ESPCHK(0x1008d860u, _esp0);
  ESP += 4; return;
}

/* FUN_1000d930 @ 0x1008d930 (257 bytes, 103 insns) */
void f_1008d930(void) {
  FTRACE(0x1008d930u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008d930 push ebp */
  push32((uint32_t)(EBP));
  /* 1008d931 mov ebp, esp */
  EBP = (ESP);
  /* 1008d933 push edi */
  push32((uint32_t)(EDI));
  /* 1008d934 push esi */
  push32((uint32_t)(ESI));
  /* 1008d935 push ebx */
  push32((uint32_t)(EBX));
  /* 1008d936 mov ecx, dword ptr [ebp + 0x10] */
  ECX = (r32((uint32_t)(EBP + 0x10)));
  /* 1008d939 or ecx, ecx */
  { uint32_t _r=(ECX)|(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1008d93b je 0x1008da2a */
  if (C.zf) goto L_1008da2a;
  /* 1008d941 mov esi, dword ptr [ebp + 8] */
  ESI = (r32((uint32_t)(EBP + 0x8)));
  /* 1008d944 mov edi, dword ptr [ebp + 0xc] */
  EDI = (r32((uint32_t)(EBP + 0xc)));
  /* 1008d947 lea eax, [0x10096870] */
  EAX = ((uint32_t)(0x10096870));
  /* 1008d94d cmp dword ptr [eax + 8], 0 */
  { uint32_t _a=(r32((uint32_t)(EAX + 0x8))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008d951 jne 0x1008d9a1 */
  if (!C.zf) goto L_1008d9a1;
  /* 1008d953 mov bh, 0x41 */
  C.b.b.h = (0x41u);
  /* 1008d955 mov bl, 0x5a */
  BL = (0x5au);
  /* 1008d957 mov dh, 0x20 */
  C.d.b.h = (0x20u);
  /* 1008d959 lea ecx, [ecx] */
  ECX = ((uint32_t)(ECX));
L_1008d95c:;
  /* 1008d95c mov ah, byte ptr [esi] */
  AH = (r8((uint32_t)(ESI)));
  /* 1008d95e or ah, ah */
  { uint32_t _r=(AH)|(AH); AH = (_r); fl_logic(_r,8); }
  /* 1008d960 mov al, byte ptr [edi] */
  AL = (r8((uint32_t)(EDI)));
  /* 1008d962 je 0x1008d985 */
  if (C.zf) goto L_1008d985;
  /* 1008d964 or al, al */
  { uint32_t _r=(AL)|(AL); AL = (_r); fl_logic(_r,8); }
  /* 1008d966 je 0x1008d985 */
  if (C.zf) goto L_1008d985;
  /* 1008d968 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1008d969 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1008d96a cmp ah, bh */
  { uint32_t _a=(AH),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008d96c jb 0x1008d974 */
  if (C.cf) goto L_1008d974;
  /* 1008d96e cmp ah, bl */
  { uint32_t _a=(AH),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008d970 ja 0x1008d974 */
  if ((!C.cf&&!C.zf)) goto L_1008d974;
  /* 1008d972 add ah, dh */
  { uint32_t _a=(AH),_b=(C.d.b.h),_r=_a+_b; AH = (_r); fl_add(_a,_b,_r,8); }
L_1008d974:;
  /* 1008d974 cmp al, bh */
  { uint32_t _a=(AL),_b=(C.b.b.h),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008d976 jb 0x1008d97e */
  if (C.cf) goto L_1008d97e;
  /* 1008d978 cmp al, bl */
  { uint32_t _a=(AL),_b=(BL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008d97a ja 0x1008d97e */
  if ((!C.cf&&!C.zf)) goto L_1008d97e;
  /* 1008d97c add al, dh */
  { uint32_t _a=(AL),_b=(C.d.b.h),_r=_a+_b; AL = (_r); fl_add(_a,_b,_r,8); }
L_1008d97e:;
  /* 1008d97e cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008d980 jne 0x1008d98f */
  if (!C.zf) goto L_1008d98f;
  /* 1008d982 dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1008d983 jne 0x1008d95c */
  if (!C.zf) goto L_1008d95c;
L_1008d985:;
  /* 1008d985 xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1008d987 cmp ah, al */
  { uint32_t _a=(AH),_b=(AL),_r=_a-_b; fl_sub(_a,_b,_r,8); }
  /* 1008d989 je 0x1008da2a */
  if (C.zf) goto L_1008da2a;
L_1008d98f:;
  /* 1008d98f mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 1008d994 jb 0x1008da2a */
  if (C.cf) goto L_1008da2a;
  /* 1008d99a neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
  /* 1008d99c jmp 0x1008da2a */
  goto L_1008da2a;
L_1008d9a1:;
  /* 1008d9a1 lock inc dword ptr [0x100969f4] */
  x86_unimpl("lock inc @ 0x1008d9a1");
  /* 1008d9a8 cmp dword ptr [0x100969f0], 0 */
  { uint32_t _a=(r32((uint32_t)(0x100969f0))),_b=(0x0u),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008d9af jg 0x1008d9b5 */
  if ((!C.zf&&C.sf==C.of)) goto L_1008d9b5;
  /* 1008d9b1 push 0 */
  push32((uint32_t)(0x0u));
  /* 1008d9b3 jmp 0x1008d9ce */
  goto L_1008d9ce;
L_1008d9b5:;
  /* 1008d9b5 lock dec dword ptr [0x100969f4] */
  x86_unimpl("lock dec @ 0x1008d9b5");
  /* 1008d9bc mov ebx, ecx */
  EBX = (ECX);
  /* 1008d9be push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1008d9c0 call 0x1008a053 */
  push32(0x1008d9c5u); f_1008a053();
  /* 1008d9c5 mov dword ptr [esp], 1 */
  w32((uint32_t)(ESP), (0x1u));
  /* 1008d9cc mov ecx, ebx */
  ECX = (EBX);
L_1008d9ce:;
  /* 1008d9ce xor eax, eax */
  { uint32_t _r=(EAX)^(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1008d9d0 xor ebx, ebx */
  { uint32_t _r=(EBX)^(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1008d9d2 mov edi, edi */
  EDI = (EDI);
L_1008d9d4:;
  /* 1008d9d4 mov al, byte ptr [esi] */
  AL = (r8((uint32_t)(ESI)));
  /* 1008d9d6 or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1008d9d8 mov bl, byte ptr [edi] */
  BL = (r8((uint32_t)(EDI)));
  /* 1008d9da je 0x1008d9ff */
  if (C.zf) goto L_1008d9ff;
  /* 1008d9dc or ebx, ebx */
  { uint32_t _r=(EBX)|(EBX); EBX = (_r); fl_logic(_r,32); }
  /* 1008d9de je 0x1008d9ff */
  if (C.zf) goto L_1008d9ff;
  /* 1008d9e0 inc esi */
  { uint32_t _r=(ESI)+1; ESI = (_r); fl_inc(_r,32); }
  /* 1008d9e1 inc edi */
  { uint32_t _r=(EDI)+1; EDI = (_r); fl_inc(_r,32); }
  /* 1008d9e2 push ecx */
  push32((uint32_t)(ECX));
  /* 1008d9e3 push eax */
  push32((uint32_t)(EAX));
  /* 1008d9e4 push ebx */
  push32((uint32_t)(EBX));
  /* 1008d9e5 call 0x100894ef */
  push32(0x1008d9eau); f_100894ef();
  /* 1008d9ea mov ebx, eax */
  EBX = (EAX);
  /* 1008d9ec add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008d9ef call 0x100894ef */
  push32(0x1008d9f4u); f_100894ef();
  /* 1008d9f4 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008d9f7 pop ecx */
  ECX = (pop32());
  /* 1008d9f8 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008d9fa jne 0x1008da05 */
  if (!C.zf) goto L_1008da05;
  /* 1008d9fc dec ecx */
  { uint32_t _r=(ECX)-1; ECX = (_r); fl_dec(_r,32); }
  /* 1008d9fd jne 0x1008d9d4 */
  if (!C.zf) goto L_1008d9d4;
L_1008d9ff:;
  /* 1008d9ff xor ecx, ecx */
  { uint32_t _r=(ECX)^(ECX); ECX = (_r); fl_logic(_r,32); }
  /* 1008da01 cmp eax, ebx */
  { uint32_t _a=(EAX),_b=(EBX),_r=_a-_b; fl_sub(_a,_b,_r,32); }
  /* 1008da03 je 0x1008da0e */
  if (C.zf) goto L_1008da0e;
L_1008da05:;
  /* 1008da05 mov ecx, 0xffffffff */
  ECX = (0xffffffffu);
  /* 1008da0a jb 0x1008da0e */
  if (C.cf) goto L_1008da0e;
  /* 1008da0c neg ecx */
  { uint32_t _a=(ECX),_r=0u-_a; ECX = (_r); fl_sub(0,_a,_r,32); }
L_1008da0e:;
  /* 1008da0e pop eax */
  EAX = (pop32());
  /* 1008da0f or eax, eax */
  { uint32_t _r=(EAX)|(EAX); EAX = (_r); fl_logic(_r,32); }
  /* 1008da11 jne 0x1008da1c */
  if (!C.zf) goto L_1008da1c;
  /* 1008da13 lock dec dword ptr [0x100969f4] */
  x86_unimpl("lock dec @ 0x1008da13");
  /* 1008da1a jmp 0x1008da2a */
  goto L_1008da2a;
L_1008da1c:;
  /* 1008da1c mov ebx, ecx */
  EBX = (ECX);
  /* 1008da1e push 0x13 */
  push32((uint32_t)(0x13u));
  /* 1008da20 call 0x1008a0b4 */
  push32(0x1008da25u); f_1008a0b4();
  /* 1008da25 add esp, 4 */
  { uint32_t _a=(ESP),_b=(0x4u),_r=_a+_b; ESP = (_r); fl_add(_a,_b,_r,32); }
  /* 1008da28 mov ecx, ebx */
  ECX = (EBX);
L_1008da2a:;
  /* 1008da2a mov eax, ecx */
  EAX = (ECX);
  /* 1008da2c pop ebx */
  EBX = (pop32());
  /* 1008da2d pop esi */
  ESI = (pop32());
  /* 1008da2e pop edi */
  EDI = (pop32());
  /* 1008da2f leave  */
  ESP = EBP;
  EBP = pop32();
  /* 1008da30 ret  */
  ESPCHK(0x1008d930u, _esp0);
  ESP += 4; return;
}

/* RtlUnwind @ 0x1008da74 (6 bytes, 1 insns) */
void f_1008da74(void) {
  FTRACE(0x1008da74u);
  uint32_t _esp0 = ESP; (void)_esp0;
  /* 1008da74 jmp dword ptr [0x1008e0cc] */
  jmp_ind((uint32_t)(r32((uint32_t)(0x1008e0cc)))); return;
}

